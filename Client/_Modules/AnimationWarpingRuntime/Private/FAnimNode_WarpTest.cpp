// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationWarpingRuntime
// Functions: 5

// StaticStruct @ 14a712fd0

UScriptStruct * __cdecl FAnimNode_WarpTest::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_WarpTest.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_WarpTest.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_WarpTest,(UObject *)pUVar1,
                         L"AnimNode_WarpTest");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_WarpTest.OuterSingleton;
}

// Update_AnyThread @ 14a713010

void __thiscall
FAnimNode_WarpTest::Update_AnyThread(FAnimNode_WarpTest *this,FAnimationUpdateContext *param_1)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  int iVar4;
  FExposedValueHandler *this_00;
  FRootOffsetProvider *pFVar5;
  float fVar6;
  
  FAnimNode_Base::Update_AnyThread((FAnimNode_Base *)this,param_1);
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  FPoseLinkBase::Update((FPoseLinkBase *)&this->Source,param_1);
  iVar1 = (this->Transforms).ArrayNum;
  if (iVar1 == 0) {
    this->CurrentTime = 0.0;
    this->CurrentTransformIndex = 0;
  }
  else {
    iVar4 = this->CurrentTransformIndex;
    if (iVar1 <= iVar4) {
      iVar4 = 0;
      this->CurrentTransformIndex = 0;
    }
    fVar6 = param_1->DeltaTime + this->CurrentTime;
    this->CurrentTime = fVar6;
    if (this->SecondsToWait < fVar6) {
      this->CurrentTime = fVar6 - this->SecondsToWait;
      this->CurrentTransformIndex = (iVar4 + 1) % iVar1;
    }
  }
  pFVar5 = FAnimationBaseContext::GetMessage<UE::AnimationWarping::FRootOffsetProvider>
                     ((FAnimationBaseContext *)param_1);
  if (pFVar5 != (FRootOffsetProvider *)0x0) {
    dVar3 = (pFVar5->RootTransform).Rotation.XY.m128d_f64[1];
    (this->ComponentTransform).Rotation.XY.m128d_f64[0] =
         (pFVar5->RootTransform).Rotation.XY.m128d_f64[0];
    (this->ComponentTransform).Rotation.XY.m128d_f64[1] = dVar3;
    dVar3 = (pFVar5->RootTransform).Rotation.ZW.m128d_f64[1];
    (this->ComponentTransform).Rotation.ZW.m128d_f64[0] =
         (pFVar5->RootTransform).Rotation.ZW.m128d_f64[0];
    (this->ComponentTransform).Rotation.ZW.m128d_f64[1] = dVar3;
    dVar3 = (pFVar5->RootTransform).Translation.XY.m128d_f64[1];
    (this->ComponentTransform).Translation.XY.m128d_f64[0] =
         (pFVar5->RootTransform).Translation.XY.m128d_f64[0];
    (this->ComponentTransform).Translation.XY.m128d_f64[1] = dVar3;
    dVar3 = (pFVar5->RootTransform).Translation.ZW.m128d_f64[1];
    (this->ComponentTransform).Translation.ZW.m128d_f64[0] =
         (pFVar5->RootTransform).Translation.ZW.m128d_f64[0];
    (this->ComponentTransform).Translation.ZW.m128d_f64[1] = dVar3;
    dVar3 = (pFVar5->RootTransform).Scale3D.XY.m128d_f64[1];
    (this->ComponentTransform).Scale3D.XY.m128d_f64[0] =
         (pFVar5->RootTransform).Scale3D.XY.m128d_f64[0];
    (this->ComponentTransform).Scale3D.XY.m128d_f64[1] = dVar3;
    dVar3 = (pFVar5->RootTransform).Scale3D.ZW.m128d_f64[1];
    (this->ComponentTransform).Scale3D.ZW.m128d_f64[0] =
         (pFVar5->RootTransform).Scale3D.ZW.m128d_f64[0];
    (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] = dVar3;
    return;
  }
  lVar2 = param_1->_padding_;
  dVar3 = *(double *)(lVar2 + 0x28);
  (this->ComponentTransform).Rotation.XY.m128d_f64[0] = *(double *)(lVar2 + 0x20);
  (this->ComponentTransform).Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = *(double *)(lVar2 + 0x38);
  (this->ComponentTransform).Rotation.ZW.m128d_f64[0] = *(double *)(lVar2 + 0x30);
  (this->ComponentTransform).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = *(double *)(lVar2 + 0x48);
  (this->ComponentTransform).Translation.XY.m128d_f64[0] = *(double *)(lVar2 + 0x40);
  (this->ComponentTransform).Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = *(double *)(lVar2 + 0x58);
  (this->ComponentTransform).Translation.ZW.m128d_f64[0] = *(double *)(lVar2 + 0x50);
  (this->ComponentTransform).Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = *(double *)(lVar2 + 0x68);
  (this->ComponentTransform).Scale3D.XY.m128d_f64[0] = *(double *)(lVar2 + 0x60);
  (this->ComponentTransform).Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = *(double *)(lVar2 + 0x78);
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[0] = *(double *)(lVar2 + 0x70);
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] = dVar3;
  return;
}

// Evaluate_AnyThread @ 14a713140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_WarpTest::Evaluate_AnyThread(FAnimNode_WarpTest *this,FPoseContext *param_1)

{
  int iVar1;
  uint uVar2;
  UObject *pUVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  IAnimRootMotionProvider *pIVar8;
  TTransform<double> *this_00;
  undefined1 auStackY_3c8 [32];
  FName local_388;
  FName local_380;
  FName local_378;
  FName local_370;
  TVector<double>_u_0 local_368;
  TVector<double>_u_0 local_350;
  TVector<double>_u_0 local_338;
  TVector<double>_u_0 local_320;
  TVector<double>_u_0 local_308;
  TVector<double>_u_0 local_2f0;
  TVector<double>_u_0 local_2d8;
  TVector<double>_u_0 local_2c0;
  TVector<double>_u_0 local_2a8;
  TVector<double>_u_0 local_288;
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 local_228;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1c8;
  TQuat<double> local_1a8;
  TQuat<double> local_188;
  TQuat<double> local_168;
  TQuat<double> local_148 [4];
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  FAnimNode_Base::Evaluate_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLink::Evaluate(&this->Source,param_1);
  iVar1 = (this->Transforms).ArrayNum;
  if (iVar1 != 0) {
    uVar2 = this->CurrentTransformIndex;
    uVar7 = 0;
    if ((int)uVar2 < iVar1) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = (TTransform<double> *)
              ((this->Transforms).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x60);
    UE::Math::TTransform<double>::GetRelativeTransform(this_00,&local_c8,&this->ComponentTransform);
    pIVar8 = UE::Anim::IAnimRootMotionProvider::Get();
    (**(code **)((longlong)*pIVar8 + 0x18))(pIVar8,&local_c8,&param_1->CustomAttributes);
    dVar5 = __real_4059000000000000;
    if (FVisualLogger::bIsRecording != 0) {
      pUVar3 = *(UObject **)(param_1->_padding_ + 0x140);
      if (FVisualLogger::bIsRecording != 0) {
        local_1a8.Z = (this_00->Rotation).ZW.m128d_f64[0];
        local_1a8.W = (this_00->Rotation).ZW.m128d_f64[1];
        local_1a8.X = (this_00->Rotation).XY.m128d_f64[0];
        local_1a8.Y = (this_00->Rotation).XY.m128d_f64[1];
        local_2a8._s_0.X = ___xmm_00000000000000003ff0000000000000;
        local_2a8._s_0.Y = _UNK_150689518;
        local_2a8._s_0.Z = 0.0;
        UE::Math::TQuat<double>::RotateVector
                  (&local_1a8,(TVector<double> *)&local_368._s_0,(TVector<double> *)&local_2a8._s_0)
        ;
        local_288._s_0.Z = (this_00->Translation).ZW.m128d_f64[0];
        local_350._s_0.X = local_368._s_0.X * dVar5 + (this_00->Translation).XY.m128d_f64[0];
        local_350._s_0.Y = local_368._s_0.Y * dVar5 + (this_00->Translation).XY.m128d_f64[1];
        local_350._s_0.Z = local_368._s_0.Z * dVar5 + local_288._s_0.Z;
        local_288._s_0.X = (this_00->Translation).XY.m128d_f64[0];
        local_288._s_0.Y = (this_00->Translation).XY.m128d_f64[1];
        ::FName::FName(&local_388,LogName);
        FVisualLogger::SegmentLogfImpl
                  (pUVar3,&local_388,Display,(TVector<double> *)&local_288._s_0,
                   (TVector<double> *)&local_350._s_0,&FColor::Red,1,L"");
      }
      if (FVisualLogger::bIsRecording != 0) {
        local_188.Z = (this_00->Rotation).ZW.m128d_f64[0];
        local_188.W = (this_00->Rotation).ZW.m128d_f64[1];
        local_188.X = (this_00->Rotation).XY.m128d_f64[0];
        local_188.Y = (this_00->Rotation).XY.m128d_f64[1];
        local_268._s_0.X = ___xmm_3ff00000000000000000000000000000;
        local_268._s_0.Y = _UNK_15061cbc8;
        local_268._s_0.Z = 0.0;
        UE::Math::TQuat<double>::RotateVector
                  (&local_188,(TVector<double> *)&local_338._s_0,(TVector<double> *)&local_268._s_0)
        ;
        local_248._s_0.Z = (this_00->Translation).ZW.m128d_f64[0];
        local_320._s_0.X = local_338._s_0.X * dVar5 + (this_00->Translation).XY.m128d_f64[0];
        local_320._s_0.Y = local_338._s_0.Y * dVar5 + (this_00->Translation).XY.m128d_f64[1];
        local_320._s_0.Z = local_338._s_0.Z * dVar5 + local_248._s_0.Z;
        local_248._s_0.X = (this_00->Translation).XY.m128d_f64[0];
        local_248._s_0.Y = (this_00->Translation).XY.m128d_f64[1];
        ::FName::FName(&local_380,LogName);
        FVisualLogger::SegmentLogfImpl
                  (pUVar3,&local_380,Display,(TVector<double> *)&local_248._s_0,
                   (TVector<double> *)&local_320._s_0,&FColor::Blue,1,L"");
        if (FVisualLogger::bIsRecording != 0) {
          local_168.Z = (this->ComponentTransform).Rotation.ZW.m128d_f64[0];
          local_168.W = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
          local_168.X = (this->ComponentTransform).Rotation.XY.m128d_f64[0];
          local_168.Y = (this->ComponentTransform).Rotation.XY.m128d_f64[1];
          local_228._s_0.X = ___xmm_00000000000000003ff0000000000000;
          local_228._s_0.Y = _UNK_150689518;
          local_228._s_0.Z = 0.0;
          UE::Math::TQuat<double>::RotateVector
                    (&local_168,(TVector<double> *)&local_308._s_0,
                     (TVector<double> *)&local_228._s_0);
          dVar5 = __real_4054000000000000;
          local_208._s_0.Z = (this->ComponentTransform).Translation.ZW.m128d_f64[0];
          local_2f0._s_0.X =
               local_308._s_0.X * __real_4054000000000000 +
               (this->ComponentTransform).Translation.XY.m128d_f64[0];
          local_2f0._s_0.Y =
               local_308._s_0.Y * __real_4054000000000000 +
               (this->ComponentTransform).Translation.XY.m128d_f64[1];
          local_2f0._s_0.Z = local_308._s_0.Z * __real_4054000000000000 + local_208._s_0.Z;
          local_208._s_0.X = (this->ComponentTransform).Translation.XY.m128d_f64[0];
          local_208._s_0.Y = (this->ComponentTransform).Translation.XY.m128d_f64[1];
          ::FName::FName(&local_378,LogName);
          FVisualLogger::SegmentLogfImpl
                    (pUVar3,&local_378,Display,(TVector<double> *)&local_208._s_0,
                     (TVector<double> *)&local_2f0._s_0,&FColor::Black,1,L"");
          if (FVisualLogger::bIsRecording != 0) {
            local_148[0].Z = (this->ComponentTransform).Rotation.ZW.m128d_f64[0];
            local_148[0].W = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
            local_148[0].X = (this->ComponentTransform).Rotation.XY.m128d_f64[0];
            local_148[0].Y = (this->ComponentTransform).Rotation.XY.m128d_f64[1];
            local_1e8._s_0.X = ___xmm_3ff00000000000000000000000000000;
            local_1e8._s_0.Y = _UNK_15061cbc8;
            local_1e8._s_0.Z = 0.0;
            UE::Math::TQuat<double>::RotateVector
                      (local_148,(TVector<double> *)&local_2d8._s_0,
                       (TVector<double> *)&local_1e8._s_0);
            local_1c8._s_0.Z = (this->ComponentTransform).Translation.ZW.m128d_f64[0];
            local_2c0._s_0.X =
                 local_2d8._s_0.X * dVar5 + (this->ComponentTransform).Translation.XY.m128d_f64[0];
            local_2c0._s_0.Y =
                 local_2d8._s_0.Y * dVar5 + (this->ComponentTransform).Translation.XY.m128d_f64[1];
            local_2c0._s_0.Z = local_2d8._s_0.Z * dVar5 + local_1c8._s_0.Z;
            local_1c8._s_0.X = (this->ComponentTransform).Translation.XY.m128d_f64[0];
            local_1c8._s_0.Y = (this->ComponentTransform).Translation.XY.m128d_f64[1];
            ::FName::FName(&local_370,LogName);
            FVisualLogger::SegmentLogfImpl
                      (pUVar3,&local_370,Display,(TVector<double> *)&local_1c8._s_0,
                       (TVector<double> *)&local_2c0._s_0,&FColor::Green,1,L"");
          }
        }
      }
    }
  }
  return;
}

// Initialize_AnyThread @ 14a713690

void __thiscall
FAnimNode_WarpTest::Initialize_AnyThread
          (FAnimNode_WarpTest *this,FAnimationInitializeContext *param_1)

{
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->Source,param_1);
  return;
}

// CacheBones_AnyThread @ 14a7136d0

void __thiscall
FAnimNode_WarpTest::CacheBones_AnyThread
          (FAnimNode_WarpTest *this,FAnimationCacheBonesContext *param_1)

{
  FAnimNode_Base::CacheBones_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->Source,param_1);
  return;
}

