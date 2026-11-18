// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationWarpingRuntime
// Functions: 8

// FModule @ 14a71c050

FModule * __thiscall UE::AnimationWarping::FModule::FModule(FModule *this)

{
  this->_padding_ = (longlong)&_vftable__for__IModuleInterface__;
  this->_padding_ = (longlong)&_vftable__for__UE__Anim__IAnimRootMotionProvider__;
  (this->RootMotionAttributeId).Namespace = Anim::BoneAttributeNamespace;
  (this->RootMotionAttributeId).Name = Anim::IAnimRootMotionProvider::AttributeName;
  (this->RootMotionAttributeId).Index = 0;
  return this;
}

// ExtractRootMotion @ 14a7257f0

bool __thiscall
UE::AnimationWarping::FModule::ExtractRootMotion
          (FModule *this,FStackAttributeContainer *param_1,TTransform<double> *param_2)

{
  double dVar1;
  UScriptStruct *pUVar2;
  TTransform<double> *pTVar3;
  TTransform<double> *pTVar4;
  
  pUVar2 = FTransformAnimationAttribute::StaticStruct();
  pTVar3 = (TTransform<double> *)
           Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::Find
                     ((TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)param_1,
                      pUVar2,(FAttributeId *)&this->_padding_);
  pTVar4 = &UE::Math::TTransform<double>::Identity;
  if (pTVar3 != (TTransform<double> *)0x0) {
    pTVar4 = pTVar3;
  }
  dVar1 = (pTVar4->Rotation).XY.m128d_f64[1];
  (param_2->Rotation).XY.m128d_f64[0] = (pTVar4->Rotation).XY.m128d_f64[0];
  (param_2->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar4->Rotation).ZW.m128d_f64[1];
  (param_2->Rotation).ZW.m128d_f64[0] = (pTVar4->Rotation).ZW.m128d_f64[0];
  (param_2->Rotation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar4->Translation).XY.m128d_f64[1];
  (param_2->Translation).XY.m128d_f64[0] = (pTVar4->Translation).XY.m128d_f64[0];
  (param_2->Translation).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar4->Translation).ZW.m128d_f64[1];
  (param_2->Translation).ZW.m128d_f64[0] = (pTVar4->Translation).ZW.m128d_f64[0];
  (param_2->Translation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar4->Scale3D).XY.m128d_f64[1];
  (param_2->Scale3D).XY.m128d_f64[0] = (pTVar4->Scale3D).XY.m128d_f64[0];
  (param_2->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar4->Scale3D).ZW.m128d_f64[1];
  (param_2->Scale3D).ZW.m128d_f64[0] = (pTVar4->Scale3D).ZW.m128d_f64[0];
  (param_2->Scale3D).ZW.m128d_f64[1] = dVar1;
  return pTVar3 != (TTransform<double> *)0x0;
}

// HasRootMotion @ 14a72be20

bool __thiscall
UE::AnimationWarping::FModule::HasRootMotion(FModule *this,FStackAttributeContainer *param_1)

{
  UScriptStruct *pUVar1;
  uchar *puVar2;
  
  pUVar1 = FTransformAnimationAttribute::StaticStruct();
  puVar2 = Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::Find
                     ((TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)param_1,
                      pUVar1,(FAttributeId *)&this->_padding_);
  return puVar2 != (uchar *)0x0;
}

// OverrideRootMotion @ 14a72ca70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::AnimationWarping::FModule::OverrideRootMotion
          (FModule *this,TTransform<double> *param_1,FStackAttributeContainer *param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  undefined1 uVar5;
  undefined4 in_EAX;
  int iVar6;
  UScriptStruct *pUVar7;
  double *pdVar8;
  uint uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  dVar14 = (param_1->Rotation).XY.m128d_f64[0];
  dVar11 = (param_1->Rotation).XY.m128d_f64[1];
  dVar12 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar13 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar14 = dVar12 * dVar12 + dVar14 * dVar14;
  dVar11 = dVar13 * dVar13 + dVar11 * dVar11;
  dVar12 = dVar11 + dVar14;
  dVar14 = dVar14 + dVar11;
  dVar11 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar12;
  dVar13 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar14;
  lVar10 = -(ulonglong)
            ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
            (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar13,0) & _UNK_15061cc88));
  dVar12 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar12;
  dVar14 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar14;
  auVar3._8_4_ = (int)lVar10;
  auVar3._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
                  (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar3._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
  uVar9 = movmskpd((int)this,auVar3);
  lVar10 = -(ulonglong)
            ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
            (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar14,0) & _UNK_15061cc88));
  auVar2._8_4_ = (int)lVar10;
  auVar2._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
                  (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar2._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
  iVar6 = movmskpd(in_EAX,auVar2);
  if ((uVar9 & 0x3fffffff) != 0 || iVar6 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RootMotionDelta.IsRotationNormalized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\AnimationWarpingRuntimeModule.cpp"
                       ,0x4a,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  pUVar7 = FTransformAnimationAttribute::StaticStruct();
  pdVar8 = (double *)
           Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::Find
                     ((TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)param_2,
                      pUVar7,(FAttributeId *)&this->_padding_);
  if (pdVar8 != (double *)0x0) {
    dVar14 = (param_1->Rotation).XY.m128d_f64[1];
    *pdVar8 = (param_1->Rotation).XY.m128d_f64[0];
    pdVar8[1] = dVar14;
    dVar14 = (param_1->Rotation).ZW.m128d_f64[1];
    pdVar8[2] = (param_1->Rotation).ZW.m128d_f64[0];
    pdVar8[3] = dVar14;
    dVar14 = (param_1->Translation).XY.m128d_f64[1];
    pdVar8[4] = (param_1->Translation).XY.m128d_f64[0];
    pdVar8[5] = dVar14;
    dVar14 = (param_1->Translation).ZW.m128d_f64[1];
    pdVar8[6] = (param_1->Translation).ZW.m128d_f64[0];
    pdVar8[7] = dVar14;
    dVar14 = (param_1->Scale3D).XY.m128d_f64[1];
    pdVar8[8] = (param_1->Scale3D).XY.m128d_f64[0];
    pdVar8[9] = dVar14;
    dVar14 = (param_1->Scale3D).ZW.m128d_f64[1];
    pdVar8[10] = (param_1->Scale3D).ZW.m128d_f64[0];
    pdVar8[0xb] = dVar14;
  }
  return pdVar8 != (double *)0x0;
}

// SampleRootMotion @ 14a72fe00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::AnimationWarping::FModule::SampleRootMotion
          (FModule *this,FDeltaTimeRecord *param_1,UAnimSequence *param_2,bool param_3,
          FStackAttributeContainer *param_4)

{
  UScriptStruct *pUVar1;
  double *pdVar2;
  undefined1 auStack_f8 [32];
  FAnimExtractContext local_d8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_d8.DeltaTimeRecord.Delta = param_1->Delta;
  local_d8.CurrentTime = (double)param_1->Previous;
  local_d8.bExtractRootMotion = true;
  local_d8.DeltaTimeRecord.Previous = 0.0;
  local_d8.DeltaTimeRecord.bPreviousIsValid = false;
  local_d8.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.PoseCurves.ArrayNum = 0;
  local_d8.PoseCurves.ArrayMax = 0;
  local_d8.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.BonesRequired.ArrayNum = 0;
  local_d8.BonesRequired.ArrayMax = 0;
  local_d8.InterpolationOverride.bIsSet = false;
  local_d8.bLooping = param_3;
  UAnimSequence::ExtractRootMotion(param_2,&local_78,&local_d8);
  pUVar1 = FTransformAnimationAttribute::StaticStruct();
  pdVar2 = (double *)
           Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::FindOrAdd
                     ((TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)param_4,
                      pUVar1,(FAttributeId *)&this->_padding_);
  *pdVar2 = local_78.Rotation.XY.m128d_f64[0];
  pdVar2[1] = local_78.Rotation.XY.m128d_f64[1];
  pdVar2[2] = local_78.Rotation.ZW.m128d_f64[0];
  pdVar2[3] = local_78.Rotation.ZW.m128d_f64[1];
  pdVar2[4] = local_78.Translation.XY.m128d_f64[0];
  pdVar2[5] = local_78.Translation.XY.m128d_f64[1];
  pdVar2[6] = local_78.Translation.ZW.m128d_f64[0];
  pdVar2[7] = local_78.Translation.ZW.m128d_f64[1];
  pdVar2[8] = local_78.Scale3D.XY.m128d_f64[0];
  pdVar2[9] = local_78.Scale3D.XY.m128d_f64[1];
  pdVar2[10] = local_78.Scale3D.ZW.m128d_f64[0];
  pdVar2[0xb] = local_78.Scale3D.ZW.m128d_f64[1];
  if (local_d8.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.BonesRequired.AllocatorInstance.Data);
  }
  if (local_d8.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.PoseCurves.AllocatorInstance.Data);
  }
  return;
}

// SetRootMotion @ 14a72ff20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::AnimationWarping::FModule::SetRootMotion
          (FModule *this,TTransform<double> *param_1,FStackAttributeContainer *param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  undefined1 uVar5;
  undefined4 in_EAX;
  int iVar6;
  UScriptStruct *pUVar7;
  double *pdVar8;
  uint uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  dVar14 = (param_1->Rotation).XY.m128d_f64[0];
  dVar11 = (param_1->Rotation).XY.m128d_f64[1];
  dVar12 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar13 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar14 = dVar12 * dVar12 + dVar14 * dVar14;
  dVar11 = dVar13 * dVar13 + dVar11 * dVar11;
  dVar12 = dVar11 + dVar14;
  dVar14 = dVar14 + dVar11;
  dVar11 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar12;
  dVar13 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar14;
  lVar10 = -(ulonglong)
            ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
            (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar13,0) & _UNK_15061cc88));
  dVar12 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar12;
  dVar14 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar14;
  auVar3._8_4_ = (int)lVar10;
  auVar3._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
                  (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar3._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
  uVar9 = movmskpd((int)this,auVar3);
  lVar10 = -(ulonglong)
            ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
            (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar14,0) & _UNK_15061cc88));
  auVar2._8_4_ = (int)lVar10;
  auVar2._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
                  (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar2._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
  iVar6 = movmskpd(in_EAX,auVar2);
  if ((uVar9 & 0x3fffffff) != 0 || iVar6 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RootMotionDelta.IsRotationNormalized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\AnimationWarpingRuntimeModule.cpp"
                       ,0x3e,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  pUVar7 = FTransformAnimationAttribute::StaticStruct();
  pdVar8 = (double *)
           Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::FindOrAdd
                     ((TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)param_2,
                      pUVar7,(FAttributeId *)&this->_padding_);
  if (pdVar8 != (double *)0x0) {
    dVar14 = (param_1->Rotation).XY.m128d_f64[1];
    *pdVar8 = (param_1->Rotation).XY.m128d_f64[0];
    pdVar8[1] = dVar14;
    dVar14 = (param_1->Rotation).ZW.m128d_f64[1];
    pdVar8[2] = (param_1->Rotation).ZW.m128d_f64[0];
    pdVar8[3] = dVar14;
    dVar14 = (param_1->Translation).XY.m128d_f64[1];
    pdVar8[4] = (param_1->Translation).XY.m128d_f64[0];
    pdVar8[5] = dVar14;
    dVar14 = (param_1->Translation).ZW.m128d_f64[1];
    pdVar8[6] = (param_1->Translation).ZW.m128d_f64[0];
    pdVar8[7] = dVar14;
    dVar14 = (param_1->Scale3D).XY.m128d_f64[1];
    pdVar8[8] = (param_1->Scale3D).XY.m128d_f64[0];
    pdVar8[9] = dVar14;
    dVar14 = (param_1->Scale3D).ZW.m128d_f64[1];
    pdVar8[10] = (param_1->Scale3D).ZW.m128d_f64[0];
    pdVar8[0xb] = dVar14;
  }
  return pdVar8 != (double *)0x0;
}

// ShutdownModule @ 14a730780

void __thiscall UE::AnimationWarping::FModule::ShutdownModule(FModule *this)

{
  IModularFeatures *pIVar1;
  FAttributeId *pFVar2;
  
  pIVar1 = IModularFeatures::Get();
  pFVar2 = &this->RootMotionAttributeId;
  if (this == (FModule *)0x0) {
    pFVar2 = (FAttributeId *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a7307b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x30))
            (pIVar1,Anim::IAnimRootMotionProvider::ModularFeatureName,pFVar2,
             *(code **)((longlong)*pIVar1 + 0x30));
  return;
}

// StartupModule @ 14a730ff0

void __thiscall UE::AnimationWarping::FModule::StartupModule(FModule *this)

{
  IModularFeatures *pIVar1;
  FAttributeId *pFVar2;
  
  pIVar1 = IModularFeatures::Get();
  pFVar2 = &this->RootMotionAttributeId;
  if (this == (FModule *)0x0) {
    pFVar2 = (FAttributeId *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a731021. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x28))
            (pIVar1,Anim::IAnimRootMotionProvider::ModularFeatureName,pFVar2,
             *(code **)((longlong)*pIVar1 + 0x28));
  return;
}

