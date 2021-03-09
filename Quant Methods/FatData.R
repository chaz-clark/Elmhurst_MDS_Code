#import all columns as arrays
caseID <-c(fat.dat$V1)
brozekBFP<-c(fat.dat$V2)
siriBFP<-c(fat.dat$V3)
density<-c(fat.dat$V4)
age<-c(fat.dat$V5)
weightLBS<-c(fat.dat$V6)
heightIn<-c(fat.dat$V7)
adiposityIndex<-c(fat.dat$V8)
fatFreeWeight<-c(fat.dat$V9)
neckCir<-c(fat.dat$V10)
chestCir<-c(fat.dat$V11)
abdomenCir<-c(fat.dat$V12)
hipCir<-c(fat.dat$V13)
thighCir<-c(fat.dat$V14)
kneeCir<-c(fat.dat$V15)
ankleCir<-c(fat.dat$V16)
extBiceptCir<-c(fat.dat$V17)
forarmCir<-c(fat.dat$V18)
wristCir<-c(fat.dat$V19)

#t-test for establishing the null-hypothesis testing
#density is the major measurement used to calculate BFP 
#it shoudl have a p value of near zero, this will be a benchmark
#compare t.test to summary lm
summary(lm(density~siriBFP,data=fat.dat))

  #compare summary lm
summary(lm(siriBFP~age + weightLBS + heightIn + adiposityIndex + fatFreeWeight + neckCir + chestCir + 
             abdomenCir + hipCir + thighCir + kneeCir + ankleCir + extBiceptCir + forarmCir + wristCir,data=fat.dat))

#compare summary lm
summary(lm(siriBFP~weightLBS ,data=fat.dat))
plot(siriBFP,weightLBS)
abline(lm(weightLBS~SiriBFP))

#compare summary lm
summary(lm(siriBFP~adiposityIndex,data=fat.dat))
plot(siriBFP,adiposityIndex)
abline(lm(siriBFP~adiposityIndex))

#compare summary lm
summary(lm(siriBFP~fatFreeWeight,data=fat.dat))
plot(siriBFP,fatFreeWeight)
abline(lm(siriBFP~fatFreeWeight))

#compare summary lm
summary(lm(siriBFP~abdomenCir,data=fat.dat))
plot(siriBFP,abdomenCir)
abline(lm(siriBFP~abdomenCir))

#compare summary lm
summary(lm(siriBFP~thighCir,data=fat.dat))
plot(siriBFP,thighCir)
abline(lm(siriBFP~thighCir))

#compare summary lm
summary(lm(siriBFP~chestCir,data=fat.dat))
plot(siriBFP,chestCir)
abline(lm(siriBFP~chestCir))

#compare summary lm
summary(lm(siriBFP~forarmCir,data=fat.dat))
plot(siriBFP,forarmCir)
abline(lm(siriBFP~forarmCir))

#___________________________________________
#redo everything without outliers in the data
#__________________________________________

#import all columns as arrays
caseID <-c(fat.dat2$V1)
brozekBFP<-c(fat.dat2$V2)
siriBFP<-c(fat.dat2$V3)
density<-c(fat.dat2$V4)
age<-c(fat.dat2$V5)
weightLBS<-c(fat.dat2$V6)
heightIn<-c(fat.dat2$V7)
adiposityIndex<-c(fat.dat2$V8)
fatFreeWeight<-c(fat.dat2$V9)
neckCir<-c(fat.dat2$V10)
chestCir<-c(fat.dat2$V11)
abdomenCir<-c(fat.dat2$V12)
hipCir<-c(fat.dat2$V13)
thighCir<-c(fat.dat2$V14)
kneeCir<-c(fat.dat2$V15)
ankleCir<-c(fat.dat2$V16)
extBiceptCir<-c(fat.dat2$V17)
forarmCir<-c(fat.dat2$V18)
wristCir<-c(fat.dat2$V19)

#t-test for establishing the null-hypothesis testing
#density is the major measurement used to calculate BFP 
#it shoudl have a p value of near zero, this will be a benchmark
#compare t.test to summary lm
summary(lm(density~siriBFP,data=fat.dat2))

#compare summary lm
summary(lm(siriBFP~age + weightLBS + heightIn + adiposityIndex + fatFreeWeight + neckCir + chestCir + 
             abdomenCir + hipCir + thighCir + kneeCir + ankleCir + extBiceptCir + forarmCir + wristCir,data=fat.dat2))

#compare summary lm
summary(lm(siriBFP~weightLBS ,data=fat.dat2))
plot(weightLBS,siriBFP)
abline(lm(siriBFP~weightLBS))

#compare summary lm
summary(lm(siriBFP~adiposityIndex,data=fat.dat2))
plot(adiposityIndex,siriBFP)
abline(lm(siriBFP~adiposityIndex))

#compare summary lm
summary(lm(siriBFP~fatFreeWeight,data=fat.dat2))
plot(fatFreeWeight,siriBFP)
abline(lm(siriBFP~fatFreeWeight))

#compare summary lm
summary(lm(siriBFP~abdomenCir,data=fat.dat2))
plot(abdomenCir,siriBFP)
abline(lm(siriBFP~abdomenCir))

#compare summary lm
summary(lm(siriBFP~thighCir,data=fat.dat2))
plot(thighCir,siriBFP)
abline(lm(siriBFP~thighCir))

#compare summary lm
summary(lm(siriBFP~chestCir,data=fat.dat2))
plot(chestCir,siriBFP)
abline(lm(siriBFP~chestCir))

#compare summary lm
summary(lm(siriBFP~forarmCir,data=fat.dat2))
plot(forarmCir,siriBFP)
abline(lm(siriBFP~forarmCir))

