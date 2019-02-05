#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  robot01.py
import rg
# 192.168.3.10:8000


class Robot:

    def znajdz_wrogow_2(self, game, wrogowie2):
        for poz, robot in game.robots.iteritems():
            if robot.player_id != self.player_id:
                if rg.wdist(poz, self.location) == 2:
                    wrogowie2.append(poz)

    def czy_wejscie(self, poz):
        print(rg.loc_types(poz))
        if 'spawn' in rg.loc_types(poz):
            return True
        return False

    def czy_wrog(self, game, poz):
        if game.robots.get(poz) and \
           game.robots[poz].player_id != self.player_id:
            return True
        return False

    def znajdz_wrogow_obok(self, game, wrogowie, bezpieczne):
        for poz in rg.locs_around(self.location,
                                  filter_out=('invalid', 'obstacle')):
            if game.robots.get(poz) and \
               game.robots[poz].player_id != self.player_id:
                wrogowie.append(poz)
            elif not self.czy_wejscie(poz):
                bezpieczne.append(poz)

    def czy_atak(self, wrogowie):
        ilu = len(wrogowie)
        if ilu == 1 and self.hp > 10:
            return True
        elif ilu == 2 and self.hp > 20:
            return True
        return False

    def act(self, game):
        dzialanie = ['guard']
        wrogowie = []
        wrogowie2 = []
        bezpieczne = []

        self.znajdz_wrogow_obok(game, wrogowie, bezpieczne)
        self.znajdz_wrogow_2(game, wrogowie2)

        print(wrogowie2)

        if self.czy_wejscie(self.location):
            dzialanie = ['move', rg.toward(self.location, rg.CENTER_POINT)]

        if wrogowie and self.czy_atak(wrogowie):
            dzialanie = ['attack', wrogowie.pop()]
        elif bezpieczne:
            dzialanie = ['move', bezpieczne.pop()]
        else:
            dzialanie = ['suicide']

        # ~if self.location != rg.CENTER_POINT:
            # ~dzialanie = ['move', rg.toward(self.location, rg.CENTER_POINT)]

        if len(wrogowie) == 1 and self.hp > 10:
            dzialanie = ['attack', wrogowie[0]]

        return dzialanie
