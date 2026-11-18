// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 9

// EnterState @ 14d4a18f0

EStateTreeRunStatus __thiscall
FStateTreeTaskBase::EnterState
          (FStateTreeTaskBase *this,FStateTreeExecutionContext *param_1,
          FStateTreeTransitionResult *param_2)

{
  return Running;
}

// ExitState @ 14d4a1900

void __thiscall
FStateTreeTaskBase::ExitState
          (FStateTreeTaskBase *this,FStateTreeExecutionContext *param_1,
          FStateTreeTransitionResult *param_2)

{
  return;
}

// StateCompleted @ 14d4a1910

void __thiscall
FStateTreeTaskBase::StateCompleted
          (FStateTreeTaskBase *this,FStateTreeExecutionContext *param_1,EStateTreeRunStatus param_2,
          FStateTreeActiveStates *param_3)

{
  return;
}

// Tick @ 14d4a19b0

EStateTreeRunStatus __thiscall
FStateTreeTaskBase::Tick(FStateTreeTaskBase *this,FStateTreeExecutionContext *param_1,float param_2)

{
  return Running;
}

// TriggerTransitions @ 14d4a19c0

void __thiscall
FStateTreeTaskBase::TriggerTransitions(FStateTreeTaskBase *this,FStateTreeExecutionContext *param_1)

{
  return;
}

// StaticStruct @ 14d5262d0

UScriptStruct * __cdecl FStateTreeTaskBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeTaskBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeTaskBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTaskBase,(UObject *)pUVar1,
                         L"StateTreeTaskBase");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeTaskBase.OuterSingleton;
}

// operator= @ 14d52d290

FStateTreeTaskBase * __thiscall
FStateTreeTaskBase::operator=(FStateTreeTaskBase *this,FStateTreeTaskBase *param_1)

{
  byte bVar1;
  
  this->_padding_ = param_1->_padding_;
  *(short *)&this->_padding_ = (short)param_1->_padding_;
  *(undefined2 *)((longlong)&this->_padding_ + 2) =
       *(undefined2 *)((longlong)&param_1->_padding_ + 2);
  *(undefined2 *)((longlong)&this->_padding_ + 4) =
       *(undefined2 *)((longlong)&param_1->_padding_ + 4);
  *(undefined2 *)((longlong)&this->_padding_ + 6) =
       *(undefined2 *)((longlong)&param_1->_padding_ + 6);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined2 *)((longlong)&this->_padding_ + 4) =
       *(undefined2 *)((longlong)&param_1->_padding_ + 4);
  bVar1 = (this->bShouldStateChangeOnReselect ^ param_1->bShouldStateChangeOnReselect) & 1 ^
          this->field_0x20;
  this->field_0x20 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0x20) & 2 ^ bVar1;
  this->field_0x20 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0x20) & 4 ^ bVar1;
  this->field_0x20 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0x20) & 8 ^ bVar1;
  this->field_0x20 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0x20) & 0x10 ^ bVar1;
  this->field_0x20 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0x20) & 0x20 ^ bVar1;
  this->field_0x20 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0x20) & 0x40 ^ bVar1;
  this->field_0x20 = bVar1;
  this->field_0x20 = (bVar1 ^ param_1->field_0x20) & 0x7f ^ param_1->field_0x20;
  this->TransitionHandlingPriority = param_1->TransitionHandlingPriority;
  return this;
}

// AppendDebugInfoString @ 14d52d920

void __thiscall
FStateTreeTaskBase::AppendDebugInfoString
          (FStateTreeTaskBase *this,FString *param_1,FStateTreeExecutionContext *param_2)

{
  int iVar1;
  FString local_28;
  FString local_18;
  
  ::FName::ToString((FName *)&this->_padding_,&local_18);
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

// GetDebugInfo @ 14d52fde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FStateTreeTaskBase::GetDebugInfo
          (FStateTreeTaskBase *this,FString *__return_storage_ptr__,
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
  ::FName::AppendString((FName *)&this->_padding_,&local_238);
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

