// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 18

// StaticClass @ 14dd5c500

UClass * __cdecl UMoviePipelineVideoOutputBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineVideoOutputBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineVideoOutputBase",
               &Z_Registration_Info_UClass_UMoviePipelineVideoOutputBase.InnerSingleton,
               StaticRegisterNativesUMoviePipelineVideoOutputBase,0x90,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineVideoOutputBase>,
               InternalVTableHelperCtorCaller<UMoviePipelineVideoOutputBase>,local_res8,
               UMoviePipelineOutputBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineVideoOutputBase.InnerSingleton;
}

// UMoviePipelineVideoOutputBase @ 14dd6b820

UMoviePipelineVideoOutputBase * __thiscall
UMoviePipelineVideoOutputBase::UMoviePipelineVideoOutputBase
          (UMoviePipelineVideoOutputBase *this,FVTableHelper *param_1)

{
  UMoviePipelineOutputBase::UMoviePipelineOutputBase((UMoviePipelineOutputBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelineVideoOutputBase__6B_;
  (this->AllWriters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllWriters).ArrayNum = 0;
  (this->AllWriters).ArrayMax = 0;
  (this->OutstandingTasks).AllocatorInstance.SecondaryData =
       (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  (this->OutstandingTasks).ArrayNum = 0;
  (this->OutstandingTasks).ArrayMax = 4;
  return this;
}

// UMoviePipelineVideoOutputBase @ 14dd6b870

UMoviePipelineVideoOutputBase * __thiscall
UMoviePipelineVideoOutputBase::UMoviePipelineVideoOutputBase(UMoviePipelineVideoOutputBase *this)

{
  UMoviePipelineOutputBase::UMoviePipelineOutputBase((UMoviePipelineOutputBase *)this);
  this->_padding_ = (longlong)&___7UMoviePipelineVideoOutputBase__6B_;
  (this->AllWriters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllWriters).ArrayNum = 0;
  (this->AllWriters).ArrayMax = 0;
  this->bHasError = false;
  (this->OutstandingTasks).AllocatorInstance.SecondaryData =
       (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  (this->OutstandingTasks).ArrayNum = 0;
  (this->OutstandingTasks).ArrayMax = 4;
  return this;
}

// ~UMoviePipelineVideoOutputBase @ 14dd6c540

void __thiscall
UMoviePipelineVideoOutputBase::~UMoviePipelineVideoOutputBase(UMoviePipelineVideoOutputBase *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar2;
  
  this->_padding_ = (longlong)&___7UMoviePipelineVideoOutputBase__6B_;
  FVar2 = (this->OutstandingTasks).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar2 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&this->OutstandingTasks;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar2,(this->OutstandingTasks).ArrayNum);
  FVar2 = (this->OutstandingTasks).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  DestructItems<TTuple<TUniquePtr<MovieRenderPipeline::IVideoCodecWriter,TDefaultDelete<MovieRenderPipeline::IVideoCodecWriter>_>,TPromise<bool>_>,int>
            ((TTuple<TUniquePtr<MovieRenderPipeline::IVideoCodecWriter,TDefaultDelete<MovieRenderPipeline::IVideoCodecWriter>_>,TPromise<bool>_>
              *)(this->AllWriters).AllocatorInstance.Data,(this->AllWriters).ArrayNum);
  pFVar1 = (this->AllWriters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMoviePipelineOutputBase::~UMoviePipelineOutputBase((UMoviePipelineOutputBase *)this);
  return;
}

// BeginFinalizeImpl @ 14dd77cd0

void __thiscall
UMoviePipelineVideoOutputBase::BeginFinalizeImpl(UMoviePipelineVideoOutputBase *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->AllWriters).ArrayNum;
  pFVar2 = (this->AllWriters).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->AllWriters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<TUniquePtr<MovieRenderPipeline::IVideoCodecWriter,TDefaultDelete<MovieRenderPipeline::IVideoCodecWriter>_>,TPromise<bool>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(this->_padding_ + 0x3a0))(this,*(undefined8 *)pFVar2);
    pFVar2 = pFVar2 + 0x20;
  }
  return;
}

// BeginFinalize_EncodeThread @ 14dd77d50

void __thiscall
UMoviePipelineVideoOutputBase::BeginFinalize_EncodeThread
          (UMoviePipelineVideoOutputBase *this,IVideoCodecWriter *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MoviePipelineVideoOutputBase.h"
             ,100,L"Pure virtual not implemented (%s)");
  return;
}

// FinalizeImpl @ 14dd82370

void __thiscall UMoviePipelineVideoOutputBase::FinalizeImpl(UMoviePipelineVideoOutputBase *this)

{
  int *piVar1;
  int iVar2;
  FFutureState *this_00;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_28 [16];
  
  pFVar5 = (this->AllWriters).AllocatorInstance.Data;
  iVar2 = (this->AllWriters).ArrayNum;
  pFVar6 = pFVar5 + (longlong)iVar2 * 0x20;
  while( true ) {
    if ((this->AllWriters).ArrayNum != iVar2) {
      local_28[0] = 0;
      `TCheckedPointerIterator<TTuple<TUniquePtr<MovieRenderPipeline::IVideoCodecWriter,TDefaultDelete<MovieRenderPipeline::IVideoCodecWriter>_>,TPromise<bool>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_28);
    }
    if (pFVar5 == pFVar6) break;
    (**(code **)(this->_padding_ + 0x3a8))(this,*(undefined8 *)pFVar5);
    if (this->bHasError == false) {
      if (*(longlong *)(pFVar5 + 8) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(longlong *)(pFVar5 + 8) == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
      this_00 = *(FFutureState **)(pFVar5 + 8);
      if (this_00->bComplete != (TAtomic<bool>)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0xcd,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(undefined1 *)this_00[1].Mutex.CriticalSection.Opaque1 = 1;
      FFutureState::MarkComplete(this_00);
    }
    pFVar5 = pFVar5 + 0x20;
  }
  DestructItems<TTuple<TUniquePtr<MovieRenderPipeline::IVideoCodecWriter,TDefaultDelete<MovieRenderPipeline::IVideoCodecWriter>_>,TPromise<bool>_>,int>
            ((TTuple<TUniquePtr<MovieRenderPipeline::IVideoCodecWriter,TDefaultDelete<MovieRenderPipeline::IVideoCodecWriter>_>,TPromise<bool>_>
              *)(this->AllWriters).AllocatorInstance.Data,(this->AllWriters).ArrayNum);
  piVar1 = &(this->AllWriters).ArrayMax;
  (this->AllWriters).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->AllWriters).AllocatorInstance,0,piVar1);
    this->bHasError = false;
    return;
  }
  this->bHasError = false;
  return;
}

// Finalize_EncodeThread @ 14dd824f0

void __thiscall
UMoviePipelineVideoOutputBase::Finalize_EncodeThread
          (UMoviePipelineVideoOutputBase *this,IVideoCodecWriter *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MoviePipelineVideoOutputBase.h"
             ,0x65,L"Pure virtual not implemented (%s)");
  return;
}

// GetFilenameExtension @ 14dd87b50

wchar_t * __thiscall
UMoviePipelineVideoOutputBase::GetFilenameExtension(UMoviePipelineVideoOutputBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MoviePipelineVideoOutputBase.h"
             ,0x66,L"Pure virtual not implemented (%s)");
  return L"";
}

// GetPrivateStaticClass @ 14dd8c530

UClass * __cdecl UMoviePipelineVideoOutputBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineVideoOutputBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineVideoOutputBase",
               &Z_Registration_Info_UClass_UMoviePipelineVideoOutputBase.InnerSingleton,
               StaticRegisterNativesUMoviePipelineVideoOutputBase,0x90,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineVideoOutputBase>,
               InternalVTableHelperCtorCaller<UMoviePipelineVideoOutputBase>,local_res8,
               UMoviePipelineOutputBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineVideoOutputBase.InnerSingleton;
}

// HasFinishedProcessingImpl @ 14dd8eb20

bool __thiscall
UMoviePipelineVideoOutputBase::HasFinishedProcessingImpl(UMoviePipelineVideoOutputBase *this)

{
  return (this->OutstandingTasks).ArrayNum == 0;
}

// Initialize_EncodeThread @ 14dd8fbe0

bool __thiscall
UMoviePipelineVideoOutputBase::Initialize_EncodeThread
          (UMoviePipelineVideoOutputBase *this,IVideoCodecWriter *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MoviePipelineVideoOutputBase.h"
             ,0x62,L"Pure virtual not implemented (%s)");
  return true;
}

// Initialize_GameThread @ 14dd8fc10

TUniquePtr<MovieRenderPipeline::IVideoCodecWriter,TDefaultDelete<MovieRenderPipeline::IVideoCodecWriter>_>
 __thiscall
UMoviePipelineVideoOutputBase::Initialize_GameThread
          (UMoviePipelineVideoOutputBase *this,FString *param_1,TIntPoint<int> param_2,
          EImagePixelType param_3,ERGBFormat param_4,uchar param_5,uchar param_6)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MoviePipelineVideoOutputBase.h"
             ,0x61,L"Pure virtual not implemented (%s)");
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  return (TUniquePtr<MovieRenderPipeline::IVideoCodecWriter,TDefaultDelete<MovieRenderPipeline::IVideoCodecWriter>_>
          )(IVideoCodecWriter *)param_1;
}

// IsAudioSupported @ 14dd8fcd0

bool __thiscall UMoviePipelineVideoOutputBase::IsAudioSupported(UMoviePipelineVideoOutputBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MoviePipelineVideoOutputBase.h"
             ,0x67,L"Pure virtual not implemented (%s)");
  return false;
}

// OnReceiveImageDataImpl @ 14dd92190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014dd932f3) */
/* WARNING: Removing unreachable block (ram,0x00014dd932fc) */
/* WARNING: Removing unreachable block (ram,0x00014dd93321) */
/* WARNING: Removing unreachable block (ram,0x00014dd93ad7) */
/* WARNING: Removing unreachable block (ram,0x00014dd93ae5) */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipelineVideoOutputBase::OnReceiveImageDataImpl
          (UMoviePipelineVideoOutputBase *this,FMoviePipelineMergerOutputFrame *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *pTVar3;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar4;
  FCompositePassInfo *pFVar5;
  int iVar6;
  FImagePixelData *pFVar7;
  longlong lVar8;
  void *pvVar9;
  TIntPoint<int>_u_0_s_0 TVar10;
  code *pcVar11;
  bool bVar12;
  longlong *plVar13;
  IVideoCodecWriter *pIVar14;
  FMoviePipelineMergerOutputFrame *pFVar15;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> TVar16;
  bool bVar17;
  char cVar18;
  int iVar19;
  uint uVar20;
  UMoviePipeline *pUVar21;
  UMoviePipelinePrimaryConfig *pUVar22;
  UMoviePipelineOutputSetting *pUVar23;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar24;
  wchar_t *pwVar25;
  UMoviePipelineSetting *this_00;
  FString *pFVar26;
  FPlatformFileManager *this_01;
  IPlatformFile *pIVar27;
  size_t sVar28;
  TReferenceControllerBase<1> *pTVar29;
  FEvent *pFVar30;
  UObject *pUVar31;
  TSharedPtr<TFutureState<bool>,1> *this_02;
  TFutureState<bool> *this_03;
  UClass *pUVar32;
  FLightweightSourceData *pFVar33;
  undefined1 uVar34;
  longlong lVar35;
  uint uVar36;
  ForAnyElementType FVar37;
  FScriptContainerElement *pFVar38;
  FScriptContainerElement *pFVar39;
  TReferenceControllerBase<1> *pTVar40;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> TVar41;
  TReferenceControllerBase<1> *pTVar42;
  int iVar43;
  FScriptContainerElement *pFVar44;
  FWeakObjectPtr *pFVar45;
  FString *pFVar46;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> TVar47;
  undefined1 auStackY_648 [32];
  undefined1 local_5f8;
  undefined1 local_5f7;
  bool local_5f6;
  undefined1 local_5f5 [5];
  FString local_5f0;
  ForAnyElementType local_5e0;
  undefined8 local_5d8;
  FString local_5d0;
  IVideoCodecWriter *local_5c0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_5b8;
  TArray<MoviePipeline::FCompositePassInfo,TSizedDefaultAllocator<32>_> local_5a8;
  undefined1 local_598 [32];
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> local_578;
  FString *local_570;
  UMoviePipelineVideoOutputBase *local_568;
  FString local_560;
  IVideoCodecWriter *local_550;
  TReferenceControllerBase<1> *local_548;
  TReferenceControllerBase<1> *local_540;
  FScriptContainerElement local_538;
  TMap<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_530;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_528;
  undefined8 local_508;
  FWeakObjectPtr *local_500;
  TArray<FString,TSizedDefaultAllocator<32>_> local_4f8;
  FString local_4e8;
  FCompositePassInfo *local_4d8;
  undefined8 local_4d0;
  FMoviePipelineMergerOutputFrame *local_4c8;
  int local_4c0;
  int iStack_4bc;
  FImagePixelData *local_4b8;
  FString local_4b0;
  FMoviePipelineOutputFutureData local_4a0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_468;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_458;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_448;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_428;
  TReferenceControllerBase<1> *local_408;
  TReferenceControllerBase<1> *local_400;
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> local_3f8;
  TPairInitializer<FString_&&,FString_&&> local_3e8;
  UClass *local_3d8;
  UClass *local_3d0;
  FString local_3c8;
  FString local_3b8;
  undefined1 local_3a8 [12];
  uint uStack_39c;
  TBitArray<FDefaultBitArrayAllocator> *local_398;
  undefined8 uStack_390;
  longlong local_388;
  int iStack_380;
  undefined4 uStack_37c;
  FString local_378;
  FString local_368;
  FString *local_358;
  FString *local_350;
  TAsyncCropImage<FLinearColor> local_348;
  FString local_328;
  TAsyncCropImage<FColor> local_318;
  FString local_2f8;
  TAsyncCropImage<FFloat16Color> local_2e8;
  undefined1 local_2c8 [40];
  int local_2a0;
  undefined4 uStack_29c;
  FString local_298;
  TMap<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
  *local_288;
  longlong lStack_280;
  TBitArray<FDefaultBitArrayAllocator> *local_278;
  undefined8 uStack_270;
  int iStack_26c;
  void *local_268;
  undefined8 uStack_260;
  FString local_258;
  TRangedForIterator local_248;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_218;
  undefined1 local_1f8 [32];
  void *pvStack_1d8;
  int local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  ForElementType<FSetElementId> local_1b8;
  int local_1b0;
  undefined1 local_1a8 [32];
  void *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  ForElementType<FSetElementId> local_168;
  int local_160;
  undefined1 local_158 [32];
  void *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  ForElementType<FSetElementId> local_118;
  int local_110;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_108;
  undefined1 local_f8 [32];
  void *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  void *local_b8;
  undefined4 local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  void *local_68;
  undefined4 local_60;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_648;
  if (this->bHasError != false) {
    return;
  }
  pFVar45 = (FWeakObjectPtr *)&this->_padding_;
  local_568 = this;
  local_500 = pFVar45;
  local_4c8 = param_1;
  pUVar21 = (UMoviePipeline *)FWeakObjectPtr::Get(pFVar45);
  pUVar22 = UMoviePipeline::GetPipelinePrimaryConfig(pUVar21);
  pUVar23 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                      ((UMoviePipelineConfigBase *)pUVar22,false);
  local_3e8.Value = (FString *)pUVar23;
  if ((pUVar23 == (UMoviePipelineOutputSetting *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutputSettings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineVideoOutputBase.cpp"
                          ,0x3c,L""), bVar17)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  ::FString::FString(&local_4b0,&(pUVar23->OutputDirectory).Path);
  local_5a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5a8.ArrayNum = 0;
  local_5a8.ArrayMax = 0;
  MoviePipeline::GetPassCompositeData(param_1,&local_5a8);
  puVar2 = &(param_1->ImageOutputData).field_0x10;
  local_4f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4f8.ArrayNum = 0;
  local_4f8.ArrayMax = 0;
  pTVar3 = &param_1->ImageOutputData;
  local_448._padding_._0_4_ = 0;
  local_448._padding_._4_4_ = 1;
  local_448.UnvisitedBitMask = 0xffffffff;
  local_448.CurrentBitIndex = 0;
  local_448.BaseBitIndex = 0;
  local_448.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if (*(int *)&(param_1->ImageOutputData).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_448);
  }
  TStack_528._padding_ = CONCAT44(local_448._padding_._4_4_,(undefined4)local_448._padding_);
  TStack_528._16_8_ = CONCAT44(local_448.CurrentBitIndex,local_448.UnvisitedBitMask);
  TStack_528._24_8_ = CONCAT44(local_448._28_4_,local_448.BaseBitIndex);
  local_508._0_4_ =
       *(int *)&(param_1->ImageOutputData).field_0x8 -
       *(int *)&(param_1->ImageOutputData).field_0x34;
  TStack_528.Array = local_448.Array;
  local_398 = local_448.Array;
  uStack_37c = local_508._4_4_;
  local_530 = pTVar3;
  local_3a8._0_8_ = pTVar3;
  unique0x10002cf7 = TStack_528._padding_;
  uStack_390 = TStack_528._16_8_;
  local_388 = TStack_528._24_8_;
  iStack_380 = (int)local_508;
  pTVar24 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_218,(TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                       *(int *)&(param_1->ImageOutputData).field_0x28);
  TStack_528._padding_ = pTVar24->_padding_;
  TStack_528.Array = pTVar24->Array;
  TStack_528.UnvisitedBitMask = pTVar24->UnvisitedBitMask;
  TStack_528.CurrentBitIndex = pTVar24->CurrentBitIndex;
  TStack_528._24_8_ = *(undefined8 *)&pTVar24->BaseBitIndex;
  local_508._0_4_ =
       *(int *)&(param_1->ImageOutputData).field_0x8 -
       *(int *)&(param_1->ImageOutputData).field_0x34;
  local_248.InitialNum = (int)local_508;
  local_248._44_4_ = local_508._4_4_;
  local_530 = pTVar3;
  local_248._padding_ = (longlong)pTVar3;
  local_248._padding_ = TStack_528._padding_;
  local_248._padding_ = (longlong)TStack_528.Array;
  local_248._padding_ = TStack_528._16_8_;
  local_248._padding_ = TStack_528._24_8_;
  bVar17 = TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForIterator::operator!=((TRangedForIterator *)local_3a8,&local_248);
  if (bVar17) {
    do {
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                (&local_4f8,
                 (FString *)
                 ((longlong)uStack_390._4_4_ * 0x30 + *(longlong *)local_3a8._0_8_ + 0x10));
      uStack_390 = CONCAT44(uStack_390._4_4_,(uint)uStack_390 & ~uStack_39c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_3a8 + 8));
      bVar17 = TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_3a8,&local_248);
    } while (bVar17);
  }
  local_428._padding_._0_4_ = 0;
  local_5f6 = 1 < local_4f8.ArrayNum;
  local_428._padding_._4_4_ = 1;
  local_428.UnvisitedBitMask = 0xffffffff;
  local_428.CurrentBitIndex = 0;
  local_428.BaseBitIndex = 0;
  local_428.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if (*(int *)&(param_1->ImageOutputData).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_428);
  }
  TStack_528._padding_ = CONCAT44(local_428._padding_._4_4_,(undefined4)local_428._padding_);
  TStack_528.CurrentBitIndex = local_428.CurrentBitIndex;
  TStack_528.UnvisitedBitMask = local_428.UnvisitedBitMask;
  TStack_528._28_4_ = local_428._28_4_;
  TStack_528.BaseBitIndex = local_428.BaseBitIndex;
  local_2a0 = *(int *)&(param_1->ImageOutputData).field_0x8 -
              *(int *)&(param_1->ImageOutputData).field_0x34;
  local_2c8._16_8_ = local_428.Array;
  local_508 = CONCAT44(uStack_29c,local_2a0);
  TStack_528.Array = local_428.Array;
  local_530 = pTVar3;
  local_2c8._0_8_ = pTVar3;
  local_2c8._8_8_ = TStack_528._padding_;
  local_2c8._24_8_ = TStack_528._16_8_;
  local_2c8._32_8_ = TStack_528._24_8_;
  pTVar24 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_2c8,
                       (TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                       *(int *)&(param_1->ImageOutputData).field_0x28);
  lStack_280 = pTVar24->_padding_;
  local_278 = pTVar24->Array;
  uStack_270._0_4_ = pTVar24->UnvisitedBitMask;
  iStack_26c = pTVar24->CurrentBitIndex;
  local_268 = *(void **)&pTVar24->BaseBitIndex;
  local_1d0 = *(int *)&(param_1->ImageOutputData).field_0x8 -
              *(int *)&(param_1->ImageOutputData).field_0x34;
  uStack_260 = CONCAT44(local_1cc,local_1d0);
  local_288 = pTVar3;
  local_1f8._0_8_ = pTVar3;
  local_1f8._8_8_ = lStack_280;
  local_1f8._16_8_ = local_278;
  local_1f8._24_8_ = uStack_270;
  pvStack_1d8 = local_268;
LAB_14dd924e0:
  pTVar3 = local_530;
  if (*(int *)&local_530->field_0x8 - *(int *)&local_530->field_0x34 != (int)local_508) {
    local_5f8 = 0;
    `TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5f8);
  }
  if (((TStack_528.CurrentBitIndex == iStack_26c) && (TStack_528.Array == local_278)) &&
     (pTVar3 == local_288)) {
    DestructItems<FString,int>((FString *)local_4f8.AllocatorInstance.Data,local_4f8.ArrayNum);
    if (local_4f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4f8.AllocatorInstance.Data);
    }
    DestructItems<MoviePipeline::FCompositePassInfo,int>
              ((FCompositePassInfo *)local_5a8.AllocatorInstance.Data,local_5a8.ArrayNum);
    if ((FCompositePassInfo *)local_5a8.AllocatorInstance.Data != (FCompositePassInfo *)0x0) {
      FMemory::Free(local_5a8.AllocatorInstance.Data);
    }
    if (local_4b0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
    return;
  }
  iVar43 = local_5a8.ArrayNum;
  pFVar46 = (FString *)((longlong)TStack_528.CurrentBitIndex * 0x30 + *(longlong *)pTVar3);
  pFVar39 = local_5a8.AllocatorInstance.Data + 8;
  pTVar4 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
           (local_5a8.AllocatorInstance.Data + (longlong)local_5a8.ArrayNum * 0x28);
  local_570 = pFVar46;
  do {
    if (local_5a8.ArrayNum != iVar43) {
      local_5f7 = 0;
      `TCheckedPointerIterator<MoviePipeline::FCompositePassInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_5f7);
    }
    if ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(pFVar39 + -8) == pTVar4) {
      iVar43 = 0;
      local_5b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      lVar35 = *(longlong *)(pFVar46[2].Data.AllocatorInstance.Data + 0x18);
      local_1a8._0_8_ = (void *)0x0;
      local_1a8._8_8_ = 0;
      local_188 = (void *)0x0;
      local_180 = 0;
      local_17c = 0x80;
      local_178 = 0xffffffff;
      local_174 = 0;
      local_168 = (ForElementType<FSetElementId>)0x0;
      local_160 = 0;
      local_158._0_8_ = (void *)0x0;
      local_158._8_8_ = 0;
      local_138 = (void *)0x0;
      local_130 = 0;
      local_12c = 0x80;
      local_128 = 0xffffffff;
      local_124 = 0;
      local_118 = (ForElementType<FSetElementId>)0x0;
      local_110 = 0;
      local_108.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
      local_5f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5f0.Data.ArrayNum = 0;
      local_5f0.Data.ArrayMax = 0;
      local_5d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5d0.Data.ArrayNum = 0;
      local_5d0.Data.ArrayMax = 0;
      local_4e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4e8.Data.ArrayNum = 0;
      local_4e8.Data.ArrayMax = 0;
      local_560.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_560.Data.ArrayNum = 0;
      local_560.Data.ArrayMax = 0;
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                (&local_5b8,
                 (wchar_t *)
                 (((FString *)((longlong)local_3e8.Value + 0x58))->Data).AllocatorInstance.Data,
                 (((FString *)((longlong)local_3e8.Value + 0x58))->Data).ArrayNum,0);
      UE::MoviePipeline::ValidateOutputFormatString
                ((FString *)&local_5b8,
                 1 < (*(int *)&(local_4c8->ImageOutputData).field_0x8 - local_5a8.ArrayNum) -
                     *(int *)&(local_4c8->ImageOutputData).field_0x34,false,local_5f6);
      ::FString::ReplaceInline((FString *)&local_5b8,L"{frame_number}",L"",IgnoreCase);
      ::FString::ReplaceInline((FString *)&local_5b8,L"{frame_number_rel}",L"",IgnoreCase);
      ::FString::ReplaceInline((FString *)&local_5b8,L"{frame_number_shot}",L"",IgnoreCase);
      ::FString::ReplaceInline((FString *)&local_5b8,L"{frame_number_shot_rel}",L"",IgnoreCase);
      local_1f8._0_8_ =
           (TMap<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
            *)0x0;
      local_1f8._8_8_ = 0;
      pvStack_1d8 = (void *)0x0;
      local_1d0 = 0;
      local_1cc = 0x80;
      local_1c8 = 0xffffffff;
      local_1c4 = 0;
      local_1b8 = (ForElementType<FSetElementId>)0x0;
      local_1b0 = 0;
      ::FString::FString(&local_378,L"camera_name");
      TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
      ::Emplace<FString,FString_const_&>
                ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                  *)local_1f8,&local_378,pFVar46 + 1);
      if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_378.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_368,L"render_pass");
      TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
      ::Emplace<FString,FString_const_&>
                ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                  *)local_1f8,&local_368,pFVar46);
      if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_368.Data.AllocatorInstance.Data);
      }
      pwVar25 = (wchar_t *)(**(code **)(this->_padding_ + 0x3b0))(this);
      ::FString::FString(&local_2f8,pwVar25);
      ::FString::FString(&local_328,L"ext");
      local_358 = &local_328;
      local_350 = &local_2f8;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
                ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  *)local_1f8,&local_3e8,(bool *)&local_358);
      if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.Data.AllocatorInstance.Data);
      }
      if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
      }
      pUVar21 = (UMoviePipeline *)FWeakObjectPtr::Get(pFVar45);
      pUVar22 = UMoviePipeline::GetPipelinePrimaryConfig(pUVar21);
      local_3d8 = UMoviePipelineOutputSetting::StaticClass();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_3d8 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_3d8);
      }
      this_00 = UMoviePipelineConfigBase::FindSettingByClass
                          ((UMoviePipelineConfigBase *)pUVar22,
                           (TSubclassOf<UMoviePipelineSetting>)&local_3d8,false,false);
      if ((this_00 == (UMoviePipelineSetting *)0x0) ||
         (bVar17 = UObjectBaseUtility::IsA<UMoviePipelineOutputSetting>
                             ((UObjectBaseUtility *)this_00), !bVar17)) {
        this_00 = (UMoviePipelineSetting *)0x0;
      }
      uVar34 = *(undefined1 *)&this_00[1].ValidationResults.AllocatorInstance.Data;
      *(undefined1 *)&this_00[1].ValidationResults.AllocatorInstance.Data = 1;
      pUVar21 = (UMoviePipeline *)FWeakObjectPtr::Get(pFVar45);
      if (local_5b8.ArrayNum != 0) {
        iVar43 = local_5b8.ArrayNum + -1;
      }
      if ((local_4b0.Data.ArrayNum == 0) && (iVar43 + 1 != 0)) {
        iVar19 = 1;
      }
      else {
        iVar19 = 0;
      }
      local_468.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmptyWithSlack<wchar_t,int>
                (&local_468,(wchar_t *)local_4b0.Data.AllocatorInstance.Data,local_4b0.Data.ArrayNum
                 ,0,iVar19 + iVar43 + 1);
      ::FString::PathAppend
                ((FString *)&local_468,(wchar_t *)local_5b8.AllocatorInstance.Data,iVar43);
      pFVar15 = local_4c8;
      UMoviePipeline::ResolveFilenameFormatArguments
                (pUVar21,(FString *)&local_468,
                 (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                  *)local_1f8,&local_5d0,(FMoviePipelineFormatArgs *)local_1a8,
                 &local_4c8->FrameOutputState,0);
      if (local_468.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_468.AllocatorInstance.Data);
      }
      *(undefined1 *)&this_00[1].ValidationResults.AllocatorInstance.Data = uVar34;
      bVar17 = FPaths::IsRelative(&local_5d0);
      if (bVar17) {
        pFVar26 = FPaths::ConvertRelativePathToFull(&local_258,&local_5d0);
        if (&local_5d0 != pFVar26) {
          if (local_5d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5d0.Data.AllocatorInstance.Data);
          }
          local_5d0.Data.AllocatorInstance.Data = (pFVar26->Data).AllocatorInstance.Data;
          (pFVar26->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_5d0.Data.ArrayNum = (pFVar26->Data).ArrayNum;
          local_5d0.Data.ArrayMax = (pFVar26->Data).ArrayMax;
          (pFVar26->Data).ArrayNum = 0;
          (pFVar26->Data).ArrayMax = 0;
        }
        if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.Data.AllocatorInstance.Data);
        }
      }
      pUVar21 = (UMoviePipeline *)FWeakObjectPtr::Get(pFVar45);
      pFVar39 = (FScriptContainerElement *)0x0;
      UMoviePipeline::ResolveFilenameFormatArguments
                (pUVar21,(FString *)&local_5b8,
                 (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                  *)local_1f8,&local_4e8,(FMoviePipelineFormatArgs *)local_1a8,
                 &pFVar15->FrameOutputState,0);
      iVar43 = 0;
      if (local_5b8.ArrayNum != 0) {
        iVar43 = local_5b8.ArrayNum + -1;
      }
      if ((local_4b0.Data.ArrayNum != 0) || (iVar19 = 1, iVar43 + 1 == 0)) {
        iVar19 = 0;
      }
      local_458.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmptyWithSlack<wchar_t,int>
                (&local_458,(wchar_t *)local_4b0.Data.AllocatorInstance.Data,local_4b0.Data.ArrayNum
                 ,0,iVar19 + iVar43 + 1);
      ::FString::PathAppend
                ((FString *)&local_458,(wchar_t *)local_5b8.AllocatorInstance.Data,iVar43);
      pUVar21 = (UMoviePipeline *)FWeakObjectPtr::Get(pFVar45);
      UMoviePipeline::ResolveFilenameFormatArguments
                (pUVar21,(FString *)&local_458,
                 (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                  *)local_1f8,&local_5f0,(FMoviePipelineFormatArgs *)local_1a8,
                 &pFVar15->FrameOutputState,0);
      bVar17 = FPaths::IsRelative(&local_5f0);
      if (bVar17) {
        pFVar26 = FPaths::ConvertRelativePathToFull(&local_298,&local_5f0);
        if (&local_5f0 != pFVar26) {
          if (local_5f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5f0.Data.AllocatorInstance.Data);
          }
          local_5f0.Data.AllocatorInstance.Data = (pFVar26->Data).AllocatorInstance.Data;
          (pFVar26->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_5f0.Data.ArrayNum = (pFVar26->Data).ArrayNum;
          local_5f0.Data.ArrayMax = (pFVar26->Data).ArrayMax;
          (pFVar26->Data).ArrayNum = 0;
          (pFVar26->Data).ArrayMax = 0;
        }
        if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.Data.AllocatorInstance.Data);
        }
      }
      FPaths::GetPath(&local_3c8,&local_5f0);
      this_01 = FPlatformFileManager::Get();
      pIVar27 = FPlatformFileManager::GetPlatformFile(this_01);
      FVar37.Data = (FScriptContainerElement *)L"";
      if (local_3c8.Data.ArrayNum != 0) {
        FVar37.Data = local_3c8.Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar27 + 0x200))(pIVar27,FVar37.Data);
      if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
      }
      local_f8._0_8_ = (void *)0x0;
      local_f8._8_8_ = 0;
      local_d8 = (void *)0x0;
      local_d0 = 0;
      local_cc = 0x80;
      local_c8 = 0xffffffff;
      local_c4 = 0;
      local_b8 = (void *)0x0;
      local_b0 = 0;
      local_a8 = (void *)0x0;
      local_a0 = 0;
      local_88 = (void *)0x0;
      local_80 = 0;
      local_7c = 0x80;
      local_78 = 0xffffffff;
      local_74 = 0;
      local_68 = (void *)0x0;
      local_60 = 0;
      local_58.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
      pUVar21 = (UMoviePipeline *)FWeakObjectPtr::Get(pFVar45);
      UMoviePipeline::ResolveFilenameFormatArguments
                (pUVar21,(FString *)&local_5b8,
                 (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                  *)local_1f8,&local_560,(FMoviePipelineFormatArgs *)local_f8,
                 &pFVar15->FrameOutputState,0);
      FPaths::NormalizeFilename(&local_560);
      this = local_568;
      pwVar25 = (wchar_t *)(**(code **)(local_568->_padding_ + 0x3b0))(local_568);
      iVar43 = 0;
      if (pwVar25 != (wchar_t *)0x0) {
        sVar28 = wcslen(pwVar25);
        iVar43 = (int)sVar28;
      }
      ::FString::RemoveFromEnd(&local_560,pwVar25,iVar43,IgnoreCase);
      ::FString::FString(&local_3b8,".");
      iVar43 = local_3b8.Data.ArrayNum + -1;
      if (local_3b8.Data.ArrayNum == 0) {
        iVar43 = 0;
      }
      FVar37.Data = (FScriptContainerElement *)L"";
      if (local_3b8.Data.ArrayNum != 0) {
        FVar37.Data = local_3b8.Data.AllocatorInstance.Data;
      }
      ::FString::RemoveFromEnd(&local_560,(wchar_t *)FVar37.Data,iVar43,IgnoreCase);
      if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
      }
      local_60 = 0;
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&local_a8,0);
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      if (local_a8 != (void *)0x0) {
        FMemory::Free(local_a8);
      }
      local_b0 = 0;
      if (local_b8 != (void *)0x0) {
        FMemory::Free(local_b8);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_f8,0);
      if (local_d8 != (void *)0x0) {
        FMemory::Free(local_d8);
      }
      if ((void *)local_f8._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_f8._0_8_);
      }
      if (local_458.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_458.AllocatorInstance.Data);
      }
      local_1b0 = 0;
      if (local_1b8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1b8);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_1f8,0);
      if (pvStack_1d8 != (void *)0x0) {
        FMemory::Free(pvStack_1d8);
      }
      if ((TMap<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
           *)local_1f8._0_8_ !=
          (TMap<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
           *)0x0) {
        FMemory::Free((void *)local_1f8._0_8_);
      }
      if (local_5b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5b8.AllocatorInstance.Data);
      }
      pFVar44 = pFVar39;
      pFVar38 = pFVar39;
      if ((this->AllWriters).ArrayNum < 1) goto LAB_14dd92eac;
      break;
    }
    iVar19 = *(int *)pFVar39;
    iVar6 = (pFVar46->Data).ArrayNum;
    if (iVar19 == iVar6) {
      if (1 < iVar19) {
        iVar19 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)
                            (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(pFVar39 + -8))->
                            AllocatorInstance).Data,
                            (wchar_t *)(pFVar46->Data).AllocatorInstance.Data);
        bVar17 = iVar19 == 0;
        goto LAB_14dd92588;
      }
LAB_14dd9258f:
      iVar19 = *(int *)(pFVar39 + 0x10);
      iVar6 = pFVar46[1].Data.ArrayNum;
      if (iVar19 == iVar6) {
        if (iVar19 < 2) goto LAB_14dd935e9;
        iVar19 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)(pFVar39 + 8),
                            (wchar_t *)pFVar46[1].Data.AllocatorInstance.Data);
        bVar17 = iVar19 == 0;
      }
      else {
        bVar17 = iVar19 + iVar6 == 1;
      }
      if (bVar17) goto LAB_14dd935e9;
    }
    else {
      bVar17 = iVar19 + iVar6 == 1;
LAB_14dd92588:
      if (bVar17) goto LAB_14dd9258f;
    }
    pFVar39 = pFVar39 + 0x28;
  } while( true );
  do {
    uVar36 = (uint)pFVar44;
    uVar20 = 0;
    if ((int)uVar36 < (this->AllWriters).ArrayNum) {
      uVar20 = ~uVar36 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar43 = *(int *)(*(longlong *)(pFVar38 + (longlong)(this->AllWriters).AllocatorInstance.Data) +
                     0x18);
    if (iVar43 == local_5d0.Data.ArrayNum) {
      if (1 < iVar43) {
        iVar43 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)
                             (*(longlong *)
                               (pFVar38 + (longlong)(this->AllWriters).AllocatorInstance.Data) +
                             0x10),(wchar_t *)local_5d0.Data.AllocatorInstance.Data);
        bVar17 = iVar43 == 0;
        goto LAB_14dd92e8f;
      }
LAB_14dd93009:
      uVar20 = 0;
      if ((int)uVar36 < (this->AllWriters).ArrayNum) {
        uVar20 = ~uVar36 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar39 = (this->AllWriters).AllocatorInstance.Data + (longlong)(int)uVar36 * 0x20;
      if (pFVar39 != (FScriptContainerElement *)0x0) goto LAB_14dd93061;
      break;
    }
    bVar17 = iVar43 + local_5d0.Data.ArrayNum == 1;
LAB_14dd92e8f:
    if (bVar17) goto LAB_14dd93009;
    pFVar44 = (FScriptContainerElement *)(ulonglong)(uVar36 + 1);
    pFVar38 = pFVar38 + 0x20;
  } while ((int)(uVar36 + 1) < (this->AllWriters).ArrayNum);
LAB_14dd92eac:
  pTVar40 = (TReferenceControllerBase<1> *)0x0;
  cVar18 = (**(code **)(this->_padding_ + 0x380))(this);
  if (cVar18 != '\0') {
    local_4c0 = *(int *)(lVar35 + 0xa0) - *(int *)(lVar35 + 0x98);
    iStack_4bc = *(int *)(lVar35 + 0xa4) - *(int *)(lVar35 + 0x9c);
  }
  (**(code **)(this->_padding_ + 0x388))(this,&local_5c0,&local_5f0);
  if (local_5c0 != (IVideoCodecWriter *)0x0) {
    iVar43 = local_5d0.Data.ArrayNum + -1;
    if (local_5d0.Data.ArrayNum == 0) {
      iVar43 = 0;
    }
    ::FString::AssignRange
              (&local_5c0->StableFileName,(wchar_t *)local_5d0.Data.AllocatorInstance.Data,iVar43);
    pTVar29 = ::operator_new(0x90);
    if (pTVar29 == (TReferenceControllerBase<1> *)0x0) {
      pTVar42 = (TReferenceControllerBase<1> *)&DAT_00000010;
    }
    else {
      pTVar29->SharedReferenceCount = (atomic<int>)0x1;
      pTVar29->WeakReferenceCount = (atomic<int>)0x1;
      pTVar29->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_V__TFutureState__N___00_SharedPointerInternals__6B_;
      pTVar29[1]._padding_ = 0;
      pTVar29[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar29[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar29[2]._padding_ = 0;
      pTVar29[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar29[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar29[3]._padding_ = 0;
      pTVar29[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar29[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar29[4]._padding_ = 0;
      pTVar29[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar29[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar29[5]._padding_ = 0;
      pTVar29[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar29[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar29[6]._padding_ = 0;
      pTVar29[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar29[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar29[7]._padding_ = 0;
      pTVar29[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar29[7].WeakReferenceCount = (atomic<int>)0x0;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar29 + 1),4000);
      pTVar29[4]._padding_ = 0;
      pTVar29[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar29[6].WeakReferenceCount = (atomic<int>)0x0;
      pFVar30 = FGenericPlatformProcess::GetSynchEventFromPool(true);
      pTVar42 = pTVar29 + 1;
      pTVar29[7]._padding_ = (longlong)pFVar30;
      *(undefined1 *)&pTVar29[7].SharedReferenceCount = 0;
      if ((pTVar42 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      LOCK();
      pTVar29->SharedReferenceCount = (atomic<int>)((int)pTVar29->SharedReferenceCount + 1);
      UNLOCK();
      pTVar40 = pTVar29;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar40);
    pFVar45 = local_500;
    local_4a0.FilePath.Data.ArrayNum = 0;
    local_4a0.FilePath.Data.ArrayMax = 0;
    local_4a0.PassIdentifier.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4a0.Shot = (UMoviePipelineExecutorShot *)0x0;
    local_4a0.FilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4a0.PassIdentifier.Name.Data.ArrayNum = 0;
    local_4a0.PassIdentifier.Name.Data.ArrayMax = 0;
    local_4a0.PassIdentifier.CameraName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    local_4a0.PassIdentifier.CameraName.Data.ArrayNum = 0;
    local_4a0.PassIdentifier.CameraName.Data.ArrayMax = 0;
    pUVar31 = FWeakObjectPtr::Get(local_500);
    uVar20 = *(uint *)(lVar35 + 0xd4);
    uVar36 = 0;
    if ((int)uVar20 < *(int *)&pUVar31[5].field_0x18) {
      uVar36 = ~uVar20 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    local_4a0.Shot =
         *(UMoviePipelineExecutorShot **)
          (*(longlong *)&pUVar31[5].field_0x10 + (longlong)(int)uVar20 * 8);
    ::FString::operator=(&local_4a0.PassIdentifier.Name,pFVar46);
    ::FString::operator=(&local_4a0.PassIdentifier.CameraName,pFVar46 + 1);
    if (local_5f0.Data.ArrayNum == 0) {
      iVar43 = 0;
    }
    else {
      iVar43 = local_5f0.Data.ArrayNum + -1;
    }
    ::FString::AssignRange
              (&local_4a0.FilePath,(wchar_t *)local_5f0.Data.AllocatorInstance.Data,iVar43);
    pUVar21 = (UMoviePipeline *)FWeakObjectPtr::Get(pFVar45);
    if ((pTVar42 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("State.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                            ,0x283,L""), bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (pTVar40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_408 = pTVar42;
    local_400 = pTVar40;
    UMoviePipeline::AddOutputFuture(pUVar21,(TFuture<bool> *)&local_408,&local_4a0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_400);
    this = local_568;
    local_550 = local_5c0;
    local_5c0 = (IVideoCodecWriter *)0x0;
    pFVar39 = (local_568->AllWriters).AllocatorInstance.Data;
    local_538 = (FScriptContainerElement)0x1;
    local_548 = pTVar42;
    local_540 = pTVar40;
    if (((pFVar39 <= (FScriptContainerElement *)&local_550) &&
        ((FScriptContainerElement *)&local_550 <
         pFVar39 + (longlong)(local_568->AllWriters).ArrayMax * 0x20)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar43 = (this->AllWriters).ArrayNum;
    piVar1 = &(this->AllWriters).ArrayMax;
    if (iVar43 == *piVar1) {
      iVar43 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&(this->AllWriters).AllocatorInstance,piVar1);
    }
    (this->AllWriters).ArrayNum = iVar43 + 1;
    pFVar39 = (this->AllWriters).AllocatorInstance.Data + (longlong)iVar43 * 0x20;
    *(IVideoCodecWriter **)pFVar39 = local_550;
    *(TReferenceControllerBase<1> **)(pFVar39 + 8) = local_548;
    *(TReferenceControllerBase<1> **)(pFVar39 + 0x10) = local_540;
    pFVar39[0x18] = local_538;
    local_540 = (TReferenceControllerBase<1> *)0x0;
    local_548 = (TReferenceControllerBase<1> *)0x0;
    local_550 = (IVideoCodecWriter *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    TDefaultDelete<MovieRenderPipeline::IVideoCodecWriter>::operator()
              ((TDefaultDelete<MovieRenderPipeline::IVideoCodecWriter> *)&local_550,local_550);
    iVar43 = (this->AllWriters).ArrayNum;
    uVar36 = iVar43 - 1;
    uVar20 = 0;
    if ((int)uVar36 < iVar43) {
      uVar20 = ~uVar36 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar39 = (this->AllWriters).AllocatorInstance.Data +
              (longlong)(this->AllWriters).ArrayNum * 0x20 + -0x20;
    lVar8 = *(longlong *)pFVar39;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)(lVar8 + 0x20),
                (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)local_1a8);
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)(lVar8 + 0x70),
                (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)local_158);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_108.DebugPtr != (UMoviePipelineExecutorJob *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_108.DebugPtr);
    }
    ((TObjectPtr<UMoviePipelineExecutorJob>_u_0 *)(lVar8 + 0xc0))->DebugPtr =
         (UMoviePipelineExecutorJob *)local_108;
    cVar18 = (**(code **)(this->_padding_ + 0x390))(this);
    this->bHasError = cVar18 == '\0';
    if (cVar18 == '\0') {
      this_02 = TPromise<bool>::GetState((TPromise<bool> *)(pFVar39 + 8));
      this_03 = TSharedPtr<TFutureState<bool>,1>::operator->(this_02);
      if ((this_03->field_0x68 != '\0') &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("!IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0xcd,L""), bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      (this_03->Result).Pad[0] = '\0';
      FFutureState::MarkComplete((FFutureState *)this_03);
      if (1 < (byte)LogMovieRenderPipelineIO._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO);
      }
      if (local_4a0.PassIdentifier.CameraName.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4a0.PassIdentifier.CameraName.Data.AllocatorInstance.Data);
      }
      if (local_4a0.PassIdentifier.Name.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4a0.PassIdentifier.Name.Data.AllocatorInstance.Data);
      }
      if (local_4a0.FilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4a0.FilePath.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pIVar14 = local_5c0;
      if (local_5c0 != (IVideoCodecWriter *)0x0) {
        *(undefined4 *)&(local_5c0->LightweightSourceData).field_0x48 = 0;
        pvVar9 = *(void **)&(local_5c0->LightweightSourceData).field_0x40;
        if (pvVar9 != (void *)0x0) {
          FMemory::Free(pvVar9);
        }
        TSparseArray<TSparseSetElement<TTuple<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&pIVar14->LightweightSourceData);
        FMoviePipelineFormatArgs::~FMoviePipelineFormatArgs(&pIVar14->FormatArgs);
        pFVar39 = (pIVar14->StableFileName).Data.AllocatorInstance.Data;
        if (pFVar39 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar39);
        }
        pFVar39 = (pIVar14->FileName).Data.AllocatorInstance.Data;
        if (pFVar39 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar39);
        }
        ::operator_delete(pIVar14,0x120);
      }
      if (local_560.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_560.Data.AllocatorInstance.Data);
      }
      if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
      }
      if (local_5d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5d0.Data.AllocatorInstance.Data);
      }
      if (local_5f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5f0.Data.AllocatorInstance.Data);
      }
      local_110 = 0;
      if (local_118 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_118);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_158,0);
      if (local_138 != (void *)0x0) {
        FMemory::Free(local_138);
      }
      if ((void *)local_158._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_158._0_8_);
      }
      local_160 = 0;
      if (local_168 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_168);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_1a8,0);
      if (local_188 != (void *)0x0) {
        FMemory::Free(local_188);
      }
      if ((void *)local_1a8._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1a8._0_8_);
      }
      pFVar45 = (FWeakObjectPtr *)&this->_padding_;
      goto LAB_14dd935e9;
    }
    if (local_4a0.PassIdentifier.CameraName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a0.PassIdentifier.CameraName.Data.AllocatorInstance.Data);
    }
    if (local_4a0.PassIdentifier.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_4a0.PassIdentifier.Name.Data.AllocatorInstance.Data);
    }
    if (local_4a0.FilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a0.FilePath.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  TDefaultDelete<MovieRenderPipeline::IVideoCodecWriter>::operator()
            ((TDefaultDelete<MovieRenderPipeline::IVideoCodecWriter> *)&local_5c0,local_5c0);
  if (pFVar39 == (FScriptContainerElement *)0x0) {
    if (1 < (byte)LogMovieRenderPipelineIO._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO)
      ;
    }
  }
  else {
LAB_14dd93061:
    TVar41.Ptr = (FImagePixelData *)0x0;
    pFVar7 = (FImagePixelData *)pFVar46[2].Data.AllocatorInstance.Data;
    if ((*(int *)(lVar35 + 0xa0) == *(int *)(lVar35 + 0x98)) &&
       (*(int *)(lVar35 + 0xa4) == *(int *)(lVar35 + 0x9c))) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    TVar10 = (pFVar7->Size).field0_0x0._s_0;
    if ((TVar10.X == *(int *)(lVar35 + 0x58)) && (TVar10.Y == *(int *)(lVar35 + 0x5c))) {
      bVar12 = true;
    }
    else {
      bVar12 = false;
    }
    local_4b8 = pFVar7;
    cVar18 = (**(code **)(this->_padding_ + 0x380))(this);
    pFVar46 = local_570;
    TVar47.Ptr = pFVar7;
    TVar16.Ptr = local_4b8;
    if (((cVar18 != '\0') && (bVar17)) && (bVar12)) {
      iVar43 = *(int *)(local_570[2].Data.AllocatorInstance.Data + 0x10);
      if (iVar43 == 0) {
        local_318.CropRect.field0_0x0._s_0.Min.field0_0x0 =
             (TIntPoint<int>)*(TIntPoint<int>_u_0 *)(lVar35 + 0x98);
        local_318.CropRect.field0_0x0._s_0.Max.field0_0x0 =
             (TIntPoint<int>)*(TIntPoint<int>_u_0 *)(lVar35 + 0xa0);
        local_318.ParentWriteTask = (FImageWriteTask *)0x0;
        local_318.OutCroppedImage.Ptr = (FImagePixelData *)0x0;
        TAsyncCropImage<FColor>::operator()(&local_318,pFVar7);
        TVar41.Ptr = local_318.OutCroppedImage.Ptr;
        local_318.OutCroppedImage.Ptr = (FImagePixelData *)0x0;
        TVar47.Ptr = TVar41.Ptr;
        TVar16.Ptr = TVar41.Ptr;
      }
      else if (iVar43 == 1) {
        local_2e8.CropRect.field0_0x0._s_0.Min.field0_0x0 =
             (TIntPoint<int>)*(TIntPoint<int>_u_0 *)(lVar35 + 0x98);
        local_2e8.CropRect.field0_0x0._s_0.Max.field0_0x0 =
             (TIntPoint<int>)*(TIntPoint<int>_u_0 *)(lVar35 + 0xa0);
        local_2e8.ParentWriteTask = (FImageWriteTask *)0x0;
        local_2e8.OutCroppedImage.Ptr = (FImagePixelData *)0x0;
        TAsyncCropImage<FFloat16Color>::operator()(&local_2e8,pFVar7);
        TVar41.Ptr = local_2e8.OutCroppedImage.Ptr;
        local_2e8.OutCroppedImage.Ptr = (FImagePixelData *)0x0;
        TVar47.Ptr = TVar41.Ptr;
        TVar16.Ptr = TVar41.Ptr;
      }
      else {
        TVar47.Ptr = TVar41.Ptr;
        TVar16.Ptr = TVar41.Ptr;
        if (iVar43 == 2) {
          local_348.CropRect.field0_0x0._s_0.Min.field0_0x0 =
               (TIntPoint<int>)*(TIntPoint<int>_u_0 *)(lVar35 + 0x98);
          local_348.CropRect.field0_0x0._s_0.Max.field0_0x0 =
               (TIntPoint<int>)*(TIntPoint<int>_u_0 *)(lVar35 + 0xa0);
          local_348.ParentWriteTask = (FImageWriteTask *)0x0;
          local_348.OutCroppedImage.Ptr = (FImagePixelData *)0x0;
          TAsyncCropImage<FLinearColor>::operator()(&local_348,pFVar7);
          TVar41.Ptr = local_348.OutCroppedImage.Ptr;
          local_348.OutCroppedImage.Ptr = (FImagePixelData *)0x0;
          TVar47.Ptr = TVar41.Ptr;
          TVar16.Ptr = TVar41.Ptr;
        }
      }
    }
    local_4b8 = TVar16.Ptr;
    pUVar21 = (UMoviePipeline *)FWeakObjectPtr::Get(local_500);
    pUVar22 = UMoviePipeline::GetPipelinePrimaryConfig(pUVar21);
    pUVar32 = Z_Construct_UClass_UMoviePipelineColorSetting_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar32 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar32);
    }
    local_3d0 = pUVar32;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar32 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar32);
    }
    UMoviePipelineConfigBase::FindSettingsByClass
              ((UMoviePipelineConfigBase *)pUVar22,&local_3f8,
               (TSubclassOf<UMoviePipelineSetting>)&local_3d0,false,false);
    if (local_3f8.ArrayNum < 1) {
      if (local_3f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3f8.AllocatorInstance.Data);
      }
LAB_14dd938a0:
      uVar34 = 1;
    }
    else {
      lVar8 = *(longlong *)local_3f8.AllocatorInstance.Data;
      FMemory::Free(local_3f8.AllocatorInstance.Data);
      if (lVar8 == 0) goto LAB_14dd938a0;
      pUVar32 = Z_Construct_UClass_UMoviePipelineColorSetting_NoRegister();
      iVar43 = (int)pUVar32->_padding_;
      if (((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar43) ||
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar43 * 8) !=
           &pUVar32->_padding_)) || (*(char *)(lVar8 + 0x48) == '\0')) goto LAB_14dd938a0;
      uVar34 = 0;
    }
    *(undefined1 *)(*(longlong *)pFVar39 + 200) = uVar34;
    pFVar33 = TMapBase<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData,0>_>
              ::FindOrAddImpl<int_const_&>
                        ((TMapBase<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData,0>_>
                          *)(*(longlong *)pFVar39 + 0xd0),*(uint *)(lVar35 + 0xd4),
                         (int *)(lVar35 + 0xd4));
    pFVar33->SubmittedFrameCount = pFVar33->SubmittedFrameCount + 1;
    if ((pFVar46->Data).ArrayNum == 0) {
      pwVar25 = L"";
    }
    else {
      pwVar25 = (wchar_t *)(pFVar46->Data).AllocatorInstance.Data;
    }
    iVar43 = FGenericPlatformStricmp::Stricmp(pwVar25,L"FinalImage");
    pFVar46 = local_570;
    if (iVar43 == 0) {
      iVar43 = local_5a8.ArrayNum;
      local_5e0.Data = (FScriptContainerElement *)0x0;
      local_5d8 = 0;
      pFVar5 = (FCompositePassInfo *)
               (local_5a8.AllocatorInstance.Data + (longlong)local_5a8.ArrayNum * 0x28);
      pFVar44 = local_5a8.AllocatorInstance.Data + 0x20;
      while( true ) {
        if (local_5a8.ArrayNum != iVar43) {
          local_5f5[0] = 0;
          `TCheckedPointerIterator<MoviePipeline::FCompositePassInfo,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_5f5);
        }
        if ((FCompositePassInfo *)(pFVar44 + -0x20) == pFVar5) break;
        iVar19 = pFVar46[1].Data.ArrayNum;
        if (iVar19 == *(int *)(pFVar44 + -8)) {
          if (1 < iVar19) {
            iVar19 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)pFVar46[1].Data.AllocatorInstance.Data,
                                (wchar_t *)*(FImagePixelData **)(pFVar44 + -0x10));
            bVar17 = iVar19 == 0;
            goto LAB_14dd9395f;
          }
LAB_14dd9396a:
          local_598._0_8_ = (FScriptContainerElement *)0x0;
          local_598._8_4_ = 0;
          local_598._12_4_ = 0;
          local_598._16_8_ = (FScriptContainerElement *)0x0;
          local_598._24_4_ = 0;
          local_598._28_4_ = 0;
          local_578.Ptr = (FImagePixelData *)0x0;
          ::FString::operator=((FString *)local_598,(FString *)(pFVar44 + -0x20));
          ::FString::operator=((FString *)(local_598 + 0x10),(FString *)(pFVar44 + -0x10));
          TVar16.Ptr = local_578.Ptr;
          TVar47.Ptr = local_578.Ptr;
          if ((FScriptContainerElement *)&local_578 != pFVar44) {
            TVar47.Ptr = *(FImagePixelData **)pFVar44;
            *(FImagePixelData **)pFVar44 = (FImagePixelData *)0x0;
            if (local_578.Ptr != (FImagePixelData *)0x0) {
              plVar13 = &(local_578.Ptr)->_padding_;
              local_578.Ptr = TVar47.Ptr;
              (**(code **)*plVar13)(TVar16.Ptr,1);
              TVar47.Ptr = local_578.Ptr;
            }
          }
          local_578.Ptr = TVar47.Ptr;
          if (((local_5e0.Data <= (FCompositePassInfo *)local_598) &&
              ((FScriptContainerElement *)local_598 <
               local_5e0.Data + (longlong)local_5d8._4_4_ * 0x28)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          lVar35 = (longlong)(int)local_5d8;
          if ((int)local_5d8 == local_5d8._4_4_) {
            iVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&local_5e0,(int *)((longlong)&local_5d8 + 4));
            local_5d8 = CONCAT44(local_5d8._4_4_,iVar19 + 1);
            pFVar38 = local_5e0.Data + (longlong)iVar19 * 0x28;
          }
          else {
            local_5d8 = CONCAT44(local_5d8._4_4_,(int)local_5d8 + 1);
            pFVar38 = local_5e0.Data + lVar35 * 0x28;
          }
          *(undefined8 *)&pFVar38->field_0x0 = 0;
          *(undefined8 *)&pFVar38->field_0x0 = local_598._0_8_;
          *(undefined4 *)(pFVar38 + 8) = local_598._8_4_;
          *(undefined4 *)(pFVar38 + 0xc) = local_598._12_4_;
          *(undefined8 *)(pFVar38 + 0x10) = 0;
          *(undefined8 *)(pFVar38 + 0x10) = local_598._16_8_;
          *(undefined4 *)(pFVar38 + 0x18) = local_598._24_4_;
          *(undefined4 *)(pFVar38 + 0x1c) = local_598._28_4_;
          *(FImagePixelData **)(pFVar38 + 0x20) = local_578.Ptr;
          local_578.Ptr = (FImagePixelData *)0x0;
          local_598._24_4_ = 0;
          local_598._28_4_ = 0;
          local_598._16_8_ = (FScriptContainerElement *)0x0;
          local_598._8_4_ = 0;
          local_598._12_4_ = 0;
          local_598._0_8_ = (FScriptContainerElement *)0x0;
        }
        else {
          bVar17 = iVar19 + *(int *)(pFVar44 + -8) == 1;
LAB_14dd9395f:
          if (bVar17) goto LAB_14dd9396a;
        }
        pFVar44 = pFVar44 + 0x28;
      }
      (**(code **)(local_568->_padding_ + 0x398))(local_568,*(longlong *)pFVar39,local_4b8);
      DestructItems<MoviePipeline::FCompositePassInfo,int>
                ((FCompositePassInfo *)local_5e0.Data,(int)local_5d8);
      if ((FCompositePassInfo *)local_5e0.Data != (FCompositePassInfo *)0x0) {
        FMemory::Free(local_5e0.Data);
      }
    }
    else {
      local_4d8 = (FCompositePassInfo *)0x0;
      local_4d0 = 0;
      (**(code **)(local_568->_padding_ + 0x398))(local_568,*(longlong *)pFVar39,TVar47.Ptr);
      DestructItems<MoviePipeline::FCompositePassInfo,int>(local_4d8,(int)local_4d0);
      if (local_4d8 != (FCompositePassInfo *)0x0) {
        FMemory::Free(local_4d8);
      }
    }
    if (TVar41.Ptr != (FImagePixelData *)0x0) {
      (**(code **)(TVar41.Ptr)->_padding_)(TVar41.Ptr,1);
    }
  }
  if (local_560.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_560.Data.AllocatorInstance.Data);
  }
  if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
  }
  if (local_5d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d0.Data.AllocatorInstance.Data);
  }
  if (local_5f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5f0.Data.AllocatorInstance.Data);
  }
  local_110 = 0;
  if (local_118 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_118);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_158);
  local_160 = 0;
  if (local_168 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_168);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1a8);
  pFVar45 = local_500;
  this = local_568;
LAB_14dd935e9:
  TStack_528.UnvisitedBitMask = TStack_528.UnvisitedBitMask & ~TStack_528._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_528);
  goto LAB_14dd924e0;
}

// OnShotFinishedImpl @ 14dd94f50

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipelineVideoOutputBase::OnShotFinishedImpl
          (UMoviePipelineVideoOutputBase *this,UMoviePipelineExecutorShot *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UMoviePipeline *this_00;
  UMoviePipelinePrimaryConfig *this_01;
  UMoviePipelineOutputSetting *pUVar4;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_38;
  FString local_30 [2];
  
  if (param_2) {
    this_00 = (UMoviePipeline *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    this_01 = UMoviePipeline::GetPipelinePrimaryConfig(this_00);
    pUVar4 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                       ((UMoviePipelineConfigBase *)this_01,false);
    if ((pUVar4 == (UMoviePipelineOutputSetting *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutputSettings",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineVideoOutputBase.cpp"
                           ,0x1e,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    ::operator/(local_30,&(pUVar4->OutputDirectory).Path,&pUVar4->FileNameFormat);
    iVar3 = ::FString::Find(local_30,L"{shot_name}",0xb,IgnoreCase,FromStart,-1);
    if (((iVar3 == -1) &&
        (iVar3 = ::FString::Find(local_30,L"{camera_name}",0xd,IgnoreCase,FromStart,-1), iVar3 == -1
        )) && (2 < (byte)LogMovieRenderPipelineIO._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO)
      ;
    }
    if (4 < (byte)LogMovieRenderPipelineIO._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO)
      ;
    }
    QueryPerformanceCounter(&local_res20);
    (**(code **)(this->_padding_ + 0x350))(this);
    (**(code **)(this->_padding_ + 0x360))(this);
    QueryPerformanceCounter(&local_38);
    if (4 < (byte)LogMovieRenderPipelineIO._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO)
      ;
    }
    if (local_30[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

// StaticRegisterNativesUMoviePipelineVideoOutputBase @ 14dda68a0

void __cdecl UMoviePipelineVideoOutputBase::StaticRegisterNativesUMoviePipelineVideoOutputBase(void)

{
  return;
}

// WriteFrame_EncodeThread @ 14dda9450

void __thiscall
UMoviePipelineVideoOutputBase::WriteFrame_EncodeThread
          (UMoviePipelineVideoOutputBase *this,IVideoCodecWriter *param_1,FImagePixelData *param_2,
          TArray<MoviePipeline::FCompositePassInfo,TSizedDefaultAllocator<32>_> *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MoviePipelineVideoOutputBase.h"
             ,99,L"Pure virtual not implemented (%s)");
  return;
}

