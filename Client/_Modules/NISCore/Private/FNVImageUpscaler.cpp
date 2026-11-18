// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NISCore
// Functions: 8

// FNVImageUpscaler @ 14de515c0

FNVImageUpscaler * __thiscall FNVImageUpscaler::FNVImageUpscaler(FNVImageUpscaler *this)

{
  *this = (FNVImageUpscaler)&___7FNVImageUpscaler__6B_;
  return this;
}

// ~FNVImageUpscaler @ 14de515e0

void __thiscall FNVImageUpscaler::~FNVImageUpscaler(FNVImageUpscaler *this)

{
  *this = (FNVImageUpscaler)&___7ISceneViewFamilyExtention__6B_;
  return;
}

// AddPasses @ 14de51700

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FScreenPassTexture * __thiscall
FNVImageUpscaler::AddPasses
          (FNVImageUpscaler *this,FScreenPassTexture *__return_storage_ptr__,FRDGBuilder *param_1,
          FViewInfo *param_2,FInputs *param_3)

{
  AddSharpenOrUpscalePass(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// Fork_GameThread @ 14de51cc0

ISpatialUpscaler * __thiscall
FNVImageUpscaler::Fork_GameThread(FNVImageUpscaler *this,FSceneViewFamily *param_1)

{
  code *pcVar1;
  bool bVar2;
  ISpatialUpscaler *pIVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\NIS\\Source\\NISCore\\Private\\NISUpscaler.cpp"
                       ,0xc6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (ISpatialUpscaler *)(*pcVar1)();
      return pIVar3;
    }
  }
  pIVar3 = ::operator_new(8);
  if (pIVar3 != (ISpatialUpscaler *)0x0) {
    *pIVar3 = (ISpatialUpscaler)&___7FNVImageUpscaler__6B_;
    return pIVar3;
  }
  return (ISpatialUpscaler *)0x0;
}

// GetDebugName @ 14de51d20

wchar_t * __thiscall FNVImageUpscaler::GetDebugName(FNVImageUpscaler *this)

{
  return L"NVIDIA Image Upscaler";
}

// GetOnScreenMessages @ 14de51d30

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
FNVImageUpscaler::GetOnScreenMessages
          (TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
           *param_1)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  FText *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FText local_res10;
  TPairInitializer<FCoreDelegates::EOnScreenMessageSeverity_&&,FText_const_&> local_118;
  FText *local_108;
  FText local_100;
  FTextFormat local_e8;
  uint *local_d8;
  FText *local_d0;
  FText local_c8;
  FTextFormat local_b8;
  FText local_a8;
  FTextFormat local_98;
  FText local_88;
  FTextFormat local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  bVar2 = IsInGameThread();
  pwVar6 = L"";
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\NIS\\Source\\NISCore\\Private\\NISUpscaler.cpp"
                       ,0xe4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (ErrorState.bOtherSpatialUpscalerActive != false) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_a8,L"FNISModule",L"NISOtherUpscalerActive",
                        L"NIS Error: Disabling NVIDIA NIS as the spatial upscaler since another spatial upscaler plugin is already active for this view family.\n           To enable NIS, please disable other primary spatial upscalers in the UI/application logic or via console variables {0} {1}. And vice versa"
                       );
    FTextFormat::FTextFormat(&local_e8,pFVar3,Default);
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
    pFVar3 = FText::FromString(&local_68,&ErrorState.IncompatibleUpscalerCVarNames);
    pwVar5 = L"";
    if (1 < ErrorState.IncompatibleUpscalerCVarNames.Data.ArrayNum) {
      pwVar5 = L"such as";
    }
    pFVar4 = FText::FromString(&local_58,pwVar5);
    local_98.TextFormatData.Object = local_e8.TextFormatData.Object;
    local_98.TextFormatData.SharedReferenceCount.ReferenceController =
         local_e8.TextFormatData.SharedReferenceCount.ReferenceController;
    if (local_e8.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_e8.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format<FText,FText>(&local_100,&local_98,pFVar4,pFVar3);
    local_118.Value = &local_res10;
    local_res10.TextData.Reference._0_1_ = 2;
    local_108 = &local_100;
    TSet<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_FCoreDelegates::EOnScreenMessageSeverity_&&,FText_const_&>_>
              (param_1,(TPairInitializer<FCoreDelegates::EOnScreenMessageSeverity_&&,FText_const_&>
                        *)&stack0x00000020,(bool *)&local_118.Value);
    if (local_100.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.TextFormatData.SharedReferenceCount.ReferenceController);
  }
  if (ErrorState.bPrimaryAndSecondarySpatialUpscaling != false) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"FNISModule",L"NISOtherUpscalerActive",
                        L"NIS Warning: NIS is used as a primary spatial upscaler, followed by the engine built-in secondary spatial upscaler, which is not optimal.\n             Consider disabling the secondary screen percentage (via r.SecondaryScreenPercentage.GameViewport or Editor.OverrideDPIBasedEditorViewportScaling) in order to have NIS upscale directly to the output resolution."
                       );
    FTextFormat::FTextFormat(&local_b8,pFVar3,Default);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
    pFVar3 = FText::FromString(&local_48,&ErrorState.IncompatibleUpscalerCVarNames);
    if (1 < ErrorState.IncompatibleUpscalerCVarNames.Data.ArrayNum) {
      pwVar6 = L"such as";
    }
    pFVar4 = FText::FromString(&local_38,pwVar6);
    local_78.TextFormatData.Object = local_b8.TextFormatData.Object;
    local_78.TextFormatData.SharedReferenceCount.ReferenceController =
         local_b8.TextFormatData.SharedReferenceCount.ReferenceController;
    if (local_b8.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format<FText,FText>(&local_c8,&local_78,pFVar4,pFVar3);
    local_d8 = &local_res10.Flags;
    local_res10.Flags._0_1_ = 1;
    local_d0 = &local_c8;
    TSet<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_FCoreDelegates::EOnScreenMessageSeverity_&&,FText_const_&>_>
              (param_1,&local_118,(bool *)&local_d8);
    if (local_c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.TextFormatData.SharedReferenceCount.ReferenceController);
  }
  return;
}

// RegisterOnScreenMessageHandler @ 14de51fc0

void __cdecl FNVImageUpscaler::RegisterOnScreenMessageHandler(void)

{
  FDelegateHandle FVar1;
  undefined1 local_res8 [32];
  
  FVar1 = TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
          ::AddStatic<>(&FCoreDelegates::OnGetOnScreenMessages,
                        (_func___cdecl_void_TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_ptr
                         *)local_res8);
                    /* WARNING: Load size is inaccurate */
  OnScreenMessagesDelegateHandle.ID = *FVar1.ID;
  return;
}

// RemoveOnScreenMessageHandler @ 14de52000

void __cdecl FNVImageUpscaler::RemoveOnScreenMessageHandler(void)

{
  code *pcVar1;
  FDelegateHandle FVar2;
  bool bVar3;
  uint uVar4;
  ulong64 *puVar5;
  ForAnyElementType *this;
  uint uVar6;
  longlong lVar7;
  FDestructionSentinel local_28;
  
  FVar2.ID = OnScreenMessagesDelegateHandle.ID;
  if (OnScreenMessagesDelegateHandle.ID != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FCoreDelegates::OnGetOnScreenMessages,(FWriteAccessScope *)&local_28);
    uVar6 = 0;
    if (0 < (int)FCoreDelegates::OnGetOnScreenMessages._16_4_) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (int)FCoreDelegates::OnGetOnScreenMessages._16_4_) {
          uVar4 = ~uVar6 >> 0x1f;
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
        this = (ForAnyElementType *)(FCoreDelegates::OnGetOnScreenMessages._8_8_ + lVar7);
        if (((*(int *)&this[1].Data != 0) && (this->Data != (FScriptContainerElement *)0x0)) &&
           (puVar5 = (ulong64 *)(**(code **)(*(longlong *)this->Data + 0x40))(), *puVar5 == FVar2.ID
           )) {
          if ((*(int *)&this[1].Data != 0) && (this->Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)this->Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this,0,0,0x10);
            *(undefined4 *)&this[1].Data = 0;
          }
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FCoreDelegates::OnGetOnScreenMessages,false);
          break;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while ((int)uVar6 < (int)FCoreDelegates::OnGetOnScreenMessages._16_4_);
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    OnScreenMessagesDelegateHandle.ID = 0;
  }
  return;
}

