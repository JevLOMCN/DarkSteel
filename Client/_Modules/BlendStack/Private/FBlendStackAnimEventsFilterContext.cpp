// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BlendStack
// Functions: 2

// FBlendStackAnimEventsFilterContext @ 14a8612a0

FBlendStackAnimEventsFilterContext * __thiscall
UE::Anim::FBlendStackAnimEventsFilterContext::FBlendStackAnimEventsFilterContext
          (FBlendStackAnimEventsFilterContext *this,
          TSharedRef<TArray<FName,TSizedDefaultAllocator<32>_>,1> *param_1,
          TSharedRef<TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>,1>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FBlendStackAnimEventsFilterContext_Anim_UE__6B_;
  (this->FiredNotifies).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->FiredNotifies).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->NotifyBanList).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->NotifyBanList).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ShouldFilterNotify @ 14a869050

bool __thiscall
UE::Anim::FBlendStackAnimEventsFilterContext::ShouldFilterNotify
          (FBlendStackAnimEventsFilterContext *this,FAnimNotifyEventReference *param_1)

{
  FAnimNotifyEvent *pFVar1;
  FName FVar2;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  FName *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  FName *pFVar12;
  FName local_18 [2];
  
  if ((((param_1->NotifySource).field0_0x0.DebugPtr == (UObject *)0x0) ||
      (pFVar1 = param_1->Notify, pFVar1 == (FAnimNotifyEvent *)0x0)) ||
     ((pFVar1->NotifyStateClass).field0_0x0.DebugPtr != (UAnimNotifyState *)0x0)) {
    return false;
  }
  FVar2 = pFVar1->NotifyName;
  pTVar3 = (this->NotifyBanList).Object;
  local_18[0] = FVar2;
  uVar9 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (*(int *)&pTVar3->field_0x8 != *(int *)&pTVar3->field_0x34) {
    puVar11 = *(undefined1 **)&pTVar3->field_0x40;
    if (*(undefined1 **)&pTVar3->field_0x40 == (undefined1 *)0x0) {
      puVar11 = &pTVar3->field_0x38;
    }
    iVar10 = *(int *)(puVar11 +
                     (ulonglong)(*(int *)&pTVar3->field_0x48 - 1U & FVar2.Number + uVar9) * 4);
    if (iVar10 != -1) {
      do {
        if (*(FName *)(*(longlong *)pTVar3 + (longlong)iVar10 * 0x14) == FVar2) goto LAB_14a8690ed;
        iVar10 = *(int *)(*(longlong *)pTVar3 + 0xc + (longlong)iVar10 * 0x14);
      } while (iVar10 != -1);
    }
  }
  iVar10 = -1;
LAB_14a8690ed:
  pTVar4 = (this->FiredNotifies).Object;
  pFVar5 = (FName *)(pTVar4->AllocatorInstance).Data;
  for (pFVar12 = pFVar5; pFVar12 != pFVar5 + pTVar4->ArrayNum; pFVar12 = pFVar12 + 1) {
    if (*pFVar12 == local_18[0]) {
      return true;
    }
  }
  if (iVar10 != -1) {
    return true;
  }
  if (((pFVar5 <= local_18) && (local_18 < pFVar5 + pTVar4->ArrayMax)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  iVar10 = pTVar4->ArrayNum;
  if (iVar10 == pTVar4->ArrayMax) {
    iVar10 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar10 + 1;
  *(FName *)((pTVar4->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_18[0];
  return false;
}

