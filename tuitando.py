#! /usr/bin/env python3
#
# Tarefa de laboratorio 01 - Tuitando
#
# GEX605 AB 2020/1
#
# Nome:      XXXX
# Matricula: XXXX
#
# Data:      23/09/2020
#
# Descricao: Este programa confere se um texto vai caber em um tuite.
#
# Entrada:   Uma linha de texto T (1 <= |T| <= 500).
#
# Saida:     TWEET se a linha de texto T tem ate 140 caracteres;
#            MUTE  caso contrario.
#

tweet=input()

if len(tweet) > 140:
    print("MUTE")
else:
    print("TWEET")

