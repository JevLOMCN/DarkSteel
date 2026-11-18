// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b50c090

UClass * __cdecl UDS_ModelEventGemPopup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelEventGemPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelEventGemPopup",
               &Z_Registration_Info_UClass_UDS_ModelEventGemPopup.InnerSingleton,
               StaticRegisterNativesUDS_ModelEventGemPopup,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ModelEventGemPopup>,
               InternalVTableHelperCtorCaller<UDS_ModelEventGemPopup>,local_res8,
               UDS_ModelEventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelEventGemPopup.InnerSingleton;
}

// UDS_ModelEventGemPopup @ 14b511ee0

UDS_ModelEventGemPopup * __thiscall
UDS_ModelEventGemPopup::UDS_ModelEventGemPopup(UDS_ModelEventGemPopup *this,FVTableHelper *param_1)

{
  UDS_ModelEventBase::UDS_ModelEventBase((UDS_ModelEventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ModelEventGemPopup__6B_;
  return this;
}

// UDS_ModelEventGemPopup @ 14b511f10

UDS_ModelEventGemPopup * __thiscall
UDS_ModelEventGemPopup::UDS_ModelEventGemPopup
          (UDS_ModelEventGemPopup *this,FObjectInitializer *param_1)

{
  UDS_ModelEventBase::UDS_ModelEventBase((UDS_ModelEventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ModelEventGemPopup__6B_;
  return this;
}

// ~UDS_ModelEventGemPopup @ 14b5132a0

void __thiscall UDS_ModelEventGemPopup::~UDS_ModelEventGemPopup(UDS_ModelEventGemPopup *this)

{
  this->_padding_ = (longlong)&___7UDS_ModelEventGemPopup__6B_;
  UDS_ModelEventBase::~UDS_ModelEventBase((UDS_ModelEventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5168c0

UClass * __cdecl UDS_ModelEventGemPopup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelEventGemPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelEventGemPopup",
               &Z_Registration_Info_UClass_UDS_ModelEventGemPopup.InnerSingleton,
               StaticRegisterNativesUDS_ModelEventGemPopup,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ModelEventGemPopup>,
               InternalVTableHelperCtorCaller<UDS_ModelEventGemPopup>,local_res8,
               UDS_ModelEventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelEventGemPopup.InnerSingleton;
}

// StaticRegisterNativesUDS_ModelEventGemPopup @ 14b516e60

void __cdecl UDS_ModelEventGemPopup::StaticRegisterNativesUDS_ModelEventGemPopup(void)

{
  return;
}

