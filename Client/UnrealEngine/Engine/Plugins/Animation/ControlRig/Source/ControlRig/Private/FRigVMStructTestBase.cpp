// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// Initialize @ 14a4e4350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigVMStructTestBase<FControlRigExecuteContext>::Initialize
          (FRigVMStructTestBase<FControlRigExecuteContext> *this)

{
  UPackage *pUVar1;
  FRigVMExtendedExecuteContext *pFVar2;
  FControlRigExecuteContext *pFVar3;
  undefined1 auStack_2b8 [32];
  FRigVMExtendedExecuteContext local_298;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar1,
                         L"ControlRigExecuteContext");
  }
  pFVar2 = FRigVMExtendedExecuteContext::FRigVMExtendedExecuteContext
                     (&local_298,
                      Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton);
  FRigVMExtendedExecuteContext::operator=(&this->ExtendedExecuteContext,pFVar2);
  FRigVMExtendedExecuteContext::~FRigVMExtendedExecuteContext(&local_298);
  pFVar3 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>
                     (&this->ExtendedExecuteContext);
  FControlRigExecuteContext::operator=(this->ExecuteContext,pFVar3);
  return;
}

