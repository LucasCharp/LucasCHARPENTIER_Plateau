# LucasCHARPENTIER_Plateau

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