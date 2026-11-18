// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// operator() @ 148a838a0

void __thiscall
`FSquare2DGridHelper::FGrid2D::ForEachIntersectingCells'::__l2::<lambda_1>::operator()
          (void *this,TIntVector2<__int64> *param_1)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  pdVar3 = *(double **)this;
  dVar5 = pdVar3[2];
  dVar6 = (double)((longlong)dVar5 * (longlong)pdVar3[3]) * __real_3fe0000000000000;
  dVar4 = (double)((longlong)dVar5 * (param_1->field0_0x0)._s_0.X) + (*pdVar3 - dVar6);
  dVar1 = **(double **)((longlong)this + 0x10);
  dVar2 = (*(double **)((longlong)this + 0x10))[1];
  dVar8 = (double)((longlong)dVar5 * (param_1->field0_0x0)._s_0.Y) + (pdVar3[1] - dVar6);
  dVar7 = (double)(longlong)dVar5 + dVar8;
  dVar6 = (double)(longlong)dVar5 + dVar4;
  dVar5 = dVar1;
  if (dVar6 <= dVar1) {
    dVar5 = dVar6;
  }
  dVar6 = dVar2;
  if (dVar7 <= dVar2) {
    dVar6 = dVar7;
  }
  if (dVar5 <= dVar4) {
    dVar5 = dVar4;
  }
  if (dVar6 <= dVar8) {
    dVar6 = dVar8;
  }
  if ((dVar2 - dVar6) * (dVar2 - dVar6) + (dVar1 - dVar5) * (dVar1 - dVar5) <
      *(double *)((longlong)this + 8)) {
    (*(code *)**(undefined8 **)((longlong)this + 0x18))
              ((*(undefined8 **)((longlong)this + 0x18))[1]);
    **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + 1;
  }
  return;
}

// DoesCircleSectorIntersectsCell @ 148a8d8d0

bool __thiscall
FSquare2DGridHelper::FGrid2D::DoesCircleSectorIntersectsCell
          (FGrid2D *this,TIntVector2<__int64> *param_1,FSphericalSector *param_2)

{
  bool bVar1;
  TBox2<double> local_38;
  
  GetCellBounds(this,param_1,&local_38,true);
  bVar1 = FSphericalSector::IntersectsBox(param_2,&local_38);
  return bVar1;
}

// ForEachIntersectingCells @ 148a90630

int __thiscall
FSquare2DGridHelper::FGrid2D::ForEachIntersectingCells
          (FGrid2D *this,TBox<double> *param_1,
          TFunctionRef<void___cdecl(UE::Math::TIntVector2<__int64>_const_&)> *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 local_res8 [8];
  ulonglong local_res10;
  TIntVector2<__int64>_u_0 local_88 [2];
  TVector2<double>_u_0 local_68;
  TVector2<double>_u_0 local_58;
  undefined1 local_48;
  
  local_68._s_0.X = (param_1->Min).field0_0x0._s_0.X;
  local_68._s_0.Y = (param_1->Min).field0_0x0._s_0.Y;
  pcVar1 = *(code **)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  uVar12 = 0;
  iVar7 = 0;
  local_48 = 1;
  local_58._s_0.X = (param_1->Max).field0_0x0._s_0.X;
  local_58._s_0.Y = (param_1->Max).field0_0x0._s_0.Y;
  GetCellCoords(this,(TVector2<double> *)&local_68._s_0,(TIntVector2<__int64> *)&local_88[0]._s_0);
  uVar5 = local_88[0]._s_0.Y;
  uVar9 = local_88[0]._s_0.X;
  if (this->GridSize <= (longlong)local_88[0]._0_8_) {
    return iVar7;
  }
  if ((((longlong)local_88[0]._8_8_ < this->GridSize) &&
      (GetCellCoords(this,(TVector2<double> *)&local_58._s_0,
                     (TIntVector2<__int64> *)&local_88[0]._s_0), -1 < (longlong)local_88[0]._0_8_))
     && (-1 < (longlong)local_88[0]._8_8_)) {
    uVar10 = this->GridSize - 1;
    uVar8 = uVar10;
    if ((longlong)uVar9 < (longlong)uVar10) {
      uVar8 = uVar9;
    }
    uVar14 = uVar12;
    if (0 < (longlong)uVar8) {
      uVar14 = uVar8;
    }
    uVar9 = uVar10;
    if ((longlong)uVar5 < (longlong)uVar10) {
      uVar9 = uVar5;
    }
    uVar13 = uVar12;
    if (0 < (longlong)uVar9) {
      uVar13 = uVar9;
    }
    uVar9 = uVar10;
    if ((longlong)local_88[0]._0_8_ < (longlong)uVar10) {
      uVar9 = local_88[0]._s_0.X;
    }
    uVar11 = uVar12;
    if (0 < (longlong)uVar9) {
      uVar11 = uVar9;
    }
    if ((longlong)local_88[0]._8_8_ < (longlong)uVar10) {
      uVar10 = local_88[0]._s_0.Y;
    }
    local_res10 = uVar14;
    uVar15 = uVar12;
    if (0 < (longlong)uVar10) {
      uVar15 = uVar10;
    }
    for (; uVar4 = uVar14, (longlong)uVar13 <= (longlong)uVar15; uVar13 = uVar13 + 1) {
      for (; iVar7 = (int)uVar12, (longlong)uVar4 <= (longlong)uVar11; uVar4 = uVar4 + 1) {
        if ((((-1 < (longlong)uVar4) && (lVar3 = this->GridSize, (longlong)uVar4 < lVar3)) &&
            ((-1 < (longlong)uVar13 && ((longlong)uVar13 < lVar3)))) &&
           ((local_88[0]._0_8_ = uVar4, local_88[0]._8_8_ = uVar13,
            -1 < (longlong)(lVar3 * uVar13 + uVar4) ||
            (bVar6 = `FSquare2DGridHelper::FGrid2D::IsValidCoords'::__l6::<lambda_1>::operator()
                               (local_res8), bVar6)))) {
          (*pcVar1)(uVar2,local_88);
          uVar12 = (ulonglong)(iVar7 + 1);
        }
        uVar14 = local_res10;
      }
    }
  }
  return iVar7;
}

// ForEachIntersectingCells @ 148a907f0

int __thiscall
FSquare2DGridHelper::FGrid2D::ForEachIntersectingCells
          (FGrid2D *this,TSphere<double> *param_1,
          TFunctionRef<void___cdecl(UE::Math::TIntVector2<__int64>_const_&)> *param_2)

{
  int local_res8 [8];
  double local_88;
  double local_80;
  code *local_78;
  FGrid2D **local_70;
  FGrid2D *local_68;
  double local_60;
  double *local_58;
  TFunctionRef<void___cdecl(UE::Math::TIntVector2<__int64>_const_&)> *local_50;
  int *local_48;
  TVector<double>_u_0 local_40;
  double local_28;
  double local_20;
  double local_18;
  undefined1 local_10;
  
  local_60 = param_1->W;
  local_58 = &local_88;
  local_88 = (param_1->Center).field0_0x0._s_0.X;
  local_80 = (param_1->Center).field0_0x0._s_0.Y;
  local_18 = (param_1->Center).field0_0x0._s_0.Z;
  local_40._s_0.X = local_88 - local_60;
  local_40._s_0.Y = local_80 - local_60;
  local_res8[0] = 0;
  local_40._s_0.Z = local_18 - local_60;
  local_18 = local_18 + local_60;
  local_28 = local_88 + local_60;
  local_20 = local_80 + local_60;
  local_60 = local_60 * local_60;
  local_10 = 1;
  local_48 = local_res8;
  local_70 = &local_68;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`FSquare2DGridHelper::FGrid2D::ForEachIntersectingCells'::__l2::<lambda_1>,void,UE::Math::TIntVector2<__int64>_const_&>
             ::Call;
  local_68 = this;
  local_50 = param_2;
  ForEachIntersectingCells
            (this,(TBox<double> *)&local_40._s_0,
             (TFunctionRef<void___cdecl(UE::Math::TIntVector2<__int64>_const_&)> *)&local_78);
  return local_res8[0];
}

// ForEachIntersectingCells @ 148a908d0

int __thiscall
FSquare2DGridHelper::FGrid2D::ForEachIntersectingCells
          (FGrid2D *this,FSphericalSector *param_1,
          TFunctionRef<void___cdecl(UE::Math::TIntVector2<__int64>_const_&)> *param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_res8 [2];
  code *local_a8;
  FGrid2D **local_a0;
  TVector<double>_u_0 local_98;
  double dStack_80;
  FGrid2D *local_78;
  undefined1 local_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  undefined8 local_28;
  undefined8 local_20;
  int *local_18;
  
  bVar3 = FSphericalSector::IsNearlyZero(param_1);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InShape.IsNearlyZero()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\RuntimeSpatialHash\\RuntimeSpatialHashGridHelper.cpp"
                       ,0x123,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  local_98._s_0.Z = (param_1->Center).field0_0x0._s_0.Z;
  dStack_80 = param_1->Radius;
  local_28 = *(undefined8 *)param_2;
  local_98._s_0.X = (param_1->Center).field0_0x0._s_0.X;
  local_98._s_0.Y = (param_1->Center).field0_0x0._s_0.Y;
  local_20 = *(undefined8 *)&param_2->field_0x8;
  local_18 = local_res8;
  dVar2 = param_1->Angle - __real_4076800000000000;
  local_a0 = &local_78;
  local_res8[0] = 0;
  uVar5 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar6 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FSquare2DGridHelper::FGrid2D::ForEachIntersectingCells'::__l2::<lambda_1>,void,UE::Math::TIntVector2<__int64>_const_&>
             ::Call;
  local_68 = (param_1->Center).field0_0x0._s_0.X;
  dStack_60 = (param_1->Center).field0_0x0._s_0.Y;
  local_38 = (param_1->Axis).field0_0x0._s_0.Z;
  dStack_30 = param_1->Angle;
  local_48 = (param_1->Axis).field0_0x0._s_0.X;
  dStack_40 = (param_1->Axis).field0_0x0._s_0.Y;
  local_70 = (double)CONCAT44(uVar6,uVar5) < __real_3e45798ee2308c3a ||
             (double)CONCAT44(uVar6,uVar5) == __real_3e45798ee2308c3a;
  local_78 = this;
  local_58 = local_98._s_0.Z;
  dStack_50 = dStack_80;
  ForEachIntersectingCells
            (this,(TSphere<double> *)&local_98._s_0,
             (TFunctionRef<void___cdecl(UE::Math::TIntVector2<__int64>_const_&)> *)&local_a8);
  return local_res8[0];
}

// GetCellBounds @ 148a94970

bool __thiscall
FSquare2DGridHelper::FGrid2D::GetCellBounds
          (FGrid2D *this,TIntVector2<__int64> *param_1,TBox2<double> *param_2,bool param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  TVector2<double>_u_0 TVar4;
  TVector2<double>_u_0 TVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  undefined1 local_res20 [8];
  undefined7 uStack_17;
  
  if (param_3) {
    lVar1 = (param_1->field0_0x0)._s_0.X;
    if ((((lVar1 < 0) || (lVar2 = this->GridSize, lVar2 <= lVar1)) ||
        (lVar3 = (param_1->field0_0x0)._s_0.Y, lVar3 < 0)) || (lVar2 <= lVar3)) {
      return false;
    }
    if ((lVar2 * lVar3 + lVar1 < 0) &&
       (bVar6 = `FSquare2DGridHelper::FGrid2D::IsValidCoords'::__l6::<lambda_1>::operator()
                          (local_res20), !bVar6)) {
      return false;
    }
  }
  lVar1 = this->CellSize;
  dVar7 = (double)(lVar1 * this->GridSize) * __real_3fe0000000000000;
  dVar8 = (double)(lVar1 * (param_1->field0_0x0)._s_0.X) +
          ((this->Origin).field0_0x0._s_0.X - dVar7);
  dVar7 = (double)(lVar1 * (param_1->field0_0x0)._s_0.Y) +
          ((this->Origin).field0_0x0._s_0.Y - dVar7);
  TVar4._8_4_ = SUB84(dVar7,0);
  TVar4._s_0.X = dVar8;
  TVar4._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  (param_2->Min).field0_0x0 = TVar4;
  dVar7 = (double)lVar1 + dVar7;
  TVar5._8_4_ = SUB84(dVar7,0);
  TVar5._s_0.X = (double)lVar1 + dVar8;
  TVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  (param_2->Max).field0_0x0 = TVar5;
  *(ulonglong *)&param_2->bIsValid = CONCAT71(uStack_17,1);
  return true;
}

// GetCellCoords @ 148a94a80

bool __thiscall
FSquare2DGridHelper::FGrid2D::GetCellCoords
          (FGrid2D *this,TVector2<double> *param_1,TIntVector2<__int64> *param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  undefined1 local_res8 [32];
  
  dVar4 = __real_3fe0000000000000;
  lVar6 = this->CellSize;
  lVar3 = this->GridSize;
  dVar8 = (double)lVar3 * __real_3fe0000000000000;
  dVar1 = (this->Origin).field0_0x0._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  lVar7 = (longlong)
          ROUND((((param_1->field0_0x0)._s_0.X - (this->Origin).field0_0x0._s_0.X) *
                 (__real_4000000000000000 / (double)lVar6) + dVar8 + dVar8) -
                __real_3fe0000000000000) >> 1;
  (param_2->field0_0x0)._s_0.X = lVar7;
  lVar6 = (longlong)
          ROUND((((dVar2 + dVar2) - (dVar1 + dVar1)) / (double)lVar6 + (double)lVar3) - dVar4) >> 1;
  (param_2->field0_0x0)._s_0.Y = lVar6;
  if ((((-1 < lVar7) && (lVar3 = this->GridSize, lVar7 < lVar3)) && (-1 < lVar6)) && (lVar6 < lVar3)
     ) {
    if ((lVar3 * lVar6 + lVar7 < 0) &&
       (bVar5 = `FSquare2DGridHelper::FGrid2D::IsValidCoords'::__l6::<lambda_1>::operator()
                          (local_res8), !bVar5)) {
      return false;
    }
    return true;
  }
  return false;
}

// operator() @ 150535890

bool __thiscall
`FSquare2DGridHelper::FGrid2D::IsValidCoords'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8178201366099918798>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8178201366099918798>,
                       &`public:___cdecl_`public:_bool___cdecl_FSquare2DGridHelper::FGrid2D::IsValidCoords(UE::Math::TIntVector2<__int64>_const&___ptr64)const___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

