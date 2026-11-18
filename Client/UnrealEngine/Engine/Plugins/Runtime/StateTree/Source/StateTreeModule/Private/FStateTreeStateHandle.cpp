// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 5

// FStateTreeStateHandle @ 14d4b1dc0

FStateTreeStateHandle * __thiscall
FStateTreeStateHandle::FStateTreeStateHandle(FStateTreeStateHandle *this)

{
  this->Index = 0xffff;
  return this;
}

// StaticStruct @ 14d527330

UScriptStruct * __cdecl FStateTreeStateHandle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeStateHandle.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeStateHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeStateHandle,(UObject *)pUVar1,
                         L"StateTreeStateHandle");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeStateHandle.OuterSingleton;
}

// Describe @ 14d52e9a0

FString * __thiscall
FStateTreeStateHandle::Describe(FStateTreeStateHandle *this,FString *__return_storage_ptr__)

{
  ushort uVar1;
  
  uVar1 = this->Index;
  if (uVar1 == 0xfffc) {
    ::FString::FString(__return_storage_ptr__,L"Stopped");
    return __return_storage_ptr__;
  }
  if (uVar1 == 0xfffd) {
    ::FString::FString(__return_storage_ptr__,L"Failed");
    return __return_storage_ptr__;
  }
  if (uVar1 == 0xfffe) {
    ::FString::FString(__return_storage_ptr__,L"Succeeded");
    return __return_storage_ptr__;
  }
  if (uVar1 != 0xffff) {
    ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"Invalid");
  return __return_storage_ptr__;
}

// FromCompletionStatus @ 14d52f940

FStateTreeStateHandle __cdecl
FStateTreeStateHandle::FromCompletionStatus(EStateTreeRunStatus param_1)

{
  undefined7 in_register_00000009;
  char in_DL;
  
  if (in_DL == '\x02') {
    *(ushort *)CONCAT71(in_register_00000009,param_1) = Succeeded.Index;
    return (FStateTreeStateHandle)(ushort)CONCAT71(in_register_00000009,param_1);
  }
  if (in_DL == '\x03') {
    *(ushort *)CONCAT71(in_register_00000009,param_1) = Failed.Index;
    return (FStateTreeStateHandle)(ushort)CONCAT71(in_register_00000009,param_1);
  }
  if (in_DL == '\x01') {
    *(ushort *)CONCAT71(in_register_00000009,param_1) = Stopped.Index;
    return (FStateTreeStateHandle)(ushort)CONCAT71(in_register_00000009,param_1);
  }
  *(undefined2 *)CONCAT71(in_register_00000009,param_1) = 0xffff;
  return (FStateTreeStateHandle)(ushort)CONCAT71(in_register_00000009,param_1);
}

// ToCompletionStatus @ 14d5345a0

EStateTreeRunStatus __thiscall
FStateTreeStateHandle::ToCompletionStatus(FStateTreeStateHandle *this)

{
  ushort uVar1;
  EStateTreeRunStatus EVar2;
  
  uVar1 = this->Index;
  if (uVar1 == 0xfffe) {
    return Succeeded;
  }
  if (uVar1 == 0xfffd) {
    return Failed;
  }
  EVar2 = Unset;
  if (uVar1 == 0xfffc) {
    EVar2 = Stopped;
  }
  return EVar2;
}

