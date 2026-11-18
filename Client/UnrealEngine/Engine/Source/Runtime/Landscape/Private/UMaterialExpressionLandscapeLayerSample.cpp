// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 9

// StaticClass @ 145face60

UClass * __cdecl UMaterialExpressionLandscapeLayerSample::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSample.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"MaterialExpressionLandscapeLayerSample",
               &Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSample.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLandscapeLayerSample,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLandscapeLayerSample>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeLayerSample>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSample.InnerSingleton;
}

// UMaterialExpressionLandscapeLayerSample @ 145fb5c10

UMaterialExpressionLandscapeLayerSample * __thiscall
UMaterialExpressionLandscapeLayerSample::UMaterialExpressionLandscapeLayerSample
          (UMaterialExpressionLandscapeLayerSample *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerSample__6B_;
  (this->ParameterName).ComparisonIndex = 0;
  (this->ParameterName).Number = 0;
  return this;
}

// UMaterialExpressionLandscapeLayerSample @ 145fb5c40

UMaterialExpressionLandscapeLayerSample * __thiscall
UMaterialExpressionLandscapeLayerSample::UMaterialExpressionLandscapeLayerSample
          (UMaterialExpressionLandscapeLayerSample *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerSample__6B_;
  (this->ParameterName).ComparisonIndex = 0;
  (this->ParameterName).Number = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Landscape,L"Landscape",L"Landscape",L"Landscape");
      atexit(`UMaterialExpressionLandscapeLayerSample::UMaterialExpressionLandscapeLayerSample'::
             __l2::_dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionLandscapeLayerSample @ 145fb6b70

void __thiscall
UMaterialExpressionLandscapeLayerSample::~UMaterialExpressionLandscapeLayerSample
          (UMaterialExpressionLandscapeLayerSample *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerSample__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// CanReferenceTexture @ 145fba840

bool __thiscall
UMaterialExpressionLandscapeLayerSample::CanReferenceTexture
          (UMaterialExpressionLandscapeLayerSample *this)

{
  return true;
}

// GetPrivateStaticClass @ 145fc38d0

UClass * __cdecl UMaterialExpressionLandscapeLayerSample::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSample.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"MaterialExpressionLandscapeLayerSample",
               &Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSample.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLandscapeLayerSample,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLandscapeLayerSample>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeLayerSample>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSample.InnerSingleton;
}

// GetReferencedTexture @ 145fc3bf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall
UMaterialExpressionLandscapeLayerSample::GetReferencedTexture
          (UMaterialExpressionLandscapeLayerSample *this)

{
  return (UObject *)(GEngine->WeightMapPlaceholderTexture).field0_0x0.DebugPtr;
}

// GetReferencedTextures @ 145fc3ce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<UObject_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> * __thiscall
UMaterialExpressionLandscapeLayerSample::GetReferencedTextures
          (UMaterialExpressionLandscapeLayerSample *this,
          TArray<UObject_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  TObjectPtr<UTexture>_u_0 TVar1;
  TObjectPtr<UTexture>_u_0 TVar2;
  ForElementType<UObject_*> FVar3;
  ForElementType<UObject_*> FVar4;
  
  TVar1 = (GEngine->WeightMapPlaceholderTexture).field0_0x0;
  TVar2 = (GEngine->WeightMapArrayPlaceholderTexture).field0_0x0;
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<UObject_*>)0x0;
  __return_storage_ptr__->ArrayNum = 2;
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
            (8,8,2,0,&__return_storage_ptr__->AllocatorInstance,2,&__return_storage_ptr__->ArrayMax)
  ;
  FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
  FVar4 = (ForElementType<UObject_*>)__return_storage_ptr__;
  if (FVar3 != (ForElementType<UObject_*>)0x0) {
    FVar4 = FVar3;
  }
  *(TObjectPtr<UTexture>_u_0 *)FVar4 = TVar1;
  *(TObjectPtr<UTexture>_u_0 *)((longlong)FVar4 + 8) = TVar2;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUMaterialExpressionLandscapeLayerSample @ 145fc87b0

void __cdecl
UMaterialExpressionLandscapeLayerSample::
StaticRegisterNativesUMaterialExpressionLandscapeLayerSample(void)

{
  return;
}

