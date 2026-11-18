// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b789110

UClass * __cdecl UDS_W_Root::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_Root.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_Root",
               &Z_Registration_Info_UClass_UDS_W_Root.InnerSingleton,StaticRegisterNativesUDS_W_Root
               ,0x8c0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDS_W_Root>,
               InternalVTableHelperCtorCaller<UDS_W_Root>,local_res8,UDS_UserWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_Root.InnerSingleton;
}

// UDS_W_Root @ 14b78d130

UDS_W_Root * __thiscall UDS_W_Root::UDS_W_Root(UDS_W_Root *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->DefaultAnchorData).Offsets.Left = 0.0;
  (this->DefaultAnchorData).Offsets.Top = 0.0;
  (this->DefaultAnchorData).Offsets.Right = 0.0;
  (this->DefaultAnchorData).Offsets.Bottom = 0.0;
  (this->DefaultAnchorData).Anchors.Minimum.field0_0x0._s_0.X = 0.0;
  (this->DefaultAnchorData).Anchors.Minimum.field0_0x0._s_0.Y = 0.0;
  (this->DefaultAnchorData).Anchors.Maximum.field0_0x0._s_0.X = 0.0;
  (this->DefaultAnchorData).Anchors.Maximum.field0_0x0._s_0.Y = 0.0;
  (this->DefaultAnchorData).Alignment.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  return this;
}

// UDS_W_Root @ 14b78d1c0

UDS_W_Root * __thiscall UDS_W_Root::UDS_W_Root(UDS_W_Root *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->DefaultAnchorData).Offsets.Left = 0.0;
  (this->DefaultAnchorData).Offsets.Top = 0.0;
  (this->DefaultAnchorData).Offsets.Right = 0.0;
  (this->DefaultAnchorData).Offsets.Bottom = 0.0;
  (this->DefaultAnchorData).Anchors.Minimum.field0_0x0._s_0.X = 0.0;
  (this->DefaultAnchorData).Anchors.Minimum.field0_0x0._s_0.Y = 0.0;
  (this->DefaultAnchorData).Anchors.Maximum.field0_0x0._s_0.X = 0.0;
  (this->DefaultAnchorData).Anchors.Maximum.field0_0x0._s_0.Y = 0.0;
  (this->DefaultAnchorData).Alignment.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  return this;
}

// ~UDS_W_Root @ 14b78e250

void __thiscall UDS_W_Root::~UDS_W_Root(UDS_W_Root *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b7904f0

UClass * __cdecl UDS_W_Root::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_Root.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_Root",
               &Z_Registration_Info_UClass_UDS_W_Root.InnerSingleton,StaticRegisterNativesUDS_W_Root
               ,0x8c0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDS_W_Root>,
               InternalVTableHelperCtorCaller<UDS_W_Root>,local_res8,UDS_UserWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_Root.InnerSingleton;
}

// StaticRegisterNativesUDS_W_Root @ 14b790ba0

void __cdecl UDS_W_Root::StaticRegisterNativesUDS_W_Root(void)

{
  return;
}

// AddWindow @ 14bc877c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_W_Root::AddWindow
          (UDS_W_Root *this,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> param_1,int param_2)

{
  int iVar1;
  UPanelWidget *this_00;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UWidget *pUVar4;
  UCanvasPanelSlot *this_01;
  UClass *pUVar5;
  FWeakObjectPtr local_res10 [3];
  undefined1 auStackY_178 [32];
  uint uVar6;
  wchar_t *pwVar7;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_res10[0] = param_1.WeakPtr;
  if (this->Can_Screen == (UPanelWidget *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_W_Root::AddWindow",0x15,Yes);
    pwVar7 = L"Can_Screen is nullptr.";
    uVar6 = 0x17;
  }
  else {
    bVar2 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *)local_res10,(void *)0x0);
    if (bVar2) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_W_Root::AddWindow",0x15,Yes);
      pwVar7 = L"InWindowPtr is nullptr.";
      uVar6 = 0x1d;
    }
    else {
      this_00 = this->Can_Screen;
      pUVar4 = (UWidget *)FWeakObjectPtr::Get(local_res10);
      this_01 = (UCanvasPanelSlot *)UPanelWidget::AddChild(this_00,pUVar4);
      if (this_01 != (UCanvasPanelSlot *)0x0) {
        pUVar5 = Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
        iVar1 = (int)pUVar5->_padding_;
        if ((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar5->_padding_)) {
          UCanvasPanelSlot::SetZOrder(this_01,param_2);
          UCanvasPanelSlot::SetLayout(this_01,&this->DefaultAnchorData);
          return true;
        }
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_W_Root::AddWindow",0x15,Yes);
      pwVar7 = L"slot is nullptr.";
      uVar6 = 0x24;
    }
  }
  UDS_LogManager::PrintLog(pUVar3,1,Display,local_148.Ptr,uVar6,pwVar7);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return false;
}

// NativeConstruct @ 14bcab5b0

void __thiscall UDS_W_Root::NativeConstruct(UDS_W_Root *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  UDS_UserWidget::NativeConstruct((UDS_UserWidget *)this);
  (this->DefaultAnchorData).Offsets.Left = 0.0;
  (this->DefaultAnchorData).Offsets.Top = 0.0;
  (this->DefaultAnchorData).Offsets.Right = 0.0;
  (this->DefaultAnchorData).Offsets.Bottom = 0.0;
  (this->DefaultAnchorData).Anchors.Minimum.field0_0x0._s_0.X = 0.0;
  (this->DefaultAnchorData).Anchors.Minimum.field0_0x0._s_0.Y = 0.0;
  (this->DefaultAnchorData).Anchors.Maximum.field0_0x0._s_0.X = 1.0;
  (this->DefaultAnchorData).Anchors.Maximum.field0_0x0._s_0.Y = 1.0;
  (this->DefaultAnchorData).Alignment.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  pFVar1 = ::FName::FName(local_res8,"C_Can_Screen");
  UDS_UserWidget::BindWidget<UPanelWidget>((UDS_UserWidget *)this,&this->Can_Screen,*pFVar1);
  return;
}

