// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 5

// StaticStruct @ 146a49050

UScriptStruct * __cdecl FUIComponentTarget::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUIComponentTarget.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UScriptStruct_FUIComponentTarget.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUIComponentTarget,(UObject *)pUVar1,
                         L"UIComponentTarget");
  }
  return Z_Registration_Info_UScriptStruct_FUIComponentTarget.OuterSingleton;
}

// FUIComponentTarget @ 146a55a80

FUIComponentTarget * __thiscall
FUIComponentTarget::FUIComponentTarget(FUIComponentTarget *this,UUIComponent *param_1,FName param_2)

{
  (this->Component).field0_0x0.DebugPtr = (UUIComponent *)0x0;
  this->TargetName = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUIComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->Component).field0_0x0.DebugPtr = param_1;
    return this;
  }
  (this->Component).field0_0x0.DebugPtr = param_1;
  return this;
}

// FUIComponentTarget @ 146a55ae0

FUIComponentTarget * __thiscall FUIComponentTarget::FUIComponentTarget(FUIComponentTarget *this)

{
  (this->TargetName).ComparisonIndex = 0;
  (this->TargetName).Number = 0;
  (this->Component).field0_0x0.DebugPtr = (UUIComponent *)0x0;
  return this;
}

// Resolve @ 146a914c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __thiscall FUIComponentTarget::Resolve(FUIComponentTarget *this,UWidgetTree *param_1)

{
  UWidget *pUVar1;
  
  if ((this->TargetName != (FName)0x0) && (param_1 != (UWidgetTree *)0x0)) {
    pUVar1 = UWidgetTree::FindWidget(param_1,&this->TargetName);
    return pUVar1;
  }
  return (UWidget *)0x0;
}

// SetTargetName @ 146a94c50

void __thiscall FUIComponentTarget::SetTargetName(FUIComponentTarget *this,FName param_1)

{
  this->TargetName = param_1;
  return;
}

