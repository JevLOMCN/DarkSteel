// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 17

// StaticClass @ 14dcf92f0

UClass * __cdecl UMoviePipelineCommandLineEncoder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineCommandLineEncoder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineCommandLineEncoder",
               &Z_Registration_Info_UClass_UMoviePipelineCommandLineEncoder.InnerSingleton,
               StaticRegisterNativesUMoviePipelineCommandLineEncoder,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineCommandLineEncoder>,
               InternalVTableHelperCtorCaller<UMoviePipelineCommandLineEncoder>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineCommandLineEncoder.InnerSingleton;
}

// UMoviePipelineCommandLineEncoder @ 14dd0c830

UMoviePipelineCommandLineEncoder * __thiscall
UMoviePipelineCommandLineEncoder::UMoviePipelineCommandLineEncoder
          (UMoviePipelineCommandLineEncoder *this,FVTableHelper *param_1)

{
  UMoviePipelineSetting::UMoviePipelineSetting((UMoviePipelineSetting *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelineCommandLineEncoder__6B_;
  (this->FileNameFormatOverride).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileNameFormatOverride).Data.ArrayNum = 0;
  (this->FileNameFormatOverride).Data.ArrayMax = 0;
  (this->AdditionalCommandLineArgs).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalCommandLineArgs).Data.ArrayNum = 0;
  (this->AdditionalCommandLineArgs).Data.ArrayMax = 0;
  (this->ActiveEncodeJobs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveEncodeJobs).ArrayNum = 0;
  (this->ActiveEncodeJobs).ArrayMax = 0;
  return this;
}

// UMoviePipelineCommandLineEncoder @ 14dd0c880

UMoviePipelineCommandLineEncoder * __thiscall
UMoviePipelineCommandLineEncoder::UMoviePipelineCommandLineEncoder
          (UMoviePipelineCommandLineEncoder *this)

{
  UMoviePipelineSetting::UMoviePipelineSetting((UMoviePipelineSetting *)this);
  this->_padding_ = (longlong)&___7UMoviePipelineCommandLineEncoder__6B_;
  (this->FileNameFormatOverride).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileNameFormatOverride).Data.ArrayNum = 0;
  (this->FileNameFormatOverride).Data.ArrayMax = 0;
  (this->AdditionalCommandLineArgs).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalCommandLineArgs).Data.ArrayNum = 0;
  (this->AdditionalCommandLineArgs).Data.ArrayMax = 0;
  (this->ActiveEncodeJobs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveEncodeJobs).ArrayNum = 0;
  (this->ActiveEncodeJobs).ArrayMax = 0;
  ::FString::operator=(&this->FileNameFormatOverride,L"");
  this->Quality = Epic;
  this->bDeleteSourceFiles = false;
  this->bSkipEncodeOnRenderCanceled = true;
  this->bWriteEachFrameDuration = true;
  return this;
}

// ~UMoviePipelineCommandLineEncoder @ 14dd0e3d0

void __thiscall
UMoviePipelineCommandLineEncoder::~UMoviePipelineCommandLineEncoder
          (UMoviePipelineCommandLineEncoder *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMoviePipelineCommandLineEncoder__6B_;
  DestructItems<UMoviePipelineCommandLineEncoder::FActiveJob,int>
            ((FActiveJob *)(this->ActiveEncodeJobs).AllocatorInstance.Data,
             (this->ActiveEncodeJobs).ArrayNum);
  pFVar1 = (this->ActiveEncodeJobs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AdditionalCommandLineArgs).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FileNameFormatOverride).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMoviePipelineSetting::~UMoviePipelineSetting((UMoviePipelineSetting *)this);
  return;
}

// BeginExportImpl @ 14dd15a90

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineCommandLineEncoder::BeginExportImpl(UMoviePipelineCommandLineEncoder *this)

{
  UMoviePipelineExecutorJob *pUVar1;
  bool bVar2;
  UMoviePipeline *pUVar3;
  TArray<FMoviePipelineShotOutputData,TSizedDefaultAllocator<32>_> local_30;
  FMovieGraphRenderOutputData *local_20;
  undefined8 local_18;
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEndFrame,this)
  ;
  bVar2 = NeedsPerShotFlushing(this);
  if (!bVar2) {
    pUVar3 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30.ArrayNum = 0;
    local_30.ArrayMax = 0;
    local_20 = (FMovieGraphRenderOutputData *)0x0;
    local_18 = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMoviePipeline *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    pUVar1 = (pUVar3->CurrentJob).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UMoviePipelineExecutorJob *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TArray<FMoviePipelineShotOutputData,TSizedDefaultAllocator<32>_>::operator=
              (&local_30,&pUVar3->GeneratedShotOutputData);
    StartEncodingProcess(this,&local_30,false);
    DestructItems<FMovieGraphRenderOutputData,int>(local_20,(int)local_18);
    if (local_20 != (FMovieGraphRenderOutputData *)0x0) {
      FMemory::Free(local_20);
    }
    DestructItems<FMoviePipelineShotOutputData,int>
              ((FMoviePipelineShotOutputData *)local_30.AllocatorInstance.Data,local_30.ArrayNum);
    if ((FMoviePipelineShotOutputData *)local_30.AllocatorInstance.Data !=
        (FMoviePipelineShotOutputData *)0x0) {
      FMemory::Free(local_30.AllocatorInstance.Data);
    }
  }
  return;
}

// GetPrivateStaticClass @ 14dd2def0

UClass * __cdecl UMoviePipelineCommandLineEncoder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineCommandLineEncoder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineCommandLineEncoder",
               &Z_Registration_Info_UClass_UMoviePipelineCommandLineEncoder.InnerSingleton,
               StaticRegisterNativesUMoviePipelineCommandLineEncoder,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineCommandLineEncoder>,
               InternalVTableHelperCtorCaller<UMoviePipelineCommandLineEncoder>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineCommandLineEncoder.InnerSingleton;
}

// GetQualitySettingString @ 14dd2e350

FString * __thiscall
UMoviePipelineCommandLineEncoder::GetQualitySettingString
          (UMoviePipelineCommandLineEncoder *this,FString *__return_storage_ptr__)

{
  EMoviePipelineEncodeQuality EVar1;
  UClass *this_00;
  UObject *pUVar2;
  
  this_00 = UMoviePipelineCommandLineEncoderSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  EVar1 = this->Quality;
  pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (EVar1 == Low) {
    pUVar2 = (UObject *)&pUVar2[4].field_0x18;
  }
  else if (EVar1 == Medium) {
    pUVar2 = pUVar2 + 5;
  }
  else if (EVar1 == High) {
    pUVar2 = (UObject *)&pUVar2[5].field_0x10;
  }
  else {
    if (EVar1 != Epic) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
    pUVar2 = (UObject *)&pUVar2[5].field_0x20;
  }
  ::FString::FString(__return_storage_ptr__,(FString *)pUVar2);
  return __return_storage_ptr__;
}

// HasFinishedExportingImpl @ 14dd31e90

bool __thiscall
UMoviePipelineCommandLineEncoder::HasFinishedExportingImpl(UMoviePipelineCommandLineEncoder *this)

{
  OnTick(this);
  return (this->ActiveEncodeJobs).ArrayNum == 0;
}

// IsValidOnPrimary @ 14dd33de0

bool __thiscall
UMoviePipelineCommandLineEncoder::IsValidOnPrimary(UMoviePipelineCommandLineEncoder *this)

{
  return true;
}

// IsValidOnShots @ 14dd33e30

bool __thiscall
UMoviePipelineCommandLineEncoder::IsValidOnShots(UMoviePipelineCommandLineEncoder *this)

{
  return false;
}

// LaunchEncoder @ 14dd344e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipelineCommandLineEncoder::LaunchEncoder
          (UMoviePipelineCommandLineEncoder *this,FEncoderParams *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  longlong lVar6;
  UObject *pUVar7;
  UMoviePipelinePrimaryConfig *this_00;
  undefined1 *puVar8;
  code *pcVar9;
  ForAnyElementType FVar10;
  UMoviePipelineCommandLineEncoder *pUVar11;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar12;
  FEncoderParams *this_01;
  FStringFormatArg *pFVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  UMoviePipeline *pUVar19;
  UMoviePipelineOutputSetting *pUVar20;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar21;
  longlong lVar22;
  IFileManager *pIVar23;
  size_t sVar24;
  UClass *pUVar25;
  ulonglong uVar26;
  wchar_t *pwVar27;
  longlong lVar28;
  FScriptContainerElement *pFVar29;
  uint uVar30;
  longlong lVar31;
  ForAnyElementType FVar32;
  undefined1 uVar33;
  undefined1 *puVar34;
  uint *puVar35;
  FStringFormatArg *pFVar36;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar37;
  int iVar38;
  undefined1 auStackY_778 [32];
  ForAnyElementType in_stack_fffffffffffff8b0;
  ulonglong in_stack_fffffffffffff8c0;
  undefined1 local_718;
  undefined1 local_717;
  undefined1 local_716;
  undefined1 local_715;
  undefined1 local_714 [4];
  ForAnyElementType local_710;
  undefined8 local_708;
  ForAnyElementType local_700;
  undefined8 local_6f8;
  uint local_6f0;
  FString local_6e8;
  UMoviePipelineCommandLineEncoder *local_6d8;
  void *local_6d0;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_6c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_6c0;
  undefined8 local_6a0;
  FString local_698;
  FString local_688;
  FString local_678;
  FString local_668;
  FString local_658;
  void *local_648;
  TBitArray<FDefaultBitArrayAllocator> *local_640;
  longlong local_638;
  FString local_630;
  undefined8 local_620;
  FEncoderParams *local_618;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_610;
  FString local_600;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5f0;
  undefined1 local_5d0 [8];
  undefined1 local_5c8 [16];
  FStringFormatArg *local_5b8;
  UClass *local_5b0;
  FString local_5a8;
  FString local_598;
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> local_588;
  FString local_578;
  TPairInitializer<FString_&&,FString_&&> local_568;
  int iStack_558;
  undefined4 uStack_554;
  undefined1 *local_550;
  undefined4 uStack_548;
  int iStack_544;
  int local_540;
  undefined4 uStack_53c;
  int iStack_538;
  undefined4 uStack_534;
  TPairInitializer<FString_&&,FStringFormatArg_&&> local_530;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_520;
  undefined8 uStack_500;
  FString local_4f8;
  wchar_t *local_4e8;
  int iStack_4e0;
  undefined4 uStack_4dc;
  FString local_4d8;
  FString *local_4c8;
  FStringFormatArg *local_4c0;
  FString local_4b8;
  FString *local_4a8;
  longlong local_4a0;
  FString local_498;
  FString local_488;
  FString *local_478;
  FStringFormatArg *local_470;
  FString local_468;
  FString local_458;
  FString *local_448;
  FStringFormatArg *local_440;
  FString local_438;
  FString *local_428;
  FStringFormatArg *local_420;
  FString local_418;
  FString local_408;
  FString *local_3f8;
  FString *local_3f0;
  FString local_3e8;
  FGuid local_3d8;
  TStringView<wchar_t> local_3c8;
  FStringFormatArg local_3b8;
  FStringFormatArg local_398;
  FStringFormatArg local_378;
  FStringFormatArg local_358;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_338;
  undefined4 local_2fc;
  undefined1 local_2f8 [16];
  TBitArray<FDefaultBitArrayAllocator> local_2e8;
  undefined4 local_2c8;
  undefined4 local_2c4;
  ForElementType<FSetElementId> local_2b8;
  int local_2b0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_2a8;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  local_258;
  undefined1 local_208 [64];
  void *local_1c8;
  undefined4 local_1c0;
  undefined1 local_1b8 [64];
  void *local_178;
  undefined4 local_170;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_168;
  TStringBuilderBase<wchar_t> local_158;
  wchar_t local_138 [64];
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  local_b8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_778;
  local_6d8 = this;
  local_618 = param_1;
  pUVar19 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar20 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                      ((UMoviePipelineConfigBase *)
                       (((pUVar19->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.
                       DebugPtr,false);
  local_158.bIsDynamic = false;
  local_158.bIsExternal = false;
  local_158.Base = local_138;
  local_158.CurPos = local_138;
  local_710.Data = (FScriptContainerElement *)0x0;
  local_158.End = (wchar_t *)&local_b8;
  local_708 = 0;
  local_700.Data = (FScriptContainerElement *)0x0;
  local_6f8 = 0;
  ::FString::FString(&local_408,L"FrameRate");
  TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
  ::FindChecked((TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                 *)param_1,&local_408);
  if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.Data.AllocatorInstance.Data);
  }
  pFVar36 = (FStringFormatArg *)&param_1->FilesByExtensionType;
  local_5f0._padding_._0_4_ = 0;
  puVar1 = &(param_1->FilesByExtensionType).field_0x10;
  local_620 = 1;
  local_5f0._padding_._4_4_ = 1;
  local_5f0.UnvisitedBitMask = 0xffffffff;
  local_5f0.CurrentBitIndex = 0;
  local_5f0.BaseBitIndex = 0;
  local_5f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_5b8 = pFVar36;
  if (*(int *)&(param_1->FilesByExtensionType).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_5f0);
  }
  TStack_6c0._padding_ = CONCAT44(local_5f0._padding_._4_4_,(undefined4)local_5f0._padding_);
  TStack_6c0.CurrentBitIndex = local_5f0.CurrentBitIndex;
  TStack_6c0.UnvisitedBitMask = local_5f0.UnvisitedBitMask;
  TStack_6c0._28_4_ = local_5f0._28_4_;
  TStack_6c0.BaseBitIndex = local_5f0.BaseBitIndex;
  TStack_6c0.Array = local_5f0.Array;
  local_6a0 = CONCAT44(local_6a0._4_4_,
                       *(int *)&(param_1->FilesByExtensionType).field_0x8 -
                       *(int *)&(param_1->FilesByExtensionType).field_0x34);
  TStack_520.Array = local_5f0.Array;
  uStack_500 = local_6a0;
  local_6c8 = (TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
               *)pFVar36;
  local_530.Value = pFVar36;
  TStack_520._padding_ = TStack_6c0._padding_;
  TStack_520._16_8_ = TStack_6c0._16_8_;
  TStack_520._24_8_ = TStack_6c0._24_8_;
  pTVar21 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_338,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                       *(int *)&(param_1->FilesByExtensionType).field_0x28);
  TStack_6c0._padding_ = pTVar21->_padding_;
  TStack_6c0.Array = pTVar21->Array;
  TStack_6c0.UnvisitedBitMask = pTVar21->UnvisitedBitMask;
  TStack_6c0.CurrentBitIndex = pTVar21->CurrentBitIndex;
  TStack_6c0.BaseBitIndex = pTVar21->BaseBitIndex;
  TStack_6c0._28_4_ = *(undefined4 *)&pTVar21->field_0x1c;
  local_6f0 = TStack_6c0.CurrentBitIndex;
  local_640 = TStack_6c0.Array;
  while( true ) {
    pFVar13 = local_530.Value;
    uVar17 = local_6f0;
    if (*(int *)&(local_530.Value)->field1_0x8 -
        *(int *)((longlong)&local_530.Value[1].StringValue.Data.AllocatorInstance.Data + 4) !=
        (int)uStack_500) {
      local_718 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_718);
    }
    lVar22 = (longlong)TStack_520.CurrentBitIndex;
    if (((TStack_520.CurrentBitIndex == uVar17) && (TStack_520.Array == local_640)) &&
       (pFVar13 == pFVar36)) break;
    lVar6 = *(longlong *)pFVar13;
    FGuid::NewGuid(&local_3d8);
    local_698.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_698.Data.ArrayNum = 0;
    local_698.Data.ArrayMax = 0;
    FGuid::AppendString(&local_3d8,&local_698,Digits);
    iVar38 = 0;
    if (local_698.Data.ArrayNum != 0) {
      iVar38 = local_698.Data.ArrayNum + -1;
    }
    iVar16 = (pUVar20->OutputDirectory).Path.Data.ArrayNum;
    if ((iVar16 != 0) || (iVar18 = 1, iVar38 + 1 == 0)) {
      iVar18 = 0;
    }
    local_610.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmptyWithSlack<wchar_t,int>
              (&local_610,(wchar_t *)(pUVar20->OutputDirectory).Path.Data.AllocatorInstance.Data,
               iVar16,0,iVar18 + iVar38 + 1);
    ::FString::PathAppend
              ((FString *)&local_610,(wchar_t *)local_698.Data.AllocatorInstance.Data,iVar38);
    ::FString::ConcatFC(&local_4d8,(FString *)&local_610,L"_input");
    if (local_610.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_610.AllocatorInstance.Data);
    }
    if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_698.Data.AllocatorInstance.Data);
    }
    local_208._0_8_ = 0;
    local_208._8_8_ = 0;
    local_208._32_8_ = 0;
    local_208._40_4_ = 0;
    local_208._44_4_ = 0x80;
    local_208._48_4_ = 0xffffffff;
    local_208._52_4_ = 0;
    local_1c8 = (void *)0x0;
    local_1c0 = 0;
    local_1b8._0_8_ = 0;
    local_1b8._8_8_ = 0;
    local_1b8._32_8_ = 0;
    local_1b8._40_4_ = 0;
    local_1b8._44_4_ = 0x80;
    local_1b8._48_4_ = 0xffffffff;
    local_1b8._52_4_ = 0;
    local_178 = (void *)0x0;
    local_170 = 0;
    local_168.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
    local_6e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6e8.Data.ArrayNum = 0;
    local_6e8.Data.ArrayMax = 0;
    local_2a8.Elements._0_8_ = 0;
    local_2a8.Elements._8_8_ = 0;
    local_2a8.Elements._32_8_ = 0;
    local_2a8.Elements._40_4_ = 0;
    local_2a8.Elements._44_4_ = 0x80;
    local_2a8.Elements._48_4_ = 0xffffffff;
    local_2a8.Elements._52_4_ = 0;
    local_2a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_2a8.HashSize = 0;
    ::FString::FString(&local_4f8,L"txt");
    ::FString::FString(&local_3e8,L"ext");
    local_3f8 = &local_3e8;
    local_3f0 = &local_4f8;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>(&local_2a8,&local_568,(bool *)&local_3f8);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
    if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
    }
    pUVar19 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    in_stack_fffffffffffff8b0.Data = (FScriptContainerElement *)0x0;
    UMoviePipeline::ResolveFilenameFormatArguments
              (pUVar19,&local_4d8,
               (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)&local_2a8,&local_6e8,(FMoviePipelineFormatArgs *)local_208,
               (FMoviePipelineFrameOutputState *)0x0,0);
    if (4 < (byte)LogMovieRenderPipelineIO._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO)
      ;
    }
    pUVar11 = local_6d8;
    local_158.CurPos = local_158.Base;
    iVar38 = *(int *)(lVar6 + 0x18 + lVar22 * 0x28);
    lVar28 = *(longlong *)(lVar6 + 0x10 + lVar22 * 0x28);
    lVar31 = (longlong)iVar38 * 0x10 + lVar28;
    while( true ) {
      if (*(int *)(lVar6 + 0x18 + lVar22 * 0x28) != iVar38) {
        local_717 = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_717);
      }
      if (lVar28 == lVar31) break;
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_158,L"file \'file:%s\'%s");
      if (*(int *)(lVar6 + 8 + lVar22 * 0x28) == 0) {
        pwVar27 = L"";
      }
      else {
        pwVar27 = *(wchar_t **)(lVar6 + lVar22 * 0x28);
      }
      iVar16 = FGenericPlatformStricmp::Stricmp(pwVar27,L"wav");
      if ((iVar16 != 0) && (pUVar11->bWriteEachFrameDuration != false)) {
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_158,L"duration %f%s");
      }
      lVar28 = lVar28 + 0x10;
    }
    pIVar23 = IFileManager::Get();
    pFVar36 = local_5b8;
    FVar32.Data = (FScriptContainerElement *)L"";
    if (local_6e8.Data.ArrayNum != 0) {
      FVar32.Data = local_6e8.Data.AllocatorInstance.Data;
    }
    if (local_158.End <
        (TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
         *)(local_158.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_158,1);
    }
    iVar38 = 0;
    *local_158.CurPos = L'\0';
    local_4e8 = local_158.Base;
    if (local_158.Base != (wchar_t *)0x0) {
      sVar24 = wcslen(local_158.Base);
      iVar38 = (int)sVar24;
    }
    local_3c8._12_4_ = uStack_4dc;
    local_3c8.Size = iVar38;
    local_3c8.DataPtr = local_4e8;
    iStack_4e0 = iVar38;
    FFileHelper::SaveStringToFile(&local_3c8,(wchar_t *)FVar32.Data,AutoDetect,pIVar23,0);
    if (*(int *)(lVar6 + 8 + lVar22 * 0x28) == 0) {
      pwVar27 = L"";
    }
    else {
      pwVar27 = *(wchar_t **)(lVar6 + lVar22 * 0x28);
    }
    iVar38 = FGenericPlatformStricmp::Stricmp(pwVar27,L"wav");
    if (iVar38 == 0) {
      if ((local_700.Data <= (FScriptContainerElement *)&local_6e8) &&
         ((FScriptContainerElement *)&local_6e8 < local_700.Data + (longlong)local_6f8._4_4_ * 0x10)
         ) {
        in_stack_fffffffffffff8c0 = (ulonglong)(int)local_6f8;
        in_stack_fffffffffffff8b0.Data = local_700.Data;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      iVar38 = (int)local_6f8;
      if ((int)local_6f8 == local_6f8._4_4_) {
        iVar38 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_700,(int *)((longlong)&local_6f8 + 4));
      }
      local_6f8 = CONCAT44(local_6f8._4_4_,iVar38 + 1);
      ::FString::FString((FString *)(local_700.Data + (longlong)iVar38 * 0x10),&local_6e8);
    }
    else {
      if ((local_710.Data <= (FScriptContainerElement *)&local_6e8) &&
         ((FScriptContainerElement *)&local_6e8 < local_710.Data + (longlong)local_708._4_4_ * 0x10)
         ) {
        in_stack_fffffffffffff8c0 = (ulonglong)(int)local_708;
        in_stack_fffffffffffff8b0.Data = local_710.Data;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      iVar38 = (int)local_708;
      if ((int)local_708 == local_708._4_4_) {
        iVar38 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_710,(int *)((longlong)&local_708 + 4));
      }
      FVar32.Data = local_6e8.Data.AllocatorInstance.Data;
      pFVar29 = local_710.Data + (longlong)iVar38 * 0x10;
      local_708 = CONCAT44(local_708._4_4_,iVar38 + 1);
      *(FScriptContainerElement **)pFVar29 = (FScriptContainerElement *)0x0;
      lVar22 = (longlong)local_6e8.Data.ArrayNum;
      *(int *)(pFVar29 + 8) = local_6e8.Data.ArrayNum;
      if (local_6e8.Data.ArrayNum == 0) {
        *(int *)(pFVar29 + 0xc) = 0;
      }
      else {
        in_stack_fffffffffffff8b0.Data =
             (FScriptContainerElement *)
             CONCAT44((int)((ulonglong)in_stack_fffffffffffff8b0.Data >> 0x20),
                      local_6e8.Data.ArrayNum);
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_6e8.Data.ArrayNum,0,(ForAnyElementType *)pFVar29,
                   local_6e8.Data.ArrayNum,(int *)(pFVar29 + 0xc));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar29,FVar32.Data,lVar22 * 2);
      }
    }
    local_2a8.HashSize = 0;
    if (local_2a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_2a8.Elements);
    if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
    }
    local_170 = 0;
    if (local_178 != (void *)0x0) {
      FMemory::Free(local_178);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_1b8);
    local_1c0 = 0;
    if (local_1c8 != (void *)0x0) {
      FMemory::Free(local_1c8);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_208);
    if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
    }
    TStack_520.UnvisitedBitMask = TStack_520.UnvisitedBitMask & ~TStack_520._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_520);
    this = local_6d8;
  }
  pUVar25 = UMoviePipelineCommandLineEncoderSettings::StaticClass();
  if ((pUVar25->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar25);
  }
  this_01 = local_618;
  pUVar7 = (pUVar25->ClassDefaultObject).field0_0x0.DebugPtr;
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
  ::
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
            ((TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)&local_b8,&local_618->NamedArguments);
  iVar38 = (int)local_708;
  uVar26 = (ulonglong)(int)local_708;
  pFVar29 = local_710.Data + uVar26 * 0x10;
  local_658.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_658.Data.ArrayNum = 0;
  local_658.Data.ArrayMax = 0;
  local_668.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_668.Data.ArrayNum = 0;
  local_668.Data.ArrayMax = 0;
  FVar32.Data = local_710.Data;
  while( true ) {
    if ((int)uVar26 != iVar38) {
      local_716 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_716)
      ;
    }
    iVar16 = 0;
    if (FVar32.Data == pFVar29) break;
    local_2f8._0_8_ = (FScriptContainerElement *)0x0;
    local_2f8._8_8_ = 0;
    local_2e8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_2e8.NumBits = 0;
    local_2e8.MaxBits = 0x80;
    local_2c8 = 0xffffffff;
    local_2c4 = 0;
    local_2b8 = (ForElementType<FSetElementId>)0x0;
    local_2b0 = 0;
    if (*(int *)(FVar32.Data + 8) == 0) {
      pwVar27 = L"";
    }
    else {
      pwVar27 = *(wchar_t **)FVar32.Data;
    }
    FStringFormatArg::FStringFormatArg(&local_398,pwVar27);
    ::FString::FString(&local_4b8,L"InputFile");
    local_4c8 = &local_4b8;
    local_4c0 = &local_398;
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
              ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                *)local_2f8,&local_530,(bool *)&local_4c8);
    if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
    }
    if (local_398.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.StringValue.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_600,L"FrameRate");
    iVar18 = local_600.Data.ArrayNum + -1;
    FVar10.Data = local_600.Data.AllocatorInstance.Data;
    if (local_600.Data.ArrayNum == 0) {
      iVar18 = iVar16;
      FVar10.Data = (FScriptContainerElement *)L"";
    }
    uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar18,(wchar_t *)FVar10.Data);
    iVar18 = TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                         *)this_01,uVar17,&local_600);
    lVar22 = 0;
    if (((iVar18 == -1) ||
        (lVar22 = (longlong)iVar18 * 0x38 + *(longlong *)&this_01->NamedArguments, lVar22 == 0)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x27b,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    ::FString::FString(&local_498,L"FrameRate");
    local_4a8 = &local_498;
    local_4a0 = lVar22 + 0x10;
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_const_&>_>
              ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                *)local_2f8,(TPairInitializer<FString_&&,FStringFormatArg_const_&> *)local_5d0,
               (bool *)&local_4a8);
    if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.Data.AllocatorInstance.Data);
    }
    if (local_600.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_600.Data.AllocatorInstance.Data);
    }
    if (*(int *)(pUVar7 + 4) == 0) {
      pwVar27 = L"";
    }
    else {
      pwVar27 = *(wchar_t **)&pUVar7[3].field_0x20;
    }
    ::FString::FormatImpl
              (&local_488,pwVar27,
               (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                *)local_2f8);
    ::FString::ConcatCF(&local_5a8,L" ",&local_488);
    if (local_5a8.Data.ArrayNum != 0) {
      iVar16 = local_5a8.Data.ArrayNum + -1;
    }
    ::FString::AppendChars(&local_658,(wchar_t *)local_5a8.Data.AllocatorInstance.Data,iVar16);
    if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
    }
    if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Data.AllocatorInstance.Data);
    }
    local_2b0 = 0;
    if (local_2b8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2b8);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_2f8,0,local_2f8._8_4_);
    iVar16 = SUB84(local_2f8._8_8_,4);
    local_2f8._8_8_ = local_2f8._8_8_ & 0xffffffff00000000;
    if (iVar16 != 0) {
      in_stack_fffffffffffff8b0.Data = (FScriptContainerElement *)(local_2f8 + 0xc);
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,(ForAnyElementType *)local_2f8,0,(int *)in_stack_fffffffffffff8b0.Data);
    }
    local_2c8 = 0xffffffff;
    local_2c4 = 0;
    local_2e8.NumBits = 0;
    if (0x80 < (uint)local_2e8.MaxBits) {
      local_2e8.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_2f8 + 0x10),0);
    }
    if (local_2e8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_2e8.AllocatorInstance.SecondaryData);
    }
    if ((FScriptContainerElement *)local_2f8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_2f8._0_8_);
    }
    uVar26 = local_708 & 0xffffffff;
    FVar32.Data = FVar32.Data + 0x10;
  }
  iVar38 = (int)local_6f8;
  uVar26 = (ulonglong)(int)local_6f8;
  pFVar29 = local_700.Data + uVar26 * 0x10;
  FVar32.Data = local_700.Data;
  while( true ) {
    if ((int)uVar26 != iVar38) {
      local_715 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_715)
      ;
    }
    FVar10.Data = local_658.Data.AllocatorInstance.Data;
    if (FVar32.Data == pFVar29) break;
    local_258.Elements._0_8_ = 0;
    local_258.Elements._8_8_ = 0;
    local_258.Elements._32_8_ = 0;
    local_258.Elements._40_4_ = 0;
    local_258.Elements._44_4_ = 0x80;
    local_258.Elements._48_4_ = 0xffffffff;
    local_258.Elements._52_4_ = 0;
    local_258.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_258.HashSize = 0;
    if (*(int *)(FVar32.Data + 8) == 0) {
      pwVar27 = L"";
    }
    else {
      pwVar27 = *(wchar_t **)FVar32.Data;
    }
    FStringFormatArg::FStringFormatArg(&local_378,pwVar27);
    ::FString::FString(&local_468,L"InputFile");
    local_478 = &local_468;
    local_470 = &local_378;
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
              (&local_258,(TPairInitializer<FString_&&,FStringFormatArg_&&> *)(local_5c8 + 0xc),
               (bool *)&local_478);
    if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_468.Data.AllocatorInstance.Data);
    }
    if (local_378.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.StringValue.Data.AllocatorInstance.Data);
    }
    if (*(int *)&pUVar7[4].field_0x10 == 0) {
      pwVar27 = L"";
    }
    else {
      pwVar27 = *(wchar_t **)&pUVar7[4].field_0x8;
    }
    ::FString::FormatImpl
              (&local_458,pwVar27,
               (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                *)&local_258);
    ::FString::ConcatCF(&local_598,L" ",&local_458);
    iVar18 = iVar16;
    if (local_598.Data.ArrayNum != 0) {
      iVar18 = local_598.Data.ArrayNum + -1;
    }
    ::FString::AppendChars(&local_668,(wchar_t *)local_598.Data.AllocatorInstance.Data,iVar18);
    if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_598.Data.AllocatorInstance.Data);
    }
    if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_458.Data.AllocatorInstance.Data);
    }
    local_258.HashSize = 0;
    if (local_258.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_258.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_258.Elements);
    uVar26 = local_6f8 & 0xffffffff;
    FVar32.Data = FVar32.Data + 0x10;
  }
  lVar22 = (longlong)local_658.Data.ArrayNum;
  local_688.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_688.Data.ArrayNum = local_658.Data.ArrayNum;
  if (local_658.Data.ArrayNum == 0) {
    local_688.Data.ArrayMax = 0;
  }
  else {
    in_stack_fffffffffffff8b0.Data =
         (FScriptContainerElement *)
         CONCAT44((int)((ulonglong)in_stack_fffffffffffff8b0.Data >> 0x20),local_658.Data.ArrayNum);
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_658.Data.ArrayNum,0,(ForAnyElementType *)&local_688,local_658.Data.ArrayNum
               ,&local_688.Data.ArrayMax);
    memcpy(local_688.Data.AllocatorInstance.Data,FVar10.Data,lVar22 * 2);
  }
  FStringFormatArg::FStringFormatArg(&local_358,&local_688);
  ::FString::FString(&local_438,L"VideoInputs");
  local_448 = &local_438;
  local_440 = &local_358;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            (&local_b8,(TPairInitializer<FString_&&,FStringFormatArg_&&> *)(local_5d0 + 4),
             (bool *)&local_448);
  if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.Data.AllocatorInstance.Data);
  }
  if (local_358.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.StringValue.Data.AllocatorInstance.Data);
  }
  FVar32.Data = local_668.Data.AllocatorInstance.Data;
  lVar22 = (longlong)local_668.Data.ArrayNum;
  local_678.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_678.Data.ArrayNum = local_668.Data.ArrayNum;
  if (local_668.Data.ArrayNum == 0) {
    local_678.Data.ArrayMax = 0;
  }
  else {
    in_stack_fffffffffffff8b0.Data =
         (FScriptContainerElement *)
         CONCAT44((int)((ulonglong)in_stack_fffffffffffff8b0.Data >> 0x20),local_668.Data.ArrayNum);
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_668.Data.ArrayNum,0,(ForAnyElementType *)&local_678,local_668.Data.ArrayNum
               ,&local_678.Data.ArrayMax);
    memcpy(local_678.Data.AllocatorInstance.Data,FVar32.Data,lVar22 * 2);
  }
  FStringFormatArg::FStringFormatArg(&local_3b8,&local_678);
  ::FString::FString(&local_418,L"AudioInputs");
  local_428 = &local_418;
  local_420 = &local_3b8;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            (&local_b8,(TPairInitializer<FString_&&,FStringFormatArg_&&> *)local_5c8,
             (bool *)&local_428);
  if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_418.Data.AllocatorInstance.Data);
  }
  if (local_3b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.StringValue.Data.AllocatorInstance.Data);
  }
  if (*(int *)&pUVar7[3].field_0x18 == 0) {
    pwVar27 = L"";
  }
  else {
    pwVar27 = *(wchar_t **)&pUVar7[3].field_0x10;
  }
  ::FString::FormatImpl
            (&local_630,pwVar27,
             (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)&local_b8);
  if (4 < (byte)LogMovieRenderPipelineIO._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO);
  }
  local_648 = (void *)0x0;
  local_6d0 = (void *)0x0;
  bVar14 = FWindowsPlatformProcess::CreatePipe(&local_648,&local_6d0,false);
  if ((!bVar14) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("FPlatformProcess::CreatePipe(PipeRead, PipeWrite)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineCommandLineEncoder.cpp"
                          ,0x146,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  ::FString::FormatImpl(&local_578,L"{Executable}",&this_01->NamedArguments);
  uVar33 = 0x6c;
  if (local_630.Data.ArrayNum != 0) {
    uVar33 = (char)local_630.Data.AllocatorInstance.Data;
  }
  FVar32.Data = (FScriptContainerElement *)L"";
  if (local_578.Data.ArrayNum != 0) {
    FVar32.Data = local_578.Data.AllocatorInstance.Data;
  }
  FWindowsPlatformProcess::CreateProc
            ((wchar_t *)&local_638,(wchar_t *)FVar32.Data,(bool)uVar33,false,true,
             (uint *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffff8b0.Data >> 8),1),0,
             (wchar_t *)(in_stack_fffffffffffff8c0 & 0xffffffff00000000),(void *)0x0,local_6d0);
  pUVar11 = local_6d8;
  if (local_638 == 0) {
    if (1 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    pUVar19 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)local_6d8);
    (**(code **)(pUVar19->_padding_ + 0x2b8))(pUVar19,1);
    goto LAB_14dd35a3b;
  }
  iVar38 = (local_6d8->ActiveEncodeJobs).ArrayNum;
  piVar2 = &(local_6d8->ActiveEncodeJobs).ArrayMax;
  if (iVar38 == *piVar2) {
    iVar38 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&(local_6d8->ActiveEncodeJobs).AllocatorInstance,piVar2);
  }
  (pUVar11->ActiveEncodeJobs).ArrayNum = iVar38 + 1;
  pFVar29 = (pUVar11->ActiveEncodeJobs).AllocatorInstance.Data + (longlong)iVar38 * 0x28;
  DefaultConstructItems<UMoviePipelineCommandLineEncoder::FActiveJob,int>(pFVar29,1);
  *(longlong *)pFVar29 = local_638;
  bVar14 = true;
  *(void **)(pFVar29 + 8) = local_648;
  *(void **)(pFVar29 + 0x10) = local_6d0;
  pUVar19 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)pUVar11);
  this_00 = (((pUVar19->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr;
  local_5b0 = UMoviePipelineDebugSettings::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_5b0 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_5b0);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_5b0 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_5b0);
  }
  UMoviePipelineConfigBase::FindSettingsByClass
            ((UMoviePipelineConfigBase *)this_00,&local_588,
             (TSubclassOf<UMoviePipelineSetting>)&local_5b0,false,false);
  if (local_588.ArrayNum < 1) {
    if (local_588.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_588.AllocatorInstance.Data);
    }
LAB_14dd3566c:
    pFVar3 = pFVar29 + 0x18;
    if ((pFVar3 == (FScriptContainerElement *)&local_710) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar38 = (int)local_708;
    if ((int)local_708 != 0) {
      iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,(int)local_708,(ForAnyElementType *)pFVar3,(int *)(pFVar29 + 0x20),
                          (int *)(pFVar29 + 0x24));
      ConstructItems<FString,FString,int>
                (*(FScriptContainerElement **)&pFVar3->field_0x0 + (longlong)iVar16 * 0x10,
                 (FString *)local_710.Data,iVar38);
    }
    if ((pFVar3 == (FScriptContainerElement *)&local_700) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar38 = (int)local_6f8;
    if ((int)local_6f8 != 0) {
      iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,(int)local_6f8,(ForAnyElementType *)pFVar3,(int *)(pFVar29 + 0x20),
                          (int *)(pFVar29 + 0x24));
      ConstructItems<FString,FString,int>
                (*(FScriptContainerElement **)&pFVar3->field_0x0 + (longlong)iVar16 * 0x10,
                 (FString *)local_700.Data,iVar38);
    }
  }
  else {
    lVar22 = *(longlong *)local_588.AllocatorInstance.Data;
    FMemory::Free(local_588.AllocatorInstance.Data);
    if (lVar22 == 0) goto LAB_14dd3566c;
    pUVar25 = UMoviePipelineDebugSettings::StaticClass();
    iVar38 = (int)pUVar25->_padding_;
    if (((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x38) < iVar38) ||
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) + (longlong)iVar38 * 8)
         != &pUVar25->_padding_)) ||
       (bVar14 = *(char *)(lVar22 + 0x48) == '\0', *(char *)(lVar22 + 0x48) == '\0'))
    goto LAB_14dd3566c;
  }
  if ((pUVar11->bDeleteSourceFiles != false) && (bVar14)) {
    pTVar37 = &this_01->FilesByExtensionType;
    iStack_558 = 0;
    iVar38 = *(int *)&(this_01->FilesByExtensionType).field_0x28;
    TStack_6c0.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(this_01->FilesByExtensionType).field_0x10;
    local_540 = 0;
    iStack_544 = 0;
    if (iVar38 != 0) {
      puVar35 = *(uint **)&(this_01->FilesByExtensionType).field_0x20;
      if (puVar35 == (uint *)0x0) {
        puVar35 = (uint *)TStack_6c0.Array;
      }
      uVar17 = *puVar35;
      while (uVar17 == 0) {
        iStack_558 = iStack_558 + 1;
        local_540 = local_540 + 0x20;
        iStack_544 = iVar38;
        if ((int)(iVar38 + -1 + (iVar38 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_558)
        goto LAB_14dd357f2;
        uVar17 = puVar35[iStack_558];
      }
      local_620 = CONCAT44(local_620._4_4_,-uVar17 & uVar17);
      uVar26 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar22 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      local_5c8._4_4_ = (undefined4)lVar22;
      iStack_544 = local_5c8._4_4_ + -1 + local_540;
      if (iVar38 < iStack_544) {
        iStack_544 = iVar38;
      }
    }
LAB_14dd357f2:
    uVar17 = *(uint *)&(this_01->FilesByExtensionType).field_0x28;
    puVar1 = &(this_01->FilesByExtensionType).field_0x10;
    uStack_554 = (undefined4)local_620;
    uStack_53c = local_2fc;
    uVar30 = uVar17 & 0xffffffe0;
    iStack_538 = *(int *)&(this_01->FilesByExtensionType).field_0x8 -
                 *(int *)&(this_01->FilesByExtensionType).field_0x34;
    uStack_548 = 0xffffffff;
    local_6f0 = -1 << ((byte)uVar17 & 0x1f);
    TStack_6c0._padding_ = CONCAT44(uStack_554,iStack_558);
    TStack_6c0.CurrentBitIndex = iStack_544;
    TStack_6c0.UnvisitedBitMask = 0xffffffff;
    iVar38 = (int)uVar17 >> 5;
    TStack_6c0._28_4_ = local_2fc;
    TStack_6c0.BaseBitIndex = local_540;
    local_6a0 = CONCAT44(uStack_534,iStack_538);
    local_6c8 = pTVar37;
    local_568.Value = (FString *)pTVar37;
    local_550 = (undefined1 *)TStack_6c0.Array;
    if ((((int)uVar17 < 0) || (*(int *)&(this_01->FilesByExtensionType).field_0x28 < (int)uVar17))
       && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar5 = *(uint *)&(this_01->FilesByExtensionType).field_0x28;
    if (uVar17 != uVar5) {
      puVar8 = *(undefined1 **)&(this_01->FilesByExtensionType).field_0x20;
      puVar34 = puVar1;
      if (puVar8 != (undefined1 *)0x0) {
        puVar34 = puVar8;
      }
      uVar17 = local_6f0 & *(uint *)(puVar34 + (longlong)iVar38 * 4);
      while (uVar17 == 0) {
        iVar38 = iVar38 + 1;
        uVar30 = uVar30 + 0x20;
        uVar17 = uVar5;
        if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar38)
        goto LAB_14dd35931;
        uVar17 = *(uint *)(puVar34 + (longlong)iVar38 * 4);
      }
      uVar26 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar22 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      local_5c8._8_4_ = (undefined4)lVar22;
      uVar17 = local_5c8._8_4_ + -1 + uVar30;
      if ((int)uVar5 < (int)uVar17) {
        uVar17 = uVar5;
      }
    }
LAB_14dd35931:
    while( true ) {
      pTVar12 = local_6c8;
      if (*(int *)&local_6c8->field_0x8 - *(int *)&local_6c8->field_0x34 != (int)local_6a0) {
        local_714[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_714);
      }
      if (((TStack_6c0.CurrentBitIndex == uVar17) &&
          (TStack_6c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar12 == pTVar37)) break;
      pFVar4 = pFVar29 + 0x18;
      pFVar3 = (FScriptContainerElement *)
               (*(longlong *)pTVar12 + ((longlong)TStack_6c0.CurrentBitIndex * 5 + 2) * 8);
      if ((pFVar4 == pFVar3) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar38 = *(int *)&pFVar3[8].field_0x0;
      if (iVar38 != 0) {
        iVar16 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,iVar38,(ForAnyElementType *)pFVar4,(int *)(pFVar29 + 0x20),
                            (int *)(pFVar29 + 0x24));
        ConstructItems<FString,FString,int>
                  (*(FScriptContainerElement **)&pFVar4->field_0x0 + (longlong)iVar16 * 0x10,
                   (FString *)*(FScriptContainerElement **)&pFVar3->field_0x0,iVar38);
      }
      TStack_6c0.UnvisitedBitMask = TStack_6c0.UnvisitedBitMask & ~TStack_6c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_6c0);
    }
  }
LAB_14dd35a3b:
  if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_578.Data.AllocatorInstance.Data);
  }
  if (local_630.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_630.Data.AllocatorInstance.Data);
  }
  if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_668.Data.AllocatorInstance.Data);
  }
  if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_658.Data.AllocatorInstance.Data);
  }
  local_b8.HashSize = 0;
  if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_b8.Elements);
  DestructItems<FString,int>((FString *)local_700.Data,(int)local_6f8);
  if (local_700.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_700.Data);
  }
  DestructItems<FString,int>((FString *)local_710.Data,(int)local_708);
  if (local_710.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_710.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
  return;
}

// NeedsPerShotFlushing @ 14dd371b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
UMoviePipelineCommandLineEncoder::NeedsPerShotFlushing(UMoviePipelineCommandLineEncoder *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UMoviePipeline *pUVar4;
  UMoviePipelineOutputSetting *pUVar5;
  int iVar6;
  bool bVar7;
  FString *pFVar8;
  longlong lVar9;
  uint uVar10;
  FString local_28;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  pUVar4 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar5 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                     ((UMoviePipelineConfigBase *)
                      (((pUVar4->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.
                      DebugPtr,false);
  iVar3 = (this->FileNameFormatOverride).Data.ArrayNum;
  local_18.Data = (FScriptContainerElement *)0x0;
  iVar6 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar6 = 0;
  }
  pFVar8 = &this->FileNameFormatOverride;
  if (iVar6 < 1) {
    pFVar8 = &pUVar5->FileNameFormat;
  }
  local_10 = (pFVar8->Data).ArrayNum;
  lVar9 = (longlong)local_10;
  pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,pFVar2,lVar9 * 2);
  }
  iVar3 = local_10 + -1;
  if (local_10 == 0) {
    iVar3 = 0;
  }
  if (((pUVar5->OutputDirectory).Path.Data.ArrayNum != 0) || (iVar6 = 2, iVar3 == -1)) {
    iVar6 = 1;
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pUVar5->OutputDirectory).Path.Data.ArrayNum;
  pFVar2 = (pUVar5->OutputDirectory).Path.Data.AllocatorInstance.Data;
  local_28.Data.ArrayNum = iVar1;
  if ((iVar1 == 0) && (iVar3 + iVar6 == 0)) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    uVar10 = iVar1 + iVar3 + iVar6;
    if ((int)uVar10 < iVar1) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar10,0,(ForAnyElementType *)&local_28,iVar1,&local_28.Data.ArrayMax);
    if (iVar1 != 0) {
      memcpy(local_28.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar1 * 2);
    }
  }
  ::FString::PathAppend(&local_28,(wchar_t *)local_18.Data,iVar3);
  iVar3 = ::FString::Find(&local_28,L"{shot_name}",0xb,IgnoreCase,FromStart,-1);
  if (iVar3 == -1) {
    iVar3 = ::FString::Find(&local_28,L"{camera_name}",0xd,IgnoreCase,FromStart,-1);
    if (iVar3 == -1) {
      bVar7 = false;
      goto LAB_14dd37363;
    }
  }
  bVar7 = true;
LAB_14dd37363:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return bVar7;
}

// OnTick @ 14dd3a0d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMoviePipelineCommandLineEncoder::OnTick(UMoviePipelineCommandLineEncoder *this)

{
  TArray<UMoviePipelineCommandLineEncoder::FActiveJob,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UMoviePipeline *pUVar9;
  IFileManager *pIVar10;
  wchar_t *pwVar11;
  FProcHandle FVar12;
  FScriptContainerElement *_Dst;
  FProcHandle FVar13;
  int *piVar14;
  longlong lVar15;
  FProcHandle *pFVar16;
  uint uVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  uint local_res18;
  int *local_res20;
  int *in_stack_ffffffffffffff88;
  FString local_60 [2];
  
  uVar18 = (this->ActiveEncodeJobs).ArrayNum - 1;
  if (-1 < (int)uVar18) {
    piVar14 = (int *)(longlong)(int)uVar18;
    pTVar1 = &this->ActiveEncodeJobs;
    lVar15 = (longlong)piVar14 * 0x28;
    do {
      local_res18 = ~uVar18;
      uVar17 = local_res18 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar18 < (this->ActiveEncodeJobs).ArrayNum) {
        uVar7 = uVar17;
      }
      local_res20 = piVar14;
      if ((uVar7 == 0) &&
         (in_stack_ffffffffffffff88 = piVar14,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar16 = (FProcHandle *)((pTVar1->AllocatorInstance).Data + lVar15);
      FWindowsPlatformProcess::ReadPipe(local_60,(void *)pFVar16[1]);
      iVar8 = (int)local_60[0].Data._8_8_ + -1;
      if ((int)local_60[0].Data._8_8_ == 0) {
        iVar8 = 0;
      }
      if ((0 < iVar8) && (1 < (byte)LogMovieRenderPipeline._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
      bVar4 = false;
      if (this->bSkipEncodeOnRenderCanceled != false) {
        pUVar9 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
        cVar5 = (**(code **)(pUVar9->_padding_ + 0x2c0))(pUVar9);
        if (cVar5 != '\0') {
          bVar4 = true;
          FWindowsPlatformProcess::TerminateProc(pFVar16,true);
          FWindowsPlatformProcess::WaitForProc(pFVar16);
        }
      }
      bVar6 = FWindowsPlatformProcess::IsProcRunning(pFVar16);
      if ((!bVar6) || (bVar4)) {
        FWindowsPlatformProcess::ClosePipe((void *)pFVar16[1],(void *)pFVar16[2]);
        FWindowsPlatformProcess::CloseProc(pFVar16);
        pIVar10 = IFileManager::Get();
        iVar8 = *(int *)(pFVar16 + 4);
        FVar12 = pFVar16[3];
        FVar13 = (FProcHandle)((longlong)iVar8 * 0x10 + (longlong)FVar12);
        while( true ) {
          if (*(int *)(pFVar16 + 4) != iVar8) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res10);
          }
          piVar14 = local_res20;
          if (FVar12 == FVar13) break;
          if (*(int *)((longlong)FVar12 + 8) == 0) {
            pwVar11 = L"";
          }
          else {
            pwVar11 = *(wchar_t **)FVar12;
          }
          in_stack_ffffffffffffff88 =
               (int *)((ulonglong)in_stack_ffffffffffffff88 & 0xffffffffffffff00);
          (**(code **)((longlong)*pIVar10 + 0x38))(pIVar10,pwVar11,0,0,in_stack_ffffffffffffff88);
          FVar12 = (FProcHandle)((longlong)FVar12 + 0x10);
        }
        uVar7 = 0;
        if ((int)uVar18 < (this->ActiveEncodeJobs).ArrayNum) {
          uVar7 = uVar17;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        _Dst = (pTVar1->AllocatorInstance).Data + lVar15;
        DestructItems<FString,int>(*(FString **)(_Dst + 0x18),*(int *)(_Dst + 0x20));
        if (*(void **)(_Dst + 0x18) != (void *)0x0) {
          FMemory::Free(*(void **)(_Dst + 0x18));
        }
        iVar8 = local_res18 + (this->ActiveEncodeJobs).ArrayNum;
        if (iVar8 != 0) {
          memmove(_Dst,_Dst + 0x28,(longlong)iVar8 * 0x28);
        }
        piVar2 = &(this->ActiveEncodeJobs).ArrayNum;
        *piVar2 = *piVar2 + -1;
        in_stack_ffffffffffffff88 = &(this->ActiveEncodeJobs).ArrayMax;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,&pTVar1->AllocatorInstance,(this->ActiveEncodeJobs).ArrayNum,
                   in_stack_ffffffffffffff88);
      }
      if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
      }
      piVar14 = (int *)((longlong)piVar14 + -1);
      lVar15 = lVar15 + -0x28;
      uVar18 = uVar18 - 1;
    } while (-1 < (int)uVar18);
  }
  return;
}

// SetupForPipelineImpl @ 14dd41970

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineCommandLineEncoder::SetupForPipelineImpl
          (UMoviePipelineCommandLineEncoder *this,UMoviePipeline *param_1)

{
  bool bVar1;
  
  if (param_1 != (UMoviePipeline *)0x0) {
    bVar1 = NeedsPerShotFlushing(this);
    if (bVar1) {
      param_1->bFlushDiskWritesPerShot = true;
    }
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UMoviePipelineCommandLineEncoder>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnEndFrame,(UMoviePipelineCommandLineEncoder *)&stack0x00000010,
             (pmf_e0a05668)this);
  return;
}

// StartEncodingProcess @ 14dd42e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineCommandLineEncoder::StartEncodingProcess
          (UMoviePipelineCommandLineEncoder *this,
          TArray<FMoviePipelineShotOutputData,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  undefined1 *puVar1;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  int *piVar2;
  FWeakObjectPtr *this_01;
  EMoviePipelineEncodeQuality EVar3;
  UMoviePipelinePrimaryConfig *this_02;
  UMoviePipelineExecutorJob *pUVar4;
  code *pcVar5;
  wchar_t *pwVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FStringFormatArg *pFVar9;
  longlong *plVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  UMoviePipelineCommandLineEncoderSettings *pUVar17;
  UMoviePipeline *pUVar18;
  UMoviePipelineOutputSetting *pUVar19;
  FString *pFVar20;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar21;
  FEncoderParams *pFVar22;
  UObject *pUVar23;
  UMoviePipelineExecutorShot *pUVar24;
  FPlatformFileManager *this_03;
  IPlatformFile *pIVar25;
  FMoviePipelineRenderPassOutputData *pFVar26;
  ulonglong uVar27;
  longlong lVar28;
  ForAnyElementType FVar29;
  FScriptContainerElement *pFVar30;
  uint uVar31;
  FEncoderParams *pFVar32;
  FText *pFVar33;
  FScriptContainerElement *pFVar34;
  TArray<FMoviePipelineShotOutputData,TSizedDefaultAllocator<32>_> *pTVar35;
  int iVar36;
  ForElementType<unsigned_int> FVar37;
  TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
  *pTVar38;
  undefined8 *puVar39;
  FScriptContainerElement *pFVar40;
  FString *pFVar41;
  ForElementType<unsigned_int> FVar42;
  undefined1 auStackY_b28 [32];
  undefined1 local_ad8;
  undefined1 local_ad7;
  undefined1 local_ad6;
  undefined1 local_ad5;
  undefined1 local_ad4;
  undefined1 local_ad3;
  undefined1 local_ad2;
  undefined1 local_ad1;
  FString local_ad0;
  uint local_ac0;
  TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
  *local_ab8;
  undefined8 uStack_ab0;
  TObjectPtr<UMovieScene>_u_0 TStack_aa8;
  uint uStack_aa0;
  uint uStack_a9c;
  uint uStack_a98;
  undefined4 uStack_a94;
  int local_a90;
  undefined4 uStack_a8c;
  TArray<FMoviePipelineShotOutputData,TSizedDefaultAllocator<32>_> *local_a88;
  ForAnyElementType local_a80;
  int local_a78;
  int local_a74;
  ForAnyElementType local_a70;
  int local_a68;
  int local_a64;
  TArray<FText,TSizedDefaultAllocator<32>_> local_a60;
  FMoviePipelinePassIdentifier local_a50;
  int local_a30;
  int local_a2c;
  uint local_a28;
  FString local_a20;
  FEncoderParams *local_a10;
  FString local_a08;
  TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
  *local_9f8;
  FEncoderParams *local_9f0;
  FString local_9e8;
  undefined1 local_9d8 [24];
  FString local_9c0;
  UMoviePipelineCommandLineEncoder *local_9b0;
  ForElementType<unsigned_int> local_9a8;
  FString local_9a0;
  FEncoderParams *local_990;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_988;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_968;
  undefined1 local_948 [8];
  undefined1 local_940 [8];
  TPairInitializer<FString_&&,FStringFormatArg_&&> local_938;
  UMoviePipelineCommandLineEncoderSettings *local_928;
  FString *local_920;
  undefined8 *local_918;
  FString local_910;
  FString local_900;
  FString local_8f0;
  FString local_8e0;
  FString local_8d0;
  undefined1 local_8c0 [24];
  FString local_8a8;
  FString local_898;
  TPairInitializer<FString_&&,FStringFormatArg_&&> local_888;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_878;
  undefined8 uStack_858;
  longlong *local_850;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_848;
  undefined8 uStack_828;
  TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
  *local_820;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_818;
  undefined8 uStack_7f8;
  FMoviePipelinePassIdentifier local_7f0;
  FString *local_7d0;
  FStringFormatArg *local_7c8;
  FString local_7c0;
  FString local_7b0;
  FString local_7a0;
  FString local_790;
  FString local_780;
  FString local_770;
  FString local_760;
  FString local_750;
  FString *local_740;
  FStringFormatArg *local_738;
  FString local_730;
  FString local_720;
  FString *local_710;
  FStringFormatArg *local_708;
  FString local_700;
  FString *local_6f0;
  FStringFormatArg *local_6e8;
  FString local_6e0;
  FString *local_6d0;
  FStringFormatArg *local_6c8;
  FString local_6c0;
  FString *local_6b0;
  FStringFormatArg *local_6a8;
  FString local_6a0;
  FString *local_690;
  FStringFormatArg *local_688;
  FString local_680;
  FString local_670;
  longlong *local_660;
  longlong lStack_658;
  ForElementType<unsigned_int> local_650;
  undefined8 uStack_648;
  int iStack_644;
  undefined8 local_640;
  undefined8 uStack_638;
  TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
  *local_630;
  longlong lStack_628;
  ForElementType<unsigned_int> local_620;
  undefined8 uStack_618;
  int iStack_614;
  undefined8 local_610;
  undefined8 uStack_608;
  FMoviePipelineFilenameResolveParams local_600;
  FStringFormatArg local_4e0;
  FStringFormatArg local_4c0;
  FStringFormatArg local_4a0;
  FStringFormatArg local_480;
  FStringFormatArg local_460;
  FStringFormatArg local_440;
  FMoviePipelinePassIdentifier local_420;
  FMoviePipelinePassIdentifier local_400;
  FStringFormatArg local_3e0;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_380;
  undefined4 local_344;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_340;
  undefined1 local_318 [32];
  undefined8 local_2f8;
  int local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  int local_2e4;
  ForElementType<FSetElementId> local_2d8;
  int local_2d0;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  local_2c8;
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  local_278;
  undefined8 local_228;
  undefined8 uStack_220;
  FString local_218;
  FString local_208;
  int local_1f8;
  undefined1 local_1f4;
  FString local_1f0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_1e0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_190;
  long64 local_140;
  long64 local_138;
  int local_130;
  UMoviePipelineExecutorJob *local_128;
  int local_120;
  UMoviePipelineExecutorShot *local_118;
  int local_110;
  undefined1 local_108 [64];
  void *local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [64];
  void *local_78;
  undefined4 local_70;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_b28;
  local_a88 = param_1;
  local_9b0 = this;
  if ((param_2) && (bVar11 = NeedsPerShotFlushing(this), !bVar11)) {
    return;
  }
  pUVar17 = GetDefault<UMoviePipelineCommandLineEncoderSettings>();
  local_928 = pUVar17;
  UE::MoviePipeline::GetErrorTexts(&local_a60);
  iVar36 = local_a60.ArrayNum;
  pFVar33 = (FText *)(local_a60.AllocatorInstance.Data + (longlong)local_a60.ArrayNum * 0x10);
  FVar29.Data = local_a60.AllocatorInstance.Data;
  iVar14 = local_a60.ArrayNum;
  while( true ) {
    if (iVar14 != iVar36) {
      local_ad8 = 0;
      `TCheckedPointerIterator<FText,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_ad8);
      iVar14 = local_a60.ArrayNum;
    }
    if ((FText *)FVar29.Data == pFVar33) break;
    if (1 < (byte)LogMovieRenderPipelineIO._0_1_) {
      FText::ToString((FText *)FVar29.Data);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO)
      ;
      iVar14 = local_a60.ArrayNum;
    }
    FVar29.Data = FVar29.Data + 0x10;
  }
  if (0 < iVar14) {
    pUVar18 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    (**(code **)(pUVar18->_padding_ + 0x2b0))(pUVar18,1);
    DestructItems<FText,int>((FText *)local_a60.AllocatorInstance.Data,local_a60.ArrayNum);
    goto LAB_14dd44bce;
  }
  DestructItems<FText,int>((FText *)local_a60.AllocatorInstance.Data,iVar14);
  if ((FText *)local_a60.AllocatorInstance.Data != (FText *)0x0) {
    FMemory::Free(local_a60.AllocatorInstance.Data);
  }
  pUVar18 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  pUVar19 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                      ((UMoviePipelineConfigBase *)
                       (((pUVar18->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.
                       DebugPtr,false);
  iVar36 = (this->FileNameFormatOverride).Data.ArrayNum;
  iVar14 = iVar36 + -1;
  if (iVar36 == 0) {
    iVar14 = 0;
  }
  pFVar20 = &this->FileNameFormatOverride;
  if (iVar14 < 1) {
    pFVar20 = &pUVar19->FileNameFormat;
  }
  ::FString::FString(&local_720,pFVar20);
  ::operator/(&local_a20,&(pUVar19->OutputDirectory).Path,&local_720);
  pTVar35 = local_a88;
  bVar11 = UE::MoviePipeline::HasMultipleRenderPasses(local_a88);
  UE::MoviePipeline::ValidateOutputFormatString(&local_a20,bVar11,false,false);
  UE::MoviePipeline::RemoveFrameNumberFormatStrings(&local_a20,true);
  local_318._0_8_ = 0;
  local_318._8_8_ = 0;
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 0x80;
  local_2e8 = 0xffffffff;
  local_2e4 = 0;
  local_2d8 = (ForElementType<FSetElementId>)0x0;
  local_2d0 = 0;
  ::FString::Replace(&pUVar17->ExecutablePath,&local_8e0,L"\"",L"",IgnoreCase);
  FPaths::NormalizeFilename(&local_8e0);
  local_2c8.Elements._0_8_ = 0;
  local_2c8.Elements._8_8_ = 0;
  local_2c8.Elements._32_8_ = 0;
  local_2c8.Elements._40_4_ = 0;
  local_2c8.Elements._44_4_ = 0x80;
  local_2c8.Elements._48_4_ = 0xffffffff;
  local_2c8.Elements._52_4_ = 0;
  local_2c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_2c8.HashSize = 0;
  pFVar20 = ::FString::FString(&local_3c0,&local_8e0);
  FStringFormatArg::FStringFormatArg(&local_4e0,pFVar20);
  ::FString::FString(&local_700,L"Executable");
  local_710 = &local_700;
  local_708 = &local_4e0;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            (&local_2c8,(TPairInitializer<FString_&&,FStringFormatArg_&&> *)local_8c0,
             (bool *)&local_710);
  if (local_700.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_700.Data.AllocatorInstance.Data);
  }
  if (local_4e0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e0.StringValue.Data.AllocatorInstance.Data);
  }
  pFVar20 = ::FString::FString(&local_3b0,&pUVar17->AudioCodec);
  FStringFormatArg::FStringFormatArg(&local_4c0,pFVar20);
  ::FString::FString(&local_6e0,L"AudioCodec");
  local_6f0 = &local_6e0;
  local_6e8 = &local_4c0;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            (&local_2c8,(TPairInitializer<FString_&&,FStringFormatArg_&&> *)local_948,
             (bool *)&local_6f0);
  if (local_6e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e0.Data.AllocatorInstance.Data);
  }
  if (local_4c0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c0.StringValue.Data.AllocatorInstance.Data);
  }
  pFVar20 = ::FString::FString(&local_3a0,&pUVar17->VideoCodec);
  FStringFormatArg::FStringFormatArg(&local_4a0,pFVar20);
  ::FString::FString(&local_6c0,L"VideoCodec");
  local_6d0 = &local_6c0;
  local_6c8 = &local_4a0;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            (&local_2c8,(TPairInitializer<FString_&&,FStringFormatArg_&&> *)(local_948 + 4),
             (bool *)&local_6d0);
  if (local_6c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6c0.Data.AllocatorInstance.Data);
  }
  if (local_4a0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a0.StringValue.Data.AllocatorInstance.Data);
  }
  pUVar18 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  this_02 = (((pUVar18->CurrentJob).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr;
  UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
  UMoviePipelinePrimaryConfig::GetEffectiveFrameRate(this_02,(ULevelSequence *)local_9d8);
  FStringFormatArg::FStringFormatArg
            (&local_480,(double)(int)local_9d8._0_4_ / (double)(int)local_9d8._4_4_);
  ::FString::FString(&local_6a0,L"FrameRate");
  local_6b0 = &local_6a0;
  local_6a8 = &local_480;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            (&local_2c8,(TPairInitializer<FString_&&,FStringFormatArg_&&> *)local_940,
             (bool *)&local_6b0);
  if (local_6a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6a0.Data.AllocatorInstance.Data);
  }
  if (local_480.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_480.StringValue.Data.AllocatorInstance.Data);
  }
  pFVar20 = ::FString::FString(&local_390,&this->AdditionalCommandLineArgs);
  FStringFormatArg::FStringFormatArg(&local_460,pFVar20);
  ::FString::FString(&local_680,L"AdditionalLocalArgs");
  local_690 = &local_680;
  local_688 = &local_460;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            (&local_2c8,(TPairInitializer<FString_&&,FStringFormatArg_&&> *)(local_940 + 4),
             (bool *)&local_690);
  if (local_680.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_680.Data.AllocatorInstance.Data);
  }
  if (local_460.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_460.StringValue.Data.AllocatorInstance.Data);
  }
  pUVar17 = GetDefault<UMoviePipelineCommandLineEncoderSettings>();
  EVar3 = this->Quality;
  if (EVar3 == Low) {
    pFVar20 = &pUVar17->EncodeSettings_Low;
LAB_14dd433e4:
    ::FString::FString(&local_a08,pFVar20);
  }
  else {
    if (EVar3 == Medium) {
      pFVar20 = &pUVar17->EncodeSettings_Med;
      goto LAB_14dd433e4;
    }
    if (EVar3 == High) {
      pFVar20 = &pUVar17->EncodeSettings_High;
      goto LAB_14dd433e4;
    }
    if (EVar3 == Epic) {
      pFVar20 = &pUVar17->EncodeSettings_Epic;
      goto LAB_14dd433e4;
    }
    local_a08.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a08.Data.ArrayNum = 0;
    local_a08.Data.ArrayMax = 0;
  }
  FStringFormatArg::FStringFormatArg(&local_440,&local_a08);
  ::FString::FString(&local_7c0,L"Quality");
  local_7d0 = &local_7c0;
  local_7c8 = &local_440;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            (&local_2c8,&local_938,(bool *)&local_7d0);
  if (local_7c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7c0.Data.AllocatorInstance.Data);
  }
  if (local_440.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_440.StringValue.Data.AllocatorInstance.Data);
  }
  local_a28 = pTVar35->ArrayNum;
  uVar27 = (ulonglong)(int)local_a28;
  pFVar32 = (FEncoderParams *)(pTVar35->AllocatorInstance).Data;
  local_a10 = (FEncoderParams *)((longlong)&pFVar32->NamedArguments + uVar27 * 0x58);
  while( true ) {
    pFVar22 = local_a10;
    local_9f0 = pFVar32;
    if (pTVar35->ArrayNum != (int)uVar27) {
      local_ad7 = 0;
      `TCheckedPointerIterator<FMoviePipelineShotOutputData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_ad7);
    }
    if (pFVar32 == pFVar22) break;
    puVar1 = &(pFVar32->NamedArguments).field_0x18;
    pTVar38 = (TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
               *)&(pFVar32->NamedArguments).field_0x8;
    local_988._padding_._0_4_ = 0;
    local_988._padding_._4_4_ = 1;
    local_988.UnvisitedBitMask = 0xffffffff;
    local_988.CurrentBitIndex = 0;
    local_988.BaseBitIndex = 0;
    local_9f8 = pTVar38;
    local_9a8 = (ForElementType<unsigned_int>)puVar1;
    local_988.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if (*(int *)&(pFVar32->NamedArguments).field_0x30 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_988);
    }
    uStack_ab0 = CONCAT44(local_988._padding_._4_4_,(undefined4)local_988._padding_);
    uStack_a9c = local_988.CurrentBitIndex;
    uStack_aa0 = local_988.UnvisitedBitMask;
    uStack_a94 = local_988._28_4_;
    uStack_a98 = local_988.BaseBitIndex;
    local_a90 = *(int *)&(pFVar32->NamedArguments).field_0x10 -
                *(int *)&(pFVar32->NamedArguments).field_0x3c;
    TStack_aa8 = (TObjectPtr<UMovieScene>_u_0)local_988.Array;
    uStack_828 = CONCAT44(uStack_a8c,local_a90);
    TStack_848.Array = local_988.Array;
    local_ab8 = pTVar38;
    local_850 = (longlong *)pTVar38;
    TStack_848._padding_ = uStack_ab0;
    TStack_848._16_8_ = _uStack_aa0;
    TStack_848._24_8_ = _uStack_a98;
    pTVar21 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_380,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                         *(int *)&(pFVar32->NamedArguments).field_0x30);
    uStack_ab0 = pTVar21->_padding_;
    TStack_aa8 = (TObjectPtr<UMovieScene>_u_0)pTVar21->Array;
    uStack_aa0 = pTVar21->UnvisitedBitMask;
    uStack_a9c = pTVar21->CurrentBitIndex;
    uStack_a98 = pTVar21->BaseBitIndex;
    uStack_a94 = *(undefined4 *)&pTVar21->field_0x1c;
    local_a90 = *(int *)&(pFVar32->NamedArguments).field_0x10 -
                *(int *)&(pFVar32->NamedArguments).field_0x3c;
    uStack_638 = CONCAT44(uStack_a8c,local_a90);
    local_ab8 = pTVar38;
    local_660 = (longlong *)pTVar38;
    lStack_658 = uStack_ab0;
    local_650 = (ForElementType<unsigned_int>)TStack_aa8;
    uStack_648 = _uStack_aa0;
    local_640 = _uStack_a98;
    while( true ) {
      plVar10 = local_850;
      if ((int)local_850[1] - *(int *)((longlong)local_850 + 0x34) != (int)uStack_828) {
        local_ad6 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_ad6);
      }
      this = local_9b0;
      if (((TStack_848.CurrentBitIndex == iStack_644) &&
          ((ForElementType<unsigned_int>)TStack_848.Array == local_650)) && (plVar10 == local_660))
      break;
      pFVar20 = (FString *)((longlong)TStack_848.CurrentBitIndex * 0x38 + *plVar10);
      ::FString::FString(&local_7a0,L"camera");
      ::FString::FString(&local_7b0,L"Audio");
      ::FString::FString(&local_8a8,&local_7b0);
      ::FString::FString(&local_898,&local_7a0);
      iVar36 = (pFVar20->Data).ArrayNum;
      if (iVar36 == local_8a8.Data.ArrayNum) {
        if (1 < iVar36) {
          iVar36 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)(pFVar20->Data).AllocatorInstance.Data,
                              (wchar_t *)local_8a8.Data.AllocatorInstance.Data);
          bVar11 = iVar36 == 0;
          goto LAB_14dd43661;
        }
LAB_14dd43668:
        iVar36 = pFVar20[1].Data.ArrayNum;
        if (iVar36 == local_898.Data.ArrayNum) {
          if (1 < iVar36) {
            iVar36 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)pFVar20[1].Data.AllocatorInstance.Data,
                                (wchar_t *)local_898.Data.AllocatorInstance.Data);
            bVar11 = iVar36 == 0;
            goto LAB_14dd43697;
          }
        }
        else {
          bVar11 = iVar36 + local_898.Data.ArrayNum == 1;
LAB_14dd43697:
          if (!bVar11) goto LAB_14dd4369e;
        }
        bVar11 = true;
      }
      else {
        bVar11 = iVar36 + local_8a8.Data.ArrayNum == 1;
LAB_14dd43661:
        if (bVar11) goto LAB_14dd43668;
LAB_14dd4369e:
        bVar11 = false;
      }
      if (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_898.Data.AllocatorInstance.Data);
      }
      if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
      }
      if (local_7b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7b0.Data.AllocatorInstance.Data);
      }
      if (local_7a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7a0.Data.AllocatorInstance.Data);
      }
      pTVar38 = local_9f8;
      if (!bVar11) {
        ::FString::FString(&local_790,L"camera");
        ::FString::FString(&local_7f0.Name,pFVar20);
        ::FString::FString(&local_7f0.CameraName,&local_790);
        ::FString::FString(&local_420.Name,&local_7f0.Name);
        ::FString::FString(&local_420.CameraName,&local_7f0.CameraName);
        uVar13 = ::GetTypeHash(&local_420);
        pFVar22 = TMapBase<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams,0>_>
                  ::FindOrAddImpl<FMoviePipelinePassIdentifier>
                            ((TMapBase<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams,0>_>
                              *)local_318,uVar13,&local_7f0);
        local_990 = pFVar22;
        if (local_7f0.CameraName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7f0.CameraName.Data.AllocatorInstance.Data);
        }
        if (local_7f0.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7f0.Name.Data.AllocatorInstance.Data);
        }
        if (local_790.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_790.Data.AllocatorInstance.Data);
        }
        (pFVar22->Shot).WeakPtr = *(FWeakObjectPtr *)&pFVar32->NamedArguments;
        iVar36 = pFVar20[2].Data.ArrayNum;
        pFVar34 = pFVar20[2].Data.AllocatorInstance.Data;
        pFVar40 = pFVar34 + (longlong)iVar36 * 0x10;
        while( true ) {
          if (pFVar20[2].Data.ArrayNum != iVar36) {
            local_ad5 = 0;
            `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_ad5);
          }
          FVar42 = local_9a8;
          pTVar38 = local_9f8;
          if (pFVar34 == pFVar40) break;
          FPaths::GetExtension((FString *)(local_9d8 + 8),(FString *)pFVar34,false);
          this_00 = &pFVar22->FilesByExtensionType;
          iVar14 = (int)local_9d8._16_8_ + -1;
          pwVar6 = (wchar_t *)local_9d8._8_8_;
          if ((int)local_9d8._16_8_ == 0) {
            iVar14 = 0;
            pwVar6 = L"";
          }
          uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar6);
          iVar14 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<FString>
                             ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                               *)this_00,uVar13,(FString *)(local_9d8 + 8));
          if ((iVar14 == -1) ||
             (lVar28 = *(longlong *)&this_00->field_0x0 + (longlong)iVar14 * 0x28, lVar28 == 0)) {
            local_918 = (undefined8 *)(local_9d8 + 8);
            TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                      ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)this_00,(uint)&local_a30,
                       (TKeyInitializer<FString_const_&> *)(ulonglong)uVar13,(bool *)&local_918);
            lVar28 = *(longlong *)&this_00->field_0x0 + (longlong)local_a30 * 0x28;
          }
          if (((*(FScriptContainerElement **)(lVar28 + 0x10) <= pFVar34) &&
              (pFVar34 < *(FScriptContainerElement **)(lVar28 + 0x10) +
                         (longlong)*(int *)(lVar28 + 0x1c) * 0x10)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar14 = *(int *)(lVar28 + 0x18);
          if (iVar14 == *(int *)(lVar28 + 0x1c)) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,(ForAnyElementType *)(lVar28 + 0x10),(int *)(lVar28 + 0x1c));
          }
          *(int *)(lVar28 + 0x18) = iVar14 + 1;
          ::FString::FString((FString *)((longlong)iVar14 * 0x10 + *(longlong *)(lVar28 + 0x10)),
                             (FString *)pFVar34);
          if ((wchar_t *)local_9d8._8_8_ != (wchar_t *)0x0) {
            FMemory::Free((void *)local_9d8._8_8_);
          }
          pFVar34 = pFVar34 + 0x10;
          pFVar22 = local_990;
        }
        uStack_a98 = 0;
        iVar36 = 0;
        uVar15 = 1;
        uVar13 = *(int *)((longlong)local_9a8 + 0x18);
        uStack_a9c = uStack_a98;
        if (uVar13 != 0) {
          FVar37 = local_9a8;
          if (*(ForElementType<unsigned_int> *)((longlong)local_9a8 + 0x10) !=
              (ForElementType<unsigned_int>)0x0) {
            FVar37 = *(ForElementType<unsigned_int> *)((longlong)local_9a8 + 0x10);
          }
          uVar16 = *(uint *)FVar37;
          uStack_a98 = 0;
          while (uVar16 == 0) {
            lVar28 = (longlong)iVar36;
            uStack_a98 = uStack_a98 + 0x20;
            iVar36 = iVar36 + 1;
            uStack_a9c = uVar13;
            if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar36)
            goto LAB_14dd439c0;
            uVar16 = ((uint *)((longlong)FVar37 + 4))[lVar28];
          }
          uVar15 = -uVar16 & uVar16;
          uVar27 = (ulonglong)uVar15 * 2 + 1;
          lVar28 = 0x3f;
          if (uVar27 != 0) {
            for (; uVar27 >> lVar28 == 0; lVar28 = lVar28 + -1) {
            }
          }
          local_938.Key._4_4_ = (int)lVar28;
          uStack_a9c = local_938.Key._4_4_ + -1 + uStack_a98;
          if ((int)uVar13 < (int)uStack_a9c) {
            uStack_a9c = uVar13;
          }
        }
LAB_14dd439c0:
        uVar16 = *(uint *)&(local_9f0->NamedArguments).field_0x30;
        local_a90 = *(int *)&(local_9f0->NamedArguments).field_0x10 -
                    *(int *)&(local_9f0->NamedArguments).field_0x3c;
        uVar31 = uVar16 & 0xffffffe0;
        local_ab8 = local_9f8;
        uStack_ab0 = CONCAT44(uVar15,iVar36);
        TStack_aa8 = (TObjectPtr<UMovieScene>_u_0)local_9a8;
        uStack_aa0 = 0xffffffff;
        uStack_a94 = local_344;
        local_888.Value = (FStringFormatArg *)local_9f8;
        TStack_878._padding_ = uStack_ab0;
        iVar36 = (int)uVar16 >> 5;
        uStack_858 = CONCAT44(uStack_a8c,local_a90);
        TStack_878.BaseBitIndex = uStack_a98;
        TStack_878._28_4_ = local_344;
        TStack_878.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_9a8;
        TStack_878.UnvisitedBitMask = 0xffffffff;
        TStack_878.CurrentBitIndex = uStack_a9c;
        local_ac0 = uVar16;
        if ((((int)uVar16 < 0) || ((int)uVar13 < (int)uVar16)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar13 = *(uint *)((longlong)FVar42 + 0x18);
        if (uVar16 != uVar13) {
          FVar37 = FVar42;
          if (*(ForElementType<unsigned_int> *)((longlong)FVar42 + 0x10) !=
              (ForElementType<unsigned_int>)0x0) {
            FVar37 = *(ForElementType<unsigned_int> *)((longlong)FVar42 + 0x10);
          }
          uVar15 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)((longlong)FVar37 + (longlong)iVar36 * 4);
          while (uVar15 == 0) {
            lVar28 = (longlong)iVar36;
            uVar31 = uVar31 + 0x20;
            iVar36 = iVar36 + 1;
            uVar16 = uVar13;
            local_ac0 = uVar13;
            if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar36)
            goto LAB_14dd43af0;
            uVar15 = ((uint *)((longlong)FVar37 + 4))[lVar28];
          }
          uVar27 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
          lVar28 = 0x3f;
          if (uVar27 != 0) {
            for (; uVar27 >> lVar28 == 0; lVar28 = lVar28 + -1) {
            }
          }
          local_938.Value._0_4_ = (int)lVar28;
          uVar16 = (uVar31 - 1) + (int)local_938.Value;
          local_ac0 = uVar16;
          if ((int)uVar13 < (int)uVar16) {
            uVar16 = uVar13;
            local_ac0 = uVar13;
          }
        }
LAB_14dd43af0:
        do {
          pFVar9 = local_888.Value;
          if (*(int *)&((TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)&(local_888.Value)->Type)->field_0x8 -
              *(int *)&((TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)&(local_888.Value)->Type)->field_0x34 != (int)uStack_858) {
            local_ad4 = 0;
            `TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_ad4);
          }
          if (((TStack_878.CurrentBitIndex == uVar16) &&
              ((ForElementType<unsigned_int>)TStack_878.Array == FVar42)) &&
             (pFVar32 = local_9f0,
             (TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
              *)pFVar9 == pTVar38)) break;
          puVar39 = (undefined8 *)
                    ((longlong)TStack_878.CurrentBitIndex * 0x38 + *(longlong *)&pFVar9->Type);
          ::FString::FString((FString *)(local_8c0 + 8),L"camera");
          ::FString::FString(&local_8d0,L"Audio");
          FVar29.Data = local_8d0.Data.AllocatorInstance.Data;
          local_a80.Data = (FScriptContainerElement *)0x0;
          iVar36 = local_8d0.Data.ArrayNum;
          local_a78 = iVar36;
          if (iVar36 == 0) {
            local_a74 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar36,0,&local_a80,iVar36,&local_a74);
            memcpy(local_a80.Data,FVar29.Data,(longlong)iVar36 * 2);
          }
          uVar7 = local_8c0._8_8_;
          local_a70.Data = (FScriptContainerElement *)0x0;
          iVar36 = (int)local_8c0._16_8_;
          local_a68 = iVar36;
          if (iVar36 == 0) {
            local_a64 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar36,0,&local_a70,iVar36,&local_a64);
            memcpy(local_a70.Data,(void *)uVar7,(longlong)iVar36 * 2);
          }
          iVar36 = *(int *)(puVar39 + 1);
          if (iVar36 == local_a78) {
            if (1 < iVar36) {
              iVar36 = FGenericPlatformStricmp::Stricmp
                                 ((wchar_t *)*puVar39,(wchar_t *)local_a80.Data);
              bVar11 = iVar36 == 0;
              goto LAB_14dd43c4c;
            }
LAB_14dd43c53:
            iVar36 = *(int *)(puVar39 + 3);
            if (iVar36 == local_a68) {
              if (1 < iVar36) {
                iVar36 = FGenericPlatformStricmp::Stricmp
                                   ((wchar_t *)puVar39[2],(wchar_t *)local_a70.Data);
                bVar11 = iVar36 == 0;
                goto LAB_14dd43c7b;
              }
            }
            else {
              bVar11 = iVar36 + local_a68 == 1;
LAB_14dd43c7b:
              if (!bVar11) goto LAB_14dd43c82;
            }
            bVar11 = true;
          }
          else {
            bVar11 = iVar36 + local_a78 == 1;
LAB_14dd43c4c:
            if (bVar11) goto LAB_14dd43c53;
LAB_14dd43c82:
            bVar11 = false;
          }
          if (local_a70.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a70.Data);
          }
          if (local_a80.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a80.Data);
          }
          if (local_8d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8d0.Data.AllocatorInstance.Data);
          }
          if ((FStringFormatArg *)local_8c0._8_8_ != (FStringFormatArg *)0x0) {
            FMemory::Free((void *)local_8c0._8_8_);
          }
          if (bVar11) {
            iVar36 = *(int *)(puVar39 + 5);
            pFVar20 = (FString *)puVar39[4];
            pFVar41 = pFVar20 + iVar36;
            while( true ) {
              if (*(int *)(puVar39 + 5) != iVar36) {
                local_ad3 = 0;
                `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_ad3);
              }
              FVar42 = local_9a8;
              uVar16 = local_ac0;
              if (pFVar20 == pFVar41) break;
              FPaths::GetExtension(&local_9c0,pFVar20,false);
              pFVar32 = local_990;
              iVar14 = local_9c0.Data.ArrayNum + -1;
              FVar29.Data = local_9c0.Data.AllocatorInstance.Data;
              if (local_9c0.Data.ArrayNum == 0) {
                iVar14 = 0;
                FVar29.Data = (FScriptContainerElement *)L"";
              }
              uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,(wchar_t *)FVar29.Data);
              iVar14 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                       ::FindIndexByHash<FString>
                                 ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                   *)&pFVar32->FilesByExtensionType,uVar13,&local_9c0);
              if ((iVar14 == -1) ||
                 (lVar28 = *(longlong *)&pFVar32->FilesByExtensionType + (longlong)iVar14 * 0x28,
                 lVar28 == 0)) {
                local_920 = &local_9c0;
                TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                          ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                            *)&pFVar32->FilesByExtensionType,(uint)&local_a2c,
                           (TKeyInitializer<FString_const_&> *)(ulonglong)uVar13,(bool *)&local_920)
                ;
                lVar28 = *(longlong *)&pFVar32->FilesByExtensionType + (longlong)local_a2c * 0x28;
              }
              if (((*(FString **)(lVar28 + 0x10) <= pFVar20) &&
                  (pFVar20 < *(FString **)(lVar28 + 0x10) + *(int *)(lVar28 + 0x1c))) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar14 = *(int *)(lVar28 + 0x18);
              if (iVar14 == *(int *)(lVar28 + 0x1c)) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,(ForAnyElementType *)(lVar28 + 0x10),
                                    (int *)(lVar28 + 0x1c));
              }
              *(int *)(lVar28 + 0x18) = iVar14 + 1;
              ::FString::FString((FString *)((longlong)iVar14 * 0x10 + *(longlong *)(lVar28 + 0x10))
                                 ,pFVar20);
              if (local_9c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_9c0.Data.AllocatorInstance.Data);
              }
              pFVar20 = pFVar20 + 1;
            }
          }
          TStack_878.UnvisitedBitMask = TStack_878.UnvisitedBitMask & ~TStack_878._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_878);
          pTVar38 = local_9f8;
        } while( true );
      }
      TStack_848.UnvisitedBitMask = TStack_848.UnvisitedBitMask & ~TStack_848._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_848);
    }
    if (local_9b0->bDeleteSourceFiles != false) {
      TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
      ::Reset(pTVar38);
    }
    pFVar32 = (FEncoderParams *)&(pFVar32->FilesByExtensionType).field_0x8;
    uVar27 = (ulonglong)local_a28;
    pTVar35 = local_a88;
  }
  local_968.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_318 + 0x10);
  local_968._padding_._0_4_ = 0;
  local_968._padding_._4_4_ = 1;
  local_968.UnvisitedBitMask = 0xffffffff;
  local_968.CurrentBitIndex = 0;
  local_968.BaseBitIndex = 0;
  if (local_2f0 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_968);
  }
  uStack_ab0 = CONCAT44(local_968._padding_._4_4_,(undefined4)local_968._padding_);
  local_ab8 = (TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
               *)local_318;
  uStack_a9c = local_968.CurrentBitIndex;
  uStack_aa0 = local_968.UnvisitedBitMask;
  uStack_a94 = local_968._28_4_;
  uStack_a98 = local_968.BaseBitIndex;
  local_a90 = local_318._8_4_ - local_2e4;
  TStack_aa8.DebugPtr = (UMovieScene *)local_968.Array;
  uStack_7f8 = CONCAT44(uStack_a8c,local_a90);
  TStack_818.Array = local_968.Array;
  local_820 = local_ab8;
  TStack_818._padding_ = uStack_ab0;
  TStack_818._16_8_ = _uStack_aa0;
  TStack_818._24_8_ = _uStack_a98;
  pTVar21 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_340,(TBitArray<FDefaultBitArrayAllocator> *)(local_318 + 0x10),
                       local_2f0);
  uVar8 = _UNK_150631d98;
  uVar7 = ___xmm_00000000ffffffff0000008000000000;
  local_ab8 = (TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
               *)local_318;
  uStack_ab0 = pTVar21->_padding_;
  TStack_aa8 = (TObjectPtr<UMovieScene>_u_0)pTVar21->Array;
  uStack_aa0 = pTVar21->UnvisitedBitMask;
  uStack_a9c = pTVar21->CurrentBitIndex;
  uStack_a98 = pTVar21->BaseBitIndex;
  uStack_a94 = *(undefined4 *)&pTVar21->field_0x1c;
  local_a90 = local_318._8_4_ - local_2e4;
  uStack_608 = CONCAT44(uStack_a8c,local_a90);
  local_630 = local_ab8;
  lStack_628 = uStack_ab0;
  local_620 = (ForElementType<unsigned_int>)TStack_aa8;
  uStack_618 = _uStack_aa0;
  local_610 = _uStack_a98;
  while( true ) {
    pTVar38 = local_820;
    if (*(int *)&(local_820->Elements).field_0x8 - *(int *)&(local_820->Elements).field_0x34 !=
        (int)uStack_7f8) {
      local_ad2 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_ad2);
    }
    if (((TStack_818.CurrentBitIndex == iStack_614) &&
        ((ForElementType<unsigned_int>)TStack_818.Array == local_620)) && (pTVar38 == local_630))
    break;
    pFVar20 = (FString *)
              (*(longlong *)&pTVar38->Elements + (longlong)TStack_818.CurrentBitIndex * 0xd0);
    local_a10 = (FEncoderParams *)(pFVar20 + 2);
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                 *)local_a10,&local_2c8);
    local_278.Pairs.Elements._44_4_ = 0x80;
    local_278.Pairs.Elements._0_8_ = 0;
    local_278.Pairs.Elements._8_8_ = 0;
    local_278.Pairs.Elements._32_8_ = 0;
    local_278.Pairs.Elements._40_4_ = 0;
    local_278.Pairs.Elements._52_4_ = 0;
    local_278.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_278.Pairs.HashSize = 0;
    local_278.Pairs.Elements._48_4_ = 0xffffffff;
    ::FString::FString(&local_780,L"render_pass");
    TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
    Emplace<FString,FString_const_&>(&local_278,&local_780,pFVar20);
    if (local_780.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_780.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_770,L"ext");
    TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
    Emplace<FString,FString_const_&>(&local_278,&local_770,&local_928->OutputFileExtension);
    if (local_770.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_770.Data.AllocatorInstance.Data);
    }
    this_01 = (FWeakObjectPtr *)(pFVar20 + 0xc);
    pUVar23 = FWeakObjectPtr::Get(this_01);
    if (pUVar23 != (UObject *)0x0) {
      ::FString::FString(&local_760,L"shot_name");
      TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
      ::Emplace<FString,FString_const_&>(&local_278,&local_760,(FString *)&pUVar23[1].field_0x8);
      if (local_760.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_760.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_750,L"camera_name");
      TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
      ::Emplace<FString,FString_const_&>(&local_278,&local_750,(FString *)&pUVar23[1].field_0x18);
      if (local_750.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_750.Data.AllocatorInstance.Data);
      }
    }
    local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228 = 0;
    uStack_220 = 0;
    local_218.Data.ArrayNum = 0;
    local_218.Data.ArrayMax = 0;
    local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.Data.ArrayNum = 0;
    local_208.Data.ArrayMax = 0;
    local_1f8 = 0;
    local_1f4 = 0;
    local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0.Data.ArrayNum = 0;
    local_1f0.Data.ArrayMax = 0;
    local_1e0.Elements._0_8_ = 0;
    local_1e0.Elements._8_8_ = 0;
    local_1e0.Elements._32_8_ = 0;
    local_1e0.Elements._40_8_ = uVar7;
    local_1e0.Elements._48_8_ = uVar8;
    local_1e0.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_1e0.HashSize = 0;
    local_190.Elements._0_8_ = 0;
    local_190.Elements._8_8_ = 0;
    local_190.Elements._32_8_ = 0;
    local_190.Elements._40_8_ = uVar7;
    local_190.Elements._48_8_ = uVar8;
    local_190.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_190.HashSize = 0;
    local_140 = 0;
    local_138 = 0;
    local_130 = 0;
    local_128 = (UMoviePipelineExecutorJob *)0x0;
    local_120 = -1;
    local_118 = (UMoviePipelineExecutorShot *)0x0;
    local_110 = 0;
    pUVar18 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    local_140 = (pUVar18->InitializationTime).Ticks;
    pUVar18 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    local_138 = (pUVar18->InitializationTimeOffset).Ticks;
    pUVar18 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    pUVar4 = (pUVar18->CurrentJob).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UMoviePipelineExecutorJob *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    local_128 = pUVar4;
    pUVar24 = (UMoviePipelineExecutorShot *)FWeakObjectPtr::Get(this_01);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar24 != (UMoviePipelineExecutorShot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar24);
    }
    iVar36 = local_a20.Data.ArrayNum + -1;
    if (local_a20.Data.ArrayNum == 0) {
      iVar36 = 0;
    }
    local_118 = pUVar24;
    ::FString::AssignRange(&local_1f0,(wchar_t *)local_a20.Data.AllocatorInstance.Data,iVar36);
    local_600.FrameNumber = (int)local_228;
    local_600.FrameNumberShot = local_228._4_4_;
    local_600.FrameNumberRel = (int)uStack_220;
    local_600.FrameNumberShotRel = uStack_220._4_4_;
    ::FString::FString(&local_600.CameraNameOverride,&local_218);
    ::FString::FString(&local_600.ShotNameOverride,&local_208);
    local_600.ZeroPadFrameNumberCount = local_1f8;
    local_600.bForceRelativeFrameNumbers = (bool)local_1f4;
    ::FString::FString(&local_600.FileNameOverride,&local_1f0);
    local_600.FileNameFormatOverrides._0_8_ = 0;
    local_600.FileNameFormatOverrides._8_8_ = 0;
    local_600.FileNameFormatOverrides._32_8_ = 0;
    local_600.FileNameFormatOverrides._40_8_ = uVar7;
    local_600.FileNameFormatOverrides._48_8_ = uVar8;
    local_600.FileNameFormatOverrides._64_8_ = 0;
    local_600.FileNameFormatOverrides._72_4_ = 0;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)&local_600.FileNameFormatOverrides,&local_1e0);
    local_600.FileMetadata._0_8_ = 0;
    local_600.FileMetadata._8_8_ = 0;
    local_600.FileMetadata._32_8_ = 0;
    local_600.FileMetadata._40_8_ = uVar7;
    local_600.FileMetadata._48_8_ = uVar8;
    local_600.FileMetadata._64_8_ = 0;
    local_600.FileMetadata._72_4_ = 0;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)&local_600.FileMetadata,&local_190);
    local_600.InitializationTime.Ticks = local_140;
    local_600.InitializationTimeOffset.Ticks = local_138;
    local_600.InitializationVersion = local_130;
    local_600.Job.field0_0x0.DebugPtr = (TObjectPtr<UMoviePipelineExecutorJob>_u_0)local_128;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_128 != (UMoviePipelineExecutorJob *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_128);
    }
    local_600.ShotOverride.field0_0x0.DebugPtr =
         (TObjectPtr<UMoviePipelineExecutorShot>_u_0)local_118;
    local_600.CameraIndex = local_120;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_118 != (UMoviePipelineExecutorShot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_118);
    }
    local_600.AdditionalFrameNumberOffset = local_110;
    UMoviePipelineBlueprintLibrary::ResolveVersionNumber(&local_600,true);
    ::FString::PrintfImpl(&local_910,L"v%0*d");
    FVar29.Data = (FScriptContainerElement *)L"";
    if (local_910.Data.ArrayNum != 0) {
      FVar29.Data = local_910.Data.AllocatorInstance.Data;
    }
    ::FString::ReplaceInline(&local_a20,L"{version}",(wchar_t *)FVar29.Data,IgnoreCase);
    if (local_910.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_910.Data.AllocatorInstance.Data);
    }
    local_190.HashSize = 0;
    if (local_190.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_190.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_190.Elements);
    local_1e0.HashSize = 0;
    if (local_1e0.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1e0.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1e0.Elements);
    if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
    }
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    local_108._0_8_ = 0;
    local_108._8_8_ = 0;
    local_108._32_8_ = 0;
    local_108._40_4_ = 0;
    local_108._44_4_ = 0x80;
    local_108._48_4_ = 0xffffffff;
    local_108._52_4_ = 0;
    local_c8 = (void *)0x0;
    local_c0 = 0;
    local_b8._0_8_ = 0;
    local_b8._8_8_ = 0;
    local_b8._32_8_ = 0;
    local_b8._40_4_ = 0;
    local_b8._44_4_ = 0x80;
    local_b8._48_4_ = 0xffffffff;
    local_b8._52_4_ = 0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_68.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
    local_ad0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_ad0.Data.ArrayNum = 0;
    local_ad0.Data.ArrayMax = 0;
    pUVar18 = UMoviePipelineSetting::GetPipeline((UMoviePipelineSetting *)this);
    UMoviePipeline::ResolveFilenameFormatArguments
              (pUVar18,&local_a20,
               (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)&local_278,&local_ad0,(FMoviePipelineFormatArgs *)local_108,
               (FMoviePipelineFrameOutputState *)0x0,0);
    bVar11 = FPaths::IsRelative(&local_ad0);
    if (bVar11) {
      pFVar20 = FPaths::ConvertRelativePathToFull(&local_670,&local_ad0);
      if (&local_ad0 != pFVar20) {
        if (local_ad0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_ad0.Data.AllocatorInstance.Data);
        }
        local_ad0.Data.AllocatorInstance.Data = (pFVar20->Data).AllocatorInstance.Data;
        (pFVar20->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_ad0.Data.ArrayNum = (pFVar20->Data).ArrayNum;
        local_ad0.Data.ArrayMax = (pFVar20->Data).ArrayMax;
        (pFVar20->Data).ArrayNum = 0;
        (pFVar20->Data).ArrayMax = 0;
      }
      if (local_670.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_670.Data.AllocatorInstance.Data);
      }
    }
    FPaths::NormalizeFilename(&local_ad0);
    FPaths::CollapseRelativeDirectories(&local_ad0,false);
    FPaths::GetPath(&local_9a0,&local_ad0);
    this_03 = FPlatformFileManager::Get();
    pIVar25 = FPlatformFileManager::GetPlatformFile(this_03);
    FVar29.Data = (FScriptContainerElement *)L"";
    if (local_9a0.Data.ArrayNum != 0) {
      FVar29.Data = local_9a0.Data.AllocatorInstance.Data;
    }
    cVar12 = (**(code **)((longlong)*pIVar25 + 0x200))(pIVar25,FVar29.Data);
    if ((cVar12 == '\0') && (1 < (byte)LogMovieRenderPipelineIO._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO)
      ;
    }
    iVar36 = pTVar35->ArrayNum;
    pFVar34 = (pTVar35->AllocatorInstance).Data;
    pFVar40 = pFVar34 + (longlong)iVar36 * 0x58;
    while( true ) {
      if (pTVar35->ArrayNum != iVar36) {
        local_ad1 = 0;
        `TCheckedPointerIterator<FMoviePipelineShotOutputData,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_ad1);
      }
      FVar29.Data = local_ad0.Data.AllocatorInstance.Data;
      if (pFVar34 == pFVar40) break;
      bVar11 = TWeakObjectPtr<UMoviePipelineExecutorShot,FWeakObjectPtr>::
               UEOpEquals<UMoviePipelineExecutorShot,bool>
                         ((TWeakObjectPtr<UMoviePipelineExecutorShot,FWeakObjectPtr> *)pFVar34,
                          (TWeakObjectPtr<UMoviePipelineExecutorShot,FWeakObjectPtr> *)this_01);
      if (bVar11) {
        ::FString::FString(&local_8f0,L"camera");
        ::FString::FString(&local_900,"CommandLineEncoder");
        FVar29.Data = local_900.Data.AllocatorInstance.Data;
        local_a50.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar14 = local_900.Data.ArrayNum;
        local_a50.Name.Data.ArrayNum = iVar14;
        if (iVar14 == 0) {
          local_a50.Name.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar14,0,(ForAnyElementType *)&local_a50,iVar14,
                     &local_a50.Name.Data.ArrayMax);
          memcpy(local_a50.Name.Data.AllocatorInstance.Data,FVar29.Data,(longlong)iVar14 * 2);
        }
        FVar29.Data = local_8f0.Data.AllocatorInstance.Data;
        local_a50.CameraName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar14 = local_8f0.Data.ArrayNum;
        local_a50.CameraName.Data.ArrayNum = iVar14;
        if (iVar14 == 0) {
          local_a50.CameraName.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar14,0,(ForAnyElementType *)&local_a50.CameraName,iVar14,
                     &local_a50.CameraName.Data.ArrayMax);
          memcpy(local_a50.CameraName.Data.AllocatorInstance.Data,FVar29.Data,(longlong)iVar14 * 2);
        }
        ::FString::FString(&local_400.Name,&local_a50.Name);
        ::FString::FString(&local_400.CameraName,&local_a50.CameraName);
        uVar13 = ::GetTypeHash(&local_400);
        pFVar26 = TMapBase<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>_>
                  ::FindOrAddImpl<FMoviePipelinePassIdentifier>
                            ((TMapBase<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>_>
                              *)(pFVar34 + 8),uVar13,&local_a50);
        pFVar30 = (pFVar26->FilePaths).AllocatorInstance.Data;
        if (((pFVar30 <= (FScriptContainerElement *)&local_ad0) &&
            ((FScriptContainerElement *)&local_ad0 <
             pFVar30 + (longlong)(pFVar26->FilePaths).ArrayMax * 0x10)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = (pFVar26->FilePaths).ArrayNum;
        piVar2 = &(pFVar26->FilePaths).ArrayMax;
        if (iVar14 == *piVar2) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)pFVar26,piVar2);
        }
        FVar29.Data = local_ad0.Data.AllocatorInstance.Data;
        (pFVar26->FilePaths).ArrayNum = iVar14 + 1;
        pFVar30 = (pFVar26->FilePaths).AllocatorInstance.Data + (longlong)iVar14 * 0x10;
        *(undefined8 *)&pFVar30->field_0x0 = 0;
        lVar28 = (longlong)local_ad0.Data.ArrayNum;
        *(int *)&pFVar30[8].field_0x0 = local_ad0.Data.ArrayNum;
        if (local_ad0.Data.ArrayNum == 0) {
          *(int *)(pFVar30 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_ad0.Data.ArrayNum,0,(ForAnyElementType *)pFVar30,
                     local_ad0.Data.ArrayNum,(int *)(pFVar30 + 0xc));
          memcpy(*(void **)&pFVar30->field_0x0,FVar29.Data,lVar28 * 2);
        }
        if (local_a50.CameraName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a50.CameraName.Data.AllocatorInstance.Data);
        }
        if (local_a50.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a50.Name.Data.AllocatorInstance.Data);
        }
        if (local_900.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_900.Data.AllocatorInstance.Data);
        }
        pTVar35 = local_a88;
        if (local_8f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8f0.Data.AllocatorInstance.Data);
          pTVar35 = local_a88;
        }
      }
      pFVar34 = pFVar34 + 0x58;
    }
    lVar28 = (longlong)local_ad0.Data.ArrayNum;
    local_9e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_9e8.Data.ArrayNum = local_ad0.Data.ArrayNum;
    if (local_ad0.Data.ArrayNum == 0) {
      local_9e8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_ad0.Data.ArrayNum,0,(ForAnyElementType *)&local_9e8,
                 local_ad0.Data.ArrayNum,&local_9e8.Data.ArrayMax);
      memcpy(local_9e8.Data.AllocatorInstance.Data,FVar29.Data,lVar28 * 2);
    }
    FStringFormatArg::FStringFormatArg(&local_3e0,&local_9e8);
    ::FString::FString(&local_730,L"OutputPath");
    pFVar32 = local_a10;
    local_740 = &local_730;
    local_738 = &local_3e0;
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
              ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                *)local_a10,&local_888,(bool *)&local_740);
    if (local_730.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_730.Data.AllocatorInstance.Data);
    }
    if (local_3e0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e0.StringValue.Data.AllocatorInstance.Data);
    }
    this = local_9b0;
    LaunchEncoder(local_9b0,pFVar32);
    if (local_9a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9a0.Data.AllocatorInstance.Data);
    }
    if (local_ad0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ad0.Data.AllocatorInstance.Data);
    }
    local_70 = 0;
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_b8);
    local_c0 = 0;
    if (local_c8 != (void *)0x0) {
      FMemory::Free(local_c8);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_108);
    local_278.Pairs.HashSize = 0;
    if (local_278.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_278.Pairs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_278);
    TStack_818.UnvisitedBitMask = TStack_818.UnvisitedBitMask & ~TStack_818._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_818);
    pTVar35 = local_a88;
  }
  local_2c8.HashSize = 0;
  if (local_2c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_2c8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_2c8.Elements);
  if (local_8e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8e0.Data.AllocatorInstance.Data);
  }
  local_2d0 = 0;
  if (local_2d8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_2d8);
  }
  TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_318);
  local_a60.AllocatorInstance.Data = local_720.Data.AllocatorInstance.Data;
  if (local_a20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a20.Data.AllocatorInstance.Data);
    local_a60.AllocatorInstance.Data = local_720.Data.AllocatorInstance.Data;
  }
LAB_14dd44bce:
  if ((FText *)local_a60.AllocatorInstance.Data != (FText *)0x0) {
    FMemory::Free(local_a60.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUMoviePipelineCommandLineEncoder @ 14dd455c0

void __cdecl
UMoviePipelineCommandLineEncoder::StaticRegisterNativesUMoviePipelineCommandLineEncoder(void)

{
  return;
}

// ValidateStateImpl @ 14dd4bec0

void __thiscall
UMoviePipelineCommandLineEncoder::ValidateStateImpl(UMoviePipelineCommandLineEncoder *this)

{
  int *piVar1;
  uint *puVar2;
  ITextData *pIVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  ForAnyElementType FVar8;
  FText *pFVar9;
  longlong *plVar10;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  TArray<FText,TSizedDefaultAllocator<32>_> local_38;
  
  UMoviePipelineSetting::ValidateStateImpl((UMoviePipelineSetting *)this);
  UE::MoviePipeline::GetErrorTexts(&local_38);
  iVar5 = local_38.ArrayNum;
  pFVar9 = (FText *)(local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x10);
  FVar8.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar5) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FText,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((FText *)FVar8.Data == pFVar9) break;
    if (((FText *)this->_padding_ <= FVar8.Data) &&
       (FVar8.Data < (FText *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = (int)this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->_padding_,piVar1);
    }
    *(int *)&this->_padding_ = iVar7 + 1;
    plVar10 = (longlong *)(this->_padding_ + (longlong)iVar7 * 0x10);
    *plVar10 = 0;
    pIVar3 = (((FText *)FVar8.Data)->TextData).Reference;
    *plVar10 = (longlong)pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res18);
    }
    puVar2 = &((FText *)FVar8.Data)->Flags;
    FVar8.Data = FVar8.Data + 0x10;
    *(uint *)(plVar10 + 1) = *puVar2;
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  }
  DestructItems<FText,int>((FText *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FText *)local_38.AllocatorInstance.Data != (FText *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

