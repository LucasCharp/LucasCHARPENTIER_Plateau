# LucasCHARPENTIER_Plateau

Lien du OPC : https://docs.google.com/document/d/1E3LEzGkC3f80BfDO9emmpftl2IjCLsiqhEJVVkkgqsE/edit#heading=h.ygqgup1yr5cm

---------------------------PREMIER PUSH----------------------------------------------------

Je viens de finir la condition de fin de mon jeu. J'avais oublié de le marquer dans mon OPC
mais dans mon jeu, il suffit juste d'atteindre la case finale pour gagner. J'ai fait car
mon plateau est long donc pas la peine de faire durer le jeu avec des aller-retour.

Pour coder cette mécanique, j'ai mis un "if" juste avant de définir la position du joueur dans
le GameMode. Il vérifie si la case sur laquelle va aller le joueur est comprise dans le plateau 
ou si elle est en dehors (ou que c'est la case finale). Si c'est le deuxième cas, alors le joueur
se retrouvera sur la case finale, sinon le joueur applique le même comportement que l'on a codé
en cours. J'ai rajouté une variable qui s'appelle "Number Of Board Cells" dans le BeginPlay et 
qui donne le nombre de case sur le plateau pour rendre le code plus lisible. En bonus, j'ai 
commencé à faire un widget qui apparait quand on tombe sur la case et qui permet de recommencer
la partie ou de quitter. Il ne marche pas encore et n'apparait pas, je le finirai plus tard.

---------------------------DEUXIÈME PUSH---------------------------------------------------

J'ai ajouter le second joueur. Pour l'instant vu qu'il n'y a rien dans le jeu, le tour du
joueur 2 se lance quand celui du joueur 1 est fini. Comme il n'y a pas d'animation ou
d'indication visuelle qui indique un changement de tour on a visuellement l'impression que 
les joueurs jouent en même temps mais c'est faux. Pour ajouter le joueur 2 j'ai seulement
modifié le code que l'on avait afin qu'il soit applicable pour plus de joueur. Le seul truc
que j'ai ajouté c'est le PB_Pion1 et BP_Pion2 qui sont des child du BP_Pion.

J'ai créé une variable qui donne le nombre de joueurs dans la partie en se basant sur la 
taille de la PlayerList présente dans le Game Instance. J'ai ensuite utilisé cette variable
et je l'ai relié à un loop afin que le code soit répété pour le nombre de joueurs présents.
J'ai ensuite relié l'index du loop au Player Id en Input des fonctions comme ça le code
s'applique pour un pion différent à chaque loop. Le seul défaut de la loop et que on ne 
peut pas changer l'ordre de passage des joueurs.

Là où j'ai le plus coincé, c'est pour faire apparaitre les deux joueurs. En effet, on utilise
normalement un Spawn Actor et on rentre le nom de notre acteur. Sauf que là, on ne pouvait pas
car il faut plusieurs acteurs. Au début, j'ai pensé à faire une liste d'acteur mais en faisant
ça, il n'était pas associé à un Player Id en particulier. J'ai alors opté pour le fait d'ajouter
une variable dans la Player List qui associe chaque joueur à un Acteur. Comme ils sont tous
des childs de BP_Pion, il ne reste plus qu'à les mettre dans une liste après qu'on les ait fait
spawn. J'ai juste réutilisé la variable Pion et j'en ai fait un array.

J'ai toujours pas fini le widget de fin, je le ferai au prochain push maintenant que j'ai fini les
tâches de base.








