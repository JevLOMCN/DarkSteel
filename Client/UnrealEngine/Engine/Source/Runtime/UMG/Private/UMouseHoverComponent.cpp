// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 10

// GetbIsHovered_WrapperImpl @ 14696caa0

void __cdecl UMouseHoverComponent::GetbIsHovered_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x58);
  return;
}

// StaticClass @ 14696cb30

UClass * __cdecl UMouseHoverComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMouseHoverComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MouseHoverComponent",
               &Z_Registration_Info_UClass_UMouseHoverComponent.InnerSingleton,
               StaticRegisterNativesUMouseHoverComponent,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMouseHoverComponent>,
               InternalVTableHelperCtorCaller<UMouseHoverComponent>,local_res8,
               UUIComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMouseHoverComponent.InnerSingleton;
}

// UMouseHoverComponent @ 14698bac0

UMouseHoverComponent * __thiscall
UMouseHoverComponent::UMouseHoverComponent(UMouseHoverComponent *this,FVTableHelper *param_1)

{
  UUIComponent::UUIComponent((UUIComponent *)this,param_1);
  this->bIsHovered = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// UMouseHoverComponent @ 14698bb00

UMouseHoverComponent * __thiscall
UMouseHoverComponent::UMouseHoverComponent(UMouseHoverComponent *this,FObjectInitializer *param_1)

{
  UUIComponent::UUIComponent((UUIComponent *)this,param_1);
  this->bIsHovered = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// ~UMouseHoverComponent @ 146993860

void __thiscall UMouseHoverComponent::~UMouseHoverComponent(UMouseHoverComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  UUIComponent::~UUIComponent((UUIComponent *)this);
  return;
}

// GetFieldNotificationDescriptor @ 1469d0630

IClassDescriptor * __thiscall
UMouseHoverComponent::GetFieldNotificationDescriptor(UMouseHoverComponent *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UMouseHoverComponent::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 1469d4870

UClass * __cdecl UMouseHoverComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMouseHoverComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MouseHoverComponent",
               &Z_Registration_Info_UClass_UMouseHoverComponent.InnerSingleton,
               StaticRegisterNativesUMouseHoverComponent,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMouseHoverComponent>,
               InternalVTableHelperCtorCaller<UMouseHoverComponent>,local_res8,
               UUIComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMouseHoverComponent.InnerSingleton;
}

// OnMouseHoverChanged @ 1469eebf0

void __thiscall UMouseHoverComponent::OnMouseHoverChanged(UMouseHoverComponent *this,bool param_1)

{
  FFieldId local_18 [2];
  
  if (this->bIsHovered != param_1) {
    this->bIsHovered = param_1;
    local_18[0].FieldName = FFieldNotificationClassDescriptor::bIsHovered.FieldName;
    local_18[0].BitNumber = FFieldNotificationClassDescriptor::bIsHovered.BitNumber;
    UUIComponent::BroadcastFieldValueChanged((UUIComponent *)&this->_padding_,local_18);
  }
  return;
}

// RebuildWidgetWithContent @ 146a08b70

TSharedRef<SWidget,1> * __thiscall
UMouseHoverComponent::RebuildWidgetWithContent
          (UMouseHoverComponent *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  FArguments *pFVar4;
  TSharedRef<SMouseHoverWidget,1> *pTVar5;
  FLLMScope local_res8 [2];
  UMouseHoverComponent *local_res10;
  FName local_res18;
  T1RequiredArgs<UMouseHoverComponent_*_&&> local_res20;
  FMemScope local_268;
  TSharedRef<SMouseHoverWidget,1> local_260;
  TSlateDecl<SMouseHoverWidget,RequiredArgs::T1RequiredArgs<UMouseHoverComponent_*_&&>_> local_250;
  FArguments local_238;
  
  pFVar4 = SMouseHoverWidget::FArguments::FArguments(&local_238);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar4->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar4->_Content).Widget.Object = pSVar2;
  (pFVar4->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_res20.Arg0 = &local_res10;
  local_res10 = this;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_268,&local_res18,true);
  TSlateDecl<SMouseHoverWidget,RequiredArgs::T1RequiredArgs<UMouseHoverComponent_*_&&>_>::
  TSlateDecl<SMouseHoverWidget,RequiredArgs::T1RequiredArgs<UMouseHoverComponent_*_&&>_>
            (&local_250,"SMouseHoverWidget",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\MouseHoverComponent.cpp"
             ,0x55,&local_res20);
  FMemScope::~FMemScope(&local_268);
  FLLMScope::~FLLMScope(local_res8);
  pTVar5 = TSlateDecl<SMouseHoverWidget,RequiredArgs::T1RequiredArgs<UMouseHoverComponent_*_&&>_>::
           operator<<=(&local_250,&local_260,pFVar4);
  __return_storage_ptr__->Object = (SWidget *)pTVar5->Object;
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_260.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_250._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238._Content.Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_238);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUMouseHoverComponent @ 146a1eae0

void __cdecl UMouseHoverComponent::StaticRegisterNativesUMouseHoverComponent(void)

{
  return;
}

