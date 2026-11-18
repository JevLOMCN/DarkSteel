// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472baca0

UClass * __cdecl UMaterialExpressionParticlePositionWS::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParticlePositionWS.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParticlePositionWS",
               &Z_Registration_Info_UClass_UMaterialExpressionParticlePositionWS.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionParticlePositionWS,200,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParticlePositionWS>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParticlePositionWS>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParticlePositionWS.InnerSingleton;
}

// UMaterialExpressionParticlePositionWS @ 1472c0a20

UMaterialExpressionParticlePositionWS * __thiscall
UMaterialExpressionParticlePositionWS::UMaterialExpressionParticlePositionWS
          (UMaterialExpressionParticlePositionWS *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionParticlePositionWS__6B_;
  return this;
}

// UMaterialExpressionParticlePositionWS @ 1472c0a50

UMaterialExpressionParticlePositionWS * __thiscall
UMaterialExpressionParticlePositionWS::UMaterialExpressionParticlePositionWS
          (UMaterialExpressionParticlePositionWS *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionParticlePositionWS__6B_;
  return this;
}

// ~UMaterialExpressionParticlePositionWS @ 1472c2310

void __thiscall
UMaterialExpressionParticlePositionWS::~UMaterialExpressionParticlePositionWS
          (UMaterialExpressionParticlePositionWS *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionParticlePositionWS__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472c5770

UClass * __cdecl UMaterialExpressionParticlePositionWS::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParticlePositionWS.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParticlePositionWS",
               &Z_Registration_Info_UClass_UMaterialExpressionParticlePositionWS.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionParticlePositionWS,200,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParticlePositionWS>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParticlePositionWS>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParticlePositionWS.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionParticlePositionWS @ 1472c75c0

void __cdecl
UMaterialExpressionParticlePositionWS::StaticRegisterNativesUMaterialExpressionParticlePositionWS
          (void)

{
  return;
}

