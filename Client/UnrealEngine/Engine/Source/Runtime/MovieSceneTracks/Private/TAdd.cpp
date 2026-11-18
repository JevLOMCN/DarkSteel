// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 33

// Apply @ 14663ccf0

void __thiscall
UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>::Apply
          (TAdd<UObject_*_(__cdecl*)(UObject_*)> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  this_00 = param_1->ComponentHeaders;
  pFVar7 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar7; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14663cd69;
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
LAB_14663cd69:
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
  *puVar6 = (this->Payload).TypedValue;
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

// Apply @ 14663ce70

void __thiscall
UE::MovieScene::TAdd<UE::MovieScene::FInterrogationKey>::Apply
          (TAdd<UE::MovieScene::FInterrogationKey> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  FInterrogationKey *pFVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  this_00 = param_1->ComponentHeaders;
  pFVar7 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar7; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14663cee9;
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
LAB_14663cee9:
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

// Apply @ 14663cff0

void __thiscall
UE::MovieScene::TAdd<FMovieSceneAudioComponentData>::Apply
          (TAdd<FMovieSceneAudioComponentData> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  UMovieSceneAudioSection *pUVar4;
  code *pcVar5;
  bool bVar6;
  TObjectPtr<UMovieSceneAudioSection>_u_0 *pTVar7;
  FComponentHeader *this_00;
  FComponentHeader *pFVar8;
  
  this_00 = param_1->ComponentHeaders;
  pFVar8 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar8; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14663d069;
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
LAB_14663d069:
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
     pUVar4 != (UMovieSceneAudioSection *)0x0)) {
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
  return;
}

// Apply @ 14663d180

void __thiscall
UE::MovieScene::TAdd<FMovieSceneBlendChannelID>::Apply
          (TAdd<FMovieSceneBlendChannelID> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  FMovieSceneBlendChannelID *pFVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  this_00 = param_1->ComponentHeaders;
  pFVar7 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar7; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == this->_padding_) goto LAB_14663d1f9;
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
LAB_14663d1f9:
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

// Apply @ 14663d300

void __thiscall
UE::MovieScene::TAdd<FMovieSceneObjectBindingID>::Apply
          (TAdd<FMovieSceneObjectBindingID> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  uint *puVar10;
  FComponentHeader *this_00;
  FComponentHeader *pFVar11;
  
  this_00 = param_1->ComponentHeaders;
  pFVar11 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar11; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14663d379;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2db,L"");
  this_00 = (FComponentHeader *)0x0;
  if (bVar9) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14663d379:
  if ((this_00->Sizeof == '\0') &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Header.IsTag()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                         ,0x1fb,L""), bVar9)) {
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
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreviousAccessCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x487,
                         L"Component header is still in use when it is being opened for write!"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
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
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar5 = (this->Payload).TypedValue.Guid.B;
  uVar6 = (this->Payload).TypedValue.Guid.C;
  uVar7 = (this->Payload).TypedValue.Guid.D;
  *puVar10 = (this->Payload).TypedValue.Guid.A;
  puVar10[1] = uVar5;
  puVar10[2] = uVar6;
  puVar10[3] = uVar7;
  iVar8 = (this->Payload).TypedValue.ResolveParentIndex;
  puVar10[4] = (this->Payload).TypedValue.SequenceID;
  puVar10[5] = iVar8;
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

// Apply @ 14663d490

void __thiscall
UE::MovieScene::TAdd<FMovieScenePropertyBinding>::Apply
          (TAdd<FMovieScenePropertyBinding> *this,FEntityAllocation *param_1,int param_2)

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
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14663d509;
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
LAB_14663d509:
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
  uVar5 = (this->Payload).TypedValue.PropertyName.Number;
  uVar6 = (this->Payload).TypedValue.PropertyPath.ComparisonIndex.Value;
  uVar7 = (this->Payload).TypedValue.PropertyPath.Number;
  *puVar9 = (this->Payload).TypedValue.PropertyName.ComparisonIndex.Value;
  puVar9[1] = uVar5;
  puVar9[2] = uVar6;
  puVar9[3] = uVar7;
  puVar9[4] = *(uint *)&(this->Payload).TypedValue.bCanUseClassLookup;
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

// Apply @ 14663d610

void __thiscall
UE::MovieScene::TAdd<FPerlinNoiseParams>::Apply
          (TAdd<FPerlinNoiseParams> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  bool bVar9;
  float *pfVar10;
  FComponentHeader *this_00;
  FComponentHeader *pFVar11;
  
  this_00 = param_1->ComponentHeaders;
  pFVar11 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar11; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14663d689;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2db,L"");
  this_00 = (FComponentHeader *)0x0;
  if (bVar9) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14663d689:
  if ((this_00->Sizeof == '\0') &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Header.IsTag()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                         ,0x1fb,L""), bVar9)) {
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
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreviousAccessCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x487,
                         L"Component header is still in use when it is being opened for write!"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pfVar10 = FComponentHeader::GetValuePtr(this_00,param_2);
  if (((this->Payload).bIsSet == false) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  fVar5 = *(float *)&(this->Payload).TypedValue.field_0x4;
  fVar6 = *(float *)&(this->Payload).TypedValue.Amplitude;
  fVar7 = *(float *)((longlong)&(this->Payload).TypedValue.Amplitude + 4);
  *pfVar10 = (this->Payload).TypedValue.Frequency;
  pfVar10[1] = fVar5;
  pfVar10[2] = fVar6;
  pfVar10[3] = fVar7;
  uVar8 = *(undefined4 *)&(this->Payload).TypedValue.field_0x14;
  pfVar10[4] = (this->Payload).TypedValue.Offset;
  pfVar10[5] = (float)uVar8;
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

// Apply @ 14663d7a0

void __thiscall
UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>::Apply
          (TAdd<UE::MovieScene::FSourceFloatChannel> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  this_00 = param_1->ComponentHeaders;
  pFVar7 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar7; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14663d819;
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
LAB_14663d819:
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
  return;
}

// Apply @ 14663d920

void __thiscall
UE::MovieScene::TAdd<FName>::Apply(TAdd<FName> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  TOptional<FName>_u_0 *pTVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  this_00 = param_1->ComponentHeaders;
  pFVar7 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar7; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14663d999;
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
LAB_14663d999:
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
  pTVar6 = FComponentHeader::GetValuePtr(this_00,param_2);
  if (((this->Payload).field0_0x0.TypedValue.ComparisonIndex.Value == 0xffffffff) &&
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
  *pTVar6 = (this->Payload).field0_0x0;
  if ((this->Payload).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    (this->Payload).field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
    (this->Payload).field0_0x0.TypedValue.Number = 0;
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

// TAdd<FMovieSceneCameraShakeComponentData> @ 14675dcd0

TAdd<FMovieSceneCameraShakeComponentData> * __thiscall
UE::MovieScene::TAdd<FMovieSceneCameraShakeComponentData>::TAdd<FMovieSceneCameraShakeComponentData>
          (TAdd<FMovieSceneCameraShakeComponentData> *this,
          TAdd<FMovieSceneCameraShakeComponentData> *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  *(short *)&this->_padding_ = (short)param_1->_padding_;
  (this->Payload).bIsSet = false;
  bVar1 = (param_1->Payload).bIsSet;
  (this->Payload).bIsSet = bVar1;
  if (bVar1 != false) {
    pUVar2 = (param_1->Payload).TypedValue.SectionData.ShakeClass.Class.field0_0x0.DebugPtr;
    (this->Payload).TypedValue.SectionData.ShakeClass.Class.field0_0x0.DebugPtr = pUVar2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->Payload).TypedValue.SectionData.PlayScale =
         (param_1->Payload).TypedValue.SectionData.PlayScale;
    (this->Payload).TypedValue.SectionData.PlaySpace =
         (param_1->Payload).TypedValue.SectionData.PlaySpace;
    dVar3 = (param_1->Payload).TypedValue.SectionData.UserDefinedPlaySpace.Yaw;
    (this->Payload).TypedValue.SectionData.UserDefinedPlaySpace.Pitch =
         (param_1->Payload).TypedValue.SectionData.UserDefinedPlaySpace.Pitch;
    (this->Payload).TypedValue.SectionData.UserDefinedPlaySpace.Yaw = dVar3;
    (this->Payload).TypedValue.SectionData.UserDefinedPlaySpace.Roll =
         (param_1->Payload).TypedValue.SectionData.UserDefinedPlaySpace.Roll;
    (this->Payload).TypedValue.SectionStartTime.Value =
         (param_1->Payload).TypedValue.SectionStartTime.Value;
    (this->Payload).TypedValue.SectionEndTime.Value =
         (param_1->Payload).TypedValue.SectionEndTime.Value;
    uVar4 = (param_1->Payload).TypedValue.SectionSignature.B;
    uVar5 = (param_1->Payload).TypedValue.SectionSignature.C;
    uVar6 = (param_1->Payload).TypedValue.SectionSignature.D;
    (this->Payload).TypedValue.SectionSignature.A = (param_1->Payload).TypedValue.SectionSignature.A
    ;
    (this->Payload).TypedValue.SectionSignature.B = uVar4;
    (this->Payload).TypedValue.SectionSignature.C = uVar5;
    (this->Payload).TypedValue.SectionSignature.D = uVar6;
  }
  return this;
}

// TAdd<FMovieSceneTrackInstanceComponent> @ 14675dd60

TAdd<FMovieSceneTrackInstanceComponent> * __thiscall
UE::MovieScene::TAdd<FMovieSceneTrackInstanceComponent>::TAdd<FMovieSceneTrackInstanceComponent>
          (TAdd<FMovieSceneTrackInstanceComponent> *this,
          TAdd<FMovieSceneTrackInstanceComponent> *param_1)

{
  bool bVar1;
  UMovieSceneSection *pUVar2;
  UClass *pUVar3;
  
  *(short *)&this->_padding_ = (short)param_1->_padding_;
  (this->Payload).bIsSet = false;
  bVar1 = (param_1->Payload).bIsSet;
  (this->Payload).bIsSet = bVar1;
  if (bVar1 != false) {
    pUVar2 = (param_1->Payload).TypedValue.Owner.field0_0x0.DebugPtr;
    (this->Payload).TypedValue.Owner.field0_0x0.DebugPtr = pUVar2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMovieSceneSection *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar2);
    }
    pUVar3 = (param_1->Payload).TypedValue.TrackInstanceClass.Class.field0_0x0.DebugPtr;
    (this->Payload).TypedValue.TrackInstanceClass.Class.field0_0x0.DebugPtr = pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar3);
    }
  }
  return this;
}

// Apply @ 14677af60

void __thiscall
UE::MovieScene::TAdd<UObject_*>::Apply(TAdd<UObject_*> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  this_00 = param_1->ComponentHeaders;
  pFVar7 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar7; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14677afd9;
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
LAB_14677afd9:
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
  *puVar6 = (this->Payload).TypedValue;
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

// Apply @ 14677b0e0

void __thiscall
UE::MovieScene::TAdd<FComponentMaterialInfo>::Apply
          (TAdd<FComponentMaterialInfo> *this,FEntityAllocation *param_1,int param_2)

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
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14677b159;
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
LAB_14677b159:
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
  uVar5 = (this->Payload).TypedValue.MaterialSlotName.Number;
  uVar6 = (this->Payload).TypedValue.MaterialSlotIndex;
  uVar7 = *(uint *)&(this->Payload).TypedValue.MaterialType;
  *puVar9 = (this->Payload).TypedValue.MaterialSlotName.ComparisonIndex.Value;
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

// Apply @ 14677b260

void __thiscall
UE::MovieScene::TAdd<FLevelVisibilityComponentData>::Apply
          (TAdd<FLevelVisibilityComponentData> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  UMovieSceneLevelVisibilitySection *pUVar4;
  code *pcVar5;
  bool bVar6;
  TObjectPtr<UMovieSceneLevelVisibilitySection_const_>_u_0 *pTVar7;
  FComponentHeader *this_00;
  FComponentHeader *pFVar8;
  
  this_00 = param_1->ComponentHeaders;
  pFVar8 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar8; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14677b2d9;
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
LAB_14677b2d9:
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
     pUVar4 != (UMovieSceneLevelVisibilitySection *)0x0)) {
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
  return;
}

// Apply @ 14677b3f0

void __thiscall
UE::MovieScene::TAdd<FMaterialParameterInfo>::Apply
          (TAdd<FMaterialParameterInfo> *this,FEntityAllocation *param_1,int param_2)

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
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14677b469;
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
LAB_14677b469:
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
  uVar5 = (this->Payload).TypedValue.Name.Number;
  uVar6 = *(uint *)&(this->Payload).TypedValue.Association;
  uVar7 = (this->Payload).TypedValue.Index;
  *puVar9 = (this->Payload).TypedValue.Name.ComparisonIndex.Value;
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

// Apply @ 14677b570

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::MovieScene::TAdd<FMovieSceneCameraShakeComponentData>::Apply
          (TAdd<FMovieSceneCameraShakeComponentData> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  UClass *pUVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  TObjectPtr<UClass>_u_0 TVar9;
  bool bVar10;
  TObjectPtr<UClass>_u_0 *pTVar11;
  FComponentHeader *this_00;
  FComponentHeader *pFVar12;
  
  this_00 = param_1->ComponentHeaders;
  pFVar12 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar12; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14677b5e8;
  }
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2db,L"");
  this_00 = (FComponentHeader *)0x0;
  if (bVar10) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14677b5e8:
  if ((this_00->Sizeof == '\0') &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Header.IsTag()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                          ,0x1fb,L""), bVar10)) {
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
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("PreviousAccessCount == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x487,
                          L"Component header is still in use when it is being opened for write!"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar11 = FComponentHeader::GetValuePtr(this_00,param_2);
  if (((this->Payload).bIsSet == false) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (this->Payload).TypedValue.SectionData.ShakeClass.Class.field0_0x0.DebugPtr,
     pUVar4 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  *pTVar11 = (this->Payload).TypedValue.SectionData.ShakeClass.Class.field0_0x0;
  *(float *)(pTVar11 + 1) = (this->Payload).TypedValue.SectionData.PlayScale;
  *(ECameraShakePlaySpace *)((longlong)pTVar11 + 0xc) =
       (this->Payload).TypedValue.SectionData.PlaySpace;
  TVar9 = (TObjectPtr<UClass>_u_0)(this->Payload).TypedValue.SectionData.UserDefinedPlaySpace.Yaw;
  pTVar11[2] = (TObjectPtr<UClass>_u_0)
               (this->Payload).TypedValue.SectionData.UserDefinedPlaySpace.Pitch;
  pTVar11[3] = TVar9;
  pTVar11[4] = (TObjectPtr<UClass>_u_0)
               (this->Payload).TypedValue.SectionData.UserDefinedPlaySpace.Roll;
  *(int *)(pTVar11 + 5) = (this->Payload).TypedValue.SectionStartTime.Value;
  *(int *)((longlong)pTVar11 + 0x2c) = (this->Payload).TypedValue.SectionEndTime.Value;
  uVar6 = (this->Payload).TypedValue.SectionSignature.B;
  uVar7 = (this->Payload).TypedValue.SectionSignature.C;
  uVar8 = (this->Payload).TypedValue.SectionSignature.D;
  *(uint *)(pTVar11 + 6) = (this->Payload).TypedValue.SectionSignature.A;
  *(uint *)((longlong)pTVar11 + 0x34) = uVar6;
  *(uint *)(pTVar11 + 7) = uVar7;
  *(uint *)((longlong)pTVar11 + 0x3c) = uVar8;
  if ((this->Payload).bIsSet != false) {
    (this->Payload).bIsSet = false;
  }
  pFVar12 = (FComponentHeader *)0x0;
  if ((FComponentHeader *)this_00->SerialNumber != (FComponentHeader *)0x0) {
    pFVar12 = (FComponentHeader *)this_00->SerialNumber;
  }
  this_00->SerialNumber = (ulong64)pFVar12;
  LOCK();
  this_00->ScheduledAccessCount = (atomic<int>)((int)this_00->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
  }
  return;
}

// Apply @ 14677b740

void __thiscall
UE::MovieScene::TAdd<FMovieSceneDataLayerComponentData>::Apply
          (TAdd<FMovieSceneDataLayerComponentData> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  UMovieSceneDataLayerSection *pUVar4;
  code *pcVar5;
  bool bVar6;
  TObjectPtr<UMovieSceneDataLayerSection_const_>_u_0 *pTVar7;
  FComponentHeader *this_00;
  FComponentHeader *pFVar8;
  
  this_00 = param_1->ComponentHeaders;
  pFVar8 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar8; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14677b7b9;
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
LAB_14677b7b9:
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
     pUVar4 != (UMovieSceneDataLayerSection *)0x0)) {
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
  return;
}

// Apply @ 14677b8d0

void __thiscall
UE::MovieScene::TAdd<FMovieSceneSkeletalAnimationComponentData>::Apply
          (TAdd<FMovieSceneSkeletalAnimationComponentData> *this,FEntityAllocation *param_1,
          int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  UMovieSceneSkeletalAnimationSection *pUVar4;
  code *pcVar5;
  bool bVar6;
  TObjectPtr<UMovieSceneSkeletalAnimationSection>_u_0 *pTVar7;
  FComponentHeader *this_00;
  FComponentHeader *pFVar8;
  
  this_00 = param_1->ComponentHeaders;
  pFVar8 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar8; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14677b949;
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
LAB_14677b949:
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
     pUVar4 != (UMovieSceneSkeletalAnimationSection *)0x0)) {
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
  return;
}

// Apply @ 14677ba60

void __thiscall
UE::MovieScene::TAdd<FMovieSceneTrackInstanceComponent>::Apply
          (TAdd<FMovieSceneTrackInstanceComponent> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  UMovieSceneSection *pUVar4;
  UClass *pUVar5;
  code *pcVar6;
  bool bVar7;
  TObjectPtr<UMovieSceneSection>_u_0 *pTVar8;
  FComponentHeader *this_00;
  FComponentHeader *pFVar9;
  
  this_00 = param_1->ComponentHeaders;
  pFVar9 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar9; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14677bad8;
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
LAB_14677bad8:
  if ((this_00->Sizeof == '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Header.IsTag()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityBuilder.h"
                         ,0x1fb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
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
  pTVar8 = FComponentHeader::GetValuePtr(this_00,param_2);
  if (((this->Payload).bIsSet == false) &&
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
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (this->Payload).TypedValue.Owner.field0_0x0.DebugPtr,
     pUVar4 != (UMovieSceneSection *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  *pTVar8 = (this->Payload).TypedValue.Owner.field0_0x0;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (this->Payload).TypedValue.TrackInstanceClass.Class.field0_0x0.DebugPtr,
     pUVar5 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar5);
  }
  *(TObjectPtr<UClass>_u_0 *)(pTVar8 + 1) =
       (this->Payload).TypedValue.TrackInstanceClass.Class.field0_0x0;
  if ((this->Payload).bIsSet != false) {
    (this->Payload).bIsSet = false;
  }
  pFVar9 = (FComponentHeader *)0x0;
  if ((FComponentHeader *)this_00->SerialNumber != (FComponentHeader *)0x0) {
    pFVar9 = (FComponentHeader *)this_00->SerialNumber;
  }
  this_00->SerialNumber = (ulong64)pFVar9;
  LOCK();
  this_00->ScheduledAccessCount = (atomic<int>)((int)this_00->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&this_00->ReadWriteLock);
  }
  return;
}

// Apply @ 14677bc10

void __thiscall
UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>::Apply
          (TAdd<UE::MovieScene::FObjectComponent> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  TObjectPtr<UObject>_u_0 *pTVar7;
  FComponentHeader *this_00;
  FComponentHeader *pFVar8;
  
  this_00 = param_1->ComponentHeaders;
  pFVar8 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar8; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14677bc89;
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
LAB_14677bc89:
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
     (pUVar4 = (this->Payload).TypedValue.ObjectPtr.field0_0x0.DebugPtr, pUVar4 != (UObject *)0x0))
  {
    GC::MarkAsReachable(pUVar4);
  }
  *pTVar7 = (this->Payload).TypedValue.ObjectPtr.field0_0x0;
  pTVar7[1] = *(TObjectPtr<UObject>_u_0 *)&(this->Payload).TypedValue.ObjectKey;
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
  return;
}

// Apply @ 14677bdb0

void __thiscall
UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>::Apply
          (TAdd<UE::MovieScene::FSourceByteChannel> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  this_00 = param_1->ComponentHeaders;
  pFVar7 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar7; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14677be29;
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
LAB_14677be29:
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
  return;
}

// Apply @ 14677bf30

void __thiscall
UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>::Apply
          (TAdd<UE::MovieScene::FSourceDoubleChannel> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  this_00 = param_1->ComponentHeaders;
  pFVar7 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar7; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14677bfa9;
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
LAB_14677bfa9:
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
  return;
}

// Apply @ 14677c0b0

void __thiscall
UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>::Apply
          (TAdd<UE::MovieScene::FSourceIntegerChannel> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  this_00 = param_1->ComponentHeaders;
  pFVar7 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar7; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14677c129;
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
LAB_14677c129:
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
  return;
}

// Apply @ 14677c230

void __thiscall
UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>::Apply
          (TAdd<UE::MovieScene::FSourceObjectPathChannel> *this,FEntityAllocation *param_1,
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
  
  this_00 = param_1->ComponentHeaders;
  pFVar7 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar7; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14677c2a9;
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
LAB_14677c2a9:
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
  return;
}

// Apply @ 14677c3b0

void __thiscall
UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>::Apply
          (TAdd<UE::MovieScene::FSourceStringChannel> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  this_00 = param_1->ComponentHeaders;
  pFVar7 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar7; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14677c429;
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
LAB_14677c429:
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
  return;
}

// Apply @ 14677c530

void __thiscall
UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>::Apply
          (TAdd<UE::MovieScene::FSourceTextChannel> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  this_00 = param_1->ComponentHeaders;
  pFVar7 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar7; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14677c5a9;
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
LAB_14677c5a9:
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
  return;
}

// Apply @ 14677c6b0

void __thiscall
UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>::Apply
          (TAdd<TSubclassOf<UMovieSceneBlenderSystem>_> *this,FEntityAllocation *param_1,int param_2
          )

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
  
  this_00 = param_1->ComponentHeaders;
  pFVar8 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar8; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14677c729;
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
LAB_14677c729:
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
  return;
}

// Apply @ 14677c840

void __thiscall
UE::MovieScene::TAdd<bool>::Apply(TAdd<bool> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  this_00 = param_1->ComponentHeaders;
  pFVar7 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar7; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == this->_padding_) goto LAB_14677c8b9;
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
LAB_14677c8b9:
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
  *puVar6 = (this->Payload).TypedValue;
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

// Apply @ 14681b960

void __thiscall
UE::MovieScene::TAdd<unsigned_short>::Apply
          (TAdd<unsigned_short> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  ushort *puVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  this_00 = param_1->ComponentHeaders;
  pFVar7 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar7; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == this->_padding_) goto LAB_14681b9d9;
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
LAB_14681b9d9:
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
  *puVar6 = (this->Payload).TypedValue;
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

// Apply @ 14681bae0

void __thiscall
UE::MovieScene::TAdd<UE::MovieScene::FCustomPropertyIndex>::Apply
          (TAdd<UE::MovieScene::FCustomPropertyIndex> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  ushort *puVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  this_00 = param_1->ComponentHeaders;
  pFVar7 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar7; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == this->_padding_) goto LAB_14681bb59;
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
LAB_14681bb59:
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

// Apply @ 14681bc60

void __thiscall
UE::MovieScene::TAdd<TSharedPtr<FTrackInstancePropertyBindings,1>_>::Apply
          (TAdd<TSharedPtr<FTrackInstancePropertyBindings,1>_> *this,FEntityAllocation *param_1,
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
  TOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_> *pTVar8;
  
  this_00 = param_1->ComponentHeaders;
  pFVar7 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar7; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14681bcd9;
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
LAB_14681bcd9:
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
  pTVar8 = &this->Payload;
  if (((pTVar8->field0_0x0).TypedValue.Object ==
       (FTrackInstancePropertyBindings *)0xffffffffffffffff) &&
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
  if ((TOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_> *)puVar6 != pTVar8) {
    *puVar6 = (pTVar8->field0_0x0).TypedValue.Object;
    (pTVar8->field0_0x0).TypedValue.Object = (FTrackInstancePropertyBindings *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(puVar6 + 1),
               &(this->Payload).field0_0x0.TypedValue.SharedReferenceCount);
  }
  if ((pTVar8->field0_0x0).TypedValue.Object != (FTrackInstancePropertyBindings *)0xffffffffffffffff
     ) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->Payload).field0_0x0.TypedValue.SharedReferenceCount.ReferenceController);
    (pTVar8->field0_0x0).TypedValue.Object = (FTrackInstancePropertyBindings *)0xffffffffffffffff;
    (this->Payload).field0_0x0.TypedValue.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
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

// Apply @ 1468aaf90

void __thiscall
UE::MovieScene::TAdd<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>::Apply
          (TAdd<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_> *this,
          FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  FWeakObjectPtr *pFVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  this_00 = param_1->ComponentHeaders;
  pFVar7 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar7; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_1468ab009;
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
LAB_1468ab009:
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
  *pFVar6 = (this->Payload).TypedValue.WeakPtr;
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

// Apply @ 1468ab110

void __thiscall
UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>::Apply
          (TAdd<UE::MovieScene::FSourceBoolChannel> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  this_00 = param_1->ComponentHeaders;
  pFVar7 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar7; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_1468ab189;
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
LAB_1468ab189:
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
  return;
}

