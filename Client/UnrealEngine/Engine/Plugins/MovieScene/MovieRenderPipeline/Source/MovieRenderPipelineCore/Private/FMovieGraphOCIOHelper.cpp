// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 5

// CreateOpenColorIOPixelPreProcessor @ 14dcbfe50

/* WARNING: Enum "Type": Some values do not have unique names */

TUniqueFunction<void___cdecl(FImagePixelData_*)> * __cdecl
FMovieGraphOCIOHelper::CreateOpenColorIOPixelPreProcessor
          (TUniqueFunction<void___cdecl(FImagePixelData_*)> *__return_storage_ptr__,
          FOpenColorIOColorConversionSettings *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2)

{
  UOpenColorIOConfiguration *pUVar1;
  bool bVar2;
  undefined8 uVar3;
  FOpenColorIOWrapperProcessor local_res10 [2];
  TObjectPtr<UOpenColorIOConfiguration>_u_0 local_res20;
  
  pUVar1 = (param_1->ConfigurationSource).field0_0x0.DebugPtr;
  if ((((pUVar1 != (UOpenColorIOConfiguration *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)
       ) && (UOpenColorIOConfiguration::FindTransform
                       ((param_1->ConfigurationSource).field0_0x0.DebugPtr,
                        (FOpenColorIOColorConversionSettings *)&local_res20.ObjectPtr),
            local_res20.DebugPtr != (UOpenColorIOConfiguration *)0x0)) &&
     (((uint)(local_res20.DebugPtr)->_padding_ >> 0x1e & 1) == 0)) {
    FOpenColorIOWrapperProcessor::FOpenColorIOWrapperProcessor(local_res10);
    bVar2 = UOpenColorIOColorTransform::GetTransformProcessor
                      ((UOpenColorIOColorTransform *)local_res20.DebugPtr,local_res10,param_2);
    if (bVar2) {
      uVar3 = 0;
      if (local_res10[0].Pimpl != (TPimplPtr<FOpenColorIOProcessorPimpl,1>)0x0) {
        uVar3 = (**(code **)((longlong)local_res10[0].Pimpl + -8))(local_res10[0].Pimpl);
      }
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
      *(undefined ***)&__return_storage_ptr__->field_0x10 =
           &
           ___7__TFunction_OwnedObject_UFOpenColorIOPixelPreProcessor_FMovieGraphOCIOHelper___00_0A__Function_Private_Core_UE__6B_
      ;
      *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar3;
      if (&__return_storage_ptr__->field_0x18 != (undefined1 *)0x0) {
        *(code **)__return_storage_ptr__ =
             UE::Core::Private::Function::
             TFunctionRefCaller<FMovieGraphOCIOHelper::FOpenColorIOPixelPreProcessor,void,FImagePixelData_*>
             ::Call;
      }
      if (local_res10[0].Pimpl == (TPimplPtr<FOpenColorIOProcessorPimpl,1>)0x0) {
        return __return_storage_ptr__;
      }
      (**(code **)((longlong)local_res10[0].Pimpl + -0x10))((longlong)local_res10[0].Pimpl + -0x10);
      return __return_storage_ptr__;
    }
    if (local_res10[0].Pimpl != (TPimplPtr<FOpenColorIOProcessorPimpl,1>)0x0) {
      (**(code **)((longlong)local_res10[0].Pimpl + -0x10))((longlong)local_res10[0].Pimpl + -0x10);
    }
  }
  if (2 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  return __return_storage_ptr__;
}

// GenerateOcioPixelPreProcessor @ 14dcc98f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
FMovieGraphOCIOHelper::GenerateOcioPixelPreProcessor
          (FMovieGraphSampleState *param_1,UMovieGraphPipeline *param_2,
          TObjectPtr<UMovieGraphEvaluatedConfig> param_3,FOpenColorIODisplayConfiguration *param_4,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_5,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>
                   *param_6)

{
  UOpenColorIOConfiguration *pUVar1;
  int iVar2;
  bool bVar3;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *pTVar4;
  undefined1 auStackY_128 [32];
  UObject *local_f8 [2];
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  undefined1 local_98 [72];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pUVar1 = (param_4->ColorConfiguration).ConfigurationSource.field0_0x0.DebugPtr;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  if ((pUVar1 != (UOpenColorIOConfiguration *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0))
  {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)local_e8,
                (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)&((param_4->ColorConfiguration).ConfigurationSource.field0_0x0.DebugPtr)->Context
               );
  }
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Append<FDefaultSetAllocator>
            ((TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)local_e8,param_5);
  local_f8[0] = *(UObject **)param_3.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f8[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_f8[0]);
  }
  pTVar4 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            *)ResolveOpenColorIOContext
                        ((TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                          *)local_98,
                         (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                          *)local_e8,&(param_1->TraversalContext).RenderDataIdentifier,param_2,
                         (TObjectPtr<UMovieGraphEvaluatedConfig>)local_f8,&param_1->TraversalContext
                        );
  if ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
       *)local_e8 != pTVar4) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)local_e8,pTVar4);
  }
  local_50 = 0;
  if ((void *)local_98._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  bVar3 = GenerateOcioPixelPreProcessorWithContext
                    (param_1,param_4,
                     (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)local_e8,param_6);
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_e8,0,local_e8._8_4_);
  iVar2 = SUB84(local_e8._8_8_,4);
  local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
  }
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_c0 = 0;
  if (0x80 < local_bc) {
    local_bc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._0_8_);
  }
  return bVar3;
}

// GenerateOcioPixelPreProcessorWithContext @ 14dcc9af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FMovieGraphOCIOHelper::GenerateOcioPixelPreProcessorWithContext
          (FMovieGraphSampleState *param_1,FOpenColorIODisplayConfiguration *param_2,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_3,TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_>
                   *param_4)

{
  UOpenColorIOConfiguration *pUVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  undefined1 auStack_88 [32];
  FOpenColorIOWrapperProcessor local_68;
  TObjectPtr<UOpenColorIOConfiguration>_u_0 local_60;
  code *local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  if ((param_2->bIsEnabled == false) || (param_1->bAllowOCIO == false)) {
    return false;
  }
  if (((param_1->SceneCaptureSource != SCS_FinalColorHDR) &&
      (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0)) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_The_OCIO_transf_152cd04d0,
                 (FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    ThreadSafeOnce256 = 1;
    _Init_thread_footer(&::_TSS0);
  }
  pUVar1 = (param_2->ColorConfiguration).ConfigurationSource.field0_0x0.DebugPtr;
  if (((pUVar1 != (UOpenColorIOConfiguration *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0))
     && ((UOpenColorIOConfiguration::FindTransform
                    ((param_2->ColorConfiguration).ConfigurationSource.field0_0x0.DebugPtr,
                     (FOpenColorIOColorConversionSettings *)&local_60.ObjectPtr),
         local_60.DebugPtr != (UOpenColorIOConfiguration *)0x0 &&
         (((uint)(local_60.DebugPtr)->_padding_ >> 0x1e & 1) == 0)))) {
    FOpenColorIOWrapperProcessor::FOpenColorIOWrapperProcessor(&local_68);
    bVar2 = UOpenColorIOColorTransform::GetTransformProcessor
                      ((UOpenColorIOColorTransform *)local_60.DebugPtr,&local_68,param_3);
    if (bVar2) {
      uStack_40 = (code *)0x0;
      if (local_68.Pimpl != (TPimplPtr<FOpenColorIOProcessorPimpl,1>)0x0) {
        uStack_40 = (code *)(**(code **)((longlong)local_68.Pimpl + -8))(local_68.Pimpl);
      }
      local_30 = (longlong *)0x0;
      local_48 = &
                 ___7__TFunction_OwnedObject_UFOpenColorIOPixelPreProcessor_FMovieGraphOCIOHelper___00_0A__Function_Private_Core_UE__6B_
      ;
      local_58 = UE::Core::Private::Function::
                 TFunctionRefCaller<FMovieGraphOCIOHelper::FOpenColorIOPixelPreProcessor,void,FImagePixelData_*>
                 ::Call;
      if (local_68.Pimpl != (TPimplPtr<FOpenColorIOProcessorPimpl,1>)0x0) {
        (**(code **)((longlong)local_68.Pimpl + -0x10))((longlong)local_68.Pimpl + -0x10);
      }
      if (local_58 == (code *)0x0) {
        return false;
      }
      iVar3 = param_4->ArrayNum;
      if (iVar3 == param_4->ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1030,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar3 + 1;
      pFVar5 = (param_4->AllocatorInstance).Data + (longlong)iVar3 * 0x30;
      *(code **)pFVar5 = local_58;
      *(longlong **)(pFVar5 + 0x28) = local_30;
      *(undefined4 *)(pFVar5 + 0x10) = (undefined4)local_48;
      *(undefined4 *)(pFVar5 + 0x14) = local_48._4_4_;
      *(undefined4 *)(pFVar5 + 0x18) = (undefined4)uStack_40;
      *(undefined4 *)(pFVar5 + 0x1c) = uStack_40._4_4_;
      *(longlong *)(pFVar5 + 0x20) = local_38;
      if (*(longlong *)pFVar5 != 0) {
        local_58 = (code *)0x0;
      }
      if (local_58 != (code *)0x0) {
        plVar4 = &local_48;
        if (local_30 != (longlong *)0x0) {
          plVar4 = local_30;
        }
        (**(code **)(*plVar4 + 0x10))();
        return true;
      }
      return true;
    }
    if (local_68.Pimpl != (TPimplPtr<FOpenColorIOProcessorPimpl,1>)0x0) {
      (**(code **)((longlong)local_68.Pimpl + -0x10))((longlong)local_68.Pimpl + -0x10);
    }
  }
  if (2 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  return false;
}

// ResolveOpenColorIOContext @ 14dce12f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> * __cdecl
FMovieGraphOCIOHelper::ResolveOpenColorIOContext
          (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *__return_storage_ptr__,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_1,FMovieGraphRenderDataIdentifier *param_2,UMovieGraphPipeline *param_3,
          TObjectPtr<UMovieGraphEvaluatedConfig> param_4,FMovieGraphTraversalContext *param_5)

{
  FString *pFVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  void *_Src;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar9
  ;
  byte bVar10;
  undefined1 *puVar11;
  uint *puVar12;
  wchar_t *pwVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  uint uVar20;
  undefined1 auStackY_4b8 [32];
  undefined1 local_478;
  undefined1 local_477 [3];
  uint local_474;
  FString local_470;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_460;
  int iStack_458;
  uint uStack_454;
  undefined1 *local_450;
  undefined4 uStack_448;
  int iStack_444;
  int local_440;
  undefined4 uStack_43c;
  int iStack_438;
  undefined4 uStack_434;
  int local_430;
  int local_42c;
  int local_428;
  int local_424;
  TPairInitializer<FString_const_&,FStringFormatArg_&&> local_420;
  TBitArray<FDefaultBitArrayAllocator> *local_410;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_408;
  longlong *local_400;
  uint uStack_3f8;
  uint uStack_3f4;
  TBitArray<FDefaultBitArrayAllocator> *local_3f0;
  undefined4 uStack_3e8;
  uint uStack_3e4;
  uint local_3e0;
  int iStack_3dc;
  int iStack_3d8;
  undefined4 uStack_3d4;
  longlong *local_3d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3c8;
  undefined8 uStack_3a8;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_3a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_398;
  undefined8 uStack_378;
  longlong local_370;
  FStringFormatArg *local_368;
  FString local_360;
  FString local_350;
  FStringFormatArg local_340;
  undefined4 local_304;
  undefined1 local_2f8 [32];
  uint *local_2d8;
  uint local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  int local_2c4;
  void *local_2b8;
  undefined4 local_2b0;
  undefined1 local_2a8 [64];
  void *local_268;
  undefined4 local_260;
  undefined1 local_258 [64];
  void *local_218;
  ulonglong local_210;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  local_208;
  FMovieGraphFilenameResolveParams local_1b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  iVar18 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  local_420.Value = (FStringFormatArg *)__return_storage_ptr__;
  local_408 = param_1;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
             *)__return_storage_ptr__,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  local_258._56_8_ = 0;
  local_258._16_8_ = 0;
  local_258._24_8_ = 0;
  local_210 = 0;
  local_258._0_8_ = 0;
  local_258._8_8_ = 0;
  local_258._32_8_ = 0;
  local_258._40_4_ = 0;
  local_258._44_4_ = 0x80;
  local_258._48_4_ = 0xffffffff;
  local_258._52_4_ = 0;
  local_218 = (void *)0x0;
  FMovieGraphFilenameResolveParams::MakeResolveParams
            (&local_1b8,param_2,param_3,(TObjectPtr<UMovieGraphEvaluatedConfig> *)param_4.field0_0x0
             ,param_5,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                       *)local_258);
  local_210 = local_210 & 0xffffffff00000000;
  if (local_218 != (void *)0x0) {
    FMemory::Free(local_218);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_258);
  iVar3 = *(int *)&param_1->field_0x28;
  pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  local_440 = 0;
  uStack_454 = 1;
  iStack_444 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar12 = (uint *)pTVar19;
    }
    uVar17 = *puVar12;
    iVar18 = 0;
    while (uVar17 == 0) {
      lVar8 = (longlong)iVar18;
      local_440 = local_440 + 0x20;
      iVar18 = iVar18 + 1;
      iStack_444 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar18) goto LAB_14dce149d;
      uVar17 = puVar12[lVar8 + 1];
    }
    uStack_454 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uStack_454 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_430 = (int)lVar8;
    iStack_444 = local_440 + -1 + local_430;
    if (iVar3 < iStack_444) {
      iStack_444 = iVar3;
    }
  }
LAB_14dce149d:
  uVar17 = *(uint *)&param_1->field_0x28;
  uStack_43c = local_304;
  uVar16 = uVar17 & 0xffffffe0;
  iStack_438 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  TStack_398._padding_ = CONCAT44(uStack_454,iVar18);
  uStack_448 = 0xffffffff;
  TStack_398.CurrentBitIndex = iStack_444;
  TStack_398.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar17 >> 5;
  TStack_398._28_4_ = local_304;
  TStack_398.BaseBitIndex = local_440;
  uStack_378 = CONCAT44(uStack_434,iStack_438);
  local_474 = uVar17;
  local_460 = param_1;
  iStack_458 = iVar18;
  local_450 = (undefined1 *)pTVar19;
  local_410 = pTVar19;
  local_3a0 = param_1;
  TStack_398.Array = pTVar19;
  if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)(*pcVar5)();
    return pTVar9;
  }
  uVar20 = *(uint *)&param_1->field_0x28;
  if (uVar17 != uVar20) {
    puVar11 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar11 = (undefined1 *)pTVar19;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar8 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = uVar20;
      local_474 = uVar20;
      if ((int)(((int)(uVar20 - 1) >> 0x1f & 0x1fU) + (uVar20 - 1)) >> 5 < iVar14)
      goto LAB_14dce15d0;
      uVar17 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_42c = (int)lVar8;
    uVar17 = (uVar16 - 1) + local_42c;
    local_474 = uVar17;
    if ((int)uVar20 < (int)uVar17) {
      uVar17 = uVar20;
      local_474 = uVar20;
    }
  }
LAB_14dce15d0:
  do {
    pTVar9 = local_3a0;
    uVar16 = 0;
    if (*(int *)&local_3a0->field_0x8 - *(int *)&local_3a0->field_0x34 != (int)uStack_378) {
      local_478 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_478);
    }
    if (((TStack_398.CurrentBitIndex == uVar17) && (TStack_398.Array == pTVar19)) &&
       (pTVar9 == param_1)) {
      FMovieGraphFilenameResolveParams::~FMovieGraphFilenameResolveParams(&local_1b8);
      return __return_storage_ptr__;
    }
    local_2f8._0_8_ = 0;
    local_2f8._8_8_ = 0;
    local_2d8 = (uint *)0x0;
    uVar17 = 0;
    local_2d0 = 0;
    pFVar1 = (FString *)(*(longlong *)pTVar9 + (longlong)TStack_398.CurrentBitIndex * 0x28);
    local_2cc = 0x80;
    local_2c8 = 0xffffffff;
    local_2c4 = 0;
    local_2b8 = (void *)0x0;
    local_2b0 = 0;
    local_2a8._0_8_ = 0;
    local_2a8._8_8_ = 0;
    local_2a8._32_8_ = 0;
    local_2a8._40_4_ = 0;
    local_2a8._44_4_ = 0x80;
    local_2a8._48_4_ = 0xffffffff;
    local_2a8._52_4_ = 0;
    local_268 = (void *)0x0;
    local_260 = 0;
    UMovieGraphBlueprintLibrary::ResolveFilenameFormatArguments
              (&local_350,pFVar1 + 1,&local_1b8,(FMovieGraphResolveArgs *)local_2f8);
    if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_350.Data.AllocatorInstance.Data);
    }
    uVar20 = local_2d0;
    uStack_3f4 = 1;
    local_208.Elements._0_8_ = 0;
    local_208.Elements._8_8_ = 0;
    local_208.Elements._32_8_ = 0;
    local_208.Elements._40_4_ = 0;
    local_208.Elements._44_4_ = 0x80;
    local_208.Elements._48_4_ = 0xffffffff;
    local_208.Elements._52_4_ = 0;
    local_208.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_208.HashSize = 0;
    uStack_3e4 = uVar17;
    local_3e0 = uVar16;
    if (local_2d0 != 0) {
      puVar12 = (uint *)(local_2f8 + 0x10);
      if (local_2d8 != (uint *)0x0) {
        puVar12 = local_2d8;
      }
      uVar4 = *puVar12;
      uVar17 = uVar16;
      while (uVar4 == 0) {
        lVar8 = (longlong)(int)uVar17;
        local_3e0 = local_3e0 + 0x20;
        uVar17 = uVar17 + 1;
        uStack_3e4 = local_2d0;
        if ((int)(((int)(local_2d0 - 1) >> 0x1f & 0x1fU) + (local_2d0 - 1)) >> 5 < (int)uVar17)
        goto LAB_14dce1790;
        uVar4 = puVar12[lVar8 + 1];
      }
      uStack_3f4 = -uVar4 & uVar4;
      uVar2 = (ulonglong)uStack_3f4 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_428 = (int)lVar8;
      uStack_3e4 = (local_3e0 - 1) + local_428;
      if ((int)local_2d0 < (int)uStack_3e4) {
        uStack_3e4 = local_2d0;
      }
    }
LAB_14dce1790:
    local_400 = (longlong *)local_2f8;
    iStack_3dc = iStack_444;
    local_3f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_2f8 + 0x10);
    uVar16 = local_2d0 & 0xffffffe0;
    iStack_3d8 = local_2f8._8_4_ - local_2c4;
    TStack_3c8._padding_ = CONCAT44(uStack_3f4,uVar17);
    uStack_3e8 = 0xffffffff;
    TStack_3c8.CurrentBitIndex = uStack_3e4;
    TStack_3c8.UnvisitedBitMask = 0xffffffff;
    iVar18 = (int)local_2d0 >> 5;
    TStack_3c8._28_4_ = iStack_444;
    TStack_3c8.BaseBitIndex = local_3e0;
    uStack_3a8 = CONCAT44(uStack_3d4,iStack_3d8);
    bVar10 = (byte)local_2d0;
    uStack_3f8 = uVar17;
    local_3d0 = local_400;
    TStack_3c8.Array = local_3f0;
    if (((int)local_2d0 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)(*pcVar5)();
      return pTVar9;
    }
    if (uVar20 != local_2d0) {
      puVar12 = (uint *)(local_2f8 + 0x10);
      if (local_2d8 != (uint *)0x0) {
        puVar12 = local_2d8;
      }
      uVar17 = -1 << (bVar10 & 0x1f) & puVar12[iVar18];
      while (uVar17 == 0) {
        lVar8 = (longlong)iVar18;
        uVar16 = uVar16 + 0x20;
        iVar18 = iVar18 + 1;
        uVar20 = local_2d0;
        if ((int)(((int)(local_2d0 - 1) >> 0x1f & 0x1fU) + (local_2d0 - 1)) >> 5 < iVar18)
        goto LAB_14dce18b0;
        uVar17 = puVar12[lVar8 + 1];
      }
      uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_424 = (int)lVar8;
      uVar20 = (uVar16 - 1) + local_424;
      if ((int)local_2d0 < (int)uVar20) {
        uVar20 = local_2d0;
      }
    }
LAB_14dce18b0:
    while( true ) {
      plVar6 = local_3d0;
      if ((int)local_3d0[1] - *(int *)((longlong)local_3d0 + 0x34) != (int)uStack_3a8) {
        local_477[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_477);
      }
      if (((TStack_3c8.CurrentBitIndex == uVar20) &&
          (TStack_3c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_2f8 + 0x10))) &&
         (plVar6 == (longlong *)local_2f8)) break;
      lVar8 = *plVar6;
      local_470.Data.ArrayNum = *(int *)(lVar8 + 0x18 + (longlong)TStack_3c8.CurrentBitIndex * 0x28)
      ;
      lVar15 = (longlong)local_470.Data.ArrayNum;
      lVar8 = lVar8 + (longlong)TStack_3c8.CurrentBitIndex * 0x28;
      _Src = *(void **)(lVar8 + 0x10);
      local_470.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_470.Data.ArrayNum == 0) {
        local_470.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_470.Data.ArrayNum,0,(ForAnyElementType *)&local_470,
                   local_470.Data.ArrayNum,&local_470.Data.ArrayMax);
        memcpy(local_470.Data.AllocatorInstance.Data,_Src,lVar15 * 2);
      }
      FStringFormatArg::FStringFormatArg(&local_340,&local_470);
      local_368 = &local_340;
      local_370 = lVar8;
      TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FStringFormatArg_&&>_>
                (&local_208,&local_420,(bool *)&local_370);
      if (local_340.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_340.StringValue.Data.AllocatorInstance.Data);
      }
      TStack_3c8.UnvisitedBitMask = TStack_3c8.UnvisitedBitMask & ~TStack_3c8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3c8);
    }
    if (pFVar1[1].Data.ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)pFVar1[1].Data.AllocatorInstance.Data;
    }
    ::FString::FormatImpl
              (&local_360,pwVar13,
               (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                *)&local_208);
    __return_storage_ptr__ =
         (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *)local_420.Value;
    TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
    Emplace<FString_const_&,FString>
              ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)local_420.Value,pFVar1,&local_360);
    if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_360.Data.AllocatorInstance.Data);
    }
    if (6 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    local_208.HashSize = 0;
    if (local_208.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_208.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_208.Elements);
    local_260 = 0;
    if (local_268 != (void *)0x0) {
      FMemory::Free(local_268);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_2a8);
    local_2b0 = 0;
    if (local_2b8 != (void *)0x0) {
      FMemory::Free(local_2b8);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_2f8);
    TStack_398.UnvisitedBitMask = TStack_398.UnvisitedBitMask & ~TStack_398._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_398);
    param_1 = local_408;
    pTVar19 = local_410;
    uVar17 = local_474;
  } while( true );
}

// ValidateDisableTonecurve @ 14dcecde0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FMovieGraphOCIOHelper::ValidateDisableTonecurve(FMovieGraphSampleState *param_1)

{
  if ((param_1->SceneCaptureSource != SCS_FinalColorHDR) &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0)) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (2 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_The_OCIO_transf_152cd04d0,
                   (FLogCategoryBase *)&LogMovieRenderPipeline);
      }
      ThreadSafeOnce256 = 1;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return;
}

