// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472edea0

UClass * __cdecl UMeshDeformerProducer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshDeformerProducer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshDeformerProducer",
               &Z_Registration_Info_UClass_UMeshDeformerProducer.InnerSingleton,
               StaticRegisterNativesUMeshDeformerProducer,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshDeformerProducer>,
               InternalVTableHelperCtorCaller<UMeshDeformerProducer>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshDeformerProducer.InnerSingleton;
}

// UMeshDeformerProducer @ 1472f1d50

UMeshDeformerProducer * __thiscall
UMeshDeformerProducer::UMeshDeformerProducer(UMeshDeformerProducer *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMeshDeformerProducer__6B_;
  return this;
}

// UMeshDeformerProducer @ 1472f1d80

UMeshDeformerProducer * __thiscall
UMeshDeformerProducer::UMeshDeformerProducer
          (UMeshDeformerProducer *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMeshDeformerProducer__6B_;
  return this;
}

// ~UMeshDeformerProducer @ 1472f2300

void __thiscall UMeshDeformerProducer::~UMeshDeformerProducer(UMeshDeformerProducer *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472f3ac0

UClass * __cdecl UMeshDeformerProducer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshDeformerProducer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshDeformerProducer",
               &Z_Registration_Info_UClass_UMeshDeformerProducer.InnerSingleton,
               StaticRegisterNativesUMeshDeformerProducer,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshDeformerProducer>,
               InternalVTableHelperCtorCaller<UMeshDeformerProducer>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshDeformerProducer.InnerSingleton;
}

// StaticRegisterNativesUMeshDeformerProducer @ 1472f4450

void __cdecl UMeshDeformerProducer::StaticRegisterNativesUMeshDeformerProducer(void)

{
  return;
}

