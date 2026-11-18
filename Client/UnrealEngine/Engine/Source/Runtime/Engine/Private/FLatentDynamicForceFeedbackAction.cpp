// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// NotifyActionAborted @ 148395150

void __thiscall
FLatentDynamicForceFeedbackAction::NotifyActionAborted(FLatentDynamicForceFeedbackAction *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->PlayerController).WeakPtr);
  if (pUVar1 != (UObject *)0x0) {
    TSortedMap<int,FDynamicForceFeedbackDetails_*,TSizedDefaultAllocator<32>,TLess<int_const_>_>::
    Remove((TSortedMap<int,FDynamicForceFeedbackDetails_*,TSizedDefaultAllocator<32>,TLess<int_const_>_>
            *)(pUVar1 + 0x1d),this->LatentUUID);
    this->bAddedToPlayerController = '\0';
  }
  return;
}

// NotifyObjectDestroyed @ 148395420

void __thiscall
FLatentDynamicForceFeedbackAction::NotifyObjectDestroyed(FLatentDynamicForceFeedbackAction *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->PlayerController).WeakPtr);
  if (pUVar1 != (UObject *)0x0) {
    TSortedMap<int,FDynamicForceFeedbackDetails_*,TSizedDefaultAllocator<32>,TLess<int_const_>_>::
    Remove((TSortedMap<int,FDynamicForceFeedbackDetails_*,TSizedDefaultAllocator<32>,TLess<int_const_>_>
            *)(pUVar1 + 0x1d),this->LatentUUID);
    this->bAddedToPlayerController = '\0';
  }
  return;
}

// UpdateOperation @ 1483b67a0

void __thiscall
FLatentDynamicForceFeedbackAction::UpdateOperation
          (FLatentDynamicForceFeedbackAction *this,FLatentResponse *param_1)

{
  int *piVar1;
  FName *pFVar2;
  FWeakObjectPtr FVar3;
  ForElementType<FLatentResponse::FExecutionInfo> FVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  UObject *pUVar9;
  ForElementType<FLatentResponse::FExecutionInfo> FVar10;
  float fVar11;
  FDynamicForceFeedbackDetails *local_res8;
  FName local_28;
  FNameEntryId FStack_20;
  uint uStack_1c;
  int iStack_18;
  
  fVar11 = param_1->DeltaTime + this->TimeElapsed;
  this->TimeElapsed = fVar11;
  if ((this->bRunning == 0) ||
     (((0.0 <= this->TotalTime && (this->TotalTime <= fVar11)) ||
      (bVar7 = FWeakObjectPtr::IsValid(&(this->PlayerController).WeakPtr), !bVar7)))) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  pUVar9 = FWeakObjectPtr::Get(&(this->PlayerController).WeakPtr);
  if (pUVar9 != (UObject *)0x0) {
    if (bVar7 == false) {
      local_res8 = &this->ForceFeedbackDetails;
      TSortedMap<int,FDynamicForceFeedbackDetails_*,TSizedDefaultAllocator<32>,TLess<int_const_>_>::
      Emplace<int_const_&,FDynamicForceFeedbackDetails_*>
                ((TSortedMap<int,FDynamicForceFeedbackDetails_*,TSizedDefaultAllocator<32>,TLess<int_const_>_>
                  *)(pUVar9 + 0x1d),&this->LatentUUID,&local_res8);
      this->bAddedToPlayerController = '\x01';
    }
    else {
      TSortedMap<int,FDynamicForceFeedbackDetails_*,TSizedDefaultAllocator<32>,TLess<int_const_>_>::
      Remove((TSortedMap<int,FDynamicForceFeedbackDetails_*,TSizedDefaultAllocator<32>,TLess<int_const_>_>
              *)(pUVar9 + 0x1d),this->LatentUUID);
      this->bAddedToPlayerController = '\0';
    }
  }
  FVar3 = this->CallbackTarget;
  FStack_20.Value = this->OutputLink;
  local_28 = this->ExecutionFunction;
  param_1->bRemoveAction = bVar7;
  if (bVar7 != false) {
    uStack_1c = FVar3.ObjectIndex;
    iStack_18 = FVar3.ObjectSerialNumber;
    FVar4 = (param_1->LinksToExecute).AllocatorInstance.SecondaryData;
    FVar10 = (ForElementType<FLatentResponse::FExecutionInfo>)param_1;
    if (FVar4 != (ForElementType<FLatentResponse::FExecutionInfo>)0x0) {
      FVar10 = FVar4;
    }
    if ((ulonglong)FVar10 <= &local_28) {
      FVar10 = (ForElementType<FLatentResponse::FExecutionInfo>)param_1;
      if (FVar4 != (ForElementType<FLatentResponse::FExecutionInfo>)0x0) {
        FVar10 = FVar4;
      }
      if ((&local_28 <
           (FName *)((longlong)FVar10 + (longlong)(param_1->LinksToExecute).ArrayMax * 0x14)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = (param_1->LinksToExecute).ArrayNum;
    piVar1 = &(param_1->LinksToExecute).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FLatentResponse::FExecutionInfo>_>
                        (0x414,(ForElementType<FLatentResponse::FExecutionInfo> *)param_1,piVar1);
    }
    FVar6.Number = uStack_1c;
    FVar6.ComparisonIndex.Value = FStack_20.Value;
    (param_1->LinksToExecute).ArrayNum = iVar8 + 1;
    FVar4 = (param_1->LinksToExecute).AllocatorInstance.SecondaryData;
    if (FVar4 != (ForElementType<FLatentResponse::FExecutionInfo>)0x0) {
      param_1 = (FLatentResponse *)FVar4;
    }
    pFVar2 = (FName *)((longlong)param_1 + (longlong)iVar8 * 0x14);
    *pFVar2 = local_28;
    pFVar2[1] = FVar6;
    *(int *)((uchar *)((longlong)param_1 + 0x10) + (longlong)iVar8 * 0x14) = iStack_18;
  }
  return;
}

