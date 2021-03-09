head(iris)
head(mtcars)
plot(mtcars$wt, mtcars$mpg, col="red",xlab = "Weight of the Cars", ylab = "Miles per gallon", pch=16, main="Person Correlation")
form<-mtcars[, c('wt','mpg','cyl')]
cor(form)
cor.test(x = mtcars$wt, y = mtcars$mpg)
pairs(~mpg + disp + wt + cyl, data=mtcars, main="Scatterplot Matrix")
library(FSelector)
ig_values<- information.gain(Species~., iris)
ig_values
#filter the top K features and use it to created the model formula
top_k_features <- cutoff.k(ig_values,2)
f<- as.simple.formula(top_k_features, "Species")
f

library(MASS)
head(iris)
my_data <- iris
logit_mod<- glm(Species ~., data = my_data, family = "binomial")
summary(logit_mod)
formula(logit_mod)
coef(logit_mod)
nothing <- glm(Species ~ 1, data = my_data, family="binomial")
forw <- step(nothing, scope=list(lower=formula(nothing), upper=formula(logit_mod)), direction="forward")

library(caret)
rfe_controller <- rfeControl(functions = lmFuncs, method = "Repeatedcv", repeats = 5 , verbose = FALSE)
size <- c(1:10)
lm_Profiler <- rfe(mtcars[,2:11], mtcars[,1], sizes = size, rfeControl = rfe_controller)
lm_Profiler
plot(lm_Profiler)


range(CO2$conc)
scaled_conc <- scale(CO2$conc)
range(scaled_conc)


mtcars_feat <- mtcars[,2:11]
mtcars_mpg <- mtcars[,1]
mtcars_pca <- prcomp(x = mtcars_feat, scale. = T )
mtcars_pca$sdev

biplot(mtcars_pca, scale = TRUE, pc.biplot = TRUE)


head(iris)
library(MASS)
train <- sample(1:150, 75)
lda_model <- lda(Species ~., data = iris, subset=train)
lda_model$mean

lda_pred <- predict(object = lda_model, newdata = iris[-train, ])
lda_pred$class
iris_test<- iris[-train, ]
iris_test <- iris[-train, ]
ggplot() + geom_point(aes(lda_pred$x[,1], lda_pred$x[,2], colour = iris_test$Species, shape = iris_test$Species), 
                      size = 2.5) + ggtitle("Linear Discriminant Analysis") + xlab("LDA1") + ylab("LDA2") + labs(fill = "Species")



library(randomForest)
rf_model <- randomForest(x = form, data = mtcars, importance = TRUE )
rf_model$importance
rf_model <- randomForest(mpg ~ ., data = mtcars, importance = TRUE)
rf_model$importance
varImpPlot(rf_model)
