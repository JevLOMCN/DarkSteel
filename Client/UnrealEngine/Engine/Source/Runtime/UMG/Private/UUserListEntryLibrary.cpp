// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 12

// StaticClass @ 1468d7ac0

UClass * __cdecl UUserListEntryLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserListEntryLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UserListEntryLibrary",
               &Z_Registration_Info_UClass_UUserListEntryLibrary.InnerSingleton,
               StaticRegisterNativesUUserListEntryLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UUserListEntryLibrary>,
               InternalVTableHelperCtorCaller<UUserListEntryLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserListEntryLibrary.InnerSingleton;
}

// UUserListEntryLibrary @ 146902470

UUserListEntryLibrary * __thiscall
UUserListEntryLibrary::UUserListEntryLibrary(UUserListEntryLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UUserListEntryLibrary__6B_;
  return this;
}

// UUserListEntryLibrary @ 1469024a0

UUserListEntryLibrary * __thiscall
UUserListEntryLibrary::UUserListEntryLibrary
          (UUserListEntryLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UUserListEntryLibrary__6B_;
  return this;
}

// ~UUserListEntryLibrary @ 146904e90

void __thiscall UUserListEntryLibrary::~UUserListEntryLibrary(UUserListEntryLibrary *this)

{
  *(undefined ***)this = &___7UUserListEntryLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetOwningListView @ 1469209c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UListViewBase * __cdecl
UUserListEntryLibrary::GetOwningListView(TScriptInterface<IUserListEntry> *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UUserWidget *pUVar3;
  UUserWidget *pUVar4;
  TSharedPtr<IObjectTableRow_const_,1> local_18;
  
  pUVar4 = *(UUserWidget **)param_1;
  pUVar3 = (UUserWidget *)0x0;
  if (pUVar4 != (UUserWidget *)0x0) {
    pUVar2 = Z_Construct_UClass_UUserWidget_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_1469209fa;
  }
  pUVar4 = pUVar3;
LAB_1469209fa:
  IObjectTableRow::ObjectRowFromUserWidget(&local_18,pUVar4);
  if (local_18.Object != (IObjectTableRow *)0x0) {
    pUVar3 = (UUserWidget *)(**(code **)((longlong)*local_18.Object + 0x80))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return (UListViewBase *)pUVar3;
}

// GetPrivateStaticClass @ 146922df0

UClass * __cdecl UUserListEntryLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserListEntryLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UserListEntryLibrary",
               &Z_Registration_Info_UClass_UUserListEntryLibrary.InnerSingleton,
               StaticRegisterNativesUUserListEntryLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UUserListEntryLibrary>,
               InternalVTableHelperCtorCaller<UUserListEntryLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserListEntryLibrary.InnerSingleton;
}

// IsListItemExpanded @ 14692c960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __cdecl UUserListEntryLibrary::IsListItemExpanded(TScriptInterface<IUserListEntry> *param_1)

{
  int iVar1;
  undefined1 uVar2;
  UClass *pUVar3;
  UUserWidget *pUVar4;
  TSharedPtr<IObjectTableRow_const_,1> local_18;
  
  pUVar4 = *(UUserWidget **)param_1;
  if (pUVar4 != (UUserWidget *)0x0) {
    pUVar3 = Z_Construct_UClass_UUserWidget_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14692c993;
  }
  pUVar4 = (UUserWidget *)0x0;
LAB_14692c993:
  IObjectTableRow::ObjectRowFromUserWidget(&local_18,pUVar4);
  if (local_18.Object != (IObjectTableRow *)0x0) {
    uVar2 = (**(code **)((longlong)*local_18.Object + 0x20))();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return (bool)uVar2;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return false;
}

// IsListItemSelected @ 14692cac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __cdecl UUserListEntryLibrary::IsListItemSelected(TScriptInterface<IUserListEntry> *param_1)

{
  int iVar1;
  undefined1 uVar2;
  UClass *pUVar3;
  UUserWidget *pUVar4;
  TSharedPtr<IObjectTableRow_const_,1> local_18;
  
  pUVar4 = *(UUserWidget **)param_1;
  if (pUVar4 != (UUserWidget *)0x0) {
    pUVar3 = Z_Construct_UClass_UUserWidget_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14692caf3;
  }
  pUVar4 = (UUserWidget *)0x0;
LAB_14692caf3:
  IObjectTableRow::ObjectRowFromUserWidget(&local_18,pUVar4);
  if (local_18.Object != (IObjectTableRow *)0x0) {
    uVar2 = (**(code **)((longlong)*local_18.Object + 0x30))();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return (bool)uVar2;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return false;
}

// StaticRegisterNativesUUserListEntryLibrary @ 146945ac0

void __cdecl UUserListEntryLibrary::StaticRegisterNativesUUserListEntryLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UUserListEntryLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetOwningListView @ 1469522a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UUserListEntryLibrary::execGetOwningListView(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UClass *pUVar3;
  undefined8 uVar4;
  UUserWidget *pUVar5;
  UUserWidget *local_28;
  undefined8 uStack_20;
  TSharedPtr<IObjectTableRow_const_,1> local_18;
  
  local_28 = (UUserWidget *)0x0;
  uStack_20 = 0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pUVar5 = local_28;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_28 != (UUserWidget *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_28);
    }
    pUVar3 = Z_Construct_UClass_UUserWidget_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_146952347;
  }
  pUVar5 = (UUserWidget *)0x0;
LAB_146952347:
  IObjectTableRow::ObjectRowFromUserWidget(&local_18,pUVar5);
  if (local_18.Object != (IObjectTableRow *)0x0) {
    uVar4 = (**(code **)((longlong)*local_18.Object + 0x80))();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    *(undefined8 *)param_3 = uVar4;
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  *(undefined8 *)param_3 = 0;
  return;
}

// execIsListItemExpanded @ 1469537f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UUserListEntryLibrary::execIsListItemExpanded(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UUserWidget *pUVar5;
  UUserWidget *local_28;
  undefined8 uStack_20;
  TSharedPtr<IObjectTableRow_const_,1> local_18;
  
  local_28 = (UUserWidget *)0x0;
  uStack_20 = 0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pUVar5 = local_28;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_28 != (UUserWidget *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_28);
    }
    pUVar4 = Z_Construct_UClass_UUserWidget_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) goto LAB_146953897;
  }
  pUVar5 = (UUserWidget *)0x0;
LAB_146953897:
  IObjectTableRow::ObjectRowFromUserWidget(&local_18,pUVar5);
  if (local_18.Object != (IObjectTableRow *)0x0) {
    uVar3 = (**(code **)((longlong)*local_18.Object + 0x20))();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    *(undefined1 *)param_3 = uVar3;
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsListItemSelected @ 1469538f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UUserListEntryLibrary::execIsListItemSelected(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UUserWidget *pUVar5;
  UUserWidget *local_28;
  undefined8 uStack_20;
  TSharedPtr<IObjectTableRow_const_,1> local_18;
  
  local_28 = (UUserWidget *)0x0;
  uStack_20 = 0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pUVar5 = local_28;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_28 != (UUserWidget *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_28);
    }
    pUVar4 = Z_Construct_UClass_UUserWidget_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) goto LAB_146953997;
  }
  pUVar5 = (UUserWidget *)0x0;
LAB_146953997:
  IObjectTableRow::ObjectRowFromUserWidget(&local_18,pUVar5);
  if (local_18.Object != (IObjectTableRow *)0x0) {
    uVar3 = (**(code **)((longlong)*local_18.Object + 0x30))();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    *(undefined1 *)param_3 = uVar3;
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  *(undefined1 *)param_3 = 0;
  return;
}

