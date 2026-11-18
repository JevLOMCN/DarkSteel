// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// IsInsideOrOn_Oriented @ 1433bc2a0

int __cdecl
UE::Geometry::TTriangle2<double>::IsInsideOrOn_Oriented
          (TVector2<double> *param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          TVector2<double> *param_4,double param_5)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  TVector2<double> *pTVar5;
  TVector2<double> *pTVar6;
  char cVar7;
  double dVar8;
  double dVar9;
  
  iVar4 = TSegment2<double>::GetSide(param_1,param_2,param_4,param_5);
  dVar9 = (double)iVar4;
  if (dVar9 <= 0.0) {
    iVar4 = TSegment2<double>::GetSide(param_2,param_3,param_4,param_5);
    dVar8 = (double)iVar4;
    if (dVar8 <= 0.0) {
      iVar4 = TSegment2<double>::GetSide(param_1,param_3,param_4,param_5);
      if (0.0 <= (double)iVar4) {
        bVar3 = false;
        cVar7 = ((double)iVar4 == 0.0) + (dVar8 == 0.0) + (dVar9 == 0.0);
        if (cVar7 == '\0') {
          return -1;
        }
        if (cVar7 == '\x01') {
          pTVar5 = param_1;
          pTVar6 = param_2;
          if ((dVar9 != 0.0) && (pTVar5 = param_3, pTVar6 = param_1, dVar8 == 0.0)) {
            pTVar5 = param_2;
            pTVar6 = param_3;
          }
          bVar3 = TSegment2<double>::IsOnSegment(pTVar5,pTVar6,param_4,param_5);
        }
        else if (cVar7 == '\x02') {
          if (dVar9 == 0.0) {
            if (dVar8 == 0.0) {
              dVar9 = (param_2->field0_0x0)._s_0.X;
              dVar8 = (param_2->field0_0x0)._s_0.Y;
            }
            else {
              dVar9 = (param_1->field0_0x0)._s_0.X;
              dVar8 = (param_1->field0_0x0)._s_0.Y;
            }
          }
          else {
            dVar9 = (param_3->field0_0x0)._s_0.X;
            dVar8 = (param_3->field0_0x0)._s_0.Y;
          }
          dVar8 = dVar8 - (param_4->field0_0x0)._s_0.Y;
          dVar9 = dVar9 - (param_4->field0_0x0)._s_0.X;
          bVar3 = dVar8 * dVar8 + dVar9 * dVar9 <= param_5 * param_5;
        }
        else if (cVar7 == '\x03') {
          bVar2 = TSegment2<double>::IsOnSegment(param_1,param_2,param_4,param_5);
          if ((bVar2) ||
             (bVar2 = TSegment2<double>::IsOnSegment(param_2,param_3,param_4,param_5), bVar2)) {
            bVar3 = true;
          }
        }
        else {
          bVar2 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3414661925609406709>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\TriangleTypes.h"
                             ,0xf5,"false");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            iVar4 = (*pcVar1)();
            return iVar4;
          }
        }
        return bVar3 ^ 1;
      }
    }
  }
  return 1;
}

