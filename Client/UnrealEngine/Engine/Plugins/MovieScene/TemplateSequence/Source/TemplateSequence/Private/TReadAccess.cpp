// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 1

// LockComponentData @ 14ac7aa50

TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_> * __thiscall
UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>::LockComponentData
          (TReadAccess<UE::MovieScene::FRootInstanceHandle> *this,
          TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_>
          *__return_storage_ptr__,FEntityAllocation *param_1,FEntityAllocationWriteContext param_2)

{
  EComponentHeaderLockMode EVar1;
  code *pcVar2;
  bool bVar3;
  TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_> *pTVar4;
  FComponentHeader *pFVar5;
  FComponentHeader *pFVar6;
  
  pFVar6 = param_1->ComponentHeaders;
  pFVar5 = pFVar6 + param_1->NumComponents;
  for (; pFVar6 != pFVar5; pFVar6 = pFVar6 + 1) {
    if ((TReadAccess<UE::MovieScene::FRootInstanceHandle>)(pFVar6->ComponentType).Value == *this)
    goto LAB_14ac7aab8;
  }
  pFVar6 = (FComponentHeader *)0x0;
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_> *)
             (*pcVar2)();
    return pTVar4;
  }
LAB_14ac7aab8:
  EVar1 = param_1->LockMode;
  *(FComponentHeader **)__return_storage_ptr__ = pFVar6;
  *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x8 = EVar1;
  if (EVar1 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar6->ReadWriteLock);
  }
  LOCK();
  pFVar6->ScheduledAccessCount = (atomic<int>)((int)pFVar6->ScheduledAccessCount + 1);
  UNLOCK();
  *(uchar **)&__return_storage_ptr__->field_0x10 = pFVar6->Components;
  return __return_storage_ptr__;
}

