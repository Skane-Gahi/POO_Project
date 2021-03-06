BEGIN TRANSACTION

DECLARE @MyCounter INT;
SET @MyCounter = 0;
SET @MyCounter = (SELECT COUNT(*)AS [c] FROM ProjetPOO.dbo.concerner)

SELECT (Panier_moyen/@MyCounter) AS [Panier moyen] FROM
(SELECT SUM(cmd_pdt.Prix_TTC) AS [Panier_moyen]
FROM
(SELECT ID_Produit, ID_Commande, quantite_produit, (pdt.[Prix TTC]*quantite_produit) AS [Prix_TTC] FROM ProjetPOO.dbo.concerner
INNER JOIN (SELECT ID, (prix_HT + (taux_TVA_produit/100)) AS [Prix TTC] FROM ProjetPOO.dbo.Produit) AS pdt
ON concerner.ID_produit = pdt.ID) AS cmd_pdt) AS cmd_pdt1


COMMIT