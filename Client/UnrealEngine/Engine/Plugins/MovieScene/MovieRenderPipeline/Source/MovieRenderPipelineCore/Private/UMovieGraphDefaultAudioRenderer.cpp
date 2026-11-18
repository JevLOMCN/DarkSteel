// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 10

// StaticClass @ 14dc9caa0

UClass * __cdecl UMovieGraphDefaultAudioRenderer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphDefaultAudioRenderer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphDefaultAudioRenderer",
               &Z_Registration_Info_UClass_UMovieGraphDefaultAudioRenderer.InnerSingleton,
               StaticRegisterNativesUMovieGraphDefaultAudioRenderer,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphDefaultAudioRenderer>,
               InternalVTableHelperCtorCaller<UMovieGraphDefaultAudioRenderer>,local_res8,
               UMovieGraphAudioRendererBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphDefaultAudioRenderer.InnerSingleton;
}

// UMovieGraphDefaultAudioRenderer @ 14dcaf9f0

UMovieGraphDefaultAudioRenderer * __thiscall
UMovieGraphDefaultAudioRenderer::UMovieGraphDefaultAudioRenderer
          (UMovieGraphDefaultAudioRenderer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined ***)this = &___7UMovieGraphDefaultAudioRenderer__6B_;
  *(undefined4 *)&this->field_0x2c = 0x3f800000;
  *(undefined8 *)&this->field_0x30 = 1;
  return this;
}

// ~UMovieGraphDefaultAudioRenderer @ 14dcb2c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UMovieGraphDefaultAudioRenderer::~UMovieGraphDefaultAudioRenderer
          (UMovieGraphDefaultAudioRenderer *this)

{
  *(undefined ***)this = &___7UMovieGraphAudioRendererBase__6B_;
  DestructItems<TWeakPtr<Audio::FMixerSubmix,1>,int>
            (*(TWeakPtr<Audio::FMixerSubmix,1> **)&this->field_0x48,*(int *)&this->field_0x50);
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  DestructItems<MoviePipeline::FAudioState::FAudioSegment,int>
            (*(FAudioSegment **)&this->field_0x38,*(int *)&this->field_0x40);
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14dcd2470

UClass * __cdecl UMovieGraphDefaultAudioRenderer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphDefaultAudioRenderer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphDefaultAudioRenderer",
               &Z_Registration_Info_UClass_UMovieGraphDefaultAudioRenderer.InnerSingleton,
               StaticRegisterNativesUMovieGraphDefaultAudioRenderer,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphDefaultAudioRenderer>,
               InternalVTableHelperCtorCaller<UMovieGraphDefaultAudioRenderer>,local_res8,
               UMovieGraphAudioRendererBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphDefaultAudioRenderer.InnerSingleton;
}

// ProcessAudioTick @ 14dcda470

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
UMovieGraphDefaultAudioRenderer::ProcessAudioTick(UMovieGraphDefaultAudioRenderer *this)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FMixerPlatformNonRealtime *this_00;
  longlong *plVar3;
  longlong *plVar4;
  UMovieGraphEvaluatedConfig *this_01;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  ENetMode EVar8;
  uint uVar9;
  UWorld *this_02;
  FAudioDevice *this_03;
  UClass *pUVar10;
  UObject *pUVar11;
  UObject *pUVar12;
  longlong lVar13;
  UMovieGraphGlobalOutputSettingNode *pUVar14;
  atomic<double> aVar15;
  int local_res10;
  int local_res14;
  undefined1 local_res18 [8];
  atomic<double> local_res20;
  undefined1 local_138 [128];
  undefined1 local_b8 [144];
  
  this_02 = UEngine::GetWorldFromContextObject(GEngine,(UObject *)this,LogAndReturnNull);
  if (((((this_02 != (UWorld *)0x0) && (this_02->bAllowAudioPlayback != '\0')) &&
       (EVar8 = UWorld::InternalGetNetMode(this_02), EVar8 != NM_DedicatedServer)) &&
      ((this_03 = UWorld::GetAudioDeviceRaw(this_02), this_03 != (FAudioDevice *)0x0 &&
       (pTVar2 = this_03[1].ReverbPluginInterface.SharedReferenceCount.ReferenceController,
       pTVar2 != (TReferenceControllerBase<1> *)0x0)))) &&
     ((cVar6 = (**(code **)(pTVar2->_padding_ + 0xf8))(), cVar6 != '\0' &&
      (this_00 = (FMixerPlatformNonRealtime *)
                 this_03[1].ReverbPluginInterface.SharedReferenceCount.ReferenceController,
      this_00 != (FMixerPlatformNonRealtime *)0x0)))) {
    pUVar10 = UMovieGraphPipeline::StaticClass();
    pUVar11 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar10);
    pUVar10 = UMovieGraphPipeline::StaticClass();
    pUVar12 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar10);
    uVar1 = *(uint *)(pUVar12 + 0xb);
    uVar9 = 0;
    if ((int)uVar1 < *(int *)(pUVar11 + 8)) {
      uVar9 = ~uVar1 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar11 = *(UObject **)(*(longlong *)&pUVar11[7].field_0x20 + (longlong)(int)uVar1 * 8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    if ((pUVar11[5].field_0x4 == '\x03') && (this->field_0x28 == '\0')) {
      FAudioDevice::Update(this_03,true);
      Audio::FMixerPlatformNonRealtime::RenderAudio(this_00,__real_403e000000000000);
      (**(code **)(*(longlong *)this + 0x2b0))(this);
    }
    cVar6 = '\x01';
    local_res20 = FApp::DeltaTime;
    aVar15 = FApp::DeltaTime;
    if (pUVar11[5].field_0x4 == '\x03') {
      pUVar10 = UMovieGraphPipeline::StaticClass();
      pUVar11 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar10);
      plVar3 = *(longlong **)&pUVar11[4].field_0x10;
      pUVar10 = UMovieGraphPipeline::StaticClass();
      pUVar11 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar10);
      plVar4 = *(longlong **)&pUVar11[4].field_0x20;
      lVar13 = (**(code **)(*plVar3 + 0x2c8))(plVar3,local_138);
      this_01 = *(UMovieGraphEvaluatedConfig **)(lVar13 + 0x40);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_01 != (UMovieGraphEvaluatedConfig *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      pUVar14 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                          (this_01,UMovieGraphNode::GlobalsPinName,true,true);
      (**(code **)(*plVar4 + 0x2b8))(plVar4,local_res18);
      UMovieGraphBlueprintLibrary::GetEffectiveFrameRate
                ((UMovieGraphGlobalOutputSettingNode *)&local_res10,(FFrameRate *)pUVar14);
      lVar13 = (**(code **)(*plVar3 + 0x2c8))(plVar3,local_b8);
      cVar6 = *(char *)(lVar13 + 0x39);
      aVar15 = (atomic<double>)((double)local_res14 / (double)local_res10);
    }
    FAudioDevice::Update(this_03,true);
    if (cVar6 != '\0') {
      Audio::FMixerPlatformNonRealtime::RenderAudio(this_00,(double)aVar15);
    }
  }
  return;
}

// SetupAudioRendering @ 14dce3660

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
UMovieGraphDefaultAudioRenderer::SetupAudioRendering(UMovieGraphDefaultAudioRenderer *this)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  IConsoleVariable *pIVar4;
  float fVar5;
  
  fVar5 = FApp::GetUnfocusedVolumeMultiplier();
  *(float *)&this->field_0x2c = fVar5;
  FApp::SetUnfocusedVolumeMultiplier(__real_3f800000);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar4 = (IConsoleVariable *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"au.nrt.RenderEveryTick",1);
  if (pIVar4 != (IConsoleVariable *)0x0) {
    uVar3 = (**(code **)(*(longlong *)pIVar4 + 200))(pIVar4);
    *(undefined4 *)&this->field_0x30 = uVar3;
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar4,0,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar4 = (IConsoleVariable *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"au.NeverMuteNonRealtimeAudioDevices",1);
  if (pIVar4 != (IConsoleVariable *)0x0) {
    uVar3 = (**(code **)(*(longlong *)pIVar4 + 200))(pIVar4);
    *(undefined4 *)&this->field_0x34 = uVar3;
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar4,1,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
  return;
}

// StartAudioRecording @ 14dce5790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UMovieGraphDefaultAudioRenderer::StartAudioRecording(UMovieGraphDefaultAudioRenderer *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  ENetMode EVar6;
  atomic<int> aVar7;
  int iVar8;
  UWorld *this_00;
  FMixerDevice *this_01;
  FMixerSubmix *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  TWeakPtr<Audio::FMixerSubmix,1> local_38 [2];
  
  this->field_0x28 = 1;
  this_00 = UEngine::GetWorldFromContextObject(GEngine,(UObject *)this,LogAndReturnNull);
  if ((((this_00 != (UWorld *)0x0) && (this_00->bAllowAudioPlayback != '\0')) &&
      (EVar6 = UWorld::InternalGetNetMode(this_00), EVar6 != NM_DedicatedServer)) &&
     (this_01 = (FMixerDevice *)UWorld::GetAudioDeviceRaw(this_00), this_01 != (FMixerDevice *)0x0))
  {
    Audio::FMixerDevice::GetMasterSubmix(this_01,local_38);
    pFVar9 = (FMixerSubmix *)0x0;
    if (local_38[0].WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = (local_38[0].WeakReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_14dce5918;
        }
        LOCK();
        aVar7 = (local_38[0].WeakReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar13 = aVar2 == aVar7;
        if (bVar13) {
          (local_38[0].WeakReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar2 + 1);
          aVar7 = aVar2;
        }
        UNLOCK();
        pFVar9 = local_38[0].Object;
        aVar2 = aVar7;
      } while (!bVar13);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38[0].WeakReferenceCount.ReferenceController);
    if (pFVar9 != (FMixerSubmix *)0x0) {
      if (((*(TWeakPtr<Audio::FMixerSubmix,1> **)&this->field_0x48 <= local_38) &&
          (local_38 <
           *(TWeakPtr<Audio::FMixerSubmix,1> **)&this->field_0x48 + *(int *)&this->field_0x54)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = *(int *)&this->field_0x50;
      if (iVar8 == *(int *)&this->field_0x54) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&this->field_0x48,(int *)&this->field_0x54);
      }
      *(int *)&this->field_0x50 = iVar8 + 1;
      lVar3 = *(longlong *)&this->field_0x48;
      *(FMixerSubmix **)(lVar3 + (longlong)iVar8 * 0x10) = local_38[0].Object;
      *(TReferenceControllerBase<1> **)(lVar3 + 8 + (longlong)iVar8 * 0x10) =
           local_38[0].WeakReferenceCount.ReferenceController;
      if (local_38[0].WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_38[0].WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_38[0].WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
    }
LAB_14dce5918:
    fVar5 = __real_41f00000;
    iVar8 = *(int *)&this->field_0x50;
    plVar11 = *(longlong **)&this->field_0x48;
    plVar12 = plVar11 + (longlong)iVar8 * 2;
    while( true ) {
      if (*(int *)&this->field_0x50 != iVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TWeakPtr<Audio::FMixerSubmix,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (plVar11 == plVar12) break;
      pTVar10 = (TReferenceControllerBase<1> *)plVar11[1];
      pFVar9 = (FMixerSubmix *)0x0;
      if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_14dce5982:
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
      else {
        aVar2 = pTVar10->SharedReferenceCount;
        do {
          if (aVar2 == (atomic<int>)0x0) {
            pTVar10 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14dce5982;
          }
          LOCK();
          aVar7 = pTVar10->SharedReferenceCount;
          bVar13 = aVar2 == aVar7;
          if (bVar13) {
            pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar7 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar7;
        } while (!bVar13);
        pFVar9 = (FMixerSubmix *)*plVar11;
        if (pFVar9 == (FMixerSubmix *)0x0) goto LAB_14dce5982;
      }
      Audio::FMixerSubmix::OnStartRecordingOutput(pFVar9,fVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      plVar11 = plVar11 + 2;
    }
    if (local_38[0].WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_38[0].WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_38[0].WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_38[0].WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  return;
}

// StaticRegisterNativesUMovieGraphDefaultAudioRenderer @ 14dce64f0

void __cdecl
UMovieGraphDefaultAudioRenderer::StaticRegisterNativesUMovieGraphDefaultAudioRenderer(void)

{
  return;
}

// StopAudioRecording @ 14dce68f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
UMovieGraphDefaultAudioRenderer::StopAudioRecording(UMovieGraphDefaultAudioRenderer *this)

{
  int *piVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  int iVar3;
  FMixerSubmix *this_00;
  FScriptContainerElement *_Src;
  atomic<int> aVar4;
  atomic<int> aVar5;
  int iVar6;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar7;
  void *pvVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 local_res8 [8];
  
  this->field_0x28 = 0;
  iVar3 = *(int *)&this->field_0x50;
  puVar11 = *(undefined8 **)&this->field_0x48;
  puVar10 = puVar11 + (longlong)iVar3 * 2;
  do {
    while( true ) {
      if (*(int *)&this->field_0x50 != iVar3) {
        `TCheckedPointerIterator<TWeakPtr<Audio::FMixerSubmix,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (puVar11 == puVar10) {
        if (-1 < *(int *)&this->field_0x54) {
          DestructItems<TWeakPtr<Audio::FMixerSubmix,1>,int>
                    (*(TWeakPtr<Audio::FMixerSubmix,1> **)&this->field_0x48,
                     *(int *)&this->field_0x50);
          *(undefined4 *)&this->field_0x50 = 0;
          return;
        }
        DestructItems<TWeakPtr<Audio::FMixerSubmix,1>,int>
                  (*(TWeakPtr<Audio::FMixerSubmix,1> **)&this->field_0x48,*(int *)&this->field_0x50)
        ;
        *(undefined4 *)&this->field_0x50 = 0;
        if (*(int *)&this->field_0x54 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)&this->field_0x48,0,(int *)&this->field_0x54);
        }
        return;
      }
      pTVar9 = (TReferenceControllerBase<1> *)puVar11[1];
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) break;
LAB_14dce6970:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      puVar11 = puVar11 + 2;
    }
    aVar4 = pTVar9->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14dce6970;
      }
      LOCK();
      aVar5 = pTVar9->SharedReferenceCount;
      bVar12 = aVar4 == aVar5;
      if (bVar12) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar12);
    this_00 = (FMixerSubmix *)*puVar11;
    if (this_00 == (FMixerSubmix *)0x0) goto LAB_14dce6970;
    iVar6 = *(int *)&this->field_0x40;
    if (iVar6 == *(int *)&this->field_0x44) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x148,8,(ForAnyElementType *)&this->field_0x38,(int *)&this->field_0x44);
      *(int *)&this->field_0x40 = iVar6;
    }
    *(int *)&this->field_0x40 = iVar6 + 1;
    pvVar8 = (void *)((longlong)iVar6 * 0x148 + *(longlong *)&this->field_0x38);
    DefaultConstructItems<MoviePipeline::FAudioState::FAudioSegment,int>(pvVar8,1);
    pTVar7 = Audio::FMixerSubmix::OnStopRecordingOutput
                       (this_00,(float *)((longlong)pvVar8 + 0x130),
                        (float *)((longlong)pvVar8 + 0x134));
    pTVar2 = (TArray<float,TAlignedHeapAllocator<16>_> *)((longlong)pvVar8 + 0x138);
    if (pTVar2 == pTVar7) goto LAB_14dce6970;
    iVar6 = pTVar7->ArrayNum;
    piVar1 = (int *)((longlong)pvVar8 + 0x144);
    _Src = (pTVar7->AllocatorInstance).Data;
    *(int *)((longlong)pvVar8 + 0x140) = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      puVar11 = puVar11 + 2;
    }
    else {
      UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,iVar6,*piVar1,(ForAnyElementType *)pTVar2,iVar6,piVar1);
      if (iVar6 == 0) goto LAB_14dce6970;
      memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar6 << 2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      puVar11 = puVar11 + 2;
    }
  } while( true );
}

// TeardownAudioRendering @ 14dce6c20

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
UMovieGraphDefaultAudioRenderer::TeardownAudioRendering(UMovieGraphDefaultAudioRenderer *this)

{
  code *pcVar1;
  bool bVar2;
  IConsoleVariable *pIVar3;
  
  FApp::SetUnfocusedVolumeMultiplier(*(float *)&this->field_0x2c);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar3 = (IConsoleVariable *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"au.nrt.RenderEveryTick",1);
  if (pIVar3 != (IConsoleVariable *)0x0) {
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar3,*(int *)&this->field_0x30,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar3 = (IConsoleVariable *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"au.NeverMuteNonRealtimeAudioDevices",1);
  if (pIVar3 != (IConsoleVariable *)0x0) {
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar3,*(int *)&this->field_0x34,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
  return;
}

