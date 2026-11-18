// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FullUpdate @ 14883b720

void __thiscall
FBounds4::FullUpdate
          (FBounds4 *this,int param_1,TVector<double> *param_2,TVector<double> *param_3,
          float param_4,float param_5)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  
  if (3 < (uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < 4",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceView.cpp"
                       ,0x49,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  dVar1 = (param_2->field0_0x0)._s_0.X;
  if ((uint)param_1 < 4) {
    (this->OriginX).field0_0x0.XYZW[param_1] = dVar1;
    (this->OriginY).field0_0x0.XYZW[param_1] = (param_2->field0_0x0)._s_0.Y;
    (this->OriginZ).field0_0x0.XYZW[param_1] = (param_2->field0_0x0)._s_0.Z;
    (this->RangeOriginX).field0_0x0.XYZW[param_1] = (param_2->field0_0x0)._s_0.X;
    (this->RangeOriginY).field0_0x0.XYZW[param_1] = (param_2->field0_0x0)._s_0.Y;
    (this->RangeOriginZ).field0_0x0.XYZW[param_1] = (param_2->field0_0x0)._s_0.Z;
    (this->ExtentX).field0_0x0.XYZW[param_1] = (float)(param_3->field0_0x0)._s_0.X;
    (this->ExtentY).field0_0x0.XYZW[param_1] = (float)(param_3->field0_0x0)._s_0.Y;
    (this->ExtentZ).field0_0x0.XYZW[param_1] = (float)(param_3->field0_0x0)._s_0.Z;
    (this->RadiusOrComponentScale).field0_0x0.XYZW[param_1] = param_4;
    (this->PackedRelativeBox).field0_0x0.XYZW[param_1] = 0xffff0000;
    (this->MinDistanceSq).field0_0x0.XYZW[param_1] = 0.0;
    (this->MinRangeSq).field0_0x0.XYZW[param_1] = 0.0;
    (this->MaxRangeSq).field0_0x0.XYZW[param_1] = 3.4028235e+38;
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->OriginX).field0_0x0.XYZW[param_1] = dVar1;
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->OriginY).field0_0x0.XYZW[param_1] = dVar1;
    dVar1 = (param_2->field0_0x0)._s_0.Z;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->OriginZ).field0_0x0.XYZW[param_1] = dVar1;
    dVar1 = (param_2->field0_0x0)._s_0.X;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->RangeOriginX).field0_0x0.XYZW[param_1] = dVar1;
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->RangeOriginY).field0_0x0.XYZW[param_1] = dVar1;
    dVar1 = (param_2->field0_0x0)._s_0.Z;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->RangeOriginZ).field0_0x0.XYZW[param_1] = dVar1;
    dVar1 = (param_3->field0_0x0)._s_0.X;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->ExtentX).field0_0x0.XYZW[param_1] = (float)dVar1;
    dVar1 = (param_3->field0_0x0)._s_0.Y;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->ExtentY).field0_0x0.XYZW[param_1] = (float)dVar1;
    dVar1 = (param_3->field0_0x0)._s_0.Z;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->ExtentZ).field0_0x0.XYZW[param_1] = (float)dVar1;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->RadiusOrComponentScale).field0_0x0.XYZW[param_1] = param_4;
    (this->PackedRelativeBox).field0_0x0.XYZW[param_1] = 0xffff0000;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->MinDistanceSq).field0_0x0.XYZW[param_1] = 0.0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->MinRangeSq).field0_0x0.XYZW[param_1] = 0.0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->MaxRangeSq).field0_0x0.XYZW[param_1] = __real_7f7fffff;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->LastRenderTime).field0_0x0.XYZW[param_1] = param_5;
  return;
}

// Set @ 148857d40

void __thiscall
FBounds4::Set(FBounds4 *this,int param_1,TBoxSphereBounds<double,double> *param_2,uint param_3,
             float param_4,TVector<double> *param_5,float param_6,float param_7,float param_8)

{
  Set(this,param_1,param_2,param_3,(float)param_2->SphereRadius,param_4,param_5,param_6,param_7,
      param_8);
  return;
}

// Set @ 148857db0

void __thiscall
FBounds4::Set(FBounds4 *this,int param_1,TBoxSphereBounds<double,double> *param_2,uint param_3,
             float param_4,float param_5,TVector<double> *param_6,float param_7,float param_8,
             float param_9)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  
  if (3 < (uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < 4",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceView.cpp"
                       ,0x14,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  dVar1 = (param_2->Origin).field0_0x0._s_0.X;
  if ((uint)param_1 < 4) {
    (this->OriginX).field0_0x0.XYZW[param_1] = dVar1;
    (this->OriginY).field0_0x0.XYZW[param_1] = (param_2->Origin).field0_0x0._s_0.Y;
    (this->OriginZ).field0_0x0.XYZW[param_1] = (param_2->Origin).field0_0x0._s_0.Z;
    (this->RangeOriginX).field0_0x0.XYZW[param_1] = (param_6->field0_0x0)._s_0.X;
    (this->RangeOriginY).field0_0x0.XYZW[param_1] = (param_6->field0_0x0)._s_0.Y;
    (this->RangeOriginZ).field0_0x0.XYZW[param_1] = (param_6->field0_0x0)._s_0.Z;
    (this->ExtentX).field0_0x0.XYZW[param_1] = (float)(param_2->BoxExtent).field0_0x0._s_0.X;
    (this->ExtentY).field0_0x0.XYZW[param_1] = (float)(param_2->BoxExtent).field0_0x0._s_0.Y;
    (this->ExtentZ).field0_0x0.XYZW[param_1] = (float)(param_2->BoxExtent).field0_0x0._s_0.Z;
    (this->RadiusOrComponentScale).field0_0x0.XYZW[param_1] = param_4;
    (this->PackedRelativeBox).field0_0x0.XYZW[param_1] = param_3;
    (this->MinDistanceSq).field0_0x0.XYZW[param_1] = param_7;
    (this->MinRangeSq).field0_0x0.XYZW[param_1] = param_8;
    (this->MaxRangeSq).field0_0x0.XYZW[param_1] = param_9;
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->OriginX).field0_0x0.XYZW[param_1] = dVar1;
    dVar1 = (param_2->Origin).field0_0x0._s_0.Y;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->OriginY).field0_0x0.XYZW[param_1] = dVar1;
    dVar1 = (param_2->Origin).field0_0x0._s_0.Z;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->OriginZ).field0_0x0.XYZW[param_1] = dVar1;
    dVar1 = (param_6->field0_0x0)._s_0.X;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->RangeOriginX).field0_0x0.XYZW[param_1] = dVar1;
    dVar1 = (param_6->field0_0x0)._s_0.Y;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->RangeOriginY).field0_0x0.XYZW[param_1] = dVar1;
    dVar1 = (param_6->field0_0x0)._s_0.Z;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->RangeOriginZ).field0_0x0.XYZW[param_1] = dVar1;
    dVar1 = (param_2->BoxExtent).field0_0x0._s_0.X;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->ExtentX).field0_0x0.XYZW[param_1] = (float)dVar1;
    dVar1 = (param_2->BoxExtent).field0_0x0._s_0.Y;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->ExtentY).field0_0x0.XYZW[param_1] = (float)dVar1;
    dVar1 = (param_2->BoxExtent).field0_0x0._s_0.Z;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->ExtentZ).field0_0x0.XYZW[param_1] = (float)dVar1;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->RadiusOrComponentScale).field0_0x0.XYZW[param_1] = param_4;
    (this->PackedRelativeBox).field0_0x0.XYZW[param_1] = param_3;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->MinDistanceSq).field0_0x0.XYZW[param_1] = param_7;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->MinRangeSq).field0_0x0.XYZW[param_1] = param_8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->MaxRangeSq).field0_0x0.XYZW[param_1] = param_9;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                       ,0x310,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->LastRenderTime).field0_0x0.XYZW[param_1] = param_5;
  return;
}

// UnpackBounds @ 14885e320

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FBounds4::UnpackBounds(FBounds4 *this,int param_1,UPrimitiveComponent *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  UPrimitiveComponent *pUVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  TVector<double>_u_0 local_c8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined1 auVar11 [16];
  
  if ((param_2 == (UPrimitiveComponent *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Component",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceView.cpp"
                         ,0x29,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((3 < (uint)param_1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceView.cpp"
                         ,0x2a,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar2 = (this->PackedRelativeBox).field0_0x0.XYZW[param_1];
  if (uVar2 != 0) {
    puVar1 = &param_2->field_0x110;
    UnpackRelativeBox((TBoxSphereBounds<double,double> *)puVar1,uVar2,
                      (TBoxSphereBounds<double,double> *)&local_c8._s_0);
    if (((param_2 == (UPrimitiveComponent *)0x0) || ((param_2->field_0x98 & 1) == 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Component && Component->IsRegistered()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceView.cpp"
                           ,0xf0,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar6 = UPrimitiveComponent::GetLODParentPrimitive(param_2);
    dVar12 = local_c8._s_0.X - *(double *)puVar1;
    dVar10 = local_c8._s_0.Y - *(double *)&param_2->field_0x118;
    fVar15 = param_2->MinDrawDistance;
    dVar7 = local_c8._s_0.Z - *(double *)&param_2->field_0x120;
    auVar8._0_8_ = dVar7 * dVar7;
    auVar8._8_8_ = 0;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = dVar10 * dVar10 + dVar12 * dVar12 + auVar8._0_8_;
    auVar9 = sqrtpd(auVar8,auVar9);
    fVar13 = fVar15;
    if (fVar15 <= 0.0) {
      fVar13 = 0.0;
    }
    dVar10 = ((double)fVar15 - auVar9._0_8_) - local_98;
    if (dVar10 <= 0.0) {
      dVar10 = 0.0;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = dVar10;
    fVar14 = (float)dVar10 * (float)dVar10;
    fVar15 = __real_7f7fffff;
    if (pUVar6 != (UPrimitiveComponent *)0x0) {
      dVar7 = *(double *)&param_2->field_0x118 - *(double *)&pUVar6->field_0x118;
      dVar12 = *(double *)puVar1 - *(double *)&pUVar6->field_0x110;
      dVar10 = *(double *)&param_2->field_0x120 - *(double *)&pUVar6->field_0x120;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = dVar7 * dVar7 + dVar12 * dVar12 + dVar10 * dVar10;
      auVar9 = sqrtpd(auVar11,auVar4);
      fVar15 = (float)(auVar9._0_8_ +
                      (double)((float)*(double *)&pUVar6->field_0x140 + pUVar6->MinDrawDistance));
      fVar15 = fVar15 * fVar15;
    }
    if ((uint)param_1 < 4) {
      (this->OriginX).field0_0x0.XYZW[param_1] = local_c8._s_0.X;
      (this->OriginY).field0_0x0.XYZW[param_1] = local_c8._s_0.Y;
      (this->OriginZ).field0_0x0.XYZW[param_1] = local_c8._s_0.Z;
      (this->RangeOriginX).field0_0x0.XYZW[param_1] = *(double *)puVar1;
      (this->RangeOriginY).field0_0x0.XYZW[param_1] = *(double *)&param_2->field_0x118;
      (this->RangeOriginZ).field0_0x0.XYZW[param_1] = *(double *)&param_2->field_0x120;
      (this->ExtentX).field0_0x0.XYZW[param_1] = (float)local_b0;
      (this->ExtentY).field0_0x0.XYZW[param_1] = (float)local_a8;
      (this->ExtentZ).field0_0x0.XYZW[param_1] = (float)local_a0;
      (this->RadiusOrComponentScale).field0_0x0.XYZW[param_1] = (float)local_98;
      (this->PackedRelativeBox).field0_0x0.XYZW[param_1] = 0xffff0000;
      (this->MinDistanceSq).field0_0x0.XYZW[param_1] = fVar14;
      (this->MinRangeSq).field0_0x0.XYZW[param_1] = fVar13 * fVar13;
    }
    else {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                         ,0x310,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->OriginX).field0_0x0.XYZW[param_1] = local_c8._s_0.X;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                         ,0x310,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->OriginY).field0_0x0.XYZW[param_1] = local_c8._s_0.Y;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                         ,0x310,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->OriginZ).field0_0x0.XYZW[param_1] = local_c8._s_0.Z;
      dVar10 = *(double *)puVar1;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                         ,0x310,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->RangeOriginX).field0_0x0.XYZW[param_1] = dVar10;
      dVar10 = *(double *)&param_2->field_0x118;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                         ,0x310,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->RangeOriginY).field0_0x0.XYZW[param_1] = dVar10;
      dVar10 = *(double *)&param_2->field_0x120;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                         ,0x310,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->RangeOriginZ).field0_0x0.XYZW[param_1] = dVar10;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                         ,0x310,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->ExtentX).field0_0x0.XYZW[param_1] = (float)local_b0;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                         ,0x310,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->ExtentY).field0_0x0.XYZW[param_1] = (float)local_a8;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                         ,0x310,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->ExtentZ).field0_0x0.XYZW[param_1] = (float)local_a0;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                         ,0x310,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->RadiusOrComponentScale).field0_0x0.XYZW[param_1] = (float)local_98;
      (this->PackedRelativeBox).field0_0x0.XYZW[param_1] = 0xffff0000;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                         ,0x310,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->MinDistanceSq).field0_0x0.XYZW[param_1] = fVar14;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                         ,0x310,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->MinRangeSq).field0_0x0.XYZW[param_1] = fVar13 * fVar13;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                         ,0x310,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (this->MaxRangeSq).field0_0x0.XYZW[param_1] = fVar15;
  }
  return;
}

