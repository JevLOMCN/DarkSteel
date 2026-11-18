// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticClass @ 14a379d90

UClass * __cdecl UControlRigPoseMirrorSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigPoseMirrorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigPoseMirrorSettings",
               &Z_Registration_Info_UClass_UControlRigPoseMirrorSettings.InnerSingleton,
               StaticRegisterNativesUControlRigPoseMirrorSettings,0x58,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UControlRigPoseMirrorSettings>,
               InternalVTableHelperCtorCaller<UControlRigPoseMirrorSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigPoseMirrorSettings.InnerSingleton;
}

// UControlRigPoseMirrorSettings @ 14a3b8d40

UControlRigPoseMirrorSettings * __thiscall
UControlRigPoseMirrorSettings::UControlRigPoseMirrorSettings
          (UControlRigPoseMirrorSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UControlRigPoseMirrorSettings__6B_;
  (this->RightSide).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RightSide).Data.ArrayNum = 0;
  (this->RightSide).Data.ArrayMax = 0;
  (this->LeftSide).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LeftSide).Data.ArrayNum = 0;
  (this->LeftSide).Data.ArrayMax = 0;
  return this;
}

// UControlRigPoseMirrorSettings @ 14a3b8d80

UControlRigPoseMirrorSettings * __thiscall
UControlRigPoseMirrorSettings::UControlRigPoseMirrorSettings(UControlRigPoseMirrorSettings *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UControlRigPoseMirrorSettings__6B_;
  (this->RightSide).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RightSide).Data.ArrayNum = 0;
  (this->RightSide).Data.ArrayMax = 0;
  (this->LeftSide).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LeftSide).Data.ArrayNum = 0;
  (this->LeftSide).Data.ArrayMax = 0;
  this->MirrorMatchTolerance = 0.2;
  this->MirrorAxis = '\x01';
  this->AxisToFlip = '\x01';
  return this;
}

// ~UControlRigPoseMirrorSettings @ 14a3bd070

void __thiscall
UControlRigPoseMirrorSettings::~UControlRigPoseMirrorSettings(UControlRigPoseMirrorSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UControlRigPoseMirrorSettings__6B_;
  pFVar1 = (this->LeftSide).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RightSide).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a416e50

UClass * __cdecl UControlRigPoseMirrorSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigPoseMirrorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigPoseMirrorSettings",
               &Z_Registration_Info_UClass_UControlRigPoseMirrorSettings.InnerSingleton,
               StaticRegisterNativesUControlRigPoseMirrorSettings,0x58,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UControlRigPoseMirrorSettings>,
               InternalVTableHelperCtorCaller<UControlRigPoseMirrorSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigPoseMirrorSettings.InnerSingleton;
}

// StaticRegisterNativesUControlRigPoseMirrorSettings @ 14a45c3b0

void __cdecl UControlRigPoseMirrorSettings::StaticRegisterNativesUControlRigPoseMirrorSettings(void)

{
  return;
}

