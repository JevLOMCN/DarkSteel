// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 1

// GenerateBuffer @ 1444bf3d0

void __thiscall
Audio::FSinOsc2DRotation::GenerateBuffer
          (FSinOsc2DRotation *this,float param_1,float param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 in_register_00001284 [12];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  
  fVar9 = __real_40c90fdb;
  auVar17._4_4_ = in_register_00001284._0_4_;
  auVar17._8_4_ = in_register_00001284._4_4_;
  auVar17._12_4_ = in_register_00001284._8_4_;
  fVar20 = (param_2 * __real_40c90fdb) / param_1;
  if (fVar20 != this->LastPhasePerSample) {
    __libm_sse2_sincosf_();
    this->LastPhasePerSample = fVar20;
    (this->QuadDxVec).m128_f32[0] = extraout_XMM0_Db;
    (this->QuadDxVec).m128_f32[1] = extraout_XMM0_Db;
    (this->QuadDxVec).m128_f32[2] = extraout_XMM0_Db;
    (this->QuadDxVec).m128_f32[3] = extraout_XMM0_Db;
    (this->QuadDyVec).m128_f32[0] = extraout_XMM0_Da;
    (this->QuadDyVec).m128_f32[1] = extraout_XMM0_Da;
    (this->QuadDyVec).m128_f32[2] = extraout_XMM0_Da;
    (this->QuadDyVec).m128_f32[3] = extraout_XMM0_Da;
  }
  fVar8 = __real_3e22f983;
  if (param_4 != 0) {
    fVar21 = fVar20 * __real_40400000;
    do {
      local_98 = this->LastPhase;
      auVar17._0_4_ = fVar20 + fVar20;
      fVar14 = 0.0;
      fVar15 = 0.0;
      fVar16 = 0.0;
      auVar18._4_12_ = auVar17._4_12_;
      auVar18._0_4_ = fVar20 + fVar20 + local_98;
      fVar13 = local_98 + fVar20;
      fStack_8c = fVar21 + local_98;
      fStack_94 = fVar13;
      fStack_90 = auVar18._0_4_;
      __vdecl_sincosf4();
      fVar19 = (this->QuadDxVec).m128_f32[0];
      fVar1 = (this->QuadDxVec).m128_f32[1];
      fVar2 = (this->QuadDxVec).m128_f32[2];
      fVar3 = (this->QuadDxVec).m128_f32[3];
      fVar4 = (this->QuadDyVec).m128_f32[0];
      fVar5 = (this->QuadDyVec).m128_f32[1];
      fVar6 = (this->QuadDyVec).m128_f32[2];
      fVar7 = (this->QuadDyVec).m128_f32[3];
      if (param_4 < 0x1e1) {
        iVar10 = param_4 >> 2;
        local_98 = extraout_XMM0_Da_00;
        fStack_94 = extraout_XMM0_Db_00;
        fStack_90 = extraout_XMM0_Dc;
        fStack_8c = extraout_XMM0_Dd;
        uVar12 = param_4;
        goto joined_r0x0001444bf50d;
      }
      uVar12 = 0x1e0;
      iVar10 = 0x78;
      local_98 = extraout_XMM0_Da_00;
      fStack_94 = extraout_XMM0_Db_00;
      fStack_90 = extraout_XMM0_Dc;
      fStack_8c = extraout_XMM0_Dd;
      do {
        *param_3 = local_98;
        param_3[1] = fStack_94;
        param_3[2] = fStack_90;
        param_3[3] = fStack_8c;
        param_3 = param_3 + 4;
        auVar18._0_4_ = fVar19 * local_98 + fVar4 * fVar13;
        auVar18._4_4_ = fVar1 * fStack_94 + fVar5 * fVar14;
        auVar18._8_4_ = fVar2 * fStack_90 + fVar6 * fVar15;
        auVar18._12_4_ = fVar3 * fStack_8c + fVar7 * fVar16;
        fVar13 = fVar13 * fVar19 - fVar4 * local_98;
        fVar14 = fVar14 * fVar1 - fVar5 * fStack_94;
        fVar15 = fVar15 * fVar2 - fVar6 * fStack_90;
        fVar16 = fVar16 * fVar3 - fVar7 * fStack_8c;
        iVar10 = iVar10 + -1;
        local_98 = auVar18._0_4_;
        fStack_94 = auVar18._4_4_;
        fStack_90 = auVar18._8_4_;
        fStack_8c = auVar18._12_4_;
joined_r0x0001444bf50d:
      } while (iVar10 != 0);
      uVar11 = uVar12 & 3;
      if ((uVar11 != 0) && (uVar11 != 0)) {
        memcpy(param_3,&local_98,(ulonglong)uVar11 << 2);
      }
      fVar19 = (float)(int)uVar12 * fVar20 + this->LastPhase;
      auVar18 = roundps(auVar18,ZEXT416((uint)(fVar19 * fVar8)),1);
      this->LastPhase = fVar19 - auVar18._0_4_ * fVar9;
      param_4 = param_4 - uVar12;
    } while (param_4 != 0);
  }
  return;
}

