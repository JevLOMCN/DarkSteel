// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 15

// Apply @ 1460aa4f0

void __thiscall
UE::MovieScene::TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_>::Apply
          (TAddConditional<TObjectPtr<UMovieSceneCondition_const_>_> *this,
          FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  UMovieSceneCondition *pUVar4;
  code *pcVar5;
  bool bVar6;
  TObjectPtr<UMovieSceneCondition_const_>_u_0 *pTVar7;
  FComponentHeader *this_00;
  FComponentHeader *pFVar8;
  
  if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
    this_00 = param_1->ComponentHeaders;
    pFVar8 = this_00 + param_1->NumComponents;
    for (; this_00 != pFVar8; this_00 = this_00 + 1) {
      if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_1460aa56e;
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
LAB_1460aa56e:
    if ((this_00->Sizeof == '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Header.IsTag()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                           ,0x216,L""), bVar6)) {
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
    pTVar7 = FComponentHeader::GetValuePtr(this_00,param_2);
    if (((this->Payload).bIsSet == false) &&
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
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 = (this->Payload).TypedValue.field0_0x0.DebugPtr,
       pUVar4 != (UMovieSceneCondition *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar4);
    }
    *pTVar7 = (this->Payload).TypedValue.field0_0x0;
    if ((this->Payload).bIsSet != false) {
      (this->Payload).bIsSet = false;
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
  }
  return;
}

// Apply @ 1460aa690

void __thiscall
UE::MovieScene::TAddConditional<UE::MovieScene::FInstanceHandle>::Apply
          (TAddConditional<UE::MovieScene::FInstanceHandle> *this,FEntityAllocation *param_1,
          int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  FInstanceHandle *pFVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  if (this->field_0x2 != '\0') {
    this_00 = param_1->ComponentHeaders;
    pFVar7 = this_00 + param_1->NumComponents;
    for (; this_00 != pFVar7; this_00 = this_00 + 1) {
      if ((this_00->ComponentType).Value == *(ushort *)this) goto LAB_1460aa70e;
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
LAB_1460aa70e:
    if ((this_00->Sizeof == '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Header.IsTag()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                           ,0x216,L""), bVar5)) {
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
  }
  return;
}

// Apply @ 1460aa810

void __thiscall
UE::MovieScene::TAddConditional<FMovieSceneSequenceID>::Apply
          (TAddConditional<FMovieSceneSequenceID> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  uint *puVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
    this_00 = param_1->ComponentHeaders;
    pFVar7 = this_00 + param_1->NumComponents;
    for (; this_00 != pFVar7; this_00 = this_00 + 1) {
      if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_1460aa88e;
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
LAB_1460aa88e:
    if ((this_00->Sizeof == '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Header.IsTag()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                           ,0x216,L""), bVar5)) {
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
  }
  return;
}

// Apply @ 1460aa990

void __thiscall
UE::MovieScene::TAddConditional<UE::MovieScene::FRootInstanceHandle>::Apply
          (TAddConditional<UE::MovieScene::FRootInstanceHandle> *this,FEntityAllocation *param_1,
          int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  FRootInstanceHandle *pFVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  if (this->field_0x2 != '\0') {
    this_00 = param_1->ComponentHeaders;
    pFVar7 = this_00 + param_1->NumComponents;
    for (; this_00 != pFVar7; this_00 = this_00 + 1) {
      if ((this_00->ComponentType).Value == *(ushort *)this) goto LAB_1460aaa0e;
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
LAB_1460aaa0e:
    if ((this_00->Sizeof == '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Header.IsTag()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                           ,0x216,L""), bVar5)) {
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
  }
  return;
}

// Apply @ 146207500

void __thiscall
UE::MovieScene::TAddConditional<short>::Apply
          (TAddConditional<short> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  short *psVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
    this_00 = param_1->ComponentHeaders;
    pFVar7 = this_00 + param_1->NumComponents;
    for (; this_00 != pFVar7; this_00 = this_00 + 1) {
      if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14620757e;
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
LAB_14620757e:
    if ((this_00->Sizeof == '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Header.IsTag()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                           ,0x216,L""), bVar5)) {
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
    psVar6 = FComponentHeader::GetValuePtr(this_00,param_2);
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
    *psVar6 = (this->Payload).TypedValue;
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
  }
  return;
}

// Apply @ 146207680

void __thiscall
UE::MovieScene::TAddConditional<int>::Apply
          (TAddConditional<int> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  int *piVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
    this_00 = param_1->ComponentHeaders;
    pFVar7 = this_00 + param_1->NumComponents;
    for (; this_00 != pFVar7; this_00 = this_00 + 1) {
      if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_1462076fe;
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
LAB_1462076fe:
    if ((this_00->Sizeof == '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Header.IsTag()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                           ,0x216,L""), bVar5)) {
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
  }
  return;
}

// Apply @ 146207800

void __thiscall
UE::MovieScene::TAddConditional<FEasingComponentData>::Apply
          (TAddConditional<FEasingComponentData> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  UMovieSceneSection *pUVar4;
  code *pcVar5;
  bool bVar6;
  TObjectPtr<UMovieSceneSection>_u_0 *pTVar7;
  FComponentHeader *this_00;
  FComponentHeader *pFVar8;
  
  if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
    this_00 = param_1->ComponentHeaders;
    pFVar8 = this_00 + param_1->NumComponents;
    for (; this_00 != pFVar8; this_00 = this_00 + 1) {
      if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14620787e;
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
LAB_14620787e:
    if ((this_00->Sizeof == '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Header.IsTag()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                           ,0x216,L""), bVar6)) {
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
    pTVar7 = FComponentHeader::GetValuePtr(this_00,param_2);
    if (((this->Payload).bIsSet == false) &&
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
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 = (this->Payload).TypedValue.Section.field0_0x0.DebugPtr,
       pUVar4 != (UMovieSceneSection *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar4);
    }
    *pTVar7 = (this->Payload).TypedValue.Section.field0_0x0;
    if ((this->Payload).bIsSet != false) {
      (this->Payload).bIsSet = false;
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
  }
  return;
}

// Apply @ 1462079a0

void __thiscall
UE::MovieScene::TAddConditional<FFrameTime>::Apply
          (TAddConditional<FFrameTime> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  FFrameTime *pFVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
    this_00 = param_1->ComponentHeaders;
    pFVar7 = this_00 + param_1->NumComponents;
    for (; this_00 != pFVar7; this_00 = this_00 + 1) {
      if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_146207a1e;
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
LAB_146207a1e:
    if ((this_00->Sizeof == '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Header.IsTag()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                           ,0x216,L""), bVar5)) {
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
  }
  return;
}

// Apply @ 146207b20

void __thiscall
UE::MovieScene::TAddConditional<FGuid>::Apply
          (TAddConditional<FGuid> *this,FEntityAllocation *param_1,int param_2)

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
  
  if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
    this_00 = param_1->ComponentHeaders;
    pFVar10 = this_00 + param_1->NumComponents;
    for (; this_00 != pFVar10; this_00 = this_00 + 1) {
      if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_146207ba0;
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
LAB_146207ba0:
    if ((this_00->Sizeof == '\0') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Header.IsTag()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                           ,0x216,L""), bVar8)) {
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
  }
  return;
}

// Apply @ 146207ca0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationInstance>::Apply
          (TAddConditional<UE::MovieScene::FInterrogationInstance> *this,FEntityAllocation *param_1,
          int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
    this_00 = param_1->ComponentHeaders;
    pFVar7 = this_00 + param_1->NumComponents;
    for (; this_00 != pFVar7; this_00 = this_00 + 1) {
      if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_146207d1e;
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
LAB_146207d1e:
    if ((this_00->Sizeof == '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Header.IsTag()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                           ,0x216,L""), bVar5)) {
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
    *puVar6 = (this->Payload).TypedValue.Sequence;
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
  }
  return;
}

// Apply @ 146207e20

void __thiscall
UE::MovieScene::TAddConditional<UE::MovieScene::FInterrogationKey>::Apply
          (TAddConditional<UE::MovieScene::FInterrogationKey> *this,FEntityAllocation *param_1,
          int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  FInterrogationKey *pFVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
    this_00 = param_1->ComponentHeaders;
    pFVar7 = this_00 + param_1->NumComponents;
    for (; this_00 != pFVar7; this_00 = this_00 + 1) {
      if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_146207e9e;
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
LAB_146207e9e:
    if ((this_00->Sizeof == '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Header.IsTag()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                           ,0x216,L""), bVar5)) {
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
  }
  return;
}

// Apply @ 146207fa0

void __thiscall
UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>::Apply
          (TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> *this,
          FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  EMovieSceneBindingLifetimeState *pEVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  if (this->field_0x2 != '\0') {
    this_00 = param_1->ComponentHeaders;
    pFVar7 = this_00 + param_1->NumComponents;
    for (; this_00 != pFVar7; this_00 = this_00 + 1) {
      if ((this_00->ComponentType).Value == *(ushort *)this) goto LAB_14620801e;
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
LAB_14620801e:
    if ((this_00->Sizeof == '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Header.IsTag()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                           ,0x216,L""), bVar5)) {
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
    pEVar6 = FComponentHeader::GetValuePtr(this_00,param_2);
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
    *pEVar6 = (this->Payload).TypedValue.BindingLifetimeState;
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
  }
  return;
}

// Apply @ 146208120

void __thiscall
UE::MovieScene::TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_>::Apply
          (TAddConditional<TSubclassOf<UMovieSceneBlenderSystem>_> *this,FEntityAllocation *param_1,
          int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  UClass *pUVar4;
  code *pcVar5;
  bool bVar6;
  TObjectPtr<UClass>_u_0 *pTVar7;
  FComponentHeader *this_00;
  FComponentHeader *pFVar8;
  
  if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
    this_00 = param_1->ComponentHeaders;
    pFVar8 = this_00 + param_1->NumComponents;
    for (; this_00 != pFVar8; this_00 = this_00 + 1) {
      if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14620819e;
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
LAB_14620819e:
    if ((this_00->Sizeof == '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Header.IsTag()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                           ,0x216,L""), bVar6)) {
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
    pTVar7 = FComponentHeader::GetValuePtr(this_00,param_2);
    if (((this->Payload).bIsSet == false) &&
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
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 = (this->Payload).TypedValue.Class.field0_0x0.DebugPtr, pUVar4 != (UClass *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar4);
    }
    *pTVar7 = (this->Payload).TypedValue.Class.field0_0x0;
    if ((this->Payload).bIsSet != false) {
      (this->Payload).bIsSet = false;
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
  }
  return;
}

// Apply @ 1462a3bc0

void __thiscall
UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>::Apply
          (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *this,FEntityAllocation *param_1,
          int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
    this_00 = param_1->ComponentHeaders;
    pFVar7 = this_00 + param_1->NumComponents;
    for (; this_00 != pFVar7; this_00 = this_00 + 1) {
      if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_1462a3c3e;
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
LAB_1462a3c3e:
    if ((this_00->Sizeof == '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Header.IsTag()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                           ,0x216,L""), bVar5)) {
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
    *puVar6 = (this->Payload).TypedValue.Source;
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
  }
  return;
}

// Apply @ 1462a3d40

void __thiscall
UE::MovieScene::TAddConditional<FString>::Apply
          (TAddConditional<FString> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  TOptional<FString> *pTVar2;
  atomic<int> aVar3;
  EComponentHeaderLockMode EVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 *puVar8;
  FComponentHeader *this_00;
  FComponentHeader *pFVar9;
  
  if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
    this_00 = param_1->ComponentHeaders;
    pFVar9 = this_00 + param_1->NumComponents;
    for (; this_00 != pFVar9; this_00 = this_00 + 1) {
      if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_1462a3dbf;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Header",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                       ,0x2db,L"");
    this_00 = (FComponentHeader *)0x0;
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
LAB_1462a3dbf:
    if ((this_00->Sizeof == '\0') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Header.IsTag()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                           ,0x216,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    EVar4 = param_1->LockMode;
    if (EVar4 == Mutex) {
      AcquireSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
    }
    LOCK();
    paVar1 = &this_00->ScheduledAccessCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    if ((aVar3 != (atomic<int>)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("PreviousAccessCount == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x487,
                           L"Component header is still in use when it is being opened for write!"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar8 = FComponentHeader::GetValuePtr(this_00,param_2);
    pTVar2 = &this->Payload;
    if ((*(int *)((longlong)&(this->Payload).field0_0x0 + 0xc) == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((TOptional<FString> *)puVar8 != pTVar2) {
      if ((void *)*puVar8 != (void *)0x0) {
        FMemory::Free((void *)*puVar8);
      }
      *puVar8 = (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
      (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(puVar8 + 1) = *(undefined4 *)((longlong)&(this->Payload).field0_0x0 + 8);
      *(undefined4 *)((longlong)puVar8 + 0xc) =
           *(undefined4 *)((longlong)&(this->Payload).field0_0x0 + 0xc);
      *(int *)((longlong)&(this->Payload).field0_0x0 + 8) = 0;
      *(int *)((longlong)&(this->Payload).field0_0x0 + 0xc) = 0;
    }
    if (*(int *)((longlong)&(this->Payload).field0_0x0 + 0xc) != -1) {
      pFVar5 = (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar2->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)((longlong)&(this->Payload).field0_0x0 + 8) = 0;
      *(undefined4 *)((longlong)&(this->Payload).field0_0x0 + 0xc) = 0xffffffff;
    }
    pFVar9 = (FComponentHeader *)0x0;
    if ((FComponentHeader *)this_00->SerialNumber != (FComponentHeader *)0x0) {
      pFVar9 = (FComponentHeader *)this_00->SerialNumber;
    }
    this_00->SerialNumber = (ulong64)pFVar9;
    LOCK();
    this_00->ScheduledAccessCount = (atomic<int>)((int)this_00->ScheduledAccessCount + -1);
    UNLOCK();
    if (EVar4 == Mutex) {
      ReleaseSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
    }
  }
  return;
}

