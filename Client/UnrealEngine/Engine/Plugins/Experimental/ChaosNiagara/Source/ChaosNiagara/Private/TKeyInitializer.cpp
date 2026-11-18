// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosNiagara
// Functions: 1

// operator<unsigned___int64,FNDIGeometryCollectionData>_TTuple<unsigned___int64,FNDIGeometryCollectionData> @ 14e971a10

TTuple<unsigned___int64,FNDIGeometryCollectionData> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,FNDIGeometryCollectionData>_TTuple<unsigned___int64,FNDIGeometryCollectionData>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,FNDIGeometryCollectionData> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_50;
  
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar7._0_8_ = (double)fVar3;
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar8._0_8_ = (double)fVar6;
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)fVar1;
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  auVar12._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar12._0_8_ = (double)fVar2;
  auVar12._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  auVar9._0_8_ = (double)fVar4;
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  auVar10._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  auVar10._0_8_ = (double)fVar5;
  auVar10._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  uStack_a0 = auVar7._8_8_;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  uStack_90 = auVar8._8_8_;
  *(double *)&__return_storage_ptr__->field_0x20 = (double)fVar3;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = uStack_a0;
  uStack_80 = auVar11._8_8_;
  *(double *)&__return_storage_ptr__->field_0x30 = (double)fVar6;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = uStack_90;
  uStack_70 = auVar9._8_8_;
  *(double *)&__return_storage_ptr__->field_0x40 = (double)fVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = uStack_80;
  uStack_60 = auVar12._8_8_;
  *(double *)&__return_storage_ptr__->field_0x50 = (double)fVar4;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = uStack_70;
  uStack_50 = auVar10._8_8_;
  *(double *)&__return_storage_ptr__->field_0x60 = (double)fVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = uStack_60;
  *(double *)&__return_storage_ptr__->field_0x70 = (double)fVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x78 = uStack_50;
  *(undefined8 *)&__return_storage_ptr__->field_0x80 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x88 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x90 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x98 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0xa0 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0xa8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0xb0 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0xb8 = 0;
  return __return_storage_ptr__;
}

