// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 9

// StaticClass @ 146bd3460

UClass * __cdecl UMasterAudioSubmixCaptureProtocol::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMasterAudioSubmixCaptureProtocol.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"MasterAudioSubmixCaptureProtocol",
               &Z_Registration_Info_UClass_UMasterAudioSubmixCaptureProtocol.InnerSingleton,
               StaticRegisterNativesUMasterAudioSubmixCaptureProtocol,0x90,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UMasterAudioSubmixCaptureProtocol>,
               InternalVTableHelperCtorCaller<UMasterAudioSubmixCaptureProtocol>,local_res8,
               UMovieSceneAudioCaptureProtocolBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMasterAudioSubmixCaptureProtocol.InnerSingleton;
}

// UMasterAudioSubmixCaptureProtocol @ 146bd86f0

UMasterAudioSubmixCaptureProtocol * __thiscall
UMasterAudioSubmixCaptureProtocol::UMasterAudioSubmixCaptureProtocol
          (UMasterAudioSubmixCaptureProtocol *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMasterAudioSubmixCaptureProtocol__6B_;
  (this->FileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileName).Data.ArrayNum = 0;
  (this->FileName).Data.ArrayMax = 0;
  return this;
}

// ~UMasterAudioSubmixCaptureProtocol @ 146bd9610

void __thiscall
UMasterAudioSubmixCaptureProtocol::~UMasterAudioSubmixCaptureProtocol
          (UMasterAudioSubmixCaptureProtocol *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMasterAudioSubmixCaptureProtocol__6B_;
  pFVar1 = (this->FileName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieSceneCaptureProtocolBase__6B_;
  if ((char)this->_padding_ != '\0') {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// BeginFinalizeImpl @ 146bdb970

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
UMasterAudioSubmixCaptureProtocol::BeginFinalizeImpl(UMasterAudioSubmixCaptureProtocol *this)

{
  double dVar1;
  ForAnyElementType _Src;
  longlong lVar2;
  UWorld *pUVar3;
  UGameViewportClient *pUVar4;
  FString *pFVar5;
  UObject *pUVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FString local_38;
  FString local_28;
  FString local_18;
  
  lVar2 = (**(code **)(this->_padding_ + 0x180))();
  if (lVar2 != 0) {
    pUVar3 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    pUVar4 = UWorld::GetGameViewport(pUVar3);
    if (pUVar4 != (UGameViewportClient *)0x0) {
      pUVar3 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
      pUVar4 = UWorld::GetGameViewport(pUVar3);
      pUVar4->bDisableWorldRendering = 0;
    }
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  (**(code **)(*(longlong *)this->_padding_ + 0x20))
            ((longlong *)this->_padding_,&local_18,&this->FileName);
  pFVar5 = (FString *)(*(code *)**(undefined8 **)this->_padding_)();
  FPaths::ConvertRelativePathToFull(&local_28,pFVar5);
  _Src.Data = local_28.Data.AllocatorInstance.Data;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar7 = local_28.Data.ArrayNum;
  local_38.Data.ArrayNum = iVar7;
  if (iVar7 == 0) {
    local_38.Data._8_8_ = local_28.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar7,0,(ForAnyElementType *)&local_38,iVar7,&local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar7 * 2);
  }
  pUVar6 = (UObject *)(**(code **)(this->_padding_ + 0x180))(this);
  UAudioMixerBlueprintLibrary::StopRecordingOutput
            (pUVar6,WavFile,&local_18,&local_38,(USoundSubmix *)0x0,(USoundWave *)0x0);
  dVar1 = this->TotalGameRecordingTime - this->TotalPlatformRecordingTime;
  uVar8 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar9 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((__real_3fa999999999999a <= (double)CONCAT44(uVar9,uVar8) &&
       (double)CONCAT44(uVar9,uVar8) != __real_3fa999999999999a) &&
     (2 < (byte)LogMovieSceneCapture._0_1_)) {
    UE::Logging::Private::BasicLog<3>
              (&`public:_virtual_void___cdecl_UMasterAudioSubmixCaptureProtocol::BeginFinalizeImpl(void)___ptr64'
                ::__l9::LOG_Static,(FLogCategoryBase *)&LogMovieSceneCapture);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 146be0a20

UClass * __cdecl UMasterAudioSubmixCaptureProtocol::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMasterAudioSubmixCaptureProtocol.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"MasterAudioSubmixCaptureProtocol",
               &Z_Registration_Info_UClass_UMasterAudioSubmixCaptureProtocol.InnerSingleton,
               StaticRegisterNativesUMasterAudioSubmixCaptureProtocol,0x90,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UMasterAudioSubmixCaptureProtocol>,
               InternalVTableHelperCtorCaller<UMasterAudioSubmixCaptureProtocol>,local_res8,
               UMovieSceneAudioCaptureProtocolBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMasterAudioSubmixCaptureProtocol.InnerSingleton;
}

// PauseCaptureImpl @ 146be4f50

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
UMasterAudioSubmixCaptureProtocol::PauseCaptureImpl(UMasterAudioSubmixCaptureProtocol *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  longlong lVar4;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10 [3];
  FAudioDeviceHandle local_38 [2];
  
  pUVar3 = (UObject *)(**(code **)(this->_padding_ + 0x180))();
  UAudioMixerBlueprintLibrary::PauseRecordingOutput(pUVar3,(USoundSubmix *)0x0);
  UEngine::GetActiveAudioDevice(GEngine,local_38);
  bVar2 = FAudioDeviceHandle::IsValid(local_38);
  if (bVar2) {
    bVar2 = FAudioDeviceHandle::IsValid(local_38);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                         ,0x60,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)((local_38[0].Device)->_padding_ + 0x68))(local_38[0].Device,1);
  }
  FAudioDeviceHandle::~FAudioDeviceHandle(local_38);
  lVar4 = (**(code **)(this->_padding_ + 0x180))(this);
  this->TotalGameRecordingTime =
       (*(double *)(lVar4 + 0x8f8) - this->GameRecordingStartTime) + this->TotalGameRecordingTime;
  QueryPerformanceCounter(&local_res8);
  this->TotalPlatformRecordingTime =
       (((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
        __real_4170000000000000) - this->PlatformRecordingStartTime) +
       this->TotalPlatformRecordingTime;
  if (2 < (byte)LogTemp._0_1_) {
    QueryPerformanceCounter(local_res10);
    (**(code **)(this->_padding_ + 0x180))(this);
    UE::Logging::Private::BasicLog<3>
              (&`public:_virtual_void___cdecl_UMasterAudioSubmixCaptureProtocol::PauseCaptureImpl(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  this->GameRecordingStartTime = -1.0;
  this->PlatformRecordingStartTime = -1.0;
  return;
}

// SetupImpl @ 146be81c0

bool __thiscall
UMasterAudioSubmixCaptureProtocol::SetupImpl(UMasterAudioSubmixCaptureProtocol *this)

{
  return true;
}

// StartCaptureImpl @ 146be8990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UMasterAudioSubmixCaptureProtocol::StartCaptureImpl(UMasterAudioSubmixCaptureProtocol *this)

{
  longlong lVar1;
  UWorld *pUVar2;
  UGameViewportClient *pUVar3;
  UObject *pUVar4;
  double dVar5;
  LARGE_INTEGER local_res8 [4];
  
  if (this->bHasSetup == false) {
    lVar1 = (**(code **)(this->_padding_ + 0x180))();
    if (lVar1 != 0) {
      pUVar2 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
      pUVar3 = UWorld::GetGameViewport(pUVar2);
      if (pUVar3 != (UGameViewportClient *)0x0) {
        pUVar2 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
        pUVar3 = UWorld::GetGameViewport(pUVar2);
        pUVar3->bDisableWorldRendering = 1;
      }
    }
    dVar5 = (double)(**(code **)(*(longlong *)this->_padding_ + 0x28))();
    pUVar4 = (UObject *)(**(code **)(this->_padding_ + 0x180))(this);
    UAudioMixerBlueprintLibrary::StartRecordingOutput(pUVar4,(float)dVar5,(USoundSubmix *)0x0);
    this->bHasSetup = true;
  }
  else {
    if (2 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_virtual_bool___cdecl_UMasterAudioSubmixCaptureProtocol::StartCaptureImpl(void)___ptr64'
                  ::__l11::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    pUVar4 = (UObject *)(**(code **)(this->_padding_ + 0x180))(this);
    UAudioMixerBlueprintLibrary::ResumeRecordingOutput(pUVar4,(USoundSubmix *)0x0);
  }
  lVar1 = (**(code **)(this->_padding_ + 0x180))(this);
  this->GameRecordingStartTime = *(double *)(lVar1 + 0x8f8);
  QueryPerformanceCounter(local_res8);
  this->PlatformRecordingStartTime =
       (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  return true;
}

// StaticRegisterNativesUMasterAudioSubmixCaptureProtocol @ 146be8d40

void __cdecl
UMasterAudioSubmixCaptureProtocol::StaticRegisterNativesUMasterAudioSubmixCaptureProtocol(void)

{
  return;
}

