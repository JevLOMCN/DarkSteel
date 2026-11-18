// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// ~FSpatialDebugDrawInterface @ 14373f230

void __thiscall
Chaos::DebugDraw::FSpatialDebugDrawInterface::~FSpatialDebugDrawInterface
          (FSpatialDebugDrawInterface *this)

{
  return;
}

// Box @ 143755b40

void __thiscall
Chaos::DebugDraw::FSpatialDebugDrawInterface::Box
          (FSpatialDebugDrawInterface *this,TAABB<double,3> *param_1,TVector<double,3> *param_2,
          float param_3)

{
  int iVar1;
  FLinearColor *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  FColor_u_0 local_res8 [2];
  FLinearColor local_58;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_30;
  
  iVar1 = (this->Settings).DrawPriority;
  pFVar2 = FLinearColor::FLinearColor(&local_58,(TVector<double> *)param_2);
  fVar3 = (pFVar2->field0_0x0)._s_0.B;
  fVar5 = (pFVar2->field0_0x0)._s_0.R;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar6 = (pFVar2->field0_0x0)._s_0.A;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  fVar4 = (pFVar2->field0_0x0)._s_0.G;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (__real_3f800000 <= fVar3) {
    fVar3 = __real_3f800000;
  }
  if (__real_3f800000 <= fVar5) {
    fVar5 = __real_3f800000;
  }
  if (__real_3f800000 <= fVar6) {
    fVar6 = __real_3f800000;
  }
  if (__real_3f800000 <= fVar4) {
    fVar4 = __real_3f800000;
  }
  local_res8[0]._0_1_ = (undefined1)(int)(fVar3 * __real_437f0000 + __real_3f000000);
  local_48._s_0.Y =
       (*(double *)&(param_1->MMax).field_0x8 - *(double *)&(param_1->MMin).field_0x8) *
       __real_3fe0000000000000;
  local_48._s_0.Z =
       (*(double *)&(param_1->MMax).field_0x10 - *(double *)&(param_1->MMin).field_0x10) *
       __real_3fe0000000000000;
  local_30._s_0.Y = local_48._s_0.Y + *(double *)&(param_1->MMin).field_0x8;
  local_res8[0]._1_1_ = (undefined1)(int)(fVar4 * __real_437f0000 + __real_3f000000);
  local_res8[0]._2_1_ = (undefined1)(int)(fVar5 * __real_437f0000 + __real_3f000000);
  local_48._s_0.X =
       (*(double *)&param_1->MMax - *(double *)&param_1->MMin) * __real_3fe0000000000000;
  local_res8[0]._3_1_ = (undefined1)(int)(fVar6 * __real_437f0000 + __real_3f000000);
  local_30._s_0.Z = local_48._s_0.Z + *(double *)&(param_1->MMin).field_0x10;
  local_30._s_0.X = local_48._s_0.X + *(double *)&param_1->MMin;
  DrawDebugBox((TVector<double> *)&local_30._s_0,(TVector<double> *)&local_48._s_0,
               &UE::Math::TQuat<double>::Identity,(FColor *)&local_res8[0]._s_0,false,
               __real_bf800000,(uchar)iVar1,param_3);
  return;
}

// Line @ 143798500

void __thiscall
Chaos::DebugDraw::FSpatialDebugDrawInterface::Line
          (FSpatialDebugDrawInterface *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3,float param_4)

{
  int iVar1;
  FLinearColor *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  FColor_u_0 local_res8 [2];
  FLinearColor local_18;
  
  iVar1 = (this->Settings).DrawPriority;
  pFVar2 = FLinearColor::FLinearColor(&local_18,(TVector<double> *)param_3);
  fVar3 = (pFVar2->field0_0x0)._s_0.B;
  fVar6 = (pFVar2->field0_0x0)._s_0.A;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar4 = (pFVar2->field0_0x0)._s_0.G;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar5 = (pFVar2->field0_0x0)._s_0.R;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (__real_3f800000 <= fVar3) {
    fVar3 = __real_3f800000;
  }
  if (__real_3f800000 <= fVar6) {
    fVar6 = __real_3f800000;
  }
  if (__real_3f800000 <= fVar4) {
    fVar4 = __real_3f800000;
  }
  if (__real_3f800000 <= fVar5) {
    fVar5 = __real_3f800000;
  }
  local_res8[0]._0_1_ = (undefined1)(int)(fVar3 * __real_437f0000 + __real_3f000000);
  local_res8[0]._1_1_ = (undefined1)(int)(fVar4 * __real_437f0000 + __real_3f000000);
  local_res8[0]._2_1_ = (undefined1)(int)(fVar5 * __real_437f0000 + __real_3f000000);
  local_res8[0]._3_1_ = (undefined1)(int)(fVar6 * __real_437f0000 + __real_3f000000);
  DrawDebugLine((TVector<double> *)param_1,(TVector<double> *)param_2,(FColor *)&local_res8[0]._s_0,
                false,__real_bf800000,(uchar)iVar1,param_4);
  return;
}

