// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 2

// StaticStruct @ 14a738df0

UScriptStruct * __cdecl FMVVMViewClass_EvaluateSource::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_EvaluateSource.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ModelViewViewModel();
    Z_Registration_Info_UScriptStruct_FMVVMViewClass_EvaluateSource.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMVVMViewClass_EvaluateSource,(UObject *)pUVar1,
                         L"MVVMViewClass_EvaluateSource");
  }
  return Z_Registration_Info_UScriptStruct_FMVVMViewClass_EvaluateSource.OuterSingleton;
}

// ToString @ 14a762400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FMVVMViewClass_EvaluateSource::ToString
          (FMVVMViewClass_EvaluateSource *this,FString *__return_storage_ptr__,
          UMVVMViewClass *param_1,FToStringArgs param_2)

{
  void *pvVar1;
  FMVVMViewClass_Source *pFVar2;
  undefined1 auStack_878 [32];
  FName local_858 [2];
  TStringBuilderBase<wchar_t> local_848;
  wchar_t local_828 [1024];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_878;
  local_848.bIsDynamic = false;
  local_848.bIsExternal = false;
  local_848.Base = local_828;
  local_848.CurPos = local_828;
  local_848.End = (wchar_t *)local_28;
  if ((this->ParentSource).Index != -1) {
    pvVar1 = FGenericPlatformString::Memcpy(local_828,L"Parent: ",0x10);
    local_848.CurPos = (wchar_t *)((longlong)pvVar1 + 0x10);
    pFVar2 = UMVVMViewClass::GetSource(param_1,(FMVVMViewClass_SourceKey)(this->ParentSource).Index)
    ;
    local_858[0] = pFVar2->PropertyName;
    ::FName::AppendString(local_858,&local_848);
  }
  if ((this->ParentFieldId).FieldName != (FName)0x0) {
    if (local_848.End < local_848.CurPos + 9) {
      TStringBuilderBase<wchar_t>::Extend(&local_848,9);
    }
    pvVar1 = FGenericPlatformString::Memcpy(local_848.CurPos,L"FieldId: ",0x12);
    local_848.CurPos = (wchar_t *)((longlong)pvVar1 + 0x12);
    local_858[0] = (this->ParentFieldId).FieldName;
    ::FName::AppendString(local_858,&local_848);
  }
  if ((this->ToEvaluate).Index != -1) {
    if (local_848.End < local_848.CurPos + 8) {
      TStringBuilderBase<wchar_t>::Extend(&local_848,8);
    }
    pvVar1 = FGenericPlatformString::Memcpy(local_848.CurPos,L"Source: ",0x10);
    local_848.CurPos = (wchar_t *)((longlong)pvVar1 + 0x10);
    pFVar2 = UMVVMViewClass::GetSource(param_1,(FMVVMViewClass_SourceKey)(this->ToEvaluate).Index);
    local_858[0] = pFVar2->PropertyName;
    ::FName::AppendString(local_858,&local_848);
  }
  if (local_848.End < local_848.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_848,1);
  }
  *local_848.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_848.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_848);
  return __return_storage_ptr__;
}

