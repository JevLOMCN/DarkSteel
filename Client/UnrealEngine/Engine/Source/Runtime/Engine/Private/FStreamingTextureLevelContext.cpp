// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// FStreamingTextureLevelContext @ 1488060c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FStreamingTextureLevelContext * __thiscall
FStreamingTextureLevelContext::FStreamingTextureLevelContext
          (FStreamingTextureLevelContext *this,Type param_1,ULevel *param_2,
          TMap<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_> *param_3)

{
  this->TextureGuidToLevelIndex =
       (TMap<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_> *)0x0;
  this->bUseRelativeBoxes = false;
  this->BuildDataTimestamp = 0;
  this->ComponentBuildData = (TArray<FStreamingTextureBuildInfo,TSizedDefaultAllocator<32>_> *)0x0;
  (this->LevelStreamingTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelStreamingTextures).ArrayNum = 0;
  (this->LevelStreamingTextures).ArrayMax = 0;
  (this->BoundStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundStates).ArrayNum = 0;
  (this->BoundStates).ArrayMax = 0;
  this->bForceNoUseBuiltData = false;
  UpdateContext(this,param_1,param_2,param_3);
  return this;
}

// FStreamingTextureLevelContext @ 148806100

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FStreamingTextureLevelContext * __thiscall
FStreamingTextureLevelContext::FStreamingTextureLevelContext
          (FStreamingTextureLevelContext *this,Type param_1,UPrimitiveComponent *param_2)

{
  ULevel *pUVar1;
  
  pUVar1 = (ULevel *)0x0;
  this->TextureGuidToLevelIndex =
       (TMap<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_> *)0x0;
  this->bUseRelativeBoxes = false;
  this->BuildDataTimestamp = 0;
  this->ComponentBuildData = (TArray<FStreamingTextureBuildInfo,TSizedDefaultAllocator<32>_> *)0x0;
  (this->LevelStreamingTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelStreamingTextures).ArrayNum = 0;
  (this->LevelStreamingTextures).ArrayMax = 0;
  (this->BoundStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundStates).ArrayNum = 0;
  (this->BoundStates).ArrayMax = 0;
  this->bForceNoUseBuiltData = false;
  if ((param_2 != (UPrimitiveComponent *)0x0) && (*(AActor **)&param_2->field_0xa8 != (AActor *)0x0)
     ) {
    pUVar1 = AActor::GetLevel(*(AActor **)&param_2->field_0xa8);
  }
  UpdateQualityAndFeatureLevel(this,param_1,GMaxRHIFeatureLevel,pUVar1);
  return this;
}

// FStreamingTextureLevelContext @ 148806180

FStreamingTextureLevelContext * __thiscall
FStreamingTextureLevelContext::FStreamingTextureLevelContext
          (FStreamingTextureLevelContext *this,Type param_1,Type param_2,bool param_3)

{
  this->bUseRelativeBoxes = param_3;
  this->TextureGuidToLevelIndex =
       (TMap<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_> *)0x0;
  this->BuildDataTimestamp = 0;
  this->ComponentBuildData = (TArray<FStreamingTextureBuildInfo,TSizedDefaultAllocator<32>_> *)0x0;
  (this->LevelStreamingTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelStreamingTextures).ArrayNum = 0;
  (this->LevelStreamingTextures).ArrayMax = 0;
  (this->BoundStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundStates).ArrayNum = 0;
  (this->BoundStates).ArrayMax = 0;
  this->bIsBuiltDataValid = false;
  this->bForceNoUseBuiltData = false;
  this->QualityLevel = param_1;
  this->FeatureLevel = param_2;
  return this;
}

// ~FStreamingTextureLevelContext @ 14880c630

void __thiscall
FStreamingTextureLevelContext::~FStreamingTextureLevelContext(FStreamingTextureLevelContext *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->BoundStates).ArrayNum;
  pFVar2 = (this->BoundStates).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->BoundStates).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FStreamingTextureLevelContext::FTextureBoundState,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(longlong *)(pFVar2 + 8) != 0) {
      *(undefined4 *)(*(longlong *)(pFVar2 + 8) + 0x100) = 0xffffffff;
    }
    pFVar2 = pFVar2 + 0x10;
  }
  pFVar2 = (this->BoundStates).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->LevelStreamingTextures).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// BindBuildData @ 1488238e0

void __thiscall
FStreamingTextureLevelContext::BindBuildData
          (FStreamingTextureLevelContext *this,
          TArray<FStreamingTextureBuildInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  TArray<FStreamingTextureBuildInfo,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  uint uVar10;
  
  this->BuildDataTimestamp = this->BuildDataTimestamp + 1;
  pTVar2 = CVarStreamingUseNewMetrics.Ref;
  if (this->TextureGuidToLevelIndex !=
      (TMap<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_> *)0x0) {
    bVar3 = IsInParallelGameThread();
    if (((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (pTVar2->ShadowedValue[0] != 0) {
      if (((this->bForceNoUseBuiltData == false) && (this->bIsBuiltDataValid != false)) &&
         (GUseTextureStreamingBuiltData != 0)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      pTVar6 = (TArray<FStreamingTextureBuildInfo,TSizedDefaultAllocator<32>_> *)0x0;
      if (bVar3) {
        pTVar6 = param_1;
      }
      this->ComponentBuildData = pTVar6;
      if (param_1 == (TArray<FStreamingTextureBuildInfo,TSizedDefaultAllocator<32>_> *)0x0) {
        return;
      }
      if ((this->BoundStates).ArrayNum < 1) {
        return;
      }
      iVar7 = param_1->ArrayNum;
      uVar10 = 0;
      if (iVar7 < 1) {
        return;
      }
      lVar9 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar10 < iVar7) {
          uVar4 = ~uVar10 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar4 = *(uint *)((param_1->AllocatorInstance).Data + lVar9 + 4);
        if ((-1 < (int)uVar4) && ((int)uVar4 < (this->BoundStates).ArrayNum)) {
          uVar5 = 0;
          if ((int)uVar4 < (this->BoundStates).ArrayNum) {
            uVar5 = ~uVar4 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pFVar8 = (this->BoundStates).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x10;
          *(uint *)(pFVar8 + 4) = uVar10;
          *(int *)pFVar8 = this->BuildDataTimestamp;
        }
        iVar7 = param_1->ArrayNum;
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0xc;
        if (iVar7 <= (int)uVar10) {
          return;
        }
      } while( true );
    }
  }
  this->ComponentBuildData = (TArray<FStreamingTextureBuildInfo,TSizedDefaultAllocator<32>_> *)0x0;
  return;
}

// CanUseTextureStreamingBuiltData @ 148824c70

bool __thiscall
FStreamingTextureLevelContext::CanUseTextureStreamingBuiltData(FStreamingTextureLevelContext *this)

{
  if (((this->bForceNoUseBuiltData == false) && (this->bIsBuiltDataValid != false)) &&
     (GUseTextureStreamingBuiltData != 0)) {
    return true;
  }
  return false;
}

// GetBuildDataIndexRef @ 14883d540

int * __thiscall
FStreamingTextureLevelContext::GetBuildDataIndexRef
          (FStreamingTextureLevelContext *this,UTexture *param_1,bool param_2)

{
  uint uVar1;
  FTokenizedMessage *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  FMessageLog *this_00;
  FText *pFVar9;
  TSharedRef<FTokenizedMessage,1> *pTVar10;
  TSharedRef<FUObjectToken,1> *pTVar11;
  TSharedRef<FTextToken,1> *pTVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  FName local_res8;
  undefined8 local_148;
  UTexture *pUStack_140;
  TSharedRef<IMessageToken,1> local_138;
  TSharedRef<IMessageToken,1> local_128;
  TSharedRef<IMessageToken,1> local_118;
  TSharedRef<FTokenizedMessage,1> local_108;
  TSharedRef<FTextToken,1> local_f8;
  FText local_e8;
  TSharedRef<FTokenizedMessage,1> local_d8;
  TSharedRef<FUObjectToken,1> local_c8;
  FText local_b8;
  TSharedRef<FTokenizedMessage,1> local_a8;
  TSharedRef<FUObjectToken,1> local_98;
  FText local_88;
  TSharedRef<FTokenizedMessage,1> local_78;
  FText local_68;
  FMessageLog local_58;
  
  if ((this->ComponentBuildData ==
       (TArray<FStreamingTextureBuildInfo,TSizedDefaultAllocator<32>_> *)0x0) && (!param_2)) {
    return (int *)0x0;
  }
  if (param_1->LevelIndex == -1) {
    if ((this->TextureGuidToLevelIndex ==
         (TMap<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TextureGuidToLevelIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamingBuild.cpp"
                           ,0x25d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      piVar7 = (int *)(*pcVar3)();
      return piVar7;
    }
    puVar8 = (uint *)TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_>
                     ::Find((TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_>
                             *)this->TextureGuidToLevelIndex,&param_1->LightingGuid);
    if (puVar8 == (uint *)0x0) {
      pFVar14 = (this->BoundStates).AllocatorInstance.Data;
      local_148 = 0;
      pUStack_140 = param_1;
      if (((pFVar14 <= (FScriptContainerElement *)&local_148) &&
          ((FScriptContainerElement *)&local_148 <
           pFVar14 + (longlong)(this->BoundStates).ArrayMax * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        piVar7 = (int *)(*pcVar3)();
        return piVar7;
      }
      iVar6 = (this->BoundStates).ArrayNum;
      piVar7 = &(this->BoundStates).ArrayMax;
      if (iVar6 == *piVar7) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->BoundStates).AllocatorInstance,piVar7);
      }
      (this->BoundStates).ArrayNum = iVar6 + 1;
      pFVar14 = (this->BoundStates).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar14 = local_148;
      *(UTexture **)(pFVar14 + 8) = pUStack_140;
      param_1->LevelIndex = iVar6;
    }
    else {
      uVar1 = *puVar8;
      uVar5 = 0;
      if ((int)uVar1 < (this->BoundStates).ArrayNum) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        piVar7 = (int *)(*pcVar3)();
        return piVar7;
      }
      pFVar14 = (this->BoundStates).AllocatorInstance.Data;
      if (*(longlong *)(pFVar14 + (longlong)(int)uVar1 * 0x10 + 8) != 0) {
        ::FName::FName(&local_res8,"AssetCheck");
        this_00 = FMessageLog::FMessageLog(&local_58,&local_res8);
        pFVar9 = FText::FText(&local_68);
        pTVar10 = FMessageLog::Error(this_00,&local_78,pFVar9);
        pFVar2 = pTVar10->Object;
        pFVar9 = FText::FText(&local_88);
        pTVar11 = FUObjectToken::Create
                            (&local_98,*(UObject **)(pFVar14 + (longlong)(int)uVar1 * 0x10 + 8),
                             pFVar9);
        local_118.Object = (IMessageToken *)pTVar11->Object;
        local_118.SharedReferenceCount.ReferenceController =
             (pTVar11->SharedReferenceCount).ReferenceController;
        if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pTVar10 = FTokenizedMessage::AddToken(pFVar2,&local_a8,&local_118);
        pFVar2 = pTVar10->Object;
        pFVar9 = FText::FText(&local_b8);
        pTVar11 = FUObjectToken::Create(&local_c8,(UObject *)param_1,pFVar9);
        local_128.Object = (IMessageToken *)pTVar11->Object;
        local_128.SharedReferenceCount.ReferenceController =
             (pTVar11->SharedReferenceCount).ReferenceController;
        if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pTVar10 = FTokenizedMessage::AddToken(pFVar2,&local_d8,&local_128);
        pFVar2 = pTVar10->Object;
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_e8,L"AssetCheck",L"TextureError_NonUniqueLightingGuid",
                            L"Same lighting guid, modify or touch any property in the texture editor to generate a new guid and fix the issue."
                           );
        pTVar12 = FTextToken::Create(&local_f8,pFVar9,true);
        local_138.Object = (IMessageToken *)pTVar12->Object;
        local_138.SharedReferenceCount.ReferenceController =
             (pTVar12->SharedReferenceCount).ReferenceController;
        if (local_138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        FTokenizedMessage::AddToken(pFVar2,&local_108,&local_138);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_108.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_138.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.SharedReferenceCount.ReferenceController);
        if (local_e8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_128.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c8.SharedReferenceCount.ReferenceController);
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_118.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.SharedReferenceCount.ReferenceController);
        if (local_88.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
        if (local_68.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
        }
        FMessageLog::~FMessageLog(&local_58);
        return (int *)0x0;
      }
      param_1->LevelIndex = *puVar8;
      *(UTexture **)(pFVar14 + (longlong)(int)uVar1 * 0x10 + 8) = param_1;
    }
  }
  uVar1 = param_1->LevelIndex;
  uVar5 = 0;
  if ((int)uVar1 < (this->BoundStates).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    piVar7 = (int *)(*pcVar3)();
    return piVar7;
  }
  pFVar14 = (this->BoundStates).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
  if ((*(UTexture **)(pFVar14 + 8) != param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BoundState.Texture == Texture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamingBuild.cpp"
                         ,0x27b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    piVar7 = (int *)(*pcVar3)();
    return piVar7;
  }
  pFVar13 = (FScriptContainerElement *)0x0;
  if (*(int *)pFVar14 == this->BuildDataTimestamp) {
    pFVar13 = pFVar14 + 4;
  }
  return (int *)pFVar13;
}

// ProcessMaterial @ 14884f350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FStreamingTextureLevelContext::ProcessMaterial
          (FStreamingTextureLevelContext *this,TBoxSphereBounds<double,double> *param_1,
          FPrimitiveMaterialInfo *param_2,float param_3,
          TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *param_4,
          bool param_5,UPrimitiveComponent *param_6)

{
  TArray<FStreamingTextureBuildInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  UTexture *pUVar2;
  UMaterialInterface *pUVar3;
  UStreamableRenderAsset *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  FStreamingRenderAssetPrimitiveInfo *pFVar10;
  longlong lVar11;
  ForElementType<UTexture_*> FVar12;
  uint uVar13;
  ulonglong uVar14;
  FTextureSamplingInfo *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  FTextureSamplingInfo *pFVar18;
  ForElementType<UTexture_*> FVar19;
  ForElementType<UTexture_*> FVar20;
  TOptional<FMaterialCachedTexturesSamplingInfo> *pTVar21;
  float fVar22;
  undefined1 auStackY_328 [32];
  undefined1 local_2d8;
  undefined1 local_2d7;
  Type local_2d6 [3];
  undefined1 local_2d3 [3];
  EShaderPlatform local_2d0;
  undefined1 local_2ce;
  TObjectPtr<UStreamableRenderAsset>_u_0 local_2c8;
  TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *local_2c0;
  FStreamingTextureLevelContext *local_2b8;
  TBoxSphereBounds<double,double> *local_2b0;
  FPrimitiveMaterialInfo *local_2a8;
  ForElementType<UTexture_*> local_2a0;
  undefined8 local_298;
  ForElementType<UTexture_*> local_290;
  ForElementType<UTexture_*> local_288;
  int local_80;
  int local_7c;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_2c0 = param_4;
  local_2b8 = this;
  local_2b0 = param_1;
  local_2a8 = param_2;
  if ((((param_2->Material == (UMaterialInterface *)0x0) ||
       (param_2->UVChannelData == (FMeshUVChannelInfo *)0x0)) || (param_2->PackedRelativeBox == 0))
     && (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<3108938448308798087>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamingBuild.cpp"
                            ,0x287,"MaterialData.IsValid()"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->bForceNoUseBuiltData == false) && (this->bIsBuiltDataValid != false)) &&
     ((GUseTextureStreamingBuiltData != 0 &&
      ((pTVar1 = this->ComponentBuildData,
       pTVar1 != (TArray<FStreamingTextureBuildInfo,TSizedDefaultAllocator<32>_> *)0x0 || (param_5))
      )))) {
    local_7c = 0x40;
    local_288.SecondaryData = (ForElementType<UTexture_*>)0x0;
    local_80 = 0;
    if (pTVar1 != (TArray<FStreamingTextureBuildInfo,TSizedDefaultAllocator<32>_> *)0x0) {
      iVar8 = pTVar1->ArrayNum;
      pFVar16 = (pTVar1->AllocatorInstance).Data;
      pFVar17 = pFVar16 + (longlong)iVar8 * 0xc;
LAB_14884f480:
      do {
        if (pTVar1->ArrayNum != iVar8) {
          local_2d8 = 0;
          `TCheckedPointerIterator<FStreamingTextureBuildInfo_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_2d8);
        }
        param_2 = local_2a8;
        param_4 = local_2c0;
        if (pFVar16 == pFVar17) break;
        uVar13 = *(uint *)(pFVar16 + 4);
        if (((int)uVar13 < 0) || ((this->LevelStreamingTextures).ArrayNum <= (int)uVar13)) {
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3108938448308798136>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamingBuild.cpp"
                             ,0x2b8,
                             "LevelStreamingTextures.IsValidIndex(BuildInfo.TextureLevelIndex)");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          uVar7 = 0;
          if ((int)uVar13 < (this->LevelStreamingTextures).ArrayNum) {
            uVar7 = ~uVar13 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_2c8 = (TObjectPtr<UStreamableRenderAsset>_u_0)
                      ((TObjectPtr<UStreamableRenderAsset>_u_0 *)
                      ((this->LevelStreamingTextures).AllocatorInstance.Data +
                      (longlong)(int)uVar13 * 8))->DebugPtr;
          if (local_2c8.DebugPtr != (UStreamableRenderAsset *)0x0) {
            if (((int)local_2c8.DebugPtr[1]._padding_ == -1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Texture->LevelIndex != INDEX_NONE",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamingBuild.cpp"
                                   ,700,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((local_2c8.DebugPtr)->StreamingIndex != -1) {
              FVar19 = (ForElementType<UTexture_*>)&local_288;
              if (local_288.SecondaryData != (ForElementType<UTexture_*>)0x0) {
                FVar19 = local_288.SecondaryData;
              }
              if ((ulonglong)FVar19 <= &local_2c8) {
                FVar19 = (ForElementType<UTexture_*>)&local_288;
                if (local_288.SecondaryData != (ForElementType<UTexture_*>)0x0) {
                  FVar19 = local_288.SecondaryData;
                }
                if ((&local_2c8 <
                     (TObjectPtr<UStreamableRenderAsset>_u_0 *)
                     ((longlong)FVar19 + (longlong)local_7c * 8)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              if (local_80 == local_7c) {
                local_80 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UTexture_*>_>
                                     (0x808,&local_288,&local_7c);
              }
              lVar11 = (longlong)local_80;
              FVar19 = (ForElementType<UTexture_*>)&local_288;
              if (local_288.SecondaryData != (ForElementType<UTexture_*>)0x0) {
                FVar19 = local_288.SecondaryData;
              }
              local_80 = local_80 + 1;
              pFVar16 = pFVar16 + 0xc;
              ((TObjectPtr<UStreamableRenderAsset>_u_0 *)((longlong)FVar19 + lVar11 * 8))->DebugPtr
                   = (UStreamableRenderAsset *)local_2c8;
              goto LAB_14884f480;
            }
          }
        }
        pFVar16 = pFVar16 + 0xc;
      } while( true );
    }
    uVar14 = (ulonglong)local_80;
    local_2a8 = (FPrimitiveMaterialInfo *)CONCAT44(local_2a8._4_4_,local_80);
    FVar19 = (ForElementType<UTexture_*>)&local_288;
    if (local_288.SecondaryData != (ForElementType<UTexture_*>)0x0) {
      FVar19 = local_288.SecondaryData;
    }
    local_290 = (ForElementType<UTexture_*>)((longlong)FVar19 + uVar14 * 8);
LAB_14884f6c0:
    do {
      FVar20 = local_290;
      if (local_80 != (int)uVar14) {
        local_2d7 = 0;
        `TCheckedPointerIterator<UTexture_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_2d7);
      }
      FVar12 = local_288.SecondaryData;
      if (FVar19 == FVar20) goto LAB_14884fabb;
      pUVar2 = *(UTexture **)FVar19;
      puVar9 = (uint *)GetBuildDataIndexRef(this,pUVar2,false);
      if (puVar9 == (uint *)0x0) {
        if (((int)pUVar2->_padding_ != -1) &&
           ((fVar22 = (float)(**(code **)(param_2->Material->_padding_ + 0x5b8))
                                       (param_2->Material,pUVar2->_padding_), fVar22 != 0.0 ||
            (fVar22 = param_2->UVChannelData->LocalUVDensities[0], fVar22 != 0.0)))) {
          pFVar10 = TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_>::
                    AddDefaulted_GetRef(param_4);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar2);
          }
          (pFVar10->RenderAsset).field0_0x0.DebugPtr = (UStreamableRenderAsset *)pUVar2;
          pFVar10->TexelFactor = fVar22 * param_3;
          if (this->bUseRelativeBoxes == false) {
            uVar13 = 0xffff0000;
          }
          else {
            uVar13 = param_2->PackedRelativeBox;
          }
          pFVar10->PackedRelativeBox = uVar13;
          UnpackRelativeBox(local_2b0,uVar13,&pFVar10->Bounds);
        }
      }
      else if (*puVar9 != 0xffffffff) {
        iVar8 = param_4->ArrayNum;
        if (iVar8 == param_4->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x850,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar8 + 1;
        pFVar17 = (param_4->AllocatorInstance).Data + (longlong)iVar8 * 0x50;
        DefaultConstructItems<FStreamingRenderAssetPrimitiveInfo,int>(pFVar17,1);
        pTVar1 = this->ComponentBuildData;
        uVar13 = *puVar9;
        uVar7 = 0;
        if ((int)uVar13 < pTVar1->ArrayNum) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar16 = (pTVar1->AllocatorInstance).Data;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UTexture *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        *(UTexture **)pFVar17 = pUVar2;
        *(float *)(pFVar17 + 0x40) = param_3 * *(float *)(pFVar16 + (longlong)(int)uVar13 * 0xc + 8)
        ;
        if (local_2b8->bUseRelativeBoxes == false) {
          uVar13 = 0xffff0000;
        }
        else {
          uVar13 = *(uint *)(pFVar16 + (longlong)(int)uVar13 * 0xc);
        }
        *(uint *)(pFVar17 + 0x44) = uVar13;
        UnpackRelativeBox(local_2b0,uVar13,(TBoxSphereBounds<double,double> *)(pFVar17 + 8));
        uVar14 = (ulonglong)local_2a8 & 0xffffffff;
        FVar19 = (ForElementType<UTexture_*>)((longlong)FVar19 + 8);
        *puVar9 = 0xffffffff;
        param_4 = local_2c0;
        this = local_2b8;
        goto LAB_14884f6c0;
      }
      uVar14 = (ulonglong)local_2a8 & 0xffffffff;
      FVar19 = (ForElementType<UTexture_*>)((longlong)FVar19 + 8);
      param_4 = local_2c0;
    } while( true );
  }
  pUVar3 = param_2->Material;
  pTVar21 = &pUVar3->CachedTexturesSamplingInfo;
  if ((pUVar3->CachedTexturesSamplingInfo).bIsSet == false) {
    pTVar21 = (TOptional<FMaterialCachedTexturesSamplingInfo> *)0x0;
  }
  if (pTVar21 != (TOptional<FMaterialCachedTexturesSamplingInfo> *)0x0) {
    iVar8 = (pTVar21->TypedValue).TextureSamplingInfos.ArrayNum;
    pFVar15 = (FTextureSamplingInfo *)
              (pTVar21->TypedValue).TextureSamplingInfos.AllocatorInstance.Data;
    pFVar18 = pFVar15 + iVar8;
    while( true ) {
      if ((pTVar21->TypedValue).TextureSamplingInfos.ArrayNum != iVar8) {
        `TCheckedPointerIterator<FTextureSamplingInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_2d6 + 2);
      }
      if (pFVar15 == pFVar18) break;
      pUVar2 = (pFVar15->Texture).field0_0x0.DebugPtr;
      if ((int)pUVar2->_padding_ != -1) {
        pUVar3 = param_2->Material;
        if (pFVar15 == (FTextureSamplingInfo *)0x0) {
          fVar22 = (float)(**(code **)(pUVar3->_padding_ + 0x5b8))(pUVar3,pUVar2->_padding_);
        }
        else {
          fVar22 = UMaterialInterface::GetTextureDensityWithCache
                             (pUVar3,pFVar15,param_2->UVChannelData);
        }
        if ((fVar22 != 0.0) || (fVar22 = param_2->UVChannelData->LocalUVDensities[0], fVar22 != 0.0)
           ) {
          pFVar10 = TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_>::
                    AddDefaulted_GetRef(param_4);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar2);
          }
          (pFVar10->RenderAsset).field0_0x0.DebugPtr = (UStreamableRenderAsset *)pUVar2;
          pFVar10->TexelFactor = fVar22 * param_3;
          if (local_2b8->bUseRelativeBoxes == false) {
            uVar13 = 0xffff0000;
          }
          else {
            uVar13 = param_2->PackedRelativeBox;
          }
          pFVar10->PackedRelativeBox = uVar13;
          UnpackRelativeBox(local_2b0,uVar13,&pFVar10->Bounds);
          param_4 = local_2c0;
        }
      }
      pFVar15 = pFVar15 + 1;
    }
    return;
  }
  local_2a0 = (ForElementType<UTexture_*>)0x0;
  local_298 = 0;
  if (this->FeatureLevel == Num) {
    local_2d0 = SP_NumPlatforms;
  }
  else {
    local_2d0 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->FeatureLevel];
  }
  local_2d6[0] = this->QualityLevel;
  local_2ce = 1;
  local_2d6[1] = 1;
  (**(code **)(pUVar3->_padding_ + 0x330))(pUVar3,&local_2a0,local_2d6,&local_2d0);
  iVar8 = (int)local_298;
  FVar19 = (ForElementType<UTexture_*>)((longlong)local_2a0 + (longlong)(int)local_298 * 8);
  FVar20 = local_2a0;
  while( true ) {
    if ((int)local_298 != iVar8) {
      `TCheckedPointerIterator<UTexture_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_2d3);
    }
    FVar12 = local_2a0;
    if (FVar20 == FVar19) break;
    pUVar4 = *(UStreamableRenderAsset **)FVar20;
    if ((pUVar4->StreamingIndex != -1) &&
       ((fVar22 = (float)(**(code **)(param_2->Material->_padding_ + 0x5b8))
                                   (param_2->Material,pUVar4->_padding_,param_2->UVChannelData),
        fVar22 != 0.0 || (fVar22 = param_2->UVChannelData->LocalUVDensities[0], fVar22 != 0.0)))) {
      pFVar10 = TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_>::
                AddDefaulted_GetRef(param_4);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      (pFVar10->RenderAsset).field0_0x0.DebugPtr = pUVar4;
      pFVar10->TexelFactor = fVar22 * param_3;
      if (local_2b8->bUseRelativeBoxes == false) {
        uVar13 = 0xffff0000;
      }
      else {
        uVar13 = param_2->PackedRelativeBox;
      }
      pFVar10->PackedRelativeBox = uVar13;
      UnpackRelativeBox(local_2b0,uVar13,&pFVar10->Bounds);
    }
    FVar20 = (ForElementType<UTexture_*>)((longlong)FVar20 + 8);
  }
LAB_14884fabb:
  if (FVar12 != (ForElementType<UTexture_*>)0x0) {
    FMemory::Free((void *)FVar12);
  }
  return;
}

// UpdateContext @ 148861600

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
FStreamingTextureLevelContext::UpdateContext
          (FStreamingTextureLevelContext *this,Type param_1,ULevel *param_2,
          TMap<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_> *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined1 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FString *pFVar8;
  size_t sVar9;
  UClass *pUVar10;
  UTexture *pUVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 local_res8 [8];
  Type local_res10;
  FScriptContainerElement *local_68;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  FString local_48;
  
  bVar17 = -1 < CpuChannel->Enabled;
  local_res10 = param_1;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId482,"FStreamingTextureLevelContext::UpdateContext",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamingBuild.cpp"
               ,0x1e2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId482);
  }
  piVar1 = &(this->LevelStreamingTextures).ArrayMax;
  this->TextureGuidToLevelIndex =
       (TMap<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_> *)0x0;
  this->bUseRelativeBoxes = false;
  this->BuildDataTimestamp = 0;
  this->ComponentBuildData = (TArray<FStreamingTextureBuildInfo,TSizedDefaultAllocator<32>_> *)0x0;
  (this->LevelStreamingTextures).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->LevelStreamingTextures).AllocatorInstance,0,piVar1);
  }
  iVar7 = (this->BoundStates).ArrayNum;
  piVar1 = &(this->BoundStates).ArrayNum;
  pFVar15 = (this->BoundStates).AllocatorInstance.Data;
  pFVar13 = pFVar15 + (longlong)iVar7 * 0x10;
  while( true ) {
    if (*piVar1 != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FStreamingTextureLevelContext::FTextureBoundState,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar15 == pFVar13) break;
    if (*(longlong *)(pFVar15 + 8) != 0) {
      *(undefined4 *)(*(longlong *)(pFVar15 + 8) + 0x100) = 0xffffffff;
    }
    pFVar15 = pFVar15 + 0x10;
  }
  piVar2 = &(this->BoundStates).ArrayMax;
  *piVar1 = 0;
  if ((this->BoundStates).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->BoundStates).AllocatorInstance,0,piVar2);
  }
  UpdateQualityAndFeatureLevel(this,local_res10,GMaxRHIFeatureLevel,param_2);
  if (((((param_2 != (ULevel *)0x0) && (this->bForceNoUseBuiltData == false)) &&
       (this->bIsBuiltDataValid != false)) &&
      ((GUseTextureStreamingBuiltData != 0 &&
       (param_3 !=
        (TMap<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_> *)0x0)))) &&
     ((iVar7 = (param_2->StreamingTextureGuids).ArrayNum, 0 < iVar7 &&
      (iVar7 == *(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34)))) {
    this->TextureGuidToLevelIndex = param_3;
    this->bUseRelativeBoxes = (bool)(~param_2->bTextureStreamingRotationChanged & 1);
    iVar7 = (param_2->StreamingTextureGuids).ArrayNum;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar7,&(this->BoundStates).AllocatorInstance,piVar1,piVar2);
    memset((this->BoundStates).AllocatorInstance.Data + (longlong)iVar6 * 0x10,0,
           (longlong)iVar7 << 4);
    uVar14 = (param_2->StreamingTextures).ArrayNum;
    if (uVar14 == (param_2->StreamingTextureGuids).ArrayNum) {
      iVar7 = (this->LevelStreamingTextures).ArrayNum;
      piVar1 = &(this->LevelStreamingTextures).ArrayNum;
      if (iVar7 < (int)uVar14) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,uVar14 - iVar7,&(this->LevelStreamingTextures).AllocatorInstance,
                           piVar1,&(this->LevelStreamingTextures).ArrayMax);
        memset((this->LevelStreamingTextures).AllocatorInstance.Data + (longlong)iVar6 * 8,0,
               (longlong)(int)(uVar14 - iVar7) << 3);
      }
      else {
        if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
        }
        if ((int)uVar14 < iVar7) {
          uVar12 = iVar7 - uVar14;
          if (((int)(uVar12 | uVar14) < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (uVar12 != 0) {
            pFVar15 = (this->LevelStreamingTextures).AllocatorInstance.Data +
                      (longlong)(int)uVar14 * 8;
            iVar7 = (*piVar1 - uVar12) - uVar14;
            if (iVar7 != 0) {
              memmove(pFVar15,pFVar15 + (longlong)(int)uVar12 * 8,(longlong)iVar7 << 3);
            }
            *piVar1 = *piVar1 - uVar12;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,&(this->LevelStreamingTextures).AllocatorInstance,*piVar1,
                       &(this->LevelStreamingTextures).ArrayMax);
          }
        }
      }
      uVar14 = 0;
      if (0 < (param_2->StreamingTextures).ArrayNum) {
        lVar16 = 0;
        do {
          uVar12 = 0;
          if ((int)uVar14 < (param_2->StreamingTextures).ArrayNum) {
            uVar12 = ~uVar14 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar8 = ::FName::ToString((FName *)((param_2->StreamingTextures).AllocatorInstance.Data +
                                              (longlong)(int)uVar14 * 8),&local_48);
          if ((pFVar8->Data).ArrayNum == 0) {
            local_68 = (FScriptContainerElement *)0x15060d16c;
LAB_14886199a:
            sVar9 = wcslen((wchar_t *)local_68);
            iVar7 = (int)sVar9;
          }
          else {
            local_68 = (pFVar8->Data).AllocatorInstance.Data;
            iVar7 = 0;
            if (local_68 != (FScriptContainerElement *)0x0) goto LAB_14886199a;
          }
          pUVar10 = Z_Construct_UClass_UTexture_NoRegister();
          local_58._12_4_ = uStack_5c;
          local_58.Size = iVar7;
          local_58.DataPtr = (wchar_t *)local_68;
          pUVar11 = (UTexture *)StaticFindObject(pUVar10,(UObject *)0x0,&local_58,None);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (pUVar11 != (UTexture *)0x0) {
            uVar12 = 0;
            if ((int)uVar14 < (this->LevelStreamingTextures).ArrayNum) {
              uVar12 = ~uVar14 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(UTexture **)((this->LevelStreamingTextures).AllocatorInstance.Data + lVar16) = pUVar11
            ;
            GetBuildDataIndexRef(this,pUVar11,true);
          }
          uVar14 = uVar14 + 1;
          lVar16 = lVar16 + 8;
        } while ((int)uVar14 < (param_2->StreamingTextures).ArrayNum);
      }
    }
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateQualityAndFeatureLevel @ 148862200

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
FStreamingTextureLevelContext::UpdateQualityAndFeatureLevel
          (FStreamingTextureLevelContext *this,Type param_1,Type param_2,ULevel *param_3)

{
  Type TVar1;
  UWorld *pUVar2;
  FCachedSystemScalabilityCVars *pFVar3;
  Type TVar4;
  Type TVar5;
  uint uVar6;
  
  this->QualityLevel = param_1;
  this->FeatureLevel = param_2;
  this->bIsBuiltDataValid = false;
  if (param_3 != (ULevel *)0x0) {
    pUVar2 = ULevel::GetWorld(param_3);
    if (pUVar2 != (UWorld *)0x0) {
      this->FeatureLevel = (uint)(pUVar2->FeatureLevel).Value;
    }
    TVar1 = param_3->PackedTextureStreamingQualityLevelFeatureLevel;
    uVar6 = TVar1 >> 0x10;
    TVar5 = TVar1 & 0xffff;
    if ((uVar6 < 5) && (TVar5 < (SM6|SM4_REMOVED))) {
      if ((char)(TVar1 >> 0x10) == '\x04') {
        pFVar3 = GetCachedScalabilityCVars();
        uVar6 = (uint)pFVar3->MaterialQualityLevel;
      }
      TVar4 = this->QualityLevel;
      if (TVar5 == Num) {
        TVar5 = GMaxRHIFeatureLevel;
      }
      if (TVar4 == Num) {
        pFVar3 = GetCachedScalabilityCVars();
        TVar4 = pFVar3->MaterialQualityLevel;
      }
      TVar1 = this->FeatureLevel;
      if (this->FeatureLevel == Num) {
        TVar1 = GMaxRHIFeatureLevel;
      }
      if ((TVar4 == (Type)uVar6) && (TVar1 == TVar5)) {
        this->bIsBuiltDataValid = true;
        return;
      }
      this->bIsBuiltDataValid = false;
    }
  }
  return;
}

