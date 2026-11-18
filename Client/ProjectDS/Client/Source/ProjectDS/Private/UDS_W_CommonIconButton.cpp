// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b77e380

UClass * __cdecl UDS_W_CommonIconButton::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_CommonIconButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_CommonIconButton",
               &Z_Registration_Info_UClass_UDS_W_CommonIconButton.InnerSingleton,
               StaticRegisterNativesUDS_W_CommonIconButton,0x12f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_CommonIconButton>,
               InternalVTableHelperCtorCaller<UDS_W_CommonIconButton>,local_res8,
               UDS_W_CommonButton::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_CommonIconButton.InnerSingleton;
}

// UDS_W_CommonIconButton @ 14b780dc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_W_CommonIconButton * __thiscall
UDS_W_CommonIconButton::UDS_W_CommonIconButton(UDS_W_CommonIconButton *this,FVTableHelper *param_1)

{
  UDS_W_CommonButton::UDS_W_CommonButton((UDS_W_CommonButton *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  (this->LazyImage).field0_0x0.DebugPtr = (UDS_CommonLazyImage *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  ::FName::FName(&this->MainImageWidgetName,"MainImage");
  (this->ImageData).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UDS_W_CommonIconButton @ 14b780e40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_W_CommonIconButton * __thiscall
UDS_W_CommonIconButton::UDS_W_CommonIconButton
          (UDS_W_CommonIconButton *this,FObjectInitializer *param_1)

{
  UDS_W_CommonButton::UDS_W_CommonButton((UDS_W_CommonButton *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  (this->LazyImage).field0_0x0.DebugPtr = (UDS_CommonLazyImage *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  ::FName::FName(&this->MainImageWidgetName,"MainImage");
  (this->ImageData).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// ~UDS_W_CommonIconButton @ 14b782be0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonIconButton::~UDS_W_CommonIconButton(UDS_W_CommonIconButton *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  UDS_W_CommonButton::~UDS_W_CommonButton((UDS_W_CommonButton *)this);
  return;
}

// GetPrivateStaticClass @ 14b7855a0

UClass * __cdecl UDS_W_CommonIconButton::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_CommonIconButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_CommonIconButton",
               &Z_Registration_Info_UClass_UDS_W_CommonIconButton.InnerSingleton,
               StaticRegisterNativesUDS_W_CommonIconButton,0x12f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_CommonIconButton>,
               InternalVTableHelperCtorCaller<UDS_W_CommonIconButton>,local_res8,
               UDS_W_CommonButton::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_CommonIconButton.InnerSingleton;
}

// StaticRegisterNativesUDS_W_CommonIconButton @ 14b786470

void __cdecl UDS_W_CommonIconButton::StaticRegisterNativesUDS_W_CommonIconButton(void)

{
  return;
}

// NativeDestruct @ 14bd07830

void __thiscall UDS_W_CommonIconButton::NativeDestruct(UDS_W_CommonIconButton *this)

{
  bool bVar1;
  UObject *pUVar2;
  ADS_PlayerController *this_00;
  FWeakObjectPtr aFStackX_8 [4];
  
  if (this->_padding_ != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x15f0),this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x1610),this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x15b0),this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x15d0),this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x1570),this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x1630),this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x1650),this
              );
  }
  if (this->_padding_ != 0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(this->_padding_ + 0x28));
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(this->_padding_ + 0x40));
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(this->_padding_ + 0x58));
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(this->_padding_ + 0x70));
    this->_padding_ = 0;
  }
  if (*(char *)((longlong)&this->_padding_ + 7) == '\x01') {
    ADS_PlayerController::GetPlayerController();
    bVar1 = FWeakObjectPtr::IsValid(aFStackX_8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(aFStackX_8);
      if (pUVar2[0x3d].field_0x20 == '\x02') {
        this_00 = (ADS_PlayerController *)FWeakObjectPtr::Get(aFStackX_8);
        ADS_PlayerController::SetCursorShape(this_00,Default);
      }
    }
  }
  UDS_UserWidget::NativeDestruct((UDS_UserWidget *)this);
  return;
}

// NativePreConstruct @ 14bd09720

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonIconButton::NativePreConstruct(UDS_W_CommonIconButton *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  undefined1 auStackX_8 [8];
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> TStack_18;
  
  UDS_UserWidget::NativePreConstruct((UDS_UserWidget *)this);
  if (this->_padding_ != 0) {
    (**(code **)(this->_padding_ + 0x518))(this);
    if (*(char *)((longlong)&this->_padding_ + 6) != '\0') {
      iVar2 = *(int *)((longlong)&this->_padding_ + 4);
      *(undefined4 *)&this->_padding_ = 0;
      if (iVar2 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)&this->_padding_,0,
                   (int *)((longlong)&this->_padding_ + 4));
      }
    }
    TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_18.ArrayNum = 0;
    TStack_18.ArrayMax = 0;
    UWidgetTree::GetAllWidgets((UWidgetTree *)this->_padding_,&TStack_18);
    iVar2 = TStack_18.ArrayNum;
    uVar3 = (ulonglong)TStack_18.ArrayNum;
    pFVar1 = TStack_18.AllocatorInstance.Data + uVar3 * 8;
    FVar4.Data = TStack_18.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar3 != iVar2) {
        `TCheckedPointerIterator<UWidget_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStackX_8);
      }
      if (FVar4.Data == pFVar1) break;
      (**(code **)(this->_padding_ + 0x520))(this,*(undefined8 *)FVar4.Data);
      uVar3 = TStack_18._8_8_ & 0xffffffff;
      FVar4.Data = FVar4.Data + 8;
    }
    (**(code **)(this->_padding_ + 0x528))(this);
    UDS_W_CommonButton::NotifyButtonSwitcher((UDS_W_CommonButton *)this);
    if (TStack_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_18.AllocatorInstance.Data);
    }
  }
  return;
}

