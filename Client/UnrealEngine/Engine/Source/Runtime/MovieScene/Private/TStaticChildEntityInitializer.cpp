// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// Run @ 1460f28b0

void __thiscall
UE::MovieScene::
TStaticChildEntityInitializer<FMovieSceneTrackInstanceComponent,FTrackInstanceInputComponent,`UE::MovieScene::FBuiltInComponentTypes::FBuiltInComponentTypes'::__l25::<lambda_1>_&>
::Run(void *this,FEntityRange *param_1,FEntityAllocation *param_2,
     TArrayView<int_const_,int> *param_3)

{
  EComponentHeaderLockMode EVar1;
  uchar *puVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FComponentHeader *pFVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  FComponentHeader *pFVar11;
  undefined8 *puVar12;
  TComponentLock<UE::MovieScene::TWrite<FTrackInstanceInputComponent>_> local_58;
  
  pFVar7 = param_2->ComponentHeaders;
  pFVar11 = pFVar7 + param_2->NumComponents;
  for (; pFVar7 != pFVar11; pFVar7 = pFVar7 + 1) {
    if ((pFVar7->ComponentType).Value == *(ushort *)((longlong)this + 8)) goto LAB_1460f2930;
  }
  pFVar7 = (FComponentHeader *)0x0;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1460f2930:
  EVar1 = param_2->LockMode;
  if (EVar1 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar7->ReadWriteLock);
  }
  LOCK();
  pFVar7->ScheduledAccessCount = (atomic<int>)((int)pFVar7->ScheduledAccessCount + 1);
  UNLOCK();
  puVar2 = pFVar7->Components;
  FEntityAllocation::WriteComponents<FTrackInstanceInputComponent>
            (param_1->Allocation,&local_58,
             *(TComponentTypeID<FTrackInstanceInputComponent> *)((longlong)this + 10),
             (FEntityAllocationWriteContext)0x0);
  uVar10 = 0;
  if (0 < param_1->Num) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < param_3->ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar12 = (undefined8 *)
                ((longlong)(int)(param_1->ComponentStartOffset + uVar10) * 0x10 + local_58._24_8_);
      lVar9 = (longlong)*(int *)((longlong)param_3->DataPtr + lVar8);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 = *(UObject **)(puVar2 + lVar9 * 0x10), pUVar3 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar3);
      }
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 4;
      *puVar12 = *(undefined8 *)(puVar2 + lVar9 * 0x10);
    } while ((int)uVar10 < param_1->Num);
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
  pFVar7->ScheduledAccessCount = (atomic<int>)((int)pFVar7->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar1 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar7->ReadWriteLock);
  }
  return;
}

