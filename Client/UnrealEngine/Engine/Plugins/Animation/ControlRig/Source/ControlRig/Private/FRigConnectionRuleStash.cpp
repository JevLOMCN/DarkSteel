// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 10

// StaticStruct @ 14a2c3f70

UScriptStruct * __cdecl FRigConnectionRuleStash::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigConnectionRuleStash.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigConnectionRuleStash.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigConnectionRuleStash,(UObject *)pUVar1,
                         L"RigConnectionRuleStash");
  }
  return Z_Registration_Info_UScriptStruct_FRigConnectionRuleStash.OuterSingleton;
}

// FRigConnectionRuleStash @ 14a2d9440

FRigConnectionRuleStash * __thiscall
FRigConnectionRuleStash::FRigConnectionRuleStash
          (FRigConnectionRuleStash *this,FRigConnectionRule *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRigConnectionRuleStash *pFVar4;
  UObjectBaseUtility *this_00;
  UScriptStruct *this_01;
  FString local_18;
  
  (this->ScriptStructPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScriptStructPath).Data.ArrayNum = 0;
  (this->ScriptStructPath).Data.ArrayMax = 0;
  (this->ExportedText).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExportedText).Data.ArrayNum = 0;
  (this->ExportedText).Data.ArrayMax = 0;
  if (param_1 == (FRigConnectionRule *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRule",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigConnectionRules.cpp"
                       ,0x14,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRigConnectionRuleStash *)(*pcVar2)();
      return pFVar4;
    }
  }
  this_00 = (UObjectBaseUtility *)(**(code **)((longlong)*param_1 + 8))(param_1);
  pFVar4 = (FRigConnectionRuleStash *)
           UObjectBaseUtility::GetPathName(this_00,&local_18,(UObject *)0x0);
  if (this != pFVar4) {
    pFVar1 = (this->ScriptStructPath).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->ScriptStructPath).Data.AllocatorInstance.Data =
         (pFVar4->ScriptStructPath).Data.AllocatorInstance.Data;
    (pFVar4->ScriptStructPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ScriptStructPath).Data.ArrayNum = (pFVar4->ScriptStructPath).Data.ArrayNum;
    (this->ScriptStructPath).Data.ArrayMax = (pFVar4->ScriptStructPath).Data.ArrayMax;
    (pFVar4->ScriptStructPath).Data.ArrayNum = 0;
    (pFVar4->ScriptStructPath).Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this_01 = (UScriptStruct *)(**(code **)((longlong)*param_1 + 8))(param_1);
  UScriptStruct::ExportText
            (this_01,&this->ExportedText,param_1,param_1,(UObject *)0x0,0,(UObject *)0x0,true);
  return this;
}

// FRigConnectionRuleStash @ 14a2d9550

FRigConnectionRuleStash * __thiscall
FRigConnectionRuleStash::FRigConnectionRuleStash(FRigConnectionRuleStash *this)

{
  (this->ScriptStructPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScriptStructPath).Data.ArrayNum = 0;
  (this->ScriptStructPath).Data.ArrayMax = 0;
  (this->ExportedText).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExportedText).Data.ArrayNum = 0;
  (this->ExportedText).Data.ArrayMax = 0;
  return this;
}

// operator== @ 14a2e1a80

bool __thiscall
FRigConnectionRuleStash::operator==(FRigConnectionRuleStash *this,FRigConnectionRuleStash *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = (this->ScriptStructPath).Data.ArrayNum;
  iVar1 = (param_1->ScriptStructPath).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) goto LAB_14a2e1aba;
    iVar2 = wcscmp((wchar_t *)(this->ScriptStructPath).Data.AllocatorInstance.Data,
                   (wchar_t *)(param_1->ScriptStructPath).Data.AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (!bVar3) {
    return false;
  }
LAB_14a2e1aba:
  iVar2 = (this->ExportedText).Data.ArrayNum;
  iVar1 = (param_1->ExportedText).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) {
      return true;
    }
    iVar2 = wcscmp((wchar_t *)(this->ExportedText).Data.AllocatorInstance.Data,
                   (wchar_t *)(param_1->ExportedText).Data.AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (bVar3) {
    return true;
  }
  return false;
}

// Get @ 14a307730

TSharedPtr<FStructOnScope,1> * __thiscall
FRigConnectionRuleStash::Get
          (FRigConnectionRuleStash *this,TSharedPtr<FStructOnScope,1> *__return_storage_ptr__)

{
  FScriptContainerElement *_Str;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  UClass *pUVar5;
  UScriptStruct *this_00;
  TSharedPtr<FStructOnScope,1> *pTVar6;
  FStructOnScope *this_01;
  void *pvVar7;
  wchar_t *pwVar8;
  TRawPtrProxy<FStructOnScope> local_res8;
  FName local_res10;
  undefined4 uStack_5c;
  FString local_58;
  TStringView<wchar_t> local_48;
  FOutputDevice local_38;
  undefined4 local_28;
  
  pwVar8 = L"";
  if ((this->ScriptStructPath).Data.ArrayNum < 2) {
    this_00 = (UScriptStruct *)0x0;
  }
  else {
    _Str = (this->ScriptStructPath).Data.AllocatorInstance.Data;
    iVar3 = 0;
    if (_Str != (FScriptContainerElement *)0x0) {
      sVar4 = wcslen((wchar_t *)_Str);
      iVar3 = (int)sVar4;
    }
    pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
    local_48._12_4_ = uStack_5c;
    local_48.Size = iVar3;
    local_48.DataPtr = (wchar_t *)_Str;
    this_00 = (UScriptStruct *)StaticFindObject(pUVar5,(UObject *)0x0,&local_48,None);
    if (this_00 != (UScriptStruct *)0x0) goto LAB_14a3077bb;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigConnectionRules.cpp"
                     ,0x48,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FStructOnScope,1> *)(*pcVar1)();
    return pTVar6;
  }
LAB_14a3077bb:
  this_01 = ::operator_new(0x28);
  local_res8.Object = (FStructOnScope *)0x0;
  if (this_01 != (FStructOnScope *)0x0) {
    local_res8.Object = FStructOnScope::FStructOnScope(this_01,(UStruct *)this_00);
  }
  TSharedPtr<FStructOnScope,1>::TSharedPtr<FStructOnScope,1><FStructOnScope>
            (__return_storage_ptr__,&local_res8);
  FOutputDevice::FOutputDevice(&local_38);
  local_28 = 0;
  local_38._padding_ = (longlong)&`FRigConnectionRuleStash::Get'::`2'::FErrorPipe::_vftable_;
  local_res10 = (FName)this_00->_padding_;
  ::FName::ToString(&local_res10,&local_58);
  if ((__return_storage_ptr__->Object == (FStructOnScope *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FStructOnScope,1> *)(*pcVar1)();
    return pTVar6;
  }
  pvVar7 = (void *)(**(code **)(__return_storage_ptr__->Object->_padding_ + 0x18))();
  if ((this->ExportedText).Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)(this->ExportedText).Data.AllocatorInstance.Data;
  }
  UScriptStruct::ImportText(this_00,pwVar8,pvVar7,(UObject *)0x0,0,&local_38,&local_58,true);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FOutputDevice::~FOutputDevice(&local_38);
  return __return_storage_ptr__;
}

// Get @ 14a3078d0

FRigConnectionRule * __thiscall
FRigConnectionRuleStash::Get(FRigConnectionRuleStash *this,TSharedPtr<FStructOnScope,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  size_t sVar4;
  UClass *pUVar5;
  UScriptStruct *this_00;
  FRigConnectionRule *pFVar6;
  FStructOnScope *this_01;
  UScriptStruct *pUVar7;
  void *pvVar8;
  longlong lVar9;
  UPackage *pUVar10;
  wchar_t *pwVar11;
  int iVar12;
  TRawPtrProxy<FStructOnScope> local_res8;
  FName local_res10;
  TSharedPtr<FStructOnScope,1> local_78;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FString local_58;
  TStringView<wchar_t> local_48;
  FOutputDevice local_38;
  undefined4 local_28;
  
  pUVar7 = (UScriptStruct *)0x0;
  iVar12 = 0;
  this_00 = pUVar7;
  if ((this->ScriptStructPath).Data.ArrayNum < 2) {
LAB_14a307934:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigConnectionRules.cpp"
                       ,0x48,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FRigConnectionRule *)(*pcVar1)();
      return pFVar6;
    }
  }
  else {
    local_68 = (this->ScriptStructPath).Data.AllocatorInstance.Data;
    if (local_68 != (FScriptContainerElement *)0x0) {
      sVar4 = wcslen((wchar_t *)local_68);
      iVar12 = (int)sVar4;
    }
    iStack_60 = iVar12;
    pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
    local_48._12_4_ = uStack_5c;
    local_48.Size = iStack_60;
    local_48.DataPtr = (wchar_t *)local_68;
    this_00 = (UScriptStruct *)StaticFindObject(pUVar5,(UObject *)0x0,&local_48,None);
    if (this_00 == (UScriptStruct *)0x0) goto LAB_14a307934;
  }
  this_01 = ::operator_new(0x28);
  if (this_01 != (FStructOnScope *)0x0) {
    pUVar7 = (UScriptStruct *)FStructOnScope::FStructOnScope(this_01,(UStruct *)this_00);
  }
  local_res8.Object = (FStructOnScope *)pUVar7;
  TSharedPtr<FStructOnScope,1>::TSharedPtr<FStructOnScope,1><FStructOnScope>(&local_78,&local_res8);
  FOutputDevice::FOutputDevice(&local_38);
  local_28 = 0;
  local_38._padding_ = (longlong)&`FRigConnectionRuleStash::Get'::`2'::FErrorPipe::_vftable_;
  local_res10 = (FName)this_00->_padding_;
  ::FName::ToString(&local_res10,&local_58);
  if ((local_78.Object == (FStructOnScope *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FRigConnectionRule *)(*pcVar1)();
    return pFVar6;
  }
  pvVar8 = (void *)(**(code **)((local_78.Object)->_padding_ + 0x18))();
  if ((this->ExportedText).Data.ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(this->ExportedText).Data.AllocatorInstance.Data;
  }
  UScriptStruct::ImportText(this_00,pwVar11,pvVar8,(UObject *)0x0,0,&local_38,&local_58,true);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FOutputDevice::~FOutputDevice(&local_38);
  if (param_1 != &local_78) {
    param_1->Object = local_78.Object;
    local_78.Object = (FStructOnScope *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_1->SharedReferenceCount,&local_78.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  if ((param_1->Object == (FStructOnScope *)0x0) ||
     (cVar3 = (**(code **)(param_1->Object->_padding_ + 0x38))(), cVar3 == '\0')) {
    return (FRigConnectionRule *)0x0;
  }
  if ((param_1->Object == (FStructOnScope *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FRigConnectionRule *)(*pcVar1)();
    return pFVar6;
  }
  lVar9 = (**(code **)(param_1->Object->_padding_ + 0x20))();
  if (Z_Registration_Info_UScriptStruct_FRigConnectionRule.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar10 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigConnectionRule.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigConnectionRule,(UObject *)pUVar10,
                         L"RigConnectionRule");
    if (Z_Registration_Info_UScriptStruct_FRigConnectionRule.OuterSingleton != (UScriptStruct *)0x0)
    goto LAB_14a307b20;
  }
  else {
LAB_14a307b20:
    iVar12 = (int)(Z_Registration_Info_UScriptStruct_FRigConnectionRule.OuterSingleton)->_padding_;
    if ((*(int *)(lVar9 + 0x38) < iVar12) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar12 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FRigConnectionRule.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14a307b6a;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("InOutStorage->GetStruct()->IsChildOf(FRigConnectionRule::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigConnectionRules.cpp"
                     ,0x54,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FRigConnectionRule *)(*pcVar1)();
    return pFVar6;
  }
LAB_14a307b6a:
  if ((param_1->Object == (FStructOnScope *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FRigConnectionRule *)(*pcVar1)();
    return pFVar6;
  }
  pFVar6 = (FRigConnectionRule *)(**(code **)(param_1->Object->_padding_ + 0x18))();
  return pFVar6;
}

// GetScriptStruct @ 14a317de0

UScriptStruct * __thiscall FRigConnectionRuleStash::GetScriptStruct(FRigConnectionRuleStash *this)

{
  size_t sVar1;
  UClass *pUVar2;
  UScriptStruct *pUVar3;
  TStringView<wchar_t> local_18;
  
  if (1 < (this->ScriptStructPath).Data.ArrayNum) {
    local_18.DataPtr = (wchar_t *)(this->ScriptStructPath).Data.AllocatorInstance.Data;
    local_18.Size = 0;
    if ((FScriptContainerElement *)local_18.DataPtr != (FScriptContainerElement *)0x0) {
      sVar1 = wcslen(local_18.DataPtr);
      local_18.Size = (int)sVar1;
    }
    pUVar2 = Z_Construct_UClass_UScriptStruct_NoRegister();
    pUVar3 = (UScriptStruct *)StaticFindObject(pUVar2,(UObject *)0x0,&local_18,None);
    return pUVar3;
  }
  return (UScriptStruct *)0x0;
}

// IsValid @ 14a328eb0

bool __thiscall FRigConnectionRuleStash::IsValid(FRigConnectionRuleStash *this)

{
  if ((1 < (this->ScriptStructPath).Data.ArrayNum) && (1 < (this->ExportedText).Data.ArrayNum)) {
    return true;
  }
  return false;
}

// Load @ 14a32acf0

void __thiscall FRigConnectionRuleStash::Load(FRigConnectionRuleStash *this,FArchive *param_1)

{
  ::operator<<(param_1,&this->ScriptStructPath);
  ::operator<<(param_1,&this->ExportedText);
  return;
}

// Save @ 14a344a80

void __thiscall FRigConnectionRuleStash::Save(FRigConnectionRuleStash *this,FArchive *param_1)

{
  ::operator<<(param_1,&this->ScriptStructPath);
  ::operator<<(param_1,&this->ExportedText);
  return;
}

