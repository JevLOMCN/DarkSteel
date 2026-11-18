// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b509490

UClass * __cdecl UDS_ModelEventGemSocketSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelEventGemSocketSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelEventGemSocketSlot",
               &Z_Registration_Info_UClass_UDS_ModelEventGemSocketSlot.InnerSingleton,
               StaticRegisterNativesUDS_ModelEventGemSocketSlot,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ModelEventGemSocketSlot>,
               InternalVTableHelperCtorCaller<UDS_ModelEventGemSocketSlot>,local_res8,
               UDS_ModelEventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelEventGemSocketSlot.InnerSingleton;
}

// UDS_ModelEventGemSocketSlot @ 14b511f40

UDS_ModelEventGemSocketSlot * __thiscall
UDS_ModelEventGemSocketSlot::UDS_ModelEventGemSocketSlot
          (UDS_ModelEventGemSocketSlot *this,FVTableHelper *param_1)

{
  UDS_ModelEventBase::UDS_ModelEventBase((UDS_ModelEventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ModelEventGemSocketSlot__6B_;
  return this;
}

// UDS_ModelEventGemSocketSlot @ 14b511f70

UDS_ModelEventGemSocketSlot * __thiscall
UDS_ModelEventGemSocketSlot::UDS_ModelEventGemSocketSlot
          (UDS_ModelEventGemSocketSlot *this,FObjectInitializer *param_1)

{
  UDS_ModelEventBase::UDS_ModelEventBase((UDS_ModelEventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ModelEventGemSocketSlot__6B_;
  return this;
}

// ~UDS_ModelEventGemSocketSlot @ 14b5132c0

void __thiscall
UDS_ModelEventGemSocketSlot::~UDS_ModelEventGemSocketSlot(UDS_ModelEventGemSocketSlot *this)

{
  this->_padding_ = (longlong)&___7UDS_ModelEventGemSocketSlot__6B_;
  UDS_ModelEventBase::~UDS_ModelEventBase((UDS_ModelEventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b516980

UClass * __cdecl UDS_ModelEventGemSocketSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelEventGemSocketSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelEventGemSocketSlot",
               &Z_Registration_Info_UClass_UDS_ModelEventGemSocketSlot.InnerSingleton,
               StaticRegisterNativesUDS_ModelEventGemSocketSlot,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ModelEventGemSocketSlot>,
               InternalVTableHelperCtorCaller<UDS_ModelEventGemSocketSlot>,local_res8,
               UDS_ModelEventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelEventGemSocketSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_ModelEventGemSocketSlot @ 14b516e70

void __cdecl UDS_ModelEventGemSocketSlot::StaticRegisterNativesUDS_ModelEventGemSocketSlot(void)

{
  return;
}

