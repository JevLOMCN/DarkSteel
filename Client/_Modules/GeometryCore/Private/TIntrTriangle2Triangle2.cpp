// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// ClipConvexPolygonAgainstLine @ 14338de30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Geometry::TIntrTriangle2Triangle2<double>::ClipConvexPolygonAgainstLine
          (TVector2<double> *param_1,double param_2,int *param_3,TVector2<double> *param_4)

{
  double *pdVar1;
  int iVar2;
  TVector2<double>_u_0 *pTVar3;
  int iVar4;
  double *pdVar5;
  TVector2<double> *pTVar6;
  longlong lVar7;
  double *pdVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_d8 [24];
  double adStack_c0 [7];
  double local_88 [12];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  iVar2 = *param_3;
  iVar9 = 0;
  iVar11 = 0;
  iVar12 = 0;
  iVar13 = -1;
  iVar14 = 0;
  if (0 < iVar2) {
    dVar17 = (param_1->field0_0x0)._s_0.X;
    pdVar8 = adStack_c0;
    dVar16 = (param_1->field0_0x0)._s_0.Y;
    pTVar6 = param_4;
    do {
      pdVar8 = pdVar8 + 1;
      dVar15 = (dVar16 * (pTVar6->field0_0x0)._s_0.Y + dVar17 * (pTVar6->field0_0x0)._s_0.X) -
               param_2;
      *pdVar8 = dVar15;
      iVar4 = iVar13;
      if (dVar15 <= 0.0) {
        if (dVar15 < 0.0) {
          iVar12 = iVar12 + 1;
        }
      }
      else {
        iVar11 = iVar11 + 1;
        iVar4 = iVar14;
        if (-1 < iVar13) {
          iVar4 = iVar13;
        }
      }
      iVar13 = iVar4;
      iVar14 = iVar14 + 1;
      pTVar6 = pTVar6 + 1;
    } while (iVar14 < iVar2);
    if (0 < iVar11) {
      if (iVar12 < 1) {
        return;
      }
      pdVar8 = adStack_c0 + 1;
      iVar12 = 0;
      if (iVar13 < 1) {
        pdVar5 = local_88;
        do {
          if (*pdVar8 <= 0.0) break;
          pdVar1 = (double *)(((longlong)param_4 - (longlong)local_88) + (longlong)pdVar5);
          dVar17 = pdVar1[1];
          iVar9 = iVar9 + 1;
          pdVar8 = pdVar8 + 1;
          iVar12 = iVar12 + 1;
          *pdVar5 = *pdVar1;
          pdVar5[1] = dVar17;
          pdVar5 = pdVar5 + 2;
        } while (iVar9 < iVar2);
        pdVar8 = adStack_c0 + (longlong)iVar9 + 1;
        iVar11 = iVar12 + 1;
        dVar17 = param_4[(longlong)iVar9 + -1].field0_0x0._s_0.Y;
        dVar16 = param_4[iVar9].field0_0x0._s_0.Y;
        dVar18 = adStack_c0[(longlong)iVar9 + 1] /
                 (adStack_c0[(longlong)iVar9 + 1] - adStack_c0[iVar9]);
        dVar15 = param_4[iVar9].field0_0x0._s_0.Y;
        local_88[(longlong)iVar12 * 2] =
             (param_4[(longlong)iVar9 + -1].field0_0x0._s_0.X - param_4[iVar9].field0_0x0._s_0.X) *
             dVar18 + param_4[iVar9].field0_0x0._s_0.X;
        local_88[(longlong)iVar12 * 2 + 1] = (dVar17 - dVar16) * dVar18 + dVar15;
        iVar2 = *param_3;
        for (; iVar9 < iVar2; iVar9 = iVar9 + 1) {
          if (0.0 < *pdVar8) {
            pdVar8 = adStack_c0 + (longlong)iVar9 + 1;
            dVar17 = param_4[(longlong)iVar9 + -1].field0_0x0._s_0.Y;
            pTVar6 = param_4 + iVar9;
            dVar16 = (pTVar6->field0_0x0)._s_0.Y;
            iVar12 = iVar12 + 2;
            dVar18 = adStack_c0[(longlong)iVar9 + 1] /
                     (adStack_c0[(longlong)iVar9 + 1] - adStack_c0[iVar9]);
            dVar15 = (pTVar6->field0_0x0)._s_0.Y;
            local_88[(longlong)iVar11 * 2] =
                 (pTVar6[-1].field0_0x0._s_0.X - (pTVar6->field0_0x0)._s_0.X) * dVar18 +
                 (pTVar6->field0_0x0)._s_0.X;
            local_88[(longlong)iVar11 * 2 + 1] = (dVar17 - dVar16) * dVar18 + dVar15;
            iVar2 = *param_3;
            if (iVar2 <= iVar9) goto LAB_14338e0e9;
            pdVar5 = local_88 + (longlong)iVar12 * 2;
            goto LAB_14338e1a0;
          }
          pdVar8 = pdVar8 + 1;
        }
        dVar17 = adStack_c0[1] / (adStack_c0[1] - adStack_c0[iVar2]);
        dVar16 = (param_4[(longlong)iVar2 + -1].field0_0x0._s_0.Y - (param_4->field0_0x0)._s_0.Y) *
                 dVar17 + (param_4->field0_0x0)._s_0.Y;
        dVar17 = (param_4[(longlong)iVar2 + -1].field0_0x0._s_0.X - (param_4->field0_0x0)._s_0.X) *
                 dVar17 + (param_4->field0_0x0)._s_0.X;
      }
      else {
        iVar11 = 1;
        pdVar5 = pdVar8 + iVar13;
        pTVar6 = param_4 + iVar13;
        dVar17 = pdVar8[iVar13] / (pdVar8[iVar13] - adStack_c0[iVar13]);
        local_88[1] = (param_4[(longlong)iVar13 + -1].field0_0x0._s_0.Y -
                      (pTVar6->field0_0x0)._s_0.Y) * dVar17 + (pTVar6->field0_0x0)._s_0.Y;
        local_88[0] = (pTVar6[-1].field0_0x0._s_0.X - (pTVar6->field0_0x0)._s_0.X) * dVar17 +
                      (pTVar6->field0_0x0)._s_0.X;
        if (iVar13 < iVar2) {
          pdVar8 = local_88;
          do {
            pdVar8 = pdVar8 + 2;
            if (*pdVar5 <= 0.0) break;
            pTVar3 = &pTVar6->field0_0x0;
            dVar17 = (pTVar6->field0_0x0)._s_0.Y;
            iVar13 = iVar13 + 1;
            pdVar5 = pdVar5 + 1;
            pTVar6 = pTVar6 + 1;
            iVar11 = iVar11 + 1;
            *pdVar8 = (pTVar3->_s_0).X;
            pdVar8[1] = dVar17;
          } while (iVar13 < iVar2);
        }
        iVar9 = iVar13;
        if (iVar2 <= iVar13) {
          iVar13 = 0;
          iVar9 = iVar2;
        }
        lVar7 = (longlong)iVar13;
        lVar10 = (longlong)iVar9 + -1;
        dVar17 = adStack_c0[lVar7 + 1] / (adStack_c0[lVar7 + 1] - adStack_c0[iVar9]);
        dVar16 = (param_4[lVar10].field0_0x0._s_0.Y - param_4[lVar7].field0_0x0._s_0.Y) * dVar17 +
                 param_4[lVar7].field0_0x0._s_0.Y;
        dVar17 = (param_4[lVar10].field0_0x0._s_0.X - param_4[lVar7].field0_0x0._s_0.X) * dVar17 +
                 param_4[lVar7].field0_0x0._s_0.X;
      }
      iVar12 = iVar11 + 1;
      local_88[(longlong)iVar11 * 2] = dVar17;
      local_88[(longlong)iVar11 * 2 + 1] = dVar16;
      goto LAB_14338e0e9;
    }
  }
  *param_3 = 0;
  return;
  while( true ) {
    pTVar3 = &pTVar6->field0_0x0;
    dVar17 = (pTVar6->field0_0x0)._s_0.Y;
    iVar9 = iVar9 + 1;
    pdVar8 = pdVar8 + 1;
    pTVar6 = pTVar6 + 1;
    iVar12 = iVar12 + 1;
    *pdVar5 = (pTVar3->_s_0).X;
    pdVar5[1] = dVar17;
    pdVar5 = pdVar5 + 2;
    if (iVar2 <= iVar9) break;
LAB_14338e1a0:
    if (*pdVar8 <= 0.0) break;
  }
LAB_14338e0e9:
  *param_3 = iVar12;
  if (0 < (longlong)iVar12) {
    memcpy(param_4,local_88,(longlong)iVar12 << 4);
  }
  return;
}

// Find @ 14339d840

bool __thiscall
UE::Geometry::TIntrTriangle2Triangle2<double>::Find(TIntrTriangle2Triangle2<double> *this)

{
  int iVar1;
  double dVar2;
  EIntersectionType EVar3;
  int iVar4;
  TVector2<double>_u_0 local_18;
  
  if (this->Result != NotComputed) {
    return this->Result == Intersects;
  }
  this->Quantity = 3;
  dVar2 = (this->Triangle1).V[0].field0_0x0._s_0.Y;
  this->Points[0].field0_0x0._s_0.X = (this->Triangle1).V[0].field0_0x0._s_0.X;
  this->Points[0].field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->Triangle1).V[1].field0_0x0._s_0.Y;
  this->Points[1].field0_0x0._s_0.X = (this->Triangle1).V[1].field0_0x0._s_0.X;
  this->Points[1].field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->Triangle1).V[2].field0_0x0._s_0.Y;
  this->Points[2].field0_0x0._s_0.X = (this->Triangle1).V[2].field0_0x0._s_0.X;
  this->Points[2].field0_0x0._s_0.Y = dVar2;
  local_18._s_0.X =
       (this->Triangle0).V[2].field0_0x0._s_0.Y - (this->Triangle0).V[0].field0_0x0._s_0.Y;
  local_18._s_0.Y =
       (this->Triangle0).V[0].field0_0x0._s_0.X - (this->Triangle0).V[2].field0_0x0._s_0.X;
  ClipConvexPolygonAgainstLine
            ((TVector2<double> *)&local_18._s_0,
             local_18._s_0.Y * (this->Triangle0).V[2].field0_0x0._s_0.Y +
             local_18._s_0.X * (this->Triangle0).V[2].field0_0x0._s_0.X,&this->Quantity,this->Points
            );
  iVar1 = this->Quantity;
  iVar4 = 0;
  if (iVar1 == 0) {
    this->Type = Empty;
  }
  else if (iVar1 == 1) {
    this->Type = Point;
  }
  else {
    EVar3 = Polygon;
    if (iVar1 == 2) {
      EVar3 = Segment;
    }
    this->Type = EVar3;
  }
  local_18._s_0.X =
       (this->Triangle0).V[0].field0_0x0._s_0.Y - (this->Triangle0).V[1].field0_0x0._s_0.Y;
  local_18._s_0.Y =
       (this->Triangle0).V[1].field0_0x0._s_0.X - (this->Triangle0).V[0].field0_0x0._s_0.X;
  ClipConvexPolygonAgainstLine
            ((TVector2<double> *)&local_18._s_0,
             local_18._s_0.X * (this->Triangle0).V[0].field0_0x0._s_0.X +
             local_18._s_0.Y * (this->Triangle0).V[0].field0_0x0._s_0.Y,&this->Quantity,this->Points
            );
  iVar1 = this->Quantity;
  if (iVar1 == 0) {
    this->Type = Empty;
  }
  else if (iVar1 == 1) {
    this->Type = Point;
  }
  else {
    EVar3 = Polygon;
    if (iVar1 == 2) {
      EVar3 = Segment;
    }
    this->Type = EVar3;
  }
  local_18._s_0.X =
       (this->Triangle0).V[1].field0_0x0._s_0.Y - (this->Triangle0).V[2].field0_0x0._s_0.Y;
  local_18._s_0.Y =
       (this->Triangle0).V[2].field0_0x0._s_0.X - (this->Triangle0).V[1].field0_0x0._s_0.X;
  ClipConvexPolygonAgainstLine
            ((TVector2<double> *)&local_18._s_0,
             local_18._s_0.X * (this->Triangle0).V[1].field0_0x0._s_0.X +
             local_18._s_0.Y * (this->Triangle0).V[1].field0_0x0._s_0.Y,&this->Quantity,this->Points
            );
  iVar1 = this->Quantity;
  if (iVar1 == 0) {
    this->Type = Empty;
  }
  else if (iVar1 == 1) {
    this->Type = Point;
    iVar4 = 1;
  }
  else if (iVar1 == 2) {
    this->Type = Segment;
    iVar4 = 2;
  }
  else {
    this->Type = Polygon;
    iVar4 = 4;
  }
  this->Result = NoIntersection - (iVar4 != 0);
  return iVar4 != 0;
}

