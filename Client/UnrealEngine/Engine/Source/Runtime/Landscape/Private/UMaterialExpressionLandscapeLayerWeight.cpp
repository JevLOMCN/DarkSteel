// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 10

// StaticClass @ 145fad070

UClass * __cdecl UMaterialExpressionLandscapeLayerWeight::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerWeight.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"MaterialExpressionLandscapeLayerWeight",
               &Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerWeight.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLandscapeLayerWeight,0x128,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLandscapeLayerWeight>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeLayerWeight>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerWeight.InnerSingleton;
}

// UMaterialExpressionLandscapeLayerWeight @ 145fb5e70

UMaterialExpressionLandscapeLayerWeight * __thiscall
UMaterialExpressionLandscapeLayerWeight::UMaterialExpressionLandscapeLayerWeight
          (UMaterialExpressionLandscapeLayerWeight *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerWeight__6B_;
  (this->Base).OutputIndex = 0;
  (this->Base).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Base).InputName.Number = 0;
  (this->Base).MaskR = 0;
  (this->Base).MaskG = 0;
  (this->Base).MaskB = 0;
  (this->Base).MaskA = 0;
  (this->Base).Expression = (UMaterialExpression *)0x0;
  (this->Layer).OutputIndex = 0;
  (this->Layer).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Layer).InputName.Number = 0;
  (this->Layer).MaskR = 0;
  (this->Layer).MaskG = 0;
  (this->Layer).MaskB = 0;
  (this->Layer).MaskA = 0;
  (this->Layer).Expression = (UMaterialExpression *)0x0;
  (this->ParameterName).ComparisonIndex = 0;
  (this->ParameterName).Number = 0;
  return this;
}

// UMaterialExpressionLandscapeLayerWeight @ 145fb5ef0

UMaterialExpressionLandscapeLayerWeight * __thiscall
UMaterialExpressionLandscapeLayerWeight::UMaterialExpressionLandscapeLayerWeight
          (UMaterialExpressionLandscapeLayerWeight *this,FObjectInitializer *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar3 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerWeight__6B_;
  pvVar2 = ThreadLocalStoragePointer;
  (this->Base).OutputIndex = 0;
  (this->Base).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Base).InputName.Number = 0;
  (this->Base).MaskR = 0;
  (this->Base).MaskG = 0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  (this->Base).MaskB = 0;
  (this->Base).MaskA = 0;
  (this->Base).Expression = (UMaterialExpression *)0x0;
  (this->Layer).OutputIndex = 0;
  (this->Layer).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Layer).InputName.Number = 0;
  (this->Layer).MaskR = 0;
  (this->Layer).MaskG = 0;
  (this->Layer).MaskB = 0;
  (this->Layer).MaskA = 0;
  (this->Layer).Expression = (UMaterialExpression *)0x0;
  (this->ParameterName).ComparisonIndex = 0;
  (this->ParameterName).Number = 0;
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Landscape,L"Landscape",L"Landscape",L"Landscape");
      atexit(`UMaterialExpressionLandscapeLayerWeight::UMaterialExpressionLandscapeLayerWeight'::
             __l2::_dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  this->PreviewWeight = 0.0;
  (this->ConstBase).field0_0x0._s_0.X = 0.0;
  (this->ConstBase).field0_0x0._s_0.Y = 0.0;
  (this->ConstBase).field0_0x0._s_0.Z = 0.0;
  return this;
}

// ~UMaterialExpressionLandscapeLayerWeight @ 145fb6bb0

void __thiscall
UMaterialExpressionLandscapeLayerWeight::~UMaterialExpressionLandscapeLayerWeight
          (UMaterialExpressionLandscapeLayerWeight *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerWeight__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// CanReferenceTexture @ 145fba860

bool __thiscall
UMaterialExpressionLandscapeLayerWeight::CanReferenceTexture
          (UMaterialExpressionLandscapeLayerWeight *this)

{
  return true;
}

// GetPrivateStaticClass @ 145fc3a50

UClass * __cdecl UMaterialExpressionLandscapeLayerWeight::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerWeight.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"MaterialExpressionLandscapeLayerWeight",
               &Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerWeight.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLandscapeLayerWeight,0x128,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLandscapeLayerWeight>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeLayerWeight>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerWeight.InnerSingleton;
}

// GetReferencedTexture @ 145fc3c30

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
UMaterialExpressionLandscapeLayerWeight::GetReferencedTexture
          (UMaterialExpressionLandscapeLayerWeight *this)

{
  return (UObject *)(GEngine->WeightMapPlaceholderTexture).field0_0x0.DebugPtr;
}

// GetReferencedTextures @ 145fc3e00

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
UMaterialExpressionLandscapeLayerWeight::GetReferencedTextures
          (UMaterialExpressionLandscapeLayerWeight *this,
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

// PostLoad @ 145fc62b0

void __thiscall
UMaterialExpressionLandscapeLayerWeight::PostLoad(UMaterialExpressionLandscapeLayerWeight *this)

{
  FPackageFileVersion FVar1;
  
  UMaterialExpression::PostLoad((UMaterialExpression *)this);
  FVar1 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if (*(int *)FVar1 < 0x108) {
    UMaterialExpression::UpdateParameterGuid((UMaterialExpression *)this,true,true);
    return;
  }
  return;
}

// StaticRegisterNativesUMaterialExpressionLandscapeLayerWeight @ 145fc87d0

void __cdecl
UMaterialExpressionLandscapeLayerWeight::
StaticRegisterNativesUMaterialExpressionLandscapeLayerWeight(void)

{
  return;
}

