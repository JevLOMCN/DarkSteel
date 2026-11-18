// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 11

// StaticClass @ 145fade40

UClass * __cdecl UMaterialExpressionLandscapeLayerBlend::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerBlend.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"MaterialExpressionLandscapeLayerBlend",
               &Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerBlend.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLandscapeLayerBlend,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLandscapeLayerBlend>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeLayerBlend>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerBlend.InnerSingleton;
}

// UMaterialExpressionLandscapeLayerBlend @ 145fb5a30

UMaterialExpressionLandscapeLayerBlend * __thiscall
UMaterialExpressionLandscapeLayerBlend::UMaterialExpressionLandscapeLayerBlend
          (UMaterialExpressionLandscapeLayerBlend *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerBlend__6B_;
  (this->Layers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Layers).ArrayNum = 0;
  (this->Layers).ArrayMax = 0;
  return this;
}

// UMaterialExpressionLandscapeLayerBlend @ 145fb5a70

UMaterialExpressionLandscapeLayerBlend * __thiscall
UMaterialExpressionLandscapeLayerBlend::UMaterialExpressionLandscapeLayerBlend
          (UMaterialExpressionLandscapeLayerBlend *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerBlend__6B_;
  (this->Layers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Layers).ArrayNum = 0;
  (this->Layers).ArrayMax = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Landscape,L"Landscape",L"Landscape",L"Landscape");
      atexit(`UMaterialExpressionLandscapeLayerBlend::UMaterialExpressionLandscapeLayerBlend'::__l2
             ::_dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionLandscapeLayerBlend @ 145fb6b10

void __thiscall
UMaterialExpressionLandscapeLayerBlend::~UMaterialExpressionLandscapeLayerBlend
          (UMaterialExpressionLandscapeLayerBlend *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeLayerBlend__6B_;
  pFVar1 = (this->Layers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// CanReferenceTexture @ 145fba830

bool __thiscall
UMaterialExpressionLandscapeLayerBlend::CanReferenceTexture
          (UMaterialExpressionLandscapeLayerBlend *this)

{
  return true;
}

// GetPrivateStaticClass @ 145fc3750

UClass * __cdecl UMaterialExpressionLandscapeLayerBlend::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerBlend.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"MaterialExpressionLandscapeLayerBlend",
               &Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerBlend.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionLandscapeLayerBlend,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLandscapeLayerBlend>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeLayerBlend>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerBlend.InnerSingleton;
}

// GetReferencedTexture @ 145fc3bd0

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
UMaterialExpressionLandscapeLayerBlend::GetReferencedTexture
          (UMaterialExpressionLandscapeLayerBlend *this)

{
  return (UObject *)(GEngine->WeightMapPlaceholderTexture).field0_0x0.DebugPtr;
}

// GetReferencedTextures @ 145fc3c50

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
UMaterialExpressionLandscapeLayerBlend::GetReferencedTextures
          (UMaterialExpressionLandscapeLayerBlend *this,
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

// Serialize @ 145fc8100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMaterialExpressionLandscapeLayerBlend::Serialize
          (UMaterialExpressionLandscapeLayerBlend *this,FArchive *param_1)

{
  int iVar1;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar2;
  FArchive *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8 [8];
  FSlotBase local_1c0 [2];
  FStructuredArchiveFromArchive local_1b0;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1b0,param_1);
  FVar2 = FStructuredArchiveFromArchive::GetSlot(this_00);
  local_1c0[0].StructuredArchive = *(FStructuredArchive **)FVar2;
  UMaterialExpression::Serialize
            ((UMaterialExpression *)this,(FStructuredArchiveRecord)local_1c0[0].StructuredArchive);
  pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_1c0);
  if (((pFVar3->field_0x28 & 1) != 0) && (*(int *)&pFVar3->field_0x40 < 0x17c)) {
    pFVar4 = (this->Layers).AllocatorInstance.Data;
    iVar1 = (this->Layers).ArrayNum;
    pFVar5 = pFVar4 + (longlong)iVar1 * 0x88;
    while( true ) {
      if ((this->Layers).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FLayerBlendInput,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1c8);
      }
      if (pFVar4 == pFVar5) break;
      if (pFVar4[8] == (FScriptContainerElement)0x1) {
        pFVar4[8] = (FScriptContainerElement)0x0;
      }
      pFVar4 = pFVar4 + 0x88;
    }
  }
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1b0);
  return;
}

// Serialize @ 145fc8200

void __thiscall
UMaterialExpressionLandscapeLayerBlend::Serialize
          (UMaterialExpressionLandscapeLayerBlend *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchive *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FSlotBase local_res10;
  undefined1 local_res18 [16];
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  UMaterialExpression::Serialize((UMaterialExpression *)this,param_1);
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  if (((pFVar2->field_0x28 & 1) != 0) && (*(int *)&pFVar2->field_0x40 < 0x17c)) {
    pFVar3 = (this->Layers).AllocatorInstance.Data;
    iVar1 = (this->Layers).ArrayNum;
    pFVar4 = pFVar3 + (longlong)iVar1 * 0x88;
    while( true ) {
      if ((this->Layers).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FLayerBlendInput,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar3 == pFVar4) break;
      if (pFVar3[8] == (FScriptContainerElement)0x1) {
        pFVar3[8] = (FScriptContainerElement)0x0;
      }
      pFVar3 = pFVar3 + 0x88;
    }
  }
  return;
}

// StaticRegisterNativesUMaterialExpressionLandscapeLayerBlend @ 145fc8790

void __cdecl
UMaterialExpressionLandscapeLayerBlend::StaticRegisterNativesUMaterialExpressionLandscapeLayerBlend
          (void)

{
  return;
}

