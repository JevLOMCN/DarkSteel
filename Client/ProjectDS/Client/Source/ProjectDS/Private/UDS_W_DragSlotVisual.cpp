// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b77e2c0

UClass * __cdecl UDS_W_DragSlotVisual::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_DragSlotVisual.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_DragSlotVisual",
               &Z_Registration_Info_UClass_UDS_W_DragSlotVisual.InnerSingleton,
               StaticRegisterNativesUDS_W_DragSlotVisual,0x8a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_DragSlotVisual>,
               InternalVTableHelperCtorCaller<UDS_W_DragSlotVisual>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_DragSlotVisual.InnerSingleton;
}

// UDS_W_DragSlotVisual @ 14b781d60

UDS_W_DragSlotVisual * __thiscall
UDS_W_DragSlotVisual::UDS_W_DragSlotVisual(UDS_W_DragSlotVisual *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  return this;
}

// UDS_W_DragSlotVisual @ 14b781db0

UDS_W_DragSlotVisual * __thiscall
UDS_W_DragSlotVisual::UDS_W_DragSlotVisual(UDS_W_DragSlotVisual *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  return this;
}

// ~UDS_W_DragSlotVisual @ 14b7831c0

void __thiscall UDS_W_DragSlotVisual::~UDS_W_DragSlotVisual(UDS_W_DragSlotVisual *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b785f60

UClass * __cdecl UDS_W_DragSlotVisual::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_DragSlotVisual.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_DragSlotVisual",
               &Z_Registration_Info_UClass_UDS_W_DragSlotVisual.InnerSingleton,
               StaticRegisterNativesUDS_W_DragSlotVisual,0x8a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_DragSlotVisual>,
               InternalVTableHelperCtorCaller<UDS_W_DragSlotVisual>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_DragSlotVisual.InnerSingleton;
}

// StaticRegisterNativesUDS_W_DragSlotVisual @ 14b7865a0

void __cdecl UDS_W_DragSlotVisual::StaticRegisterNativesUDS_W_DragSlotVisual(void)

{
  return;
}

