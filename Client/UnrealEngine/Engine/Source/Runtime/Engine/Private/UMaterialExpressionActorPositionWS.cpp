// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147286f30

UClass * __cdecl UMaterialExpressionActorPositionWS::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionActorPositionWS.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionActorPositionWS",
               &Z_Registration_Info_UClass_UMaterialExpressionActorPositionWS.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionActorPositionWS,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionActorPositionWS>,
               InternalVTableHelperCtorCaller<UMaterialExpressionActorPositionWS>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionActorPositionWS.InnerSingleton;
}

// UMaterialExpressionActorPositionWS @ 14728bf20

UMaterialExpressionActorPositionWS * __thiscall
UMaterialExpressionActorPositionWS::UMaterialExpressionActorPositionWS
          (UMaterialExpressionActorPositionWS *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionActorPositionWS__6B_;
  return this;
}

// UMaterialExpressionActorPositionWS @ 14728bf90

UMaterialExpressionActorPositionWS * __thiscall
UMaterialExpressionActorPositionWS::UMaterialExpressionActorPositionWS
          (UMaterialExpressionActorPositionWS *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionActorPositionWS__6B_;
  return this;
}

// ~UMaterialExpressionActorPositionWS @ 14728d5e0

void __thiscall
UMaterialExpressionActorPositionWS::~UMaterialExpressionActorPositionWS
          (UMaterialExpressionActorPositionWS *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionActorPositionWS__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 147290010

UClass * __cdecl UMaterialExpressionActorPositionWS::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionActorPositionWS.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionActorPositionWS",
               &Z_Registration_Info_UClass_UMaterialExpressionActorPositionWS.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionActorPositionWS,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionActorPositionWS>,
               InternalVTableHelperCtorCaller<UMaterialExpressionActorPositionWS>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionActorPositionWS.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionActorPositionWS @ 147291390

void __cdecl
UMaterialExpressionActorPositionWS::StaticRegisterNativesUMaterialExpressionActorPositionWS(void)

{
  return;
}

