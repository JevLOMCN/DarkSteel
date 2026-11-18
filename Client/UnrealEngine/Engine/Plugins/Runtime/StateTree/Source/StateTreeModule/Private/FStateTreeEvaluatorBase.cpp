// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 6

// TreeStart @ 14d4a30b0

void __thiscall
FStateTreeEvaluatorBase::TreeStart
          (FStateTreeEvaluatorBase *this,FStateTreeExecutionContext *param_1)

{
  return;
}

// TreeStop @ 14d4a30c0

void __thiscall
FStateTreeEvaluatorBase::TreeStop(FStateTreeEvaluatorBase *this,FStateTreeExecutionContext *param_1)

{
  return;
}

// Tick @ 14d4a3180

void __thiscall
FStateTreeEvaluatorBase::Tick
          (FStateTreeEvaluatorBase *this,FStateTreeExecutionContext *param_1,float param_2)

{
  return;
}

// StaticStruct @ 14d4db430

UScriptStruct * __cdecl FStateTreeEvaluatorBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeEvaluatorBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeEvaluatorBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEvaluatorBase,(UObject *)pUVar1,
                         L"StateTreeEvaluatorBase");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeEvaluatorBase.OuterSingleton;
}

// GetDebugInfo @ 14d4db470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FStateTreeEvaluatorBase::GetDebugInfo
          (FStateTreeEvaluatorBase *this,FString *__return_storage_ptr__,
          FStateTreeReadOnlyExecutionContext *param_1)

{
  void *pvVar1;
  undefined1 auStack_258 [32];
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218;
  wchar_t local_216 [255];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_258;
  local_238.Base = &local_218;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.End = (wchar_t *)local_18;
  local_218 = L'[';
  local_238.CurPos = local_216;
  ::FName::AppendString((FName *)&this->field_0x8,&local_238);
  if (local_238.End < local_238.CurPos + 2) {
    TStringBuilderBase<wchar_t>::Extend(&local_238,2);
  }
  pvVar1 = FGenericPlatformString::Memcpy(local_238.CurPos,L"]\n",4);
  local_238.CurPos = (wchar_t *)((longlong)pvVar1 + 4);
  if (local_238.End < (wchar_t *)((longlong)pvVar1 + 6U)) {
    TStringBuilderBase<wchar_t>::Extend(&local_238,1);
  }
  *local_238.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_238.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  return __return_storage_ptr__;
}

// AppendDebugInfoString @ 14d4db570

void __thiscall
FStateTreeEvaluatorBase::AppendDebugInfoString
          (FStateTreeEvaluatorBase *this,FString *param_1,FStateTreeExecutionContext *param_2)

{
  int iVar1;
  FString local_28;
  FString local_18;
  
  ::FName::ToString((FName *)&this->field_0x8,&local_18);
  ::FString::PrintfImpl(&local_28,L"[%s]\n");
  iVar1 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

