// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// Errorf @ 147f76a70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall FMaterialCompiler::Errorf(FMaterialCompiler *this,wchar_t *param_1)

{
  int iVar1;
  ulong64 *puVar2;
  undefined1 local_res18 [16];
  undefined1 auStack_1058 [32];
  undefined8 local_1038;
  undefined1 *local_1030;
  undefined1 local_1028 [4096];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x147f76a8c;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1058;
  puVar2 = __local_stdio_printf_options();
  local_1038 = 0;
  local_1030 = local_res18;
  __stdio_common_vswprintf(*puVar2,local_1028,0x800,param_1);
  iVar1 = (**(code **)(this->_padding_ + 0x58))(this,local_1028);
  return iVar1;
}

// ScalarParameter @ 147f85da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FMaterialCompiler::ScalarParameter(FMaterialCompiler *this,FName param_1,float param_2)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_d8 [32];
  FValue local_b8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pcVar1 = *(code **)(this->_padding_ + 0x130);
  UE::Shader::FValue::FValue(&local_b8,param_2);
  iVar2 = (*pcVar1)(this,0,param_1,&local_b8);
  if (local_b8.Component.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FMemory::Free((void *)local_b8.Component.AllocatorInstance.SecondaryData);
  }
  return iVar2;
}

// VectorParameter @ 147f8e150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FMaterialCompiler::VectorParameter(FMaterialCompiler *this,FName param_1,FLinearColor *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_d8 [32];
  FValue local_b8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pcVar1 = *(code **)(this->_padding_ + 0x130);
  UE::Shader::FValue::FValue(&local_b8,param_2);
  iVar2 = (*pcVar1)(this,1,param_1,&local_b8);
  if (local_b8.Component.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FMemory::Free((void *)local_b8.Component.AllocatorInstance.SecondaryData);
  }
  return iVar2;
}

