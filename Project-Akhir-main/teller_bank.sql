-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Nov 22, 2023 at 01:27 PM
-- Server version: 10.4.28-MariaDB
-- PHP Version: 8.2.4

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `teller bank`
--

-- --------------------------------------------------------

--
-- Table structure for table `account`
--

CREATE TABLE `account` (
  `account_number` char(15) NOT NULL,
  `username` varchar(30) NOT NULL,
  `bank_name` varchar(30) NOT NULL,
  `balance` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `transaction`
--

CREATE TABLE `transaction` (
  `transaction_id` char(15) NOT NULL,
  `senderAccount_num` char(15) NOT NULL,
  `receiverAccount_num` char(15) NOT NULL,
  `senderBank_name` varchar(30) NOT NULL,
  `receiverBank_name` varchar(30) NOT NULL,
  `senderUsername` varchar(30) NOT NULL,
  `receiverUsername` varchar(30) NOT NULL,
  `date` date DEFAULT NULL,
  `time` time NOT NULL,
  `nominal` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `user`
--

CREATE TABLE `user` (
  `name` varchar(40) NOT NULL,
  `NIK` char(16) NOT NULL,
  `user_name` varchar(40) DEFAULT NULL,
  `address` varchar(40) NOT NULL,
  `phone_number` char(12) NOT NULL,
  `date_of_birth` date NOT NULL,
  `password` varchar(40) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `user`
--

INSERT INTO `user` (`name`, `NIK`, `user_name`, `address`, `phone_number`, `date_of_birth`, `password`) VALUES
('Auladi Fachry', '1234567890123456', 'ab_123', 'Jalan pemuda 12, Kruwing', '08590909090', '2000-01-01', 'coba1'),
('Faiz Muhammad', '1234567890123457', 'ge_17', 'New York, Yogyakarta', '08590909091', '2001-01-04', 'coba2');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
