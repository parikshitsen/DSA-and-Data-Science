from faker import Faker
#print(dir(Faker()))
fake=Faker()
print(fake.name())
print(fake.email())
print(fake.country())
print(fake.profile())