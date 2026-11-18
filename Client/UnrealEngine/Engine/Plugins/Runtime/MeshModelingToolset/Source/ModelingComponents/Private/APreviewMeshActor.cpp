// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 6

// StaticClass @ 14caaefe0

UClass * __cdecl APreviewMeshActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APreviewMeshActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"PreviewMeshActor",
               &Z_Registration_Info_UClass_APreviewMeshActor.InnerSingleton,
               StaticRegisterNativesAPreviewMeshActor,0x2c8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APreviewMeshActor>,
               InternalVTableHelperCtorCaller<APreviewMeshActor>,local_res8,
               AInternalToolFrameworkActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APreviewMeshActor.InnerSingleton;
}

// APreviewMeshActor @ 14cac8ba0

APreviewMeshActor * __thiscall APreviewMeshActor::APreviewMeshActor(APreviewMeshActor *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  AInternalToolFrameworkActor::AInternalToolFrameworkActor
            ((AInternalToolFrameworkActor *)this,pFVar1);
  *(undefined ***)this = &___7APreviewMeshActor__6B_;
  return this;
}

// APreviewMeshActor @ 14cac8be0

APreviewMeshActor * __thiscall
APreviewMeshActor::APreviewMeshActor(APreviewMeshActor *this,FVTableHelper *param_1)

{
  AInternalToolFrameworkActor::AInternalToolFrameworkActor
            ((AInternalToolFrameworkActor *)this,param_1);
  *(undefined ***)this = &___7APreviewMeshActor__6B_;
  return this;
}

// ~APreviewMeshActor @ 14cad1600

void __thiscall APreviewMeshActor::~APreviewMeshActor(APreviewMeshActor *this)

{
  *(undefined ***)this = &___7APreviewMeshActor__6B_;
  AInternalToolFrameworkActor::~AInternalToolFrameworkActor((AInternalToolFrameworkActor *)this);
  return;
}

// GetPrivateStaticClass @ 14cb11dd0

UClass * __cdecl APreviewMeshActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APreviewMeshActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"PreviewMeshActor",
               &Z_Registration_Info_UClass_APreviewMeshActor.InnerSingleton,
               StaticRegisterNativesAPreviewMeshActor,0x2c8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APreviewMeshActor>,
               InternalVTableHelperCtorCaller<APreviewMeshActor>,local_res8,
               AInternalToolFrameworkActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APreviewMeshActor.InnerSingleton;
}

// StaticRegisterNativesAPreviewMeshActor @ 14cb3ea50

void __cdecl APreviewMeshActor::StaticRegisterNativesAPreviewMeshActor(void)

{
  return;
}

