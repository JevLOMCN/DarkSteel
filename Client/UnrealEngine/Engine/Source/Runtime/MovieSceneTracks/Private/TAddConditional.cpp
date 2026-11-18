// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 5

// Apply @ 14663daa0

void __thiscall
UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>::Apply
          (TAddConditional<UObject_*_(__cdecl*)(UObject_*)> *this,FEntityAllocation *param_1,
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
      if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14663db1e;
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
LAB_14663db1e:
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
  }
  return;
}

// Apply @ 14663dc20

void __thiscall
UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>::Apply
          (TAddConditional<UE::MovieScene::FSourceFloatChannel> *this,FEntityAllocation *param_1,
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
      if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14663dc9e;
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
LAB_14663dc9e:
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

// Apply @ 14677c9c0

void __thiscall
UE::MovieScene::TAddConditional<double>::Apply
          (TAddConditional<double> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  bool bVar5;
  double *pdVar6;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
    this_00 = param_1->ComponentHeaders;
    pFVar7 = this_00 + param_1->NumComponents;
    for (; this_00 != pFVar7; this_00 = this_00 + 1) {
      if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14677ca3e;
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
LAB_14677ca3e:
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
  }
  return;
}

// Apply @ 14677cb40

void __thiscall
UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>::Apply
          (TAddConditional<UE::MovieScene::FPropertyNotifyComponentData> *this,
          FEntityAllocation *param_1,int param_2)

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
      if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14677cbc0;
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
LAB_14677cbc0:
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
    uVar5 = (this->Payload).TypedValue.NotifyFunctionName.Number;
    uVar6 = (this->Payload).TypedValue.WeakNotifyFunction.WeakPtr.ObjectIndex;
    uVar7 = (this->Payload).TypedValue.WeakNotifyFunction.WeakPtr.ObjectSerialNumber;
    *puVar9 = (this->Payload).TypedValue.NotifyFunctionName.ComparisonIndex.Value;
    puVar9[1] = uVar5;
    puVar9[2] = uVar6;
    puVar9[3] = uVar7;
    puVar9[4] = *(uint *)&(this->Payload).TypedValue.bNotifyFunctionCached;
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

// Apply @ 14681be10

void __thiscall
UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>::Apply
          (TAddConditional<UE::MovieScene::FIntermediateColor> *this,FEntityAllocation *param_1,
          int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined4 *puVar9;
  FComponentHeader *this_00;
  FComponentHeader *pFVar10;
  
  if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
    this_00 = param_1->ComponentHeaders;
    pFVar10 = this_00 + param_1->NumComponents;
    for (; this_00 != pFVar10; this_00 = this_00 + 1) {
      if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14681be90;
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
LAB_14681be90:
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
    uVar5 = *(undefined4 *)((longlong)&(this->Payload).TypedValue.R + 4);
    uVar6 = *(undefined4 *)&(this->Payload).TypedValue.G;
    uVar7 = *(undefined4 *)((longlong)&(this->Payload).TypedValue.G + 4);
    *puVar9 = *(undefined4 *)&(this->Payload).TypedValue.R;
    puVar9[1] = uVar5;
    puVar9[2] = uVar6;
    puVar9[3] = uVar7;
    uVar5 = *(undefined4 *)((longlong)&(this->Payload).TypedValue.B + 4);
    uVar6 = *(undefined4 *)&(this->Payload).TypedValue.A;
    uVar7 = *(undefined4 *)((longlong)&(this->Payload).TypedValue.A + 4);
    puVar9[4] = *(undefined4 *)&(this->Payload).TypedValue.B;
    puVar9[5] = uVar5;
    puVar9[6] = uVar6;
    puVar9[7] = uVar7;
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

