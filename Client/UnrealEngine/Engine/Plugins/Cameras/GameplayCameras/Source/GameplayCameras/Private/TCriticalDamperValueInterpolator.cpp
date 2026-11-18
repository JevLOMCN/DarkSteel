// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 9

// OnReset @ 14d668e80

void __thiscall
UE::Cameras::TCriticalDamperValueInterpolator<double>::OnReset
          (TCriticalDamperValueInterpolator<double> *this,double param_1,double param_2)

{
  double dVar1;
  
  dVar1 = (double)this->_padding_ - (double)this->_padding_;
  FCriticalDamper::Reset
            (&this->Damper,
             (float)(double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff),
             (this->Damper).X0Derivative);
  return;
}

// OnReset @ 14d668eb0

void __thiscall
UE::Cameras::TCriticalDamperValueInterpolator<UE::Math::TVector2<double>_>::OnReset
          (TCriticalDamperValueInterpolator<UE::Math::TVector2<double>_> *this,
          TVector2<double> *param_1,TVector2<double> *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  
  dVar1 = (double)this->_padding_ - (double)this->_padding_;
  dVar3 = (double)this->_padding_ - (double)this->_padding_;
  auVar2._0_8_ = dVar1 * dVar1 + dVar3 * dVar3;
  auVar2._8_8_ = 0;
  auVar2 = sqrtpd(auVar2,auVar2);
  FCriticalDamper::Reset(&this->Damper,(float)auVar2._0_8_,(this->Damper).X0Derivative);
  return;
}

// OnReset @ 14d668ef0

void __thiscall
UE::Cameras::TCriticalDamperValueInterpolator<UE::Math::TVector<double>_>::OnReset
          (TCriticalDamperValueInterpolator<UE::Math::TVector<double>_> *this,
          TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  
  dVar1 = (double)this->_padding_ - (double)this->_padding_;
  dVar5 = (double)this->_padding_ - (double)this->_padding_;
  dVar2 = (double)this->_padding_ - (double)this->_padding_;
  auVar3._0_8_ = dVar2 * dVar2;
  auVar3._8_8_ = 0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar1 * dVar1 + dVar5 * dVar5 + auVar3._0_8_;
  auVar4 = sqrtpd(auVar3,auVar4);
  FCriticalDamper::Reset(&this->Damper,(float)auVar4._0_8_,(this->Damper).X0Derivative);
  return;
}

// OnRun @ 14d6697a0

void __thiscall
UE::Cameras::TCriticalDamperValueInterpolator<double>::OnRun
          (TCriticalDamperValueInterpolator<double> *this,FCameraValueInterpolationParams *param_1,
          FCameraValueInterpolationResult *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  UClass *pUVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  
  dVar1 = (double)this->_padding_ - (double)this->_padding_;
  uVar6 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar7 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (this->bIsFirstFrame == false) {
    fVar8 = (float)(double)CONCAT44(uVar7,uVar6);
    goto LAB_14d669854;
  }
  lVar5 = this->_padding_;
  if (lVar5 == 0) {
LAB_14d669823:
    lVar5 = 0;
  }
  else {
    pUVar4 = UCriticalDamperValueInterpolator::StaticClass();
    iVar3 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar3) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar4->_padding_)) goto LAB_14d669823;
  }
  fVar8 = (float)(double)CONCAT44(uVar7,uVar6);
  (this->Damper).W0 = *(float *)(lVar5 + 0x28);
  FCriticalDamper::Reset(&this->Damper,fVar8,0.0);
  this->bIsFirstFrame = false;
LAB_14d669854:
  fVar8 = FCriticalDamper::Update(&this->Damper,fVar8,param_1->DeltaTime);
  dVar1 = (double)this->_padding_;
  iVar3 = -1;
  if (dVar1 < (double)this->_padding_) {
    iVar3 = 1;
  }
  dVar2 = (double)CONCAT44(uVar7,uVar6) - (double)fVar8;
  *(bool *)&this->_padding_ = dVar2 <= __real_3e45798ee2308c3a;
  this->_padding_ = (longlong)((double)iVar3 * dVar2 + dVar1);
  return;
}

// OnRun @ 14d6698d0

void __thiscall
UE::Cameras::TCriticalDamperValueInterpolator<UE::Math::TVector2<double>_>::OnRun
          (TCriticalDamperValueInterpolator<UE::Math::TVector2<double>_> *this,
          FCameraValueInterpolationParams *param_1,FCameraValueInterpolationResult *param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  UClass *pUVar3;
  longlong lVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar10 [16];
  
  dVar9 = (double)this->_padding_ - (double)this->_padding_;
  dVar6 = (double)this->_padding_ - (double)this->_padding_;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar9 * dVar9 + dVar6 * dVar6;
  auVar10 = sqrtpd(unaff_XMM6,auVar10);
  dVar9 = auVar10._0_8_;
  if (this->bIsFirstFrame == false) goto LAB_14d66999b;
  lVar4 = this->_padding_;
  if (lVar4 == 0) {
LAB_14d66996a:
    lVar4 = 0;
  }
  else {
    pUVar3 = UCriticalDamperValueInterpolator::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_14d66996a;
  }
  (this->Damper).W0 = *(float *)(lVar4 + 0x28);
  FCriticalDamper::Reset(&this->Damper,(float)dVar9,0.0);
  this->bIsFirstFrame = false;
LAB_14d66999b:
  fVar5 = FCriticalDamper::Update(&this->Damper,(float)dVar9,param_1->DeltaTime);
  dVar8 = (double)this->_padding_ - (double)this->_padding_;
  dVar7 = (double)this->_padding_ - (double)this->_padding_;
  dVar9 = dVar9 - (double)fVar5;
  dVar6 = dVar8 * dVar8 + dVar7 * dVar7;
  if (dVar6 <= __real_3e45798ee0000000) {
    dVar6 = 0.0;
    dVar8 = 0.0;
  }
  else {
    dVar6 = __real_3ff0000000000000 / SQRT(dVar6);
    dVar8 = dVar6 * dVar8;
    dVar6 = dVar6 * dVar7;
  }
  dVar6 = dVar6 * dVar9 + (double)this->_padding_;
  dVar8 = dVar8 * dVar9 + (double)this->_padding_;
  *(bool *)&this->_padding_ = dVar9 <= __real_3e45798ee2308c3a;
  auVar2._8_4_ = SUB84(dVar8,0);
  auVar2._0_8_ = dVar6;
  auVar2._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  this->_padding_ = (longlong)dVar6;
  this->_padding_ = auVar2._8_8_;
  return;
}

// OnRun @ 14d669a60

void __thiscall
UE::Cameras::TCriticalDamperValueInterpolator<UE::Math::TVector<double>_>::OnRun
          (TCriticalDamperValueInterpolator<UE::Math::TVector<double>_> *this,
          FCameraValueInterpolationParams *param_1,FCameraValueInterpolationResult *param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  UClass *pUVar4;
  longlong lVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar14 [16];
  
  dVar13 = (double)this->_padding_ - (double)this->_padding_;
  dVar8 = (double)this->_padding_ - (double)this->_padding_;
  dVar7 = (double)this->_padding_ - (double)this->_padding_;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar13 * dVar13 + dVar8 * dVar8 + dVar7 * dVar7;
  auVar14 = sqrtpd(unaff_XMM6,auVar14);
  dVar13 = auVar14._0_8_;
  if (this->bIsFirstFrame == false) goto LAB_14d669b3c;
  lVar5 = this->_padding_;
  if (lVar5 == 0) {
LAB_14d669b08:
    lVar5 = 0;
  }
  else {
    pUVar4 = UCriticalDamperValueInterpolator::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_14d669b08;
  }
  (this->Damper).W0 = *(float *)(lVar5 + 0x28);
  FCriticalDamper::Reset(&this->Damper,(float)dVar13,0.0);
  this->bIsFirstFrame = false;
LAB_14d669b3c:
  fVar6 = FCriticalDamper::Update(&this->Damper,(float)dVar13,param_1->DeltaTime);
  dVar10 = (double)this->_padding_ - (double)this->_padding_;
  dVar12 = (double)this->_padding_ - (double)this->_padding_;
  dVar8 = (double)this->_padding_ - (double)this->_padding_;
  dVar13 = dVar13 - (double)fVar6;
  dVar7 = dVar8 * dVar8 + dVar12 * dVar12 + dVar10 * dVar10;
  uVar9 = dVar8;
  uVar11 = dVar10;
  uVar3 = dVar12;
  if ((dVar7 != __real_3ff0000000000000) &&
     (uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     __real_3e45798ee0000000 <= dVar7)) {
    dVar7 = __real_3ff0000000000000 / SQRT(dVar7);
    uVar9 = dVar8 * dVar7;
    uVar11 = dVar10 * dVar7;
    uVar3 = dVar12 * dVar7;
  }
  dVar7 = (double)uVar3 * dVar13 + (double)this->_padding_;
  dVar8 = (double)uVar9 * dVar13 + (double)this->_padding_;
  *(bool *)&this->_padding_ = dVar13 <= __real_3e45798ee2308c3a;
  auVar2._8_4_ = SUB84(dVar8,0);
  auVar2._0_8_ = dVar7;
  auVar2._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  this->_padding_ = (longlong)dVar7;
  this->_padding_ = auVar2._8_8_;
  this->_padding_ = (longlong)((double)uVar11 * dVar13 + (double)this->_padding_);
  return;
}

// OnSerialize @ 14d66dd90

void __thiscall
UE::Cameras::TCriticalDamperValueInterpolator<double>::OnSerialize
          (TCriticalDamperValueInterpolator<double> *this,
          FCameraValueInterpolatorSerializeParams *param_1,FArchive *param_2)

{
  Cameras::operator<<(param_2,&this->Damper);
  ::operator<<(param_2,&this->bIsFirstFrame);
  return;
}

// OnSerialize @ 14d66ddd0

void __thiscall
UE::Cameras::TCriticalDamperValueInterpolator<UE::Math::TVector2<double>_>::OnSerialize
          (TCriticalDamperValueInterpolator<UE::Math::TVector2<double>_> *this,
          FCameraValueInterpolatorSerializeParams *param_1,FArchive *param_2)

{
  Cameras::operator<<(param_2,&this->Damper);
  ::operator<<(param_2,&this->bIsFirstFrame);
  return;
}

// OnSerialize @ 14d66de10

void __thiscall
UE::Cameras::TCriticalDamperValueInterpolator<UE::Math::TVector<double>_>::OnSerialize
          (TCriticalDamperValueInterpolator<UE::Math::TVector<double>_> *this,
          FCameraValueInterpolatorSerializeParams *param_1,FArchive *param_2)

{
  Cameras::operator<<(param_2,&this->Damper);
  ::operator<<(param_2,&this->bIsFirstFrame);
  return;
}

