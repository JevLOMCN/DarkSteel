// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 9

// StaticClass @ 14a738e90

UClass * __cdecl UMVVMViewListViewBaseClassExtension::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMViewListViewBaseClassExtension.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMViewListViewBaseClassExtension",
               &Z_Registration_Info_UClass_UMVVMViewListViewBaseClassExtension.InnerSingleton,
               StaticRegisterNativesUMVVMViewListViewBaseClassExtension,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMVVMViewListViewBaseClassExtension>,
               InternalVTableHelperCtorCaller<UMVVMViewListViewBaseClassExtension>,local_res8,
               UMVVMViewClassExtension::StaticClass,UMVVMViewClass::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMViewListViewBaseClassExtension.InnerSingleton;
}

// UMVVMViewListViewBaseClassExtension @ 14a73ff90

UMVVMViewListViewBaseClassExtension * __thiscall
UMVVMViewListViewBaseClassExtension::UMVVMViewListViewBaseClassExtension
          (UMVVMViewListViewBaseClassExtension *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMVVMViewListViewBaseClassExtension__6B_;
  (this->WidgetName).ComparisonIndex = 0;
  (this->WidgetName).Number = 0;
  (this->EntryViewModelName).ComparisonIndex = 0;
  (this->EntryViewModelName).Number = 0;
  (this->WidgetPath).StartIndex = -1;
  (this->WidgetPath).Num = -1;
  *(undefined8 *)&this->CachedListViewWidgets = 0;
  *(undefined8 *)&(this->CachedListViewWidgets).field_0x8 = 0;
  *(undefined8 *)&(this->CachedListViewWidgets).field_0x20 = 0;
  *(undefined4 *)&(this->CachedListViewWidgets).field_0x28 = 0;
  *(undefined4 *)&(this->CachedListViewWidgets).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedListViewWidgets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedListViewWidgets).field_0x34 = 0;
  *(undefined8 *)&(this->CachedListViewWidgets).field_0x40 = 0;
  *(undefined4 *)&(this->CachedListViewWidgets).field_0x48 = 0;
  return this;
}

// UMVVMViewListViewBaseClassExtension @ 14a740000

UMVVMViewListViewBaseClassExtension * __thiscall
UMVVMViewListViewBaseClassExtension::UMVVMViewListViewBaseClassExtension
          (UMVVMViewListViewBaseClassExtension *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMVVMViewListViewBaseClassExtension__6B_;
  (this->WidgetName).ComparisonIndex = 0;
  (this->WidgetName).Number = 0;
  (this->EntryViewModelName).ComparisonIndex = 0;
  (this->EntryViewModelName).Number = 0;
  (this->WidgetPath).StartIndex = -1;
  (this->WidgetPath).Num = -1;
  *(undefined8 *)&this->CachedListViewWidgets = 0;
  *(undefined8 *)&(this->CachedListViewWidgets).field_0x8 = 0;
  *(undefined8 *)&(this->CachedListViewWidgets).field_0x20 = 0;
  *(undefined4 *)&(this->CachedListViewWidgets).field_0x28 = 0;
  *(undefined4 *)&(this->CachedListViewWidgets).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedListViewWidgets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedListViewWidgets).field_0x34 = 0;
  *(undefined8 *)&(this->CachedListViewWidgets).field_0x40 = 0;
  *(undefined4 *)&(this->CachedListViewWidgets).field_0x48 = 0;
  return this;
}

// ~UMVVMViewListViewBaseClassExtension @ 14a740930

void __thiscall
UMVVMViewListViewBaseClassExtension::~UMVVMViewListViewBaseClassExtension
          (UMVVMViewListViewBaseClassExtension *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMVVMViewListViewBaseClassExtension__6B_;
  *(undefined4 *)&(this->CachedListViewWidgets).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedListViewWidgets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,TWeakObjectPtr<UListViewBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,TWeakObjectPtr<UListViewBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,TWeakObjectPtr<UListViewBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedListViewWidgets);
  this->_padding_ = (longlong)&___7UMVVMViewClassExtension__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a753ef0

UClass * __cdecl UMVVMViewListViewBaseClassExtension::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMViewListViewBaseClassExtension.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMViewListViewBaseClassExtension",
               &Z_Registration_Info_UClass_UMVVMViewListViewBaseClassExtension.InnerSingleton,
               StaticRegisterNativesUMVVMViewListViewBaseClassExtension,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMVVMViewListViewBaseClassExtension>,
               InternalVTableHelperCtorCaller<UMVVMViewListViewBaseClassExtension>,local_res8,
               UMVVMViewClassExtension::StaticClass,UMVVMViewClass::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMViewListViewBaseClassExtension.InnerSingleton;
}

// HandleSetViewModelOnEntryWidget @ 14a754db0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UMVVMViewListViewBaseClassExtension::HandleSetViewModelOnEntryWidget
          (UMVVMViewListViewBaseClassExtension *this,UUserWidget *param_1,UUserWidget *param_2,
          UListViewBase *param_3,FName param_4)

{
  bool bVar1;
  UMVVMView *this_00;
  FTokenizedMessage *this_01;
  UClass *pUVar2;
  UClass *pUVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  UUserWidget *local_res10;
  TSharedRef<FTokenizedMessage,1> local_a8;
  FText local_98;
  FText local_88;
  FMessageLog local_78;
  FText local_40;
  FTextFormat local_30;
  
  if (((param_1 != (UUserWidget *)0x0) &&
      (this_00 = UUserWidget::GetExtension<UMVVMView>(param_1), this_00 != (UMVVMView *)0x0)) &&
     (this_01 = (FTokenizedMessage *)(**(code **)(param_3->_padding_ + 0x310))(param_3,param_1),
     this_01 != (FTokenizedMessage *)0x0)) {
    pUVar3 = (UClass *)(this_01->MessageTokens).AllocatorInstance.Data;
    if (pUVar3 != (UClass *)0x0) {
      pUVar2 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
      bVar1 = UClass::ImplementsInterface(pUVar3,pUVar2);
      if (bVar1) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        local_a8.Object = this_01;
        pUVar3 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
        local_a8.SharedReferenceCount.ReferenceController =
             UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar3);
        UMVVMView::SetViewModel
                  (this_00,param_4,(TScriptInterface<INotifyFieldValueChanged> *)&local_a8);
        return;
      }
    }
    FMessageLog::FMessageLog((FMessageLog *)&local_78,&UE::MVVM::FMessageLog::LogName);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UUserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_78.UserWidget.WeakPtr.ObjectIndex = 0;
    local_78.UserWidget.WeakPtr.ObjectSerialNumber = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UUserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_78.UserWidget.WeakPtr,(FObjectPtr)&local_res10);
    pFVar4 = FText::FromName(&local_40,&this->WidgetName);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"MVVMViewListViewBaseExtension",
                        L"SetViewModelOnEntryWidgetFailNotViewModel",
                        L"Trying to set an object that is not a viewmodel on entries of list-type widget \'{0}\'. Check the implementation of widget \'{0}\' and make sure the function GetListObjectFromEntry is overriden to return a viewmodel object. If you do not wish to set viewmodels on the entries of this widget, please remove the corresonding Viewmodel extension from it."
                       );
    pFVar6 = FTextFormat::FTextFormat(&local_30,pFVar5,Default);
    pFVar4 = FText::Format<FText>(&local_98,pFVar6,pFVar4);
    UE::MVVM::FMessageLog::Message(&local_78,&local_a8,Error,pFVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog((FMessageLog *)&local_78);
  }
  return;
}

// OnSourcesInitialized @ 14a75ba00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UMVVMViewListViewBaseClassExtension::OnSourcesInitialized
          (UMVVMViewListViewBaseClassExtension *this,UUserWidget *param_1,UMVVMView *param_2,
          UMVVMViewExtension *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  FMessageLog *this_00;
  TPairInitializer<FObjectKey_&&,TWeakObjectPtr<UListViewBase,FWeakObjectPtr>_&&> local_res8;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_268;
  FName local_260;
  UMVVMView *local_258;
  FWeakObjectPtr local_250;
  FName local_248;
  UUserWidget *local_240;
  FName local_238;
  UUserWidget *local_230;
  UUserWidget *local_228;
  TValueOrError<UObject_*,void> local_220;
  FWeakObjectPtr *local_210;
  FWeakObjectPtr *local_208;
  undefined1 local_200 [16];
  TReferenceControllerBase<1> *local_1f0;
  FText local_1e8;
  FText local_1d8;
  TSharedRef<FTokenizedMessage,1> local_1c8;
  FText local_1b8;
  FText local_1a8;
  TSharedRef<FTokenizedMessage,1> local_198;
  FText local_188;
  FText local_178;
  FMessageLog local_168;
  FMessageLog local_130;
  FMessageLog local_f8;
  FText local_c0;
  FTextFormat local_b0;
  FText local_a0;
  FTextFormat local_90;
  FText local_80;
  FTextFormat local_70;
  TValueOrError<UE::MVVM::FFieldContext,void> local_60;
  
  local_res8.Value = (TWeakObjectPtr<UListViewBase,FWeakObjectPtr> *)param_1;
  if (((param_2->GeneratedViewClass).field0_0x0.DebugPtr == (UMVVMViewClass *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("View->GetViewClass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Extensions\\MVVMViewListViewBaseExtension.cpp"
                         ,0x1d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FMVVMCompiledBindingLibrary::EvaluateFieldPath
            (&((param_2->GeneratedViewClass).field0_0x0.DebugPtr)->BindingLibrary,&local_60,
             (UObject *)param_1,&this->WidgetPath);
  if (local_60.Value.bIsSet == false) {
    FMessageLog::FMessageLog((FMessageLog *)&local_f8,&UE::MVVM::FMessageLog::LogName);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_f8.UserWidget.WeakPtr.ObjectIndex = 0;
    local_f8.UserWidget.WeakPtr.ObjectSerialNumber = 0;
    local_228 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_f8.UserWidget.WeakPtr,(FObjectPtr)&local_228);
    pFVar5 = FText::FromName(&local_80,&this->WidgetName);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_178,L"MVVMViewListViewBaseExtension",
                        L"BindToEntryGenerationFailInvalidFieldPathWidget",
                        L"The field path for list-type widget \'{0}\' is invalid, so viewmodels won\'t be bound to its entries."
                       );
    pFVar7 = FTextFormat::FTextFormat(&local_70,pFVar6,Default);
    pFVar5 = FText::Format<FText>(&local_188,pFVar7,pFVar5);
    UE::MVVM::FMessageLog::Message(&local_f8,&local_198,Error,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_198.SharedReferenceCount.ReferenceController);
    if (local_188.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
    }
    if (local_178.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog((FMessageLog *)&local_f8);
  }
  else {
    UE::MVVM::FieldPathHelper::EvaluateObjectProperty(&local_220,(FFieldContext *)&local_60);
    if ((local_220.Value.bIsSet == false) || ((FName)local_220.Value.TypedValue == (FName)0x0)) {
      FMessageLog::FMessageLog((FMessageLog *)&local_130,&UE::MVVM::FMessageLog::LogName);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_130.UserWidget.WeakPtr.ObjectIndex = 0;
      local_130.UserWidget.WeakPtr.ObjectSerialNumber = 0;
      local_230 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_130.UserWidget.WeakPtr,(FObjectPtr)&local_230);
      pFVar5 = FText::FromName(&local_a0,&this->WidgetName);
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_1a8,L"MVVMViewListViewBaseExtension",
                          L"BindToEntryGenerationFailInvalidObjectPropertyWidget",
                          L"The property object for list-type widget \'{0}\' is not found, so viewmodels won\'t be bound to its entries."
                         );
      pFVar7 = FTextFormat::FTextFormat(&local_90,pFVar6,Default);
      pFVar5 = FText::Format<FText>(&local_1b8,pFVar7,pFVar5);
      UE::MVVM::FMessageLog::Message(&local_130,&local_1c8,Error,pFVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1c8.SharedReferenceCount.ReferenceController);
      if (local_1b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
      }
      if (local_1a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
      }
      this_00 = &local_130;
    }
    else {
      pUVar4 = Z_Construct_UClass_UListViewBase_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if (((iVar1 <= *(int *)(*(longlong *)((longlong)local_220.Value.TypedValue + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)((longlong)local_220.Value.TypedValue + 0x10) + 0x30) +
            (longlong)iVar1 * 8) == &pUVar4->_padding_)) &&
         (local_248 = (FName)local_220.Value.TypedValue,
         (FName)local_220.Value.TypedValue != (FName)0x0)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(local_220.Value.TypedValue);
        }
        local_260 = (FName)local_220.Value.TypedValue;
        local_268.ObjectIndex = 0;
        local_268.ObjectSerialNumber = 0;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(local_220.Value.TypedValue);
        }
        FWeakObjectPtr::operator=(&local_268,(FObjectPtr)&local_260);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_2);
        }
        local_res18.ObjectIndex = 0;
        local_res18.ObjectSerialNumber = 0;
        local_258 = param_2;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_2);
        }
        FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_258);
        local_250 = local_res18;
        local_210 = &local_250;
        local_208 = &local_268;
        TSet<TTuple<FObjectKey,TWeakObjectPtr<UListViewBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UListViewBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FObjectKey_&&,TWeakObjectPtr<UListViewBase,FWeakObjectPtr>_&&>_>
                  ((TSet<TTuple<FObjectKey,TWeakObjectPtr<UListViewBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UListViewBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                    *)&this->CachedListViewWidgets,&local_res8,(bool *)&local_210);
        TMulticastDelegateRegistration<void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy>::
        AddUObject<UMVVMViewListViewBaseClassExtension,UUserWidget_*_&,UListViewBase_*_&,FName_&>
                  ((TMulticastDelegateRegistration<void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy>
                    *)((longlong)local_220.Value.TypedValue + 0x2f8),
                   (UMVVMViewListViewBaseClassExtension *)local_200,(pmf_213511b8)this,
                   (UUserWidget **)HandleSetViewModelOnEntryWidget,
                   (UListViewBase **)&local_res8.Value,&local_248);
        return;
      }
      FMessageLog::FMessageLog((FMessageLog *)&local_168,&UE::MVVM::FMessageLog::LogName);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_168.UserWidget.WeakPtr.ObjectIndex = 0;
      local_168.UserWidget.WeakPtr.ObjectSerialNumber = 0;
      local_240 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UUserWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_168.UserWidget.WeakPtr,(FObjectPtr)&local_240);
      local_238 = *(FName *)((longlong)local_220.Value.TypedValue + 0x18);
      pFVar5 = FText::FromName(&local_c0,&local_238);
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_1d8,L"MVVMViewListViewBaseExtension",
                          L"BindToEntryGenerationFailWidgetNotList",
                          L"The object property \'{0}\' is not of type ListViewBase, but has an Viewmodel extension meant for ListViewBase widgets. The extension won\'t have any effects."
                         );
      pFVar7 = FTextFormat::FTextFormat(&local_b0,pFVar6,Default);
      pFVar5 = FText::Format<FText>(&local_1e8,pFVar7,pFVar5);
      UE::MVVM::FMessageLog::Message
                (&local_168,(TSharedRef<FTokenizedMessage,1> *)(local_200 + 8),Error,pFVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1f0)
      ;
      if (local_1e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
      }
      if ((FName)local_1d8.TextData.Reference != (FName)0x0) {
        (**(code **)(*(longlong *)local_1d8.TextData.Reference + 0x10))();
      }
      this_00 = &local_168;
    }
    FMessageLog::~FMessageLog((FMessageLog *)this_00);
  }
  return;
}

// OnSourcesUninitialized @ 14a75bf20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UMVVMViewListViewBaseClassExtension::OnSourcesUninitialized
          (UMVVMViewListViewBaseClassExtension *this,UUserWidget *param_1,UMVVMView *param_2,
          UMVVMViewExtension *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18;
  UMVVMView *local_18 [2];
  
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (param_2 != (UMVVMView *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_18[0] = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_18);
  }
  bVar1 = TMap<FObjectKey,TWeakObjectPtr<UListViewBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UListViewBase,FWeakObjectPtr>,0>_>
          ::RemoveAndCopyValue
                    (&this->CachedListViewWidgets,(FObjectKey *)&local_res8,
                     (TWeakObjectPtr<UListViewBase,FWeakObjectPtr> *)&local_res18);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res18);
    if (pUVar2 != (UObject *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar2 + 0x13),this);
    }
  }
  return;
}

// StaticRegisterNativesUMVVMViewListViewBaseClassExtension @ 14a760240

void __cdecl
UMVVMViewListViewBaseClassExtension::StaticRegisterNativesUMVVMViewListViewBaseClassExtension(void)

{
  return;
}

