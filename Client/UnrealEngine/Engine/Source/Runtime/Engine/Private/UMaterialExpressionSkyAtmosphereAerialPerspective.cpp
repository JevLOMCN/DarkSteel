// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472ca960

UClass * __cdecl UMaterialExpressionSkyAtmosphereAerialPerspective::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSkyAtmosphereAerialPerspective",
               &Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSkyAtmosphereAerialPerspective,0xf0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSkyAtmosphereAerialPerspective>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSkyAtmosphereAerialPerspective>,
               local_res8,UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective.InnerSingleton
  ;
}

// UMaterialExpressionSkyAtmosphereAerialPerspective @ 1472d2ec0

UMaterialExpressionSkyAtmosphereAerialPerspective * __thiscall
UMaterialExpressionSkyAtmosphereAerialPerspective::UMaterialExpressionSkyAtmosphereAerialPerspective
          (UMaterialExpressionSkyAtmosphereAerialPerspective *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSkyAtmosphereAerialPerspective__6B_;
  (this->WorldPosition).OutputIndex = 0;
  (this->WorldPosition).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->WorldPosition).InputName.Number = 0;
  (this->WorldPosition).MaskR = 0;
  (this->WorldPosition).MaskG = 0;
  (this->WorldPosition).MaskB = 0;
  (this->WorldPosition).MaskA = 0;
  (this->WorldPosition).Expression = (UMaterialExpression *)0x0;
  this->WorldPositionOriginType = Absolute;
  return this;
}

// UMaterialExpressionSkyAtmosphereAerialPerspective @ 1472d2f20

UMaterialExpressionSkyAtmosphereAerialPerspective * __thiscall
UMaterialExpressionSkyAtmosphereAerialPerspective::UMaterialExpressionSkyAtmosphereAerialPerspective
          (UMaterialExpressionSkyAtmosphereAerialPerspective *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSkyAtmosphereAerialPerspective__6B_;
  (this->WorldPosition).OutputIndex = 0;
  (this->WorldPosition).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->WorldPosition).InputName.Number = 0;
  (this->WorldPosition).MaskR = 0;
  (this->WorldPosition).MaskG = 0;
  (this->WorldPosition).MaskB = 0;
  (this->WorldPosition).MaskA = 0;
  (this->WorldPosition).Expression = (UMaterialExpression *)0x0;
  this->WorldPositionOriginType = Absolute;
  return this;
}

// ~UMaterialExpressionSkyAtmosphereAerialPerspective @ 1472d4600

void __thiscall
UMaterialExpressionSkyAtmosphereAerialPerspective::
~UMaterialExpressionSkyAtmosphereAerialPerspective
          (UMaterialExpressionSkyAtmosphereAerialPerspective *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSkyAtmosphereAerialPerspective__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472d72f0

UClass * __cdecl UMaterialExpressionSkyAtmosphereAerialPerspective::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSkyAtmosphereAerialPerspective",
               &Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSkyAtmosphereAerialPerspective,0xf0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSkyAtmosphereAerialPerspective>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSkyAtmosphereAerialPerspective>,
               local_res8,UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective.InnerSingleton
  ;
}

// StaticRegisterNativesUMaterialExpressionSkyAtmosphereAerialPerspective @ 1472d8940

void __cdecl
UMaterialExpressionSkyAtmosphereAerialPerspective::
StaticRegisterNativesUMaterialExpressionSkyAtmosphereAerialPerspective(void)

{
  return;
}

