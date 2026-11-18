// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Create @ 1476305c0

FAttenuationListenerData * __cdecl
FAttenuationListenerData::Create
          (FAttenuationListenerData *__return_storage_ptr__,FAudioDevice *param_1,int param_2,
          TTransform<double> *param_3,FSoundAttenuationSettings *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  FAttenuationListenerData *pFVar7;
  double *pdVar8;
  longlong lVar9;
  float fVar10;
  TVector<double>_u_0 local_1e8;
  TTransform<double> local_1c8;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  FSoundAttenuationSettings *local_78;
  
  local_1c8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_1c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1c8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_1c8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_1c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1c8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_1c8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_1c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1c8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_1c8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_1c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1c8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_1c8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_1c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1c8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_1c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_1c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FAudioDevice::GetListenerTransform(param_1,param_2,&local_1c8);
  dVar3 = (param_3->Translation).XY.m128d_f64[0];
  dVar1 = (param_3->Translation).XY.m128d_f64[1];
  local_168 = dVar3 - local_1c8.Translation.XY.m128d_f64[0];
  dVar4 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_150 = 0.0;
  dVar5 = dVar4 - local_1c8.Translation.ZW.m128d_f64[0];
  local_128 = local_1c8.Rotation.ZW.m128d_f64[0];
  dStack_120 = local_1c8.Rotation.ZW.m128d_f64[1];
  local_138 = local_1c8.Rotation.XY.m128d_f64[0];
  dStack_130 = local_1c8.Rotation.XY.m128d_f64[1];
  local_f8 = local_1c8.Scale3D.XY.m128d_f64[0];
  dStack_f0 = local_1c8.Scale3D.XY.m128d_f64[1];
  local_d8 = (param_3->Rotation).XY.m128d_f64[0];
  dStack_d0 = (param_3->Rotation).XY.m128d_f64[1];
  local_118 = local_1c8.Translation.XY.m128d_f64[0];
  dStack_110 = local_1c8.Translation.XY.m128d_f64[1];
  local_e8 = local_1c8.Scale3D.ZW.m128d_f64[0];
  dStack_e0 = local_1c8.Scale3D.ZW.m128d_f64[1];
  local_c8 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_c0 = (param_3->Rotation).ZW.m128d_f64[1];
  local_b8 = (param_3->Translation).XY.m128d_f64[0];
  dStack_b0 = (param_3->Translation).XY.m128d_f64[1];
  local_a8 = (param_3->Translation).ZW.m128d_f64[0];
  dStack_a0 = (param_3->Translation).ZW.m128d_f64[1];
  local_98 = (param_3->Scale3D).XY.m128d_f64[0];
  dStack_90 = (param_3->Scale3D).XY.m128d_f64[1];
  local_88 = (param_3->Scale3D).ZW.m128d_f64[0];
  dStack_80 = (param_3->Scale3D).ZW.m128d_f64[1];
  local_78 = param_4;
  dStack_160 = dVar1 - local_1c8.Translation.XY.m128d_f64[1];
  local_108 = local_1c8.Translation.ZW.m128d_f64[0];
  dStack_100 = local_1c8.Translation.ZW.m128d_f64[1];
  local_1e8._s_0.Z = local_1c8.Translation.ZW.m128d_f64[0];
  dVar2 = SQRT(dStack_160 * dStack_160 + local_168 * local_168 + dVar5 * dVar5);
  if (dVar2 <= __real_3e45798ee0000000) {
    local_168 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_160 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_158 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    local_158 = __real_3ff0000000000000 / dVar2;
    local_168 = local_158 * local_168;
    dStack_160 = local_158 * dStack_160;
    local_158 = local_158 * dVar5;
  }
  local_148 = dVar2;
  dStack_140 = dVar2;
  bVar6 = FAudioDevice::GetListenerPosition(param_1,param_2,(TVector<double> *)&local_1e8._s_0,true)
  ;
  if (bVar6) {
    local_118 = local_1e8._s_0.X;
    dStack_110 = local_1e8._s_0.Y;
    dVar3 = dVar3 - local_1e8._s_0.X;
    dVar1 = dVar1 - local_1e8._s_0.Y;
    dVar4 = dVar4 - local_1e8._s_0.Z;
    local_108 = local_1e8._s_0.Z;
    dStack_100 = 0.0;
    dVar2 = SQRT(dVar1 * dVar1 + dVar3 * dVar3 + dVar4 * dVar4);
    local_148 = dVar2;
  }
  if (((param_4->bAttenuate != 0) && (*(char *)((longlong)&param_4->_padding_ + 1) == '\0')) ||
     (param_4->bAttenuateWithLPF != '\0')) {
    fVar10 = (float)(dVar2 - (double)param_4->_padding_);
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    dStack_150 = (double)fVar10;
  }
  lVar9 = 2;
  pFVar7 = __return_storage_ptr__;
  pdVar8 = &local_168;
  do {
    dVar1 = pdVar8[1];
    dVar2 = pdVar8[2];
    dVar3 = pdVar8[3];
    (pFVar7->ListenerToSoundDir).field0_0x0._s_0.X = *pdVar8;
    (pFVar7->ListenerToSoundDir).field0_0x0._s_0.Y = dVar1;
    dVar1 = pdVar8[4];
    dVar4 = pdVar8[5];
    (pFVar7->ListenerToSoundDir).field0_0x0._s_0.Z = dVar2;
    pFVar7->AttenuationDistance = dVar3;
    dVar2 = pdVar8[6];
    dVar3 = pdVar8[7];
    pFVar7->ListenerToSoundDistance = dVar1;
    pFVar7->ListenerToSoundDistanceForPanning = dVar4;
    dVar1 = pdVar8[8];
    dVar4 = pdVar8[9];
    (pFVar7->ListenerTransform).Rotation.XY.m128d_f64[0] = dVar2;
    (pFVar7->ListenerTransform).Rotation.XY.m128d_f64[1] = dVar3;
    dVar2 = pdVar8[10];
    dVar3 = pdVar8[0xb];
    (pFVar7->ListenerTransform).Rotation.ZW.m128d_f64[0] = dVar1;
    (pFVar7->ListenerTransform).Rotation.ZW.m128d_f64[1] = dVar4;
    dVar1 = pdVar8[0xc];
    dVar4 = pdVar8[0xd];
    (pFVar7->ListenerTransform).Translation.XY.m128d_f64[0] = dVar2;
    (pFVar7->ListenerTransform).Translation.XY.m128d_f64[1] = dVar3;
    dVar2 = pdVar8[0xe];
    dVar3 = pdVar8[0xf];
    (pFVar7->ListenerTransform).Translation.ZW.m128d_f64[0] = dVar1;
    (pFVar7->ListenerTransform).Translation.ZW.m128d_f64[1] = dVar4;
    (pFVar7->ListenerTransform).Scale3D.XY.m128d_f64[0] = dVar2;
    (pFVar7->ListenerTransform).Scale3D.XY.m128d_f64[1] = dVar3;
    lVar9 = lVar9 + -1;
    pFVar7 = (FAttenuationListenerData *)&(pFVar7->ListenerTransform).Scale3D.ZW;
    pdVar8 = pdVar8 + 0x10;
  } while (lVar9 != 0);
  return __return_storage_ptr__;
}

