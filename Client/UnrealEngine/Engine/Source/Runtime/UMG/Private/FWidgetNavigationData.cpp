// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 2

// StaticStruct @ 1468d9770

UScriptStruct * __cdecl FWidgetNavigationData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWidgetNavigationData.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UScriptStruct_FWidgetNavigationData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWidgetNavigationData,(UObject *)pUVar1,
                         L"WidgetNavigationData");
  }
  return Z_Registration_Info_UScriptStruct_FWidgetNavigationData.OuterSingleton;
}

// Resolve @ 146a914f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWidgetNavigationData::Resolve
          (FWidgetNavigationData *this,UUserWidget *param_1,UWidgetTree *param_2)

{
  EUINavigationRule EVar1;
  uint uVar2;
  UUserWidget *local_res8;
  FDestructionSentinel local_28;
  
  EVar1 = this->Rule;
  if (EVar1 == Explicit) {
    local_res8 = (UUserWidget *)UWidgetTree::FindWidget(param_2,&this->WidgetToFocus);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UUserWidget *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    FWeakObjectPtr::operator=(&(this->Widget).WeakPtr,(FObjectPtr)&local_res8);
  }
  else if ((EVar1 == Custom) || (EVar1 == CustomBoundary)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->CustomDelegate,
               (FWriteAccessScope *)&local_28);
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&(this->CustomDelegate).field_0x8,(FObjectPtr)&local_res8);
    uVar2 = (this->WidgetToFocus).Number;
    *(uint *)&(this->CustomDelegate).field_0x10 = (this->WidgetToFocus).ComparisonIndex.Value;
    *(uint *)&(this->CustomDelegate).field_0x14 = uVar2;
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
      return;
    }
  }
  return;
}

