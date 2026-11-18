// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 10

// StaticClass @ 14a73ae90

UClass * __cdecl UMVVMViewPanelWidgetClassExtension::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMViewPanelWidgetClassExtension.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMViewPanelWidgetClassExtension",
               &Z_Registration_Info_UClass_UMVVMViewPanelWidgetClassExtension.InnerSingleton,
               StaticRegisterNativesUMVVMViewPanelWidgetClassExtension,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMVVMViewPanelWidgetClassExtension>,
               InternalVTableHelperCtorCaller<UMVVMViewPanelWidgetClassExtension>,local_res8,
               UMVVMViewClassExtension::StaticClass,UMVVMViewClass::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMViewPanelWidgetClassExtension.InnerSingleton;
}

// UMVVMViewPanelWidgetClassExtension @ 14a740230

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMVVMViewPanelWidgetClassExtension * __thiscall
UMVVMViewPanelWidgetClassExtension::UMVVMViewPanelWidgetClassExtension
          (UMVVMViewPanelWidgetClassExtension *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMVVMViewPanelWidgetClassExtension__6B_;
  (this->WidgetName).ComparisonIndex = 0;
  (this->WidgetName).Number = 0;
  (this->EntryViewModelName).ComparisonIndex = 0;
  (this->EntryViewModelName).Number = 0;
  (this->EntryWidgetClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SlotTemplate).field0_0x0.DebugPtr = (UPanelSlot *)0x0;
  (this->PanelPropertyName).ComparisonIndex = 0;
  (this->PanelPropertyName).Number = 0;
  (this->EntryViewModelClass).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->WidgetPath).StartIndex = -1;
  (this->WidgetPath).Num = -1;
  return this;
}

// UMVVMViewPanelWidgetClassExtension @ 14a740280

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMVVMViewPanelWidgetClassExtension * __thiscall
UMVVMViewPanelWidgetClassExtension::UMVVMViewPanelWidgetClassExtension
          (UMVVMViewPanelWidgetClassExtension *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMVVMViewPanelWidgetClassExtension__6B_;
  (this->WidgetName).ComparisonIndex = 0;
  (this->WidgetName).Number = 0;
  (this->EntryViewModelName).ComparisonIndex = 0;
  (this->EntryViewModelName).Number = 0;
  (this->EntryWidgetClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SlotTemplate).field0_0x0.DebugPtr = (UPanelSlot *)0x0;
  (this->PanelPropertyName).ComparisonIndex = 0;
  (this->PanelPropertyName).Number = 0;
  (this->EntryViewModelClass).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->WidgetPath).StartIndex = -1;
  (this->WidgetPath).Num = -1;
  return this;
}

// ~UMVVMViewPanelWidgetClassExtension @ 14a740a80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMVVMViewPanelWidgetClassExtension::~UMVVMViewPanelWidgetClassExtension
          (UMVVMViewPanelWidgetClassExtension *this)

{
  this->_padding_ = (longlong)&___7UMVVMViewClassExtension__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a7541c0

UClass * __cdecl UMVVMViewPanelWidgetClassExtension::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMViewPanelWidgetClassExtension.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMViewPanelWidgetClassExtension",
               &Z_Registration_Info_UClass_UMVVMViewPanelWidgetClassExtension.InnerSingleton,
               StaticRegisterNativesUMVVMViewPanelWidgetClassExtension,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMVVMViewPanelWidgetClassExtension>,
               InternalVTableHelperCtorCaller<UMVVMViewPanelWidgetClassExtension>,local_res8,
               UMVVMViewClassExtension::StaticClass,UMVVMViewClass::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMViewPanelWidgetClassExtension.InnerSingleton;
}

// OnViewDestructed @ 14a75bff0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMVVMViewPanelWidgetClassExtension::OnViewDestructed
          (UMVVMViewPanelWidgetClassExtension *this,UUserWidget *param_1,UMVVMView *param_2,
          UMVVMViewExtension *param_3)

{
  bool bVar1;
  FObjectPropertyBase *this_00;
  undefined1 local_res8 [8];
  
  this_00 = FindFProperty<FObjectPropertyBase>
                      ((UStruct *)param_1->_padding_,this->PanelPropertyName,Default);
  if ((this_00 == (FObjectPropertyBase *)0x0) &&
     (bVar1 = `UMVVMViewPanelWidgetClassExtension::OnViewDestructed'::__l3::<lambda_1>::operator()
                        (local_res8), !bVar1)) {
    return;
  }
  FObjectPropertyBase::SetObjectPropertyValue_InContainer(this_00,param_1,(UObject *)0x0,0);
  return;
}

// StaticRegisterNativesUMVVMViewPanelWidgetClassExtension @ 14a7602e0

void __cdecl
UMVVMViewPanelWidgetClassExtension::StaticRegisterNativesUMVVMViewPanelWidgetClassExtension(void)

{
  return;
}

// ViewConstructed @ 14a767da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

UMVVMViewExtension * __thiscall
UMVVMViewPanelWidgetClassExtension::ViewConstructed
          (UMVVMViewPanelWidgetClassExtension *this,UUserWidget *param_1,UMVVMView *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UMVVMViewExtension *pUVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  FObjectPropertyBase *this_00;
  UClass *pUVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  longlong *plVar11;
  UObject *pUVar12;
  undefined1 auStack_2e8 [32];
  undefined1 local_2c8 [8];
  UUserWidget *local_2c0;
  FName local_2b8;
  UUserWidget *local_2b0;
  UUserWidget *local_2a8;
  TValueOrError<UObject_*,void> local_2a0;
  TSharedRef<FTokenizedMessage,1> local_290;
  FText local_280;
  FText local_270;
  TSharedRef<FTokenizedMessage,1> local_260;
  FText local_250;
  FText local_240;
  TSharedRef<FTokenizedMessage,1> local_230;
  FText local_220;
  FText local_210;
  FMessageLog local_200;
  FMessageLog local_1c8;
  FMessageLog local_190;
  FText local_158;
  FTextFormat local_148;
  FText local_138;
  FTextFormat local_128;
  FText local_118;
  FTextFormat local_108;
  TValueOrError<UE::MVVM::FFieldContext,void> local_f8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  if (((param_2->GeneratedViewClass).field0_0x0.DebugPtr == (UMVVMViewClass *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("View->GetViewClass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Extensions\\MVVMViewPanelWidgetExtension.cpp"
                         ,0xb0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UMVVMViewExtension *)(*pcVar2)();
    return pUVar4;
  }
  FMVVMCompiledBindingLibrary::EvaluateFieldPath
            (&((param_2->GeneratedViewClass).field0_0x0.DebugPtr)->BindingLibrary,&local_f8,
             (UObject *)param_1,&this->WidgetPath);
  if (local_f8.Value.bIsSet == false) {
    FMessageLog::FMessageLog((FMessageLog *)&local_190,&UE::MVVM::FMessageLog::LogName);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_190.UserWidget.WeakPtr.ObjectIndex = 0;
    local_190.UserWidget.WeakPtr.ObjectSerialNumber = 0;
    local_2a8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_190.UserWidget.WeakPtr,(FObjectPtr)&local_2a8);
    pFVar8 = FText::FromName(&local_118,&this->WidgetName);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_210,L"MVVMViewPanelWidgetExtension",
                        L"BindToEntryGenerationFailInvalidFieldPathWidget",
                        L"The field path for panel-type widget \'{0}\' is invalid, so viewmodels won\'t be bound to its entries."
                       );
    pFVar10 = FTextFormat::FTextFormat(&local_108,pFVar9,Default);
    pFVar8 = FText::Format<FText>(&local_220,pFVar10,pFVar8);
    UE::MVVM::FMessageLog::Message(&local_190,&local_230,Error,pFVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_230.SharedReferenceCount.ReferenceController);
    if (local_220.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_220.TextData.Reference + 0x10))();
    }
    if (local_210.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_210.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog((FMessageLog *)&local_190);
    return (UMVVMViewExtension *)0x0;
  }
  UE::MVVM::FieldPathHelper::EvaluateObjectProperty(&local_2a0,(FFieldContext *)&local_f8);
  if ((local_2a0.Value.bIsSet == false) || (local_2a0.Value.TypedValue == (UObject *)0x0)) {
    FMessageLog::FMessageLog((FMessageLog *)&local_1c8,&UE::MVVM::FMessageLog::LogName);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_1c8.UserWidget.WeakPtr.ObjectIndex = 0;
    local_1c8.UserWidget.WeakPtr.ObjectSerialNumber = 0;
    local_2b0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_1c8.UserWidget.WeakPtr,(FObjectPtr)&local_2b0);
    pFVar8 = FText::FromName(&local_138,&this->WidgetName);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_240,L"MVVMViewPanelWidgetExtension",
                        L"BindToEntryGenerationFailInvalidObjectPropertyWidget",
                        L"The property object for panel-type widget \'{0}\' is not found, so viewmodels won\'t be bound to its entries."
                       );
    pFVar10 = FTextFormat::FTextFormat(&local_128,pFVar9,Default);
    pFVar8 = FText::Format<FText>(&local_250,pFVar10,pFVar8);
    UE::MVVM::FMessageLog::Message(&local_1c8,&local_260,Error,pFVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_260.SharedReferenceCount.ReferenceController);
    if (local_250.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_250.TextData.Reference + 0x10))();
    }
    if (local_240.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_240.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog((FMessageLog *)&local_1c8);
    return (UMVVMViewExtension *)0x0;
  }
  pUVar5 = Z_Construct_UClass_UPanelWidget_NoRegister();
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(*(longlong *)&(local_2a0.Value.TypedValue)->field_0x10 + 0x38) < iVar1) ||
     (pUVar12 = local_2a0.Value.TypedValue,
     (longlong *)
     *(undefined1 **)
      (*(longlong *)(*(longlong *)&(local_2a0.Value.TypedValue)->field_0x10 + 0x30) +
      (longlong)iVar1 * 8) != &pUVar5->_padding_)) {
    pUVar12 = (UObject *)0x0;
  }
  if (pUVar12 == (UObject *)0x0) {
    FMessageLog::FMessageLog((FMessageLog *)&local_200,&UE::MVVM::FMessageLog::LogName);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_200.UserWidget.WeakPtr.ObjectIndex = 0;
    local_200.UserWidget.WeakPtr.ObjectSerialNumber = 0;
    local_2c0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_200.UserWidget.WeakPtr,(FObjectPtr)&local_2c0);
    local_2b8.ComparisonIndex.Value = *(uint *)&(local_2a0.Value.TypedValue)->field_0x18;
    local_2b8.Number = *(uint *)&(local_2a0.Value.TypedValue)->field_0x1c;
    pFVar8 = FText::FromName(&local_158,&local_2b8);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_270,L"MVVMViewPanelWidgetExtension",
                        L"BindToEntryGenerationFailWidgetNotPanel",
                        L"The object property \'{0}\' is not of type panel widget, but has an Viewmodel extension meant for panel widgets. The extension won\'t have any effects."
                       );
    pFVar10 = FTextFormat::FTextFormat(&local_148,pFVar9,Default);
    pFVar8 = FText::Format<FText>(&local_280,pFVar10,pFVar8);
    UE::MVVM::FMessageLog::Message(&local_200,&local_290,Error,pFVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_290.SharedReferenceCount.ReferenceController);
    if (local_280.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_280.TextData.Reference + 0x10))();
    }
    if (local_270.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_270.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog((FMessageLog *)&local_200);
    return (UMVVMViewExtension *)0x0;
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = UMVVMPanelWidgetViewExtension::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar5);
  local_c8._8_8_ = param_2;
  pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar11 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UMVVMViewPanelWidgetClassExtension *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  *(UMVVMViewPanelWidgetClassExtension **)&pUVar6[1].field_0x8 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar12);
  }
  *(UObject **)(pUVar6 + 1) = pUVar12;
  this_00 = FindFProperty<FObjectPropertyBase>
                      ((UStruct *)param_1->_padding_,this->PanelPropertyName,Default);
  if (this_00 != (FObjectPropertyBase *)0x0) {
    pUVar5 = (this_00->PropertyClass).field0_0x0.DebugPtr;
    pUVar7 = UMVVMPanelWidgetViewExtension::StaticClass();
    if (pUVar7 != (UClass *)0x0) {
      iVar1 = (int)pUVar7->_padding_;
      if (((int)pUVar5->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_14a767f7c;
    }
  }
  bVar3 = `UMVVMViewPanelWidgetClassExtension::ViewConstructed'::__l19::<lambda_1>::operator()
                    (local_2c8);
  if (!bVar3) {
    return (UMVVMViewExtension *)pUVar6;
  }
LAB_14a767f7c:
  FObjectPropertyBase::SetObjectPropertyValue_InContainer(this_00,param_1,pUVar6,0);
  return (UMVVMViewExtension *)pUVar6;
}

// operator() @ 150553b80

bool __thiscall
`UMVVMViewPanelWidgetClassExtension::OnViewDestructed'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4727765940622589721>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4727765940622589721>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150553cc0

bool __thiscall
`UMVVMViewPanelWidgetClassExtension::ViewConstructed'::__l19::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4727765940622589756>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4727765940622589756>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

