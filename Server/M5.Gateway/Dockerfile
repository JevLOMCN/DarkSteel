FROM mcr.microsoft.com/dotnet/sdk:9.0 AS build

WORKDIR /app

# Copie apenas os arquivos de projeto para restaurar dependências e aproveitar o cache
COPY M5.Gateway/*.csproj ./M5.Gateway/
COPY M5.Database/*.csproj ./M5.Database/
COPY M5.Core/*.csproj ./M5.Core/
COPY MirMobile/*.csproj ./MirMobile/
RUN dotnet restore ./M5.Gateway/M5.Gateway.csproj

# Copie o restante dos arquivos do projeto
COPY M5.Gateway/ ./M5.Gateway/
COPY M5.Database/ ./M5.Database/
COPY M5.Core/ ./M5.Core/
COPY MirMobile/ ./MirMobile/
COPY Data/ ./M5.Gateway/Data/

# Build e publish em uma única camada
RUN cd M5.Gateway && \
    dotnet build && \
    dotnet publish -c Release -o /app/publish

# Copie a pasta Data para o mesmo nível relativo ao build
RUN cp -r M5.Gateway/Data /app/Data

FROM mcr.microsoft.com/dotnet/aspnet:9.0
WORKDIR /app

# Copie os arquivos publicados e a pasta Data
COPY --from=build /app/publish .
COPY --from=build /app/Data ../Data

# Use ENTRYPOINT para melhor compatibilidade
ENTRYPOINT ["dotnet", "M5.Gateway.dll"]