// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// Apply @ 14690c1b0

void __thiscall
UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>::Apply
          (TAdd<UE::MovieScene::FWidgetMaterialPath> *this,FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  ForElementType<FName> FVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 *_Dst;
  FComponentHeader *this_00;
  FComponentHeader *pFVar7;
  
  this_00 = param_1->ComponentHeaders;
  pFVar7 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar7; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14690c229;
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
LAB_14690c229:
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
  _Dst = FComponentHeader::GetValuePtr(this_00,param_2);
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
  if ((TOptional<UE::MovieScene::FWidgetMaterialPath> *)_Dst != &this->Payload) {
    if ((this->Payload).TypedValue.Path.AllocatorInstance.SecondaryData ==
        (ForElementType<FName>)0x0) {
      memmove(_Dst,&this->Payload,0x10);
    }
    if (*(void **)(_Dst + 0x10) != (void *)0x0) {
      FMemory::Free(*(void **)(_Dst + 0x10));
    }
    *(ForElementType<FName> *)(_Dst + 0x10) =
         (this->Payload).TypedValue.Path.AllocatorInstance.SecondaryData;
    (this->Payload).TypedValue.Path.AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
    *(int *)(_Dst + 0x18) = (this->Payload).TypedValue.Path.ArrayNum;
    *(int *)(_Dst + 0x1c) = (this->Payload).TypedValue.Path.ArrayMax;
    (this->Payload).TypedValue.Path.ArrayNum = 0;
    (this->Payload).TypedValue.Path.ArrayMax = 2;
  }
  if ((this->Payload).bIsSet != false) {
    FVar4 = (this->Payload).TypedValue.Path.AllocatorInstance.SecondaryData;
    if (FVar4 != (ForElementType<FName>)0x0) {
      FMemory::Free((void *)FVar4);
    }
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

