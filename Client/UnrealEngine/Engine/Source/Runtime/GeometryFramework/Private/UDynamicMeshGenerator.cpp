// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 7

// StaticClass @ 1496e82f0

UClass * __cdecl UDynamicMeshGenerator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMeshGenerator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"DynamicMeshGenerator",
               &Z_Registration_Info_UClass_UDynamicMeshGenerator.InnerSingleton,
               StaticRegisterNativesUDynamicMeshGenerator,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDynamicMeshGenerator>,
               InternalVTableHelperCtorCaller<UDynamicMeshGenerator>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMeshGenerator.InnerSingleton;
}

// UDynamicMeshGenerator @ 1496f9d40

UDynamicMeshGenerator * __thiscall
UDynamicMeshGenerator::UDynamicMeshGenerator(UDynamicMeshGenerator *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDynamicMeshGenerator__6B_;
  return this;
}

// UDynamicMeshGenerator @ 1496f9d70

UDynamicMeshGenerator * __thiscall
UDynamicMeshGenerator::UDynamicMeshGenerator
          (UDynamicMeshGenerator *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDynamicMeshGenerator__6B_;
  return this;
}

// ~UDynamicMeshGenerator @ 1496fb600

void __thiscall UDynamicMeshGenerator::~UDynamicMeshGenerator(UDynamicMeshGenerator *this)

{
  *(undefined ***)this = &___7UDynamicMeshGenerator__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Generate @ 14970d330

void __thiscall UDynamicMeshGenerator::Generate(UDynamicMeshGenerator *this,FDynamicMesh3 *param_1)

{
  return;
}

// GetPrivateStaticClass @ 149711340

UClass * __cdecl UDynamicMeshGenerator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMeshGenerator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"DynamicMeshGenerator",
               &Z_Registration_Info_UClass_UDynamicMeshGenerator.InnerSingleton,
               StaticRegisterNativesUDynamicMeshGenerator,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDynamicMeshGenerator>,
               InternalVTableHelperCtorCaller<UDynamicMeshGenerator>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMeshGenerator.InnerSingleton;
}

// StaticRegisterNativesUDynamicMeshGenerator @ 14971ab30

void __cdecl UDynamicMeshGenerator::StaticRegisterNativesUDynamicMeshGenerator(void)

{
  return;
}

