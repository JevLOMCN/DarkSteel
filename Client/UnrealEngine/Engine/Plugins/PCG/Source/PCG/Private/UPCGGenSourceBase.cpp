// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// StaticClass @ 149723960

UClass * __cdecl UPCGGenSourceBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGenSourceBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGenSourceBase",
               &Z_Registration_Info_UClass_UPCGGenSourceBase.InnerSingleton,
               StaticRegisterNativesUPCGGenSourceBase,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGGenSourceBase>,
               InternalVTableHelperCtorCaller<UPCGGenSourceBase>,local_res8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGenSourceBase.InnerSingleton;
}

// UPCGGenSourceBase @ 149725640

UPCGGenSourceBase * __thiscall
UPCGGenSourceBase::UPCGGenSourceBase(UPCGGenSourceBase *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPCGGenSourceBase__6B_;
  return this;
}

// UPCGGenSourceBase @ 149725670

UPCGGenSourceBase * __thiscall
UPCGGenSourceBase::UPCGGenSourceBase(UPCGGenSourceBase *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPCGGenSourceBase__6B_;
  return this;
}

// ~UPCGGenSourceBase @ 149725e60

void __thiscall UPCGGenSourceBase::~UPCGGenSourceBase(UPCGGenSourceBase *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 149727210

UClass * __cdecl UPCGGenSourceBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGenSourceBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGenSourceBase",
               &Z_Registration_Info_UClass_UPCGGenSourceBase.InnerSingleton,
               StaticRegisterNativesUPCGGenSourceBase,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGGenSourceBase>,
               InternalVTableHelperCtorCaller<UPCGGenSourceBase>,local_res8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGenSourceBase.InnerSingleton;
}

// StaticRegisterNativesUPCGGenSourceBase @ 149727fe0

void __cdecl UPCGGenSourceBase::StaticRegisterNativesUPCGGenSourceBase(void)

{
  return;
}

