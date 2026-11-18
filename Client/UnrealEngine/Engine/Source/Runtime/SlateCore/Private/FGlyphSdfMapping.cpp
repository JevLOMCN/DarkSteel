// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// SetSpread @ 1424a7400

void __thiscall
SdfUtils::FGlyphSdfMapping::SetSpread
          (FGlyphSdfMapping *this,ushort param_1,float param_2,float param_3)

{
  double dVar1;
  
  dVar1 = (double)(float)((uint)((float)param_1 * param_2) ^ __xmm_80000000800000008000000080000000)
  ;
  (this->MsdfgenTransformation).distanceMapping.scale =
       __real_3ff0000000000000 / ((double)((float)param_1 * param_3) - dVar1);
  (this->MsdfgenTransformation).distanceMapping.translate =
       (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000);
  return;
}

// Wrap @ 1424ae570

void __thiscall
SdfUtils::FGlyphSdfMapping::Wrap
          (FGlyphSdfMapping *this,Shape *param_1,Bounds *param_2,ushort param_3,int param_4,
          float param_5,double param_6)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  
  pdVar1 = &param_2->t;
  fVar11 = (float)param_4 / (float)param_3;
  dVar5 = (double)((float)param_3 * param_5);
  param_2->l = param_2->l - dVar5;
  param_2->b = param_2->b - dVar5;
  param_2->r = dVar5 + param_2->r;
  *pdVar1 = dVar5 + *pdVar1;
  if ((param_1 != (Shape *)0x0) && (0.0 < param_6)) {
    SlateMsdfgen::msdfgen::Shape::boundMiters
              (param_1,&param_2->l,&param_2->b,&param_2->r,pdVar1,dVar5,param_6,1);
  }
  param_2->l = param_2->l * (double)fVar11;
  param_2->b = param_2->b * (double)fVar11;
  dVar5 = (double)fVar11 * param_2->r;
  dVar6 = (double)fVar11 * param_2->t;
  auVar2._8_4_ = SUB84(dVar6,0);
  auVar2._0_8_ = dVar5;
  auVar2._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  param_2->r = dVar5;
  dVar5 = __real_3ff0000000000000;
  param_2->t = (double)auVar2._8_8_;
  dVar8 = param_2->l - __real_3fe0000000000000;
  dVar10 = param_2->r + __real_3fe0000000000000;
  dVar6 = param_2->b - __real_3fe0000000000000;
  dVar7 = *pdVar1 + __real_3fe0000000000000;
  if (dVar10 < dVar8) {
    dVar8 = 0.0;
    dVar10 = 0.0;
  }
  if (dVar7 < dVar6) {
    dVar6 = 0.0;
    dVar7 = 0.0;
  }
  dVar9 = (dVar8 + dVar8) - __real_3fe0000000000000;
  dVar8 = __real_bfe0000000000000 - (dVar10 + dVar10);
  dVar7 = __real_bfe0000000000000 - (dVar7 + dVar7);
  iVar3 = (int)ROUND((dVar6 + dVar6) - __real_3fe0000000000000) >> 1;
  *(int *)((longlong)&(this->SdfBounds).field0_0x0 + 4) = iVar3;
  dVar6 = (double)fVar11;
  *(int *)((longlong)&(this->SdfBounds).field0_0x0 + 8) = -((int)ROUND(dVar8) >> 1);
  *(int *)((longlong)&(this->SdfBounds).field0_0x0 + 0xc) = -((int)ROUND(dVar7) >> 1);
  iVar4 = (int)ROUND(dVar9) >> 1;
  *(int *)&(this->SdfBounds).field0_0x0 = iVar4;
  (this->MsdfgenTransformation)._padding_ = (longlong)dVar6;
  (this->MsdfgenTransformation)._padding_ = (longlong)dVar6;
  (this->MsdfgenTransformation)._padding_ = (longlong)((double)-iVar4 * (dVar5 / dVar6));
  (this->MsdfgenTransformation)._padding_ = (longlong)((double)-iVar3 * (dVar5 / dVar6));
  (this->MsdfgenTransformation).distanceMapping.scale = 0.5;
  (this->MsdfgenTransformation).distanceMapping.translate = 1.0;
  return;
}

