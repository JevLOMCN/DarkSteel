// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 3

// FCreateWorkspace @ 146afbc60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCreateWorkspace * __thiscall
FCreateWorkspace::FCreateWorkspace
          (FCreateWorkspace *this,TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  FString *pFVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  FScriptContainerElement *pFVar4;
  FString *pFVar5;
  undefined1 auStack_488 [32];
  TStringView<wchar_t> local_468;
  TStringBuilderBase<wchar_t> local_458;
  wchar_t local_438 [512];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_488;
  pFVar1 = &this->WorkspaceName;
  this->_padding_ = 0;
  this->_padding_ = 0;
  uVar2 = *(undefined8 *)&param_1->Size;
  pwVar3 = param_1->DataPtr;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FCreateWorkspace__6B_;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkspaceName).Data.ArrayNum = 0;
  (this->WorkspaceName).Data.ArrayMax = 0;
  pFVar5 = ::FString::ConstructFromPtrSize((FString *)&local_468,pwVar3,(int)uVar2);
  if (pFVar1 != pFVar5) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->WorkspaceName).Data.ArrayNum = (pFVar5->Data).ArrayNum;
    (this->WorkspaceName).Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_468.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_468.DataPtr);
  }
  local_468.DataPtr = param_2->DataPtr;
  local_468.Size = param_2->Size;
  local_468._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_458.Base = local_438;
  (this->WorkspaceRoot).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_458.CurPos = local_438;
  (this->WorkspaceRoot).Data.ArrayNum = 0;
  (this->WorkspaceRoot).Data.ArrayMax = 0;
  local_458.End = (wchar_t *)local_38;
  (this->WorkspaceDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkspaceDescription).Data.ArrayNum = 0;
  (this->WorkspaceDescription).Data.ArrayMax = 0;
  (this->WorkspaceStream).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkspaceStream).Data.ArrayNum = 0;
  (this->WorkspaceStream).Data.ArrayMax = 0;
  this->Type = Writeable;
  (this->ClientView).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClientView).ArrayNum = 0;
  (this->ClientView).ArrayMax = 0;
  local_458.bIsDynamic = false;
  local_458.bIsExternal = false;
  FPathViews::ToAbsolutePath(&local_468,&local_458);
  if (local_458.End < local_458.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_458,1);
  }
  *local_458.CurPos = L'\0';
  ::FString::operator=(&this->WorkspaceRoot,local_458.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_458);
  return this;
}

// GetInProgressString @ 146b181a0

FText * __thiscall
FCreateWorkspace::GetInProgressString(FCreateWorkspace *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"SourceControl",L"SourceControl_CreateWorkspaceOperation",
             L"Creating a workspace...");
  return __return_storage_ptr__;
}

// GetName @ 146b18860

FName __thiscall FCreateWorkspace::GetName(FCreateWorkspace *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CreateWorkspace");
  return in_RDX;
}

