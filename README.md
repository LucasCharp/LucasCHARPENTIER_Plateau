# LucasCHARPENTIER_Plateau

Lien du OPC : https://docs.google.com/document/d/1E3LEzGkC3f80BfDO9emmpftl2IjCLsiqhEJVVkkgqsE/edit#heading=h.ygqgup1yr5cm

J'ai eu que des galères dans l'importation des assets. Pour une raison que j'ignore entre le passage de Unity à Unreal
toutes mes normal et certaines textures Roughness étaient cassées. J'ai ensuite découverts que celles qui ont un 
problème sont les textures qui étaient en .EXR au lieu de .JPG. Je savais pas comment régler le problème facilement
donc j'ai ouvert chaque fichier EXR sur Photoshop et je l'ai exporté en png sur Unreal. Je suis pas sûr de l'avoir
fait sur tous donc c'est "normal" que certains ont pas de Normal ou de Roughness.

Ensuite ça a été impossible de faire que Unity rendent aussi bien qu'Unreal. J'ai essayé de mettre uniquement des points
lights, ensuite de mettre la directional light à un certain degrès mais il y avait aucune solution satifaisante. Du coup
on voit clairement une différence entre les deux images. J'ai quand même essayé de rendre Unreal plus moche afin que 
ça ressemble à Unity.

J'ai pas réussi à faire que l'opacity masked de la plante marche bien sur Unity.

Quand j'ai importé le vase de Unity à Unreal il avait perdu son matérial. J'ai essayé plusieurs fois de le réimporter
il y avait rien à faire. Au final j'ai recréer un material de 0 et j'ai suivi un tuto pour faire en sorte que ça ressemble
le plus que possible à du verre.

Au final, le résultat est pas dingue mais malgré tout je suis content de la façon dont j'ai réussi à limiter la casse parce que 
3 heures plus tôt, j'étais vraiment au bout du rouleau.

Désolé pour les fautes, il est tard je suis fatigué.