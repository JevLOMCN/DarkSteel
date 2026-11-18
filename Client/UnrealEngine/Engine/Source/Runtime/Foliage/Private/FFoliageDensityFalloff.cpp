// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 4

// StaticStruct @ 145ecf150

UScriptStruct * __cdecl FFoliageDensityFalloff::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFoliageDensityFalloff.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Foliage();
    Z_Registration_Info_UScriptStruct_FFoliageDensityFalloff.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFoliageDensityFalloff,(UObject *)pUVar1,
                         L"FoliageDensityFalloff");
  }
  return Z_Registration_Info_UScriptStruct_FFoliageDensityFalloff.OuterSingleton;
}

// FFoliageDensityFalloff @ 145ed86c0

FFoliageDensityFalloff * __thiscall
FFoliageDensityFalloff::FFoliageDensityFalloff(FFoliageDensityFalloff *this)

{
  FRichCurve *this_00;
  undefined1 in_R9B;
  float in_XMM1_Da;
  FKeyHandle local_res8 [4];
  uint in_stack_ffffffffffffffe8;
  FKeyHandle FVar1;
  
  this->bUseFalloffCurve = false;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->FalloffCurve);
  this_00 = FRuntimeFloatCurve::GetRichCurve(&this->FalloffCurve);
  FKeyHandle::FKeyHandle(local_res8);
  FVar1.Index = in_stack_ffffffffffffffe8 & 0xffffff00;
  FRichCurve::AddKey(this_00,in_XMM1_Da,0.0,(bool)in_R9B,FVar1);
  FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(this_00,in_XMM1_Da,__real_3f800000,(bool)in_R9B,
                     (FKeyHandle)(FVar1.Index & 0xffffff00));
  return this;
}

// GetDensityFalloffValue @ 145ee3440

float __thiscall
FFoliageDensityFalloff::GetDensityFalloffValue
          (FFoliageDensityFalloff *this,TVector2<double> *param_1,TVector2<double> *param_2,
          double param_3)

{
  double dVar1;
  FRichCurve *this_00;
  float fVar2;
  double dVar3;
  double dVar4;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar5 [16];
  
  if (this->bUseFalloffCurve == false) {
    return __real_3f800000;
  }
  dVar3 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar1 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar4 = __real_3ff0000000000000;
  if (0.0 < param_3) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar1 * dVar1 + dVar3 * dVar3;
    auVar5 = sqrtpd(unaff_XMM6,auVar5);
    dVar4 = auVar5._0_8_ * (__real_3ff0000000000000 / param_3);
  }
  this_00 = FRuntimeFloatCurve::GetRichCurveConst(&this->FalloffCurve);
  fVar2 = (float)dVar4;
  if (__real_3f800000 <= (float)dVar4) {
    fVar2 = __real_3f800000;
  }
  fVar2 = FRichCurve::Eval(this_00,fVar2,0.0);
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  return fVar2;
}

// IsInstanceFiltered @ 145ee7680

bool __thiscall
FFoliageDensityFalloff::IsInstanceFiltered
          (FFoliageDensityFalloff *this,TVector2<double> *param_1,TVector2<double> *param_2,
          double param_3)

{
  code *pcVar1;
  double dVar2;
  float fVar3;
  bool bVar4;
  undefined1 uVar5;
  FRichCurve *this_00;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar14 [16];
  
  if (this->bUseFalloffCurve != false) {
    dVar12 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
    dVar2 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
    dVar13 = __real_3ff0000000000000;
    if (0.0 < param_3) {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = dVar2 * dVar2 + dVar12 * dVar12;
      auVar14 = sqrtpd(unaff_XMM6,auVar14);
      dVar13 = auVar14._0_8_ * (__real_3ff0000000000000 / param_3);
    }
    this_00 = FRuntimeFloatCurve::GetRichCurveConst(&this->FalloffCurve);
    fVar3 = __real_3f800000;
    fVar11 = (float)dVar13;
    if (__real_3f800000 <= (float)dVar13) {
      fVar11 = __real_3f800000;
    }
    fVar11 = FRichCurve::Eval(this_00,fVar11,0.0);
    if (fVar3 <= fVar11) {
      fVar11 = fVar3;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    if (((fVar11 < 0.0) || (fVar3 < fVar11)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("KeepPointProbability >= 0.f && KeepPointProbability <= 1.f",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Private\\InstancedFoliage.cpp"
                           ,0x226,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    if (fVar11 < fVar3) {
      dVar2 = (param_1->field0_0x0)._s_0.X;
      lVar8 = (longlong)ROUND(dVar2 + dVar2 + __real_3fe0000000000000);
      dVar2 = (param_1->field0_0x0)._s_0.Y;
      lVar7 = (longlong)ROUND(dVar2 + dVar2 + __real_3fe0000000000000);
      uVar10 = (int)(lVar7 >> 0x21) * 0x17 + (int)(lVar7 >> 1);
      uVar9 = ((int)(lVar8 >> 0x21) * 0x17 - uVar10) + (int)(lVar8 >> 1) ^ uVar10 >> 0xd;
      uVar6 = (-0x61c88647 - uVar9) - uVar10 ^ uVar9 << 8;
      uVar10 = (uVar10 - uVar6) - uVar9 ^ uVar6 >> 0xd;
      uVar9 = (uVar9 - uVar10) - uVar6 ^ uVar10 >> 0xc;
      uVar6 = (uVar6 - uVar9) - uVar10 ^ uVar9 << 0x10;
      uVar10 = (uVar10 - uVar6) - uVar9 ^ uVar6 >> 5;
      uVar9 = (uVar9 - uVar10) - uVar6 ^ uVar10 >> 3;
      uVar6 = (uVar6 - uVar9) - uVar10 ^ uVar9 << 10;
      return fVar11 < (float)(((uVar10 - uVar6) - uVar9 ^ uVar6 >> 0xf) * 0xbb38435 + 0x3619636b >>
                              9 | 0x3f800000) - fVar3;
    }
  }
  return false;
}

