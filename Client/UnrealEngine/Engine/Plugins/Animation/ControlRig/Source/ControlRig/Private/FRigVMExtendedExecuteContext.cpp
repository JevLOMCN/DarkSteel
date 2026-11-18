// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// GetPublicDataSafe<FControlRigExecuteContext> @ 14a216b40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FControlRigExecuteContext * __thiscall
FRigVMExtendedExecuteContext::GetPublicDataSafe<FControlRigExecuteContext>
          (FRigVMExtendedExecuteContext *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  UScriptStruct *pUVar5;
  FControlRigExecuteContext *pFVar6;
  
  lVar4 = (**(code **)((this->PublicDataScope)._padding_ + 0x20))(&this->PublicDataScope);
  pUVar5 = FControlRigExecuteContext::StaticStruct();
  if (pUVar5 != (UScriptStruct *)0x0) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_14a216ba5;
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  pUVar5 = FControlRigExecuteContext::StaticStruct();
  (*pcVar2)(this,pUVar5);
LAB_14a216ba5:
                    /* WARNING: Could not recover jumptable at 0x00014a216bc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar6 = (FControlRigExecuteContext *)
           (**(code **)((this->PublicDataScope)._padding_ + 0x18))(&this->PublicDataScope);
  return pFVar6;
}

// GetPublicData<FControlRigExecuteContext> @ 14a2d2f20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FControlRigExecuteContext * __thiscall
FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>
          (FRigVMExtendedExecuteContext *this)

{
  FStructOnScope *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  UScriptStruct *pUVar6;
  FControlRigExecuteContext *pFVar7;
  
  pFVar1 = &this->PublicDataScope;
  lVar5 = (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1);
  pUVar6 = FControlRigExecuteContext::StaticStruct();
  if (pUVar6 != (UScriptStruct *)0x0) {
    iVar2 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14a2d2f8e;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("PublicDataScope.GetStruct()->IsChildOf(ExecuteContextType::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExecuteContext.h"
                     ,0x297,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FControlRigExecuteContext *)(*pcVar3)();
    return pFVar7;
  }
LAB_14a2d2f8e:
                    /* WARNING: Could not recover jumptable at 0x00014a2d2f9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar7 = (FControlRigExecuteContext *)(**(code **)(pFVar1->_padding_ + 0x10))(pFVar1);
  return pFVar7;
}

// GetPublicData<FControlRigExecuteContext> @ 14a504e40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FControlRigExecuteContext * __thiscall
FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>
          (FRigVMExtendedExecuteContext *this)

{
  FStructOnScope *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  UPackage *pUVar6;
  FControlRigExecuteContext *pFVar7;
  
  pFVar1 = &this->PublicDataScope;
  lVar5 = (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1);
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar6,
                         L"ControlRigExecuteContext");
    if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14a504e90;
  }
  else {
LAB_14a504e90:
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton)->
                 _padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14a504eda;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("PublicDataScope.GetStruct()->IsChildOf(ExecuteContextType::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExecuteContext.h"
                     ,0x29e,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FControlRigExecuteContext *)(*pcVar3)();
    return pFVar7;
  }
LAB_14a504eda:
                    /* WARNING: Could not recover jumptable at 0x00014a504eea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar7 = (FControlRigExecuteContext *)(**(code **)(pFVar1->_padding_ + 0x18))(pFVar1);
  return pFVar7;
}

