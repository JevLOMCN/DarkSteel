// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 10

// StaticClass @ 1469629b0

UClass * __cdecl UNativeWidgetHost::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNativeWidgetHost.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"NativeWidgetHost",
               &Z_Registration_Info_UClass_UNativeWidgetHost.InnerSingleton,
               StaticRegisterNativesUNativeWidgetHost,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNativeWidgetHost>,
               InternalVTableHelperCtorCaller<UNativeWidgetHost>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNativeWidgetHost.InnerSingleton;
}

// UNativeWidgetHost @ 14698c320

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UNativeWidgetHost * __thiscall
UNativeWidgetHost::UNativeWidgetHost(UNativeWidgetHost *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->NativeWidget).Object = (SWidget *)0x0;
  (this->NativeWidget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  return this;
}

// UNativeWidgetHost @ 14698c370

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UNativeWidgetHost * __thiscall
UNativeWidgetHost::UNativeWidgetHost(UNativeWidgetHost *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfe;
  (this->NativeWidget).Object = (SWidget *)0x0;
  (this->NativeWidget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  return this;
}

// ~UNativeWidgetHost @ 146993ac0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UNativeWidgetHost::~UNativeWidgetHost(UNativeWidgetHost *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NativeWidget).SharedReferenceCount.ReferenceController);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetDefaultContent @ 1469cf0b0

TSharedRef<SWidget,1> * __thiscall
UNativeWidgetHost::GetDefaultContent
          (UNativeWidgetHost *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1469d4c30

UClass * __cdecl UNativeWidgetHost::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNativeWidgetHost.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"NativeWidgetHost",
               &Z_Registration_Info_UClass_UNativeWidgetHost.InnerSingleton,
               StaticRegisterNativesUNativeWidgetHost,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNativeWidgetHost>,
               InternalVTableHelperCtorCaller<UNativeWidgetHost>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNativeWidgetHost.InnerSingleton;
}

// RebuildWidget @ 146a027e0

TSharedRef<SWidget,1> * __thiscall
UNativeWidgetHost::RebuildWidget
          (UNativeWidgetHost *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  bool bVar4;
  FArguments *pFVar5;
  TReferenceControllerBase<1> **ppTVar6;
  TSharedRef<SBox,1> *pTVar7;
  SWidget *pSVar8;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TReferenceControllerBase<1> *local_3c0;
  SWidget *local_3b8;
  TReferenceControllerBase<1> *local_3b0;
  SWidget *local_3a8;
  TReferenceControllerBase<1> *pTStack_3a0;
  TSharedRef<SBox,1> local_398;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_388;
  FArguments local_370;
  
  bVar3 = false;
  pFVar5 = SBox::FArguments::FArguments(&local_370);
  pSVar8 = SNullWidget::NullWidget.Object;
  pSVar1 = (this->NativeWidget).Object;
  if (pSVar1 == (SWidget *)0x0) {
    local_3c0 = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = false;
    ppTVar6 = &local_3c0;
    bVar3 = true;
  }
  else {
    local_3b0 = (this->NativeWidget).SharedReferenceCount.ReferenceController;
    local_3b8 = pSVar1;
    if (local_3b0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_3b0->SharedReferenceCount = (atomic<int>)((int)local_3b0->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = true;
    ppTVar6 = &local_3b0;
    pSVar8 = pSVar1;
  }
  pTVar2 = *ppTVar6;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3a8 = (pFVar5->_Content).Widget.Object;
  pTStack_3a0 = (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar5->_Content).Widget.Object = pSVar8;
  (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3a0);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_388,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\NativeWidgetHost.cpp"
             ,0x30,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar7 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(&local_388,&local_398,pFVar5);
  __return_storage_ptr__->Object = (SWidget *)pTVar7->Object;
  pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_398.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_388._Widget.SharedReferenceCount.ReferenceController);
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3c0);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3b0);
  }
  SBox::FArguments::~FArguments(&local_370);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a0aad0

void __thiscall UNativeWidgetHost::ReleaseSlateResources(UNativeWidgetHost *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->NativeWidget != (TSharedPtr<SWidget,1> *)&local_18) {
    (this->NativeWidget).Object = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->NativeWidget).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// SetContent @ 146a12970

void __thiscall
UNativeWidgetHost::SetContent(UNativeWidgetHost *this,TSharedRef<SWidget,1> *param_1)

{
  TSharedPtr<SWidget,1> *pTVar1;
  SBox *this_00;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SWidget *local_18;
  FSharedReferencer<1> local_10;
  
  pTVar1 = &this->NativeWidget;
  if ((pTVar1->Object == (SWidget *)0x0) || (pTVar1->Object != param_1->Object)) {
    local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
    local_18 = param_1->Object;
    if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_10.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<SWidget,1> *)&local_18) {
      pTVar1->Object = local_18;
      local_18 = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->NativeWidget).SharedReferenceCount,&local_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_10.ReferenceController);
    pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar4->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar4 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_146a12a04;
        }
        LOCK();
        aVar3 = pTVar4->SharedReferenceCount;
        bVar5 = aVar2 == aVar3;
        if (bVar5) {
          pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar3 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar3;
      } while (!bVar5);
      this_00 = (SBox *)this->_padding_;
      if (this_00 != (SBox *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        SBox::SetContent(this_00,param_1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      }
    }
LAB_146a12a04:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// StaticRegisterNativesUNativeWidgetHost @ 146a1eb90

void __cdecl UNativeWidgetHost::StaticRegisterNativesUNativeWidgetHost(void)

{
  return;
}

