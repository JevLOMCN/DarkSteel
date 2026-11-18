// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FODSCRequestPayload @ 1480898c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FODSCRequestPayload * __thiscall
FODSCRequestPayload::FODSCRequestPayload(FODSCRequestPayload *this,FODSCRequestPayload *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  this->ShaderPlatform = param_1->ShaderPlatform;
  this->FeatureLevel = param_1->FeatureLevel;
  this->QualityLevel = param_1->QualityLevel;
  ::FString::FString(&this->MaterialName,&param_1->MaterialName);
  ::FString::FString(&this->VertexFactoryName,&param_1->VertexFactoryName);
  ::FString::FString(&this->PipelineName,&param_1->PipelineName);
  pTVar1 = &this->ShaderTypeNames;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ShaderTypeNames).ArrayMax;
  iVar3 = (param_1->ShaderTypeNames).ArrayNum;
  pFVar4 = (param_1->ShaderTypeNames).AllocatorInstance.Data;
  (this->ShaderTypeNames).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
  }
  this->PermutationId = param_1->PermutationId;
  ::FString::FString(&this->RequestHash,&param_1->RequestHash);
  return this;
}

// FODSCRequestPayload @ 1480899b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FODSCRequestPayload * __thiscall
FODSCRequestPayload::FODSCRequestPayload
          (FODSCRequestPayload *this,EShaderPlatform param_1,Type param_2,Type param_3,
          FString *param_4,FString *param_5,FString *param_6,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_7,int param_8,FString *param_9)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  this->ShaderPlatform = param_1;
  this->FeatureLevel = param_2;
  this->QualityLevel = param_3;
  ::FString::FString(&this->MaterialName,param_4);
  ::FString::FString(&this->VertexFactoryName,param_5);
  ::FString::FString(&this->PipelineName,param_6);
  pTVar1 = &this->ShaderTypeNames;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_7->ArrayNum;
  pFVar4 = (param_7->AllocatorInstance).Data;
  piVar2 = &(this->ShaderTypeNames).ArrayMax;
  (this->ShaderTypeNames).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
  }
  this->PermutationId = param_8;
  ::FString::FString(&this->RequestHash,param_9);
  return this;
}

// ~FODSCRequestPayload @ 14808ea20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FODSCRequestPayload::~FODSCRequestPayload(FODSCRequestPayload *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->RequestHash).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ShaderTypeNames).AllocatorInstance.Data,
             (this->ShaderTypeNames).ArrayNum);
  pFVar1 = (this->ShaderTypeNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PipelineName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VertexFactoryName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14808fd30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FODSCRequestPayload * __thiscall
FODSCRequestPayload::operator=(FODSCRequestPayload *this,FODSCRequestPayload *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = &param_1->MaterialName;
  this->ShaderPlatform = param_1->ShaderPlatform;
  pFVar2 = &this->MaterialName;
  this->FeatureLevel = param_1->FeatureLevel;
  this->QualityLevel = param_1->QualityLevel;
  if (pFVar2 != pFVar1) {
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->MaterialName).Data.ArrayNum = (param_1->MaterialName).Data.ArrayNum;
    (this->MaterialName).Data.ArrayMax = (param_1->MaterialName).Data.ArrayMax;
    (param_1->MaterialName).Data.ArrayNum = 0;
    (param_1->MaterialName).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->VertexFactoryName;
  pFVar2 = &this->VertexFactoryName;
  if (pFVar2 != pFVar1) {
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->VertexFactoryName).Data.ArrayNum = (param_1->VertexFactoryName).Data.ArrayNum;
    (this->VertexFactoryName).Data.ArrayMax = (param_1->VertexFactoryName).Data.ArrayMax;
    (param_1->VertexFactoryName).Data.ArrayNum = 0;
    (param_1->VertexFactoryName).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->PipelineName;
  pFVar2 = &this->PipelineName;
  if (pFVar2 != pFVar1) {
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PipelineName).Data.ArrayNum = (param_1->PipelineName).Data.ArrayNum;
    (this->PipelineName).Data.ArrayMax = (param_1->PipelineName).Data.ArrayMax;
    (param_1->PipelineName).Data.ArrayNum = 0;
    (param_1->PipelineName).Data.ArrayMax = 0;
  }
  pTVar3 = &param_1->ShaderTypeNames;
  pTVar4 = &this->ShaderTypeNames;
  if (pTVar4 != pTVar3) {
    DestructItems<FString,int>
              ((FString *)(pTVar4->AllocatorInstance).Data,(this->ShaderTypeNames).ArrayNum);
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ShaderTypeNames).ArrayNum = (param_1->ShaderTypeNames).ArrayNum;
    (this->ShaderTypeNames).ArrayMax = (param_1->ShaderTypeNames).ArrayMax;
    (param_1->ShaderTypeNames).ArrayNum = 0;
    (param_1->ShaderTypeNames).ArrayMax = 0;
  }
  pFVar1 = &param_1->RequestHash;
  pFVar2 = &this->RequestHash;
  this->PermutationId = param_1->PermutationId;
  if (pFVar2 != pFVar1) {
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->RequestHash).Data.ArrayNum = (param_1->RequestHash).Data.ArrayNum;
    (this->RequestHash).Data.ArrayMax = (param_1->RequestHash).Data.ArrayMax;
    (param_1->RequestHash).Data.ArrayNum = 0;
    (param_1->RequestHash).Data.ArrayMax = 0;
  }
  return this;
}

