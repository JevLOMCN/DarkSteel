// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// Apply @ 146192ba0

void __thiscall
UE::MovieScene::TAdd<double>::Apply(TAdd<double> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  double *pdVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  this_00 = param_1->ComponentHeaders;
  pFVar7 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar7; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_146192c19;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2db,L"");
  this_00 = (FComponentHeader *)0x0;
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_146192c19:
  if ((this_00->Sizeof == '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Header.IsTag()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                         ,0x1fb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar3 = param_1->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
  }
  LOCK();
  paVar1 = &this_00->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreviousAccessCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x487,
                         L"Component header is still in use when it is being opened for write!"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pdVar6 = FComponentHeader::GetValuePtr(this_00,param_2);
  if (((this->Payload).bIsSet == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *pdVar6 = (this->Payload).TypedValue;
  if ((this->Payload).bIsSet != false) {
    (this->Payload).bIsSet = false;
  }
  pFVar7 = (FComponentHeader *)0x0;
  if ((FComponentHeader *)this_00->SerialNumber != (FComponentHeader *)0x0) {
    pFVar7 = (FComponentHeader *)this_00->SerialNumber;
  }
  this_00->SerialNumber = (ulong64)pFVar7;
  LOCK();
  this_00->ScheduledAccessCount = (atomic<int>)((int)this_00->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
  }
  return;
}

// Apply @ 146192d20

void __thiscall
UE::MovieScene::TAdd<FMovieSceneSequenceID>::Apply
          (TAdd<FMovieSceneSequenceID> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  uint *puVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  this_00 = param_1->ComponentHeaders;
  pFVar7 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar7; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_146192d99;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2db,L"");
  this_00 = (FComponentHeader *)0x0;
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_146192d99:
  if ((this_00->Sizeof == '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Header.IsTag()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                         ,0x1fb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar3 = param_1->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
  }
  LOCK();
  paVar1 = &this_00->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreviousAccessCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x487,
                         L"Component header is still in use when it is being opened for write!"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar6 = FComponentHeader::GetValuePtr(this_00,param_2);
  if (((this->Payload).bIsSet == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *puVar6 = (this->Payload).TypedValue.Value;
  if ((this->Payload).bIsSet != false) {
    (this->Payload).bIsSet = false;
  }
  pFVar7 = (FComponentHeader *)0x0;
  if ((FComponentHeader *)this_00->SerialNumber != (FComponentHeader *)0x0) {
    pFVar7 = (FComponentHeader *)this_00->SerialNumber;
  }
  this_00->SerialNumber = (ulong64)pFVar7;
  LOCK();
  this_00->ScheduledAccessCount = (atomic<int>)((int)this_00->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
  }
  return;
}

// Apply @ 146192ea0

void __thiscall
UE::MovieScene::TAdd<UE::MovieScene::FRootInstanceHandle>::Apply
          (TAdd<UE::MovieScene::FRootInstanceHandle> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  FRootInstanceHandle *pFVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  this_00 = param_1->ComponentHeaders;
  pFVar7 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar7; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == this->_padding_) goto LAB_146192f19;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2db,L"");
  this_00 = (FComponentHeader *)0x0;
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_146192f19:
  if ((this_00->Sizeof == '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Header.IsTag()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                         ,0x1fb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar3 = param_1->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
  }
  LOCK();
  paVar1 = &this_00->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreviousAccessCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x487,
                         L"Component header is still in use when it is being opened for write!"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = FComponentHeader::GetValuePtr(this_00,param_2);
  if (((this->Payload).bIsSet == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *pFVar6 = (this->Payload).TypedValue;
  if ((this->Payload).bIsSet != false) {
    (this->Payload).bIsSet = false;
  }
  pFVar7 = (FComponentHeader *)0x0;
  if ((FComponentHeader *)this_00->SerialNumber != (FComponentHeader *)0x0) {
    pFVar7 = (FComponentHeader *)this_00->SerialNumber;
  }
  this_00->SerialNumber = (ulong64)pFVar7;
  LOCK();
  this_00->ScheduledAccessCount = (atomic<int>)((int)this_00->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
  }
  return;
}

// Apply @ 1462071d0

void __thiscall
UE::MovieScene::TAdd<FGuid>::Apply(TAdd<FGuid> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  uint *puVar9;
  FComponentHeader *this_00;
  FComponentHeader *pFVar10;
  
  this_00 = param_1->ComponentHeaders;
  pFVar10 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar10; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_146207249;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2db,L"");
  this_00 = (FComponentHeader *)0x0;
  if (bVar8) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_146207249:
  if ((this_00->Sizeof == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Header.IsTag()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                         ,0x1fb,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar3 = param_1->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
  }
  LOCK();
  paVar1 = &this_00->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreviousAccessCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x487,
                         L"Component header is still in use when it is being opened for write!"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar9 = FComponentHeader::GetValuePtr(this_00,param_2);
  if (((this->Payload).bIsSet == false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar5 = (this->Payload).TypedValue.B;
  uVar6 = (this->Payload).TypedValue.C;
  uVar7 = (this->Payload).TypedValue.D;
  *puVar9 = (this->Payload).TypedValue.A;
  puVar9[1] = uVar5;
  puVar9[2] = uVar6;
  puVar9[3] = uVar7;
  if ((this->Payload).bIsSet != false) {
    (this->Payload).bIsSet = false;
  }
  pFVar10 = (FComponentHeader *)0x0;
  if ((FComponentHeader *)this_00->SerialNumber != (FComponentHeader *)0x0) {
    pFVar10 = (FComponentHeader *)this_00->SerialNumber;
  }
  this_00->SerialNumber = (ulong64)pFVar10;
  LOCK();
  this_00->ScheduledAccessCount = (atomic<int>)((int)this_00->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
  }
  return;
}

// Apply @ 146207350

void __thiscall
UE::MovieScene::TAdd<FMovieSceneEvaluationHookComponent>::Apply
          (TAdd<FMovieSceneEvaluationHookComponent> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  UObject *pUVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined8 *puVar10;
  FComponentHeader *this_00;
  FComponentHeader *pFVar11;
  
  this_00 = param_1->ComponentHeaders;
  pFVar11 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar11; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_1462073c9;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2db,L"");
  this_00 = (FComponentHeader *)0x0;
  if (bVar9) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1462073c9:
  if ((this_00->Sizeof == '\0') &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Header.IsTag()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                         ,0x1fb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EVar3 = param_1->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
  }
  LOCK();
  paVar1 = &this_00->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreviousAccessCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x487,
                         L"Component header is still in use when it is being opened for write!"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar10 = FComponentHeader::GetValuePtr(this_00,param_2);
  if (((this->Payload).bIsSet == false) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = *(UObject **)&(this->Payload).TypedValue.Interface, pUVar4 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar4);
  }
  *puVar10 = *(undefined8 *)&(this->Payload).TypedValue.Interface;
  puVar10[1] = *(undefined8 *)&(this->Payload).TypedValue.Interface.field_0x8;
  uVar6 = (this->Payload).TypedValue.ObjectBindingID.B;
  uVar7 = (this->Payload).TypedValue.ObjectBindingID.C;
  uVar8 = (this->Payload).TypedValue.ObjectBindingID.D;
  *(uint *)(puVar10 + 2) = (this->Payload).TypedValue.ObjectBindingID.A;
  *(uint *)((longlong)puVar10 + 0x14) = uVar6;
  *(uint *)(puVar10 + 3) = uVar7;
  *(uint *)((longlong)puVar10 + 0x1c) = uVar8;
  if ((this->Payload).bIsSet != false) {
    (this->Payload).bIsSet = false;
  }
  pFVar11 = (FComponentHeader *)0x0;
  if ((FComponentHeader *)this_00->SerialNumber != (FComponentHeader *)0x0) {
    pFVar11 = (FComponentHeader *)this_00->SerialNumber;
  }
  this_00->SerialNumber = (ulong64)pFVar11;
  LOCK();
  this_00->ScheduledAccessCount = (atomic<int>)((int)this_00->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
  }
  return;
}

// Apply @ 1462a3700

void __thiscall
UE::MovieScene::TAdd<int>::Apply(TAdd<int> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  int *piVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  this_00 = param_1->ComponentHeaders;
  pFVar7 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar7; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_1462a3779;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2db,L"");
  this_00 = (FComponentHeader *)0x0;
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1462a3779:
  if ((this_00->Sizeof == '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Header.IsTag()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                         ,0x1fb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar3 = param_1->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
  }
  LOCK();
  paVar1 = &this_00->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreviousAccessCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x487,
                         L"Component header is still in use when it is being opened for write!"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  piVar6 = FComponentHeader::GetValuePtr(this_00,param_2);
  if (((this->Payload).bIsSet == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *piVar6 = (this->Payload).TypedValue;
  if ((this->Payload).bIsSet != false) {
    (this->Payload).bIsSet = false;
  }
  pFVar7 = (FComponentHeader *)0x0;
  if ((FComponentHeader *)this_00->SerialNumber != (FComponentHeader *)0x0) {
    pFVar7 = (FComponentHeader *)this_00->SerialNumber;
  }
  this_00->SerialNumber = (ulong64)pFVar7;
  LOCK();
  this_00->ScheduledAccessCount = (atomic<int>)((int)this_00->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
  }
  return;
}

// Apply @ 1462a3880

void __thiscall
UE::MovieScene::TAdd<float>::Apply(TAdd<float> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  float *pfVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  this_00 = param_1->ComponentHeaders;
  pFVar7 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar7; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_1462a38f9;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2db,L"");
  this_00 = (FComponentHeader *)0x0;
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1462a38f9:
  if ((this_00->Sizeof == '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Header.IsTag()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                         ,0x1fb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar3 = param_1->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
  }
  LOCK();
  paVar1 = &this_00->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreviousAccessCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x487,
                         L"Component header is still in use when it is being opened for write!"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pfVar6 = FComponentHeader::GetValuePtr(this_00,param_2);
  if (((this->Payload).bIsSet == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *pfVar6 = (this->Payload).TypedValue;
  if ((this->Payload).bIsSet != false) {
    (this->Payload).bIsSet = false;
  }
  pFVar7 = (FComponentHeader *)0x0;
  if ((FComponentHeader *)this_00->SerialNumber != (FComponentHeader *)0x0) {
    pFVar7 = (FComponentHeader *)this_00->SerialNumber;
  }
  this_00->SerialNumber = (ulong64)pFVar7;
  LOCK();
  this_00->ScheduledAccessCount = (atomic<int>)((int)this_00->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
  }
  return;
}

// Apply @ 1462a3a00

void __thiscall
UE::MovieScene::TAdd<FString>::Apply(TAdd<FString> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *puVar7;
  FComponentHeader *this_00;
  FComponentHeader *pFVar8;
  TOptional<FString> *pTVar9;
  
  this_00 = param_1->ComponentHeaders;
  pFVar8 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar8; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_1462a3a79;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2db,L"");
  this_00 = (FComponentHeader *)0x0;
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1462a3a79:
  if ((this_00->Sizeof == '\0') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Header.IsTag()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                         ,0x1fb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EVar3 = param_1->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
  }
  LOCK();
  paVar1 = &this_00->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreviousAccessCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x487,
                         L"Component header is still in use when it is being opened for write!"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar7 = FComponentHeader::GetValuePtr(this_00,param_2);
  pTVar9 = &this->Payload;
  if ((*(int *)((longlong)&(this->Payload).field0_0x0 + 0xc) == -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((TOptional<FString> *)puVar7 != pTVar9) {
    if ((void *)*puVar7 != (void *)0x0) {
      FMemory::Free((void *)*puVar7);
    }
    *puVar7 = (pTVar9->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
    (pTVar9->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)((longlong)&(this->Payload).field0_0x0 + 8);
    *(undefined4 *)((longlong)puVar7 + 0xc) =
         *(undefined4 *)((longlong)&(this->Payload).field0_0x0 + 0xc);
    *(int *)((longlong)&(this->Payload).field0_0x0 + 8) = 0;
    *(int *)((longlong)&(this->Payload).field0_0x0 + 0xc) = 0;
  }
  if (*(int *)((longlong)&(this->Payload).field0_0x0 + 0xc) != -1) {
    pFVar4 = (pTVar9->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar9->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&(this->Payload).field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&(this->Payload).field0_0x0 + 0xc) = 0xffffffff;
  }
  pFVar8 = (FComponentHeader *)0x0;
  if ((FComponentHeader *)this_00->SerialNumber != (FComponentHeader *)0x0) {
    pFVar8 = (FComponentHeader *)this_00->SerialNumber;
  }
  this_00->SerialNumber = (ulong64)pFVar8;
  LOCK();
  this_00->ScheduledAccessCount = (atomic<int>)((int)this_00->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
  }
  return;
}

