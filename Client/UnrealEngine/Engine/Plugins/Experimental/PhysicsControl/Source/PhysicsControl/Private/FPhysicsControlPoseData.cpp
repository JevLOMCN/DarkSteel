// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 1

// Update @ 14d9efac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::PhysicsControl::FPhysicsControlPoseData::Update
          (FPhysicsControlPoseData *this,USkeletalMeshComponent *param_1,float param_2,float param_3
          ,float param_4)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  TTransform<double> *pTVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  uint uVar28;
  TTransform<double> *pTVar29;
  undefined1 auStackY_2b8 [32];
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  this->DeltaTime = param_2;
  local_1b8.Rotation.XY.m128d_f64[0] = (double)param_1->_padding_;
  local_1b8.Rotation.XY.m128d_f64[1] = (double)param_1->_padding_;
  local_1b8.Rotation.ZW.m128d_f64[0] = (double)param_1->_padding_;
  local_1b8.Rotation.ZW.m128d_f64[1] = (double)param_1->_padding_;
  lVar26 = (longlong)*(int *)((longlong)&param_1->_padding_ + 4);
  local_1b8.Translation.XY.m128d_f64[0] = (double)param_1->_padding_;
  local_1b8.Translation.XY.m128d_f64[1] = (double)param_1->_padding_;
  local_1b8.Translation.ZW.m128d_f64[0] = (double)param_1->_padding_;
  local_1b8.Translation.ZW.m128d_f64[1] = (double)param_1->_padding_;
  local_1b8.Scale3D.XY.m128d_f64[0] = (double)param_1->_padding_;
  local_1b8.Scale3D.XY.m128d_f64[1] = (double)param_1->_padding_;
  local_1b8.Scale3D.ZW.m128d_f64[0] = (double)param_1->_padding_;
  local_1b8.Scale3D.ZW.m128d_f64[1] = (double)param_1->_padding_;
  uVar21 = (uint)(&param_1->_padding_)[lVar26 * 2];
  if (uVar21 == (this->BoneDatas).ArrayNum) {
    uVar25 = 0;
    lVar27 = (longlong)(int)uVar21;
    if (uVar21 != 0) {
      lVar23 = 0;
      do {
        uVar28 = ~uVar25 >> 0x1f;
        uVar21 = 0;
        if ((int)uVar25 < (this->BoneDatas).ArrayNum) {
          uVar21 = uVar28;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->BoneDatas).AllocatorInstance.Data;
        uVar6 = *(undefined8 *)(pFVar3 + lVar23);
        uVar7 = *(undefined8 *)(pFVar3 + lVar23 + 8);
        uVar8 = *(undefined8 *)(pFVar3 + lVar23 + 0x10);
        uVar9 = *(undefined8 *)(pFVar3 + lVar23 + 0x10 + 8);
        uVar10 = *(undefined8 *)(pFVar3 + lVar23 + 0x20);
        uVar11 = *(undefined8 *)(pFVar3 + lVar23 + 0x20 + 8);
        uVar12 = *(undefined8 *)(pFVar3 + lVar23 + 0x30);
        uVar13 = *(undefined8 *)(pFVar3 + lVar23 + 0x30 + 8);
        uVar21 = 0;
        if ((int)uVar25 < (this->BoneDatas).ArrayNum) {
          uVar21 = uVar28;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->BoneDatas).AllocatorInstance.Data;
        *(undefined8 *)(pFVar3 + lVar23 + 0x40) = uVar6;
        *(undefined8 *)(pFVar3 + lVar23 + 0x40 + 8) = uVar7;
        *(undefined8 *)(pFVar3 + lVar23 + 0x50) = uVar8;
        *(undefined8 *)(pFVar3 + lVar23 + 0x50 + 8) = uVar9;
        *(undefined8 *)(pFVar3 + lVar23 + 0x60) = uVar10;
        *(undefined8 *)(pFVar3 + lVar23 + 0x60 + 8) = uVar11;
        *(undefined8 *)(pFVar3 + lVar23 + 0x70) = uVar12;
        *(undefined8 *)(pFVar3 + lVar23 + 0x70 + 8) = uVar13;
        uVar21 = 0;
        if ((int)uVar25 < (int)(&param_1->_padding_)[lVar26 * 2]) {
          uVar21 = uVar28;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_158.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_158.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_158.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_158.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_158.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_158.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_158.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_158.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_158.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_158.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_158.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_158.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_158.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_158.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_158.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_158.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_158.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_158.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_158,
                   (TTransform<double> *)
                   ((longlong)(int)uVar25 * 0x60 + (&param_1->_padding_)[lVar26 * 2]),&local_1b8);
        dVar18 = local_158.Translation.XY.m128d_f64[0];
        dVar19 = local_158.Translation.XY.m128d_f64[1];
        dVar14 = local_158.Rotation.XY.m128d_f64[0];
        dVar15 = local_158.Rotation.XY.m128d_f64[1];
        uVar21 = 0;
        if ((int)uVar25 < (this->BoneDatas).ArrayNum) {
          uVar21 = uVar28;
        }
        dVar16 = local_158.Rotation.ZW.m128d_f64[0];
        dVar17 = local_158.Rotation.ZW.m128d_f64[1];
        local_278 = local_158.Translation.XY.m128d_f64[0];
        dStack_270 = local_158.Translation.XY.m128d_f64[1];
        local_268 = local_158.Translation.ZW.m128d_f64[0];
        local_258 = local_158.Rotation.XY.m128d_f64[0];
        dStack_250 = local_158.Rotation.XY.m128d_f64[1];
        local_248 = local_158.Rotation.ZW.m128d_f64[0];
        dStack_240 = local_158.Rotation.ZW.m128d_f64[1];
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->BoneDatas).AllocatorInstance.Data;
        uVar25 = uVar25 + 1;
        *(double *)(pFVar3 + lVar23) = dVar18;
        *(double *)(pFVar3 + lVar23 + 8) = dVar19;
        *(double *)(pFVar3 + lVar23 + 0x10) = local_268;
        *(undefined8 *)(pFVar3 + lVar23 + 0x10 + 8) = uStack_260;
        *(double *)(pFVar3 + lVar23 + 0x20) = dVar14;
        *(double *)(pFVar3 + lVar23 + 0x20 + 8) = dVar15;
        *(double *)(pFVar3 + lVar23 + 0x30) = dVar16;
        *(double *)(pFVar3 + lVar23 + 0x30 + 8) = dVar17;
        lVar23 = lVar23 + 0x80;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    bVar20 = DetectTeleport(&this->ComponentTM,&local_1b8,param_3,param_4);
  }
  else {
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    piVar1 = &(this->BoneDatas).ArrayMax;
    (this->BoneDatas).ArrayNum = 0;
    if (*piVar1 != uVar21) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,uVar21,(ForAnyElementType *)this,0,piVar1);
    }
    iVar2 = (int)(&param_1->_padding_)[lVar26 * 2];
    pTVar24 = (TTransform<double> *)(&param_1->_padding_)[lVar26 * 2];
    pTVar29 = pTVar24 + iVar2;
    while( true ) {
      if ((int)(&param_1->_padding_)[lVar26 * 2] != iVar2) {
        `TCheckedPointerIterator<UE::Math::TTransform<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_288);
      }
      if (pTVar24 == pTVar29) break;
      local_f8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_f8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_f8.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_f8.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_f8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_f8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_f8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_f8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_f8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_f8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_f8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_f8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_f8,pTVar24,&local_1b8);
      iVar22 = (this->BoneDatas).ArrayNum;
      if (iVar22 == *piVar1) {
        iVar22 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1080,(ForAnyElementType *)this,piVar1);
      }
      local_228 = local_f8.Translation.ZW.m128d_f64[0]._0_4_;
      uStack_224 = local_f8.Translation.ZW.m128d_f64[0]._4_4_;
      (this->BoneDatas).ArrayNum = iVar22 + 1;
      pFVar4 = (this->BoneDatas).AllocatorInstance.Data;
      lVar27 = (longlong)iVar22 * 0x80;
      pTVar24 = pTVar24 + 1;
      *(double *)(pFVar4 + lVar27) = local_f8.Translation.XY.m128d_f64[0];
      *(double *)(pFVar4 + lVar27 + 8) = local_f8.Translation.XY.m128d_f64[1];
      pFVar3 = pFVar4 + lVar27 + 0x10;
      *(undefined4 *)pFVar3 = local_f8.Translation.ZW.m128d_f64[0]._0_4_;
      *(undefined4 *)(pFVar3 + 4) = local_f8.Translation.ZW.m128d_f64[0]._4_4_;
      *(undefined4 *)(pFVar3 + 8) = uStack_220;
      *(undefined4 *)(pFVar3 + 0xc) = uStack_21c;
      *(double *)(pFVar4 + lVar27 + 0x40) = local_f8.Translation.XY.m128d_f64[0];
      *(double *)(pFVar4 + lVar27 + 0x40 + 8) = local_f8.Translation.XY.m128d_f64[1];
      pFVar3 = pFVar4 + lVar27 + 0x50;
      *(undefined4 *)pFVar3 = local_f8.Translation.ZW.m128d_f64[0]._0_4_;
      *(undefined4 *)(pFVar3 + 4) = local_f8.Translation.ZW.m128d_f64[0]._4_4_;
      *(undefined4 *)(pFVar3 + 8) = uStack_1e0;
      *(undefined4 *)(pFVar3 + 0xc) = uStack_1dc;
      *(double *)(pFVar4 + lVar27 + 0x60) = local_f8.Rotation.XY.m128d_f64[0];
      *(double *)(pFVar4 + lVar27 + 0x60 + 8) = local_f8.Rotation.XY.m128d_f64[1];
      *(double *)(pFVar4 + lVar27 + 0x20) = local_f8.Rotation.XY.m128d_f64[0];
      *(double *)(pFVar4 + lVar27 + 0x20 + 8) = local_f8.Rotation.XY.m128d_f64[1];
      *(double *)(pFVar4 + lVar27 + 0x70) = local_f8.Rotation.ZW.m128d_f64[0];
      *(double *)(pFVar4 + lVar27 + 0x70 + 8) = local_f8.Rotation.ZW.m128d_f64[1];
      *(double *)(pFVar4 + lVar27 + 0x30) = local_f8.Rotation.ZW.m128d_f64[0];
      *(double *)(pFVar4 + lVar27 + 0x30 + 8) = local_f8.Rotation.ZW.m128d_f64[1];
      local_1e8 = local_228;
      uStack_1e4 = uStack_224;
    }
    bVar20 = true;
  }
  this->bHasJustTeleported = bVar20;
  (this->ComponentTM).Rotation.XY.m128d_f64[0] = local_1b8.Rotation.XY.m128d_f64[0];
  (this->ComponentTM).Rotation.XY.m128d_f64[1] = local_1b8.Rotation.XY.m128d_f64[1];
  (this->ComponentTM).Rotation.ZW.m128d_f64[0] = local_1b8.Rotation.ZW.m128d_f64[0];
  (this->ComponentTM).Rotation.ZW.m128d_f64[1] = local_1b8.Rotation.ZW.m128d_f64[1];
  (this->ComponentTM).Translation.XY.m128d_f64[0] = local_1b8.Translation.XY.m128d_f64[0];
  (this->ComponentTM).Translation.XY.m128d_f64[1] = local_1b8.Translation.XY.m128d_f64[1];
  (this->ComponentTM).Translation.ZW.m128d_f64[0] = local_1b8.Translation.ZW.m128d_f64[0];
  (this->ComponentTM).Translation.ZW.m128d_f64[1] = local_1b8.Translation.ZW.m128d_f64[1];
  (this->ComponentTM).Scale3D.XY.m128d_f64[0] = local_1b8.Scale3D.XY.m128d_f64[0];
  (this->ComponentTM).Scale3D.XY.m128d_f64[1] = local_1b8.Scale3D.XY.m128d_f64[1];
  (this->ComponentTM).Scale3D.ZW.m128d_f64[0] = local_1b8.Scale3D.ZW.m128d_f64[0];
  (this->ComponentTM).Scale3D.ZW.m128d_f64[1] = local_1b8.Scale3D.ZW.m128d_f64[1];
  return;
}

