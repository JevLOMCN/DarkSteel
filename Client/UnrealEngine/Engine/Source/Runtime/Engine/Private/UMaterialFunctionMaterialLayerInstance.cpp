// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472eee90

UClass * __cdecl UMaterialFunctionMaterialLayerInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerInstance.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialFunctionMaterialLayerInstance",
               &Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerInstance.InnerSingleton,
               StaticRegisterNativesUMaterialFunctionMaterialLayerInstance,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMaterialFunctionMaterialLayerInstance>,
               InternalVTableHelperCtorCaller<UMaterialFunctionMaterialLayerInstance>,local_res8,
               UMaterialFunctionInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerInstance.InnerSingleton;
}

// UMaterialFunctionMaterialLayerInstance @ 1472f1af0

UMaterialFunctionMaterialLayerInstance * __thiscall
UMaterialFunctionMaterialLayerInstance::UMaterialFunctionMaterialLayerInstance
          (UMaterialFunctionMaterialLayerInstance *this,FVTableHelper *param_1)

{
  UMaterialFunctionInstance::UMaterialFunctionInstance((UMaterialFunctionInstance *)this,param_1);
  *(undefined ***)this = &___7UMaterialFunctionMaterialLayerInstance__6B_;
  return this;
}

// UMaterialFunctionMaterialLayerInstance @ 1472f1b20

UMaterialFunctionMaterialLayerInstance * __thiscall
UMaterialFunctionMaterialLayerInstance::UMaterialFunctionMaterialLayerInstance
          (UMaterialFunctionMaterialLayerInstance *this,FObjectInitializer *param_1)

{
  UMaterialFunctionInstance::UMaterialFunctionInstance((UMaterialFunctionInstance *)this,param_1);
  *(undefined ***)this = &___7UMaterialFunctionMaterialLayerInstance__6B_;
  return this;
}

// ~UMaterialFunctionMaterialLayerInstance @ 1472f21a0

void __thiscall
UMaterialFunctionMaterialLayerInstance::~UMaterialFunctionMaterialLayerInstance
          (UMaterialFunctionMaterialLayerInstance *this)

{
  *(undefined ***)this = &___7UMaterialFunctionMaterialLayerInstance__6B_;
  UMaterialFunctionInstance::~UMaterialFunctionInstance((UMaterialFunctionInstance *)this);
  return;
}

// GetPrivateStaticClass @ 1472f3740

UClass * __cdecl UMaterialFunctionMaterialLayerInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerInstance.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialFunctionMaterialLayerInstance",
               &Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerInstance.InnerSingleton,
               StaticRegisterNativesUMaterialFunctionMaterialLayerInstance,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMaterialFunctionMaterialLayerInstance>,
               InternalVTableHelperCtorCaller<UMaterialFunctionMaterialLayerInstance>,local_res8,
               UMaterialFunctionInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerInstance.InnerSingleton;
}

// StaticRegisterNativesUMaterialFunctionMaterialLayerInstance @ 1472f4400

void __cdecl
UMaterialFunctionMaterialLayerInstance::StaticRegisterNativesUMaterialFunctionMaterialLayerInstance
          (void)

{
  return;
}

