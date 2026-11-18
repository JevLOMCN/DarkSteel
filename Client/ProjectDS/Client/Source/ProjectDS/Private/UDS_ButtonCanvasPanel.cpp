// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b430910

UClass * __cdecl UDS_ButtonCanvasPanel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ButtonCanvasPanel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ButtonCanvasPanel",
               &Z_Registration_Info_UClass_UDS_ButtonCanvasPanel.InnerSingleton,
               StaticRegisterNativesUDS_ButtonCanvasPanel,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ButtonCanvasPanel>,
               InternalVTableHelperCtorCaller<UDS_ButtonCanvasPanel>,local_res8,
               UDS_CanvasPanel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ButtonCanvasPanel.InnerSingleton;
}

// UDS_ButtonCanvasPanel @ 14b4341b0

UDS_ButtonCanvasPanel * __thiscall
UDS_ButtonCanvasPanel::UDS_ButtonCanvasPanel(UDS_ButtonCanvasPanel *this,FVTableHelper *param_1)

{
  UDS_CanvasPanel::UDS_CanvasPanel((UDS_CanvasPanel *)this,param_1);
  this->ButtonStateType = 0;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// UDS_ButtonCanvasPanel @ 14b4341f0

UDS_ButtonCanvasPanel * __thiscall
UDS_ButtonCanvasPanel::UDS_ButtonCanvasPanel
          (UDS_ButtonCanvasPanel *this,FObjectInitializer *param_1)

{
  UDS_CanvasPanel::UDS_CanvasPanel((UDS_CanvasPanel *)this,param_1);
  this->ButtonStateType = 0;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// ~UDS_ButtonCanvasPanel @ 14b434cb0

void __thiscall UDS_ButtonCanvasPanel::~UDS_ButtonCanvasPanel(UDS_ButtonCanvasPanel *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  UDS_CanvasPanel::~UDS_CanvasPanel((UDS_CanvasPanel *)this);
  return;
}

// GetPrivateStaticClass @ 14b436420

UClass * __cdecl UDS_ButtonCanvasPanel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ButtonCanvasPanel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ButtonCanvasPanel",
               &Z_Registration_Info_UClass_UDS_ButtonCanvasPanel.InnerSingleton,
               StaticRegisterNativesUDS_ButtonCanvasPanel,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ButtonCanvasPanel>,
               InternalVTableHelperCtorCaller<UDS_ButtonCanvasPanel>,local_res8,
               UDS_CanvasPanel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ButtonCanvasPanel.InnerSingleton;
}

// StaticRegisterNativesUDS_ButtonCanvasPanel @ 14b437020

void __cdecl UDS_ButtonCanvasPanel::StaticRegisterNativesUDS_ButtonCanvasPanel(void)

{
  return;
}

// SetButtonEvent @ 14bcc5060

void __thiscall
UDS_ButtonCanvasPanel::SetButtonEvent(UDS_ButtonCanvasPanel *this,EDS_ButtonStateType *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  undefined8 in_R8;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x2c0);
  uVar1 = 4;
  if ((this->ButtonStateType & *param_1) != *param_1) {
    uVar1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014bcc507a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,uVar1,in_R8,UNRECOVERED_JUMPTABLE);
  return;
}

