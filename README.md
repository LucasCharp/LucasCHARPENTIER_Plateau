# LucasCHARPENTIER_Plateau

Lien du OPC : https://docs.google.com/document/d/1E3LEzGkC3f80BfDO9emmpftl2IjCLsiqhEJVVkkgqsE/edit#heading=h.ygqgup1yr5cm

---------------------------PREMIER PUSH----------------------------------------------------

24/11

J'ai modifié le code des cartes en C++ pour l'adapter à mes coffres. J'ai aussi ajouté les assets
de coffres et de sable pour la map memory.

---------------------------DEUXIEME PUSH----------------------------------------------------

24/11

Ajout de la case qui amène au mini-jeu, des numéros de cases et du widget d'explication au début de la
partie. J'ai esssayé d'ajouter la possibilité de jouer à 4 mais j'ai pas fini.

---------------------------TROISIEME PUSH----------------------------------------------------

26/11

Ajout du mode 4 joueurs sélectionnable au début de la partie. Pour ça, j'ai créé un widget qui
a un bouton qui change le nombre de joueur. Le nombre de joueur est une variable que j'ai mis
dans le GameInstance afin que le jeu soit toujours au courant de ce nombre. Ensuite, j'ai juste eu
a placé la variable a tous les endroits où l'on avait temporairement mis un 2 pendant les cours.
(vu que le code était conçu pour 2 uniquement).

---------------------------QUATRIEME PUSH----------------------------------------------------

26/11

Ajout du chiffre au dessus de la tête des joueurs. J'ai modifié le ActualPlayerID pour qu'il se mette
à jour quand on va dans une map mini-jeu. Avant, quand on revenait sur la map après avoir fini un 
mini-jeu, le ActualPlayerID se remettait à 0 et c'était donc le tour du joueur 1. Maintenant, je
sauvegarde la variable dans le game instance afin que l'ordre de passage ne se réintialise pas.

---------------------------CINQUIEME PUSH----------------------------------------------------

26/11

J'ai ajouté le fait que le numéro du dé apparait quand on le lance. Pour ça, il m'a juste fallu
ajouté un widget avec une image au centre puis dans role a dice à la fin je change l'image du dé
selon le ActualNumberDice. J'ai juste du modifié le fait que RollADiceAndMove soit une fonction
car je ne pouvais pas mettre de délai entre le moment où le dé apparait et celui où il disparait et 
fait avancer les joueurs. J'ai donc créé un custom event RollADiceAndMove qui lance la fonction
RollDice puis 3 secondes plus tard lance la fonction removeDiceWidget et la fonction MoveChara, qui 
est juste l'ancienne fonction RollADiceAndMove dans laquelle j'ai enlevé le node RollDice au début.