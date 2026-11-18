// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineMP4Encoder
// Functions: 13

// StaticClass @ 14de31220

UClass * __cdecl UMoviePipelineMP4EncoderOutput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineMP4EncoderOutput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineMP4Encoder",L"MoviePipelineMP4EncoderOutput",
               &Z_Registration_Info_UClass_UMoviePipelineMP4EncoderOutput.InnerSingleton,
               StaticRegisterNativesUMoviePipelineMP4EncoderOutput,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineMP4EncoderOutput>,
               InternalVTableHelperCtorCaller<UMoviePipelineMP4EncoderOutput>,local_res8,
               UMoviePipelineVideoOutputBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineMP4EncoderOutput.InnerSingleton;
}

// UMoviePipelineMP4EncoderOutput @ 14de32130

/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */

UMoviePipelineMP4EncoderOutput * __thiscall
UMoviePipelineMP4EncoderOutput::UMoviePipelineMP4EncoderOutput
          (UMoviePipelineMP4EncoderOutput *this,FVTableHelper *param_1)

{
  UMoviePipelineVideoOutputBase::UMoviePipelineVideoOutputBase
            ((UMoviePipelineVideoOutputBase *)this,param_1);
  this->EncodingRateControl = Quality;
  this->_padding_ = (longlong)&___7UMoviePipelineMP4EncoderOutput__6B_;
  this->AverageBitrateInMbps = 8.0;
  this->MaxBitrateInMbps = 16.0;
  this->ConstantRateFactor = 0x14;
  this->EncodingProfile = High;
  this->EncodingLevel = Auto;
  this->bIncludeAudio = true;
  return this;
}

// ~UMoviePipelineMP4EncoderOutput @ 14de32260

/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */

void __thiscall
UMoviePipelineMP4EncoderOutput::~UMoviePipelineMP4EncoderOutput
          (UMoviePipelineMP4EncoderOutput *this)

{
  this->_padding_ = (longlong)&___7UMoviePipelineMP4EncoderOutput__6B_;
  UMoviePipelineVideoOutputBase::~UMoviePipelineVideoOutputBase
            ((UMoviePipelineVideoOutputBase *)this);
  return;
}

// BeginFinalize_EncodeThread @ 14de328d0

/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipelineMP4EncoderOutput::BeginFinalize_EncodeThread
          (UMoviePipelineMP4EncoderOutput *this,IVideoCodecWriter *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined4 uVar9;
  TMap<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData,0>_>
  *pTVar10;
  bool bVar11;
  UMoviePipeline *pUVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  longlong lVar20;
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
  TMap<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  TArrayView<short,int> local_68 [3];
  
  pUVar12 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pFVar5 = param_1[1].FileName.Data.AllocatorInstance.Data;
  if (pFVar5 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar5[0x48] == (FScriptContainerElement)0x0) {
    return;
  }
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       _thread_safe_static_guard_0__ <= *(int *)(lVar14 + 0x9d4c)) ||
     (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
     _thread_safe_static_guard_0__ != -1)) goto LAB_14de3293e;
  pwVar13 = FCommandLine::Get();
  bVar11 = FParse::Param(pwVar13,L"nosound");
  if (bVar11) {
    pwVar13 = FCommandLine::Get();
    bVar11 = FParse::Param(pwVar13,L"enablesound");
    if (bVar11) goto LAB_14de32d58;
    `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
         true;
  }
  else {
LAB_14de32d58:
    `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
         false;
  }
  _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                       _thread_safe_static_guard_0__);
LAB_14de3293e:
  if ((*(int *)(lVar14 + 0x9d4c) <
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
    local_c8._8_4_ = 0;
    local_c8._0_8_ = &param_1->LightweightSourceData;
    local_c8._12_4_ = 1;
    puVar1 = &(param_1->LightweightSourceData).field_0x10;
    iVar3 = *(int *)&(param_1->LightweightSourceData).field_0x28;
    local_a8 = 0.0;
    iStack_ac = 0;
    if (iVar3 != 0) {
      puVar19 = *(uint **)&(param_1->LightweightSourceData).field_0x20;
      if (puVar19 == (uint *)0x0) {
        puVar19 = (uint *)puVar1;
      }
      uVar17 = *puVar19;
      while (uVar17 == 0) {
        lVar14 = (longlong)(int)local_c8._8_4_;
        local_a8 = (float)((int)local_a8 + 0x20);
        local_c8._8_4_ = local_c8._8_4_ + 1;
        iStack_ac = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_c8._8_4_)
        goto LAB_14de32a0d;
        uVar17 = puVar19[lVar14 + 1];
      }
      local_c8._12_4_ = -uVar17 & uVar17;
      uVar2 = (ulonglong)(uint)local_c8._12_4_ * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_res18 = (int)lVar14;
      iStack_ac = (int)local_a8 + -1 + local_res18;
      if (iVar3 < iStack_ac) {
        iStack_ac = iVar3;
      }
    }
LAB_14de32a0d:
    uVar17 = *(uint *)&(param_1->LightweightSourceData).field_0x28;
    uStack_a4 = local_68[2]._12_4_;
    iStack_a0 = *(int *)&(param_1->LightweightSourceData).field_0x8 -
                *(int *)&(param_1->LightweightSourceData).field_0x34;
    uVar16 = uVar17 & 0xffffffe0;
    iStack_b0 = -1;
    TStack_90._padding_ = CONCAT44(local_c8._12_4_,local_c8._8_4_);
    TStack_90.CurrentBitIndex = iStack_ac;
    TStack_90.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar17 >> 5;
    TStack_90._28_4_ = local_68[2]._12_4_;
    TStack_90.BaseBitIndex = (int)local_a8;
    uStack_70 = CONCAT44(uStack_9c,iStack_a0);
    local_c8._16_8_ = puVar1;
    local_98 = (TMap<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData,0>_>
                *)local_c8._0_8_;
    TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar4 = *(uint *)&(param_1->LightweightSourceData).field_0x28;
    if (uVar17 != uVar4) {
      puVar18 = *(undefined1 **)&(param_1->LightweightSourceData).field_0x20;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = puVar1;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
      while (uVar17 == 0) {
        lVar14 = (longlong)iVar15;
        uVar16 = uVar16 + 0x20;
        iVar15 = iVar15 + 1;
        uVar17 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14de32b10;
        uVar17 = *(uint *)(puVar18 + lVar14 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_res20 = (int)lVar14;
      uVar17 = local_res20 + -1 + uVar16;
      if ((int)uVar4 < (int)uVar17) {
        uVar17 = uVar4;
      }
    }
LAB_14de32b10:
    while( true ) {
      pTVar10 = local_98;
      if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      lVar14 = (longlong)TStack_90.CurrentBitIndex;
      if (((TStack_90.CurrentBitIndex == uVar17) &&
          (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar10 == &param_1->LightweightSourceData)) break;
      lVar6 = *(longlong *)pTVar10;
      iVar3 = *(int *)(lVar14 * 0x10 + lVar6);
      if ((iVar3 < 0) || ((pUVar12->AudioState).FinishedSegments.ArrayNum <= iVar3)) {
        if (2 < (byte)LogMovieRenderPipeline._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
        }
      }
      else {
        if ((iVar3 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar5 = param_1[1].FileName.Data.AllocatorInstance.Data;
        pFVar7 = (pUVar12->AudioState).FinishedSegments.AllocatorInstance.Data;
        lVar20 = (longlong)iVar3 * 0x148;
        iVar15 = (int)((float)((int)(((float)*(int *)(pFVar5 + 0x1c) /
                                     (float)*(int *)(pFVar5 + 0x18)) *
                                    *(float *)(pFVar7 + lVar20 + 0x134)) *
                              *(int *)(lVar14 * 0x10 + 4 + lVar6)) *
                      *(float *)(pFVar7 + lVar20 + 0x130));
        iVar3 = *(int *)(pFVar7 + lVar20 + 0x140);
        if (iVar15 < *(int *)(pFVar7 + lVar20 + 0x140)) {
          iVar3 = iVar15;
        }
        Audio::TSampleBuffer<short>::TSampleBuffer<short>
                  ((TSampleBuffer<short> *)local_c8,*(float **)(pFVar7 + lVar20 + 0x138),iVar3,
                   (int)*(float *)(pFVar7 + lVar20 + 0x130),(int)*(float *)(pFVar7 + lVar20 + 0x134)
                  );
        uVar9 = local_c8._8_4_;
        local_68[0].DataPtr = (short *)local_c8._0_8_;
        if (((int)local_c8._8_4_ < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_68[0].ArrayNum = uVar9;
        FMoviePipelineMP4Encoder::WriteAudioSample
                  ((FMoviePipelineMP4Encoder *)param_1[1].FileName.Data.AllocatorInstance.Data,
                   local_68);
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

// Finalize_EncodeThread @ 14de32eb0

/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipelineMP4EncoderOutput::Finalize_EncodeThread
          (UMoviePipelineMP4EncoderOutput *this,IVideoCodecWriter *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  HRESULT HVar3;
  
  pFVar1 = param_1[1].FileName.Data.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if ((pFVar1[0x49] == (FScriptContainerElement)0x0) &&
     (pFVar1[0x48] != (FScriptContainerElement)0x0)) {
    if (*(longlong **)(pFVar1 + 0x60) != (longlong *)0x0) {
      iVar2 = (**(code **)(**(longlong **)(pFVar1 + 0x60) + 0x58))();
      if ((iVar2 < 0) && (1 < (byte)LogTemp._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      (**(code **)(**(longlong **)(pFVar1 + 0x60) + 0x10))();
      *(undefined8 *)(pFVar1 + 0x60) = 0;
    }
    HVar3 = MFShutdown();
    if ((HVar3 < 0) && (1 < (byte)LogTemp._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    FWindowsPlatformMisc::CoUninitialize();
    pFVar1[0x49] = (FScriptContainerElement)0x1;
  }
  return;
}

// GetFilenameExtension @ 14de33070

/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */

wchar_t * __thiscall
UMoviePipelineMP4EncoderOutput::GetFilenameExtension(UMoviePipelineMP4EncoderOutput *this)

{
  return L"mp4";
}

// GetPrivateStaticClass @ 14de33140

UClass * __cdecl UMoviePipelineMP4EncoderOutput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineMP4EncoderOutput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineMP4Encoder",L"MoviePipelineMP4EncoderOutput",
               &Z_Registration_Info_UClass_UMoviePipelineMP4EncoderOutput.InnerSingleton,
               StaticRegisterNativesUMoviePipelineMP4EncoderOutput,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineMP4EncoderOutput>,
               InternalVTableHelperCtorCaller<UMoviePipelineMP4EncoderOutput>,local_res8,
               UMoviePipelineVideoOutputBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineMP4EncoderOutput.InnerSingleton;
}

// Initialize_EncodeThread @ 14de33e30

/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMoviePipelineMP4EncoderOutput::Initialize_EncodeThread
          (UMoviePipelineMP4EncoderOutput *this,IVideoCodecWriter *param_1)

{
  bool bVar1;
  
  bVar1 = FMoviePipelineMP4Encoder::Initialize
                    ((FMoviePipelineMP4Encoder *)param_1[1].FileName.Data.AllocatorInstance.Data);
  if (!bVar1) {
    if (1 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    return false;
  }
  return true;
}

// Initialize_GameThread @ 14de34320

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TUniquePtr<MovieRenderPipeline::IVideoCodecWriter,TDefaultDelete<MovieRenderPipeline::IVideoCodecWriter>_>
 __thiscall
UMoviePipelineMP4EncoderOutput::Initialize_GameThread
          (UMoviePipelineMP4EncoderOutput *this,FString *param_1,TIntPoint<int> param_2,
          EImagePixelType param_3,ERGBFormat param_4,uchar param_5,uchar param_6)

{
  TUniquePtr<FMoviePipelineMP4Encoder,TDefaultDelete<FMoviePipelineMP4Encoder>_> *pTVar1;
  int iVar2;
  uint uVar3;
  void *_Src;
  FMoviePipelineMP4Encoder *this_00;
  FScriptContainerElement *pFVar4;
  int *piVar5;
  ForAnyElementType _Src_00;
  UMoviePipeline *pUVar6;
  UMoviePipelinePrimaryConfig *pUVar7;
  UClass *pUVar8;
  FFrameRate FVar9;
  FMP4CodecWriter *pFVar10;
  FMP4CodecWriter *this_01;
  FMP4CodecWriter *this_02;
  longlong lVar11;
  undefined4 in_register_0000008c;
  FMP4CodecWriter *pFVar12;
  float fVar13;
  float fVar14;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  bool local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  undefined2 local_68;
  EMoviePipelineMP4EncodeRateControlMode local_66;
  UClass *local_58;
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> local_50;
  
  pUVar6 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar7 = UMoviePipeline::GetPipelinePrimaryConfig(pUVar6);
  local_58 = Z_Construct_UClass_UMoviePipelineOutputSetting_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_58);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_58);
  }
  UMoviePipelineConfigBase::FindSettingsByClass
            ((UMoviePipelineConfigBase *)pUVar7,&local_50,
             (TSubclassOf<UMoviePipelineSetting>)&local_58,false,false);
  pFVar12 = (FMP4CodecWriter *)0x0;
  if (local_50.ArrayNum < 1) {
    if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.AllocatorInstance.Data);
    }
LAB_14de34720:
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    return (TUniquePtr<MovieRenderPipeline::IVideoCodecWriter,TDefaultDelete<MovieRenderPipeline::IVideoCodecWriter>_>
            )(IVideoCodecWriter *)param_1;
  }
  lVar11 = *(longlong *)local_50.AllocatorInstance.Data;
  FMemory::Free(local_50.AllocatorInstance.Data);
  if (lVar11 == 0) goto LAB_14de34720;
  pUVar8 = Z_Construct_UClass_UMoviePipelineOutputSetting_NoRegister();
  lVar11 = *(longlong *)(lVar11 + 0x10);
  iVar2 = (int)pUVar8->_padding_;
  if ((*(int *)(lVar11 + 0x38) < iVar2) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar2 * 8) !=
      &pUVar8->_padding_)) goto LAB_14de34720;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0x10000001e;
  local_88 = true;
  local_84 = 2;
  local_80 = 48000;
  local_7c = 24000;
  local_78 = 0xc00000;
  local_74 = 0x1000000;
  local_70 = 100;
  local_6c = 0x12;
  local_68 = 2;
  local_66 = 2;
  if ((TIntPoint<int>_u_0)&local_a8 != param_2.field0_0x0) {
    uVar3 = *(uint *)((longlong)param_2.field0_0x0 + 8);
    _Src = *(void **)param_2.field0_0x0;
    local_a0 = (ulonglong)uVar3;
    if (uVar3 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar3,0,&local_a8,uVar3,(int *)((longlong)&local_a0 + 4));
      memcpy(local_a8.Data,_Src,(longlong)(int)uVar3 * 2);
    }
  }
  local_98 = CONCAT44(in_register_0000008c,param_3);
  pUVar6 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar7 = UMoviePipeline::GetPipelinePrimaryConfig(pUVar6);
  UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  FVar9 = UMoviePipelinePrimaryConfig::GetEffectiveFrameRate
                    (pUVar7,(ULevelSequence *)&stack0xffffffffffffffc0);
  fVar13 = this->MaxBitrateInMbps * __real_49800000;
  local_90 = *(undefined8 *)FVar9;
  local_70 = 100;
  fVar14 = this->AverageBitrateInMbps * __real_49800000;
  local_74 = (int)ROUND(fVar13 + fVar13 + __real_3f000000) >> 1;
  local_78 = (int)ROUND(fVar14 + fVar14 + __real_3f000000) >> 1;
  local_6c = this->ConstantRateFactor;
  local_68._0_1_ = this->EncodingProfile;
  local_68._1_1_ = this->EncodingLevel;
  local_66 = this->EncodingRateControl;
  local_88 = this->bIncludeAudio;
  pFVar10 = ::operator_new(0x70);
  _Src_00.Data = local_a8.Data;
  this_02 = pFVar12;
  if (pFVar10 != (FMP4CodecWriter *)0x0) {
    (((FMoviePipelineMP4EncoderOptions *)&pFVar10->_padding_)->OutputFilename).Data.
    AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    lVar11 = (longlong)(int)local_a0;
    *(int *)&pFVar10->_padding_ = (int)local_a0;
    piVar5 = (int *)((longlong)&pFVar10->_padding_ + 4);
    if ((int)local_a0 == 0) {
      *piVar5 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_a0,0,(ForAnyElementType *)pFVar10,(int)local_a0,piVar5);
      memcpy((((FMoviePipelineMP4EncoderOptions *)&pFVar10->_padding_)->OutputFilename).Data.
             AllocatorInstance.Data,_Src_00.Data,lVar11 * 2);
    }
    *(uint *)&pFVar10->_padding_ = (uint)local_98;
    *(uint *)((longlong)&pFVar10->_padding_ + 4) = local_98._4_4_;
    *(int *)&pFVar10->_padding_ = (undefined4)local_90;
    *(undefined4 *)((longlong)&pFVar10->_padding_ + 4) = local_90._4_4_;
    *(bool *)&pFVar10->_padding_ = local_88;
    *(uint *)((longlong)&pFVar10->_padding_ + 4) = local_84;
    *(uint *)&pFVar10->_padding_ = local_80;
    *(uint *)((longlong)&pFVar10->_padding_ + 4) = local_7c;
    *(uint *)&pFVar10->_padding_ = local_78;
    *(uint *)((longlong)&pFVar10->_padding_ + 4) = local_74;
    *(uint *)&pFVar10->_padding_ = local_70;
    *(uint *)((longlong)&pFVar10->_padding_ + 4) = local_6c;
    *(EMoviePipelineMP4EncodeProfile *)&pFVar10->_padding_ =
         (EMoviePipelineMP4EncodeProfile)local_68;
    *(EMoviePipelineMP4EncodeLevel *)((longlong)&pFVar10->_padding_ + 1) = local_68._1_1_;
    *(EMoviePipelineMP4EncodeRateControlMode *)((longlong)&pFVar10->_padding_ + 2) = local_66;
    *(undefined2 *)&pFVar10->_padding_ = 0;
    pFVar10->_padding_ = 0;
    pFVar10->_padding_ = 0;
    pFVar10->_padding_ = 0;
    pFVar10->_padding_ = 0;
    this_02 = pFVar10;
  }
  this_01 = ::operator_new(0x128);
  pFVar10 = pFVar12;
  if (this_01 != (FMP4CodecWriter *)0x0) {
    memset(this_01,0,0x128);
    pFVar10 = FMP4CodecWriter::FMP4CodecWriter(this_01);
  }
  pTVar1 = &pFVar10->Writer;
  if (pTVar1 != (TUniquePtr<FMoviePipelineMP4Encoder,TDefaultDelete<FMoviePipelineMP4Encoder>_> *)
                &stack0xffffffffffffffc8) {
    this_00 = pTVar1->Ptr;
    pTVar1->Ptr = (FMoviePipelineMP4Encoder *)this_02;
    this_02 = pFVar12;
    if (this_00 != (FMoviePipelineMP4Encoder *)0x0) {
      FMoviePipelineMP4Encoder::Finalize(this_00);
      pFVar4 = (this_00->Options).OutputFilename.Data.AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      ::operator_delete(this_00,0x70);
      ::FString::operator=((FString *)pFVar10,(FString *)param_2.field0_0x0);
      (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)pFVar10;
      goto LAB_14de34706;
    }
  }
  ::FString::operator=((FString *)pFVar10,(FString *)param_2.field0_0x0);
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)pFVar10;
  if (this_02 != (FMP4CodecWriter *)0x0) {
    FMoviePipelineMP4Encoder::Finalize((FMoviePipelineMP4Encoder *)this_02);
    if ((void *)this_02->_padding_ != (void *)0x0) {
      FMemory::Free((void *)this_02->_padding_);
    }
    ::operator_delete(this_02,0x70);
  }
LAB_14de34706:
  if (local_a8.Data == (FScriptContainerElement *)0x0) {
    return (TUniquePtr<MovieRenderPipeline::IVideoCodecWriter,TDefaultDelete<MovieRenderPipeline::IVideoCodecWriter>_>
            )(IVideoCodecWriter *)param_1;
  }
  FMemory::Free(local_a8.Data);
  return (TUniquePtr<MovieRenderPipeline::IVideoCodecWriter,TDefaultDelete<MovieRenderPipeline::IVideoCodecWriter>_>
          )(IVideoCodecWriter *)param_1;
}

// IsAudioSupported @ 14de34a40

/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */

bool __thiscall
UMoviePipelineMP4EncoderOutput::IsAudioSupported(UMoviePipelineMP4EncoderOutput *this)

{
  return true;
}

// StaticRegisterNativesUMoviePipelineMP4EncoderOutput @ 14de34a60

void __cdecl
UMoviePipelineMP4EncoderOutput::StaticRegisterNativesUMoviePipelineMP4EncoderOutput(void)

{
  return;
}

// UpdateTelemetry @ 14de34a80

/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */

void __thiscall
UMoviePipelineMP4EncoderOutput::UpdateTelemetry
          (UMoviePipelineMP4EncoderOutput *this,FMoviePipelineShotRenderTelemetry *param_1)

{
  param_1->bUsesMP4 = true;
  return;
}

// WriteFrame_EncodeThread @ 14de35a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014de35d55) */
/* WARNING: Removing unreachable block (ram,0x00014de35e92) */
/* WARNING: Removing unreachable block (ram,0x00014de35c0d) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff38 : 0x00014de35c11 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "EMoviePipelineMP4EncodeLevel": Some values do not have unique names */

void __thiscall
UMoviePipelineMP4EncoderOutput::WriteFrame_EncodeThread
          (UMoviePipelineMP4EncoderOutput *this,IVideoCodecWriter *param_1,FImagePixelData *param_2,
          TArray<MoviePipeline::FCompositePassInfo,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  IVideoCodecWriter *pIVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  TIntPoint<int>_u_0 TVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  FSharedReferencer<1> FVar15;
  TUniqueFunction<void___cdecl(FImagePixelData_*)> *pTVar16;
  undefined1 auStack_198 [32];
  undefined1 *local_178;
  TUniqueFunction<void___cdecl(FImagePixelData_*)> *local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  ForAnyElementType local_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined1 local_137 [7];
  undefined1 local_130 [16];
  TIntPoint<int>_u_0 local_120;
  TIntPoint<int>_u_0 local_118;
  FSharedReferencer<1> local_110;
  longlong local_108;
  IVideoCodecWriter *local_100;
  longlong *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8 [24];
  TIntPoint<int>_u_0 TStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [24];
  TIntPoint<int>_u_0 TStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [24];
  TIntPoint<int>_u_0 TStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_178 = (undefined1 *)CONCAT71(local_178._1_7_,param_1->bConvertToSrgb);
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = param_1;
  UE::MoviePipeline::QuantizeImagePixelDataToBitDepth
            ((FImagePixelData *)local_130,(int)param_2,
             (TSharedPtr<IImagePixelDataPayload,1> *)&DAT_00000008,SUB81(&local_f0,0));
  iVar3 = param_3->ArrayNum;
  pFVar13 = (param_3->AllocatorInstance).Data;
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140 = 0;
  pFVar1 = pFVar13 + (longlong)iVar3 * 0x28;
  do {
    if (param_3->ArrayNum != iVar3) {
      local_138 = 0;
      `TCheckedPointerIterator<MoviePipeline::FCompositePassInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_138);
    }
    pIVar6 = local_100;
    uVar5 = local_130._0_8_;
    if (pFVar13 == pFVar1) {
      iVar3 = (int)local_140;
      pTVar16 = (TUniqueFunction<void___cdecl(FImagePixelData_*)> *)
                (local_148.Data + (longlong)(int)local_140 * 0x30);
      FVar14.Data = local_148.Data;
      while( true ) {
        if ((int)local_140 != iVar3) {
          `TCheckedPointerIterator<TUniqueFunction<void___cdecl(FImagePixelData_*)>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_137);
        }
        uVar10 = local_130._0_8_;
        if ((TUniqueFunction<void___cdecl(FImagePixelData_*)> *)FVar14.Data == pTVar16) break;
        local_f8 = (longlong *)uVar5;
        UE::Core::Private::Function::CheckCallable(*(void **)FVar14.Data);
        pcVar4 = *(code **)FVar14.Data;
        plVar12 = (longlong *)
                  &((TUniqueFunction<void___cdecl(FImagePixelData_*)> *)FVar14.Data)->field_0x10;
        if (*(longlong **)
             &((TUniqueFunction<void___cdecl(FImagePixelData_*)> *)FVar14.Data)->field_0x28 !=
            (longlong *)0x0) {
          plVar12 = *(longlong **)
                     &((TUniqueFunction<void___cdecl(FImagePixelData_*)> *)FVar14.Data)->field_0x28;
        }
        uVar10 = (**(code **)(*plVar12 + 8))();
        (*pcVar4)(uVar10,&local_f8);
        FVar14.Data = FVar14.Data + 0x30;
      }
      local_110.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_108 = 0;
      (**(code **)(*(longlong *)local_130._0_8_ + 8))(local_130._0_8_,&local_110,&local_108);
      FVar15.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if ((local_110.ReferenceController != (TReferenceControllerBase<1> *)0x0) &&
         (local_108 ==
          (ulonglong)(*(byte *)(uVar10 + 0x15) >> 3) * (ulonglong)*(byte *)(uVar10 + 0x16) *
          (longlong)*(int *)(uVar10 + 0xc) * (longlong)(int)*(longlong *)(uVar10 + 8))) {
        FVar15.ReferenceController = local_110.ReferenceController;
      }
      FMoviePipelineMP4Encoder::WriteFrame
                ((FMoviePipelineMP4Encoder *)pIVar6[1].FileName.Data.AllocatorInstance.Data,
                 (uchar *)FVar15.ReferenceController);
      DestructItems<TUniqueFunction<void___cdecl(FImagePixelData_*)>,int>
                ((TUniqueFunction<void___cdecl(FImagePixelData_*)> *)local_148.Data,(int)local_140);
      if ((TUniqueFunction<void___cdecl(FImagePixelData_*)> *)local_148.Data !=
          (TUniqueFunction<void___cdecl(FImagePixelData_*)> *)0x0) {
        FMemory::Free(local_148.Data);
      }
      if ((longlong *)local_130._0_8_ != (longlong *)0x0) {
        (*(code *)**(undefined8 **)local_130._0_8_)(local_130._0_8_,1);
      }
      return;
    }
    iVar8 = (int)*(longlong *)(local_130._0_8_ + 0x10);
    if (iVar8 == 0) {
      (**(code **)(**(longlong **)(pFVar13 + 0x20) + 0x18))
                (*(longlong **)(pFVar13 + 0x20),&local_118);
      TStack_60 = local_118;
      local_78._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<TAsyncCompositeImage<FColor>,void,FImagePixelData_*>::Call;
      local_118 = (TIntPoint<int>_u_0)0x0;
      local_50 = 0;
      local_78._16_8_ =
           &
           ___7__TFunction_OwnedObject_U__TAsyncCompositeImage_UFColor_____00_0A__Function_Private_Core_UE__6B_
      ;
      local_58 = 0;
      if (local_148.Data <= (TUniqueFunction<void___cdecl(FImagePixelData_*)> *)local_78) {
        if ((FScriptContainerElement *)local_78 < local_148.Data + (longlong)local_140._4_4_ * 0x30)
        {
          local_160 = (longlong)(int)local_140;
          local_158 = 0x30;
          local_178 = local_78;
          local_170 = (TUniqueFunction<void___cdecl(FImagePixelData_*)> *)local_148.Data;
          local_168 = (longlong)local_140._4_4_;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      iVar8 = (int)local_140;
      if ((int)local_140 == local_140._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1030,&local_148,(int *)((longlong)&local_140 + 4));
      }
      lVar9 = (longlong)iVar8;
      local_140 = CONCAT44(local_140._4_4_,iVar8 + 1);
      *(undefined8 *)(local_148.Data + lVar9 * 0x30) = local_78._0_8_;
      *(undefined8 *)(local_148.Data + lVar9 * 0x30 + 0x28) = local_50;
      local_50 = 0;
      pFVar2 = local_148.Data + lVar9 * 0x30 + 0x10;
      *(undefined4 *)pFVar2 = local_78._16_4_;
      *(undefined4 *)(pFVar2 + 4) = local_78._20_4_;
      *(undefined4 *)(pFVar2 + 8) = TStack_60._0_4_;
      *(undefined4 *)(pFVar2 + 0xc) = TStack_60._4_4_;
      *(undefined8 *)(local_148.Data + lVar9 * 0x30 + 0x20) = local_58;
      if (*(longlong *)(local_148.Data + lVar9 * 0x30) == 0) {
        TVar11 = local_118;
        if ((code *)local_78._0_8_ != (code *)0x0) {
          (**(code **)(local_78._16_8_ + 0x10))();
          TVar11 = local_118;
        }
      }
      else {
        local_78._0_8_ = (code *)0x0;
        TVar11 = local_118;
      }
LAB_14de35ea0:
      if (TVar11 != (TIntPoint<int>_u_0)0x0) {
        (*(code *)**(undefined8 **)TVar11)(TVar11,1);
      }
    }
    else {
      if (iVar8 == 1) {
        (**(code **)(**(longlong **)(pFVar13 + 0x20) + 0x18))
                  (*(longlong **)(pFVar13 + 0x20),&local_120);
        TStack_90 = local_120;
        local_a8._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<TAsyncCompositeImage<FFloat16Color>,void,FImagePixelData_*>::Call;
        local_120 = (TIntPoint<int>_u_0)0x0;
        local_80 = 0;
        local_a8._16_8_ =
             &
             ___7__TFunction_OwnedObject_U__TAsyncCompositeImage_VFFloat16Color_____00_0A__Function_Private_Core_UE__6B_
        ;
        local_88 = 0;
        if (local_148.Data <= (TUniqueFunction<void___cdecl(FImagePixelData_*)> *)local_a8) {
          if ((FScriptContainerElement *)local_a8 <
              local_148.Data + (longlong)local_140._4_4_ * 0x30) {
            local_160 = (longlong)(int)local_140;
            local_158 = 0x30;
            local_178 = local_a8;
            local_170 = (TUniqueFunction<void___cdecl(FImagePixelData_*)> *)local_148.Data;
            local_168 = (longlong)local_140._4_4_;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
        }
        iVar8 = (int)local_140;
        if ((int)local_140 == local_140._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1030,&local_148,(int *)((longlong)&local_140 + 4));
        }
        lVar9 = (longlong)iVar8;
        local_140 = CONCAT44(local_140._4_4_,iVar8 + 1);
        *(undefined8 *)(local_148.Data + lVar9 * 0x30) = local_a8._0_8_;
        *(undefined8 *)(local_148.Data + lVar9 * 0x30 + 0x28) = local_80;
        local_80 = 0;
        pFVar2 = local_148.Data + lVar9 * 0x30 + 0x10;
        *(undefined4 *)pFVar2 = local_a8._16_4_;
        *(undefined4 *)(pFVar2 + 4) = local_a8._20_4_;
        *(undefined4 *)(pFVar2 + 8) = TStack_90._0_4_;
        *(undefined4 *)(pFVar2 + 0xc) = TStack_90._4_4_;
        *(undefined8 *)(local_148.Data + lVar9 * 0x30 + 0x20) = local_88;
        if (*(longlong *)(local_148.Data + lVar9 * 0x30) == 0) {
          TVar11 = local_120;
          if ((code *)local_a8._0_8_ != (code *)0x0) {
            (**(code **)(local_a8._16_8_ + 0x10))();
            TVar11 = local_120;
          }
        }
        else {
          local_a8._0_8_ = (code *)0x0;
          TVar11 = local_120;
        }
        goto LAB_14de35ea0;
      }
      if (iVar8 == 2) {
        (**(code **)(**(longlong **)(pFVar13 + 0x20) + 0x18))
                  (*(longlong **)(pFVar13 + 0x20),local_130 + 8);
        TStack_c0 = (TIntPoint<int>_u_0)local_130._8_8_;
        local_130._8_8_ = (TIntPoint<int>_u_0)0x0;
        local_b0 = 0;
        local_d8._16_8_ =
             &
             ___7__TFunction_OwnedObject_U__TAsyncCompositeImage_UFLinearColor_____00_0A__Function_Private_Core_UE__6B_
        ;
        local_b8 = 0;
        local_d8._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<TAsyncCompositeImage<FLinearColor>,void,FImagePixelData_*>::Call;
        if (local_148.Data <= (TUniqueFunction<void___cdecl(FImagePixelData_*)> *)local_d8) {
          if ((FScriptContainerElement *)local_d8 <
              local_148.Data + (longlong)local_140._4_4_ * 0x30) {
            local_160 = (longlong)(int)local_140;
            local_158 = 0x30;
            local_178 = local_d8;
            local_170 = (TUniqueFunction<void___cdecl(FImagePixelData_*)> *)local_148.Data;
            local_168 = (longlong)local_140._4_4_;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
        }
        iVar8 = (int)local_140;
        if ((int)local_140 == local_140._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1030,&local_148,(int *)((longlong)&local_140 + 4));
        }
        lVar9 = (longlong)iVar8;
        local_140 = CONCAT44(local_140._4_4_,iVar8 + 1);
        *(undefined8 *)(local_148.Data + lVar9 * 0x30) = local_d8._0_8_;
        *(undefined8 *)(local_148.Data + lVar9 * 0x30 + 0x28) = local_b0;
        local_b0 = 0;
        pFVar2 = local_148.Data + lVar9 * 0x30 + 0x10;
        *(undefined4 *)pFVar2 = local_d8._16_4_;
        *(undefined4 *)(pFVar2 + 4) = local_d8._20_4_;
        *(undefined4 *)(pFVar2 + 8) = TStack_c0._0_4_;
        *(undefined4 *)(pFVar2 + 0xc) = TStack_c0._4_4_;
        *(undefined8 *)(local_148.Data + lVar9 * 0x30 + 0x20) = local_b8;
        TVar11 = (TIntPoint<int>_u_0)local_130._8_8_;
        if (*(longlong *)(local_148.Data + lVar9 * 0x30) == 0) {
          if ((code *)local_d8._0_8_ != (code *)0x0) {
            (**(code **)(local_d8._16_8_ + 0x10))();
            TVar11 = (TIntPoint<int>_u_0)local_130._8_8_;
          }
        }
        else {
          local_d8._0_8_ = (code *)0x0;
        }
        goto LAB_14de35ea0;
      }
    }
    pFVar13 = pFVar13 + 0x28;
  } while( true );
}

