// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 12

// StaticClass @ 145facf60

UClass * __cdecl UMaterialExpressionLandscapeLayerSwitch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSwitch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"MaterialExpressionLandscapeLayerSwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSwitch.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLandscapeLayerSwitch,0x110,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLandscapeLayerSwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeLayerSwitch>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSwitch.InnerSingleton;
}

// UMaterialExpressionLandscapeLayerSwitch @ 145fb5cf0

UMaterialExpressionLandscapeLayerSwitch * __thiscall
UMaterialExpressionLandscapeLayerSwitch::UMaterialExpressionLandscapeLayerSwitch
          (UMaterialExpressionLandscapeLayerSwitch *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerSwitch__6B_;
  (this->LayerUsed).OutputIndex = 0;
  (this->LayerUsed).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->LayerUsed).InputName.Number = 0;
  (this->LayerUsed).MaskR = 0;
  (this->LayerUsed).MaskG = 0;
  (this->LayerUsed).MaskB = 0;
  (this->LayerUsed).MaskA = 0;
  (this->LayerUsed).Expression = (UMaterialExpression *)0x0;
  (this->LayerNotUsed).OutputIndex = 0;
  (this->LayerNotUsed).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->LayerNotUsed).InputName.Number = 0;
  (this->LayerNotUsed).MaskR = 0;
  (this->LayerNotUsed).MaskG = 0;
  (this->LayerNotUsed).MaskB = 0;
  (this->LayerNotUsed).MaskA = 0;
  (this->LayerNotUsed).Expression = (UMaterialExpression *)0x0;
  (this->ParameterName).ComparisonIndex = 0;
  (this->ParameterName).Number = 0;
  return this;
}

// UMaterialExpressionLandscapeLayerSwitch @ 145fb5d70

UMaterialExpressionLandscapeLayerSwitch * __thiscall
UMaterialExpressionLandscapeLayerSwitch::UMaterialExpressionLandscapeLayerSwitch
          (UMaterialExpressionLandscapeLayerSwitch *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerSwitch__6B_;
  (this->LayerUsed).OutputIndex = 0;
  (this->LayerUsed).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->LayerUsed).InputName.Number = 0;
  (this->LayerUsed).MaskR = 0;
  (this->LayerUsed).MaskG = 0;
  (this->LayerUsed).MaskB = 0;
  (this->LayerUsed).MaskA = 0;
  (this->LayerUsed).Expression = (UMaterialExpression *)0x0;
  (this->LayerNotUsed).OutputIndex = 0;
  (this->LayerNotUsed).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->LayerNotUsed).InputName.Number = 0;
  (this->LayerNotUsed).MaskR = 0;
  (this->LayerNotUsed).MaskG = 0;
  (this->LayerNotUsed).MaskB = 0;
  (this->LayerNotUsed).MaskA = 0;
  (this->LayerNotUsed).Expression = (UMaterialExpression *)0x0;
  (this->ParameterName).ComparisonIndex = 0;
  (this->ParameterName).Number = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Landscape,L"Landscape",L"Landscape",L"Landscape");
      atexit(`UMaterialExpressionLandscapeLayerSwitch::UMaterialExpressionLandscapeLayerSwitch'::
             __l2::_dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      this->PreviewUsed = 1;
      return this;
    }
  }
  this->PreviewUsed = 1;
  return this;
}

// ~UMaterialExpressionLandscapeLayerSwitch @ 145fb6b90

void __thiscall
UMaterialExpressionLandscapeLayerSwitch::~UMaterialExpressionLandscapeLayerSwitch
          (UMaterialExpressionLandscapeLayerSwitch *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerSwitch__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// CanReferenceTexture @ 145fba850

bool __thiscall
UMaterialExpressionLandscapeLayerSwitch::CanReferenceTexture
          (UMaterialExpressionLandscapeLayerSwitch *this)

{
  return true;
}

// GetPrivateStaticClass @ 145fc3990

UClass * __cdecl UMaterialExpressionLandscapeLayerSwitch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSwitch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"MaterialExpressionLandscapeLayerSwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSwitch.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLandscapeLayerSwitch,0x110,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLandscapeLayerSwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeLayerSwitch>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSwitch.InnerSingleton;
}

// GetReferencedTexture @ 145fc3c10

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
UMaterialExpressionLandscapeLayerSwitch::GetReferencedTexture
          (UMaterialExpressionLandscapeLayerSwitch *this)

{
  return (UObject *)(GEngine->WeightMapPlaceholderTexture).field0_0x0.DebugPtr;
}

// GetReferencedTextures @ 145fc3d70

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
UMaterialExpressionLandscapeLayerSwitch::GetReferencedTextures
          (UMaterialExpressionLandscapeLayerSwitch *this,
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

// PostLoad @ 145fc6260

void __thiscall
UMaterialExpressionLandscapeLayerSwitch::PostLoad(UMaterialExpressionLandscapeLayerSwitch *this)

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

// Serialize @ 145fc82a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMaterialExpressionLandscapeLayerSwitch::Serialize
          (UMaterialExpressionLandscapeLayerSwitch *this,FArchive *param_1)

{
  UMaterialExpression *pUVar1;
  undefined8 uVar2;
  int iVar3;
  FNameEntryId FVar4;
  int iVar5;
  int iVar6;
  FNameEntryId FVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar12;
  FArchive *pFVar13;
  undefined1 auStack_1d8 [32];
  FSlotBase local_1b8 [2];
  FStructuredArchiveFromArchive local_1a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a8,param_1);
  FVar12 = FStructuredArchiveFromArchive::GetSlot(this_00);
  local_1b8[0].StructuredArchive = *(FStructuredArchive **)FVar12;
  UMaterialExpression::Serialize
            ((UMaterialExpression *)this,(FStructuredArchiveRecord)local_1b8[0].StructuredArchive);
  pFVar13 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_1b8);
  if (*(int *)&pFVar13->field_0x40 < 0xf5) {
    iVar3 = (this->LayerNotUsed).OutputIndex;
    FVar4.Value = (this->LayerNotUsed).InputName.ComparisonIndex.Value;
    pUVar1 = (this->LayerUsed).Expression;
    iVar6 = (this->LayerUsed).OutputIndex;
    FVar7.Value = (this->LayerUsed).InputName.ComparisonIndex.Value;
    uVar2 = *(undefined8 *)&(this->LayerUsed).InputName.Number;
    iVar8 = (this->LayerUsed).MaskR;
    iVar9 = (this->LayerUsed).MaskG;
    iVar10 = (this->LayerUsed).MaskB;
    iVar11 = (this->LayerUsed).MaskA;
    (this->LayerUsed).Expression = (this->LayerNotUsed).Expression;
    (this->LayerUsed).OutputIndex = iVar3;
    (this->LayerUsed).InputName.ComparisonIndex = (FNameEntryId)FVar4.Value;
    iVar3 = (this->LayerNotUsed).MaskR;
    iVar5 = (this->LayerNotUsed).MaskG;
    *(undefined8 *)&(this->LayerUsed).InputName.Number =
         *(undefined8 *)&(this->LayerNotUsed).InputName.Number;
    (this->LayerUsed).MaskR = iVar3;
    (this->LayerUsed).MaskG = iVar5;
    iVar3 = (this->LayerNotUsed).MaskA;
    (this->LayerUsed).MaskB = (this->LayerNotUsed).MaskB;
    (this->LayerUsed).MaskA = iVar3;
    (this->LayerNotUsed).Expression = pUVar1;
    (this->LayerNotUsed).OutputIndex = iVar6;
    (this->LayerNotUsed).InputName.ComparisonIndex = (FNameEntryId)FVar7.Value;
    *(undefined8 *)&(this->LayerNotUsed).InputName.Number = uVar2;
    (this->LayerNotUsed).MaskR = iVar8;
    (this->LayerNotUsed).MaskG = iVar9;
    (this->LayerNotUsed).MaskB = iVar10;
    (this->LayerNotUsed).MaskA = iVar11;
  }
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a8);
  return;
}

// Serialize @ 145fc8380

void __thiscall
UMaterialExpressionLandscapeLayerSwitch::Serialize
          (UMaterialExpressionLandscapeLayerSwitch *this,FStructuredArchiveRecord param_1)

{
  UMaterialExpression *pUVar1;
  undefined8 uVar2;
  int iVar3;
  FNameEntryId FVar4;
  int iVar5;
  int iVar6;
  FNameEntryId FVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FArchive *pFVar12;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  UMaterialExpression::Serialize((UMaterialExpression *)this,param_1);
  pFVar12 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  if (*(int *)&pFVar12->field_0x40 < 0xf5) {
    iVar3 = (this->LayerNotUsed).OutputIndex;
    FVar4.Value = (this->LayerNotUsed).InputName.ComparisonIndex.Value;
    pUVar1 = (this->LayerUsed).Expression;
    iVar6 = (this->LayerUsed).OutputIndex;
    FVar7.Value = (this->LayerUsed).InputName.ComparisonIndex.Value;
    uVar2 = *(undefined8 *)&(this->LayerUsed).InputName.Number;
    iVar8 = (this->LayerUsed).MaskR;
    iVar9 = (this->LayerUsed).MaskG;
    iVar10 = (this->LayerUsed).MaskB;
    iVar11 = (this->LayerUsed).MaskA;
    (this->LayerUsed).Expression = (this->LayerNotUsed).Expression;
    (this->LayerUsed).OutputIndex = iVar3;
    (this->LayerUsed).InputName.ComparisonIndex = (FNameEntryId)FVar4.Value;
    iVar3 = (this->LayerNotUsed).MaskR;
    iVar5 = (this->LayerNotUsed).MaskG;
    *(undefined8 *)&(this->LayerUsed).InputName.Number =
         *(undefined8 *)&(this->LayerNotUsed).InputName.Number;
    (this->LayerUsed).MaskR = iVar3;
    (this->LayerUsed).MaskG = iVar5;
    iVar3 = (this->LayerNotUsed).MaskA;
    (this->LayerUsed).MaskB = (this->LayerNotUsed).MaskB;
    (this->LayerUsed).MaskA = iVar3;
    (this->LayerNotUsed).Expression = pUVar1;
    (this->LayerNotUsed).OutputIndex = iVar6;
    (this->LayerNotUsed).InputName.ComparisonIndex = (FNameEntryId)FVar7.Value;
    *(undefined8 *)&(this->LayerNotUsed).InputName.Number = uVar2;
    (this->LayerNotUsed).MaskR = iVar8;
    (this->LayerNotUsed).MaskG = iVar9;
    (this->LayerNotUsed).MaskB = iVar10;
    (this->LayerNotUsed).MaskA = iVar11;
  }
  return;
}

// StaticRegisterNativesUMaterialExpressionLandscapeLayerSwitch @ 145fc87c0

void __cdecl
UMaterialExpressionLandscapeLayerSwitch::
StaticRegisterNativesUMaterialExpressionLandscapeLayerSwitch(void)

{
  return;
}

