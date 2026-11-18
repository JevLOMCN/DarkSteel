// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 2

// CreateMutation @ 146912f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TAddBoundMaterialMutationImpl<UE::MovieScene::FWidgetMaterialAccessor,TIntegerSequence<int,0,1>,UObject_*,FWidgetMaterialHandle>
::CreateMutation(TAddBoundMaterialMutationImpl<UE::MovieScene::FWidgetMaterialAccessor,TIntegerSequence<int,0,1>,UObject_*,FWidgetMaterialHandle>
                 *this,FEntityManager *param_1,FComponentMask *param_2)

{
  FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&this->TracksComponents->BoundMaterial);
  return;
}

// InitializeAllocation @ 14692ad60

void __thiscall
UE::MovieScene::
TAddBoundMaterialMutationImpl<UE::MovieScene::FWidgetMaterialAccessor,TIntegerSequence<int,0,1>,UObject_*,FWidgetMaterialHandle>
::InitializeAllocation
          (TAddBoundMaterialMutationImpl<UE::MovieScene::FWidgetMaterialAccessor,TIntegerSequence<int,0,1>,UObject_*,FWidgetMaterialHandle>
           *this,FEntityAllocation *param_1,FComponentMask *param_2)

{
  ushort uVar1;
  EComponentHeaderLockMode EVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  FComponentHeader *pFVar6;
  FComponentHeader *pFVar7;
  FComponentHeader *pFVar8;
  FComponentHeader *pFVar9;
  undefined1 local_38 [32];
  
  pFVar7 = (FComponentHeader *)0x0;
  FEntityAllocation::WriteComponents<UE::MovieScene::FObjectComponent>
            (param_1,(TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FObjectComponent>_> *)
                     local_38,this->TracksComponents->BoundMaterial,
             (FEntityAllocationWriteContext)0x0);
  pFVar8 = param_1->ComponentHeaders;
  pFVar9 = pFVar8 + param_1->NumComponents;
  for (; pFVar8 != pFVar9; pFVar8 = pFVar8 + 1) {
    if ((pFVar8->ComponentType).Value == *(ushort *)&(this->ComponentTypes).field_0x2)
    goto LAB_14692adef;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  pFVar8 = pFVar7;
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14692adef:
  EVar2 = param_1->LockMode;
  if (EVar2 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar8->ReadWriteLock);
  }
  LOCK();
  pFVar8->ScheduledAccessCount = (atomic<int>)((int)pFVar8->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar9 = param_1->ComponentHeaders;
  pFVar6 = pFVar9 + param_1->NumComponents;
  for (; pFVar9 != pFVar6; pFVar9 = pFVar9 + 1) {
    if ((pFVar9->ComponentType).Value == *(ushort *)&this->ComponentTypes) goto LAB_14692ae58;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  pFVar9 = pFVar7;
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14692ae58:
  EVar3 = param_1->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar9->ReadWriteLock);
  }
  LOCK();
  pFVar9->ScheduledAccessCount = (atomic<int>)((int)pFVar9->ScheduledAccessCount + 1);
  UNLOCK();
  uVar1 = param_1->Size;
  if ((ulonglong)uVar1 != 0) {
    do {
      *(undefined8 *)local_38._24_8_ = 0;
      pFVar7 = (FComponentHeader *)((longlong)&pFVar7->_padding_ + 1);
      *(undefined8 *)(local_38._24_8_ + 8) = 0;
      local_38._24_8_ = local_38._24_8_ + 0x10;
    } while ((longlong)pFVar7 < (longlong)(ulonglong)uVar1);
  }
  if (pFVar9 != (FComponentHeader *)0x0) {
    LOCK();
    pFVar9->ScheduledAccessCount = (atomic<int>)((int)pFVar9->ScheduledAccessCount + -1);
    UNLOCK();
    if (EVar3 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar9->ReadWriteLock);
    }
  }
  if (pFVar8 != (FComponentHeader *)0x0) {
    LOCK();
    pFVar8->ScheduledAccessCount = (atomic<int>)((int)pFVar8->ScheduledAccessCount + -1);
    UNLOCK();
    if (EVar2 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar8->ReadWriteLock);
    }
  }
  if (local_38._0_8_ != 0) {
    if ((ulonglong)local_38._8_8_ < *(ulonglong *)(local_38._0_8_ + 0x28)) {
      local_38._8_8_ = *(ulonglong *)(local_38._0_8_ + 0x28);
    }
    *(undefined8 *)(local_38._0_8_ + 0x28) = local_38._8_8_;
    LOCK();
    *(int *)(local_38._0_8_ + 0x30) = *(int *)(local_38._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_38._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_38._0_8_ + 0x20));
    }
  }
  return;
}

