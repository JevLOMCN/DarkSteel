// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 44

// StaticClass @ 146bd3c30

UClass * __cdecl UMovieSceneCapture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCapture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"MovieSceneCapture",
               &Z_Registration_Info_UClass_UMovieSceneCapture.InnerSingleton,
               StaticRegisterNativesUMovieSceneCapture,0x240,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UMovieSceneCapture>,
               InternalVTableHelperCtorCaller<UMovieSceneCapture>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCapture.InnerSingleton;
}

// UMovieSceneCapture @ 146bd8760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

UMovieSceneCapture * __thiscall
UMovieSceneCapture::UMovieSceneCapture(UMovieSceneCapture *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->ImageCaptureProtocolType = 0;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneCaptureInterface__;
  this->_padding_ = (longlong)&_vftable__for__ICaptureProtocolHost__;
  *(undefined8 *)&(this->ImageCaptureProtocolType).field_0x8 = 0;
  *(undefined8 *)&(this->ImageCaptureProtocolType).field_0x10 = 0;
  *(undefined8 *)&(this->ImageCaptureProtocolType).field_0x18 = 0;
  *(undefined8 *)&this->AudioCaptureProtocolType = 0;
  *(undefined8 *)&(this->AudioCaptureProtocolType).field_0x8 = 0;
  *(undefined8 *)&(this->AudioCaptureProtocolType).field_0x10 = 0;
  *(undefined8 *)&(this->AudioCaptureProtocolType).field_0x18 = 0;
  (this->ImageCaptureProtocol).field0_0x0.DebugPtr = (UMovieSceneImageCaptureProtocolBase *)0x0;
  (this->AudioCaptureProtocol).field0_0x0.DebugPtr = (UMovieSceneAudioCaptureProtocolBase *)0x0;
  FMovieSceneCaptureSettings::FMovieSceneCaptureSettings(&this->Settings);
  (this->AdditionalCommandLineArguments).Data.ArrayNum = 0;
  (this->AdditionalCommandLineArguments).Data.ArrayMax = 0;
  (this->InheritedCommandLineArguments).Data.ArrayNum = 0;
  (this->InheritedCommandLineArguments).Data.ArrayMax = 0;
  (this->InitSettings).bIsSet = false;
  this->Handle = 0;
  (this->CachedMetrics).Width = 0;
  (this->CachedMetrics).Height = 0;
  (this->CachedMetrics).Frame = 0;
  (this->CachedMetrics).ElapsedSeconds = 0.0;
  (this->CachedMetrics).PreviousFrame = -1;
  *(undefined8 *)&(this->FormatMappings).field_0x8 = 0;
  (this->AdditionalCommandLineArguments).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->InheritedCommandLineArguments).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->CaptureStrategy).Object = (ICaptureStrategy *)0x0;
  (this->CaptureStrategy).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->FormatMappings = 0;
  *(undefined8 *)&(this->FormatMappings).field_0x20 = 0;
  *(undefined4 *)&(this->FormatMappings).field_0x28 = 0;
  *(undefined4 *)&(this->FormatMappings).field_0x2c = 0x80;
  *(undefined4 *)&(this->FormatMappings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FormatMappings).field_0x34 = 0;
  *(undefined8 *)&(this->FormatMappings).field_0x40 = 0;
  *(undefined4 *)&(this->FormatMappings).field_0x48 = 0;
  *(undefined8 *)&this->OnCaptureFinishedDelegate = 0;
  *(undefined8 *)&(this->OnCaptureFinishedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnCaptureFinishedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnCaptureFinishedDelegate).field_0x18 = 2;
  (this->CachedQualityLevels).CPUBenchmarkResults = -1.0;
  (this->CachedQualityLevels).GPUBenchmarkResults = -1.0;
  (this->CachedQualityLevels).CPUBenchmarkSteps.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedQualityLevels).CPUBenchmarkSteps.ArrayNum = 0;
  (this->CachedQualityLevels).CPUBenchmarkSteps.ArrayMax = 0;
  (this->CachedQualityLevels).GPUBenchmarkSteps.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedQualityLevels).GPUBenchmarkSteps.ArrayNum = 0;
  (this->CachedQualityLevels).GPUBenchmarkSteps.ArrayMax = 0;
  Scalability::FQualityLevels::SetDefaults(&this->CachedQualityLevels);
  return this;
}

// UMovieSceneCapture @ 146bd88c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

UMovieSceneCapture * __thiscall
UMovieSceneCapture::UMovieSceneCapture(UMovieSceneCapture *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  wchar_t *pwVar4;
  ulonglong uVar5;
  UClass *pUVar6;
  ForAnyElementType FVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  FSoftObjectPath local_68;
  FSoftObjectPath local_48;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  puVar1 = &(this->ImageCaptureProtocolType).field_0x10;
  *(undefined8 *)&this->ImageCaptureProtocolType = 0;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneCaptureInterface__;
  *(undefined8 *)&(this->ImageCaptureProtocolType).field_0x8 = 0;
  this->_padding_ = (longlong)&_vftable__for__ICaptureProtocolHost__;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->ImageCaptureProtocolType).field_0x18 = 0;
  *(undefined8 *)&this->AudioCaptureProtocolType = 0;
  *(undefined8 *)&(this->AudioCaptureProtocolType).field_0x8 = 0;
  *(undefined8 *)&(this->AudioCaptureProtocolType).field_0x10 = 0;
  *(undefined8 *)&(this->AudioCaptureProtocolType).field_0x18 = 0;
  (this->ImageCaptureProtocol).field0_0x0.DebugPtr = (UMovieSceneImageCaptureProtocolBase *)0x0;
  (this->AudioCaptureProtocol).field0_0x0.DebugPtr = (UMovieSceneAudioCaptureProtocolBase *)0x0;
  FMovieSceneCaptureSettings::FMovieSceneCaptureSettings(&this->Settings);
  (this->AdditionalCommandLineArguments).Data.ArrayNum = 0;
  (this->AdditionalCommandLineArguments).Data.ArrayMax = 0;
  (this->InheritedCommandLineArguments).Data.ArrayNum = 0;
  (this->InheritedCommandLineArguments).Data.ArrayMax = 0;
  (this->InitSettings).bIsSet = false;
  this->Handle = 0;
  (this->CachedMetrics).Width = 0;
  (this->CachedMetrics).Height = 0;
  (this->CachedMetrics).Frame = 0;
  (this->CachedMetrics).ElapsedSeconds = 0.0;
  (this->CachedMetrics).PreviousFrame = -1;
  *(undefined8 *)&(this->FormatMappings).field_0x8 = 0;
  (this->AdditionalCommandLineArguments).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->InheritedCommandLineArguments).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->CaptureStrategy).Object = (ICaptureStrategy *)0x0;
  (this->CaptureStrategy).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->FormatMappings = 0;
  *(undefined8 *)&(this->FormatMappings).field_0x20 = 0;
  *(undefined4 *)&(this->FormatMappings).field_0x28 = 0;
  *(undefined4 *)&(this->FormatMappings).field_0x2c = 0x80;
  *(undefined4 *)&(this->FormatMappings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FormatMappings).field_0x34 = 0;
  *(undefined8 *)&(this->FormatMappings).field_0x40 = 0;
  *(undefined4 *)&(this->FormatMappings).field_0x48 = 0;
  *(undefined8 *)&this->OnCaptureFinishedDelegate = 0;
  *(undefined8 *)&(this->OnCaptureFinishedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnCaptureFinishedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnCaptureFinishedDelegate).field_0x18 = 2;
  (this->CachedQualityLevels).CPUBenchmarkResults = -1.0;
  (this->CachedQualityLevels).GPUBenchmarkResults = -1.0;
  (this->CachedQualityLevels).CPUBenchmarkSteps.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedQualityLevels).CPUBenchmarkSteps.ArrayNum = 0;
  (this->CachedQualityLevels).CPUBenchmarkSteps.ArrayMax = 0;
  (this->CachedQualityLevels).GPUBenchmarkSteps.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedQualityLevels).GPUBenchmarkSteps.ArrayNum = 0;
  (this->CachedQualityLevels).GPUBenchmarkSteps.ArrayMax = 0;
  Scalability::FQualityLevels::SetDefaults(&this->CachedQualityLevels);
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  pwVar4 = FCommandLine::Get();
  FCommandLine::Parse(pwVar4,&local_78,&local_88);
  iVar2 = local_88.ArrayNum;
  uVar5 = (ulonglong)local_88.ArrayNum;
  pFVar9 = local_88.AllocatorInstance.Data + uVar5 * 0x10;
  FVar7.Data = local_88.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar5 != iVar2) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (FVar7.Data == pFVar9) break;
    ::FString::AppendChar(&this->InheritedCommandLineArguments,L'-');
    iVar8 = *(int *)(FVar7.Data + 8) + -1;
    if (*(int *)(FVar7.Data + 8) == 0) {
      iVar8 = 0;
    }
    ::FString::AppendChars(&this->InheritedCommandLineArguments,*(wchar_t **)FVar7.Data,iVar8);
    ::FString::AppendChar(&this->InheritedCommandLineArguments,L' ');
    uVar5 = local_88._8_8_ & 0xffffffff;
    FVar7.Data = FVar7.Data + 0x10;
  }
  ::FString::AppendChars(&this->AdditionalCommandLineArguments,L"-NOSCREENMESSAGES",0x11);
  uVar3 = `public:___cdecl_FUniqueMovieSceneCaptureHandle::FUniqueMovieSceneCaptureHandle(void)___ptr64'
          ::__l2::Unique + 1;
  (this->Handle).ID =
       `public:___cdecl_FUniqueMovieSceneCaptureHandle::FUniqueMovieSceneCaptureHandle(void)___ptr64'
       ::__l2::Unique;
  `public:___cdecl_FUniqueMovieSceneCaptureHandle::FUniqueMovieSceneCaptureHandle(void)___ptr64'::
  __l2::Unique = uVar3;
  this->bCapturing = false;
  this->FrameNumberOffset = 0;
  pUVar6 = UVideoCaptureProtocol::StaticClass();
  local_68.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_68.AssetPath.PackageName.Number = 0;
  local_68.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_68.AssetPath.AssetName.Number = 0;
  local_68.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.SubPathString.Data.ArrayNum = 0;
  local_68.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_68,(UObject *)pUVar6);
  *(uint *)&(this->ImageCaptureProtocolType).field_0x0 =
       local_68.AssetPath.PackageName.ComparisonIndex.Value;
  *(uint *)&(this->ImageCaptureProtocolType).field_0x4 = local_68.AssetPath.PackageName.Number;
  *(uint *)&(this->ImageCaptureProtocolType).field_0x8 =
       local_68.AssetPath.AssetName.ComparisonIndex.Value;
  *(uint *)&(this->ImageCaptureProtocolType).field_0xc = local_68.AssetPath.AssetName.Number;
  if ((FUtf8String *)puVar1 != &local_68.SubPathString) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_68.SubPathString.Data.AllocatorInstance.Data;
    *(int *)&(this->ImageCaptureProtocolType).field_0x18 = local_68.SubPathString.Data.ArrayNum;
    *(int *)&(this->ImageCaptureProtocolType).field_0x1c = local_68.SubPathString.Data.ArrayMax;
    local_68.SubPathString.Data.ArrayNum = 0;
    local_68.SubPathString.Data.ArrayMax = 0;
    local_68.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  puVar1 = &(this->AudioCaptureProtocolType).field_0x10;
  if (local_68.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.SubPathString.Data.AllocatorInstance.Data);
  }
  pUVar6 = UNullAudioCaptureProtocol::StaticClass();
  local_48.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_48.AssetPath.PackageName.Number = 0;
  local_48.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_48.AssetPath.AssetName.Number = 0;
  local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.SubPathString.Data.ArrayNum = 0;
  local_48.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_48,(UObject *)pUVar6);
  *(uint *)&(this->AudioCaptureProtocolType).field_0x0 =
       local_48.AssetPath.PackageName.ComparisonIndex.Value;
  *(uint *)&(this->AudioCaptureProtocolType).field_0x4 = local_48.AssetPath.PackageName.Number;
  *(uint *)&(this->AudioCaptureProtocolType).field_0x8 =
       local_48.AssetPath.AssetName.ComparisonIndex.Value;
  *(uint *)&(this->AudioCaptureProtocolType).field_0xc = local_48.AssetPath.AssetName.Number;
  if ((FUtf8String *)puVar1 != &local_48.SubPathString) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_48.SubPathString.Data.AllocatorInstance.Data;
    *(int *)&(this->AudioCaptureProtocolType).field_0x18 = local_48.SubPathString.Data.ArrayNum;
    *(int *)&(this->AudioCaptureProtocolType).field_0x1c = local_48.SubPathString.Data.ArrayMax;
    local_48.SubPathString.Data.ArrayNum = 0;
    local_48.SubPathString.Data.ArrayMax = 0;
    local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return this;
}

// ~UMovieSceneCapture @ 146bd96a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UMovieSceneCapture::~UMovieSceneCapture(UMovieSceneCapture *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneCaptureInterface__;
  this->_padding_ = (longlong)&_vftable__for__ICaptureProtocolHost__;
  pFVar1 = (this->CachedQualityLevels).GPUBenchmarkSteps.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedQualityLevels).CPUBenchmarkSteps.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCaptureFinishedDelegate).field_0x8,
             *(int *)&(this->OnCaptureFinishedDelegate).field_0x10);
  pvVar2 = *(void **)&(this->OnCaptureFinishedDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCaptureFinishedDelegate);
  *(undefined4 *)&(this->FormatMappings).field_0x48 = 0;
  pvVar2 = *(void **)&(this->FormatMappings).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FormatMappings);
  if ((this->InitSettings).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->InitSettings).TypedValue.SceneViewport.SharedReferenceCount.
               ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CaptureStrategy).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->InheritedCommandLineArguments).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AdditionalCommandLineArguments).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Settings).MovieExtension.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Settings).OutputFormat.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Settings).OutputDirectory.Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->AudioCaptureProtocolType).field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->ImageCaptureProtocolType).field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7IMovieSceneCaptureInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddFormatMappings @ 146bdb1c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCapture::AddFormatMappings
          (UMovieSceneCapture *this,
          TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
          *param_1,FFrameMetrics *param_2)

{
  return;
}

// CaptureThisFrame @ 146bdc310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UMovieSceneCapture::CaptureThisFrame(UMovieSceneCapture *this,float param_1)

{
  int *piVar1;
  char cVar2;
  ICaptureStrategy *pIVar3;
  UMovieSceneImageCaptureProtocolBase *pUVar4;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  
  if ((((this->bCapturing != false) && ((this->CaptureStrategy).Object != (ICaptureStrategy *)0x0))
      && ((this->ImageCaptureProtocol).field0_0x0.DebugPtr !=
          (UMovieSceneImageCaptureProtocolBase *)0x0)) &&
     (((this->AudioCaptureProtocol).field0_0x0.DebugPtr !=
       (UMovieSceneAudioCaptureProtocolBase *)0x0 && (this->bFinalizeWhenReady == false)))) {
    (this->CachedMetrics).ElapsedSeconds = param_1 + (this->CachedMetrics).ElapsedSeconds;
    pIVar3 = TSharedPtr<ICaptureStrategy,1>::operator->(&this->CaptureStrategy);
    cVar2 = (**(code **)((longlong)*pIVar3 + 0x20))
                      (pIVar3,(double)(this->CachedMetrics).ElapsedSeconds,
                       (this->CachedMetrics).Frame);
    if (cVar2 != '\0') {
      pIVar3 = TSharedPtr<ICaptureStrategy,1>::operator->(&this->CaptureStrategy);
      local_1c = (**(code **)((longlong)*pIVar3 + 0x28))
                           (pIVar3,(double)(this->CachedMetrics).ElapsedSeconds,
                            (this->CachedMetrics).Frame);
      piVar1 = &(this->CachedMetrics).Frame;
      *piVar1 = *piVar1 + local_1c;
      local_28 = (this->CachedMetrics).ElapsedSeconds;
      local_20 = (this->CachedMetrics).Frame;
      if (this->bIsAudioCapturePass == false) {
        pUVar4 = (this->ImageCaptureProtocol).field0_0x0.DebugPtr;
      }
      else {
        pUVar4 = (UMovieSceneImageCaptureProtocolBase *)
                 (this->AudioCaptureProtocol).field0_0x0.DebugPtr;
      }
      local_24 = param_1;
      if (pUVar4->field_0x50 == '\x02') {
        (&pUVar4->field_0x51)[(uint)GFrameCounter & 1] = 1;
        (**(code **)(*(longlong *)pUVar4 + 0x2d8))(local_28,&local_28);
      }
      if (5 < (byte)LogMovieSceneCapture._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneCapture);
      }
      piVar1 = &(this->CachedMetrics).Frame;
      *piVar1 = *piVar1 + 1;
    }
  }
  return;
}

// Close @ 146bdc610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UMovieSceneCapture::Close(UMovieSceneCapture *this)

{
  Finalize((UMovieSceneCapture *)&this[-1].CachedQualityLevels.CPUBenchmarkResults);
  return;
}

// DeserializeAdditionalJson @ 146bdcb90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCapture::DeserializeAdditionalJson(UMovieSceneCapture *this,FJsonObject *param_1)

{
  return;
}

// DeserializeJson @ 146bdcba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UMovieSceneCapture::DeserializeJson(UMovieSceneCapture *this,FJsonObject *param_1)

{
  UMovieSceneImageCaptureProtocolBase *pUVar1;
  UMovieSceneAudioCaptureProtocolBase *pUVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  TSharedPtr<FJsonValue,1> *pTVar7;
  FString *pFVar8;
  size_t sVar9;
  UClass *pUVar10;
  UStruct *pUVar11;
  TSharedPtr<FJsonObject,1> *pTVar12;
  TMap<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  FJsonValue *pFVar16;
  byte bVar17;
  TReferenceControllerBase<1> *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  UStruct *local_res18;
  UStruct *local_res20;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  
  local_res18 = (UStruct *)((ulonglong)local_res18 & 0xffffffff00000000);
  local_78._8_4_ = 0x11;
  local_78._0_8_ = L"ImageProtocolType";
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(0x11,L"ImageProtocolType");
  pTVar7 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)param_1,uVar4,(TStringView<wchar_t> *)local_78);
  if ((pTVar7 == (TSharedPtr<FJsonValue,1> *)0x0) ||
     (pFVar16 = pTVar7->Object, pFVar16 == (FJsonValue *)0x0)) {
    pTVar18 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar18 = (pTVar7->SharedReferenceCount).ReferenceController;
    if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
    pFVar8 = FJsonValue::AsString(pFVar16,(FString *)local_68);
    if ((pFVar8->Data).ArrayNum == 0) {
      local_78._0_8_ = L"";
LAB_146bdcc5e:
      sVar9 = wcslen((wchar_t *)local_78._0_8_);
      iVar5 = (int)sVar9;
    }
    else {
      local_78._0_8_ = (pFVar8->Data).AllocatorInstance.Data;
      iVar5 = 0;
      if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0)
      goto LAB_146bdcc5e;
    }
    local_78._8_4_ = iVar5;
    pUVar10 = Z_Construct_UClass_UClass_NoRegister();
    pUVar11 = (UStruct *)
              StaticFindObject(pUVar10,(UObject *)0x0,(TStringView<wchar_t> *)local_78,None);
    if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
    }
    if ((pUVar11 != (UStruct *)0x0) &&
       (pUVar10 = UMovieSceneCaptureProtocolBase::StaticClass(), pUVar10 != (UClass *)0x0)) {
      iVar5 = (int)pUVar10->_padding_;
      if (((int)pUVar11->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar10->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_res18 = pUVar11;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar11);
        }
        SetImageCaptureProtocolType(this,(TSubclassOf<UMovieSceneCaptureProtocolBase>)&local_res18);
        if ((this->ImageCaptureProtocol).field0_0x0.DebugPtr !=
            (UMovieSceneImageCaptureProtocolBase *)0x0) {
          local_78._8_4_ = 0x11;
          local_78._0_8_ = L"ImageProtocolData";
          uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(0x11,L"ImageProtocolData");
          pTVar7 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                   ::FindByHash<TStringView<wchar_t>_>
                             ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                               *)param_1,uVar4,(TStringView<wchar_t> *)local_78);
          pTVar15 = (TReferenceControllerBase<1> *)local_58._8_8_;
          if ((pTVar7 == (TSharedPtr<FJsonValue,1> *)0x0) ||
             (pFVar16 = pTVar7->Object, pFVar16 == (FJsonValue *)0x0)) {
            bVar3 = false;
            pFVar16 = (FJsonValue *)0x0;
            pTVar14 = (TReferenceControllerBase<1> *)0x0;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
LAB_146bdcd80:
            if (bVar3) goto LAB_146bdcd86;
          }
          else {
            pTVar15 = (pTVar7->SharedReferenceCount).ReferenceController;
            if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
              UNLOCK();
            }
            bVar3 = true;
            pTVar14 = pTVar15;
            if (pTVar15 == (TReferenceControllerBase<1> *)0x0) goto LAB_146bdcd80;
            LOCK();
            pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
            UNLOCK();
LAB_146bdcd86:
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar15);
          }
          if (pFVar16 != (FJsonValue *)0x0) {
            pUVar1 = (this->ImageCaptureProtocol).field0_0x0.DebugPtr;
            pTVar12 = (TSharedPtr<FJsonObject,1> *)(**(code **)pFVar16->_padding_)(pFVar16);
            pTVar13 = &TSharedPtr<FJsonObject,1>::operator->(pTVar12)->Values;
            FJsonObjectConverter::JsonAttributesToUStruct
                      (pTVar13,pUVar11,pUVar1,0,0,false,(FText *)0x0,
                       (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                        *)0x0);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar14);
        }
      }
    }
  }
  local_78._8_4_ = 0x11;
  local_78._0_8_ = L"AudioProtocolType";
  local_68._0_8_ = L"AudioProtocolType";
  local_68._8_8_ = local_78._8_8_;
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(0x11,L"AudioProtocolType");
  pTVar7 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)param_1,uVar4,(TStringView<wchar_t> *)local_68);
  if ((pTVar7 == (TSharedPtr<FJsonValue,1> *)0x0) ||
     (pFVar16 = pTVar7->Object, pFVar16 == (FJsonValue *)0x0)) {
    pFVar16 = (FJsonValue *)0x0;
    local_res18 = (UStruct *)0x0;
    bVar17 = 8;
    pTVar14 = (TReferenceControllerBase<1> *)0x0;
    pTVar15 = (TReferenceControllerBase<1> *)local_58._8_8_;
  }
  else {
    pTVar15 = (pTVar7->SharedReferenceCount).ReferenceController;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar17 = 4;
    pTVar14 = (TReferenceControllerBase<1> *)local_68._8_8_;
    local_res18 = (UStruct *)pTVar15;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if ((bVar17 & 8) != 0) {
    bVar17 = bVar17 & 0xf7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  }
  if ((bVar17 & 4) != 0) {
    bVar17 = bVar17 & 0xfb;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
  if (pFVar16 == (FJsonValue *)0x0) goto LAB_146bdd036;
  pFVar8 = FJsonValue::AsString(pFVar16,(FString *)local_58);
  if ((pFVar8->Data).ArrayNum == 0) {
    local_78._0_8_ = L"";
LAB_146bdceb1:
    sVar9 = wcslen((wchar_t *)local_78._0_8_);
    uVar6 = (undefined4)sVar9;
  }
  else {
    local_78._0_8_ = (pFVar8->Data).AllocatorInstance.Data;
    uVar6 = 0;
    if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0)
    goto LAB_146bdceb1;
  }
  local_78._8_4_ = uVar6;
  pUVar10 = Z_Construct_UClass_UClass_NoRegister();
  local_68._0_8_ = local_78._0_8_;
  local_68._8_8_ = local_78._8_8_;
  pUVar11 = (UStruct *)
            StaticFindObject(pUVar10,(UObject *)0x0,(TStringView<wchar_t> *)local_68,None);
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  if ((pUVar11 != (UStruct *)0x0) &&
     (pUVar10 = UMovieSceneCaptureProtocolBase::StaticClass(), pUVar10 != (UClass *)0x0)) {
    iVar5 = (int)pUVar10->_padding_;
    if (((int)pUVar11->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar10->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      local_res20 = pUVar11;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar11);
      }
      SetAudioCaptureProtocolType(this,(TSubclassOf<UMovieSceneCaptureProtocolBase>)&local_res20);
      if ((this->AudioCaptureProtocol).field0_0x0.DebugPtr !=
          (UMovieSceneAudioCaptureProtocolBase *)0x0) {
        local_78._8_4_ = 0x11;
        local_78._0_8_ = L"AudioProtocolData";
        local_68._0_8_ = L"AudioProtocolData";
        local_68._8_8_ = local_78._8_8_;
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(0x11,L"AudioProtocolData");
        pTVar7 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                 ::FindByHash<TStringView<wchar_t>_>
                           ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                             *)param_1,uVar4,(TStringView<wchar_t> *)local_68);
        if ((pTVar7 == (TSharedPtr<FJsonValue,1> *)0x0) ||
           (pFVar16 = pTVar7->Object, pFVar16 == (FJsonValue *)0x0)) {
          pFVar16 = (FJsonValue *)0x0;
          bVar17 = bVar17 | 0x80;
          pTVar14 = (TReferenceControllerBase<1> *)0x0;
          pTVar15 = (TReferenceControllerBase<1> *)local_58._8_8_;
          pTVar19 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar15 = (pTVar7->SharedReferenceCount).ReferenceController;
          if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
            UNLOCK();
          }
          bVar17 = bVar17 | 0x40;
          pTVar14 = (TReferenceControllerBase<1> *)local_58._8_8_;
          pTVar19 = pTVar15;
          if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        if ((char)bVar17 < '\0') {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar14);
        }
        if ((bVar17 & 0x40) != 0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar15);
        }
        if (pFVar16 != (FJsonValue *)0x0) {
          pUVar2 = (this->AudioCaptureProtocol).field0_0x0.DebugPtr;
          pTVar12 = (TSharedPtr<FJsonObject,1> *)(**(code **)pFVar16->_padding_)(pFVar16);
          pTVar13 = &TSharedPtr<FJsonObject,1>::operator->(pTVar12)->Values;
          FJsonObjectConverter::JsonAttributesToUStruct
                    (pTVar13,pUVar11,pUVar2,0,0,false,(FText *)0x0,
                     (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                      *)0x0);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19)
        ;
      }
    }
  }
LAB_146bdd036:
  (**(code **)(this->_padding_ + 0x2c8))(this,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_res18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  return;
}

// Finalize @ 146bdd9d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UMovieSceneCapture::Finalize(UMovieSceneCapture *this)

{
  undefined1 *puVar1;
  TSharedPtr<ICaptureStrategy,1> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  UMovieSceneCaptureProtocolBase *pUVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  FActiveMovieSceneCaptures *pFVar13;
  UMovieSceneCapture *pUVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  UMovieSceneCapture *local_58;
  longlong local_50;
  FSharedReferencer<1> FStack_48;
  FDestructionSentinel local_40;
  
  if ((this->Settings).bCinematicEngineScalability != false) {
    Scalability::SetQualityLevels(&this->CachedQualityLevels,false);
  }
  pFVar13 = FActiveMovieSceneCaptures::Get();
  local_58 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  pFVar4 = (pFVar13->ActiveCaptures).AllocatorInstance.Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 <
       pFVar4 + (longlong)(pFVar13->ActiveCaptures).ArrayMax * 8)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar3 = (pFVar13->ActiveCaptures).ArrayNum;
  if (iVar3 != 0) {
    pFVar4 = (pFVar13->ActiveCaptures).AllocatorInstance.Data;
    iVar19 = 0;
    bVar9 = *(UMovieSceneCapture **)pFVar4 != local_58;
    lVar16 = 0;
    pUVar14 = local_58;
    iVar17 = 0;
    do {
      iVar18 = iVar17;
      do {
        lVar16 = lVar16 + 1;
        iVar18 = iVar18 + 1;
        if (iVar3 <= lVar16) break;
      } while (bVar9 == (*(UMovieSceneCapture **)(pFVar4 + lVar16 * 8) != pUVar14));
      if (bVar9 != false) {
        if (iVar19 != iVar17) {
          memmove(pFVar4 + (longlong)iVar19 * 8,pFVar4 + (longlong)iVar17 * 8,
                  (longlong)(iVar18 - iVar17) << 3);
          pUVar14 = local_58;
        }
        iVar19 = iVar19 + (iVar18 - iVar17);
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar17 = iVar18;
    } while (lVar16 < iVar3);
    (pFVar13->ActiveCaptures).ArrayNum = iVar19;
  }
  if (this->bCapturing != false) {
    pTVar2 = &this->CaptureStrategy;
    this->bCapturing = false;
    if (pTVar2->Object != (ICaptureStrategy *)0x0) {
      (**(code **)((longlong)*pTVar2->Object + 0x10))();
      local_50 = 0;
      FStack_48.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar2 != (TSharedPtr<ICaptureStrategy,1> *)&local_50) {
        pTVar2->Object = (ICaptureStrategy *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->CaptureStrategy).SharedReferenceCount,&FStack_48);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_48.ReferenceController);
    }
    pUVar5 = (UMovieSceneCaptureProtocolBase *)(this->ImageCaptureProtocol).field0_0x0.DebugPtr;
    if (pUVar5 != (UMovieSceneCaptureProtocolBase *)0x0) {
      UMovieSceneCaptureProtocolBase::Finalize(pUVar5);
    }
    pUVar5 = (UMovieSceneCaptureProtocolBase *)(this->AudioCaptureProtocol).field0_0x0.DebugPtr;
    if (pUVar5 != (UMovieSceneCaptureProtocolBase *)0x0) {
      UMovieSceneCaptureProtocolBase::Finalize(pUVar5);
    }
    ForciblyReinitializeCaptureProtocols(this);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnCaptureFinishedDelegate,(FWriteAccessScope *)&local_40);
    puVar1 = &(this->OnCaptureFinishedDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar9 = false;
    uVar15 = *(int *)&(this->OnCaptureFinishedDelegate).field_0x10 - 1;
    if (-1 < (int)uVar15) {
      lVar16 = (longlong)(int)uVar15 << 4;
      bVar9 = false;
      do {
        uVar12 = 0;
        if ((int)uVar15 < *(int *)&(this->OnCaptureFinishedDelegate).field_0x10) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar6 = *(longlong *)&(this->OnCaptureFinishedDelegate).field_0x8;
        if (((*(int *)(lVar16 + 8 + lVar6) == 0) ||
            (plVar7 = *(longlong **)(lVar16 + lVar6), plVar7 == (longlong *)0x0)) ||
           (cVar11 = (**(code **)(*plVar7 + 0x68))(), cVar11 == '\0')) {
          bVar9 = true;
        }
        lVar16 = lVar16 + -0x10;
        uVar15 = uVar15 - 1;
      } while (-1 < (int)uVar15);
    }
    puVar1 = &(this->OnCaptureFinishedDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar9) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnCaptureFinishedDelegate,false);
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
  }
  this->bFinalizeWhenReady = false;
  return;
}

// FinalizeWhenReady @ 146bde400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UMovieSceneCapture::FinalizeWhenReady(UMovieSceneCapture *this)

{
  UMovieSceneImageCaptureProtocolBase *pUVar1;
  UMovieSceneAudioCaptureProtocolBase *pUVar2;
  
  if (this->bFinalizeWhenReady == false) {
    pUVar1 = (this->ImageCaptureProtocol).field0_0x0.DebugPtr;
    this->bFinalizeWhenReady = true;
    if ((pUVar1 != (UMovieSceneImageCaptureProtocolBase *)0x0) && (pUVar1->field_0x50 != '\0')) {
      if (pUVar1->field_0x50 == '\x02') {
        (**(code **)(*(longlong *)pUVar1 + 0x2e0))(pUVar1);
      }
      pUVar1->field_0x50 = 3;
      (**(code **)(*(longlong *)pUVar1 + 0x2e8))(pUVar1);
    }
    pUVar2 = (this->AudioCaptureProtocol).field0_0x0.DebugPtr;
    if ((pUVar2 != (UMovieSceneAudioCaptureProtocolBase *)0x0) && (pUVar2->field_0x50 != '\0')) {
      if (pUVar2->field_0x50 == '\x02') {
        (**(code **)(*(longlong *)pUVar2 + 0x2e0))(pUVar2);
      }
      pUVar2->field_0x50 = 3;
      (**(code **)(*(longlong *)pUVar2 + 0x2e8))(pUVar2);
    }
  }
  return;
}

// ForciblyReinitializeCaptureProtocols @ 146bdecb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UMovieSceneCapture::ForciblyReinitializeCaptureProtocols(UMovieSceneCapture *this)

{
  code *pcVar1;
  FName *pFVar2;
  size_t sVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  FName FVar6;
  UClass *pUVar7;
  FString *pFVar8;
  UMovieSceneImageCaptureProtocolBase *pUVar9;
  UMovieSceneAudioCaptureProtocolBase *pUVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  FName FVar13;
  int iVar14;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  TStringView<wchar_t> local_e8;
  FString local_d8;
  FString local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  iVar14 = 0;
  if (*(longlong *)&(this->ImageCaptureProtocolType).field_0x0 == 0) {
    pUVar4 = (UClass *)0x0;
  }
  else {
    local_f8._0_4_ = 0;
    local_f8._4_4_ = 0;
    local_f8._8_4_ = 0;
    pFVar2 = (FName *)FSoftObjectPath::ToString
                                ((FSoftObjectPath *)&this->ImageCaptureProtocolType,&local_d8);
    if (pFVar2[1].ComparisonIndex.Value == 0) {
      local_108._0_8_ = L"";
LAB_146bded25:
      sVar3 = wcslen((wchar_t *)local_108._0_8_);
      iVar14 = (int)sVar3;
    }
    else {
      local_108._0_8_ = *pFVar2;
      if ((FName)local_108._0_8_ != (FName)0x0) goto LAB_146bded25;
    }
    local_108._8_4_ = iVar14;
    pUVar4 = UMovieSceneImageCaptureProtocolBase::StaticClass();
    local_e8._12_4_ = local_f8._12_4_;
    local_e8.Size = local_f8._8_4_;
    local_e8.DataPtr = (wchar_t *)local_f8._0_8_;
    pUVar4 = StaticLoadClass(pUVar4,(UObject *)0x0,(TStringView<wchar_t> *)local_108,&local_e8,0,
                             (UPackageMap *)0x0);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  if (*(longlong *)&this->AudioCaptureProtocolType == 0) {
    pUVar5 = (UClass *)0x0;
  }
  else {
    local_f8._0_4_ = 0;
    local_f8._4_4_ = 0;
    local_f8._8_4_ = 0;
    pFVar2 = (FName *)FSoftObjectPath::ToString
                                ((FSoftObjectPath *)&this->AudioCaptureProtocolType,&local_c8);
    if (pFVar2[1].ComparisonIndex.Value == 0) {
      local_108._0_8_ = L"";
LAB_146bdedbe:
      sVar3 = wcslen((wchar_t *)local_108._0_8_);
      iVar14 = (int)sVar3;
    }
    else {
      local_108._0_8_ = *pFVar2;
      iVar14 = 0;
      if ((FName)local_108._0_8_ != (FName)0x0) goto LAB_146bdedbe;
    }
    local_108._8_4_ = iVar14;
    pUVar5 = UMovieSceneAudioCaptureProtocolBase::StaticClass();
    local_e8._12_4_ = local_f8._12_4_;
    local_e8.Size = local_f8._8_4_;
    local_e8.DataPtr = (wchar_t *)local_f8._0_8_;
    pUVar5 = StaticLoadClass(pUVar5,(UObject *)0x0,(TStringView<wchar_t> *)local_108,&local_e8,0,
                             (UPackageMap *)0x0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  pUVar9 = (this->ImageCaptureProtocol).field0_0x0.DebugPtr;
  if (pUVar9 != (UMovieSceneImageCaptureProtocolBase *)0x0) {
    (**(code **)(*(longlong *)pUVar9 + 0x308))(pUVar9,&this->Settings);
    pFVar2 = ::FName::FName((FName *)local_108,"ImageCaptureProtocol_DEAD");
    FVar13 = *pFVar2;
    FVar6 = (FName)UMovieSceneImageCaptureProtocolBase::StaticClass();
    pUVar7 = (UClass *)GetTransientPackage();
    MakeUniqueObjectName((UObject *)local_f8,pUVar7,FVar6,FVar13.ComparisonIndex.Value.Value);
    pUVar9 = (this->ImageCaptureProtocol).field0_0x0.DebugPtr;
    pcVar1 = *(code **)(*(longlong *)pUVar9 + 0x170);
    local_108._0_8_ = GetTransientPackage();
    pFVar8 = ::FName::ToString((FName *)local_f8,(FString *)&local_e8);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    (*pcVar1)(pUVar9,pwVar12,local_108._0_8_);
    if ((FName)local_e8.DataPtr != (FName)0x0) {
      FMemory::Free(local_e8.DataPtr);
    }
    (this->ImageCaptureProtocol).field0_0x0.DebugPtr = (UMovieSceneImageCaptureProtocolBase *)0x0;
  }
  pUVar10 = (this->AudioCaptureProtocol).field0_0x0.DebugPtr;
  if (pUVar10 != (UMovieSceneAudioCaptureProtocolBase *)0x0) {
    (**(code **)(*(longlong *)pUVar10 + 0x308))(pUVar10,&this->Settings);
    pFVar2 = ::FName::FName((FName *)local_f8,"AudioCaptureProtocol_DEAD");
    FVar13 = *pFVar2;
    FVar6 = (FName)UMovieSceneAudioCaptureProtocolBase::StaticClass();
    pUVar7 = (UClass *)GetTransientPackage();
    MakeUniqueObjectName((UObject *)local_108,pUVar7,FVar6,FVar13.ComparisonIndex.Value.Value);
    pUVar10 = (this->AudioCaptureProtocol).field0_0x0.DebugPtr;
    pcVar1 = *(code **)(*(longlong *)pUVar10 + 0x170);
    local_f8._0_8_ = GetTransientPackage();
    pFVar8 = ::FName::ToString((FName *)local_108,(FString *)&local_e8);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    (*pcVar1)(pUVar10,pwVar12,local_f8._0_8_);
    if ((FName)local_e8.DataPtr != (FName)0x0) {
      FMemory::Free(local_e8.DataPtr);
    }
    (this->AudioCaptureProtocol).field0_0x0.DebugPtr = (UMovieSceneAudioCaptureProtocolBase *)0x0;
  }
  if (pUVar4 != (UClass *)0x0) {
    local_108._0_8_ = this->_padding_;
    ::FName::ToString((FName *)local_108,(FString *)&local_e8);
    ::FString::ConcatFC((FString *)local_f8,(FString *)&local_e8,L"_ImageProtocol");
    if ((FName)local_e8.DataPtr != (FName)0x0) {
      FMemory::Free(local_e8.DataPtr);
    }
    FVar13 = (FName)L"";
    if (local_f8._8_4_ != 0) {
      FVar13 = (FName)local_f8._0_8_;
    }
    pFVar2 = ::FName::FName((FName *)local_108,(wchar_t *)FVar13);
    FVar13 = *pFVar2;
    if (FVar13 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar7 = UMovieSceneImageCaptureProtocolBase::StaticClass();
    CheckIsClassChildOf_Internal(pUVar7,pUVar4);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar4);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._24_4_ = RF_NoFlags;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = this;
    local_b8._16_8_ = FVar13;
    pUVar9 = (UMovieSceneImageCaptureProtocolBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar11 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar9 == (UMovieSceneImageCaptureProtocolBase *)0x0)) {
      (this->ImageCaptureProtocol).field0_0x0.DebugPtr = pUVar9;
      if (pUVar9 != (UMovieSceneImageCaptureProtocolBase *)0x0) goto LAB_146bdf084;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
      (this->ImageCaptureProtocol).field0_0x0.DebugPtr = pUVar9;
LAB_146bdf084:
      UObject::LoadConfig((UObject *)pUVar9,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                          (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                           *)0x0);
      pUVar9 = (this->ImageCaptureProtocol).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar9 + 0x310))(pUVar9,&this->Settings);
    }
    if ((FName)local_f8._0_8_ != (FName)0x0) {
      FMemory::Free((void *)local_f8._0_8_);
    }
  }
  if (pUVar5 == (UClass *)0x0) {
    return;
  }
  local_108._0_8_ = this->_padding_;
  ::FName::ToString((FName *)local_108,(FString *)&local_e8);
  ::FString::ConcatFC((FString *)local_f8,(FString *)&local_e8,L"_AudioProtocol");
  if ((FName)local_e8.DataPtr != (FName)0x0) {
    FMemory::Free(local_e8.DataPtr);
  }
  FVar13 = (FName)L"";
  if (local_f8._8_4_ != 0) {
    FVar13 = (FName)local_f8._0_8_;
  }
  pFVar2 = ::FName::FName((FName *)local_108,(wchar_t *)FVar13);
  FVar13 = *pFVar2;
  if (FVar13 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = UMovieSceneAudioCaptureProtocolBase::StaticClass();
  CheckIsClassChildOf_Internal(pUVar4,pUVar5);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar5);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._24_4_ = RF_NoFlags;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = this;
  local_b8._16_8_ = FVar13;
  pUVar10 = (UMovieSceneAudioCaptureProtocolBase *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar11 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar10 == (UMovieSceneAudioCaptureProtocolBase *)0x0)) {
    (this->AudioCaptureProtocol).field0_0x0.DebugPtr = pUVar10;
    if (pUVar10 == (UMovieSceneAudioCaptureProtocolBase *)0x0) goto LAB_146bdf1f9;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
    (this->AudioCaptureProtocol).field0_0x0.DebugPtr = pUVar10;
  }
  UObject::LoadConfig((UObject *)pUVar10,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                      (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                       *)0x0);
  pUVar10 = (this->AudioCaptureProtocol).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar10 + 0x310))(pUVar10,&this->Settings);
LAB_146bdf1f9:
  if ((FName)local_f8._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_f8._0_8_);
  }
  return;
}

// GetCaptureFrameRate @ 146bdfe30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FFrameRate __thiscall UMovieSceneCapture::GetCaptureFrameRate(UMovieSceneCapture *this)

{
  longlong lVar1;
  FFrameRate in_RDX;
  
  lVar1 = 0xa8;
  if (*(char *)((longlong)&(this->Settings).OutputFormat.Data.AllocatorInstance.Data + 4) == '\0') {
    lVar1 = 0x9c;
  }
  *(undefined8 *)in_RDX = *(undefined8 *)((longlong)&this->_padding_ + lVar1);
  return in_RDX;
}

// GetCaptureStrategy @ 146bdfe60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

ICaptureStrategy * __thiscall UMovieSceneCapture::GetCaptureStrategy(UMovieSceneCapture *this)

{
  code *pcVar1;
  bool bVar2;
  ICaptureStrategy *pIVar3;
  
  if (*(longlong *)&(this->Settings).PathTracerSamplePerPixel != 0) {
    return *(ICaptureStrategy **)&(this->Settings).PathTracerSamplePerPixel;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ICaptureStrategy *)(*pcVar1)();
    return pIVar3;
  }
  return *(ICaptureStrategy **)&(this->Settings).PathTracerSamplePerPixel;
}

// GetEstimatedCaptureDurationSeconds @ 146be0030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

double __thiscall UMovieSceneCapture::GetEstimatedCaptureDurationSeconds(UMovieSceneCapture *this)

{
  return 0.0;
}

// GetFrameNumberOffset @ 146be0040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __thiscall UMovieSceneCapture::GetFrameNumberOffset(UMovieSceneCapture *this)

{
  return *(int *)&(this->FormatMappings).field_0x2c;
}

// GetFrameNumberOffset`adjustor{8}' @ 146be0050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* [thunk]:public: virtual int const __cdecl UMovieSceneCapture::GetFrameNumberOffset`adjustor{8}'
   (void)const __ptr64 */

int __thiscall UMovieSceneCapture::GetFrameNumberOffset_adjustor_8__(UMovieSceneCapture *this)

{
  int iVar1;
  
  iVar1 = GetFrameNumberOffset
                    ((UMovieSceneCapture *)&this[-1].CachedQualityLevels.GPUBenchmarkSteps.ArrayNum)
  ;
  return iVar1;
}

// GetHandle @ 146be0330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FMovieSceneCaptureHandle __thiscall UMovieSceneCapture::GetHandle(UMovieSceneCapture *this)

{
  undefined4 *in_RDX;
  
  *in_RDX = *(undefined4 *)
             ((longlong)&(this->CaptureStrategy).SharedReferenceCount.ReferenceController + 4);
  return (FMovieSceneCaptureHandle)(uint)in_RDX;
}

// GetPrivateStaticClass @ 146be0ba0

UClass * __cdecl UMovieSceneCapture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCapture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"MovieSceneCapture",
               &Z_Registration_Info_UClass_UMovieSceneCapture.InnerSingleton,
               StaticRegisterNativesUMovieSceneCapture,0x240,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UMovieSceneCapture>,
               InternalVTableHelperCtorCaller<UMovieSceneCapture>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCapture.InnerSingleton;
}

// GetSettings @ 146be1260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FMovieSceneCaptureSettings * __thiscall UMovieSceneCapture::GetSettings(UMovieSceneCapture *this)

{
  return (FMovieSceneCaptureSettings *)&(this->AudioCaptureProtocolType).field_0x8;
}

// GetSettings`adjustor{8}' @ 146be126c

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* [thunk]:public: virtual struct FMovieSceneCaptureSettings const & __ptr64 __cdecl
   UMovieSceneCapture::GetSettings`adjustor{8}' (void)const __ptr64 */

FMovieSceneCaptureSettings * __thiscall
UMovieSceneCapture::GetSettings_adjustor_8__(UMovieSceneCapture *this)

{
  FMovieSceneCaptureSettings *pFVar1;
  
  pFVar1 = GetSettings((UMovieSceneCapture *)
                       &this[-1].CachedQualityLevels.GPUBenchmarkSteps.ArrayNum);
  return pFVar1;
}

// Initialize @ 146be19a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCapture::Initialize
          (UMovieSceneCapture *this,TSharedPtr<FSceneViewport,1> *param_1,int param_2)

{
  undefined1 *puVar1;
  float *this_00;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  undefined8 uVar4;
  longlong lVar5;
  UMovieSceneCaptureProtocolBase *pUVar6;
  void *pvVar7;
  code *pcVar8;
  TSharedPtr<FSceneViewport,1> *pTVar9;
  undefined8 uVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  wchar_t *pwVar14;
  IFileManager *pIVar15;
  longlong lVar16;
  TSharedRef<FSceneViewport,1> *pTVar17;
  undefined8 *puVar18;
  FString *pFVar19;
  FRealTimeCaptureStrategy *pFVar20;
  FRealTimeCaptureStrategy *pFVar21;
  FQualityLevels *pFVar22;
  FActiveMovieSceneCaptures *pFVar23;
  FStaticBasicLogRecord *pFVar24;
  longlong *plVar25;
  int iVar26;
  ICaptureProtocolHost *pIVar27;
  ForAnyElementType FVar28;
  int *piVar29;
  ICaptureProtocolHost *pIVar30;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar31;
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  bool local_res8 [8];
  TSharedPtr<FSceneViewport,1> *local_res10;
  bool local_res20 [8];
  bool local_5b8;
  bool local_5b7;
  bool local_5b6 [6];
  ushort local_5b0 [4];
  FDateTime local_5a8;
  FString local_5a0;
  FString local_590;
  FString local_580;
  FSceneViewport *local_570;
  ForAnyElementType local_568;
  undefined8 local_560;
  FSoftObjectPath local_558;
  FSoftObjectPath local_538;
  int local_518 [2];
  FString local_510;
  FString local_500;
  FQualityLevels local_4e8;
  TArray<UClass_*,TSizedDefaultAllocator<32>_> local_488;
  TArray<UClass_*,TSizedDefaultAllocator<32>_> local_478;
  undefined4 local_468;
  undefined1 local_464 [8];
  FName local_45c;
  FName local_454;
  TRawPtrProxy<FRealTimeCaptureStrategy> local_448;
  TObjectPtr<UMovieSceneCapture>_u_0 local_440;
  undefined1 local_438 [8];
  undefined1 local_430 [8];
  undefined1 local_428 [8];
  FString local_420;
  FString local_410;
  undefined8 local_400;
  FSharedReferencer<1> local_3f8;
  undefined1 local_3f0 [8];
  FName local_3e8;
  FString local_3e0;
  FString *local_3d0;
  FStringFormatArg *local_3c8;
  FString local_3c0;
  FString *local_3b0;
  FStringFormatArg *local_3a8;
  FString local_3a0;
  FString *local_390;
  FStringFormatArg *local_388;
  FString local_380;
  FString *local_370;
  FStringFormatArg *local_368;
  FString local_360;
  FString *local_350;
  FStringFormatArg *local_348;
  FString local_340;
  FString *local_330;
  FStringFormatArg *local_328;
  FString local_320;
  FString *local_310;
  FStringFormatArg *local_308;
  FString local_300;
  FString *local_2f0;
  FStringFormatArg *local_2e8;
  FString local_2e0;
  FString *local_2d0;
  FStringFormatArg *local_2c8;
  FString local_2c0;
  FString *local_2b0;
  FStringFormatArg *local_2a8;
  FString local_2a0;
  FString local_290;
  undefined1 local_280 [8];
  FString local_278;
  FString local_268;
  FString local_258;
  FStringFormatArg local_248;
  FStringFormatArg local_228;
  FStringFormatArg local_208;
  FStringFormatArg local_1e8;
  FStringFormatArg local_1c8;
  FStringFormatArg local_1a8;
  FStringFormatArg local_188;
  FStringFormatArg local_168;
  FStringFormatArg local_148;
  FStringFormatArg local_128;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  TSharedRef<FSceneViewport,1> local_b8;
  FQualityLevels local_a8;
  
  local_res8[0] = false;
  local_res8[1] = false;
  local_res8[2] = false;
  local_res8[3] = false;
  local_res10 = param_1;
  if (((this->FormatMappings).field_0x28 != '\0') &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<933330929252827378>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneCapture\\Private\\MovieSceneCapture.cpp"
                          ,0xf2,"!bCapturing"), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_510.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_510.Data.ArrayNum = 0;
  local_510.Data.ArrayMax = 0;
  pwVar14 = FCommandLine::Get();
  bVar11 = FParse::Value(pwVar14,L"-MovieFolder=",&local_510,true,(wchar_t **)0x0);
  if (bVar11) {
    iVar13 = local_510.Data.ArrayNum + -1;
    if (local_510.Data.ArrayNum == 0) {
      iVar13 = 0;
    }
    ::FString::AssignRange
              ((FString *)&(this->AudioCaptureProtocolType).field_0x8,
               (wchar_t *)local_510.Data.AllocatorInstance.Data,iVar13);
    FPaths::NormalizeFilename((FString *)&(this->AudioCaptureProtocolType).field_0x8);
    iVar13 = ::FString::Find((FString *)&(this->AudioCaptureProtocolType).field_0x8,L"{",1,
                             IgnoreCase,FromStart,-1);
    param_1 = local_res10;
    if (iVar13 == -1) {
      pIVar15 = IFileManager::Get();
      if (*(int *)&(this->AudioCaptureProtocolType).field_0x10 == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = *(wchar_t **)&(this->AudioCaptureProtocolType).field_0x8;
      }
      cVar12 = (**(code **)((longlong)*pIVar15 + 0x58))(pIVar15,pwVar14);
      if (cVar12 == '\0') {
        pIVar15 = IFileManager::Get();
        if (*(int *)&(this->AudioCaptureProtocolType).field_0x10 == 0) {
          pwVar14 = L"";
        }
        else {
          pwVar14 = *(wchar_t **)&(this->AudioCaptureProtocolType).field_0x8;
        }
        cVar12 = (**(code **)((longlong)*pIVar15 + 0x60))(pIVar15,pwVar14,0);
        param_1 = local_res10;
        if ((cVar12 == '\0') && (1 < (byte)LogMovieSceneCapture._0_1_)) {
          if (*(int *)&(this->AudioCaptureProtocolType).field_0x10 == 0) {
            pFVar24 = &::LOG_Static;
          }
          else {
            pFVar24 = &::LOG_Static;
          }
LAB_146be1b61:
          UE::Logging::Private::BasicLog<2>(pFVar24,(FLogCategoryBase *)&LogMovieSceneCapture);
          param_1 = local_res10;
        }
      }
      else {
        pIVar15 = IFileManager::Get();
        if (*(int *)&(this->AudioCaptureProtocolType).field_0x10 == 0) {
          pwVar14 = L"";
        }
        else {
          pwVar14 = *(wchar_t **)&(this->AudioCaptureProtocolType).field_0x8;
        }
        cVar12 = (**(code **)((longlong)*pIVar15 + 0x30))(pIVar15,pwVar14);
        param_1 = local_res10;
        if ((cVar12 != '\0') && (1 < (byte)LogMovieSceneCapture._0_1_)) {
          pFVar24 = &::LOG_Static;
          goto LAB_146be1b61;
        }
      }
    }
  }
  local_500.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_500.Data.ArrayNum = 0;
  local_500.Data.ArrayMax = 0;
  pwVar14 = FCommandLine::Get();
  bVar11 = FParse::Value(pwVar14,L"-MovieName=",&local_500,true,(wchar_t **)0x0);
  if (bVar11) {
    iVar13 = local_500.Data.ArrayNum + -1;
    if (local_500.Data.ArrayNum == 0) {
      iVar13 = 0;
    }
    ::FString::AssignRange
              ((FString *)&this->ImageCaptureProtocol,
               (wchar_t *)local_500.Data.AllocatorInstance.Data,iVar13);
  }
  pwVar14 = FCommandLine::Get();
  bVar11 = FParse::Bool(pwVar14,L"-MovieOverwriteExisting=",local_res8);
  if (bVar11) {
    *(bool *)&(this->Settings).OutputDirectory.Path.Data.AllocatorInstance.Data = local_res8[0];
  }
  pwVar14 = FCommandLine::Get();
  bVar11 = FParse::Bool(pwVar14,L"-MovieRelativeFrames=",local_res20);
  if (bVar11) {
    *(bool *)((longlong)&(this->Settings).OutputDirectory.Path.Data.AllocatorInstance.Data + 1) =
         local_res20[0];
  }
  pwVar14 = FCommandLine::Get();
  bVar11 = FParse::Value(pwVar14,L"-HandleFrames=",local_518);
  if (bVar11) {
    *(int *)((longlong)&(this->Settings).OutputDirectory.Path.Data.AllocatorInstance.Data + 4) =
         local_518[0];
  }
  pwVar14 = FCommandLine::Get();
  bVar11 = FParse::Bool(pwVar14,L"-MovieEngineScalabilityMode=",&local_5b8);
  if (bVar11) {
    *(bool *)((longlong)&(this->Settings).MovieExtension.Data.ArrayNum + 1) = local_5b8;
  }
  pwVar14 = FCommandLine::Get();
  bVar11 = FParse::Bool(pwVar14,L"-MovieCinematicMode=",&local_5b7);
  if (bVar11) {
    *(bool *)((longlong)&(this->Settings).MovieExtension.Data.ArrayNum + 2) = local_5b7;
  }
  pwVar14 = FCommandLine::Get();
  bVar11 = FParse::Bool(pwVar14,L"-PathTracer=",local_5b6);
  if ((bVar11) &&
     (*(bool *)((longlong)&(this->Settings).MovieExtension.Data.ArrayMax + 3) = local_5b6[0],
     local_5b6[0] != false)) {
    if ((param_1->Object == (FSceneViewport *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar16 = (**(code **)(*(longlong *)param_1->Object->_padding_ + 0x38))();
    *(uint *)(lVar16 + 0x18) = *(uint *)(lVar16 + 0x18) | 1;
  }
  pwVar14 = FCommandLine::Get();
  bVar11 = FParse::Value(pwVar14,L"-PathTracerSamplePerPixel=",local_5b0);
  if (bVar11) {
    *(uint *)&(this->Settings).ZeroPadFrameNumbers = (uint)local_5b0[0];
  }
  local_5a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5a0.Data.ArrayNum = 0;
  local_5a0.Data.ArrayMax = 0;
  pwVar14 = FCommandLine::Get();
  bVar11 = FParse::Value(pwVar14,L"-MovieFormat=",&local_5a0,true,(wchar_t **)0x0);
  if (bVar11) {
LAB_146be1d72:
    FindAllCaptureProtocolClasses(&local_488);
    iVar13 = local_488.ArrayNum;
    pFVar2 = local_488.AllocatorInstance.Data + (longlong)iVar13 * 8;
    FVar28.Data = local_488.AllocatorInstance.Data;
    do {
      if (local_488.ArrayNum != iVar13) {
        local_5b6[1] = false;
        `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_5b6 + 1);
      }
      if (FVar28.Data == pFVar2) {
        if (1 < (byte)LogMovieSceneCapture._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneCapture)
          ;
        }
        goto LAB_146be1ed6;
      }
      pUVar3 = *(UObject **)FVar28.Data;
      local_3e8.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
      local_3e8.Number = *(uint *)&pUVar3->field_0x1c;
      ::FName::ToString(&local_3e8,&local_420);
      iVar26 = local_420.Data.ArrayNum;
      if (iVar26 == local_5a0.Data.ArrayNum) {
        if (1 < iVar26) {
          iVar26 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)local_420.Data.AllocatorInstance.Data,
                              (wchar_t *)local_5a0.Data.AllocatorInstance.Data);
          bVar11 = iVar26 == 0;
          goto LAB_146be1dff;
        }
LAB_146be1e0b:
        bVar11 = true;
      }
      else {
        bVar11 = iVar26 + local_5a0.Data.ArrayNum == 1;
LAB_146be1dff:
        if (bVar11) goto LAB_146be1e0b;
        bVar11 = false;
      }
      if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_420.Data.AllocatorInstance.Data);
      }
      if (bVar11) goto LAB_146be1e34;
      FVar28.Data = FVar28.Data + 8;
    } while( true );
  }
  pwVar14 = FCommandLine::Get();
  bVar11 = FParse::Value(pwVar14,L"-ImageCaptureProtocol=",&local_5a0,true,(wchar_t **)0x0);
  if (bVar11) goto LAB_146be1d72;
  goto LAB_146be1ee4;
LAB_146be1fe7:
  local_558.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_558.AssetPath.PackageName.Number = 0;
  local_558.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_558.AssetPath.AssetName.Number = 0;
  local_558.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_558.SubPathString.Data.ArrayNum = 0;
  local_558.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_558,pUVar3);
  puVar1 = &(this->ImageCaptureProtocolType).field_0x8;
  this->_padding_ = (longlong)local_558.AssetPath.PackageName;
  *(uint *)&(this->ImageCaptureProtocolType).field_0x0 =
       local_558.AssetPath.AssetName.ComparisonIndex.Value;
  *(uint *)&(this->ImageCaptureProtocolType).field_0x4 = local_558.AssetPath.AssetName.Number;
  if ((FUtf8String *)puVar1 != &local_558.SubPathString) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_558.SubPathString.Data.AllocatorInstance.Data;
    *(int *)&(this->ImageCaptureProtocolType).field_0x10 = local_558.SubPathString.Data.ArrayNum;
    *(int *)&(this->ImageCaptureProtocolType).field_0x14 = local_558.SubPathString.Data.ArrayMax;
    local_558.SubPathString.Data.ArrayNum = 0;
    local_558.SubPathString.Data.ArrayMax = 0;
    local_558.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_558.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_558.SubPathString.Data.AllocatorInstance.Data);
  }
LAB_146be2089:
  if (local_478.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.AllocatorInstance.Data);
  }
  goto LAB_146be209a;
LAB_146be1e34:
  local_538.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_538.AssetPath.PackageName.Number = 0;
  local_538.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_538.AssetPath.AssetName.Number = 0;
  local_538.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_538.SubPathString.Data.ArrayNum = 0;
  local_538.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_538,pUVar3);
  plVar25 = &this->_padding_;
  this->_padding_ = (longlong)local_538.AssetPath.PackageName;
  this->_padding_ = (longlong)local_538.AssetPath.AssetName;
  if ((FUtf8String *)plVar25 != &local_538.SubPathString) {
    if ((void *)*plVar25 != (void *)0x0) {
      FMemory::Free((void *)*plVar25);
    }
    *plVar25 = (longlong)local_538.SubPathString.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_538.SubPathString.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_538.SubPathString.Data.ArrayMax;
    local_538.SubPathString.Data.ArrayNum = 0;
    local_538.SubPathString.Data.ArrayMax = 0;
    local_538.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_538.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_538.SubPathString.Data.AllocatorInstance.Data);
  }
LAB_146be1ed6:
  if (local_488.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.AllocatorInstance.Data);
  }
LAB_146be1ee4:
  local_590.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_590.Data.ArrayNum = 0;
  local_590.Data.ArrayMax = 0;
  pwVar14 = FCommandLine::Get();
  bVar11 = FParse::Value(pwVar14,L"-AudioCaptureProtocol=",&local_590,true,(wchar_t **)0x0);
  if (bVar11) {
    FindAllCaptureProtocolClasses(&local_478);
    iVar13 = local_478.ArrayNum;
    pFVar2 = local_478.AllocatorInstance.Data + (longlong)iVar13 * 8;
    FVar28.Data = local_478.AllocatorInstance.Data;
    do {
      if (local_478.ArrayNum != iVar13) {
        local_5b6[2] = false;
        `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_5b6 + 2);
      }
      if (FVar28.Data == pFVar2) {
        if (1 < (byte)LogMovieSceneCapture._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)&PTR_u_Unrecognized_au_15141bf70,
                     (FLogCategoryBase *)&LogMovieSceneCapture);
        }
        goto LAB_146be2089;
      }
      pUVar3 = *(UObject **)FVar28.Data;
      local_45c.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
      local_45c.Number = *(uint *)&pUVar3->field_0x1c;
      ::FName::ToString(&local_45c,&local_410);
      iVar26 = local_410.Data.ArrayNum;
      if (iVar26 == local_590.Data.ArrayNum) {
        if (1 < iVar26) {
          iVar26 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)local_410.Data.AllocatorInstance.Data,
                              (wchar_t *)local_590.Data.AllocatorInstance.Data);
          bVar11 = iVar26 == 0;
          goto LAB_146be1faf;
        }
LAB_146be1fbb:
        bVar11 = true;
      }
      else {
        bVar11 = iVar26 + local_590.Data.ArrayNum == 1;
LAB_146be1faf:
        if (bVar11) goto LAB_146be1fbb;
        bVar11 = false;
      }
      if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_410.Data.AllocatorInstance.Data);
      }
      if (bVar11) goto LAB_146be1fe7;
      FVar28.Data = FVar28.Data + 8;
    } while( true );
  }
LAB_146be209a:
  local_580.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_580.Data.ArrayNum = 0;
  local_580.Data.ArrayMax = 0;
  pwVar14 = FCommandLine::Get();
  bVar11 = FParse::Value(pwVar14,L"-MovieFrameRate=",&local_580,true,(wchar_t **)0x0);
  if (bVar11) {
    FVar28.Data = (FScriptContainerElement *)L"";
    if (local_580.Data.ArrayNum != 0) {
      FVar28.Data = local_580.Data.AllocatorInstance.Data;
    }
    bVar11 = TryParseString((FFrameRate *)&(this->Settings).bOverwriteExisting,
                            (wchar_t *)FVar28.Data);
    if (bVar11) {
      *(undefined1 *)&(this->Settings).OutputFormat.Data.ArrayMax = 1;
    }
    else if (1 < (byte)LogMovieSceneCapture._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneCapture);
    }
  }
  if (local_580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_580.Data.AllocatorInstance.Data);
  }
  if (local_590.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_590.Data.AllocatorInstance.Data);
  }
  if (local_5a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a0.Data.AllocatorInstance.Data);
  }
  if (local_500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_500.Data.AllocatorInstance.Data);
  }
  if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_510.Data.AllocatorInstance.Data);
  }
  bVar11 = IsRayTracingEnabled();
  pTVar9 = local_res10;
  if (!bVar11) {
    *(undefined1 *)((longlong)&(this->Settings).MovieExtension.Data.ArrayMax + 3) = 0;
  }
  *(undefined1 *)&(this->CaptureStrategy).SharedReferenceCount.ReferenceController = 0;
  (this->FormatMappings).field_0x29 = 0;
  pTVar17 = TSharedPtr<FSceneViewport,1>::ToSharedRef(local_res10,&local_b8);
  local_568.Data = (FScriptContainerElement *)0x0;
  local_570 = pTVar17->Object;
  local_3f8.ReferenceController = (pTVar17->SharedReferenceCount).ReferenceController;
  if (local_3f8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3f8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3f8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_400 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            ((FSharedReferencer<1> *)&local_568,&local_3f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3f8.ReferenceController);
  plVar25 = &pTVar17->Object->_padding_;
  puVar18 = (undefined8 *)(**(code **)(*plVar25 + 0x10))(plVar25,local_280);
  local_560 = *puVar18;
  if (((int)local_560 == UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) &&
     ((int)((ulonglong)local_560 >> 0x20) == UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y))
  {
    local_560 = CONCAT44(GSystemResolution.ResY,GSystemResolution.ResX);
    FSceneViewport::SetViewportSize(pTVar17->Object,GSystemResolution.ResX,GSystemResolution.ResY);
  }
  uVar4 = local_560;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar17->SharedReferenceCount).ReferenceController);
  piVar29 = &(this->AdditionalCommandLineArguments).Data.ArrayNum;
  if (&local_570 != (FSceneViewport **)piVar29) {
    if (*(char *)&(this->CaptureStrategy).Object != '\0') {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 (this->InheritedCommandLineArguments).Data.AllocatorInstance.Data);
    }
    uVar10 = local_560;
    *(FSceneViewport **)piVar29 = local_570;
    (this->InheritedCommandLineArguments).Data.AllocatorInstance.Data = local_568.Data;
    local_560._0_4_ = (undefined4)uVar4;
    local_560._4_4_ = SUB84(uVar4,4);
    (this->InheritedCommandLineArguments).Data.ArrayNum = (undefined4)local_560;
    (this->InheritedCommandLineArguments).Data.ArrayMax = local_560._4_4_;
    *(undefined1 *)&(this->CaptureStrategy).Object = 1;
    local_568.Data = (FScriptContainerElement *)0x0;
    local_570 = (FSceneViewport *)0x0;
    local_560 = uVar10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_568.Data);
  (this->InitSettings).TypedValue.SceneViewport.Object = (FSceneViewport *)0x0;
  (this->InitSettings).TypedValue.SceneViewport.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->InitSettings).TypedValue.DesiredSize.field0_0x0._s_0.X = -1;
  if ((*(char *)&(this->CaptureStrategy).Object == '\0') &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  *(int *)&(this->InitSettings).TypedValue.SceneViewport.Object =
       (this->InheritedCommandLineArguments).Data.ArrayNum;
  if ((*(char *)&(this->CaptureStrategy).Object == '\0') &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  *(int *)((longlong)&(this->InitSettings).TypedValue.SceneViewport.Object + 4) =
       (this->InheritedCommandLineArguments).Data.ArrayMax;
  lVar16 = 0xb0;
  if ((char)(this->Settings).OutputFormat.Data.ArrayMax == '\0') {
    lVar16 = 0xa4;
  }
  uVar4 = *(undefined8 *)((longlong)&this->_padding_ + lVar16);
  auVar32._0_8_ = (double)(int)((ulonglong)uVar4 >> 0x20);
  auVar32._8_8_ = 0;
  dVar34 = (double)(int)uVar4 / auVar32._0_8_;
  if ((uint)(*(int *)&this->bFinalizeWhenReady - *(int *)&(this->FormatMappings).field_0xc) < 10) {
    TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&(this->InitSettings).bIsSet,10);
    for (lVar16 = 0x3f; 0x19UL >> lVar16 == 0; lVar16 = lVar16 + -1) {
    }
    iVar13 = *(int *)&(this->FormatMappings).field_0x20;
    iVar26 = 1 << ((byte)lVar16 & 0x1f);
    local_468 = (undefined4)lVar16;
    if ((iVar13 == 0) || (auVar32 = extraout_XMM0, iVar13 < iVar26)) {
      *(int *)&(this->FormatMappings).field_0x20 = iVar26;
      TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                *)&(this->InitSettings).bIsSet);
      auVar32 = extraout_XMM0_00;
    }
  }
  auVar33._0_8_ = dVar34 + __real_3fe0000000000000;
  auVar33._8_8_ = 0;
  auVar32 = roundpd(auVar32,auVar33,1);
  if (dVar34 == auVar32._0_8_) {
    ::FString::PrintfImpl(&local_278,L"%lld");
    FStringFormatArg::FStringFormatArg(&local_228,&local_278);
    ::FString::FString(&local_2c0,L"fps");
    local_2d0 = &local_2c0;
    local_2c8 = &local_228;
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
              ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                *)&(this->InitSettings).bIsSet,
               (TPairInitializer<FString_&&,FStringFormatArg_&&> *)local_464,(bool *)&local_2d0);
    if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
    }
    if (local_228.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.StringValue.Data.AllocatorInstance.Data);
    }
  }
  else {
    ::FString::PrintfImpl(&local_268,L"%.2f");
    FStringFormatArg::FStringFormatArg(&local_248,&local_268);
    ::FString::FString(&local_3e0,L"fps");
    local_2b0 = &local_3e0;
    local_2a8 = &local_248;
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
              ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                *)&(this->InitSettings).bIsSet,
               (TPairInitializer<FString_&&,FStringFormatArg_&&> *)(local_464 + 4),
               (bool *)&local_2b0);
    if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
    }
    if (local_248.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.StringValue.Data.AllocatorInstance.Data);
    }
  }
  pFVar21 = (FRealTimeCaptureStrategy *)0x0;
  ::FString::PrintfImpl(&local_258,L"%d");
  FStringFormatArg::FStringFormatArg(&local_208,&local_258);
  ::FString::FString(&local_3c0,L"width");
  local_3d0 = &local_3c0;
  local_3c8 = &local_208;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
              *)&(this->InitSettings).bIsSet,
             (TPairInitializer<FString_&&,FStringFormatArg_&&> *)(local_3f0 + 4),(bool *)&local_3d0)
  ;
  if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
  }
  if (local_208.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.StringValue.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_2a0,L"%d");
  FStringFormatArg::FStringFormatArg(&local_1e8,&local_2a0);
  ::FString::FString(&local_3a0,L"height");
  local_3b0 = &local_3a0;
  local_3a8 = &local_1e8;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
              *)&(this->InitSettings).bIsSet,
             (TPairInitializer<FString_&&,FStringFormatArg_&&> *)local_3f0,(bool *)&local_3b0);
  if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
  }
  if (local_1e8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.StringValue.Data.AllocatorInstance.Data);
  }
  if ((pTVar9->Object == (FSceneViewport *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar16 = (**(code **)(*(longlong *)pTVar9->Object->_padding_ + 0x30))();
  local_454 = *(FName *)(lVar16 + 0x18);
  ::FName::ToString(&local_454,&local_290);
  FStringFormatArg::FStringFormatArg(&local_1c8,&local_290);
  ::FString::FString(&local_380,L"world");
  local_390 = &local_380;
  local_388 = &local_1c8;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
              *)&(this->InitSettings).bIsSet,
             (TPairInitializer<FString_&&,FStringFormatArg_&&> *)(local_428 + 4),(bool *)&local_390)
  ;
  if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_380.Data.AllocatorInstance.Data);
  }
  if (local_1c8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.StringValue.Data.AllocatorInstance.Data);
  }
  FDateTime::Now();
  pFVar19 = FDateTime::ToString(&local_5a8,&local_108,L"%Y");
  FStringFormatArg::FStringFormatArg(&local_1a8,pFVar19);
  ::FString::FString(&local_360,L"year");
  local_370 = &local_360;
  local_368 = &local_1a8;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
              *)&(this->InitSettings).bIsSet,
             (TPairInitializer<FString_&&,FStringFormatArg_&&> *)local_428,(bool *)&local_370);
  if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_360.Data.AllocatorInstance.Data);
  }
  if (local_1a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.StringValue.Data.AllocatorInstance.Data);
  }
  pFVar19 = FDateTime::ToString(&local_5a8,&local_f8,L"%m");
  FStringFormatArg::FStringFormatArg(&local_188,pFVar19);
  ::FString::FString(&local_340,L"month");
  local_350 = &local_340;
  local_348 = &local_188;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
              *)&(this->InitSettings).bIsSet,
             (TPairInitializer<FString_&&,FStringFormatArg_&&> *)(local_430 + 4),(bool *)&local_350)
  ;
  if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.Data.AllocatorInstance.Data);
  }
  if (local_188.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.StringValue.Data.AllocatorInstance.Data);
  }
  pFVar19 = FDateTime::ToString(&local_5a8,&local_e8,L"%d");
  FStringFormatArg::FStringFormatArg(&local_168,pFVar19);
  ::FString::FString(&local_320,L"day");
  local_330 = &local_320;
  local_328 = &local_168;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
              *)&(this->InitSettings).bIsSet,
             (TPairInitializer<FString_&&,FStringFormatArg_&&> *)local_430,(bool *)&local_330);
  if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_320.Data.AllocatorInstance.Data);
  }
  if (local_168.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.StringValue.Data.AllocatorInstance.Data);
  }
  pFVar19 = FDateTime::ToString(&local_5a8,&local_d8,L"%Y.%m.%d");
  FStringFormatArg::FStringFormatArg(&local_148,pFVar19);
  ::FString::FString(&local_300,L"date");
  local_310 = &local_300;
  local_308 = &local_148;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
              *)&(this->InitSettings).bIsSet,
             (TPairInitializer<FString_&&,FStringFormatArg_&&> *)(local_438 + 4),(bool *)&local_310)
  ;
  if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data.AllocatorInstance.Data);
  }
  if (local_148.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.StringValue.Data.AllocatorInstance.Data);
  }
  pFVar19 = FDateTime::ToString(&local_5a8,&local_c8,L"%H.%M.%S");
  FStringFormatArg::FStringFormatArg(&local_128,pFVar19);
  ::FString::FString(&local_2e0,L"time");
  local_2f0 = &local_2e0;
  local_2e8 = &local_128;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
              *)&(this->InitSettings).bIsSet,
             (TPairInitializer<FString_&&,FStringFormatArg_&&> *)local_438,(bool *)&local_2f0);
  if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
  }
  if (local_128.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.StringValue.Data.AllocatorInstance.Data);
  }
  lVar16._0_1_ = this->bUseSeparateProcess;
  lVar16._1_1_ = this->bCloseEditorWhenCaptureStarts;
  lVar16._2_6_ = *(undefined6 *)&this->field_0xfa;
  if (lVar16 == 0) {
    pFVar20 = ::operator_new(0x18);
    if (pFVar20 != (FRealTimeCaptureStrategy *)0x0) {
      uVar4 = *(undefined8 *)
               ((longlong)&(this->Settings).OutputFormat.Data.AllocatorInstance.Data + 4);
      pFVar20->_padding_ = (longlong)&___7FRealTimeCaptureStrategy__6B_;
      pFVar20->NextPresentTimeS = 0.0;
      pFVar20->FrameLength = (double)(int)((ulonglong)uVar4 >> 0x20) / (double)(int)uVar4;
      pFVar21 = pFVar20;
    }
    local_448.Object = pFVar21;
    TSharedPtr<ICaptureStrategy,1>::operator=<FRealTimeCaptureStrategy>
              ((TSharedPtr<ICaptureStrategy,1> *)&this->bUseSeparateProcess,&local_448);
    lVar5._0_1_ = this->bUseSeparateProcess;
    lVar5._1_1_ = this->bCloseEditorWhenCaptureStarts;
    lVar5._2_6_ = *(undefined6 *)&this->field_0xfa;
    if ((lVar5 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (**(code **)(**(longlong **)&this->bUseSeparateProcess + 8))();
  }
  this_00 = &this[-1].CachedQualityLevels.CPUBenchmarkResults;
  InitializeCaptureProtocols((UMovieSceneCapture *)this_00);
  pUVar6 = *(UMovieSceneCaptureProtocolBase **)&(this->ImageCaptureProtocolType).field_0x18;
  if (pUVar6 == (UMovieSceneCaptureProtocolBase *)0x0) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<933330929252827582>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneCapture\\Private\\MovieSceneCapture.cpp"
                        ,0x1be,"ImageCaptureProtocol");
    if (bVar11) {
code_r0x000146be2b86:
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else if (*(longlong *)&this->AudioCaptureProtocolType == 0) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<933330929252827582>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneCapture\\Private\\MovieSceneCapture.cpp"
                        ,0x1be,"AudioCaptureProtocol");
    if (bVar11) goto code_r0x000146be2b86;
  }
  else {
    pIVar27 = (ICaptureProtocolHost *)&this->_padding_;
    pIVar30 = pIVar27;
    if (this_00 == (float *)0x0) {
      pIVar30 = (ICaptureProtocolHost *)0x0;
    }
    if ((*(char *)&(this->CaptureStrategy).Object == '\0') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    UMovieSceneCaptureProtocolBase::Setup
              (pUVar6,(FCaptureProtocolInitSettings *)
                      &(this->AdditionalCommandLineArguments).Data.ArrayNum,pIVar30);
    pUVar6 = *(UMovieSceneCaptureProtocolBase **)&this->AudioCaptureProtocolType;
    if (this_00 == (float *)0x0) {
      pIVar27 = (ICaptureProtocolHost *)0x0;
    }
    if ((*(char *)&(this->CaptureStrategy).Object == '\0') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    UMovieSceneCaptureProtocolBase::Setup
              (pUVar6,(FCaptureProtocolInitSettings *)
                      &(this->AdditionalCommandLineArguments).Data.ArrayNum,pIVar27);
  }
  if (*(char *)((longlong)&(this->Settings).MovieExtension.Data.ArrayNum + 1) != '\0') {
    pFVar22 = Scalability::GetQualityLevels(&local_a8);
    piVar29 = &(this->CachedQualityLevels).GlobalIlluminationQuality;
    *(float *)&this->bCapturing = pFVar22->ResolutionQuality;
    pTVar31 = &pFVar22->CPUBenchmarkSteps;
    this->FrameNumberOffset = pFVar22->ViewDistanceQuality;
    *(int *)&this->OnCaptureFinishedDelegate = pFVar22->AntiAliasingQuality;
    *(int *)&(this->OnCaptureFinishedDelegate).field_0x4 = pFVar22->ShadowQuality;
    *(int *)&(this->OnCaptureFinishedDelegate).field_0x8 = pFVar22->GlobalIlluminationQuality;
    *(int *)&(this->OnCaptureFinishedDelegate).field_0xc = pFVar22->ReflectionQuality;
    *(int *)&(this->OnCaptureFinishedDelegate).field_0x10 = pFVar22->PostProcessQuality;
    *(int *)&(this->OnCaptureFinishedDelegate).field_0x14 = pFVar22->TextureQuality;
    *(int *)&(this->OnCaptureFinishedDelegate).field_0x18 = pFVar22->EffectsQuality;
    *(int *)&(this->OnCaptureFinishedDelegate).field_0x1c = pFVar22->FoliageQuality;
    (this->CachedQualityLevels).ResolutionQuality = (float)pFVar22->ShadingQuality;
    (this->CachedQualityLevels).ViewDistanceQuality = pFVar22->LandscapeQuality;
    (this->CachedQualityLevels).AntiAliasingQuality = (int)pFVar22->CPUBenchmarkResults;
    (this->CachedQualityLevels).ShadowQuality = (int)pFVar22->GPUBenchmarkResults;
    if ((TArray<float,TSizedDefaultAllocator<32>_> *)piVar29 != pTVar31) {
      if (*(void **)piVar29 != (void *)0x0) {
        FMemory::Free(*(void **)piVar29);
      }
      *(FScriptContainerElement **)piVar29 = (pTVar31->AllocatorInstance).Data;
      (pTVar31->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->CachedQualityLevels).PostProcessQuality = (pFVar22->CPUBenchmarkSteps).ArrayNum;
      (this->CachedQualityLevels).TextureQuality = (pFVar22->CPUBenchmarkSteps).ArrayMax;
      (pFVar22->CPUBenchmarkSteps).ArrayNum = 0;
      (pFVar22->CPUBenchmarkSteps).ArrayMax = 0;
    }
    pTVar31 = &pFVar22->GPUBenchmarkSteps;
    piVar29 = &(this->CachedQualityLevels).EffectsQuality;
    if ((TArray<float,TSizedDefaultAllocator<32>_> *)piVar29 != pTVar31) {
      if (*(void **)piVar29 != (void *)0x0) {
        FMemory::Free(*(void **)piVar29);
      }
      *(FScriptContainerElement **)piVar29 = (pTVar31->AllocatorInstance).Data;
      (pTVar31->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->CachedQualityLevels).ShadingQuality = (pFVar22->GPUBenchmarkSteps).ArrayNum;
      (this->CachedQualityLevels).LandscapeQuality = (pFVar22->GPUBenchmarkSteps).ArrayMax;
      (pFVar22->GPUBenchmarkSteps).ArrayNum = 0;
      (pFVar22->GPUBenchmarkSteps).ArrayMax = 0;
    }
    if (local_a8.GPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.GPUBenchmarkSteps.AllocatorInstance.Data);
    }
    if (local_a8.CPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.CPUBenchmarkSteps.AllocatorInstance.Data);
    }
    local_4e8.ViewDistanceQuality = this->FrameNumberOffset;
    local_4e8.ResolutionQuality = *(float *)&this->bCapturing;
    local_4e8.CPUBenchmarkSteps.ArrayNum = (this->CachedQualityLevels).PostProcessQuality;
    lVar16 = (longlong)local_4e8.CPUBenchmarkSteps.ArrayNum;
    local_4e8.GPUBenchmarkResults = (float)(this->CachedQualityLevels).ShadowQuality;
    pvVar7 = *(void **)&(this->CachedQualityLevels).GlobalIlluminationQuality;
    local_4e8.AntiAliasingQuality = *(int *)&this->OnCaptureFinishedDelegate;
    local_4e8.ShadowQuality = *(int *)&(this->OnCaptureFinishedDelegate).field_0x4;
    local_4e8.GlobalIlluminationQuality = *(int *)&(this->OnCaptureFinishedDelegate).field_0x8;
    local_4e8.ReflectionQuality = *(int *)&(this->OnCaptureFinishedDelegate).field_0xc;
    local_4e8.PostProcessQuality = *(int *)&(this->OnCaptureFinishedDelegate).field_0x10;
    local_4e8.TextureQuality = *(int *)&(this->OnCaptureFinishedDelegate).field_0x14;
    local_4e8.EffectsQuality = *(int *)&(this->OnCaptureFinishedDelegate).field_0x18;
    local_4e8.FoliageQuality = *(int *)&(this->OnCaptureFinishedDelegate).field_0x1c;
    local_4e8.ShadingQuality = (int)(this->CachedQualityLevels).ResolutionQuality;
    local_4e8.CPUBenchmarkResults = (float)(this->CachedQualityLevels).AntiAliasingQuality;
    local_4e8.LandscapeQuality = (this->CachedQualityLevels).ViewDistanceQuality;
    local_4e8.CPUBenchmarkSteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_4e8.CPUBenchmarkSteps.ArrayNum == 0) {
      local_4e8.CPUBenchmarkSteps.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_4e8.CPUBenchmarkSteps.ArrayNum,0,
                 &local_4e8.CPUBenchmarkSteps.AllocatorInstance,local_4e8.CPUBenchmarkSteps.ArrayNum
                 ,&local_4e8.CPUBenchmarkSteps.ArrayMax);
      memcpy(local_4e8.CPUBenchmarkSteps.AllocatorInstance.Data,pvVar7,lVar16 << 2);
    }
    local_4e8.GPUBenchmarkSteps.ArrayNum = (this->CachedQualityLevels).ShadingQuality;
    lVar16 = (longlong)local_4e8.GPUBenchmarkSteps.ArrayNum;
    pvVar7 = *(void **)&(this->CachedQualityLevels).EffectsQuality;
    local_4e8.GPUBenchmarkSteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_4e8.GPUBenchmarkSteps.ArrayNum == 0) {
      local_4e8.GPUBenchmarkSteps.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_4e8.GPUBenchmarkSteps.ArrayNum,0,
                 &local_4e8.GPUBenchmarkSteps.AllocatorInstance,local_4e8.GPUBenchmarkSteps.ArrayNum
                 ,&local_4e8.GPUBenchmarkSteps.ArrayMax);
      memcpy(local_4e8.GPUBenchmarkSteps.AllocatorInstance.Data,pvVar7,lVar16 << 2);
    }
    Scalability::FQualityLevels::SetFromSingleQualityLevelRelativeToMax(&local_4e8,0);
    Scalability::SetQualityLevels(&local_4e8,false);
    if (local_4e8.GPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e8.GPUBenchmarkSteps.AllocatorInstance.Data);
    }
    if (local_4e8.CPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e8.CPUBenchmarkSteps.AllocatorInstance.Data);
    }
  }
  if (((ulonglong)this[-1].CachedQualityLevels.CPUBenchmarkSteps.AllocatorInstance.Data & 0x10) == 0
     ) {
    pFVar23 = FActiveMovieSceneCaptures::Get();
    local_440.DebugPtr = (UMovieSceneCapture *)&this[-1].CachedQualityLevels.CPUBenchmarkResults;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_440.DebugPtr != (UMovieSceneCapture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_440.DebugPtr);
    }
    TArray<TObjectPtr<UMovieSceneCapture>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TObjectPtr<UMovieSceneCapture>_>
              (&pFVar23->ActiveCaptures,(TObjectPtr<UMovieSceneCapture> *)&local_440.ObjectPtr);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar9->SharedReferenceCount).ReferenceController);
  return;
}

// InitializeCaptureProtocols @ 146be2f10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UMovieSceneCapture::InitializeCaptureProtocols(UMovieSceneCapture *this)

{
  UMovieSceneImageCaptureProtocolBase *pUVar1;
  UMovieSceneAudioCaptureProtocolBase *pUVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  bool bVar5;
  
  pUVar3 = FSoftClassPath::TryLoadClass<UMovieSceneCaptureProtocolBase>
                     (&this->ImageCaptureProtocolType);
  pUVar4 = FSoftClassPath::TryLoadClass<UMovieSceneCaptureProtocolBase>
                     (&this->AudioCaptureProtocolType);
  if (pUVar3 == (UClass *)0x0) {
    if ((pUVar4 != (UClass *)0x0) ||
       ((this->ImageCaptureProtocol).field0_0x0.DebugPtr !=
        (UMovieSceneImageCaptureProtocolBase *)0x0)) goto LAB_146be2f6f;
    bVar5 = (this->AudioCaptureProtocol).field0_0x0.DebugPtr ==
            (UMovieSceneAudioCaptureProtocolBase *)0x0;
  }
  else {
    pUVar1 = (this->ImageCaptureProtocol).field0_0x0.DebugPtr;
    if (((pUVar1 == (UMovieSceneImageCaptureProtocolBase *)0x0) ||
        (*(UClass **)&pUVar1->field_0x10 != pUVar3)) ||
       (pUVar2 = (this->AudioCaptureProtocol).field0_0x0.DebugPtr,
       pUVar2 == (UMovieSceneAudioCaptureProtocolBase *)0x0)) goto LAB_146be2f6f;
    bVar5 = *(UClass **)&pUVar2->field_0x10 == pUVar4;
  }
  if (bVar5) {
    return;
  }
LAB_146be2f6f:
  ForciblyReinitializeCaptureProtocols(this);
  return;
}

// IsAudioPassIfNeeded @ 146be2fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall UMovieSceneCapture::IsAudioPassIfNeeded(UMovieSceneCapture *this)

{
  bool bVar1;
  UClass *pUVar2;
  FSoftObjectPath local_28;
  
  pUVar2 = UNullAudioCaptureProtocol::StaticClass();
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,(UObject *)pUVar2);
  bVar1 = FSoftObjectPath::operator==((FSoftObjectPath *)&this->AudioCaptureProtocolType,&local_28);
  if ((bVar1) || (this->bIsAudioCapturePass != false)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// LoadFromConfig @ 146be30e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UMovieSceneCapture::LoadFromConfig(UMovieSceneCapture *this)

{
  UMovieSceneImageCaptureProtocolBase *this_00;
  UMovieSceneAudioCaptureProtocolBase *this_01;
  TReferenceControllerBase<1> *pTVar1;
  TJsonStringReader<wchar_t> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar6;
  ForAnyElementType FVar7;
  TSharedPtr<FJsonObject,1> local_b8;
  FString local_a8;
  StackState local_98;
  FString local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_20;
  
  UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                      (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                       *)0x0);
  InitializeCaptureProtocols(this);
  this_00 = (this->ImageCaptureProtocol).field0_0x0.DebugPtr;
  if (this_00 != (UMovieSceneImageCaptureProtocolBase *)0x0) {
    UObject::LoadConfig((UObject *)this_00,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                        (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                         *)0x0);
  }
  this_01 = (this->AudioCaptureProtocol).field0_0x0.DebugPtr;
  if (this_01 != (UMovieSceneAudioCaptureProtocolBase *)0x0) {
    UObject::LoadConfig((UObject *)this_01,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                        (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                         *)0x0);
  }
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  pFVar5 = UObjectBaseUtility::GetPathName
                     ((UObjectBaseUtility *)this->_padding_,&local_40,(UObject *)0x0);
  ::FString::ConcatFC(&local_50,pFVar5,L"_Json");
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_50.Data.ArrayNum != 0) {
    FVar7.Data = local_50.Data.AllocatorInstance.Data;
  }
  bVar4 = FConfigCacheIni::GetString
                    (GConfig,(wchar_t *)FVar7.Data,L"Data",&local_a8,&GEditorSettingsIni);
  if (bVar4) {
    pFVar5 = FRemoteConfig::ReplaceIniSpecialCharWithChar(&local_30,&local_a8);
    ::FString::ReplaceEscapedCharWithCharInline
              (pFVar5,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
    local_60.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.Data.ArrayNum = (pFVar5->Data).ArrayNum;
    local_60.Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    local_b8.Object = (FJsonObject *)0x0;
    local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar6 = TJsonStringReader<wchar_t>::Create(&local_20,&local_60);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pTVar2 = pTVar6->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.SharedReferenceCount.ReferenceController);
    local_98.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Identifier.Data.ArrayNum = 0;
    local_98.Identifier.Data.ArrayMax = 0;
    local_98.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Array.ArrayNum = 0;
    local_98.Array.ArrayMax = 0;
    local_98.Object.Object = (FJsonObject *)0x0;
    local_98.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                      ((TJsonReader<wchar_t> *)pTVar2,&local_98,None);
    if (bVar4) {
      bVar4 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_98,&local_b8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_98.Array.AllocatorInstance.Data,
                 local_98.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_98.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_98.Array.AllocatorInstance.Data);
      }
      if (local_98.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Identifier.Data.AllocatorInstance.Data);
      }
      if ((bVar4) && (local_b8.Object != (FJsonObject *)0x0)) {
        pcVar3 = *(code **)(this->_padding_ + 0x2c8);
        if ((local_b8.Object == (FJsonObject *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (*pcVar3)(this,local_b8.Object);
      }
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_98.Array.AllocatorInstance.Data,
                 local_98.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_98.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_98.Array.AllocatorInstance.Data);
      }
      if (local_98.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Identifier.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return;
}

// OnTick @ 146be4d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UMovieSceneCapture::OnTick(UMovieSceneCapture *this,float param_1)

{
  int *piVar1;
  char cVar2;
  ICaptureStrategy *pIVar3;
  UMovieSceneImageCaptureProtocolBase *pUVar4;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  
  if ((((this->bCapturing != false) && ((this->CaptureStrategy).Object != (ICaptureStrategy *)0x0))
      && ((this->ImageCaptureProtocol).field0_0x0.DebugPtr !=
          (UMovieSceneImageCaptureProtocolBase *)0x0)) &&
     (((this->AudioCaptureProtocol).field0_0x0.DebugPtr !=
       (UMovieSceneAudioCaptureProtocolBase *)0x0 && (this->bFinalizeWhenReady == false)))) {
    (this->CachedMetrics).ElapsedSeconds = param_1 + (this->CachedMetrics).ElapsedSeconds;
    pIVar3 = TSharedPtr<ICaptureStrategy,1>::operator->(&this->CaptureStrategy);
    cVar2 = (**(code **)((longlong)*pIVar3 + 0x20))
                      (pIVar3,(double)(this->CachedMetrics).ElapsedSeconds,
                       (this->CachedMetrics).Frame);
    if (cVar2 != '\0') {
      pIVar3 = TSharedPtr<ICaptureStrategy,1>::operator->(&this->CaptureStrategy);
      iStack_1c = (**(code **)((longlong)*pIVar3 + 0x28))
                            (pIVar3,(double)(this->CachedMetrics).ElapsedSeconds,
                             (this->CachedMetrics).Frame);
      piVar1 = &(this->CachedMetrics).Frame;
      *piVar1 = *piVar1 + iStack_1c;
      fStack_28 = (this->CachedMetrics).ElapsedSeconds;
      iStack_20 = (this->CachedMetrics).Frame;
      if (this->bIsAudioCapturePass == false) {
        pUVar4 = (this->ImageCaptureProtocol).field0_0x0.DebugPtr;
      }
      else {
        pUVar4 = (UMovieSceneImageCaptureProtocolBase *)
                 (this->AudioCaptureProtocol).field0_0x0.DebugPtr;
      }
      fStack_24 = param_1;
      if (pUVar4->field_0x50 == '\x02') {
        (&pUVar4->field_0x51)[(uint)GFrameCounter & 1] = 1;
        (**(code **)(*(longlong *)pUVar4 + 0x2d8))(fStack_28,&fStack_28);
      }
      if (5 < (byte)LogMovieSceneCapture._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneCapture);
      }
      piVar1 = &(this->CachedMetrics).Frame;
      *piVar1 = *piVar1 + 1;
    }
  }
  return;
}

// PostInitProperties @ 146be50e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UMovieSceneCapture::PostInitProperties(UMovieSceneCapture *this)

{
  if ((this->_padding_ & 0x10) == 0) {
    InitializeCaptureProtocols(this);
  }
  UObject::PostInitProperties((UObject *)this);
  return;
}

// ResolveFileFormat @ 146be5c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FString * __thiscall
UMovieSceneCapture::ResolveFileFormat
          (UMovieSceneCapture *this,FString *__return_storage_ptr__,FString *param_1,
          FFrameMetrics *param_2)

{
  TIntPoint<int> *pTVar1;
  longlong *plVar2;
  int iVar3;
  wchar_t *pwVar4;
  undefined1 auStackY_128 [32];
  TPairInitializer<FString_&&,FStringFormatArg_&&> local_f8;
  FStringFormatArg *local_e8;
  FStringFormatArg local_e0;
  FStringFormatArg local_c0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_60;
  int local_50 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_6c = 0x80;
  pTVar1 = &(this->InitSettings).TypedValue.DesiredSize;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_60.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_50[0] = 0;
  if ((TIntPoint<int> *)local_98 != pTVar1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&local_60,local_50,(ForElementType<FSetElementId> *)&(this->FormatMappings).field_0x8
               ,*(int *)&(this->FormatMappings).field_0x18);
    TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_98,
                (TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)pTVar1);
  }
  ::FString::PrintfImpl((FString *)((longlong)&local_e0 + 0x10),L"%0*d");
  FStringFormatArg::FStringFormatArg(&local_c0,(FString *)((longlong)&local_e0 + 0x10));
  ::FString::FString((FString *)&local_e0,L"frame");
  local_f8.Value = &local_e0;
  local_e8 = &local_c0;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
            ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
              *)local_98,&local_f8,(bool *)&local_f8.Value);
  if ((FScriptContainerElement *)local_e0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e0._0_8_);
  }
  if (local_c0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.StringValue.Data.AllocatorInstance.Data);
  }
  (**(code **)(*(longlong *)&this[-1].CachedQualityLevels.ShadingQuality + 0x2d8))
            (&this[-1].CachedQualityLevels.ShadingQuality,local_98,param_2);
  plVar2 = *(longlong **)&(this->ImageCaptureProtocolType).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x300))(plVar2,local_98);
  }
  plVar2 = *(longlong **)&(this->ImageCaptureProtocolType).field_0x18;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x300))(plVar2,local_98);
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FString::FormatImpl
            (__return_storage_ptr__,pwVar4,
             (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)local_98);
  local_50[0] = 0;
  if (local_60.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_60.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  iVar3 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return __return_storage_ptr__;
}

// SaveToConfig @ 146be6c60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UMovieSceneCapture::SaveToConfig(UMovieSceneCapture *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UMovieSceneImageCaptureProtocolBase *this_00;
  UMovieSceneAudioCaptureProtocolBase *this_01;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FString *pFVar8;
  atomic<int> *paVar9;
  TReferenceControllerBase<1> *pTVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  TRawPtrProxy<FJsonObject> local_res10;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *local_res18;
  FString local_b8;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_a8;
  TSharedRef<FJsonObject,1> local_98;
  FString local_88;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_78;
  TSharedPtr<FJsonObject,1> local_68;
  FString local_58;
  FString local_48;
  
  pTVar6 = ::operator_new(0x50);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  local_res10.Object = (FJsonObject *)pTVar10;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->_padding_ = 0;
    pTVar6->SharedReferenceCount = (atomic<int>)0x0;
    pTVar6->WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar6[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar6[3]._padding_ + 4) = 0;
    pTVar6[4]._padding_ = 0;
    pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
    local_res10.Object = (FJsonObject *)pTVar6;
  }
  TSharedRef<FJsonObject,1>::TSharedRef<FJsonObject,1><FJsonObject>(&local_98,&local_res10);
  (**(code **)(this->_padding_ + 0x2c0))(this,local_98.Object);
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create(&local_78,&local_b8,0);
  FVar4.ReferenceController = local_98.SharedReferenceCount.ReferenceController;
  if (local_98.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    paVar9 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar9 = &(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar9 = (atomic<int>)((int)*paVar9 + 1);
    UNLOCK();
  }
  local_res18 = local_78.Object;
  pTVar6 = ::operator_new(0x38);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    local_a8.Object = ___xmm_00000000000000000000000000000010;
    local_a8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7 = ::operator_new(0x30);
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      pTVar6[2]._padding_ = 0x10;
      pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    }
    else {
      pTVar7->SharedReferenceCount = (atomic<int>)0x1;
      pTVar7->WeakReferenceCount = (atomic<int>)0x1;
      pTVar7->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_;
      local_68.Object = local_98.Object;
      local_68.SharedReferenceCount.ReferenceController =
           local_98.SharedReferenceCount.ReferenceController;
      if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar9 = (atomic<int>)((int)*paVar9 + 1);
        UNLOCK();
      }
      FJsonValueObject::FJsonValueObject((FJsonValueObject *)(pTVar7 + 1),&local_68);
      if ((pTVar7 + 1 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar6[2]._padding_ = (longlong)(pTVar7 + 1);
      *(TReferenceControllerBase<1> **)&pTVar6[2].SharedReferenceCount = pTVar7;
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      pTVar10 = pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    local_a8.Object = (FElement *)(pTVar6 + 1);
    *(undefined2 *)&pTVar6[3]._padding_ = 0;
    local_a8.SharedReferenceCount.ReferenceController = pTVar6;
    if ((local_a8.Object == (FElement *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar5 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
          Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_a8,local_res18,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  if (bVar5) {
    pFVar8 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)this->_padding_,&local_58,(UObject *)0x0);
    ::FString::ConcatFC(&local_88,pFVar8,L"_Json");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pFVar8 = FRemoteConfig::ReplaceIniCharWithSpecialChar(&local_48,&local_b8);
    ::FString::ReplaceCharWithEscapedCharInline
              (pFVar8,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
    pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar1 = (pFVar8->Data).ArrayNum;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pFVar11 = (FScriptContainerElement *)L"";
    if (iVar1 != 0) {
      pFVar11 = pFVar2;
    }
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar12.Data = local_88.Data.AllocatorInstance.Data;
    }
    FConfigCacheIni::SetString
              (GConfig,(wchar_t *)FVar12.Data,L"Data",(wchar_t *)pFVar11,&GEditorSettingsIni);
    FConfigCacheIni::Flush(GConfig,false,&GEditorSettingsIni);
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  UObject::SaveConfig((UObject *)this,0x4000,(wchar_t *)0x0,GConfig,true);
  this_00 = (this->ImageCaptureProtocol).field0_0x0.DebugPtr;
  if (this_00 != (UMovieSceneImageCaptureProtocolBase *)0x0) {
    UObject::SaveConfig((UObject *)this_00,0x4000,(wchar_t *)0x0,GConfig,true);
  }
  this_01 = (this->AudioCaptureProtocol).field0_0x0.DebugPtr;
  if (this_01 != (UMovieSceneAudioCaptureProtocolBase *)0x0) {
    UObject::SaveConfig((UObject *)this_01,0x4000,(wchar_t *)0x0,GConfig,true);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  return;
}

// SerializeAdditionalJson @ 146be7020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCapture::SerializeAdditionalJson(UMovieSceneCapture *this,FJsonObject *param_1)

{
  return;
}

// SerializeJson @ 146be7030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UMovieSceneCapture::SerializeJson(UMovieSceneCapture *this,FJsonObject *param_1)

{
  UMovieSceneImageCaptureProtocolBase *pUVar1;
  UMovieSceneAudioCaptureProtocolBase *pUVar2;
  FJsonObject *pFVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  FJsonValueObject *pFVar6;
  FString *pFVar7;
  FJsonValueObject *pFVar8;
  FJsonValueObject *pFVar9;
  atomic<int> *paVar10;
  atomic<int> *paVar11;
  TRawPtrProxy<FJsonValueObject> local_res8;
  TSharedPtr<FJsonValue,1> local_68;
  TSharedPtr<FJsonValue,1> local_58;
  TSharedRef<FJsonObject,1> local_48 [2];
  
  pFVar9 = (FJsonValueObject *)0x0;
  local_res8.Object = local_res8.Object & 0xffffffff00000000;
  paVar11 = (atomic<int> *)&DAT_00000008;
  if ((this->ImageCaptureProtocol).field0_0x0.DebugPtr != (UMovieSceneImageCaptureProtocolBase *)0x0
     ) {
    pFVar6 = ::operator_new(0x20);
    pFVar8 = pFVar9;
    if (pFVar6 != (FJsonValueObject *)0x0) {
      pFVar7 = UObjectBaseUtility::GetPathName
                         (*(UObjectBaseUtility **)
                           &((this->ImageCaptureProtocol).field0_0x0.DebugPtr)->field_0x10,
                          (FString *)local_48,(UObject *)0x0);
      FJsonValue::FJsonValue((FJsonValue *)pFVar6);
      pFVar6->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
      (pFVar6->Value).Object = (FJsonObject *)0x0;
      (pFVar6->Value).Object = (FJsonObject *)(pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)&(pFVar6->Value).SharedReferenceCount.ReferenceController = (pFVar7->Data).ArrayNum;
      *(int *)((longlong)&(pFVar6->Value).SharedReferenceCount.ReferenceController + 4) =
           (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
      *(EJson *)&pFVar6->_padding_ = String;
      pFVar8 = pFVar6;
    }
    local_res8.Object = pFVar8;
    TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
              (&local_58,(TRawPtrProxy<TJsonValueString<wchar_t>_> *)&local_res8);
    ::FString::FString((FString *)&local_68,L"ImageProtocolType");
    FJsonObject::SetField(param_1,(FString *)&local_68,&local_58);
    if (local_68.Object != (FJsonValue *)0x0) {
      FMemory::Free(local_68.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if ((pFVar6 != (FJsonValueObject *)0x0) && (local_48[0].Object != (FJsonObject *)0x0)) {
      FMemory::Free(local_48[0].Object);
    }
    pFVar8 = ::operator_new(0x50);
    local_res8.Object = pFVar9;
    if (pFVar8 != (FJsonValueObject *)0x0) {
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = 0;
      pFVar8[1]._padding_ = 0;
      *(EJson *)&pFVar8[1]._padding_ = None;
      *(undefined4 *)((longlong)&pFVar8[1]._padding_ + 4) = 0x80;
      *(undefined4 *)&pFVar8[1].Value.Object = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar8[1].Value.Object + 4) = 0;
      pFVar8[2]._padding_ = 0;
      *(EJson *)&pFVar8[2]._padding_ = None;
      local_res8.Object = pFVar8;
    }
    TSharedRef<FJsonObject,1>::TSharedRef<FJsonObject,1><FJsonObject>
              (local_48,(TRawPtrProxy<FJsonObject> *)&local_res8);
    FVar4.ReferenceController = local_48[0].SharedReferenceCount.ReferenceController;
    pFVar3 = local_48[0].Object;
    if (local_48[0].SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0)
    {
      paVar10 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar10 = &(local_48[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    pUVar1 = (this->ImageCaptureProtocol).field0_0x0.DebugPtr;
    bVar5 = FJsonObjectConverter::UStructToJsonObject
                      (*(UStruct **)&pUVar1->field_0x10,pUVar1,local_48,0,0,
                       (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
                        *)0x0,None);
    if (bVar5) {
      pFVar6 = ::operator_new(0x20);
      pFVar8 = pFVar9;
      if (pFVar6 != (FJsonValueObject *)0x0) {
        if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar10 = (atomic<int>)((int)*paVar10 + 1);
          UNLOCK();
        }
        local_48[0].Object = pFVar3;
        local_48[0].SharedReferenceCount.ReferenceController = FVar4.ReferenceController;
        pFVar8 = FJsonValueObject::FJsonValueObject(pFVar6,(TSharedPtr<FJsonObject,1> *)local_48);
      }
      local_res8.Object = pFVar8;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueObject>(&local_68,&local_res8);
      ::FString::FString((FString *)&local_58,L"ImageProtocolData");
      FJsonObject::SetField(param_1,(FString *)&local_58,&local_68);
      if (local_58.Object != (FJsonValue *)0x0) {
        FMemory::Free(local_58.Object);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar4.ReferenceController);
  }
  if ((this->AudioCaptureProtocol).field0_0x0.DebugPtr != (UMovieSceneAudioCaptureProtocolBase *)0x0
     ) {
    pFVar6 = ::operator_new(0x20);
    pFVar8 = pFVar9;
    if (pFVar6 != (FJsonValueObject *)0x0) {
      pFVar7 = UObjectBaseUtility::GetPathName
                         (*(UObjectBaseUtility **)
                           &((this->AudioCaptureProtocol).field0_0x0.DebugPtr)->field_0x10,
                          (FString *)local_48,(UObject *)0x0);
      FJsonValue::FJsonValue((FJsonValue *)pFVar6);
      pFVar6->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
      (pFVar6->Value).Object = (FJsonObject *)0x0;
      (pFVar6->Value).Object = (FJsonObject *)(pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)&(pFVar6->Value).SharedReferenceCount.ReferenceController = (pFVar7->Data).ArrayNum;
      *(int *)((longlong)&(pFVar6->Value).SharedReferenceCount.ReferenceController + 4) =
           (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
      *(undefined4 *)&pFVar6->_padding_ = 2;
      pFVar8 = pFVar6;
    }
    local_res8.Object = pFVar8;
    TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
              (&local_68,(TRawPtrProxy<TJsonValueString<wchar_t>_> *)&local_res8);
    ::FString::FString((FString *)&local_58,L"AudioProtocolType");
    FJsonObject::SetField(param_1,(FString *)&local_58,&local_68);
    if (local_58.Object != (FJsonValue *)0x0) {
      FMemory::Free(local_58.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    if ((pFVar6 != (FJsonValueObject *)0x0) && (local_48[0].Object != (FJsonObject *)0x0)) {
      FMemory::Free(local_48[0].Object);
    }
    pFVar8 = ::operator_new(0x50);
    local_res8.Object = pFVar9;
    if (pFVar8 != (FJsonValueObject *)0x0) {
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = 0;
      pFVar8[1]._padding_ = 0;
      *(EJson *)&pFVar8[1]._padding_ = None;
      *(undefined4 *)((longlong)&pFVar8[1]._padding_ + 4) = 0x80;
      *(undefined4 *)&pFVar8[1].Value.Object = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar8[1].Value.Object + 4) = 0;
      pFVar8[2]._padding_ = 0;
      *(EJson *)&pFVar8[2]._padding_ = None;
      local_res8.Object = pFVar8;
    }
    TSharedRef<FJsonObject,1>::TSharedRef<FJsonObject,1><FJsonObject>
              (local_48,(TRawPtrProxy<FJsonObject> *)&local_res8);
    if (local_48[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
    {
      paVar11 = &(local_48[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar11 = (atomic<int>)((int)*paVar11 + 1);
      UNLOCK();
    }
    pUVar2 = (this->AudioCaptureProtocol).field0_0x0.DebugPtr;
    bVar5 = FJsonObjectConverter::UStructToJsonObject
                      (*(UStruct **)&pUVar2->field_0x10,pUVar2,local_48,0,0,
                       (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
                        *)0x0,None);
    if (bVar5) {
      pFVar8 = ::operator_new(0x20);
      if (pFVar8 != (FJsonValueObject *)0x0) {
        if (local_48[0].SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar11 = (atomic<int>)((int)*paVar11 + 1);
          UNLOCK();
        }
        pFVar9 = FJsonValueObject::FJsonValueObject(pFVar8,(TSharedPtr<FJsonObject,1> *)local_48);
      }
      local_res8.Object = pFVar9;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueObject>(&local_68,&local_res8);
      ::FString::FString((FString *)&local_58,L"AudioProtocolData");
      FJsonObject::SetField(param_1,(FString *)&local_58,&local_68);
      if (local_58.Object != (FJsonValue *)0x0) {
        FMemory::Free(local_58.Object);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48[0].SharedReferenceCount.ReferenceController);
  }
                    /* WARNING: Could not recover jumptable at 0x000146be7479. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c0))(this,param_1);
  return;
}

// SetAudioCaptureProtocolType @ 146be7490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCapture::SetAudioCaptureProtocolType
          (UMovieSceneCapture *this,TSubclassOf<UMovieSceneCaptureProtocolBase> param_1)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  FSoftObjectPath local_28;
  
  lVar3 = *(longlong *)param_1.Class.field0_0x0;
  pUVar6 = (UObject *)0x0;
  if ((lVar3 != 0) &&
     (pUVar5 = UMovieSceneCaptureProtocolBase::StaticClass(), pUVar5 != (UClass *)0x0)) {
    iVar2 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar6 = *(UObject **)param_1.Class.field0_0x0;
    }
  }
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,pUVar6);
  puVar1 = &(this->AudioCaptureProtocolType).field_0x10;
  *(uint *)&(this->AudioCaptureProtocolType).field_0x0 =
       local_28.AssetPath.PackageName.ComparisonIndex.Value;
  *(uint *)&(this->AudioCaptureProtocolType).field_0x4 = local_28.AssetPath.PackageName.Number;
  *(uint *)&(this->AudioCaptureProtocolType).field_0x8 =
       local_28.AssetPath.AssetName.ComparisonIndex.Value;
  *(uint *)&(this->AudioCaptureProtocolType).field_0xc = local_28.AssetPath.AssetName.Number;
  if ((FUtf8String *)puVar1 != &local_28.SubPathString) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_28.SubPathString.Data.AllocatorInstance.Data;
    *(int *)&(this->AudioCaptureProtocolType).field_0x18 = local_28.SubPathString.Data.ArrayNum;
    *(int *)&(this->AudioCaptureProtocolType).field_0x1c = local_28.SubPathString.Data.ArrayMax;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  InitializeCaptureProtocols(this);
  return;
}

// SetImageCaptureProtocolType @ 146be7590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCapture::SetImageCaptureProtocolType
          (UMovieSceneCapture *this,TSubclassOf<UMovieSceneCaptureProtocolBase> param_1)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  FSoftObjectPath local_28;
  
  lVar3 = *(longlong *)param_1.Class.field0_0x0;
  pUVar6 = (UObject *)0x0;
  if ((lVar3 != 0) &&
     (pUVar5 = UMovieSceneCaptureProtocolBase::StaticClass(), pUVar5 != (UClass *)0x0)) {
    iVar2 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar6 = *(UObject **)param_1.Class.field0_0x0;
    }
  }
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,pUVar6);
  puVar1 = &(this->ImageCaptureProtocolType).field_0x10;
  *(uint *)&(this->ImageCaptureProtocolType).field_0x0 =
       local_28.AssetPath.PackageName.ComparisonIndex.Value;
  *(uint *)&(this->ImageCaptureProtocolType).field_0x4 = local_28.AssetPath.PackageName.Number;
  *(uint *)&(this->ImageCaptureProtocolType).field_0x8 =
       local_28.AssetPath.AssetName.ComparisonIndex.Value;
  *(uint *)&(this->ImageCaptureProtocolType).field_0xc = local_28.AssetPath.AssetName.Number;
  if ((FUtf8String *)puVar1 != &local_28.SubPathString) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_28.SubPathString.Data.AllocatorInstance.Data;
    *(int *)&(this->ImageCaptureProtocolType).field_0x18 = local_28.SubPathString.Data.ArrayNum;
    *(int *)&(this->ImageCaptureProtocolType).field_0x1c = local_28.SubPathString.Data.ArrayMax;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  InitializeCaptureProtocols(this);
  return;
}

// ShouldFinalize @ 146be85b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall UMovieSceneCapture::ShouldFinalize(UMovieSceneCapture *this)

{
  UMovieSceneImageCaptureProtocolBase *pUVar1;
  UMovieSceneAudioCaptureProtocolBase *pUVar2;
  char cVar3;
  
  if ((this->bFinalizeWhenReady != false) &&
     (pUVar1 = (this->ImageCaptureProtocol).field0_0x0.DebugPtr,
     (&pUVar1->field_0x51)[(uint)GFrameCounter & 1] == '\0')) {
    cVar3 = (**(code **)(*(longlong *)pUVar1 + 0x2f0))();
    if ((cVar3 != '\0') &&
       (pUVar2 = (this->AudioCaptureProtocol).field0_0x0.DebugPtr,
       (&pUVar2->field_0x51)[(uint)GFrameCounter & 1] == '\0')) {
      cVar3 = (**(code **)(*(longlong *)pUVar2 + 0x2f0))();
      if (cVar3 != '\0') {
        return true;
      }
    }
  }
  return false;
}

// StartCapture @ 146be87d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UMovieSceneCapture::StartCapture(UMovieSceneCapture *this)

{
  ICaptureStrategy *pIVar1;
  FFrameRate FVar2;
  code *pcVar3;
  bool bVar4;
  TRawPtrProxy<FRealTimeCaptureStrategy> local_res8;
  
  this->bFinalizeWhenReady = false;
  this->bCapturing = true;
  pIVar1 = (this->CaptureStrategy).Object;
  if (pIVar1 != (ICaptureStrategy *)0x0) {
    if (this->bIsAudioCapturePass == false) goto LAB_146be8864;
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  local_res8.Object = ::operator_new(0x18);
  if (local_res8.Object != (FRealTimeCaptureStrategy *)0x0) {
    FVar2 = (this->Settings).FrameRate;
    (local_res8.Object)->_padding_ = (longlong)&___7FRealTimeCaptureStrategy__6B_;
    (local_res8.Object)->NextPresentTimeS = 0.0;
    (local_res8.Object)->FrameLength = (double)FVar2.Denominator / (double)FVar2.Numerator;
  }
  TSharedPtr<ICaptureStrategy,1>::operator=<FRealTimeCaptureStrategy>
            (&this->CaptureStrategy,&local_res8);
LAB_146be8864:
  if ((this->CaptureStrategy).Object == (ICaptureStrategy *)0x0) {
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
  (**(code **)((longlong)*(this->CaptureStrategy).Object + 8))();
  if (this->bIsAudioCapturePass == false) {
    UMovieSceneCaptureProtocolBase::StartCapture
              ((UMovieSceneCaptureProtocolBase *)(this->ImageCaptureProtocol).field0_0x0.DebugPtr);
    FApp::VolumeMultiplier = 0.0;
    FApp::SetUnfocusedVolumeMultiplier(0.0);
    return;
  }
  FApp::VolumeMultiplier = 1.0;
  FApp::SetUnfocusedVolumeMultiplier(__real_3f800000);
  UMovieSceneCaptureProtocolBase::StartCapture
            ((UMovieSceneCaptureProtocolBase *)(this->AudioCaptureProtocol).field0_0x0.DebugPtr);
  return;
}

// StartCapturing @ 146be8b00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UMovieSceneCapture::StartCapturing(UMovieSceneCapture *this)

{
  StartCapture((UMovieSceneCapture *)&this[-1].CachedQualityLevels.CPUBenchmarkResults);
  return;
}

// StartWarmup @ 146be8be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UMovieSceneCapture::StartWarmup(UMovieSceneCapture *this)

{
  code *pcVar1;
  bool bVar2;
  UMovieSceneAudioCaptureProtocolBase *pUVar3;
  
  this->bCapturing = false;
  if (this->bIsAudioCapturePass == false) {
    pUVar3 = (UMovieSceneAudioCaptureProtocolBase *)(this->ImageCaptureProtocol).field0_0x0.DebugPtr
    ;
    if (pUVar3 == (UMovieSceneAudioCaptureProtocolBase *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<933330929252827615>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneCapture\\Private\\MovieSceneCapture.cpp"
                         ,0x1df,"ImageCaptureProtocol");
      if (!bVar2) {
        return;
      }
      goto code_r0x000146be8c68;
    }
  }
  else {
    pUVar3 = (this->AudioCaptureProtocol).field0_0x0.DebugPtr;
    if (pUVar3 == (UMovieSceneAudioCaptureProtocolBase *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<933330929252827608>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneCapture\\Private\\MovieSceneCapture.cpp"
                         ,0x1d8,"AudioCaptureProtocol");
      if (!bVar2) {
        return;
      }
code_r0x000146be8c68:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (pUVar3->field_0x50 == '\x02') {
    (**(code **)(*(longlong *)pUVar3 + 0x2e0))(pUVar3);
  }
  if ((pUVar3->field_0x50 != '\x02') && (pUVar3->field_0x50 != '\x01')) {
    return;
  }
  pUVar3->field_0x50 = 1;
                    /* WARNING: Could not recover jumptable at 0x000146be8c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3);
  return;
}

// StaticRegisterNativesUMovieSceneCapture @ 146be8d60

void __cdecl UMovieSceneCapture::StaticRegisterNativesUMovieSceneCapture(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneCapture_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 146be9130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall UMovieSceneCapture::Tick(UMovieSceneCapture *this,float param_1)

{
  UMovieSceneImageCaptureProtocolBase *pUVar1;
  UMovieSceneAudioCaptureProtocolBase *pUVar2;
  
  pUVar1 = (this->ImageCaptureProtocol).field0_0x0.DebugPtr;
  if (pUVar1 != (UMovieSceneImageCaptureProtocolBase *)0x0) {
    (&pUVar1->field_0x51)[(int)GFrameCounter - 1U & 1] = 0;
    (**(code **)(*(longlong *)pUVar1 + 0x2b8))();
  }
  pUVar2 = (this->AudioCaptureProtocol).field0_0x0.DebugPtr;
  if (pUVar2 != (UMovieSceneAudioCaptureProtocolBase *)0x0) {
    (&pUVar2->field_0x51)[(int)GFrameCounter - 1U & 1] = 0;
    (**(code **)(*(longlong *)pUVar2 + 0x2b8))();
  }
  (**(code **)(this->_padding_ + 0x2e0))(this,param_1);
  pUVar1 = (this->ImageCaptureProtocol).field0_0x0.DebugPtr;
  if (pUVar1 != (UMovieSceneImageCaptureProtocolBase *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x2c0))();
  }
  pUVar2 = (this->AudioCaptureProtocol).field0_0x0.DebugPtr;
  if (pUVar2 != (UMovieSceneAudioCaptureProtocolBase *)0x0) {
    (**(code **)(*(longlong *)pUVar2 + 0x2c0))();
  }
  return;
}

// _getUObject @ 146beb010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

UObject * __thiscall UMovieSceneCapture::_getUObject(UMovieSceneCapture *this)

{
  return (UObject *)&this[-1].CachedQualityLevels.CPUBenchmarkResults;
}

// execGetAudioCaptureProtocol @ 146beb5a0

void __cdecl
UMovieSceneCapture::execGetAudioCaptureProtocol(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[3].field_0x8;
  return;
}

// execGetImageCaptureProtocol @ 146beb6f0

void __cdecl
UMovieSceneCapture::execGetImageCaptureProtocol(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 3);
  return;
}

// execSetAudioCaptureProtocolType @ 146beba00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UMovieSceneCapture::execSetAudioCaptureProtocolType(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  FProperty *pFVar3;
  bool bVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  UObject *local_res8;
  FSoftObjectPath local_28;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar6 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_146beba84:
    if ((pUVar6 != (UObject *)0x0) &&
       (pUVar5 = UMovieSceneCaptureProtocolBase::StaticClass(), pUVar5 != (UClass *)0x0)) {
      iVar2 = (int)pUVar5->_padding_;
      if ((*(int *)&pUVar6[1].field_0x10 < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)&pUVar6[1].field_0x8 + (longlong)iVar2 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_146bebaba;
    }
  }
  else if (local_res8 != (UObject *)0x0) {
    UE::GC::MarkAsReachable(local_res8);
    goto LAB_146beba84;
  }
  pUVar6 = (UObject *)0x0;
LAB_146bebaba:
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,pUVar6);
  puVar1 = &param_1[2].field_0x18;
  *(uint *)&param_1[2].field_0x8 = local_28.AssetPath.PackageName.ComparisonIndex.Value;
  *(uint *)&param_1[2].field_0xc = local_28.AssetPath.PackageName.Number;
  *(uint *)&param_1[2].field_0x10 = local_28.AssetPath.AssetName.ComparisonIndex.Value;
  *(uint *)&param_1[2].field_0x14 = local_28.AssetPath.AssetName.Number;
  if ((FUtf8String *)puVar1 != &local_28.SubPathString) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_28.SubPathString.Data.AllocatorInstance.Data;
    *(int *)&param_1[2].field_0x20 = local_28.SubPathString.Data.ArrayNum;
    *(int *)&param_1[2].field_0x24 = local_28.SubPathString.Data.ArrayMax;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  InitializeCaptureProtocols((UMovieSceneCapture *)param_1);
  return;
}

// execSetImageCaptureProtocolType @ 146bebb60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UMovieSceneCapture::execSetImageCaptureProtocolType(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  FProperty *pFVar3;
  bool bVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  UObject *local_res8;
  FSoftObjectPath local_28;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar6 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_146bebbe4:
    if ((pUVar6 != (UObject *)0x0) &&
       (pUVar5 = UMovieSceneCaptureProtocolBase::StaticClass(), pUVar5 != (UClass *)0x0)) {
      iVar2 = (int)pUVar5->_padding_;
      if ((*(int *)&pUVar6[1].field_0x10 < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)&pUVar6[1].field_0x8 + (longlong)iVar2 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_146bebc1a;
    }
  }
  else if (local_res8 != (UObject *)0x0) {
    UE::GC::MarkAsReachable(local_res8);
    goto LAB_146bebbe4;
  }
  pUVar6 = (UObject *)0x0;
LAB_146bebc1a:
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,pUVar6);
  puVar1 = &param_1[1].field_0x20;
  *(uint *)&param_1[1].field_0x10 = local_28.AssetPath.PackageName.ComparisonIndex.Value;
  *(uint *)&param_1[1].field_0x14 = local_28.AssetPath.PackageName.Number;
  *(uint *)&param_1[1].field_0x18 = local_28.AssetPath.AssetName.ComparisonIndex.Value;
  *(uint *)&param_1[1].field_0x1c = local_28.AssetPath.AssetName.Number;
  if ((FUtf8String *)puVar1 != &local_28.SubPathString) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_28.SubPathString.Data.AllocatorInstance.Data;
    *(int *)(param_1 + 2) = local_28.SubPathString.Data.ArrayNum;
    *(int *)&param_1[2].field_0x4 = local_28.SubPathString.Data.ArrayMax;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  InitializeCaptureProtocols((UMovieSceneCapture *)param_1);
  return;
}

