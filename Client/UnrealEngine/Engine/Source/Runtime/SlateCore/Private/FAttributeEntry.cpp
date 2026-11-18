// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 7

// FAttributeEntry @ 1425bcda0

FAttributeEntry * __thiscall
FSlateAttributeDescriptor::FContainerInitializer::FAttributeEntry::FAttributeEntry
          (FAttributeEntry *this,FSlateAttributeDescriptor *param_1,FName param_2,int param_3)

{
  this->Descriptor = param_1;
  this->ContainerName = param_2;
  this->AttributeIndex = param_3;
  return this;
}

// FAttributeEntry @ 1425bcdc0

FAttributeEntry * __thiscall
FSlateAttributeDescriptor::FInitializer::FAttributeEntry::FAttributeEntry
          (FAttributeEntry *this,FSlateAttributeDescriptor *param_1,int param_2)

{
  this->Descriptor = param_1;
  this->AttributeIndex = param_2;
  return this;
}

// AffectVisibility @ 1425cab30

FAttributeEntry * __thiscall
FSlateAttributeDescriptor::FInitializer::FAttributeEntry::AffectVisibility(FAttributeEntry *this)

{
  int iVar1;
  FSlateAttributeDescriptor *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  FAttributeEntry *pFVar6;
  FName *pFVar7;
  FName *local_res8;
  
  iVar1 = this->AttributeIndex;
  if (iVar1 < 0) {
    return this;
  }
  pFVar2 = this->Descriptor;
  if (iVar1 < (pFVar2->Attributes).ArrayNum) {
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FAttributeEntry *)(*pcVar3)();
      return pFVar6;
    }
    pFVar7 = (FName *)((pFVar2->Attributes).AllocatorInstance.Data + (longlong)iVar1 * 0x58);
    ::FName::Equals(*pFVar7,"Visibility");
    if (((pFVar7[5].ComparisonIndex.Value & 0x20) == 0) &&
       (((pFVar7[7].ComparisonIndex.Value == 0 || (pFVar7[6] == (FName)0x0)) ||
        (cVar5 = (**(code **)(*(longlong *)pFVar7[6] + 0x38))(), cVar5 == '\0')))) {
      local_res8 = pFVar7;
      `FSlateAttributeDescriptor::SetAffectVisibility'::__l17::<lambda_1>::operator()(&local_res8);
    }
    *(undefined1 *)((longlong)&pFVar7[10].ComparisonIndex.Value + 1) = 1;
    return this;
  }
  return this;
}

// OnValueChanged @ 1425f0800

FAttributeEntry * __thiscall
FSlateAttributeDescriptor::FContainerInitializer::FAttributeEntry::OnValueChanged
          (FAttributeEntry *this,
          TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *param_1)

{
  int iVar1;
  FSlateAttributeDescriptor *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAttributeEntry *pFVar5;
  
  iVar1 = this->AttributeIndex;
  if ((-1 < iVar1) && (pFVar2 = this->Descriptor, iVar1 < (pFVar2->Attributes).ArrayNum)) {
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FAttributeEntry *)(*pcVar3)();
      return pFVar5;
    }
    TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
               ((pFVar2->Attributes).AllocatorInstance.Data + (longlong)iVar1 * 0x58 + 0x40),
               (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)param_1);
  }
  if ((*(int *)&param_1->field_0x8 != 0) && (*(undefined8 **)param_1 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)param_1)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)param_1,0,0,0x10);
    *(undefined4 *)&param_1->field_0x8 = 0;
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return this;
}

// OnValueChanged @ 1425f08e0

FAttributeEntry * __thiscall
FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
          (FAttributeEntry *this,
          TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *param_1)

{
  int iVar1;
  FSlateAttributeDescriptor *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAttributeEntry *pFVar5;
  
  iVar1 = this->AttributeIndex;
  if ((-1 < iVar1) && (pFVar2 = this->Descriptor, iVar1 < (pFVar2->Attributes).ArrayNum)) {
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FAttributeEntry *)(*pcVar3)();
      return pFVar5;
    }
    TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
               ((pFVar2->Attributes).AllocatorInstance.Data + (longlong)iVar1 * 0x58 + 0x40),
               (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)param_1);
  }
  if ((*(int *)&param_1->field_0x8 != 0) && (*(undefined8 **)param_1 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)param_1)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)param_1,0,0,0x10);
    *(undefined4 *)&param_1->field_0x8 = 0;
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return this;
}

// UpdatePrerequisite @ 1426055b0

FAttributeEntry * __thiscall
FSlateAttributeDescriptor::FContainerInitializer::FAttributeEntry::UpdatePrerequisite
          (FAttributeEntry *this,FName param_1)

{
  int iVar1;
  FSlateAttributeDescriptor *this_00;
  code *pcVar2;
  bool bVar3;
  FAttributeEntry *pFVar4;
  
  iVar1 = this->AttributeIndex;
  if (iVar1 < 0) {
    return this;
  }
  this_00 = this->Descriptor;
  if (iVar1 < (this_00->Attributes).ArrayNum) {
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FAttributeEntry *)(*pcVar2)();
        return pFVar4;
      }
    }
    SetPrerequisite(this_00,this->ContainerName,
                    (FAttribute *)
                    ((this_00->Attributes).AllocatorInstance.Data + (longlong)iVar1 * 0x58),param_1)
    ;
  }
  return this;
}

// UpdatePrerequisite @ 142605660

FAttributeEntry * __thiscall
FSlateAttributeDescriptor::FInitializer::FAttributeEntry::UpdatePrerequisite
          (FAttributeEntry *this,FName param_1)

{
  int iVar1;
  FSlateAttributeDescriptor *this_00;
  code *pcVar2;
  bool bVar3;
  FAttributeEntry *pFVar4;
  
  iVar1 = this->AttributeIndex;
  if (iVar1 < 0) {
    return this;
  }
  this_00 = this->Descriptor;
  if (iVar1 < (this_00->Attributes).ArrayNum) {
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FAttributeEntry *)(*pcVar2)();
        return pFVar4;
      }
    }
    SetPrerequisite(this_00,(FName)0x0,
                    (FAttribute *)
                    ((this_00->Attributes).AllocatorInstance.Data + (longlong)iVar1 * 0x58),param_1)
    ;
  }
  return this;
}

