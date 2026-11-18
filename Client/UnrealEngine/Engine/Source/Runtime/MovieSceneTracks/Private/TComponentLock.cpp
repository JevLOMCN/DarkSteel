// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// TComponentLock<UE::MovieScene::TReadOptional<double>_> @ 14660cde0

TComponentLock<UE::MovieScene::TReadOptional<double>_> * __thiscall
UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>::
TComponentLock<UE::MovieScene::TReadOptional<double>_>
          (TComponentLock<UE::MovieScene::TReadOptional<double>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  return this;
}

// ~TComponentLock<UE::MovieScene::TReadOptional<double>_> @ 14661bf40

void __thiscall
UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>::
~TComponentLock<UE::MovieScene::TReadOptional<double>_>
          (TComponentLock<UE::MovieScene::TReadOptional<double>_> *this)

{
  int *piVar1;
  
  if (*(longlong *)this != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)this + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014661bf59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)this + 0x20));
      return;
    }
  }
  return;
}

// TComponentLock<UE::MovieScene::TReadOptional<double>_> @ 146806170

TComponentLock<UE::MovieScene::TReadOptional<double>_> * __thiscall
UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>::
TComponentLock<UE::MovieScene::TReadOptional<double>_>
          (TComponentLock<UE::MovieScene::TReadOptional<double>_> *this,FComponentHeader *param_1,
          EComponentHeaderLockMode param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  if (param_1 != (FComponentHeader *)0x0) {
    if (param_2 == Mutex) {
      AcquireSRWLockShared((PSRWLOCK)&param_1->ReadWriteLock);
    }
    LOCK();
    param_1->ScheduledAccessCount = (atomic<int>)((int)param_1->ScheduledAccessCount + 1);
    UNLOCK();
    if (*(longlong *)this != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)this + 0x30);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(int *)&this->field_0x8 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)this + 0x20));
      }
    }
    *(FComponentHeader **)this = param_1;
    *(EComponentHeaderLockMode *)&this->field_0x8 = param_2;
    plVar2 = (longlong *)&this->field_0x10;
    if (this == (TComponentLock<UE::MovieScene::TReadOptional<double>_> *)0x0) {
      plVar2 = (longlong *)0x0;
    }
    *plVar2 = (longlong)(param_1->Components + (longlong)param_3 * 8);
  }
  return this;
}

