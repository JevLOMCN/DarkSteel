// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b52b2b0

UClass * __cdecl UDS_NameTagWidget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NameTagWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NameTagWidget",
               &Z_Registration_Info_UClass_UDS_NameTagWidget.InnerSingleton,
               StaticRegisterNativesUDS_NameTagWidget,0x880,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NameTagWidget>,
               InternalVTableHelperCtorCaller<UDS_NameTagWidget>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NameTagWidget.InnerSingleton;
}

// UDS_NameTagWidget @ 14b52f440

UDS_NameTagWidget * __thiscall
UDS_NameTagWidget::UDS_NameTagWidget(UDS_NameTagWidget *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  return this;
}

// UDS_NameTagWidget @ 14b52f490

UDS_NameTagWidget * __thiscall
UDS_NameTagWidget::UDS_NameTagWidget(UDS_NameTagWidget *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  return this;
}

// ~UDS_NameTagWidget @ 14b530800

void __thiscall UDS_NameTagWidget::~UDS_NameTagWidget(UDS_NameTagWidget *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b532a80

UClass * __cdecl UDS_NameTagWidget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NameTagWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NameTagWidget",
               &Z_Registration_Info_UClass_UDS_NameTagWidget.InnerSingleton,
               StaticRegisterNativesUDS_NameTagWidget,0x880,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NameTagWidget>,
               InternalVTableHelperCtorCaller<UDS_NameTagWidget>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NameTagWidget.InnerSingleton;
}

// StaticRegisterNativesUDS_NameTagWidget @ 14b533130

void __cdecl UDS_NameTagWidget::StaticRegisterNativesUDS_NameTagWidget(void)

{
  return;
}

