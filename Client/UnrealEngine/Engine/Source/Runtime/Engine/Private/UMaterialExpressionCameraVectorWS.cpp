// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472955a0

UClass * __cdecl UMaterialExpressionCameraVectorWS::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionCameraVectorWS.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionCameraVectorWS",
               &Z_Registration_Info_UClass_UMaterialExpressionCameraVectorWS.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionCameraVectorWS,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionCameraVectorWS>,
               InternalVTableHelperCtorCaller<UMaterialExpressionCameraVectorWS>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionCameraVectorWS.InnerSingleton;
}

// UMaterialExpressionCameraVectorWS @ 14729c200

UMaterialExpressionCameraVectorWS * __thiscall
UMaterialExpressionCameraVectorWS::UMaterialExpressionCameraVectorWS
          (UMaterialExpressionCameraVectorWS *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionCameraVectorWS__6B_;
  return this;
}

// UMaterialExpressionCameraVectorWS @ 14729c230

UMaterialExpressionCameraVectorWS * __thiscall
UMaterialExpressionCameraVectorWS::UMaterialExpressionCameraVectorWS
          (UMaterialExpressionCameraVectorWS *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionCameraVectorWS__6B_;
  return this;
}

// ~UMaterialExpressionCameraVectorWS @ 14729d750

void __thiscall
UMaterialExpressionCameraVectorWS::~UMaterialExpressionCameraVectorWS
          (UMaterialExpressionCameraVectorWS *this)

{
  *(undefined ***)this = &___7UMaterialExpressionCameraVectorWS__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 14729fb10

UClass * __cdecl UMaterialExpressionCameraVectorWS::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionCameraVectorWS.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionCameraVectorWS",
               &Z_Registration_Info_UClass_UMaterialExpressionCameraVectorWS.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionCameraVectorWS,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionCameraVectorWS>,
               InternalVTableHelperCtorCaller<UMaterialExpressionCameraVectorWS>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionCameraVectorWS.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionCameraVectorWS @ 1472a1c50

void __cdecl
UMaterialExpressionCameraVectorWS::StaticRegisterNativesUMaterialExpressionCameraVectorWS(void)

{
  return;
}

