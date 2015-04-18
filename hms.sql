-- phpMyAdmin SQL Dump
-- version 4.1.14
-- http://www.phpmyadmin.net
--
-- Host: 127.0.0.1
-- Generation Time: Apr 08, 2015 at 11:39 PM
-- Server version: 5.6.17
-- PHP Version: 5.5.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `hms`
--

-- --------------------------------------------------------

--
-- Table structure for table `building`
--

CREATE TABLE IF NOT EXISTS `building` (
  `b_id` int(11) NOT NULL,
  `b_name` varchar(45) NOT NULL,
  `streer_no` varchar(45) NOT NULL,
  `streert_name` varchar(45) NOT NULL,
  `building_num` varchar(45) NOT NULL,
  `num_of_floor` varchar(45) NOT NULL,
  `num_of_room` varchar(45) NOT NULL,
  `room_code` varchar(45) NOT NULL,
  `capacity_of_room` varchar(45) NOT NULL,
  `floor_num` varchar(45) NOT NULL,
  PRIMARY KEY (`b_id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `fines_penalties`
--

CREATE TABLE IF NOT EXISTS `fines_penalties` (
  `fp_id` int(11) NOT NULL,
  `type` varchar(45) NOT NULL,
  `value` varchar(45) NOT NULL,
  `status` varchar(45) NOT NULL,
  `reason` varchar(45) NOT NULL,
  PRIMARY KEY (`fp_id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `per`
--

CREATE TABLE IF NOT EXISTS `per` (
  `per_name` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `permission`
--

CREATE TABLE IF NOT EXISTS `permission` (
  `permission_id` int(11) NOT NULL,
  `permission_name` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`permission_id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `permission`
--

INSERT INTO `permission` (`permission_id`, `permission_name`) VALUES
(1, 'Housing Request'),
(2, 'Move Request'),
(3, 'Renew Request'),
(4, 'View Penalties/Fines'),
(5, 'send Daily Documents'),
(6, 'send Special Needs Housing	'),
(7, 'View Housing Request'),
(8, 'Accept/Reject Student in House'),
(9, 'View Daily Documents'),
(10, 'View Special Needs Housing'),
(11, 'Fill Penalties/Fines');

-- --------------------------------------------------------

--
-- Table structure for table `request`
--

CREATE TABLE IF NOT EXISTS `request` (
  `request_id` int(11) NOT NULL,
  `type` varchar(45) NOT NULL,
  `status` varchar(45) NOT NULL,
  `text` varchar(45) DEFAULT NULL,
  `date` date NOT NULL,
  `room_capacity` int(11) DEFAULT NULL,
  `user_id` int(11) DEFAULT NULL,
  `building_name` varchar(45) DEFAULT NULL,
  `building_b_id` int(11) DEFAULT NULL,
  PRIMARY KEY (`request_id`),
  KEY `user_id` (`user_id`),
  KEY `building_b_id` (`building_b_id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `role`
--

CREATE TABLE IF NOT EXISTS `role` (
  `role_id` int(11) NOT NULL AUTO_INCREMENT,
  `role_name` varchar(45) NOT NULL,
  PRIMARY KEY (`role_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=4 ;

--
-- Dumping data for table `role`
--

INSERT INTO `role` (`role_id`, `role_name`) VALUES
(1, 'student'),
(2, 'supervisor'),
(3, 'housing department');

-- --------------------------------------------------------

--
-- Table structure for table `role_has_permission`
--

CREATE TABLE IF NOT EXISTS `role_has_permission` (
  `role_role_id` int(11) NOT NULL,
  `permission_permission_id` int(11) NOT NULL,
  PRIMARY KEY (`role_role_id`,`permission_permission_id`),
  KEY `fk_role_has_permission_permission1_idx` (`permission_permission_id`),
  KEY `fk_role_has_permission_role1_idx` (`role_role_id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `role_has_permission`
--

INSERT INTO `role_has_permission` (`role_role_id`, `permission_permission_id`) VALUES
(1, 1),
(1, 2),
(1, 3),
(1, 4),
(1, 5),
(2, 6),
(2, 7),
(3, 8),
(3, 9),
(3, 10),
(1, 11),
(3, 11);

-- --------------------------------------------------------

--
-- Table structure for table `student_profile`
--

CREATE TABLE IF NOT EXISTS `student_profile` (
  `national_id` int(11) NOT NULL,
  `date_of_birth` varchar(45) NOT NULL,
  `place_of_birth` varchar(45) NOT NULL,
  `religion` varchar(45) NOT NULL,
  `nationality` varchar(45) NOT NULL,
  `faculty` varchar(45) NOT NULL,
  `department` varchar(45) NOT NULL,
  `guardian_name` varchar(45) NOT NULL,
  `guardian_phone` varchar(45) NOT NULL,
  PRIMARY KEY (`national_id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `user`
--

CREATE TABLE IF NOT EXISTS `user` (
  `id` int(11) NOT NULL,
  `first_name` varchar(45) NOT NULL,
  `middle_name` varchar(45) NOT NULL,
  `last_name` varchar(45) NOT NULL,
  `city` varchar(45) NOT NULL,
  `state` varchar(45) NOT NULL,
  `residential_area` varchar(45) DEFAULT NULL,
  `phone` varchar(45) DEFAULT NULL,
  `fines_penalties_fp_id` int(11) DEFAULT NULL,
  `building_b_id` int(11) DEFAULT NULL,
  `student_profile_national_id` int(11) DEFAULT NULL,
  `pass` varchar(45) NOT NULL,
  PRIMARY KEY (`id`),
  KEY `fk_user_fines_penalties1_idx` (`fines_penalties_fp_id`),
  KEY `fk_user_building1_idx` (`building_b_id`),
  KEY `fk_user_student_profile1_idx` (`student_profile_national_id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `user`
--

INSERT INTO `user` (`id`, `first_name`, `middle_name`, `last_name`, `city`, `state`, `residential_area`, `phone`, `fines_penalties_fp_id`, `building_b_id`, `student_profile_national_id`, `pass`) VALUES
(3113714, 'Samah', 'Taj', 'Shaat', 'aqaba', 'aqaba', '            ', '            ', NULL, NULL, NULL, '123'),
(3113760, 'Sokaina', 'Mousa', 'Alhtibat', 'aqaba', 'aqaba', '            ', '            ', NULL, NULL, NULL, '456');

-- --------------------------------------------------------

--
-- Table structure for table `user_has_role`
--

CREATE TABLE IF NOT EXISTS `user_has_role` (
  `user_id` int(11) NOT NULL,
  `role_role_id` int(11) NOT NULL,
  PRIMARY KEY (`user_id`,`role_role_id`),
  KEY `fk_user_has_role_role1_idx` (`role_role_id`),
  KEY `fk_user_has_role_user1_idx` (`user_id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `user_has_role`
--

INSERT INTO `user_has_role` (`user_id`, `role_role_id`) VALUES
(3113714, 1),
(3113760, 1);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `request`
--
ALTER TABLE `request`
  ADD CONSTRAINT `request_ibfk_2` FOREIGN KEY (`building_b_id`) REFERENCES `user` (`id`),
  ADD CONSTRAINT `request_ibfk_1` FOREIGN KEY (`user_id`) REFERENCES `user` (`id`);

--
-- Constraints for table `role_has_permission`
--
ALTER TABLE `role_has_permission`
  ADD CONSTRAINT `fk_role_has_permission_permission1` FOREIGN KEY (`permission_permission_id`) REFERENCES `permission` (`permission_id`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  ADD CONSTRAINT `fk_role_has_permission_role1` FOREIGN KEY (`role_role_id`) REFERENCES `role` (`role_id`) ON DELETE NO ACTION ON UPDATE NO ACTION;

--
-- Constraints for table `user`
--
ALTER TABLE `user`
  ADD CONSTRAINT `fk_user_building1` FOREIGN KEY (`building_b_id`) REFERENCES `building` (`b_id`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  ADD CONSTRAINT `fk_user_fines_penalties1` FOREIGN KEY (`fines_penalties_fp_id`) REFERENCES `fines_penalties` (`fp_id`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  ADD CONSTRAINT `fk_user_student_profile1` FOREIGN KEY (`student_profile_national_id`) REFERENCES `student_profile` (`national_id`) ON DELETE NO ACTION ON UPDATE NO ACTION;

--
-- Constraints for table `user_has_role`
--
ALTER TABLE `user_has_role`
  ADD CONSTRAINT `fk_user_has_role_role1` FOREIGN KEY (`role_role_id`) REFERENCES `role` (`role_id`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  ADD CONSTRAINT `fk_user_has_role_user1` FOREIGN KEY (`user_id`) REFERENCES `user` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
