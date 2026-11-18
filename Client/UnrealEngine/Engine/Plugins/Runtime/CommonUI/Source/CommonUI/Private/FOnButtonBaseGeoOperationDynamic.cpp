// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 1

// Broadcast @ 14a7c2970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOnButtonBaseGeoOperationDynamic::Broadcast
          (FOnButtonBaseGeoOperationDynamic *this,UCommonButtonBase *param_1,FGeometry *param_2,
          UDragDropOperation *param_3)

{
  undefined1 auStack_a8 [32];
  UCommonButtonBase *local_88;
  FGeometry local_80;
  UDragDropOperation *local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  FGeometry::FGeometry(&local_80);
  local_88 = param_1;
  FGeometry::operator=(&local_80,param_2);
  local_48 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,&local_88);
  return;
}

