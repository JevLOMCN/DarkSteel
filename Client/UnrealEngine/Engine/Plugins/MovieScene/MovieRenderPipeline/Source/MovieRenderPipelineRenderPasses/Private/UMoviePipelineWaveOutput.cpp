// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 11

// StaticClass @ 14ddba460

UClass * __cdecl UMoviePipelineWaveOutput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineWaveOutput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MoviePipelineWaveOutput",
               &Z_Registration_Info_UClass_UMoviePipelineWaveOutput.InnerSingleton,
               StaticRegisterNativesUMoviePipelineWaveOutput,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMoviePipelineWaveOutput>,
               InternalVTableHelperCtorCaller<UMoviePipelineWaveOutput>,local_res8,
               UMoviePipelineOutputBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineWaveOutput.InnerSingleton;
}

// UMoviePipelineWaveOutput @ 14ddc8940

UMoviePipelineWaveOutput * __thiscall
UMoviePipelineWaveOutput::UMoviePipelineWaveOutput
          (UMoviePipelineWaveOutput *this,FVTableHelper *param_1)

{
  UMoviePipelineOutputBase::UMoviePipelineOutputBase((UMoviePipelineOutputBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelineWaveOutput__6B_;
  (this->FileNameFormatOverride).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileNameFormatOverride).Data.ArrayNum = 0;
  (this->FileNameFormatOverride).Data.ArrayMax = 0;
  (this->ActiveWriters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveWriters).ArrayNum = 0;
  (this->ActiveWriters).ArrayMax = 0;
  *(undefined8 *)&(this->AlreadyWrittenSegments).Elements = 0;
  *(undefined8 *)&(this->AlreadyWrittenSegments).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AlreadyWrittenSegments).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AlreadyWrittenSegments).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AlreadyWrittenSegments).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AlreadyWrittenSegments).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->AlreadyWrittenSegments).Elements.field_0x30 = 0xffffffff;
  (this->AlreadyWrittenSegments).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AlreadyWrittenSegments).HashSize = 0;
  return this;
}

// ~UMoviePipelineWaveOutput @ 14ddcbe70

void __thiscall UMoviePipelineWaveOutput::~UMoviePipelineWaveOutput(UMoviePipelineWaveOutput *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UMoviePipelineWaveOutput__6B_;
  (this->AlreadyWrittenSegments).HashSize = 0;
  FVar1 = (this->AlreadyWrittenSegments).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AlreadyWrittenSegments).Elements);
  DestructItems<TUniquePtr<Audio::FSoundWavePCMWriter,TDefaultDelete<Audio::FSoundWavePCMWriter>_>,int>
            ((TUniquePtr<Audio::FSoundWavePCMWriter,TDefaultDelete<Audio::FSoundWavePCMWriter>_> *)
             (this->ActiveWriters).AllocatorInstance.Data,(this->ActiveWriters).ArrayNum);
  pFVar2 = (this->ActiveWriters).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FileNameFormatOverride).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UMoviePipelineOutputBase::~UMoviePipelineOutputBase((UMoviePipelineOutputBase *)this);
  return;
}

// BeginFinalizeImpl @ 14ddd5550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMoviePipelineWaveOutput::BeginFinalizeImpl(UMoviePipelineWaveOutput *this)

{
  TArray<TUniquePtr<Audio::FSoundWavePCMWriter,TDefaultDelete<Audio::FSoundWavePCMWriter>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  float fVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  UMoviePipeline *pUVar17;
  UMoviePipelinePrimaryConfig *this_00;
  UMoviePipelineOutputSetting *pUVar18;
  ulong64 uVar19;
  FString *pFVar20;
  ulonglong uVar21;
  FGuid *pFVar22;
  FEvent *pFVar23;
  FSoundWavePCMWriter *pFVar24;
  undefined8 uVar25;
  longlong *plVar26;
  float *pfVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *this_01;
  uint uVar31;
  FSoundWavePCMWriter *pFVar32;
  FOutputSegment *pFVar33;
  FScriptContainerElement *pFVar34;
  ForAnyElementType FVar35;
  undefined1 auStackY_428 [32];
  undefined1 local_3d8 [8];
  ForAnyElementType local_3d0;
  undefined8 local_3c8;
  FString local_3c0;
  ForAnyElementType local_3b0;
  undefined8 local_3a8;
  undefined1 local_3a0 [24];
  FSoundWavePCMWriter *local_388;
  ForAnyElementType local_380;
  int local_378 [3];
  int local_36c;
  uchar local_368 [4];
  int local_364;
  float local_360;
  undefined1 local_358 [8];
  FSoundWavePCMWriter *local_350;
  LPCRITICAL_SECTION local_348;
  FGuid *local_340;
  undefined1 local_338;
  FMoviePipelineOutputFutureData local_330;
  UMoviePipelineWaveOutput *local_2f8;
  FGuid *local_2f0;
  FString local_2e8;
  TArray<TUniquePtr<Audio::FSoundWavePCMWriter,TDefaultDelete<Audio::FSoundWavePCMWriter>_>,TSizedDefaultAllocator<32>_>
  *local_2d8;
  FString local_2d0;
  FString local_2c0;
  LPCRITICAL_SECTION local_2b0;
  FGuid *local_2a8;
  LPCRITICAL_SECTION local_2a0;
  FGuid *local_298;
  undefined1 local_290 [8];
  LARGE_INTEGER local_288;
  LARGE_INTEGER local_280;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString *local_228;
  FString *local_220;
  FString local_218;
  FString local_208;
  FString *local_1f8;
  FString *local_1f0;
  FString local_1e8;
  code *local_1d8 [2];
  undefined **local_1c8;
  UMoviePipelineWaveOutput *local_1c0;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  longlong *plStack_180;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_178;
  undefined1 local_128 [64];
  void *local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [64];
  void *local_98;
  undefined4 local_90;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_88;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_428;
  pFVar24 = (FSoundWavePCMWriter *)0x0;
  local_2f8 = this;
  bVar12 = IsMoviePipelineAudioOutputSupported((UObject *)this);
  if (bVar12) {
    pTVar1 = &this->ActiveWriters;
    piVar2 = &(this->ActiveWriters).ArrayMax;
    pFVar34 = (pTVar1->AllocatorInstance).Data;
    iVar14 = (this->ActiveWriters).ArrayNum;
    local_2d8 = pTVar1;
    if (*piVar2 < 0) {
      DestructItems<TUniquePtr<Audio::FSoundWavePCMWriter,TDefaultDelete<Audio::FSoundWavePCMWriter>_>,int>
                ((TUniquePtr<Audio::FSoundWavePCMWriter,TDefaultDelete<Audio::FSoundWavePCMWriter>_>
                  *)pFVar34,iVar14);
      (this->ActiveWriters).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&pTVar1->AllocatorInstance,0,piVar2);
      }
    }
    else {
      DestructItems<TUniquePtr<Audio::FSoundWavePCMWriter,TDefaultDelete<Audio::FSoundWavePCMWriter>_>,int>
                ((TUniquePtr<Audio::FSoundWavePCMWriter,TDefaultDelete<Audio::FSoundWavePCMWriter>_>
                  *)pFVar34,iVar14);
      (this->ActiveWriters).ArrayNum = 0;
    }
    pUVar17 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    if (((pUVar17->AudioState).ActiveSubmixes.ArrayNum != 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("GetPipeline()->GetAudioState().ActiveSubmixes.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineWaveOutput.cpp"
                            ,0x48,L""), bVar12)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar17 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    if ((pUVar17->AudioState).FinishedSegments.ArrayNum != 0) {
      pUVar17 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
      this_00 = UMoviePipeline::GetPipelinePrimaryConfig(pUVar17);
      pUVar18 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                          ((UMoviePipelineConfigBase *)this_00,false);
      iVar14 = (this->FileNameFormatOverride).Data.ArrayNum;
      iVar16 = iVar14 + -1;
      if (iVar14 == 0) {
        iVar16 = 0;
      }
      pFVar20 = &this->FileNameFormatOverride;
      if (iVar16 < 1) {
        pFVar20 = &pUVar18->FileNameFormat;
      }
      ::FString::FString(&local_238,pFVar20);
      ::operator/(&local_2e8,&(pUVar18->OutputDirectory).Path,&local_238);
      UE::MoviePipeline::ValidateOutputFormatString(&local_2e8,false,false,false);
      UE::MoviePipeline::RemoveFrameNumberFormatStrings(&local_2e8,true);
      local_3d0.Data = (FScriptContainerElement *)0x0;
      local_3c8 = 0;
      pUVar17 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
      fVar10 = __real_46fffe00;
      fVar9 = __real_bf800000;
      fVar8 = __real_3f800000;
      if (0 < (pUVar17->AudioState).FinishedSegments.ArrayNum) {
        this_01 = &this->AlreadyWrittenSegments;
        local_350 = (FSoundWavePCMWriter *)0x0;
        pFVar32 = pFVar24;
        local_3a0._16_8_ = this_01;
        do {
          uVar21 = 0;
          pUVar17 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
          uVar31 = (uint)pFVar32;
          uVar28 = 0;
          if ((int)uVar31 < (pUVar17->AudioState).FinishedSegments.ArrayNum) {
            uVar28 = ~uVar31 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar22 = (FGuid *)((pUVar17->AudioState).FinishedSegments.AllocatorInstance.Data +
                             (longlong)&(pFVar24->CurrentBuffer).RawPCMData);
          local_2f0 = pFVar22;
          uVar19 = CityHash64((char *)pFVar22,0x10);
          iVar14 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                             (this_01,(uint)uVar19,pFVar22);
          if (iVar14 == -1) {
            TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                      (this_01,(FGuid *)local_358,(bool *)pFVar22);
            local_178.Elements._0_8_ = 0;
            local_178.Elements._8_8_ = 0;
            local_178.Elements._32_8_ = 0;
            local_178.Elements._40_4_ = 0;
            local_178.Elements._44_4_ = 0x80;
            local_178.Elements._48_4_ = 0xffffffff;
            local_178.Elements._52_4_ = 0;
            local_178.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
            local_178.HashSize = 0;
            ::FString::FString(&local_208,L"Audio");
            ::FString::FString(&local_218,L"render_pass");
            local_228 = &local_218;
            local_220 = &local_208;
            TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
                      (&local_178,(TPairInitializer<FString_&&,FString_&&> *)local_290,
                       (bool *)&local_228);
            if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_218.Data.AllocatorInstance.Data);
            }
            if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_208.Data.AllocatorInstance.Data);
            }
            ::FString::FString(&local_268,L"wav");
            ::FString::FString(&local_278,L"ext");
            local_1f8 = &local_278;
            local_1f0 = &local_268;
            TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
                      (&local_178,(TPairInitializer<FString_&&,FString_&&> *)(local_290 + 4),
                       (bool *)&local_1f8);
            if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_278.Data.AllocatorInstance.Data);
            }
            if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_268.Data.AllocatorInstance.Data);
            }
            local_128._0_8_ = 0;
            local_128._8_8_ = 0;
            local_128._32_8_ = 0;
            local_128._40_4_ = 0;
            local_128._44_4_ = 0x80;
            local_128._48_4_ = 0xffffffff;
            local_128._52_4_ = 0;
            local_e8 = (void *)0x0;
            local_e0 = 0;
            local_d8._0_8_ = 0;
            local_d8._8_8_ = 0;
            local_d8._32_8_ = 0;
            local_d8._40_4_ = 0;
            local_d8._44_4_ = 0x80;
            local_d8._48_4_ = 0xffffffff;
            local_d8._52_4_ = 0;
            local_98 = (void *)0x0;
            local_90 = 0;
            local_88.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
            local_3c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_3c0.Data.ArrayNum = 0;
            local_3c0.Data.ArrayMax = 0;
            pUVar17 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
            UMoviePipeline::ResolveFilenameFormatArguments
                      (pUVar17,&local_2e8,
                       (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                        *)&local_178,&local_3c0,(FMoviePipelineFormatArgs *)local_128,
                       (FMoviePipelineFrameOutputState *)(pFVar22 + 1),0);
            bVar12 = FPaths::IsRelative(&local_3c0);
            if (bVar12) {
              pFVar20 = FPaths::ConvertRelativePathToFull(&local_1e8,&local_3c0);
              if (&local_3c0 != pFVar20) {
                if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
                }
                local_3c0.Data.AllocatorInstance.Data = (pFVar20->Data).AllocatorInstance.Data;
                (pFVar20->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_3c0.Data.ArrayNum = (pFVar20->Data).ArrayNum;
                local_3c0.Data.ArrayMax = (pFVar20->Data).ArrayMax;
                (pFVar20->Data).ArrayNum = 0;
                (pFVar20->Data).ArrayMax = 0;
              }
              if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
              }
            }
            uVar30 = uVar21;
            iVar14 = (int)local_3c8;
            if (0 < (int)local_3c8) {
              do {
                uVar29 = (uint)uVar21;
                uVar28 = 0;
                if ((int)uVar29 < iVar14) {
                  uVar28 = ~uVar29 >> 0x1f;
                }
                if (uVar28 == 0) {
                  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar12) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  iVar14 = (int)local_3c8;
                }
                iVar16 = *(int *)(local_3d0.Data + uVar30 + 8);
                if (iVar16 == local_3c0.Data.ArrayNum) {
                  if (1 < iVar16) {
                    iVar14 = FGenericPlatformStricmp::Stricmp
                                       (*(wchar_t **)(local_3d0.Data + uVar30),
                                        (wchar_t *)local_3c0.Data.AllocatorInstance.Data);
                    bVar12 = iVar14 == 0;
                    iVar14 = (int)local_3c8;
                    goto LAB_14ddd5ae3;
                  }
LAB_14ddd5afa:
                  uVar28 = 0;
                  if ((int)uVar29 < iVar14) {
                    uVar28 = ~uVar29 >> 0x1f;
                  }
                  if (uVar28 == 0) {
                    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar12) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    iVar14 = (int)local_3c8;
                  }
                  pFVar34 = local_3d0.Data + (longlong)(int)uVar29 * 0x40;
                  if (pFVar34 != (FScriptContainerElement *)0x0) goto LAB_14ddd5c13;
                  break;
                }
                bVar12 = iVar16 + local_3c0.Data.ArrayNum == 1;
LAB_14ddd5ae3:
                if (bVar12) goto LAB_14ddd5afa;
                uVar21 = (ulonglong)(uVar29 + 1);
                uVar30 = uVar30 + 0x40;
              } while ((int)(uVar29 + 1) < iVar14);
            }
            if (iVar14 == local_3c8._4_4_) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x840,&local_3d0,(int *)((longlong)&local_3c8 + 4));
            }
            local_3c8 = CONCAT44(local_3c8._4_4_,iVar14 + 1);
            DefaultConstructItems<_UMoviePipelineWaveOutput::BeginFinalizeImpl_::__l2::FOutputSegment,int>
                      (local_3d0.Data + (longlong)iVar14 * 0x40,1);
            uVar29 = (int)local_3c8 - 1;
            uVar28 = 0;
            if ((int)uVar29 < (int)local_3c8) {
              uVar28 = ~uVar29 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar34 = local_3d0.Data + (longlong)(int)uVar29 * 0x40;
            iVar14 = local_3c0.Data.ArrayNum + -1;
            if (local_3c0.Data.ArrayNum == 0) {
              iVar14 = 0;
            }
            ::FString::AssignRange
                      ((FString *)pFVar34,(wchar_t *)local_3c0.Data.AllocatorInstance.Data,iVar14);
            *(uint *)(pFVar34 + 0x38) = pFVar22[1].B;
LAB_14ddd5c13:
            uVar21 = 0;
            QueryPerformanceCounter(&local_288);
            local_364 = (int)(float)pFVar22[0x13].B;
            local_368 = (uchar  [4])(int)(float)pFVar22[0x13].A;
            local_378[2] = pFVar22[0x14].A;
            pfVar27 = *(float **)&pFVar22[0x13].C;
            local_380.Data = (FScriptContainerElement *)0x0;
            local_378[0] = 0;
            local_378[1] = 0;
            local_36c = local_378[2] / (int)local_368;
            local_360 = (float)local_36c / (float)local_364;
            if (local_378[2] < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_378[2]);
            }
            local_378[0] = 0;
            local_378[1] = 0;
            if (0 < local_378[2]) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_378[2],&local_380,0,local_378 + 1);
            }
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_378[2],&local_380,local_378,local_378 + 1);
            uVar30 = uVar21;
            if (0 < local_378[2]) {
              do {
                fVar3 = *pfVar27;
                if (fVar8 <= *pfVar27) {
                  fVar3 = fVar8;
                }
                if (fVar3 <= fVar9) {
                  fVar3 = fVar9;
                }
                uVar29 = (uint)uVar21;
                uVar28 = 0;
                if ((int)uVar29 < local_378[0]) {
                  uVar28 = ~uVar29 >> 0x1f;
                }
                if ((uVar28 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                *(short *)(local_380.Data + uVar30) = (short)(int)(fVar3 * fVar10);
                uVar21 = (ulonglong)(uVar29 + 1);
                pfVar27 = pfVar27 + 1;
                uVar30 = uVar30 + 2;
                pFVar22 = local_2f0;
              } while ((int)(uVar29 + 1) < local_378[2]);
            }
            FVar35.Data = local_380.Data;
            fVar3 = (float)pFVar22[0x13].B;
            uVar28 = pFVar22[0x14].A;
            *(int *)(pFVar34 + 0x28) = (int)(float)pFVar22[0x13].A;
            *(int *)(pFVar34 + 0x2c) = (int)fVar3;
            uVar15 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (2,2,uVar28,(ForAnyElementType *)(pFVar34 + 0x10),
                                (int *)(pFVar34 + 0x18),(int *)(pFVar34 + 0x1c));
            uVar29 = 0;
            if ((int)uVar15 < *(int *)(pFVar34 + 0x18)) {
              uVar29 = ~uVar15 >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
                    /* WARNING: Load size is inaccurate */
            memcpy(pFVar34[0x10] + (longlong)(int)uVar15 * 2,FVar35.Data,(longlong)(int)uVar28 * 2);
            *(uint *)(pFVar34 + 0x20) = *(int *)(pFVar34 + 0x20) + uVar28;
            *(int *)(pFVar34 + 0x24) = *(int *)(pFVar34 + 0x20) / *(int *)(pFVar34 + 0x28);
            *(float *)(pFVar34 + 0x30) =
                 (float)(*(int *)(pFVar34 + 0x20) / *(int *)(pFVar34 + 0x28)) /
                 (float)*(int *)(pFVar34 + 0x2c);
            if (4 < (byte)LogMovieRenderPipeline._0_1_) {
              QueryPerformanceCounter(&local_280);
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
            }
            if (local_380.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_380.Data);
            }
            if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
            }
            local_90 = 0;
            if (local_98 != (void *)0x0) {
              FMemory::Free(local_98);
            }
            TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_d8);
            local_e0 = 0;
            if (local_e8 != (void *)0x0) {
              FMemory::Free(local_e8);
            }
            TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_128);
            local_178.HashSize = 0;
            if (local_178.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_178.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_178.Elements);
            this_01 = (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_3a0._16_8_;
            pFVar24 = local_350;
            this = local_2f8;
          }
          pFVar32 = (FSoundWavePCMWriter *)(ulonglong)(uVar31 + 1);
          pFVar24 = (FSoundWavePCMWriter *)&pFVar24[2].SerializedWavData;
          local_350 = pFVar24;
          pUVar17 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
        } while ((int)(uVar31 + 1) < (pUVar17->AudioState).FinishedSegments.ArrayNum);
      }
      iVar14 = (int)local_3c8;
      uVar21 = (ulonglong)(int)local_3c8;
      pFVar33 = (FOutputSegment *)(local_3d0.Data + uVar21 * 0x40);
      FVar35.Data = local_3d0.Data;
      while( true ) {
        if ((int)uVar21 != iVar14) {
          local_3d8[0] = 0;
          `TCheckedPointerIterator<`UMoviePipelineWaveOutput::BeginFinalizeImpl'::__l2::FOutputSegment,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_3d8);
        }
        if ((FOutputSegment *)FVar35.Data == pFVar33) break;
        local_330.Shot = (UMoviePipelineExecutorShot *)0x0;
        local_330.FilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_330.FilePath.Data.ArrayNum = 0;
        local_330.FilePath.Data.ArrayMax = 0;
        local_330.PassIdentifier.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_330.PassIdentifier.Name.Data.ArrayNum = 0;
        local_330.PassIdentifier.Name.Data.ArrayMax = 0;
        local_330.PassIdentifier.CameraName.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        local_330.PassIdentifier.CameraName.Data.ArrayNum = 0;
        local_330.PassIdentifier.CameraName.Data.ArrayMax = 0;
        pUVar17 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
        uVar28 = ((FOutputSegment *)FVar35.Data)->ShotIndex;
        uVar31 = 0;
        if ((int)uVar28 < (pUVar17->ActiveShotList).ArrayNum) {
          uVar31 = ~uVar28 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_330.Shot =
             *(UMoviePipelineExecutorShot **)
              ((pUVar17->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar28 * 8);
        ::FString::FString(&local_2c0,L"camera");
        ::FString::FString(&local_2d0,L"Audio");
        FVar11.Data = local_2d0.Data.AllocatorInstance.Data;
        local_3a0._16_8_ = &local_3b0;
        local_3b0.Data = (FScriptContainerElement *)0x0;
        iVar16 = local_2d0.Data.ArrayNum;
        local_3a8 = CONCAT44(local_3a8._4_4_,iVar16);
        if (iVar16 == 0) {
          local_3a8 = local_2d0.Data._8_8_ & 0xffffffff;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar16,0,&local_3b0,iVar16,(int *)((longlong)&local_3a8 + 4));
          memcpy(local_3b0.Data,FVar11.Data,(longlong)iVar16 * 2);
        }
        FVar11.Data = local_2c0.Data.AllocatorInstance.Data;
        local_3a0._16_8_ = local_3a0;
        local_3a0._0_8_ = (FScriptContainerElement *)0x0;
        iVar16 = local_2c0.Data.ArrayNum;
        local_3a0._8_4_ = iVar16;
        if (iVar16 == 0) {
          local_3a0._8_8_ = local_2c0.Data._8_8_ & 0xffffffff;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar16,0,(ForAnyElementType *)local_3a0,iVar16,(int *)(local_3a0 + 0xc));
          memcpy((void *)local_3a0._0_8_,FVar11.Data,(longlong)iVar16 * 2);
        }
        if (local_330.PassIdentifier.Name.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_330.PassIdentifier.Name.Data.AllocatorInstance.Data);
        }
        local_330.PassIdentifier.Name.Data.AllocatorInstance.Data = local_3b0.Data;
        local_3b0.Data = (FScriptContainerElement *)0x0;
        local_330.PassIdentifier.Name.Data._8_8_ = local_3a8;
        local_3a8 = 0;
        if (local_330.PassIdentifier.CameraName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_330.PassIdentifier.CameraName.Data.AllocatorInstance.Data);
        }
        local_330.PassIdentifier.CameraName.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)local_3a0._0_8_;
        local_3a0._0_8_ = (FScriptContainerElement *)0x0;
        local_330.PassIdentifier.CameraName.Data._8_8_ = local_3a0._8_8_;
        local_3a0._8_8_ = 0;
        if (local_3b0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b0.Data);
        }
        if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
        }
        if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
        }
        iVar16 = (((FOutputSegment *)FVar35.Data)->FilePath).Data.ArrayNum;
        uVar28 = iVar16 - 1;
        if (iVar16 == 0) {
          uVar28 = 0;
        }
        ::FString::AssignRange
                  (&local_330.FilePath,
                   (wchar_t *)
                   (((FOutputSegment *)FVar35.Data)->FilePath).Data.AllocatorInstance.Data,uVar28);
        FPaths::GetBaseFilename(&local_248,(FString *)FVar35.Data,true);
        FPaths::GetPath(&local_258,(FString *)FVar35.Data);
        pFVar22 = ::operator_new(0x90);
        local_2f0 = pFVar22;
        if (pFVar22 != (FGuid *)0x0) {
          *(atomic<int> *)&pFVar22->C = (atomic<int>)0x1;
          *(atomic<int> *)&pFVar22->D = (atomic<int>)0x1;
          *(undefined ***)pFVar22 =
               &
               ___7__TIntrusiveReferenceController_V__TFutureState__N___00_SharedPointerInternals__6B_
          ;
          local_3a0._16_8_ = pFVar22 + 1;
          *(PRTL_CRITICAL_SECTION_DEBUG *)
           &((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_3a0._16_8_)->
            Elements = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
          *(undefined8 *)&pFVar22[1].C = 0;
          pFVar22[2].A = 0;
          pFVar22[2].B = 0;
          *(undefined8 *)&pFVar22[2].C = 0;
          pFVar22[3].A = 0;
          pFVar22[3].B = 0;
          *(undefined8 *)&pFVar22[3].C = 0;
          pFVar22[4].A = 0;
          pFVar22[4].B = 0;
          *(undefined8 *)&pFVar22[4].C = 0;
          pFVar22[5].A = 0;
          pFVar22[5].B = 0;
          *(undefined8 *)&pFVar22[5].C = 0;
          pFVar22[6].A = 0;
          pFVar22[6].B = 0;
          *(undefined8 *)&pFVar22[6].C = 0;
          pFVar22[7].A = 0;
          pFVar22[7].B = 0;
          *(undefined8 *)&pFVar22[7].C = 0;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)local_3a0._16_8_,4000);
          pFVar22[4].A = 0;
          pFVar22[4].B = 0;
          *(undefined8 *)&pFVar22[6].C = 0;
          pFVar23 = FGenericPlatformProcess::GetSynchEventFromPool(true);
          *(FEvent **)(pFVar22 + 7) = pFVar23;
          *(undefined1 *)&pFVar22[7].C = 0;
        }
        lpCriticalSection = (LPCRITICAL_SECTION)(pFVar22 + 1);
        local_2b0 = lpCriticalSection;
        local_2a8 = pFVar22;
        if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar12)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (pFVar22 != (FGuid *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar22->C = (atomic<int>)((int)*(atomic<int> *)&pFVar22->C + 1);
          UNLOCK();
        }
        local_348 = lpCriticalSection;
        local_340 = pFVar22;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar22);
        local_338 = 0;
        pUVar17 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
        local_338 = 1;
        if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("State.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                ,0x283,L""), bVar12)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_298 = local_340;
        if (local_340 != (FGuid *)0x0) {
          LOCK();
          *(atomic<int> *)&local_340->C = (atomic<int>)((int)*(atomic<int> *)&local_340->C + 1);
          UNLOCK();
        }
        local_2a0 = lpCriticalSection;
        UMoviePipeline::AddOutputFuture(pUVar17,(TFuture<bool> *)&local_2a0,&local_330);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_298);
        local_350 = ::operator_new(0x78);
        pFVar24 = (FSoundWavePCMWriter *)0x0;
        if (local_350 != (FSoundWavePCMWriter *)0x0) {
          pFVar24 = Audio::FSoundWavePCMWriter::FSoundWavePCMWriter(local_350,0x2000);
        }
        local_1b0 = 0;
        local_1c8 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`UMoviePipelineWaveOutput::BeginFinalizeImpl'::`53'::<lambda_1>,0,0>
                     ::_vftable_;
        local_1d8[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`UMoviePipelineWaveOutput::BeginFinalizeImpl'::__l53::<lambda_1>,void>
                       ::Call;
        local_388 = pFVar24;
        local_1c0 = this;
        bVar12 = Audio::FSoundWavePCMWriter::BeginWriteToWavFile
                           (pFVar24,&((FOutputSegment *)FVar35.Data)->SampleBuffer,&local_248,
                            &local_258,(TFunction<void___cdecl(void)> *)local_1d8);
        if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("State.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x283,L"");
          if (bVar13) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar13) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if ((*(char *)&pFVar22[7].C != '\0') &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("!IsComplete()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                ,0xcd,L""), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(bool *)&pFVar22[8].A = bVar12;
        local_1a8 = (code *)0x0;
        plStack_180 = (longlong *)0x0;
        if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection(lpCriticalSection);
        pcVar4 = *(code **)(pFVar22 + 4);
        uVar25 = *(undefined8 *)&pFVar22[4].C;
        lVar5._0_4_ = pFVar22[5].A;
        lVar5._4_4_ = pFVar22[5].B;
        uVar6 = *(undefined8 *)&pFVar22[5].C;
        uVar7._0_4_ = pFVar22[6].A;
        uVar7._4_4_ = pFVar22[6].B;
        plVar26 = *(longlong **)&pFVar22[6].C;
        pFVar22[4].A = (uint)local_1a8;
        pFVar22[4].B = local_1a8._4_4_;
        *(atomic<int> *)&pFVar22[4].C = uStack_1a0._0_4_;
        *(atomic<int> *)&pFVar22[4].D = uStack_1a0._4_4_;
        pFVar22[5].A = (uint)local_198;
        pFVar22[5].B = local_198._4_4_;
        *(atomic<int> *)&pFVar22[5].C = uStack_190._0_4_;
        *(atomic<int> *)&pFVar22[5].D = uStack_190._4_4_;
        pFVar22[6].A = (undefined4)local_188;
        pFVar22[6].B = local_188._4_4_;
        *(longlong **)&pFVar22[6].C = plStack_180;
        LOCK();
        *(undefined1 *)&pFVar22[7].C = 1;
        UNLOCK();
        local_1a8 = pcVar4;
        uStack_1a0 = uVar25;
        local_198 = lVar5;
        uStack_190 = uVar6;
        local_188 = uVar7;
        plStack_180 = plVar26;
        LeaveCriticalSection(lpCriticalSection);
        (**(code **)(**(longlong **)(pFVar22 + 7) + 0x10))();
        if (local_1a8 != (code *)0x0) {
          UE::Core::Private::Function::CheckCallable(local_1a8);
          pcVar4 = local_1a8;
          plVar26 = &local_198;
          if (plStack_180 != (longlong *)0x0) {
            plVar26 = plStack_180;
          }
          uVar25 = (**(code **)(*plVar26 + 8))();
          (*pcVar4)(uVar25);
        }
        if (local_1a8 != (code *)0x0) {
          plVar26 = &local_198;
          if (plStack_180 != (longlong *)0x0) {
            plVar26 = plStack_180;
          }
          (**(code **)(*plVar26 + 0x10))();
        }
        pTVar1 = local_2d8;
        pFVar34 = (local_2d8->AllocatorInstance).Data;
        if (((pFVar34 <= (FScriptContainerElement *)&local_388) &&
            ((FScriptContainerElement *)&local_388 < pFVar34 + (longlong)local_2d8->ArrayMax * 8))
           && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar12)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar16 = pTVar1->ArrayNum;
        if (iVar16 == pTVar1->ArrayMax) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
        }
        pTVar1->ArrayNum = iVar16 + 1;
        *(FSoundWavePCMWriter **)((pTVar1->AllocatorInstance).Data + (longlong)iVar16 * 8) =
             local_388;
        local_388 = (FSoundWavePCMWriter *)0x0;
        if (((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (*(char *)&pFVar22[7].C == '\0')) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("State->IsComplete()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                ,0x242,L""), bVar12)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_340);
        if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.Data.AllocatorInstance.Data);
        }
        if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_248.Data.AllocatorInstance.Data);
        }
        if (local_330.PassIdentifier.CameraName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_330.PassIdentifier.CameraName.Data.AllocatorInstance.Data);
        }
        if (local_330.PassIdentifier.Name.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_330.PassIdentifier.Name.Data.AllocatorInstance.Data);
        }
        if (local_330.FilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_330.FilePath.Data.AllocatorInstance.Data);
        }
        FVar35.Data = FVar35.Data + 0x40;
        uVar21 = local_3c8 & 0xffffffff;
        this = local_2f8;
      }
      if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
          (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
         && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("Singleton != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                 ,0x4fb,L""), bVar12)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar26 = (longlong *)
                (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                          (IConsoleManager::Singleton,L"MovieRenderPipeline.WaveOutput.WriteDelay",1
                          );
      if ((plVar26 != (longlong *)0x0) &&
         (pfVar27 = (float *)(**(code **)(*plVar26 + 0x70))(plVar26), pfVar27 != (float *)0x0)) {
        if (4 < (byte)LogMovieRenderPipeline._0_1_) {
          bVar12 = IsInParallelGameThread();
          if (((!bVar12) && (bVar12 = IsInGameThread(), !bVar12)) &&
             (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<6409875433831007945>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                  ,0x6c9,"GetShadowIndex() == 0"), bVar12)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
        }
        bVar12 = IsInParallelGameThread();
        if (((!bVar12) && (bVar12 = IsInGameThread(), !bVar12)) &&
           (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6409875433831007945>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x6c9,"GetShadowIndex() == 0"), bVar12)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FWindowsPlatformProcess::Sleep(*pfVar27);
      }
      DestructItems<_UMoviePipelineWaveOutput::BeginFinalizeImpl_::__l2::FOutputSegment,int>
                ((FOutputSegment *)local_3d0.Data,(int)local_3c8);
      if ((FOutputSegment *)local_3d0.Data != (FOutputSegment *)0x0) {
        FMemory::Free(local_3d0.Data);
      }
      if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
      }
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// BuildNewProcessCommandLineArgsImpl @ 14ddd7490

/* WARNING: Removing unreachable block (ram,0x00014ddd7574) */

void __thiscall
UMoviePipelineWaveOutput::BuildNewProcessCommandLineArgsImpl
          (UMoviePipelineWaveOutput *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FString local_18;
  
  ::FString::FString(&local_18,"-deterministicaudio");
  pFVar4 = (param_2->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  return;
}

// GetPrivateStaticClass @ 14dde44a0

UClass * __cdecl UMoviePipelineWaveOutput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineWaveOutput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineRenderPasses",L"MoviePipelineWaveOutput",
               &Z_Registration_Info_UClass_UMoviePipelineWaveOutput.InnerSingleton,
               StaticRegisterNativesUMoviePipelineWaveOutput,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMoviePipelineWaveOutput>,
               InternalVTableHelperCtorCaller<UMoviePipelineWaveOutput>,local_res8,
               UMoviePipelineOutputBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineWaveOutput.InnerSingleton;
}

// HasFinishedProcessingImpl @ 14dde6fd0

bool __thiscall UMoviePipelineWaveOutput::HasFinishedProcessingImpl(UMoviePipelineWaveOutput *this)

{
  return true;
}

// OnShotFinishedImpl @ 14ddf12e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipelineWaveOutput::OnShotFinishedImpl
          (UMoviePipelineWaveOutput *this,UMoviePipelineExecutorShot *param_1,bool param_2)

{
  LARGE_INTEGER local_res20;
  
  if (param_2) {
    if (4 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    QueryPerformanceCounter(&local_res20);
    (**(code **)(this->_padding_ + 0x350))(this);
    (**(code **)(this->_padding_ + 0x360))(this);
    QueryPerformanceCounter(&local_res20);
    if (4 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
  }
  return;
}

// StaticRegisterNativesUMoviePipelineWaveOutput @ 14ddff2e0

void __cdecl UMoviePipelineWaveOutput::StaticRegisterNativesUMoviePipelineWaveOutput(void)

{
  return;
}

// UpdateTelemetry @ 14de02f30

void __thiscall
UMoviePipelineWaveOutput::UpdateTelemetry
          (UMoviePipelineWaveOutput *this,FMoviePipelineShotRenderTelemetry *param_1)

{
  param_1->bUsesAudio = true;
  return;
}

// ValidateStateImpl @ 14de03070

void __thiscall UMoviePipelineWaveOutput::ValidateStateImpl(UMoviePipelineWaveOutput *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FText *pFVar5;
  FText local_18;
  
  UMoviePipelineSetting::ValidateStateImpl((UMoviePipelineSetting *)this);
  bVar3 = IsMoviePipelineAudioOutputSupported((UObject *)this);
  if (!bVar3) {
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"MovieRenderPipeline",L"WaveOutput_NotUsingDeterministicAudio",
                        L"Process must be launched with \"-deterministicaudio\" for this to work. Using a remote render will automatically add this argument."
                       );
    if (((FText *)this->_padding_ <= pFVar5) &&
       (pFVar5 < (FText *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    iVar4 = (int)this->_padding_;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->_padding_,piVar1);
    }
    *(int *)&this->_padding_ = iVar4 + 1;
    FText::FText((FText *)((longlong)iVar4 * 0x10 + this->_padding_),pFVar5);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

