BEGIN TRANSACTION;

SELECT Concerner.ID_Commande, reference AS [Référence], paiement_valide AS [Paiment validé], 
date_envois AS [Date d'envoi], date_paiement AS [Date de paiement], moyen_paiement AS [Moyen de paiment], 
total_articles_achetes AS [Nombre d'articles achetés],
Concerner.ID_Produit, pdt.designation AS [Produit], Concerner.quantite_produit AS [Quantité]
FROM ProjetPOO.dbo.concerner

INNER JOIN ProjetPOO.dbo.Commande 
ON (concerner.ID_Commande = Commande.ID)

INNER JOIN (SELECT ID, designation FROM ProjetPOO.dbo.Produit) AS pdt
ON (concerner.ID_Produit = pdt.ID);

COMMIT;
