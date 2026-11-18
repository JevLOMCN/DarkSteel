// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 2

// GetTM @ 14d9df380

FPosQuat * __thiscall
UE::PhysicsControl::FRigidBodyPoseData::GetTM
          (FRigidBodyPoseData *this,FPosQuat *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  FPosQuat *pFVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  
  piVar1 = &(this->BoneTMs).ArrayNum;
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Public\\RigidBodyPoseData.h"
                       ,0x31,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FPosQuat *)(*pcVar3)();
      return pFVar10;
    }
  }
  uVar11 = 0;
  if (param_1 < *piVar1) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FPosQuat *)(*pcVar3)();
      return pFVar10;
    }
  }
  pFVar2 = (this->BoneTMs).AllocatorInstance.Data;
  lVar13 = (longlong)param_1 * 0x40;
  iVar9 = _finite(*(double *)(pFVar2 + lVar13));
  if (iVar9 != 0) {
    iVar9 = _finite(*(double *)(pFVar2 + lVar13 + 8));
    if (iVar9 != 0) {
      iVar9 = _finite(*(double *)(pFVar2 + lVar13 + 0x10));
      if (iVar9 != 0) {
        iVar9 = _finite(*(double *)(pFVar2 + lVar13 + 0x20));
        if (iVar9 != 0) {
          iVar9 = _finite(*(double *)(pFVar2 + lVar13 + 0x28));
          if (iVar9 != 0) {
            iVar9 = _finite(*(double *)(pFVar2 + lVar13 + 0x30));
            if (iVar9 != 0) {
              iVar9 = _finite(*(double *)(pFVar2 + lVar13 + 0x38));
              if (iVar9 != 0) goto LAB_14d9df4c5;
            }
          }
        }
      }
    }
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("!BoneTMs[Index].ContainsNaN()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Public\\RigidBodyPoseData.h"
                     ,0x31,L"");
  if (bVar8) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FPosQuat *)(*pcVar3)();
    return pFVar10;
  }
LAB_14d9df4c5:
  uVar11 = 0;
  if (param_1 < (this->BoneTMs).ArrayNum) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FPosQuat *)(*pcVar3)();
      return pFVar10;
    }
  }
  pFVar2 = (this->BoneTMs).AllocatorInstance.Data;
  lVar12 = (longlong)param_1 * 0x40;
  dVar4 = *(double *)(pFVar2 + lVar12 + 8);
  dVar5 = *(double *)(pFVar2 + lVar12 + 0x10);
  lVar13 = *(longlong *)(pFVar2 + lVar12 + 0x10 + 8);
  (__return_storage_ptr__->Translation).field0_0x0._s_0.X = *(double *)(pFVar2 + lVar12);
  (__return_storage_ptr__->Translation).field0_0x0._s_0.Y = dVar4;
  dVar4 = *(double *)(pFVar2 + lVar12 + 0x20);
  dVar6 = *(double *)(pFVar2 + lVar12 + 0x20 + 8);
  (__return_storage_ptr__->Translation).field0_0x0._s_0.Z = dVar5;
  __return_storage_ptr__->_padding_ = lVar13;
  dVar5 = *(double *)(pFVar2 + lVar12 + 0x30);
  dVar7 = *(double *)(pFVar2 + lVar12 + 0x30 + 8);
  (__return_storage_ptr__->Rotation).X = dVar4;
  (__return_storage_ptr__->Rotation).Y = dVar6;
  (__return_storage_ptr__->Rotation).Z = dVar5;
  (__return_storage_ptr__->Rotation).W = dVar7;
  return __return_storage_ptr__;
}

// Update @ 14d9efff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::PhysicsControl::FRigidBodyPoseData::Update
          (FRigidBodyPoseData *this,FComponentSpacePoseContext *param_1,
          TArray<UE::PhysicsControl::FOutputBoneData,TSizedDefaultAllocator<32>_> *param_2,
          ESimulationSpace param_3,FBoneReference *param_4,FGraphTraversalCounter *param_5)

{
  short *psVar1;
  int *piVar2;
  code *pcVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  FCompactPoseBoneIndex FVar14;
  int iVar15;
  undefined4 extraout_var;
  TTransform<double> *pTVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  FCompactPoseBoneIndex *pFVar22;
  FScriptContainerElement *pFVar23;
  undefined1 auStackY_248 [32];
  undefined1 local_208;
  ESimulationSpace local_207;
  undefined1 local_206 [2];
  uint local_204;
  TArray<UE::PhysicsControl::FOutputBoneData,TSizedDefaultAllocator<32>_> *local_200;
  undefined1 local_1f8 [16];
  FScriptContainerElement *local_1e8;
  ForElementType<unsigned_int> local_1d8;
  ForElementType<unsigned_int> FStack_1d0;
  FWeakObjectPtr local_1c8;
  FWeakObjectPtr FStack_1c0;
  FWeakObjectPtr local_1b8;
  FWeakObjectPtr FStack_1b0;
  ForAnyElementType local_1a8;
  double dStack_1a0;
  TTransform<double> local_198;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_248;
  sVar4 = (this->UpdateCounter).Counter;
  sVar5 = (this->UpdateCounter).SkipFrames;
  uVar6 = *(undefined4 *)&(this->UpdateCounter).field_0xc;
  (this->ExpectedUpdateCounter).LastSyncronizedFrame = (this->UpdateCounter).LastSyncronizedFrame;
  (this->ExpectedUpdateCounter).Counter = sVar4;
  (this->ExpectedUpdateCounter).SkipFrames = sVar5;
  *(undefined4 *)&(this->ExpectedUpdateCounter).field_0xc = uVar6;
  psVar1 = &(this->ExpectedUpdateCounter).Counter;
  *psVar1 = *psVar1 + 1;
  (this->ExpectedUpdateCounter).LastSyncronizedFrame = GFrameCounter;
  if ((this->ExpectedUpdateCounter).Counter == -1) {
    (this->ExpectedUpdateCounter).Counter = 0;
  }
  sVar4 = param_5->Counter;
  sVar5 = param_5->SkipFrames;
  uVar6 = *(undefined4 *)&param_5->field_0xc;
  (this->UpdateCounter).LastSyncronizedFrame = param_5->LastSyncronizedFrame;
  (this->UpdateCounter).Counter = sVar4;
  (this->UpdateCounter).SkipFrames = sVar5;
  *(undefined4 *)&(this->UpdateCounter).field_0xc = uVar6;
  lVar18 = param_1->_padding_;
  local_d8.Rotation.XY.m128d_f64[0] = *(double *)(lVar18 + 0x20);
  local_d8.Rotation.XY.m128d_f64[1] = *(double *)(lVar18 + 0x28);
  local_d8.Rotation.ZW.m128d_f64[0] = *(double *)(lVar18 + 0x30);
  local_d8.Rotation.ZW.m128d_f64[1] = *(double *)(lVar18 + 0x38);
  local_d8.Translation.XY.m128d_f64[0] = *(double *)(lVar18 + 0x40);
  local_d8.Translation.XY.m128d_f64[1] = *(double *)(lVar18 + 0x48);
  local_d8.Translation.ZW.m128d_f64[0] = *(double *)(lVar18 + 0x50);
  local_d8.Translation.ZW.m128d_f64[1] = *(double *)(lVar18 + 0x58);
  local_d8.Scale3D.XY.m128d_f64[0] = *(double *)(lVar18 + 0x60);
  local_d8.Scale3D.XY.m128d_f64[1] = *(double *)(lVar18 + 0x68);
  local_d8.Scale3D.ZW.m128d_f64[0] = *(double *)(lVar18 + 0x70);
  local_d8.Scale3D.ZW.m128d_f64[1] = *(double *)(lVar18 + 0x78);
  local_207 = param_3;
  local_200 = param_2;
  FVar14 = FBoneReference::GetCompactPoseIndex(param_4,(FBoneContainer *)local_1f8);
  local_1f8._8_8_ = &param_1->Pose;
  pTVar16 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                      ((FCSPose<FCompactPose> *)local_1f8._8_8_,
                       *(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar14));
  pFVar23 = (param_2->AllocatorInstance).Data;
  local_138.Rotation.XY.m128d_f64[0] = (pTVar16->Rotation).XY.m128d_f64[0];
  local_138.Rotation.XY.m128d_f64[1] = (pTVar16->Rotation).XY.m128d_f64[1];
  pFVar22 = (FCompactPoseBoneIndex *)(pFVar23 + 0x10);
  local_138.Rotation.ZW.m128d_f64[0] = (pTVar16->Rotation).ZW.m128d_f64[0];
  local_138.Rotation.ZW.m128d_f64[1] = (pTVar16->Rotation).ZW.m128d_f64[1];
  local_138.Translation.XY.m128d_f64[0] = (pTVar16->Translation).XY.m128d_f64[0];
  local_138.Translation.XY.m128d_f64[1] = (pTVar16->Translation).XY.m128d_f64[1];
  local_138.Translation.ZW.m128d_f64[0] = (pTVar16->Translation).ZW.m128d_f64[0];
  local_138.Translation.ZW.m128d_f64[1] = (pTVar16->Translation).ZW.m128d_f64[1];
  local_138.Scale3D.XY.m128d_f64[0] = (pTVar16->Scale3D).XY.m128d_f64[0];
  local_138.Scale3D.XY.m128d_f64[1] = (pTVar16->Scale3D).XY.m128d_f64[1];
  local_138.Scale3D.ZW.m128d_f64[0] = (pTVar16->Scale3D).ZW.m128d_f64[0];
  local_138.Scale3D.ZW.m128d_f64[1] = (pTVar16->Scale3D).ZW.m128d_f64[1];
  local_204 = param_2->ArrayNum;
  uVar17 = (ulonglong)(int)local_204;
  pFVar20 = pFVar23 + uVar17 * 0x20;
  local_1e8 = pFVar20;
  do {
    if (param_2->ArrayNum != (int)uVar17) {
      local_208 = 0;
      `TCheckedPointerIterator<UE::PhysicsControl::FOutputBoneData_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(&local_208);
    }
    if (pFVar23 == pFVar20) {
      return;
    }
    FVar14 = pFVar22[2];
    if (-1 < (int)FVar14) {
      iVar15 = (this->BoneTMs).ArrayNum;
      piVar2 = &(this->BoneTMs).ArrayNum;
      if (iVar15 <= (int)FVar14) {
        uVar19 = (int)FVar14 + 1;
        if (iVar15 < (int)uVar19) {
          Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,0x10,uVar19 - iVar15,(ForAnyElementType *)this,piVar2,
                     &(this->BoneTMs).ArrayMax);
        }
        else {
          if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
          }
          if ((int)uVar19 < iVar15) {
            uVar21 = iVar15 - uVar19;
            if (((int)(uVar21 | uVar19) < 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar13)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            param_2 = local_200;
            if (uVar21 != 0) {
              pFVar20 = (this->BoneTMs).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x40;
              iVar15 = (*piVar2 - uVar19) - uVar21;
              if (iVar15 != 0) {
                memmove(pFVar20,pFVar20 + (longlong)(int)uVar21 * 0x40,(longlong)iVar15 << 6);
              }
              *piVar2 = *piVar2 - uVar21;
              Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40,0x10,(ForAnyElementType *)this,*piVar2,&(this->BoneTMs).ArrayMax);
              param_2 = local_200;
            }
          }
        }
      }
      pTVar16 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                          ((FCSPose<FCompactPose> *)local_1f8._8_8_,*pFVar22);
      if (local_207 == ComponentSpace) {
        local_198.Rotation.XY.m128d_f64 = *&(pTVar16->Rotation).XY.m128d_f64;
        local_198.Rotation.ZW.m128d_f64 = *&(pTVar16->Rotation).ZW.m128d_f64;
        local_198.Translation.XY.m128d_f64 = *&(pTVar16->Translation).XY.m128d_f64;
        local_198.Translation.ZW.m128d_f64 = *&(pTVar16->Translation).ZW.m128d_f64;
        local_198.Scale3D.XY.m128d_f64 = *&(pTVar16->Scale3D).XY.m128d_f64;
        local_198.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar16->Scale3D).ZW.m128d_f64;
        local_198.Scale3D.ZW.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(pTVar16->Scale3D).ZW.m128d_f64 + 4);
        local_198.Scale3D.ZW.m128d_f64[1]._0_4_ =
             *(undefined4 *)((pTVar16->Scale3D).ZW.m128d_f64 + 1);
        local_198.Scale3D.ZW.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(pTVar16->Scale3D).ZW.m128d_f64 + 0xc);
LAB_14d9f035e:
      }
      else if (local_207 == WorldSpace) {
        local_198.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_198.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_198.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_198.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_198.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_198.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_198.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_198.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_198.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_198.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_198.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_198.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_198.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_198.Scale3D.XY.m128d_f64[0] =
             (FScriptContainerElement *)(double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_198.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_198.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_198.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_198.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_198,pTVar16,&local_d8);
      }
      else {
        if (local_207 != BaseBoneSpace) {
          local_206[0] = 0;
          `ConvertCSTransformToSimSpace'::__l4::<lambda_1>::operator()(local_206);
          local_198.Rotation.XY.m128d_f64 = *&(pTVar16->Rotation).XY.m128d_f64;
          local_198.Rotation.ZW.m128d_f64 = *&(pTVar16->Rotation).ZW.m128d_f64;
          local_198.Translation.XY.m128d_f64 = *&(pTVar16->Translation).XY.m128d_f64;
          local_198.Translation.ZW.m128d_f64 = *&(pTVar16->Translation).ZW.m128d_f64;
          local_198.Scale3D.XY.m128d_f64 = *&(pTVar16->Scale3D).XY.m128d_f64;
          local_198.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar16->Scale3D).ZW.m128d_f64;
          local_198.Scale3D.ZW.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(pTVar16->Scale3D).ZW.m128d_f64 + 4);
          local_198.Scale3D.ZW.m128d_f64[1]._0_4_ =
               *(undefined4 *)((pTVar16->Scale3D).ZW.m128d_f64 + 1);
          local_198.Scale3D.ZW.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(pTVar16->Scale3D).ZW.m128d_f64 + 0xc);
          goto LAB_14d9f035e;
        }
        UE::Math::TTransform<double>::GetRelativeTransform(pTVar16,&local_198,&local_138);
      }
      dVar11 = local_198.Translation.XY.m128d_f64[0];
      dVar12 = local_198.Translation.XY.m128d_f64[1];
      dVar7 = local_198.Rotation.XY.m128d_f64[0];
      dVar8 = local_198.Rotation.XY.m128d_f64[1];
      dVar9 = local_198.Rotation.ZW.m128d_f64[0];
      dVar10 = local_198.Rotation.ZW.m128d_f64[1];
      local_1d8 = (ForElementType<unsigned_int>)local_198.Translation.XY.m128d_f64[0];
      FStack_1d0 = (ForElementType<unsigned_int>)local_198.Translation.XY.m128d_f64[1];
      local_1c8 = (FWeakObjectPtr)local_198.Translation.ZW.m128d_f64[0];
      uVar19 = 0;
      if ((int)FVar14 < *piVar2) {
        uVar19 = ~(uint)FVar14 >> 0x1f;
      }
      local_1b8 = (FWeakObjectPtr)local_198.Rotation.XY.m128d_f64[0];
      FStack_1b0 = (FWeakObjectPtr)local_198.Rotation.XY.m128d_f64[1];
      local_1a8.Data = (FScriptContainerElement *)local_198.Rotation.ZW.m128d_f64[0];
      dStack_1a0 = local_198.Rotation.ZW.m128d_f64[1];
      if ((uVar19 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar20 = (this->BoneTMs).AllocatorInstance.Data;
      lVar18 = (longlong)(int)FVar14 * 0x40;
      *(ForElementType<unsigned_int> *)(pFVar20 + lVar18) = (ForElementType<unsigned_int>)dVar11;
      ((ForElementType<unsigned_int> *)(pFVar20 + lVar18))[1] = (ForElementType<unsigned_int>)dVar12
      ;
      *(FWeakObjectPtr *)(pFVar20 + lVar18 + 0x10) = local_1c8;
      ((FWeakObjectPtr *)(pFVar20 + lVar18 + 0x10))[1] = FStack_1c0;
      *(FWeakObjectPtr *)(pFVar20 + lVar18 + 0x20) = (FWeakObjectPtr)dVar7;
      ((FWeakObjectPtr *)(pFVar20 + lVar18 + 0x20))[1] = (FWeakObjectPtr)dVar8;
      *(double *)(pFVar20 + lVar18 + 0x30) = dVar9;
      *(double *)(pFVar20 + lVar18 + 0x30 + 8) = dVar10;
      pFVar20 = local_1e8;
    }
    uVar17 = (ulonglong)local_204;
    pFVar23 = pFVar23 + 0x20;
    pFVar22 = pFVar22 + 8;
  } while( true );
}

