// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NISCore
// Functions: 6

// <lambda_invoker_cdecl> @ 14de512e0

bool __cdecl
`FNISViewExtension::FNISViewExtension'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (ISceneViewExtension *param_1,FSceneViewExtensionContext *param_2)

{
  return true;
}

// FNISViewExtension @ 14de513f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014de51496) */
/* WARNING: Removing unreachable block (ram,0x00014de514a7) */
/* WARNING: Removing unreachable block (ram,0x00014de514ab) */

FNISViewExtension * __thiscall
FNISViewExtension::FNISViewExtension(FNISViewExtension *this,FAutoRegister *param_1)

{
  FGuid *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNISViewExtension *pFVar5;
  longlong *plVar6;
  uint *puVar7;
  undefined1 auStack_e8 [32];
  FGuid *local_c8;
  FGuid *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  FGuid local_98;
  code *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  longlong *plStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FSceneViewExtensionBase::FSceneViewExtensionBase((FSceneViewExtensionBase *)this,param_1);
  *(undefined ***)this = &___7FNISViewExtension__6B_;
  FGuid::NewGuid(&local_98);
  local_68 = local_38;
  uStack_64 = uStack_34;
  plStack_60 = (longlong *)0x0;
  local_78 = 0x52d3c508;
  uStack_74 = 1;
  uStack_70 = 0x4de512e0;
  uStack_6c = 1;
  local_58 = 0;
  uStack_50 = uStack_80;
  uStack_30 = 0;
  uStack_30 = 0;
  local_58 = 0;
  plStack_60 = (longlong *)0x0;
  uStack_6c = 1;
  uStack_70 = 0x4de512e0;
  uStack_74 = 1;
  local_78 = 0x52d3c508;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<bool_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),TOptional<bool>,ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&>
             ::Call;
  pFVar1 = *(FGuid **)&this->field_0x18;
  if ((pFVar1 <= &local_98) && (&local_98 < pFVar1 + (longlong)*(int *)&this->field_0x24 * 4)) {
    local_b0 = (longlong)*(int *)&this->field_0x20;
    local_a8 = 0x40;
    local_c8 = &local_98;
    local_c0 = pFVar1;
    local_b8 = (longlong)*(int *)&this->field_0x24;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FNISViewExtension *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = *(int *)&this->field_0x20;
  if (iVar4 == *(int *)&this->field_0x24) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,(ForAnyElementType *)&this->field_0x18,(int *)&this->field_0x24);
  }
  *(int *)&this->field_0x20 = iVar4 + 1;
  puVar7 = (uint *)((longlong)iVar4 * 0x40 + *(longlong *)&this->field_0x18);
  *puVar7 = local_98.A;
  puVar7[1] = local_98.B;
  puVar7[2] = local_98.C;
  puVar7[3] = local_98.D;
  *(code **)(puVar7 + 4) = local_88;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  if (local_88 != (code *)0x0) {
    plVar6 = (longlong *)&local_78;
    if (plStack_60 != (longlong *)0x0) {
      plVar6 = plStack_60;
    }
    (**(code **)*plVar6)();
  }
  if (local_88 != (code *)0x0) {
    plVar6 = (longlong *)&local_78;
    if (plStack_60 != (longlong *)0x0) {
      plVar6 = plStack_60;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return this;
}

// BeginRenderViewFamily @ 14de51740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNISViewExtension::BeginRenderViewFamily(FNISViewExtension *this,FSceneViewFamily *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  TConsoleVariableData<int> *pTVar7;
  TConsoleVariableData<int> *pTVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  Type TVar12;
  Type TVar13;
  int iVar14;
  uint uVar15;
  size_t sVar16;
  ISpatialUpscaler *pIVar17;
  IConsoleManager *pIVar18;
  longlong lVar19;
  undefined1 *puVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  float fVar23;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  undefined1 local_148 [4];
  int local_144;
  undefined1 local_140 [256];
  undefined1 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_178;
  TVar12 = FSceneViewFamily::GetFeatureLevel(param_1);
  TVar13 = GetNISMinRequiredFeatureLevel();
  pTVar7 = CVarNISEnable.Ref;
  bVar9 = IsInParallelGameThread();
  lVar21 = 4;
  if ((bVar9) || (bVar9 = IsInGameThread(), bVar9)) {
    lVar19 = 0;
  }
  else {
    lVar19 = 4;
  }
  pTVar8 = CVarNISUpscaling.Ref;
  iVar14 = *(int *)((longlong)pTVar7->ShadowedValue + lVar19);
  bVar9 = IsInParallelGameThread();
  if ((bVar9) || (bVar9 = IsInGameThread(), bVar9)) {
    lVar21 = 0;
  }
  iVar2 = *(int *)((longlong)pTVar8->ShadowedValue + lVar21);
  local_144 = iVar2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar18 = IConsoleManager::Get();
    CVarNISSharpness =
         (IConsoleVariable *)(**(code **)((longlong)*pIVar18 + 0xc0))(pIVar18,L"r.NIS.Sharpness",1);
    _Init_thread_footer(&::_TSS0);
  }
  if ((CVarNISSharpness == (IConsoleVariable *)0x0) ||
     (fVar23 = (float)(**(code **)(*(longlong *)CVarNISSharpness + 0xd0))(), fVar23 == 0.0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if ((int)TVar12 < (int)TVar13) {
    return;
  }
  if (iVar14 == 0) {
    return;
  }
  if ((iVar2 == 0) && (!bVar9)) {
    return;
  }
  ::FString::operator=(&FNVImageUpscaler::ErrorState.IncompatibleUpscalerCVarNames,L"");
  if (KnownUpscalerCVars[0].bInitialized == false) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("Singleton != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x4fb,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    KnownUpscalerCVars[0].CVar =
         (IConsoleVariable *)
         (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                   (IConsoleManager::Singleton,KnownUpscalerCVars[0].Name,1);
    KnownUpscalerCVars[0].bInitialized = true;
  }
  if ((KnownUpscalerCVars[0].CVar == (IConsoleVariable *)0x0) ||
     (iVar14 = (**(code **)(*(longlong *)KnownUpscalerCVars[0].CVar + 200))(), iVar14 == 0)) {
    if ((param_1->PrimarySpatialUpscalerInterface == (ISpatialUpscaler *)0x0) &&
       (param_1->SecondarySpatialUpscalerInterface == (ISpatialUpscaler *)0x0)) {
      bVar10 = false;
      goto LAB_14de51908;
    }
  }
  else {
    sVar16 = wcslen(KnownUpscalerCVars[0].Name);
    ::FString::AppendChars
              (&FNVImageUpscaler::ErrorState.IncompatibleUpscalerCVarNames,
               KnownUpscalerCVars[0].Name,(int)sVar16);
  }
  bVar10 = true;
LAB_14de51908:
  bVar4 = false;
  pFVar22 = (param_1->Views).AllocatorInstance.Data;
  bVar11 = false;
  bVar6 = false;
  iVar14 = (param_1->Views).ArrayNum;
  pFVar1 = pFVar22 + (longlong)iVar14 * 8;
  FNVImageUpscaler::ErrorState.bOtherSpatialUpscalerActive = bVar10;
  do {
    while( true ) {
      if ((param_1->Views).ArrayNum != iVar14) {
        local_148[0] = 0;
        `TCheckedPointerIterator<FSceneView_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_148);
      }
      if (pFVar22 == pFVar1) {
        (**(code **)((longlong)*param_1->ScreenPercentageInterface + 8))
                  (param_1->ScreenPercentageInterface,local_140);
        iVar14 = DynamicRenderScaling::FBudget::GetGlobalListSize();
        if ((local_38 != iVar14) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Array.Num() == FBudget::GetGlobalListSize()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                                ,0xd5,L""), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar21 = (longlong)GDynamicPrimaryResolutionFraction.BudgetId;
        uVar15 = 0;
        if (GDynamicPrimaryResolutionFraction.BudgetId < local_38) {
          uVar15 = (uint)~GDynamicPrimaryResolutionFraction.BudgetId >> 0x1f;
        }
        if (uVar15 == 0) {
          local_150 = (longlong)local_38;
          local_158 = lVar21;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        puVar20 = local_140;
        if (local_40 != (undefined1 *)0x0) {
          puVar20 = local_40;
        }
        if ((__real_3f800000 <= *(float *)(puVar20 + lVar21 * 0x10 + 8)) ||
           (*(float *)(puVar20 + lVar21 * 0x10 + 8) < __real_3f000000)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        if ((__real_3f800000 <= param_1->SecondaryViewFraction) ||
           (param_1->SecondaryViewFraction < __real_3f000000)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (((!bVar4) || (!bVar11)) ||
           (FNVImageUpscaler::ErrorState.bPrimaryAndSecondarySpatialUpscaling = true, !bVar5)) {
          FNVImageUpscaler::ErrorState.bPrimaryAndSecondarySpatialUpscaling = false;
        }
        if (bVar10 == false) {
          if (((local_144 == 0) || (!bVar4)) || (!bVar11)) {
            if ((bVar9) || (((bVar6 && (bVar11)) && (bVar5)))) {
              pIVar17 = ::operator_new(8);
              if (pIVar17 == (ISpatialUpscaler *)0x0) {
                pIVar17 = (ISpatialUpscaler *)0x0;
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InSpatialUpscalerInterface",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                                   ,0xa6d,L"");
                if (bVar9) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              else {
                *pIVar17 = (ISpatialUpscaler)&___7FNVImageUpscaler__6B_;
              }
              if ((param_1->SecondarySpatialUpscalerInterface != (ISpatialUpscaler *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("SecondarySpatialUpscalerInterface == nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                                     ,0xa6e,
                                     L"View family already had a secondary spatial upscaler assigned."
                                    ), bVar9)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              param_1->SecondarySpatialUpscalerInterface = pIVar17;
            }
          }
          else {
            pIVar17 = ::operator_new(8);
            if (pIVar17 == (ISpatialUpscaler *)0x0) {
              pIVar17 = (ISpatialUpscaler *)0x0;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InSpatialUpscalerInterface",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                                 ,0xa61,L"");
              if (bVar9) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            else {
              *pIVar17 = (ISpatialUpscaler)&___7FNVImageUpscaler__6B_;
            }
            if ((param_1->PrimarySpatialUpscalerInterface != (ISpatialUpscaler *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("PrimarySpatialUpscalerInterface == nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                                   ,0xa62,
                                   L"View family already had a primary spatial upscaler assigned."),
               bVar9)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            param_1->PrimarySpatialUpscalerInterface = pIVar17;
          }
        }
        if (local_40 != (undefined1 *)0x0) {
          FMemory::Free(local_40);
        }
        return;
      }
      if (*(longlong *)pFVar22 != 0) break;
LAB_14de51982:
      pFVar22 = pFVar22 + 8;
    }
    iVar2 = *(int *)(*(longlong *)pFVar22 + 0x1b94);
    if (iVar2 != 0) {
      bVar6 = bVar11;
      if (iVar2 == 1) {
        bVar11 = true;
        bVar6 = true;
      }
      goto LAB_14de51982;
    }
    bVar4 = true;
    pFVar22 = pFVar22 + 8;
  } while( true );
}

// SetupView @ 14de52160

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
FNISViewExtension::SetupView(FNISViewExtension *this,FSceneViewFamily *param_1,FSceneView *param_2)

{
  return;
}

// SetupViewFamily @ 14de52170

void __thiscall
FNISViewExtension::SetupViewFamily(FNISViewExtension *this,FSceneViewFamily *param_1)

{
  return;
}

// SetupViewPoint @ 14de52180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNISViewExtension::SetupViewPoint
          (FNISViewExtension *this,APlayerController *param_1,FMinimalViewInfo *param_2)

{
  return;
}

