// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// ClipLine @ 143b17fa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FHeightField::FBounds2D::ClipLine
          (FBounds2D *this,TVector<double,2> *param_1,TVector<double,2> *param_2)

{
  undefined1 *puVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  TVector<double,2> *pTVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  char local_res8 [8];
  double local_78 [12];
  
  dVar3 = *(double *)param_1;
  if ((((dVar3 < *(double *)&this->Min) ||
       (*(double *)&this->Max <= dVar3 && dVar3 != *(double *)&this->Max)) ||
      (dVar4 = *(double *)&param_1->field_0x8, dVar4 < *(double *)&(this->Min).field_0x8)) ||
     (puVar1 = &(this->Max).field_0x8, *(double *)puVar1 <= dVar4 && dVar4 != *(double *)puVar1)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  dVar4 = *(double *)param_2;
  if (((dVar4 < *(double *)&this->Min) ||
      (*(double *)&this->Max <= dVar4 && dVar4 != *(double *)&this->Max)) ||
     ((dVar16 = *(double *)&param_2->field_0x8, dVar16 < *(double *)&(this->Min).field_0x8 ||
      (puVar1 = &(this->Max).field_0x8, *(double *)puVar1 <= dVar16 && dVar16 != *(double *)puVar1))
     )) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((bVar6) && (bVar7)) {
    return true;
  }
  dVar4 = dVar4 - dVar3;
  dVar3 = *(double *)&param_2->field_0x8 - *(double *)&param_1->field_0x8;
  local_78[2] = dVar4;
  local_78[3] = dVar3;
  if (dVar3 * dVar3 + dVar4 * dVar4 < __real_3f1a36e2eb1c432d) {
    return false;
  }
  if (dVar4 == 0.0) {
    local_res8[0] = '\x01';
    local_78[6] = 0.0;
  }
  else {
    local_res8[0] = '\0';
    local_78[6] = __real_3ff0000000000000 / dVar4;
  }
  if (dVar3 == 0.0) {
    local_res8[1] = 1;
    local_78[7] = 0.0;
  }
  else {
    local_res8[1] = 0;
    local_78[7] = __real_3ff0000000000000 / dVar3;
  }
  if (!bVar6) {
    if (!bVar7) {
      lVar13 = (longlong)this - (longlong)param_1;
      lVar10 = (longlong)local_78 + (0x30 - (longlong)param_1);
      lVar9 = 0;
      lVar11 = -(longlong)param_1;
      local_78[0] = ___xmm_7fefffffffffffff7fefffffffffffff;
      local_78[1] = (double)_UNK_150a9e648;
      local_78[4] = ___xmm_7fefffffffffffff7fefffffffffffff;
      local_78[5] = (double)_UNK_150a9e648;
      pTVar8 = param_1;
      lVar12 = lVar9;
      do {
        if (local_res8[lVar9] == '\0') {
          dVar16 = *(double *)((longlong)pTVar8 + (longlong)local_78 + lVar11 + 0x10);
          if (dVar16 <= 0.0) {
            if (dVar16 < 0.0) {
              dVar16 = *(double *)((longlong)pTVar8 + lVar13);
              dVar14 = *(double *)pTVar8;
              if (dVar16 <= dVar14) {
                dVar15 = dVar14 - *(double *)((longlong)this + (longlong)pTVar8 + lVar11 + 0x10);
                goto LAB_143b182d3;
              }
            }
          }
          else {
            dVar16 = *(double *)pTVar8;
            dVar14 = *(double *)((longlong)this + (longlong)pTVar8 + lVar11 + 0x10);
            if (dVar16 <= dVar14) {
              dVar15 = *(double *)((longlong)pTVar8 + lVar13) - dVar16;
LAB_143b182d3:
              if (dVar15 <= 0.0) {
                dVar15 = 0.0;
              }
              dVar5 = *(double *)(lVar10 + (longlong)pTVar8);
              *(double *)((longlong)pTVar8 + (longlong)local_78 + (0x20 - (longlong)param_1)) =
                   (dVar14 - dVar16) * *(double *)(lVar10 + (longlong)pTVar8);
              *(double *)((longlong)pTVar8 + (longlong)local_78 + lVar11) = dVar15 * dVar5;
            }
          }
        }
        else {
          dVar16 = *(double *)pTVar8;
          if ((*(double *)((longlong)pTVar8 + lVar13) <= dVar16) &&
             (pdVar2 = (double *)(&(this->Max).field_0x0 + lVar12),
             dVar16 < *pdVar2 || dVar16 == *pdVar2)) {
            *(undefined8 *)((longlong)pTVar8 + (longlong)local_78 + lVar11) = 0;
          }
        }
        lVar9 = lVar9 + 1;
        pTVar8 = (TVector<double,2> *)&pTVar8->field_0x8;
        lVar12 = lVar12 + 8;
        if (1 < lVar9) {
          dVar16 = (double)CONCAT44((uint)((ulonglong)local_78[1] >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(local_78[1],0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          dVar14 = (double)CONCAT44((uint)((ulonglong)local_78[0] >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(local_78[0],0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          if (dVar16 <= dVar14) {
            dVar16 = dVar14;
          }
          dVar14 = (double)CONCAT44((uint)((ulonglong)local_78[5] >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(local_78[5],0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          dVar15 = (double)CONCAT44((uint)((ulonglong)local_78[4] >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(local_78[4],0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          if (dVar15 <= dVar14) {
            dVar14 = dVar15;
          }
          if (dVar14 < dVar16) {
            return false;
          }
          dVar15 = *(double *)&param_1->field_0x8;
          *(double *)param_2 = dVar4 * dVar14 + *(double *)param_1;
          *(double *)&param_2->field_0x8 = dVar14 * dVar3 + dVar15;
          *(double *)param_1 = local_78[2] * dVar16 + *(double *)param_1;
          *(double *)&param_1->field_0x8 = dVar16 * local_78[3] + *(double *)&param_1->field_0x8;
          return true;
        }
      } while( true );
    }
    dVar14 = (double)CONCAT44((uint)((ulonglong)local_78[6] >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(local_78[6],0) ^ (uint)__xmm_80000000000000008000000000000000);
    dVar16 = (double)CONCAT44((uint)((ulonglong)local_78[7] >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(local_78[7],0) ^ (uint)__xmm_80000000000000008000000000000000);
    if (dVar14 <= 0.0) {
      dVar15 = __real_7fefffffffffffff;
      if (dVar14 < 0.0) {
        dVar15 = *(double *)param_2 - *(double *)&this->Min;
        goto LAB_143b18199;
      }
    }
    else {
      dVar15 = *(double *)&this->Max - *(double *)param_2;
LAB_143b18199:
      dVar15 = dVar15 * dVar14;
    }
    if (dVar16 <= 0.0) {
      dVar14 = __real_7fefffffffffffff;
      if (0.0 <= dVar16) goto LAB_143b181c3;
      dVar14 = *(double *)&param_2->field_0x8 - *(double *)&(this->Min).field_0x8;
    }
    else {
      dVar14 = *(double *)&(this->Max).field_0x8 - *(double *)&param_2->field_0x8;
    }
    dVar14 = dVar14 * dVar16;
LAB_143b181c3:
    dVar16 = (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    dVar14 = (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (dVar14 <= dVar16) {
      dVar16 = dVar14;
    }
    dVar14 = *(double *)param_2;
    *(double *)&param_1->field_0x8 = *(double *)&param_2->field_0x8 - dVar16 * dVar3;
    *(double *)param_1 = dVar14 - dVar16 * dVar4;
    return true;
  }
  if (local_78[6] <= 0.0) {
    dVar16 = __real_7fefffffffffffff;
    if (local_78[6] < 0.0) {
      dVar16 = *(double *)param_1 - *(double *)&this->Min;
      goto LAB_143b180ee;
    }
  }
  else {
    dVar16 = *(double *)&this->Max - *(double *)param_1;
LAB_143b180ee:
    dVar16 = dVar16 * local_78[6];
  }
  if (local_78[7] <= 0.0) {
    dVar14 = __real_7fefffffffffffff;
    if (0.0 <= local_78[7]) goto LAB_143b18116;
    dVar14 = *(double *)&param_1->field_0x8 - *(double *)&(this->Min).field_0x8;
  }
  else {
    dVar14 = *(double *)&(this->Max).field_0x8 - *(double *)&param_1->field_0x8;
  }
  dVar14 = dVar14 * local_78[7];
LAB_143b18116:
  dVar14 = (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar16 = (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (dVar16 <= dVar14) {
    dVar14 = dVar16;
  }
  dVar16 = *(double *)&param_1->field_0x8;
  *(double *)param_2 = dVar14 * dVar4 + *(double *)param_1;
  *(double *)&param_2->field_0x8 = dVar14 * dVar3 + dVar16;
  return true;
}

