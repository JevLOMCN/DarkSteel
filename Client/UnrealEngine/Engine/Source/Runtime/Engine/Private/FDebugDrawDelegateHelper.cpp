// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// DrawDebugLabels @ 147ad4960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FDebugDrawDelegateHelper::DrawDebugLabels
          (FDebugDrawDelegateHelper *this,UCanvas *param_1,APlayerController *param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  int iVar3;
  FSceneView *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  TConsoleVariableData<bool> *pTVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  FFontRenderInfo *pFVar16;
  longlong lVar17;
  undefined1 auStackY_468 [32];
  float local_424;
  FColor_u_0 local_420 [2];
  UFont *local_418;
  TVector<float>_u_0 local_410 [2];
  wchar_t *local_3f8;
  int iStack_3f0;
  undefined4 uStack_3ec;
  TVector2<double>_u_0 local_3e8;
  TVector2<double>_u_0 local_3d8;
  FLinearColor_u_0 local_3c8;
  TVector2<double>_u_0 local_3b8;
  TVector2<double>_u_0 local_3a8;
  FLinearColor_u_0 local_398;
  TStringView<wchar_t> local_388;
  TVector<double>_u_0 local_378;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  FFontRenderInfo local_2f8;
  FFontRenderInfo local_2b8;
  FConvexVolume local_278;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_468;
  local_420[0] = (param_1->DrawColor).field0_0x0;
  local_358 = 0;
  uStack_350 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_3e8._s_0.X = 0.0;
  local_3e8._s_0.Y = 0.0;
  local_3d8._s_0.X = 0.0;
  local_3d8._s_0.Y = 0.0;
  local_3c8._0_8_ = 0;
  local_3c8._8_8_ = 0;
  UCanvas::CreateFontRenderInfo
            (param_1,&local_2f8,true,false,(FLinearColor *)&local_3c8._s_0,
             (TVector2<double> *)&local_3d8._s_0,(TVector2<double> *)&local_3e8._s_0);
  local_328 = 0;
  uStack_320 = 0;
  local_318 = 0;
  uStack_310 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_3b8._s_0.X = 0.0;
  local_3b8._s_0.Y = 0.0;
  local_3a8._s_0.X = 0.0;
  local_3a8._s_0.Y = 0.0;
  local_398._0_8_ = 0;
  local_398._8_8_ = 0;
  UCanvas::CreateFontRenderInfo
            (param_1,&local_2b8,true,true,(FLinearColor *)&local_398._s_0,
             (TVector2<double> *)&local_3a8._s_0,(TVector2<double> *)&local_3b8._s_0);
  UCanvas::SetDrawColor(param_1,&FColor::White);
  local_418 = UEngine::GetSmallFont();
  pTVar11 = CVarDebugRenderAllowFrustumCulling.Ref;
  pFVar4 = param_1->SceneView;
  bVar12 = IsInParallelGameThread();
  if (((!bVar12) && (bVar12 = IsInGameThread(), !bVar12)) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar12 = pTVar11->ShadowedValue[0];
  FDebugRenderSceneProxy::AdjustViewFrustumForFarClipping
            (&local_278,pFVar4,this->FarClippingDistance);
  fVar10 = __real_3f800000;
  uVar15 = 0;
  do {
    if (((int)uVar15 < 0) || ((this->Texts).ArrayNum <= (int)uVar15)) {
      UCanvas::SetDrawColor(param_1,(FColor *)&local_420[0]._s_0);
      if (local_278.PermutedPlanes.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FMemory::Free((void *)local_278.PermutedPlanes.AllocatorInstance.SecondaryData);
      }
      if (local_278.Planes.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FMemory::Free((void *)local_278.Planes.AllocatorInstance.SecondaryData);
      }
      return;
    }
    if (bVar12 == false) {
LAB_147ad4b7e:
      uVar14 = 0;
      if ((int)uVar15 < (this->Texts).ArrayNum) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->Texts).AllocatorInstance.Data;
      lVar17 = (longlong)(int)uVar15;
      if (param_1->SceneView == (FSceneView *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      pFVar1 = pFVar5 + lVar17 * 0x30 + 0x10;
      local_378._s_0.X = (double)*(undefined8 *)pFVar1;
      local_378._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
      local_378._s_0.Z = (double)*(undefined8 *)(pFVar5 + lVar17 * 0x30 + 0x20);
      UE::DebugDrawHelper::GetScaleAdjustedScreenLocation
                ((TVector<float> *)&local_410[0]._s_0,param_1->SceneView,param_1->Canvas,
                 (TVector<double> *)&local_378._s_0);
      fVar2 = this->TextWithoutShadowDistance;
      if (fVar2 < 0.0) {
        pFVar16 = &local_2f8;
      }
      else {
        uVar14 = 0;
        if ((int)uVar15 < (this->Texts).ArrayNum) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this->Texts).AllocatorInstance.Data;
        dVar9 = (pFVar4->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y -
                *(double *)(pFVar5 + lVar17 * 0x30 + 0x18);
        dVar7 = (pFVar4->ViewMatrices).ViewOrigin.field0_0x0._s_0.Z -
                *(double *)(pFVar5 + lVar17 * 0x30 + 0x20);
        dVar8 = (pFVar4->ViewMatrices).ViewOrigin.field0_0x0._s_0.X -
                *(double *)(pFVar5 + lVar17 * 0x30 + 0x10);
        pFVar16 = &local_2b8;
        if ((double)(fVar2 * fVar2) < dVar9 * dVar9 + dVar8 * dVar8 + dVar7 * dVar7) {
          pFVar16 = &local_2f8;
        }
      }
      uVar14 = 0;
      if ((int)uVar15 < (this->Texts).ArrayNum) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar17 = (longlong)(int)uVar15;
      UCanvas::SetDrawColor
                (param_1,(FColor *)((this->Texts).AllocatorInstance.Data + lVar17 * 0x30 + 0x28));
      uVar14 = 0;
      if ((int)uVar15 < (this->Texts).ArrayNum) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->Texts).AllocatorInstance.Data;
      local_3f8 = *(wchar_t **)(pFVar5 + lVar17 * 0x30);
      iVar3 = *(int *)(pFVar5 + lVar17 * 0x30 + 8);
      iStack_3f0 = iVar3 + -1;
      if (iVar3 == 0) {
        iStack_3f0 = 0;
      }
      local_388._12_4_ = uStack_3ec;
      local_388.Size = iStack_3f0;
      local_388.DataPtr = local_3f8;
      UCanvas::DrawText(param_1,local_418,&local_388,(float)local_410[0]._0_4_,
                        (float)local_410[0]._4_4_,fVar10,fVar10,pFVar16);
    }
    else {
      if (((int)uVar15 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_424 = 0.0;
      bVar13 = FConvexVolume::IntersectSphere
                         (&local_278,
                          (TVector<double> *)
                          ((this->Texts).AllocatorInstance.Data +
                          (longlong)(int)uVar15 * 0x30 + 0x10),&local_424);
      if (bVar13) goto LAB_147ad4b7e;
    }
    uVar15 = uVar15 + 1;
  } while( true );
}

// HandleDrawDebugLabels @ 147af0290

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
FDebugDrawDelegateHelper::HandleDrawDebugLabels
          (FDebugDrawDelegateHelper *this,UCanvas *param_1,APlayerController *param_2)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  bool bVar4;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId160,"FDebugDrawDelegateHelper::OnDrawDebugLabels",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DebugRenderSceneProxy.cpp"
               ,0xa0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId160);
  }
  if ((param_1 == (UCanvas *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Canvas",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DebugRenderSceneProxy.cpp"
                         ,0xa2,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1->Canvas != (FCanvas *)0x0) {
    pUVar3 = (UWorld *)(**(code **)(param_1->Canvas->Scene->_padding_ + 0x410))();
    bVar2 = TWeakObjectPtr<UWorld,FWeakObjectPtr>::UEOpEquals<UWorld,bool>
                      (&this->AssociatedWorld,pUVar3);
    if (!bVar2) goto LAB_147af0355;
  }
  (**(code **)(this->_padding_ + 0x18))(this,param_1,param_2);
LAB_147af0355:
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InitDelegateHelper @ 147af2150

void __thiscall
FDebugDrawDelegateHelper::InitDelegateHelper
          (FDebugDrawDelegateHelper *this,FDebugRenderSceneProxy *param_1)

{
  TArray<FDebugRenderSceneProxy::FText3d,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  FText3d *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  EState EVar9;
  UObject *local_res8;
  
  bVar7 = IsInParallelGameThread();
  if (!bVar7) {
    bVar7 = IsInGameThread();
    if (!bVar7) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelGameThread() || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DebugRenderSceneProxy.cpp"
                         ,0x5a,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  pFVar5 = (FText3d *)(this->Texts).AllocatorInstance.Data;
  pTVar1 = &this->Texts;
  piVar2 = &(this->Texts).ArrayMax;
  iVar4 = (this->Texts).ArrayNum;
  piVar3 = &(this->Texts).ArrayNum;
  if ((this->Texts).ArrayMax < 0) {
    DestructItems<FDebugRenderSceneProxy::FText3d,int>(pFVar5,iVar4);
    *piVar3 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<FDebugRenderSceneProxy::FText3d,int>(pFVar5,iVar4);
    *piVar3 = 0;
  }
  if (pTVar1 == &param_1->Texts) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar4 = (param_1->Texts).ArrayNum;
  if (iVar4 != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,iVar4,&pTVar1->AllocatorInstance,piVar3,piVar2);
    ConstructItems<FDebugRenderSceneProxy::FText3d,FDebugRenderSceneProxy::FText3d,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x30,
               (FText3d *)(param_1->Texts).AllocatorInstance.Data,iVar4);
  }
  ::FString::operator=(&this->ViewFlagName,&param_1->ViewFlagName);
  this->TextWithoutShadowDistance = param_1->TextWithoutShadowDistance;
  EVar9 = this->State;
  if (EVar9 == UndefinedState) {
    EVar9 = InitializedState;
  }
  this->State = EVar9;
  this->FarClippingDistance = param_1->FarClippingDistance;
  local_res8 = (UObject *)(**(code **)(*(longlong *)param_1->_padding_ + 0x410))();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&(this->AssociatedWorld).WeakPtr,(FObjectPtr)&local_res8);
  return;
}

// ProcessDeferredRegister @ 147aff620

void __thiscall FDebugDrawDelegateHelper::ProcessDeferredRegister(FDebugDrawDelegateHelper *this)

{
  if (this->bDeferredRegister != false) {
    (**(code **)(this->_padding_ + 0x10))();
    this->bDeferredRegister = false;
  }
  return;
}

// RegisterDebugDrawDelegateInternal @ 147b08c90

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
FDebugDrawDelegateHelper::RegisterDebugDrawDelegateInternal(FDebugDrawDelegateHelper *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDelegateHandle FVar3;
  wchar_t *pwVar4;
  wchar_t local_res8 [4];
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  if (this->State == InitializedState) {
    local_48 = (undefined1  [8])0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    local_18 = &local_40;
    puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_40);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseRawMethodDelegateInstance__0A_UFDebugDrawDelegateHelper____A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar1[4] = HandleDrawDebugLabels;
      puVar1[3] = this;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->DebugTextDrawingDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    if ((local_40.DelegateSize != 0) &&
       (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_40,0,0,0x10);
      local_40.DelegateSize = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_40.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_48);
    if ((this->ViewFlagName).Data.ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(this->ViewFlagName).Data.AllocatorInstance.Data;
    }
    FVar3 = UDebugDrawService::Register
                      (local_res8,
                       (TDelegate<void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
                        *)pwVar4);
                    /* WARNING: Load size is inaccurate */
    (this->DebugTextDrawingDelegateHandle).ID = *FVar3.ID;
    this->State = RegisteredState;
  }
  return;
}

// RequestRegisterDebugDrawDelegate @ 147b0d3a0

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
FDebugDrawDelegateHelper::RequestRegisterDebugDrawDelegate
          (FDebugDrawDelegateHelper *this,FRegisterComponentContext *param_1)

{
  this->bDeferredRegister = param_1 != (FRegisterComponentContext *)0x0;
  if (param_1 == (FRegisterComponentContext *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b0d3b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x10))();
    return;
  }
  return;
}

// ReregisterDebugDrawDelegate @ 147b0d3c0

void __thiscall
FDebugDrawDelegateHelper::ReregisterDebugDrawDelegate(FDebugDrawDelegateHelper *this)

{
  FDebugDrawDelegateHelper *local_res8 [4];
  
  if (this->State == UndefinedState) {
    local_res8[0] = this;
    `FDebugDrawDelegateHelper::ReregisterDebugDrawDelegate'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  if (this->State == RegisteredState) {
    (**(code **)(this->_padding_ + 8))(this);
                    /* WARNING: Could not recover jumptable at 0x000147b0d3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x10))(this);
    return;
  }
  return;
}

// UnregisterDebugDrawDelegate @ 147b1f460

void __thiscall
FDebugDrawDelegateHelper::UnregisterDebugDrawDelegate(FDebugDrawDelegateHelper *this)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FReadAccessScope local_28;
  
  if (this->State != RegisteredState) {
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->DebugTextDrawingDelegate,&local_28);
  if (((*(int *)&(this->DebugTextDrawingDelegate).field_0x10 == 0) ||
      (plVar1 = *(longlong **)&(this->DebugTextDrawingDelegate).field_0x8, plVar1 == (longlong *)0x0
      )) || (cVar3 = (**(code **)(*plVar1 + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugTextDrawingDelegate.IsBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DebugRenderSceneProxy.cpp"
                       ,0x7e,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  UDebugDrawService::Unregister((FDelegateHandle)(this->DebugTextDrawingDelegateHandle).ID);
  this->State = InitializedState;
  return;
}

// operator() @ 150518c80

bool __thiscall
`FDebugDrawDelegateHelper::ReregisterDebugDrawDelegate'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_643439624823242618>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_643439624823242618>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

