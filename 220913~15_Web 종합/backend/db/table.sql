-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION';

CREATE SCHEMA IF NOT EXISTS `order_system` DEFAULT CHARACTER SET utf8mb4 ;

USE `order_system` ;

-- -----------------------------------------------------
-- Table `order_system`.`menus`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `order_system`.`menus` (
  `id` INT NOT NULL AUTO_INCREMENT,
  `name` VARCHAR(200) NULL,
  `description` VARCHAR(200) NULL,
  `image_src` VARCHAR(200) NULL,
  PRIMARY KEY (`id`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `order_system`.`orders`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `order_system`.`orders` (
  `id` INT NOT NULL AUTO_INCREMENT,
  `quantity` INT NULL,
  `request_detail` VARCHAR(200) NULL,
  `menus_id` INT NOT NULL,
  PRIMARY KEY (`id`, `menus_id`),
  CONSTRAINT `fk_orders_menus`
    FOREIGN KEY (`menus_id`)
    REFERENCES `order_system`.`menus` (`id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
