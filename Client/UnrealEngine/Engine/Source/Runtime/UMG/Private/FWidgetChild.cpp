// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 4

// StaticStruct @ 146aac5e0

UScriptStruct * __cdecl FWidgetChild::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWidgetChild.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UScriptStruct_FWidgetChild.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWidgetChild,(UObject *)pUVar1,L"WidgetChild");
  }
  return Z_Registration_Info_UScriptStruct_FWidgetChild.OuterSingleton;
}

// FWidgetChild @ 146aad410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FWidgetChild * __thiscall
FWidgetChild::FWidgetChild(FWidgetChild *this,UUserWidget *param_1,FName param_2)

{
  UWidgetTree *this_00;
  UWidget *local_res8;
  
  this->WidgetName = param_2;
  (this->WidgetPtr).WeakPtr = (FWeakObjectPtr)0x0;
  if (((param_2 != (FName)0x0) && (param_1 != (UUserWidget *)0x0)) &&
     (this_00 = (param_1->WidgetTree).field0_0x0.DebugPtr, this_00 != (UWidgetTree *)0x0)) {
    local_res8 = UWidgetTree::FindWidget(this_00,&this->WidgetName);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    FWeakObjectPtr::operator=(&(this->WidgetPtr).WeakPtr,(FObjectPtr)&local_res8);
  }
  return this;
}

// FWidgetChild @ 146aad490

FWidgetChild * __thiscall FWidgetChild::FWidgetChild(FWidgetChild *this)

{
  (this->WidgetName).ComparisonIndex = 0;
  (this->WidgetName).Number = 0;
  (this->WidgetPtr).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// Resolve @ 146aaf8f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __thiscall FWidgetChild::Resolve(FWidgetChild *this,UWidgetTree *param_1)

{
  UWidget *pUVar1;
  FWeakObjectPtr local_res8 [2];
  FWeakObjectPtr local_res18;
  FWidgetChild *local_28;
  FWeakObjectPtr *local_20;
  code *local_18;
  FWidgetChild **local_10;
  
  if ((this->WidgetName != (FName)0x0) && (param_1 != (UWidgetTree *)0x0)) {
    local_res8[0].ObjectIndex = 0;
    local_res8[0].ObjectSerialNumber = 0;
    local_20 = local_res8;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UWidgetTree::FindWidget'::__l2::<lambda_1>,void,UWidget_*>::Call;
    local_28 = this;
    UWidgetTree::ForEachWidget(param_1,(TFunctionRef<void___cdecl(UWidget_*)> *)&local_18);
    local_res18 = local_res8[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8[0] != (FWeakObjectPtr)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8[0]);
    }
    FWeakObjectPtr::operator=(&(this->WidgetPtr).WeakPtr,(FObjectPtr)&local_res18);
    pUVar1 = (UWidget *)FWeakObjectPtr::Get(&(this->WidgetPtr).WeakPtr);
    return pUVar1;
  }
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)&local_res18);
  (this->WidgetPtr).WeakPtr = local_res8[0];
  pUVar1 = (UWidget *)FWeakObjectPtr::Get(&(this->WidgetPtr).WeakPtr);
  return pUVar1;
}

