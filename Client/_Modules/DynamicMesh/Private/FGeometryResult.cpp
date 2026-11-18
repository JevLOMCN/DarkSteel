// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 4

// operator= @ 14c6e1f30

FGeometryResult * __thiscall
UE::Geometry::FGeometryResult::operator=(FGeometryResult *this,FGeometryResult *param_1)

{
  TArray<UE::Geometry::FGeometryError,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Geometry::FGeometryError,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Geometry::FGeometryWarning,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Geometry::FGeometryWarning,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  
  pTVar1 = &param_1->Errors;
  pTVar2 = &this->Errors;
  this->Result = param_1->Result;
  if (pTVar2 != pTVar1) {
    DestructItems<UE::Geometry::FGeometryError,int>
              ((FGeometryError *)(pTVar2->AllocatorInstance).Data,(this->Errors).ArrayNum);
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Errors).ArrayNum = (param_1->Errors).ArrayNum;
    (this->Errors).ArrayMax = (param_1->Errors).ArrayMax;
    (param_1->Errors).ArrayNum = 0;
    (param_1->Errors).ArrayMax = 0;
  }
  pTVar3 = &param_1->Warnings;
  pTVar4 = &this->Warnings;
  if (pTVar4 != pTVar3) {
    DestructItems<UE::Geometry::FGeometryWarning,int>
              ((FGeometryWarning *)(pTVar4->AllocatorInstance).Data,(this->Warnings).ArrayNum);
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Warnings).ArrayNum = (param_1->Warnings).ArrayNum;
    (this->Warnings).ArrayMax = (param_1->Warnings).ArrayMax;
    (param_1->Warnings).ArrayNum = 0;
    (param_1->Warnings).ArrayMax = 0;
  }
  return this;
}

// CheckAndSetCancelled @ 14c71b280

bool __thiscall
UE::Geometry::FGeometryResult::CheckAndSetCancelled(FGeometryResult *this,FProgressCancel *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if (param_1 == (FProgressCancel *)0x0) {
    return false;
  }
  if (param_1->WasCancelled == false) {
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar1 = *(code **)&param_1->CancelF;
    plVar2 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar5 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    bVar3 = (bool)(*pcVar1)(uVar4);
    param_1->WasCancelled = bVar3;
    if (bVar3 == false) {
      return false;
    }
  }
  this->Result = Cancelled;
  return true;
}

// AddWarning @ 14c8b7f80

void __thiscall
UE::Geometry::FGeometryResult::AddWarning(FGeometryResult *this,FGeometryWarning *param_1)

{
  TArray<UE::Geometry::FGeometryWarning,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FGeometryWarning *pFVar3;
  FScriptContainerElement *pFVar4;
  ITextData *pIVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  
  pTVar1 = &this->Warnings;
  pFVar3 = (FGeometryWarning *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->Warnings).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar8 = (this->Warnings).ArrayNum;
  piVar2 = &(this->Warnings).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Warnings).ArrayNum = iVar8 + 1;
  FGeometryWarning::FGeometryWarning
            ((FGeometryWarning *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x30),param_1
            );
  pFVar4 = (param_1->CustomData).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pIVar5 = (param_1->Message).TextData.Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  return;
}

// SetFailed @ 14c916a60

/* WARNING: Removing unreachable block (ram,0x00014c916baf) */

void __thiscall
UE::Geometry::FGeometryResult::SetFailed(FGeometryResult *this,FText *param_1,int param_2)

{
  TArray<UE::Geometry::FGeometryError,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FDateTime FVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res18 [8];
  int local_38 [2];
  FText local_30;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  this->Result = Failure;
  pTVar1 = &this->Errors;
  local_30.TextData.Reference = (param_1->TextData).Reference;
  local_38[0] = param_2;
  if (local_30.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_30.TextData.Reference + 8))
              (local_30.TextData.Reference,local_res18);
  }
  local_30.Flags = param_1->Flags;
  local_18 = 0;
  local_10 = 0;
  FVar7 = FDateTime::Now();
  pFVar8 = (pTVar1->AllocatorInstance).Data;
  local_20 = *(undefined8 *)FVar7.Ticks;
  if (((pFVar8 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar8 + (longlong)(this->Errors).ArrayMax * 0x30)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->Errors).ArrayNum;
  piVar2 = &(this->Errors).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Errors).ArrayNum = iVar6 + 1;
  pFVar8 = (pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x30;
  *(int *)pFVar8 = local_38[0];
  FText::FText((FText *)(pFVar8 + 8),&local_30);
  *(undefined8 *)(pFVar8 + 0x18) = local_20;
  *(undefined8 *)(pFVar8 + 0x20) = 0;
  *(undefined8 *)(pFVar8 + 0x20) = local_18;
  *(undefined4 *)(pFVar8 + 0x28) = (undefined4)local_10;
  *(undefined4 *)(pFVar8 + 0x2c) = local_10._4_4_;
  local_10 = 0;
  local_18 = 0;
  if (local_30.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
  }
  pIVar3 = (param_1->TextData).Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  return;
}

