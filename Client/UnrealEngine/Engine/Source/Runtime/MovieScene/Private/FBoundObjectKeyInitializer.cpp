// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// Run @ 1460f2ac0

void __thiscall
UE::MovieScene::FBoundObjectKeyInitializer::Run
          (FBoundObjectKeyInitializer *this,FEntityRange *param_1,
          FEntityAllocationWriteContext *param_2)

{
  EComponentHeaderLockMode EVar1;
  FEntityAllocation *pFVar2;
  uchar *puVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  FBuiltInComponentTypes *pFVar7;
  FComponentHeader *pFVar8;
  FComponentHeader *pFVar9;
  int iVar10;
  FComponentHeader *pFVar11;
  FWeakObjectPtr local_res10 [2];
  FWeakObjectPtr local_res20;
  TComponentLock<UE::MovieScene::TWrite<FObjectKey>_> local_58;
  
  pFVar7 = FBuiltInComponentTypes::Get();
  pFVar2 = param_1->Allocation;
  pFVar11 = (FComponentHeader *)0x0;
  pFVar9 = pFVar2->ComponentHeaders;
  pFVar8 = pFVar9 + pFVar2->NumComponents;
  for (; pFVar9 != pFVar8; pFVar9 = pFVar9 + 1) {
    if ((TComponentTypeID<UObject_*>)(pFVar9->ComponentType).Value == pFVar7->BoundObject)
    goto LAB_1460f2b3a;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  pFVar9 = pFVar11;
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1460f2b3a:
  EVar1 = pFVar2->LockMode;
  if (EVar1 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar9->ReadWriteLock);
  }
  LOCK();
  pFVar9->ScheduledAccessCount = (atomic<int>)((int)pFVar9->ScheduledAccessCount + 1);
  UNLOCK();
  puVar3 = pFVar9->Components;
  FEntityAllocation::WriteComponents<FObjectKey>
            (param_1->Allocation,&local_58,pFVar7->BoundObjectKey,
             (FEntityAllocationWriteContext)param_2->SystemSerial);
  if (0 < param_1->Num) {
    do {
      iVar10 = (int)pFVar11;
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      pUVar4 = *(UObject **)(puVar3 + (longlong)(param_1->ComponentStartOffset + iVar10) * 8);
      if (pUVar4 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        local_res10[0].ObjectIndex = 0;
        local_res10[0].ObjectSerialNumber = 0;
        local_res20 = (FWeakObjectPtr)pUVar4;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar4);
        }
        FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
        local_res20 = local_res10[0];
      }
      pFVar11 = (FComponentHeader *)(ulonglong)(iVar10 + 1U);
      *(FWeakObjectPtr *)(local_58._24_8_ + (longlong)(param_1->ComponentStartOffset + iVar10) * 8)
           = local_res20;
    } while ((int)(iVar10 + 1U) < param_1->Num);
  }
  if (local_58._0_8_ != 0) {
    if ((ulonglong)local_58._8_8_ < *(ulonglong *)(local_58._0_8_ + 0x28)) {
      local_58._8_8_ = *(ulonglong *)(local_58._0_8_ + 0x28);
    }
    *(undefined8 *)(local_58._0_8_ + 0x28) = local_58._8_8_;
    LOCK();
    *(int *)(local_58._0_8_ + 0x30) = *(int *)(local_58._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_58._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_58._0_8_ + 0x20));
    }
  }
  LOCK();
  pFVar9->ScheduledAccessCount = (atomic<int>)((int)pFVar9->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar1 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar9->ReadWriteLock);
  }
  return;
}

