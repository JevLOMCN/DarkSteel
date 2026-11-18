// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// CalcVertexData @ 1481d6270

void __thiscall
FAnimTrailParticleRenderData::CalcVertexData
          (FAnimTrailParticleRenderData *this,float param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,float *param_5,float *param_6,
          FLinearColor *param_7,TVector4<float> *param_8)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  FAnimTrailTypeDataPayload *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  TVector<float> *pTVar8;
  FLinearColor *pFVar9;
  TVector4<float> *pTVar10;
  FAnimTrailTypeDataPayload *pFVar11;
  longlong lVar12;
  FBaseParticle *pFVar13;
  FBaseParticle *pFVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_res8 [2];
  float local_res10 [2];
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  TVector<float>_u_0 local_1d0;
  TVector<float>_u_0 local_1c0;
  TVector<double>_u_0 local_1b0;
  TVector4<float>_u_0 local_198;
  TVector4<float>_u_0 local_188;
  TVector4<float>_u_0 local_178;
  TVector4<float>_u_0 local_168;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  FLinearColor_u_0 local_128;
  FLinearColor_u_0 local_118;
  TVector<float> local_100;
  FLinearColor local_f4;
  TVector4<float> local_d8 [10];
  
  if ((this->Particle == (FBaseParticle *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanRender()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                         ,0x16d0,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar22 = __real_3f800000;
  if (param_1 == 0.0) {
    pFVar11 = this->Payload;
    fVar22 = pFVar11->Length;
    fVar21 = (pFVar11->Direction).field0_0x0._s_0.Z;
    pFVar14 = this->Particle;
    dVar19 = (double)(fVar22 * (pFVar11->Direction).field0_0x0._s_0.X);
    dVar2 = (pFVar14->Location).field0_0x0._s_0.Y;
    dVar18 = (double)(fVar22 * (pFVar11->Direction).field0_0x0._s_0.Y);
    (param_2->field0_0x0)._s_0.X = (pFVar14->Location).field0_0x0._s_0.X;
    (param_2->field0_0x0)._s_0.Y = dVar2;
    (param_2->field0_0x0)._s_0.Z = (pFVar14->Location).field0_0x0._s_0.Z;
    pFVar14 = this->Particle;
    dVar17 = (double)(fVar22 * fVar21);
    dVar2 = (pFVar14->Location).field0_0x0._s_0.Y;
    dVar3 = (pFVar14->Location).field0_0x0._s_0.Z;
    (param_3->field0_0x0)._s_0.X = (pFVar14->Location).field0_0x0._s_0.X - dVar19;
    (param_3->field0_0x0)._s_0.Y = dVar2 - dVar18;
    (param_3->field0_0x0)._s_0.Z = dVar3 - dVar17;
    pFVar14 = this->Particle;
    dVar2 = (pFVar14->Location).field0_0x0._s_0.Y;
    dVar3 = (pFVar14->Location).field0_0x0._s_0.Z;
    (param_4->field0_0x0)._s_0.X = dVar19 + (pFVar14->Location).field0_0x0._s_0.X;
    (param_4->field0_0x0)._s_0.Y = dVar18 + dVar2;
    (param_4->field0_0x0)._s_0.Z = dVar17 + dVar3;
    *param_5 = *(float *)((longlong)&this->Payload->_padding_ + 4);
    *param_6 = (this->Particle->Size).field0_0x0._s_0.X * *(float *)&this->Source->_padding_;
    uVar6 = *(undefined8 *)((longlong)&(this->Particle->Color).field0_0x0 + 8);
    *(undefined8 *)&param_7->field0_0x0 = *(undefined8 *)&(this->Particle->Color).field0_0x0;
    *(undefined8 *)((longlong)&param_7->field0_0x0 + 8) = uVar6;
    if (param_8 != (TVector4<float> *)0x0) {
      pFVar14 = this->Particle;
      lVar12 = (longlong)(int)this->Source->_padding_;
      (param_8->field0_0x0)._s_0.X =
           *(float *)((longlong)&(pFVar14->OldLocation).field0_0x0 + lVar12);
      (param_8->field0_0x0)._s_0.Y =
           *(float *)((longlong)&(pFVar14->OldLocation).field0_0x0 + lVar12 + 4);
      (param_8->field0_0x0)._s_0.Z =
           *(float *)((longlong)&(pFVar14->OldLocation).field0_0x0 + lVar12 + 8);
      (param_8->field0_0x0)._s_0.W =
           *(float *)((longlong)&(pFVar14->OldLocation).field0_0x0 + lVar12 + 0xc);
    }
  }
  else {
    pFVar14 = this->PrevParticle;
    if ((pFVar14 == (FBaseParticle *)0x0) || (param_1 != __real_3f800000)) {
      if (((this->Particle == (FBaseParticle *)0x0) || (pFVar14 == (FBaseParticle *)0x0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CanInterpolate()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                             ,0x16f1,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((param_1 < 0.0) || (fVar22 < param_1)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InterpFactor >= 0.0f && InterpFactor <= 1.0f",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                             ,0x16f3,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((((this->Particle == (FBaseParticle *)0x0) || (this->PrevParticle == (FBaseParticle *)0x0)
           ) || ((this->Payload == (FAnimTrailTypeDataPayload *)0x0 ||
                 (this->PrevPayload == (FAnimTrailTypeDataPayload *)0x0)))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particle && PrevParticle && Payload && PrevPayload",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                             ,0x16f4,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar14 = this->PrevPrevParticle;
      if (pFVar14 == (FBaseParticle *)0x0) {
        pFVar14 = this->PrevParticle;
        pFVar11 = this->PrevPayload;
      }
      else {
        pFVar11 = this->PrevPrevPayload;
      }
      local_140._s_0.X = (pFVar14->Location).field0_0x0._s_0.X;
      local_140._s_0.Y = (pFVar14->Location).field0_0x0._s_0.Y;
      pFVar13 = this->NextParticle;
      local_140._s_0.Z = (pFVar14->Location).field0_0x0._s_0.Z;
      local_1c0._s_0.Z = (pFVar11->Direction).field0_0x0._s_0.Z;
      pFVar4 = this->Payload;
      local_1e4 = *(float *)((longlong)&pFVar11->_padding_ + 4);
      local_1d4 = (pFVar14->Size).field0_0x0._s_0.X * *(float *)&this->Source->_padding_;
      local_1c0._0_8_ = *(undefined8 *)&(pFVar11->Direction).field0_0x0;
      local_res8[0] = pFVar11->Length;
      local_118._0_8_ = *(undefined8 *)&(pFVar14->Color).field0_0x0;
      local_118._8_8_ = *(undefined8 *)((longlong)&(pFVar14->Color).field0_0x0 + 8);
      if (pFVar13 == (FBaseParticle *)0x0) {
        pFVar13 = this->Particle;
        local_1d0._s_0.Z = (pFVar4->Direction).field0_0x0._s_0.Z;
        local_158._s_0.X = (pFVar13->Location).field0_0x0._s_0.X;
        local_158._s_0.Y = (pFVar13->Location).field0_0x0._s_0.Y;
        local_158._s_0.Z = (pFVar13->Location).field0_0x0._s_0.Z;
        local_1d0._0_8_ = *(undefined8 *)&(pFVar4->Direction).field0_0x0;
        local_res10[0] = pFVar4->Length;
        local_1e8 = *(float *)((longlong)&pFVar4->_padding_ + 4);
        fVar22 = GCatmullRomEndParamOffset;
      }
      else {
        pFVar11 = this->NextPayload;
        local_158._s_0.X = (pFVar13->Location).field0_0x0._s_0.X;
        local_158._s_0.Y = (pFVar13->Location).field0_0x0._s_0.Y;
        local_158._s_0.Z = (pFVar13->Location).field0_0x0._s_0.Z;
        local_1d0._s_0.Z = (pFVar11->Direction).field0_0x0._s_0.Z;
        local_1d0._0_8_ = *(undefined8 *)&(pFVar11->Direction).field0_0x0;
        local_res10[0] = pFVar11->Length;
        local_1e8 = *(float *)((longlong)&pFVar11->_padding_ + 4);
        fVar22 = pFVar4->InterpolationParameter;
      }
      pFVar11 = this->PrevPayload;
      local_128._0_8_ = *(undefined8 *)&(pFVar13->Color).field0_0x0;
      local_128._8_8_ = *(undefined8 *)((longlong)&(pFVar13->Color).field0_0x0 + 8);
      fVar20 = fVar22 + pFVar11->InterpolationParameter;
      local_1e0 = (pFVar13->Size).field0_0x0._s_0.X * *(float *)&this->Source->_padding_;
      fVar21 = GCatmullRomEndParamOffset;
      if (this->PrevPrevPayload != (FAnimTrailTypeDataPayload *)0x0) {
        fVar21 = this->PrevPrevPayload->InterpolationParameter;
      }
      fVar21 = fVar21 + fVar20;
      fVar23 = (fVar20 - fVar22) * param_1 + fVar22;
      FMath::CubicCRSplineInterpSafe<UE::Math::TVector<double>_>
                ((TVector<double> *)&local_1b0._s_0,(TVector<double> *)&local_140._s_0,
                 &this->PrevParticle->Location,&this->Particle->Location,
                 (TVector<double> *)&local_158._s_0,fVar21,fVar20,fVar22,0.0,fVar23);
      pTVar8 = FMath::CubicCRSplineInterpSafe<UE::Math::TVector<float>_>
                         (&local_100,(TVector<float> *)&local_1c0._s_0,&pFVar11->Direction,
                          &pFVar4->Direction,(TVector<float> *)&local_1d0._s_0,fVar21,fVar20,fVar22,
                          0.0,fVar23);
      dVar2 = (double)(pTVar8->field0_0x0)._s_0.X;
      dVar3 = (double)(pTVar8->field0_0x0)._s_0.Y;
      dVar17 = (double)(pTVar8->field0_0x0)._s_0.Z;
      dVar18 = dVar3 * dVar3 + dVar2 * dVar2 + dVar17 * dVar17;
      if (__real_3e45798ee0000000 < dVar18) {
        dVar18 = __real_3ff0000000000000 / SQRT(dVar18);
        dVar2 = dVar2 * dVar18;
        dVar3 = dVar3 * dVar18;
        dVar17 = dVar17 * dVar18;
      }
      fVar15 = FMath::CubicCRSplineInterpSafe<float>
                         (local_res8,&pFVar11->Length,&pFVar4->Length,local_res10,fVar21,fVar20,
                          fVar22,0.0,fVar23);
      fVar16 = FMath::CubicCRSplineInterpSafe<float>
                         (&local_1e4,(float *)((longlong)&pFVar11->_padding_ + 4),
                          (float *)((longlong)&pFVar4->_padding_ + 4),&local_1e8,fVar21,fVar20,
                          fVar22,0.0,fVar23);
      *param_5 = fVar16;
      local_1d8 = *(float *)&this->Source->_padding_;
      local_1dc = local_1d8 * (this->Particle->Size).field0_0x0._s_0.X;
      local_1d8 = local_1d8 * (this->PrevParticle->Size).field0_0x0._s_0.X;
      fVar16 = FMath::CubicCRSplineInterpSafe<float>
                         (&local_1d4,&local_1d8,&local_1dc,&local_1e0,fVar21,fVar20,fVar22,0.0,
                          fVar23);
      *param_6 = fVar16;
      pFVar9 = FMath::CubicCRSplineInterpSafe<FLinearColor>
                         (&local_f4,(FLinearColor *)&local_118._s_0,&this->PrevParticle->Color,
                          &this->Particle->Color,(FLinearColor *)&local_128._s_0,fVar21,fVar20,
                          fVar22,0.0,fVar23);
      uVar6 = *(undefined8 *)((longlong)&pFVar9->field0_0x0 + 8);
      *(undefined8 *)&param_7->field0_0x0 = *(undefined8 *)&pFVar9->field0_0x0;
      *(undefined8 *)((longlong)&param_7->field0_0x0 + 8) = uVar6;
      if (param_8 != (TVector4<float> *)0x0) {
        lVar12 = (longlong)(int)this->Source->_padding_;
        puVar1 = (undefined8 *)((longlong)&(pFVar14->OldLocation).field0_0x0 + lVar12);
        local_168._0_8_ = *puVar1;
        local_168._8_8_ = puVar1[1];
        puVar1 = (undefined8 *)((longlong)&(this->PrevParticle->OldLocation).field0_0x0 + lVar12);
        local_178._0_8_ = *puVar1;
        local_178._8_8_ = puVar1[1];
        puVar1 = (undefined8 *)((longlong)&(this->Particle->OldLocation).field0_0x0 + lVar12);
        local_188._0_8_ = *puVar1;
        local_188._8_8_ = puVar1[1];
        puVar1 = (undefined8 *)((longlong)&(pFVar13->OldLocation).field0_0x0 + lVar12);
        local_198._0_8_ = *puVar1;
        local_198._8_8_ = puVar1[1];
        pTVar10 = FMath::CubicCRSplineInterpSafe<UE::Math::TVector4<float>_>
                            (local_d8,(TVector4<float> *)&local_168._s_0,
                             (TVector4<float> *)&local_178._s_0,(TVector4<float> *)&local_188._s_0,
                             (TVector4<float> *)&local_198._s_0,fVar21,fVar20,fVar22,0.0,fVar23);
        uVar6 = *(undefined8 *)((longlong)&pTVar10->field0_0x0 + 8);
        *(undefined8 *)&param_8->field0_0x0 = *(undefined8 *)&pTVar10->field0_0x0;
        *(undefined8 *)((longlong)&param_8->field0_0x0 + 8) = uVar6;
      }
      dVar18 = (double)fVar15;
      (param_3->field0_0x0)._s_0.X = local_1b0._s_0.X - dVar2 * dVar18;
      (param_3->field0_0x0)._s_0.Y = local_1b0._s_0.Y - dVar3 * dVar18;
      (param_3->field0_0x0)._s_0.Z = local_1b0._s_0.Z - dVar17 * dVar18;
      (param_4->field0_0x0)._s_0.X = dVar2 * dVar18 + local_1b0._s_0.X;
      (param_4->field0_0x0)._s_0.Y = dVar3 * dVar18 + local_1b0._s_0.Y;
      (param_4->field0_0x0)._s_0.Z = dVar17 * dVar18 + local_1b0._s_0.Z;
      (param_2->field0_0x0)._s_0.X = local_1b0._s_0.X;
      (param_2->field0_0x0)._s_0.Y = local_1b0._s_0.Y;
      (param_2->field0_0x0)._s_0.Z = local_1b0._s_0.Z;
    }
    else {
      pFVar11 = this->PrevPayload;
      fVar22 = pFVar11->Length;
      fVar21 = (pFVar11->Direction).field0_0x0._s_0.Z;
      dVar19 = (double)(fVar22 * (pFVar11->Direction).field0_0x0._s_0.X);
      dVar2 = (pFVar14->Location).field0_0x0._s_0.Y;
      dVar18 = (double)(fVar22 * (pFVar11->Direction).field0_0x0._s_0.Y);
      (param_2->field0_0x0)._s_0.X = (pFVar14->Location).field0_0x0._s_0.X;
      (param_2->field0_0x0)._s_0.Y = dVar2;
      (param_2->field0_0x0)._s_0.Z = (pFVar14->Location).field0_0x0._s_0.Z;
      pFVar14 = this->PrevParticle;
      dVar17 = (double)(fVar22 * fVar21);
      dVar2 = (pFVar14->Location).field0_0x0._s_0.Y;
      dVar3 = (pFVar14->Location).field0_0x0._s_0.Z;
      (param_3->field0_0x0)._s_0.X = (pFVar14->Location).field0_0x0._s_0.X - dVar19;
      (param_3->field0_0x0)._s_0.Y = dVar2 - dVar18;
      (param_3->field0_0x0)._s_0.Z = dVar3 - dVar17;
      pFVar14 = this->PrevParticle;
      dVar2 = (pFVar14->Location).field0_0x0._s_0.Y;
      dVar3 = (pFVar14->Location).field0_0x0._s_0.Z;
      (param_4->field0_0x0)._s_0.X = dVar19 + (pFVar14->Location).field0_0x0._s_0.X;
      (param_4->field0_0x0)._s_0.Y = dVar18 + dVar2;
      (param_4->field0_0x0)._s_0.Z = dVar17 + dVar3;
      *param_5 = *(float *)((longlong)&this->PrevPayload->_padding_ + 4);
      *param_6 = *(float *)&this->Source->_padding_ * (this->PrevParticle->Size).field0_0x0._s_0.X;
      uVar6 = *(undefined8 *)((longlong)&(this->PrevParticle->Color).field0_0x0 + 8);
      *(undefined8 *)&param_7->field0_0x0 = *(undefined8 *)&(this->PrevParticle->Color).field0_0x0;
      *(undefined8 *)((longlong)&param_7->field0_0x0 + 8) = uVar6;
      if (param_8 != (TVector4<float> *)0x0) {
        pFVar14 = this->PrevParticle;
        lVar12 = (longlong)(int)this->Source->_padding_;
        (param_8->field0_0x0)._s_0.X =
             *(float *)((longlong)&(pFVar14->OldLocation).field0_0x0 + lVar12);
        (param_8->field0_0x0)._s_0.Y =
             *(float *)((longlong)&(pFVar14->OldLocation).field0_0x0 + lVar12 + 4);
        (param_8->field0_0x0)._s_0.Z =
             *(float *)((longlong)&(pFVar14->OldLocation).field0_0x0 + lVar12 + 8);
        (param_8->field0_0x0)._s_0.W =
             *(float *)((longlong)&(pFVar14->OldLocation).field0_0x0 + lVar12 + 0xc);
      }
    }
  }
  return;
}

