DELETE FROM `command` WHERE permission IN (800,801);
INSERT INTO `command` VALUES
('duel', 800, 'Syntax: .stuck\r\n\r\nPorts you to homebinds.'),
('stuck', 801, 'Syntax: .duel\r\n\r\nPorts you to global duel zone.');
