// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 7

// StaticClass @ 14a86b690

UClass * __cdecl UFloatAutoPopulator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFloatAutoPopulator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"FloatAutoPopulator",
               &Z_Registration_Info_UClass_UFloatAutoPopulator.InnerSingleton,
               StaticRegisterNativesUFloatAutoPopulator,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFloatAutoPopulator>,
               InternalVTableHelperCtorCaller<UFloatAutoPopulator>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFloatAutoPopulator.InnerSingleton;
}

// UFloatAutoPopulator @ 14a87e100

UFloatAutoPopulator * __thiscall
UFloatAutoPopulator::UFloatAutoPopulator(UFloatAutoPopulator *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UFloatAutoPopulator__6B_;
  return this;
}

// UFloatAutoPopulator @ 14a87e130

UFloatAutoPopulator * __thiscall
UFloatAutoPopulator::UFloatAutoPopulator(UFloatAutoPopulator *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UFloatAutoPopulator__6B_;
  return this;
}

// ~UFloatAutoPopulator @ 14a87eae0

void __thiscall UFloatAutoPopulator::~UFloatAutoPopulator(UFloatAutoPopulator *this)

{
  *(undefined ***)this = &___7UFloatAutoPopulator__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a88b400

UClass * __cdecl UFloatAutoPopulator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFloatAutoPopulator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Chooser",L"FloatAutoPopulator",
               &Z_Registration_Info_UClass_UFloatAutoPopulator.InnerSingleton,
               StaticRegisterNativesUFloatAutoPopulator,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFloatAutoPopulator>,
               InternalVTableHelperCtorCaller<UFloatAutoPopulator>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFloatAutoPopulator.InnerSingleton;
}

// NativeAutoPopulate @ 14a88c800

void __thiscall
UFloatAutoPopulator::NativeAutoPopulate
          (UFloatAutoPopulator *this,UObject *param_1,bool *param_2,float *param_3)

{
  return;
}

// StaticRegisterNativesUFloatAutoPopulator @ 14a88ff10

void __cdecl UFloatAutoPopulator::StaticRegisterNativesUFloatAutoPopulator(void)

{
  return;
}

