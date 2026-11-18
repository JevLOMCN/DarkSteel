// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b77bcf0

UClass * __cdecl UDS_W_DragSkillSlotVisual::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_DragSkillSlotVisual.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_DragSkillSlotVisual",
               &Z_Registration_Info_UClass_UDS_W_DragSkillSlotVisual.InnerSingleton,
               StaticRegisterNativesUDS_W_DragSkillSlotVisual,0x888,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_W_DragSkillSlotVisual>,
               InternalVTableHelperCtorCaller<UDS_W_DragSkillSlotVisual>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_DragSkillSlotVisual.InnerSingleton;
}

// UDS_W_DragSkillSlotVisual @ 14b781cc0

UDS_W_DragSkillSlotVisual * __thiscall
UDS_W_DragSkillSlotVisual::UDS_W_DragSkillSlotVisual
          (UDS_W_DragSkillSlotVisual *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  return this;
}

// UDS_W_DragSkillSlotVisual @ 14b781d10

UDS_W_DragSkillSlotVisual * __thiscall
UDS_W_DragSkillSlotVisual::UDS_W_DragSkillSlotVisual
          (UDS_W_DragSkillSlotVisual *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  return this;
}

// ~UDS_W_DragSkillSlotVisual @ 14b783180

void __thiscall
UDS_W_DragSkillSlotVisual::~UDS_W_DragSkillSlotVisual(UDS_W_DragSkillSlotVisual *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b785ea0

UClass * __cdecl UDS_W_DragSkillSlotVisual::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_DragSkillSlotVisual.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_DragSkillSlotVisual",
               &Z_Registration_Info_UClass_UDS_W_DragSkillSlotVisual.InnerSingleton,
               StaticRegisterNativesUDS_W_DragSkillSlotVisual,0x888,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_W_DragSkillSlotVisual>,
               InternalVTableHelperCtorCaller<UDS_W_DragSkillSlotVisual>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_DragSkillSlotVisual.InnerSingleton;
}

// StaticRegisterNativesUDS_W_DragSkillSlotVisual @ 14b786590

void __cdecl UDS_W_DragSkillSlotVisual::StaticRegisterNativesUDS_W_DragSkillSlotVisual(void)

{
  return;
}

