// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// FPCGNativePointPropertyEnumConstAccessor<1> @ 1497ddbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

FPCGNativePointPropertyEnumConstAccessor<1> * __thiscall
FPCGNativePointPropertyEnumConstAccessor<1>::FPCGNativePointPropertyEnumConstAccessor<1>
          (FPCGNativePointPropertyEnumConstAccessor<1> *this,UPCGBasePointData *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_b8 [32];
  TTransform<double> *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong lStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7__FPCGNativePointPropertyEnumConstAccessor__00__6B_;
  *(undefined2 *)((longlong)&this->_padding_ + 2) = 8;
  (this->ValueRange).ElementView.FirstElementPtr = (TTransform<double> *)0x0;
  (this->ValueRange).ElementView.BytesBetweenElements = 0;
  (this->ValueRange).ElementView.NumElements = 0;
  (this->ValueRange).NumElements = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ValueRange).StubValue.Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ValueRange).StubValue.Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ValueRange).StubValue.Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ValueRange).StubValue.Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->ValueRange).StubValue.Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ValueRange).StubValue.Scale3D.ZW.m128d_f64 = auVar8;
  (**(code **)(param_1->_padding_ + 0x500))(param_1,&local_98);
  (this->ValueRange).ElementView.FirstElementPtr = local_98;
  (this->ValueRange).ElementView.BytesBetweenElements = (undefined4)uStack_90;
  (this->ValueRange).ElementView.NumElements = uStack_90._4_4_;
  *(undefined8 *)&(this->ValueRange).NumElements = local_88;
  (this->ValueRange)._padding_ = lStack_80;
  (this->ValueRange).StubValue.Rotation.XY.m128d_f64[0] = local_78;
  (this->ValueRange).StubValue.Rotation.XY.m128d_f64[1] = dStack_70;
  (this->ValueRange).StubValue.Rotation.ZW.m128d_f64[0] = local_68;
  (this->ValueRange).StubValue.Rotation.ZW.m128d_f64[1] = dStack_60;
  (this->ValueRange).StubValue.Translation.XY.m128d_f64[0] = local_58;
  (this->ValueRange).StubValue.Translation.XY.m128d_f64[1] = dStack_50;
  (this->ValueRange).StubValue.Translation.ZW.m128d_f64[0] = local_48;
  (this->ValueRange).StubValue.Translation.ZW.m128d_f64[1] = dStack_40;
  (this->ValueRange).StubValue.Scale3D.XY.m128d_f64[0] = local_38;
  (this->ValueRange).StubValue.Scale3D.XY.m128d_f64[1] = dStack_30;
  (this->ValueRange).StubValue.Scale3D.ZW.m128d_f64[0] = local_28;
  (this->ValueRange).StubValue.Scale3D.ZW.m128d_f64[1] = dStack_20;
  return this;
}

// FPCGNativePointPropertyEnumConstAccessor<16> @ 1497ddd10

FPCGNativePointPropertyEnumConstAccessor<16> * __thiscall
FPCGNativePointPropertyEnumConstAccessor<16>::FPCGNativePointPropertyEnumConstAccessor<16>
          (FPCGNativePointPropertyEnumConstAccessor<16> *this,UPCGBasePointData *param_1)

{
  TVector4<double> *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong lStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7__FPCGNativePointPropertyEnumConstAccessor__0BA___6B_;
  *(undefined2 *)((longlong)&this->_padding_ + 2) = 6;
  (this->ValueRange).ElementView.FirstElementPtr = (TVector4<double> *)0x0;
  (this->ValueRange).ElementView.BytesBetweenElements = 0;
  (this->ValueRange).ElementView.NumElements = 0;
  (this->ValueRange).NumElements = 0;
  (this->ValueRange).StubValue.field0_0x0._s_0.X = 0.0;
  (this->ValueRange).StubValue.field0_0x0._s_0.Y = 0.0;
  (this->ValueRange).StubValue.field0_0x0._s_0.Z = 0.0;
  (this->ValueRange).StubValue.field0_0x0._s_0.W = 1.0;
  (**(code **)(param_1->_padding_ + 0x520))(param_1,&local_48);
  (this->ValueRange).ElementView.FirstElementPtr = local_48;
  (this->ValueRange).ElementView.BytesBetweenElements = (undefined4)uStack_40;
  (this->ValueRange).ElementView.NumElements = uStack_40._4_4_;
  *(undefined8 *)&(this->ValueRange).NumElements = local_38;
  (this->ValueRange)._padding_ = lStack_30;
  (this->ValueRange).StubValue.field0_0x0._s_0.X = local_28;
  (this->ValueRange).StubValue.field0_0x0._s_0.Y = dStack_20;
  (this->ValueRange).StubValue.field0_0x0._s_0.Z = local_18;
  (this->ValueRange).StubValue.field0_0x0._s_0.W = dStack_10;
  return this;
}

