// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// GetBarycentricCoords @ 14c8f2380

TVector<double> * __thiscall
UE::Geometry::TTriangle2<double>::GetBarycentricCoords
          (TTriangle2<double> *this,TVector<double> *__return_storage_ptr__,
          TVector2<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar6 = __real_3ff0000000000000;
  dVar1 = this->V[2].field0_0x0._s_0.X;
  dVar2 = this->V[2].field0_0x0._s_0.Y;
  dVar8 = this->V[1].field0_0x0._s_0.Y - dVar2;
  dVar7 = this->V[0].field0_0x0._s_0.Y - dVar2;
  dVar9 = (param_1->field0_0x0)._s_0.X - dVar1;
  dVar3 = this->V[0].field0_0x0._s_0.X - dVar1;
  dVar1 = this->V[1].field0_0x0._s_0.X - dVar1;
  dVar2 = (param_1->field0_0x0)._s_0.Y - dVar2;
  dVar5 = dVar7 * dVar7 + dVar3 * dVar3;
  dVar4 = dVar8 * dVar7 + dVar1 * dVar3;
  dVar10 = dVar8 * dVar8 + dVar1 * dVar1;
  dVar3 = dVar2 * dVar7 + dVar9 * dVar3;
  dVar1 = dVar2 * dVar8 + dVar9 * dVar1;
  dVar7 = __real_3ff0000000000000 / (dVar10 * dVar5 - dVar4 * dVar4);
  dVar2 = (dVar1 * dVar5 - dVar3 * dVar4) * dVar7;
  dVar7 = (dVar3 * dVar10 - dVar1 * dVar4) * dVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (dVar6 - dVar7) - dVar2;
  return __return_storage_ptr__;
}

// IsInsideOrOn @ 14c901ff0

bool __cdecl
UE::Geometry::TTriangle2<double>::IsInsideOrOn
          (TVector2<double> *param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          TVector2<double> *param_4,double param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  TVector2<double> *pTVar5;
  TVector2<double> *pTVar6;
  char cVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  iVar4 = TSegment2<double>::GetSide(param_1,param_2,param_4,param_5);
  dVar10 = (double)iVar4;
  iVar4 = TSegment2<double>::GetSide(param_2,param_3,param_4,param_5);
  dVar9 = (double)iVar4;
  iVar4 = TSegment2<double>::GetSide(param_3,param_1,param_4,param_5);
  dVar8 = (double)iVar4;
  if (((0.0 <= dVar9 * dVar10) && (0.0 <= dVar8 * dVar9)) && (0.0 <= dVar8 * dVar10)) {
    cVar7 = (dVar8 == 0.0) + (dVar9 == 0.0) + (dVar10 == 0.0);
    if (cVar7 == '\0') {
      return true;
    }
    if (cVar7 == '\x01') {
      pTVar5 = param_1;
      pTVar6 = param_2;
      if ((dVar10 != 0.0) && (pTVar5 = param_3, pTVar6 = param_1, dVar9 == 0.0)) {
        pTVar5 = param_2;
        pTVar6 = param_3;
      }
      bVar2 = TSegment2<double>::IsOnSegment(pTVar5,pTVar6,param_4,param_5);
      return bVar2;
    }
    if (cVar7 == '\x02') {
      if (dVar10 == 0.0) {
        if (dVar9 == 0.0) {
          dVar8 = (param_2->field0_0x0)._s_0.X;
          dVar9 = (param_2->field0_0x0)._s_0.Y;
        }
        else {
          dVar8 = (param_1->field0_0x0)._s_0.X;
          dVar9 = (param_1->field0_0x0)._s_0.Y;
        }
      }
      else {
        dVar8 = (param_3->field0_0x0)._s_0.X;
        dVar9 = (param_3->field0_0x0)._s_0.Y;
      }
      dVar9 = dVar9 - (param_4->field0_0x0)._s_0.Y;
      dVar8 = dVar8 - (param_4->field0_0x0)._s_0.X;
      return dVar9 * dVar9 + dVar8 * dVar8 <= param_5 * param_5;
    }
    if (cVar7 == '\x03') {
      bVar2 = TSegment2<double>::IsOnSegment(param_1,param_2,param_4,param_5);
      if (bVar2) {
        return true;
      }
      bVar2 = TSegment2<double>::IsOnSegment(param_2,param_3,param_4,param_5);
      if (bVar2) {
        return true;
      }
    }
    else {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3414661925609406626>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\TriangleTypes.h"
                         ,0xa2,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  return false;
}

