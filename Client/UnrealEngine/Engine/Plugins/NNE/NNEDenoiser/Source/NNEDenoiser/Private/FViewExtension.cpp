// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 4

// FViewExtension @ 14eae6110

FViewExtension * __thiscall
UE::NNEDenoiser::Private::FViewExtension::FViewExtension
          (FViewExtension *this,FAutoRegister *param_1)

{
  FSceneViewExtensionBase::FSceneViewExtensionBase((FSceneViewExtensionBase *)this,param_1);
  this->_padding_ = (longlong)&___7FViewExtension_Private_NNEDenoiser_UE__6B_;
  (this->DenoiserToSwap).Ptr = (IPathTracingDenoiser *)0x0;
  (this->SpatialTemporalDenoiserToSwap).Ptr = (IPathTracingSpatialTemporalDenoiser *)0x0;
  this->bIsActive = false;
  this->TimeoutCounter = 0;
  (this->RuntimeName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeName).Data.ArrayNum = 0;
  (this->RuntimeName).Data.ArrayMax = 0;
  (this->AssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetName).Data.ArrayNum = 0;
  (this->AssetName).Data.ArrayMax = 0;
  (this->TemporalAssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TemporalAssetName).Data.ArrayNum = 0;
  (this->TemporalAssetName).Data.ArrayMax = 0;
  return this;
}

// ~FViewExtension @ 14eae6d30

void __thiscall UE::NNEDenoiser::Private::FViewExtension::~FViewExtension(FViewExtension *this)

{
  FScriptContainerElement *pFVar1;
  IPathTracingSpatialTemporalDenoiser *pIVar2;
  IPathTracingDenoiser *pIVar3;
  FString *pFVar4;
  FString local_18;
  
  this->_padding_ = (longlong)&___7FViewExtension_Private_NNEDenoiser_UE__6B_;
  pFVar4 = ::FString::FString(&local_18,L"NNEDenoiser");
  UnregisterDenoiser(pFVar4);
  pFVar1 = (this->TemporalAssetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AssetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RuntimeName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->SpatialTemporalDenoiserToSwap).Ptr;
  if (pIVar2 != (IPathTracingSpatialTemporalDenoiser *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  pIVar3 = (this->DenoiserToSwap).Ptr;
  if (pIVar3 != (IPathTracingDenoiser *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)this);
  return;
}

// BeginRenderViewFamily @ 14eaef9c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::NNEDenoiser::Private::FViewExtension::BeginRenderViewFamily
          (FViewExtension *this,FSceneViewFamily *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  int iVar3;
  UNNEDenoiserSettings *pUVar4;
  FScriptContainerElement *pFVar5;
  IPathTracingDenoiser *pIVar6;
  IPathTracingSpatialTemporalDenoiser *pIVar7;
  undefined8 *puVar8;
  code *pcVar9;
  byte bVar10;
  TConsoleVariableData<bool> *pTVar11;
  TConsoleVariableData<FString> *pTVar12;
  bool bVar13;
  EDenoiserRuntimeType EVar14;
  bool bVar15;
  EDenoiserRuntimeType EVar16;
  bool bVar17;
  int iVar18;
  UClass *this_00;
  FString *pFVar19;
  FString *pFVar20;
  IPathTracingDenoiser *pIVar21;
  IPathTracingSpatialTemporalDenoiser *pIVar22;
  FStaticBasicLogRecord *pFVar23;
  longlong lVar24;
  IPathTracingSpatialTemporalDenoiser IVar25;
  IPathTracingDenoiser IVar26;
  bool bVar27;
  bool bVar28;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  undefined1 local_a8 [8];
  undefined1 local_a0 [16];
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  if ((param_1->EngineShowFlags).PathTracing == 0) {
    if (this->TimeoutCounter < 1) {
      iVar18 = 0;
    }
    else {
      iVar18 = this->TimeoutCounter + -1;
    }
  }
  else {
    iVar18 = 300;
  }
  bVar17 = this->bIsActive;
  this->TimeoutCounter = iVar18;
  bVar13 = IsRayTracingEnabled();
  pTVar11 = CVarNNEDenoiser.Ref;
  if (bVar13) {
    bVar13 = IsInParallelGameThread();
    if (((!bVar13) && (bVar13 = IsInGameThread(), !bVar13)) &&
       (bVar13 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((pTVar11->ShadowedValue[0] == false) || (this->TimeoutCounter < 1)) goto LAB_14eaefa69;
    bVar13 = true;
  }
  else {
LAB_14eaefa69:
    bVar13 = false;
  }
  this->bIsActive = bVar13;
  if (bVar13 != bVar17) {
    if (bVar13 == false) {
      if ((byte)LogNNEDenoiser._0_1_ < 5) goto LAB_14eaefaa5;
      pFVar23 = &::LOG_Static;
    }
    else {
      if ((byte)LogNNEDenoiser._0_1_ < 5) goto LAB_14eaefaa5;
      pFVar23 = &::LOG_Static;
    }
    Logging::Private::BasicLog<5>(pFVar23,(FLogCategoryBase *)&LogNNEDenoiser);
  }
LAB_14eaefaa5:
  if (this->bIsActive != false) {
    this_00 = UNNEDenoiserSettings::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar4 = (UNNEDenoiserSettings *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
    bVar13 = this->bIsActive;
    EVar14 = GetDenoiserRuntimeTypeFromCVar();
    pTVar12 = CVarNNEDenoiserRuntimeName.Ref;
    EVar16 = this->RuntimeType;
    bVar15 = IsInParallelGameThread();
    if (((!bVar15) && (bVar15 = IsInGameThread(), !bVar15)) &&
       (bVar15 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_b8.Data = (FScriptContainerElement *)0x0;
    local_b0 = pTVar12->ShadowedValue[0].Data.ArrayNum;
    lVar24 = (longlong)local_b0;
    pFVar5 = pTVar12->ShadowedValue[0].Data.AllocatorInstance.Data;
    if (local_b0 == 0) {
      local_ac = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_b0,0,&local_b8,local_b0,&local_ac);
      memcpy(local_b8.Data,pFVar5,lVar24 * 2);
    }
    iVar18 = (this->RuntimeName).Data.ArrayNum;
    pFVar1 = &this->RuntimeName;
    if (local_b0 == iVar18) {
      if (local_b0 < 2) {
        bVar15 = false;
      }
      else {
        iVar18 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)local_b8.Data,
                            (wchar_t *)(pFVar1->Data).AllocatorInstance.Data);
        bVar15 = iVar18 != 0;
      }
    }
    else {
      bVar15 = iVar18 + local_b0 != 1;
    }
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
    }
    pFVar2 = &this->AssetName;
    pFVar19 = GetDenoiserAssetNameFromCVarAndSettings(&local_90,pUVar4);
    iVar18 = (this->AssetName).Data.ArrayNum;
    iVar3 = (pFVar19->Data).ArrayNum;
    if (iVar3 == iVar18) {
      if (iVar3 < 2) {
        bVar27 = false;
      }
      else {
        iVar18 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(pFVar19->Data).AllocatorInstance.Data,
                            (wchar_t *)(pFVar2->Data).AllocatorInstance.Data);
        bVar27 = iVar18 != 0;
      }
    }
    else {
      bVar27 = iVar18 + iVar3 != 1;
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    pFVar19 = &this->TemporalAssetName;
    pFVar20 = GetDenoiserTemporalAssetNameFromCVarAndSettings(&local_80,pUVar4);
    iVar18 = (this->TemporalAssetName).Data.ArrayNum;
    iVar3 = (pFVar20->Data).ArrayNum;
    if (iVar3 == iVar18) {
      if (iVar3 < 2) {
        bVar28 = false;
      }
      else {
        iVar18 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(pFVar20->Data).AllocatorInstance.Data,
                            (wchar_t *)(pFVar19->Data).AllocatorInstance.Data);
        bVar28 = iVar18 != 0;
      }
    }
    else {
      bVar28 = iVar18 + iVar3 != 1;
    }
    bVar10 = bVar28 | bVar15 | bVar27;
    if (EVar14 != EVar16) {
      bVar10 = 1;
    }
    bVar17 = (bool)(bVar10 | bVar13 != bVar17);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (pUVar4->MaximumTileSizeOverride != this->MaximumTileSizeOverride) {
      bVar17 = true;
    }
    if (bVar17) {
      EVar16 = GetDenoiserRuntimeTypeFromCVar();
      this->RuntimeType = EVar16;
      pTVar12 = CVarNNEDenoiserRuntimeName.Ref;
      bVar17 = IsInParallelGameThread();
      if (((!bVar17) && (bVar17 = IsInGameThread(), !bVar17)) &&
         (bVar17 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007945>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6c9,"GetShadowIndex() == 0"), bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_c8.Data = (FScriptContainerElement *)0x0;
      iVar18 = pTVar12->ShadowedValue[0].Data.ArrayNum;
      pFVar5 = pTVar12->ShadowedValue[0].Data.AllocatorInstance.Data;
      local_c0 = CONCAT44(local_c0._4_4_,iVar18);
      if (iVar18 == 0) {
        local_c0 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar18,0,&local_c8,iVar18,(int *)((longlong)&local_c0 + 4));
        memcpy(local_c8.Data,pFVar5,(longlong)iVar18 * 2);
      }
      if (pFVar1 != (FString *)&local_c8) {
        pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar1->Data).AllocatorInstance.Data = local_c8.Data;
        (this->RuntimeName).Data.ArrayNum = (int)local_c0;
        local_c8.Data = (FScriptContainerElement *)0x0;
        (this->RuntimeName).Data.ArrayMax = local_c0._4_4_;
        local_c0 = 0;
      }
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data);
      }
      pFVar20 = GetDenoiserAssetNameFromCVarAndSettings(&local_70,pUVar4);
      if (pFVar2 != pFVar20) {
        pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar2->Data).AllocatorInstance.Data = (pFVar20->Data).AllocatorInstance.Data;
        (pFVar20->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->AssetName).Data.ArrayNum = (pFVar20->Data).ArrayNum;
        (this->AssetName).Data.ArrayMax = (pFVar20->Data).ArrayMax;
        (pFVar20->Data).ArrayNum = 0;
        (pFVar20->Data).ArrayMax = 0;
      }
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      pFVar20 = GetDenoiserTemporalAssetNameFromCVarAndSettings(local_60,pUVar4);
      if (pFVar19 != pFVar20) {
        pFVar5 = (pFVar19->Data).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar19->Data).AllocatorInstance.Data = (pFVar20->Data).AllocatorInstance.Data;
        (pFVar20->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->TemporalAssetName).Data.ArrayNum = (pFVar20->Data).ArrayNum;
        (this->TemporalAssetName).Data.ArrayMax = (pFVar20->Data).ArrayMax;
        (pFVar20->Data).ArrayNum = 0;
        (pFVar20->Data).ArrayMax = 0;
      }
      if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
      }
      this->MaximumTileSizeOverride = pUVar4->MaximumTileSizeOverride;
      CreateNNEDenoiserFromAsset<UNNEDenoiserAsset,FNNEDenoiserInputMappingData,FNNEDenoiserOutputMappingData>
                ((FString *)local_a8,(EDenoiserRuntimeType)pFVar2,
                 (FString *)(ulonglong)this->RuntimeType,(int)pFVar1);
      IVar26 = (IPathTracingDenoiser)local_a8;
      if ((IPathTracingDenoiser)local_a8 == (IPathTracingDenoiser)0x0) {
        if (1 < (byte)LogNNEDenoiser._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
        }
      }
      else {
        if (4 < (byte)LogNNEDenoiser._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
        }
        pIVar21 = ::operator_new(0x10);
        if (pIVar21 != (IPathTracingDenoiser *)0x0) {
          *pIVar21 = (IPathTracingDenoiser)&___7FPathTracingDenoiser_Private_NNEDenoiser_UE__6B_;
          IVar26 = (IPathTracingDenoiser)0x0;
          pIVar21[1] = (IPathTracingDenoiser)local_a8;
        }
        pIVar6 = (this->DenoiserToSwap).Ptr;
        (this->DenoiserToSwap).Ptr = pIVar21;
        if (pIVar6 != (IPathTracingDenoiser *)0x0) {
          (**(code **)*pIVar6)(pIVar6,1);
        }
      }
      CreateNNEDenoiserFromAsset<UNNEDenoiserTemporalAsset,FNNEDenoiserTemporalInputMappingData,FNNEDenoiserTemporalOutputMappingData>
                ((FString *)local_a0,(EDenoiserRuntimeType)pFVar19,
                 (FString *)(ulonglong)this->RuntimeType,(int)pFVar1);
      IVar25 = (IPathTracingSpatialTemporalDenoiser)local_a0._0_8_;
      if ((IPathTracingSpatialTemporalDenoiser)local_a0._0_8_ ==
          (IPathTracingSpatialTemporalDenoiser)0x0) {
        if (1 < (byte)LogNNEDenoiser._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
        }
      }
      else {
        if (4 < (byte)LogNNEDenoiser._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
        }
        pIVar22 = ::operator_new(0x10);
        if (pIVar22 != (IPathTracingSpatialTemporalDenoiser *)0x0) {
          *pIVar22 = (IPathTracingSpatialTemporalDenoiser)
                     &___7FPathTracingSpatialTemporalDenoiser_Private_NNEDenoiser_UE__6B_;
          IVar25 = (IPathTracingSpatialTemporalDenoiser)0x0;
          pIVar22[1] = (IPathTracingSpatialTemporalDenoiser)local_a0._0_8_;
        }
        pIVar7 = (this->SpatialTemporalDenoiserToSwap).Ptr;
        (this->SpatialTemporalDenoiserToSwap).Ptr = pIVar22;
        if (pIVar7 != (IPathTracingSpatialTemporalDenoiser *)0x0) {
          (**(code **)*pIVar7)();
        }
        TDefaultDelete<UE::NNEDenoiser::Private::FPathTracingSpatialTemporalDenoiser>::operator()
                  ((TDefaultDelete<UE::NNEDenoiser::Private::FPathTracingSpatialTemporalDenoiser> *)
                   (local_a0 + 8),(FPathTracingSpatialTemporalDenoiser *)0x0);
      }
      if (IVar25 != (IPathTracingSpatialTemporalDenoiser)0x0) {
        if (*(void **)((longlong)IVar25 + 0x58) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)IVar25 + 0x58));
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)((longlong)IVar25 + 0x38));
        puVar8 = *(undefined8 **)((longlong)IVar25 + 0x28);
        if (puVar8 != (undefined8 *)0x0) {
          (**(code **)*puVar8)(puVar8,1);
        }
        puVar8 = *(undefined8 **)((longlong)IVar25 + 0x10);
        if (puVar8 != (undefined8 *)0x0) {
          (**(code **)*puVar8)(puVar8,1);
        }
        puVar8 = *(undefined8 **)((longlong)IVar25 + 8);
        if (puVar8 != (undefined8 *)0x0) {
          (**(code **)*puVar8)(puVar8,1);
        }
        puVar8 = *(undefined8 **)IVar25;
        if (puVar8 != (undefined8 *)0x0) {
          (**(code **)*puVar8)(puVar8,1);
        }
        ::operator_delete((void *)IVar25,0x68);
      }
      if (IVar26 != (IPathTracingDenoiser)0x0) {
        if (*(void **)((longlong)IVar26 + 0x58) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)IVar26 + 0x58));
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)((longlong)IVar26 + 0x38));
        puVar8 = *(undefined8 **)((longlong)IVar26 + 0x28);
        if (puVar8 != (undefined8 *)0x0) {
          (**(code **)*puVar8)(puVar8,1);
        }
        puVar8 = *(undefined8 **)((longlong)IVar26 + 0x10);
        if (puVar8 != (undefined8 *)0x0) {
          (**(code **)*puVar8)(puVar8,1);
        }
        puVar8 = *(undefined8 **)((longlong)IVar26 + 8);
        if (puVar8 != (undefined8 *)0x0) {
          (**(code **)*puVar8)(puVar8,1);
        }
        puVar8 = *(undefined8 **)IVar26;
        if (puVar8 != (undefined8 *)0x0) {
          (**(code **)*puVar8)(puVar8,1);
        }
        ::operator_delete((void *)IVar26,0x68);
      }
    }
  }
  return;
}

// PreRenderViewFamily_RenderThread @ 14eafc2c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::NNEDenoiser::Private::FViewExtension::PreRenderViewFamily_RenderThread
          (FViewExtension *this,FRDGBuilder *param_1,FSceneViewFamily *param_2)

{
  FString *pFVar1;
  IPathTracingDenoiser *local_res8;
  FString local_18;
  
  if (this->bIsActive == false) {
    pFVar1 = ::FString::FString(&local_18,L"NNEDenoiser");
    UnregisterDenoiser(pFVar1);
    return;
  }
  if (((this->DenoiserToSwap).Ptr != (IPathTracingDenoiser *)0x0) ||
     ((this->SpatialTemporalDenoiserToSwap).Ptr != (IPathTracingSpatialTemporalDenoiser *)0x0)) {
    pFVar1 = ::FString::FString(&local_18,L"NNEDenoiser");
    UnregisterDenoiser(pFVar1);
  }
  if ((this->DenoiserToSwap).Ptr != (IPathTracingDenoiser *)0x0) {
    pFVar1 = ::FString::FString(&local_18,L"NNEDenoiser");
    local_res8 = (this->DenoiserToSwap).Ptr;
    (this->DenoiserToSwap).Ptr = (IPathTracingDenoiser *)0x0;
    RegisterSpatialDenoiser((IPathTracingDenoiser *)&local_res8,pFVar1);
  }
  if ((this->SpatialTemporalDenoiserToSwap).Ptr != (IPathTracingSpatialTemporalDenoiser *)0x0) {
    pFVar1 = ::FString::FString(&local_18,L"NNEDenoiser");
    local_res8 = (IPathTracingDenoiser *)(this->SpatialTemporalDenoiserToSwap).Ptr;
    (this->SpatialTemporalDenoiserToSwap).Ptr = (IPathTracingSpatialTemporalDenoiser *)0x0;
    RegisterSpatialTemporalDenoiser((IPathTracingSpatialTemporalDenoiser *)&local_res8,pFVar1);
  }
  return;
}

