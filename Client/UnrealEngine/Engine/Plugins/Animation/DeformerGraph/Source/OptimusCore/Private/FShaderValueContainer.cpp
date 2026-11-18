// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// FShaderValueContainer @ 14e1574e0

FShaderValueContainer * __thiscall
FShaderValueContainer::FShaderValueContainer
          (FShaderValueContainer *this,FShaderValueContainer *param_1)

{
  int *piVar1;
  TArray<FArrayShaderValue,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  piVar1 = &(this->ShaderValue).ArrayMax;
  (this->ShaderValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ShaderValue).ArrayNum;
  pFVar4 = (param_1->ShaderValue).AllocatorInstance.Data;
  (this->ShaderValue).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    memcpy((this->ShaderValue).AllocatorInstance.Data,pFVar4,(longlong)iVar3);
  }
  pTVar2 = &this->ArrayList;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ArrayList).ArrayMax;
  iVar3 = (param_1->ArrayList).ArrayNum;
  pFVar4 = (param_1->ArrayList).AllocatorInstance.Data;
  (this->ArrayList).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FArrayShaderValue,FArrayShaderValue,int>
              ((pTVar2->AllocatorInstance).Data,(FArrayShaderValue *)pFVar4,iVar3);
  }
  return this;
}

// ~FShaderValueContainer @ 14e161bc0

void __thiscall FShaderValueContainer::~FShaderValueContainer(FShaderValueContainer *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FArrayShaderValue,int>
            ((FArrayShaderValue *)(this->ArrayList).AllocatorInstance.Data,
             (this->ArrayList).ArrayNum);
  pFVar1 = (this->ArrayList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShaderValue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14e165bb0

FShaderValueContainer * __thiscall
FShaderValueContainer::operator=(FShaderValueContainer *this,FShaderValueContainer *param_1)

{
  TArray<FArrayShaderValue,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FArrayShaderValue,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  if (this != param_1) {
    pFVar3 = (this->ShaderValue).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->ShaderValue).AllocatorInstance.Data = (param_1->ShaderValue).AllocatorInstance.Data;
    (param_1->ShaderValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ShaderValue).ArrayNum = (param_1->ShaderValue).ArrayNum;
    (this->ShaderValue).ArrayMax = (param_1->ShaderValue).ArrayMax;
    (param_1->ShaderValue).ArrayNum = 0;
    (param_1->ShaderValue).ArrayMax = 0;
  }
  pTVar1 = &param_1->ArrayList;
  pTVar2 = &this->ArrayList;
  if (pTVar2 != pTVar1) {
    DestructItems<FArrayShaderValue,int>
              ((FArrayShaderValue *)(pTVar2->AllocatorInstance).Data,(this->ArrayList).ArrayNum);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ArrayList).ArrayNum = (param_1->ArrayList).ArrayNum;
    (this->ArrayList).ArrayMax = (param_1->ArrayList).ArrayMax;
    (param_1->ArrayList).ArrayNum = 0;
    (param_1->ArrayList).ArrayMax = 0;
  }
  return this;
}

// operator= @ 14e165c60

FShaderValueContainer * __thiscall
FShaderValueContainer::operator=(FShaderValueContainer *this,FShaderValueContainer *param_1)

{
  TArray<FArrayShaderValue,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
            (&this->ShaderValue,&param_1->ShaderValue);
  pTVar1 = &this->ArrayList;
  if (pTVar1 != &param_1->ArrayList) {
    DestructItems<FArrayShaderValue,int>
              ((FArrayShaderValue *)(pTVar1->AllocatorInstance).Data,(this->ArrayList).ArrayNum);
    iVar3 = (param_1->ArrayList).ArrayNum;
    piVar2 = &(this->ArrayList).ArrayMax;
    pFVar4 = (param_1->ArrayList).AllocatorInstance.Data;
    (this->ArrayList).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FArrayShaderValue,FArrayShaderValue,int>
                ((pTVar1->AllocatorInstance).Data,(FArrayShaderValue *)pFVar4,iVar3);
    }
  }
  return this;
}

