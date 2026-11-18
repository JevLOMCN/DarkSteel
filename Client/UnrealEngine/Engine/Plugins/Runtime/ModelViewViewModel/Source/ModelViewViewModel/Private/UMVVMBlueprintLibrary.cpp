// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 8

// StaticClass @ 14a737df0

UClass * __cdecl UMVVMBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMBlueprintLibrary",
               &Z_Registration_Info_UClass_UMVVMBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUMVVMBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMVVMBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UMVVMBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMBlueprintLibrary.InnerSingleton;
}

// UMVVMBlueprintLibrary @ 14a73f8b0

UMVVMBlueprintLibrary * __thiscall
UMVVMBlueprintLibrary::UMVVMBlueprintLibrary(UMVVMBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMVVMBlueprintLibrary__6B_;
  return this;
}

// UMVVMBlueprintLibrary @ 14a73f8e0

UMVVMBlueprintLibrary * __thiscall
UMVVMBlueprintLibrary::UMVVMBlueprintLibrary
          (UMVVMBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMVVMBlueprintLibrary__6B_;
  return this;
}

// ~UMVVMBlueprintLibrary @ 14a740660

void __thiscall UMVVMBlueprintLibrary::~UMVVMBlueprintLibrary(UMVVMBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UMVVMBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14a7535f0

UClass * __cdecl UMVVMBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMBlueprintLibrary",
               &Z_Registration_Info_UClass_UMVVMBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUMVVMBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMVVMBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UMVVMBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMBlueprintLibrary.InnerSingleton;
}

// SetViewModelByClass @ 14a75f5b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UMVVMBlueprintLibrary::SetViewModelByClass
          (UUserWidget **param_1,TScriptInterface<INotifyFieldValueChanged> *param_2)

{
  UUserWidget *pUVar1;
  UMVVMView *this;
  FText *pFVar2;
  UUserWidget *local_res8;
  TSharedRef<FTokenizedMessage,1> local_68;
  TSharedRef<FTokenizedMessage,1> local_58;
  FMessageLog local_48;
  
  if ((*param_1 != (UUserWidget *)0x0) &&
     (this = UUserWidget::GetExtension<UMVVMView>(*param_1), this != (UMVVMView *)0x0)) {
    local_68.Object = *(FTokenizedMessage **)param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_68.Object != (FTokenizedMessage *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_68.Object);
    }
    local_68.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&param_2->field_0x8;
    UMVVMView::SetViewModelByClass(this,(TScriptInterface<INotifyFieldValueChanged> *)&local_68);
    return;
  }
  pUVar1 = *param_1;
  FMessageLog::FMessageLog((FMessageLog *)&local_48,&UE::MVVM::FMessageLog::LogName);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UUserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_48.UserWidget.WeakPtr.ObjectIndex = 0;
  local_48.UserWidget.WeakPtr.ObjectSerialNumber = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UUserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=(&local_48.UserWidget.WeakPtr,(FObjectPtr)&local_res8);
  if (*param_1 == (UUserWidget *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_68,L"MVVMBlueprintLibrary",L"MissingWidget",
                        L"No widget passed into this function");
    UE::MVVM::FMessageLog::Message(&local_48,&local_58,Error,pFVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    local_58.Object = local_68.Object;
  }
  else {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_58,L"MVVMBlueprintLibrary",L"MissingView",
                        L"Widget does not have an MVVMView, cannot set any View Model");
    UE::MVVM::FMessageLog::Message(&local_48,&local_68,Error,pFVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  if (local_58.Object != (FTokenizedMessage *)0x0) {
    (**(code **)((local_58.Object)->_padding_ + 0x10))();
  }
  FMessageLog::~FMessageLog((FMessageLog *)&local_48);
  return;
}

// StaticRegisterNativesUMVVMBlueprintLibrary @ 14a760000

void __cdecl UMVVMBlueprintLibrary::StaticRegisterNativesUMVVMBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UMVVMBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetViewModelByClass @ 14a76cac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UMVVMBlueprintLibrary::execSetViewModelByClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  FTokenizedMessage *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  UMVVMView *this;
  FText *pFVar5;
  longlong *plVar6;
  longlong local_res10 [2];
  UObject *local_res20;
  FTokenizedMessage *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  TSharedRef<FTokenizedMessage,1> local_88;
  TSharedRef<FTokenizedMessage,1> local_78;
  FMessageLog local_68;
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_98 = (FTokenizedMessage *)0x0;
  pTStack_90 = (TReferenceControllerBase<1> *)0x0;
  plVar6 = local_res10;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar6 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pFVar3 = local_98;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_98 != (FTokenizedMessage *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_98);
  }
  pTVar4 = pTStack_90;
  if ((UUserWidget *)*plVar6 != (UUserWidget *)0x0) {
    this = UUserWidget::GetExtension<UMVVMView>((UUserWidget *)*plVar6);
    if (this != (UMVVMView *)0x0) {
      local_88.Object = pFVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pFVar3 != (FTokenizedMessage *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pFVar3);
      }
      local_88.SharedReferenceCount.ReferenceController = pTVar4;
      UMVVMView::SetViewModelByClass(this,(TScriptInterface<INotifyFieldValueChanged> *)&local_88);
      goto LAB_14a76ccd0;
    }
  }
  pUVar2 = (UObject *)*plVar6;
  FMessageLog::FMessageLog((FMessageLog *)&local_68,&UE::MVVM::FMessageLog::LogName);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_68.UserWidget.WeakPtr.ObjectIndex = 0;
  local_68.UserWidget.WeakPtr.ObjectSerialNumber = 0;
  local_res20 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FWeakObjectPtr::operator=(&local_68.UserWidget.WeakPtr,(FObjectPtr)&local_res20);
  if (*plVar6 == 0) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_88,L"MVVMBlueprintLibrary",L"MissingWidget",
                        L"No widget passed into this function");
    UE::MVVM::FMessageLog::Message(&local_68,&local_78,Error,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    local_78.Object = local_88.Object;
  }
  else {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_78,L"MVVMBlueprintLibrary",L"MissingView",
                        L"Widget does not have an MVVMView, cannot set any View Model");
    UE::MVVM::FMessageLog::Message(&local_68,&local_88,Error,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
  }
  if (local_78.Object != (FTokenizedMessage *)0x0) {
    (**(code **)((local_78.Object)->_padding_ + 0x10))();
  }
  FMessageLog::~FMessageLog((FMessageLog *)&local_68);
LAB_14a76ccd0:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*plVar6 != (UObject *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)*plVar6);
  }
  return;
}

