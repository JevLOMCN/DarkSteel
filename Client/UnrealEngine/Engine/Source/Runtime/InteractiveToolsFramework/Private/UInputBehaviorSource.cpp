// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14966cec0

UClass * __cdecl UInputBehaviorSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UInputBehaviorSource.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InputBehaviorSource",
               &Z_Registration_Info_UClass_UInputBehaviorSource.InnerSingleton,
               StaticRegisterNativesUInputBehaviorSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInputBehaviorSource>,
               InternalVTableHelperCtorCaller<UInputBehaviorSource>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputBehaviorSource.InnerSingleton;
}

// UInputBehaviorSource @ 149686ef0

UInputBehaviorSource * __thiscall
UInputBehaviorSource::UInputBehaviorSource(UInputBehaviorSource *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInputBehaviorSource__6B_;
  return this;
}

// UInputBehaviorSource @ 149686f20

UInputBehaviorSource * __thiscall
UInputBehaviorSource::UInputBehaviorSource(UInputBehaviorSource *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInputBehaviorSource__6B_;
  return this;
}

// ~UInputBehaviorSource @ 14968a420

void __thiscall UInputBehaviorSource::~UInputBehaviorSource(UInputBehaviorSource *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1496a6a10

UClass * __cdecl UInputBehaviorSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputBehaviorSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InputBehaviorSource",
               &Z_Registration_Info_UClass_UInputBehaviorSource.InnerSingleton,
               StaticRegisterNativesUInputBehaviorSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInputBehaviorSource>,
               InternalVTableHelperCtorCaller<UInputBehaviorSource>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputBehaviorSource.InnerSingleton;
}

// StaticRegisterNativesUInputBehaviorSource @ 1496c2c60

void __cdecl UInputBehaviorSource::StaticRegisterNativesUInputBehaviorSource(void)

{
  return;
}

