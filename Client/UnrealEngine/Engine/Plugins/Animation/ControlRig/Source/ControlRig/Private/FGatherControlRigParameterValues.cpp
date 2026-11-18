// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// ForEachAllocation @ 14a40dd30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::FGatherControlRigParameterValues::ForEachAllocation
          (FGatherControlRigParameterValues *this,FEntityAllocationProxy *param_1,
          FAccumulatedControlEntryIndex *param_2,FName *param_3,
          FMovieSceneControlRigSpaceBaseKey *param_4,bool *param_5,uchar *param_6,long64 *param_7,
          double *param_8,double *param_9,double *param_10,double *param_11,double *param_12,
          double *param_13,double *param_14,double *param_15,double *param_16)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uchar uVar13;
  ushort uVar14;
  ushort uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  code *pcVar18;
  FName FVar19;
  long64 lVar20;
  bool bVar21;
  FComponentMask *this_00;
  FComponentHeader *pFVar22;
  void *pvVar23;
  ulonglong uVar24;
  FComponentHeader *pFVar25;
  longlong lVar26;
  double *pdVar27;
  longlong lVar28;
  FMovieSceneEntityID *pFVar29;
  FComponentHeader *pFVar30;
  int iVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  FMovieSceneEntityID *pFVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  float fVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  float fVar56;
  float fVar57;
  undefined4 local_res8;
  undefined2 local_resc;
  undefined8 local_238;
  FMovieSceneEntityID *local_228 [2];
  undefined8 local_218;
  undefined8 local_208;
  FComponentHeader *local_1f8 [2];
  FComponentHeader *local_1e8 [2];
  FMovieSceneEntityID *local_1d8 [2];
  FMovieSceneEntityID *local_1c8 [2];
  longlong local_1b8 [2];
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_120;
  undefined8 uStack_118;
  
  this_00 = FEntityAllocationProxy::GetAllocationType(param_1);
  pFVar22 = (FComponentHeader *)FEntityAllocationProxy::GetAllocation(param_1);
  uVar14 = *(ushort *)((longlong)&pFVar22->DebugComponents + 6);
  local_238 = (FMovieSceneEntityID *)(ulonglong)uVar14;
  uVar15 = (this->ControlRigComponents->Tags).Space.Value;
  local_1f8[0] = pFVar22;
  if (((uVar15 != 0xffff) && ((int)(uint)uVar15 < (this_00->Bits).NumBits)) &&
     ((*(uint *)(this_00->Bits).AllocatorInstance.InlineData[uVar15 >> 5].Pad >> (uVar15 & 0x1f) & 1
      ) != 0)) {
    if ((param_4 == (FMovieSceneControlRigSpaceBaseKey *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("OptSpaceResults",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigSystem.cpp"
                            ,0x514,L""), bVar21)) {
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    for (; local_238 != (FMovieSceneEntityID *)0x0;
        local_238 = (FMovieSceneEntityID *)((longlong)&local_238[-1].Value + 1)) {
      local_res8._0_2_ = param_2->EntryIndex;
      local_res8._2_2_ = param_2->AccumulatorIndex;
      uVar5 = *(undefined8 *)param_4;
      FVar19 = (param_4->ControlRigElement).Name;
      uVar24 = local_218 >> 0x30;
      local_218 = CONCAT26((short)uVar24,*param_2);
      pvVar23 = FAccumulatedControlRigValues::GetData(this->AccumulatedValues,SUB86(&local_218,0));
      param_4 = param_4 + 1;
      param_2 = param_2 + 1;
      puVar1 = (undefined8 *)((longlong)pvVar23 + (ulonglong)local_res8._2_2_ * 0x10);
      *puVar1 = uVar5;
      *(FName *)(puVar1 + 1) = FVar19;
    }
    return;
  }
  uVar15 = (this->TracksComponents->Parameters).Bool.PropertyTag.Value;
  if (((uVar15 != 0xffff) && ((int)(uint)uVar15 < (this_00->Bits).NumBits)) &&
     ((*(uint *)(this_00->Bits).AllocatorInstance.InlineData[uVar15 >> 5].Pad >> (uVar15 & 0x1f) & 1
      ) != 0)) {
    if ((param_5 == (bool *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("OptBoolResults",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigSystem.cpp"
                            ,0x51c,L""), bVar21)) {
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    if (local_238 == (FMovieSceneEntityID *)0x0) {
      return;
    }
    lVar28 = 0;
    do {
      local_res8._0_2_ = param_2->EntryIndex;
      local_res8._2_2_ = param_2->AccumulatorIndex;
      bVar21 = param_5[lVar28];
      local_208 = CONCAT26(local_208._6_2_,*param_2);
      pvVar23 = FAccumulatedControlRigValues::GetData(this->AccumulatedValues,SUB86(&local_208,0));
      param_2 = param_2 + 1;
      lVar28 = lVar28 + 1;
      *(bool *)((longlong)pvVar23 + (ulonglong)local_res8._2_2_) = bVar21;
    } while (lVar28 < (longlong)local_238);
    return;
  }
  uVar15 = (this->TracksComponents->Parameters).Byte.PropertyTag.Value;
  if (((uVar15 != 0xffff) && ((int)(uint)uVar15 < (this_00->Bits).NumBits)) &&
     ((*(uint *)(this_00->Bits).AllocatorInstance.InlineData[uVar15 >> 5].Pad >> (uVar15 & 0x1f) & 1
      ) != 0)) {
    if ((param_6 == (uchar *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("OptByteResults",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigSystem.cpp"
                            ,0x524,L""), bVar21)) {
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    if (local_238 == (FMovieSceneEntityID *)0x0) {
      return;
    }
    lVar28 = 0;
    do {
      local_res8._0_2_ = param_2->EntryIndex;
      local_res8._2_2_ = param_2->AccumulatorIndex;
      uVar13 = param_6[lVar28];
      local_1b8[0] = CONCAT26(local_1b8[0]._6_2_,*param_2);
      pvVar23 = FAccumulatedControlRigValues::GetData(this->AccumulatedValues,SUB86(local_1b8,0));
      param_2 = param_2 + 1;
      lVar28 = lVar28 + 1;
      *(uchar *)((longlong)pvVar23 + (ulonglong)local_res8._2_2_) = uVar13;
    } while (lVar28 < (longlong)local_238);
    return;
  }
  uVar15 = (this->TracksComponents->Parameters).Integer.PropertyTag.Value;
  if (((uVar15 != 0xffff) && ((int)(uint)uVar15 < (this_00->Bits).NumBits)) &&
     ((*(uint *)(this_00->Bits).AllocatorInstance.InlineData[uVar15 >> 5].Pad >> (uVar15 & 0x1f) & 1
      ) != 0)) {
    if ((param_7 == (long64 *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("OptIntegerResults",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigSystem.cpp"
                            ,0x52c,L""), bVar21)) {
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    if (local_238 == (FMovieSceneEntityID *)0x0) {
      return;
    }
    lVar28 = 0;
    do {
      local_res8._0_2_ = param_2->EntryIndex;
      local_res8._2_2_ = param_2->AccumulatorIndex;
      lVar20 = param_7[lVar28];
      local_1c8[0] = (FMovieSceneEntityID *)CONCAT26(local_1c8[0]._6_2_,*param_2);
      pvVar23 = FAccumulatedControlRigValues::GetData(this->AccumulatedValues,SUB86(local_1c8,0));
      param_2 = param_2 + 1;
      lVar28 = lVar28 + 1;
      *(int *)((longlong)pvVar23 + (ulonglong)local_res8._2_2_ * 4) = (int)lVar20;
    } while (lVar28 < (longlong)local_238);
    return;
  }
  uVar15 = (this->TracksComponents->Parameters).Scalar.PropertyTag.Value;
  if (((uVar15 != 0xffff) && ((int)(uint)uVar15 < (this_00->Bits).NumBits)) &&
     ((*(uint *)(this_00->Bits).AllocatorInstance.InlineData[uVar15 >> 5].Pad >> (uVar15 & 0x1f) & 1
      ) != 0)) {
    if ((param_8 == (double *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("OptDoubleResults0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigSystem.cpp"
                            ,0x534,L""), bVar21)) {
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    if (local_238 == (FMovieSceneEntityID *)0x0) {
      return;
    }
    lVar28 = 0;
    do {
      local_res8._0_2_ = param_2->EntryIndex;
      local_res8._2_2_ = param_2->AccumulatorIndex;
      dVar2 = param_8[lVar28];
      local_1e8[0] = (FComponentHeader *)CONCAT26(local_1e8[0]._6_2_,*param_2);
      pvVar23 = FAccumulatedControlRigValues::GetData(this->AccumulatedValues,SUB86(local_1e8,0));
      param_2 = param_2 + 1;
      lVar28 = lVar28 + 1;
      *(float *)((longlong)pvVar23 + (ulonglong)local_res8._2_2_ * 4) = (float)dVar2;
    } while (lVar28 < (longlong)local_238);
    return;
  }
  bVar21 = FComponentMask::Contains
                     (this_00,(FComponentTypeID)
                              (this->TracksComponents->Parameters).Vector3.PropertyTag.Value);
  if (!bVar21) {
    bVar21 = FComponentMask::Contains
                       (this_00,(FComponentTypeID)
                                (this->TracksComponents->Parameters).Transform.PropertyTag.Value);
    if (!bVar21) {
      return;
    }
    if ((((param_8 != (double *)0x0) && (param_9 != (double *)0x0)) &&
        ((param_10 != (double *)0x0 &&
         ((((param_11 != (double *)0x0 && (param_12 != (double *)0x0)) &&
           (param_13 != (double *)0x0)) &&
          ((param_14 != (double *)0x0 && (param_15 != (double *)0x0)))))))) &&
       (param_16 != (double *)0x0)) {
      if (local_238 == (FMovieSceneEntityID *)0x0) {
        return;
      }
      lVar34 = (longlong)param_14 - (longlong)param_15;
      lVar28 = (longlong)param_16 - (longlong)param_15;
      lVar32 = (longlong)param_12 - (longlong)param_15;
      lVar26 = (longlong)param_13 - (longlong)param_15;
      lVar33 = (longlong)param_11 - (longlong)param_15;
      local_1a8 = (longlong)param_9 - (longlong)param_15;
      lVar35 = (longlong)param_8 - (longlong)param_15;
      local_1a0 = (longlong)param_10 - (longlong)param_15;
      do {
        uVar5 = *(undefined8 *)(lVar28 + (longlong)param_15);
        uVar17 = param_2->AccumulatorIndex;
        uVar6 = *(undefined8 *)(lVar34 + (longlong)param_15);
        uVar7 = *(undefined8 *)(lVar26 + (longlong)param_15);
        dVar2 = *param_15;
        uVar8 = *(undefined8 *)(lVar32 + (longlong)param_15);
        uVar9 = *(undefined8 *)(lVar33 + (longlong)param_15);
        uVar10 = *(undefined8 *)((longlong)param_15 + lVar35);
        uVar11 = *(undefined8 *)(local_1a8 + (longlong)param_15);
        uVar12 = *(undefined8 *)(local_1a0 + (longlong)param_15);
        local_228[0] = (FMovieSceneEntityID *)CONCAT26(local_228[0]._6_2_,*param_2);
        pvVar23 = FAccumulatedControlRigValues::GetData(this->AccumulatedValues,SUB86(local_228,0));
        uVar24 = (ulonglong)(ushort)uVar17;
        param_15 = param_15 + 1;
        param_2 = param_2 + 1;
        *(undefined8 *)((longlong)pvVar23 + uVar24 * 0x48) = uVar10;
        *(undefined8 *)((longlong)pvVar23 + uVar24 * 0x48 + 8) = uVar11;
        *(undefined8 *)((longlong)pvVar23 + uVar24 * 0x48 + 0x10) = uVar12;
        *(undefined8 *)((longlong)pvVar23 + uVar24 * 0x48 + 0x18) = uVar8;
        *(undefined8 *)((longlong)pvVar23 + uVar24 * 0x48 + 0x20) = uVar7;
        *(undefined8 *)((longlong)pvVar23 + uVar24 * 0x48 + 0x28) = uVar9;
        *(undefined8 *)((longlong)pvVar23 + uVar24 * 0x48 + 0x30) = uVar6;
        *(double *)((longlong)pvVar23 + uVar24 * 0x48 + 0x38) = dVar2;
        *(undefined8 *)((longlong)pvVar23 + uVar24 * 0x48 + 0x40) = uVar5;
        local_238 = (FMovieSceneEntityID *)((longlong)&local_238[-1].Value + 1);
      } while (local_238 != (FMovieSceneEntityID *)0x0);
      return;
    }
    pFVar30 = (FComponentHeader *)pFVar22->SerialNumber;
    pFVar25 = pFVar30 + *(ushort *)((longlong)&pFVar22->DebugComponents + 4);
    for (; local_1d8[0] = local_238, pFVar30 != pFVar25; pFVar30 = pFVar30 + 1) {
      if ((TComponentTypeID<UE::MovieScene::FIntermediate3DTransform>)(pFVar30->ComponentType).Value
          == (this->TracksComponents->Parameters).Transform.InitialValue) {
        local_res8 = *(int *)((longlong)&pFVar22->Size + 4);
        local_1e8[0] = pFVar30;
        if (local_res8 == 1) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar30->ReadWriteLock);
        }
        LOCK();
        pFVar30->ScheduledAccessCount = (atomic<int>)((int)pFVar30->ScheduledAccessCount + 1);
        UNLOCK();
        local_1c8[0] = (FMovieSceneEntityID *)pFVar30->Components;
        goto LAB_14a40e768;
      }
    }
    pFVar30 = (FComponentHeader *)0x0;
    local_120 = 0;
    uStack_118 = 0;
    local_res8 = 0;
    local_1e8[0] = (FComponentHeader *)0x0;
    local_1c8[0] = (FMovieSceneEntityID *)0x0;
LAB_14a40e768:
    if (local_238 != (FMovieSceneEntityID *)0x0) {
      pFVar36 = local_1c8[0] + 0x1c;
      local_1a0 = (longlong)param_8 - (longlong)param_9;
      local_1a8 = (longlong)param_10 - (longlong)param_9;
      local_1b8[0] = (longlong)param_11 - (longlong)param_9;
      local_218 = (longlong)param_12 - (longlong)param_9;
      local_208 = (longlong)param_13 - (longlong)param_9;
      local_198 = (longlong)param_14 - (longlong)param_9;
      local_190 = (longlong)param_15 - (longlong)param_9;
      pdVar27 = param_9;
      do {
        if (local_1c8[0] == (FMovieSceneEntityID *)0x0) {
          uVar54 = SUB84(FEulerTransform::Identity.Scale.field0_0x0._s_0.Z,0);
          uVar55 = (undefined4)
                   ((ulonglong)FEulerTransform::Identity.Scale.field0_0x0._16_8_ >> 0x20);
          uVar37 = FEulerTransform::Identity.Rotation.Yaw._0_4_;
          uVar38 = FEulerTransform::Identity.Rotation.Yaw._4_4_;
          uVar39 = FEulerTransform::Identity.Rotation.Roll._0_4_;
          uVar40 = FEulerTransform::Identity.Rotation.Roll._4_4_;
          uVar41 = FEulerTransform::Identity.Location.field0_0x0._16_4_;
          uVar42 = FEulerTransform::Identity.Location.field0_0x0._20_4_;
          uVar43 = FEulerTransform::Identity.Rotation.Pitch._0_4_;
          uVar44 = FEulerTransform::Identity.Rotation.Pitch._4_4_;
          uVar45 = FEulerTransform::Identity.Location.field0_0x0._0_4_;
          uVar46 = FEulerTransform::Identity.Location.field0_0x0._4_4_;
          uVar47 = FEulerTransform::Identity.Location.field0_0x0._8_4_;
          uVar48 = FEulerTransform::Identity.Location.field0_0x0._12_4_;
          uVar49 = FEulerTransform::Identity.Scale.field0_0x0._0_4_;
          uVar50 = FEulerTransform::Identity.Scale.field0_0x0._4_4_;
          uVar51 = FEulerTransform::Identity.Scale.field0_0x0._8_4_;
          uVar52 = FEulerTransform::Identity.Scale.field0_0x0._12_4_;
        }
        else {
          uVar54 = (undefined4)*(undefined8 *)(pFVar36 + 4);
          uVar55 = (undefined4)((ulonglong)*(undefined8 *)(pFVar36 + 4) >> 0x20);
          uVar37 = (int)*(undefined8 *)(pFVar36 + -8);
          uVar38 = (int)((ulonglong)*(undefined8 *)(pFVar36 + -8) >> 0x20);
          uVar39 = (int)*(undefined8 *)(pFVar36 + -0x10);
          uVar40 = (int)((ulonglong)*(undefined8 *)(pFVar36 + -0x10) >> 0x20);
          uVar41 = (int)*(undefined8 *)(pFVar36 + -0x14);
          uVar42 = (int)((ulonglong)*(undefined8 *)(pFVar36 + -0x14) >> 0x20);
          uVar43 = (int)*(undefined8 *)(pFVar36 + -0xc);
          uVar44 = (int)((ulonglong)*(undefined8 *)(pFVar36 + -0xc) >> 0x20);
          uVar45 = *(undefined4 *)(pFVar36 + -0x1c);
          uVar46 = *(undefined4 *)(pFVar36 + -0x1a);
          uVar47 = *(undefined4 *)(pFVar36 + -0x18);
          uVar48 = *(undefined4 *)(pFVar36 + -0x16);
          uVar49 = *(undefined4 *)(pFVar36 + -4);
          uVar50 = *(undefined4 *)(pFVar36 + -2);
          uVar51 = *(undefined4 *)pFVar36;
          uVar52 = *(undefined4 *)(pFVar36 + 2);
        }
        local_188 = CONCAT44(uVar46,uVar45);
        uStack_180 = (double)CONCAT44(uVar48,uVar47);
        local_178 = CONCAT44(uVar42,uVar41);
        uStack_170 = CONCAT44(uVar44,uVar43);
        local_168 = CONCAT44(uVar38,uVar37);
        uStack_160 = CONCAT44(uVar40,uVar39);
        local_158 = CONCAT44(uVar50,uVar49);
        uStack_150 = CONCAT44(uVar52,uVar51);
        if (param_8 != (double *)0x0) {
          local_188 = *(undefined8 *)((longlong)pdVar27 + local_1a0);
        }
        if (param_9 != (double *)0x0) {
          uStack_180 = *pdVar27;
        }
        if (param_10 != (double *)0x0) {
          local_178 = *(undefined8 *)(local_1a8 + (longlong)pdVar27);
        }
        if (param_11 != (double *)0x0) {
          uStack_160 = *(undefined8 *)(local_1b8[0] + (longlong)pdVar27);
        }
        if (param_12 != (double *)0x0) {
          uStack_170 = *(undefined8 *)(local_218 + (longlong)pdVar27);
        }
        if (param_13 != (double *)0x0) {
          local_168 = *(undefined8 *)(local_208 + (longlong)pdVar27);
        }
        if (param_14 != (double *)0x0) {
          local_158 = *(undefined8 *)(local_198 + (longlong)pdVar27);
        }
        if (param_15 != (double *)0x0) {
          uStack_150 = *(undefined8 *)(local_190 + (longlong)pdVar27);
        }
        if (param_16 != (double *)0x0) {
          uVar5 = *(undefined8 *)(((longlong)param_16 - (longlong)param_9) + (longlong)pdVar27);
          uVar54 = (undefined4)uVar5;
          uVar55 = (undefined4)((ulonglong)uVar5 >> 0x20);
        }
        uVar37._0_2_ = param_2->EntryIndex;
        uVar37._2_2_ = param_2->AccumulatorIndex;
        local_228[0] = (FMovieSceneEntityID *)CONCAT44(local_228[0]._4_4_,uVar37);
        local_1f8[0] = (FComponentHeader *)CONCAT26(local_1f8[0]._6_2_,*param_2);
        pvVar23 = FAccumulatedControlRigValues::GetData(this->AccumulatedValues,SUB86(local_1f8,0));
        uVar24 = (ulonglong)local_228[0] >> 0x10 & 0xffff;
        pFVar36 = pFVar36 + 0x24;
        pdVar27 = pdVar27 + 1;
        param_2 = param_2 + 1;
        local_1d8[0] = (FMovieSceneEntityID *)((longlong)&local_1d8[0][-1].Value + 1);
        puVar1 = (undefined8 *)((longlong)pvVar23 + uVar24 * 0x48);
        *puVar1 = local_188;
        puVar1[1] = uStack_180;
        puVar1 = (undefined8 *)((longlong)pvVar23 + uVar24 * 0x48 + 0x10);
        *puVar1 = local_178;
        puVar1[1] = uStack_170;
        puVar1 = (undefined8 *)((longlong)pvVar23 + uVar24 * 0x48 + 0x20);
        *puVar1 = local_168;
        puVar1[1] = uStack_160;
        puVar1 = (undefined8 *)((longlong)pvVar23 + uVar24 * 0x48 + 0x30);
        *puVar1 = local_158;
        puVar1[1] = uStack_150;
        *(ulonglong *)((longlong)pvVar23 + uVar24 * 0x48 + 0x40) = CONCAT44(uVar55,uVar54);
      } while (local_1d8[0] != (FMovieSceneEntityID *)0x0);
      local_1d8[0] = (FMovieSceneEntityID *)0x0;
      pFVar30 = local_1e8[0];
    }
    if (pFVar30 == (FComponentHeader *)0x0) {
      return;
    }
    LOCK();
    pFVar30->ScheduledAccessCount = (atomic<int>)((int)pFVar30->ScheduledAccessCount + -1);
    UNLOCK();
    iVar31 = local_res8;
    goto joined_r0x00014a40e9ee;
  }
  if (((param_8 != (double *)0x0) && (param_9 != (double *)0x0)) && (param_10 != (double *)0x0)) {
    if (local_238 == (FMovieSceneEntityID *)0x0) {
      return;
    }
    lVar28 = (longlong)param_8 - (longlong)param_9;
    lVar34 = (longlong)param_10 - (longlong)param_9;
    do {
      uVar16 = param_2->AccumulatorIndex;
      dVar2 = *(double *)(lVar28 + (longlong)param_9);
      dVar3 = *param_9;
      dVar4 = *(double *)((longlong)param_9 + lVar34);
      local_1d8[0] = (FMovieSceneEntityID *)CONCAT26(local_1d8[0]._6_2_,*param_2);
      pvVar23 = FAccumulatedControlRigValues::GetData(this->AccumulatedValues,SUB86(local_1d8,0));
      uVar24 = (ulonglong)(ushort)uVar16;
      param_9 = param_9 + 1;
      param_2 = param_2 + 1;
      *(float *)((longlong)pvVar23 + uVar24 * 0xc) = (float)dVar2;
      *(float *)((longlong)pvVar23 + uVar24 * 0xc + 4) = (float)dVar3;
      *(float *)((longlong)pvVar23 + uVar24 * 0xc + 8) = (float)dVar4;
      local_238 = (FMovieSceneEntityID *)((longlong)&local_238[-1].Value + 1);
    } while (local_238 != (FMovieSceneEntityID *)0x0);
    return;
  }
  pFVar30 = (FComponentHeader *)local_1f8[0]->SerialNumber;
  pFVar22 = pFVar30 + *(ushort *)((longlong)&local_1f8[0]->DebugComponents + 4);
  for (; pFVar30 != pFVar22; pFVar30 = pFVar30 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FFloatIntermediateVector>)(pFVar30->ComponentType).Value
        == (this->TracksComponents->Parameters).Vector3.InitialValue) {
      iVar31 = *(int *)((longlong)&local_1f8[0]->Size + 4);
      local_208 = CONCAT44(local_208._4_4_,iVar31);
      local_1f8[0] = pFVar30;
      if (iVar31 == 1) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar30->ReadWriteLock);
        iVar31 = (int)local_208;
      }
      LOCK();
      pFVar30->ScheduledAccessCount = (atomic<int>)((int)pFVar30->ScheduledAccessCount + 1);
      UNLOCK();
      local_228[0] = (FMovieSceneEntityID *)pFVar30->Components;
      goto LAB_14a40e2a6;
    }
  }
  local_1f8[0] = (FComponentHeader *)0x0;
  local_138 = 0;
  uStack_130 = 0;
  uStack_130._0_4_ = 0;
  local_208 = (ulonglong)local_208._4_4_ << 0x20;
  local_228[0] = (FMovieSceneEntityID *)0x0;
  pFVar30 = (FComponentHeader *)0x0;
  iVar31 = (int)uStack_130;
LAB_14a40e2a6:
  pFVar36 = local_228[0];
  if (uVar14 != 0) {
    if (param_8 == (double *)0x0) {
      if (local_238 == (FMovieSceneEntityID *)0x0) goto LAB_14a40e4a3;
      pFVar29 = local_228[0] + 8;
      pdVar27 = param_10;
      local_228[0] = (FMovieSceneEntityID *)((longlong)param_9 - (longlong)param_10);
      do {
        if (pFVar36 == (FMovieSceneEntityID *)0x0) {
          fVar57 = 0.0;
          fVar56 = 0.0;
          fVar53 = 0.0;
        }
        else {
          fVar57 = (float)*(double *)(pFVar29 + -8);
          fVar56 = (float)*(double *)(pFVar29 + -4);
          fVar53 = (float)*(double *)pFVar29;
        }
        if (param_9 != (double *)0x0) {
          fVar56 = (float)*(double *)((longlong)pdVar27 + (longlong)local_228[0]);
        }
        if (param_10 != (double *)0x0) {
          fVar53 = (float)*pdVar27;
        }
        local_res8._0_2_ = param_2->EntryIndex;
        local_res8._2_2_ = param_2->AccumulatorIndex;
        local_218 = CONCAT44(local_218._4_4_,local_res8);
        local_resc = *(undefined2 *)&param_2->ControlType;
        pvVar23 = FAccumulatedControlRigValues::GetData
                            (this->AccumulatedValues,SUB86(&local_res8,0));
        uVar24 = local_218 >> 0x10 & 0xffff;
        pFVar29 = pFVar29 + 0x10;
        pdVar27 = pdVar27 + 1;
        param_2 = param_2 + 1;
        local_238 = (FMovieSceneEntityID *)((longlong)&local_238[-1].Value + 1);
        *(ulonglong *)((longlong)pvVar23 + uVar24 * 0xc) = CONCAT44(fVar56,fVar57);
        *(float *)((longlong)pvVar23 + uVar24 * 0xc + 8) = fVar53;
      } while (local_238 != (FMovieSceneEntityID *)0x0);
    }
    else {
      pFVar29 = local_228[0] + 8;
      pdVar27 = param_9;
      local_228[0] = local_238;
      do {
        if (pFVar36 == (FMovieSceneEntityID *)0x0) {
          fVar53 = 0.0;
          fVar56 = 0.0;
        }
        else {
          fVar53 = (float)*(double *)(pFVar29 + -4);
          fVar56 = (float)*(double *)pFVar29;
        }
        dVar2 = *(double *)((longlong)pdVar27 + ((longlong)param_8 - (longlong)param_9));
        if (param_9 != (double *)0x0) {
          fVar53 = (float)*pdVar27;
        }
        if (param_10 != (double *)0x0) {
          fVar56 = (float)*(double *)(((longlong)param_10 - (longlong)param_9) + (longlong)pdVar27);
        }
        local_res8._0_2_ = param_2->EntryIndex;
        local_res8._2_2_ = param_2->AccumulatorIndex;
        local_218 = CONCAT44(local_218._4_4_,local_res8);
        local_resc = *(undefined2 *)&param_2->ControlType;
        pvVar23 = FAccumulatedControlRigValues::GetData
                            (this->AccumulatedValues,SUB86(&local_res8,0));
        uVar24 = local_218 >> 0x10 & 0xffff;
        pFVar29 = pFVar29 + 0x10;
        pdVar27 = pdVar27 + 1;
        param_2 = param_2 + 1;
        local_228[0] = (FMovieSceneEntityID *)((longlong)&local_228[0][-1].Value + 1);
        *(ulonglong *)((longlong)pvVar23 + uVar24 * 0xc) = CONCAT44(fVar53,(float)dVar2);
        *(float *)((longlong)pvVar23 + uVar24 * 0xc + 8) = fVar56;
      } while (local_228[0] != (FMovieSceneEntityID *)0x0);
      local_228[0] = (FMovieSceneEntityID *)0x0;
    }
    pFVar30 = local_1f8[0];
    iVar31 = (int)local_208;
  }
LAB_14a40e4a3:
  if (pFVar30 == (FComponentHeader *)0x0) {
    return;
  }
  LOCK();
  pFVar30->ScheduledAccessCount = (atomic<int>)((int)pFVar30->ScheduledAccessCount + -1);
  UNLOCK();
joined_r0x00014a40e9ee:
  if (iVar31 == 1) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar30->ReadWriteLock);
  }
  return;
}

