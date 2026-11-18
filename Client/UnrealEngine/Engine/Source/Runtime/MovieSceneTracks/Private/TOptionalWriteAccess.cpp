// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// LockComponentData @ 14683faa0

TComponentLock<UE::MovieScene::TWriteOptional<double>_> * __thiscall
UE::MovieScene::TOptionalWriteAccess<double>::LockComponentData
          (TOptionalWriteAccess<double> *this,
          TComponentLock<UE::MovieScene::TWriteOptional<double>_> *__return_storage_ptr__,
          FEntityAllocation *param_1,FEntityAllocationWriteContext param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  TComponentLock<UE::MovieScene::TWriteOptional<double>_> *pTVar7;
  FComponentHeader *pFVar8;
  ulonglong uVar9;
  FComponentHeader *pFVar10;
  undefined8 *puVar11;
  
  pFVar10 = param_1->ComponentHeaders;
  pFVar8 = pFVar10 + param_1->NumComponents;
  do {
    if (pFVar10 == pFVar8) {
LAB_14683fae9:
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
      *(undefined4 *)&__return_storage_ptr__->field_0x10 = 1;
      *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
      return __return_storage_ptr__;
    }
    if ((pFVar10->ComponentType).Value == *(ushort *)this) {
      if (pFVar10 != (FComponentHeader *)0x0) {
        EVar3 = param_1->LockMode;
        *(undefined8 *)__return_storage_ptr__ = 0;
        *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
        *(undefined4 *)&__return_storage_ptr__->field_0x10 = 1;
        *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
        if (EVar3 == Mutex) {
          AcquireSRWLockExclusive((PSRWLOCK)&pFVar10->ReadWriteLock);
        }
        LOCK();
        paVar1 = &pFVar10->ScheduledAccessCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        if ((aVar2 != (atomic<int>)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("PreviousAccessCount == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                               ,0x487,
                               L"Component header is still in use when it is being opened for write!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar7 = (TComponentLock<UE::MovieScene::TWriteOptional<double>_> *)(*pcVar5)();
          return pTVar7;
        }
        lVar4 = *(longlong *)__return_storage_ptr__;
        if (lVar4 != 0) {
          uVar9 = *(ulonglong *)&__return_storage_ptr__->field_0x8;
          if (*(ulonglong *)&__return_storage_ptr__->field_0x8 < *(ulonglong *)(lVar4 + 0x28)) {
            uVar9 = *(ulonglong *)(lVar4 + 0x28);
          }
          *(ulonglong *)(lVar4 + 0x28) = uVar9;
          LOCK();
          *(int *)(*(longlong *)__return_storage_ptr__ + 0x30) =
               *(int *)(*(longlong *)__return_storage_ptr__ + 0x30) + -1;
          UNLOCK();
          if (*(int *)&__return_storage_ptr__->field_0x10 == 1) {
            ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)__return_storage_ptr__ + 0x20));
          }
        }
        *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x10 = EVar3;
        *(FComponentHeader **)__return_storage_ptr__ = pFVar10;
        puVar11 = (undefined8 *)&__return_storage_ptr__->field_0x18;
        if (__return_storage_ptr__ == (TComponentLock<UE::MovieScene::TWriteOptional<double>_> *)0x0
           ) {
          puVar11 = (undefined8 *)0x0;
        }
        *(ulong64 *)&__return_storage_ptr__->field_0x8 = param_2.SystemSerial;
        *puVar11 = pFVar10->Components;
        return __return_storage_ptr__;
      }
      goto LAB_14683fae9;
    }
    pFVar10 = pFVar10 + 1;
  } while( true );
}

