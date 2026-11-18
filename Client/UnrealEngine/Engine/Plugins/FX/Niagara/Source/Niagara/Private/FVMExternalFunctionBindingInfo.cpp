// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 148fe5100

UScriptStruct * __cdecl FVMExternalFunctionBindingInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVMExternalFunctionBindingInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FVMExternalFunctionBindingInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo,(UObject *)pUVar1,
                         L"VMExternalFunctionBindingInfo");
  }
  return Z_Registration_Info_UScriptStruct_FVMExternalFunctionBindingInfo.OuterSingleton;
}

// Serialize @ 149065cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FVMExternalFunctionBindingInfo::Serialize(FVMExternalFunctionBindingInfo *this,FArchive *param_1)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  UPackage *pUVar3;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar4;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 local_1c0;
  FStructuredArchiveFromArchive local_1b0;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FNiagaraCustomVersion::GUID);
  if ((param_1->field_0x28 & 5) != 0) {
    if (Z_Registration_Info_UScriptStruct_FVMExternalFunctionBindingInfo.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_Niagara();
      Z_Registration_Info_UScriptStruct_FVMExternalFunctionBindingInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo,
                           (UObject *)pUVar3,L"VMExternalFunctionBindingInfo");
    }
    pUVar2 = Z_Registration_Info_UScriptStruct_FVMExternalFunctionBindingInfo.OuterSingleton;
    pcVar1 = *(code **)((Z_Registration_Info_UScriptStruct_FVMExternalFunctionBindingInfo.
                        OuterSingleton)->_padding_ + 0x2e0);
    this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1b0,param_1);
    FVar4 = FStructuredArchiveFromArchive::GetSlot(this_00);
    local_1c0 = 0;
    local_1c8 = 0;
    (*pcVar1)(pUVar2,*(undefined8 *)FVar4,this,pUVar2);
    FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1b0);
  }
  return true;
}

