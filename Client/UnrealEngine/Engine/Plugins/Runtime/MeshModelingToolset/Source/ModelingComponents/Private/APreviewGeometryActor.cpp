// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 5

// StaticClass @ 14caadbf0

UClass * __cdecl APreviewGeometryActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APreviewGeometryActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"PreviewGeometryActor",
               &Z_Registration_Info_UClass_APreviewGeometryActor.InnerSingleton,
               StaticRegisterNativesAPreviewGeometryActor,0x2c8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APreviewGeometryActor>,
               InternalVTableHelperCtorCaller<APreviewGeometryActor>,local_res8,
               AInternalToolFrameworkActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APreviewGeometryActor.InnerSingleton;
}

// APreviewGeometryActor @ 14cac8b70

APreviewGeometryActor * __thiscall
APreviewGeometryActor::APreviewGeometryActor(APreviewGeometryActor *this,FVTableHelper *param_1)

{
  AInternalToolFrameworkActor::AInternalToolFrameworkActor
            ((AInternalToolFrameworkActor *)this,param_1);
  *(undefined ***)this = &___7APreviewGeometryActor__6B_;
  return this;
}

// ~APreviewGeometryActor @ 14cad15e0

void __thiscall APreviewGeometryActor::~APreviewGeometryActor(APreviewGeometryActor *this)

{
  *(undefined ***)this = &___7APreviewGeometryActor__6B_;
  AInternalToolFrameworkActor::~AInternalToolFrameworkActor((AInternalToolFrameworkActor *)this);
  return;
}

// GetPrivateStaticClass @ 14cb11d10

UClass * __cdecl APreviewGeometryActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APreviewGeometryActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"PreviewGeometryActor",
               &Z_Registration_Info_UClass_APreviewGeometryActor.InnerSingleton,
               StaticRegisterNativesAPreviewGeometryActor,0x2c8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APreviewGeometryActor>,
               InternalVTableHelperCtorCaller<APreviewGeometryActor>,local_res8,
               AInternalToolFrameworkActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APreviewGeometryActor.InnerSingleton;
}

// StaticRegisterNativesAPreviewGeometryActor @ 14cb3ea40

void __cdecl APreviewGeometryActor::StaticRegisterNativesAPreviewGeometryActor(void)

{
  return;
}

