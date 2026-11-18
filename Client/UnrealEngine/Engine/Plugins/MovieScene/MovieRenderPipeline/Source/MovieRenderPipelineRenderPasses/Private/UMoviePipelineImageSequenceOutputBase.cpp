// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 12

// StaticClass @ 14ddbaeb0

UClass * __cdecl UMoviePipelineImageSequenceOutputBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutputBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MoviePipelineImageSequenceOutputBase",
               &Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutputBase.InnerSingleton,
               StaticRegisterNativesUMoviePipelineImageSequenceOutputBase,0x68,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineImageSequenceOutputBase>,
               InternalVTableHelperCtorCaller<UMoviePipelineImageSequenceOutputBase>,local_res8,
               UMoviePipelineOutputBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutputBase.InnerSingleton;
}

// UMoviePipelineImageSequenceOutputBase @ 14ddc8780

UMoviePipelineImageSequenceOutputBase * __thiscall
UMoviePipelineImageSequenceOutputBase::UMoviePipelineImageSequenceOutputBase
          (UMoviePipelineImageSequenceOutputBase *this,FVTableHelper *param_1)

{
  UMoviePipelineOutputBase::UMoviePipelineOutputBase((UMoviePipelineOutputBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelineImageSequenceOutputBase__6B_;
  *(undefined8 *)&this->FinalizeFence = 0;
  *(undefined8 *)&(this->FinalizeFence).field_0x8 = 0;
  return this;
}

// UMoviePipelineImageSequenceOutputBase @ 14ddc87c0

UMoviePipelineImageSequenceOutputBase * __thiscall
UMoviePipelineImageSequenceOutputBase::UMoviePipelineImageSequenceOutputBase
          (UMoviePipelineImageSequenceOutputBase *this)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this_00;
  IModuleInterface *pIVar3;
  IImageWriteQueue *pIVar4;
  FName local_res10;
  
  UMoviePipelineOutputBase::UMoviePipelineOutputBase((UMoviePipelineOutputBase *)this);
  this->_padding_ = (longlong)&___7UMoviePipelineImageSequenceOutputBase__6B_;
  *(undefined8 *)&this->FinalizeFence = 0;
  *(undefined8 *)&(this->FinalizeFence).field_0x8 = 0;
  if ((this->_padding_ & 0x20) == 0) {
    FModuleManager::Get();
    pFVar2 = ::FName::FName(&local_res10,"ImageWriteQueue");
    FVar1 = *pFVar2;
    this_00 = FModuleManager::Get();
    pIVar3 = FModuleManager::LoadModuleChecked(this_00,FVar1);
    pIVar4 = (IImageWriteQueue *)(**(code **)((longlong)*pIVar3 + 0x40))(pIVar3);
    this->ImageWriteQueue = pIVar4;
  }
  return this;
}

// ~UMoviePipelineImageSequenceOutputBase @ 14ddcbd80

void __thiscall
UMoviePipelineImageSequenceOutputBase::~UMoviePipelineImageSequenceOutputBase
          (UMoviePipelineImageSequenceOutputBase *this)

{
  this->_padding_ = (longlong)&___7UMoviePipelineImageSequenceOutputBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->FinalizeFence).field_0x8);
  UMoviePipelineOutputBase::~UMoviePipelineOutputBase((UMoviePipelineOutputBase *)this);
  return;
}

// BeginFinalizeImpl @ 14ddd54a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMoviePipelineImageSequenceOutputBase::BeginFinalizeImpl
          (UMoviePipelineImageSequenceOutputBase *this)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  longlong local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_48[0] = 0;
  local_20 = (longlong *)0x0;
  puVar1 = (undefined8 *)
           (**(code **)((longlong)*this->ImageWriteQueue + 0x10))
                     (this->ImageWriteQueue,local_58,local_48);
  if (&this->FinalizeFence != (TFuture<void> *)puVar1) {
    *(undefined8 *)&this->FinalizeFence = *puVar1;
    *puVar1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->FinalizeFence).field_0x8,
               (FSharedReferencer<1> *)(puVar1 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  if (local_48[0] != 0) {
    plVar2 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// GetFormatArguments @ 14dde0670

void __thiscall
UMoviePipelineImageSequenceOutputBase::GetFormatArguments
          (UMoviePipelineImageSequenceOutputBase *this,FMoviePipelineFormatArgs *param_1)

{
  TPairInitializer<FString_&&,FString_&&> local_res10;
  FString *local_38;
  FString *local_30;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_18,L"RenderPassName");
  ::FString::FString(&local_28,L"render_pass");
  local_38 = &local_28;
  local_30 = &local_18;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,&local_res10,(bool *)&local_38);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 14dde40e0

UClass * __cdecl UMoviePipelineImageSequenceOutputBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutputBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MoviePipelineImageSequenceOutputBase",
               &Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutputBase.InnerSingleton,
               StaticRegisterNativesUMoviePipelineImageSequenceOutputBase,0x68,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineImageSequenceOutputBase>,
               InternalVTableHelperCtorCaller<UMoviePipelineImageSequenceOutputBase>,local_res8,
               UMoviePipelineOutputBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutputBase.InnerSingleton;
}

// HasFinishedProcessingImpl @ 14dde6f90

bool __thiscall
UMoviePipelineImageSequenceOutputBase::HasFinishedProcessingImpl
          (UMoviePipelineImageSequenceOutputBase *this)

{
  longlong *plVar1;
  char cVar2;
  
  if (*(longlong *)&this->FinalizeFence != 0) {
    plVar1 = *(longlong **)(*(longlong *)&this->FinalizeFence + 0x60);
    cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0,0);
    if (cVar2 == '\0') {
      return false;
    }
  }
  return true;
}

// IsAlphaAllowed @ 14dde7c80

bool __thiscall
UMoviePipelineImageSequenceOutputBase::IsAlphaAllowed(UMoviePipelineImageSequenceOutputBase *this)

{
  return false;
}

// OnReceiveImageDataImpl @ 14ddee200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ddefb63) */
/* WARNING: Removing unreachable block (ram,0x00014ddef1a9) */
/* WARNING: Removing unreachable block (ram,0x00014ddef30e) */
/* WARNING: Removing unreachable block (ram,0x00014ddef044) */
/* WARNING: Removing unreachable block (ram,0x00014ddef53a) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffee8 : 0x00014ddef1ad */
/* WARNING: Removing unreachable block (ram,0x00014ddef9df) */
/* WARNING: Removing unreachable block (ram,0x00014ddefb53) */
/* WARNING: Removing unreachable block (ram,0x00014ddef86a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipelineImageSequenceOutputBase::OnReceiveImageDataImpl
          (UMoviePipelineImageSequenceOutputBase *this,FMoviePipelineMergerOutputFrame *param_1)

{
  TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *pTVar3;
  TMap<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *pTVar4;
  undefined1 *puVar5;
  FMoviePipelineFrameOutputState *pFVar6;
  FCompositePassInfo *pFVar7;
  EImageFormat EVar8;
  int iVar9;
  undefined8 uVar10;
  TUniqueFunction<void___cdecl(FImagePixelData_*)> *pTVar11;
  longlong *plVar12;
  FImagePixelData *pFVar13;
  code *pcVar14;
  bool bVar15;
  UMoviePipelineImageSequenceOutputBase *this_00;
  FMoviePipelineMergerOutputFrame *pFVar16;
  bool bVar17;
  char cVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  TStatId TVar22;
  UMoviePipeline *pUVar23;
  UMoviePipelinePrimaryConfig *pUVar24;
  UMoviePipelineOutputSetting *pUVar25;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar26;
  size_t sVar27;
  TFuture<bool> *pTVar28;
  uint uVar29;
  longlong lVar30;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> TVar31;
  undefined8 **ppuVar32;
  wchar_t *pwVar33;
  ForAnyElementType FVar34;
  ulonglong uVar35;
  FScriptContainerElement *pFVar36;
  FScriptContainerElement *pFVar37;
  FImageWriteTask *pFVar38;
  undefined8 *puVar39;
  FImageWriteTask *this_01;
  EImagePixelType EVar40;
  FString *pFVar41;
  TIntPoint<int>_u_0 TVar42;
  undefined1 auStackY_688 [32];
  uint local_638;
  undefined1 local_634;
  undefined1 local_633;
  undefined1 local_632;
  undefined1 local_631;
  undefined1 local_630 [4];
  EImagePixelType local_62c;
  FImageWriteTask *local_628;
  FImageWriteTask *local_620;
  longlong local_618;
  TArray<MoviePipeline::FCompositePassInfo,TSizedDefaultAllocator<32>_> local_610;
  int local_600;
  uint local_5fc;
  undefined8 *local_5f8;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> local_5f0;
  UMoviePipelineImageSequenceOutputBase *local_5e8;
  FString *local_5e0;
  int local_5d8;
  undefined8 *local_5d0;
  undefined8 *local_5c8;
  int local_5c0 [2];
  FMoviePipelineOutputFutureData local_5b8;
  FString local_580;
  FName local_570;
  byte local_568;
  FString local_560;
  FString FStack_550;
  undefined8 uStack_540;
  int local_538;
  undefined4 uStack_534;
  FMoviePipelineMergerOutputFrame *local_530;
  FImageWriteTask *local_528;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_520;
  undefined1 local_500 [8];
  UMoviePipelineOutputSetting *local_4f8;
  FScriptContainerElement *local_4f0;
  UMoviePipelineColorSetting *local_4e8;
  FString local_4e0;
  TMap<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_4d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4c8;
  undefined8 uStack_4a8;
  FSourceLocation local_498;
  FString local_478;
  undefined4 local_45f;
  undefined2 local_45b;
  undefined1 local_459;
  undefined8 local_458;
  TIntPoint<int>_u_0 local_450;
  undefined8 local_448;
  TIntPoint<int>_u_0 local_440;
  undefined8 local_438;
  TIntPoint<int>_u_0 local_430;
  FString local_428;
  FString *local_418;
  FString *local_410;
  FString local_408;
  TAsyncCropImage<FLinearColor> local_3f8;
  TAsyncCropImage<FFloat16Color> local_3d8;
  TAsyncCropImage<FColor> local_3b8;
  FString *local_398;
  FString *local_390;
  FString local_388;
  undefined1 local_378 [40];
  int local_350;
  undefined4 uStack_34c;
  undefined1 local_348 [8];
  TReferenceControllerBase<1> *local_340;
  TMap<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_330;
  longlong lStack_328;
  TBitArray<FDefaultBitArrayAllocator> *local_320;
  undefined8 uStack_318;
  int iStack_314;
  undefined4 local_310;
  undefined4 uStack_30c;
  int iStack_308;
  undefined4 uStack_304;
  FString local_300;
  code *local_2e8 [2];
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined1 local_2c8;
  undefined4 uStack_2c7;
  undefined2 uStack_2c3;
  undefined1 uStack_2c1;
  longlong local_2c0;
  code *local_2b8 [2];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  TIntPoint<int>_u_0 local_298;
  longlong local_290;
  code *local_288 [2];
  undefined8 local_278;
  undefined8 uStack_270;
  TIntPoint<int>_u_0 local_268;
  longlong local_260;
  code *local_258 [2];
  undefined8 local_248;
  undefined8 uStack_240;
  TIntPoint<int>_u_0 local_238;
  longlong local_230;
  undefined1 local_228 [32];
  void *local_208;
  undefined4 local_200;
  uint local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  void *local_1e8;
  undefined4 local_1e0;
  undefined1 local_1d8 [32];
  void *local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  void *local_198;
  undefined4 local_190;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_188;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
  local_178;
  TUniqueFunction<void___cdecl(FImagePixelData_*)> local_128;
  TUniqueFunction<void___cdecl(FImagePixelData_*)> local_f8;
  TUniqueFunction<void___cdecl(FImagePixelData_*)> local_c8;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_688;
  local_638 = 0;
  local_5e8 = this;
  local_530 = param_1;
  TVar22 = FThreadSafeStaticStatInner<FStat_STAT_ImgSeqRecieveImageData,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_ImgSeqRecieveImageData,1> *)
                      &StatPtr_STAT_ImgSeqRecieveImageData);
  local_498.Impl._Line = 0x57;
  local_498.Impl._Column = 2;
  local_498.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineImageSequenceOutput.cpp"
  ;
  local_498.Impl._Function =
       "void __cdecl UMoviePipelineImageSequenceOutputBase::OnReceiveImageDataImpl(struct FMoviePipelineMergerOutputFrame *)"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_570,*(TStatIdData **)&(TVar22.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_498);
  if ((param_1 == (FMoviePipelineMergerOutputFrame *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InMergedOutputFrame",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineImageSequenceOutput.cpp"
                          ,0x59,L""), bVar17)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  local_610.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_610.ArrayNum = 0;
  local_610.ArrayMax = 0;
  MoviePipeline::GetPassCompositeData(param_1,&local_610);
  pUVar23 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar24 = UMoviePipeline::GetPipelinePrimaryConfig(pUVar23);
  pUVar25 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                      ((UMoviePipelineConfigBase *)pUVar24,false);
  local_4f8 = pUVar25;
  if ((pUVar25 == (UMoviePipelineOutputSetting *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutputSettings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineImageSequenceOutput.cpp"
                          ,0x61,L""), bVar17)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pUVar23 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar24 = UMoviePipeline::GetPipelinePrimaryConfig(pUVar23);
  local_4e8 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineColorSetting>
                        ((UMoviePipelineConfigBase *)pUVar24,false);
  ::FString::FString(&local_428,&(pUVar25->OutputDirectory).Path);
  local_600 = 0;
  local_5d8 = (*(int *)&(param_1->ImageOutputData).field_0x8 -
              *(int *)&(param_1->ImageOutputData).field_0x34) - local_610.ArrayNum;
  pTVar4 = &param_1->ImageOutputData;
  local_520._padding_._0_4_ = 0;
  local_520._padding_._4_4_ = 1;
  puVar5 = &(param_1->ImageOutputData).field_0x10;
  local_520.UnvisitedBitMask = 0xffffffff;
  local_520.CurrentBitIndex = 0;
  local_520.BaseBitIndex = 0;
  local_520.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar5;
  if (*(int *)&(param_1->ImageOutputData).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_520);
  }
  TStack_4c8._padding_ = CONCAT44(local_520._padding_._4_4_,(undefined4)local_520._padding_);
  local_378._16_8_ = local_520.Array;
  TStack_4c8.CurrentBitIndex = local_520.CurrentBitIndex;
  TStack_4c8.UnvisitedBitMask = local_520.UnvisitedBitMask;
  TStack_4c8._28_4_ = local_520._28_4_;
  TStack_4c8.BaseBitIndex = local_520.BaseBitIndex;
  local_350 = *(int *)&(param_1->ImageOutputData).field_0x8 -
              *(int *)&(param_1->ImageOutputData).field_0x34;
  TStack_4c8.Array = local_520.Array;
  uStack_4a8 = CONCAT44(uStack_34c,local_350);
  local_4d0 = pTVar4;
  local_378._0_8_ = pTVar4;
  local_378._8_8_ = TStack_4c8._padding_;
  local_378._24_8_ = TStack_4c8._16_8_;
  local_378._32_8_ = TStack_4c8._24_8_;
  pTVar26 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_378,
                       (TBitArray<FDefaultBitArrayAllocator> *)puVar5,
                       *(int *)&(param_1->ImageOutputData).field_0x28);
  local_560.Data._8_8_ = pTVar26->_padding_;
  FStack_550.Data.AllocatorInstance.Data = (FScriptContainerElement *)pTVar26->Array;
  FStack_550.Data.ArrayNum = pTVar26->UnvisitedBitMask;
  FStack_550.Data.ArrayMax = pTVar26->CurrentBitIndex;
  uVar10 = *(undefined8 *)&pTVar26->BaseBitIndex;
  local_538 = *(int *)&(param_1->ImageOutputData).field_0x8 -
              *(int *)&(param_1->ImageOutputData).field_0x34;
  uStack_540._0_4_ = (undefined4)uVar10;
  uStack_540._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
  local_310 = (undefined4)uStack_540;
  uStack_30c = uStack_540._4_4_;
  uStack_304 = uStack_534;
  local_560.Data.AllocatorInstance.Data = (FScriptContainerElement *)pTVar4;
  uStack_540 = uVar10;
  local_330 = pTVar4;
  lStack_328 = local_560.Data._8_8_;
  local_320 = (TBitArray<FDefaultBitArrayAllocator> *)FStack_550.Data.AllocatorInstance.Data;
  uStack_318 = FStack_550.Data._8_8_;
  iStack_308 = local_538;
  do {
    pTVar4 = local_4d0;
    if (*(int *)&local_4d0->field_0x8 - *(int *)&local_4d0->field_0x34 != (int)uStack_4a8) {
      local_634 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_634);
    }
    if (((TStack_4c8.CurrentBitIndex == iStack_314) && (TStack_4c8.Array == local_320)) &&
       (pTVar4 == local_330)) {
      if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_428.Data.AllocatorInstance.Data);
      }
      DestructItems<MoviePipeline::FCompositePassInfo,int>
                ((FCompositePassInfo *)local_610.AllocatorInstance.Data,local_610.ArrayNum);
      if ((FCompositePassInfo *)local_610.AllocatorInstance.Data != (FCompositePassInfo *)0x0) {
        FMemory::Free(local_610.AllocatorInstance.Data);
      }
      if ((local_568 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_568 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_568 & 4) != 0) {
        FThreadStats::AddMessage(local_570,CycleScopeEnd);
      }
      return;
    }
    pFVar41 = (FString *)((longlong)TStack_4c8.CurrentBitIndex * 0x30 + *(longlong *)pTVar4);
    iVar21 = local_610.ArrayNum;
    pFVar36 = local_610.AllocatorInstance.Data + (longlong)local_610.ArrayNum * 0x28;
    pFVar37 = local_610.AllocatorInstance.Data + 0x18;
    local_5e0 = pFVar41;
    while( true ) {
      if (local_610.ArrayNum != iVar21) {
        local_633 = 0;
        `TCheckedPointerIterator<MoviePipeline::FCompositePassInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_633);
      }
      if (pFVar37 + -0x18 == pFVar36) break;
      iVar19 = *(int *)(pFVar37 + -0x10);
      iVar9 = (pFVar41->Data).ArrayNum;
      if (iVar19 == iVar9) {
        if (1 < iVar19) {
          iVar19 = FGenericPlatformStricmp::Stricmp
                             (*(wchar_t **)&pFVar37[-0x18].field_0x0,
                              (wchar_t *)(pFVar41->Data).AllocatorInstance.Data);
          bVar17 = iVar19 == 0;
          goto LAB_14ddee525;
        }
LAB_14ddee52c:
        iVar19 = *(int *)pFVar37;
        iVar9 = pFVar41[1].Data.ArrayNum;
        if (iVar19 == iVar9) {
          if (iVar19 < 2) goto LAB_14ddefd25;
          iVar19 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)
                              (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(pFVar37 + -8))->
                              AllocatorInstance).Data,
                              (wchar_t *)pFVar41[1].Data.AllocatorInstance.Data);
          bVar17 = iVar19 == 0;
        }
        else {
          bVar17 = iVar19 + iVar9 == 1;
        }
        if (bVar17) goto LAB_14ddefd25;
      }
      else {
        bVar17 = iVar19 + iVar9 == 1;
LAB_14ddee525:
        if (bVar17) goto LAB_14ddee52c;
      }
      pFVar37 = pFVar37 + 0x28;
    }
    EVar8 = this->OutputFormat;
    local_62c = (EImagePixelType)EVar8;
    lVar30 = *(longlong *)(pFVar41[2].Data.AllocatorInstance.Data + 0x18);
    if ((*(char *)(lVar30 + 0x2d0) != '\0') &&
       (local_62c = (EImagePixelType)EVar8, (EVar8 - JPEG & 0xfd) == 0)) {
      local_62c = 0;
    }
    local_628 = (FImageWriteTask *)0x15060d16c;
    local_5fc = (uint)(char)local_62c;
    if ((char)local_62c == '\0') {
      local_628 = (FImageWriteTask *)0x15092fec0;
    }
    else if (local_5fc == 1) {
      local_628 = (FImageWriteTask *)0x15092fec8;
    }
    else if (local_5fc == 3) {
      local_628 = (FImageWriteTask *)0x1506a9788;
    }
    else if (local_5fc == 5) {
      local_628 = (FImageWriteTask *)0x15092fef0;
    }
    local_5b8.Shot = (UMoviePipelineExecutorShot *)0x0;
    local_5b8.FilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5b8.FilePath.Data.ArrayNum = 0;
    local_5b8.FilePath.Data.ArrayMax = 0;
    local_5b8.PassIdentifier.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5b8.PassIdentifier.Name.Data.ArrayNum = 0;
    local_5b8.PassIdentifier.Name.Data.ArrayMax = 0;
    local_5b8.PassIdentifier.CameraName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    local_5b8.PassIdentifier.CameraName.Data.ArrayNum = 0;
    local_5b8.PassIdentifier.CameraName.Data.ArrayMax = 0;
    local_618 = lVar30;
    pUVar23 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)local_5e8);
    uVar20 = *(uint *)(lVar30 + 0xd4);
    uVar29 = 0;
    if ((int)uVar20 < (pUVar23->ActiveShotList).ArrayNum) {
      uVar29 = ~uVar20 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    local_5b8.Shot =
         *(UMoviePipelineExecutorShot **)
          ((pUVar23->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar20 * 8);
    ::FString::operator=(&local_5b8.PassIdentifier.Name,pFVar41);
    ::FString::operator=(&local_5b8.PassIdentifier.CameraName,pFVar41 + 1);
    local_560.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_560.Data.ArrayNum = 0;
    local_560.Data.ArrayMax = 0;
    FStack_550.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_550.Data.ArrayNum = 0;
    FStack_550.Data.ArrayMax = 0;
    ::operator/(&local_580,&local_428,&local_4f8->FileNameFormat);
    pFVar16 = local_530;
    local_178.Elements._0_8_ = 0;
    local_178.Elements._8_8_ = 0;
    local_178.Elements._32_8_ = 0;
    local_178.Elements._40_4_ = 0;
    local_178.Elements._44_4_ = 0x80;
    local_178.Elements._48_4_ = 0xffffffff;
    local_178.Elements._52_4_ = 0;
    local_178.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_178.HashSize = 0;
    pFVar37 = (local_530->ExpectedRenderPasses).AllocatorInstance.Data;
    iVar21 = (local_530->ExpectedRenderPasses).ArrayNum;
    pFVar36 = pFVar37 + (longlong)iVar21 * 0x20;
    while( true ) {
      if ((pFVar16->ExpectedRenderPasses).ArrayNum != iVar21) {
        local_632 = 0;
        `TCheckedPointerIterator<FMoviePipelinePassIdentifier_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_632);
      }
      pFVar38 = local_628;
      EVar40 = local_62c;
      if (pFVar37 == pFVar36) break;
      iVar19 = *(int *)(pFVar37 + 8) + -1;
      if (*(int *)(pFVar37 + 8) == 0) {
        pwVar33 = L"";
        iVar19 = 0;
      }
      else {
        pwVar33 = *(wchar_t **)&pFVar37->field_0x0;
      }
      uVar20 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar19,pwVar33);
      iVar19 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>(&local_178,uVar20,(FString *)pFVar37);
      if ((iVar19 == -1) ||
         (lVar30 = (longlong)iVar19 * 0x20 + local_178.Elements._0_8_, lVar30 == 0)) {
        local_4f0 = pFVar37;
        TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
        EmplaceByHash<TKeyInitializer<FString_const_&>_>
                  (&local_178,(uint)local_5c0,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar20,
                   (bool *)&local_4f0);
        lVar30 = (longlong)local_5c0[0] * 0x20 + local_178.Elements._0_8_;
      }
      *(int *)(lVar30 + 0x10) = *(int *)(lVar30 + 0x10) + 1;
      pFVar37 = pFVar37 + 0x20;
    }
    iVar21 = local_610.ArrayNum;
    pFVar7 = (FCompositePassInfo *)
             (local_610.AllocatorInstance.Data + (longlong)local_610.ArrayNum * 0x28);
    FVar34.Data = local_610.AllocatorInstance.Data;
    while( true ) {
      if (local_610.ArrayNum != iVar21) {
        local_631 = 0;
        `TCheckedPointerIterator<MoviePipeline::FCompositePassInfo_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(&local_631);
      }
      uVar20 = local_5fc;
      if ((FCompositePassInfo *)FVar34.Data == pFVar7) break;
      if (local_178.Elements._8_4_ != local_178.Elements._52_4_) {
        iVar19 = (((FCompositePassInfo *)FVar34.Data)->PassIdentifier).Name.Data.ArrayNum;
        if (iVar19 == 0) {
          pwVar33 = L"";
          iVar19 = 0;
        }
        else {
          pwVar33 = (wchar_t *)
                    (((FCompositePassInfo *)FVar34.Data)->PassIdentifier).Name.Data.
                    AllocatorInstance.Data;
          iVar19 = iVar19 + -1;
        }
        uVar20 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar19,pwVar33);
        TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
        RemoveImpl<FString>(&local_178,uVar20,(FString *)FVar34.Data);
      }
      FVar34.Data = FVar34.Data + 0x28;
    }
    iVar21 = local_178.Elements._8_4_ - local_178.Elements._52_4_;
    this_01 = (FImageWriteTask *)0x0;
    local_178.HashSize = 0;
    if (local_178.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_178.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_178.Elements);
    bVar17 = FMoviePipelineMergerOutputFrame::HasDataFromMultipleCameras(local_530);
    UE::MoviePipeline::ValidateOutputFormatString(&local_580,1 < iVar21,true,bVar17);
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    ::FString::FString(&local_408,L"render_pass");
    local_418 = &local_408;
    local_410 = local_5e0;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>
              (&local_98,(TPairInitializer<FString_&&,FString_const_&> *)local_500,
               (bool *)&local_418);
    if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_408.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_478,(wchar_t *)pFVar38);
    ::FString::FString(&local_388,L"ext");
    local_398 = &local_388;
    local_390 = &local_478;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              (&local_98,(TPairInitializer<FString_&&,FString_&&> *)(local_500 + 4),
               (bool *)&local_398);
    if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data.AllocatorInstance.Data);
    }
    if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_478.Data.AllocatorInstance.Data);
    }
    this_00 = local_5e8;
    local_228._0_8_ = (FScriptContainerElement *)0x0;
    local_228._8_8_ = 0;
    local_208 = (void *)0x0;
    local_200 = 0;
    local_1fc = 0x80;
    local_1f8 = 0xffffffff;
    local_1f4 = 0;
    local_1e8 = (void *)0x0;
    local_1e0 = 0;
    local_1d8._0_8_ = (FScriptContainerElement *)0x0;
    local_1d8._8_8_ = 0;
    local_1b8 = (void *)0x0;
    local_1b0 = 0;
    local_1ac = 0x80;
    local_1a8 = 0xffffffff;
    local_1a4 = 0;
    local_198 = (void *)0x0;
    local_190 = 0;
    local_188.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
    pUVar23 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)local_5e8);
    lVar30 = local_618;
    pFVar6 = (FMoviePipelineFrameOutputState *)(local_618 + 0xd0);
    UMoviePipeline::ResolveFilenameFormatArguments
              (pUVar23,&local_580,
               (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)&local_98,&FStack_550,(FMoviePipelineFormatArgs *)local_228,pFVar6,
               -*(int *)(local_618 + 0xe4));
    pUVar23 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this_00);
    UMoviePipeline::ResolveFilenameFormatArguments
              (pUVar23,&local_580,
               (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)&local_98,&local_5b8.FilePath,(FMoviePipelineFormatArgs *)local_228,pFVar6,0);
    bVar17 = FPaths::IsRelative(&local_5b8.FilePath);
    if (bVar17) {
      pFVar41 = FPaths::ConvertRelativePathToFull(&local_300,&local_5b8.FilePath);
      if (&local_5b8.FilePath != pFVar41) {
        if (local_5b8.FilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5b8.FilePath.Data.AllocatorInstance.Data);
        }
        local_5b8.FilePath.Data.AllocatorInstance.Data = (pFVar41->Data).AllocatorInstance.Data;
        (pFVar41->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5b8.FilePath.Data.ArrayNum = (pFVar41->Data).ArrayNum;
        local_5b8.FilePath.Data.ArrayMax = (pFVar41->Data).ArrayMax;
        (pFVar41->Data).ArrayNum = 0;
        (pFVar41->Data).ArrayMax = 0;
      }
      lVar30 = local_618;
      if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_300.Data.AllocatorInstance.Data);
        lVar30 = local_618;
      }
    }
    UE::MoviePipeline::RemoveFrameNumberFormatStrings(&local_580,true);
    pUVar23 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this_00);
    UMoviePipeline::ResolveFilenameFormatArguments
              (pUVar23,&local_580,
               (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)&local_98,&local_560,(FMoviePipelineFormatArgs *)local_228,pFVar6,0);
    sVar27 = wcslen((wchar_t *)pFVar38);
    ::FString::RemoveFromEnd(&local_560,(wchar_t *)pFVar38,(int)sVar27,IgnoreCase);
    ::FString::FString(&local_4e0,".");
    iVar21 = local_4e0.Data.ArrayNum;
    iVar19 = iVar21 + -1;
    if (iVar21 == 0) {
      iVar19 = 0;
    }
    FVar34.Data = (FScriptContainerElement *)L"";
    if (iVar21 != 0) {
      FVar34.Data = local_4e0.Data.AllocatorInstance.Data;
    }
    ::FString::RemoveFromEnd(&local_560,(wchar_t *)FVar34.Data,iVar19,IgnoreCase);
    if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
    }
    local_190 = 0;
    if (local_198 != (void *)0x0) {
      FMemory::Free(local_198);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_1d8,0,local_1d8._8_4_);
    iVar21 = SUB84(local_1d8._8_8_,4);
    local_1d8._8_8_ = local_1d8._8_8_ & 0xffffffff00000000;
    if (iVar21 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_1d8,0,(int *)(local_1d8 + 0xc));
    }
    local_1a8 = 0xffffffff;
    local_1a4 = 0;
    local_1b0 = 0;
    if (0x80 < local_1ac) {
      local_1ac = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10),0);
    }
    if (local_1b8 != (void *)0x0) {
      FMemory::Free(local_1b8);
    }
    if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1d8._0_8_);
    }
    local_1e0 = 0;
    if (local_1e8 != (void *)0x0) {
      FMemory::Free(local_1e8);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_228,0,local_228._8_4_);
    iVar21 = SUB84(local_228._8_8_,4);
    local_228._8_8_ = local_228._8_8_ & 0xffffffff00000000;
    if (iVar21 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_228,0,(int *)(local_228 + 0xc));
    }
    local_1f8 = 0xffffffff;
    local_1f4 = 0;
    local_200 = 0;
    if (0x80 < local_1fc) {
      local_1fc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_228 + 0x10),0);
    }
    if (local_208 != (void *)0x0) {
      FMemory::Free(local_208);
    }
    if ((FScriptContainerElement *)local_228._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_228._0_8_);
    }
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
    if (local_580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_580.Data.AllocatorInstance.Data);
    }
    local_628 = ::operator_new(0x80);
    if (local_628 != (FImageWriteTask *)0x0) {
      *(undefined ***)local_628 = &___7FImageWriteTask__6B_;
      (local_628->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (local_628->Filename).Data.ArrayNum = 0;
      (local_628->Filename).Data.ArrayMax = 0;
      local_628->Format = BMP;
      local_628->CompressionQuality = 0;
      local_628->bOverwriteFile = true;
      *(undefined8 *)&local_628->OnCompleted = 0;
      *(undefined8 *)&(local_628->OnCompleted).field_0x28 = 0;
      (local_628->PixelData).Ptr = (FImagePixelData *)0x0;
      (local_628->PixelPreProcessors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (local_628->PixelPreProcessors).ArrayNum = 0;
      (local_628->PixelPreProcessors).ArrayMax = 0;
      this_01 = local_628;
    }
    this_01->Format = (EImageFormat)EVar40;
    this_01->CompressionQuality = 100;
    iVar21 = local_5b8.FilePath.Data.ArrayNum + -1;
    if (local_5b8.FilePath.Data.ArrayNum == 0) {
      iVar21 = 0;
    }
    local_620 = this_01;
    ::FString::AssignRange
              (&this_01->Filename,(wchar_t *)local_5b8.FilePath.Data.AllocatorInstance.Data,iVar21);
    pFVar41 = local_5e0;
    this = local_5e8;
    TVar42 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    if ((*(int *)(lVar30 + 0xa0) == *(int *)(lVar30 + 0x98)) &&
       (*(int *)(lVar30 + 0xa4) == *(int *)(lVar30 + 0x9c))) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    uVar10 = *(undefined8 *)(local_5e0[2].Data.AllocatorInstance.Data + 8);
    if (((int)uVar10 == *(int *)(lVar30 + 0x58)) &&
       ((int)((ulonglong)uVar10 >> 0x20) == *(int *)(lVar30 + 0x5c))) {
      bVar15 = true;
    }
    else {
      bVar15 = false;
    }
    cVar18 = (**(code **)(local_5e8->_padding_ + 0x380))(local_5e8);
    lVar30 = local_618;
    if (((cVar18 == '\0') || (!bVar17)) || (!bVar15)) {
      TVar42 = *(TIntPoint<int>_u_0 *)(local_618 + 0x98);
    }
    else {
      iVar21 = *(int *)(pFVar41[2].Data.AllocatorInstance.Data + 0x10);
      if (iVar21 == 0) {
        pTVar1 = &this_01->PixelPreProcessors;
        local_3b8.OutCroppedImage.Ptr = (FImagePixelData *)0x0;
        local_3b8.CropRect.field0_0x0._s_0.Min.field0_0x0 =
             (TIntPoint<int>)*(TIntPoint<int>_u_0 *)(local_618 + 0x98);
        local_3b8.CropRect.field0_0x0._s_0.Max.field0_0x0 =
             (TIntPoint<int>)*(TIntPoint<int>_u_0 *)(local_618 + 0xa0);
        local_3b8.ParentWriteTask = this_01;
        TUniqueFunction<void___cdecl(FImagePixelData_*)>::
        TUniqueFunction<void___cdecl(FImagePixelData_*)><TAsyncCropImage<FColor>_>
                  (&local_f8,&local_3b8);
        pTVar11 = (TUniqueFunction<void___cdecl(FImagePixelData_*)> *)
                  (pTVar1->AllocatorInstance).Data;
        if (((pTVar11 <= &local_f8) &&
            (&local_f8 < pTVar11 + (this_01->PixelPreProcessors).ArrayMax)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        piVar2 = &(this_01->PixelPreProcessors).ArrayMax;
        iVar21 = (this_01->PixelPreProcessors).ArrayNum;
        if (iVar21 == *piVar2) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1030,&pTVar1->AllocatorInstance,piVar2);
        }
        (this_01->PixelPreProcessors).ArrayNum = iVar21 + 1;
        pFVar37 = (pTVar1->AllocatorInstance).Data + (longlong)iVar21 * 0x30;
        *(undefined8 *)pFVar37 = local_f8._0_8_;
        *(undefined8 *)(pFVar37 + 0x28) = local_f8._40_8_;
        local_f8._40_8_ = 0;
        *(undefined4 *)(pFVar37 + 0x10) = local_f8._16_4_;
        *(undefined4 *)(pFVar37 + 0x14) = local_f8._20_4_;
        *(undefined4 *)(pFVar37 + 0x18) = local_f8._24_4_;
        *(undefined4 *)(pFVar37 + 0x1c) = local_f8._28_4_;
        *(undefined8 *)(pFVar37 + 0x20) = local_f8._32_8_;
        if (*(longlong *)pFVar37 != 0) {
          local_f8._0_8_ = 0;
        }
        TVar31.Ptr = local_3b8.OutCroppedImage.Ptr;
        if (local_f8._0_8_ != 0) {
          (**(code **)(CONCAT44(local_f8._20_4_,local_f8._16_4_) + 0x10))();
          TVar31.Ptr = local_3b8.OutCroppedImage.Ptr;
        }
      }
      else if (iVar21 == 1) {
        pTVar1 = &this_01->PixelPreProcessors;
        local_3d8.OutCroppedImage.Ptr = (FImagePixelData *)0x0;
        local_3d8.CropRect.field0_0x0._s_0.Min.field0_0x0 =
             (TIntPoint<int>)*(TIntPoint<int>_u_0 *)(local_618 + 0x98);
        local_3d8.CropRect.field0_0x0._s_0.Max.field0_0x0 =
             (TIntPoint<int>)*(TIntPoint<int>_u_0 *)(local_618 + 0xa0);
        local_3d8.ParentWriteTask = this_01;
        TUniqueFunction<void___cdecl(FImagePixelData_*)>::
        TUniqueFunction<void___cdecl(FImagePixelData_*)><TAsyncCropImage<FFloat16Color>_>
                  (&local_128,&local_3d8);
        pTVar11 = (TUniqueFunction<void___cdecl(FImagePixelData_*)> *)
                  (pTVar1->AllocatorInstance).Data;
        if (((pTVar11 <= &local_128) &&
            (&local_128 < pTVar11 + (this_01->PixelPreProcessors).ArrayMax)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        piVar2 = &(this_01->PixelPreProcessors).ArrayMax;
        iVar21 = (this_01->PixelPreProcessors).ArrayNum;
        if (iVar21 == *piVar2) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1030,&pTVar1->AllocatorInstance,piVar2);
        }
        (this_01->PixelPreProcessors).ArrayNum = iVar21 + 1;
        pFVar37 = (pTVar1->AllocatorInstance).Data + (longlong)iVar21 * 0x30;
        *(undefined8 *)pFVar37 = local_128._0_8_;
        *(undefined8 *)(pFVar37 + 0x28) = local_128._40_8_;
        local_128._40_8_ = 0;
        *(undefined4 *)(pFVar37 + 0x10) = local_128._16_4_;
        *(undefined4 *)(pFVar37 + 0x14) = local_128._20_4_;
        *(undefined4 *)(pFVar37 + 0x18) = local_128._24_4_;
        *(undefined4 *)(pFVar37 + 0x1c) = local_128._28_4_;
        *(undefined8 *)(pFVar37 + 0x20) = local_128._32_8_;
        if (*(longlong *)pFVar37 != 0) {
          local_128._0_8_ = 0;
        }
        TVar31.Ptr = local_3d8.OutCroppedImage.Ptr;
        if (local_128._0_8_ != 0) {
          (**(code **)(CONCAT44(local_128._20_4_,local_128._16_4_) + 0x10))();
          TVar31.Ptr = local_3d8.OutCroppedImage.Ptr;
        }
      }
      else {
        if (iVar21 != 2) goto LAB_14ddef33f;
        pTVar1 = &this_01->PixelPreProcessors;
        local_3f8.OutCroppedImage.Ptr = (FImagePixelData *)0x0;
        local_3f8.CropRect.field0_0x0._s_0.Min.field0_0x0 =
             (TIntPoint<int>)*(TIntPoint<int>_u_0 *)(local_618 + 0x98);
        local_3f8.CropRect.field0_0x0._s_0.Max.field0_0x0 =
             (TIntPoint<int>)*(TIntPoint<int>_u_0 *)(local_618 + 0xa0);
        local_3f8.ParentWriteTask = this_01;
        TUniqueFunction<void___cdecl(FImagePixelData_*)>::
        TUniqueFunction<void___cdecl(FImagePixelData_*)><TAsyncCropImage<FLinearColor>_>
                  (&local_c8,&local_3f8);
        pTVar11 = (TUniqueFunction<void___cdecl(FImagePixelData_*)> *)
                  (pTVar1->AllocatorInstance).Data;
        if (((pTVar11 <= &local_c8) &&
            (&local_c8 < pTVar11 + (this_01->PixelPreProcessors).ArrayMax)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        piVar2 = &(this_01->PixelPreProcessors).ArrayMax;
        iVar21 = (this_01->PixelPreProcessors).ArrayNum;
        if (iVar21 == *piVar2) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1030,&pTVar1->AllocatorInstance,piVar2);
        }
        (this_01->PixelPreProcessors).ArrayNum = iVar21 + 1;
        pFVar37 = (pTVar1->AllocatorInstance).Data + (longlong)iVar21 * 0x30;
        *(undefined8 *)pFVar37 = local_c8._0_8_;
        *(undefined8 *)(pFVar37 + 0x28) = local_c8._40_8_;
        local_c8._40_8_ = 0;
        *(undefined4 *)(pFVar37 + 0x10) = local_c8._16_4_;
        *(undefined4 *)(pFVar37 + 0x14) = local_c8._20_4_;
        *(undefined4 *)(pFVar37 + 0x18) = local_c8._24_4_;
        *(undefined4 *)(pFVar37 + 0x1c) = local_c8._28_4_;
        *(undefined8 *)(pFVar37 + 0x20) = local_c8._32_8_;
        if (*(longlong *)pFVar37 != 0) {
          local_c8._0_8_ = 0;
        }
        TVar31.Ptr = local_3f8.OutCroppedImage.Ptr;
        if (local_c8._0_8_ != 0) {
          (**(code **)(CONCAT44(local_c8._20_4_,local_c8._16_4_) + 0x10))();
          TVar31.Ptr = local_3f8.OutCroppedImage.Ptr;
        }
      }
      if (TVar31.Ptr != (FImagePixelData *)0x0) {
        (**(code **)(TVar31.Ptr)->_padding_)(TVar31.Ptr,1);
      }
    }
LAB_14ddef33f:
    pFVar37 = pFVar41[2].Data.AllocatorInstance.Data;
    (**(code **)(*(longlong *)pFVar37 + 0x10))(pFVar37,&local_5f0);
    local_638 = local_638 | 0x14;
    local_62c = (local_5f0.Ptr)->Type;
    if (((uVar20 == 0) || (uVar20 == 1)) || (uVar20 == 3)) {
      if ((local_4e8 == (UMoviePipelineColorSetting *)0x0) ||
         ((local_4e8->OCIOConfiguration).bIsEnabled == false)) {
        local_2c8 = 1;
      }
      else {
        local_2c8 = 0;
      }
      pTVar1 = &this_01->PixelPreProcessors;
      local_2c0 = 0;
      local_2d8 = &
                  ___7__TFunction_OwnedObject_UFAsyncImageQuantization_MoviePipeline_UE___00_0A__Function_Private_Core_UE__6B_
      ;
      uStack_2d0 = this_01;
      uStack_2c7 = local_45f;
      uStack_2c3 = local_45b;
      uStack_2c1 = local_459;
      local_2e8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<UE::MoviePipeline::FAsyncImageQuantization,void,FImagePixelData_*>
                     ::Call;
      pFVar37 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar37 <= (FScriptContainerElement *)local_2e8) &&
          ((FScriptContainerElement *)local_2e8 <
           pFVar37 + (longlong)(this_01->PixelPreProcessors).ArrayMax * 0x30)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      piVar2 = &(this_01->PixelPreProcessors).ArrayMax;
      iVar21 = (this_01->PixelPreProcessors).ArrayNum;
      if (iVar21 == *piVar2) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1030,&pTVar1->AllocatorInstance,piVar2);
      }
      (this_01->PixelPreProcessors).ArrayNum = iVar21 + 1;
      pFVar37 = (pTVar1->AllocatorInstance).Data + (longlong)iVar21 * 0x30;
      *(code **)pFVar37 = local_2e8[0];
      *(longlong *)(pFVar37 + 0x28) = local_2c0;
      local_2c0 = 0;
      *(undefined4 *)(pFVar37 + 0x10) = (undefined4)local_2d8;
      *(undefined4 *)(pFVar37 + 0x14) = local_2d8._4_4_;
      *(undefined4 *)(pFVar37 + 0x18) = (undefined4)uStack_2d0;
      *(undefined4 *)(pFVar37 + 0x1c) = uStack_2d0._4_4_;
      *(longlong *)(pFVar37 + 0x20) =
           CONCAT17(uStack_2c1,CONCAT25(uStack_2c3,CONCAT41(uStack_2c7,local_2c8)));
      if (*(longlong *)pFVar37 != 0) {
        local_2e8[0] = (code *)0x0;
      }
      if (local_2e8[0] != (code *)0x0) {
        (*(code *)local_2d8[2])();
      }
      EVar40 = Color;
    }
    else {
      EVar40 = local_62c;
      if ((uVar20 != 5) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineImageSequenceOutput.cpp"
                              ,0x103,L""), EVar40 = local_62c, bVar17)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
    if ((pFVar41->Data).ArrayNum == 0) {
      pwVar33 = L"";
    }
    else {
      pwVar33 = (wchar_t *)(pFVar41->Data).AllocatorInstance.Data;
    }
    iVar21 = FGenericPlatformStricmp::Stricmp(pwVar33,L"FinalImage");
    if (iVar21 == 0) {
LAB_14ddef593:
      uVar35 = (ulonglong)local_610.ArrayNum;
      local_5fc = local_610.ArrayNum;
      local_628 = (FImageWriteTask *)(local_610.AllocatorInstance.Data + uVar35 * 0x28);
      pFVar37 = local_610.AllocatorInstance.Data + 0x10;
      pFVar38 = local_628;
      while( true ) {
        if (local_610.ArrayNum != (int)uVar35) {
          local_630[0] = 0;
          `TCheckedPointerIterator<MoviePipeline::FCompositePassInfo,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_630);
        }
        this = local_5e8;
        if ((FImageWriteTask *)(pFVar37 + -0x10) == pFVar38) break;
        iVar21 = pFVar41[1].Data.ArrayNum;
        if (iVar21 == *(int *)(pFVar37 + 8)) {
          if (1 < iVar21) {
            iVar21 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)pFVar41[1].Data.AllocatorInstance.Data,
                                *(wchar_t **)pFVar37);
            bVar17 = iVar21 == 0;
            goto LAB_14ddef5fa;
          }
LAB_14ddef605:
          plVar12 = *(longlong **)(pFVar37 + 0x10);
          if (((int)plVar12[1] != *(int *)(lVar30 + 0xa0) - *(int *)(lVar30 + 0x98)) ||
             ((int)((ulonglong)plVar12[1] >> 0x20) !=
              *(int *)(lVar30 + 0xa4) - *(int *)(lVar30 + 0x9c))) {
            if (2 < (byte)LogMovieRenderPipeline._0_1_) {
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
            }
            goto LAB_14ddefbfd;
          }
          if ((local_5d8 < 2) || (local_600 != 0)) {
            (**(code **)(*plVar12 + 0x18))(plVar12,&local_5d0);
            ppuVar32 = &local_5d0;
            uVar20 = local_638 | 0x22;
            puVar39 = local_5d0;
          }
          else {
            (**(code **)(*plVar12 + 0x10))(plVar12,&local_5c8);
            ppuVar32 = &local_5c8;
            uVar20 = local_638 | 0x41;
            puVar39 = local_5c8;
          }
          *ppuVar32 = (undefined8 *)0x0;
          local_638 = uVar20;
          local_5f8 = puVar39;
          if (((uVar20 & 2) != 0) &&
             (local_638 = uVar20 & 0xfffffffd, local_5d0 != (undefined8 *)0x0)) {
            (**(code **)*local_5d0)(local_5d0,1,local_638,uVar20);
          }
          if (((local_638 & 1) != 0) &&
             (local_638 = local_638 & 0xfffffffe, local_5c8 != (undefined8 *)0x0)) {
            (**(code **)*local_5c8)(local_5c8,1);
          }
          if (EVar40 == Color) {
            pTVar1 = &this_01->PixelPreProcessors;
            local_5f8 = (undefined8 *)0x0;
            local_230 = 0;
            local_248 = &
                        ___7__TFunction_OwnedObject_U__TAsyncCompositeImage_UFColor_____00_0A__Function_Private_Core_UE__6B_
            ;
            uStack_240 = puVar39;
            local_438 = 0;
            local_238._s_0 = TVar42._s_0;
            local_258[0] = UE::Core::Private::Function::
                           TFunctionRefCaller<TAsyncCompositeImage<FColor>,void,FImagePixelData_*>::
                           Call;
            pFVar36 = (pTVar1->AllocatorInstance).Data;
            local_430 = TVar42;
            if (((pFVar36 <= (FScriptContainerElement *)local_258) &&
                ((FScriptContainerElement *)local_258 <
                 pFVar36 + (longlong)(this_01->PixelPreProcessors).ArrayMax * 0x30)) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar17)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            piVar2 = &(this_01->PixelPreProcessors).ArrayMax;
            iVar21 = (this_01->PixelPreProcessors).ArrayNum;
            if (iVar21 == *piVar2) {
              iVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x1030,&pTVar1->AllocatorInstance,piVar2);
            }
            (this_01->PixelPreProcessors).ArrayNum = iVar21 + 1;
            pFVar36 = (pTVar1->AllocatorInstance).Data + (longlong)iVar21 * 0x30;
            *(code **)pFVar36 = local_258[0];
            *(longlong *)(pFVar36 + 0x28) = local_230;
            local_230 = 0;
            *(undefined4 *)(pFVar36 + 0x10) = (undefined4)local_248;
            *(undefined4 *)(pFVar36 + 0x14) = local_248._4_4_;
            *(undefined4 *)(pFVar36 + 0x18) = (undefined4)uStack_240;
            *(undefined4 *)(pFVar36 + 0x1c) = uStack_240._4_4_;
            ((TIntPoint<int>_u_0 *)(pFVar36 + 0x20))->_s_0 = (TIntPoint<int>_u_0_s_0)local_238;
            if (*(longlong *)pFVar36 != 0) {
              local_258[0] = (code *)0x0;
            }
            if (local_258[0] != (code *)0x0) {
              (*(code *)local_248[2])();
            }
LAB_14ddefb5e:
            puVar39 = (undefined8 *)0x0;
          }
          else {
            if (EVar40 == Float16) {
              pTVar1 = &this_01->PixelPreProcessors;
              local_5f8 = (undefined8 *)0x0;
              local_260 = 0;
              local_278 = &
                          ___7__TFunction_OwnedObject_U__TAsyncCompositeImage_VFFloat16Color_____00_0A__Function_Private_Core_UE__6B_
              ;
              uStack_270 = puVar39;
              local_448 = 0;
              local_268._s_0 = TVar42._s_0;
              local_288[0] = UE::Core::Private::Function::
                             TFunctionRefCaller<TAsyncCompositeImage<FFloat16Color>,void,FImagePixelData_*>
                             ::Call;
              pFVar36 = (pTVar1->AllocatorInstance).Data;
              local_440 = TVar42;
              if (((pFVar36 <= (FScriptContainerElement *)local_288) &&
                  ((FScriptContainerElement *)local_288 <
                   pFVar36 + (longlong)(this_01->PixelPreProcessors).ArrayMax * 0x30)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              piVar2 = &(this_01->PixelPreProcessors).ArrayMax;
              iVar21 = (this_01->PixelPreProcessors).ArrayNum;
              if (iVar21 == *piVar2) {
                iVar21 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x1030,&pTVar1->AllocatorInstance,piVar2);
              }
              (this_01->PixelPreProcessors).ArrayNum = iVar21 + 1;
              pFVar36 = (pTVar1->AllocatorInstance).Data + (longlong)iVar21 * 0x30;
              *(code **)pFVar36 = local_288[0];
              *(longlong *)(pFVar36 + 0x28) = local_260;
              local_260 = 0;
              *(undefined4 *)(pFVar36 + 0x10) = (undefined4)local_278;
              *(undefined4 *)(pFVar36 + 0x14) = local_278._4_4_;
              *(undefined4 *)(pFVar36 + 0x18) = (undefined4)uStack_270;
              *(undefined4 *)(pFVar36 + 0x1c) = uStack_270._4_4_;
              ((TIntPoint<int>_u_0 *)(pFVar36 + 0x20))->_s_0 = (TIntPoint<int>_u_0_s_0)local_268;
              if (*(longlong *)pFVar36 != 0) {
                local_288[0] = (code *)0x0;
              }
              if (local_288[0] != (code *)0x0) {
                (*(code *)local_278[2])();
              }
              goto LAB_14ddefb5e;
            }
            if (EVar40 == Float32) {
              pTVar1 = &this_01->PixelPreProcessors;
              local_5f8 = (undefined8 *)0x0;
              local_290 = 0;
              local_2a8 = &
                          ___7__TFunction_OwnedObject_U__TAsyncCompositeImage_UFLinearColor_____00_0A__Function_Private_Core_UE__6B_
              ;
              uStack_2a0 = puVar39;
              local_458 = 0;
              local_298._s_0 = TVar42._s_0;
              local_2b8[0] = UE::Core::Private::Function::
                             TFunctionRefCaller<TAsyncCompositeImage<FLinearColor>,void,FImagePixelData_*>
                             ::Call;
              pFVar36 = (pTVar1->AllocatorInstance).Data;
              local_450 = TVar42;
              if (((pFVar36 <= (FScriptContainerElement *)local_2b8) &&
                  ((FScriptContainerElement *)local_2b8 <
                   pFVar36 + (longlong)(this_01->PixelPreProcessors).ArrayMax * 0x30)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              piVar2 = &(this_01->PixelPreProcessors).ArrayMax;
              iVar21 = (this_01->PixelPreProcessors).ArrayNum;
              if (iVar21 == *piVar2) {
                iVar21 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x1030,&pTVar1->AllocatorInstance,piVar2);
              }
              (this_01->PixelPreProcessors).ArrayNum = iVar21 + 1;
              pFVar36 = (pTVar1->AllocatorInstance).Data + (longlong)iVar21 * 0x30;
              *(code **)pFVar36 = local_2b8[0];
              *(longlong *)(pFVar36 + 0x28) = local_290;
              local_290 = 0;
              *(undefined4 *)(pFVar36 + 0x10) = (undefined4)local_2a8;
              *(undefined4 *)(pFVar36 + 0x14) = local_2a8._4_4_;
              *(undefined4 *)(pFVar36 + 0x18) = (undefined4)uStack_2a0;
              *(undefined4 *)(pFVar36 + 0x1c) = uStack_2a0._4_4_;
              ((TIntPoint<int>_u_0 *)(pFVar36 + 0x20))->_s_0 = (TIntPoint<int>_u_0_s_0)local_298;
              if (*(longlong *)pFVar36 != 0) {
                local_2b8[0] = (code *)0x0;
              }
              if (local_2b8[0] != (code *)0x0) {
                (*(code *)local_2a8[2])();
              }
              goto LAB_14ddefb5e;
            }
          }
          if (puVar39 != (undefined8 *)0x0) {
            (**(code **)*puVar39)(puVar39,1);
          }
          pFVar37 = pFVar37 + 0x28;
          uVar35 = (ulonglong)local_5fc;
          pFVar38 = local_628;
          lVar30 = local_618;
          pFVar41 = local_5e0;
        }
        else {
          bVar17 = iVar21 + *(int *)(pFVar37 + 8) == 1;
LAB_14ddef5fa:
          if (bVar17) goto LAB_14ddef605;
LAB_14ddefbfd:
          pFVar37 = pFVar37 + 0x28;
          uVar35 = (ulonglong)local_5fc;
          lVar30 = local_618;
        }
      }
    }
    else {
      if ((pFVar41->Data).ArrayNum == 0) {
        pwVar33 = L"";
      }
      else {
        pwVar33 = (wchar_t *)(pFVar41->Data).AllocatorInstance.Data;
      }
      iVar21 = FGenericPlatformStricmp::Stricmp(pwVar33,L"PathTracer");
      if (iVar21 == 0) goto LAB_14ddef593;
    }
    cVar18 = (**(code **)(this->_padding_ + 0x388))(this);
    if ((cVar18 == '\0') && (*(char *)(lVar30 + 0x2d0) == '\0')) {
      FImageWriteTask::AddPreProcessorToSetAlphaOpaque(this_01);
    }
    pTVar3 = &this_01->PixelData;
    if (pTVar3 != &local_5f0) {
      pFVar13 = pTVar3->Ptr;
      pTVar3->Ptr = local_5f0.Ptr;
      local_5f0.Ptr = (FImagePixelData *)0x0;
      if (pFVar13 != (FImagePixelData *)0x0) {
        (**(code **)pFVar13->_padding_)(pFVar13,1);
      }
    }
    pUVar23 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    local_620 = (FImageWriteTask *)0x0;
    local_528 = this_01;
    pTVar28 = (TFuture<bool> *)
              (**(code **)((longlong)*this->ImageWriteQueue + 8))
                        (this->ImageWriteQueue,local_348,&local_528,1);
    UMoviePipeline::AddOutputFuture(pUVar23,pTVar28,&local_5b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_340);
    if (local_528 != (FImageWriteTask *)0x0) {
      (*(code *)**(undefined8 **)local_528)(local_528,1);
    }
    local_600 = local_600 + 1;
    if (local_5f0.Ptr != (FImagePixelData *)0x0) {
      (**(code **)(local_5f0.Ptr)->_padding_)(local_5f0.Ptr,1);
    }
    if ((TBitArray<FDefaultBitArrayAllocator> *)FStack_550.Data.AllocatorInstance.Data !=
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      FMemory::Free(FStack_550.Data.AllocatorInstance.Data);
    }
    if (local_560.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_560.Data.AllocatorInstance.Data);
    }
    if (local_5b8.PassIdentifier.CameraName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b8.PassIdentifier.CameraName.Data.AllocatorInstance.Data);
    }
    if (local_5b8.PassIdentifier.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_5b8.PassIdentifier.Name.Data.AllocatorInstance.Data);
    }
    if (local_5b8.FilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b8.FilePath.Data.AllocatorInstance.Data);
    }
LAB_14ddefd25:
    TStack_4c8.UnvisitedBitMask = TStack_4c8.UnvisitedBitMask & ~TStack_4c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4c8);
  } while( true );
}

// OnShotFinishedImpl @ 14ddf1180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipelineImageSequenceOutputBase::OnShotFinishedImpl
          (UMoviePipelineImageSequenceOutputBase *this,UMoviePipelineExecutorShot *param_1,
          bool param_2)

{
  IImageWriteQueue *pIVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  LARGE_INTEGER local_78;
  longlong local_70;
  TReferenceControllerBase<1> *local_68;
  longlong local_58 [2];
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  if (param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
    if (4 < (byte)LogMovieRenderPipelineIO._0_1_) {
      (**(code **)((longlong)*this->ImageWriteQueue + 0x18))();
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO)
      ;
    }
    QueryPerformanceCounter(&local_78);
    pIVar1 = this->ImageWriteQueue;
    local_58[0] = 0;
    local_30 = (longlong *)0x0;
    (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,&local_70,local_58);
    if (local_58[0] != 0) {
      plVar3 = local_48;
      if (local_30 != (longlong *)0x0) {
        plVar3 = local_30;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_70 != 0) {
      do {
        cVar2 = (**(code **)(**(longlong **)(local_70 + 0x60) + 0x20))
                          (*(longlong **)(local_70 + 0x60),0xffffffff,0);
      } while (cVar2 == '\0');
    }
    QueryPerformanceCounter(&local_78);
    if (4 < (byte)LogMovieRenderPipelineIO._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO)
      ;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_68);
  }
  return;
}

// StaticRegisterNativesUMoviePipelineImageSequenceOutputBase @ 14ddff290

void __cdecl
UMoviePipelineImageSequenceOutputBase::StaticRegisterNativesUMoviePipelineImageSequenceOutputBase
          (void)

{
  return;
}

