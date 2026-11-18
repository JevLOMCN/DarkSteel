// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147339690

UClass * __cdecl UMaterialExpressionMaterialSample::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialSample.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionMaterialSample",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialSample.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialSample,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialSample>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialSample>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialSample.InnerSingleton;
}

// UMaterialExpressionMaterialSample @ 147340ba0

UMaterialExpressionMaterialSample * __thiscall
UMaterialExpressionMaterialSample::UMaterialExpressionMaterialSample
          (UMaterialExpressionMaterialSample *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialSample__6B_;
  (this->MaterialReference).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  return this;
}

// UMaterialExpressionMaterialSample @ 147340be0

UMaterialExpressionMaterialSample * __thiscall
UMaterialExpressionMaterialSample::UMaterialExpressionMaterialSample
          (UMaterialExpressionMaterialSample *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialSample__6B_;
  (this->MaterialReference).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  return this;
}

// ~UMaterialExpressionMaterialSample @ 1473421f0

void __thiscall
UMaterialExpressionMaterialSample::~UMaterialExpressionMaterialSample
          (UMaterialExpressionMaterialSample *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialSample__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 14734fdf0

UClass * __cdecl UMaterialExpressionMaterialSample::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialSample.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionMaterialSample",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialSample.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialSample,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialSample>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialSample>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialSample.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMaterialSample @ 147358880

void __cdecl
UMaterialExpressionMaterialSample::StaticRegisterNativesUMaterialExpressionMaterialSample(void)

{
  return;
}

