#' La clase para interactuar con plantuml
#' @title R6PlantUML
#' @docType class
#' @description  La descripcion.
#' @import R6
#' @export
# #' @import magick
#'
library(R6)
UML = R6::R6Class("R6UML",
                       public = list(
                           #' @field force Flag para forzar la recreación de diagramas
                           force = FALSE
                           )
)
