// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147f0e810

UClass * __cdecl UMaterialExpressionSubstrateVolumetricFogCloudBSDF::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateVolumetricFogCloudBSDF.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateVolumetricFogCloudBSDF",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateVolumetricFogCloudBSDF.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateVolumetricFogCloudBSDF,0x158,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateVolumetricFogCloudBSDF>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateVolumetricFogCloudBSDF>,
               local_res8,UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateVolumetricFogCloudBSDF.
         InnerSingleton;
}

// UMaterialExpressionSubstrateVolumetricFogCloudBSDF @ 147f2da20

UMaterialExpressionSubstrateVolumetricFogCloudBSDF * __thiscall
UMaterialExpressionSubstrateVolumetricFogCloudBSDF::
UMaterialExpressionSubstrateVolumetricFogCloudBSDF
          (UMaterialExpressionSubstrateVolumetricFogCloudBSDF *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateVolumetricFogCloudBSDF__6B_;
  (this->Albedo).OutputIndex = 0;
  (this->Albedo).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Albedo).InputName.Number = 0;
  (this->Albedo).MaskR = 0;
  (this->Albedo).MaskG = 0;
  (this->Albedo).MaskB = 0;
  (this->Albedo).MaskA = 0;
  (this->Albedo).Expression = (UMaterialExpression *)0x0;
  (this->Extinction).OutputIndex = 0;
  (this->Extinction).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Extinction).InputName.Number = 0;
  (this->Extinction).MaskR = 0;
  (this->Extinction).MaskG = 0;
  (this->Extinction).MaskB = 0;
  (this->Extinction).MaskA = 0;
  (this->Extinction).Expression = (UMaterialExpression *)0x0;
  (this->EmissiveColor).OutputIndex = 0;
  (this->EmissiveColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->EmissiveColor).InputName.Number = 0;
  (this->EmissiveColor).MaskR = 0;
  (this->EmissiveColor).MaskG = 0;
  (this->EmissiveColor).MaskB = 0;
  (this->EmissiveColor).MaskA = 0;
  (this->EmissiveColor).Expression = (UMaterialExpression *)0x0;
  (this->AmbientOcclusion).OutputIndex = 0;
  (this->AmbientOcclusion).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->AmbientOcclusion).InputName.Number = 0;
  (this->AmbientOcclusion).MaskR = 0;
  (this->AmbientOcclusion).MaskG = 0;
  (this->AmbientOcclusion).MaskB = 0;
  (this->AmbientOcclusion).MaskA = 0;
  (this->AmbientOcclusion).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionSubstrateVolumetricFogCloudBSDF @ 147f2dae0

UMaterialExpressionSubstrateVolumetricFogCloudBSDF * __thiscall
UMaterialExpressionSubstrateVolumetricFogCloudBSDF::
UMaterialExpressionSubstrateVolumetricFogCloudBSDF
          (UMaterialExpressionSubstrateVolumetricFogCloudBSDF *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateVolumetricFogCloudBSDF__6B_;
  (this->Albedo).OutputIndex = 0;
  (this->Albedo).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Albedo).InputName.Number = 0;
  (this->Albedo).MaskR = 0;
  (this->Albedo).MaskG = 0;
  (this->Albedo).MaskB = 0;
  (this->Albedo).MaskA = 0;
  (this->Albedo).Expression = (UMaterialExpression *)0x0;
  (this->Extinction).OutputIndex = 0;
  (this->Extinction).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Extinction).InputName.Number = 0;
  (this->Extinction).MaskR = 0;
  (this->Extinction).MaskG = 0;
  (this->Extinction).MaskB = 0;
  (this->Extinction).MaskA = 0;
  (this->Extinction).Expression = (UMaterialExpression *)0x0;
  (this->EmissiveColor).OutputIndex = 0;
  (this->EmissiveColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->EmissiveColor).InputName.Number = 0;
  (this->EmissiveColor).MaskR = 0;
  (this->EmissiveColor).MaskG = 0;
  (this->EmissiveColor).MaskB = 0;
  (this->EmissiveColor).MaskA = 0;
  (this->EmissiveColor).Expression = (UMaterialExpression *)0x0;
  (this->AmbientOcclusion).OutputIndex = 0;
  (this->AmbientOcclusion).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->AmbientOcclusion).InputName.Number = 0;
  (this->AmbientOcclusion).MaskR = 0;
  (this->AmbientOcclusion).MaskG = 0;
  (this->AmbientOcclusion).MaskB = 0;
  (this->AmbientOcclusion).MaskA = 0;
  (this->AmbientOcclusion).Expression = (UMaterialExpression *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Substrate,L"MaterialExpressionSubstrate",
                 L"Substrate BSDFs",L"Substrate BSDFs");
      atexit(`UMaterialExpressionSubstrateVolumetricFogCloudBSDF::
             UMaterialExpressionSubstrateVolumetricFogCloudBSDF'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionSubstrateVolumetricFogCloudBSDF @ 147f2f1f0

void __thiscall
UMaterialExpressionSubstrateVolumetricFogCloudBSDF::
~UMaterialExpressionSubstrateVolumetricFogCloudBSDF
          (UMaterialExpressionSubstrateVolumetricFogCloudBSDF *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateBSDF__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 147f43390

UClass * __cdecl UMaterialExpressionSubstrateVolumetricFogCloudBSDF::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateVolumetricFogCloudBSDF.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateVolumetricFogCloudBSDF",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateVolumetricFogCloudBSDF.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateVolumetricFogCloudBSDF,0x158,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateVolumetricFogCloudBSDF>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateVolumetricFogCloudBSDF>,
               local_res8,UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateVolumetricFogCloudBSDF.
         InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSubstrateVolumetricFogCloudBSDF @ 147f52c30

void __cdecl
UMaterialExpressionSubstrateVolumetricFogCloudBSDF::
StaticRegisterNativesUMaterialExpressionSubstrateVolumetricFogCloudBSDF(void)

{
  return;
}

