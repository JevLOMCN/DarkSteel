// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472ea090

UClass * __cdecl UMaterialFunctionMaterialLayerBlendInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlendInstance.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialFunctionMaterialLayerBlendInstance",
               &Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlendInstance.
                InnerSingleton,StaticRegisterNativesUMaterialFunctionMaterialLayerBlendInstance,
               0x100,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialFunctionMaterialLayerBlendInstance>,
               InternalVTableHelperCtorCaller<UMaterialFunctionMaterialLayerBlendInstance>,
               local_res8,UMaterialFunctionInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlendInstance.InnerSingleton;
}

// UMaterialFunctionMaterialLayerBlendInstance @ 1472f1a90

UMaterialFunctionMaterialLayerBlendInstance * __thiscall
UMaterialFunctionMaterialLayerBlendInstance::UMaterialFunctionMaterialLayerBlendInstance
          (UMaterialFunctionMaterialLayerBlendInstance *this,FVTableHelper *param_1)

{
  UMaterialFunctionInstance::UMaterialFunctionInstance((UMaterialFunctionInstance *)this,param_1);
  *(undefined ***)this = &___7UMaterialFunctionMaterialLayerBlendInstance__6B_;
  return this;
}

// UMaterialFunctionMaterialLayerBlendInstance @ 1472f1ac0

UMaterialFunctionMaterialLayerBlendInstance * __thiscall
UMaterialFunctionMaterialLayerBlendInstance::UMaterialFunctionMaterialLayerBlendInstance
          (UMaterialFunctionMaterialLayerBlendInstance *this,FObjectInitializer *param_1)

{
  UMaterialFunctionInstance::UMaterialFunctionInstance((UMaterialFunctionInstance *)this,param_1);
  *(undefined ***)this = &___7UMaterialFunctionMaterialLayerBlendInstance__6B_;
  return this;
}

// ~UMaterialFunctionMaterialLayerBlendInstance @ 1472f2180

void __thiscall
UMaterialFunctionMaterialLayerBlendInstance::~UMaterialFunctionMaterialLayerBlendInstance
          (UMaterialFunctionMaterialLayerBlendInstance *this)

{
  *(undefined ***)this = &___7UMaterialFunctionMaterialLayerBlendInstance__6B_;
  UMaterialFunctionInstance::~UMaterialFunctionInstance((UMaterialFunctionInstance *)this);
  return;
}

// GetPrivateStaticClass @ 1472f3680

UClass * __cdecl UMaterialFunctionMaterialLayerBlendInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlendInstance.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialFunctionMaterialLayerBlendInstance",
               &Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlendInstance.
                InnerSingleton,StaticRegisterNativesUMaterialFunctionMaterialLayerBlendInstance,
               0x100,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialFunctionMaterialLayerBlendInstance>,
               InternalVTableHelperCtorCaller<UMaterialFunctionMaterialLayerBlendInstance>,
               local_res8,UMaterialFunctionInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlendInstance.InnerSingleton;
}

// StaticRegisterNativesUMaterialFunctionMaterialLayerBlendInstance @ 1472f43f0

void __cdecl
UMaterialFunctionMaterialLayerBlendInstance::
StaticRegisterNativesUMaterialFunctionMaterialLayerBlendInstance(void)

{
  return;
}

