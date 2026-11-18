// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147f0a5a0

UClass * __cdecl UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0,0x128,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0>
               ,local_res8,UMaterialExpressionSubstrateUtilityBase::StaticClass,UObject::StaticClass
              );
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0.
         InnerSingleton;
}

// UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0 @ 147f2b6c0

UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0 * __thiscall
UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0::
UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0
          (UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0 *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0__6B_;
  (this->BaseColor).OutputIndex = 0;
  (this->BaseColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->BaseColor).InputName.Number = 0;
  (this->BaseColor).MaskR = 0;
  (this->BaseColor).MaskG = 0;
  (this->BaseColor).MaskB = 0;
  (this->BaseColor).MaskA = 0;
  (this->BaseColor).Expression = (UMaterialExpression *)0x0;
  (this->Metallic).OutputIndex = 0;
  (this->Metallic).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Metallic).InputName.Number = 0;
  (this->Metallic).MaskR = 0;
  (this->Metallic).MaskG = 0;
  (this->Metallic).MaskB = 0;
  (this->Metallic).MaskA = 0;
  (this->Metallic).Expression = (UMaterialExpression *)0x0;
  (this->Specular).OutputIndex = 0;
  (this->Specular).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Specular).InputName.Number = 0;
  (this->Specular).MaskR = 0;
  (this->Specular).MaskG = 0;
  (this->Specular).MaskB = 0;
  (this->Specular).MaskA = 0;
  (this->Specular).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0 @ 147f2b760

UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0 * __thiscall
UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0::
UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0
          (UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0 *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0__6B_;
  (this->BaseColor).OutputIndex = 0;
  (this->BaseColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->BaseColor).InputName.Number = 0;
  (this->BaseColor).MaskR = 0;
  (this->BaseColor).MaskG = 0;
  (this->BaseColor).MaskB = 0;
  (this->BaseColor).MaskA = 0;
  (this->BaseColor).Expression = (UMaterialExpression *)0x0;
  (this->Metallic).OutputIndex = 0;
  (this->Metallic).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Metallic).InputName.Number = 0;
  (this->Metallic).MaskR = 0;
  (this->Metallic).MaskG = 0;
  (this->Metallic).MaskB = 0;
  (this->Metallic).MaskA = 0;
  (this->Metallic).Expression = (UMaterialExpression *)0x0;
  (this->Specular).OutputIndex = 0;
  (this->Specular).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Specular).InputName.Number = 0;
  (this->Specular).MaskR = 0;
  (this->Specular).MaskG = 0;
  (this->Specular).MaskB = 0;
  (this->Specular).MaskA = 0;
  (this->Specular).Expression = (UMaterialExpression *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Substrate,L"MaterialExpressionSubstrate",
                 L"Substrate Helpers",L"Substrate Helpers");
      atexit(`UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0::
             UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0 @ 147f2f050

void __thiscall
UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0::
~UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0
          (UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0 *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateUtilityBase__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 147f429d0

UClass * __cdecl UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0,0x128,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0>
               ,local_res8,UMaterialExpressionSubstrateUtilityBase::StaticClass,UObject::StaticClass
              );
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0.
         InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0 @ 147f52b60

void __cdecl
UMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0::
StaticRegisterNativesUMaterialExpressionSubstrateMetalnessToDiffuseAlbedoF0(void)

{
  return;
}

