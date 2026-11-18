// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 9

// StaticClass @ 14695d020

UClass * __cdecl UVisual::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVisual.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"Visual",&Z_Registration_Info_UClass_UVisual.InnerSingleton,
               StaticRegisterNativesUVisual,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UVisual>,InternalVTableHelperCtorCaller<UVisual>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVisual.InnerSingleton;
}

// UVisual @ 14698ece0

UVisual * __thiscall UVisual::UVisual(UVisual *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UVisual__6B_;
  return this;
}

// UVisual @ 14698ed10

UVisual * __thiscall UVisual::UVisual(UVisual *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UVisual__6B_;
  return this;
}

// ~UVisual @ 1469949c0

void __thiscall UVisual::~UVisual(UVisual *this)

{
  *(undefined ***)this = &___7UVisual__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 1469a30d0

void __thiscall UVisual::BeginDestroy(UVisual *this)

{
  UObject::BeginDestroy((UObject *)this);
                    /* WARNING: Could not recover jumptable at 0x0001469a30eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2b0))(this,0);
  return;
}

// GetPrivateStaticClass @ 1469d6950

UClass * __cdecl UVisual::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVisual.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"Visual",&Z_Registration_Info_UClass_UVisual.InnerSingleton,
               StaticRegisterNativesUVisual,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UVisual>,InternalVTableHelperCtorCaller<UVisual>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVisual.InnerSingleton;
}

// NeedsLoadForServer @ 1469e4b80

bool __thiscall UVisual::NeedsLoadForServer(UVisual *this)

{
  UClass *this_00;
  
  this_00 = Z_Construct_UClass_UUserInterfaceSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
    return (bool)(this_00->ClassDefaultObject).field0_0x0.DebugPtr[0xf].field_0x24;
  }
  return (bool)(this_00->ClassDefaultObject).field0_0x0.DebugPtr[0xf].field_0x24;
}

// ReleaseSlateResources @ 146a0b9d0

void __thiscall UVisual::ReleaseSlateResources(UVisual *this,bool param_1)

{
  return;
}

// StaticRegisterNativesUVisual @ 146a1f3a0

void __cdecl UVisual::StaticRegisterNativesUVisual(void)

{
  return;
}

