// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// StaticClass @ 146e78a80

UClass * __cdecl UAISenseBlueprintListener::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseBlueprintListener.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserDefinedStruct::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseBlueprintListener",
               &Z_Registration_Info_UClass_UAISenseBlueprintListener.InnerSingleton,
               StaticRegisterNativesUAISenseBlueprintListener,0x108,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UAISenseBlueprintListener>,
               InternalVTableHelperCtorCaller<UAISenseBlueprintListener>,local_res8,
               UUserDefinedStruct::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseBlueprintListener.InnerSingleton;
}

// UAISenseBlueprintListener @ 146e80920

UAISenseBlueprintListener * __thiscall
UAISenseBlueprintListener::UAISenseBlueprintListener
          (UAISenseBlueprintListener *this,FVTableHelper *param_1)

{
  UUserDefinedStruct::UUserDefinedStruct((UUserDefinedStruct *)this,param_1);
  *(undefined ***)this = &___7UAISenseBlueprintListener__6B_;
  return this;
}

// UAISenseBlueprintListener @ 146e80950

UAISenseBlueprintListener * __thiscall
UAISenseBlueprintListener::UAISenseBlueprintListener
          (UAISenseBlueprintListener *this,FObjectInitializer *param_1)

{
  UUserDefinedStruct::UUserDefinedStruct((UUserDefinedStruct *)this,param_1);
  *(undefined ***)this = &___7UAISenseBlueprintListener__6B_;
  return this;
}

// ~UAISenseBlueprintListener @ 146e81b70

void __thiscall
UAISenseBlueprintListener::~UAISenseBlueprintListener(UAISenseBlueprintListener *this)

{
  *(undefined ***)this = &___7UAISenseBlueprintListener__6B_;
  UUserDefinedStruct::~UUserDefinedStruct((UUserDefinedStruct *)this);
  return;
}

// GetPrivateStaticClass @ 146e8eaf0

UClass * __cdecl UAISenseBlueprintListener::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseBlueprintListener.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserDefinedStruct::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseBlueprintListener",
               &Z_Registration_Info_UClass_UAISenseBlueprintListener.InnerSingleton,
               StaticRegisterNativesUAISenseBlueprintListener,0x108,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UAISenseBlueprintListener>,
               InternalVTableHelperCtorCaller<UAISenseBlueprintListener>,local_res8,
               UUserDefinedStruct::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseBlueprintListener.InnerSingleton;
}

// StaticRegisterNativesUAISenseBlueprintListener @ 146ea00f0

void __cdecl UAISenseBlueprintListener::StaticRegisterNativesUAISenseBlueprintListener(void)

{
  return;
}

