BEGIN TRANSACTION;

INSERT INTO ProjetPOO.dbo.Commande (reference, paiement_valide, date_envois, date_paiement, moyen_paiement, total_articles_achetes, ID_Client)
VALUES (@ref, @valide, @envoi, @paiement, @moyen, @total, @ID_Client);

INSERT INTO ProjetPOO.dbo.concerner (ID_Commande, ID_Produit, quantite_produit) 
VALUES ((SELECT MAX(ID) FROM ProjetPOO.dbo.Commande), (SELECT ID FROM ProjetPOO.dbo.Produit WHERE designation = @produit), @qte);

COMMIT;