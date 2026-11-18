// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 52

// Commit<UE::MovieScene::FComponentTransformHandler> @ 1465a7980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
::Commit<UE::MovieScene::FComponentTransformHandler>
          (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
           *this,FComponentTransformHandler *param_1)

{
  FPropertyDefinition *pFVar1;
  code *pcVar2;
  bool bVar3;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar4;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar5;
  undefined1 auStack_58 [32];
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_38;
  uchar local_30 [24];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  pFVar1 = this->Definition;
  local_18 = local_18 | 3;
  local_30[0] = param_1->field_0x8;
  local_30[1] = param_1->field_0x9;
  local_30[2] = param_1->field_0xa;
  local_30[3] = param_1->field_0xb;
  local_38 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)
             &___7FComponentTransformHandler_MovieScene_UE__6B_;
  if ((local_18 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_38;
  if ((local_18 & 2) == 0) {
    pTVar5 = local_38;
  }
  if ((local_18 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar4 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_38;
  if ((local_18 & 2) == 0) {
    pTVar4 = local_38;
  }
  if (pTVar5 != pTVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            (&pFVar1->Handler,
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_38);
  if ((local_18 & 1) != 0) {
    pTVar5 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_38;
    if ((local_18 & 2) == 0) {
      pTVar5 = local_38;
    }
    local_18 = local_18 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar5->Data).Pad)->Data).Pad)(pTVar5,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_38);
    }
  }
  FPropertyDefinition::SetupInitialValueProcessor(this->Definition);
  return;
}

// SetBlenderSystem<UMovieScenePiecewiseDoubleBlenderSystem> @ 14660ac90

TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double,double>
::SetBlenderSystem<UMovieScenePiecewiseDoubleBlenderSystem>
          (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double,double>
           *this)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
  this->Definition->BlenderSystemClass = pUVar1;
  return this;
}

// SetBlenderSystem<UMovieScenePiecewiseDoubleBlenderSystem> @ 14660acc0

TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double,double>
::SetBlenderSystem<UMovieScenePiecewiseDoubleBlenderSystem>
          (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double,double>
           *this)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
  this->Definition->BlenderSystemClass = pUVar1;
  return this;
}

// SetBlenderSystem<UMovieScenePiecewiseDoubleBlenderSystem> @ 14660acf0

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double>
::SetBlenderSystem<UMovieScenePiecewiseDoubleBlenderSystem>
          (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double>
           *this)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
  this->Definition->BlenderSystemClass = pUVar1;
  return this;
}

// SetBlenderSystem<UMovieScenePiecewiseDoubleBlenderSystem> @ 14660ad20

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double,double>
::SetBlenderSystem<UMovieScenePiecewiseDoubleBlenderSystem>
          (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double,double>
           *this)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
  this->Definition->BlenderSystemClass = pUVar1;
  return this;
}

// SetBlenderSystem<UMovieScenePiecewiseDoubleBlenderSystem> @ 14660ad50

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
::SetBlenderSystem<UMovieScenePiecewiseDoubleBlenderSystem>
          (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
           *this)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
  this->Definition->BlenderSystemClass = pUVar1;
  return this;
}

// SetBlenderSystem<UMovieScenePiecewiseDoubleBlenderSystem> @ 14660ad80

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
::SetBlenderSystem<UMovieScenePiecewiseDoubleBlenderSystem>
          (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
           *this)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
  this->Definition->BlenderSystemClass = pUVar1;
  return this;
}

// SetBlenderSystem<UMovieScenePiecewiseDoubleBlenderSystem> @ 14660adb0

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double,double>
::SetBlenderSystem<UMovieScenePiecewiseDoubleBlenderSystem>
          (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double,double>
           *this)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
  this->Definition->BlenderSystemClass = pUVar1;
  return this;
}

// AddComposite @ 1466347e0

TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_cfabbdd9 param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 146634980

TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_cfabbdd9 param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 146634b20

TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_cfabbdd9 param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 146634cc0

TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_cfabbdd9 param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 146634e60

TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_951a2570 param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 146635000

TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_951a2570 param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 1466351a0

TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_951a2570 param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 146635340

TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_951a2570 param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 1466354e0

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_951a2570 param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 146635680

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_951a2570 param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 146635820

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_951a2570 param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 1466359c0

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_951a2570 param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 146635b60

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_951a2570 param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 146635d00

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_95c0d0ba param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 146635ea0

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_95c0d0ba param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 146636040

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_95c0d0ba param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 1466361e0

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_95c0d0ba param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 146636380

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_95c0d0ba param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 146636520

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_95c0d0ba param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 1466366c0

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_95c0d0ba param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 146636860

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_95c0d0ba param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 146636a00

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_95c0d0ba param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 146636ba0

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_95c0d0ba param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 146636d40

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_95c0d0ba param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 146636ee0

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_95c0d0ba param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 146637080

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_95c0d0ba param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 146637220

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_95c0d0ba param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 1466373c0

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_95c0d0ba param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 146637560

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_95c0d0ba param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 146637700

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_95c0d0ba param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 1466378a0

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_95c0d0ba param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 146637a40

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_568bf5c2 param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 146637be0

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_568bf5c2 param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 146637d80

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_568bf5c2 param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// AddComposite @ 146637f20

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double>
::AddComposite(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double>
               *this,TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double,double>
                     *__return_storage_ptr__,TComponentTypeID<double> param_1,pdm_568bf5c2 param_2)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  FPropertyDefinition *pFVar4;
  FPropertyRegistry *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double,double>
  *pTVar10;
  FPropertyDefinition *pFVar11;
  undefined4 local_28;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_20;
  
  local_20.DataPtr = (FPropertyDefinition *)(this->Registry->Properties).AllocatorInstance.Data;
  iVar9 = (this->Registry->Properties).ArrayNum;
  if (iVar9 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar4 = this->Definition;
  local_20.ArrayNum = iVar9;
  pFVar11 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_20,0);
  if (pFVar4 != pFVar11) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Definition == &Registry->GetProperties().Last()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                       ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar5 = this->Registry;
  local_28 = CONCAT22(param_2._0_2_,param_1);
  pFVar6 = (pFVar5->CompositeDefinitions).AllocatorInstance.Data;
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar6 + (longlong)(pFVar5->CompositeDefinitions).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double,double>
                 *)(*pcVar7)();
      return pTVar10;
    }
  }
  iVar9 = (pFVar5->CompositeDefinitions).ArrayNum;
  piVar1 = &(pFVar5->CompositeDefinitions).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&(pFVar5->CompositeDefinitions).AllocatorInstance,piVar1);
  }
  (pFVar5->CompositeDefinitions).ArrayNum = iVar9 + 1;
  *(undefined4 *)((pFVar5->CompositeDefinitions).AllocatorInstance.Data + (longlong)iVar9 * 4) =
       local_28;
  puVar2 = &this->Definition->DoubleCompositeMask;
  *puVar2 = *puVar2 | 1 << ((byte)this->Definition->CompositeSize & 0x1f);
  puVar3 = &this->Definition->CompositeSize;
  *puVar3 = *puVar3 + 1;
  __return_storage_ptr__->Definition = this->Definition;
  __return_storage_ptr__->Registry = this->Registry;
  return __return_storage_ptr__;
}

// Commit @ 146650760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double,double>
::Commit(TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double,double>
         *this)

{
  FPropertyDefinition *pFVar1;
  code *pcVar2;
  bool bVar3;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar4;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar5;
  undefined1 auStack_78 [32];
  uchar local_58 [8];
  undefined **local_50;
  uchar local_48 [4];
  undefined4 local_44;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_40;
  uchar local_38 [24];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_44 = 0;
  FPreAnimatedStateExtension::RegisterStorageInternal();
  local_20 = local_20 | 3;
  pFVar1 = this->Definition;
  local_38[0] = local_58[0];
  local_38[1] = local_58[1];
  local_38[2] = local_58[2];
  local_38[3] = local_58[3];
  local_40 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)
             &
             ___7__TVariantPropertyComponentHandler_U__TDynamicVariantPropertyTraits_UFDoubleIntermediateVector_MovieScene_UE__U__TVector2_N_Math_3_U__TVector_N_53_U653_U__TVector4_N_53_U753__MovieScene_UE__NNNN_MovieScene_UE__6B_
  ;
  local_48[0] = local_58[0];
  local_48[1] = local_58[1];
  local_48[2] = local_58[2];
  local_48[3] = local_58[3];
  local_50 = &
             ___7__TVariantPropertyComponentHandler_U__TDynamicVariantPropertyTraits_UFDoubleIntermediateVector_MovieScene_UE__U__TVector2_N_Math_3_U__TVector_N_53_U653_U__TVector4_N_53_U753__MovieScene_UE__NNNN_MovieScene_UE__6B_
  ;
  if ((local_20 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40;
  if ((local_20 & 2) == 0) {
    pTVar5 = local_40;
  }
  if ((local_20 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar4 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40;
  if ((local_20 & 2) == 0) {
    pTVar4 = local_40;
  }
  if (pTVar5 != pTVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            (&pFVar1->Handler,
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40);
  if ((local_20 & 1) != 0) {
    pTVar5 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40;
    if ((local_20 & 2) == 0) {
      pTVar5 = local_40;
    }
    local_20 = local_20 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar5->Data).Pad)->Data).Pad)(pTVar5,0);
    if ((local_20 & 2) == 0) {
      FMemory::Free(local_40);
    }
  }
  FPropertyDefinition::SetupInitialValueProcessor(this->Definition);
  return;
}

// Commit @ 1466508d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double,double>
::Commit(TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double,double>
         *this)

{
  FPropertyDefinition *pFVar1;
  code *pcVar2;
  bool bVar3;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar4;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar5;
  undefined1 auStack_78 [32];
  uchar local_58 [8];
  undefined **local_50;
  uchar local_48 [4];
  undefined4 local_44;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_40;
  uchar local_38 [24];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_44 = 0;
  FPreAnimatedStateExtension::RegisterStorageInternal();
  local_20 = local_20 | 3;
  pFVar1 = this->Definition;
  local_38[0] = local_58[0];
  local_38[1] = local_58[1];
  local_38[2] = local_58[2];
  local_38[3] = local_58[3];
  local_40 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)
             &
             ___7__TVariantPropertyComponentHandler_U__TDynamicVariantPropertyTraits_UFFloatIntermediateVector_MovieScene_UE__U__TVector2_M_Math_3_U__TVector_M_53_U__TVector4_M_53__MovieScene_UE__NNNN_MovieScene_UE__6B_
  ;
  local_48[0] = local_58[0];
  local_48[1] = local_58[1];
  local_48[2] = local_58[2];
  local_48[3] = local_58[3];
  local_50 = &
             ___7__TVariantPropertyComponentHandler_U__TDynamicVariantPropertyTraits_UFFloatIntermediateVector_MovieScene_UE__U__TVector2_M_Math_3_U__TVector_M_53_U__TVector4_M_53__MovieScene_UE__NNNN_MovieScene_UE__6B_
  ;
  if ((local_20 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40;
  if ((local_20 & 2) == 0) {
    pTVar5 = local_40;
  }
  if ((local_20 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar4 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40;
  if ((local_20 & 2) == 0) {
    pTVar4 = local_40;
  }
  if (pTVar5 != pTVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            (&pFVar1->Handler,
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40);
  if ((local_20 & 1) != 0) {
    pTVar5 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40;
    if ((local_20 & 2) == 0) {
      pTVar5 = local_40;
    }
    local_20 = local_20 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar5->Data).Pad)->Data).Pad)(pTVar5,0);
    if ((local_20 & 2) == 0) {
      FMemory::Free(local_40);
    }
  }
  FPropertyDefinition::SetupInitialValueProcessor(this->Definition);
  return;
}

// Commit @ 146650a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double>
::Commit(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double>
         *this)

{
  FPropertyDefinition *pFVar1;
  code *pcVar2;
  bool bVar3;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar4;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar5;
  undefined1 auStack_78 [32];
  uchar local_58 [8];
  undefined **local_50;
  uchar local_48 [4];
  undefined4 local_44;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_40;
  uchar local_38 [24];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_44 = 0;
  FPreAnimatedStateExtension::RegisterStorageInternal();
  local_20 = local_20 | 3;
  pFVar1 = this->Definition;
  local_38[0] = local_58[0];
  local_38[1] = local_58[1];
  local_38[2] = local_58[2];
  local_38[3] = local_58[3];
  local_40 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)
             &
             ___7__TPropertyComponentHandler_U__TPropertyTraits_U__TVector2_M_Math_UE__UFFloatIntermediateVector_MovieScene_3__00_MovieScene_UE__NN_MovieScene_UE__6B_
  ;
  local_48[0] = local_58[0];
  local_48[1] = local_58[1];
  local_48[2] = local_58[2];
  local_48[3] = local_58[3];
  local_50 = &
             ___7__TPropertyComponentHandler_U__TPropertyTraits_U__TVector2_M_Math_UE__UFFloatIntermediateVector_MovieScene_3__00_MovieScene_UE__NN_MovieScene_UE__6B_
  ;
  if ((local_20 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40;
  if ((local_20 & 2) == 0) {
    pTVar5 = local_40;
  }
  if ((local_20 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar4 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40;
  if ((local_20 & 2) == 0) {
    pTVar4 = local_40;
  }
  if (pTVar5 != pTVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            (&pFVar1->Handler,
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40);
  if ((local_20 & 1) != 0) {
    pTVar5 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40;
    if ((local_20 & 2) == 0) {
      pTVar5 = local_40;
    }
    local_20 = local_20 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar5->Data).Pad)->Data).Pad)(pTVar5,0);
    if ((local_20 & 2) == 0) {
      FMemory::Free(local_40);
    }
  }
  FPropertyDefinition::SetupInitialValueProcessor(this->Definition);
  return;
}

// Commit @ 146650bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double,double>
::Commit(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double,double>
         *this)

{
  FPropertyDefinition *pFVar1;
  code *pcVar2;
  bool bVar3;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar4;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar5;
  undefined1 auStack_78 [32];
  uchar local_58 [8];
  undefined **local_50;
  uchar local_48 [4];
  undefined4 local_44;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_40;
  uchar local_38 [24];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_44 = 0;
  FPreAnimatedStateExtension::RegisterStorageInternal();
  local_20 = local_20 | 3;
  pFVar1 = this->Definition;
  local_38[0] = local_58[0];
  local_38[1] = local_58[1];
  local_38[2] = local_58[2];
  local_38[3] = local_58[3];
  local_40 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)
             &
             ___7__TPropertyComponentHandler_U__TPropertyTraits_U__TVector_M_Math_UE__UFFloatIntermediateVector_MovieScene_3__00_MovieScene_UE__NNN_MovieScene_UE__6B_
  ;
  local_48[0] = local_58[0];
  local_48[1] = local_58[1];
  local_48[2] = local_58[2];
  local_48[3] = local_58[3];
  local_50 = &
             ___7__TPropertyComponentHandler_U__TPropertyTraits_U__TVector_M_Math_UE__UFFloatIntermediateVector_MovieScene_3__00_MovieScene_UE__NNN_MovieScene_UE__6B_
  ;
  if ((local_20 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40;
  if ((local_20 & 2) == 0) {
    pTVar5 = local_40;
  }
  if ((local_20 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar4 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40;
  if ((local_20 & 2) == 0) {
    pTVar4 = local_40;
  }
  if (pTVar5 != pTVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            (&pFVar1->Handler,
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40);
  if ((local_20 & 1) != 0) {
    pTVar5 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40;
    if ((local_20 & 2) == 0) {
      pTVar5 = local_40;
    }
    local_20 = local_20 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar5->Data).Pad)->Data).Pad)(pTVar5,0);
    if ((local_20 & 2) == 0) {
      FMemory::Free(local_40);
    }
  }
  FPropertyDefinition::SetupInitialValueProcessor(this->Definition);
  return;
}

// Commit @ 146650d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
::Commit(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
         *this)

{
  FPropertyDefinition *pFVar1;
  code *pcVar2;
  bool bVar3;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar4;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar5;
  undefined1 auStack_78 [32];
  uchar local_58 [8];
  undefined **local_50;
  uchar local_48 [4];
  undefined4 local_44;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_40;
  uchar local_38 [24];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_44 = 0;
  FPreAnimatedStateExtension::RegisterStorageInternal();
  local_20 = local_20 | 3;
  pFVar1 = this->Definition;
  local_38[0] = local_58[0];
  local_38[1] = local_58[1];
  local_38[2] = local_58[2];
  local_38[3] = local_58[3];
  local_40 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)
             &
             ___7__TPropertyComponentHandler_U__TPropertyTraits_UFEulerTransform__UFIntermediate3DTransform_MovieScene_UE___00_MovieScene_UE__NNNNNNNNN_MovieScene_UE__6B_
  ;
  local_48[0] = local_58[0];
  local_48[1] = local_58[1];
  local_48[2] = local_58[2];
  local_48[3] = local_58[3];
  local_50 = &
             ___7__TPropertyComponentHandler_U__TPropertyTraits_UFEulerTransform__UFIntermediate3DTransform_MovieScene_UE___00_MovieScene_UE__NNNNNNNNN_MovieScene_UE__6B_
  ;
  if ((local_20 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40;
  if ((local_20 & 2) == 0) {
    pTVar5 = local_40;
  }
  if ((local_20 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar4 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40;
  if ((local_20 & 2) == 0) {
    pTVar4 = local_40;
  }
  if (pTVar5 != pTVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            (&pFVar1->Handler,
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40);
  if ((local_20 & 1) != 0) {
    pTVar5 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40;
    if ((local_20 & 2) == 0) {
      pTVar5 = local_40;
    }
    local_20 = local_20 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar5->Data).Pad)->Data).Pad)(pTVar5,0);
    if ((local_20 & 2) == 0) {
      FMemory::Free(local_40);
    }
  }
  FPropertyDefinition::SetupInitialValueProcessor(this->Definition);
  return;
}

// Commit @ 146650e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double,double>
::Commit(TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double,double>
         *this)

{
  FPropertyDefinition *pFVar1;
  code *pcVar2;
  bool bVar3;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar4;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar5;
  undefined1 auStack_78 [32];
  uchar local_58 [8];
  undefined **local_50;
  uchar local_48 [4];
  undefined4 local_44;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_40;
  uchar local_38 [24];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_44 = 0;
  FPreAnimatedStateExtension::RegisterStorageInternal();
  local_20 = local_20 | 3;
  pFVar1 = this->Definition;
  local_38[0] = local_58[0];
  local_38[1] = local_58[1];
  local_38[2] = local_58[2];
  local_38[3] = local_58[3];
  local_40 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)
             &
             ___7__TPropertyComponentHandler_U__TPropertyTraits_UFLinearColor__UFIntermediateColor_MovieScene_UE___00_MovieScene_UE__NNNN_MovieScene_UE__6B_
  ;
  local_48[0] = local_58[0];
  local_48[1] = local_58[1];
  local_48[2] = local_58[2];
  local_48[3] = local_58[3];
  local_50 = &
             ___7__TPropertyComponentHandler_U__TPropertyTraits_UFLinearColor__UFIntermediateColor_MovieScene_UE___00_MovieScene_UE__NNNN_MovieScene_UE__6B_
  ;
  if ((local_20 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40;
  if ((local_20 & 2) == 0) {
    pTVar5 = local_40;
  }
  if ((local_20 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar4 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40;
  if ((local_20 & 2) == 0) {
    pTVar4 = local_40;
  }
  if (pTVar5 != pTVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            (&pFVar1->Handler,
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40);
  if ((local_20 & 1) != 0) {
    pTVar5 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_40;
    if ((local_20 & 2) == 0) {
      pTVar5 = local_40;
    }
    local_20 = local_20 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar5->Data).Pad)->Data).Pad)(pTVar5,0);
    if ((local_20 & 2) == 0) {
      FMemory::Free(local_40);
    }
  }
  FPropertyDefinition::SetupInitialValueProcessor(this->Definition);
  return;
}

// SetDefaultTrackType @ 1466f8a80

TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double,double>
::SetDefaultTrackType
          (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double,double>
           *this,TSubclassOf<UMovieSceneTrack> param_1)

{
  FPropertyDefinition *pFVar1;
  
  pFVar1 = this->Definition;
  if ((GC::GIsIncrementalReachabilityPending) &&
     (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
    GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
  }
  (pFVar1->DefaultTrackType).Class.field0_0x0 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  return this;
}

// SetDefaultTrackType @ 1466f8ad0

TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double,double>
::SetDefaultTrackType
          (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double,double>
           *this,TSubclassOf<UMovieSceneTrack> param_1)

{
  FPropertyDefinition *pFVar1;
  
  pFVar1 = this->Definition;
  if ((GC::GIsIncrementalReachabilityPending) &&
     (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
    GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
  }
  (pFVar1->DefaultTrackType).Class.field0_0x0 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  return this;
}

// SetDefaultTrackType @ 1466f8b20

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
* __thiscall
UE::MovieScene::
TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
::SetDefaultTrackType
          (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
           *this,TSubclassOf<UMovieSceneTrack> param_1)

{
  FPropertyDefinition *pFVar1;
  
  pFVar1 = this->Definition;
  if ((GC::GIsIncrementalReachabilityPending) &&
     (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
    GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
  }
  (pFVar1->DefaultTrackType).Class.field0_0x0 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  return this;
}

