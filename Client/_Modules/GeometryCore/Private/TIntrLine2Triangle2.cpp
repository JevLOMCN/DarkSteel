// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// GetInterval @ 1433a8960

bool __cdecl
UE::Geometry::TIntrLine2Triangle2<double>::GetInterval
          (TVector2<double> *param_1,TVector2<double> *param_2,TTriangle2<double> *param_3,
          TVector<double> *param_4,FVector3i *param_5,TVector2<double> *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  TVector<double> *pTVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  TVector2<double> *pTVar16;
  double dVar17;
  double dVar18;
  undefined1 local_78 [8];
  longlong local_70;
  longlong local_68;
  double local_60 [7];
  
  dVar18 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  lVar7 = 0x10;
  dVar17 = (param_2->field0_0x0)._s_0.X;
  uVar12 = 0;
  lVar13 = (longlong)local_60 - (longlong)param_4;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  local_60[0] = (param_3->V[0].field0_0x0._s_0.Y - dVar18) * dVar2 +
                (param_3->V[0].field0_0x0._s_0.X - dVar1) * dVar17;
  local_70 = 3;
  local_60[1] = (param_3->V[1].field0_0x0._s_0.X - dVar1) * dVar17 +
                (param_3->V[1].field0_0x0._s_0.Y - dVar18) * dVar2;
  local_60[2] = (param_3->V[2].field0_0x0._s_0.X - dVar1) * dVar17 +
                (param_3->V[2].field0_0x0._s_0.Y - dVar18) * dVar2;
  uVar11 = 8;
  uVar9 = uVar12;
  pTVar10 = param_4;
  uVar14 = uVar12;
  uVar15 = uVar12;
  pTVar16 = param_6;
  local_68 = lVar13;
  do {
    if (*(int *)((longlong)&param_5->field0_0x0 + uVar15) *
        *(int *)((longlong)&param_5->field0_0x0 + uVar11) < 0) {
      dVar18 = *(double *)((longlong)&param_4->field0_0x0 + lVar7);
      dVar1 = (pTVar10->field0_0x0)._s_0.X;
      dVar17 = *(double *)((longlong)&pTVar10->field0_0x0 + lVar13);
      dVar2 = *(double *)((longlong)local_60 + lVar7);
      dVar3 = (pTVar10->field0_0x0)._s_0.X;
      if ((1 < uVar14) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                             ,0x4b0,L""), lVar13 = local_68, bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      uVar9 = (ulonglong)((int)uVar9 + 1);
      uVar14 = uVar14 + 1;
      (pTVar16->field0_0x0)._s_0.X = (dVar18 * dVar17 - dVar1 * dVar2) / (dVar18 - dVar3);
      pTVar16 = (TVector2<double> *)((longlong)&pTVar16->field0_0x0 + 8);
    }
    iVar8 = (int)uVar9;
    lVar7 = (longlong)pTVar10 - (longlong)param_4;
    pTVar10 = (TVector<double> *)((longlong)&pTVar10->field0_0x0 + 8);
    local_70 = local_70 + -1;
    uVar11 = uVar15;
    uVar15 = uVar15 + 4;
  } while (local_70 != 0);
  local_70 = 0;
  if (iVar8 < 2) {
    uVar11 = (ulonglong)iVar8;
    do {
      if ((param_5->field0_0x0).XYZ[uVar12] == 0) {
        if (uVar11 == 2) {
          dVar18 = (param_6->field0_0x0)._s_0.Y;
          dVar1 = (param_6->field0_0x0)._s_0.X;
          dVar17 = dVar1;
          if (dVar18 < dVar1) {
            (param_6->field0_0x0)._s_0.X = dVar18;
            (param_6->field0_0x0)._s_0.Y = dVar1;
            dVar17 = dVar18;
            dVar18 = dVar1;
          }
          dVar1 = local_60[uVar12];
          if (dVar17 <= dVar1) {
            if (dVar18 < dVar1) {
              (param_6->field0_0x0)._s_0.Y = dVar1;
            }
          }
          else {
            (param_6->field0_0x0)._s_0.X = dVar1;
          }
        }
        else {
          dVar18 = local_60[uVar12];
          if ((1 < uVar11) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                                 ,0x4b0,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          uVar9 = (ulonglong)((int)uVar9 + 1);
          (param_6->field0_0x0).XY[uVar11] = dVar18;
          uVar11 = uVar11 + 1;
        }
      }
      iVar8 = (int)uVar9;
      uVar12 = uVar12 + 1;
    } while ((longlong)uVar12 < 3);
  }
  if ((iVar8 < 1) &&
     (bVar5 = `UE::Geometry::TIntrLine2Triangle2<double>::GetInterval'::__l33::<lambda_1>::
              operator()(local_78), !bVar5)) {
    return false;
  }
  dVar18 = (param_6->field0_0x0)._s_0.X;
  if (iVar8 == 2) {
    dVar1 = (param_6->field0_0x0)._s_0.Y;
    if (dVar18 <= dVar1) {
      return true;
    }
    (param_6->field0_0x0)._s_0.X = dVar1;
  }
  (param_6->field0_0x0)._s_0.Y = dVar18;
  return true;
}

// operator() @ 15049e6a0

bool __thiscall
`UE::Geometry::TIntrLine2Triangle2<double>::GetInterval'::__l33::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1501444885062876944>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1501444885062876944>,
                       &`public:___cdecl_`public:_static_bool___cdecl_UE::Geometry::TIntrLine2Triangle2<double>::GetInterval(UE::Math::TVector2<double>_const&___ptr64,UE::Math::TVector2<double>_const&___ptr64,UE::Geometry::TTriangle2<double>_const&___ptr64,UE::Math::TVector<double>_const&___ptr64,UE::Geometry::FVector3i_const&___ptr64,UE::Math::TVector2<double>&___ptr64)'::`33'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

