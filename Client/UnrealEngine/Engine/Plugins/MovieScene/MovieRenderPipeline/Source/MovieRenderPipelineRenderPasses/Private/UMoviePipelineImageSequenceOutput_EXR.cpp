// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 9

// StaticClass @ 14ddbb330

UClass * __cdecl UMoviePipelineImageSequenceOutput_EXR::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_EXR.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MoviePipelineImageSequenceOutput_EXR",
               &Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_EXR.InnerSingleton,
               StaticRegisterNativesUMoviePipelineImageSequenceOutput_EXR,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineImageSequenceOutput_EXR>,
               InternalVTableHelperCtorCaller<UMoviePipelineImageSequenceOutput_EXR>,local_res8,
               UMoviePipelineImageSequenceOutputBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_EXR.InnerSingleton;
}

// UMoviePipelineImageSequenceOutput_EXR @ 14ddc8880

UMoviePipelineImageSequenceOutput_EXR * __thiscall
UMoviePipelineImageSequenceOutput_EXR::UMoviePipelineImageSequenceOutput_EXR
          (UMoviePipelineImageSequenceOutput_EXR *this,FVTableHelper *param_1)

{
  UMoviePipelineOutputBase::UMoviePipelineOutputBase((UMoviePipelineOutputBase *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMoviePipelineImageSequenceOutput_EXR__6B_;
  return this;
}

// ~UMoviePipelineImageSequenceOutput_EXR @ 14ddcbde0

void __thiscall
UMoviePipelineImageSequenceOutput_EXR::~UMoviePipelineImageSequenceOutput_EXR
          (UMoviePipelineImageSequenceOutput_EXR *this)

{
  this->_padding_ = (longlong)&___7UMoviePipelineImageSequenceOutputBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  UMoviePipelineOutputBase::~UMoviePipelineOutputBase((UMoviePipelineOutputBase *)this);
  return;
}

// GetPrivateStaticClass @ 14dde4260

UClass * __cdecl UMoviePipelineImageSequenceOutput_EXR::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_EXR.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MoviePipelineImageSequenceOutput_EXR",
               &Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_EXR.InnerSingleton,
               StaticRegisterNativesUMoviePipelineImageSequenceOutput_EXR,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineImageSequenceOutput_EXR>,
               InternalVTableHelperCtorCaller<UMoviePipelineImageSequenceOutput_EXR>,local_res8,
               UMoviePipelineImageSequenceOutputBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_EXR.InnerSingleton;
}

// IsAlphaAllowed @ 14dde7c90

bool __thiscall
UMoviePipelineImageSequenceOutput_EXR::IsAlphaAllowed(UMoviePipelineImageSequenceOutput_EXR *this)

{
  return true;
}

// OnReceiveImageDataImpl @ 14ddefde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineImageSequenceOutput_EXR::OnReceiveImageDataImpl
          (UMoviePipelineImageSequenceOutput_EXR *this,FMoviePipelineMergerOutputFrame *param_1)

{
  FMoviePipelineFrameOutputState *pFVar1;
  int *piVar2;
  TMap<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *pTVar3;
  TArray<TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,TSizedDefaultAllocator<32>_>
  *pTVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  void *pvVar9;
  undefined1 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  UMoviePipelineExecutorShot *pUVar14;
  FScriptContainerElement *pFVar15;
  code *pcVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  undefined8 uVar18;
  FMoviePipelineMergerOutputFrame *pFVar19;
  UMoviePipelineImageSequenceOutput_EXR *pUVar20;
  bool bVar21;
  int iVar22;
  FModuleManager *this_00;
  UMoviePipeline *pUVar23;
  UMoviePipelinePrimaryConfig *pUVar24;
  UMoviePipelineOutputSetting *pUVar25;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar26;
  FString *pFVar27;
  FEXRImageWriteTask *pFVar28;
  UMoviePipelineColorSetting *pUVar29;
  UMoviePipelineSetting *pUVar30;
  TFuture<bool> *pTVar31;
  ESceneCaptureSource EVar32;
  ForAnyElementType FVar33;
  ForElementType<FSetElementId> _Src;
  ulonglong *puVar34;
  uint uVar35;
  int iVar36;
  longlong lVar37;
  longlong lVar38;
  undefined1 *puVar39;
  uint *puVar40;
  undefined4 uVar41;
  uint uVar42;
  FEXRImageWriteTask *pFVar43;
  undefined4 uVar44;
  void *_Dst;
  undefined1 auStackY_588 [32];
  undefined1 local_538;
  undefined1 local_537;
  undefined1 local_536 [6];
  TIntPoint<int>_u_0 local_530;
  FString local_528;
  FMoviePipelineMergerOutputFrame *local_518;
  FEXRImageWriteTask *local_510;
  FImagePixelData *local_508;
  ForAnyElementType local_500;
  undefined8 local_4f8;
  ForAnyElementType local_4f0;
  undefined8 local_4e8;
  int local_4e0;
  int local_4dc;
  FString local_4d0;
  TMap<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_4c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4b8;
  undefined8 local_498;
  UMoviePipelineImageSequenceOutput_EXR *local_490;
  void *local_488;
  int local_480;
  int local_47c;
  FString local_478;
  FString local_468;
  FString local_458;
  FMoviePipelineOutputFutureData local_448;
  FEXRImageWriteTask *local_410;
  FString local_408;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3d8;
  TMap<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_3b8;
  ForAnyElementType local_3b0;
  FImagePixelData *local_3a8;
  FString local_3a0;
  FString local_390;
  FString local_380;
  undefined1 local_370 [8];
  int local_368;
  TMap<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_360;
  int iStack_358;
  uint uStack_354;
  undefined1 *local_350;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 local_340;
  undefined4 uStack_33c;
  int iStack_338;
  undefined4 uStack_334;
  int local_330;
  undefined1 local_32c [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_320;
  undefined8 uStack_300;
  longlong *local_2f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2f0;
  undefined8 uStack_2d0;
  FString local_2c8;
  longlong local_2b8;
  FStringFormatArg *local_2b0;
  FString local_2a8;
  FString *local_298;
  FString *local_290;
  FString local_288;
  FString local_278;
  FString *local_268;
  FString *local_260;
  FString local_258;
  FString local_248;
  FString local_238;
  undefined1 local_228 [8];
  TReferenceControllerBase<1> *local_220;
  FStringFormatArg local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1d8 [2];
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  local_198;
  undefined1 local_148 [64];
  void *local_108;
  undefined4 local_100;
  undefined1 local_f8 [32];
  undefined8 local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  void *local_b8;
  undefined4 local_b0;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_a8;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_588;
  local_518 = param_1;
  local_490 = this;
  if (this->bMultilayer == false) {
    UMoviePipelineImageSequenceOutputBase::OnReceiveImageDataImpl
              ((UMoviePipelineImageSequenceOutputBase *)this,param_1);
    return;
  }
  if ((param_1 == (FMoviePipelineMergerOutputFrame *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("InMergedOutputFrame",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineEXROutput.cpp"
                          ,0x2b9,L""), bVar21)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&RTTIExtensionModuleName,"UEOpenExrRTTI");
    _Init_thread_footer(&::_TSS0);
  }
  this_00 = FModuleManager::Get();
  FModuleManager::LoadModule(this_00,RTTIExtensionModuleName,None);
  pUVar23 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar24 = UMoviePipeline::GetPipelinePrimaryConfig(pUVar23);
  pUVar25 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                      ((UMoviePipelineConfigBase *)pUVar24,false);
  if ((pUVar25 == (UMoviePipelineOutputSetting *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutputSettings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineEXROutput.cpp"
                          ,0x2c1,L""), bVar21)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  local_530 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  pTVar3 = &param_1->ImageOutputData;
  local_3f8._padding_._0_4_ = 0;
  local_3f8._padding_._4_4_ = 1;
  puVar10 = &(param_1->ImageOutputData).field_0x10;
  local_3f8.UnvisitedBitMask = 0xffffffff;
  local_3f8.CurrentBitIndex = 0;
  local_3f8.BaseBitIndex = 0;
  local_3f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar10;
  if (*(int *)&(param_1->ImageOutputData).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3f8);
  }
  TStack_4b8._padding_ = CONCAT44(local_3f8._padding_._4_4_,(undefined4)local_3f8._padding_);
  TStack_4b8.Array = local_3f8.Array;
  TStack_4b8.CurrentBitIndex = local_3f8.CurrentBitIndex;
  TStack_4b8.UnvisitedBitMask = local_3f8.UnvisitedBitMask;
  TStack_4b8._28_4_ = local_3f8._28_4_;
  TStack_4b8.BaseBitIndex = local_3f8.BaseBitIndex;
  local_498 = CONCAT44(local_498._4_4_,
                       *(int *)&(param_1->ImageOutputData).field_0x8 -
                       *(int *)&(param_1->ImageOutputData).field_0x34);
  TStack_320.Array = local_3f8.Array;
  uStack_300 = local_498;
  local_4c0 = pTVar3;
  local_32c._4_8_ = pTVar3;
  TStack_320._padding_ = TStack_4b8._padding_;
  TStack_320._16_8_ = TStack_4b8._16_8_;
  TStack_320._24_8_ = TStack_4b8._24_8_;
  pTVar26 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_1f8,(TBitArray<FDefaultBitArrayAllocator> *)puVar10,
                       *(int *)&(param_1->ImageOutputData).field_0x28);
  TStack_4b8._padding_ = pTVar26->_padding_;
  pTVar17 = pTVar26->Array;
  uVar18._0_4_ = pTVar26->UnvisitedBitMask;
  uVar18._4_4_ = pTVar26->CurrentBitIndex;
  TStack_4b8.BaseBitIndex = pTVar26->BaseBitIndex;
  TStack_4b8._28_4_ = *(undefined4 *)&pTVar26->field_0x1c;
  uVar44 = local_530._4_4_;
  uVar41 = local_530._0_4_;
  TStack_4b8.Array = pTVar17;
  TStack_4b8._16_8_ = uVar18;
  while( true ) {
    uVar8 = local_32c._4_8_;
    if (*(int *)(local_32c._4_8_ + 8) - *(int *)(local_32c._4_8_ + 0x34) != (int)uStack_300) {
      local_538 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_538);
    }
    if (((TStack_320.CurrentBitIndex == uVar18._4_4_) && (TStack_320.Array == pTVar17)) &&
       ((TMap<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
         *)uVar8 == pTVar3)) break;
    uVar8 = *(undefined8 *)
             (*(longlong *)(*(longlong *)uVar8 + 0x20 + (longlong)TStack_320.CurrentBitIndex * 0x30)
             + 8);
    iVar36 = (int)uVar8;
    if (iVar36 < (int)uVar41) {
      iVar36 = uVar41;
    }
    uVar41 = iVar36;
    iVar36 = (int)((ulonglong)uVar8 >> 0x20);
    if (iVar36 < (int)uVar44) {
      iVar36 = uVar44;
    }
    uVar44 = iVar36;
    TStack_320.UnvisitedBitMask = TStack_320.UnvisitedBitMask & ~TStack_320._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_320);
  }
  local_4e0 = uVar41;
  local_4dc = uVar44;
  ::FString::FString(&local_2a8,&(pUVar25->OutputDirectory).Path);
  pFVar28 = (FEXRImageWriteTask *)0x0;
  local_528.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_528.Data.ArrayNum = 0;
  local_528.Data.ArrayMax = 0;
  local_148._0_8_ = 0;
  local_148._8_8_ = 0;
  local_148._32_8_ = 0;
  local_148._40_4_ = 0;
  local_148._44_4_ = 0x80;
  local_148._48_4_ = 0xffffffff;
  local_148._52_4_ = 0;
  local_108 = (void *)0x0;
  local_100 = 0;
  local_f8._0_8_ = 0;
  local_f8._8_8_ = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 0x80;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
  local_408.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_408.Data.ArrayNum = 0;
  local_408.Data.ArrayMax = 0;
  local_458.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_458.Data.ArrayNum = 0;
  local_458.Data.ArrayMax = 0;
  ::FString::FString(&local_478,&pUVar25->FileNameFormat);
  UE::MoviePipeline::ValidateOutputFormatString(&local_478,false,true,false);
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  ::FString::FString(&local_278,L"");
  ::FString::FString(&local_288,L"render_pass");
  local_298 = &local_288;
  local_290 = &local_278;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            (&local_98,(TPairInitializer<FString_&&,FString_&&> *)local_32c,(bool *)&local_298);
  pFVar19 = local_518;
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_248,L"exr");
  ::FString::FString(&local_258,L"ext");
  local_268 = &local_258;
  local_260 = &local_248;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            (&local_98,(TPairInitializer<FString_&&,FString_&&> *)local_370,(bool *)&local_268);
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  pUVar20 = local_490;
  pUVar23 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)local_490);
  pFVar1 = &pFVar19->FrameOutputState;
  UMoviePipeline::ResolveFilenameFormatArguments
            (pUVar23,&local_478,
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&local_98,&local_408,(FMoviePipelineFormatArgs *)local_148,pFVar1,
             -(pFVar19->FrameOutputState).ShotOutputFrameNumber);
  ::operator/(&local_2c8,&local_2a8,&local_478);
  pUVar23 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)pUVar20);
  UMoviePipeline::ResolveFilenameFormatArguments
            (pUVar23,&local_2c8,
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&local_98,&local_528,(FMoviePipelineFormatArgs *)local_148,pFVar1,0);
  bVar21 = FPaths::IsRelative(&local_528);
  if (bVar21) {
    pFVar27 = FPaths::ConvertRelativePathToFull(&local_238,&local_528);
    if (&local_528 != pFVar27) {
      if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_528.Data.AllocatorInstance.Data);
      }
      local_528.Data.AllocatorInstance.Data = (pFVar27->Data).AllocatorInstance.Data;
      (pFVar27->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_528.Data.ArrayNum = (pFVar27->Data).ArrayNum;
      local_528.Data.ArrayMax = (pFVar27->Data).ArrayMax;
      (pFVar27->Data).ArrayNum = 0;
      (pFVar27->Data).ArrayMax = 0;
    }
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
  }
  UE::MoviePipeline::RemoveFrameNumberFormatStrings(&local_478,true);
  pUVar23 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)pUVar20);
  UMoviePipeline::ResolveFilenameFormatArguments
            (pUVar23,&local_478,
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&local_98,&local_458,(FMoviePipelineFormatArgs *)local_148,pFVar1,0);
  ::FString::RemoveFromEnd(&local_458,L"exr",3,IgnoreCase);
  ::FString::FString(&local_3a0,".");
  iVar36 = local_3a0.Data.ArrayNum + -1;
  if (local_3a0.Data.ArrayNum == 0) {
    iVar36 = 0;
  }
  FVar33.Data = (FScriptContainerElement *)L"";
  if (local_3a0.Data.ArrayNum != 0) {
    FVar33.Data = local_3a0.Data.AllocatorInstance.Data;
  }
  ::FString::RemoveFromEnd(&local_458,(wchar_t *)FVar33.Data,iVar36,IgnoreCase);
  if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
  }
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.Data.AllocatorInstance.Data);
  }
  if ((pUVar20->bMultipart == false) ||
     (bVar21 = TAutoConsoleVariable<bool>::GetValueOnGameThread
                         (&UE::MoviePipeline::CVarMoviePipelinePadLayersForMultiPartEXR), bVar21)) {
    bVar21 = true;
  }
  else {
    bVar21 = false;
  }
  local_510 = ::operator_new(0x170);
  if (local_510 != (FEXRImageWriteTask *)0x0) {
    pFVar28 = FEXRImageWriteTask::FEXRImageWriteTask(local_510);
  }
  iVar36 = local_528.Data.ArrayNum + -1;
  if (local_528.Data.ArrayNum == 0) {
    iVar36 = 0;
  }
  local_530 = (TIntPoint<int>_u_0)pFVar28;
  ::FString::AssignRange(&pFVar28->Filename,(wchar_t *)local_528.Data.AllocatorInstance.Data,iVar36)
  ;
  pFVar28->bMultipart = pUVar20->bMultipart;
  pFVar28->bPadToDataWindowSize = bVar21;
  pFVar28->Compression = pUVar20->Compression;
  local_198.Elements._0_8_ = 0;
  local_198.Elements._8_8_ = 0;
  local_198.Elements._32_8_ = 0;
  local_198.Elements._40_4_ = 0;
  local_198.Elements._44_4_ = 0x80;
  local_198.Elements._48_4_ = 0xffffffff;
  local_198.Elements._52_4_ = 0;
  local_198.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_198.HashSize = 0;
  local_3d8._padding_._0_4_ = 0;
  local_3d8._padding_._4_4_ = 1;
  local_3d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
  local_3d8.UnvisitedBitMask = 0xffffffff;
  local_3d8.CurrentBitIndex = 0;
  local_3d8.BaseBitIndex = 0;
  if (local_d0 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3d8);
  }
  local_4c0 = (TMap<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
               *)local_f8;
  TStack_4b8._padding_ = CONCAT44(local_3d8._padding_._4_4_,(undefined4)local_3d8._padding_);
  TStack_4b8.Array = local_3d8.Array;
  TStack_4b8.CurrentBitIndex = local_3d8.CurrentBitIndex;
  TStack_4b8.UnvisitedBitMask = local_3d8.UnvisitedBitMask;
  TStack_4b8._28_4_ = local_3d8._28_4_;
  TStack_4b8.BaseBitIndex = local_3d8.BaseBitIndex;
  local_498 = CONCAT44(local_498._4_4_,local_f8._8_4_ - local_c4);
  TStack_2f0.Array = local_3d8.Array;
  uStack_2d0 = local_498;
  local_2f8 = (longlong *)local_4c0;
  TStack_2f0._padding_ = TStack_4b8._padding_;
  TStack_2f0._16_8_ = TStack_4b8._16_8_;
  TStack_2f0._24_8_ = TStack_4b8._24_8_;
  pTVar26 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (local_1d8,(TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),local_d0)
  ;
  TStack_4b8._padding_ = pTVar26->_padding_;
  pTVar17 = pTVar26->Array;
  uVar8._0_4_ = pTVar26->UnvisitedBitMask;
  uVar8._4_4_ = pTVar26->CurrentBitIndex;
  TStack_4b8.BaseBitIndex = pTVar26->BaseBitIndex;
  TStack_4b8._28_4_ = *(undefined4 *)&pTVar26->field_0x1c;
  TStack_4b8.Array = pTVar17;
  TStack_4b8._16_8_ = uVar8;
  while( true ) {
    plVar12 = local_2f8;
    if ((int)local_2f8[1] - *(int *)((longlong)local_2f8 + 0x34) != (int)uStack_2d0) {
      local_537 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_537);
    }
    iVar36 = local_198.HashSize;
    if (((TStack_2f0.CurrentBitIndex == uVar8._4_4_) && (TStack_2f0.Array == pTVar17)) &&
       (plVar12 == (longlong *)local_f8)) break;
    lVar38 = *plVar12 + (longlong)TStack_2f0.CurrentBitIndex * 0x28;
    local_488 = (void *)0x0;
    local_480 = *(int *)(lVar38 + 0x18);
    lVar37 = (longlong)local_480;
    pvVar9 = *(void **)(lVar38 + 0x10);
    local_510 = (FEXRImageWriteTask *)&local_488;
    if (local_480 == 0) {
      local_47c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_480,0,(ForAnyElementType *)&local_488,local_480,&local_47c);
      memcpy(local_488,pvVar9,lVar37 * 2);
    }
    FStringFormatArg::FStringFormatArg(&local_218,(FString *)&local_488);
    local_2b0 = &local_218;
    local_2b8 = lVar38;
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FStringFormatArg_&&>_>
              (&local_198,(TPairInitializer<FString_const_&,FStringFormatArg_&&> *)(local_370 + 4),
               (bool *)&local_2b8);
    if (local_218.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.StringValue.Data.AllocatorInstance.Data);
    }
    TStack_2f0.UnvisitedBitMask = TStack_2f0.UnvisitedBitMask & ~TStack_2f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2f0);
  }
  if ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
       *)&pFVar28->FileMetadata != &local_198) {
    lVar38 = (longlong)local_198.HashSize;
    uVar42 = local_198.HashSize;
    if ((uint)local_198.HashSize < 2) {
      if (*(longlong *)&(pFVar28->FileMetadata).field_0x40 != 0) {
        uVar42 = 0;
        goto LAB_14ddf077d;
      }
    }
    else {
LAB_14ddf077d:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(pFVar28->FileMetadata).field_0x40,0,uVar42,4);
    }
    _Src = (ForElementType<FSetElementId>)&local_198.Hash;
    if (local_198.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      _Src = local_198.Hash.SecondaryData;
    }
    pvVar9 = *(void **)&(pFVar28->FileMetadata).field_0x40;
    _Dst = &(pFVar28->FileMetadata).field_0x38;
    if (pvVar9 != (void *)0x0) {
      _Dst = pvVar9;
    }
    if (iVar36 != 0) {
      memcpy(_Dst,(void *)_Src,lVar38 << 2);
    }
    *(int *)&(pFVar28->FileMetadata).field_0x48 = iVar36;
    TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&pFVar28->FileMetadata,&local_198.Elements);
  }
  pUVar23 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)local_490);
  pUVar24 = UMoviePipeline::GetPipelinePrimaryConfig(pUVar23);
  pUVar29 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineColorSetting>
                      ((UMoviePipelineConfigBase *)pUVar24,false);
  if (pUVar29 == (UMoviePipelineColorSetting *)0x0) {
LAB_14ddf0816:
    EVar32 = SCS_FinalToneCurveHDR;
  }
  else {
    if ((pUVar29->OCIOConfiguration).bIsEnabled != false) {
      UE::MoviePipeline::UpdateColorSpaceMetadata
                (&(pUVar29->OCIOConfiguration).ColorConfiguration,pFVar28);
      goto LAB_14ddf0823;
    }
    EVar32 = SCS_FinalColorHDR;
    if (pUVar29->bDisableToneCurve == false) goto LAB_14ddf0816;
  }
  UE::MoviePipeline::UpdateColorSpaceMetadata(EVar32,pFVar28);
LAB_14ddf0823:
  pFVar19 = local_518;
  lVar38 = 0;
  local_3b8 = &local_518->ImageOutputData;
  iStack_358 = 0;
  uStack_354 = 1;
  TStack_4b8.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(local_518->ImageOutputData).field_0x10;
  local_340 = 0;
  iVar36 = *(int *)&(local_518->ImageOutputData).field_0x28;
  uStack_344 = 0;
  if (iVar36 != 0) {
    puVar40 = *(uint **)&(local_518->ImageOutputData).field_0x20;
    if (puVar40 == (uint *)0x0) {
      puVar40 = (uint *)TStack_4b8.Array;
    }
    uVar42 = *puVar40;
    while (uVar42 == 0) {
      lVar37 = (longlong)iStack_358;
      iStack_358 = iStack_358 + 1;
      local_340 = local_340 + 0x20;
      uStack_344 = iVar36;
      if ((int)(iVar36 + -1 + (iVar36 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_358) goto LAB_14ddf08c3;
      uVar42 = puVar40[lVar37 + 1];
    }
    uStack_354 = ~(uVar42 - 1) & uVar42;
    uVar5 = (ulonglong)uStack_354 * 2 + 1;
    lVar37 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar37 == 0; lVar37 = lVar37 + -1) {
      }
    }
    local_368 = (int)lVar37;
    uStack_344 = local_368 + -1 + local_340;
    if (iVar36 < (int)uStack_344) {
      uStack_344 = iVar36;
    }
  }
LAB_14ddf08c3:
  local_4c0 = &local_518->ImageOutputData;
  uStack_348 = 0xffffffff;
  uStack_33c = local_1d8[1]._28_4_;
  iStack_338 = *(int *)&(local_518->ImageOutputData).field_0x8 -
               *(int *)&(local_518->ImageOutputData).field_0x34;
  TStack_4b8._padding_ = CONCAT44(uStack_354,iStack_358);
  TStack_4b8.CurrentBitIndex = uStack_344;
  TStack_4b8.UnvisitedBitMask = 0xffffffff;
  TStack_4b8._28_4_ = local_1d8[1]._28_4_;
  TStack_4b8.BaseBitIndex = local_340;
  local_498 = CONCAT44(uStack_334,iStack_338);
  uVar42 = *(uint *)&(local_518->ImageOutputData).field_0x28;
  iVar36 = (int)uVar42 >> 5;
  pFVar43 = (FEXRImageWriteTask *)&(local_518->ImageOutputData).field_0x10;
  uVar35 = uVar42 & 0xffffffe0;
  local_510 = pFVar43;
  local_360 = local_4c0;
  local_350 = (undefined1 *)TStack_4b8.Array;
  local_518._0_4_ = uVar42;
  if (((int)uVar42 < 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar21)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  uVar6 = *(uint *)&(pFVar19->ImageOutputData).field_0x28;
  if (uVar42 != uVar6) {
    puVar10 = *(undefined1 **)&(pFVar19->ImageOutputData).field_0x20;
    puVar39 = (undefined1 *)pFVar43;
    if (puVar10 != (undefined1 *)0x0) {
      puVar39 = puVar10;
    }
    uVar42 = -1 << ((byte)uVar42 & 0x1f) & *(uint *)(puVar39 + (longlong)iVar36 * 4);
    while (uVar42 == 0) {
      lVar37 = (longlong)iVar36;
      iVar36 = iVar36 + 1;
      uVar35 = uVar35 + 0x20;
      uVar42 = uVar6;
      local_518._0_4_ = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar36) goto LAB_14ddf0a18;
      uVar42 = *(uint *)(puVar39 + lVar37 * 4 + 4);
    }
    uVar5 = (ulonglong)(~(uVar42 - 1) & uVar42) * 2 + 1;
    lVar37 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar37 == 0; lVar37 = lVar37 + -1) {
      }
    }
    local_330 = (int)lVar37;
    uVar42 = (uVar35 - 1) + local_330;
    local_518._0_4_ = uVar42;
    if ((int)uVar6 < (int)uVar42) {
      uVar42 = uVar6;
      local_518._0_4_ = uVar6;
    }
  }
LAB_14ddf0a18:
  iVar36 = 0;
  do {
    pTVar3 = local_4c0;
    if (*(int *)&local_4c0->field_0x8 - *(int *)&local_4c0->field_0x34 != (int)local_498) {
      local_536[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_536);
    }
    pUVar20 = local_490;
    lVar37 = (longlong)TStack_4b8.CurrentBitIndex;
    if (((TStack_4b8.CurrentBitIndex == uVar42) &&
        ((FEXRImageWriteTask *)TStack_4b8.Array == pFVar43)) && (pTVar3 == local_3b8)) {
      local_448.Shot = (UMoviePipelineExecutorShot *)0x0;
      local_448.FilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_448.FilePath.Data.ArrayNum = 0;
      local_448.FilePath.Data.ArrayMax = 0;
      local_448.PassIdentifier.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_448.PassIdentifier.Name.Data.ArrayNum = 0;
      local_448.PassIdentifier.Name.Data.ArrayMax = 0;
      local_448.PassIdentifier.CameraName.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      local_448.PassIdentifier.CameraName.Data.ArrayNum = 0;
      local_448.PassIdentifier.CameraName.Data.ArrayMax = 0;
      pUVar23 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)local_490);
      uVar35 = (uint)lVar38;
      uVar42 = 0;
      if ((int)uVar35 < (pUVar23->ActiveShotList).ArrayNum) {
        uVar42 = ~uVar35 >> 0x1f;
      }
      if ((uVar42 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      local_448.Shot =
           *(UMoviePipelineExecutorShot **)
            ((pUVar23->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar35 * 8);
      ::FString::FString(&local_380,L"camera");
      ::FString::FString(&local_390,L"");
      FVar33.Data = local_390.Data.AllocatorInstance.Data;
      local_510 = (FEXRImageWriteTask *)&local_500;
      local_500.Data = (FScriptContainerElement *)0x0;
      iVar36 = local_390.Data.ArrayNum;
      local_4f8 = CONCAT44(local_4f8._4_4_,iVar36);
      if (iVar36 == 0) {
        local_4f8 = local_390.Data._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar36,0,&local_500,iVar36,(int *)((longlong)&local_4f8 + 4));
        memcpy(local_500.Data,FVar33.Data,(longlong)iVar36 * 2);
      }
      FVar33.Data = local_380.Data.AllocatorInstance.Data;
      local_510 = (FEXRImageWriteTask *)&local_4f0;
      local_4f0.Data = (FScriptContainerElement *)0x0;
      iVar36 = local_380.Data.ArrayNum;
      local_4e8 = CONCAT44(local_4e8._4_4_,iVar36);
      if (iVar36 == 0) {
        local_4e8 = local_380.Data._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar36,0,&local_4f0,iVar36,(int *)((longlong)&local_4e8 + 4));
        memcpy(local_4f0.Data,FVar33.Data,(longlong)iVar36 * 2);
      }
      if (local_448.PassIdentifier.Name.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_448.PassIdentifier.Name.Data.AllocatorInstance.Data);
      }
      local_448.PassIdentifier.Name.Data.AllocatorInstance.Data = local_500.Data;
      local_500.Data = (FScriptContainerElement *)0x0;
      local_448.PassIdentifier.Name.Data._8_8_ = local_4f8;
      local_4f8 = 0;
      if (local_448.PassIdentifier.CameraName.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_448.PassIdentifier.CameraName.Data.AllocatorInstance.Data);
      }
      local_448.PassIdentifier.CameraName.Data.AllocatorInstance.Data = local_4f0.Data;
      local_4f0.Data = (FScriptContainerElement *)0x0;
      local_448.PassIdentifier.CameraName.Data._8_8_ = local_4e8;
      local_4e8 = 0;
      if (local_500.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_500.Data);
      }
      if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_390.Data.AllocatorInstance.Data);
      }
      if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_380.Data.AllocatorInstance.Data);
      }
      iVar36 = local_528.Data.ArrayNum + -1;
      if (local_528.Data.ArrayNum == 0) {
        iVar36 = 0;
      }
      ::FString::AssignRange
                (&local_448.FilePath,(wchar_t *)local_528.Data.AllocatorInstance.Data,iVar36);
      pUVar23 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)pUVar20);
      plVar12 = (longlong *)pUVar20->_padding_;
      local_530 = (TIntPoint<int>_u_0)0x0;
      local_410 = pFVar28;
      pTVar31 = (TFuture<bool> *)(**(code **)(*plVar12 + 8))(plVar12,local_228,&local_410,1);
      UMoviePipeline::AddOutputFuture(pUVar23,pTVar31,&local_448);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_220)
      ;
      if (local_410 != (FEXRImageWriteTask *)0x0) {
        (*(code *)**(undefined8 **)local_410)(local_410,1);
      }
      if (local_448.PassIdentifier.CameraName.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_448.PassIdentifier.CameraName.Data.AllocatorInstance.Data);
      }
      if (local_448.PassIdentifier.Name.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_448.PassIdentifier.Name.Data.AllocatorInstance.Data);
      }
      if (local_448.FilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_448.FilePath.Data.AllocatorInstance.Data);
      }
      local_198.HashSize = 0;
      if (local_198.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_198.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_198.Elements);
      if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_458.Data.AllocatorInstance.Data);
      }
      if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_408.Data.AllocatorInstance.Data);
      }
      local_b0 = 0;
      if (local_b8 != (void *)0x0) {
        FMemory::Free(local_b8);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_f8);
      local_100 = 0;
      if (local_108 != (void *)0x0) {
        FMemory::Free(local_108);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_148);
      if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_528.Data.AllocatorInstance.Data);
      }
      if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
      }
      return;
    }
    lVar11 = *(longlong *)pTVar3;
    plVar12 = *(longlong **)(lVar11 + 0x20 + lVar37 * 0x30);
    (**(code **)(*plVar12 + 0x10))(plVar12,&local_508);
    pUVar20 = local_490;
    lVar13 = *(longlong *)(*(longlong *)(lVar11 + 0x20 + lVar37 * 0x30) + 0x18);
    uVar35 = *(uint *)(lVar13 + 0xd4);
    lVar38 = (longlong)(int)uVar35;
    if (iVar36 == 0) {
      pFVar28->OverscanPercentage = *(float *)(lVar13 + 0x90);
      (pFVar28->CropRectangle).field0_0x0._s_0.Min.field0_0x0 =
           *(TIntPoint<int>_u_0 *)(lVar13 + 0x98);
      (pFVar28->CropRectangle).field0_0x0._s_0.Max.field0_0x0 =
           *(TIntPoint<int>_u_0 *)(lVar13 + 0xa0);
    }
    else {
      pUVar23 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)local_490);
      uVar42 = 0;
      if ((int)uVar35 < (pUVar23->ActiveShotList).ArrayNum) {
        uVar42 = ~uVar35 >> 0x1f;
      }
      if ((uVar42 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pUVar14 = *(UMoviePipelineExecutorShot **)
                 ((pUVar23->ActiveShotList).AllocatorInstance.Data + lVar38 * 8);
      pUVar23 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)pUVar20);
      pUVar24 = UMoviePipeline::GetPipelinePrimaryConfig(pUVar23);
      local_3b0.Data =
           (FScriptContainerElement *)Z_Construct_UClass_UMoviePipelineCameraSetting_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UClass *)local_3b0.Data != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_3b0.Data);
      }
      pUVar30 = UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot
                          ((TSubclassOf<UMoviePipelineSetting>)&local_3b0,pUVar24,pUVar14);
      if ((char)pUVar30[1]._padding_ == '\0') {
        iVar22 = 1;
      }
      else {
        iVar22 = (pUVar14->SidecarCameras).ArrayNum;
      }
      local_4d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4d0.Data.ArrayNum = 0;
      local_4d0.Data.ArrayMax = 0;
      if (iVar22 == 1) {
        iVar7 = *(int *)(lVar11 + 8 + lVar37 * 0x30);
        iVar22 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar22 = 0;
        }
        ::FString::AssignRange(&local_4d0,*(wchar_t **)(lVar11 + lVar37 * 0x30),iVar22);
      }
      else {
        ::FString::PrintfImpl(&local_468,L"%s_%s");
        if (local_4d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4d0.Data.AllocatorInstance.Data);
        }
        local_4d0.Data.AllocatorInstance.Data = local_468.Data.AllocatorInstance.Data;
        local_468.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4d0.Data.ArrayNum = local_468.Data.ArrayNum;
        local_4d0.Data.ArrayMax = local_468.Data.ArrayMax;
        local_468.Data.ArrayNum = 0;
        local_468.Data.ArrayMax = 0;
      }
      local_3a8 = local_508;
      uVar42 = ((uint)((ulonglong)local_508 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_508 >> 4)) *
               -0x7a143595;
      uVar42 = (uVar42 >> 0xd ^ uVar42) * -0x3d4d51cb;
      uVar42 = uVar42 >> 0x10 ^ uVar42;
      if (*(int *)&(pFVar28->LayerNames).field_0x8 != *(int *)&(pFVar28->LayerNames).field_0x34) {
        puVar10 = *(undefined1 **)&(pFVar28->LayerNames).field_0x40;
        puVar39 = &(pFVar28->LayerNames).field_0x38;
        if (puVar10 != (undefined1 *)0x0) {
          puVar39 = puVar10;
        }
        iVar22 = *(int *)(puVar39 +
                         (ulonglong)(*(int *)&(pFVar28->LayerNames).field_0x48 - 1U & uVar42) * 4);
        if (iVar22 != -1) {
          do {
            puVar34 = (ulonglong *)((longlong)iVar22 * 0x20 + *(longlong *)&pFVar28->LayerNames);
            if ((FImagePixelData *)*puVar34 == local_508) {
              if (puVar34 != (ulonglong *)0x0) goto LAB_14ddf0cb8;
              break;
            }
            iVar22 = (int)puVar34[3];
          } while (iVar22 != -1);
        }
      }
      TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
      ::EmplaceByHash<FImagePixelData_*,FString_const_&>
                ((TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
                  *)&pFVar28->LayerNames,uVar42,&local_3a8,&local_4d0);
LAB_14ddf0cb8:
      pFVar43 = local_510;
      uVar42 = (uint)local_518;
      if (local_4d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4d0.Data.AllocatorInstance.Data);
        pFVar43 = local_510;
        uVar42 = (uint)local_518;
      }
    }
    pFVar28->Width = local_4e0;
    pFVar28->Height = local_4dc;
    pTVar4 = &pFVar28->Layers;
    pFVar15 = (pTVar4->AllocatorInstance).Data;
    if (((pFVar15 <= (FScriptContainerElement *)&local_508) &&
        ((FScriptContainerElement *)&local_508 < pFVar15 + (longlong)(pFVar28->Layers).ArrayMax * 8)
        ) && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar21)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    piVar2 = &(pFVar28->Layers).ArrayMax;
    iVar22 = (pFVar28->Layers).ArrayNum;
    if (iVar22 == *piVar2) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar4->AllocatorInstance,piVar2);
    }
    (pFVar28->Layers).ArrayNum = iVar22 + 1;
    *(FImagePixelData **)((pTVar4->AllocatorInstance).Data + (longlong)iVar22 * 8) = local_508;
    local_508 = (FImagePixelData *)0x0;
    iVar36 = iVar36 + 1;
    TStack_4b8.UnvisitedBitMask = TStack_4b8.UnvisitedBitMask & ~TStack_4b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4b8);
  } while( true );
}

// ShouldCropOverscanImpl @ 14ddfef10

bool __thiscall
UMoviePipelineImageSequenceOutput_EXR::ShouldCropOverscanImpl
          (UMoviePipelineImageSequenceOutput_EXR *this)

{
  return false;
}

// StaticRegisterNativesUMoviePipelineImageSequenceOutput_EXR @ 14ddff2b0

void __cdecl
UMoviePipelineImageSequenceOutput_EXR::StaticRegisterNativesUMoviePipelineImageSequenceOutput_EXR
          (void)

{
  return;
}

// UpdateTelemetry @ 14de02ef0

void __thiscall
UMoviePipelineImageSequenceOutput_EXR::UpdateTelemetry
          (UMoviePipelineImageSequenceOutput_EXR *this,FMoviePipelineShotRenderTelemetry *param_1)

{
  if (this->bMultilayer != false) {
    param_1->bUsesMultiEXR = true;
    return;
  }
  param_1->bUsesEXR = true;
  return;
}

