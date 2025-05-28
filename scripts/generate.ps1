#!/usr/bin/env pwsh

$env:CPP_POST_PROCESS_FILE = "clang-format -i"

java -jar ./vendor/openapi-generator/openapi-generator-cli.jar generate `
    -i https://api.tribufu.com/openapi.json `
    -g cpp-restsdk `
    -o . `
    --enable-post-process-file `
    --global-property apis,models,supportingFiles,apiDocs=false,modelDocs=false,apiTests=false,modelTests=false `
    --additional-properties=packageName=tribufu++,apiPackage=tribufu.api,modelPackage=tribufu.models `
    --openapi-normalizer SET_TAGS_FOR_ALL_OPERATIONS=TribufuGenerated `
    --skip-validate-spec
