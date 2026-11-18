// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HeadMountedDisplay
// Functions: 6

// FViewExtension @ 14594e2d0

FViewExtension * __thiscall
UMotionControllerComponent::FViewExtension::FViewExtension
          (FViewExtension *this,FAutoRegister *param_1,UMotionControllerComponent *param_2)

{
  FSceneViewExtensionBase::FSceneViewExtensionBase((FSceneViewExtensionBase *)this,param_1);
  this->MotionControllerComponent = param_2;
  this->_padding_ = (longlong)&___7FViewExtension_UMotionControllerComponent__6B_;
  FLateUpdateManager::FLateUpdateManager(&this->LateUpdate);
  return this;
}

// ~FViewExtension @ 14594ea90

void __thiscall UMotionControllerComponent::FViewExtension::~FViewExtension(FViewExtension *this)

{
  this->_padding_ = (longlong)&___7FViewExtension_UMotionControllerComponent__6B_;
  FLateUpdateManager::~FLateUpdateManager(&this->LateUpdate);
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)this);
  return;
}

// BeginRenderViewFamily @ 145950e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMotionControllerComponent::FViewExtension::BeginRenderViewFamily
          (FViewExtension *this,FSceneViewFamily *param_1)

{
  undefined1 *puVar1;
  UMotionControllerComponent *this_00;
  USceneComponent *pUVar2;
  TTransform<double> *pTVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStackY_168 [32];
  TTransform<double> local_138;
  TTransform<double> local_d8;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = this->MotionControllerComponent;
  if (this_00 != (UMotionControllerComponent *)0x0) {
    uVar6 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    uVar7 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    uVar8 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    uVar9 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    uVar10 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    uVar11 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_d8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_d8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_d8.Rotation.XY.m128d_f64[1]._0_4_ = uVar6;
    local_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_d8.Rotation.XY.m128d_f64[1]._4_4_ = uVar7;
    local_d8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar8;
    local_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_d8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar9;
    local_d8.Translation.XY.m128d_f64[1]._0_4_ = uVar10;
    local_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_d8.Translation.XY.m128d_f64[1]._4_4_ = uVar11;
    uVar4 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    uVar5 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    local_d8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar4;
    local_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_d8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar5;
    pUVar2 = (((TObjectPtr<USceneComponent> *)&this_00->field_0xd0)->field0_0x0).DebugPtr;
    if (pUVar2 == (USceneComponent *)0x0) {
      local_138.Rotation.XY.m128d_f64[1]._0_4_ = uVar6;
      local_138.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_138.Rotation.XY.m128d_f64[1]._4_4_ = uVar7;
      local_138.Rotation.ZW.m128d_f64[1]._0_4_ = uVar8;
      local_138.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_138.Rotation.ZW.m128d_f64[1]._4_4_ = uVar9;
      local_138.Translation.XY.m128d_f64[1]._0_4_ = uVar10;
      local_138.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_138.Translation.XY.m128d_f64[1]._4_4_ = uVar11;
      local_138.Translation.ZW.m128d_f64[1] = local_d8.Translation.ZW.m128d_f64[1];
      local_138.Translation.ZW.m128d_f64[0] = local_d8.Translation.ZW.m128d_f64[0];
      local_138.Scale3D.XY.m128d_f64[1] = local_d8.Scale3D.XY.m128d_f64[1];
      local_138.Scale3D.XY.m128d_f64[0] = local_d8.Scale3D.XY.m128d_f64[0];
      local_138.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar4;
      local_138.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_138.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar5;
    }
    else if (this_00->bAbsoluteLocation == '\0' &&
             (this_00->bAbsoluteRotation == '\0' && this_00->bAbsoluteScale == '\0')) {
      pTVar3 = (TTransform<double> *)
               (**(code **)(pUVar2->_padding_ + 0x520))
                         (pUVar2,local_78,*(FName *)&this_00->field_0xd8);
      local_138.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_138.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_138.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_138.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_138.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_138.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_138.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_138.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_138.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_138.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_138.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_138.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_138.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_138.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_138.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_138.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_138.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_138.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_138,&local_d8,pTVar3);
    }
    else {
      USceneComponent::CalcNewComponentToWorld_GeneralCase
                ((USceneComponent *)this_00,&local_138,&local_d8,pUVar2,
                 *(FName *)&this_00->field_0xd8);
    }
    FLateUpdateManager::Setup(&this->LateUpdate,&local_138,(USceneComponent *)this_00,false);
  }
  return;
}

// GetPriority @ 145953cc0

int __thiscall UMotionControllerComponent::FViewExtension::GetPriority(FViewExtension *this)

{
  return -10;
}

// IsActiveThisFrame_Internal @ 145954100

bool __thiscall
UMotionControllerComponent::FViewExtension::IsActiveThisFrame_Internal
          (FViewExtension *this,FSceneViewExtensionContext *param_1)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\HeadMountedDisplay\\Private\\MotionControllerComponent.cpp"
                       ,0x1de,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  pTVar2 = CVarEnableMotionControllerLateUpdate.Ref;
  if ((this->MotionControllerComponent != (UMotionControllerComponent *)0x0) &&
     (this->MotionControllerComponent->bDisableLowLatencyUpdate == 0)) {
    bVar3 = IsInParallelGameThread();
    if (!bVar3) {
      bVar3 = IsInGameThread();
      if (!bVar3) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
    }
    if (pTVar2->ShadowedValue[0] != 0) {
      return true;
    }
  }
  return false;
}

// PreRenderViewFamily_RenderThread @ 145954860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UMotionControllerComponent::FViewExtension::PreRenderViewFamily_RenderThread
          (FViewExtension *this,FRDGBuilder *param_1,FSceneViewFamily *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  UMotionControllerComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  TQuat<double> *pTVar7;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  longlong local_190;
  undefined1 local_188 [8];
  TVector<double>_u_0 local_180;
  TRotator<double> local_168;
  TQuat<double> local_148;
  TQuat<double> local_128;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  if (this->MotionControllerComponent != (UMotionControllerComponent *)0x0) {
    uVar16 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    uVar17 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_108.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_108.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    uVar13 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    uVar14 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    uVar11 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    uVar12 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    uVar9 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    uVar10 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    local_a8.Rotation.XY.m128d_f64[1]._0_4_ = uVar16;
    local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_a8.Rotation.XY.m128d_f64[1]._4_4_ = uVar17;
    local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar9;
    local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar10;
    local_108.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar9;
    local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_108.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar10;
    local_a8.Translation.ZW.m128d_f64[1]._0_4_ = uVar13;
    local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_a8.Translation.ZW.m128d_f64[1]._4_4_ = uVar14;
    local_a8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar11;
    local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_a8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar12;
    local_108.Rotation.XY.m128d_f64[1]._0_4_ = uVar16;
    local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_108.Rotation.XY.m128d_f64[1]._4_4_ = uVar17;
    local_108.Translation.ZW.m128d_f64[1]._0_4_ = uVar13;
    local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_108.Translation.ZW.m128d_f64[1]._4_4_ = uVar14;
    local_108.Scale3D.XY.m128d_f64[1]._0_4_ = uVar11;
    local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_108.Scale3D.XY.m128d_f64[1]._4_4_ = uVar12;
    local_a8.Rotation.ZW.m128d_f64[0] = local_108.Rotation.ZW.m128d_f64[0];
    local_a8.Rotation.ZW.m128d_f64[1] = local_108.Rotation.ZW.m128d_f64[1];
    local_a8.Translation.XY.m128d_f64[0] = local_108.Translation.XY.m128d_f64[0];
    local_a8.Translation.XY.m128d_f64[1] = local_108.Translation.XY.m128d_f64[1];
    EnterCriticalSection((LPCRITICAL_SECTION)&CritSect);
    if (this->MotionControllerComponent != (UMotionControllerComponent *)0x0) {
      lpCriticalSection = &this->MotionControllerComponent->PolledMotionControllerMutex;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      this->MotionControllerComponent->PolledMotionController_RenderThread =
           this->MotionControllerComponent->PolledMotionController_GameThread;
      this->MotionControllerComponent->bPolledHMD_RenderThread =
           this->MotionControllerComponent->bPolledHMD_GameThread;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar8 = (param_2->Views).AllocatorInstance.Data;
      iVar2 = (param_2->Views).ArrayNum;
      pFVar1 = pFVar8 + (longlong)iVar2 * 8;
      while( true ) {
        if ((param_2->Views).ArrayNum != iVar2) {
          local_188[0] = 0;
          `TCheckedPointerIterator<FSceneView_const_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_188);
        }
        if (pFVar8 == pFVar1) goto LAB_1459549be;
        lVar3 = *(longlong *)pFVar8;
        if ((lVar3 != 0) &&
           (*(int *)(lVar3 + 0x370) == this->MotionControllerComponent->PlayerIndex)) break;
        pFVar8 = pFVar8 + 8;
      }
      fVar15 = *(float *)(lVar3 + 0xc98);
      if (fVar15 < 0.0) {
LAB_1459549be:
        if (((param_2->Views).ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InViewFamily.Views.Num() > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\HeadMountedDisplay\\Private\\MotionControllerComponent.cpp"
                               ,0x1c7,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar2 = (param_2->Views).ArrayNum;
        if (iVar2 < 1) {
          local_198 = 0;
          local_190 = (longlong)iVar2;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        fVar15 = *(float *)(*(longlong *)(param_2->Views).AllocatorInstance.Data + 0xc98);
      }
      pUVar4 = this->MotionControllerComponent;
      local_180._s_0.X = (pUVar4->RenderThreadRelativeTransform).Translation.XY.m128d_f64[0];
      local_180._s_0.Y = (pUVar4->RenderThreadRelativeTransform).Translation.XY.m128d_f64[1];
      local_180._s_0.Z = (pUVar4->RenderThreadRelativeTransform).Translation.ZW.m128d_f64[0];
      local_148.X = (pUVar4->RenderThreadRelativeTransform).Rotation.XY.m128d_f64[0];
      local_148.Y = (pUVar4->RenderThreadRelativeTransform).Rotation.XY.m128d_f64[1];
      local_148.Z = (pUVar4->RenderThreadRelativeTransform).Rotation.ZW.m128d_f64[0];
      local_148.W = (pUVar4->RenderThreadRelativeTransform).Rotation.ZW.m128d_f64[1];
      UE::Math::TQuat<double>::Rotator(&local_148,&local_168);
      bVar6 = PollControllerState_RenderThread
                        (this->MotionControllerComponent,(TVector<double> *)&local_180._s_0,
                         &local_168,fVar15);
      if (bVar6) {
        pUVar4 = this->MotionControllerComponent;
        local_a8.Rotation.XY.m128d_f64 =
             *&(pUVar4->RenderThreadRelativeTransform).Rotation.XY.m128d_f64;
        local_a8.Rotation.ZW.m128d_f64[0] =
             (pUVar4->RenderThreadRelativeTransform).Rotation.ZW.m128d_f64[0];
        local_a8.Rotation.ZW.m128d_f64[1] =
             (pUVar4->RenderThreadRelativeTransform).Rotation.ZW.m128d_f64[1];
        local_a8.Translation.XY.m128d_f64[0] =
             (pUVar4->RenderThreadRelativeTransform).Translation.XY.m128d_f64[0];
        local_a8.Translation.XY.m128d_f64[1] =
             (pUVar4->RenderThreadRelativeTransform).Translation.XY.m128d_f64[1];
        local_a8.Translation.ZW.m128d_f64 =
             *&(pUVar4->RenderThreadRelativeTransform).Translation.ZW.m128d_f64;
        local_a8.Scale3D.XY.m128d_f64 =
             *&(pUVar4->RenderThreadRelativeTransform).Scale3D.XY.m128d_f64;
        local_a8.Scale3D.ZW.m128d_f64 =
             *&(pUVar4->RenderThreadRelativeTransform).Scale3D.ZW.m128d_f64;
        pTVar7 = UE::Math::TRotator<double>::Quaternion(&local_168,&local_128);
        local_108.Scale3D.XY.m128d_f64 =
             *(double (*) [2])&(pUVar4->RenderThreadComponentScale).field0_0x0;
        local_108.Rotation.ZW.m128d_f64[0] = pTVar7->Z;
        local_108.Rotation.ZW.m128d_f64[1] = pTVar7->W;
        local_108.Rotation.XY.m128d_f64[0] = pTVar7->X;
        local_108.Rotation.XY.m128d_f64[1] = pTVar7->Y;
        local_108.Translation.XY.m128d_f64[0] = local_180._s_0.X;
        local_108.Translation.XY.m128d_f64[1] = local_180._s_0.Y;
        local_108.Translation.ZW.m128d_f64[1] = 0.0;
        local_108.Translation.ZW.m128d_f64[0] = local_180._s_0.Z;
        local_108.Scale3D.ZW.m128d_f64[1] = 0.0;
        local_108.Scale3D.ZW.m128d_f64[0] = (pUVar4->RenderThreadComponentScale).field0_0x0._s_0.Z;
        LeaveCriticalSection((LPCRITICAL_SECTION)&CritSect);
        FLateUpdateManager::Apply_RenderThread
                  (&this->LateUpdate,param_2->Scene,&local_a8,&local_108);
        return;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&CritSect);
  }
  return;
}

