// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 4

// FMovieSceneUMGComponentTypes @ 1468fe240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

FMovieSceneUMGComponentTypes * __thiscall
UE::MovieScene::FMovieSceneUMGComponentTypes::FMovieSceneUMGComponentTypes
          (FMovieSceneUMGComponentTypes *this)

{
  TPropertyComponents<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
  *pTVar1;
  TArray<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  TArray<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  TArray<UE::MovieScene::FPropertyCompositeDefinition,TSizedDefaultAllocator<32>_> *pTVar4;
  int *piVar5;
  undefined8 *puVar6;
  TComponentTypeID<double> TVar7;
  TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
  TVar8;
  TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
  TVar9;
  FName FVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  bool bVar13;
  FComponentTypeID FVar14;
  TComponentTypeID<UE::MovieScene::FIntermediateMargin> TVar15;
  TComponentTypeID<UE::MovieScene::FIntermediateWidgetTransform> TVar16;
  TComponentTypeID<UE::MovieScene::FWidgetMaterialPath> TVar17;
  TComponentTypeID<FWidgetMaterialHandle> TVar18;
  int iVar19;
  FBuiltInComponentTypes *this_00;
  FComponentRegistry *this_01;
  FString *pFVar20;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  undefined6 extraout_var_01;
  undefined6 extraout_var_02;
  undefined6 extraout_var_03;
  undefined6 extraout_var_04;
  FMovieSceneUMGComponentTypes *pFVar21;
  undefined **ppuVar22;
  FMovieSceneTracksComponentTypes *pFVar23;
  FName *pFVar24;
  FPropertyDefinition *pFVar25;
  UClass *pUVar26;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar27;
  uint uVar28;
  undefined **ppuVar29;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar30;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>_>
  FVar31;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
  FVar32;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>_>
  FVar33;
  TArray<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar34;
  FPropertyDefinition *pFVar35;
  ForAnyElementType FVar36;
  longlong lVar37;
  undefined1 auStack_358 [32];
  UClass **local_338;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
  local_330;
  longlong local_328;
  longlong local_320;
  undefined8 local_318;
  undefined1 local_308 [6];
  undefined2 uStack_302;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined1 local_2f4 [6];
  undefined2 uStack_2ee;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  FMovieSceneUMGComponentTypes *local_2d8;
  wchar_t local_2d0;
  wchar_t local_2ce;
  wchar_t local_2cc;
  wchar_t local_2ca;
  wchar_t local_2c8;
  wchar_t local_2c6;
  uchar local_2c4 [4];
  uchar local_2c0 [8];
  IPropertyTraits *local_2b8;
  ICustomPropertyRegistration *local_2b0;
  FString local_2a8;
  FString local_298;
  undefined8 local_288;
  undefined1 local_280;
  undefined8 local_278;
  undefined1 local_270;
  undefined8 local_268;
  undefined1 local_260;
  undefined8 local_258;
  undefined1 local_250;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_248;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_238;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_228;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_218;
  undefined **local_208;
  uchar local_200 [4];
  undefined4 local_1fc;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_1f8;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_1e8;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_1d8;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_1c8;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_1b8;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_1a8;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_198;
  undefined **local_188;
  uchar local_180 [4];
  undefined4 local_17c;
  FName local_178;
  FName local_170;
  FName local_168;
  FString local_160;
  FString local_150;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_140;
  uchar local_138 [24];
  byte local_120;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_118;
  uchar local_110 [24];
  byte local_f8;
  UClass *local_f0;
  FName FStack_e8;
  undefined2 local_e0;
  undefined6 uStack_de;
  code *pcStack_d8;
  code *local_d0;
  UClass *local_c8;
  FName FStack_c0;
  undefined2 local_b8;
  undefined6 uStack_b6;
  code *pcStack_b0;
  code *local_a8;
  UClass *local_a0;
  FName FStack_98;
  undefined2 local_90;
  undefined6 uStack_8e;
  code *pcStack_88;
  code *local_80;
  undefined1 local_78 [10];
  TComponentTypeID<FWidgetMaterialHandle> local_6e;
  byte local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_358;
  (this->Margin).PropertyTag = 0xffff;
  (this->Margin).InitialValue = (TComponentTypeID<UE::MovieScene::FIntermediateMargin>)0xffff;
  pTVar1 = &this->WidgetTransform;
  (this->Margin).CompositeID =
       (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
        )0xffffffff;
  pTVar2 = &(this->CustomMarginAccessors).CustomAccessors;
  this->WidgetMaterialPath = (TComponentTypeID<UE::MovieScene::FWidgetMaterialPath>)0xffff;
  this->WidgetMaterialHandle = (TComponentTypeID<FWidgetMaterialHandle>)0xffff;
  local_2b8 = (IPropertyTraits *)&(this->WidgetTransform).PropertyTraits;
  pTVar1->PropertyTag = 0xffff;
  pTVar1->InitialValue = (TComponentTypeID<UE::MovieScene::FIntermediateWidgetTransform>)0xffff;
  (this->Margin).PropertyTraits =
       (TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>)
       &___7__TPropertyTraits_UFMargin__UFIntermediateMargin_MovieScene_UE___00_MovieScene_UE__6B_;
  (this->WidgetTransform).CompositeID =
       (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
        )0xffffffff;
  *local_2b8 = (IPropertyTraits)
               &
               ___7__TPropertyTraits_UFWidgetTransform__UFIntermediateWidgetTransform_MovieScene_UE___00_MovieScene_UE__6B_
  ;
  (this->CustomMarginAccessors)._padding_ =
       (longlong)
       &
       ___7__TCustomPropertyRegistration_U__TPropertyTraits_UFMargin__UFIntermediateMargin_MovieScene_UE___00_MovieScene_UE___00_MovieScene_UE__6B_
  ;
  (this->CustomMarginAccessors).CustomAccessors.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>_>
        )0x0;
  (this->CustomMarginAccessors).CustomAccessors.ArrayNum = 0;
  local_2b0 = (ICustomPropertyRegistration *)&this->CustomWidgetTransformAccessors;
  pTVar3 = &(this->CustomWidgetTransformAccessors).CustomAccessors;
  (this->CustomMarginAccessors).CustomAccessors.ArrayMax = 1;
  (this->CustomWidgetTransformAccessors).CustomAccessors.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>_>
        )0x0;
  ((TCustomPropertyRegistration<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,1>
    *)local_2b0)->_padding_ =
       (longlong)
       &
       ___7__TCustomPropertyRegistration_U__TPropertyTraits_UFWidgetTransform__UFIntermediateWidgetTransform_MovieScene_UE___00_MovieScene_UE___00_MovieScene_UE__6B_
  ;
  (this->CustomWidgetTransformAccessors).CustomAccessors.ArrayNum = 0;
  (this->CustomWidgetTransformAccessors).CustomAccessors.ArrayMax = 1;
  local_2d8 = this;
  this_00 = FBuiltInComponentTypes::Get();
  this_01 = UMovieSceneEntitySystemLinker::GetComponents();
  pFVar20 = ::FString::FString(&local_160,L"Initial ");
  ::FString::ConcatFC(&local_298,pFVar20,L"FMargin Property");
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  FVar14 = FComponentRegistry::NewTag(this_01,&local_2c6,0x18);
  local_288 = 0;
  FVar36.Data = (FScriptContainerElement *)L"";
  if (local_298.Data.ArrayNum != 0) {
    FVar36.Data = local_298.Data.AllocatorInstance.Data;
  }
  local_280 = 9;
  (local_2d8->Margin).PropertyTag.Value = *(ushort *)CONCAT62(extraout_var,FVar14.Value);
  TVar15 = FComponentRegistry::NewComponentType<UE::MovieScene::FIntermediateMargin>
                     (this_01,&local_2d0,(FNewComponentTypeParams *)FVar36.Data);
  (local_2d8->Margin).InitialValue =
       *(TComponentTypeID<UE::MovieScene::FIntermediateMargin> *)CONCAT62(extraout_var_00,TVar15);
  if ((FNewComponentTypeParams *)local_298.Data.AllocatorInstance.Data !=
      (FNewComponentTypeParams *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  pFVar20 = ::FString::FString(&local_150,L"Initial ");
  ::FString::ConcatFC(&local_2a8,pFVar20,L"FWidgetTransform Property");
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  FVar14 = FComponentRegistry::NewTag(this_01,&local_2ce,0x40);
  local_278 = 0;
  FVar36.Data = (FScriptContainerElement *)L"";
  if (local_2a8.Data.ArrayNum != 0) {
    FVar36.Data = local_2a8.Data.AllocatorInstance.Data;
  }
  (pTVar1->PropertyTag).Value = *(ushort *)CONCAT62(extraout_var_01,FVar14.Value);
  local_270 = 9;
  TVar16 = FComponentRegistry::NewComponentType<UE::MovieScene::FIntermediateWidgetTransform>
                     (this_01,&local_2cc,(FNewComponentTypeParams *)FVar36.Data);
  (this->WidgetTransform).InitialValue =
       *(TComponentTypeID<UE::MovieScene::FIntermediateWidgetTransform> *)
        CONCAT62(extraout_var_02,TVar16);
  if ((FNewComponentTypeParams *)local_2a8.Data.AllocatorInstance.Data !=
      (FNewComponentTypeParams *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  local_268 = 0;
  local_260 = 6;
  TVar17 = FComponentRegistry::NewComponentType<UE::MovieScene::FWidgetMaterialPath>
                     (this_01,&local_2ca,(FNewComponentTypeParams *)L"Widget Material Path");
  pFVar21 = local_2d8;
  local_258 = 0;
  local_250 = 4;
  local_2d8->WidgetMaterialPath =
       *(TComponentTypeID<UE::MovieScene::FWidgetMaterialPath> *)CONCAT62(extraout_var_03,TVar17);
  TVar18 = FComponentRegistry::NewComponentType<FWidgetMaterialHandle>
                     (this_01,&local_2c8,(FNewComponentTypeParams *)L"Widget Material Handle");
  local_38 = local_38 | 3;
  local_6e = *(TComponentTypeID<FWidgetMaterialHandle> *)CONCAT62(extraout_var_04,TVar18);
  local_78._8_2_ = pFVar21->WidgetMaterialPath;
  pFVar21->WidgetMaterialHandle = local_6e;
  local_78._0_8_ =
       &`UE::MovieScene::FMovieSceneUMGComponentTypes::FMovieSceneUMGComponentTypes'::`2'::
        FWidgetMaterialHandleInitializer::_vftable_;
  if ((local_38 & 1) == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  ppuVar29 = (undefined **)local_78;
  if ((local_38 & 2) == 0) {
    ppuVar29 = (undefined **)local_78._0_8_;
  }
  if ((local_38 & 1) == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  ppuVar22 = (undefined **)local_78;
  if ((local_38 & 2) == 0) {
    ppuVar22 = (undefined **)local_78._0_8_;
  }
  if (ppuVar29 != ppuVar22) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  FEntityFactories::DefineChildComponent
            (&this_01->Factories,
             (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_78);
  if ((local_38 & 1) != 0) {
    ppuVar29 = (undefined **)local_78;
    if ((local_38 & 2) == 0) {
      ppuVar29 = (undefined **)local_78._0_8_;
    }
    local_38 = local_38 & 0xfe;
    (**(code **)*ppuVar29)(ppuVar29,0);
    if ((local_38 & 2) == 0) {
      FMemory::Free((void *)local_78._0_8_);
    }
  }
  pFVar23 = FMovieSceneTracksComponentTypes::Get();
  pFVar24 = ::FName::FName(&local_178,"RenderOpacity");
  pTVar34 = &(pFVar23->Accessors).Float.CustomAccessors;
  FVar10 = *pFVar24;
  local_f0 = Z_Construct_UClass_UWidget_NoRegister();
  FVar32 = (pFVar23->Accessors).Float.CustomAccessors.AllocatorInstance.SecondaryData;
  pcStack_d8 = GetRenderOpacity;
  if (FVar32 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
                 )0x0) {
    FVar32 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
              )pTVar34;
  }
  local_d0 = SetRenderOpacity;
  local_e0 = 0xffff;
  FStack_e8 = FVar10;
  if (((ulonglong)FVar32 <= &local_f0) &&
     (lVar37 = (longlong)(pFVar23->Accessors).Float.CustomAccessors.ArrayMax,
     (FScriptContainerElement *)&local_f0 <
     (FScriptContainerElement *)((longlong)FVar32 + lVar37 * 0x28))) {
    local_320 = (longlong)(pFVar23->Accessors).Float.CustomAccessors.ArrayNum;
    local_318 = 0x28;
    local_338 = &local_f0;
    local_330 = FVar32;
    local_328 = lVar37;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  iVar19 = (pFVar23->Accessors).Float.CustomAccessors.ArrayNum;
  piVar5 = &(pFVar23->Accessors).Float.CustomAccessors.ArrayMax;
  if (iVar19 == *piVar5) {
    iVar19 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>_>
                       (0x828,&pTVar34->AllocatorInstance,piVar5);
  }
  (pFVar23->Accessors).Float.CustomAccessors.ArrayNum = iVar19 + 1;
  FVar32 = (pFVar23->Accessors).Float.CustomAccessors.AllocatorInstance.SecondaryData;
  lVar37 = (longlong)iVar19;
  if (FVar32 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
                 )0x0) {
    FVar32 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
              )pTVar34;
  }
  puVar6 = (undefined8 *)((longlong)FVar32 + lVar37 * 0x28);
  *puVar6 = local_f0;
  *(FName *)(puVar6 + 1) = FStack_e8;
  *(ulonglong *)((uchar *)((longlong)FVar32 + 0x10) + lVar37 * 0x28) = CONCAT62(uStack_de,local_e0);
  *(code **)((uchar *)((longlong)FVar32 + 0x10) + lVar37 * 0x28 + 8) = pcStack_d8;
  *(code **)((uchar *)((longlong)FVar32 + 0x20) + lVar37 * 0x28) = local_d0;
  pFVar24 = ::FName::FName(&local_170,"RenderTransform");
  FVar10 = *pFVar24;
  local_c8 = Z_Construct_UClass_UWidget_NoRegister();
  FVar32 = *(ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
             *)&(this->CustomWidgetTransformAccessors).CustomAccessors.AllocatorInstance.
                SecondaryData;
  pcStack_b0 = GetRenderTransform;
  if (FVar32 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
                 )0x0) {
    FVar32 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
              )pTVar3;
  }
  local_b8 = 0xffff;
  local_a8 = SetRenderTransform;
  FStack_c0 = FVar10;
  if (((ulonglong)FVar32 <= &local_c8) &&
     (lVar37 = (longlong)(this->CustomWidgetTransformAccessors).CustomAccessors.ArrayMax,
     (FScriptContainerElement *)&local_c8 <
     (FScriptContainerElement *)((longlong)FVar32 + lVar37 * 0x28))) {
    local_320 = (longlong)(this->CustomWidgetTransformAccessors).CustomAccessors.ArrayNum;
    local_318 = 0x28;
    local_338 = &local_c8;
    local_330 = FVar32;
    local_328 = lVar37;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  iVar19 = (this->CustomWidgetTransformAccessors).CustomAccessors.ArrayNum;
  if (iVar19 == (this->CustomWidgetTransformAccessors).CustomAccessors.ArrayMax) {
    iVar19 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>_>_>
                       (0x828,&pTVar3->AllocatorInstance,
                        &(this->CustomWidgetTransformAccessors).CustomAccessors.ArrayMax);
  }
  (this->CustomWidgetTransformAccessors).CustomAccessors.ArrayNum = iVar19 + 1;
  FVar31 = (this->CustomWidgetTransformAccessors).CustomAccessors.AllocatorInstance.SecondaryData;
  lVar37 = (longlong)iVar19;
  if (FVar31 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>_>
                 )0x0) {
    FVar31 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>_>
              )pTVar3;
  }
  puVar6 = (undefined8 *)((longlong)FVar31 + lVar37 * 0x28);
  *puVar6 = local_c8;
  *(FName *)(puVar6 + 1) = FStack_c0;
  *(ulonglong *)((uchar *)((longlong)FVar31 + 0x10) + lVar37 * 0x28) = CONCAT62(uStack_b6,local_b8);
  *(code **)((uchar *)((longlong)FVar31 + 0x10) + lVar37 * 0x28 + 8) = pcStack_b0;
  *(code **)((uchar *)((longlong)FVar31 + 0x20) + lVar37 * 0x28) = local_a8;
  pFVar24 = ::FName::FName(&local_168,"LayoutData.Offsets");
  FVar10 = *pFVar24;
  local_a0 = UCanvasPanelSlot::StaticClass();
  FVar32 = *(ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
             *)&(this->CustomMarginAccessors).CustomAccessors.AllocatorInstance.SecondaryData;
  pcStack_88 = GetLayoutDataOffsets;
  if (FVar32 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
                 )0x0) {
    FVar32 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
              )pTVar2;
  }
  local_90 = 0xffff;
  local_80 = SetLayoutDataOffsets;
  FStack_98 = FVar10;
  if (((ulonglong)FVar32 <= &local_a0) &&
     (lVar37 = (longlong)(this->CustomMarginAccessors).CustomAccessors.ArrayMax,
     (FScriptContainerElement *)&local_a0 <
     (FScriptContainerElement *)((longlong)FVar32 + lVar37 * 0x28))) {
    local_320 = (longlong)(this->CustomMarginAccessors).CustomAccessors.ArrayNum;
    local_318 = 0x28;
    local_338 = &local_a0;
    local_330 = FVar32;
    local_328 = lVar37;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  iVar19 = (this->CustomMarginAccessors).CustomAccessors.ArrayNum;
  if (iVar19 == (this->CustomMarginAccessors).CustomAccessors.ArrayMax) {
    iVar19 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>_>_>
                       (0x828,&pTVar2->AllocatorInstance,
                        &(this->CustomMarginAccessors).CustomAccessors.ArrayMax);
  }
  pFVar21 = local_2d8;
  (this->CustomMarginAccessors).CustomAccessors.ArrayNum = iVar19 + 1;
  FVar33 = (this->CustomMarginAccessors).CustomAccessors.AllocatorInstance.SecondaryData;
  lVar37 = (longlong)iVar19;
  if (FVar33 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>_>
                 )0x0) {
    FVar33 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>_>
              )pTVar2;
  }
  puVar6 = (undefined8 *)((longlong)FVar33 + lVar37 * 0x28);
  *puVar6 = local_a0;
  *(FName *)(puVar6 + 1) = FStack_98;
  *(ulonglong *)((uchar *)((longlong)FVar33 + 0x10) + lVar37 * 0x28) = CONCAT62(uStack_8e,local_90);
  *(code **)((uchar *)((longlong)FVar33 + 0x10) + lVar37 * 0x28 + 8) = pcStack_88;
  *(code **)((uchar *)((longlong)FVar33 + 0x20) + lVar37 * 0x28) = local_80;
  FPropertyRegistry::
  DefinePropertyImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
            (&this_00->PropertyRegistry,&local_2d8->Margin,L"Apply FMargin Properties");
  TVar8 = (pFVar21->Margin).CompositeID;
  iVar19 = (this_00->PropertyRegistry).Properties.ArrayNum;
  uVar28 = 0;
  if ((int)TVar8 < iVar19) {
    uVar28 = ~(uint)TVar8 >> 0x1f;
  }
  if (uVar28 == 0) {
    local_338 = (UClass **)(longlong)(int)TVar8;
    local_330 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
                 )(longlong)iVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  pFVar35 = (FPropertyDefinition *)
            ((this_00->PropertyRegistry).Properties.AllocatorInstance.Data +
            (longlong)(int)TVar8 * 0x70);
  pFVar35->TraitsInstance = (IPropertyTraits *)&(pFVar21->Margin).PropertyTraits;
  local_248.DataPtr =
       (FPropertyDefinition *)(this_00->PropertyRegistry).Properties.AllocatorInstance.Data;
  iVar19 = (this_00->PropertyRegistry).Properties.ArrayNum;
  TVar7 = this_00->DoubleResult[0];
  if (iVar19 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  local_248.ArrayNum = iVar19;
  pFVar25 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_248,0);
  if (pFVar35 != pFVar25) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  pTVar4 = &(this_00->PropertyRegistry).CompositeDefinitions;
  local_308._2_2_ = 0;
  local_308._0_2_ = TVar7;
  FVar32 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
            )(pTVar4->AllocatorInstance).Data;
  if (((ulonglong)FVar32 <= local_308) &&
     (lVar37 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax,
     (FScriptContainerElement *)local_308 <
     (FScriptContainerElement *)((longlong)FVar32 + lVar37 * 4))) {
    local_320 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
    local_318 = 4;
    local_338 = (UClass **)local_308;
    local_330 = FVar32;
    local_328 = lVar37;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  iVar19 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar19 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar19 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&pTVar4->AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  pFVar11 = (pTVar4->AllocatorInstance).Data;
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar19 + 1;
  *(undefined4 *)(pFVar11 + (longlong)iVar19 * 4) = local_308._0_4_;
  pFVar35->DoubleCompositeMask =
       pFVar35->DoubleCompositeMask | 1 << ((byte)pFVar35->CompositeSize & 0x1f);
  pFVar35->CompositeSize = pFVar35->CompositeSize + 1;
  local_238.DataPtr =
       (FPropertyDefinition *)(this_00->PropertyRegistry).Properties.AllocatorInstance.Data;
  iVar19 = (this_00->PropertyRegistry).Properties.ArrayNum;
  TVar7 = this_00->DoubleResult[1];
  if (iVar19 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  local_238.ArrayNum = iVar19;
  pFVar25 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_238,0);
  if (pFVar35 != pFVar25) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  local_300 = CONCAT22(8,TVar7);
  FVar32 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
            )(pTVar4->AllocatorInstance).Data;
  if (((ulonglong)FVar32 <= &local_300) &&
     (lVar37 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax,
     (FScriptContainerElement *)&local_300 <
     (FScriptContainerElement *)((longlong)FVar32 + lVar37 * 4))) {
    local_320 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
    local_318 = 4;
    local_338 = (UClass **)&local_300;
    local_330 = FVar32;
    local_328 = lVar37;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  iVar19 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar19 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar19 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&pTVar4->AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  pFVar11 = (pTVar4->AllocatorInstance).Data;
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar19 + 1;
  *(undefined4 *)(pFVar11 + (longlong)iVar19 * 4) = local_300;
  pFVar35->DoubleCompositeMask =
       pFVar35->DoubleCompositeMask | 1 << ((byte)pFVar35->CompositeSize & 0x1f);
  pFVar35->CompositeSize = pFVar35->CompositeSize + 1;
  local_228.DataPtr =
       (FPropertyDefinition *)(this_00->PropertyRegistry).Properties.AllocatorInstance.Data;
  iVar19 = (this_00->PropertyRegistry).Properties.ArrayNum;
  TVar7 = this_00->DoubleResult[2];
  if (iVar19 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  local_228.ArrayNum = iVar19;
  pFVar25 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_228,0);
  if (pFVar35 != pFVar25) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  local_2fc = CONCAT22(0x10,TVar7);
  FVar32 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
            )(pTVar4->AllocatorInstance).Data;
  if (((ulonglong)FVar32 <= &local_2fc) &&
     (lVar37 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax,
     (FScriptContainerElement *)&local_2fc <
     (FScriptContainerElement *)((longlong)FVar32 + lVar37 * 4))) {
    local_320 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
    local_318 = 4;
    local_338 = (UClass **)&local_2fc;
    local_330 = FVar32;
    local_328 = lVar37;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  iVar19 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar19 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar19 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&pTVar4->AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  pFVar11 = (pTVar4->AllocatorInstance).Data;
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar19 + 1;
  *(undefined4 *)(pFVar11 + (longlong)iVar19 * 4) = local_2fc;
  pFVar35->DoubleCompositeMask =
       pFVar35->DoubleCompositeMask | 1 << ((byte)pFVar35->CompositeSize & 0x1f);
  pFVar35->CompositeSize = pFVar35->CompositeSize + 1;
  local_218.DataPtr =
       (FPropertyDefinition *)(this_00->PropertyRegistry).Properties.AllocatorInstance.Data;
  iVar19 = (this_00->PropertyRegistry).Properties.ArrayNum;
  TVar7 = this_00->DoubleResult[3];
  if (iVar19 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  local_218.ArrayNum = iVar19;
  pFVar25 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_218,0);
  if (pFVar35 != pFVar25) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  local_2f8 = CONCAT22(0x18,TVar7);
  FVar32 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
            )(pTVar4->AllocatorInstance).Data;
  if (((ulonglong)FVar32 <= &local_2f8) &&
     (lVar37 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax,
     (FScriptContainerElement *)&local_2f8 <
     (FScriptContainerElement *)((longlong)FVar32 + lVar37 * 4))) {
    local_320 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
    local_318 = 4;
    local_338 = (UClass **)&local_2f8;
    local_330 = FVar32;
    local_328 = lVar37;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  iVar19 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar19 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar19 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&pTVar4->AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  pFVar11 = (pTVar4->AllocatorInstance).Data;
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar19 + 1;
  *(undefined4 *)(pFVar11 + (longlong)iVar19 * 4) = local_2f8;
  pFVar35->DoubleCompositeMask =
       pFVar35->DoubleCompositeMask | 1 << ((byte)pFVar35->CompositeSize & 0x1f);
  pFVar35->CompositeSize = pFVar35->CompositeSize + 1;
  pUVar26 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
  pFVar21 = local_2d8;
  pFVar35->BlenderSystemClass = pUVar26;
  pFVar35->CustomPropertyRegistration =
       (ICustomPropertyRegistration *)&local_2d8->CustomMarginAccessors;
  local_1fc = 0;
  FPreAnimatedStateExtension::RegisterStorageInternal();
  local_120 = local_120 | 3;
  local_138[0] = local_2c4[0];
  local_138[1] = local_2c4[1];
  local_138[2] = local_2c4[2];
  local_138[3] = local_2c4[3];
  local_200[0] = local_2c4[0];
  local_200[1] = local_2c4[1];
  local_200[2] = local_2c4[2];
  local_200[3] = local_2c4[3];
  local_140 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)
              &
              ___7__TPropertyComponentHandler_U__TPropertyTraits_UFMargin__UFIntermediateMargin_MovieScene_UE___00_MovieScene_UE__NNNN_MovieScene_UE__6B_
  ;
  if ((local_120 & 1) == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  pTVar30 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_140;
  if ((local_120 & 2) == 0) {
    pTVar30 = local_140;
  }
  if ((local_120 & 1) == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  pTVar27 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_140;
  if ((local_120 & 2) == 0) {
    pTVar27 = local_140;
  }
  if (pTVar30 != pTVar27) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            (&pFVar35->Handler,
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_140);
  if ((local_120 & 1) != 0) {
    pTVar30 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_140;
    if ((local_120 & 2) == 0) {
      pTVar30 = local_140;
    }
    local_120 = local_120 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar30->Data).Pad)->Data).Pad)(pTVar30,0);
    if ((local_120 & 2) == 0) {
      FMemory::Free(local_140);
    }
  }
  local_208 = &___7IPropertyComponentHandler_MovieScene_UE__6B_;
  FPropertyDefinition::SetupInitialValueProcessor(pFVar35);
  FPropertyRegistry::
  DefinePropertyImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
            (&this_00->PropertyRegistry,&pFVar21->WidgetTransform,
             L"Call UUserWidget::SetRenderTransform");
  TVar9 = (pFVar21->WidgetTransform).CompositeID;
  iVar19 = (this_00->PropertyRegistry).Properties.ArrayNum;
  uVar28 = 0;
  if ((int)TVar9 < iVar19) {
    uVar28 = ~(uint)TVar9 >> 0x1f;
  }
  if (uVar28 == 0) {
    local_338 = (UClass **)(longlong)(int)TVar9;
    local_330 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
                 )(longlong)iVar19;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  pFVar35 = (FPropertyDefinition *)
            ((this_00->PropertyRegistry).Properties.AllocatorInstance.Data +
            (longlong)(int)TVar9 * 0x70);
  pFVar35->TraitsInstance = local_2b8;
  local_1f8.DataPtr =
       (FPropertyDefinition *)(this_00->PropertyRegistry).Properties.AllocatorInstance.Data;
  iVar19 = (this_00->PropertyRegistry).Properties.ArrayNum;
  TVar7 = this_00->DoubleResult[0];
  if (iVar19 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  local_1f8.ArrayNum = iVar19;
  pFVar25 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_1f8,0);
  if (pFVar35 != pFVar25) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  local_2f4._2_2_ = 0;
  local_2f4._0_2_ = TVar7;
  FVar32 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
            )(pTVar4->AllocatorInstance).Data;
  if (((ulonglong)FVar32 <= local_2f4) &&
     (lVar37 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax,
     (FScriptContainerElement *)local_2f4 <
     (FScriptContainerElement *)((longlong)FVar32 + lVar37 * 4))) {
    local_320 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
    local_318 = 4;
    local_338 = (UClass **)local_2f4;
    local_330 = FVar32;
    local_328 = lVar37;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  iVar19 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar19 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar19 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&pTVar4->AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  pFVar11 = (pTVar4->AllocatorInstance).Data;
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar19 + 1;
  *(undefined4 *)(pFVar11 + (longlong)iVar19 * 4) = local_2f4._0_4_;
  pFVar35->DoubleCompositeMask =
       pFVar35->DoubleCompositeMask | 1 << ((byte)pFVar35->CompositeSize & 0x1f);
  pFVar35->CompositeSize = pFVar35->CompositeSize + 1;
  local_1e8.DataPtr =
       (FPropertyDefinition *)(this_00->PropertyRegistry).Properties.AllocatorInstance.Data;
  iVar19 = (this_00->PropertyRegistry).Properties.ArrayNum;
  TVar7 = this_00->DoubleResult[1];
  if (iVar19 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  local_1e8.ArrayNum = iVar19;
  pFVar25 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_1e8,0);
  if (pFVar35 != pFVar25) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  stack0xfffffffffffffd10 = CONCAT22(8,TVar7);
  FVar32 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
            )(pTVar4->AllocatorInstance).Data;
  if (((ulonglong)FVar32 <= (longlong)local_2f4 + 4U) &&
     (lVar37 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax,
     (FScriptContainerElement *)(local_2f4 + 4) <
     (FScriptContainerElement *)((longlong)FVar32 + lVar37 * 4))) {
    local_320 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
    local_318 = 4;
    local_338 = (UClass **)(local_2f4 + 4);
    local_330 = FVar32;
    local_328 = lVar37;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  iVar19 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar19 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar19 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&pTVar4->AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  pFVar11 = (pTVar4->AllocatorInstance).Data;
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar19 + 1;
  *(undefined4 *)(pFVar11 + (longlong)iVar19 * 4) = stack0xfffffffffffffd10;
  pFVar35->DoubleCompositeMask =
       pFVar35->DoubleCompositeMask | 1 << ((byte)pFVar35->CompositeSize & 0x1f);
  pFVar35->CompositeSize = pFVar35->CompositeSize + 1;
  local_1d8.DataPtr =
       (FPropertyDefinition *)(this_00->PropertyRegistry).Properties.AllocatorInstance.Data;
  iVar19 = (this_00->PropertyRegistry).Properties.ArrayNum;
  TVar7 = this_00->DoubleResult[2];
  if (iVar19 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  local_1d8.ArrayNum = iVar19;
  pFVar25 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_1d8,0);
  if (pFVar35 != pFVar25) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  stack0xfffffffffffffcfc = CONCAT22(0x10,TVar7);
  FVar32 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
            )(pTVar4->AllocatorInstance).Data;
  if (((ulonglong)FVar32 <= (longlong)local_308 + 4U) &&
     (lVar37 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax,
     (FScriptContainerElement *)(local_308 + 4) <
     (FScriptContainerElement *)((longlong)FVar32 + lVar37 * 4))) {
    local_320 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
    local_318 = 4;
    local_338 = (UClass **)(local_308 + 4);
    local_330 = FVar32;
    local_328 = lVar37;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  iVar19 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar19 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar19 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&pTVar4->AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  pFVar11 = (pTVar4->AllocatorInstance).Data;
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar19 + 1;
  *(undefined4 *)(pFVar11 + (longlong)iVar19 * 4) = stack0xfffffffffffffcfc;
  pFVar35->DoubleCompositeMask =
       pFVar35->DoubleCompositeMask | 1 << ((byte)pFVar35->CompositeSize & 0x1f);
  pFVar35->CompositeSize = pFVar35->CompositeSize + 1;
  local_1c8.DataPtr =
       (FPropertyDefinition *)(this_00->PropertyRegistry).Properties.AllocatorInstance.Data;
  iVar19 = (this_00->PropertyRegistry).Properties.ArrayNum;
  TVar7 = this_00->DoubleResult[3];
  if (iVar19 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  local_1c8.ArrayNum = iVar19;
  pFVar25 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_1c8,0);
  if (pFVar35 != pFVar25) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  local_2ec = CONCAT22(0x18,TVar7);
  FVar32 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
            )(pTVar4->AllocatorInstance).Data;
  if (((ulonglong)FVar32 <= &local_2ec) &&
     (lVar37 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax,
     (FScriptContainerElement *)&local_2ec <
     (FScriptContainerElement *)((longlong)FVar32 + lVar37 * 4))) {
    local_320 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
    local_318 = 4;
    local_338 = (UClass **)&local_2ec;
    local_330 = FVar32;
    local_328 = lVar37;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  iVar19 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar19 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar19 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&pTVar4->AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  pFVar11 = (pTVar4->AllocatorInstance).Data;
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar19 + 1;
  *(undefined4 *)(pFVar11 + (longlong)iVar19 * 4) = local_2ec;
  pFVar35->DoubleCompositeMask =
       pFVar35->DoubleCompositeMask | 1 << ((byte)pFVar35->CompositeSize & 0x1f);
  pFVar35->CompositeSize = pFVar35->CompositeSize + 1;
  local_1b8.DataPtr =
       (FPropertyDefinition *)(this_00->PropertyRegistry).Properties.AllocatorInstance.Data;
  iVar19 = (this_00->PropertyRegistry).Properties.ArrayNum;
  TVar7 = this_00->DoubleResult[4];
  if (iVar19 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  local_1b8.ArrayNum = iVar19;
  pFVar25 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_1b8,0);
  if (pFVar35 != pFVar25) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  local_2e8 = CONCAT22(0x20,TVar7);
  FVar32 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
            )(pTVar4->AllocatorInstance).Data;
  if (((ulonglong)FVar32 <= &local_2e8) &&
     (lVar37 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax,
     (FScriptContainerElement *)&local_2e8 <
     (FScriptContainerElement *)((longlong)FVar32 + lVar37 * 4))) {
    local_320 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
    local_318 = 4;
    local_338 = (UClass **)&local_2e8;
    local_330 = FVar32;
    local_328 = lVar37;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  iVar19 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar19 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar19 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&pTVar4->AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  pFVar11 = (pTVar4->AllocatorInstance).Data;
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar19 + 1;
  *(undefined4 *)(pFVar11 + (longlong)iVar19 * 4) = local_2e8;
  pFVar35->DoubleCompositeMask =
       pFVar35->DoubleCompositeMask | 1 << ((byte)pFVar35->CompositeSize & 0x1f);
  pFVar35->CompositeSize = pFVar35->CompositeSize + 1;
  local_1a8.DataPtr =
       (FPropertyDefinition *)(this_00->PropertyRegistry).Properties.AllocatorInstance.Data;
  iVar19 = (this_00->PropertyRegistry).Properties.ArrayNum;
  TVar7 = this_00->DoubleResult[5];
  if (iVar19 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  local_1a8.ArrayNum = iVar19;
  pFVar25 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_1a8,0);
  if (pFVar35 != pFVar25) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  local_2e4 = CONCAT22(0x28,TVar7);
  FVar32 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
            )(pTVar4->AllocatorInstance).Data;
  if (((ulonglong)FVar32 <= &local_2e4) &&
     (lVar37 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax,
     (FScriptContainerElement *)&local_2e4 <
     (FScriptContainerElement *)((longlong)FVar32 + lVar37 * 4))) {
    local_320 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
    local_318 = 4;
    local_338 = (UClass **)&local_2e4;
    local_330 = FVar32;
    local_328 = lVar37;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  iVar19 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar19 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar19 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&pTVar4->AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  pFVar11 = (pTVar4->AllocatorInstance).Data;
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar19 + 1;
  *(undefined4 *)(pFVar11 + (longlong)iVar19 * 4) = local_2e4;
  pFVar35->DoubleCompositeMask =
       pFVar35->DoubleCompositeMask | 1 << ((byte)pFVar35->CompositeSize & 0x1f);
  pFVar35->CompositeSize = pFVar35->CompositeSize + 1;
  local_198.DataPtr =
       (FPropertyDefinition *)(this_00->PropertyRegistry).Properties.AllocatorInstance.Data;
  TVar7 = this_00->DoubleResult[6];
  iVar19 = (this_00->PropertyRegistry).Properties.ArrayNum;
  if (iVar19 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  local_198.ArrayNum = iVar19;
  pFVar25 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_198,0);
  if (pFVar35 != pFVar25) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  local_2e0 = CONCAT22(0x30,TVar7);
  FVar32 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
            )(pTVar4->AllocatorInstance).Data;
  if (((ulonglong)FVar32 <= &local_2e0) &&
     (lVar37 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax,
     (FScriptContainerElement *)&local_2e0 <
     (FScriptContainerElement *)((longlong)FVar32 + lVar37 * 4))) {
    local_320 = (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
    local_318 = 4;
    local_338 = (UClass **)&local_2e0;
    local_330 = FVar32;
    local_328 = lVar37;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  iVar19 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar19 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar19 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&pTVar4->AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  pFVar11 = (pTVar4->AllocatorInstance).Data;
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar19 + 1;
  *(undefined4 *)(pFVar11 + (longlong)iVar19 * 4) = local_2e0;
  pFVar35->DoubleCompositeMask =
       pFVar35->DoubleCompositeMask | 1 << ((byte)pFVar35->CompositeSize & 0x1f);
  pFVar35->CompositeSize = pFVar35->CompositeSize + 1;
  pUVar26 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
  pFVar35->BlenderSystemClass = pUVar26;
  pFVar35->CustomPropertyRegistration = local_2b0;
  local_17c = 0;
  FPreAnimatedStateExtension::RegisterStorageInternal();
  local_f8 = local_f8 | 3;
  local_110[0] = local_2c0[0];
  local_110[1] = local_2c0[1];
  local_110[2] = local_2c0[2];
  local_110[3] = local_2c0[3];
  local_118 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)
              &
              ___7__TPropertyComponentHandler_U__TPropertyTraits_UFWidgetTransform__UFIntermediateWidgetTransform_MovieScene_UE___00_MovieScene_UE__NNNNNNN_MovieScene_UE__6B_
  ;
  local_180[0] = local_2c0[0];
  local_180[1] = local_2c0[1];
  local_180[2] = local_2c0[2];
  local_180[3] = local_2c0[3];
  local_188 = &
              ___7__TPropertyComponentHandler_U__TPropertyTraits_UFWidgetTransform__UFIntermediateWidgetTransform_MovieScene_UE___00_MovieScene_UE__NNNNNNN_MovieScene_UE__6B_
  ;
  if ((local_f8 & 1) == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  pTVar30 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_118;
  if ((local_f8 & 2) == 0) {
    pTVar30 = local_118;
  }
  if ((local_f8 & 1) == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  pTVar27 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_118;
  if ((local_f8 & 2) == 0) {
    pTVar27 = local_118;
  }
  if (pTVar30 != pTVar27) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      pFVar21 = (FMovieSceneUMGComponentTypes *)(*pcVar12)();
      return pFVar21;
    }
  }
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            (&pFVar35->Handler,
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_118);
  if ((local_f8 & 1) != 0) {
    pTVar30 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_118;
    if ((local_f8 & 2) == 0) {
      pTVar30 = local_118;
    }
    local_f8 = local_f8 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar30->Data).Pad)->Data).Pad)(pTVar30,0);
    if ((local_f8 & 2) == 0) {
      FMemory::Free(local_118);
    }
  }
  FPropertyDefinition::SetupInitialValueProcessor(pFVar35);
  return local_2d8;
}

// ~FMovieSceneUMGComponentTypes @ 146904060

void __thiscall
UE::MovieScene::FMovieSceneUMGComponentTypes::~FMovieSceneUMGComponentTypes
          (FMovieSceneUMGComponentTypes *this)

{
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>_>
  FVar1;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>_>
  FVar2;
  
  FVar1 = (this->CustomWidgetTransformAccessors).CustomAccessors.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>_>
                )0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->CustomWidgetTransformAccessors)._padding_ =
       (longlong)&___7ICustomPropertyRegistration_MovieScene_UE__6B_;
  FVar2 = (this->CustomMarginAccessors).CustomAccessors.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>_>
                )0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->CustomMarginAccessors)._padding_ =
       (longlong)&___7ICustomPropertyRegistration_MovieScene_UE__6B_;
  (this->WidgetTransform).PropertyTraits =
       (TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>)
       &___7IPropertyTraits_MovieScene_UE__6B_;
  (this->Margin).PropertyTraits =
       (TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>)
       &___7IPropertyTraits_MovieScene_UE__6B_;
  return;
}

// Destroy @ 1469139a0

void __cdecl UE::MovieScene::FMovieSceneUMGComponentTypes::Destroy(void)

{
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>_>
  FVar1;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>_>
  FVar2;
  TUniquePtr<UE::MovieScene::FMovieSceneUMGComponentTypes,TDefaultDelete<UE::MovieScene::FMovieSceneUMGComponentTypes>_>
  TVar3;
  
  TVar3.Ptr = GMovieSceneUMGComponentTypes.Ptr;
  if (GMovieSceneUMGComponentTypes.Ptr != (FMovieSceneUMGComponentTypes *)0x0) {
    GMovieSceneUMGComponentTypes.Ptr = (FMovieSceneUMGComponentTypes *)0x0;
    FVar1 = ((TVar3.Ptr)->CustomWidgetTransformAccessors).CustomAccessors.AllocatorInstance.
            SecondaryData;
    if (FVar1 != (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>_>
                  )0x0) {
      FMemory::Free((void *)FVar1);
    }
    ((TVar3.Ptr)->CustomWidgetTransformAccessors)._padding_ =
         (longlong)&___7ICustomPropertyRegistration_MovieScene_UE__6B_;
    FVar2 = ((TVar3.Ptr)->CustomMarginAccessors).CustomAccessors.AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>_>
                  )0x0) {
      FMemory::Free((void *)FVar2);
    }
    ((TVar3.Ptr)->CustomMarginAccessors)._padding_ =
         (longlong)&___7ICustomPropertyRegistration_MovieScene_UE__6B_;
    ((TVar3.Ptr)->WidgetTransform).PropertyTraits =
         (TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>)
         &___7IPropertyTraits_MovieScene_UE__6B_;
    ((TVar3.Ptr)->Margin).PropertyTraits =
         (TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>)
         &___7IPropertyTraits_MovieScene_UE__6B_;
    ::operator_delete(TVar3.Ptr,0xb8);
  }
  GMovieSceneUMGComponentTypesDestroyed = true;
  return;
}

// Get @ 14691cff0

FMovieSceneUMGComponentTypes * __cdecl UE::MovieScene::FMovieSceneUMGComponentTypes::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneUMGComponentTypes *pFVar3;
  FMovieSceneUMGComponentTypes *this;
  
  if (GMovieSceneUMGComponentTypes.Ptr == (FMovieSceneUMGComponentTypes *)0x0) {
    if (GMovieSceneUMGComponentTypesDestroyed) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GMovieSceneUMGComponentTypesDestroyed",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\MovieSceneUMGComponentTypes.cpp"
                         ,0xd1,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FMovieSceneUMGComponentTypes *)(*pcVar1)();
        return pFVar3;
      }
    }
    this = ::operator_new(0xb8);
    pFVar3 = (FMovieSceneUMGComponentTypes *)0x0;
    if (this != (FMovieSceneUMGComponentTypes *)0x0) {
      pFVar3 = FMovieSceneUMGComponentTypes(this);
    }
    TUniquePtr<UE::MovieScene::FMovieSceneUMGComponentTypes,TDefaultDelete<UE::MovieScene::FMovieSceneUMGComponentTypes>_>
    ::Reset(&GMovieSceneUMGComponentTypes,pFVar3);
  }
  return GMovieSceneUMGComponentTypes.Ptr;
}

