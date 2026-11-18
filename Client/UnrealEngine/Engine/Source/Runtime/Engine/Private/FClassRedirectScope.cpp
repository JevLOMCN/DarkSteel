// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FClassRedirectScope @ 14887c5a0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

FClassRedirectScope * __thiscall
FClassRedirectScope::FClassRedirectScope(FClassRedirectScope *this,UClass *param_1,UClass *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FClassRedirectScope *pFVar4;
  FCoreRedirect *this_00;
  FName local_res8;
  FName local_res10;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FCoreRedirect *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  FString local_38;
  TArrayView<FCoreRedirect_const_,int> local_28;
  
  (this->Redirects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Redirects).ArrayNum = 0;
  (this->Redirects).ArrayMax = 0;
  local_res8 = (FName)param_2->_padding_;
  ::FName::ToString(&local_res8,&local_78);
  local_res10 = (FName)param_1->_padding_;
  ::FName::ToString(&local_res10,&local_88);
  iVar3 = (this->Redirects).ArrayNum;
  if (iVar3 == (this->Redirects).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8a0,(ForAnyElementType *)this,&(this->Redirects).ArrayMax);
  }
  (this->Redirects).ArrayNum = iVar3 + 1;
  local_58.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
  local_58.Data.ArrayNum = local_78.Data.ArrayNum;
  local_58.Data.ArrayMax = local_78.Data.ArrayMax;
  local_68.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
  local_68.Data.ArrayNum = local_88.Data.ArrayNum;
  local_68.Data.ArrayMax = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this_00 = (FCoreRedirect *)((this->Redirects).AllocatorInstance.Data + (longlong)iVar3 * 0xa0);
  this_00->RedirectFlags = Type_Class;
  FCoreRedirectObjectName::FCoreRedirectObjectName(&this_00->OldName,&local_68);
  FCoreRedirectObjectName::FCoreRedirectObjectName(&this_00->NewName,&local_58);
  (this_00->OverrideClassName).ObjectName.ComparisonIndex = 0;
  (this_00->OverrideClassName).ObjectName.Number = 0;
  (this_00->OverrideClassName).OuterName.ComparisonIndex = 0;
  (this_00->OverrideClassName).OuterName.Number = 0;
  (this_00->OverrideClassName).PackageName.ComparisonIndex = 0;
  (this_00->OverrideClassName).PackageName.Number = 0;
  *(undefined8 *)&this_00->ValueChanges = 0;
  *(undefined8 *)&(this_00->ValueChanges).field_0x8 = 0;
  *(undefined8 *)&(this_00->ValueChanges).field_0x20 = 0;
  *(undefined4 *)&(this_00->ValueChanges).field_0x28 = 0;
  *(undefined4 *)&(this_00->ValueChanges).field_0x2c = 0x80;
  *(undefined4 *)&(this_00->ValueChanges).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this_00->ValueChanges).field_0x34 = 0;
  *(undefined8 *)&(this_00->ValueChanges).field_0x40 = 0;
  *(undefined4 *)&(this_00->ValueChanges).field_0x48 = 0;
  FCoreRedirect::NormalizeNewName(this_00);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"Tests");
  local_48 = (FCoreRedirect *)(this->Redirects).AllocatorInstance.Data;
  iStack_40 = (this->Redirects).ArrayNum;
  if (iStack_40 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FClassRedirectScope *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = iStack_40;
  local_28.DataPtr = local_48;
  bVar2 = FCoreRedirects::AddRedirectList(&local_28,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FCoreRedirects::AddRedirectList(Redirects, L\"Tests\")",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Loading\\AsyncLoadingTests_ConvertFromType.cpp"
                       ,0x14,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FClassRedirectScope *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

