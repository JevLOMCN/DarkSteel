// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 147ba4cb0

UClass * __cdecl UEngineTypes::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UEngineTypes.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EngineTypes",
               &Z_Registration_Info_UClass_UEngineTypes.InnerSingleton,
               StaticRegisterNativesUEngineTypes,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UEngineTypes>,
               InternalVTableHelperCtorCaller<UEngineTypes>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEngineTypes.InnerSingleton;
}

// UEngineTypes @ 147bbc170

UEngineTypes * __thiscall UEngineTypes::UEngineTypes(UEngineTypes *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEngineTypes__6B_;
  return this;
}

// UEngineTypes @ 147bbc1a0

UEngineTypes * __thiscall UEngineTypes::UEngineTypes(UEngineTypes *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEngineTypes__6B_;
  return this;
}

// ~UEngineTypes @ 147bbf210

void __thiscall UEngineTypes::~UEngineTypes(UEngineTypes *this)

{
  *(undefined ***)this = &___7UEngineTypes__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ConvertToCollisionChannel @ 147bce500

ECollisionChannel __cdecl UEngineTypes::ConvertToCollisionChannel(EObjectTypeQuery param_1)

{
  ECollisionChannel EVar1;
  UCollisionProfile *this;
  
  this = UCollisionProfile::Get();
  EVar1 = UCollisionProfile::ConvertToCollisionChannel(this,false,param_1);
  return EVar1;
}

// ConvertToCollisionChannel @ 147bce530

ECollisionChannel __cdecl UEngineTypes::ConvertToCollisionChannel(ETraceTypeQuery param_1)

{
  ECollisionChannel EVar1;
  UCollisionProfile *this;
  
  this = UCollisionProfile::Get();
  EVar1 = UCollisionProfile::ConvertToCollisionChannel(this,true,param_1);
  return EVar1;
}

// ConvertToObjectType @ 147bce560

EObjectTypeQuery __cdecl UEngineTypes::ConvertToObjectType(ECollisionChannel param_1)

{
  EObjectTypeQuery EVar1;
  UCollisionProfile *this;
  
  this = UCollisionProfile::Get();
  EVar1 = UCollisionProfile::ConvertToObjectType(this,param_1);
  return EVar1;
}

// ConvertToTraceType @ 147bce590

ETraceTypeQuery __cdecl UEngineTypes::ConvertToTraceType(ECollisionChannel param_1)

{
  ETraceTypeQuery EVar1;
  UCollisionProfile *this;
  
  this = UCollisionProfile::Get();
  EVar1 = UCollisionProfile::ConvertToTraceType(this,param_1);
  return EVar1;
}

// GetPrivateStaticClass @ 147be4dd0

UClass * __cdecl UEngineTypes::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEngineTypes.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EngineTypes",
               &Z_Registration_Info_UClass_UEngineTypes.InnerSingleton,
               StaticRegisterNativesUEngineTypes,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UEngineTypes>,
               InternalVTableHelperCtorCaller<UEngineTypes>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEngineTypes.InnerSingleton;
}

// StaticRegisterNativesUEngineTypes @ 147c03560

void __cdecl UEngineTypes::StaticRegisterNativesUEngineTypes(void)

{
  return;
}

