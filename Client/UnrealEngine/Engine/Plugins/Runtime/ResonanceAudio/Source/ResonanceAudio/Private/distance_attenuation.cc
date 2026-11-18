// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 4

// ComputeLinearDistanceAttenuation @ 14f072e60

float __cdecl
vraudio::ComputeLinearDistanceAttenuation
          (WorldPosition *param_1,WorldPosition *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)&param_1->field_0x4 - *(float *)&param_2->field_0x4;
  fVar1 = *(float *)&param_1->field_0x8 - *(float *)&param_2->field_0x8;
  fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 +
               (*(float *)param_1 - *(float *)param_2) * (*(float *)param_1 - *(float *)param_2));
  if (param_4 < fVar1) {
    return 0.0;
  }
  if (param_3 <= __real_3f800000) {
    param_3 = __real_3f800000;
  }
  if ((param_3 < fVar1) && (__real_358637bd < param_4 - param_3)) {
    return (param_4 - fVar1) / (param_4 - param_3);
  }
  return __real_3f800000;
}

// ComputeLogarithmicDistanceAttenuation @ 14f072ee0

float __cdecl
vraudio::ComputeLogarithmicDistanceAttenuation
          (WorldPosition *param_1,WorldPosition *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)&param_1->field_0x4 - *(float *)&param_2->field_0x4;
  fVar1 = *(float *)&param_1->field_0x8 - *(float *)&param_2->field_0x8;
  fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 +
               (*(float *)param_1 - *(float *)param_2) * (*(float *)param_1 - *(float *)param_2));
  if (param_4 < fVar1) {
    return 0.0;
  }
  if (param_3 <= __real_3f800000) {
    param_3 = __real_3f800000;
  }
  if ((param_3 < fVar1) && (__real_358637bd < param_4 - param_3)) {
    fVar2 = __real_3f800000 / ((param_4 - param_3) + __real_3f800000);
    return (__real_3f800000 / ((fVar1 - param_3) + __real_3f800000) - fVar2) /
           (__real_3f800000 - fVar2);
  }
  return __real_3f800000;
}

// ComputeNearFieldEffectGain @ 14f072fa0

float __cdecl vraudio::ComputeNearFieldEffectGain(WorldPosition *param_1,WorldPosition *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)&param_1->field_0x4 - *(float *)&param_2->field_0x4;
  fVar1 = *(float *)&param_1->field_0x8 - *(float *)&param_2->field_0x8;
  fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 +
               (*(float *)param_1 - *(float *)param_2) * (*(float *)param_1 - *(float *)param_2));
  if (fVar1 < __real_3f800000) {
    if (fVar1 <= __real_3dcccccd) {
      fVar1 = __real_3dcccccd;
    }
    return __real_3f800000 / fVar1 - __real_3f800000;
  }
  return 0.0;
}

// UpdateAttenuationParameters @ 14f073000

void __cdecl
vraudio::UpdateAttenuationParameters
          (float param_1,float param_2,float param_3,WorldPosition *param_4,
          SourceParameters *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = param_5->minimum_distance;
  fVar6 = param_5->maximum_distance;
  fVar4 = __real_3f800000;
  if (param_5->distance_rolloff_model == kLogarithmic) {
    fVar3 = *(float *)&param_4->field_0x4 -
            *(float *)&(param_5->object_transform).position.field_0x4;
    fVar2 = *(float *)&param_4->field_0x8 -
            *(float *)&(param_5->object_transform).position.field_0x8;
    fVar1 = *(float *)param_4 - *(float *)&(param_5->object_transform).position;
    fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    if (fVar1 <= fVar6) {
      if (fVar5 <= __real_3f800000) {
        fVar5 = __real_3f800000;
      }
      if ((fVar5 < fVar1) && (__real_358637bd < fVar6 - fVar5)) {
        fVar6 = __real_3f800000 / ((fVar6 - fVar5) + __real_3f800000);
        fVar4 = (__real_3f800000 / ((fVar1 - fVar5) + __real_3f800000) - fVar6) /
                (__real_3f800000 - fVar6);
      }
      goto LAB_14f073142;
    }
  }
  else {
    if (param_5->distance_rolloff_model != kLinear) {
      fVar4 = param_5->distance_attenuation;
      goto LAB_14f073142;
    }
    fVar2 = *(float *)&param_4->field_0x8 -
            *(float *)&(param_5->object_transform).position.field_0x8;
    fVar3 = *(float *)&param_4->field_0x4 -
            *(float *)&(param_5->object_transform).position.field_0x4;
    fVar1 = *(float *)param_4 - *(float *)&(param_5->object_transform).position;
    fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    if (fVar1 <= fVar6) {
      if (fVar5 <= __real_3f800000) {
        fVar5 = __real_3f800000;
      }
      if ((fVar5 < fVar1) && (__real_358637bd < fVar6 - fVar5)) {
        fVar4 = (fVar6 - fVar1) / (fVar6 - fVar5);
      }
      goto LAB_14f073142;
    }
  }
  fVar4 = 0.0;
LAB_14f073142:
  fVar6 = param_1 * param_5->gain;
  fVar5 = param_5->room_effects_gain;
  param_5->attenuations[0] = fVar6;
  param_5->attenuations[1] = fVar6 * fVar4;
  param_5->attenuations[2] = fVar5 * fVar6 * fVar4 * param_2;
  param_5->attenuations[3] = fVar5 * fVar6 * param_3;
  return;
}

