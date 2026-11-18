// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147267370

UScriptStruct * __cdecl FQuaternionAnimationAttribute::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FQuaternionAnimationAttribute.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FQuaternionAnimationAttribute.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FQuaternionAnimationAttribute,(UObject *)pUVar1,
                         L"QuaternionAnimationAttribute");
  }
  return Z_Registration_Info_UScriptStruct_FQuaternionAnimationAttribute.OuterSingleton;
}

// Interpolate @ 1475666b0

void __thiscall
FQuaternionAnimationAttribute::Interpolate
          (FQuaternionAnimationAttribute *this,FQuaternionAnimationAttribute *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar10;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint uVar17;
  uint uVar18;
  
  dVar6 = __real_bff0000000000000;
  if (0.0 <= (param_1->Value).Y * (this->Value).Y + (param_1->Value).X * (this->Value).X +
             (param_1->Value).W * (this->Value).W + (this->Value).Z * (param_1->Value).Z) {
    dVar6 = __real_3ff0000000000000;
  }
  dVar7 = (double)param_2;
  dVar6 = (double)(__real_3f800000 - param_2) * dVar6;
  dVar1 = dVar7 * (param_1->Value).Z + dVar6 * (this->Value).Z;
  dVar2 = dVar7 * (param_1->Value).W + dVar6 * (this->Value).W;
  dVar11 = dVar6 * (this->Value).X + dVar7 * (param_1->Value).X;
  dVar12 = dVar6 * (this->Value).Y + dVar7 * (param_1->Value).Y;
  auVar15._8_4_ = SUB84(dVar2,0);
  auVar15._0_8_ = dVar1;
  auVar15._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  dVar7 = dVar1 * dVar1 + dVar11 * dVar11;
  dVar10 = auVar15._8_8_ * dVar2 + dVar12 * dVar12;
  dVar6 = dVar10 + dVar7;
  dVar7 = dVar7 + dVar10;
  auVar14._8_4_ = SUB84(dVar7,0);
  auVar14._0_8_ = dVar6;
  auVar14._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar14 = sqrtpd(in_XMM4,auVar14);
  uVar4 = -(ulonglong)(__real_3e45798ee0000000 <= dVar6);
  uVar5 = -(ulonglong)(__real_3e45798ee0000000 <= dVar7);
  uVar17 = (uint)(uVar4 >> 0x20);
  uVar18 = (uint)(uVar5 >> 0x20);
  auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar14);
  auVar16._0_8_ = uVar4 & (ulonglong)(auVar15._0_8_ * dVar11);
  uVar3 = uVar5 & (ulonglong)(auVar15._8_8_ * dVar12);
  auVar16._8_4_ = (undefined4)uVar3;
  auVar16._12_4_ = (undefined4)(uVar3 >> 0x20);
  auVar8._0_4_ = ~(uint)uVar4 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar8._4_4_ = ~uVar17 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                                 0x20);
  auVar8._8_4_ = ~(uint)uVar5 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar8._12_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar14);
  auVar13._0_4_ = ~(uint)uVar4 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar13._4_4_ =
       ~uVar17 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar13._8_4_ = ~(uint)uVar5 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar13._12_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar9._0_8_ = (ulonglong)(auVar14._0_8_ * dVar1) & uVar4;
  uVar5 = (ulonglong)(auVar14._8_8_ * dVar2) & uVar5;
  auVar9._8_4_ = (undefined4)uVar5;
  auVar9._12_4_ = (undefined4)(uVar5 >> 0x20);
  (this->Value).X = (double)SUB168(auVar16 | auVar8,0);
  (this->Value).Y = (double)SUB168(auVar16 | auVar8,8);
  (this->Value).Z = (double)SUB168(auVar13 | auVar9,0);
  (this->Value).W = (double)SUB168(auVar13 | auVar9,8);
  return;
}

