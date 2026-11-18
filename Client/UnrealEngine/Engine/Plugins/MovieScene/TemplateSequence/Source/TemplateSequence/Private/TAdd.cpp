// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 1

// Apply @ 14ac736e0

void __thiscall
UE::MovieScene::TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>::Apply
          (TAdd<UE::MovieScene::FTemplateSequencePropertyScaleComponentData> *this,
          FEntityAllocation *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined8 *puVar10;
  FComponentHeader *this_00;
  FComponentHeader *pFVar11;
  
  this_00 = param_1->ComponentHeaders;
  pFVar11 = this_00 + param_1->NumComponents;
  for (; this_00 != pFVar11; this_00 = this_00 + 1) {
    if ((this_00->ComponentType).Value == (ushort)this->_padding_) goto LAB_14ac73759;
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
LAB_14ac73759:
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
  uVar8 = *(undefined8 *)&(this->Payload).TypedValue.ObjectBinding.B;
  *puVar10 = *(undefined8 *)&(this->Payload).TypedValue;
  puVar10[1] = uVar8;
  uVar5 = (this->Payload).TypedValue.PropertyBinding.PropertyName.ComparisonIndex.Value;
  uVar6 = (this->Payload).TypedValue.PropertyBinding.PropertyName.Number;
  uVar7 = (this->Payload).TypedValue.PropertyBinding.PropertyPath.ComparisonIndex.Value;
  *(uint *)(puVar10 + 2) = (this->Payload).TypedValue.ObjectBinding.D;
  *(uint *)((longlong)puVar10 + 0x14) = uVar5;
  *(uint *)(puVar10 + 3) = uVar6;
  *(uint *)((longlong)puVar10 + 0x1c) = uVar7;
  puVar10[4] = *(undefined8 *)&(this->Payload).TypedValue.PropertyBinding.PropertyPath.Number;
  *(ETemplateSectionPropertyScaleType *)(puVar10 + 5) = (this->Payload).TypedValue.PropertyScaleType
  ;
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

