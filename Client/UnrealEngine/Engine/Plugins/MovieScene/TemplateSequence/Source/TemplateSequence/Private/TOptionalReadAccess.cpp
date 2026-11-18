// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 1

// LockComponentData @ 14ac7a970

TComponentLock<UE::MovieScene::TReadOptional<FMovieSceneSequenceID>_> * __thiscall
UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>::LockComponentData
          (TOptionalReadAccess<FMovieSceneSequenceID> *this,
          TComponentLock<UE::MovieScene::TReadOptional<FMovieSceneSequenceID>_>
          *__return_storage_ptr__,FEntityAllocation *param_1,FEntityAllocationWriteContext param_2)

{
  int *piVar1;
  EComponentHeaderLockMode EVar2;
  FComponentHeader *pFVar3;
  FComponentHeader *pFVar4;
  undefined8 *puVar5;
  
  pFVar4 = param_1->ComponentHeaders;
  pFVar3 = pFVar4 + param_1->NumComponents;
  do {
    if (pFVar4 == pFVar3) {
LAB_14ac7a9b3:
      *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      return __return_storage_ptr__;
    }
    if ((pFVar4->ComponentType).Value == *(ushort *)this) {
      if (pFVar4 != (FComponentHeader *)0x0) {
        EVar2 = param_1->LockMode;
        *(undefined8 *)__return_storage_ptr__ = 0;
        *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
        if (EVar2 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar4->ReadWriteLock);
        }
        LOCK();
        pFVar4->ScheduledAccessCount = (atomic<int>)((int)pFVar4->ScheduledAccessCount + 1);
        UNLOCK();
        if (*(longlong *)__return_storage_ptr__ != 0) {
          LOCK();
          piVar1 = (int *)(*(longlong *)__return_storage_ptr__ + 0x30);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          if (*(int *)&__return_storage_ptr__->field_0x8 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)__return_storage_ptr__ + 0x20));
          }
        }
        *(EComponentHeaderLockMode *)&__return_storage_ptr__->field_0x8 = EVar2;
        *(FComponentHeader **)__return_storage_ptr__ = pFVar4;
        puVar5 = (undefined8 *)&__return_storage_ptr__->field_0x10;
        if (__return_storage_ptr__ ==
            (TComponentLock<UE::MovieScene::TReadOptional<FMovieSceneSequenceID>_> *)0x0) {
          puVar5 = (undefined8 *)0x0;
        }
        *puVar5 = pFVar4->Components;
        return __return_storage_ptr__;
      }
      goto LAB_14ac7a9b3;
    }
    pFVar4 = pFVar4 + 1;
  } while( true );
}

