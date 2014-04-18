DELETE FROM `rbac_permissions` WHERE id IN (800,801);
INSERT INTO `rbac_permissions` VALUES
(800, 'Command: duel'),
(801, 'Command: stuck');

DELETE FROM `rbac_linked_permissions` WHERE linkedId IN (800,801);
INSERT INTO `rbac_linked_permissions` VALUES
(195, 800),
(195, 801);