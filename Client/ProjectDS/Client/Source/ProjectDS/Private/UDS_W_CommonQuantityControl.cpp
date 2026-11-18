// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// SetIsShowAutoAdd_WrapperImpl @ 14b77cad0

void __cdecl UDS_W_CommonQuantityControl::SetIsShowAutoAdd_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)param_2;
  *(char *)((longlong)param_1 + 0x880) = cVar1;
  plVar2 = *(longlong **)((longlong)param_1 + 0x878);
  if (plVar2 != (longlong *)0x0) {
    uVar3 = 1;
    if (cVar1 == '\x01') {
      uVar3 = 4;
    }
                    /* WARNING: Could not recover jumptable at 0x00014bd1fda9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x2c0))(plVar2,uVar3);
    return;
  }
  return;
}

// StaticClass @ 14b77cae0

UClass * __cdecl UDS_W_CommonQuantityControl::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_CommonQuantityControl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_CommonQuantityControl",
               &Z_Registration_Info_UClass_UDS_W_CommonQuantityControl.InnerSingleton,
               StaticRegisterNativesUDS_W_CommonQuantityControl,0x888,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_W_CommonQuantityControl>,
               InternalVTableHelperCtorCaller<UDS_W_CommonQuantityControl>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_CommonQuantityControl.InnerSingleton;
}

// UDS_W_CommonQuantityControl @ 14b781140

UDS_W_CommonQuantityControl * __thiscall
UDS_W_CommonQuantityControl::UDS_W_CommonQuantityControl
          (UDS_W_CommonQuantityControl *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->IsShowAutoAdd = false;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->AutoAddButtonPanel).field0_0x0.DebugPtr = (UDS_CanvasPanel *)0x0;
  return this;
}

// UDS_W_CommonQuantityControl @ 14b7811a0

UDS_W_CommonQuantityControl * __thiscall
UDS_W_CommonQuantityControl::UDS_W_CommonQuantityControl
          (UDS_W_CommonQuantityControl *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->IsShowAutoAdd = false;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->AutoAddButtonPanel).field0_0x0.DebugPtr = (UDS_CanvasPanel *)0x0;
  return this;
}

// ~UDS_W_CommonQuantityControl @ 14b782d10

void __thiscall
UDS_W_CommonQuantityControl::~UDS_W_CommonQuantityControl(UDS_W_CommonQuantityControl *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b7857e0

UClass * __cdecl UDS_W_CommonQuantityControl::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_CommonQuantityControl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_CommonQuantityControl",
               &Z_Registration_Info_UClass_UDS_W_CommonQuantityControl.InnerSingleton,
               StaticRegisterNativesUDS_W_CommonQuantityControl,0x888,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_W_CommonQuantityControl>,
               InternalVTableHelperCtorCaller<UDS_W_CommonQuantityControl>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_CommonQuantityControl.InnerSingleton;
}

// StaticRegisterNativesUDS_W_CommonQuantityControl @ 14b7864a0

void __cdecl UDS_W_CommonQuantityControl::StaticRegisterNativesUDS_W_CommonQuantityControl(void)

{
  return;
}

// NativePreConstruct @ 14bd09740

void __thiscall UDS_W_CommonQuantityControl::NativePreConstruct(UDS_W_CommonQuantityControl *this)

{
  UDS_CanvasPanel *pUVar1;
  FName *pFVar2;
  undefined8 uVar3;
  FName local_res8;
  
  UDS_UserWidget::NativePreConstruct((UDS_UserWidget *)this);
  pFVar2 = ::FName::FName(&local_res8,"CP_Btn_AutoAdd");
  UDS_UserWidget::BindWidget<UDS_CanvasPanel>
            ((UDS_UserWidget *)this,&this->AutoAddButtonPanel,*pFVar2);
  pUVar1 = (this->AutoAddButtonPanel).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_CanvasPanel *)0x0) {
    uVar3 = 1;
    if (this->IsShowAutoAdd == true) {
      uVar3 = 4;
    }
    (**(code **)(*(longlong *)pUVar1 + 0x2c0))(pUVar1,uVar3);
  }
  return;
}

// SetIsShowAutoAdd @ 14bd1fd80

void __thiscall
UDS_W_CommonQuantityControl::SetIsShowAutoAdd(UDS_W_CommonQuantityControl *this,bool *param_1)

{
  bool bVar1;
  UDS_CanvasPanel *pUVar2;
  undefined8 uVar3;
  
  bVar1 = *param_1;
  this->IsShowAutoAdd = bVar1;
  pUVar2 = (this->AutoAddButtonPanel).field0_0x0.DebugPtr;
  if (pUVar2 != (UDS_CanvasPanel *)0x0) {
    uVar3 = 1;
    if (bVar1 == true) {
      uVar3 = 4;
    }
                    /* WARNING: Could not recover jumptable at 0x00014bd1fda9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x2c0))(pUVar2,uVar3);
    return;
  }
  return;
}

