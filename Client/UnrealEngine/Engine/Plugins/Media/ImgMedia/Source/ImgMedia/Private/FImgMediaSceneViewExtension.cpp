// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 7

// FImgMediaSceneViewExtension @ 14ea38b60

FImgMediaSceneViewExtension * __thiscall
FImgMediaSceneViewExtension::FImgMediaSceneViewExtension
          (FImgMediaSceneViewExtension *this,FAutoRegister *param_1)

{
  FDelegateHandle FVar1;
  
  FSceneViewExtensionBase::FSceneViewExtensionBase((FSceneViewExtensionBase *)this,param_1);
  this->_padding_ = (longlong)&___7FImgMediaSceneViewExtension__6B_;
  (this->CachedViewInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedViewInfos).ArrayNum = 0;
  (this->CachedViewInfos).ArrayMax = 0;
  (this->DisplayResolutionCachedViewInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplayResolutionCachedViewInfos).ArrayNum = 0;
  (this->DisplayResolutionCachedViewInfos).ArrayMax = 0;
  (this->OnBeginFrameDelegate).ID = 0;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddRaw<FImgMediaSceneViewExtension>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&FCoreDelegates::OnBeginFrame,
                     (FImgMediaSceneViewExtension *)&stack0x00000008,(pmf_b5184bc1 *)this);
                    /* WARNING: Load size is inaccurate */
  (this->OnBeginFrameDelegate).ID = *FVar1.ID;
  return this;
}

// ~FImgMediaSceneViewExtension @ 14ea3b0b0

void __thiscall
FImgMediaSceneViewExtension::~FImgMediaSceneViewExtension(FImgMediaSceneViewExtension *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FImgMediaSceneViewExtension__6B_;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnBeginFrame,(FDelegateHandle)(this->OnBeginFrameDelegate).ID);
  DestructItems<FImgMediaViewInfo,int>
            ((FImgMediaViewInfo *)(this->DisplayResolutionCachedViewInfos).AllocatorInstance.Data,
             (this->DisplayResolutionCachedViewInfos).ArrayNum);
  pFVar1 = (this->DisplayResolutionCachedViewInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FImgMediaViewInfo,int>
            ((FImgMediaViewInfo *)(this->CachedViewInfos).AllocatorInstance.Data,
             (this->CachedViewInfos).ArrayNum);
  pFVar1 = (this->CachedViewInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)this);
  return;
}

// BeginRenderViewFamily @ 14ea42030

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
FImgMediaSceneViewExtension::BeginRenderViewFamily
          (FImgMediaSceneViewExtension *this,FSceneViewFamily *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  undefined1 local_res10 [8];
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId53,"FImgMediaSceneViewExtension::BeginRenderViewFamily",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\ImgMediaSceneViewExtension.cpp"
               ,0x35);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId53);
  }
  pFVar3 = (param_1->Views).AllocatorInstance.Data;
  iVar2 = (param_1->Views).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Views).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FSceneView_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar3 == pFVar1) break;
    if (*(FSceneView **)pFVar3 != (FSceneView *)0x0) {
      CacheViewInfo(this,param_1,*(FSceneView **)pFVar3);
    }
    pFVar3 = pFVar3 + 8;
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CacheViewInfo @ 14ea42100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FImgMediaSceneViewExtension::CacheViewInfo
          (FImgMediaSceneViewExtension *this,FSceneViewFamily *param_1,FSceneView *param_2)

{
  int *piVar1;
  ISceneViewFamilyScreenPercentage *pIVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  FImgMediaViewInfo *pFVar6;
  TVector<double>_u_0 *pTVar7;
  code *pcVar8;
  double dVar9;
  float fVar10;
  TConsoleVariableData<bool> *pTVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  size_t sVar16;
  IConsoleManager *pIVar17;
  longlong *plVar18;
  TConsoleVariableData<float> *pTVar19;
  FString *pFVar20;
  undefined1 *puVar21;
  TConsoleVariableData<float> *pTVar22;
  ForAnyElementType FVar23;
  FImgMediaSceneViewExtension *pFVar24;
  int iVar25;
  longlong lVar26;
  int iVar27;
  wchar_t *pwVar28;
  longlong lVar29;
  longlong lVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  float fVar37;
  undefined1 auStackY_768 [32];
  undefined1 local_718 [4];
  undefined4 local_714;
  int iStack_710;
  int local_70c;
  int iStack_708;
  FImgMediaSceneViewExtension *local_700;
  undefined8 local_6f8;
  int local_6f0;
  int iStack_6ec;
  longlong local_6e8;
  FString local_6e0;
  FString local_6d0;
  FString local_6c0;
  FString local_6b0;
  FString local_6a0;
  double local_688;
  double dStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  FString local_668;
  FString local_658;
  FString local_648;
  TVector<double>_u_0 local_638;
  double local_620;
  double local_618;
  double local_610;
  undefined4 local_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 local_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 local_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 local_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 local_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  double local_5a8;
  double dStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  double local_528;
  double dStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 local_500;
  float local_4f8;
  undefined1 local_4f4;
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
  local_4f0;
  TMatrix<double> local_498;
  TMatrix<double> local_418;
  FImgMediaViewInfo local_398;
  undefined1 local_1f8 [256];
  undefined1 *local_f8;
  int local_f0;
  ulonglong local_e8;
  
  pTVar11 = CVarImgMediaProcessTilesInnerOnly.Ref;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_768;
  pTVar19 = (TConsoleVariableData<float> *)0x0;
  local_714 = 0;
  local_700 = this;
  bVar12 = IsInParallelGameThread();
  if (((!bVar12) && (bVar12 = IsInGameThread(), !bVar12)) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar22 = pTVar19;
  if (pTVar11->ShadowedValue[0] == false) {
LAB_14ea42266:
    bVar12 = false;
  }
  else {
    ::FString::FString(&local_6d0,"_icvfx_");
    if (local_6d0.Data.ArrayNum == 0) {
      pwVar28 = L"";
LAB_14ea421cd:
      sVar16 = wcslen(pwVar28);
      pTVar22 = (TConsoleVariableData<float> *)&DAT_00000001;
      iVar14 = ::FString::Find(&param_1->ProfileDescription,pwVar28,(int)sVar16,IgnoreCase,FromStart
                               ,-1);
      if (iVar14 != -1) {
        ::FString::FString(&local_6e0,"_incamera");
        if (local_6e0.Data.ArrayNum == 0) {
          pwVar28 = L"";
        }
        else {
          pwVar28 = (wchar_t *)local_6e0.Data.AllocatorInstance.Data;
          if (local_6e0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            pTVar22 = (TConsoleVariableData<float> *)&DAT_00000003;
            bVar12 = true;
            goto LAB_14ea42269;
          }
        }
        sVar16 = wcslen(pwVar28);
        iVar14 = ::FString::Find(&param_1->ProfileDescription,pwVar28,(int)sVar16,IgnoreCase,
                                 FromStart,-1);
        pTVar22 = (TConsoleVariableData<float> *)&DAT_00000003;
        if (iVar14 != -1) goto LAB_14ea42266;
      }
      bVar12 = true;
    }
    else {
      pwVar28 = (wchar_t *)local_6d0.Data.AllocatorInstance.Data;
      if (local_6d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14ea421cd;
      pTVar22 = (TConsoleVariableData<float> *)&DAT_00000001;
      bVar12 = true;
    }
  }
LAB_14ea42269:
  if ((((ulonglong)pTVar22 & 2) != 0) &&
     (pTVar22 = (TConsoleVariableData<float> *)(ulonglong)((uint)pTVar22 & 0xfffffffd),
     local_6e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_6e0.Data.AllocatorInstance.Data);
  }
  if ((((ulonglong)pTVar22 & 1) != 0) &&
     (local_6d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_6d0.Data.AllocatorInstance.Data);
  }
  if (bVar12) {
    return;
  }
  lVar29 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar29 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar17 = IConsoleManager::Get();
    plVar18 = (longlong *)
              (**(code **)((longlong)*pIVar17 + 0xc0))(pIVar17,L"r.ViewTextureMipBias.Offset",1);
    pTVar22 = pTVar19;
    if (plVar18 != (longlong *)0x0) {
      pTVar22 = (TConsoleVariableData<float> *)(**(code **)(*plVar18 + 0x70))(plVar18);
    }
    CVarMinAutomaticViewMipBiasOffset = pTVar22;
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar29 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pIVar17 = IConsoleManager::Get();
    plVar18 = (longlong *)
              (**(code **)((longlong)*pIVar17 + 0xc0))(pIVar17,L"r.ViewTextureMipBias.Min",1);
    if (plVar18 != (longlong *)0x0) {
      pTVar19 = (TConsoleVariableData<float> *)(**(code **)(*plVar18 + 0x70))(plVar18);
    }
    CVarMinAutomaticViewMipBias = pTVar19;
    _Init_thread_footer(&::_TSS1);
  }
  pTVar19 = CVarImgMediaFieldOfViewMultiplier.Ref;
  bVar12 = IsInParallelGameThread();
  if (((!bVar12) && (bVar12 = IsInGameThread(), !bVar12)) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pIVar2 = param_1->ScreenPercentageInterface;
  fVar31 = pTVar19->ShadowedValue[0];
  fVar37 = param_1->SecondaryViewFraction;
  if (pIVar2 != (ISceneViewFamilyScreenPercentage *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_1f8);
    iVar14 = DynamicRenderScaling::FBudget::GetGlobalListSize();
    if ((local_f0 != iVar14) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Array.Num() == FBudget::GetGlobalListSize()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\DynamicRenderScaling.h"
                            ,0xd5,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar29 = (longlong)GDynamicPrimaryResolutionFraction.BudgetId;
    uVar15 = 0;
    if (GDynamicPrimaryResolutionFraction.BudgetId < local_f0) {
      uVar15 = (uint)~GDynamicPrimaryResolutionFraction.BudgetId >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    puVar21 = local_1f8;
    if (local_f8 != (undefined1 *)0x0) {
      puVar21 = local_f8;
    }
    fVar37 = fVar37 * *(float *)(puVar21 + lVar29 * 0x10 + 8);
    if (local_f8 != (undefined1 *)0x0) {
      FMemory::Free(local_f8);
    }
  }
  uVar3 = *(undefined8 *)&(param_2->UnconstrainedViewRect).field0_0x0;
  uVar4 = *(undefined8 *)((longlong)&(param_2->UnconstrainedViewRect).field0_0x0 + 8);
  local_638._s_0.Z = (param_2->ViewMatrices).ViewOrigin.field0_0x0._s_0.Z;
  local_608 = *(undefined4 *)(param_2->ViewMatrices).ViewProjectionMatrix.M[0];
  uStack_604 = *(undefined4 *)((longlong)(param_2->ViewMatrices).ViewProjectionMatrix.M[0] + 4);
  uStack_600 = *(undefined4 *)((param_2->ViewMatrices).ViewProjectionMatrix.M[0] + 1);
  uStack_5fc = *(undefined4 *)((longlong)(param_2->ViewMatrices).ViewProjectionMatrix.M[0] + 0xc);
  local_5f8 = *(undefined4 *)((param_2->ViewMatrices).ViewProjectionMatrix.M[0] + 2);
  uStack_5f4 = *(undefined4 *)((longlong)(param_2->ViewMatrices).ViewProjectionMatrix.M[0] + 0x14);
  uStack_5f0 = *(undefined4 *)((param_2->ViewMatrices).ViewProjectionMatrix.M[0] + 3);
  uStack_5ec = *(undefined4 *)((longlong)(param_2->ViewMatrices).ViewProjectionMatrix.M[0] + 0x1c);
  local_5e8 = *(undefined4 *)(param_2->ViewMatrices).ViewProjectionMatrix.M[1];
  uStack_5e4 = *(undefined4 *)((longlong)(param_2->ViewMatrices).ViewProjectionMatrix.M[1] + 4);
  uStack_5e0 = *(undefined4 *)((param_2->ViewMatrices).ViewProjectionMatrix.M[1] + 1);
  uStack_5dc = *(undefined4 *)((longlong)(param_2->ViewMatrices).ViewProjectionMatrix.M[1] + 0xc);
  local_5d8 = *(undefined4 *)((param_2->ViewMatrices).ViewProjectionMatrix.M[1] + 2);
  uStack_5d4 = *(undefined4 *)((longlong)(param_2->ViewMatrices).ViewProjectionMatrix.M[1] + 0x14);
  uStack_5d0 = *(undefined4 *)((param_2->ViewMatrices).ViewProjectionMatrix.M[1] + 3);
  uStack_5cc = *(undefined4 *)((longlong)(param_2->ViewMatrices).ViewProjectionMatrix.M[1] + 0x1c);
  local_5c8 = *(undefined4 *)(param_2->ViewMatrices).ViewProjectionMatrix.M[2];
  uStack_5c4 = *(undefined4 *)((longlong)(param_2->ViewMatrices).ViewProjectionMatrix.M[2] + 4);
  uStack_5c0 = *(undefined4 *)((param_2->ViewMatrices).ViewProjectionMatrix.M[2] + 1);
  uStack_5bc = *(undefined4 *)((longlong)(param_2->ViewMatrices).ViewProjectionMatrix.M[2] + 0xc);
  local_5b8 = *(undefined4 *)((param_2->ViewMatrices).ViewProjectionMatrix.M[2] + 2);
  uStack_5b4 = *(undefined4 *)((longlong)(param_2->ViewMatrices).ViewProjectionMatrix.M[2] + 0x14);
  uStack_5b0 = *(undefined4 *)((param_2->ViewMatrices).ViewProjectionMatrix.M[2] + 3);
  uStack_5ac = *(undefined4 *)((longlong)(param_2->ViewMatrices).ViewProjectionMatrix.M[2] + 0x1c);
  local_4f0.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_4f0.Elements._48_8_ = _UNK_150631d98;
  local_638._s_0.X = (param_2->ViewMatrices).ViewOrigin.field0_0x0._s_0.X;
  local_638._s_0.Y = (param_2->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y;
  local_618 = (param_2->ViewMatrices).ViewMatrix.M[1][2];
  local_620 = (param_2->ViewMatrices).ViewMatrix.M[0][2];
  local_610 = (param_2->ViewMatrices).ViewMatrix.M[2][2];
  local_688 = (param_2->ViewMatrices).ViewProjectionMatrix.M[3][0];
  dStack_680 = (param_2->ViewMatrices).ViewProjectionMatrix.M[3][1];
  dVar9 = (double)fVar37;
  local_4f0.Elements._0_8_ = 0;
  local_4f0.Elements._8_8_ = 0;
  local_4f0.Elements._32_8_ = 0;
  local_4f0.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_4f0.HashSize = 0;
  local_598 = (param_2->ViewMatrices).ViewProjectionMatrix.M[3][2];
  uStack_590 = (param_2->ViewMatrices).ViewProjectionMatrix.M[3][3];
  dVar34 = (double)(int)uVar4;
  dVar35 = (double)(int)uVar3;
  lVar30 = (longlong)
           ROUND(__real_bfe0000000000000 - (double)(int)((ulonglong)uVar4 >> 0x20) * (dVar9 + dVar9)
                ) >> 1;
  iVar27 = -(int)lVar30;
  lVar29 = (longlong)ROUND(__real_bfe0000000000000 - (dVar34 + dVar34) * dVar9) >> 1;
  iVar14 = -(int)lVar29;
  local_6e8 = (longlong)ROUND((dVar35 + dVar35) * dVar9 - __real_3fe0000000000000) >> 1;
  lVar26 = (longlong)
           ROUND((double)(int)((ulonglong)uVar3 >> 0x20) * (dVar9 + dVar9) - __real_3fe0000000000000
                ) >> 1;
  iVar25 = (int)lVar26;
  local_678 = local_598;
  uStack_670 = uStack_590;
  local_5a8 = local_688;
  dStack_5a0 = dStack_680;
  if (((((local_6e8 == (int)local_6e8) && (lVar26 == iVar25)) && (-(longlong)iVar14 == lVar29)) &&
      (-(longlong)iVar27 == lVar30)) || ((byte)LogImgMedia._0_1_ < 2)) {
    local_678._0_4_ = SUB84(local_598,0);
    local_678._4_4_ = (undefined4)((ulonglong)local_598 >> 0x20);
    uStack_670._0_4_ = SUB84(uStack_590,0);
    uStack_670._4_4_ = (undefined4)((ulonglong)uStack_590 >> 0x20);
    local_598._0_4_ = (undefined4)local_678;
    uVar32 = local_678._4_4_;
    uStack_590._0_4_ = (undefined4)uStack_670;
    uVar33 = uStack_670._4_4_;
  }
  else {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
    uVar32 = local_598._4_4_;
    uVar33 = uStack_590._4_4_;
  }
  fVar10 = __real_322bcc77;
  dVar9 = __real_3ff0000000000000;
  local_714 = (undefined4)local_6e8;
  local_508 = CONCAT44(iVar25,local_714);
  local_500 = CONCAT44(iVar27,iVar14);
  iStack_710 = iVar25;
  local_70c = iVar14;
  iStack_708 = iVar27;
  if (__real_322bcc77 <
      (float)((uint)(fVar31 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    local_498.M[0][0] = (param_2->ViewMatrices).ProjectionMatrix.M[0][0];
    local_498.M[0][1] = (param_2->ViewMatrices).ProjectionMatrix.M[0][1];
    local_498.M[0][2] = (param_2->ViewMatrices).ProjectionMatrix.M[0][2];
    local_498.M[0][3] = (param_2->ViewMatrices).ProjectionMatrix.M[0][3];
    local_498.M[2][0] = (param_2->ViewMatrices).ProjectionMatrix.M[2][0];
    local_498.M[2][1] = (param_2->ViewMatrices).ProjectionMatrix.M[2][1];
    local_498.M[1][0] = (param_2->ViewMatrices).ProjectionMatrix.M[1][0];
    dVar34 = (param_2->ViewMatrices).ProjectionMatrix.M[1][1];
    local_498.M[1][2] = (param_2->ViewMatrices).ProjectionMatrix.M[1][2];
    local_498.M[1][3] = (param_2->ViewMatrices).ProjectionMatrix.M[1][3];
    local_498.M[2][2] = (param_2->ViewMatrices).ProjectionMatrix.M[2][2];
    local_498.M[2][3] = (param_2->ViewMatrices).ProjectionMatrix.M[2][3];
    local_498.M[3][2] = (param_2->ViewMatrices).ProjectionMatrix.M[3][2];
    local_498.M[3][3] = (param_2->ViewMatrices).ProjectionMatrix.M[3][3];
    dVar36 = (double)fVar31;
    local_498.M[3][0] = (param_2->ViewMatrices).ProjectionMatrix.M[3][0];
    local_498.M[3][1] = (param_2->ViewMatrices).ProjectionMatrix.M[3][1];
    local_498.M[1][1] = dVar34;
    dVar35 = atan(__real_3ff0000000000000 / local_498.M[0][0]);
    local_498.M[0][0] = tan(dVar35 * dVar36);
    local_498.M[0][0] = dVar9 / local_498.M[0][0];
    dVar34 = atan(dVar9 / dVar34);
    local_498.M[1][1] = tan(dVar34 * dVar36);
    local_498.M[1][1] = dVar9 / local_498.M[1][1];
    VectorMatrixMultiply(&local_418,&(param_2->ViewMatrices).ViewMatrix,&local_498);
    local_588 = local_418.M[0][0];
    uStack_580 = local_418.M[0][1];
    local_578 = local_418.M[0][2];
    uStack_570 = local_418.M[0][3];
    local_568 = local_418.M[1][0];
    uStack_560 = local_418.M[1][1];
    local_558 = local_418.M[1][2];
    uStack_550 = local_418.M[1][3];
    local_548 = local_418.M[2][0];
    uStack_540 = local_418.M[2][1];
    local_538 = local_418.M[2][2];
    uStack_530 = local_418.M[2][3];
    local_528 = local_418.M[3][0];
    dStack_520 = local_418.M[3][1];
    local_518 = local_418.M[3][2];
    uStack_510 = local_418.M[3][3];
  }
  else {
    local_588 = (double)CONCAT44(uStack_604,local_608);
    uStack_580 = (double)CONCAT44(uStack_5fc,uStack_600);
    local_578 = (double)CONCAT44(uStack_5f4,local_5f8);
    uStack_570 = (double)CONCAT44(uStack_5ec,uStack_5f0);
    local_568 = (double)CONCAT44(uStack_5e4,local_5e8);
    uStack_560 = (double)CONCAT44(uStack_5dc,uStack_5e0);
    local_558 = (double)CONCAT44(uStack_5d4,local_5d8);
    uStack_550 = (double)CONCAT44(uStack_5cc,uStack_5d0);
    local_548 = (double)CONCAT44(uStack_5c4,local_5c8);
    uStack_540 = (double)CONCAT44(uStack_5bc,uStack_5c0);
    local_538 = (double)CONCAT44(uStack_5b4,local_5b8);
    uStack_530 = (double)CONCAT44(uStack_5ac,uStack_5b0);
    local_518 = (double)CONCAT44(uVar32,(undefined4)local_598);
    uStack_510 = (double)CONCAT44(uVar33,(undefined4)uStack_590);
    local_528 = local_5a8;
    dStack_520 = dStack_5a0;
  }
  local_4f4 = *(int *)((longlong)&(param_2->ShowOnlyPrimitives).field0_0x0 + 0xc) == -1;
  lVar29 = 0xee8;
  if ((bool)local_4f4) {
    lVar29 = 0xe98;
  }
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
  operator=(&local_4f0,
            (TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
             *)(&param_2->field_0x0 + lVar29));
  if (param_2->PrimaryScreenPercentageMethod == TemporalUpscale) {
    fVar31 = logf((float)((int)local_500 - (int)local_508) /
                  ((float)(*(int *)((longlong)&(param_2->UnscaledViewRect).field0_0x0 + 8) -
                          *(int *)&(param_2->UnscaledViewRect).field0_0x0) *
                  param_1->SecondaryViewFraction));
    fVar31 = fVar31 * __real_bfb8aa3b;
    if (fVar31 <= 0.0) {
      fVar31 = 0.0;
    }
    local_4f8 = TConsoleVariableData<float>::GetValueOnGameThread(CVarMinAutomaticViewMipBiasOffset)
    ;
    local_4f8 = local_4f8 - fVar31;
    fVar31 = TConsoleVariableData<float>::GetValueOnGameThread(CVarMinAutomaticViewMipBias);
    if (fVar31 <= local_4f8) {
      fVar31 = local_4f8;
    }
    local_4f8 = fVar31;
    iVar14 = _isnan((double)fVar31);
    if ((iVar14 == 0) && (iVar14 = _finite((double)local_4f8), iVar14 != 0)) goto LAB_14ea42a53;
    local_718[0] = 0;
    bVar12 = `FImgMediaSceneViewExtension::CacheViewInfo'::__l44::<lambda_1>::operator()(local_718);
    if (bVar12) goto LAB_14ea42a53;
  }
  local_4f8 = 0.0;
LAB_14ea42a53:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    pIVar17 = IConsoleManager::Get();
    CVarMipMapDebug =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar17 + 0xc0))(pIVar17,L"ImgMedia.MipMapDebug",1);
    _Init_thread_footer(&::_TSS2);
  }
  if (((GEngine != (UEngine *)0x0) && (CVarMipMapDebug != (IConsoleVariable *)0x0)) &&
     (cVar13 = (**(code **)(*(longlong *)CVarMipMapDebug + 0xc0))(), cVar13 != '\0')) {
    bVar12 = 1 < (param_1->ProfileDescription).Data.ArrayNum;
    if (bVar12) {
      pFVar20 = ::FString::FString(&local_658,&param_1->ProfileDescription);
    }
    else {
      pFVar20 = ::FString::FString(&local_648,L"View");
    }
    pFVar5 = (pFVar20->Data).AllocatorInstance.Data;
    (pFVar20->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar20->Data).ArrayNum = 0;
    (pFVar20->Data).ArrayMax = 0;
    if ((bVar12) && (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_658.Data.AllocatorInstance.Data);
    }
    if ((!bVar12) && (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_648.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_6a0,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_6b0,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_6c0,L"%s location: [%s], direction: [%s]");
    FVar23.Data = (FScriptContainerElement *)L"";
    if (local_6c0.Data.ArrayNum != 0) {
      FVar23.Data = local_6c0.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_668,(wchar_t *)FVar23.Data);
    UEngine::AddOnScreenDebugMessage
              (GEngine,-1,0.0,FColor::Cyan,&local_668,true,&UE::Math::TVector2<double>::UnitVector);
    if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_668.Data.AllocatorInstance.Data);
    }
    if (local_6c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6c0.Data.AllocatorInstance.Data);
    }
    if (local_6b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6b0.Data.AllocatorInstance.Data);
    }
    if (local_6a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6a0.Data.AllocatorInstance.Data);
    }
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
  }
  pFVar24 = local_700;
  if (fVar10 < (float)((uint)(fVar37 - param_1->SecondaryViewFraction) &
                      __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    FImgMediaViewInfo::FImgMediaViewInfo(&local_398,(FImgMediaViewInfo *)&local_638._s_0);
    pFVar24 = local_700;
    fVar31 = param_1->SecondaryViewFraction + param_1->SecondaryViewFraction;
    local_6f8 = 0;
    local_398.MaterialTextureMipBias = 0.0;
    local_6f0 = -((int)ROUND(__real_bf000000 -
                             (float)(*(int *)((longlong)&(param_2->UnconstrainedViewRect).field0_0x0
                                             + 8) -
                                    *(int *)&(param_2->UnconstrainedViewRect).field0_0x0) * fVar31)
                 >> 1);
    pFVar6 = (FImgMediaViewInfo *)
             (local_700->DisplayResolutionCachedViewInfos).AllocatorInstance.Data;
    iStack_6ec = -((int)ROUND(__real_bf000000 -
                              (float)(*(int *)((longlong)
                                               &(param_2->UnconstrainedViewRect).field0_0x0 + 0xc) -
                                     *(int *)((longlong)&(param_2->UnconstrainedViewRect).field0_0x0
                                             + 4)) * fVar31) >> 1);
    local_398.ViewportRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    local_398.ViewportRect.field0_0x0._12_4_ = iStack_6ec;
    local_398.ViewportRect.field0_0x0._8_4_ = local_6f0;
    if (((pFVar6 <= &local_398) &&
        (&local_398 < pFVar6 + (local_700->DisplayResolutionCachedViewInfos).ArrayMax)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar14 = (pFVar24->DisplayResolutionCachedViewInfos).ArrayNum;
    piVar1 = &(pFVar24->DisplayResolutionCachedViewInfos).ArrayMax;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1a0,0x10,&(pFVar24->DisplayResolutionCachedViewInfos).AllocatorInstance,
                          piVar1);
    }
    (pFVar24->DisplayResolutionCachedViewInfos).ArrayNum = iVar14 + 1;
    FImgMediaViewInfo::FImgMediaViewInfo
              ((FImgMediaViewInfo *)
               ((pFVar24->DisplayResolutionCachedViewInfos).AllocatorInstance.Data +
               (longlong)iVar14 * 0x1a0),&local_398);
    local_398.PrimitiveComponentIds.HashSize = 0;
    if (local_398.PrimitiveComponentIds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_398.PrimitiveComponentIds.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_398.PrimitiveComponentIds.Elements);
  }
  pTVar7 = (TVector<double>_u_0 *)(pFVar24->CachedViewInfos).AllocatorInstance.Data;
  if (((pTVar7 <= &local_638) &&
      (&local_638 <
       (TVector<double>_u_0 *)
       ((longlong)pTVar7 + (longlong)(pFVar24->CachedViewInfos).ArrayMax * 0x1a0))) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar14 = (pFVar24->CachedViewInfos).ArrayNum;
  piVar1 = &(pFVar24->CachedViewInfos).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1a0,0x10,&(pFVar24->CachedViewInfos).AllocatorInstance,piVar1);
  }
  (pFVar24->CachedViewInfos).ArrayNum = iVar14 + 1;
  FImgMediaViewInfo::FImgMediaViewInfo
            ((FImgMediaViewInfo *)
             ((pFVar24->CachedViewInfos).AllocatorInstance.Data + (longlong)iVar14 * 0x1a0),
             (FImgMediaViewInfo *)&local_638._s_0);
  local_4f0.HashSize = 0;
  if (local_4f0.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_4f0.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_4f0.Elements);
  return;
}

// GetPriority @ 14ea4e0c0

int __thiscall FImgMediaSceneViewExtension::GetPriority(FImgMediaSceneViewExtension *this)

{
  return -0x80000000;
}

// ResetViewInfoCache @ 14ea5b070

void __thiscall FImgMediaSceneViewExtension::ResetViewInfoCache(FImgMediaSceneViewExtension *this)

{
  int *piVar1;
  int iVar2;
  FImgMediaViewInfo *pFVar3;
  
  piVar1 = &(this->CachedViewInfos).ArrayMax;
  pFVar3 = (FImgMediaViewInfo *)(this->CachedViewInfos).AllocatorInstance.Data;
  iVar2 = (this->CachedViewInfos).ArrayNum;
  if ((this->CachedViewInfos).ArrayMax < 0) {
    DestructItems<FImgMediaViewInfo,int>(pFVar3,iVar2);
    (this->CachedViewInfos).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1a0,0x10,0,&(this->CachedViewInfos).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FImgMediaViewInfo,int>(pFVar3,iVar2);
    (this->CachedViewInfos).ArrayNum = 0;
  }
  pFVar3 = (FImgMediaViewInfo *)(this->DisplayResolutionCachedViewInfos).AllocatorInstance.Data;
  piVar1 = &(this->DisplayResolutionCachedViewInfos).ArrayMax;
  iVar2 = (this->DisplayResolutionCachedViewInfos).ArrayNum;
  if (-1 < (this->DisplayResolutionCachedViewInfos).ArrayMax) {
    DestructItems<FImgMediaViewInfo,int>(pFVar3,iVar2);
    (this->DisplayResolutionCachedViewInfos).ArrayNum = 0;
    return;
  }
  DestructItems<FImgMediaViewInfo,int>(pFVar3,iVar2);
  (this->DisplayResolutionCachedViewInfos).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1a0,0x10,0,&(this->DisplayResolutionCachedViewInfos).AllocatorInstance,0,piVar1);
  }
  return;
}

// operator() @ 15059c1a0

bool __thiscall
`FImgMediaSceneViewExtension::CacheViewInfo'::__l44::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8920892642842116255>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8920892642842116255>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

