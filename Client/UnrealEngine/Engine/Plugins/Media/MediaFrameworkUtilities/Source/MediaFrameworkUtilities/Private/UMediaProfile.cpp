// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaFrameworkUtilities
// Functions: 30

// StaticClass @ 14d7cb900

UClass * __cdecl UMediaProfile::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaProfile.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"MediaProfile",
               &Z_Registration_Info_UClass_UMediaProfile.InnerSingleton,
               StaticRegisterNativesUMediaProfile,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMediaProfile>,InternalVTableHelperCtorCaller<UMediaProfile>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaProfile.InnerSingleton;
}

// UMediaProfile @ 14d7d0ac0

UMediaProfile * __thiscall UMediaProfile::UMediaProfile(UMediaProfile *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMediaProfile__6B_;
  (this->MediaSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MediaSources).ArrayNum = 0;
  (this->MediaSources).ArrayMax = 0;
  (this->MediaOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MediaOutputs).ArrayNum = 0;
  (this->MediaOutputs).ArrayMax = 0;
  (this->TimecodeProvider).field0_0x0.DebugPtr = (UTimecodeProvider *)0x0;
  (this->CustomTimeStep).field0_0x0.DebugPtr = (UEngineCustomTimeStep *)0x0;
  (this->AppliedTimecodeProvider).field0_0x0.DebugPtr = (UTimecodeProvider *)0x0;
  (this->PreviousTimecodeProvider).field0_0x0.DebugPtr = (UTimecodeProvider *)0x0;
  (this->AppliedCustomTimeStep).field0_0x0.DebugPtr = (UEngineCustomTimeStep *)0x0;
  (this->PreviousCustomTimeStep).field0_0x0.DebugPtr = (UEngineCustomTimeStep *)0x0;
  (this->PlaybackManager).field0_0x0.DebugPtr = (UMediaProfilePlaybackManager *)0x0;
  return this;
}

// UMediaProfile @ 14d7d0b20

UMediaProfile * __thiscall
UMediaProfile::UMediaProfile(UMediaProfile *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UMediaProfilePlaybackManager *pUVar4;
  FName local_res8;
  
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UMediaProfile__6B_;
  (this->MediaSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MediaSources).ArrayNum = 0;
  (this->MediaSources).ArrayMax = 0;
  (this->MediaOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MediaOutputs).ArrayNum = 0;
  (this->MediaOutputs).ArrayMax = 0;
  (this->TimecodeProvider).field0_0x0.DebugPtr = (UTimecodeProvider *)0x0;
  (this->CustomTimeStep).field0_0x0.DebugPtr = (UEngineCustomTimeStep *)0x0;
  (this->AppliedTimecodeProvider).field0_0x0.DebugPtr = (UTimecodeProvider *)0x0;
  (this->PreviousTimecodeProvider).field0_0x0.DebugPtr = (UTimecodeProvider *)0x0;
  (this->AppliedCustomTimeStep).field0_0x0.DebugPtr = (UEngineCustomTimeStep *)0x0;
  (this->PreviousCustomTimeStep).field0_0x0.DebugPtr = (UEngineCustomTimeStep *)0x0;
  (this->PlaybackManager).field0_0x0.DebugPtr = (UMediaProfilePlaybackManager *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"PlaybackManager");
  FVar1 = *pFVar2;
  pUVar3 = UMediaProfilePlaybackManager::StaticClass();
  pUVar4 = (UMediaProfilePlaybackManager *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,true);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UMediaProfilePlaybackManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->PlaybackManager).field0_0x0.DebugPtr = pUVar4;
  return this;
}

// ~UMediaProfile @ 14d7d1ba0

void __thiscall UMediaProfile::~UMediaProfile(UMediaProfile *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMediaProfile__6B_;
  pFVar1 = (this->MediaOutputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MediaSources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddMediaOutput @ 14d7d3200

void __thiscall UMediaProfile::AddMediaOutput(UMediaProfile *this,UMediaOutput *param_1)

{
  TArray<TObjectPtr<UMediaOutput>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UMediaOutput *local_18 [2];
  
  pTVar1 = &this->MediaOutputs;
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMediaOutput *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->MediaOutputs).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->MediaOutputs).ArrayNum;
  piVar2 = &(this->MediaOutputs).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->MediaOutputs).ArrayNum = iVar6 + 1;
  *(UMediaOutput **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UMediaOutput *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// AddMediaSource @ 14d7d32f0

void __thiscall UMediaProfile::AddMediaSource(UMediaProfile *this,UMediaSource *param_1)

{
  TArray<TObjectPtr<UMediaSource>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UMediaSource *local_18 [2];
  
  pTVar1 = &this->MediaSources;
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMediaSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->MediaSources).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->MediaSources).ArrayNum;
  piVar2 = &(this->MediaSources).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->MediaSources).ArrayNum = iVar6 + 1;
  *(UMediaSource **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UMediaSource *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// Apply @ 14d7d3460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMediaProfile::Apply(UMediaProfile *this)

{
  longlong lVar1;
  UObject *pUVar2;
  UTimecodeProvider *pUVar3;
  UTimecodeProvider *pUVar4;
  UEngineCustomTimeStep *pUVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  IMediaProfileManager *pIVar9;
  uint uVar10;
  longlong lVar11;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  void *local_88;
  int local_80;
  void *local_78;
  int local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if (GEngine == (UEngine *)0x0) {
    if ((byte)LogMediaFrameworkUtilities._0_1_ < 2) {
      return;
    }
    local_res10 = (FName)this->_padding_;
    ::FName::ToString(&local_res10,&local_68);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities)
    ;
    if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
    return;
  }
  FixNumSourcesAndOutputs(this);
  pIVar9 = IMediaProfileManager::Get();
  (**(code **)((longlong)*pIVar9 + 0x18))(pIVar9,&local_88);
  if ((local_80 != (this->MediaSources).ArrayNum) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceProxies.Num() == MediaSources.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaFrameworkUtilities\\Source\\MediaFrameworkUtilities\\Private\\Profile\\MediaProfile.cpp"
                         ,0x1c6,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar10 = 0;
  if (0 < (this->MediaSources).ArrayNum) {
    lVar11 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < local_80) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar1 = *(longlong *)(lVar11 + (longlong)local_88);
      if (lVar1 != 0) {
        uVar8 = 0;
        if ((int)uVar10 < (this->MediaSources).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pUVar2 = *(UObject **)((this->MediaSources).AllocatorInstance.Data + lVar11);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        *(UObject **)(lVar1 + 0x80) = pUVar2;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar10 < (this->MediaSources).ArrayNum);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  pIVar9 = IMediaProfileManager::Get();
  (**(code **)((longlong)*pIVar9 + 0x20))(pIVar9);
  if ((local_70 != (this->MediaOutputs).ArrayNum) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputProxies.Num() == MediaOutputs.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaFrameworkUtilities\\Source\\MediaFrameworkUtilities\\Private\\Profile\\MediaProfile.cpp"
                         ,0x1d3,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar10 = 0;
  if (0 < (this->MediaOutputs).ArrayNum) {
    lVar11 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < local_70) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar1 = *(longlong *)(lVar11 + (longlong)local_78);
      if (lVar1 != 0) {
        uVar8 = 0;
        if ((int)uVar10 < (this->MediaOutputs).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pUVar2 = *(UObject **)((this->MediaOutputs).AllocatorInstance.Data + lVar11);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        *(UObject **)(lVar1 + 0x30) = pUVar2;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar10 < (this->MediaOutputs).ArrayNum);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  ResetTimecodeProvider(this);
  if (this->bOverrideTimecodeProvider == false) goto LAB_14d7d3883;
  this->bTimecodeProvideWasApplied = true;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 = (this->TimecodeProvider).field0_0x0.DebugPtr, pUVar3 != (UTimecodeProvider *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->AppliedTimecodeProvider).field0_0x0 = (this->TimecodeProvider).field0_0x0;
  pUVar3 = (GEngine->TimecodeProvider).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar3 == (UTimecodeProvider *)0x0))
  {
    (this->PreviousTimecodeProvider).field0_0x0.DebugPtr = pUVar3;
    if (pUVar3 != (UTimecodeProvider *)0x0) goto LAB_14d7d37ed;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
    (this->PreviousTimecodeProvider).field0_0x0.DebugPtr = pUVar3;
LAB_14d7d37ed:
    pUVar4 = (this->AppliedTimecodeProvider).field0_0x0.DebugPtr;
    if ((pUVar4 != (UTimecodeProvider *)0x0) && (pUVar3->_padding_ == pUVar4->_padding_)) {
      UEngine::SetTimecodeProvider(GEngine,(UTimecodeProvider *)0x0);
      FWindowsPlatformProcess::Sleep(__real_3e4ccccd);
    }
  }
  bVar7 = UEngine::SetTimecodeProvider(GEngine,(this->TimecodeProvider).field0_0x0.DebugPtr);
  if (((!bVar7) &&
      (pUVar3 = (this->TimecodeProvider).field0_0x0.DebugPtr, pUVar3 != (UTimecodeProvider *)0x0))
     && (2 < (byte)LogMediaFrameworkUtilities._0_1_)) {
    local_res18 = (FName)pUVar3->_padding_;
    ::FName::ToString(&local_res18,&local_58);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities)
    ;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
LAB_14d7d3883:
  ResetCustomTimeStep(this);
  if (this->bOverrideCustomTimeStep != false) {
    this->bCustomTimeStepWasApplied = true;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (UObject *)(this->CustomTimeStep).field0_0x0.DebugPtr, pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    (this->AppliedCustomTimeStep).field0_0x0 = (this->CustomTimeStep).field0_0x0;
    pUVar2 = (UObject *)(GEngine->CustomTimeStep).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    (this->PreviousCustomTimeStep).field0_0x0.DebugPtr = (UEngineCustomTimeStep *)pUVar2;
    bVar7 = UEngine::SetCustomTimeStep(GEngine,(this->CustomTimeStep).field0_0x0.DebugPtr);
    if (((!bVar7) &&
        (pUVar5 = (this->CustomTimeStep).field0_0x0.DebugPtr, pUVar5 != (UEngineCustomTimeStep *)0x0
        )) && (2 < (byte)LogMediaFrameworkUtilities._0_1_)) {
      local_res20.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
      local_res20.Number = *(uint *)&pUVar5->field_0x1c;
      ::FName::ToString(&local_res20,&local_48);
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ApplyCustomTimeStep @ 14d7d3970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMediaProfile::ApplyCustomTimeStep(UMediaProfile *this)

{
  UObject *pUVar1;
  UEngineCustomTimeStep *pUVar2;
  bool bVar3;
  FName local_res8;
  FString local_18;
  
  ResetCustomTimeStep(this);
  if (this->bOverrideCustomTimeStep != false) {
    this->bCustomTimeStepWasApplied = true;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (UObject *)(this->CustomTimeStep).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    (this->AppliedCustomTimeStep).field0_0x0 = (this->CustomTimeStep).field0_0x0;
    pUVar1 = (UObject *)(GEngine->CustomTimeStep).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    (this->PreviousCustomTimeStep).field0_0x0.DebugPtr = (UEngineCustomTimeStep *)pUVar1;
    bVar3 = UEngine::SetCustomTimeStep(GEngine,(this->CustomTimeStep).field0_0x0.DebugPtr);
    if (((!bVar3) &&
        (pUVar2 = (this->CustomTimeStep).field0_0x0.DebugPtr, pUVar2 != (UEngineCustomTimeStep *)0x0
        )) && (2 < (byte)LogMediaFrameworkUtilities._0_1_)) {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
      local_res8.Number = *(uint *)&pUVar2->field_0x1c;
      ::FName::ToString(&local_res8,&local_18);
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ApplyTimecodeProvider @ 14d7d3a70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMediaProfile::ApplyTimecodeProvider(UMediaProfile *this)

{
  UTimecodeProvider *pUVar1;
  UTimecodeProvider *pUVar2;
  bool bVar3;
  FName local_res8;
  FString local_18;
  
  ResetTimecodeProvider(this);
  if (this->bOverrideTimecodeProvider == false) {
    return;
  }
  this->bTimecodeProvideWasApplied = true;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (this->TimecodeProvider).field0_0x0.DebugPtr, pUVar1 != (UTimecodeProvider *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->AppliedTimecodeProvider).field0_0x0 = (this->TimecodeProvider).field0_0x0;
  pUVar1 = (GEngine->TimecodeProvider).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar1 == (UTimecodeProvider *)0x0))
  {
    (this->PreviousTimecodeProvider).field0_0x0.DebugPtr = pUVar1;
    if (pUVar1 == (UTimecodeProvider *)0x0) goto LAB_14d7d3b11;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
    (this->PreviousTimecodeProvider).field0_0x0.DebugPtr = pUVar1;
  }
  pUVar2 = (this->AppliedTimecodeProvider).field0_0x0.DebugPtr;
  if ((pUVar2 != (UTimecodeProvider *)0x0) && (pUVar1->_padding_ == pUVar2->_padding_)) {
    UEngine::SetTimecodeProvider(GEngine,(UTimecodeProvider *)0x0);
    FWindowsPlatformProcess::Sleep(__real_3e4ccccd);
  }
LAB_14d7d3b11:
  bVar3 = UEngine::SetTimecodeProvider(GEngine,(this->TimecodeProvider).field0_0x0.DebugPtr);
  if (((!bVar3) &&
      (pUVar1 = (this->TimecodeProvider).field0_0x0.DebugPtr, pUVar1 != (UTimecodeProvider *)0x0))
     && (2 < (byte)LogMediaFrameworkUtilities._0_1_)) {
    local_res8 = (FName)pUVar1->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities)
    ;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// FindMediaOutputIndex @ 14d7d7570

int __thiscall UMediaProfile::FindMediaOutputIndex(UMediaProfile *this,UMediaOutput *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMediaOutput *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar1 = (this->MediaOutputs).AllocatorInstance.Data;
  pFVar2 = pFVar1;
  while( true ) {
    if (pFVar2 == pFVar1 + (longlong)(this->MediaOutputs).ArrayNum * 8) {
      return -1;
    }
    if (*(UMediaOutput **)pFVar2 == param_1) break;
    pFVar2 = pFVar2 + 8;
  }
  return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 3);
}

// FindMediaSourceIndex @ 14d7d75f0

int __thiscall UMediaProfile::FindMediaSourceIndex(UMediaProfile *this,UMediaSource *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMediaSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar1 = (this->MediaSources).AllocatorInstance.Data;
  pFVar2 = pFVar1;
  while( true ) {
    if (pFVar2 == pFVar1 + (longlong)(this->MediaSources).ArrayNum * 8) {
      return -1;
    }
    if (*(UMediaSource **)pFVar2 == param_1) break;
    pFVar2 = pFVar2 + 8;
  }
  return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 3);
}

// FixNumSourcesAndOutputs @ 14d7d7970

void __thiscall UMediaProfile::FixNumSourcesAndOutputs(UMediaProfile *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  IMediaProfileManager *pIVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  void *local_38 [2];
  void *local_28 [2];
  
  pIVar9 = IMediaProfileManager::Get();
  lVar10 = (**(code **)((longlong)*pIVar9 + 0x18))(pIVar9,local_38);
  uVar12 = *(uint *)(lVar10 + 8);
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  pIVar9 = IMediaProfileManager::Get();
  lVar10 = (**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,local_28);
  uVar3 = *(uint *)(lVar10 + 8);
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  uVar11 = (this->MediaSources).ArrayNum;
  uVar4 = (this->MediaOutputs).ArrayNum;
  if (uVar11 != uVar12) {
    if ((int)uVar11 < (int)uVar12) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar12 - uVar11,&(this->MediaSources).AllocatorInstance,
                         &(this->MediaSources).ArrayNum,&(this->MediaSources).ArrayMax);
      memset((this->MediaSources).AllocatorInstance.Data + (longlong)iVar7 * 8,0,
             (longlong)(int)(uVar12 - uVar11) << 3);
    }
    else {
      if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
      }
      if ((int)uVar12 < (int)uVar11) {
        uVar11 = uVar11 - uVar12;
        if ((int)(uVar11 | uVar12) < 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (uVar11 != 0) {
          pFVar2 = (this->MediaSources).AllocatorInstance.Data + (longlong)(int)uVar12 * 8;
          iVar7 = ((this->MediaSources).ArrayNum - uVar12) - uVar11;
          if (iVar7 != 0) {
            memmove(pFVar2,pFVar2 + (longlong)(int)uVar11 * 8,(longlong)iVar7 << 3);
          }
          piVar1 = &(this->MediaSources).ArrayNum;
          *piVar1 = *piVar1 - uVar11;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&(this->MediaSources).AllocatorInstance,(this->MediaSources).ArrayNum,
                     &(this->MediaSources).ArrayMax);
        }
      }
    }
  }
  if (uVar4 != uVar3) {
    iVar7 = (this->MediaOutputs).ArrayNum;
    if (iVar7 < (int)uVar3) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar3 - iVar7,&(this->MediaOutputs).AllocatorInstance,
                         &(this->MediaOutputs).ArrayNum,&(this->MediaOutputs).ArrayMax);
      memset((this->MediaOutputs).AllocatorInstance.Data + (longlong)iVar8 * 8,0,
             (longlong)(int)(uVar3 - iVar7) << 3);
    }
    else {
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
      }
      if ((int)uVar3 < iVar7) {
        uVar12 = iVar7 - uVar3;
        if ((int)(uVar12 | uVar3) < 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (uVar12 != 0) {
          pFVar2 = (this->MediaOutputs).AllocatorInstance.Data + (longlong)(int)uVar3 * 8;
          iVar7 = ((this->MediaOutputs).ArrayNum - uVar3) - uVar12;
          if (iVar7 != 0) {
            memmove(pFVar2,pFVar2 + (longlong)(int)uVar12 * 8,(longlong)iVar7 << 3);
          }
          piVar1 = &(this->MediaOutputs).ArrayNum;
          *piVar1 = *piVar1 - uVar12;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&(this->MediaOutputs).AllocatorInstance,(this->MediaOutputs).ArrayNum,
                     &(this->MediaOutputs).ArrayMax);
        }
      }
    }
  }
  return;
}

// GetCustomTimeStep @ 14d7d8390

UEngineCustomTimeStep * __thiscall UMediaProfile::GetCustomTimeStep(UMediaProfile *this)

{
  UObject *pUVar1;
  
  if (this->bOverrideCustomTimeStep != false) {
    pUVar1 = (UObject *)(this->CustomTimeStep).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    return (UEngineCustomTimeStep *)pUVar1;
  }
  return (UEngineCustomTimeStep *)0x0;
}

// GetMediaOutput @ 14d7d8f40

UMediaOutput * __thiscall UMediaProfile::GetMediaOutput(UMediaProfile *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UMediaOutput *pUVar4;
  
  if ((-1 < param_1) && (param_1 < (this->MediaOutputs).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->MediaOutputs).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UMediaOutput *)(*pcVar1)();
        return pUVar4;
      }
    }
    return *(UMediaOutput **)((this->MediaOutputs).AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  return (UMediaOutput *)0x0;
}

// GetMediaSource @ 14d7d9010

UMediaSource * __thiscall UMediaProfile::GetMediaSource(UMediaProfile *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UMediaSource *pUVar4;
  
  if ((-1 < param_1) && (param_1 < (this->MediaSources).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->MediaSources).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UMediaSource *)(*pcVar1)();
        return pUVar4;
      }
    }
    return *(UMediaSource **)((this->MediaSources).AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  return (UMediaSource *)0x0;
}

// GetPrivateStaticClass @ 14d7daa20

UClass * __cdecl UMediaProfile::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaProfile.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"MediaProfile",
               &Z_Registration_Info_UClass_UMediaProfile.InnerSingleton,
               StaticRegisterNativesUMediaProfile,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMediaProfile>,InternalVTableHelperCtorCaller<UMediaProfile>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaProfile.InnerSingleton;
}

// GetTimecodeProvider @ 14d7db520

UTimecodeProvider * __thiscall UMediaProfile::GetTimecodeProvider(UMediaProfile *this)

{
  UTimecodeProvider *pUVar1;
  
  if (this->bOverrideTimecodeProvider != false) {
    pUVar1 = (this->TimecodeProvider).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UTimecodeProvider *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return pUVar1;
  }
  return (UTimecodeProvider *)0x0;
}

// MoveMediaOutput @ 14d7dc940

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall UMediaProfile::MoveMediaOutput(UMediaProfile *this,int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  UObject *local_18 [2];
  
  if ((((-1 < param_1) && (iVar6 = (this->MediaOutputs).ArrayNum, param_1 < iVar6)) &&
      (-1 < param_2)) && (param_2 < iVar6)) {
    UMediaProfilePlaybackManager::ChangeMediaOutputIndex
              ((this->PlaybackManager).field0_0x0.DebugPtr,param_1,param_2);
    uVar5 = 0;
    if (param_1 < (this->MediaOutputs).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    local_18[0] = *(UObject **)((this->MediaOutputs).AllocatorInstance.Data + (longlong)param_1 * 8)
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_18[0]);
    }
    TArray<TObjectPtr<UMediaOutput>,TSizedDefaultAllocator<32>_>::RemoveAt
              (&this->MediaOutputs,param_1,No);
    pFVar7 = (this->MediaOutputs).AllocatorInstance.Data;
    if ((pFVar7 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 < pFVar7 + (longlong)(this->MediaOutputs).ArrayMax * 8))
    {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar6 = (this->MediaOutputs).ArrayNum;
    piVar1 = &(this->MediaOutputs).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->MediaOutputs).AllocatorInstance,piVar1);
    }
    pFVar7 = (this->MediaOutputs).AllocatorInstance.Data;
    (this->MediaOutputs).ArrayNum = iVar6 + 1;
    pFVar7 = pFVar7 + (longlong)param_2 * 8;
    memmove(pFVar7 + 8,pFVar7,(longlong)(iVar6 - param_2) << 3);
    *(UObject **)((this->MediaOutputs).AllocatorInstance.Data + (longlong)param_2 * 8) = local_18[0]
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_18[0]);
    }
    return true;
  }
  return false;
}

// MoveMediaSource @ 14d7dcb00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall UMediaProfile::MoveMediaSource(UMediaProfile *this,int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  UObject *local_18 [2];
  
  if ((((-1 < param_1) && (iVar6 = (this->MediaSources).ArrayNum, param_1 < iVar6)) &&
      (-1 < param_2)) && (param_2 < iVar6)) {
    UMediaProfilePlaybackManager::ChangeMediaSourceIndex
              ((this->PlaybackManager).field0_0x0.DebugPtr,param_1,param_2);
    uVar5 = 0;
    if (param_1 < (this->MediaSources).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    local_18[0] = *(UObject **)((this->MediaSources).AllocatorInstance.Data + (longlong)param_1 * 8)
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_18[0]);
    }
    TArray<TObjectPtr<UMediaSource>,TSizedDefaultAllocator<32>_>::RemoveAt
              (&this->MediaSources,param_1,No);
    pFVar7 = (this->MediaSources).AllocatorInstance.Data;
    if ((pFVar7 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 < pFVar7 + (longlong)(this->MediaSources).ArrayMax * 8))
    {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar6 = (this->MediaSources).ArrayNum;
    piVar1 = &(this->MediaSources).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->MediaSources).AllocatorInstance,piVar1);
    }
    pFVar7 = (this->MediaSources).AllocatorInstance.Data;
    (this->MediaSources).ArrayNum = iVar6 + 1;
    pFVar7 = pFVar7 + (longlong)param_2 * 8;
    memmove(pFVar7 + 8,pFVar7,(longlong)(iVar6 - param_2) << 3);
    *(UObject **)((this->MediaSources).AllocatorInstance.Data + (longlong)param_2 * 8) = local_18[0]
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_18[0]);
    }
    return true;
  }
  return false;
}

// NumMediaOutputs @ 14d7dccc0

int __thiscall UMediaProfile::NumMediaOutputs(UMediaProfile *this)

{
  return (this->MediaOutputs).ArrayNum;
}

// NumMediaSources @ 14d7dccd0

int __thiscall UMediaProfile::NumMediaSources(UMediaProfile *this)

{
  return (this->MediaSources).ArrayNum;
}

// RemoveMediaOutput @ 14d7e0720

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall UMediaProfile::RemoveMediaOutput(UMediaProfile *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < (this->MediaOutputs).ArrayNum)) {
    UMediaProfilePlaybackManager::ChangeMediaOutputIndex
              ((this->PlaybackManager).field0_0x0.DebugPtr,param_1,-1);
    TArray<TObjectPtr<UMediaOutput>,TSizedDefaultAllocator<32>_>::RemoveAt
              (&this->MediaOutputs,param_1,No);
    return true;
  }
  return false;
}

// RemoveMediaSource @ 14d7e0780

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall UMediaProfile::RemoveMediaSource(UMediaProfile *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < (this->MediaSources).ArrayNum)) {
    UMediaProfilePlaybackManager::ChangeMediaSourceIndex
              ((this->PlaybackManager).field0_0x0.DebugPtr,param_1,-1);
    TArray<TObjectPtr<UMediaSource>,TSizedDefaultAllocator<32>_>::RemoveAt
              (&this->MediaSources,param_1,No);
    return true;
  }
  return false;
}

// Reset @ 14d7e0880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMediaProfile::Reset(UMediaProfile *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  IMediaProfileManager *pIVar3;
  ForAnyElementType FVar4;
  FName local_res10;
  FString local_28;
  
  if (GEngine != (UEngine *)0x0) {
    pIVar3 = IMediaProfileManager::Get();
    (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,&local_28);
    iVar2 = local_28.Data.ArrayNum;
    pFVar1 = local_28.Data.AllocatorInstance.Data + (longlong)local_28.Data.ArrayNum * 8;
    FVar4.Data = local_28.Data.AllocatorInstance.Data;
    while( true ) {
      if (local_28.Data.ArrayNum != iVar2) {
        `TCheckedPointerIterator<UProxyMediaSource_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
      }
      if (FVar4.Data == pFVar1) break;
      if (*(longlong *)FVar4.Data != 0) {
        *(undefined8 *)(*(longlong *)FVar4.Data + 0x80) = 0;
      }
      FVar4.Data = FVar4.Data + 8;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pIVar3 = IMediaProfileManager::Get();
    (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,&local_28);
    iVar2 = local_28.Data.ArrayNum;
    pFVar1 = local_28.Data.AllocatorInstance.Data + (longlong)local_28.Data.ArrayNum * 8;
    FVar4.Data = local_28.Data.AllocatorInstance.Data;
    while( true ) {
      if (local_28.Data.ArrayNum != iVar2) {
        `TCheckedPointerIterator<UProxyMediaOutput_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
      }
      if (FVar4.Data == pFVar1) break;
      if (*(longlong *)FVar4.Data != 0) {
        *(undefined8 *)(*(longlong *)FVar4.Data + 0x30) = 0;
      }
      FVar4.Data = FVar4.Data + 8;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ResetTimecodeProvider(this);
    ResetCustomTimeStep(this);
    return;
  }
  if (1 < (byte)LogMediaFrameworkUtilities._0_1_) {
    local_res10 = (FName)this->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities)
    ;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// ResetCustomTimeStep @ 14d7e0a00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMediaProfile::ResetCustomTimeStep(UMediaProfile *this)

{
  UEngineCustomTimeStep *pUVar1;
  UEngineCustomTimeStep *pUVar2;
  FStaticBasicLogRecord *pFVar3;
  bool bVar4;
  FName local_res8 [4];
  FString local_18;
  
  if (this->bCustomTimeStepWasApplied == false) {
    return;
  }
  pUVar1 = (this->AppliedCustomTimeStep).field0_0x0.DebugPtr;
  pUVar2 = (GEngine->CustomTimeStep).field0_0x0.DebugPtr;
  if (pUVar1 == (UEngineCustomTimeStep *)0x0) {
    bVar4 = pUVar2 == (UEngineCustomTimeStep *)0x0;
  }
  else {
    bVar4 = pUVar1 == pUVar2;
  }
  if (bVar4) {
    bVar4 = UEngine::SetCustomTimeStep(GEngine,(this->PreviousCustomTimeStep).field0_0x0.DebugPtr);
    if (((bVar4) ||
        (pUVar1 = (this->PreviousCustomTimeStep).field0_0x0.DebugPtr,
        pUVar1 == (UEngineCustomTimeStep *)0x0)) || ((byte)LogMediaFrameworkUtilities._0_1_ < 3))
    goto LAB_14d7e0b13;
    local_res8[0].ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
    local_res8[0].Number = *(uint *)&pUVar1->field_0x1c;
    ::FName::ToString(local_res8,&local_18);
    pFVar3 = &::LOG_Static;
  }
  else {
    pUVar1 = (this->PreviousCustomTimeStep).field0_0x0.DebugPtr;
    if (pUVar1 == (UEngineCustomTimeStep *)0x0) {
      if (2 < (byte)LogMediaFrameworkUtilities._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities);
      }
      goto LAB_14d7e0b13;
    }
    if ((byte)LogMediaFrameworkUtilities._0_1_ < 3) goto LAB_14d7e0b13;
    local_res8[0].ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
    local_res8[0].Number = *(uint *)&pUVar1->field_0x1c;
    ::FName::ToString(local_res8,&local_18);
    pFVar3 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar3,(FLogCategoryBase *)&LogMediaFrameworkUtilities);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_14d7e0b13:
  (this->PreviousCustomTimeStep).field0_0x0.DebugPtr = (UEngineCustomTimeStep *)0x0;
  (this->AppliedCustomTimeStep).field0_0x0.DebugPtr = (UEngineCustomTimeStep *)0x0;
  this->bCustomTimeStepWasApplied = false;
  return;
}

// ResetTimecodeProvider @ 14d7e0b40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMediaProfile::ResetTimecodeProvider(UMediaProfile *this)

{
  UTimecodeProvider *pUVar1;
  UTimecodeProvider *pUVar2;
  FStaticBasicLogRecord *pFVar3;
  bool bVar4;
  FName local_res8 [4];
  FString local_18;
  
  if (this->bTimecodeProvideWasApplied == false) {
    return;
  }
  pUVar1 = (this->AppliedTimecodeProvider).field0_0x0.DebugPtr;
  pUVar2 = (GEngine->TimecodeProvider).field0_0x0.DebugPtr;
  if (pUVar1 == (UTimecodeProvider *)0x0) {
    bVar4 = pUVar2 == (UTimecodeProvider *)0x0;
  }
  else {
    bVar4 = pUVar1 == pUVar2;
  }
  if (bVar4) {
    bVar4 = UEngine::SetTimecodeProvider
                      (GEngine,(this->PreviousTimecodeProvider).field0_0x0.DebugPtr);
    if (((bVar4) ||
        (pUVar1 = (this->PreviousTimecodeProvider).field0_0x0.DebugPtr,
        pUVar1 == (UTimecodeProvider *)0x0)) || ((byte)LogMediaFrameworkUtilities._0_1_ < 3))
    goto LAB_14d7e0c55;
    local_res8[0] = (FName)pUVar1->_padding_;
    ::FName::ToString(local_res8,&local_18);
    pFVar3 = &::LOG_Static;
  }
  else {
    pUVar1 = (this->PreviousTimecodeProvider).field0_0x0.DebugPtr;
    if (pUVar1 == (UTimecodeProvider *)0x0) {
      if (2 < (byte)LogMediaFrameworkUtilities._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities);
      }
      goto LAB_14d7e0c55;
    }
    if ((byte)LogMediaFrameworkUtilities._0_1_ < 3) goto LAB_14d7e0c55;
    local_res8[0] = (FName)pUVar1->_padding_;
    ::FName::ToString(local_res8,&local_18);
    pFVar3 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar3,(FLogCategoryBase *)&LogMediaFrameworkUtilities);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    (this->PreviousTimecodeProvider).field0_0x0.DebugPtr = (UTimecodeProvider *)0x0;
    (this->AppliedTimecodeProvider).field0_0x0.DebugPtr = (UTimecodeProvider *)0x0;
    this->bTimecodeProvideWasApplied = false;
    return;
  }
LAB_14d7e0c55:
  (this->PreviousTimecodeProvider).field0_0x0.DebugPtr = (UTimecodeProvider *)0x0;
  (this->AppliedTimecodeProvider).field0_0x0.DebugPtr = (UTimecodeProvider *)0x0;
  this->bTimecodeProvideWasApplied = false;
  return;
}

// SendAnalytics @ 14d7e1150

void __thiscall UMediaProfile::SendAnalytics(UMediaProfile *this)

{
  return;
}

// SetMediaOutput @ 14d7e15c0

void __thiscall UMediaProfile::SetMediaOutput(UMediaProfile *this,int param_1,UMediaOutput *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  uint uVar8;
  FName local_res8 [2];
  FString local_48;
  FString local_38;
  
  if (-1 < param_1) {
    lVar7 = (longlong)param_1;
    if (param_1 < (this->MediaOutputs).ArrayNum) {
      uVar8 = (uint)~param_1 >> 0x1f;
      uVar4 = 0;
      if (param_1 < (this->MediaOutputs).ArrayNum) {
        uVar4 = uVar8;
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
      if (*(longlong *)((this->MediaOutputs).AllocatorInstance.Data + lVar7 * 8) == 0) {
        pFVar5 = ::FString::FString(&local_38,L"");
        FVar6.Data = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      else {
        uVar4 = 0;
        if (param_1 < (this->MediaOutputs).ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_res8[0] =
             *(FName *)(*(longlong *)((this->MediaOutputs).AllocatorInstance.Data + lVar7 * 8) +
                       0x18);
        ::FName::ToString(local_res8,&local_48);
        FVar6.Data = local_48.Data.AllocatorInstance.Data;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
      }
      uVar4 = 0;
      if (param_1 < (this->MediaOutputs).ArrayNum) {
        uVar4 = uVar8;
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
      pFVar1 = (this->MediaOutputs).AllocatorInstance.Data;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UMediaOutput *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      *(UMediaOutput **)(pFVar1 + lVar7 * 8) = param_2;
      if (FVar6.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar6.Data);
      }
    }
  }
  return;
}

// SetMediaSource @ 14d7e17b0

void __thiscall UMediaProfile::SetMediaSource(UMediaProfile *this,int param_1,UMediaSource *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  uint uVar8;
  FName local_res8 [2];
  FString local_48;
  FString local_38;
  
  if (-1 < param_1) {
    lVar7 = (longlong)param_1;
    if (param_1 < (this->MediaSources).ArrayNum) {
      uVar8 = (uint)~param_1 >> 0x1f;
      uVar4 = 0;
      if (param_1 < (this->MediaSources).ArrayNum) {
        uVar4 = uVar8;
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
      if (*(longlong *)((this->MediaSources).AllocatorInstance.Data + lVar7 * 8) == 0) {
        pFVar5 = ::FString::FString(&local_38,L"");
        FVar6.Data = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      else {
        uVar4 = 0;
        if (param_1 < (this->MediaSources).ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_res8[0] =
             *(FName *)(*(longlong *)((this->MediaSources).AllocatorInstance.Data + lVar7 * 8) +
                       0x18);
        ::FName::ToString(local_res8,&local_48);
        FVar6.Data = local_48.Data.AllocatorInstance.Data;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
      }
      uVar4 = 0;
      if (param_1 < (this->MediaSources).ArrayNum) {
        uVar4 = uVar8;
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
      pFVar1 = (this->MediaSources).AllocatorInstance.Data;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UMediaSource *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      *(UMediaSource **)(pFVar1 + lVar7 * 8) = param_2;
      if (FVar6.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar6.Data);
      }
    }
  }
  return;
}

// StaticRegisterNativesUMediaProfile @ 14d7e1eb0

void __cdecl UMediaProfile::StaticRegisterNativesUMediaProfile(void)

{
  return;
}

