// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b4acd60

UClass * __cdecl UDS_HUD_CrossHair::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HUD_CrossHair.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HUD_CrossHair",
               &Z_Registration_Info_UClass_UDS_HUD_CrossHair.InnerSingleton,
               StaticRegisterNativesUDS_HUD_CrossHair,0x878,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_HUD_CrossHair>,
               InternalVTableHelperCtorCaller<UDS_HUD_CrossHair>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HUD_CrossHair.InnerSingleton;
}

// UDS_HUD_CrossHair @ 14b4b1b00

UDS_HUD_CrossHair * __thiscall
UDS_HUD_CrossHair::UDS_HUD_CrossHair(UDS_HUD_CrossHair *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  return this;
}

// UDS_HUD_CrossHair @ 14b4b1b50

UDS_HUD_CrossHair * __thiscall
UDS_HUD_CrossHair::UDS_HUD_CrossHair(UDS_HUD_CrossHair *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  return this;
}

// ~UDS_HUD_CrossHair @ 14b4b3350

void __thiscall UDS_HUD_CrossHair::~UDS_HUD_CrossHair(UDS_HUD_CrossHair *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &_vftable__for__UCommonUserWidget__;
  *(undefined ***)&this->field_0x3d0 = &_vftable__for__IUserObjectListEntry__;
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b4b6ae0

UClass * __cdecl UDS_HUD_CrossHair::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HUD_CrossHair.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HUD_CrossHair",
               &Z_Registration_Info_UClass_UDS_HUD_CrossHair.InnerSingleton,
               StaticRegisterNativesUDS_HUD_CrossHair,0x878,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_HUD_CrossHair>,
               InternalVTableHelperCtorCaller<UDS_HUD_CrossHair>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HUD_CrossHair.InnerSingleton;
}

// StaticRegisterNativesUDS_HUD_CrossHair @ 14b4b8440

void __cdecl UDS_HUD_CrossHair::StaticRegisterNativesUDS_HUD_CrossHair(void)

{
  return;
}

// OnChangedCharState @ 14c092570

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_HUD_CrossHair::OnChangedCharState
          (UDS_HUD_CrossHair *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  UDS_WindowManager *this_01;
  bool bVar2;
  FWeakObjectPtr local_res10 [2];
  EDS_CharDetailState local_res20 [2];
  
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  bVar2 = false;
  if (bVar1) {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
    local_res20[0] = SkillMode_Aim;
    bVar1 = UDS_CharStateData::HasCharDetailState(this_00,local_res20);
    bVar2 = false;
    if (bVar1) {
      bVar2 = true;
    }
  }
  this_01 = UDS_WindowManager::GetInst();
  if (this_01 != (UDS_WindowManager *)0x0) {
    UDS_WindowManager::ToggleVisibleWindow(this_01,HUDCrossHair,bVar2);
  }
  return;
}

// OnCloseInit @ 14c092eb0

void __thiscall UDS_HUD_CrossHair::OnCloseInit(UDS_HUD_CrossHair *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  FDS_EntityBase::GetMainPlayerEntityID(true);
  UDS_CharStateData::GetData((ulong64)local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this);
  UDS_UserWidget::OnCloseInit((UDS_UserWidget *)this);
  return;
}

// OnMainCharChanged @ 14c0965a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_HUD_CrossHair::OnMainCharChanged
          (UDS_HUD_CrossHair *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [2];
  FWeakObjectPtr local_res20;
  code *local_28;
  undefined4 uStack_20;
  uint uStack_1c;
  code *local_18;
  longlong lStack_10;
  
  if ((param_1 != (FDS_EntityBase *)0x0) && (param_2 != (FDS_EntityBase *)0x0)) {
    UDS_CharStateData::GetData((ulong64)local_res10);
    bVar1 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(local_res10);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
    }
    UDS_CharStateData::GetData((ulong64)&local_res20);
    bVar1 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar1) {
      uStack_20 = 0;
      local_28 = OnChangedCharState;
      lStack_10 = (ulonglong)uStack_1c << 0x20;
      local_18 = OnChangedCharState;
      pUVar2 = FWeakObjectPtr::Get(&local_res20);
      TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_HUD_CrossHair>
                ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                  *)&pUVar2[7].field_0x20,(UDS_HUD_CrossHair *)&local_28,(pmf_0088a9f6 *)this);
    }
    Refresh(this);
  }
  return;
}

// OnOpenInit @ 14c0972d0

void __thiscall UDS_HUD_CrossHair::OnOpenInit(UDS_HUD_CrossHair *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  UDS_UserWidget::OnOpenInit((UDS_UserWidget *)this);
  FDS_EntityBase::GetMainPlayerEntityID(true);
  UDS_CharStateData::GetData((ulong64)local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_HUD_CrossHair>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                *)&pUVar2[7].field_0x20,(UDS_HUD_CrossHair *)(local_res10 + 1),(pmf_0088a9f6 *)this)
    ;
  }
  TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_HUD_CrossHair>
            ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
              *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,
             (UDS_HUD_CrossHair *)(local_res10 + 1),(pmf_706464b9 *)this);
  Refresh(this);
  return;
}

// Refresh @ 14c09fb10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_HUD_CrossHair::Refresh(UDS_HUD_CrossHair *this)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  UDS_WindowManager *this_01;
  bool bVar2;
  EDS_CharDetailState local_res10 [2];
  FWeakObjectPtr local_res18 [2];
  
  FDS_EntityBase::GetMainPlayerEntityID(true);
  UDS_CharStateData::GetData((ulong64)local_res18);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  bVar2 = false;
  if (bVar1) {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res18);
    local_res10[0] = SkillMode_Aim;
    bVar1 = UDS_CharStateData::HasCharDetailState(this_00,local_res10);
    bVar2 = false;
    if (bVar1) {
      bVar2 = true;
    }
  }
  this_01 = UDS_WindowManager::GetInst();
  if (this_01 != (UDS_WindowManager *)0x0) {
    UDS_WindowManager::ToggleVisibleWindow(this_01,HUDCrossHair,bVar2);
  }
  return;
}

