// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1473cab00

UClass * __cdecl UAnimBlueprintGeneratedStruct::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBlueprintGeneratedStruct.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimBlueprintGeneratedStruct",
               &Z_Registration_Info_UClass_UAnimBlueprintGeneratedStruct.InnerSingleton,
               StaticRegisterNativesUAnimBlueprintGeneratedStruct,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimBlueprintGeneratedStruct>,
               InternalVTableHelperCtorCaller<UAnimBlueprintGeneratedStruct>,local_res8,
               UScriptStruct::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBlueprintGeneratedStruct.InnerSingleton;
}

// UAnimBlueprintGeneratedStruct @ 1473d8380

UAnimBlueprintGeneratedStruct * __thiscall
UAnimBlueprintGeneratedStruct::UAnimBlueprintGeneratedStruct
          (UAnimBlueprintGeneratedStruct *this,FVTableHelper *param_1)

{
  UScriptStruct::UScriptStruct((UScriptStruct *)this,param_1);
  *(undefined ***)this = &___7UAnimBlueprintGeneratedStruct__6B_;
  return this;
}

// UAnimBlueprintGeneratedStruct @ 1473d83b0

UAnimBlueprintGeneratedStruct * __thiscall
UAnimBlueprintGeneratedStruct::UAnimBlueprintGeneratedStruct
          (UAnimBlueprintGeneratedStruct *this,FObjectInitializer *param_1)

{
  UScriptStruct::UScriptStruct((UScriptStruct *)this,param_1);
  *(undefined ***)this = &___7UAnimBlueprintGeneratedStruct__6B_;
  return this;
}

// ~UAnimBlueprintGeneratedStruct @ 1473db310

void __thiscall
UAnimBlueprintGeneratedStruct::~UAnimBlueprintGeneratedStruct(UAnimBlueprintGeneratedStruct *this)

{
  *(undefined ***)this = &___7UAnimBlueprintGeneratedStruct__6B_;
  UScriptStruct::~UScriptStruct((UScriptStruct *)this);
  return;
}

// GetPrivateStaticClass @ 147403820

UClass * __cdecl UAnimBlueprintGeneratedStruct::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBlueprintGeneratedStruct.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimBlueprintGeneratedStruct",
               &Z_Registration_Info_UClass_UAnimBlueprintGeneratedStruct.InnerSingleton,
               StaticRegisterNativesUAnimBlueprintGeneratedStruct,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimBlueprintGeneratedStruct>,
               InternalVTableHelperCtorCaller<UAnimBlueprintGeneratedStruct>,local_res8,
               UScriptStruct::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBlueprintGeneratedStruct.InnerSingleton;
}

// IsAsset @ 1474076b0

bool __thiscall UAnimBlueprintGeneratedStruct::IsAsset(UAnimBlueprintGeneratedStruct *this)

{
  return false;
}

// StaticRegisterNativesUAnimBlueprintGeneratedStruct @ 147419ba0

void __cdecl UAnimBlueprintGeneratedStruct::StaticRegisterNativesUAnimBlueprintGeneratedStruct(void)

{
  return;
}

