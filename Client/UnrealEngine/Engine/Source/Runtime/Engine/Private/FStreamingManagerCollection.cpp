// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 35

// FStreamingManagerCollection @ 1479a5990

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

FStreamingManagerCollection * __thiscall
FStreamingManagerCollection::FStreamingManagerCollection(FStreamingManagerCollection *this)

{
  longlong lVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FCachedAudioStreamingManager *this_00;
  FVirtualTextureChunkStreamingManager *pFVar4;
  FVirtualTextureChunkStreamingManager *pFVar5;
  FAnimationStreamingManager *this_01;
  FVirtualTextureChunkStreamingManager *pFVar6;
  FCachedAudioStreamingManagerParams local_18;
  
  pFVar6 = (FVirtualTextureChunkStreamingManager *)0x0;
  this->NumIterations = 1;
  this->DisableResourceStreamingCount = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FStreamingManagerCollection__6B_;
  (this->StreamingManagers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingManagers).ArrayNum = 0;
  (this->StreamingManagers).ArrayMax = 0;
  this->RenderAssetStreamingManager = (FRenderAssetStreamingManager *)0x0;
  this->NaniteCoarseMeshStreamingManager = (FCoarseMeshStreamingManager *)0x0;
  this->LoadMapTimeLimit = 5.0;
  pwVar3 = FCommandLine::Get();
  bVar2 = FParse::Param(pwVar3,L"NoTextureStreaming");
  if (bVar2) {
    IConsoleVariable::Set<int>
              ((IConsoleVariable *)CVarSetTextureStreaming._padding_,0,ECVF_SetByCommandline,
               (FName)0x0);
  }
  AddOrRemoveTextureStreamingManagerIfNeeded(this,true);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       _thread_safe_static_guard_0__ <= *(int *)(lVar1 + 0x9d4c)) ||
     (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
     _thread_safe_static_guard_0__ != -1)) goto LAB_1479a5a3b;
  pwVar3 = FCommandLine::Get();
  bVar2 = FParse::Param(pwVar3,L"nosound");
  if (bVar2) {
    pwVar3 = FCommandLine::Get();
    bVar2 = FParse::Param(pwVar3,L"enablesound");
    if (bVar2) goto LAB_1479a5baf;
    `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
         true;
  }
  else {
LAB_1479a5baf:
    `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
         false;
  }
  _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                       _thread_safe_static_guard_0__);
LAB_1479a5a3b:
  if ((*(int *)(lVar1 + 0x9d4c) <
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
  pFVar4 = pFVar6;
  if ((`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       bApplicationTypeDoesNotRenderAudio == false) &&
     (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline
      == false)) {
    FPlatformCompressionUtilities::BuildCachedStreamingManagerParams(&local_18);
    this_00 = ::operator_new(0x20);
    if (this_00 != (FCachedAudioStreamingManager *)0x0) {
      pFVar4 = (FVirtualTextureChunkStreamingManager *)
               FCachedAudioStreamingManager::FCachedAudioStreamingManager(this_00,&local_18);
    }
    this->AudioStreamingManager = (IAudioStreamingManager *)pFVar4;
    if (local_18.Caches.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Caches.AllocatorInstance.Data);
      pFVar4 = (FVirtualTextureChunkStreamingManager *)this->AudioStreamingManager;
    }
  }
  else {
    pFVar5 = ::operator_new(0x10);
    if (pFVar5 != (FVirtualTextureChunkStreamingManager *)0x0) {
      pFVar5->_padding_ = 0;
      pFVar5->_padding_ = (longlong)&___7FDummyAudioStreamingManager__6B_;
      pFVar4 = pFVar5;
    }
    this->AudioStreamingManager = (IAudioStreamingManager *)pFVar4;
  }
  AddStreamingManager(this,(IStreamingManager *)pFVar4);
  this_01 = ::operator_new(0x88);
  pFVar4 = pFVar6;
  if (this_01 != (FAnimationStreamingManager *)0x0) {
    pFVar4 = (FVirtualTextureChunkStreamingManager *)
             FAnimationStreamingManager::FAnimationStreamingManager(this_01);
  }
  this->AnimationStreamingManager = (IAnimationStreamingManager *)pFVar4;
  AddStreamingManager(this,(IStreamingManager *)pFVar4);
  pFVar4 = ::operator_new(0x140);
  if (pFVar4 != (FVirtualTextureChunkStreamingManager *)0x0) {
    pFVar6 = FVirtualTextureChunkStreamingManager::FVirtualTextureChunkStreamingManager(pFVar4);
  }
  this->VirtualTextureStreamingManager = pFVar6;
  AddStreamingManager(this,(IStreamingManager *)pFVar6);
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager != 0) {
    FSimpleStreamableAssetManager::Init();
  }
  return this;
}

// ~FStreamingManagerCollection @ 1479a92f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStreamingManagerCollection::~FStreamingManagerCollection(FStreamingManagerCollection *this)

{
  FCoarseMeshStreamingManager *pFVar1;
  FVirtualTextureChunkStreamingManager *this_00;
  IAnimationStreamingManager *pIVar2;
  IAudioStreamingManager *pIVar3;
  FRenderAssetStreamingManager *this_01;
  FScriptContainerElement *pFVar4;
  
  this->_padding_ = (longlong)&___7FStreamingManagerCollection__6B_;
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager != 0) {
    FSimpleStreamableAssetManager::Shutdown();
  }
  if (this->NaniteCoarseMeshStreamingManager != (FCoarseMeshStreamingManager *)0x0) {
    RemoveStreamingManager(this,(IStreamingManager *)this->NaniteCoarseMeshStreamingManager);
    pFVar1 = this->NaniteCoarseMeshStreamingManager;
    if (pFVar1 != (FCoarseMeshStreamingManager *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    this->NaniteCoarseMeshStreamingManager = (FCoarseMeshStreamingManager *)0x0;
  }
  RemoveStreamingManager(this,(IStreamingManager *)this->VirtualTextureStreamingManager);
  this_00 = this->VirtualTextureStreamingManager;
  if (this_00 != (FVirtualTextureChunkStreamingManager *)0x0) {
    FVirtualTextureChunkStreamingManager::~FVirtualTextureChunkStreamingManager(this_00);
    ::operator_delete(this_00,0x140);
  }
  this->VirtualTextureStreamingManager = (FVirtualTextureChunkStreamingManager *)0x0;
  RemoveStreamingManager(this,(IStreamingManager *)this->AnimationStreamingManager);
  pIVar2 = this->AnimationStreamingManager;
  if (pIVar2 != (IAnimationStreamingManager *)0x0) {
    (*(code *)**(undefined8 **)pIVar2)(pIVar2,1);
  }
  this->AnimationStreamingManager = (IAnimationStreamingManager *)0x0;
  RemoveStreamingManager(this,(IStreamingManager *)this->AudioStreamingManager);
  pIVar3 = this->AudioStreamingManager;
  if (pIVar3 != (IAudioStreamingManager *)0x0) {
    (*(code *)**(undefined8 **)pIVar3)(pIVar3,1);
  }
  this->AudioStreamingManager = (IAudioStreamingManager *)0x0;
  RemoveStreamingManager(this,(IStreamingManager *)this->RenderAssetStreamingManager);
  this_01 = this->RenderAssetStreamingManager;
  if (this_01 != (FRenderAssetStreamingManager *)0x0) {
    FRenderAssetStreamingManager::~FRenderAssetStreamingManager(this_01);
    ::operator_delete(this_01,0x738);
  }
  this->RenderAssetStreamingManager = (FRenderAssetStreamingManager *)0x0;
  if ((3 < (byte)LogContentStreaming._0_1_) && (0 < (this->StreamingManagers).ArrayNum)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
  }
  pFVar4 = (this->StreamingManagers).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  this->_padding_ = (longlong)&___7IStreamingManager__6B_;
  return;
}

// AddLevel @ 1479ae9e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FStreamingManagerCollection::AddLevel(FStreamingManagerCollection *this,ULevel *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->StreamingManagers).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->StreamingManagers).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->StreamingManagers).AllocatorInstance.Data + lVar6);
      (**(code **)(*plVar1 + 0x48))(plVar1,param_1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->StreamingManagers).ArrayNum);
  }
  return;
}

// AddOrRemoveTextureStreamingManagerIfNeeded @ 1479aeaa0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FStreamingManagerCollection::AddOrRemoveTextureStreamingManagerIfNeeded
          (FStreamingManagerCollection *this,bool param_1)

{
  code *pcVar1;
  float fVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  UClass *pUVar7;
  FRenderAssetStreamingManager *this_00;
  FRenderAssetStreamingManager *pFVar8;
  FCoarseMeshStreamingManager *pFVar9;
  FRenderAssetStreamingManager *pFVar10;
  longlong lVar11;
  uint uVar12;
  TObjectIterator<UStreamableRenderAsset> local_88;
  TObjectIterator<UStreamableRenderAsset> local_70;
  TObjectIterator<UStreamableRenderAsset> local_58 [2];
  
  pTVar3 = CVarSetTextureStreaming.Ref;
  bVar4 = IsInParallelGameThread();
  if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar10 = (FRenderAssetStreamingManager *)0x0;
  uVar12 = 0;
  if ((GRHIGlobals.SupportsTextureStreaming == false) && (pTVar3->ShadowedValue[0] != 0)) {
    IConsoleVariable::Set<int>
              ((IConsoleVariable *)CVarSetTextureStreaming._padding_,0,ECVF_SetByCode,(FName)0x0);
    pFVar8 = this->RenderAssetStreamingManager;
  }
  else {
    pFVar8 = this->RenderAssetStreamingManager;
    if (pTVar3->ShadowedValue[0] != 0) {
      if (pFVar8 != (FRenderAssetStreamingManager *)0x0) {
        return;
      }
      FlushRenderingCommands();
      FConfigCacheIni::GetFloat
                (GConfig,L"TextureStreaming",L"LoadMapTimeLimit",&this->LoadMapTimeLimit,&GEngineIni
                );
      this_00 = ::operator_new(0x738);
      pFVar8 = pFVar10;
      if (this_00 != (FRenderAssetStreamingManager *)0x0) {
        pFVar8 = FRenderAssetStreamingManager::FRenderAssetStreamingManager(this_00);
      }
      this->RenderAssetStreamingManager = pFVar8;
      AddStreamingManager(this,(IStreamingManager *)pFVar8);
      if ((this->RenderAssetStreamingManager != (FRenderAssetStreamingManager *)0x0) &&
         (GNaniteCoarseMeshStreamingEnabled != 0)) {
        pFVar9 = ::operator_new(0x218);
        if (pFVar9 != (FCoarseMeshStreamingManager *)0x0) {
          pFVar10 = (FRenderAssetStreamingManager *)
                    Nanite::FCoarseMeshStreamingManager::FCoarseMeshStreamingManager(pFVar9);
        }
        this->NaniteCoarseMeshStreamingManager = (FCoarseMeshStreamingManager *)pFVar10;
        AddStreamingManager(this,(IStreamingManager *)pFVar10);
      }
      if (param_1) {
        return;
      }
      local_70.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70.ObjectArray.ArrayNum = 0;
      local_70.ObjectArray.ArrayMax = 0;
      local_70.Index = 0xffffffff;
      EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar7 = Z_Construct_UClass_UStreamableRenderAsset_NoRegister();
      GetObjectsOfClass(pUVar7,&local_70.ObjectArray,true,RF_ClassDefaultObject,
                        EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      while( true ) {
        TObjectIterator<UStreamableRenderAsset>::Advance(&local_70);
        lVar11 = (longlong)local_70.Index;
        if ((local_70.Index < 0) || (local_70.ObjectArray.ArrayNum <= local_70.Index)) {
          if (local_70.ObjectArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_70.ObjectArray.AllocatorInstance.Data);
          return;
        }
        uVar12 = 0;
        if (local_70.Index < local_70.ObjectArray.ArrayNum) {
          uVar12 = (uint)~local_70.Index >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) break;
        UStreamableRenderAsset::LinkStreaming
                  (*(UStreamableRenderAsset **)
                    (local_70.ObjectArray.AllocatorInstance.Data + lVar11 * 8));
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (pFVar8 != (FRenderAssetStreamingManager *)0x0) {
    FlushRenderingCommands();
    FRenderAssetStreamingManager::BlockTillAllRequestsFinished
              (this->RenderAssetStreamingManager,0.0,false);
    pFVar9 = this->NaniteCoarseMeshStreamingManager;
    if (pFVar9 != (FCoarseMeshStreamingManager *)0x0) {
      (**(code **)(pFVar9->_padding_ + 0x20))(pFVar9,0,0);
    }
    local_88.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ObjectArray.ArrayNum = 0;
    local_88.ObjectArray.ArrayMax = 0;
    local_88.Index = 0xffffffff;
    EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar7 = Z_Construct_UClass_UStreamableRenderAsset_NoRegister();
    GetObjectsOfClass(pUVar7,&local_88.ObjectArray,true,RF_ClassDefaultObject,
                      EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    TObjectIterator<UStreamableRenderAsset>::Advance(&local_88);
    fVar2 = __real_41f00000;
    while ((lVar11 = (longlong)local_88.Index, -1 < local_88.Index &&
           (local_88.Index < local_88.ObjectArray.ArrayNum))) {
      uVar6 = uVar12;
      if (local_88.Index < local_88.ObjectArray.ArrayNum) {
        uVar6 = (uint)~local_88.Index >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (*(int *)(*(longlong *)(local_88.ObjectArray.AllocatorInstance.Data + lVar11 * 8) + 0xb8)
          != -1) {
        lVar11 = (longlong)local_88.Index;
        uVar6 = uVar12;
        if (local_88.Index < local_88.ObjectArray.ArrayNum) {
          uVar6 = (uint)~local_88.Index >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        UStreamableRenderAsset::SetForceMipLevelsToBeResident
                  (*(UStreamableRenderAsset **)
                    (local_88.ObjectArray.AllocatorInstance.Data + lVar11 * 8),fVar2,-1);
        lVar11 = (longlong)local_88.Index;
        uVar6 = uVar12;
        if (local_88.Index < local_88.ObjectArray.ArrayNum) {
          uVar6 = (uint)~local_88.Index >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (**(code **)(**(longlong **)(local_88.ObjectArray.AllocatorInstance.Data + lVar11 * 8) +
                    0x2d8))(*(longlong **)(local_88.ObjectArray.AllocatorInstance.Data + lVar11 * 8)
                            ,0x10);
      }
      TObjectIterator<UStreamableRenderAsset>::Advance(&local_88);
    }
    if (local_88.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.ObjectArray.AllocatorInstance.Data);
    }
    FRenderAssetStreamingManager::BlockTillAllRequestsFinished
              (this->RenderAssetStreamingManager,0.0,false);
    pFVar9 = this->NaniteCoarseMeshStreamingManager;
    if (pFVar9 != (FCoarseMeshStreamingManager *)0x0) {
      (**(code **)(pFVar9->_padding_ + 0x20))(pFVar9,0,0);
    }
    local_58[0].ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58[0].ObjectArray.ArrayNum = 0;
    local_58[0].ObjectArray.ArrayMax = 0;
    local_58[0].Index = 0xffffffff;
    EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar7 = Z_Construct_UClass_UStreamableRenderAsset_NoRegister();
    GetObjectsOfClass(pUVar7,&local_58[0].ObjectArray,true,RF_ClassDefaultObject,
                      EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    TObjectIterator<UStreamableRenderAsset>::Advance(local_58);
    while ((lVar11 = (longlong)local_58[0].Index, -1 < local_58[0].Index &&
           (local_58[0].Index < local_58[0].ObjectArray.ArrayNum))) {
      uVar12 = 0;
      if (local_58[0].Index < local_58[0].ObjectArray.ArrayNum) {
        uVar12 = (uint)~local_58[0].Index >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UStreamableRenderAsset::UnlinkStreaming
                (*(UStreamableRenderAsset **)
                  (local_58[0].ObjectArray.AllocatorInstance.Data + lVar11 * 8));
      TObjectIterator<UStreamableRenderAsset>::Advance(local_58);
    }
    if (local_58[0].ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].ObjectArray.AllocatorInstance.Data);
    }
    UnhashUnreachableObjects(false,0.0);
    RemoveStreamingManager(this,(IStreamingManager *)this->RenderAssetStreamingManager);
    pFVar10 = this->RenderAssetStreamingManager;
    if (pFVar10 != (FRenderAssetStreamingManager *)0x0) {
      FRenderAssetStreamingManager::~FRenderAssetStreamingManager(pFVar10);
      ::operator_delete(pFVar10,0x738);
    }
    this->RenderAssetStreamingManager = (FRenderAssetStreamingManager *)0x0;
    if (this->NaniteCoarseMeshStreamingManager != (FCoarseMeshStreamingManager *)0x0) {
      RemoveStreamingManager(this,(IStreamingManager *)this->NaniteCoarseMeshStreamingManager);
      pFVar9 = this->NaniteCoarseMeshStreamingManager;
      if (pFVar9 != (FCoarseMeshStreamingManager *)0x0) {
        (**(code **)pFVar9->_padding_)(pFVar9,1);
      }
      this->NaniteCoarseMeshStreamingManager = (FCoarseMeshStreamingManager *)0x0;
    }
  }
  return;
}

// AddStreamingManager @ 1479b0a50

void __thiscall
FStreamingManagerCollection::AddStreamingManager
          (FStreamingManagerCollection *this,IStreamingManager *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  IStreamingManager *local_res10 [3];
  
  pFVar2 = (this->StreamingManagers).AllocatorInstance.Data;
  local_res10[0] = param_1;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2 + (longlong)(this->StreamingManagers).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->StreamingManagers).ArrayNum;
  piVar1 = &(this->StreamingManagers).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->StreamingManagers).AllocatorInstance,piVar1);
  }
  (this->StreamingManagers).ArrayNum = iVar5 + 1;
  *(IStreamingManager **)((this->StreamingManagers).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_res10[0];
  return;
}

// BlockTillAllRequestsFinished @ 1479b4910

int __thiscall
FStreamingManagerCollection::BlockTillAllRequestsFinished
          (FStreamingManagerCollection *this,float param_1,bool param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar5 = 0;
  uVar7 = 0;
  if (0 < (this->StreamingManagers).ArrayNum) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->StreamingManagers).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      plVar1 = *(longlong **)((this->StreamingManagers).AllocatorInstance.Data + lVar8);
      iVar6 = (**(code **)(*plVar1 + 0x20))(plVar1,param_1,param_2);
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
      iVar5 = iVar5 + iVar6;
    } while ((int)uVar7 < (this->StreamingManagers).ArrayNum);
  }
  return iVar5;
}

// CancelForcedResources @ 1479b7b50

void __thiscall
FStreamingManagerCollection::CancelForcedResources(FStreamingManagerCollection *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (0 < (this->StreamingManagers).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->StreamingManagers).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(**(longlong **)((this->StreamingManagers).AllocatorInstance.Data + lVar5) + 0x28)
      )();
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->StreamingManagers).ArrayNum);
  }
  return;
}

// DisableResourceStreaming @ 1479bd1b0

void __thiscall
FStreamingManagerCollection::DisableResourceStreaming(FStreamingManagerCollection *this)

{
  LOCK();
  this->DisableResourceStreamingCount = this->DisableResourceStreamingCount + 1;
  UNLOCK();
  return;
}

// EnableResourceStreaming @ 1479bfe90

void __thiscall
FStreamingManagerCollection::EnableResourceStreaming(FStreamingManagerCollection *this)

{
  code *pcVar1;
  bool bVar2;
  
  LOCK();
  this->DisableResourceStreamingCount = this->DisableResourceStreamingCount + -1;
  UNLOCK();
  if (this->DisableResourceStreamingCount < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DisableResourceStreamingCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ContentStreaming.cpp"
                       ,0x455,
                       L"Mismatched number of calls to FStreamingManagerCollection::DisableResourceStreaming/EnableResourceStreaming"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Exec @ 1479c03d0

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
FStreamingManagerCollection::Exec
          (FStreamingManagerCollection *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3
          )

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = 0;
  if (0 < (this->StreamingManagers).ArrayNum) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->StreamingManagers).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      plVar1 = *(longlong **)((this->StreamingManagers).AllocatorInstance.Data + lVar8);
      cVar5 = (**(code **)(*plVar1 + 0x40))(plVar1,param_1,param_2,param_3);
      if (cVar5 != '\0') {
        return true;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < (this->StreamingManagers).ArrayNum);
  }
  return false;
}

// GetAnimationStreamingManager @ 1479c3db0

IAnimationStreamingManager * __thiscall
FStreamingManagerCollection::GetAnimationStreamingManager(FStreamingManagerCollection *this)

{
  code *pcVar1;
  bool bVar2;
  IAnimationStreamingManager *pIVar3;
  
  if (this->AnimationStreamingManager != (IAnimationStreamingManager *)0x0) {
    return this->AnimationStreamingManager;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("AnimationStreamingManager",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ContentStreaming.cpp"
                     ,0x415,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IAnimationStreamingManager *)(*pcVar1)();
    return pIVar3;
  }
  return this->AnimationStreamingManager;
}

// GetAudioStreamingManager @ 1479c4340

IAudioStreamingManager * __thiscall
FStreamingManagerCollection::GetAudioStreamingManager(FStreamingManagerCollection *this)

{
  code *pcVar1;
  bool bVar2;
  IAudioStreamingManager *pIVar3;
  
  if (this->AudioStreamingManager != (IAudioStreamingManager *)0x0) {
    return this->AudioStreamingManager;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("AudioStreamingManager",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ContentStreaming.cpp"
                     ,0x40f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IAudioStreamingManager *)(*pcVar1)();
    return pIVar3;
  }
  return this->AudioStreamingManager;
}

// GetNaniteCoarseMeshStreamingManager @ 1479cc430

FCoarseMeshStreamingManager * __thiscall
FStreamingManagerCollection::GetNaniteCoarseMeshStreamingManager(FStreamingManagerCollection *this)

{
  return this->NaniteCoarseMeshStreamingManager;
}

// GetNumWantingResources @ 1479cc820

int __thiscall
FStreamingManagerCollection::GetNumWantingResources(FStreamingManagerCollection *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar4 = 0;
  uVar6 = 0;
  if (0 < (this->StreamingManagers).ArrayNum) {
    lVar7 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->StreamingManagers).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      iVar5 = (**(code **)(**(longlong **)((this->StreamingManagers).AllocatorInstance.Data + lVar7)
                          + 0x80))();
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
      iVar4 = iVar4 + iVar5;
    } while ((int)uVar6 < (this->StreamingManagers).ArrayNum);
  }
  return iVar4;
}

// GetNumWantingResourcesID @ 1479cc8d0

int __thiscall
FStreamingManagerCollection::GetNumWantingResourcesID(FStreamingManagerCollection *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  iVar4 = 0x7fffffff;
  if ((this->StreamingManagers).ArrayNum < 1) {
    return 0x7fffffff;
  }
  lVar7 = 0;
  do {
    uVar3 = 0;
    if ((int)uVar6 < (this->StreamingManagers).ArrayNum) {
      uVar3 = ~uVar6 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
    }
    iVar5 = (**(code **)(**(longlong **)((this->StreamingManagers).AllocatorInstance.Data + lVar7) +
                        0x88))();
    if (iVar4 < iVar5) {
      iVar5 = iVar4;
    }
    iVar4 = iVar5;
    uVar6 = uVar6 + 1;
    lVar7 = lVar7 + 8;
  } while ((int)uVar6 < (this->StreamingManagers).ArrayNum);
  return iVar4;
}

// GetRenderAssetStreamingManager @ 1479cf040

IRenderAssetStreamingManager * __thiscall
FStreamingManagerCollection::GetRenderAssetStreamingManager(FStreamingManagerCollection *this)

{
  code *pcVar1;
  bool bVar2;
  IRenderAssetStreamingManager *pIVar3;
  
  if (this->RenderAssetStreamingManager != (FRenderAssetStreamingManager *)0x0) {
    return (IRenderAssetStreamingManager *)this->RenderAssetStreamingManager;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("RenderAssetStreamingManager != 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ContentStreaming.cpp"
                     ,0x405,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IRenderAssetStreamingManager *)(*pcVar1)();
    return pIVar3;
  }
  return (IRenderAssetStreamingManager *)this->RenderAssetStreamingManager;
}

// GetTextureStreamingManager @ 1479d3110

IRenderAssetStreamingManager * __thiscall
FStreamingManagerCollection::GetTextureStreamingManager(FStreamingManagerCollection *this)

{
  code *pcVar1;
  bool bVar2;
  IRenderAssetStreamingManager *pIVar3;
  
  if (this->RenderAssetStreamingManager != (FRenderAssetStreamingManager *)0x0) {
    return (IRenderAssetStreamingManager *)this->RenderAssetStreamingManager;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("RenderAssetStreamingManager != 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ContentStreaming.cpp"
                     ,0x405,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IRenderAssetStreamingManager *)(*pcVar1)();
    return pIVar3;
  }
  return (IRenderAssetStreamingManager *)this->RenderAssetStreamingManager;
}

// GetVirtualTextureStreamingManager @ 1479d52a0

FVirtualTextureChunkStreamingManager * __thiscall
FStreamingManagerCollection::GetVirtualTextureStreamingManager(FStreamingManagerCollection *this)

{
  code *pcVar1;
  bool bVar2;
  FVirtualTextureChunkStreamingManager *pFVar3;
  
  if (this->VirtualTextureStreamingManager != (FVirtualTextureChunkStreamingManager *)0x0) {
    return this->VirtualTextureStreamingManager;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("VirtualTextureStreamingManager",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ContentStreaming.cpp"
                     ,0x41b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FVirtualTextureChunkStreamingManager *)(*pcVar1)();
    return pFVar3;
  }
  return this->VirtualTextureStreamingManager;
}

// IsRenderAssetStreamingEnabled @ 1479da730

bool __thiscall
FStreamingManagerCollection::IsRenderAssetStreamingEnabled
          (FStreamingManagerCollection *this,EStreamableRenderAssetType param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarMeshStreaming.Ref;
  if (this->RenderAssetStreamingManager != (FRenderAssetStreamingManager *)0x0) {
    if ((param_1 == None) || (param_1 == Texture)) {
      return true;
    }
    if ((param_1 == StaticMesh) || (param_1 == SkeletalMesh)) {
      bVar2 = IsInParallelGameThread();
      if (!bVar2) {
        bVar2 = IsInGameThread();
        if (!bVar2) {
          return pTVar1->ShadowedValue[1] != 0;
        }
      }
      return pTVar1->ShadowedValue[0] != 0;
    }
    if (param_1 == NaniteCoarseMesh) {
      return GNaniteCoarseMeshStreamingEnabled != 0;
    }
  }
  return false;
}

// IsStreamingEnabled @ 1479da8d0

bool __thiscall FStreamingManagerCollection::IsStreamingEnabled(FStreamingManagerCollection *this)

{
  return this->DisableResourceStreamingCount == 0;
}

// IsTextureStreamingEnabled @ 1479da8e0

bool __thiscall
FStreamingManagerCollection::IsTextureStreamingEnabled(FStreamingManagerCollection *this)

{
  bool bVar1;
  
  bVar1 = IsRenderAssetStreamingEnabled(this,Texture);
  return bVar1;
}

// NotifyActorDestroyed @ 1479db290

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FStreamingManagerCollection::NotifyActorDestroyed(FStreamingManagerCollection *this,AActor *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->StreamingManagers).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->StreamingManagers).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->StreamingManagers).AllocatorInstance.Data + lVar6);
      (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->StreamingManagers).ArrayNum);
  }
  return;
}

// NotifyLevelChange @ 1479db360

void __thiscall FStreamingManagerCollection::NotifyLevelChange(FStreamingManagerCollection *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (0 < (this->StreamingManagers).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->StreamingManagers).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(**(longlong **)((this->StreamingManagers).AllocatorInstance.Data + lVar5) + 0x30)
      )();
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->StreamingManagers).ArrayNum);
  }
  return;
}

// NotifyLevelOffset @ 1479db410

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FStreamingManagerCollection::NotifyLevelOffset
          (FStreamingManagerCollection *this,ULevel *param_1,TVector<double> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->StreamingManagers).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->StreamingManagers).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->StreamingManagers).AllocatorInstance.Data + lVar6);
      (**(code **)(*plVar1 + 0x58))(plVar1,param_1,param_2);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->StreamingManagers).ArrayNum);
  }
  return;
}

// NotifyPrimitiveDetached @ 1479db4d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FStreamingManagerCollection::NotifyPrimitiveDetached
          (FStreamingManagerCollection *this,UPrimitiveComponent *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->StreamingManagers).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->StreamingManagers).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->StreamingManagers).AllocatorInstance.Data + lVar6);
      (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->StreamingManagers).ArrayNum);
  }
  return;
}

// NotifyPrimitiveUpdated @ 1479db580

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FStreamingManagerCollection::NotifyPrimitiveUpdated
          (FStreamingManagerCollection *this,UPrimitiveComponent *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->StreamingManagers).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->StreamingManagers).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->StreamingManagers).AllocatorInstance.Data + lVar6);
      (**(code **)(*plVar1 + 0x70))(plVar1,param_1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->StreamingManagers).ArrayNum);
  }
  return;
}

// NotifyPrimitiveUpdated_Concurrent @ 1479db630

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FStreamingManagerCollection::NotifyPrimitiveUpdated_Concurrent
          (FStreamingManagerCollection *this,UPrimitiveComponent *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->StreamingManagers).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->StreamingManagers).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->StreamingManagers).AllocatorInstance.Data + lVar6);
      (**(code **)(*plVar1 + 0x78))(plVar1,param_1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->StreamingManagers).ArrayNum);
  }
  return;
}

// PropagateLightingScenarioChange @ 1479df0b0

void __thiscall
FStreamingManagerCollection::PropagateLightingScenarioChange(FStreamingManagerCollection *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (0 < (this->StreamingManagers).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->StreamingManagers).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(**(longlong **)((this->StreamingManagers).AllocatorInstance.Data + lVar5) + 0x90)
      )();
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->StreamingManagers).ArrayNum);
  }
  return;
}

// RemoveLevel @ 1479e3d20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FStreamingManagerCollection::RemoveLevel(FStreamingManagerCollection *this,ULevel *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->StreamingManagers).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->StreamingManagers).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->StreamingManagers).AllocatorInstance.Data + lVar6);
      (**(code **)(*plVar1 + 0x50))(plVar1,param_1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->StreamingManagers).ArrayNum);
  }
  return;
}

// RemoveStreamingManager @ 1479e4660

void __thiscall
FStreamingManagerCollection::RemoveStreamingManager
          (FStreamingManagerCollection *this,IStreamingManager *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  IStreamingManager *pIVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  IStreamingManager *local_res10;
  
  pFVar2 = (this->StreamingManagers).AllocatorInstance.Data;
  local_res10 = param_1;
  if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar2 + (longlong)(this->StreamingManagers).ArrayMax * 8)) &&
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
  iVar1 = (this->StreamingManagers).ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (this->StreamingManagers).AllocatorInstance.Data;
    bVar4 = *(IStreamingManager **)pFVar2 != local_res10;
    lVar6 = 0;
    pIVar5 = local_res10;
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(IStreamingManager **)(pFVar2 + lVar6 * 8) != pIVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pIVar5 = local_res10;
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (this->StreamingManagers).ArrayNum = iVar9;
  }
  return;
}

// SetDisregardWorldResourcesForFrames @ 1479e7c30

void __thiscall
FStreamingManagerCollection::SetDisregardWorldResourcesForFrames
          (FStreamingManagerCollection *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->StreamingManagers).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->StreamingManagers).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->StreamingManagers).AllocatorInstance.Data + lVar6);
      (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->StreamingManagers).ArrayNum);
  }
  return;
}

// SetNumIterationsForNextFrame @ 1479e9970

void __thiscall
FStreamingManagerCollection::SetNumIterationsForNextFrame
          (FStreamingManagerCollection *this,int param_1)

{
  this->NumIterations = param_1;
  return;
}

// StreamAllResources @ 1479ee1f0

int __thiscall
FStreamingManagerCollection::StreamAllResources(FStreamingManagerCollection *this,float param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = GEnableMipLevelFading;
  GEnableMipLevelFading = -1.0;
  FlushRenderingCommands();
  if ((float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    param_1 = this->LoadMapTimeLimit;
  }
  (**(code **)(this->_padding_ + 0x10))(this,0,1);
  iVar2 = (**(code **)(this->_padding_ + 0x20))(this,param_1,1);
  GEnableMipLevelFading = fVar1;
  return iVar2;
}

// Tick @ 1479ee480

void __thiscall
FStreamingManagerCollection::Tick(FStreamingManagerCollection *this,float param_1,bool param_2)

{
  FLLMScope local_res8 [2];
  FLLMScope local_res20 [2];
  FMemScope local_28;
  FMemScope local_20 [3];
  
  FLLMScope::FLLMScope(local_res20,StreamingManager,false,None,Default,true);
  FMemScope::FMemScope(local_20,StreamingManager,true);
  (**(code **)(this->_padding_ + 0x98))(this,0);
  FLLMScope::FLLMScope(local_res8,StreamingManager,false,None,Default,true);
  FMemScope::FMemScope(&local_28,StreamingManager,true);
  (**(code **)(this->_padding_ + 0x10))(this,param_1,param_2);
  IStreamingManager::bPendingRemoveViews = true;
  FMemScope::~FMemScope(&local_28);
  FLLMScope::~FLLMScope(local_res8);
  FMemScope::~FMemScope(local_20);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// UpdateResourceStreaming @ 1479f2be0

void __thiscall
FStreamingManagerCollection::UpdateResourceStreaming
          (FStreamingManagerCollection *this,float param_1,bool param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId850,"FStreamingManagerCollection::UpdateResourceStreaming",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ContentStreaming.cpp"
               ,0x352);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId850);
  }
  IStreamingManager::SetupViewInfos((IStreamingManager *)this,param_1);
  if (this->DisableResourceStreamingCount == 0) {
    iVar5 = 0;
    if (0 < this->NumIterations) {
      do {
        if (0 < iVar5) {
          FlushRenderingCommands();
        }
        uVar6 = 0;
        if (0 < (this->StreamingManagers).ArrayNum) {
          lVar7 = 0;
          do {
            uVar4 = 0;
            if ((int)uVar6 < (this->StreamingManagers).ArrayNum) {
              uVar4 = ~uVar6 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            plVar1 = *(longlong **)((this->StreamingManagers).AllocatorInstance.Data + lVar7);
            (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_2);
            uVar6 = uVar6 + 1;
            lVar7 = lVar7 + 8;
          } while ((int)uVar6 < (this->StreamingManagers).ArrayNum);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < this->NumIterations);
    }
    this->NumIterations = 1;
  }
  if (!bVar8) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

