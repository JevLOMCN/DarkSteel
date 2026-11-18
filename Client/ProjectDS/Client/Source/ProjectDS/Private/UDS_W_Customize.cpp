// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b77bdb0

UClass * __cdecl UDS_W_Customize::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_Customize.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_Customize",
               &Z_Registration_Info_UClass_UDS_W_Customize.InnerSingleton,
               StaticRegisterNativesUDS_W_Customize,0x938,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_W_Customize>,InternalVTableHelperCtorCaller<UDS_W_Customize>
               ,local_res8,UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_Customize.InnerSingleton;
}

// UDS_W_Customize @ 14b7819e0

UDS_W_Customize * __thiscall
UDS_W_Customize::UDS_W_Customize(UDS_W_Customize *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  puVar1 = &(this->SmallButtonListComponent).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->VerticalBox).field0_0x0.DebugPtr = (UDS_VerticalBox *)0x0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->SmallButtonListComponent).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SmallButtonListComponent).SoftObjectPtr = 0;
  *(undefined8 *)&(this->SmallButtonListComponent).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SmallButtonListComponent).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->MediumButtonListComponent).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->MediumButtonListComponent).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->MediumButtonListComponent).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->MediumButtonListComponent).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->MediumButtonListComponent).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->LongButtonListComponent).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->LongButtonListComponent).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->LongButtonListComponent).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->LongButtonListComponent).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->LongButtonListComponent).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->SliderComponent).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->SliderComponent).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->SliderComponent).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SliderComponent).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SliderComponent).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  this->CustomizePresetID = 0;
  this->WeaponID = 0;
  this->SelectGender = Male;
  this->VoiceType = 0;
  this->bIsSendCreate = false;
  return this;
}

// UDS_W_Customize @ 14b781b10

UDS_W_Customize * __thiscall
UDS_W_Customize::UDS_W_Customize(UDS_W_Customize *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  puVar1 = &(this->SmallButtonListComponent).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->VerticalBox).field0_0x0.DebugPtr = (UDS_VerticalBox *)0x0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->SmallButtonListComponent).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SmallButtonListComponent).SoftObjectPtr = 0;
  *(undefined8 *)&(this->SmallButtonListComponent).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SmallButtonListComponent).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->MediumButtonListComponent).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->MediumButtonListComponent).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->MediumButtonListComponent).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->MediumButtonListComponent).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->MediumButtonListComponent).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->LongButtonListComponent).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->LongButtonListComponent).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->LongButtonListComponent).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->LongButtonListComponent).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->LongButtonListComponent).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->SliderComponent).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->SliderComponent).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->SliderComponent).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SliderComponent).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SliderComponent).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  this->CustomizePresetID = 0;
  this->WeaponID = 0;
  this->SelectGender = Male;
  this->VoiceType = 0;
  this->bIsSendCreate = false;
  return this;
}

// ~UDS_W_Customize @ 14b7830a0

void __thiscall UDS_W_Customize::~UDS_W_Customize(UDS_W_Customize *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  pvVar1 = *(void **)&(this->SliderComponent).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->LongButtonListComponent).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->MediumButtonListComponent).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->SmallButtonListComponent).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b785d20

UClass * __cdecl UDS_W_Customize::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_Customize.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_Customize",
               &Z_Registration_Info_UClass_UDS_W_Customize.InnerSingleton,
               StaticRegisterNativesUDS_W_Customize,0x938,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_W_Customize>,InternalVTableHelperCtorCaller<UDS_W_Customize>
               ,local_res8,UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_Customize.InnerSingleton;
}

// StaticRegisterNativesUDS_W_Customize @ 14b786570

void __cdecl UDS_W_Customize::StaticRegisterNativesUDS_W_Customize(void)

{
  return;
}

// NativeConstruct @ 14c090ba0

void __thiscall UDS_W_Customize::NativeConstruct(UDS_W_Customize *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  UDS_UserWidget::NativeConstruct((UDS_UserWidget *)this);
  pFVar1 = ::FName::FName(local_res8,"VB_Component");
  UDS_UserWidget::BindWidget<UDS_VerticalBox>((UDS_UserWidget *)this,&this->VerticalBox,*pFVar1);
  return;
}

// OnCloseInit @ 14c093600

void __thiscall UDS_W_Customize::OnCloseInit(UDS_W_Customize *this)

{
  UDS_CharacterUIEvent *pUVar1;
  
  pUVar1 = UDS_CharacterUIEvent::GetEvent();
  if (pUVar1 != (UDS_CharacterUIEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnCustomizeComponentInfoChanged,this);
  }
  UDS_UserWidget::OnCloseInit((UDS_UserWidget *)this);
  return;
}

// OnCustomizeComponentInfoChanged @ 14c0951a0

void __thiscall
UDS_W_Customize::OnCustomizeComponentInfoChanged
          (UDS_W_Customize *this,int param_1,FDS_CustomizeComponentInfo *param_2)

{
  EDS_CustomizingType EVar1;
  FDS_CustomizingComponentTableRow *pFVar2;
  
  pFVar2 = FDS_CustomizingComponentTableRow::GetRef((longlong)param_1,true);
  EVar1 = pFVar2->CustomizingType;
  if (EVar1 == ListGender) {
    this->SelectGender = (EDS_GenderType)param_2->IntValue;
    Refresh(this);
    return;
  }
  if (EVar1 == ListVoice) {
    this->VoiceType = param_2->IntValue;
    return;
  }
  if (EVar1 == ListWeapon) {
    this->WeaponID = param_2->IntValue;
  }
  return;
}

// OnOpenInit @ 14c0973b0

void __thiscall UDS_W_Customize::OnOpenInit(UDS_W_Customize *this)

{
  UDS_CharacterUIEvent *pUVar1;
  
  UDS_UserWidget::OnOpenInit((UDS_UserWidget *)this);
  pUVar1 = UDS_CharacterUIEvent::GetEvent();
  if (pUVar1 != (UDS_CharacterUIEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnCustomizeComponentInfoChanged,this);
    TMulticastDelegateRegistration<void___cdecl(int,FDS_CustomizeComponentInfo_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_W_Customize>
              ((TMulticastDelegateRegistration<void___cdecl(int,FDS_CustomizeComponentInfo_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar1->OnCustomizeComponentInfoChanged,(UDS_W_Customize *)&stack0x00000010,
               (pmf_a72dae2e *)this);
  }
  Refresh(this);
  return;
}

