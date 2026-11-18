// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineMP4Encoder
// Functions: 16

// StaticClass @ 14de312e0

UClass * __cdecl UMovieGraphMP4EncoderNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphMP4EncoderNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineMP4Encoder",L"MovieGraphMP4EncoderNode",
               &Z_Registration_Info_UClass_UMovieGraphMP4EncoderNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphMP4EncoderNode,0x230,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMovieGraphMP4EncoderNode>,
               InternalVTableHelperCtorCaller<UMovieGraphMP4EncoderNode>,local_res8,
               UMovieGraphVideoOutputNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphMP4EncoderNode.InnerSingleton;
}

// UMovieGraphMP4EncoderNode @ 14de31e50

/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */

UMovieGraphMP4EncoderNode * __thiscall
UMovieGraphMP4EncoderNode::UMovieGraphMP4EncoderNode
          (UMovieGraphMP4EncoderNode *this,FVTableHelper *param_1)

{
  FString local_28;
  TStringView<wchar_t> local_18;
  
  UMovieGraphVideoOutputNode::UMovieGraphVideoOutputNode((UMovieGraphVideoOutputNode *)this,param_1)
  ;
  this->EncodingRateControl = VariableBitRate;
  this->_padding_ = (longlong)&_vftable__for__UMovieGraphVideoOutputNode__;
  this->AverageBitrateInMbps = 8.0;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphEvaluationNodeInjector__;
  (this->CachedPipeline).WeakPtr = (FWeakObjectPtr)0x0;
  this->MaxBitrateInMbps = 16.0;
  this->ConstantRateFactor = 0x14;
  this->EncodingProfile = High;
  this->EncodingLevel = Auto;
  this->bIncludeAudio = true;
  (this->OCIOConfiguration).bIsEnabled = false;
  FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
            (&(this->OCIOConfiguration).ColorConfiguration);
  *(undefined8 *)&this->OCIOContext = 0;
  *(undefined8 *)&(this->OCIOContext).field_0x8 = 0;
  *(undefined8 *)&(this->OCIOContext).field_0x20 = 0;
  *(undefined4 *)&(this->OCIOContext).field_0x28 = 0;
  *(undefined4 *)&(this->OCIOContext).field_0x2c = 0x80;
  *(undefined4 *)&(this->OCIOContext).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OCIOContext).field_0x34 = 0;
  *(undefined8 *)&(this->OCIOContext).field_0x40 = 0;
  *(undefined4 *)&(this->OCIOContext).field_0x48 = 0;
  this->bEnableBurnIn = false;
  ::FString::FString(&local_28,
                     L"/MovieRenderPipeline/Blueprints/Graph/DefaultGraphBurnIn.DefaultGraphBurnIn_C"
                    );
  *(undefined8 *)&this->BurnInClass = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x8 = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x10 = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x18 = 0;
  local_18.Size = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    local_18.Size = 0;
  }
  local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
  FSoftObjectPath::SetPath((FSoftObjectPath *)&this->BurnInClass,&local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  this->bCompositeOntoFinalImage = true;
  ::FString::FString(&this->BurnInFileNameFormat,L"{sequence_name}.{layer_name}.{renderer_name}");
  return this;
}

// UMovieGraphMP4EncoderNode @ 14de31fc0

/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */

UMovieGraphMP4EncoderNode * __thiscall
UMovieGraphMP4EncoderNode::UMovieGraphMP4EncoderNode(UMovieGraphMP4EncoderNode *this)

{
  FString local_28;
  TStringView<wchar_t> local_18;
  
  UMovieGraphVideoOutputNode::UMovieGraphVideoOutputNode((UMovieGraphVideoOutputNode *)this);
  this->EncodingRateControl = VariableBitRate;
  this->_padding_ = (longlong)&_vftable__for__UMovieGraphVideoOutputNode__;
  this->AverageBitrateInMbps = 8.0;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphEvaluationNodeInjector__;
  (this->CachedPipeline).WeakPtr = (FWeakObjectPtr)0x0;
  this->MaxBitrateInMbps = 16.0;
  this->ConstantRateFactor = 0x14;
  this->EncodingProfile = High;
  this->EncodingLevel = Auto;
  this->bIncludeAudio = true;
  (this->OCIOConfiguration).bIsEnabled = false;
  FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
            (&(this->OCIOConfiguration).ColorConfiguration);
  *(undefined8 *)&this->OCIOContext = 0;
  *(undefined8 *)&(this->OCIOContext).field_0x8 = 0;
  *(undefined8 *)&(this->OCIOContext).field_0x20 = 0;
  *(undefined4 *)&(this->OCIOContext).field_0x28 = 0;
  *(undefined4 *)&(this->OCIOContext).field_0x2c = 0x80;
  *(undefined4 *)&(this->OCIOContext).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OCIOContext).field_0x34 = 0;
  *(undefined8 *)&(this->OCIOContext).field_0x40 = 0;
  *(undefined4 *)&(this->OCIOContext).field_0x48 = 0;
  this->bEnableBurnIn = false;
  ::FString::FString(&local_28,
                     L"/MovieRenderPipeline/Blueprints/Graph/DefaultGraphBurnIn.DefaultGraphBurnIn_C"
                    );
  *(undefined8 *)&this->BurnInClass = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x8 = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x10 = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x18 = 0;
  local_18.Size = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    local_18.Size = 0;
  }
  local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
  FSoftObjectPath::SetPath((FSoftObjectPath *)&this->BurnInClass,&local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  this->bCompositeOntoFinalImage = true;
  ::FString::FString(&this->BurnInFileNameFormat,L"{sequence_name}.{layer_name}.{renderer_name}");
  return this;
}

// ~UMovieGraphMP4EncoderNode @ 14de321c0

/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */

void __thiscall
UMovieGraphMP4EncoderNode::~UMovieGraphMP4EncoderNode(UMovieGraphMP4EncoderNode *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieGraphVideoOutputNode__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphEvaluationNodeInjector__;
  pFVar1 = (this->BurnInFileNameFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->BurnInClass).field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->OCIOContext).field_0x48 = 0;
  pvVar2 = *(void **)&(this->OCIOContext).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OCIOContext);
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&(this->OCIOConfiguration).ColorConfiguration);
  this->_padding_ = (longlong)&___7IInterface__6B_;
  UMovieGraphVideoOutputNode::~UMovieGraphVideoOutputNode((UMovieGraphVideoOutputNode *)this);
  return;
}

// BeginFinalize_EncodeThread @ 14de323e0

/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieGraphMP4EncoderNode::BeginFinalize_EncodeThread
          (UMovieGraphMP4EncoderNode *this,IVideoCodecWriter *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined4 uVar8;
  TMap<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData,0>_>
  *pTVar9;
  bool bVar10;
  uint uVar11;
  UObject *pUVar12;
  FAudioState *pFVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  longlong lVar21;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined1 local_c8 [24];
  int iStack_b0;
  int iStack_ac;
  float local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  TMap<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  TArrayView<short,int> local_68 [3];
  
  lVar15 = *(longlong *)&param_1[1].StableFileName.Data.ArrayNum;
  if (lVar15 == 0) {
    return;
  }
  if (*(char *)(lVar15 + 0x48) == '\0') {
    return;
  }
  lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       _thread_safe_static_guard_0__ <= *(int *)(lVar15 + 0x9d4c)) ||
     (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
     _thread_safe_static_guard_0__ != -1)) goto LAB_14de3243f;
  pwVar14 = FCommandLine::Get();
  bVar10 = FParse::Param(pwVar14,L"nosound");
  if (bVar10) {
    pwVar14 = FCommandLine::Get();
    bVar10 = FParse::Param(pwVar14,L"enablesound");
    if (bVar10) goto LAB_14de32865;
    `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
         true;
  }
  else {
LAB_14de32865:
    `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
         false;
  }
  _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                       _thread_safe_static_guard_0__);
LAB_14de3243f:
  if ((*(int *)(lVar15 + 0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       _thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_1__),
     `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
     _thread_safe_static_guard_1__ == -1)) {
    if ((FApp::bIsBenchmarking == false) &&
       ((PRIVATE_GIsRunningCommandlet == false || (PRIVATE_GAllowCommandletAudio != false)))) {
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      bApplicationTypeDoesNotRenderAudio = false;
    }
    else {
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      bApplicationTypeDoesNotRenderAudio = true;
    }
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                         _thread_safe_static_guard_1__);
  }
  if ((`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       bApplicationTypeDoesNotRenderAudio == false) &&
     (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline
      == false)) {
    pUVar12 = FWeakObjectPtr::Get(&(this->CachedPipeline).WeakPtr);
    pFVar13 = UMovieGraphAudioRendererBase::GetAudioState
                        (*(UMovieGraphAudioRendererBase **)(pUVar12 + 5));
    iVar3 = *(int *)&(param_1->LightweightSourceData).field_0x28;
    puVar1 = &(param_1->LightweightSourceData).field_0x10;
    local_c8._8_4_ = 0;
    local_c8._0_8_ = &param_1->LightweightSourceData;
    local_a8 = 0.0;
    local_c8._12_4_ = 1;
    iStack_ac = 0;
    if (iVar3 != 0) {
      puVar20 = *(uint **)&(param_1->LightweightSourceData).field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)puVar1;
      }
      uVar18 = *puVar20;
      while (uVar18 == 0) {
        lVar15 = (longlong)(int)local_c8._8_4_;
        local_a8 = (float)((int)local_a8 + 0x20);
        local_c8._8_4_ = local_c8._8_4_ + 1;
        iStack_ac = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_c8._8_4_)
        goto LAB_14de3251d;
        uVar18 = puVar20[lVar15 + 1];
      }
      local_c8._12_4_ = -uVar18 & uVar18;
      uVar2 = (ulonglong)(uint)local_c8._12_4_ * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_res18 = (int)lVar15;
      iStack_ac = (int)local_a8 + -1 + local_res18;
      if (iVar3 < iStack_ac) {
        iStack_ac = iVar3;
      }
    }
LAB_14de3251d:
    uVar18 = *(uint *)&(param_1->LightweightSourceData).field_0x28;
    uStack_a4 = local_68[2]._12_4_;
    iStack_a0 = *(int *)&(param_1->LightweightSourceData).field_0x8 -
                *(int *)&(param_1->LightweightSourceData).field_0x34;
    uVar17 = uVar18 & 0xffffffe0;
    iStack_b0 = -1;
    TStack_90._padding_ = CONCAT44(local_c8._12_4_,local_c8._8_4_);
    TStack_90.CurrentBitIndex = iStack_ac;
    TStack_90.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)uVar18 >> 5;
    TStack_90._28_4_ = local_68[2]._12_4_;
    TStack_90.BaseBitIndex = (int)local_a8;
    uStack_70 = CONCAT44(uStack_9c,iStack_a0);
    local_c8._16_8_ = puVar1;
    local_98 = (TMap<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData,0>_>
                *)local_c8._0_8_;
    TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar18 < 0) || (iVar3 < (int)uVar18)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar11 = *(uint *)&(param_1->LightweightSourceData).field_0x28;
    if (uVar18 != uVar11) {
      puVar19 = *(undefined1 **)&(param_1->LightweightSourceData).field_0x20;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = puVar1;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar16 * 4);
      while (uVar18 == 0) {
        lVar15 = (longlong)iVar16;
        uVar17 = uVar17 + 0x20;
        iVar16 = iVar16 + 1;
        uVar18 = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_14de32620;
        uVar18 = *(uint *)(puVar19 + lVar15 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_res20 = (int)lVar15;
      uVar18 = local_res20 + -1 + uVar17;
      if ((int)uVar11 < (int)uVar18) {
        uVar18 = uVar11;
      }
    }
LAB_14de32620:
    while( true ) {
      pTVar9 = local_98;
      if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      lVar15 = (longlong)TStack_90.CurrentBitIndex;
      if (((TStack_90.CurrentBitIndex == uVar18) &&
          (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar9 == &param_1->LightweightSourceData)) break;
      lVar4 = *(longlong *)pTVar9;
      uVar17 = *(uint *)(lVar15 * 0x10 + lVar4);
      if (((int)uVar17 < 0) || ((pFVar13->FinishedSegments).ArrayNum <= (int)uVar17)) {
        if (2 < (byte)LogMovieRenderPipeline._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
        }
      }
      else {
        uVar11 = 0;
        if ((int)uVar17 < (pFVar13->FinishedSegments).ArrayNum) {
          uVar11 = ~uVar17 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar5 = *(longlong *)&param_1[1].StableFileName.Data.ArrayNum;
        pFVar6 = (pFVar13->FinishedSegments).AllocatorInstance.Data;
        lVar21 = (longlong)(int)uVar17 * 0x148;
        iVar16 = (int)((float)((int)(((float)*(int *)(lVar5 + 0x1c) / (float)*(int *)(lVar5 + 0x18))
                                    * *(float *)(pFVar6 + lVar21 + 0x134)) *
                              *(int *)(lVar15 * 0x10 + 4 + lVar4)) *
                      *(float *)(pFVar6 + lVar21 + 0x130));
        iVar3 = *(int *)(pFVar6 + lVar21 + 0x140);
        if (iVar16 < *(int *)(pFVar6 + lVar21 + 0x140)) {
          iVar3 = iVar16;
        }
        Audio::TSampleBuffer<short>::TSampleBuffer<short>
                  ((TSampleBuffer<short> *)local_c8,*(float **)(pFVar6 + lVar21 + 0x138),iVar3,
                   (int)*(float *)(pFVar6 + lVar21 + 0x130),(int)*(float *)(pFVar6 + lVar21 + 0x134)
                  );
        uVar8 = local_c8._8_4_;
        local_68[0].DataPtr = (short *)local_c8._0_8_;
        if (((int)local_c8._8_4_ < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_68[0].ArrayNum = uVar8;
        FMoviePipelineMP4Encoder::WriteAudioSample
                  (*(FMoviePipelineMP4Encoder **)&param_1[1].StableFileName.Data.ArrayNum,local_68);
        if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_c8._0_8_);
        }
      }
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    }
  }
  return;
}

// Finalize_EncodeThread @ 14de32e90

/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieGraphMP4EncoderNode::Finalize_EncodeThread
          (UMovieGraphMP4EncoderNode *this,IVideoCodecWriter *param_1)

{
  longlong lVar1;
  int iVar2;
  HRESULT HVar3;
  
  lVar1 = *(longlong *)&param_1[1].StableFileName.Data.ArrayNum;
  if (lVar1 == 0) {
    return;
  }
  if ((*(char *)(lVar1 + 0x49) == '\0') && (*(char *)(lVar1 + 0x48) != '\0')) {
    if (*(longlong **)(lVar1 + 0x60) != (longlong *)0x0) {
      iVar2 = (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x58))();
      if ((iVar2 < 0) && (1 < (byte)LogTemp._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x10))();
      *(undefined8 *)(lVar1 + 0x60) = 0;
    }
    HVar3 = MFShutdown();
    if ((HVar3 < 0) && (1 < (byte)LogTemp._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    FWindowsPlatformMisc::CoUninitialize();
    *(undefined1 *)(lVar1 + 0x49) = 1;
  }
  return;
}

// GetFilenameExtension @ 14de33060

/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */

wchar_t * __thiscall
UMovieGraphMP4EncoderNode::GetFilenameExtension(UMovieGraphMP4EncoderNode *this)

{
  return L"mp4";
}

// GetPrivateStaticClass @ 14de33080

UClass * __cdecl UMovieGraphMP4EncoderNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphMP4EncoderNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineMP4Encoder",L"MovieGraphMP4EncoderNode",
               &Z_Registration_Info_UClass_UMovieGraphMP4EncoderNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphMP4EncoderNode,0x230,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMovieGraphMP4EncoderNode>,
               InternalVTableHelperCtorCaller<UMovieGraphMP4EncoderNode>,local_res8,
               UMovieGraphVideoOutputNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphMP4EncoderNode.InnerSingleton;
}

// Initialize_EncodeThread @ 14de33de0

/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieGraphMP4EncoderNode::Initialize_EncodeThread
          (UMovieGraphMP4EncoderNode *this,IVideoCodecWriter *param_1)

{
  bool bVar1;
  
  bVar1 = FMoviePipelineMP4Encoder::Initialize
                    (*(FMoviePipelineMP4Encoder **)&param_1[1].StableFileName.Data.ArrayNum);
  if (!bVar1) {
    if (1 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    return false;
  }
  return true;
}

// Initialize_GameThread @ 14de33e80

/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */
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

TUniquePtr<MovieRenderGraph::IVideoCodecWriter,TDefaultDelete<MovieRenderGraph::IVideoCodecWriter>_>
__thiscall
UMovieGraphMP4EncoderNode::Initialize_GameThread
          (UMovieGraphMP4EncoderNode *this,FMovieGraphVideoNodeInitializationContext *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int *piVar6;
  ForAnyElementType _Src;
  bool bVar7;
  undefined1 uVar8;
  UMovieGraphGlobalOutputSettingNode *pUVar9;
  UClass *pUVar10;
  TUniquePtr<MovieRenderGraph::IVideoCodecWriter,TDefaultDelete<MovieRenderGraph::IVideoCodecWriter>_>
  TVar11;
  UMovieGraphPipeline *pUVar12;
  UMovieGraphPipeline *this_00;
  UMovieGraphPipeline *pUVar13;
  UMovieGraphPipeline *pUVar14;
  longlong *in_R8;
  longlong lVar15;
  float fVar16;
  undefined1 local_res10 [8];
  longlong local_res18;
  UObject *local_res20;
  undefined8 local_c8;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_c0;
  FString local_b0;
  ForAnyElementType local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  
  pUVar9 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                     ((UMovieGraphEvaluatedConfig *)in_R8[1],UMovieGraphNode::GlobalsPinName,true,
                      true);
  UMovieGraphEvaluatedConfig::GetSettingsForBranch
            ((UMovieGraphEvaluatedConfig *)in_R8[1],&local_c0,(UClass *)this->_padding_,
             *(FName *)in_R8[3],false,true);
  this_00 = (UMovieGraphPipeline *)0x0;
  if (local_c0.ArrayNum < 1) {
    if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.AllocatorInstance.Data);
    }
LAB_14de33f2e:
    ::FName::ToString((FName *)in_R8[3],&local_b0);
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("EvaluatedNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineMP4Encoder\\Private\\Graph\\MovieGraphMP4EncoderNode.cpp"
                       ,0x44,L"MP4 Encoder node could not be found in the graph in branch [%s].");
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    pUVar13 = this_00;
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      TVar11.Ptr = (IVideoCodecWriter *)(*pcVar5)();
      return (TUniquePtr<MovieRenderGraph::IVideoCodecWriter,TDefaultDelete<MovieRenderGraph::IVideoCodecWriter>_>
              )TVar11.Ptr;
    }
  }
  else {
    pUVar13 = *(UMovieGraphPipeline **)local_c0.AllocatorInstance.Data;
    FMemory::Free(local_c0.AllocatorInstance.Data);
    if (pUVar13 == (UMovieGraphPipeline *)0x0) goto LAB_14de33f2e;
    pUVar10 = StaticClass();
    iVar2 = (int)pUVar10->_padding_;
    if ((*(int *)(pUVar13->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar10->_padding_)) goto LAB_14de33f2e;
  }
  (**(code **)(**(longlong **)(*in_R8 + 0xc0) + 0x2b8))(*(longlong **)(*in_R8 + 0xc0),local_res10);
  UMovieGraphBlueprintLibrary::GetEffectiveFrameRate
            ((UMovieGraphGlobalOutputSettingNode *)&local_res18,(FFrameRate *)pUVar9);
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0x10000001e;
  local_78 = 1;
  local_74 = 2;
  local_70 = 48000;
  local_6c = 24000;
  local_68 = 0xc00000;
  local_64 = 0x1000000;
  local_60 = 100;
  local_5c = 0x12;
  local_58 = 2;
  local_56 = 2;
  if (&local_98 != (ForAnyElementType *)(in_R8 + 5)) {
    uVar3 = *(uint *)(in_R8 + 6);
    pFVar4 = ((ForAnyElementType *)(in_R8 + 5))->Data;
    local_90 = (ulonglong)uVar3;
    if (uVar3 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar3,0,&local_98,uVar3,(int *)((longlong)&local_90 + 4));
      memcpy(local_98.Data,pFVar4,(longlong)(int)uVar3 * 2);
    }
  }
  local_88 = in_R8[4];
  local_80 = local_res18;
  local_60 = 100;
  fVar16 = *(float *)((longlong)&(pUVar13->CurrentJobDuplicate).field0_0x0 + 4) * __real_49800000;
  local_68 = (int)ROUND(fVar16 + fVar16 + __real_3f000000) >> 1;
  local_5c = *(undefined4 *)&(pUVar13->DuplicatedGraphs).field_0x4;
  local_56 = *(undefined1 *)((longlong)&(pUVar13->CurrentJobDuplicate).field0_0x0 + 2);
  local_78 = (pUVar13->DuplicatedGraphs).field_0xa;
  if ((*(byte *)&(pUVar13->CurrentJobDuplicate).field0_0x0 & 4) != 0) {
    fVar16 = *(float *)&pUVar13->DuplicatedGraphs * __real_49800000;
    local_64 = (int)ROUND(fVar16 + fVar16 + __real_3f000000) >> 1;
  }
  if ((*(byte *)&(pUVar13->CurrentJobDuplicate).field0_0x0 & 0x10) != 0) {
    local_58 = CONCAT11(local_58._1_1_,(pUVar13->DuplicatedGraphs).field_0x8);
  }
  if ((*(byte *)&(pUVar13->CurrentJobDuplicate).field0_0x0 & 0x20) != 0) {
    local_58 = CONCAT11((pUVar13->DuplicatedGraphs).field_0x9,(undefined1)local_58);
  }
  pUVar12 = ::operator_new(0x70);
  pUVar14 = this_00;
  if (pUVar12 != (UMovieGraphPipeline *)0x0) {
    pUVar12->_padding_ = 0;
    pUVar12->_padding_ = 0;
    pUVar12->_padding_ = 0;
    pUVar12->_padding_ = 0;
    pUVar12->_padding_ = 0;
    pUVar12->_padding_ = 0;
    pUVar12->_padding_ = 0;
    pUVar12->_padding_ = 0;
    pUVar12->_padding_ = 0;
    pUVar12->_padding_ = 0;
    pUVar12->_padding_ = 0;
    pUVar12->_padding_ = 0;
    pUVar12->_padding_ = 0;
    pUVar12->_padding_ = 0;
    *(undefined4 *)((longlong)&pUVar12->_padding_ + 4) = 0x80;
    *(undefined4 *)&pUVar12->_padding_ = 0xffffffff;
    pUVar14 = pUVar12;
  }
  pUVar12 = ::operator_new(0x70);
  _Src.Data = local_98.Data;
  if (pUVar12 != (UMovieGraphPipeline *)0x0) {
    pUVar12->_padding_ = 0;
    lVar15 = (longlong)(int)local_90;
    *(int *)&pUVar12->_padding_ = (int)local_90;
    piVar6 = (int *)((longlong)&pUVar12->_padding_ + 4);
    if ((int)local_90 == 0) {
      *piVar6 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_90,0,(ForAnyElementType *)pUVar12,(int)local_90,piVar6);
      memcpy((FScriptContainerElement *)pUVar12->_padding_,_Src.Data,lVar15 * 2);
    }
    *(undefined4 *)&pUVar12->_padding_ = (undefined4)local_88;
    *(undefined4 *)((longlong)&pUVar12->_padding_ + 4) = local_88._4_4_;
    pUVar12->_padding_ = local_80;
    *(undefined1 *)&pUVar12->_padding_ = local_78;
    *(undefined4 *)((longlong)&pUVar12->_padding_ + 4) = local_74;
    *(undefined4 *)&pUVar12->_padding_ = local_70;
    *(undefined4 *)((longlong)&pUVar12->_padding_ + 4) = local_6c;
    *(int *)&pUVar12->_padding_ = local_68;
    *(int *)((longlong)&pUVar12->_padding_ + 4) = local_64;
    *(undefined4 *)&pUVar12->_padding_ = local_60;
    *(undefined4 *)((longlong)&pUVar12->_padding_ + 4) = local_5c;
    *(undefined1 *)&pUVar12->_padding_ = (undefined1)local_58;
    *(undefined1 *)((longlong)&pUVar12->_padding_ + 1) = local_58._1_1_;
    *(undefined1 *)((longlong)&pUVar12->_padding_ + 2) = local_56;
    *(undefined2 *)&pUVar12->_padding_ = 0;
    pUVar12->_padding_ = 0;
    pUVar12->_padding_ = 0;
    pUVar12->_padding_ = 0;
    pUVar12->_padding_ = 0;
    this_00 = pUVar12;
  }
  plVar1 = &pUVar14->_padding_;
  if (plVar1 == &local_c8) {
    if (this_00 == (UMovieGraphPipeline *)0x0) goto LAB_14de34295;
    FMoviePipelineMP4Encoder::Finalize((FMoviePipelineMP4Encoder *)this_00);
    pUVar12 = this_00;
    if ((void *)this_00->_padding_ != (void *)0x0) {
      FMemory::Free((void *)this_00->_padding_);
    }
  }
  else {
    pUVar12 = (UMovieGraphPipeline *)*plVar1;
    *plVar1 = (longlong)this_00;
    if (pUVar12 == (UMovieGraphPipeline *)0x0) goto LAB_14de34295;
    FMoviePipelineMP4Encoder::Finalize((FMoviePipelineMP4Encoder *)pUVar12);
    pFVar4 = (((FMoviePipelineMP4EncoderOptions *)&pUVar12->_padding_)->OutputFilename).Data.
             AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  ::operator_delete(pUVar12,0x70);
LAB_14de34295:
  if (((*(char *)&(pUVar13->CurrentJobDuplicate).field0_0x0 < '\0') &&
      ((pUVar13->DuplicatedGraphs).field_0x10 != '\0')) && ((char)in_R8[7] != '\0')) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  *(undefined1 *)&pUVar14->_padding_ = uVar8;
  local_res20 = (UObject *)*in_R8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  FWeakObjectPtr::operator=(&(this->CachedPipeline).WeakPtr,(FObjectPtr)&local_res20);
  param_1->Pipeline = pUVar14;
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return (TUniquePtr<MovieRenderGraph::IVideoCodecWriter,TDefaultDelete<MovieRenderGraph::IVideoCodecWriter>_>
          )(IVideoCodecWriter *)param_1;
}

// InjectNodesPostEvaluation @ 14de34750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UMovieGraphMP4EncoderNode::InjectNodesPostEvaluation
          (UMovieGraphMP4EncoderNode *this,FName *param_1,UMovieGraphEvaluatedConfig *param_2,
          TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined1 *puVar1;
  FOpenColorIOColorSpace *pFVar2;
  UObject *pUVar3;
  ForAnyElementType _Src;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FOpenColorIOColorConversionSettings *pFVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  longlong *plVar11;
  int iVar12;
  undefined1 auStackY_148 [32];
  UObject *local_f8;
  FSoftObjectPath local_f0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if ((char)(this->OCIOConfiguration).ColorConfiguration.SourceColorSpace.FamilyName.Data.ArrayNum
      != '\0') {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)param_2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar9 = Z_Construct_UClass_UMovieGraphOutputBurnInNode_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar9);
    local_c8._8_8_ = param_2;
    pUVar10 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar11 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    pUVar10[0xb].field_0x10 = pUVar10[0xb].field_0x10 | 0xf;
    pUVar10[8].field_0x10 = pUVar10[8].field_0x10 | 1;
    pUVar10[5].field_0x10 = pUVar10[5].field_0x10 | 1;
    ::FString::operator=((FString *)&pUVar10[0xb].field_0x18,L"MP4");
    iVar8 = *(int *)&(this->OCIOConfiguration).ColorConfiguration.DestinationColorSpace.Description.
                     Data.AllocatorInstance.Data;
    iVar12 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar12 = 0;
    }
    ::FString::AssignRange
              ((FString *)&pUVar10[0xc].field_0x20,
               *(wchar_t **)
                &(this->OCIOConfiguration).ColorConfiguration.DestinationColorSpace.FamilyName.Data.
                 ArrayNum,iVar12);
    local_f0.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_f0.AssetPath.PackageName.Number = 0;
    local_f0.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_f0.AssetPath.AssetName.Number = 0;
    local_f0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.SubPathString.Data.ArrayNum = 0;
    local_f0.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath
              (&local_f0,
               *(UObject **)
                &this[-1].OCIOConfiguration.ColorConfiguration.DestinationDisplayView.Display.Data.
                 ArrayNum);
    puVar1 = &pUVar10[0xc].field_0x10;
    *(uint *)&pUVar10[0xc].field_0x0 = local_f0.AssetPath.PackageName.ComparisonIndex.Value;
    *(uint *)&pUVar10[0xc].field_0x4 = local_f0.AssetPath.PackageName.Number;
    *(uint *)&pUVar10[0xc].field_0x8 = local_f0.AssetPath.AssetName.ComparisonIndex.Value;
    *(uint *)&pUVar10[0xc].field_0xc = local_f0.AssetPath.AssetName.Number;
    if ((FUtf8String *)puVar1 != &local_f0.SubPathString) {
      if (*(void **)puVar1 != (void *)0x0) {
        FMemory::Free(*(void **)puVar1);
      }
      *(FScriptContainerElement **)puVar1 = local_f0.SubPathString.Data.AllocatorInstance.Data;
      *(int *)&pUVar10[0xc].field_0x18 = local_f0.SubPathString.Data.ArrayNum;
      *(int *)&pUVar10[0xc].field_0x1c = local_f0.SubPathString.Data.ArrayMax;
      local_f0.SubPathString.Data.ArrayNum = 0;
      local_f0.SubPathString.Data.ArrayMax = 0;
      local_f0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_f0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.SubPathString.Data.AllocatorInstance.Data);
    }
    ::FString::operator=((FString *)&pUVar10[0xd].field_0x8,L"");
    pFVar6 = &(this->OCIOConfiguration).ColorConfiguration;
    iVar8 = (pFVar6->SourceColorSpace).Description.Data.ArrayNum;
    iVar12 = (pFVar6->SourceColorSpace).Description.Data.ArrayMax;
    pFVar2 = &(this->OCIOConfiguration).ColorConfiguration.DestinationColorSpace;
    pUVar3 = pUVar10 + 9;
    *(FScriptContainerElement **)&pUVar10[8].field_0x18 =
         (this->OCIOConfiguration).ColorConfiguration.SourceColorSpace.Description.Data.
         AllocatorInstance.Data;
    *(int *)&pUVar10[8].field_0x20 = iVar8;
    *(int *)&pUVar10[8].field_0x24 = iVar12;
    if ((FOpenColorIOColorSpace *)pUVar3 != pFVar2) {
      iVar8 = (this->OCIOConfiguration).ColorConfiguration.DestinationColorSpace.ColorSpaceName.Data
              .ArrayNum;
      puVar1 = &pUVar10[9].field_0xc;
      _Src.Data = (pFVar2->ColorSpaceName).Data.AllocatorInstance.Data;
      *(int *)&pUVar10[9].field_0x8 = iVar8;
      if ((iVar8 == 0) && (*(int *)puVar1 == 0)) {
        *(undefined4 *)puVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar8,*(int *)puVar1,(ForAnyElementType *)pUVar3,iVar8,(int *)puVar1);
        if (iVar8 != 0) {
          memcpy(*(FScriptContainerElement **)pUVar3,_Src.Data,(longlong)iVar8);
        }
      }
    }
    pUVar10[5].field_0x11 =
         *(undefined1 *)
          &(this->OCIOConfiguration).ColorConfiguration.DestinationColorSpace.FamilyName.Data.
           AllocatorInstance.Data;
    pFVar4 = (param_3->AllocatorInstance).Data;
    local_f8 = pUVar10;
    if (((pFVar4 <= (FScriptContainerElement *)&local_f8) &&
        ((FScriptContainerElement *)&local_f8 < pFVar4 + (longlong)param_3->ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = param_3->ArrayNum;
    if (iVar8 == param_3->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar8 + 1;
    *(UObject **)((param_3->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_f8;
  }
  return;
}

// IsAudioSupported @ 14de34a30

/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */

bool __thiscall UMovieGraphMP4EncoderNode::IsAudioSupported(UMovieGraphMP4EncoderNode *this)

{
  return true;
}

// StaticRegisterNativesUMovieGraphMP4EncoderNode @ 14de34a50

void __cdecl UMovieGraphMP4EncoderNode::StaticRegisterNativesUMovieGraphMP4EncoderNode(void)

{
  return;
}

// UpdateTelemetry @ 14de34a70

/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */

void __thiscall
UMovieGraphMP4EncoderNode::UpdateTelemetry
          (UMovieGraphMP4EncoderNode *this,FMoviePipelineShotRenderTelemetry *param_1)

{
  param_1->bUsesMP4 = true;
  return;
}

// WriteFrame_EncodeThread @ 14de35180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014de35782) */
/* WARNING: Removing unreachable block (ram,0x00014de358be) */
/* WARNING: Removing unreachable block (ram,0x00014de3563b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff08 : 0x00014de3563f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */
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

void __thiscall
UMovieGraphMP4EncoderNode::WriteFrame_EncodeThread
          (UMovieGraphMP4EncoderNode *this,IVideoCodecWriter *param_1,FImagePixelData *param_2,
          TArray<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TSizedDefaultAllocator<32>_>
          *param_3,TObjectPtr<UMovieGraphEvaluatedConfig> param_4,FString *param_5)

{
  FScriptContainerElement *pFVar1;
  UMovieGraphEvaluatedConfig *this_00;
  FMovieGraphSampleState *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  UClass *pUVar7;
  UMovieGraphPipeline *pUVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  TIntPoint<int>_u_0 TVar14;
  ulonglong uVar15;
  longlong *plVar16;
  TReferenceControllerBase<1> *pTVar17;
  ForAnyElementType FVar18;
  int iVar19;
  TUniqueFunction<void___cdecl(FImagePixelData_*)> *pTVar20;
  FSharedReferencer<1> FVar21;
  undefined1 auStackY_1e8 [32];
  TArray<TUniqueFunction<void___cdecl(FImagePixelData_*)>,TSizedDefaultAllocator<32>_> local_198;
  undefined1 local_188;
  undefined1 local_187 [7];
  undefined1 local_180 [16];
  TIntPoint<int>_u_0 local_170;
  TIntPoint<int>_u_0 local_168;
  FSharedReferencer<1> local_160;
  longlong local_158;
  IVideoCodecWriter *local_150;
  UObject *local_148;
  FImagePixelData *local_140;
  longlong *local_138;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_130;
  FName local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [24];
  TIntPoint<int>_u_0 TStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [24];
  TIntPoint<int>_u_0 TStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [24];
  TIntPoint<int>_u_0 TStack_90;
  undefined8 local_88;
  undefined8 local_80;
  code *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  lVar10._0_4_ = param_1[1].StableFileName.Data.ArrayNum;
  lVar10._4_4_ = param_1[1].StableFileName.Data.ArrayMax;
  if (lVar10 == 0) {
    return;
  }
  iVar19 = (param_5->Data).ArrayNum;
  this_00 = *(UMovieGraphEvaluatedConfig **)param_4.field0_0x0;
  FVar21.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  iVar5 = iVar19 + -1;
  if (iVar19 == 0) {
    iVar5 = 0;
  }
  local_150 = param_1;
  pFVar6 = ::FName::FName(&local_120,iVar5,(wchar_t *)(param_5->Data).AllocatorInstance.Data,
                          FNAME_Add);
  UMovieGraphEvaluatedConfig::GetSettingsForBranch
            (this_00,&local_130,(UClass *)this->_padding_,*pFVar6,false,true);
  if (local_130.ArrayNum < 1) {
    if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.AllocatorInstance.Data);
    }
  }
  else {
    pTVar17 = *(TReferenceControllerBase<1> **)local_130.AllocatorInstance.Data;
    FMemory::Free(local_130.AllocatorInstance.Data);
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      pUVar7 = StaticClass();
      iVar19 = (int)pUVar7->_padding_;
      if ((iVar19 <= *(int *)(pTVar17[1]._padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pTVar17[1]._padding_ + 0x30) + (longlong)iVar19 * 8) ==
          &pUVar7->_padding_)) goto LAB_14de352a0;
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("EvaluatedNode",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineMP4Encoder\\Private\\Graph\\MovieGraphMP4EncoderNode.cpp"
                     ,0x84,L"MP4 Encoder node could not be found in the graph in branch [%s].");
  pTVar17 = FVar21.ReferenceController;
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14de352a0:
  UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
            (*(UMovieGraphEvaluatedConfig **)param_4.field0_0x0,UMovieGraphNode::GlobalsPinName,true
             ,true);
  local_148 = *(UObject **)param_4.field0_0x0;
  pFVar2 = (FMovieGraphSampleState *)(param_2->Payload).Object;
  local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.ArrayNum = 0;
  local_198.ArrayMax = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_148);
  }
  pUVar8 = (UMovieGraphPipeline *)FWeakObjectPtr::Get(&(this->CachedPipeline).WeakPtr);
  bVar4 = FMovieGraphOCIOHelper::GenerateOcioPixelPreProcessor
                    (pFVar2,pUVar8,(TObjectPtr<UMovieGraphEvaluatedConfig>)&local_148,
                     (FOpenColorIODisplayConfiguration *)&pTVar17[0xf].SharedReferenceCount,
                     (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)(pTVar17 + 0x1a),&local_198);
  if (bVar4) {
    if (local_198.ArrayNum < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar12 = local_198.AllocatorInstance.Data + (longlong)(local_198.ArrayNum + -1) * 0x30;
    local_78 = *(code **)pFVar12;
    local_50 = *(longlong **)(pFVar12 + 0x28);
    *(longlong *)(pFVar12 + 0x28) = 0;
    local_68 = *(undefined4 *)(pFVar12 + 0x10);
    uStack_64 = *(undefined4 *)(pFVar12 + 0x14);
    uStack_60 = *(undefined4 *)(pFVar12 + 0x18);
    uStack_5c = *(undefined4 *)(pFVar12 + 0x1c);
    local_58 = *(longlong *)(pFVar12 + 0x20);
    if (local_78 != (code *)0x0) {
      *(longlong *)pFVar12 = 0;
    }
    iVar19 = local_198.ArrayNum + -1;
    pFVar12 = local_198.AllocatorInstance.Data + (longlong)iVar19 * 0x30;
    if (*(longlong *)pFVar12 != 0) {
      pFVar13 = pFVar12 + 0x10;
      if (*(FScriptContainerElement **)(pFVar12 + 0x28) != (FScriptContainerElement *)0x0) {
        pFVar13 = *(FScriptContainerElement **)(pFVar12 + 0x28);
      }
      (**(code **)(*(longlong *)pFVar13 + 0x10))();
    }
    iVar5 = (local_198.ArrayNum - iVar19) + -1;
    iVar19 = local_198.ArrayNum;
    if (iVar5 != 0) {
      memmove(pFVar12,pFVar12 + 0x30,(longlong)iVar5 * 0x30);
      iVar19 = local_198.ArrayNum;
    }
    local_198.ArrayNum = iVar19 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,&local_198.AllocatorInstance,iVar19 + -1,&local_198.ArrayMax);
    local_140 = param_2;
    UE::Core::Private::Function::CheckCallable(local_78);
    pcVar3 = local_78;
    plVar16 = (longlong *)&local_68;
    if (local_50 != (longlong *)0x0) {
      plVar16 = local_50;
    }
    uVar9 = (**(code **)(*plVar16 + 8))();
    (*pcVar3)(uVar9,&local_140);
    if (local_78 != (code *)0x0) {
      plVar16 = (longlong *)&local_68;
      if (local_50 != (longlong *)0x0) {
        plVar16 = local_50;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
  }
  local_118 = 0;
  uStack_110 = 0;
  UE::MoviePipeline::QuantizeImagePixelDataToBitDepth
            ((FImagePixelData *)local_180,(int)param_2,
             (TSharedPtr<IImagePixelDataPayload,1> *)&DAT_00000008,SUB81(&local_118,0));
  pFVar13 = (param_3->AllocatorInstance).Data;
  iVar19 = param_3->ArrayNum;
  pFVar12 = pFVar13 + 0x48;
  do {
    if (param_3->ArrayNum != iVar19) {
      local_188 = 0;
      `TCheckedPointerIterator<TTuple<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_188);
    }
    uVar9 = local_180._0_8_;
    if (pFVar12 + -0x48 == pFVar13 + (longlong)iVar19 * 0x50) {
      iVar19 = local_198.ArrayNum;
      uVar15 = (ulonglong)local_198.ArrayNum;
      pTVar20 = (TUniqueFunction<void___cdecl(FImagePixelData_*)> *)
                (local_198.AllocatorInstance.Data + uVar15 * 0x30);
      FVar18.Data = local_198.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar15 != iVar19) {
          `TCheckedPointerIterator<TUniqueFunction<void___cdecl(FImagePixelData_*)>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_187);
        }
        uVar11 = local_180._0_8_;
        if ((TUniqueFunction<void___cdecl(FImagePixelData_*)> *)FVar18.Data == pTVar20) break;
        local_138 = (longlong *)uVar9;
        UE::Core::Private::Function::CheckCallable(*(void **)FVar18.Data);
        plVar16 = *(longlong **)
                   &((TUniqueFunction<void___cdecl(FImagePixelData_*)> *)FVar18.Data)->field_0x28;
        pcVar3 = *(code **)FVar18.Data;
        if (plVar16 == (longlong *)0x0) {
          plVar16 = (longlong *)
                    &((TUniqueFunction<void___cdecl(FImagePixelData_*)> *)FVar18.Data)->field_0x10;
        }
        uVar11 = (**(code **)(*plVar16 + 8))();
        (*pcVar3)(uVar11,&local_138);
        uVar15 = local_198._8_8_ & 0xffffffff;
        FVar18.Data = FVar18.Data + 0x30;
      }
      local_160.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_158 = 0;
      (**(code **)(*(longlong *)local_180._0_8_ + 8))(local_180._0_8_,&local_160,&local_158);
      if ((local_160.ReferenceController != (TReferenceControllerBase<1> *)0x0) &&
         (local_158 ==
          (ulonglong)(*(byte *)(uVar11 + 0x15) >> 3) * (ulonglong)*(byte *)(uVar11 + 0x16) *
          (longlong)*(int *)(uVar11 + 0xc) * (longlong)(int)*(longlong *)(uVar11 + 8))) {
        FVar21.ReferenceController = local_160.ReferenceController;
      }
      FMoviePipelineMP4Encoder::WriteFrame
                (*(FMoviePipelineMP4Encoder **)&local_150[1].StableFileName.Data.ArrayNum,
                 (uchar *)FVar21.ReferenceController);
      if ((longlong *)local_180._0_8_ != (longlong *)0x0) {
        (*(code *)**(undefined8 **)local_180._0_8_)(local_180._0_8_,1);
      }
      DestructItems<TUniqueFunction<void___cdecl(FImagePixelData_*)>,int>
                ((TUniqueFunction<void___cdecl(FImagePixelData_*)> *)
                 local_198.AllocatorInstance.Data,local_198.ArrayNum);
      if ((TUniqueFunction<void___cdecl(FImagePixelData_*)> *)local_198.AllocatorInstance.Data !=
          (TUniqueFunction<void___cdecl(FImagePixelData_*)> *)0x0) {
        FMemory::Free(local_198.AllocatorInstance.Data);
      }
      return;
    }
    iVar5 = (int)*(longlong *)(local_180._0_8_ + 0x10);
    if (iVar5 == 0) {
      (**(code **)(**(longlong **)pFVar12 + 0x18))(*(longlong **)pFVar12,&local_168);
      TStack_90 = local_168;
      local_a8._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<TAsyncCompositeImage<FColor>,void,FImagePixelData_*>::Call;
      local_168 = (TIntPoint<int>_u_0)0x0;
      local_80 = 0;
      local_a8._16_8_ =
           &
           ___7__TFunction_OwnedObject_U__TAsyncCompositeImage_UFColor_____00_0A__Function_Private_Core_UE__6B_
      ;
      local_88 = 0;
      if (((local_198.AllocatorInstance.Data <=
            (TUniqueFunction<void___cdecl(FImagePixelData_*)> *)local_a8) &&
          ((FScriptContainerElement *)local_a8 <
           local_198.AllocatorInstance.Data + (longlong)local_198.ArrayMax * 0x30)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = local_198.ArrayNum;
      if (local_198.ArrayNum == local_198.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1030,&local_198.AllocatorInstance,&local_198.ArrayMax);
      }
      lVar10 = (longlong)iVar5;
      local_198.ArrayNum = iVar5 + 1;
      *(undefined8 *)(local_198.AllocatorInstance.Data + lVar10 * 0x30) = local_a8._0_8_;
      *(undefined8 *)(local_198.AllocatorInstance.Data + lVar10 * 0x30 + 0x28) = local_80;
      local_80 = 0;
      pFVar1 = local_198.AllocatorInstance.Data + lVar10 * 0x30 + 0x10;
      *(undefined4 *)pFVar1 = local_a8._16_4_;
      *(undefined4 *)(pFVar1 + 4) = local_a8._20_4_;
      *(undefined4 *)(pFVar1 + 8) = TStack_90._0_4_;
      *(undefined4 *)(pFVar1 + 0xc) = TStack_90._4_4_;
      *(undefined8 *)(local_198.AllocatorInstance.Data + lVar10 * 0x30 + 0x20) = local_88;
      if (*(longlong *)(local_198.AllocatorInstance.Data + lVar10 * 0x30) == 0) {
        TVar14 = local_168;
        if ((code *)local_a8._0_8_ != (code *)0x0) {
          (**(code **)(local_a8._16_8_ + 0x10))();
          TVar14 = local_168;
        }
      }
      else {
        local_a8._0_8_ = (code *)0x0;
        TVar14 = local_168;
      }
LAB_14de358cc:
      if (TVar14 != (TIntPoint<int>_u_0)0x0) {
        (*(code *)**(undefined8 **)TVar14)(TVar14,1);
      }
    }
    else {
      if (iVar5 == 1) {
        (**(code **)(**(longlong **)pFVar12 + 0x18))(*(longlong **)pFVar12,&local_170);
        TStack_c0 = local_170;
        local_d8._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<TAsyncCompositeImage<FFloat16Color>,void,FImagePixelData_*>::Call;
        local_170 = (TIntPoint<int>_u_0)0x0;
        local_b0 = 0;
        local_d8._16_8_ =
             &
             ___7__TFunction_OwnedObject_U__TAsyncCompositeImage_VFFloat16Color_____00_0A__Function_Private_Core_UE__6B_
        ;
        local_b8 = 0;
        if (((local_198.AllocatorInstance.Data <=
              (TUniqueFunction<void___cdecl(FImagePixelData_*)> *)local_d8) &&
            ((FScriptContainerElement *)local_d8 <
             local_198.AllocatorInstance.Data + (longlong)local_198.ArrayMax * 0x30)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = local_198.ArrayNum;
        if (local_198.ArrayNum == local_198.ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1030,&local_198.AllocatorInstance,&local_198.ArrayMax);
        }
        lVar10 = (longlong)iVar5;
        local_198.ArrayNum = iVar5 + 1;
        *(undefined8 *)(local_198.AllocatorInstance.Data + lVar10 * 0x30) = local_d8._0_8_;
        *(undefined8 *)(local_198.AllocatorInstance.Data + lVar10 * 0x30 + 0x28) = local_b0;
        local_b0 = 0;
        pFVar1 = local_198.AllocatorInstance.Data + lVar10 * 0x30 + 0x10;
        *(undefined4 *)pFVar1 = local_d8._16_4_;
        *(undefined4 *)(pFVar1 + 4) = local_d8._20_4_;
        *(undefined4 *)(pFVar1 + 8) = TStack_c0._0_4_;
        *(undefined4 *)(pFVar1 + 0xc) = TStack_c0._4_4_;
        *(undefined8 *)(local_198.AllocatorInstance.Data + lVar10 * 0x30 + 0x20) = local_b8;
        if (*(longlong *)(local_198.AllocatorInstance.Data + lVar10 * 0x30) == 0) {
          TVar14 = local_170;
          if ((code *)local_d8._0_8_ != (code *)0x0) {
            (**(code **)(local_d8._16_8_ + 0x10))();
            TVar14 = local_170;
          }
        }
        else {
          local_d8._0_8_ = (code *)0x0;
          TVar14 = local_170;
        }
        goto LAB_14de358cc;
      }
      if (iVar5 == 2) {
        (**(code **)(**(longlong **)pFVar12 + 0x18))(*(longlong **)pFVar12,local_180 + 8);
        TStack_f0 = (TIntPoint<int>_u_0)local_180._8_8_;
        local_180._8_8_ = (TIntPoint<int>_u_0)0x0;
        local_e0 = 0;
        local_108._16_8_ =
             &
             ___7__TFunction_OwnedObject_U__TAsyncCompositeImage_UFLinearColor_____00_0A__Function_Private_Core_UE__6B_
        ;
        local_e8 = 0;
        local_108._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<TAsyncCompositeImage<FLinearColor>,void,FImagePixelData_*>::Call;
        if (((local_198.AllocatorInstance.Data <=
              (TUniqueFunction<void___cdecl(FImagePixelData_*)> *)local_108) &&
            ((FScriptContainerElement *)local_108 <
             local_198.AllocatorInstance.Data + (longlong)local_198.ArrayMax * 0x30)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = local_198.ArrayNum;
        if (local_198.ArrayNum == local_198.ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1030,&local_198.AllocatorInstance,&local_198.ArrayMax);
        }
        lVar10 = (longlong)iVar5;
        local_198.ArrayNum = iVar5 + 1;
        *(undefined8 *)(local_198.AllocatorInstance.Data + lVar10 * 0x30) = local_108._0_8_;
        *(undefined8 *)(local_198.AllocatorInstance.Data + lVar10 * 0x30 + 0x28) = local_e0;
        local_e0 = 0;
        pFVar1 = local_198.AllocatorInstance.Data + lVar10 * 0x30 + 0x10;
        *(undefined4 *)pFVar1 = local_108._16_4_;
        *(undefined4 *)(pFVar1 + 4) = local_108._20_4_;
        *(undefined4 *)(pFVar1 + 8) = TStack_f0._0_4_;
        *(undefined4 *)(pFVar1 + 0xc) = TStack_f0._4_4_;
        *(undefined8 *)(local_198.AllocatorInstance.Data + lVar10 * 0x30 + 0x20) = local_e8;
        TVar14 = (TIntPoint<int>_u_0)local_180._8_8_;
        if (*(longlong *)(local_198.AllocatorInstance.Data + lVar10 * 0x30) == 0) {
          if ((code *)local_108._0_8_ != (code *)0x0) {
            (**(code **)(local_108._16_8_ + 0x10))();
            TVar14 = (TIntPoint<int>_u_0)local_180._8_8_;
          }
        }
        else {
          local_108._0_8_ = (code *)0x0;
        }
        goto LAB_14de358cc;
      }
    }
    pFVar12 = pFVar12 + 0x50;
  } while( true );
}

// _getUObject @ 14de36160

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */

UObject * __thiscall UMovieGraphMP4EncoderNode::_getUObject(UMovieGraphMP4EncoderNode *this)

{
  return (UObject *)
         &this[-1].OCIOConfiguration.ColorConfiguration.DestinationColorSpace.Description.Data.
          ArrayNum;
}

