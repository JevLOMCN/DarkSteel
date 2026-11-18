// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 2

// ~FQueryData @ 146f2e3b0

void __thiscall EQSDebug::FQueryData::~FQueryData(FQueryData *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->Options).AllocatorInstance.Data,(this->Options).ArrayNum);
  pFVar1 = (this->Options).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<EQSDebug::FDebugHelper,int>
            ((FDebugHelper *)(this->RenderDebugHelpers).AllocatorInstance.Data,
             (this->RenderDebugHelpers).ArrayNum);
  pFVar1 = (this->RenderDebugHelpers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDebugRenderSceneProxy::FText3d,int>
            ((FText3d *)(this->Texts).AllocatorInstance.Data,(this->Texts).ArrayNum);
  pFVar1 = (this->Texts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SolidSpheres).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<EQSDebug::FTestData,int>
            ((FTestData *)(this->Tests).AllocatorInstance.Data,(this->Tests).ArrayNum);
  pFVar1 = (this->Tests).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<EQSDebug::FItemData,int>
            ((FItemData *)(this->Items).AllocatorInstance.Data,(this->Items).ArrayNum);
  pFVar1 = (this->Items).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Reset @ 146f671e0

void __thiscall EQSDebug::FQueryData::Reset(FQueryData *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FItemData *pFVar4;
  FTestData *pFVar5;
  FText3d *pFVar6;
  FDebugHelper *pFVar7;
  
  piVar1 = &(this->Options).ArrayMax;
  this->UsedOption = 0;
  pFVar3 = (this->Options).AllocatorInstance.Data;
  iVar2 = (this->Options).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FString,int>((FString *)pFVar3,iVar2);
    (this->Options).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Options).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar3,iVar2);
    (this->Options).ArrayNum = 0;
  }
  this->NumValidItems = 0;
  this->Id = -1;
  ::FString::Empty(&this->Name);
  piVar1 = &(this->Items).ArrayMax;
  pFVar4 = (FItemData *)(this->Items).AllocatorInstance.Data;
  iVar2 = (this->Items).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<EQSDebug::FItemData,int>(pFVar4,iVar2);
    (this->Items).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    DestructItems<EQSDebug::FItemData,int>(pFVar4,iVar2);
    (this->Items).ArrayNum = 0;
  }
  piVar1 = &(this->Tests).ArrayMax;
  pFVar5 = (FTestData *)(this->Tests).AllocatorInstance.Data;
  iVar2 = (this->Tests).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<EQSDebug::FTestData,int>(pFVar5,iVar2);
    (this->Tests).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->Tests).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<EQSDebug::FTestData,int>(pFVar5,iVar2);
    (this->Tests).ArrayNum = 0;
  }
  (this->SolidSpheres).ArrayNum = 0;
  if ((this->SolidSpheres).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->SolidSpheres).AllocatorInstance,0,&(this->SolidSpheres).ArrayMax);
  }
  piVar1 = &(this->Texts).ArrayMax;
  pFVar6 = (FText3d *)(this->Texts).AllocatorInstance.Data;
  iVar2 = (this->Texts).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FDebugRenderSceneProxy::FText3d,int>(pFVar6,iVar2);
    (this->Texts).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->Texts).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FDebugRenderSceneProxy::FText3d,int>(pFVar6,iVar2);
    (this->Texts).ArrayNum = 0;
  }
  this->Timestamp = 0.0;
  piVar1 = &(this->RenderDebugHelpers).ArrayMax;
  pFVar7 = (FDebugHelper *)(this->RenderDebugHelpers).AllocatorInstance.Data;
  iVar2 = (this->RenderDebugHelpers).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<EQSDebug::FDebugHelper,int>(pFVar7,iVar2);
    (this->RenderDebugHelpers).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&(this->RenderDebugHelpers).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<EQSDebug::FDebugHelper,int>(pFVar7,iVar2);
    (this->RenderDebugHelpers).ArrayNum = 0;
  }
  return;
}

