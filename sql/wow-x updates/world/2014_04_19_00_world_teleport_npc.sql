DELETE FROM `creature_template` WHERE entry = '999007';
INSERT INTO `creature_template` VALUES (999007, 0, 0, 0, 0, 0, 31572, 0, 0, 0, 'Teleport Master', 'World Portal', NULL, 0, 10, 10, 0, 0, 35, 35, 1, 1, 1.14286, 1, 0, 24.7, 32.3, 0, 80, 1, 2000, 0, 1, 512, 2048, 2048, 0, 0, 0, 0, 17.1, 24.7, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 3, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 2, 'npc_teleport', 12340);


DELETE FROM npc_text WHERE ID='400000';
INSERT INTO npc_text (ID, text0_0, em0_1) VALUES
('400000', '$B |cffFF0000<---------|cff0000FFWoW-X Teleporter!|cffFF0000--------->$B', 6);
