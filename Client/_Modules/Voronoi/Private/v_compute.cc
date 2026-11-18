// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Voronoi
// Functions: 48

// compute_cell<voro::voronoicell> @ 1436b8ae0

bool __thiscall
voro::voro_compute<voro::container>::compute_cell<voro::voronoicell>
          (voro_compute<voro::container> *this,voronoicell *param_1,int param_2,int param_3,
          int param_4,int param_5,int param_6)

{
  uint *puVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  container *pcVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  uint *puVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int *piVar29;
  int iVar30;
  undefined8 *puVar31;
  int **ppiVar32;
  int iVar33;
  longlong lVar34;
  undefined4 uVar35;
  double dVar36;
  undefined4 uVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  radius_info local_res20 [8];
  int local_178;
  uint *local_170;
  uint local_168;
  uint local_164;
  int local_158;
  int **local_150;
  int *local_148;
  longlong local_140;
  uint *local_138;
  double local_130;
  double local_128;
  double local_120;
  int *local_118;
  double local_110;
  double local_108;
  double local_100;
  double *local_f8;
  double local_f0;
  uint *local_e8;
  
  pcVar5 = this->con;
  uVar22 = (uint)__xmm_80000000000000008000000000000000;
  uVar28 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar7 = 0.0;
  dVar8 = 0.0;
  dVar9 = 0.0;
  lVar34 = (longlong)param_2;
  lVar19 = (longlong)(param_3 * *(int *)&pcVar5->field_0xc8);
  lVar20 = *(longlong *)(*(longlong *)&pcVar5->field_0xb0 + lVar34 * 8);
  dVar41 = *(double *)(lVar20 + lVar19 * 8);
  uVar45 = SUB84(dVar41,0);
  uVar46 = (undefined4)((ulonglong)dVar41 >> 0x20);
  dVar2 = *(double *)(lVar20 + 8 + lVar19 * 8);
  uVar47 = SUB84(dVar2,0);
  uVar48 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar3 = *(double *)(lVar20 + 0x10 + lVar19 * 8);
  if (pcVar5->field_0xa0 == '\0') {
    dVar39 = *(double *)&pcVar5->field_0x78 - dVar41;
    dVar42 = *(double *)&pcVar5->field_0x70 - dVar41;
    iVar12 = param_4;
  }
  else {
    dVar39 = (*(double *)&pcVar5->field_0x78 - *(double *)&pcVar5->field_0x70) *
             __real_3fe0000000000000;
    dVar42 = (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) ^ uVar28,SUB84(dVar39,0) ^ uVar22);
    iVar12 = *(int *)pcVar5;
  }
  if (pcVar5->field_0xa1 == '\0') {
    dVar36 = *(double *)&pcVar5->field_0x88 - dVar2;
    dVar40 = *(double *)&pcVar5->field_0x80 - dVar2;
    iVar13 = param_5;
  }
  else {
    dVar36 = (*(double *)&pcVar5->field_0x88 - *(double *)&pcVar5->field_0x80) *
             __real_3fe0000000000000;
    dVar40 = (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) ^ uVar28,SUB84(dVar36,0) ^ uVar22);
    iVar13 = *(int *)&pcVar5->field_0x4;
  }
  if (pcVar5->field_0xa2 == '\0') {
    dVar38 = *(double *)&pcVar5->field_0x98 - dVar3;
    dVar43 = *(double *)&pcVar5->field_0x90 - dVar3;
    iVar27 = param_6;
  }
  else {
    dVar38 = (*(double *)&pcVar5->field_0x98 - *(double *)&pcVar5->field_0x90) *
             __real_3fe0000000000000;
    dVar43 = (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) ^ uVar28,SUB84(dVar38,0) ^ uVar22);
    iVar27 = *(int *)&pcVar5->field_0x8;
  }
  local_110 = dVar41;
  local_108 = dVar2;
  local_f0 = dVar3;
  voronoicell_base::init_base((voronoicell_base *)param_1,dVar42,dVar39,dVar40,dVar36,dVar43,dVar38)
  ;
  puVar31 = *(undefined8 **)&pcVar5->field_0x50;
  if (puVar31 < *(undefined8 **)&pcVar5->field_0x58) {
    do {
      cVar10 = (**(code **)(*(longlong *)*puVar31 + 0x18))((longlong *)*puVar31,param_1);
      if (cVar10 == '\0') {
        return false;
      }
      puVar31 = puVar31 + 1;
    } while (puVar31 < *(undefined8 **)&pcVar5->field_0x58);
  }
  ppiVar32 = &`public:_bool___cdecl_voro::voro_compute<voro::container>::compute_cell<voro::voronoicell>(voro::voronoicell&___ptr64,int,int,int,int,int)___ptr64'
              ::__l2::count_list;
  local_158 = 3;
  uVar28 = 0;
  local_150 = &`public:_bool___cdecl_voro::voro_compute<voro::container>::compute_cell<voro::voronoicell>(voro::voronoicell&___ptr64,int,int,int,int,int)___ptr64'
               ::__l2::count_list;
  iVar15 = (param_2 - (iVar27 * *(int *)&pcVar5->field_0x4 + iVar13) * *(int *)pcVar5) - iVar12;
  uVar22 = uVar28;
  if (0 < param_3) {
    do {
      lVar20 = (longlong)(int)(uVar22 * this->ps);
      pdVar6 = this->p[lVar34];
      dVar39 = pdVar6[lVar20] - dVar41;
      dVar42 = pdVar6[lVar20 + 1] - dVar2;
      dVar36 = pdVar6[lVar20 + 2] - dVar3;
      bVar11 = voronoicell_base::nplane<voro::voronoicell>
                         ((voronoicell_base *)param_1,param_1,dVar39,dVar42,dVar36,
                          dVar42 * dVar42 + dVar39 * dVar39 + dVar36 * dVar36,0);
      if (!bVar11) {
        return false;
      }
      uVar22 = uVar22 + 1;
    } while ((int)uVar22 < param_3);
  }
  iVar23 = uVar22 + 1;
  if (iVar23 < this->co[lVar34]) {
    do {
      lVar20 = (longlong)(iVar23 * this->ps);
      pdVar6 = this->p[lVar34];
      dVar39 = pdVar6[lVar20] - dVar41;
      dVar42 = pdVar6[lVar20 + 1] - dVar2;
      dVar36 = pdVar6[lVar20 + 2] - dVar3;
      bVar11 = voronoicell_base::nplane<voro::voronoicell>
                         ((voronoicell_base *)param_1,param_1,dVar39,dVar42,dVar36,
                          dVar42 * dVar42 + dVar39 * dVar39 + dVar36 * dVar36,0);
      if (!bVar11) {
        return false;
      }
      iVar23 = iVar23 + 1;
    } while (iVar23 < this->co[lVar34]);
  }
  dVar39 = voronoicell_base::max_radius_squared((voronoicell_base *)param_1);
  pcVar5 = this->con;
  uVar35 = SUB84(dVar39,0);
  uVar37 = (undefined4)((ulonglong)dVar39 >> 0x20);
  dVar41 = (dVar41 - *(double *)&pcVar5->field_0x70) -
           (double)param_4 * *(double *)&pcVar5->field_0x18;
  local_130 = (dVar3 - *(double *)&pcVar5->field_0x90) -
              (double)param_6 * *(double *)&pcVar5->field_0x28;
  local_128 = (dVar2 - *(double *)&pcVar5->field_0x80) -
              (double)param_5 * *(double *)&pcVar5->field_0x20;
  uVar22 = (uint)(dVar41 * this->xsp * __real_4020000000000000);
  uVar16 = (uint)(local_128 * this->ysp * __real_4020000000000000);
  uVar18 = (uint)(local_130 * this->zsp * __real_4020000000000000);
  if ((int)uVar22 < 4) {
    dVar2 = this->boxx - dVar41;
    local_168 = 0;
    local_164 = uVar28;
    uVar14 = uVar28;
  }
  else {
    uVar14 = 7 - uVar22;
    local_168 = 0x60007f;
    uVar22 = uVar28;
    if (-1 < (int)uVar14) {
      uVar22 = uVar14;
    }
    local_164 = 0x200001;
    uVar14 = 0x60007f;
    dVar2 = dVar41;
  }
  if ((int)uVar16 < 4) {
    uVar17 = uVar16;
    dVar3 = this->boxy - local_128;
  }
  else {
    uVar14 = uVar14 | 0x3003f80;
    local_164 = local_164 | 0x1000080;
    uVar17 = uVar28;
    dVar3 = local_128;
    local_168 = uVar14;
    if (-1 < (int)(7 - uVar16)) {
      uVar17 = 7 - uVar16;
    }
  }
  if ((int)uVar18 < 4) {
    uVar28 = uVar18;
    dVar39 = this->boxz - local_130;
  }
  else {
    uVar14 = uVar14 | 0x181fc000;
    local_164 = local_164 | 0x8004000;
    dVar39 = local_130;
    local_168 = uVar14;
    if (-1 < (int)(7 - uVar18)) {
      uVar28 = 7 - uVar18;
    }
  }
  iVar23 = (uVar22 + (uVar17 + uVar28 * 4) * 4) * 0x40;
  local_178 = 0;
  local_f8 = this->mrad + iVar23;
  uVar22 = this->wl[iVar23];
  local_170 = this->wl + iVar23;
  lVar20 = 0;
  puVar21 = local_170;
  local_120 = dVar41;
  do {
    if (local_178 == local_158) {
      dVar42 = voronoicell_base::max_radius_squared((voronoicell_base *)param_1);
      uVar35 = SUB84(dVar42,0);
      uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
      if (ppiVar32 !=
          (int **)`public:_bool___cdecl_voro::voro_compute<voro::container>::compute_cell<voro::voronoicell>(voro::voronoicell&___ptr64,int,int,int,int,int)___ptr64'
                  ::__l2::count_e) {
        local_158 = *(int *)ppiVar32;
        ppiVar32 = (int **)((longlong)ppiVar32 + 4);
        local_150 = ppiVar32;
      }
    }
    if ((double)CONCAT44(uVar37,uVar35) < local_f8[lVar20]) {
      return true;
    }
    puVar1 = puVar21 + 1;
    puVar21 = puVar21 + 1;
    uVar28 = (uVar14 ^ *puVar1) + local_164;
    local_178 = local_178 + 1;
    local_140 = lVar20 + 1;
    iVar25 = (uVar28 >> 7 & 0x7f) - 0x40;
    iVar23 = (uVar28 & 0x7f) - 0x40;
    iVar26 = (uVar28 >> 0xe & 0x7f) - 0x40;
    iVar33 = iVar12 + iVar23;
    if (((((-1 < iVar33) && (iVar33 < this->hx)) &&
         (iVar30 = iVar13 + iVar25, ppiVar32 = local_150, -1 < iVar30)) &&
        ((iVar30 < this->hy && (iVar24 = iVar26 + iVar27, -1 < iVar24)))) &&
       ((iVar24 < this->hz &&
        (bVar11 = compute_min_max_radius
                            (this,iVar23,iVar25,iVar26,dVar41,local_128,local_130,dVar2 * dVar2,
                             dVar3 * dVar3,dVar39 * dVar39,&local_100,
                             (double)CONCAT44(uVar37,uVar35),local_res20), !bVar11)))) {
      pcVar5 = this->con;
      if (pcVar5->field_0xa0 != '\0') {
        iVar23 = *(int *)pcVar5;
        if (param_4 + iVar33 < iVar23) {
          iVar33 = iVar33 + iVar23;
          dVar9 = *(double *)&pcVar5->field_0x70 - *(double *)&pcVar5->field_0x78;
        }
        else if (param_4 + iVar33 < iVar23 * 2) {
          dVar9 = 0.0;
        }
        else {
          iVar33 = iVar33 - iVar23;
          dVar9 = *(double *)&pcVar5->field_0x78 - *(double *)&pcVar5->field_0x70;
        }
      }
      if (pcVar5->field_0xa1 != '\0') {
        iVar23 = *(int *)&pcVar5->field_0x4;
        if (param_5 + iVar30 < iVar23) {
          iVar30 = iVar30 + iVar23;
          dVar8 = *(double *)&pcVar5->field_0x80 - *(double *)&pcVar5->field_0x88;
        }
        else if (param_5 + iVar30 < iVar23 * 2) {
          dVar8 = 0.0;
        }
        else {
          iVar30 = iVar30 - iVar23;
          dVar8 = *(double *)&pcVar5->field_0x88 - *(double *)&pcVar5->field_0x80;
        }
      }
      if (pcVar5->field_0xa2 != '\0') {
        iVar23 = *(int *)&pcVar5->field_0x8;
        if (param_6 + iVar24 < iVar23) {
          iVar24 = iVar24 + iVar23;
          dVar7 = *(double *)&pcVar5->field_0x90 - *(double *)&pcVar5->field_0x98;
        }
        else if (param_6 + iVar24 < iVar23 * 2) {
          dVar7 = 0.0;
        }
        else {
          iVar24 = iVar24 - iVar23;
          dVar7 = *(double *)&pcVar5->field_0x98 - *(double *)&pcVar5->field_0x90;
        }
      }
      iVar23 = (iVar24 * *(int *)&pcVar5->field_0x4 + iVar30) * *(int *)pcVar5 + iVar33 + iVar15;
      if (0 < this->co[iVar23]) {
        dVar41 = (double)CONCAT44(uVar46,uVar45) - dVar9;
        dVar42 = (double)CONCAT44(uVar48,uVar47) - dVar8;
        iVar25 = 0;
        dVar36 = local_f0 - dVar7;
        if ((double)CONCAT44(uVar37,uVar35) <= local_100 &&
            local_100 != (double)CONCAT44(uVar37,uVar35)) {
          do {
            lVar20 = (longlong)(iVar25 * this->ps);
            pdVar6 = this->p[iVar23];
            dVar40 = pdVar6[lVar20] - dVar41;
            dVar38 = pdVar6[lVar20 + 1] - dVar42;
            dVar44 = pdVar6[lVar20 + 2] - dVar36;
            dVar43 = dVar38 * dVar38 + dVar40 * dVar40 + dVar44 * dVar44;
            if ((dVar43 < (double)CONCAT44(uVar37,uVar35)) &&
               (bVar11 = voronoicell_base::nplane<voro::voronoicell>
                                   ((voronoicell_base *)param_1,param_1,dVar40,dVar38,dVar44,dVar43,
                                    0), !bVar11)) {
              return false;
            }
            iVar25 = iVar25 + 1;
          } while (iVar25 < this->co[iVar23]);
        }
        else {
          do {
            lVar20 = (longlong)(iVar25 * this->ps);
            pdVar6 = this->p[iVar23];
            dVar40 = pdVar6[lVar20] - dVar41;
            dVar38 = pdVar6[lVar20 + 1] - dVar42;
            dVar43 = pdVar6[lVar20 + 2] - dVar36;
            bVar11 = voronoicell_base::nplane<voro::voronoicell>
                               ((voronoicell_base *)param_1,param_1,dVar40,dVar38,dVar43,
                                dVar38 * dVar38 + dVar40 * dVar40 + dVar43 * dVar43,0);
            if (!bVar11) {
              return false;
            }
            iVar25 = iVar25 + 1;
          } while (iVar25 < this->co[iVar23]);
        }
        uVar47 = SUB84(local_108,0);
        uVar48 = (undefined4)((ulonglong)local_108 >> 0x20);
        uVar45 = SUB84(local_110,0);
        uVar46 = (undefined4)((ulonglong)local_110 >> 0x20);
        dVar41 = local_120;
      }
    }
    lVar20 = local_140;
    uVar14 = local_168;
  } while (local_140 < (int)uVar22);
  puVar21 = &this->mv;
  *puVar21 = *puVar21 + 1;
  if (*puVar21 == 0) {
    puVar21 = this->mask;
    if (puVar21 < puVar21 + this->hxyz) {
      do {
        *puVar21 = 0;
        puVar21 = puVar21 + 1;
      } while (puVar21 < this->mask + this->hxyz);
    }
    this->mv = 1;
  }
  local_138 = &this->mv;
  local_148 = this->qu;
  piVar29 = local_148;
  if (local_178 < 0x3f) {
    local_170 = local_170 + local_140;
    local_118 = local_148;
    do {
      lVar20 = local_140;
      if (local_178 == local_158) {
        dVar42 = voronoicell_base::max_radius_squared((voronoicell_base *)param_1);
        uVar35 = SUB84(dVar42,0);
        uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
        if (ppiVar32 !=
            (int **)`public:_bool___cdecl_voro::voro_compute<voro::container>::compute_cell<voro::voronoicell>(voro::voronoicell&___ptr64,int,int,int,int,int)___ptr64'
                    ::__l2::count_e) {
          local_158 = *(int *)ppiVar32;
          local_150 = (int **)((longlong)ppiVar32 + 4);
        }
      }
      if ((double)CONCAT44(uVar37,uVar35) < local_f8[lVar20]) {
        return true;
      }
      local_140 = lVar20 + 1;
      local_170 = local_170 + 1;
      local_178 = local_178 + 1;
      uVar22 = (local_168 ^ *local_170) + local_164;
      iVar25 = (uVar22 >> 7 & 0x7f) - 0x40;
      iVar26 = (uVar22 >> 0xe & 0x7f) - 0x40;
      iVar23 = (uVar22 & 0x7f) - 0x40;
      iVar33 = iVar12 + iVar23;
      if ((((-1 < iVar33) && (iVar33 < this->hx)) && (iVar30 = iVar13 + iVar25, -1 < iVar30)) &&
         (((iVar30 < this->hy && (iVar24 = iVar26 + iVar27, -1 < iVar24)) && (iVar24 < this->hz))))
      {
        local_e8 = this->mask +
                   (longlong)((this->hy * iVar24 + iVar30) * this->hx) + (longlong)iVar33;
        *local_e8 = *local_138;
        bVar11 = compute_min_max_radius
                           (this,iVar23,iVar25,iVar26,dVar41,local_128,local_130,dVar2 * dVar2,
                            dVar3 * dVar3,dVar39 * dVar39,&local_100,(double)CONCAT44(uVar37,uVar35)
                            ,local_res20);
        if (!bVar11) {
          pcVar5 = this->con;
          iVar23 = iVar33;
          if (pcVar5->field_0xa0 != '\0') {
            iVar25 = *(int *)pcVar5;
            if (param_4 + iVar33 < iVar25) {
              dVar9 = *(double *)&pcVar5->field_0x70 - *(double *)&pcVar5->field_0x78;
              iVar23 = iVar25 + iVar33;
            }
            else if (param_4 + iVar33 < iVar25 * 2) {
              dVar9 = 0.0;
            }
            else {
              dVar9 = *(double *)&pcVar5->field_0x78 - *(double *)&pcVar5->field_0x70;
              iVar23 = iVar33 - iVar25;
            }
          }
          iVar25 = iVar30;
          if (pcVar5->field_0xa1 != '\0') {
            iVar26 = *(int *)&pcVar5->field_0x4;
            if (param_5 + iVar30 < iVar26) {
              dVar8 = *(double *)&pcVar5->field_0x80 - *(double *)&pcVar5->field_0x88;
              iVar25 = iVar26 + iVar30;
            }
            else if (param_5 + iVar30 < iVar26 * 2) {
              dVar8 = 0.0;
            }
            else {
              dVar8 = *(double *)&pcVar5->field_0x88 - *(double *)&pcVar5->field_0x80;
              iVar25 = iVar30 - iVar26;
            }
          }
          iVar26 = iVar24;
          if (pcVar5->field_0xa2 != '\0') {
            iVar4 = *(int *)&pcVar5->field_0x8;
            if (param_6 + iVar24 < iVar4) {
              dVar7 = *(double *)&pcVar5->field_0x90 - *(double *)&pcVar5->field_0x98;
              iVar26 = iVar4 + iVar24;
            }
            else if (param_6 + iVar24 < iVar4 * 2) {
              dVar7 = 0.0;
            }
            else {
              dVar7 = *(double *)&pcVar5->field_0x98 - *(double *)&pcVar5->field_0x90;
              iVar26 = iVar24 - iVar4;
            }
          }
          iVar23 = (iVar26 * *(int *)&pcVar5->field_0x4 + iVar25) * *(int *)pcVar5 + iVar23 + iVar15
          ;
          if (0 < this->co[iVar23]) {
            dVar42 = (double)CONCAT44(uVar46,uVar45) - dVar9;
            dVar36 = (double)CONCAT44(uVar48,uVar47) - dVar8;
            iVar25 = 0;
            dVar40 = local_f0 - dVar7;
            if ((double)CONCAT44(uVar37,uVar35) <= local_100 &&
                local_100 != (double)CONCAT44(uVar37,uVar35)) {
              do {
                lVar20 = (longlong)(iVar25 * this->ps);
                pdVar6 = this->p[iVar23];
                dVar41 = pdVar6[lVar20] - dVar42;
                dVar38 = pdVar6[lVar20 + 1] - dVar36;
                dVar44 = pdVar6[lVar20 + 2] - dVar40;
                dVar43 = dVar38 * dVar38 + dVar41 * dVar41 + dVar44 * dVar44;
                if ((dVar43 < (double)CONCAT44(uVar37,uVar35)) &&
                   (bVar11 = voronoicell_base::nplane<voro::voronoicell>
                                       ((voronoicell_base *)param_1,param_1,dVar41,dVar38,dVar44,
                                        dVar43,0), !bVar11)) {
                  return false;
                }
                iVar25 = iVar25 + 1;
                dVar41 = local_120;
              } while (iVar25 < this->co[iVar23]);
            }
            else {
              do {
                lVar20 = (longlong)(iVar25 * this->ps);
                pdVar6 = this->p[iVar23];
                dVar41 = pdVar6[lVar20] - dVar42;
                dVar38 = pdVar6[lVar20 + 1] - dVar36;
                dVar43 = pdVar6[lVar20 + 2] - dVar40;
                bVar11 = voronoicell_base::nplane<voro::voronoicell>
                                   ((voronoicell_base *)param_1,param_1,dVar41,dVar38,dVar43,
                                    dVar38 * dVar38 + dVar41 * dVar41 + dVar43 * dVar43,0);
                if (!bVar11) {
                  return false;
                }
                iVar25 = iVar25 + 1;
                dVar41 = local_120;
              } while (iVar25 < this->co[iVar23]);
            }
          }
          if (this->qu_l + -0x12 < local_148) {
            add_list_memory(this,&local_118,&local_148);
          }
          scan_bits_mask_add(this,uVar22,local_e8,iVar33,iVar30,iVar24,&local_148);
        }
      }
      uVar45 = SUB84(local_110,0);
      uVar46 = (undefined4)((ulonglong)local_110 >> 0x20);
      uVar47 = SUB84(local_108,0);
      uVar48 = (undefined4)((ulonglong)local_108 >> 0x20);
      piVar29 = local_118;
      ppiVar32 = local_150;
    } while (local_140 < 0x3f);
  }
  dVar39 = local_108;
  dVar3 = local_110;
  dVar2 = local_130;
  if ((local_f8[local_178] <= (double)CONCAT44(uVar37,uVar35)) && (piVar29 != local_148)) {
    do {
      if (piVar29 == this->qu_l) {
        piVar29 = this->qu;
      }
      iVar23 = *piVar29;
      iVar25 = piVar29[1];
      iVar26 = piVar29[2];
      piVar29 = piVar29 + 3;
      dVar40 = (double)(iVar23 - iVar12) * this->boxx - dVar41;
      dVar36 = this->boxx + dVar40;
      dVar38 = (double)(iVar25 - iVar13) * this->boxy - local_128;
      dVar42 = (double)(iVar26 - iVar27) * this->boxz - dVar2;
      dVar43 = this->boxy + dVar38;
      dVar44 = this->boxz + dVar42;
      local_118 = piVar29;
      if (iVar12 < iVar23) {
        if (iVar13 < iVar25) {
          if (iVar27 < iVar26) {
            bVar11 = corner_test<voro::voronoicell>
                               (this,param_1,dVar40,dVar38,dVar42,dVar36,dVar43,dVar44,local_res20);
          }
          else if (iVar26 < iVar27) {
            bVar11 = corner_test<voro::voronoicell>
                               (this,param_1,dVar40,dVar38,dVar44,dVar36,dVar43,dVar42,local_res20);
          }
          else {
            bVar11 = edge_z_test<voro::voronoicell>
                               (this,param_1,dVar40,dVar38,dVar42,dVar36,dVar43,dVar44,local_res20);
          }
        }
        else if (iVar25 < iVar13) {
          if (iVar27 < iVar26) {
            bVar11 = corner_test<voro::voronoicell>
                               (this,param_1,dVar40,dVar43,dVar42,dVar36,dVar38,dVar44,local_res20);
          }
          else if (iVar26 < iVar27) {
            bVar11 = corner_test<voro::voronoicell>
                               (this,param_1,dVar40,dVar43,dVar44,dVar36,dVar38,dVar42,local_res20);
          }
          else {
            bVar11 = edge_z_test<voro::voronoicell>
                               (this,param_1,dVar40,dVar43,dVar42,dVar36,dVar38,dVar44,local_res20);
          }
        }
        else if (iVar27 < iVar26) {
          bVar11 = edge_y_test<voro::voronoicell>
                             (this,param_1,dVar40,dVar38,dVar42,dVar36,dVar43,dVar44,local_res20);
        }
        else if (iVar26 < iVar27) {
          bVar11 = edge_y_test<voro::voronoicell>
                             (this,param_1,dVar40,dVar38,dVar44,dVar36,dVar43,dVar42,local_res20);
        }
        else {
          bVar11 = face_x_test<voro::voronoicell>
                             (this,param_1,dVar40,dVar38,dVar42,dVar43,dVar44,local_res20);
        }
LAB_1436b9de2:
        if (bVar11 == false) goto LAB_1436b9dfd;
      }
      else {
        if (iVar23 < iVar12) {
          if (iVar13 < iVar25) {
            if (iVar27 < iVar26) {
              bVar11 = corner_test<voro::voronoicell>
                                 (this,param_1,dVar36,dVar38,dVar42,dVar40,dVar43,dVar44,local_res20
                                 );
            }
            else if (iVar26 < iVar27) {
              bVar11 = corner_test<voro::voronoicell>
                                 (this,param_1,dVar36,dVar38,dVar44,dVar40,dVar43,dVar42,local_res20
                                 );
            }
            else {
              bVar11 = edge_z_test<voro::voronoicell>
                                 (this,param_1,dVar36,dVar38,dVar42,dVar40,dVar43,dVar44,local_res20
                                 );
            }
          }
          else if (iVar25 < iVar13) {
            if (iVar27 < iVar26) {
              bVar11 = corner_test<voro::voronoicell>
                                 (this,param_1,dVar36,dVar43,dVar42,dVar40,dVar38,dVar44,local_res20
                                 );
            }
            else if (iVar26 < iVar27) {
              bVar11 = corner_test<voro::voronoicell>
                                 (this,param_1,dVar36,dVar43,dVar44,dVar40,dVar38,dVar42,local_res20
                                 );
            }
            else {
              bVar11 = edge_z_test<voro::voronoicell>
                                 (this,param_1,dVar36,dVar43,dVar42,dVar40,dVar38,dVar44,local_res20
                                 );
            }
          }
          else if (iVar27 < iVar26) {
            bVar11 = edge_y_test<voro::voronoicell>
                               (this,param_1,dVar36,dVar38,dVar42,dVar40,dVar43,dVar44,local_res20);
          }
          else if (iVar26 < iVar27) {
            bVar11 = edge_y_test<voro::voronoicell>
                               (this,param_1,dVar36,dVar38,dVar44,dVar40,dVar43,dVar42,local_res20);
          }
          else {
            bVar11 = face_x_test<voro::voronoicell>
                               (this,param_1,dVar36,dVar38,dVar42,dVar43,dVar44,local_res20);
          }
          goto LAB_1436b9de2;
        }
        if (iVar13 < iVar25) {
          if (iVar27 < iVar26) {
            bVar11 = edge_x_test<voro::voronoicell>
                               (this,param_1,dVar40,dVar38,dVar42,dVar36,dVar43,dVar44,local_res20);
          }
          else if (iVar26 < iVar27) {
            bVar11 = edge_x_test<voro::voronoicell>
                               (this,param_1,dVar40,dVar38,dVar44,dVar36,dVar43,dVar42,local_res20);
          }
          else {
            bVar11 = face_y_test<voro::voronoicell>
                               (this,param_1,dVar40,dVar38,dVar42,dVar36,dVar44,local_res20);
          }
          goto LAB_1436b9de2;
        }
        if (iVar25 < iVar13) {
          if (iVar27 < iVar26) {
            bVar11 = edge_x_test<voro::voronoicell>
                               (this,param_1,dVar40,dVar43,dVar42,dVar36,dVar38,dVar44,local_res20);
          }
          else if (iVar26 < iVar27) {
            bVar11 = edge_x_test<voro::voronoicell>
                               (this,param_1,dVar40,dVar43,dVar44,dVar36,dVar38,dVar42,local_res20);
          }
          else {
            bVar11 = face_y_test<voro::voronoicell>
                               (this,param_1,dVar40,dVar43,dVar42,dVar36,dVar44,local_res20);
          }
          goto LAB_1436b9de2;
        }
        if ((iVar27 < iVar26) || (dVar42 = dVar44, iVar26 < iVar27)) {
          bVar11 = face_z_test<voro::voronoicell>
                             (this,param_1,dVar40,dVar38,dVar42,dVar36,dVar43,local_res20);
          goto LAB_1436b9de2;
        }
        voro_fatal_error("Compute cell routine revisiting central block, which should never\nhappen."
                         ,3);
LAB_1436b9dfd:
        pcVar5 = this->con;
        iVar33 = iVar23;
        if (pcVar5->field_0xa0 != '\0') {
          iVar30 = *(int *)pcVar5;
          if (param_4 + iVar23 < iVar30) {
            dVar9 = *(double *)&pcVar5->field_0x70 - *(double *)&pcVar5->field_0x78;
            iVar33 = iVar30 + iVar23;
          }
          else if (param_4 + iVar23 < iVar30 * 2) {
            dVar9 = 0.0;
          }
          else {
            dVar9 = *(double *)&pcVar5->field_0x78 - *(double *)&pcVar5->field_0x70;
            iVar33 = iVar23 - iVar30;
          }
        }
        iVar30 = iVar25;
        if (pcVar5->field_0xa1 != '\0') {
          iVar24 = *(int *)&pcVar5->field_0x4;
          if (param_5 + iVar25 < iVar24) {
            dVar8 = *(double *)&pcVar5->field_0x80 - *(double *)&pcVar5->field_0x88;
            iVar30 = iVar24 + iVar25;
          }
          else if (param_5 + iVar25 < iVar24 * 2) {
            dVar8 = 0.0;
          }
          else {
            dVar8 = *(double *)&pcVar5->field_0x88 - *(double *)&pcVar5->field_0x80;
            iVar30 = iVar25 - iVar24;
          }
        }
        iVar24 = iVar26;
        if (pcVar5->field_0xa2 != '\0') {
          iVar4 = *(int *)&pcVar5->field_0x8;
          if (param_6 + iVar26 < iVar4) {
            dVar7 = *(double *)&pcVar5->field_0x90 - *(double *)&pcVar5->field_0x98;
            iVar24 = iVar4 + iVar26;
          }
          else if (param_6 + iVar26 < iVar4 * 2) {
            dVar7 = 0.0;
          }
          else {
            dVar7 = *(double *)&pcVar5->field_0x98 - *(double *)&pcVar5->field_0x90;
            iVar24 = iVar26 - iVar4;
          }
        }
        iVar33 = (iVar24 * *(int *)&pcVar5->field_0x4 + iVar30) * *(int *)pcVar5 + iVar33 + iVar15;
        if (0 < this->co[iVar33]) {
          iVar30 = 0;
          dVar42 = local_f0 - dVar7;
          do {
            lVar20 = (longlong)(iVar30 * this->ps);
            pdVar6 = this->p[iVar33];
            dVar41 = pdVar6[lVar20] - (dVar3 - dVar9);
            dVar36 = pdVar6[lVar20 + 1] - (dVar39 - dVar8);
            dVar40 = pdVar6[lVar20 + 2] - dVar42;
            bVar11 = voronoicell_base::nplane<voro::voronoicell>
                               ((voronoicell_base *)param_1,param_1,dVar41,dVar36,dVar40,
                                dVar36 * dVar36 + dVar41 * dVar41 + dVar40 * dVar40,0);
            if (!bVar11) {
              return false;
            }
            iVar30 = iVar30 + 1;
            dVar41 = local_120;
          } while (iVar30 < this->co[iVar33]);
        }
        if (local_148 < piVar29) {
          lVar20 = (longlong)piVar29 - (longlong)local_148 >> 2;
        }
        else {
          lVar20 = ((longlong)this->qu_l - (longlong)local_148 >> 2) +
                   ((longlong)piVar29 - (longlong)this->qu >> 2);
        }
        if (lVar20 < 0x12) {
          add_list_memory(this,&local_118,&local_148);
          piVar29 = local_118;
        }
        add_to_mask(this,iVar23,iVar25,iVar26,&local_148);
      }
    } while (piVar29 != local_148);
  }
  return true;
}

// compute_cell<voro::voronoicell> @ 1436ba0c0

bool __thiscall
voro::voro_compute<voro::container_poly>::compute_cell<voro::voronoicell>
          (voro_compute<voro::container_poly> *this,voronoicell *param_1,int param_2,int param_3,
          int param_4,int param_5,int param_6)

{
  double dVar1;
  double dVar2;
  int iVar3;
  container_poly *pcVar4;
  double *pdVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  uint *puVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  undefined8 *puVar30;
  longlong lVar31;
  int iVar32;
  longlong lVar33;
  undefined4 uVar34;
  double dVar35;
  undefined4 uVar43;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  uint local_res8;
  double dVar57;
  uint *local_1a0;
  uint local_198;
  radius_info local_188;
  uint local_170;
  int *local_168;
  uint local_160;
  int local_15c;
  uint *local_158;
  double local_150;
  double local_148;
  double local_140;
  int *local_138;
  int **local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  longlong local_108;
  double *local_100;
  double local_f8;
  double local_f0;
  uint *local_e8;
  double local_e0;
  
  pcVar4 = this->con;
  uVar22 = (uint)__xmm_80000000000000008000000000000000;
  uVar28 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar8 = 0.0;
  dVar9 = 0.0;
  dVar10 = 0.0;
  lVar33 = (longlong)param_2;
  lVar20 = (longlong)(param_3 * *(int *)&pcVar4->field_0xc8);
  lVar31 = *(longlong *)(*(longlong *)&pcVar4->field_0xb0 + lVar33 * 8);
  dVar1 = *(double *)(lVar31 + lVar20 * 8);
  uVar55 = SUB84(dVar1,0);
  uVar56 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar45 = *(double *)(lVar31 + 8 + lVar20 * 8);
  dVar48 = *(double *)(lVar31 + 0x10 + lVar20 * 8);
  if (pcVar4->field_0xa0 == '\0') {
    dVar47 = *(double *)&pcVar4->field_0x78 - dVar1;
    dVar2 = *(double *)&pcVar4->field_0x70 - dVar1;
    iVar13 = param_4;
  }
  else {
    dVar47 = (*(double *)&pcVar4->field_0x78 - *(double *)&pcVar4->field_0x70) *
             __real_3fe0000000000000;
    dVar2 = (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) ^ uVar28,SUB84(dVar47,0) ^ uVar22);
    iVar13 = *(int *)pcVar4;
  }
  if (pcVar4->field_0xa1 == '\0') {
    dVar35 = *(double *)&pcVar4->field_0x88 - dVar45;
    dVar53 = *(double *)&pcVar4->field_0x80 - dVar45;
    iVar14 = param_5;
  }
  else {
    dVar35 = (*(double *)&pcVar4->field_0x88 - *(double *)&pcVar4->field_0x80) *
             __real_3fe0000000000000;
    dVar53 = (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) ^ uVar28,SUB84(dVar35,0) ^ uVar22);
    iVar14 = *(int *)&pcVar4->field_0x4;
  }
  if (pcVar4->field_0xa2 == '\0') {
    dVar44 = *(double *)&pcVar4->field_0x98 - dVar48;
    dVar51 = *(double *)&pcVar4->field_0x90 - dVar48;
    iVar27 = param_6;
  }
  else {
    dVar44 = (*(double *)&pcVar4->field_0x98 - *(double *)&pcVar4->field_0x90) *
             __real_3fe0000000000000;
    dVar51 = (double)CONCAT44((uint)((ulonglong)dVar44 >> 0x20) ^ uVar28,SUB84(dVar44,0) ^ uVar22);
    iVar27 = *(int *)&pcVar4->field_0x8;
  }
  local_118 = dVar1;
  local_f8 = dVar45;
  local_f0 = dVar48;
  voronoicell_base::init_base((voronoicell_base *)param_1,dVar2,dVar47,dVar53,dVar35,dVar51,dVar44);
  puVar30 = *(undefined8 **)&pcVar4->field_0x50;
  if (puVar30 < *(undefined8 **)&pcVar4->field_0x58) {
    do {
      cVar11 = (**(code **)(*(longlong *)*puVar30 + 0x18))((longlong *)*puVar30,param_1);
      if (cVar11 == '\0') {
        return false;
      }
      puVar30 = puVar30 + 1;
    } while (puVar30 < *(undefined8 **)&pcVar4->field_0x58);
  }
  uVar28 = 0;
  local_170 = 3;
  dVar2 = *(double *)&this->con->field_0xd8;
  iVar16 = (param_2 - (iVar27 * *(int *)&pcVar4->field_0x4 + iVar14) * *(int *)pcVar4) - iVar13;
  local_130 = &`public:_bool___cdecl_voro::voro_compute<voro::container_poly>::compute_cell<voro::voronoicell>(voro::voronoicell&___ptr64,int,int,int,int,int)___ptr64'
               ::__l2::count_list;
  dVar47 = *(double *)
            (*(longlong *)(*(longlong *)&this->con->field_0xd0 + lVar33 * 8) + 0x18 +
            (longlong)(param_3 * 4) * 8);
  dVar47 = dVar47 * dVar47;
  dVar2 = dVar47 - dVar2 * dVar2;
  uVar22 = uVar28;
  local_188.r_rad = dVar47;
  local_188.r_mul = dVar2;
  if (0 < param_3) {
    lVar31 = 0;
    do {
      lVar20 = (longlong)(int)(uVar22 * this->ps);
      pdVar5 = this->p[lVar33];
      dVar44 = pdVar5[lVar20] - dVar1;
      dVar51 = pdVar5[lVar20 + 1] - dVar45;
      dVar53 = pdVar5[lVar20 + 2] - dVar48;
      dVar35 = *(double *)
                (*(longlong *)(*(longlong *)&this->con->field_0xd0 + lVar33 * 8) + 0x18 + lVar31);
      bVar12 = voronoicell_base::nplane<voro::voronoicell>
                         ((voronoicell_base *)param_1,param_1,dVar44,dVar51,dVar53,
                          (dVar51 * dVar51 + dVar44 * dVar44 + dVar53 * dVar53 + dVar47) -
                          dVar35 * dVar35,0);
      if (!bVar12) {
        return false;
      }
      uVar22 = uVar22 + 1;
      lVar31 = lVar31 + 0x20;
    } while ((int)uVar22 < param_3);
  }
  iVar23 = uVar22 + 1;
  if (iVar23 < this->co[lVar33]) {
    lVar31 = (longlong)iVar23 << 5;
    do {
      lVar20 = (longlong)(iVar23 * this->ps);
      pdVar5 = this->p[lVar33];
      dVar44 = pdVar5[lVar20] - dVar1;
      dVar51 = pdVar5[lVar20 + 1] - dVar45;
      dVar53 = pdVar5[lVar20 + 2] - dVar48;
      dVar35 = *(double *)
                (*(longlong *)(*(longlong *)&this->con->field_0xd0 + lVar33 * 8) + 0x18 + lVar31);
      bVar12 = voronoicell_base::nplane<voro::voronoicell>
                         ((voronoicell_base *)param_1,param_1,dVar44,dVar51,dVar53,
                          (dVar51 * dVar51 + dVar44 * dVar44 + dVar53 * dVar53 + dVar47) -
                          dVar35 * dVar35,0);
      if (!bVar12) {
        return false;
      }
      iVar23 = iVar23 + 1;
      lVar31 = lVar31 + 0x20;
    } while (iVar23 < this->co[lVar33]);
  }
  dVar35 = voronoicell_base::max_radius_squared((voronoicell_base *)param_1);
  pcVar4 = this->con;
  uVar34 = SUB84(dVar35,0);
  uVar43 = (undefined4)((ulonglong)dVar35 >> 0x20);
  local_150 = (dVar1 - *(double *)&pcVar4->field_0x70) -
              (double)param_4 * *(double *)&pcVar4->field_0x18;
  local_148 = (dVar48 - *(double *)&pcVar4->field_0x90) -
              (double)param_6 * *(double *)&pcVar4->field_0x28;
  local_140 = (dVar45 - *(double *)&pcVar4->field_0x80) -
              (double)param_5 * *(double *)&pcVar4->field_0x20;
  uVar22 = (uint)(local_150 * this->xsp * __real_4020000000000000);
  uVar17 = (uint)(local_140 * this->ysp * __real_4020000000000000);
  uVar19 = (uint)(local_148 * this->zsp * __real_4020000000000000);
  if ((int)uVar22 < 4) {
    dVar1 = this->boxx - local_150;
    local_res8 = 0;
    local_198 = uVar28;
    uVar15 = uVar28;
  }
  else {
    uVar15 = 7 - uVar22;
    local_res8 = 0x60007f;
    uVar22 = uVar28;
    if (-1 < (int)uVar15) {
      uVar22 = uVar15;
    }
    local_198 = 0x200001;
    uVar15 = 0x60007f;
    dVar1 = local_150;
  }
  if ((int)uVar17 < 4) {
    uVar18 = uVar17;
    dVar45 = this->boxy - local_140;
  }
  else {
    uVar15 = uVar15 | 0x3003f80;
    local_198 = local_198 | 0x1000080;
    uVar18 = uVar28;
    dVar45 = local_140;
    local_res8 = uVar15;
    if (-1 < (int)(7 - uVar17)) {
      uVar18 = 7 - uVar17;
    }
  }
  if ((int)uVar19 < 4) {
    uVar17 = uVar19;
    dVar48 = this->boxz - local_148;
  }
  else {
    uVar15 = uVar15 | 0x181fc000;
    local_198 = local_198 | 0x8004000;
    uVar17 = uVar28;
    dVar48 = local_148;
    local_res8 = uVar15;
    if (-1 < (int)(7 - uVar19)) {
      uVar17 = 7 - uVar19;
    }
  }
  dVar1 = dVar1 * dVar1;
  dVar45 = dVar45 * dVar45;
  iVar23 = (uVar22 + (uVar18 + uVar17 * 4) * 4) * 0x40;
  dVar48 = dVar48 * dVar48;
  local_100 = this->mrad + iVar23;
  uVar22 = this->wl[iVar23];
  local_1a0 = this->wl + iVar23;
  puVar21 = local_1a0;
  lVar31 = 0;
  local_128 = dVar45;
  local_120 = dVar1;
  local_e0 = dVar48;
  do {
    if (uVar28 == local_170) {
      dVar35 = voronoicell_base::max_radius_squared((voronoicell_base *)param_1);
      uVar34 = SUB84(dVar35,0);
      uVar43 = (undefined4)((ulonglong)dVar35 >> 0x20);
      if (local_130 !=
          (int **)`public:_bool___cdecl_voro::voro_compute<voro::container_poly>::compute_cell<voro::voronoicell>(voro::voronoicell&___ptr64,int,int,int,int,int)___ptr64'
                  ::__l2::count_e) {
        local_170 = *(uint *)local_130;
        local_130 = (int **)((longlong)local_130 + 4);
      }
    }
    auVar36._0_8_ = local_100[lVar31] * (double)CONCAT44(uVar43,uVar34);
    auVar36._8_8_ = 0;
    auVar36 = sqrtpd(auVar36,auVar36);
    if (auVar36._0_8_ < dVar2 + local_100[lVar31]) {
      return true;
    }
    local_108 = lVar31 + 1;
    puVar21 = puVar21 + 1;
    uVar28 = uVar28 + 1;
    uVar17 = (uVar15 ^ *puVar21) + local_198;
    iVar25 = (uVar17 >> 7 & 0x7f) - 0x40;
    iVar23 = (uVar17 & 0x7f) - 0x40;
    iVar26 = (uVar17 >> 0xe & 0x7f) - 0x40;
    iVar32 = iVar13 + iVar23;
    if (((((-1 < iVar32) && (iVar32 < this->hx)) &&
         (iVar29 = iVar14 + iVar25, uVar15 = local_res8, -1 < iVar29)) &&
        ((iVar29 < this->hy && (iVar24 = iVar26 + iVar27, -1 < iVar24)))) &&
       ((iVar24 < this->hz &&
        (bVar12 = compute_min_max_radius
                            (this,iVar23,iVar25,iVar26,local_150,local_140,local_148,dVar1,dVar45,
                             dVar48,&local_110,(double)CONCAT44(uVar43,uVar34),&local_188), !bVar12)
        ))) {
      pcVar4 = this->con;
      if (pcVar4->field_0xa0 != '\0') {
        iVar23 = *(int *)pcVar4;
        if (param_4 + iVar32 < iVar23) {
          iVar32 = iVar32 + iVar23;
          dVar10 = *(double *)&pcVar4->field_0x70 - *(double *)&pcVar4->field_0x78;
        }
        else if (param_4 + iVar32 < iVar23 * 2) {
          dVar10 = 0.0;
        }
        else {
          iVar32 = iVar32 - iVar23;
          dVar10 = *(double *)&pcVar4->field_0x78 - *(double *)&pcVar4->field_0x70;
        }
      }
      if (pcVar4->field_0xa1 != '\0') {
        iVar23 = *(int *)&pcVar4->field_0x4;
        if (param_5 + iVar29 < iVar23) {
          iVar29 = iVar29 + iVar23;
          dVar9 = *(double *)&pcVar4->field_0x80 - *(double *)&pcVar4->field_0x88;
        }
        else if (param_5 + iVar29 < iVar23 * 2) {
          dVar9 = 0.0;
        }
        else {
          iVar29 = iVar29 - iVar23;
          dVar9 = *(double *)&pcVar4->field_0x88 - *(double *)&pcVar4->field_0x80;
        }
      }
      if (pcVar4->field_0xa2 != '\0') {
        iVar23 = *(int *)&pcVar4->field_0x8;
        if (param_6 + iVar24 < iVar23) {
          iVar24 = iVar24 + iVar23;
          dVar8 = *(double *)&pcVar4->field_0x90 - *(double *)&pcVar4->field_0x98;
        }
        else if (param_6 + iVar24 < iVar23 * 2) {
          dVar8 = 0.0;
        }
        else {
          iVar24 = iVar24 - iVar23;
          dVar8 = *(double *)&pcVar4->field_0x98 - *(double *)&pcVar4->field_0x90;
        }
      }
      lVar31 = (longlong)
               ((iVar24 * *(int *)&pcVar4->field_0x4 + iVar29) * *(int *)pcVar4 + iVar32 + iVar16);
      if (0 < this->co[lVar31]) {
        auVar37._0_8_ = local_110 * (double)CONCAT44(uVar43,uVar34);
        auVar37._8_8_ = 0;
        dVar45 = local_f8 - dVar9;
        iVar23 = 0;
        lVar20 = 0;
        dVar1 = (double)CONCAT44(uVar56,uVar55) - dVar10;
        dVar35 = local_f0 - dVar8;
        auVar36 = sqrtpd(auVar37,auVar37);
        if (auVar36._0_8_ < dVar2 + local_110) {
          do {
            lVar33 = (longlong)(iVar23 * this->ps);
            pdVar5 = this->p[lVar31];
            dVar51 = pdVar5[lVar33] - dVar1;
            dVar46 = pdVar5[lVar33 + 1] - dVar45;
            dVar49 = pdVar5[lVar33 + 2] - dVar35;
            dVar53 = *(double *)
                      (*(longlong *)(*(longlong *)&this->con->field_0xd0 + lVar31 * 8) + 0x18 +
                      lVar20);
            auVar38._0_8_ = dVar53 * dVar53;
            auVar38._8_8_ = 0;
            dVar53 = dVar46 * dVar46 + dVar51 * dVar51 + dVar49 * dVar49;
            dVar44 = (local_188.r_rad - auVar38._0_8_) + dVar53;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = dVar53 * (double)CONCAT44(uVar43,uVar34);
            auVar36 = sqrtpd(auVar38,auVar7);
            if ((dVar44 < auVar36._0_8_) &&
               (bVar12 = voronoicell_base::nplane<voro::voronoicell>
                                   ((voronoicell_base *)param_1,param_1,dVar51,dVar46,dVar49,dVar44,
                                    0), !bVar12)) {
              return false;
            }
            iVar23 = iVar23 + 1;
            lVar20 = lVar20 + 0x20;
          } while (iVar23 < this->co[lVar31]);
        }
        else {
          do {
            lVar33 = (longlong)(iVar23 * this->ps);
            pdVar5 = this->p[lVar31];
            dVar44 = pdVar5[lVar33] - dVar1;
            dVar51 = pdVar5[lVar33 + 1] - dVar45;
            dVar53 = pdVar5[lVar33 + 2] - dVar35;
            dVar48 = *(double *)
                      (*(longlong *)(*(longlong *)&this->con->field_0xd0 + lVar31 * 8) + 0x18 +
                      lVar20);
            bVar12 = voronoicell_base::nplane<voro::voronoicell>
                               ((voronoicell_base *)param_1,param_1,dVar44,dVar51,dVar53,
                                (dVar51 * dVar51 + dVar44 * dVar44 + dVar53 * dVar53 + dVar47) -
                                dVar48 * dVar48,0);
            if (!bVar12) {
              return false;
            }
            iVar23 = iVar23 + 1;
            lVar20 = lVar20 + 0x20;
            dVar48 = local_e0;
          } while (iVar23 < this->co[lVar31]);
        }
        uVar55 = SUB84(local_118,0);
        uVar56 = (undefined4)((ulonglong)local_118 >> 0x20);
        dVar45 = local_128;
        dVar1 = local_120;
      }
    }
    lVar31 = local_108;
  } while (local_108 < (int)uVar22);
  puVar21 = &this->mv;
  *puVar21 = *puVar21 + 1;
  if (*puVar21 == 0) {
    puVar21 = this->mask;
    if (puVar21 < puVar21 + this->hxyz) {
      do {
        *puVar21 = 0;
        puVar21 = puVar21 + 1;
      } while (puVar21 < this->mask + this->hxyz);
    }
    this->mv = 1;
  }
  local_158 = &this->mv;
  local_168 = this->qu;
  puVar21 = (uint *)local_168;
  if ((int)uVar28 < 0x3f) {
    local_1a0 = local_1a0 + local_108;
    local_138 = local_168;
    do {
      lVar31 = local_108;
      if (uVar28 == local_170) {
        dVar35 = voronoicell_base::max_radius_squared((voronoicell_base *)param_1);
        uVar34 = SUB84(dVar35,0);
        uVar43 = (undefined4)((ulonglong)dVar35 >> 0x20);
        if (local_130 !=
            (int **)`public:_bool___cdecl_voro::voro_compute<voro::container_poly>::compute_cell<voro::voronoicell>(voro::voronoicell&___ptr64,int,int,int,int,int)___ptr64'
                    ::__l2::count_e) {
          local_170 = *(uint *)local_130;
          local_130 = (int **)((longlong)local_130 + 4);
        }
      }
      auVar39._0_8_ = local_100[lVar31] * (double)CONCAT44(uVar43,uVar34);
      auVar39._8_8_ = 0;
      auVar36 = sqrtpd(auVar39,auVar39);
      if (auVar36._0_8_ < dVar2 + local_100[lVar31]) {
        return true;
      }
      local_108 = lVar31 + 1;
      local_1a0 = local_1a0 + 1;
      uVar28 = uVar28 + 1;
      uVar22 = (local_res8 ^ *local_1a0) + local_198;
      iVar26 = (uVar22 >> 7 & 0x7f) - 0x40;
      iVar32 = (uVar22 >> 0xe & 0x7f) - 0x40;
      iVar25 = (uVar22 & 0x7f) - 0x40;
      iVar23 = iVar13 + iVar25;
      local_160 = uVar22;
      local_15c = iVar23;
      if ((((-1 < iVar23) && (iVar23 < this->hx)) && (iVar29 = iVar14 + iVar26, -1 < iVar29)) &&
         (((iVar29 < this->hy && (iVar24 = iVar32 + iVar27, -1 < iVar24)) && (iVar24 < this->hz))))
      {
        local_e8 = this->mask +
                   (longlong)((this->hy * iVar24 + iVar29) * this->hx) + (longlong)iVar23;
        *local_e8 = *local_158;
        bVar12 = compute_min_max_radius
                           (this,iVar25,iVar26,iVar32,local_150,local_140,local_148,dVar1,dVar45,
                            dVar48,&local_110,(double)CONCAT44(uVar43,uVar34),&local_188);
        if (!bVar12) {
          pcVar4 = this->con;
          iVar25 = iVar23;
          if (pcVar4->field_0xa0 != '\0') {
            iVar26 = *(int *)pcVar4;
            if (param_4 + iVar23 < iVar26) {
              dVar10 = *(double *)&pcVar4->field_0x70 - *(double *)&pcVar4->field_0x78;
              iVar25 = iVar26 + iVar23;
            }
            else if (param_4 + iVar23 < iVar26 * 2) {
              dVar10 = 0.0;
            }
            else {
              dVar10 = *(double *)&pcVar4->field_0x78 - *(double *)&pcVar4->field_0x70;
              iVar25 = iVar23 - iVar26;
            }
          }
          iVar26 = iVar29;
          if (pcVar4->field_0xa1 != '\0') {
            iVar32 = *(int *)&pcVar4->field_0x4;
            if (param_5 + iVar29 < iVar32) {
              dVar9 = *(double *)&pcVar4->field_0x80 - *(double *)&pcVar4->field_0x88;
              iVar26 = iVar32 + iVar29;
            }
            else if (param_5 + iVar29 < iVar32 * 2) {
              dVar9 = 0.0;
            }
            else {
              dVar9 = *(double *)&pcVar4->field_0x88 - *(double *)&pcVar4->field_0x80;
              iVar26 = iVar29 - iVar32;
            }
          }
          iVar32 = iVar24;
          if (pcVar4->field_0xa2 != '\0') {
            iVar3 = *(int *)&pcVar4->field_0x8;
            if (param_6 + iVar24 < iVar3) {
              dVar8 = *(double *)&pcVar4->field_0x90 - *(double *)&pcVar4->field_0x98;
              iVar32 = iVar3 + iVar24;
            }
            else if (param_6 + iVar24 < iVar3 * 2) {
              dVar8 = 0.0;
            }
            else {
              dVar8 = *(double *)&pcVar4->field_0x98 - *(double *)&pcVar4->field_0x90;
              iVar32 = iVar24 - iVar3;
            }
          }
          lVar31 = (longlong)
                   ((iVar32 * *(int *)&pcVar4->field_0x4 + iVar26) * *(int *)pcVar4 + iVar25 +
                   iVar16);
          if (0 < this->co[lVar31]) {
            auVar40._0_8_ = local_110 * (double)CONCAT44(uVar43,uVar34);
            auVar40._8_8_ = 0;
            dVar53 = local_f8 - dVar9;
            iVar25 = 0;
            lVar20 = 0;
            dVar35 = (double)CONCAT44(uVar56,uVar55) - dVar10;
            dVar44 = local_f0 - dVar8;
            auVar36 = sqrtpd(auVar40,auVar40);
            if (auVar36._0_8_ < dVar2 + local_110) {
              do {
                lVar33 = (longlong)(iVar25 * this->ps);
                pdVar5 = this->p[lVar31];
                dVar51 = pdVar5[lVar33] - dVar35;
                dVar46 = pdVar5[lVar33 + 1] - dVar53;
                dVar49 = pdVar5[lVar33 + 2] - dVar44;
                dVar1 = *(double *)
                         (*(longlong *)(*(longlong *)&this->con->field_0xd0 + lVar31 * 8) + 0x18 +
                         lVar20);
                auVar41._0_8_ = dVar1 * dVar1;
                auVar41._8_8_ = 0;
                dVar1 = dVar46 * dVar46 + dVar51 * dVar51 + dVar49 * dVar49;
                dVar45 = (local_188.r_rad - auVar41._0_8_) + dVar1;
                auVar6._8_8_ = 0;
                auVar6._0_8_ = dVar1 * (double)CONCAT44(uVar43,uVar34);
                auVar36 = sqrtpd(auVar41,auVar6);
                if ((dVar45 < auVar36._0_8_) &&
                   (bVar12 = voronoicell_base::nplane<voro::voronoicell>
                                       ((voronoicell_base *)param_1,param_1,dVar51,dVar46,dVar49,
                                        dVar45,0), !bVar12)) {
                  return false;
                }
                iVar25 = iVar25 + 1;
                lVar20 = lVar20 + 0x20;
                uVar22 = local_160;
                iVar23 = local_15c;
                dVar45 = local_128;
                dVar1 = local_120;
              } while (iVar25 < this->co[lVar31]);
            }
            else {
              do {
                lVar33 = (longlong)(iVar25 * this->ps);
                pdVar5 = this->p[lVar31];
                dVar48 = pdVar5[lVar33] - dVar35;
                dVar51 = pdVar5[lVar33 + 1] - dVar53;
                dVar45 = pdVar5[lVar33 + 2] - dVar44;
                dVar1 = *(double *)
                         (*(longlong *)(*(longlong *)&this->con->field_0xd0 + lVar31 * 8) + 0x18 +
                         lVar20);
                bVar12 = voronoicell_base::nplane<voro::voronoicell>
                                   ((voronoicell_base *)param_1,param_1,dVar48,dVar51,dVar45,
                                    (dVar51 * dVar51 + dVar48 * dVar48 + dVar45 * dVar45 + dVar47) -
                                    dVar1 * dVar1,0);
                if (!bVar12) {
                  return false;
                }
                iVar25 = iVar25 + 1;
                lVar20 = lVar20 + 0x20;
                uVar22 = local_160;
                iVar23 = local_15c;
                dVar48 = local_e0;
                dVar45 = local_128;
                dVar1 = local_120;
              } while (iVar25 < this->co[lVar31]);
            }
          }
          if (this->qu_l + -0x12 < local_168) {
            add_list_memory(this,&local_138,&local_168);
          }
          scan_bits_mask_add(this,uVar22,local_e8,iVar23,iVar29,iVar24,&local_168);
        }
      }
      uVar55 = SUB84(local_118,0);
      uVar56 = (undefined4)((ulonglong)local_118 >> 0x20);
      puVar21 = (uint *)local_138;
    } while (local_108 < 0x3f);
  }
  dVar48 = local_118;
  dVar45 = local_148;
  dVar1 = local_150;
  auVar42._0_8_ = local_100[(int)uVar28] * (double)CONCAT44(uVar43,uVar34);
  auVar42._8_8_ = 0;
  auVar36 = sqrtpd(auVar42,auVar42);
  if ((dVar2 + local_100[(int)uVar28] <= auVar36._0_8_) && (puVar21 != (uint *)local_168)) {
    do {
      if (puVar21 == (uint *)this->qu_l) {
        puVar21 = (uint *)this->qu;
      }
      iVar23 = *puVar21;
      iVar25 = puVar21[1];
      iVar26 = puVar21[2];
      puVar21 = puVar21 + 3;
      dVar49 = (double)(iVar23 - iVar13) * this->boxx - dVar1;
      dVar52 = (double)(iVar25 - iVar14) * this->boxy - local_140;
      dVar2 = dVar49 + this->boxx;
      dVar46 = (double)(iVar26 - iVar27) * this->boxz - dVar45;
      dVar54 = dVar52 + this->boxy;
      dVar47 = dVar46 + this->boxz;
      dVar35 = dVar52;
      dVar53 = dVar46;
      dVar44 = dVar52;
      dVar51 = dVar47;
      local_138 = (int *)puVar21;
      local_e8 = puVar21;
      if (iVar13 < iVar23) {
        dVar50 = dVar49;
        dVar57 = dVar2;
        if (iVar14 < iVar25) {
          dVar44 = dVar54;
          if ((iVar27 < iVar26) || (dVar53 = dVar47, dVar51 = dVar46, iVar26 < iVar27)) {
LAB_1436bb1ab:
            bVar12 = corner_test<voro::voronoicell>
                               (this,param_1,dVar50,dVar35,dVar53,dVar57,dVar44,dVar51,&local_188);
          }
          else {
            bVar12 = edge_z_test<voro::voronoicell>
                               (this,param_1,dVar49,dVar52,dVar46,dVar2,dVar54,dVar47,&local_188);
          }
LAB_1436bb1b0:
          if (bVar12 == false) goto LAB_1436bb5bd;
        }
        else {
          if (iVar14 <= iVar25) {
            if (iVar27 < iVar26) {
              bVar12 = edge_y_test<voro::voronoicell>
                                 (this,param_1,dVar49,dVar52,dVar46,dVar2,dVar54,dVar47,&local_188);
            }
            else {
              if (iVar27 <= iVar26) {
                bVar12 = face_x_test<voro::voronoicell>
                                   (this,param_1,dVar49,dVar52,dVar46,dVar54,dVar47,&local_188);
                goto joined_r0x0001436bb416;
              }
              bVar12 = edge_y_test<voro::voronoicell>
                                 (this,param_1,dVar49,dVar52,dVar47,dVar2,dVar54,dVar46,&local_188);
            }
            goto LAB_1436bb1b0;
          }
          dVar35 = dVar54;
          if (iVar27 < iVar26) goto LAB_1436bb1ab;
          if (iVar27 <= iVar26) {
            bVar12 = edge_z_test<voro::voronoicell>
                               (this,param_1,dVar49,dVar54,dVar46,dVar2,dVar52,dVar47,&local_188);
            goto LAB_1436bb1b0;
          }
          bVar12 = corner_test<voro::voronoicell>
                             (this,param_1,dVar49,dVar54,dVar47,dVar2,dVar52,dVar46,&local_188);
joined_r0x0001436bb416:
          if (!bVar12) goto LAB_1436bb5bd;
        }
      }
      else {
        if (iVar23 < iVar13) {
          dVar50 = dVar2;
          dVar57 = dVar49;
          if (iVar14 < iVar25) {
            dVar44 = dVar54;
            if ((iVar27 < iVar26) || (dVar53 = dVar47, dVar51 = dVar46, iVar26 < iVar27))
            goto LAB_1436bb1ab;
            bVar12 = edge_z_test<voro::voronoicell>
                               (this,param_1,dVar2,dVar52,dVar46,dVar49,dVar54,dVar47,&local_188);
          }
          else if (iVar25 < iVar14) {
            dVar35 = dVar54;
            if ((iVar27 < iVar26) || (dVar53 = dVar47, dVar51 = dVar46, iVar26 < iVar27))
            goto LAB_1436bb1ab;
            bVar12 = edge_z_test<voro::voronoicell>
                               (this,param_1,dVar2,dVar54,dVar46,dVar49,dVar52,dVar47,&local_188);
          }
          else if (iVar27 < iVar26) {
            bVar12 = edge_y_test<voro::voronoicell>
                               (this,param_1,dVar2,dVar52,dVar46,dVar49,dVar54,dVar47,&local_188);
          }
          else {
            if (iVar27 <= iVar26) {
              bVar12 = face_x_test<voro::voronoicell>
                                 (this,param_1,dVar2,dVar52,dVar46,dVar54,dVar47,&local_188);
              goto joined_r0x0001436bb416;
            }
            bVar12 = edge_y_test<voro::voronoicell>
                               (this,param_1,dVar2,dVar52,dVar47,dVar49,dVar54,dVar46,&local_188);
          }
          goto LAB_1436bb1b0;
        }
        if (iVar14 < iVar25) {
          if (iVar27 < iVar26) {
            bVar12 = edge_x_test<voro::voronoicell>
                               (this,param_1,dVar49,dVar52,dVar46,dVar2,dVar54,dVar47,&local_188);
          }
          else {
            if (iVar27 <= iVar26) {
              bVar12 = face_y_test<voro::voronoicell>
                                 (this,param_1,dVar49,dVar52,dVar46,dVar2,dVar47,&local_188);
              goto joined_r0x0001436bb416;
            }
            bVar12 = edge_x_test<voro::voronoicell>
                               (this,param_1,dVar49,dVar52,dVar47,dVar2,dVar54,dVar46,&local_188);
          }
          goto LAB_1436bb1b0;
        }
        if (iVar25 < iVar14) {
          if (iVar27 < iVar26) {
            bVar12 = edge_x_test<voro::voronoicell>
                               (this,param_1,dVar49,dVar54,dVar46,dVar2,dVar52,dVar47,&local_188);
          }
          else {
            if (iVar27 <= iVar26) {
              bVar12 = face_y_test<voro::voronoicell>
                                 (this,param_1,dVar49,dVar54,dVar46,dVar2,dVar47,&local_188);
              goto joined_r0x0001436bb53e;
            }
            bVar12 = edge_x_test<voro::voronoicell>
                               (this,param_1,dVar49,dVar54,dVar47,dVar2,dVar52,dVar46,&local_188);
          }
          goto LAB_1436bb1b0;
        }
        if (iVar27 < iVar26) {
          bVar12 = face_z_test<voro::voronoicell>
                             (this,param_1,dVar49,dVar52,dVar46,dVar2,dVar54,&local_188);
joined_r0x0001436bb53e:
          if (bVar12) goto LAB_1436bb82c;
        }
        else if (iVar26 < iVar27) {
          bVar12 = face_z_test<voro::voronoicell>
                             (this,param_1,dVar49,dVar52,dVar47,dVar2,dVar54,&local_188);
          if (bVar12) goto LAB_1436bb82c;
        }
        else {
          voro_fatal_error("Compute cell routine revisiting central block, which should never\nhappen."
                           ,3);
        }
LAB_1436bb5bd:
        pcVar4 = this->con;
        iVar32 = iVar23;
        if (pcVar4->field_0xa0 != '\0') {
          iVar29 = *(int *)pcVar4;
          if (param_4 + iVar23 < iVar29) {
            dVar10 = *(double *)&pcVar4->field_0x70 - *(double *)&pcVar4->field_0x78;
            iVar32 = iVar29 + iVar23;
          }
          else if (param_4 + iVar23 < iVar29 * 2) {
            dVar10 = 0.0;
          }
          else {
            dVar10 = *(double *)&pcVar4->field_0x78 - *(double *)&pcVar4->field_0x70;
            iVar32 = iVar23 - iVar29;
          }
        }
        iVar29 = iVar25;
        if (pcVar4->field_0xa1 != '\0') {
          iVar24 = *(int *)&pcVar4->field_0x4;
          if (param_5 + iVar25 < iVar24) {
            dVar9 = *(double *)&pcVar4->field_0x80 - *(double *)&pcVar4->field_0x88;
            iVar29 = iVar24 + iVar25;
          }
          else if (param_5 + iVar25 < iVar24 * 2) {
            dVar9 = 0.0;
          }
          else {
            dVar9 = *(double *)&pcVar4->field_0x88 - *(double *)&pcVar4->field_0x80;
            iVar29 = iVar25 - iVar24;
          }
        }
        iVar24 = iVar26;
        if (pcVar4->field_0xa2 != '\0') {
          iVar3 = *(int *)&pcVar4->field_0x8;
          if (param_6 + iVar26 < iVar3) {
            dVar8 = *(double *)&pcVar4->field_0x90 - *(double *)&pcVar4->field_0x98;
            iVar24 = iVar3 + iVar26;
          }
          else if (param_6 + iVar26 < iVar3 * 2) {
            dVar8 = 0.0;
          }
          else {
            dVar8 = *(double *)&pcVar4->field_0x98 - *(double *)&pcVar4->field_0x90;
            iVar24 = iVar26 - iVar3;
          }
        }
        lVar31 = (longlong)
                 ((iVar24 * *(int *)&pcVar4->field_0x4 + iVar29) * *(int *)pcVar4 + iVar32 + iVar16)
        ;
        if (0 < this->co[lVar31]) {
          iVar32 = 0;
          dVar2 = local_f8 - dVar9;
          dVar47 = local_f0 - dVar8;
          lVar20 = 0;
          do {
            lVar33 = (longlong)(iVar32 * this->ps);
            pdVar5 = this->p[lVar31];
            dVar44 = pdVar5[lVar33] - (dVar48 - dVar10);
            dVar51 = pdVar5[lVar33 + 1] - dVar2;
            dVar53 = pdVar5[lVar33 + 2] - dVar47;
            dVar35 = *(double *)
                      (*(longlong *)(*(longlong *)&this->con->field_0xd0 + lVar31 * 8) + 0x18 +
                      lVar20);
            bVar12 = voronoicell_base::nplane<voro::voronoicell>
                               ((voronoicell_base *)param_1,param_1,dVar44,dVar51,dVar53,
                                (dVar51 * dVar51 + dVar44 * dVar44 + dVar53 * dVar53 +
                                local_188.r_rad) - dVar35 * dVar35,0);
            if (!bVar12) {
              return false;
            }
            iVar32 = iVar32 + 1;
            lVar20 = lVar20 + 0x20;
            puVar21 = local_e8;
          } while (iVar32 < this->co[lVar31]);
        }
        if (local_168 < puVar21) {
          lVar31 = (longlong)puVar21 - (longlong)local_168 >> 2;
        }
        else {
          lVar31 = ((longlong)puVar21 - (longlong)this->qu >> 2) +
                   ((longlong)this->qu_l - (longlong)local_168 >> 2);
        }
        if (lVar31 < 0x12) {
          add_list_memory(this,&local_138,&local_168);
          puVar21 = (uint *)local_138;
        }
        add_to_mask(this,iVar23,iVar25,iVar26,&local_168);
      }
LAB_1436bb82c:
    } while (puVar21 != (uint *)local_168);
  }
  return true;
}

// compute_cell<voro::voronoicell_neighbor> @ 1436bb8b0

bool __thiscall
voro::voro_compute<voro::container>::compute_cell<voro::voronoicell_neighbor>
          (voro_compute<voro::container> *this,voronoicell_neighbor *param_1,int param_2,int param_3
          ,int param_4,int param_5,int param_6)

{
  double dVar1;
  double dVar2;
  int iVar3;
  container *pcVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined8 *puVar24;
  longlong lVar25;
  int iVar26;
  uint uVar27;
  longlong lVar28;
  undefined4 uVar29;
  double dVar30;
  undefined4 uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  radius_info local_res20 [8];
  uint local_178;
  uint *local_170;
  uint local_168;
  int local_15c;
  int *local_150;
  int local_148;
  uint *local_140;
  double local_138;
  double local_130;
  double local_128;
  int *local_120;
  int **local_118;
  double local_110;
  double local_108;
  double local_100;
  longlong local_f8;
  double *local_f0;
  double local_e8;
  uint *local_e0;
  
  pcVar4 = this->con;
  uVar27 = (uint)__xmm_80000000000000008000000000000000;
  uVar20 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar6 = 0.0;
  dVar7 = 0.0;
  dVar8 = 0.0;
  lVar28 = (longlong)param_2;
  lVar15 = (longlong)(param_3 * *(int *)&pcVar4->field_0xc8);
  lVar25 = *(longlong *)(*(longlong *)&pcVar4->field_0xb0 + lVar28 * 8);
  dVar35 = *(double *)(lVar25 + lVar15 * 8);
  uVar39 = SUB84(dVar35,0);
  uVar40 = (undefined4)((ulonglong)dVar35 >> 0x20);
  dVar1 = *(double *)(lVar25 + 8 + lVar15 * 8);
  uVar41 = SUB84(dVar1,0);
  uVar42 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar2 = *(double *)(lVar25 + 0x10 + lVar15 * 8);
  if (pcVar4->field_0xa0 == '\0') {
    dVar33 = *(double *)&pcVar4->field_0x78 - dVar35;
    dVar36 = *(double *)&pcVar4->field_0x70 - dVar35;
    iVar11 = param_4;
  }
  else {
    dVar33 = (*(double *)&pcVar4->field_0x78 - *(double *)&pcVar4->field_0x70) *
             __real_3fe0000000000000;
    dVar36 = (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) ^ uVar20,SUB84(dVar33,0) ^ uVar27);
    iVar11 = *(int *)pcVar4;
  }
  if (pcVar4->field_0xa1 == '\0') {
    dVar30 = *(double *)&pcVar4->field_0x88 - dVar1;
    dVar34 = *(double *)&pcVar4->field_0x80 - dVar1;
    iVar12 = param_5;
  }
  else {
    dVar30 = (*(double *)&pcVar4->field_0x88 - *(double *)&pcVar4->field_0x80) *
             __real_3fe0000000000000;
    dVar34 = (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) ^ uVar20,SUB84(dVar30,0) ^ uVar27);
    iVar12 = *(int *)&pcVar4->field_0x4;
  }
  if (pcVar4->field_0xa2 == '\0') {
    dVar32 = *(double *)&pcVar4->field_0x98 - dVar2;
    dVar37 = *(double *)&pcVar4->field_0x90 - dVar2;
    iVar22 = param_6;
  }
  else {
    dVar32 = (*(double *)&pcVar4->field_0x98 - *(double *)&pcVar4->field_0x90) *
             __real_3fe0000000000000;
    dVar37 = (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) ^ uVar20,SUB84(dVar32,0) ^ uVar27);
    iVar22 = *(int *)&pcVar4->field_0x8;
  }
  local_110 = dVar35;
  local_108 = dVar1;
  local_e8 = dVar2;
  voronoicell_neighbor::init(param_1,dVar36,dVar33,dVar34,dVar30,dVar37,dVar32);
  puVar24 = *(undefined8 **)&pcVar4->field_0x50;
  if (puVar24 < *(undefined8 **)&pcVar4->field_0x58) {
    do {
      cVar9 = (**(code **)(*(longlong *)*puVar24 + 0x10))((longlong *)*puVar24,param_1);
      if (cVar9 == '\0') {
        return false;
      }
      puVar24 = puVar24 + 1;
    } while (puVar24 < *(undefined8 **)&pcVar4->field_0x58);
  }
  local_15c = 3;
  iVar17 = 0;
  iVar13 = (param_2 - (iVar22 * *(int *)&pcVar4->field_0x4 + iVar12) * *(int *)pcVar4) - iVar11;
  local_118 = &`public:_bool___cdecl_voro::voro_compute<voro::container>::compute_cell<voro::voronoicell_neighbor>(voro::voronoicell_neighbor&___ptr64,int,int,int,int,int)___ptr64'
               ::__l2::count_list;
  if (0 < param_3) {
    lVar25 = 0;
    do {
      lVar15 = (longlong)(iVar17 * this->ps);
      pdVar5 = this->p[lVar28];
      dVar33 = pdVar5[lVar15] - dVar35;
      dVar36 = pdVar5[lVar15 + 1] - dVar1;
      dVar30 = pdVar5[lVar15 + 2] - dVar2;
      bVar10 = voronoicell_base::nplane<voro::voronoicell_neighbor>
                         ((voronoicell_base *)param_1,param_1,dVar33,dVar36,dVar30,
                          dVar36 * dVar36 + dVar33 * dVar33 + dVar30 * dVar30,
                          *(int *)((longlong)this->id[lVar28] + lVar25));
      if (!bVar10) {
        return false;
      }
      iVar17 = iVar17 + 1;
      lVar25 = lVar25 + 4;
    } while (iVar17 < param_3);
  }
  iVar17 = iVar17 + 1;
  if (iVar17 < this->co[lVar28]) {
    lVar25 = (longlong)iVar17 * 4;
    do {
      lVar15 = (longlong)(iVar17 * this->ps);
      pdVar5 = this->p[lVar28];
      dVar33 = pdVar5[lVar15] - dVar35;
      dVar36 = pdVar5[lVar15 + 1] - dVar1;
      dVar30 = pdVar5[lVar15 + 2] - dVar2;
      bVar10 = voronoicell_base::nplane<voro::voronoicell_neighbor>
                         ((voronoicell_base *)param_1,param_1,dVar33,dVar36,dVar30,
                          dVar36 * dVar36 + dVar33 * dVar33 + dVar30 * dVar30,
                          *(int *)((longlong)this->id[lVar28] + lVar25));
      if (!bVar10) {
        return false;
      }
      iVar17 = iVar17 + 1;
      lVar25 = lVar25 + 4;
    } while (iVar17 < this->co[lVar28]);
  }
  dVar33 = voronoicell_base::max_radius_squared((voronoicell_base *)param_1);
  pcVar4 = this->con;
  uVar29 = SUB84(dVar33,0);
  uVar31 = (undefined4)((ulonglong)dVar33 >> 0x20);
  dVar35 = (dVar35 - *(double *)&pcVar4->field_0x70) -
           (double)param_4 * *(double *)&pcVar4->field_0x18;
  local_138 = (dVar2 - *(double *)&pcVar4->field_0x90) -
              (double)param_6 * *(double *)&pcVar4->field_0x28;
  local_130 = (dVar1 - *(double *)&pcVar4->field_0x80) -
              (double)param_5 * *(double *)&pcVar4->field_0x20;
  iVar19 = (int)(dVar35 * this->xsp * __real_4020000000000000);
  iVar17 = (int)(local_130 * this->ysp * __real_4020000000000000);
  iVar14 = (int)(local_138 * this->zsp * __real_4020000000000000);
  if (iVar19 < 4) {
    local_168 = 0;
    local_178 = 0;
    iVar21 = iVar19;
    dVar1 = this->boxx - dVar35;
  }
  else {
    local_178 = 0x60007f;
    local_168 = 0x200001;
    iVar21 = 0;
    dVar1 = dVar35;
    if (-1 < 7 - iVar19) {
      iVar21 = 7 - iVar19;
    }
  }
  if (iVar17 < 4) {
    iVar19 = iVar17;
    dVar2 = this->boxy - local_130;
  }
  else {
    local_178 = local_178 | 0x3003f80;
    local_168 = local_168 | 0x1000080;
    iVar19 = 0;
    dVar2 = local_130;
    if (-1 < 7 - iVar17) {
      iVar19 = 7 - iVar17;
    }
  }
  if (iVar14 < 4) {
    iVar17 = iVar14;
    dVar33 = this->boxz - local_138;
  }
  else {
    local_178 = local_178 | 0x181fc000;
    local_168 = local_168 | 0x8004000;
    iVar17 = 0;
    dVar33 = local_138;
    if (-1 < 7 - iVar14) {
      iVar17 = 7 - iVar14;
    }
  }
  iVar14 = 0;
  iVar17 = (iVar21 + (iVar19 + iVar17 * 4) * 4) * 0x40;
  local_f0 = this->mrad + iVar17;
  uVar27 = this->wl[iVar17];
  local_170 = this->wl + iVar17;
  puVar16 = local_170;
  lVar25 = 0;
  local_128 = dVar35;
  do {
    if (iVar14 == local_15c) {
      dVar36 = voronoicell_base::max_radius_squared((voronoicell_base *)param_1);
      uVar29 = SUB84(dVar36,0);
      uVar31 = (undefined4)((ulonglong)dVar36 >> 0x20);
      if (local_118 !=
          (int **)`public:_bool___cdecl_voro::voro_compute<voro::container>::compute_cell<voro::voronoicell_neighbor>(voro::voronoicell_neighbor&___ptr64,int,int,int,int,int)___ptr64'
                  ::__l2::count_e) {
        local_15c = *(int *)local_118;
        local_118 = (int **)((longlong)local_118 + 4);
      }
    }
    if ((double)CONCAT44(uVar31,uVar29) < local_f0[lVar25]) {
      return true;
    }
    local_f8 = lVar25 + 1;
    puVar16 = puVar16 + 1;
    iVar14 = iVar14 + 1;
    uVar20 = (local_178 ^ *puVar16) + local_168;
    iVar19 = (uVar20 >> 7 & 0x7f) - 0x40;
    iVar17 = (uVar20 & 0x7f) - 0x40;
    iVar21 = (uVar20 >> 0xe & 0x7f) - 0x40;
    iVar26 = iVar11 + iVar17;
    if (((((-1 < iVar26) && (iVar26 < this->hx)) && (iVar23 = iVar12 + iVar19, -1 < iVar23)) &&
        ((iVar23 < this->hy && (iVar18 = iVar21 + iVar22, -1 < iVar18)))) &&
       ((iVar18 < this->hz &&
        (bVar10 = compute_min_max_radius
                            (this,iVar17,iVar19,iVar21,dVar35,local_130,local_138,dVar1 * dVar1,
                             dVar2 * dVar2,dVar33 * dVar33,&local_100,
                             (double)CONCAT44(uVar31,uVar29),local_res20), !bVar10)))) {
      pcVar4 = this->con;
      if (pcVar4->field_0xa0 != '\0') {
        iVar17 = *(int *)pcVar4;
        if (param_4 + iVar26 < iVar17) {
          iVar26 = iVar26 + iVar17;
          dVar8 = *(double *)&pcVar4->field_0x70 - *(double *)&pcVar4->field_0x78;
        }
        else if (param_4 + iVar26 < iVar17 * 2) {
          dVar8 = 0.0;
        }
        else {
          iVar26 = iVar26 - iVar17;
          dVar8 = *(double *)&pcVar4->field_0x78 - *(double *)&pcVar4->field_0x70;
        }
      }
      if (pcVar4->field_0xa1 != '\0') {
        iVar17 = *(int *)&pcVar4->field_0x4;
        if (param_5 + iVar23 < iVar17) {
          iVar23 = iVar23 + iVar17;
          dVar7 = *(double *)&pcVar4->field_0x80 - *(double *)&pcVar4->field_0x88;
        }
        else if (param_5 + iVar23 < iVar17 * 2) {
          dVar7 = 0.0;
        }
        else {
          iVar23 = iVar23 - iVar17;
          dVar7 = *(double *)&pcVar4->field_0x88 - *(double *)&pcVar4->field_0x80;
        }
      }
      if (pcVar4->field_0xa2 != '\0') {
        iVar17 = *(int *)&pcVar4->field_0x8;
        if (param_6 + iVar18 < iVar17) {
          iVar18 = iVar18 + iVar17;
          dVar6 = *(double *)&pcVar4->field_0x90 - *(double *)&pcVar4->field_0x98;
        }
        else if (param_6 + iVar18 < iVar17 * 2) {
          dVar6 = 0.0;
        }
        else {
          iVar18 = iVar18 - iVar17;
          dVar6 = *(double *)&pcVar4->field_0x98 - *(double *)&pcVar4->field_0x90;
        }
      }
      iVar17 = (iVar18 * *(int *)&pcVar4->field_0x4 + iVar23) * *(int *)pcVar4 + iVar26 + iVar13;
      if (0 < this->co[iVar17]) {
        dVar35 = (double)CONCAT44(uVar40,uVar39) - dVar8;
        dVar36 = (double)CONCAT44(uVar42,uVar41) - dVar7;
        iVar19 = 0;
        dVar30 = local_e8 - dVar6;
        lVar25 = 0;
        if ((double)CONCAT44(uVar31,uVar29) <= local_100 &&
            local_100 != (double)CONCAT44(uVar31,uVar29)) {
          do {
            lVar15 = (longlong)(iVar19 * this->ps);
            pdVar5 = this->p[iVar17];
            dVar34 = pdVar5[lVar15] - dVar35;
            dVar32 = pdVar5[lVar15 + 1] - dVar36;
            dVar38 = pdVar5[lVar15 + 2] - dVar30;
            dVar37 = dVar32 * dVar32 + dVar34 * dVar34 + dVar38 * dVar38;
            if ((dVar37 < (double)CONCAT44(uVar31,uVar29)) &&
               (bVar10 = voronoicell_base::nplane<voro::voronoicell_neighbor>
                                   ((voronoicell_base *)param_1,param_1,dVar34,dVar32,dVar38,dVar37,
                                    *(int *)((longlong)this->id[iVar17] + lVar25)), !bVar10)) {
              return false;
            }
            iVar19 = iVar19 + 1;
            lVar25 = lVar25 + 4;
          } while (iVar19 < this->co[iVar17]);
        }
        else {
          do {
            lVar15 = (longlong)(iVar19 * this->ps);
            pdVar5 = this->p[iVar17];
            dVar34 = pdVar5[lVar15] - dVar35;
            dVar32 = pdVar5[lVar15 + 1] - dVar36;
            dVar37 = pdVar5[lVar15 + 2] - dVar30;
            bVar10 = voronoicell_base::nplane<voro::voronoicell_neighbor>
                               ((voronoicell_base *)param_1,param_1,dVar34,dVar32,dVar37,
                                dVar32 * dVar32 + dVar34 * dVar34 + dVar37 * dVar37,
                                *(int *)((longlong)this->id[iVar17] + lVar25));
            if (!bVar10) {
              return false;
            }
            iVar19 = iVar19 + 1;
            lVar25 = lVar25 + 4;
          } while (iVar19 < this->co[iVar17]);
        }
        uVar41 = SUB84(local_108,0);
        uVar42 = (undefined4)((ulonglong)local_108 >> 0x20);
        uVar39 = SUB84(local_110,0);
        uVar40 = (undefined4)((ulonglong)local_110 >> 0x20);
        dVar35 = local_128;
      }
    }
    lVar25 = local_f8;
  } while (local_f8 < (int)uVar27);
  puVar16 = &this->mv;
  *puVar16 = *puVar16 + 1;
  if (*puVar16 == 0) {
    puVar16 = this->mask;
    if (puVar16 < puVar16 + this->hxyz) {
      do {
        *puVar16 = 0;
        puVar16 = puVar16 + 1;
      } while (puVar16 < this->mask + this->hxyz);
    }
    this->mv = 1;
  }
  local_140 = &this->mv;
  local_150 = this->qu;
  puVar16 = (uint *)local_150;
  if (iVar14 < 0x3f) {
    local_170 = local_170 + local_f8;
    local_120 = local_150;
    do {
      lVar25 = local_f8;
      if (iVar14 == local_15c) {
        dVar36 = voronoicell_base::max_radius_squared((voronoicell_base *)param_1);
        uVar29 = SUB84(dVar36,0);
        uVar31 = (undefined4)((ulonglong)dVar36 >> 0x20);
        if (local_118 !=
            (int **)`public:_bool___cdecl_voro::voro_compute<voro::container>::compute_cell<voro::voronoicell_neighbor>(voro::voronoicell_neighbor&___ptr64,int,int,int,int,int)___ptr64'
                    ::__l2::count_e) {
          local_15c = *(int *)local_118;
          local_118 = (int **)((longlong)local_118 + 4);
        }
      }
      if ((double)CONCAT44(uVar31,uVar29) < local_f0[lVar25]) {
        return true;
      }
      local_f8 = lVar25 + 1;
      local_170 = local_170 + 1;
      iVar14 = iVar14 + 1;
      uVar27 = (local_178 ^ *local_170) + local_168;
      iVar21 = (uVar27 >> 7 & 0x7f) - 0x40;
      iVar26 = (uVar27 >> 0xe & 0x7f) - 0x40;
      iVar19 = (uVar27 & 0x7f) - 0x40;
      iVar17 = iVar11 + iVar19;
      local_148 = iVar17;
      if ((((-1 < iVar17) && (iVar17 < this->hx)) && (iVar23 = iVar12 + iVar21, -1 < iVar23)) &&
         (((iVar23 < this->hy && (iVar18 = iVar26 + iVar22, -1 < iVar18)) && (iVar18 < this->hz))))
      {
        local_e0 = this->mask +
                   (longlong)((this->hy * iVar18 + iVar23) * this->hx) + (longlong)iVar17;
        *local_e0 = *local_140;
        bVar10 = compute_min_max_radius
                           (this,iVar19,iVar21,iVar26,dVar35,local_130,local_138,dVar1 * dVar1,
                            dVar2 * dVar2,dVar33 * dVar33,&local_100,(double)CONCAT44(uVar31,uVar29)
                            ,local_res20);
        if (!bVar10) {
          pcVar4 = this->con;
          iVar19 = iVar17;
          if (pcVar4->field_0xa0 != '\0') {
            iVar21 = *(int *)pcVar4;
            if (param_4 + iVar17 < iVar21) {
              dVar8 = *(double *)&pcVar4->field_0x70 - *(double *)&pcVar4->field_0x78;
              iVar19 = iVar21 + iVar17;
            }
            else if (param_4 + iVar17 < iVar21 * 2) {
              dVar8 = 0.0;
            }
            else {
              dVar8 = *(double *)&pcVar4->field_0x78 - *(double *)&pcVar4->field_0x70;
              iVar19 = iVar17 - iVar21;
            }
          }
          iVar21 = iVar23;
          if (pcVar4->field_0xa1 != '\0') {
            iVar26 = *(int *)&pcVar4->field_0x4;
            if (param_5 + iVar23 < iVar26) {
              dVar7 = *(double *)&pcVar4->field_0x80 - *(double *)&pcVar4->field_0x88;
              iVar21 = iVar26 + iVar23;
            }
            else if (param_5 + iVar23 < iVar26 * 2) {
              dVar7 = 0.0;
            }
            else {
              dVar7 = *(double *)&pcVar4->field_0x88 - *(double *)&pcVar4->field_0x80;
              iVar21 = iVar23 - iVar26;
            }
          }
          iVar26 = iVar18;
          if (pcVar4->field_0xa2 != '\0') {
            iVar3 = *(int *)&pcVar4->field_0x8;
            if (param_6 + iVar18 < iVar3) {
              dVar6 = *(double *)&pcVar4->field_0x90 - *(double *)&pcVar4->field_0x98;
              iVar26 = iVar3 + iVar18;
            }
            else if (param_6 + iVar18 < iVar3 * 2) {
              dVar6 = 0.0;
            }
            else {
              dVar6 = *(double *)&pcVar4->field_0x98 - *(double *)&pcVar4->field_0x90;
              iVar26 = iVar18 - iVar3;
            }
          }
          iVar19 = (iVar26 * *(int *)&pcVar4->field_0x4 + iVar21) * *(int *)pcVar4 + iVar19 + iVar13
          ;
          if (0 < this->co[iVar19]) {
            dVar36 = (double)CONCAT44(uVar40,uVar39) - dVar8;
            dVar30 = (double)CONCAT44(uVar42,uVar41) - dVar7;
            iVar21 = 0;
            dVar34 = local_e8 - dVar6;
            lVar25 = 0;
            if ((double)CONCAT44(uVar31,uVar29) <= local_100 &&
                local_100 != (double)CONCAT44(uVar31,uVar29)) {
              do {
                lVar15 = (longlong)(iVar21 * this->ps);
                pdVar5 = this->p[iVar19];
                dVar35 = pdVar5[lVar15] - dVar36;
                dVar32 = pdVar5[lVar15 + 1] - dVar30;
                dVar38 = pdVar5[lVar15 + 2] - dVar34;
                dVar37 = dVar32 * dVar32 + dVar35 * dVar35 + dVar38 * dVar38;
                if ((dVar37 < (double)CONCAT44(uVar31,uVar29)) &&
                   (bVar10 = voronoicell_base::nplane<voro::voronoicell_neighbor>
                                       ((voronoicell_base *)param_1,param_1,dVar35,dVar32,dVar38,
                                        dVar37,*(int *)((longlong)this->id[iVar19] + lVar25)),
                   !bVar10)) {
                  return false;
                }
                iVar21 = iVar21 + 1;
                lVar25 = lVar25 + 4;
                iVar17 = local_148;
                dVar35 = local_128;
              } while (iVar21 < this->co[iVar19]);
            }
            else {
              do {
                lVar15 = (longlong)(iVar21 * this->ps);
                pdVar5 = this->p[iVar19];
                dVar35 = pdVar5[lVar15] - dVar36;
                dVar32 = pdVar5[lVar15 + 1] - dVar30;
                dVar37 = pdVar5[lVar15 + 2] - dVar34;
                bVar10 = voronoicell_base::nplane<voro::voronoicell_neighbor>
                                   ((voronoicell_base *)param_1,param_1,dVar35,dVar32,dVar37,
                                    dVar32 * dVar32 + dVar35 * dVar35 + dVar37 * dVar37,
                                    *(int *)((longlong)this->id[iVar19] + lVar25));
                if (!bVar10) {
                  return false;
                }
                iVar21 = iVar21 + 1;
                lVar25 = lVar25 + 4;
                iVar17 = local_148;
                dVar35 = local_128;
              } while (iVar21 < this->co[iVar19]);
            }
          }
          if (this->qu_l + -0x12 < local_150) {
            add_list_memory(this,&local_120,&local_150);
          }
          scan_bits_mask_add(this,uVar27,local_e0,iVar17,iVar23,iVar18,&local_150);
        }
      }
      uVar39 = SUB84(local_110,0);
      uVar40 = (undefined4)((ulonglong)local_110 >> 0x20);
      uVar41 = SUB84(local_108,0);
      uVar42 = (undefined4)((ulonglong)local_108 >> 0x20);
      puVar16 = (uint *)local_120;
    } while (local_f8 < 0x3f);
  }
  dVar33 = local_108;
  dVar2 = local_110;
  dVar1 = local_138;
  if ((local_f0[iVar14] <= (double)CONCAT44(uVar31,uVar29)) && (puVar16 != (uint *)local_150)) {
    do {
      if (puVar16 == (uint *)this->qu_l) {
        puVar16 = (uint *)this->qu;
      }
      iVar17 = *puVar16;
      iVar14 = puVar16[1];
      iVar19 = puVar16[2];
      puVar16 = puVar16 + 3;
      dVar34 = (double)(iVar17 - iVar11) * this->boxx - dVar35;
      dVar30 = this->boxx + dVar34;
      dVar32 = (double)(iVar14 - iVar12) * this->boxy - local_130;
      dVar36 = (double)(iVar19 - iVar22) * this->boxz - dVar1;
      dVar37 = this->boxy + dVar32;
      dVar38 = this->boxz + dVar36;
      local_120 = (int *)puVar16;
      local_e0 = puVar16;
      if (iVar11 < iVar17) {
        if (iVar12 < iVar14) {
          if (iVar22 < iVar19) {
            bVar10 = corner_test<voro::voronoicell_neighbor>
                               (this,param_1,dVar34,dVar32,dVar36,dVar30,dVar37,dVar38,local_res20);
          }
          else if (iVar19 < iVar22) {
            bVar10 = corner_test<voro::voronoicell_neighbor>
                               (this,param_1,dVar34,dVar32,dVar38,dVar30,dVar37,dVar36,local_res20);
          }
          else {
            bVar10 = edge_z_test<voro::voronoicell_neighbor>
                               (this,param_1,dVar34,dVar32,dVar36,dVar30,dVar37,dVar38,local_res20);
          }
        }
        else if (iVar14 < iVar12) {
          if (iVar22 < iVar19) {
            bVar10 = corner_test<voro::voronoicell_neighbor>
                               (this,param_1,dVar34,dVar37,dVar36,dVar30,dVar32,dVar38,local_res20);
          }
          else if (iVar19 < iVar22) {
            bVar10 = corner_test<voro::voronoicell_neighbor>
                               (this,param_1,dVar34,dVar37,dVar38,dVar30,dVar32,dVar36,local_res20);
          }
          else {
            bVar10 = edge_z_test<voro::voronoicell_neighbor>
                               (this,param_1,dVar34,dVar37,dVar36,dVar30,dVar32,dVar38,local_res20);
          }
        }
        else if (iVar22 < iVar19) {
          bVar10 = edge_y_test<voro::voronoicell_neighbor>
                             (this,param_1,dVar34,dVar32,dVar36,dVar30,dVar37,dVar38,local_res20);
        }
        else if (iVar19 < iVar22) {
          bVar10 = edge_y_test<voro::voronoicell_neighbor>
                             (this,param_1,dVar34,dVar32,dVar38,dVar30,dVar37,dVar36,local_res20);
        }
        else {
          bVar10 = face_x_test<voro::voronoicell_neighbor>
                             (this,param_1,dVar34,dVar32,dVar36,dVar37,dVar38,local_res20);
        }
LAB_1436bcc0a:
        if (bVar10 == false) goto LAB_1436bcc25;
      }
      else {
        if (iVar17 < iVar11) {
          if (iVar12 < iVar14) {
            if (iVar22 < iVar19) {
              bVar10 = corner_test<voro::voronoicell_neighbor>
                                 (this,param_1,dVar30,dVar32,dVar36,dVar34,dVar37,dVar38,local_res20
                                 );
            }
            else if (iVar19 < iVar22) {
              bVar10 = corner_test<voro::voronoicell_neighbor>
                                 (this,param_1,dVar30,dVar32,dVar38,dVar34,dVar37,dVar36,local_res20
                                 );
            }
            else {
              bVar10 = edge_z_test<voro::voronoicell_neighbor>
                                 (this,param_1,dVar30,dVar32,dVar36,dVar34,dVar37,dVar38,local_res20
                                 );
            }
          }
          else if (iVar14 < iVar12) {
            if (iVar22 < iVar19) {
              bVar10 = corner_test<voro::voronoicell_neighbor>
                                 (this,param_1,dVar30,dVar37,dVar36,dVar34,dVar32,dVar38,local_res20
                                 );
            }
            else if (iVar19 < iVar22) {
              bVar10 = corner_test<voro::voronoicell_neighbor>
                                 (this,param_1,dVar30,dVar37,dVar38,dVar34,dVar32,dVar36,local_res20
                                 );
            }
            else {
              bVar10 = edge_z_test<voro::voronoicell_neighbor>
                                 (this,param_1,dVar30,dVar37,dVar36,dVar34,dVar32,dVar38,local_res20
                                 );
            }
          }
          else if (iVar22 < iVar19) {
            bVar10 = edge_y_test<voro::voronoicell_neighbor>
                               (this,param_1,dVar30,dVar32,dVar36,dVar34,dVar37,dVar38,local_res20);
          }
          else if (iVar19 < iVar22) {
            bVar10 = edge_y_test<voro::voronoicell_neighbor>
                               (this,param_1,dVar30,dVar32,dVar38,dVar34,dVar37,dVar36,local_res20);
          }
          else {
            bVar10 = face_x_test<voro::voronoicell_neighbor>
                               (this,param_1,dVar30,dVar32,dVar36,dVar37,dVar38,local_res20);
          }
          goto LAB_1436bcc0a;
        }
        if (iVar12 < iVar14) {
          if (iVar22 < iVar19) {
            bVar10 = edge_x_test<voro::voronoicell_neighbor>
                               (this,param_1,dVar34,dVar32,dVar36,dVar30,dVar37,dVar38,local_res20);
          }
          else if (iVar19 < iVar22) {
            bVar10 = edge_x_test<voro::voronoicell_neighbor>
                               (this,param_1,dVar34,dVar32,dVar38,dVar30,dVar37,dVar36,local_res20);
          }
          else {
            bVar10 = face_y_test<voro::voronoicell_neighbor>
                               (this,param_1,dVar34,dVar32,dVar36,dVar30,dVar38,local_res20);
          }
          goto LAB_1436bcc0a;
        }
        if (iVar14 < iVar12) {
          if (iVar22 < iVar19) {
            bVar10 = edge_x_test<voro::voronoicell_neighbor>
                               (this,param_1,dVar34,dVar37,dVar36,dVar30,dVar32,dVar38,local_res20);
          }
          else if (iVar19 < iVar22) {
            bVar10 = edge_x_test<voro::voronoicell_neighbor>
                               (this,param_1,dVar34,dVar37,dVar38,dVar30,dVar32,dVar36,local_res20);
          }
          else {
            bVar10 = face_y_test<voro::voronoicell_neighbor>
                               (this,param_1,dVar34,dVar37,dVar36,dVar30,dVar38,local_res20);
          }
          goto LAB_1436bcc0a;
        }
        if ((iVar22 < iVar19) || (dVar36 = dVar38, iVar19 < iVar22)) {
          bVar10 = face_z_test<voro::voronoicell_neighbor>
                             (this,param_1,dVar34,dVar32,dVar36,dVar30,dVar37,local_res20);
          goto LAB_1436bcc0a;
        }
        voro_fatal_error("Compute cell routine revisiting central block, which should never\nhappen."
                         ,3);
LAB_1436bcc25:
        pcVar4 = this->con;
        iVar21 = iVar17;
        if (pcVar4->field_0xa0 != '\0') {
          iVar26 = *(int *)pcVar4;
          if (param_4 + iVar17 < iVar26) {
            dVar8 = *(double *)&pcVar4->field_0x70 - *(double *)&pcVar4->field_0x78;
            iVar21 = iVar26 + iVar17;
          }
          else if (param_4 + iVar17 < iVar26 * 2) {
            dVar8 = 0.0;
          }
          else {
            dVar8 = *(double *)&pcVar4->field_0x78 - *(double *)&pcVar4->field_0x70;
            iVar21 = iVar17 - iVar26;
          }
        }
        iVar26 = iVar14;
        if (pcVar4->field_0xa1 != '\0') {
          iVar23 = *(int *)&pcVar4->field_0x4;
          if (param_5 + iVar14 < iVar23) {
            dVar7 = *(double *)&pcVar4->field_0x80 - *(double *)&pcVar4->field_0x88;
            iVar26 = iVar23 + iVar14;
          }
          else if (param_5 + iVar14 < iVar23 * 2) {
            dVar7 = 0.0;
          }
          else {
            dVar7 = *(double *)&pcVar4->field_0x88 - *(double *)&pcVar4->field_0x80;
            iVar26 = iVar14 - iVar23;
          }
        }
        iVar23 = iVar19;
        if (pcVar4->field_0xa2 != '\0') {
          iVar18 = *(int *)&pcVar4->field_0x8;
          if (param_6 + iVar19 < iVar18) {
            dVar6 = *(double *)&pcVar4->field_0x90 - *(double *)&pcVar4->field_0x98;
            iVar23 = iVar18 + iVar19;
          }
          else if (param_6 + iVar19 < iVar18 * 2) {
            dVar6 = 0.0;
          }
          else {
            dVar6 = *(double *)&pcVar4->field_0x98 - *(double *)&pcVar4->field_0x90;
            iVar23 = iVar19 - iVar18;
          }
        }
        iVar21 = (iVar23 * *(int *)&pcVar4->field_0x4 + iVar26) * *(int *)pcVar4 + iVar21 + iVar13;
        if (0 < this->co[iVar21]) {
          iVar26 = 0;
          dVar36 = local_e8 - dVar6;
          lVar25 = 0;
          do {
            lVar15 = (longlong)(iVar26 * this->ps);
            pdVar5 = this->p[iVar21];
            dVar35 = pdVar5[lVar15] - (dVar2 - dVar8);
            dVar30 = pdVar5[lVar15 + 1] - (dVar33 - dVar7);
            dVar34 = pdVar5[lVar15 + 2] - dVar36;
            bVar10 = voronoicell_base::nplane<voro::voronoicell_neighbor>
                               ((voronoicell_base *)param_1,param_1,dVar35,dVar30,dVar34,
                                dVar30 * dVar30 + dVar35 * dVar35 + dVar34 * dVar34,
                                *(int *)((longlong)this->id[iVar21] + lVar25));
            if (!bVar10) {
              return false;
            }
            iVar26 = iVar26 + 1;
            lVar25 = lVar25 + 4;
            puVar16 = local_e0;
            dVar35 = local_128;
          } while (iVar26 < this->co[iVar21]);
        }
        if (local_150 < puVar16) {
          lVar25 = (longlong)puVar16 - (longlong)local_150 >> 2;
        }
        else {
          lVar25 = ((longlong)this->qu_l - (longlong)local_150 >> 2) +
                   ((longlong)puVar16 - (longlong)this->qu >> 2);
        }
        if (lVar25 < 0x12) {
          add_list_memory(this,&local_120,&local_150);
          puVar16 = (uint *)local_120;
        }
        add_to_mask(this,iVar17,iVar14,iVar19,&local_150);
      }
    } while (puVar16 != (uint *)local_150);
  }
  return true;
}

// compute_cell<voro::voronoicell_neighbor> @ 1436bcf00

bool __thiscall
voro::voro_compute<voro::container_poly>::compute_cell<voro::voronoicell_neighbor>
          (voro_compute<voro::container_poly> *this,voronoicell_neighbor *param_1,int param_2,
          int param_3,int param_4,int param_5,int param_6)

{
  double dVar1;
  double dVar2;
  int iVar3;
  container_poly *pcVar4;
  double *pdVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  uint *puVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  int *piVar27;
  int iVar28;
  undefined8 *puVar29;
  int iVar30;
  longlong lVar31;
  undefined4 uVar32;
  double dVar33;
  undefined4 uVar41;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  uint uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  double dVar56;
  uint local_1a8;
  uint *local_1a0;
  uint local_198;
  radius_info local_188;
  int local_170;
  uint local_16c;
  int *local_168;
  int *local_160;
  int local_158;
  int local_154;
  uint *local_150;
  double local_148;
  double local_140;
  double local_138;
  int **local_130;
  double local_128;
  double local_120;
  longlong local_118;
  double local_110;
  double local_108;
  double *local_100;
  double local_f8;
  double local_f0;
  uint *local_e8;
  double local_e0;
  
  pcVar4 = this->con;
  uVar23 = (uint)__xmm_80000000000000008000000000000000;
  uVar53 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar8 = 0.0;
  dVar9 = 0.0;
  dVar10 = 0.0;
  lVar31 = (longlong)param_2;
  lVar17 = (longlong)(param_3 * *(int *)&pcVar4->field_0xc8);
  lVar26 = *(longlong *)(*(longlong *)&pcVar4->field_0xb0 + lVar31 * 8);
  dVar1 = *(double *)(lVar26 + lVar17 * 8);
  uVar54 = SUB84(dVar1,0);
  uVar55 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar43 = *(double *)(lVar26 + 8 + lVar17 * 8);
  dVar46 = *(double *)(lVar26 + 0x10 + lVar17 * 8);
  if (pcVar4->field_0xa0 == '\0') {
    dVar45 = *(double *)&pcVar4->field_0x78 - dVar1;
    dVar2 = *(double *)&pcVar4->field_0x70 - dVar1;
    iVar13 = param_4;
  }
  else {
    dVar45 = (*(double *)&pcVar4->field_0x78 - *(double *)&pcVar4->field_0x70) *
             __real_3fe0000000000000;
    dVar2 = (double)CONCAT44((uint)((ulonglong)dVar45 >> 0x20) ^ uVar53,SUB84(dVar45,0) ^ uVar23);
    iVar13 = *(int *)pcVar4;
  }
  if (pcVar4->field_0xa1 == '\0') {
    dVar33 = *(double *)&pcVar4->field_0x88 - dVar43;
    dVar51 = *(double *)&pcVar4->field_0x80 - dVar43;
    iVar14 = param_5;
  }
  else {
    dVar33 = (*(double *)&pcVar4->field_0x88 - *(double *)&pcVar4->field_0x80) *
             __real_3fe0000000000000;
    dVar51 = (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) ^ uVar53,SUB84(dVar33,0) ^ uVar23);
    iVar14 = *(int *)&pcVar4->field_0x4;
  }
  if (pcVar4->field_0xa2 == '\0') {
    dVar42 = *(double *)&pcVar4->field_0x98 - dVar46;
    dVar49 = *(double *)&pcVar4->field_0x90 - dVar46;
    iVar25 = param_6;
  }
  else {
    dVar42 = (*(double *)&pcVar4->field_0x98 - *(double *)&pcVar4->field_0x90) *
             __real_3fe0000000000000;
    dVar49 = (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) ^ uVar53,SUB84(dVar42,0) ^ uVar23);
    iVar25 = *(int *)&pcVar4->field_0x8;
  }
  local_110 = dVar1;
  local_f8 = dVar43;
  local_f0 = dVar46;
  voronoicell_neighbor::init(param_1,dVar2,dVar45,dVar51,dVar33,dVar49,dVar42);
  puVar29 = *(undefined8 **)&pcVar4->field_0x50;
  if (puVar29 < *(undefined8 **)&pcVar4->field_0x58) {
    do {
      cVar11 = (**(code **)(*(longlong *)*puVar29 + 0x10))((longlong *)*puVar29,param_1);
      if (cVar11 == '\0') {
        return false;
      }
      puVar29 = puVar29 + 1;
    } while (puVar29 < *(undefined8 **)&pcVar4->field_0x58);
  }
  local_170 = 3;
  dVar2 = *(double *)&this->con->field_0xd8;
  iVar15 = (param_2 - (iVar25 * *(int *)&pcVar4->field_0x4 + iVar14) * *(int *)pcVar4) - iVar13;
  iVar20 = 0;
  local_130 = &`public:_bool___cdecl_voro::voro_compute<voro::container_poly>::compute_cell<voro::voronoicell_neighbor>(voro::voronoicell_neighbor&___ptr64,int,int,int,int,int)___ptr64'
               ::__l2::count_list;
  dVar45 = *(double *)
            (*(longlong *)(*(longlong *)&this->con->field_0xd0 + lVar31 * 8) + 0x18 +
            (longlong)(param_3 * 4) * 8);
  dVar45 = dVar45 * dVar45;
  dVar2 = dVar45 - dVar2 * dVar2;
  local_188.r_rad = dVar45;
  local_188.r_mul = dVar2;
  if (0 < param_3) {
    lVar17 = 0;
    lVar26 = 0;
    do {
      lVar18 = (longlong)(iVar20 * this->ps);
      pdVar5 = this->p[lVar31];
      dVar42 = pdVar5[lVar18] - dVar1;
      dVar49 = pdVar5[lVar18 + 1] - dVar43;
      dVar51 = pdVar5[lVar18 + 2] - dVar46;
      dVar33 = *(double *)
                (*(longlong *)(*(longlong *)&this->con->field_0xd0 + lVar31 * 8) + 0x18 + lVar17);
      bVar12 = voronoicell_base::nplane<voro::voronoicell_neighbor>
                         ((voronoicell_base *)param_1,param_1,dVar42,dVar49,dVar51,
                          (dVar49 * dVar49 + dVar42 * dVar42 + dVar51 * dVar51 + dVar45) -
                          dVar33 * dVar33,*(int *)((longlong)this->id[lVar31] + lVar26));
      if (!bVar12) {
        return false;
      }
      iVar20 = iVar20 + 1;
      lVar26 = lVar26 + 4;
      lVar17 = lVar17 + 0x20;
    } while (iVar20 < param_3);
  }
  iVar20 = iVar20 + 1;
  if (iVar20 < this->co[lVar31]) {
    lVar17 = (longlong)iVar20 << 5;
    lVar26 = (longlong)iVar20 * 4;
    do {
      lVar18 = (longlong)(iVar20 * this->ps);
      pdVar5 = this->p[lVar31];
      dVar42 = pdVar5[lVar18] - dVar1;
      dVar49 = pdVar5[lVar18 + 1] - dVar43;
      dVar51 = pdVar5[lVar18 + 2] - dVar46;
      dVar33 = *(double *)
                (*(longlong *)(*(longlong *)&this->con->field_0xd0 + lVar31 * 8) + 0x18 + lVar17);
      bVar12 = voronoicell_base::nplane<voro::voronoicell_neighbor>
                         ((voronoicell_base *)param_1,param_1,dVar42,dVar49,dVar51,
                          (dVar49 * dVar49 + dVar42 * dVar42 + dVar51 * dVar51 + dVar45) -
                          dVar33 * dVar33,*(int *)((longlong)this->id[lVar31] + lVar26));
      if (!bVar12) {
        return false;
      }
      iVar20 = iVar20 + 1;
      lVar26 = lVar26 + 4;
      lVar17 = lVar17 + 0x20;
    } while (iVar20 < this->co[lVar31]);
  }
  dVar33 = voronoicell_base::max_radius_squared((voronoicell_base *)param_1);
  pcVar4 = this->con;
  uVar32 = SUB84(dVar33,0);
  uVar41 = (undefined4)((ulonglong)dVar33 >> 0x20);
  local_148 = (dVar1 - *(double *)&pcVar4->field_0x70) -
              (double)param_4 * *(double *)&pcVar4->field_0x18;
  local_140 = (dVar46 - *(double *)&pcVar4->field_0x90) -
              (double)param_6 * *(double *)&pcVar4->field_0x28;
  local_138 = (dVar43 - *(double *)&pcVar4->field_0x80) -
              (double)param_5 * *(double *)&pcVar4->field_0x20;
  iVar22 = (int)(local_148 * this->xsp * __real_4020000000000000);
  iVar20 = (int)(local_138 * this->ysp * __real_4020000000000000);
  iVar16 = (int)(local_140 * this->zsp * __real_4020000000000000);
  if (iVar22 < 4) {
    local_198 = 0;
    local_1a8 = 0;
    iVar24 = iVar22;
    dVar1 = this->boxx - local_148;
  }
  else {
    local_1a8 = 0x60007f;
    local_198 = 0x200001;
    iVar24 = 0;
    dVar1 = local_148;
    if (-1 < 7 - iVar22) {
      iVar24 = 7 - iVar22;
    }
  }
  if (iVar20 < 4) {
    iVar22 = iVar20;
    dVar43 = this->boxy - local_138;
  }
  else {
    local_1a8 = local_1a8 | 0x3003f80;
    local_198 = local_198 | 0x1000080;
    iVar22 = 0;
    dVar43 = local_138;
    if (-1 < 7 - iVar20) {
      iVar22 = 7 - iVar20;
    }
  }
  if (iVar16 < 4) {
    iVar20 = iVar16;
    dVar46 = this->boxz - local_140;
  }
  else {
    local_1a8 = local_1a8 | 0x181fc000;
    local_198 = local_198 | 0x8004000;
    iVar20 = 0;
    dVar46 = local_140;
    if (-1 < 7 - iVar16) {
      iVar20 = 7 - iVar16;
    }
  }
  dVar1 = dVar1 * dVar1;
  dVar43 = dVar43 * dVar43;
  iVar16 = 0;
  iVar20 = (iVar24 + (iVar22 + iVar20 * 4) * 4) * 0x40;
  dVar46 = dVar46 * dVar46;
  local_100 = this->mrad + iVar20;
  piVar27 = (int *)(longlong)(int)this->wl[iVar20];
  local_1a0 = this->wl + iVar20;
  puVar19 = local_1a0;
  lVar26 = 0;
  local_160 = piVar27;
  local_128 = dVar43;
  local_120 = dVar1;
  local_e0 = dVar46;
  do {
    if (iVar16 == local_170) {
      dVar33 = voronoicell_base::max_radius_squared((voronoicell_base *)param_1);
      uVar32 = SUB84(dVar33,0);
      uVar41 = (undefined4)((ulonglong)dVar33 >> 0x20);
      if (local_130 !=
          (int **)`public:_bool___cdecl_voro::voro_compute<voro::container_poly>::compute_cell<voro::voronoicell_neighbor>(voro::voronoicell_neighbor&___ptr64,int,int,int,int,int)___ptr64'
                  ::__l2::count_e) {
        local_170 = *(int *)local_130;
        local_130 = (int **)((longlong)local_130 + 4);
      }
    }
    auVar34._0_8_ = local_100[lVar26] * (double)CONCAT44(uVar41,uVar32);
    auVar34._8_8_ = 0;
    auVar34 = sqrtpd(auVar34,auVar34);
    if (auVar34._0_8_ < dVar2 + local_100[lVar26]) {
      return true;
    }
    local_118 = lVar26 + 1;
    puVar19 = puVar19 + 1;
    iVar16 = iVar16 + 1;
    uVar23 = (local_1a8 ^ *puVar19) + local_198;
    iVar22 = (uVar23 >> 7 & 0x7f) - 0x40;
    iVar20 = (uVar23 & 0x7f) - 0x40;
    iVar24 = (uVar23 >> 0xe & 0x7f) - 0x40;
    iVar30 = iVar13 + iVar20;
    if (((((-1 < iVar30) && (iVar30 < this->hx)) && (iVar28 = iVar14 + iVar22, -1 < iVar28)) &&
        ((iVar28 < this->hy && (iVar21 = iVar24 + iVar25, -1 < iVar21)))) &&
       ((iVar21 < this->hz &&
        (bVar12 = compute_min_max_radius
                            (this,iVar20,iVar22,iVar24,local_148,local_138,local_140,dVar1,dVar43,
                             dVar46,&local_108,(double)CONCAT44(uVar41,uVar32),&local_188), !bVar12)
        ))) {
      pcVar4 = this->con;
      if (pcVar4->field_0xa0 != '\0') {
        iVar20 = *(int *)pcVar4;
        if (param_4 + iVar30 < iVar20) {
          iVar30 = iVar30 + iVar20;
          dVar10 = *(double *)&pcVar4->field_0x70 - *(double *)&pcVar4->field_0x78;
        }
        else if (param_4 + iVar30 < iVar20 * 2) {
          dVar10 = 0.0;
        }
        else {
          iVar30 = iVar30 - iVar20;
          dVar10 = *(double *)&pcVar4->field_0x78 - *(double *)&pcVar4->field_0x70;
        }
      }
      if (pcVar4->field_0xa1 != '\0') {
        iVar20 = *(int *)&pcVar4->field_0x4;
        if (param_5 + iVar28 < iVar20) {
          iVar28 = iVar28 + iVar20;
          dVar9 = *(double *)&pcVar4->field_0x80 - *(double *)&pcVar4->field_0x88;
        }
        else if (param_5 + iVar28 < iVar20 * 2) {
          dVar9 = 0.0;
        }
        else {
          iVar28 = iVar28 - iVar20;
          dVar9 = *(double *)&pcVar4->field_0x88 - *(double *)&pcVar4->field_0x80;
        }
      }
      if (pcVar4->field_0xa2 != '\0') {
        iVar20 = *(int *)&pcVar4->field_0x8;
        if (param_6 + iVar21 < iVar20) {
          iVar21 = iVar21 + iVar20;
          dVar8 = *(double *)&pcVar4->field_0x90 - *(double *)&pcVar4->field_0x98;
        }
        else if (param_6 + iVar21 < iVar20 * 2) {
          dVar8 = 0.0;
        }
        else {
          iVar21 = iVar21 - iVar20;
          dVar8 = *(double *)&pcVar4->field_0x98 - *(double *)&pcVar4->field_0x90;
        }
      }
      lVar26 = (longlong)
               ((iVar21 * *(int *)&pcVar4->field_0x4 + iVar28) * *(int *)pcVar4 + iVar30 + iVar15);
      if (0 < this->co[lVar26]) {
        auVar35._0_8_ = local_108 * (double)CONCAT44(uVar41,uVar32);
        auVar35._8_8_ = 0;
        dVar43 = local_f8 - dVar9;
        iVar20 = 0;
        lVar31 = 0;
        lVar17 = 0;
        dVar1 = (double)CONCAT44(uVar55,uVar54) - dVar10;
        dVar33 = local_f0 - dVar8;
        auVar34 = sqrtpd(auVar35,auVar35);
        if (auVar34._0_8_ < dVar2 + local_108) {
          do {
            lVar18 = (longlong)(iVar20 * this->ps);
            pdVar5 = this->p[lVar26];
            dVar49 = pdVar5[lVar18] - dVar1;
            dVar44 = pdVar5[lVar18 + 1] - dVar43;
            dVar47 = pdVar5[lVar18 + 2] - dVar33;
            dVar51 = *(double *)
                      (*(longlong *)(*(longlong *)&this->con->field_0xd0 + lVar26 * 8) + 0x18 +
                      lVar17);
            auVar36._0_8_ = dVar51 * dVar51;
            auVar36._8_8_ = 0;
            dVar51 = dVar44 * dVar44 + dVar49 * dVar49 + dVar47 * dVar47;
            dVar42 = (local_188.r_rad - auVar36._0_8_) + dVar51;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = dVar51 * (double)CONCAT44(uVar41,uVar32);
            auVar34 = sqrtpd(auVar36,auVar7);
            if ((dVar42 < auVar34._0_8_) &&
               (bVar12 = voronoicell_base::nplane<voro::voronoicell_neighbor>
                                   ((voronoicell_base *)param_1,param_1,dVar49,dVar44,dVar47,dVar42,
                                    *(int *)((longlong)this->id[lVar26] + lVar31)), !bVar12)) {
              return false;
            }
            iVar20 = iVar20 + 1;
            lVar17 = lVar17 + 0x20;
            lVar31 = lVar31 + 4;
          } while (iVar20 < this->co[lVar26]);
        }
        else {
          do {
            lVar18 = (longlong)(iVar20 * this->ps);
            pdVar5 = this->p[lVar26];
            dVar42 = pdVar5[lVar18] - dVar1;
            dVar49 = pdVar5[lVar18 + 1] - dVar43;
            dVar51 = pdVar5[lVar18 + 2] - dVar33;
            dVar46 = *(double *)
                      (*(longlong *)(*(longlong *)&this->con->field_0xd0 + lVar26 * 8) + 0x18 +
                      lVar31);
            bVar12 = voronoicell_base::nplane<voro::voronoicell_neighbor>
                               ((voronoicell_base *)param_1,param_1,dVar42,dVar49,dVar51,
                                (dVar49 * dVar49 + dVar42 * dVar42 + dVar51 * dVar51 + dVar45) -
                                dVar46 * dVar46,*(int *)((longlong)this->id[lVar26] + lVar17));
            if (!bVar12) {
              return false;
            }
            iVar20 = iVar20 + 1;
            lVar17 = lVar17 + 4;
            lVar31 = lVar31 + 0x20;
            dVar46 = local_e0;
          } while (iVar20 < this->co[lVar26]);
        }
        uVar54 = SUB84(local_110,0);
        uVar55 = (undefined4)((ulonglong)local_110 >> 0x20);
        piVar27 = local_160;
        dVar43 = local_128;
        dVar1 = local_120;
      }
    }
    lVar26 = local_118;
  } while (local_118 < (longlong)piVar27);
  puVar19 = &this->mv;
  *puVar19 = *puVar19 + 1;
  if (*puVar19 == 0) {
    puVar19 = this->mask;
    if (puVar19 < puVar19 + this->hxyz) {
      do {
        *puVar19 = 0;
        puVar19 = puVar19 + 1;
      } while (puVar19 < this->mask + this->hxyz);
    }
    this->mv = 1;
  }
  local_150 = &this->mv;
  local_168 = this->qu;
  puVar19 = (uint *)local_168;
  if (iVar16 < 0x3f) {
    local_1a0 = local_1a0 + local_118;
    local_160 = local_168;
    do {
      if (iVar16 == local_170) {
        dVar33 = voronoicell_base::max_radius_squared((voronoicell_base *)param_1);
        uVar32 = SUB84(dVar33,0);
        uVar41 = (undefined4)((ulonglong)dVar33 >> 0x20);
        if (local_130 !=
            (int **)`public:_bool___cdecl_voro::voro_compute<voro::container_poly>::compute_cell<voro::voronoicell_neighbor>(voro::voronoicell_neighbor&___ptr64,int,int,int,int,int)___ptr64'
                    ::__l2::count_e) {
          local_170 = *(int *)local_130;
          local_130 = (int **)((longlong)local_130 + 4);
        }
      }
      auVar37._0_8_ = local_100[lVar26] * (double)CONCAT44(uVar41,uVar32);
      auVar37._8_8_ = 0;
      auVar34 = sqrtpd(auVar37,auVar37);
      if (auVar34._0_8_ < dVar2 + local_100[lVar26]) {
        return true;
      }
      local_1a0 = local_1a0 + 1;
      iVar16 = iVar16 + 1;
      lVar26 = lVar26 + 1;
      uVar23 = (local_1a8 ^ *local_1a0) + local_198;
      iVar24 = (uVar23 >> 7 & 0x7f) - 0x40;
      iVar30 = (uVar23 >> 0xe & 0x7f) - 0x40;
      iVar22 = (uVar23 & 0x7f) - 0x40;
      iVar20 = iVar13 + iVar22;
      local_16c = uVar23;
      local_154 = iVar20;
      local_118 = lVar26;
      if ((((-1 < iVar20) && (iVar20 < this->hx)) &&
          (iVar28 = iVar14 + iVar24, local_158 = iVar28, -1 < iVar28)) &&
         (((iVar28 < this->hy && (iVar21 = iVar30 + iVar25, -1 < iVar21)) && (iVar21 < this->hz))))
      {
        local_e8 = this->mask +
                   (longlong)((this->hy * iVar21 + iVar28) * this->hx) + (longlong)iVar20;
        *local_e8 = *local_150;
        bVar12 = compute_min_max_radius
                           (this,iVar22,iVar24,iVar30,local_148,local_138,local_140,dVar1,dVar43,
                            dVar46,&local_108,(double)CONCAT44(uVar41,uVar32),&local_188);
        if (!bVar12) {
          pcVar4 = this->con;
          iVar22 = iVar20;
          if (pcVar4->field_0xa0 != '\0') {
            iVar24 = *(int *)pcVar4;
            if (param_4 + iVar20 < iVar24) {
              dVar10 = *(double *)&pcVar4->field_0x70 - *(double *)&pcVar4->field_0x78;
              iVar22 = iVar24 + iVar20;
            }
            else if (param_4 + iVar20 < iVar24 * 2) {
              dVar10 = 0.0;
            }
            else {
              dVar10 = *(double *)&pcVar4->field_0x78 - *(double *)&pcVar4->field_0x70;
              iVar22 = iVar20 - iVar24;
            }
          }
          iVar24 = iVar28;
          if (pcVar4->field_0xa1 != '\0') {
            iVar30 = *(int *)&pcVar4->field_0x4;
            if (param_5 + iVar28 < iVar30) {
              dVar9 = *(double *)&pcVar4->field_0x80 - *(double *)&pcVar4->field_0x88;
              iVar24 = iVar30 + iVar28;
            }
            else if (param_5 + iVar28 < iVar30 * 2) {
              dVar9 = 0.0;
            }
            else {
              dVar9 = *(double *)&pcVar4->field_0x88 - *(double *)&pcVar4->field_0x80;
              iVar24 = iVar28 - iVar30;
            }
          }
          iVar30 = iVar21;
          if (pcVar4->field_0xa2 != '\0') {
            iVar3 = *(int *)&pcVar4->field_0x8;
            if (param_6 + iVar21 < iVar3) {
              dVar8 = *(double *)&pcVar4->field_0x90 - *(double *)&pcVar4->field_0x98;
              iVar30 = iVar3 + iVar21;
            }
            else if (param_6 + iVar21 < iVar3 * 2) {
              dVar8 = 0.0;
            }
            else {
              dVar8 = *(double *)&pcVar4->field_0x98 - *(double *)&pcVar4->field_0x90;
              iVar30 = iVar21 - iVar3;
            }
          }
          lVar26 = (longlong)
                   ((iVar30 * *(int *)&pcVar4->field_0x4 + iVar24) * *(int *)pcVar4 + iVar22 +
                   iVar15);
          if (0 < this->co[lVar26]) {
            auVar38._0_8_ = local_108 * (double)CONCAT44(uVar41,uVar32);
            auVar38._8_8_ = 0;
            dVar51 = local_f8 - dVar9;
            iVar22 = 0;
            lVar31 = 0;
            lVar17 = 0;
            dVar33 = (double)CONCAT44(uVar55,uVar54) - dVar10;
            dVar42 = local_f0 - dVar8;
            auVar34 = sqrtpd(auVar38,auVar38);
            if (auVar34._0_8_ < dVar2 + local_108) {
              do {
                lVar18 = (longlong)(iVar22 * this->ps);
                pdVar5 = this->p[lVar26];
                dVar49 = pdVar5[lVar18] - dVar33;
                dVar44 = pdVar5[lVar18 + 1] - dVar51;
                dVar47 = pdVar5[lVar18 + 2] - dVar42;
                dVar1 = *(double *)
                         (*(longlong *)(*(longlong *)&this->con->field_0xd0 + lVar26 * 8) + 0x18 +
                         lVar17);
                auVar39._0_8_ = dVar1 * dVar1;
                auVar39._8_8_ = 0;
                dVar1 = dVar44 * dVar44 + dVar49 * dVar49 + dVar47 * dVar47;
                dVar43 = (local_188.r_rad - auVar39._0_8_) + dVar1;
                auVar6._8_8_ = 0;
                auVar6._0_8_ = dVar1 * (double)CONCAT44(uVar41,uVar32);
                auVar34 = sqrtpd(auVar39,auVar6);
                if ((dVar43 < auVar34._0_8_) &&
                   (bVar12 = voronoicell_base::nplane<voro::voronoicell_neighbor>
                                       ((voronoicell_base *)param_1,param_1,dVar49,dVar44,dVar47,
                                        dVar43,*(int *)((longlong)this->id[lVar26] + lVar31)),
                   !bVar12)) {
                  return false;
                }
                iVar22 = iVar22 + 1;
                lVar17 = lVar17 + 0x20;
                lVar31 = lVar31 + 4;
                uVar23 = local_16c;
                iVar20 = local_154;
                iVar28 = local_158;
                dVar43 = local_128;
                dVar1 = local_120;
              } while (iVar22 < this->co[lVar26]);
            }
            else {
              do {
                lVar18 = (longlong)(iVar22 * this->ps);
                pdVar5 = this->p[lVar26];
                dVar46 = pdVar5[lVar18] - dVar33;
                dVar49 = pdVar5[lVar18 + 1] - dVar51;
                dVar43 = pdVar5[lVar18 + 2] - dVar42;
                dVar1 = *(double *)
                         (*(longlong *)(*(longlong *)&this->con->field_0xd0 + lVar26 * 8) + 0x18 +
                         lVar31);
                bVar12 = voronoicell_base::nplane<voro::voronoicell_neighbor>
                                   ((voronoicell_base *)param_1,param_1,dVar46,dVar49,dVar43,
                                    (dVar49 * dVar49 + dVar46 * dVar46 + dVar43 * dVar43 + dVar45) -
                                    dVar1 * dVar1,*(int *)((longlong)this->id[lVar26] + lVar17));
                if (!bVar12) {
                  return false;
                }
                iVar22 = iVar22 + 1;
                lVar17 = lVar17 + 4;
                lVar31 = lVar31 + 0x20;
                uVar23 = local_16c;
                iVar20 = local_154;
                iVar28 = local_158;
                dVar46 = local_e0;
                dVar43 = local_128;
                dVar1 = local_120;
              } while (iVar22 < this->co[lVar26]);
            }
          }
          if (this->qu_l + -0x12 < local_168) {
            add_list_memory(this,&local_160,&local_168);
          }
          scan_bits_mask_add(this,uVar23,local_e8,iVar20,iVar28,iVar21,&local_168);
          lVar26 = local_118;
        }
      }
      uVar54 = SUB84(local_110,0);
      uVar55 = (undefined4)((ulonglong)local_110 >> 0x20);
      puVar19 = (uint *)local_160;
    } while (lVar26 < 0x3f);
  }
  dVar46 = local_110;
  dVar43 = local_140;
  dVar1 = local_148;
  auVar40._0_8_ = local_100[iVar16] * (double)CONCAT44(uVar41,uVar32);
  auVar40._8_8_ = 0;
  auVar34 = sqrtpd(auVar40,auVar40);
  if ((dVar2 + local_100[iVar16] <= auVar34._0_8_) && (puVar19 != (uint *)local_168)) {
    do {
      if (puVar19 == (uint *)this->qu_l) {
        puVar19 = (uint *)this->qu;
      }
      uVar23 = *puVar19;
      iVar20 = puVar19[1];
      iVar16 = puVar19[2];
      puVar19 = puVar19 + 3;
      dVar47 = (double)(int)(uVar23 - iVar13) * this->boxx - dVar1;
      dVar50 = (double)(iVar20 - iVar14) * this->boxy - local_138;
      dVar2 = dVar47 + this->boxx;
      dVar44 = (double)(iVar16 - iVar25) * this->boxz - dVar43;
      dVar52 = dVar50 + this->boxy;
      dVar45 = dVar44 + this->boxz;
      dVar33 = dVar50;
      dVar51 = dVar44;
      dVar42 = dVar50;
      dVar49 = dVar45;
      local_16c = uVar23;
      local_160 = (int *)puVar19;
      local_e8 = puVar19;
      if (iVar13 < (int)uVar23) {
        dVar48 = dVar47;
        dVar56 = dVar2;
        if (iVar14 < iVar20) {
          dVar42 = dVar52;
          if ((iVar25 < iVar16) || (dVar51 = dVar45, dVar49 = dVar44, iVar16 < iVar25)) {
LAB_1436be06b:
            bVar12 = corner_test<voro::voronoicell_neighbor>
                               (this,param_1,dVar48,dVar33,dVar51,dVar56,dVar42,dVar49,&local_188);
          }
          else {
            bVar12 = edge_z_test<voro::voronoicell_neighbor>
                               (this,param_1,dVar47,dVar50,dVar44,dVar2,dVar52,dVar45,&local_188);
          }
LAB_1436be070:
          if (bVar12 == false) goto LAB_1436be47d;
        }
        else {
          if (iVar14 <= iVar20) {
            if (iVar25 < iVar16) {
              bVar12 = edge_y_test<voro::voronoicell_neighbor>
                                 (this,param_1,dVar47,dVar50,dVar44,dVar2,dVar52,dVar45,&local_188);
            }
            else {
              if (iVar25 <= iVar16) {
                bVar12 = face_x_test<voro::voronoicell_neighbor>
                                   (this,param_1,dVar47,dVar50,dVar44,dVar52,dVar45,&local_188);
                goto joined_r0x0001436be2d6;
              }
              bVar12 = edge_y_test<voro::voronoicell_neighbor>
                                 (this,param_1,dVar47,dVar50,dVar45,dVar2,dVar52,dVar44,&local_188);
            }
            goto LAB_1436be070;
          }
          dVar33 = dVar52;
          if (iVar25 < iVar16) goto LAB_1436be06b;
          if (iVar25 <= iVar16) {
            bVar12 = edge_z_test<voro::voronoicell_neighbor>
                               (this,param_1,dVar47,dVar52,dVar44,dVar2,dVar50,dVar45,&local_188);
            goto LAB_1436be070;
          }
          bVar12 = corner_test<voro::voronoicell_neighbor>
                             (this,param_1,dVar47,dVar52,dVar45,dVar2,dVar50,dVar44,&local_188);
joined_r0x0001436be2d6:
          if (!bVar12) goto LAB_1436be47d;
        }
      }
      else {
        if ((int)uVar23 < iVar13) {
          dVar48 = dVar2;
          dVar56 = dVar47;
          if (iVar14 < iVar20) {
            dVar42 = dVar52;
            if ((iVar25 < iVar16) || (dVar51 = dVar45, dVar49 = dVar44, iVar16 < iVar25))
            goto LAB_1436be06b;
            bVar12 = edge_z_test<voro::voronoicell_neighbor>
                               (this,param_1,dVar2,dVar50,dVar44,dVar47,dVar52,dVar45,&local_188);
          }
          else if (iVar20 < iVar14) {
            dVar33 = dVar52;
            if ((iVar25 < iVar16) || (dVar51 = dVar45, dVar49 = dVar44, iVar16 < iVar25))
            goto LAB_1436be06b;
            bVar12 = edge_z_test<voro::voronoicell_neighbor>
                               (this,param_1,dVar2,dVar52,dVar44,dVar47,dVar50,dVar45,&local_188);
          }
          else if (iVar25 < iVar16) {
            bVar12 = edge_y_test<voro::voronoicell_neighbor>
                               (this,param_1,dVar2,dVar50,dVar44,dVar47,dVar52,dVar45,&local_188);
          }
          else {
            if (iVar25 <= iVar16) {
              bVar12 = face_x_test<voro::voronoicell_neighbor>
                                 (this,param_1,dVar2,dVar50,dVar44,dVar52,dVar45,&local_188);
              goto joined_r0x0001436be2d6;
            }
            bVar12 = edge_y_test<voro::voronoicell_neighbor>
                               (this,param_1,dVar2,dVar50,dVar45,dVar47,dVar52,dVar44,&local_188);
          }
          goto LAB_1436be070;
        }
        if (iVar14 < iVar20) {
          if (iVar25 < iVar16) {
            bVar12 = edge_x_test<voro::voronoicell_neighbor>
                               (this,param_1,dVar47,dVar50,dVar44,dVar2,dVar52,dVar45,&local_188);
          }
          else {
            if (iVar25 <= iVar16) {
              bVar12 = face_y_test<voro::voronoicell_neighbor>
                                 (this,param_1,dVar47,dVar50,dVar44,dVar2,dVar45,&local_188);
              goto joined_r0x0001436be2d6;
            }
            bVar12 = edge_x_test<voro::voronoicell_neighbor>
                               (this,param_1,dVar47,dVar50,dVar45,dVar2,dVar52,dVar44,&local_188);
          }
          goto LAB_1436be070;
        }
        if (iVar20 < iVar14) {
          if (iVar25 < iVar16) {
            bVar12 = edge_x_test<voro::voronoicell_neighbor>
                               (this,param_1,dVar47,dVar52,dVar44,dVar2,dVar50,dVar45,&local_188);
          }
          else {
            if (iVar25 <= iVar16) {
              bVar12 = face_y_test<voro::voronoicell_neighbor>
                                 (this,param_1,dVar47,dVar52,dVar44,dVar2,dVar45,&local_188);
              goto joined_r0x0001436be3fe;
            }
            bVar12 = edge_x_test<voro::voronoicell_neighbor>
                               (this,param_1,dVar47,dVar52,dVar45,dVar2,dVar50,dVar44,&local_188);
          }
          goto LAB_1436be070;
        }
        if (iVar25 < iVar16) {
          bVar12 = face_z_test<voro::voronoicell_neighbor>
                             (this,param_1,dVar47,dVar50,dVar44,dVar2,dVar52,&local_188);
joined_r0x0001436be3fe:
          if (bVar12) goto LAB_1436be6ff;
        }
        else if (iVar16 < iVar25) {
          bVar12 = face_z_test<voro::voronoicell_neighbor>
                             (this,param_1,dVar47,dVar50,dVar45,dVar2,dVar52,&local_188);
          if (bVar12) goto LAB_1436be6ff;
        }
        else {
          voro_fatal_error("Compute cell routine revisiting central block, which should never\nhappen."
                           ,3);
        }
LAB_1436be47d:
        pcVar4 = this->con;
        iVar22 = uVar23;
        if (pcVar4->field_0xa0 != '\0') {
          iVar24 = *(int *)pcVar4;
          if ((int)(param_4 + uVar23) < iVar24) {
            dVar10 = *(double *)&pcVar4->field_0x70 - *(double *)&pcVar4->field_0x78;
            iVar22 = uVar23 + iVar24;
          }
          else if ((int)(param_4 + uVar23) < iVar24 * 2) {
            dVar10 = 0.0;
          }
          else {
            dVar10 = *(double *)&pcVar4->field_0x78 - *(double *)&pcVar4->field_0x70;
            iVar22 = uVar23 - iVar24;
          }
        }
        iVar24 = iVar20;
        if (pcVar4->field_0xa1 != '\0') {
          iVar30 = *(int *)&pcVar4->field_0x4;
          if (param_5 + iVar20 < iVar30) {
            dVar9 = *(double *)&pcVar4->field_0x80 - *(double *)&pcVar4->field_0x88;
            iVar24 = iVar20 + iVar30;
          }
          else if (param_5 + iVar20 < iVar30 * 2) {
            dVar9 = 0.0;
          }
          else {
            dVar9 = *(double *)&pcVar4->field_0x88 - *(double *)&pcVar4->field_0x80;
            iVar24 = iVar20 - iVar30;
          }
        }
        iVar30 = iVar16;
        if (pcVar4->field_0xa2 != '\0') {
          iVar28 = *(int *)&pcVar4->field_0x8;
          if (param_6 + iVar16 < iVar28) {
            dVar8 = *(double *)&pcVar4->field_0x90 - *(double *)&pcVar4->field_0x98;
            iVar30 = iVar28 + iVar16;
          }
          else if (param_6 + iVar16 < iVar28 * 2) {
            dVar8 = 0.0;
          }
          else {
            dVar8 = *(double *)&pcVar4->field_0x98 - *(double *)&pcVar4->field_0x90;
            iVar30 = iVar16 - iVar28;
          }
        }
        lVar26 = (longlong)
                 ((iVar30 * *(int *)&pcVar4->field_0x4 + iVar24) * *(int *)pcVar4 + iVar22 + iVar15)
        ;
        if (0 < this->co[lVar26]) {
          iVar22 = 0;
          dVar2 = local_f8 - dVar9;
          dVar45 = local_f0 - dVar8;
          lVar31 = 0;
          lVar17 = 0;
          do {
            lVar18 = (longlong)(iVar22 * this->ps);
            pdVar5 = this->p[lVar26];
            dVar42 = pdVar5[lVar18] - (dVar46 - dVar10);
            dVar49 = pdVar5[lVar18 + 1] - dVar2;
            dVar51 = pdVar5[lVar18 + 2] - dVar45;
            dVar33 = *(double *)
                      (*(longlong *)(*(longlong *)&this->con->field_0xd0 + lVar26 * 8) + 0x18 +
                      lVar31);
            bVar12 = voronoicell_base::nplane<voro::voronoicell_neighbor>
                               ((voronoicell_base *)param_1,param_1,dVar42,dVar49,dVar51,
                                (dVar42 * dVar42 + dVar49 * dVar49 + dVar51 * dVar51 +
                                local_188.r_rad) - dVar33 * dVar33,
                                *(int *)((longlong)this->id[lVar26] + lVar17));
            if (!bVar12) {
              return false;
            }
            iVar22 = iVar22 + 1;
            lVar17 = lVar17 + 4;
            lVar31 = lVar31 + 0x20;
            puVar19 = local_e8;
            uVar23 = local_16c;
          } while (iVar22 < this->co[lVar26]);
        }
        if (local_168 < puVar19) {
          lVar26 = (longlong)puVar19 - (longlong)local_168 >> 2;
        }
        else {
          lVar26 = ((longlong)this->qu_l - (longlong)local_168 >> 2) +
                   ((longlong)puVar19 - (longlong)this->qu >> 2);
        }
        if (lVar26 < 0x12) {
          add_list_memory(this,&local_160,&local_168);
          puVar19 = (uint *)local_160;
        }
        add_to_mask(this,uVar23,iVar20,iVar16,&local_168);
      }
LAB_1436be6ff:
    } while (puVar19 != (uint *)local_168);
  }
  return true;
}

// corner_test<voro::voronoicell> @ 1436be780

bool __thiscall
voro::voro_compute<voro::container>::corner_test<voro::voronoicell>
          (voro_compute<voro::container> *this,voronoicell *param_1,double param_2,double param_3,
          double param_4,double param_5,double param_6,double param_7,radius_info *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  
  dVar2 = param_4 * param_4;
  dVar3 = param_3 * param_3 + param_2 * param_5;
  bVar4 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_5,param_3,param_4,dVar3 + dVar2);
  if (!bVar4) {
    bVar4 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_5,param_6,param_4,
                       param_3 * param_6 + param_2 * param_5 + dVar2);
    if (!bVar4) {
      dVar1 = param_2 * param_2 + param_3 * param_6;
      bVar4 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_2,param_6,param_4,dVar1 + dVar2);
      if (!bVar4) {
        dVar2 = param_4 * param_7;
        bVar4 = voronoicell_base::plane_intersects
                          ((voronoicell_base *)param_1,param_2,param_6,param_7,dVar2 + dVar1);
        if ((!bVar4) &&
           (bVar4 = voronoicell_base::plane_intersects
                              ((voronoicell_base *)param_1,param_2,param_3,param_7,
                               param_2 * param_2 + param_3 * param_3 + dVar2), !bVar4)) {
          bVar4 = voronoicell_base::plane_intersects
                            ((voronoicell_base *)param_1,param_5,param_3,param_7,dVar2 + dVar3);
          return !bVar4;
        }
      }
    }
  }
  return false;
}

// corner_test<voro::voronoicell> @ 1436be980

bool __thiscall
voro::voro_compute<voro::container_poly>::corner_test<voro::voronoicell>
          (voro_compute<voro::container_poly> *this,voronoicell *param_1,double param_2,
          double param_3,double param_4,double param_5,double param_6,double param_7,
          radius_info *param_8)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = param_4 * param_4;
  dVar2 = param_2 * param_2 + param_3 * param_3;
  dVar5 = param_8->r_mul / (dVar2 + dVar1) + __real_3ff0000000000000;
  dVar4 = param_2 * param_5 + param_3 * param_3;
  param_8->r_val = dVar5;
  bVar3 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_5,param_3,param_4,(dVar4 + dVar1) * dVar5);
  if (!bVar3) {
    bVar3 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_5,param_6,param_4,
                       (param_3 * param_6 + param_2 * param_5 + dVar1) * param_8->r_val);
    if (!bVar3) {
      dVar5 = param_3 * param_6 + param_2 * param_2;
      bVar3 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_2,param_6,param_4,
                         (dVar5 + dVar1) * param_8->r_val);
      if (!bVar3) {
        dVar1 = param_4 * param_7;
        bVar3 = voronoicell_base::plane_intersects
                          ((voronoicell_base *)param_1,param_2,param_6,param_7,
                           (dVar1 + dVar5) * param_8->r_val);
        if ((!bVar3) &&
           (bVar3 = voronoicell_base::plane_intersects
                              ((voronoicell_base *)param_1,param_2,param_3,param_7,
                               (dVar1 + dVar2) * param_8->r_val), !bVar3)) {
          bVar3 = voronoicell_base::plane_intersects
                            ((voronoicell_base *)param_1,param_5,param_3,param_7,
                             (dVar1 + dVar4) * param_8->r_val);
          return !bVar3;
        }
      }
    }
  }
  return false;
}

// corner_test<voro::voronoicell_neighbor> @ 1436bebd0

bool __thiscall
voro::voro_compute<voro::container>::corner_test<voro::voronoicell_neighbor>
          (voro_compute<voro::container> *this,voronoicell_neighbor *param_1,double param_2,
          double param_3,double param_4,double param_5,double param_6,double param_7,
          radius_info *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  
  dVar2 = param_4 * param_4;
  dVar3 = param_3 * param_3 + param_2 * param_5;
  bVar4 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_5,param_3,param_4,dVar3 + dVar2);
  if (!bVar4) {
    bVar4 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_5,param_6,param_4,
                       param_3 * param_6 + param_2 * param_5 + dVar2);
    if (!bVar4) {
      dVar1 = param_2 * param_2 + param_3 * param_6;
      bVar4 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_2,param_6,param_4,dVar1 + dVar2);
      if (!bVar4) {
        dVar2 = param_4 * param_7;
        bVar4 = voronoicell_base::plane_intersects
                          ((voronoicell_base *)param_1,param_2,param_6,param_7,dVar2 + dVar1);
        if ((!bVar4) &&
           (bVar4 = voronoicell_base::plane_intersects
                              ((voronoicell_base *)param_1,param_2,param_3,param_7,
                               param_2 * param_2 + param_3 * param_3 + dVar2), !bVar4)) {
          bVar4 = voronoicell_base::plane_intersects
                            ((voronoicell_base *)param_1,param_5,param_3,param_7,dVar2 + dVar3);
          return !bVar4;
        }
      }
    }
  }
  return false;
}

// corner_test<voro::voronoicell_neighbor> @ 1436bedd0

bool __thiscall
voro::voro_compute<voro::container_poly>::corner_test<voro::voronoicell_neighbor>
          (voro_compute<voro::container_poly> *this,voronoicell_neighbor *param_1,double param_2,
          double param_3,double param_4,double param_5,double param_6,double param_7,
          radius_info *param_8)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = param_4 * param_4;
  dVar2 = param_2 * param_2 + param_3 * param_3;
  dVar5 = param_8->r_mul / (dVar2 + dVar1) + __real_3ff0000000000000;
  dVar4 = param_2 * param_5 + param_3 * param_3;
  param_8->r_val = dVar5;
  bVar3 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_5,param_3,param_4,(dVar4 + dVar1) * dVar5);
  if (!bVar3) {
    bVar3 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_5,param_6,param_4,
                       (param_3 * param_6 + param_2 * param_5 + dVar1) * param_8->r_val);
    if (!bVar3) {
      dVar5 = param_3 * param_6 + param_2 * param_2;
      bVar3 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_2,param_6,param_4,
                         (dVar5 + dVar1) * param_8->r_val);
      if (!bVar3) {
        dVar1 = param_4 * param_7;
        bVar3 = voronoicell_base::plane_intersects
                          ((voronoicell_base *)param_1,param_2,param_6,param_7,
                           (dVar1 + dVar5) * param_8->r_val);
        if ((!bVar3) &&
           (bVar3 = voronoicell_base::plane_intersects
                              ((voronoicell_base *)param_1,param_2,param_3,param_7,
                               (dVar1 + dVar2) * param_8->r_val), !bVar3)) {
          bVar3 = voronoicell_base::plane_intersects
                            ((voronoicell_base *)param_1,param_5,param_3,param_7,
                             (dVar1 + dVar4) * param_8->r_val);
          return !bVar3;
        }
      }
    }
  }
  return false;
}

// edge_x_test<voro::voronoicell> @ 1436bf020

bool __thiscall
voro::voro_compute<voro::container>::edge_x_test<voro::voronoicell>
          (voro_compute<voro::container> *this,voronoicell *param_1,double param_2,double param_3,
          double param_4,double param_5,double param_6,double param_7,radius_info *param_8)

{
  double dVar1;
  bool bVar2;
  
  dVar1 = param_4 * param_7 + param_3 * param_3;
  bVar2 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_2,param_3,param_7,dVar1);
  if ((!bVar2) &&
     (bVar2 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_5,param_3,param_7,dVar1), !bVar2)) {
    dVar1 = param_4 * param_4 + param_3 * param_3;
    bVar2 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_5,param_3,param_4,dVar1);
    if ((!bVar2) &&
       (bVar2 = voronoicell_base::plane_intersects
                          ((voronoicell_base *)param_1,param_2,param_3,param_4,dVar1), !bVar2)) {
      dVar1 = param_3 * param_6 + param_4 * param_4;
      bVar2 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_2,param_6,param_4,dVar1);
      if (!bVar2) {
        bVar2 = voronoicell_base::plane_intersects
                          ((voronoicell_base *)param_1,param_5,param_6,param_4,dVar1);
        return !bVar2;
      }
    }
  }
  return false;
}

// edge_x_test<voro::voronoicell> @ 1436bf1b0

bool __thiscall
voro::voro_compute<voro::container_poly>::edge_x_test<voro::voronoicell>
          (voro_compute<voro::container_poly> *this,voronoicell *param_1,double param_2,
          double param_3,double param_4,double param_5,double param_6,double param_7,
          radius_info *param_8)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  
  dVar2 = param_4 * param_7 + param_3 * param_3;
  dVar1 = param_3 * param_3 + param_4 * param_4;
  dVar4 = param_8->r_mul / dVar1 + __real_3ff0000000000000;
  param_8->r_val = dVar4;
  bVar3 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_2,param_3,param_7,dVar2 * dVar4);
  if ((((!bVar3) &&
       (bVar3 = voronoicell_base::plane_intersects
                          ((voronoicell_base *)param_1,param_5,param_3,param_7,
                           dVar2 * param_8->r_val), !bVar3)) &&
      (bVar3 = voronoicell_base::plane_intersects
                         ((voronoicell_base *)param_1,param_5,param_3,param_4,dVar1 * param_8->r_val
                         ), !bVar3)) &&
     (bVar3 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_2,param_3,param_4,dVar1 * param_8->r_val)
     , !bVar3)) {
    dVar1 = param_3 * param_6 + param_4 * param_4;
    bVar3 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_2,param_6,param_4,dVar1 * param_8->r_val);
    if (!bVar3) {
      bVar3 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_5,param_6,param_4,dVar1 * param_8->r_val)
      ;
      return !bVar3;
    }
  }
  return false;
}

// edge_x_test<voro::voronoicell_neighbor> @ 1436bf380

bool __thiscall
voro::voro_compute<voro::container>::edge_x_test<voro::voronoicell_neighbor>
          (voro_compute<voro::container> *this,voronoicell_neighbor *param_1,double param_2,
          double param_3,double param_4,double param_5,double param_6,double param_7,
          radius_info *param_8)

{
  double dVar1;
  bool bVar2;
  
  dVar1 = param_4 * param_7 + param_3 * param_3;
  bVar2 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_2,param_3,param_7,dVar1);
  if ((!bVar2) &&
     (bVar2 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_5,param_3,param_7,dVar1), !bVar2)) {
    dVar1 = param_4 * param_4 + param_3 * param_3;
    bVar2 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_5,param_3,param_4,dVar1);
    if ((!bVar2) &&
       (bVar2 = voronoicell_base::plane_intersects
                          ((voronoicell_base *)param_1,param_2,param_3,param_4,dVar1), !bVar2)) {
      dVar1 = param_3 * param_6 + param_4 * param_4;
      bVar2 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_2,param_6,param_4,dVar1);
      if (!bVar2) {
        bVar2 = voronoicell_base::plane_intersects
                          ((voronoicell_base *)param_1,param_5,param_6,param_4,dVar1);
        return !bVar2;
      }
    }
  }
  return false;
}

// edge_x_test<voro::voronoicell_neighbor> @ 1436bf510

bool __thiscall
voro::voro_compute<voro::container_poly>::edge_x_test<voro::voronoicell_neighbor>
          (voro_compute<voro::container_poly> *this,voronoicell_neighbor *param_1,double param_2,
          double param_3,double param_4,double param_5,double param_6,double param_7,
          radius_info *param_8)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  
  dVar2 = param_4 * param_7 + param_3 * param_3;
  dVar1 = param_3 * param_3 + param_4 * param_4;
  dVar4 = param_8->r_mul / dVar1 + __real_3ff0000000000000;
  param_8->r_val = dVar4;
  bVar3 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_2,param_3,param_7,dVar2 * dVar4);
  if ((((!bVar3) &&
       (bVar3 = voronoicell_base::plane_intersects
                          ((voronoicell_base *)param_1,param_5,param_3,param_7,
                           dVar2 * param_8->r_val), !bVar3)) &&
      (bVar3 = voronoicell_base::plane_intersects
                         ((voronoicell_base *)param_1,param_5,param_3,param_4,dVar1 * param_8->r_val
                         ), !bVar3)) &&
     (bVar3 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_2,param_3,param_4,dVar1 * param_8->r_val)
     , !bVar3)) {
    dVar1 = param_3 * param_6 + param_4 * param_4;
    bVar3 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_2,param_6,param_4,dVar1 * param_8->r_val);
    if (!bVar3) {
      bVar3 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_5,param_6,param_4,dVar1 * param_8->r_val)
      ;
      return !bVar3;
    }
  }
  return false;
}

// edge_y_test<voro::voronoicell> @ 1436bf6e0

bool __thiscall
voro::voro_compute<voro::container>::edge_y_test<voro::voronoicell>
          (voro_compute<voro::container> *this,voronoicell *param_1,double param_2,double param_3,
          double param_4,double param_5,double param_6,double param_7,radius_info *param_8)

{
  double dVar1;
  bool bVar2;
  
  dVar1 = param_4 * param_7 + param_2 * param_2;
  bVar2 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_2,param_3,param_7,dVar1);
  if ((!bVar2) &&
     (bVar2 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_2,param_6,param_7,dVar1), !bVar2)) {
    dVar1 = param_4 * param_4 + param_2 * param_2;
    bVar2 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_2,param_6,param_4,dVar1);
    if ((!bVar2) &&
       (bVar2 = voronoicell_base::plane_intersects
                          ((voronoicell_base *)param_1,param_2,param_3,param_4,dVar1), !bVar2)) {
      dVar1 = param_2 * param_5 + param_4 * param_4;
      bVar2 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_5,param_3,param_4,dVar1);
      if (!bVar2) {
        bVar2 = voronoicell_base::plane_intersects
                          ((voronoicell_base *)param_1,param_5,param_6,param_4,dVar1);
        return !bVar2;
      }
    }
  }
  return false;
}

// edge_y_test<voro::voronoicell> @ 1436bf870

bool __thiscall
voro::voro_compute<voro::container_poly>::edge_y_test<voro::voronoicell>
          (voro_compute<voro::container_poly> *this,voronoicell *param_1,double param_2,
          double param_3,double param_4,double param_5,double param_6,double param_7,
          radius_info *param_8)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  
  dVar2 = param_4 * param_7 + param_2 * param_2;
  dVar1 = param_2 * param_2 + param_4 * param_4;
  dVar4 = param_8->r_mul / dVar1 + __real_3ff0000000000000;
  param_8->r_val = dVar4;
  bVar3 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_2,param_3,param_7,dVar2 * dVar4);
  if ((((!bVar3) &&
       (bVar3 = voronoicell_base::plane_intersects
                          ((voronoicell_base *)param_1,param_2,param_6,param_7,
                           dVar2 * param_8->r_val), !bVar3)) &&
      (bVar3 = voronoicell_base::plane_intersects
                         ((voronoicell_base *)param_1,param_2,param_6,param_4,dVar1 * param_8->r_val
                         ), !bVar3)) &&
     (bVar3 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_2,param_3,param_4,dVar1 * param_8->r_val)
     , !bVar3)) {
    dVar1 = param_2 * param_5 + param_4 * param_4;
    bVar3 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_5,param_3,param_4,dVar1 * param_8->r_val);
    if (!bVar3) {
      bVar3 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_5,param_6,param_4,dVar1 * param_8->r_val)
      ;
      return !bVar3;
    }
  }
  return false;
}

// edge_y_test<voro::voronoicell_neighbor> @ 1436bfa40

bool __thiscall
voro::voro_compute<voro::container>::edge_y_test<voro::voronoicell_neighbor>
          (voro_compute<voro::container> *this,voronoicell_neighbor *param_1,double param_2,
          double param_3,double param_4,double param_5,double param_6,double param_7,
          radius_info *param_8)

{
  double dVar1;
  bool bVar2;
  
  dVar1 = param_4 * param_7 + param_2 * param_2;
  bVar2 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_2,param_3,param_7,dVar1);
  if ((!bVar2) &&
     (bVar2 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_2,param_6,param_7,dVar1), !bVar2)) {
    dVar1 = param_4 * param_4 + param_2 * param_2;
    bVar2 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_2,param_6,param_4,dVar1);
    if ((!bVar2) &&
       (bVar2 = voronoicell_base::plane_intersects
                          ((voronoicell_base *)param_1,param_2,param_3,param_4,dVar1), !bVar2)) {
      dVar1 = param_2 * param_5 + param_4 * param_4;
      bVar2 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_5,param_3,param_4,dVar1);
      if (!bVar2) {
        bVar2 = voronoicell_base::plane_intersects
                          ((voronoicell_base *)param_1,param_5,param_6,param_4,dVar1);
        return !bVar2;
      }
    }
  }
  return false;
}

// edge_y_test<voro::voronoicell_neighbor> @ 1436bfbd0

bool __thiscall
voro::voro_compute<voro::container_poly>::edge_y_test<voro::voronoicell_neighbor>
          (voro_compute<voro::container_poly> *this,voronoicell_neighbor *param_1,double param_2,
          double param_3,double param_4,double param_5,double param_6,double param_7,
          radius_info *param_8)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  
  dVar2 = param_4 * param_7 + param_2 * param_2;
  dVar1 = param_2 * param_2 + param_4 * param_4;
  dVar4 = param_8->r_mul / dVar1 + __real_3ff0000000000000;
  param_8->r_val = dVar4;
  bVar3 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_2,param_3,param_7,dVar2 * dVar4);
  if ((((!bVar3) &&
       (bVar3 = voronoicell_base::plane_intersects
                          ((voronoicell_base *)param_1,param_2,param_6,param_7,
                           dVar2 * param_8->r_val), !bVar3)) &&
      (bVar3 = voronoicell_base::plane_intersects
                         ((voronoicell_base *)param_1,param_2,param_6,param_4,dVar1 * param_8->r_val
                         ), !bVar3)) &&
     (bVar3 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_2,param_3,param_4,dVar1 * param_8->r_val)
     , !bVar3)) {
    dVar1 = param_2 * param_5 + param_4 * param_4;
    bVar3 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_5,param_3,param_4,dVar1 * param_8->r_val);
    if (!bVar3) {
      bVar3 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_5,param_6,param_4,dVar1 * param_8->r_val)
      ;
      return !bVar3;
    }
  }
  return false;
}

// edge_z_test<voro::voronoicell> @ 1436bfda0

bool __thiscall
voro::voro_compute<voro::container>::edge_z_test<voro::voronoicell>
          (voro_compute<voro::container> *this,voronoicell *param_1,double param_2,double param_3,
          double param_4,double param_5,double param_6,double param_7,radius_info *param_8)

{
  double dVar1;
  bool bVar2;
  
  dVar1 = param_3 * param_6 + param_2 * param_2;
  bVar2 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_2,param_6,param_4,dVar1);
  if ((!bVar2) &&
     (bVar2 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_2,param_6,param_7,dVar1), !bVar2)) {
    dVar1 = param_3 * param_3 + param_2 * param_2;
    bVar2 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_2,param_3,param_7,dVar1);
    if ((!bVar2) &&
       (bVar2 = voronoicell_base::plane_intersects
                          ((voronoicell_base *)param_1,param_2,param_3,param_4,dVar1), !bVar2)) {
      dVar1 = param_2 * param_5 + param_3 * param_3;
      bVar2 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_5,param_3,param_4,dVar1);
      if (!bVar2) {
        bVar2 = voronoicell_base::plane_intersects
                          ((voronoicell_base *)param_1,param_5,param_3,param_7,dVar1);
        return !bVar2;
      }
    }
  }
  return false;
}

// edge_z_test<voro::voronoicell> @ 1436bff20

bool __thiscall
voro::voro_compute<voro::container_poly>::edge_z_test<voro::voronoicell>
          (voro_compute<voro::container_poly> *this,voronoicell *param_1,double param_2,
          double param_3,double param_4,double param_5,double param_6,double param_7,
          radius_info *param_8)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  
  dVar2 = param_3 * param_6 + param_2 * param_2;
  dVar1 = param_2 * param_2 + param_3 * param_3;
  dVar4 = param_8->r_mul / dVar1 + __real_3ff0000000000000;
  param_8->r_val = dVar4;
  bVar3 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_2,param_6,param_4,dVar2 * dVar4);
  if ((((!bVar3) &&
       (bVar3 = voronoicell_base::plane_intersects
                          ((voronoicell_base *)param_1,param_2,param_6,param_7,
                           dVar2 * param_8->r_val), !bVar3)) &&
      (bVar3 = voronoicell_base::plane_intersects
                         ((voronoicell_base *)param_1,param_2,param_3,param_7,dVar1 * param_8->r_val
                         ), !bVar3)) &&
     (bVar3 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_2,param_3,param_4,dVar1 * param_8->r_val)
     , !bVar3)) {
    dVar1 = param_2 * param_5 + param_3 * param_3;
    bVar3 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_5,param_3,param_4,dVar1 * param_8->r_val);
    if (!bVar3) {
      bVar3 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_5,param_3,param_7,dVar1 * param_8->r_val)
      ;
      return !bVar3;
    }
  }
  return false;
}

// edge_z_test<voro::voronoicell_neighbor> @ 1436c00f0

bool __thiscall
voro::voro_compute<voro::container>::edge_z_test<voro::voronoicell_neighbor>
          (voro_compute<voro::container> *this,voronoicell_neighbor *param_1,double param_2,
          double param_3,double param_4,double param_5,double param_6,double param_7,
          radius_info *param_8)

{
  double dVar1;
  bool bVar2;
  
  dVar1 = param_3 * param_6 + param_2 * param_2;
  bVar2 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_2,param_6,param_4,dVar1);
  if ((!bVar2) &&
     (bVar2 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_2,param_6,param_7,dVar1), !bVar2)) {
    dVar1 = param_3 * param_3 + param_2 * param_2;
    bVar2 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_2,param_3,param_7,dVar1);
    if ((!bVar2) &&
       (bVar2 = voronoicell_base::plane_intersects
                          ((voronoicell_base *)param_1,param_2,param_3,param_4,dVar1), !bVar2)) {
      dVar1 = param_2 * param_5 + param_3 * param_3;
      bVar2 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_5,param_3,param_4,dVar1);
      if (!bVar2) {
        bVar2 = voronoicell_base::plane_intersects
                          ((voronoicell_base *)param_1,param_5,param_3,param_7,dVar1);
        return !bVar2;
      }
    }
  }
  return false;
}

// edge_z_test<voro::voronoicell_neighbor> @ 1436c0270

bool __thiscall
voro::voro_compute<voro::container_poly>::edge_z_test<voro::voronoicell_neighbor>
          (voro_compute<voro::container_poly> *this,voronoicell_neighbor *param_1,double param_2,
          double param_3,double param_4,double param_5,double param_6,double param_7,
          radius_info *param_8)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  
  dVar2 = param_3 * param_6 + param_2 * param_2;
  dVar1 = param_2 * param_2 + param_3 * param_3;
  dVar4 = param_8->r_mul / dVar1 + __real_3ff0000000000000;
  param_8->r_val = dVar4;
  bVar3 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_2,param_6,param_4,dVar2 * dVar4);
  if ((((!bVar3) &&
       (bVar3 = voronoicell_base::plane_intersects
                          ((voronoicell_base *)param_1,param_2,param_6,param_7,
                           dVar2 * param_8->r_val), !bVar3)) &&
      (bVar3 = voronoicell_base::plane_intersects
                         ((voronoicell_base *)param_1,param_2,param_3,param_7,dVar1 * param_8->r_val
                         ), !bVar3)) &&
     (bVar3 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_2,param_3,param_4,dVar1 * param_8->r_val)
     , !bVar3)) {
    dVar1 = param_2 * param_5 + param_3 * param_3;
    bVar3 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_5,param_3,param_4,dVar1 * param_8->r_val);
    if (!bVar3) {
      bVar3 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_5,param_3,param_7,dVar1 * param_8->r_val)
      ;
      return !bVar3;
    }
  }
  return false;
}

// face_x_test<voro::voronoicell> @ 1436c0440

bool __thiscall
voro::voro_compute<voro::container>::face_x_test<voro::voronoicell>
          (voro_compute<voro::container> *this,voronoicell *param_1,double param_2,double param_3,
          double param_4,double param_5,double param_6,radius_info *param_7)

{
  double dVar1;
  bool bVar2;
  
  dVar1 = param_2 * param_2;
  bVar2 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_2,param_3,param_4,dVar1);
  if (((!bVar2) &&
      (bVar2 = voronoicell_base::plane_intersects
                         ((voronoicell_base *)param_1,param_2,param_3,param_6,dVar1), !bVar2)) &&
     (bVar2 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_2,param_5,param_6,dVar1), !bVar2)) {
    bVar2 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_2,param_5,param_4,dVar1);
    return !bVar2;
  }
  return false;
}

// face_x_test<voro::voronoicell> @ 1436c0520

bool __thiscall
voro::voro_compute<voro::container_poly>::face_x_test<voro::voronoicell>
          (voro_compute<voro::container_poly> *this,voronoicell *param_1,double param_2,
          double param_3,double param_4,double param_5,double param_6,radius_info *param_7)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  
  dVar1 = param_2 * param_2;
  dVar3 = param_7->r_mul / dVar1 + __real_3ff0000000000000;
  param_7->r_val = dVar3;
  bVar2 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_2,param_3,param_4,dVar3 * dVar1);
  if (((!bVar2) &&
      (bVar2 = voronoicell_base::plane_intersects
                         ((voronoicell_base *)param_1,param_2,param_3,param_6,dVar1 * param_7->r_val
                         ), !bVar2)) &&
     (bVar2 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_2,param_5,param_6,dVar1 * param_7->r_val)
     , !bVar2)) {
    bVar2 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_2,param_5,param_4,dVar1 * param_7->r_val);
    return !bVar2;
  }
  return false;
}

// face_x_test<voro::voronoicell_neighbor> @ 1436c0640

bool __thiscall
voro::voro_compute<voro::container>::face_x_test<voro::voronoicell_neighbor>
          (voro_compute<voro::container> *this,voronoicell_neighbor *param_1,double param_2,
          double param_3,double param_4,double param_5,double param_6,radius_info *param_7)

{
  double dVar1;
  bool bVar2;
  
  dVar1 = param_2 * param_2;
  bVar2 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_2,param_3,param_4,dVar1);
  if (((!bVar2) &&
      (bVar2 = voronoicell_base::plane_intersects
                         ((voronoicell_base *)param_1,param_2,param_3,param_6,dVar1), !bVar2)) &&
     (bVar2 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_2,param_5,param_6,dVar1), !bVar2)) {
    bVar2 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_2,param_5,param_4,dVar1);
    return !bVar2;
  }
  return false;
}

// face_x_test<voro::voronoicell_neighbor> @ 1436c0720

bool __thiscall
voro::voro_compute<voro::container_poly>::face_x_test<voro::voronoicell_neighbor>
          (voro_compute<voro::container_poly> *this,voronoicell_neighbor *param_1,double param_2,
          double param_3,double param_4,double param_5,double param_6,radius_info *param_7)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  
  dVar1 = param_2 * param_2;
  dVar3 = param_7->r_mul / dVar1 + __real_3ff0000000000000;
  param_7->r_val = dVar3;
  bVar2 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_2,param_3,param_4,dVar3 * dVar1);
  if (((!bVar2) &&
      (bVar2 = voronoicell_base::plane_intersects
                         ((voronoicell_base *)param_1,param_2,param_3,param_6,dVar1 * param_7->r_val
                         ), !bVar2)) &&
     (bVar2 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_2,param_5,param_6,dVar1 * param_7->r_val)
     , !bVar2)) {
    bVar2 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_2,param_5,param_4,dVar1 * param_7->r_val);
    return !bVar2;
  }
  return false;
}

// face_y_test<voro::voronoicell> @ 1436c0840

bool __thiscall
voro::voro_compute<voro::container>::face_y_test<voro::voronoicell>
          (voro_compute<voro::container> *this,voronoicell *param_1,double param_2,double param_3,
          double param_4,double param_5,double param_6,radius_info *param_7)

{
  double dVar1;
  bool bVar2;
  
  dVar1 = param_3 * param_3;
  bVar2 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_2,param_3,param_4,dVar1);
  if (((!bVar2) &&
      (bVar2 = voronoicell_base::plane_intersects
                         ((voronoicell_base *)param_1,param_2,param_3,param_6,dVar1), !bVar2)) &&
     (bVar2 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_5,param_3,param_6,dVar1), !bVar2)) {
    bVar2 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_5,param_3,param_4,dVar1);
    return !bVar2;
  }
  return false;
}

// face_y_test<voro::voronoicell> @ 1436c0920

bool __thiscall
voro::voro_compute<voro::container_poly>::face_y_test<voro::voronoicell>
          (voro_compute<voro::container_poly> *this,voronoicell *param_1,double param_2,
          double param_3,double param_4,double param_5,double param_6,radius_info *param_7)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  
  dVar1 = param_3 * param_3;
  dVar3 = param_7->r_mul / dVar1 + __real_3ff0000000000000;
  param_7->r_val = dVar3;
  bVar2 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_2,param_3,param_4,dVar3 * dVar1);
  if (((!bVar2) &&
      (bVar2 = voronoicell_base::plane_intersects
                         ((voronoicell_base *)param_1,param_2,param_3,param_6,dVar1 * param_7->r_val
                         ), !bVar2)) &&
     (bVar2 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_5,param_3,param_6,dVar1 * param_7->r_val)
     , !bVar2)) {
    bVar2 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_5,param_3,param_4,dVar1 * param_7->r_val);
    return !bVar2;
  }
  return false;
}

// face_y_test<voro::voronoicell_neighbor> @ 1436c0a40

bool __thiscall
voro::voro_compute<voro::container>::face_y_test<voro::voronoicell_neighbor>
          (voro_compute<voro::container> *this,voronoicell_neighbor *param_1,double param_2,
          double param_3,double param_4,double param_5,double param_6,radius_info *param_7)

{
  double dVar1;
  bool bVar2;
  
  dVar1 = param_3 * param_3;
  bVar2 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_2,param_3,param_4,dVar1);
  if (((!bVar2) &&
      (bVar2 = voronoicell_base::plane_intersects
                         ((voronoicell_base *)param_1,param_2,param_3,param_6,dVar1), !bVar2)) &&
     (bVar2 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_5,param_3,param_6,dVar1), !bVar2)) {
    bVar2 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_5,param_3,param_4,dVar1);
    return !bVar2;
  }
  return false;
}

// face_y_test<voro::voronoicell_neighbor> @ 1436c0b20

bool __thiscall
voro::voro_compute<voro::container_poly>::face_y_test<voro::voronoicell_neighbor>
          (voro_compute<voro::container_poly> *this,voronoicell_neighbor *param_1,double param_2,
          double param_3,double param_4,double param_5,double param_6,radius_info *param_7)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  
  dVar1 = param_3 * param_3;
  dVar3 = param_7->r_mul / dVar1 + __real_3ff0000000000000;
  param_7->r_val = dVar3;
  bVar2 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_2,param_3,param_4,dVar3 * dVar1);
  if (((!bVar2) &&
      (bVar2 = voronoicell_base::plane_intersects
                         ((voronoicell_base *)param_1,param_2,param_3,param_6,dVar1 * param_7->r_val
                         ), !bVar2)) &&
     (bVar2 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_5,param_3,param_6,dVar1 * param_7->r_val)
     , !bVar2)) {
    bVar2 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_5,param_3,param_4,dVar1 * param_7->r_val);
    return !bVar2;
  }
  return false;
}

// face_z_test<voro::voronoicell> @ 1436c0c40

bool __thiscall
voro::voro_compute<voro::container>::face_z_test<voro::voronoicell>
          (voro_compute<voro::container> *this,voronoicell *param_1,double param_2,double param_3,
          double param_4,double param_5,double param_6,radius_info *param_7)

{
  double dVar1;
  bool bVar2;
  
  dVar1 = param_4 * param_4;
  bVar2 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_2,param_3,param_4,dVar1);
  if (((!bVar2) &&
      (bVar2 = voronoicell_base::plane_intersects
                         ((voronoicell_base *)param_1,param_2,param_6,param_4,dVar1), !bVar2)) &&
     (bVar2 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_5,param_6,param_4,dVar1), !bVar2)) {
    bVar2 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_5,param_3,param_4,dVar1);
    return !bVar2;
  }
  return false;
}

// face_z_test<voro::voronoicell> @ 1436c0d30

bool __thiscall
voro::voro_compute<voro::container_poly>::face_z_test<voro::voronoicell>
          (voro_compute<voro::container_poly> *this,voronoicell *param_1,double param_2,
          double param_3,double param_4,double param_5,double param_6,radius_info *param_7)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  
  dVar1 = param_4 * param_4;
  dVar3 = param_7->r_mul / dVar1 + __real_3ff0000000000000;
  param_7->r_val = dVar3;
  bVar2 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_2,param_3,param_4,dVar3 * dVar1);
  if (((!bVar2) &&
      (bVar2 = voronoicell_base::plane_intersects
                         ((voronoicell_base *)param_1,param_2,param_6,param_4,dVar1 * param_7->r_val
                         ), !bVar2)) &&
     (bVar2 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_5,param_6,param_4,dVar1 * param_7->r_val)
     , !bVar2)) {
    bVar2 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_5,param_3,param_4,dVar1 * param_7->r_val);
    return !bVar2;
  }
  return false;
}

// face_z_test<voro::voronoicell_neighbor> @ 1436c0e60

bool __thiscall
voro::voro_compute<voro::container>::face_z_test<voro::voronoicell_neighbor>
          (voro_compute<voro::container> *this,voronoicell_neighbor *param_1,double param_2,
          double param_3,double param_4,double param_5,double param_6,radius_info *param_7)

{
  double dVar1;
  bool bVar2;
  
  dVar1 = param_4 * param_4;
  bVar2 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_2,param_3,param_4,dVar1);
  if (((!bVar2) &&
      (bVar2 = voronoicell_base::plane_intersects
                         ((voronoicell_base *)param_1,param_2,param_6,param_4,dVar1), !bVar2)) &&
     (bVar2 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_5,param_6,param_4,dVar1), !bVar2)) {
    bVar2 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_5,param_3,param_4,dVar1);
    return !bVar2;
  }
  return false;
}

// face_z_test<voro::voronoicell_neighbor> @ 1436c0f50

bool __thiscall
voro::voro_compute<voro::container_poly>::face_z_test<voro::voronoicell_neighbor>
          (voro_compute<voro::container_poly> *this,voronoicell_neighbor *param_1,double param_2,
          double param_3,double param_4,double param_5,double param_6,radius_info *param_7)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  
  dVar1 = param_4 * param_4;
  dVar3 = param_7->r_mul / dVar1 + __real_3ff0000000000000;
  param_7->r_val = dVar3;
  bVar2 = voronoicell_base::plane_intersects_guess
                    ((voronoicell_base *)param_1,param_2,param_3,param_4,dVar3 * dVar1);
  if (((!bVar2) &&
      (bVar2 = voronoicell_base::plane_intersects
                         ((voronoicell_base *)param_1,param_2,param_6,param_4,dVar1 * param_7->r_val
                         ), !bVar2)) &&
     (bVar2 = voronoicell_base::plane_intersects
                        ((voronoicell_base *)param_1,param_5,param_6,param_4,dVar1 * param_7->r_val)
     , !bVar2)) {
    bVar2 = voronoicell_base::plane_intersects
                      ((voronoicell_base *)param_1,param_5,param_3,param_4,dVar1 * param_7->r_val);
    return !bVar2;
  }
  return false;
}

// voro_compute<voro::container> @ 1436c1080

voro_compute<voro::container> * __thiscall
voro::voro_compute<voro::container>::voro_compute<voro::container>
          (voro_compute<voro::container> *this,container *param_1,int param_2,int param_3,
          int param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong64 uVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  
  this->con = param_1;
  dVar1 = *(double *)&param_1->field_0x18;
  this->boxx = dVar1;
  dVar2 = *(double *)&param_1->field_0x20;
  this->boxy = dVar2;
  dVar3 = *(double *)&param_1->field_0x28;
  this->boxz = dVar3;
  this->xsp = *(double *)&param_1->field_0x30;
  this->ysp = *(double *)&param_1->field_0x38;
  this->zsp = *(double *)&param_1->field_0x40;
  this->hx = param_2;
  this->hz = param_4;
  this->hy = param_3;
  iVar9 = param_2 * param_3;
  this->hxy = iVar9;
  this->hxyz = iVar9 * param_4;
  this->ps = *(int *)&param_1->field_0xc8;
  this->id = *(int ***)&param_1->field_0xa8;
  this->p = *(double ***)&param_1->field_0xb0;
  this->co = *(int **)&param_1->field_0xb8;
  this->bxsq = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
  this->mv = 0;
  this->qu_size = ((param_2 + param_3) * param_4 + iVar9 + 3) * 3;
  this->wl = voro_base::wl;
  this->mrad = *(double **)&param_1->field_0x48;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (longlong)(iVar9 * param_4);
  uVar6 = SUB168(ZEXT816(4) * auVar4,0);
  if (SUB168(ZEXT816(4) * auVar4,8) != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  puVar7 = operator_new__(uVar6);
  this->mask = puVar7;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (longlong)this->qu_size;
  uVar6 = SUB168(ZEXT816(4) * auVar5,0);
  if (SUB168(ZEXT816(4) * auVar5,8) != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  piVar8 = operator_new__(uVar6);
  puVar7 = this->mask;
  this->qu = piVar8;
  this->qu_l = piVar8 + this->qu_size;
  if (puVar7 < puVar7 + this->hxyz) {
    do {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    } while (puVar7 < this->mask + this->hxyz);
  }
  return this;
}

// voro_compute<voro::container_poly> @ 1436c1210

voro_compute<voro::container_poly> * __thiscall
voro::voro_compute<voro::container_poly>::voro_compute<voro::container_poly>
          (voro_compute<voro::container_poly> *this,container_poly *param_1,int param_2,int param_3,
          int param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong64 uVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  
  this->con = param_1;
  dVar1 = *(double *)&param_1->field_0x18;
  this->boxx = dVar1;
  dVar2 = *(double *)&param_1->field_0x20;
  this->boxy = dVar2;
  dVar3 = *(double *)&param_1->field_0x28;
  this->boxz = dVar3;
  this->xsp = *(double *)&param_1->field_0x30;
  this->ysp = *(double *)&param_1->field_0x38;
  this->zsp = *(double *)&param_1->field_0x40;
  this->hx = param_2;
  this->hz = param_4;
  this->hy = param_3;
  iVar9 = param_2 * param_3;
  this->hxy = iVar9;
  this->hxyz = iVar9 * param_4;
  this->ps = *(int *)&param_1->field_0xc8;
  this->id = *(int ***)&param_1->field_0xa8;
  this->p = *(double ***)&param_1->field_0xb0;
  this->co = *(int **)&param_1->field_0xb8;
  this->bxsq = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
  this->mv = 0;
  this->qu_size = ((param_2 + param_3) * param_4 + iVar9 + 3) * 3;
  this->wl = voro_base::wl;
  this->mrad = *(double **)&param_1->field_0x48;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (longlong)(iVar9 * param_4);
  uVar6 = SUB168(ZEXT816(4) * auVar4,0);
  if (SUB168(ZEXT816(4) * auVar4,8) != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  puVar7 = operator_new__(uVar6);
  this->mask = puVar7;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (longlong)this->qu_size;
  uVar6 = SUB168(ZEXT816(4) * auVar5,0);
  if (SUB168(ZEXT816(4) * auVar5,8) != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  piVar8 = operator_new__(uVar6);
  puVar7 = this->mask;
  this->qu = piVar8;
  this->qu_l = piVar8 + this->qu_size;
  if (puVar7 < puVar7 + this->hxyz) {
    do {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    } while (puVar7 < this->mask + this->hxyz);
  }
  return this;
}

// add_list_memory @ 1436c13a0

void __thiscall
voro::voro_compute<voro::container>::add_list_memory
          (voro_compute<voro::container> *this,int **param_1,int **param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong64 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int **ppiVar7;
  
  this->qu_size = this->qu_size << 1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)this->qu_size;
  uVar3 = SUB168(ZEXT816(4) * auVar2,0);
  if (SUB168(ZEXT816(4) * auVar2,8) != 0) {
    uVar3 = 0xffffffffffffffff;
  }
  piVar4 = operator_new__(uVar3);
  piVar5 = *param_1;
  piVar6 = piVar4;
  if (*param_2 < piVar5) {
    if (piVar5 < this->qu_l) {
      do {
        iVar1 = *piVar5;
        *param_1 = piVar5 + 1;
        *piVar6 = iVar1;
        piVar6 = piVar6 + 1;
        piVar5 = *param_1;
      } while (piVar5 < this->qu_l);
    }
    piVar5 = this->qu;
    *param_1 = piVar5;
    if (piVar5 < *param_2) {
      do {
        iVar1 = *piVar5;
        *param_1 = piVar5 + 1;
        *piVar6 = iVar1;
        piVar6 = piVar6 + 1;
        piVar5 = *param_1;
      } while (piVar5 < *param_2);
    }
  }
  else if (piVar5 < *param_2) {
    do {
      iVar1 = *piVar5;
      *param_1 = piVar5 + 1;
      *piVar6 = iVar1;
      piVar6 = piVar6 + 1;
      piVar5 = *param_1;
    } while (piVar5 < *param_2);
  }
  ppiVar7 = &this->qu;
  operator_delete__(*ppiVar7);
  *ppiVar7 = piVar4;
  *param_1 = piVar4;
  this->qu_l = *ppiVar7 + this->qu_size;
  *param_2 = piVar6;
  return;
}

// add_list_memory @ 1436c14d0

void __thiscall
voro::voro_compute<voro::container_poly>::add_list_memory
          (voro_compute<voro::container_poly> *this,int **param_1,int **param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong64 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int **ppiVar7;
  
  this->qu_size = this->qu_size << 1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)this->qu_size;
  uVar3 = SUB168(ZEXT816(4) * auVar2,0);
  if (SUB168(ZEXT816(4) * auVar2,8) != 0) {
    uVar3 = 0xffffffffffffffff;
  }
  piVar4 = operator_new__(uVar3);
  piVar5 = *param_1;
  piVar6 = piVar4;
  if (*param_2 < piVar5) {
    if (piVar5 < this->qu_l) {
      do {
        iVar1 = *piVar5;
        *param_1 = piVar5 + 1;
        *piVar6 = iVar1;
        piVar6 = piVar6 + 1;
        piVar5 = *param_1;
      } while (piVar5 < this->qu_l);
    }
    piVar5 = this->qu;
    *param_1 = piVar5;
    if (piVar5 < *param_2) {
      do {
        iVar1 = *piVar5;
        *param_1 = piVar5 + 1;
        *piVar6 = iVar1;
        piVar6 = piVar6 + 1;
        piVar5 = *param_1;
      } while (piVar5 < *param_2);
    }
  }
  else if (piVar5 < *param_2) {
    do {
      iVar1 = *piVar5;
      *param_1 = piVar5 + 1;
      *piVar6 = iVar1;
      piVar6 = piVar6 + 1;
      piVar5 = *param_1;
    } while (piVar5 < *param_2);
  }
  ppiVar7 = &this->qu;
  operator_delete__(*ppiVar7);
  *ppiVar7 = piVar4;
  *param_1 = piVar4;
  this->qu_l = *ppiVar7 + this->qu_size;
  *param_2 = piVar6;
  return;
}

// add_to_mask @ 1436c1600

void __thiscall
voro::voro_compute<voro::container>::add_to_mask
          (voro_compute<voro::container> *this,int param_1,int param_2,int param_3,int **param_4)

{
  uint *puVar1;
  longlong lVar2;
  
  puVar1 = this->mask;
  lVar2 = (longlong)((param_3 * this->hy + param_2) * this->hx) + (longlong)param_1;
  if ((0 < param_3) && (puVar1[lVar2 - this->hxy] != this->mv)) {
    if (*param_4 == this->qu_l) {
      *param_4 = this->qu;
    }
    puVar1[lVar2 - this->hxy] = this->mv;
    **param_4 = param_1;
    *param_4 = *param_4 + 1;
    **param_4 = param_2;
    *param_4 = *param_4 + 1;
    **param_4 = param_3 + -1;
    *param_4 = *param_4 + 1;
  }
  if ((0 < param_2) && (puVar1[lVar2 - this->hx] != this->mv)) {
    if (*param_4 == this->qu_l) {
      *param_4 = this->qu;
    }
    puVar1[lVar2 - this->hx] = this->mv;
    **param_4 = param_1;
    *param_4 = *param_4 + 1;
    **param_4 = param_2 + -1;
    *param_4 = *param_4 + 1;
    **param_4 = param_3;
    *param_4 = *param_4 + 1;
  }
  if ((0 < param_1) && (puVar1[lVar2 + -1] != this->mv)) {
    if (*param_4 == this->qu_l) {
      *param_4 = this->qu;
    }
    puVar1[lVar2 + -1] = this->mv;
    **param_4 = param_1 + -1;
    *param_4 = *param_4 + 1;
    **param_4 = param_2;
    *param_4 = *param_4 + 1;
    **param_4 = param_3;
    *param_4 = *param_4 + 1;
  }
  if ((param_1 < this->hx + -1) && (puVar1[lVar2 + 1] != this->mv)) {
    if (*param_4 == this->qu_l) {
      *param_4 = this->qu;
    }
    puVar1[lVar2 + 1] = this->mv;
    **param_4 = param_1 + 1;
    *param_4 = *param_4 + 1;
    **param_4 = param_2;
    *param_4 = *param_4 + 1;
    **param_4 = param_3;
    *param_4 = *param_4 + 1;
  }
  if ((param_2 < this->hy + -1) && (puVar1[lVar2 + this->hx] != this->mv)) {
    if (*param_4 == this->qu_l) {
      *param_4 = this->qu;
    }
    puVar1[lVar2 + this->hx] = this->mv;
    **param_4 = param_1;
    *param_4 = *param_4 + 1;
    **param_4 = param_2 + 1;
    *param_4 = *param_4 + 1;
    **param_4 = param_3;
    *param_4 = *param_4 + 1;
  }
  if ((param_3 < this->hz + -1) && (puVar1[lVar2 + this->hxy] != this->mv)) {
    if (*param_4 == this->qu_l) {
      *param_4 = this->qu;
    }
    puVar1[lVar2 + this->hxy] = this->mv;
    **param_4 = param_1;
    *param_4 = *param_4 + 1;
    **param_4 = param_2;
    *param_4 = *param_4 + 1;
    **param_4 = param_3 + 1;
    *param_4 = *param_4 + 1;
  }
  return;
}

// add_to_mask @ 1436c1870

void __thiscall
voro::voro_compute<voro::container_poly>::add_to_mask
          (voro_compute<voro::container_poly> *this,int param_1,int param_2,int param_3,
          int **param_4)

{
  uint *puVar1;
  longlong lVar2;
  
  puVar1 = this->mask;
  lVar2 = (longlong)((param_3 * this->hy + param_2) * this->hx) + (longlong)param_1;
  if ((0 < param_3) && (puVar1[lVar2 - this->hxy] != this->mv)) {
    if (*param_4 == this->qu_l) {
      *param_4 = this->qu;
    }
    puVar1[lVar2 - this->hxy] = this->mv;
    **param_4 = param_1;
    *param_4 = *param_4 + 1;
    **param_4 = param_2;
    *param_4 = *param_4 + 1;
    **param_4 = param_3 + -1;
    *param_4 = *param_4 + 1;
  }
  if ((0 < param_2) && (puVar1[lVar2 - this->hx] != this->mv)) {
    if (*param_4 == this->qu_l) {
      *param_4 = this->qu;
    }
    puVar1[lVar2 - this->hx] = this->mv;
    **param_4 = param_1;
    *param_4 = *param_4 + 1;
    **param_4 = param_2 + -1;
    *param_4 = *param_4 + 1;
    **param_4 = param_3;
    *param_4 = *param_4 + 1;
  }
  if ((0 < param_1) && (puVar1[lVar2 + -1] != this->mv)) {
    if (*param_4 == this->qu_l) {
      *param_4 = this->qu;
    }
    puVar1[lVar2 + -1] = this->mv;
    **param_4 = param_1 + -1;
    *param_4 = *param_4 + 1;
    **param_4 = param_2;
    *param_4 = *param_4 + 1;
    **param_4 = param_3;
    *param_4 = *param_4 + 1;
  }
  if ((param_1 < this->hx + -1) && (puVar1[lVar2 + 1] != this->mv)) {
    if (*param_4 == this->qu_l) {
      *param_4 = this->qu;
    }
    puVar1[lVar2 + 1] = this->mv;
    **param_4 = param_1 + 1;
    *param_4 = *param_4 + 1;
    **param_4 = param_2;
    *param_4 = *param_4 + 1;
    **param_4 = param_3;
    *param_4 = *param_4 + 1;
  }
  if ((param_2 < this->hy + -1) && (puVar1[lVar2 + this->hx] != this->mv)) {
    if (*param_4 == this->qu_l) {
      *param_4 = this->qu;
    }
    puVar1[lVar2 + this->hx] = this->mv;
    **param_4 = param_1;
    *param_4 = *param_4 + 1;
    **param_4 = param_2 + 1;
    *param_4 = *param_4 + 1;
    **param_4 = param_3;
    *param_4 = *param_4 + 1;
  }
  if ((param_3 < this->hz + -1) && (puVar1[lVar2 + this->hxy] != this->mv)) {
    if (*param_4 == this->qu_l) {
      *param_4 = this->qu;
    }
    puVar1[lVar2 + this->hxy] = this->mv;
    **param_4 = param_1;
    *param_4 = *param_4 + 1;
    **param_4 = param_2;
    *param_4 = *param_4 + 1;
    **param_4 = param_3 + 1;
    *param_4 = *param_4 + 1;
  }
  return;
}

// compute_min_max_radius @ 1436c1ae0

bool __thiscall
voro::voro_compute<voro::container>::compute_min_max_radius
          (voro_compute<voro::container> *this,int param_1,int param_2,int param_3,double param_4,
          double param_5,double param_6,double param_7,double param_8,double param_9,
          double *param_10,double param_11,radius_info *param_12)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (param_1 < 1) {
    if (-1 < param_1) {
      if (param_2 < 1) {
        if (param_2 < 0) {
          dVar4 = (double)(param_2 + 1) * this->boxy - param_5;
          dVar1 = dVar4 * dVar4;
          *param_10 = dVar1;
          if (param_3 < 1) {
            if (param_3 < 0) {
              dVar3 = (double)(param_3 + 1) * this->boxz - param_6;
              dVar1 = dVar3 * dVar3 + dVar1;
              *param_10 = dVar1;
              if (param_11 < dVar1) {
                return true;
              }
              dVar1 = (this->boxz - (dVar3 + dVar3)) * this->boxz + dVar1;
            }
            else {
              if (param_11 < dVar1) {
                return true;
              }
              dVar1 = dVar1 + param_9;
            }
          }
          else {
            dVar3 = (double)param_3 * this->boxz - param_6;
            dVar1 = dVar3 * dVar3 + dVar1;
            *param_10 = dVar1;
            if (param_11 < dVar1) {
              return true;
            }
            dVar1 = (dVar3 + dVar3 + this->boxz) * this->boxz + dVar1;
          }
          *param_10 = dVar1;
          dVar1 = (this->boxy - (dVar4 + dVar4)) * this->boxy + dVar1;
        }
        else {
          if (param_3 < 1) {
            if (param_3 < 0) {
              dVar1 = (double)(param_3 + 1) * this->boxz - param_6;
              dVar4 = dVar1 * dVar1;
              *param_10 = dVar4;
              if (param_11 < dVar4) {
                return true;
              }
              *param_10 = (this->boxz - (dVar1 + dVar1)) * this->boxz + dVar4;
            }
            else {
              *param_10 = 0.0;
              voro_fatal_error("Min/max radius function called for central block, which should never\nhappen."
                               ,3);
            }
          }
          else {
            dVar1 = (double)param_3 * this->boxz - param_6;
            dVar4 = dVar1 * dVar1;
            *param_10 = dVar4;
            if (param_11 < dVar4) {
              return true;
            }
            *param_10 = (dVar1 + dVar1 + this->boxz) * this->boxz + dVar4;
          }
          dVar1 = param_8 + *param_10;
        }
      }
      else {
        dVar4 = (double)param_2 * this->boxy - param_5;
        dVar1 = dVar4 * dVar4;
        *param_10 = dVar1;
        if (param_3 < 1) {
          if (param_3 < 0) {
            dVar3 = (double)(param_3 + 1) * this->boxz - param_6;
            dVar1 = dVar3 * dVar3 + dVar1;
            *param_10 = dVar1;
            if (param_11 < dVar1) {
              return true;
            }
            dVar1 = (this->boxz - (dVar3 + dVar3)) * this->boxz + dVar1;
          }
          else {
            if (param_11 < dVar1) {
              return true;
            }
            dVar1 = dVar1 + param_9;
          }
        }
        else {
          dVar3 = (double)param_3 * this->boxz - param_6;
          dVar1 = dVar3 * dVar3 + dVar1;
          *param_10 = dVar1;
          if (param_11 < dVar1) {
            return true;
          }
          dVar1 = (dVar3 + dVar3 + this->boxz) * this->boxz + dVar1;
        }
        *param_10 = dVar1;
        dVar1 = (dVar4 + dVar4 + this->boxy) * this->boxy + dVar1;
      }
      *param_10 = dVar1 + param_7;
      return false;
    }
    dVar4 = (double)(param_1 + 1) * this->boxx - param_4;
    dVar1 = dVar4 * dVar4;
    *param_10 = dVar1;
    if (0 < param_2) {
      dVar3 = (double)param_2 * this->boxy - param_5;
      dVar1 = dVar3 * dVar3 + dVar1;
      *param_10 = dVar1;
      if (0 < param_3) {
        dVar2 = (double)param_3 * this->boxz - param_6;
        dVar1 = dVar2 * dVar2 + dVar1;
        *param_10 = dVar1;
        if (param_11 < dVar1) {
          return true;
        }
        *param_10 = ((dVar3 + dVar3) * this->boxy - (dVar4 + dVar4) * this->boxx) +
                    (dVar2 + dVar2) * this->boxz + dVar1 + this->bxsq;
        return false;
      }
      if (-1 < param_3) {
        if (param_11 < dVar1) {
          return true;
        }
        *param_10 = (this->boxx - (dVar4 + dVar4)) * this->boxx +
                    (dVar3 + dVar3 + this->boxy) * this->boxy + param_9 + dVar1;
        return false;
      }
      dVar2 = (double)(param_3 + 1) * this->boxz - param_6;
      dVar1 = dVar2 * dVar2 + dVar1;
      *param_10 = dVar1;
      if (param_11 < dVar1) {
        return true;
      }
      dVar4 = (dVar3 * this->boxy - dVar4 * this->boxx) - dVar2 * this->boxz;
      *param_10 = dVar4 + this->bxsq + dVar1 + dVar4;
      return false;
    }
    if (-1 < param_2) {
      if (param_3 < 1) {
        if (param_3 < 0) {
          dVar3 = (double)(param_3 + 1) * this->boxz - param_6;
          dVar1 = dVar3 * dVar3 + dVar1;
          *param_10 = dVar1;
          if (param_11 < dVar1) {
            return true;
          }
          dVar1 = (this->boxz - (dVar3 + dVar3)) * this->boxz + dVar1;
        }
        else {
          if (param_11 < dVar1) {
            return true;
          }
          dVar1 = dVar1 + param_9;
        }
      }
      else {
        dVar3 = (double)param_3 * this->boxz - param_6;
        dVar1 = dVar3 * dVar3 + dVar1;
        *param_10 = dVar1;
        if (param_11 < dVar1) {
          return true;
        }
        dVar1 = (dVar3 + dVar3 + this->boxz) * this->boxz + dVar1;
      }
      *param_10 = dVar1;
      *param_10 = (this->boxx - (dVar4 + dVar4)) * this->boxx + param_8 + dVar1;
      return false;
    }
    dVar3 = (double)(param_2 + 1) * this->boxy - param_5;
    dVar1 = dVar3 * dVar3 + dVar1;
    *param_10 = dVar1;
    if (0 < param_3) {
      dVar2 = (double)param_3 * this->boxz - param_6;
      dVar1 = dVar2 * dVar2 + dVar1;
      *param_10 = dVar1;
      if (param_11 < dVar1) {
        return true;
      }
      dVar3 = dVar3 * this->boxy;
      *param_10 = ((dVar2 + dVar2) * this->boxz - ((dVar4 + dVar4) * this->boxx + dVar3 + dVar3)) +
                  this->bxsq + dVar1;
      return false;
    }
    if (param_3 < 0) {
      dVar2 = (double)(param_3 + 1) * this->boxz - param_6;
      dVar1 = dVar2 * dVar2 + dVar1;
      *param_10 = dVar1;
      if (param_11 < dVar1) {
        return true;
      }
      dVar4 = dVar3 * this->boxy + dVar4 * this->boxx;
      *param_10 = (this->bxsq - ((dVar2 + dVar2) * this->boxz + dVar4 + dVar4)) + dVar1;
      return false;
    }
    if (param_11 < dVar1) {
      return true;
    }
    dVar4 = (this->boxy - (dVar3 + dVar3)) * this->boxy +
            (this->boxx - (dVar4 + dVar4)) * this->boxx;
  }
  else {
    dVar4 = (double)param_1 * this->boxx - param_4;
    dVar1 = dVar4 * dVar4;
    *param_10 = dVar1;
    if (param_2 < 1) {
      if (-1 < param_2) {
        if (param_3 < 1) {
          if (param_3 < 0) {
            dVar3 = (double)(param_3 + 1) * this->boxz - param_6;
            dVar1 = dVar3 * dVar3 + dVar1;
            *param_10 = dVar1;
            if (param_11 < dVar1) {
              return true;
            }
            dVar1 = (this->boxz - (dVar3 + dVar3)) * this->boxz + dVar1;
          }
          else {
            if (param_11 < dVar1) {
              return true;
            }
            dVar1 = dVar1 + param_9;
          }
        }
        else {
          dVar3 = (double)param_3 * this->boxz - param_6;
          dVar1 = dVar3 * dVar3 + dVar1;
          *param_10 = dVar1;
          if (param_11 < dVar1) {
            return true;
          }
          dVar1 = (dVar3 + dVar3 + this->boxz) * this->boxz + dVar1;
        }
        *param_10 = dVar1;
        *param_10 = (dVar4 + dVar4 + this->boxx) * this->boxx + param_8 + dVar1;
        return false;
      }
      dVar3 = (double)(param_2 + 1) * this->boxy - param_5;
      dVar1 = dVar3 * dVar3 + dVar1;
      *param_10 = dVar1;
      if (0 < param_3) {
        dVar2 = (double)param_3 * this->boxz - param_6;
        dVar1 = dVar2 * dVar2 + dVar1;
        *param_10 = dVar1;
        if (param_11 < dVar1) {
          return true;
        }
        dVar4 = dVar4 * this->boxx - dVar3 * this->boxy;
        *param_10 = (dVar2 + dVar2) * this->boxz + dVar4 + dVar1 + this->bxsq + dVar4;
        return false;
      }
      if (param_3 < 0) {
        dVar2 = (double)(param_3 + 1) * this->boxz - param_6;
        dVar1 = dVar2 * dVar2 + dVar1;
        *param_10 = dVar1;
        if (param_11 < dVar1) {
          return true;
        }
        dVar4 = (dVar4 * this->boxx - dVar3 * this->boxy) - dVar2 * this->boxz;
        *param_10 = dVar4 + this->bxsq + dVar1 + dVar4;
        return false;
      }
      if (param_11 < dVar1) {
        return true;
      }
      dVar3 = this->boxy - (dVar3 + dVar3);
    }
    else {
      dVar3 = (double)param_2 * this->boxy - param_5;
      dVar1 = dVar3 * dVar3 + dVar1;
      *param_10 = dVar1;
      if (0 < param_3) {
        dVar2 = (double)param_3 * this->boxz - param_6;
        dVar1 = dVar2 * dVar2 + dVar1;
        *param_10 = dVar1;
        if (param_11 < dVar1) {
          return true;
        }
        *param_10 = (dVar3 + dVar3) * this->boxy + (dVar4 + dVar4) * this->boxx +
                    (dVar2 + dVar2) * this->boxz + dVar1 + this->bxsq;
        return false;
      }
      if (param_3 < 0) {
        dVar2 = (double)(param_3 + 1) * this->boxz - param_6;
        dVar1 = dVar2 * dVar2 + dVar1;
        *param_10 = dVar1;
        if (param_11 < dVar1) {
          return true;
        }
        dVar4 = (dVar3 * this->boxy + dVar4 * this->boxx) - dVar2 * this->boxz;
        *param_10 = dVar4 + this->bxsq + dVar4 + dVar1;
        return false;
      }
      if (param_11 < dVar1) {
        return true;
      }
      dVar3 = dVar3 + dVar3 + this->boxy;
    }
    dVar4 = dVar3 * this->boxy + (dVar4 + dVar4 + this->boxx) * this->boxx;
  }
  *param_10 = dVar4 + dVar1 + param_9;
  return false;
}

// compute_min_max_radius @ 1436c2510

bool __thiscall
voro::voro_compute<voro::container_poly>::compute_min_max_radius
          (voro_compute<voro::container_poly> *this,int param_1,int param_2,int param_3,
          double param_4,double param_5,double param_6,double param_7,double param_8,double param_9,
          double *param_10,double param_11,radius_info *param_12)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  
  if (0 < param_1) {
    dVar29 = (double)param_1 * this->boxx - param_4;
    dVar30 = dVar29 * dVar29;
    *param_10 = dVar30;
    if (param_2 < 1) {
      if (-1 < param_2) {
        if (param_3 < 1) {
          if (param_3 < 0) {
            dVar28 = (double)(param_3 + 1) * this->boxz - param_6;
            param_9 = dVar28 * dVar28 + dVar30;
            *param_10 = param_9;
            auVar9._0_8_ = param_9 * param_11;
            auVar9._8_8_ = 0;
            auVar2 = sqrtpd(auVar9,auVar9);
            if (auVar2._0_8_ < param_9 + param_12->r_mul) {
              return true;
            }
            dVar30 = (this->boxz - (dVar28 + dVar28)) * this->boxz;
          }
          else {
            auVar2._0_8_ = dVar30 * param_11;
            auVar2._8_8_ = 0;
            auVar2 = sqrtpd(auVar2,auVar2);
            if (auVar2._0_8_ < dVar30 + param_12->r_mul) {
              return true;
            }
          }
          dVar30 = dVar30 + param_9;
        }
        else {
          dVar28 = (double)param_3 * this->boxz - param_6;
          dVar30 = dVar28 * dVar28 + dVar30;
          *param_10 = dVar30;
          auVar8._0_8_ = dVar30 * param_11;
          auVar8._8_8_ = 0;
          auVar2 = sqrtpd(auVar8,auVar8);
          if (auVar2._0_8_ < dVar30 + param_12->r_mul) {
            return true;
          }
          dVar30 = (dVar28 + dVar28 + this->boxz) * this->boxz + dVar30;
        }
        *param_10 = dVar30;
        dVar30 = (dVar29 + dVar29 + this->boxx) * this->boxx + param_8 + dVar30;
        goto LAB_1436c30ed;
      }
      dVar28 = (double)(param_2 + 1) * this->boxy - param_5;
      dVar30 = dVar28 * dVar28 + dVar30;
      *param_10 = dVar30;
      if (0 < param_3) {
        dVar27 = (double)param_3 * this->boxz - param_6;
        dVar30 = dVar27 * dVar27 + dVar30;
        *param_10 = dVar30;
        auVar5._0_8_ = dVar30 * param_11;
        auVar5._8_8_ = 0;
        auVar2 = sqrtpd(auVar5,auVar5);
        if (auVar2._0_8_ < dVar30 + param_12->r_mul) {
          return true;
        }
        dVar29 = dVar29 * this->boxx - dVar28 * this->boxy;
        dVar30 = (dVar27 + dVar27) * this->boxz + dVar29 + dVar30 + this->bxsq + dVar29;
        goto LAB_1436c30ed;
      }
      if (param_3 < 0) {
        dVar27 = (double)(param_3 + 1) * this->boxz - param_6;
        dVar30 = dVar27 * dVar27 + dVar30;
        *param_10 = dVar30;
        auVar6._0_8_ = dVar30 * param_11;
        auVar6._8_8_ = 0;
        auVar2 = sqrtpd(auVar6,auVar6);
        if (auVar2._0_8_ < dVar30 + param_12->r_mul) {
          return true;
        }
        dVar29 = (dVar29 * this->boxx - dVar28 * this->boxy) - dVar27 * this->boxz;
        dVar30 = dVar29 + this->bxsq + dVar30 + dVar29;
        goto LAB_1436c30ed;
      }
      auVar7._0_8_ = dVar30 * param_11;
      auVar7._8_8_ = 0;
      auVar2 = sqrtpd(auVar7,auVar7);
      if (auVar2._0_8_ < dVar30 + param_12->r_mul) {
        return true;
      }
      dVar28 = this->boxy - (dVar28 + dVar28);
    }
    else {
      dVar28 = (double)param_2 * this->boxy - param_5;
      dVar30 = dVar28 * dVar28 + dVar30;
      *param_10 = dVar30;
      if (0 < param_3) {
        dVar27 = (double)param_3 * this->boxz - param_6;
        dVar30 = dVar27 * dVar27 + dVar30;
        *param_10 = dVar30;
        auVar1._0_8_ = dVar30 * param_11;
        auVar1._8_8_ = 0;
        auVar2 = sqrtpd(auVar1,auVar1);
        if (auVar2._0_8_ < dVar30 + param_12->r_mul) {
          return true;
        }
        dVar30 = (dVar28 + dVar28) * this->boxy + (dVar29 + dVar29) * this->boxx +
                 (dVar27 + dVar27) * this->boxz + dVar30 + this->bxsq;
        goto LAB_1436c30ed;
      }
      if (param_3 < 0) {
        dVar27 = (double)(param_3 + 1) * this->boxz - param_6;
        dVar30 = dVar27 * dVar27 + dVar30;
        *param_10 = dVar30;
        auVar3._0_8_ = dVar30 * param_11;
        auVar3._8_8_ = 0;
        auVar2 = sqrtpd(auVar3,auVar3);
        if (auVar2._0_8_ < dVar30 + param_12->r_mul) {
          return true;
        }
        dVar29 = (dVar28 * this->boxy + dVar29 * this->boxx) - dVar27 * this->boxz;
        dVar30 = dVar29 + this->bxsq + dVar30 + dVar29;
        goto LAB_1436c30ed;
      }
      auVar4._0_8_ = dVar30 * param_11;
      auVar4._8_8_ = 0;
      auVar2 = sqrtpd(auVar4,auVar4);
      if (auVar2._0_8_ < dVar30 + param_12->r_mul) {
        return true;
      }
      dVar28 = dVar28 + dVar28 + this->boxy;
    }
    dVar30 = dVar28 * this->boxy + (dVar29 + dVar29 + this->boxx) * this->boxx + param_9 + dVar30;
    goto LAB_1436c30ed;
  }
  if (param_1 < 0) {
    dVar29 = (double)(param_1 + 1) * this->boxx - param_4;
    dVar30 = dVar29 * dVar29;
    *param_10 = dVar30;
    if (param_2 < 1) {
      if (param_2 < 0) {
        dVar28 = (double)(param_2 + 1) * this->boxy - param_5;
        dVar30 = dVar28 * dVar28 + dVar30;
        *param_10 = dVar30;
        if (param_3 < 1) {
          if (param_3 < 0) {
            dVar27 = (double)(param_3 + 1) * this->boxz - param_6;
            dVar30 = dVar27 * dVar27 + dVar30;
            *param_10 = dVar30;
            auVar14._0_8_ = dVar30 * param_11;
            auVar14._8_8_ = 0;
            auVar2 = sqrtpd(auVar14,auVar14);
            if (auVar2._0_8_ < dVar30 + param_12->r_mul) {
              return true;
            }
            dVar29 = dVar28 * this->boxy + dVar29 * this->boxx;
            dVar30 = (this->bxsq - ((dVar27 + dVar27) * this->boxz + dVar29 + dVar29)) + dVar30;
          }
          else {
            auVar15._0_8_ = dVar30 * param_11;
            auVar15._8_8_ = 0;
            auVar2 = sqrtpd(auVar15,auVar15);
            if (auVar2._0_8_ < dVar30 + param_12->r_mul) {
              return true;
            }
            dVar30 = (this->boxy - (dVar28 + dVar28)) * this->boxy +
                     (this->boxx - (dVar29 + dVar29)) * this->boxx + param_9 + dVar30;
          }
        }
        else {
          dVar27 = (double)param_3 * this->boxz - param_6;
          dVar30 = dVar27 * dVar27 + dVar30;
          *param_10 = dVar30;
          auVar13._0_8_ = dVar30 * param_11;
          auVar13._8_8_ = 0;
          auVar2 = sqrtpd(auVar13,auVar13);
          if (auVar2._0_8_ < dVar30 + param_12->r_mul) {
            return true;
          }
          dVar28 = dVar28 * this->boxy;
          dVar30 = ((dVar27 + dVar27) * this->boxz -
                   ((dVar29 + dVar29) * this->boxx + dVar28 + dVar28)) + this->bxsq + dVar30;
        }
      }
      else {
        if (param_3 < 1) {
          if (param_3 < 0) {
            dVar28 = (double)(param_3 + 1) * this->boxz - param_6;
            param_9 = dVar28 * dVar28 + dVar30;
            *param_10 = param_9;
            auVar17._0_8_ = param_9 * param_11;
            auVar17._8_8_ = 0;
            auVar2 = sqrtpd(auVar17,auVar17);
            if (auVar2._0_8_ < param_9 + param_12->r_mul) {
              return true;
            }
            dVar30 = (this->boxz - (dVar28 + dVar28)) * this->boxz;
          }
          else {
            auVar18._0_8_ = dVar30 * param_11;
            auVar18._8_8_ = 0;
            auVar2 = sqrtpd(auVar18,auVar18);
            if (auVar2._0_8_ < dVar30 + param_12->r_mul) {
              return true;
            }
          }
          dVar30 = dVar30 + param_9;
        }
        else {
          dVar28 = (double)param_3 * this->boxz - param_6;
          dVar30 = dVar28 * dVar28 + dVar30;
          *param_10 = dVar30;
          auVar16._0_8_ = dVar30 * param_11;
          auVar16._8_8_ = 0;
          auVar2 = sqrtpd(auVar16,auVar16);
          if (auVar2._0_8_ < dVar30 + param_12->r_mul) {
            return true;
          }
          dVar30 = (dVar28 + dVar28 + this->boxz) * this->boxz + dVar30;
        }
        *param_10 = dVar30;
        dVar30 = (this->boxx - (dVar29 + dVar29)) * this->boxx + param_8 + dVar30;
      }
    }
    else {
      dVar28 = (double)param_2 * this->boxy - param_5;
      dVar30 = dVar28 * dVar28 + dVar30;
      *param_10 = dVar30;
      if (param_3 < 1) {
        if (param_3 < 0) {
          dVar27 = (double)(param_3 + 1) * this->boxz - param_6;
          dVar30 = dVar27 * dVar27 + dVar30;
          *param_10 = dVar30;
          auVar11._0_8_ = dVar30 * param_11;
          auVar11._8_8_ = 0;
          auVar2 = sqrtpd(auVar11,auVar11);
          if (auVar2._0_8_ < dVar30 + param_12->r_mul) {
            return true;
          }
          dVar29 = (dVar28 * this->boxy - dVar29 * this->boxx) - dVar27 * this->boxz;
          dVar30 = dVar29 + this->bxsq + dVar29 + dVar30;
        }
        else {
          auVar12._0_8_ = dVar30 * param_11;
          auVar12._8_8_ = 0;
          auVar2 = sqrtpd(auVar12,auVar12);
          if (auVar2._0_8_ < dVar30 + param_12->r_mul) {
            return true;
          }
          dVar30 = (this->boxx - (dVar29 + dVar29)) * this->boxx +
                   (dVar28 + dVar28 + this->boxy) * this->boxy + param_9 + dVar30;
        }
      }
      else {
        dVar27 = (double)param_3 * this->boxz - param_6;
        dVar30 = dVar27 * dVar27 + dVar30;
        *param_10 = dVar30;
        auVar10._0_8_ = dVar30 * param_11;
        auVar10._8_8_ = 0;
        auVar2 = sqrtpd(auVar10,auVar10);
        if (auVar2._0_8_ < dVar30 + param_12->r_mul) {
          return true;
        }
        dVar30 = ((dVar28 + dVar28) * this->boxy - (dVar29 + dVar29) * this->boxx) +
                 (dVar27 + dVar27) * this->boxz + dVar30 + this->bxsq;
      }
    }
    goto LAB_1436c30ed;
  }
  if (param_2 < 1) {
    if (param_2 < 0) {
      dVar29 = (double)(param_2 + 1) * this->boxy - param_5;
      dVar30 = dVar29 * dVar29;
      *param_10 = dVar30;
      if (param_3 < 1) {
        if (param_3 < 0) {
          dVar28 = (double)(param_3 + 1) * this->boxz - param_6;
          param_9 = dVar28 * dVar28 + dVar30;
          *param_10 = param_9;
          auVar23._0_8_ = param_9 * param_11;
          auVar23._8_8_ = 0;
          auVar2 = sqrtpd(auVar23,auVar23);
          if (auVar2._0_8_ < param_9 + param_12->r_mul) {
            return true;
          }
          dVar30 = (this->boxz - (dVar28 + dVar28)) * this->boxz;
        }
        else {
          auVar24._0_8_ = dVar30 * param_11;
          auVar24._8_8_ = 0;
          auVar2 = sqrtpd(auVar24,auVar24);
          if (auVar2._0_8_ < dVar30 + param_12->r_mul) {
            return true;
          }
        }
        dVar30 = dVar30 + param_9;
      }
      else {
        dVar28 = (double)param_3 * this->boxz - param_6;
        dVar30 = dVar28 * dVar28 + dVar30;
        *param_10 = dVar30;
        auVar22._0_8_ = dVar30 * param_11;
        auVar22._8_8_ = 0;
        auVar2 = sqrtpd(auVar22,auVar22);
        if (auVar2._0_8_ < dVar30 + param_12->r_mul) {
          return true;
        }
        dVar30 = (dVar28 + dVar28 + this->boxz) * this->boxz + dVar30;
      }
      *param_10 = dVar30;
      dVar30 = (this->boxy - (dVar29 + dVar29)) * this->boxy + dVar30;
    }
    else {
      if (param_3 < 1) {
        if (param_3 < 0) {
          dVar30 = (double)(param_3 + 1) * this->boxz - param_6;
          dVar29 = dVar30 * dVar30;
          *param_10 = dVar29;
          auVar26._0_8_ = dVar29 * param_11;
          auVar26._8_8_ = 0;
          auVar2 = sqrtpd(auVar26,auVar26);
          if (auVar2._0_8_ < dVar29 + param_12->r_mul) {
            return true;
          }
          *param_10 = (this->boxz - (dVar30 + dVar30)) * this->boxz + dVar29;
        }
        else {
          *param_10 = 0.0;
          voro_fatal_error("Min/max radius function called for central block, which should never\nhappen."
                           ,3);
        }
      }
      else {
        dVar30 = (double)param_3 * this->boxz - param_6;
        dVar29 = dVar30 * dVar30;
        *param_10 = dVar29;
        auVar25._0_8_ = dVar29 * param_11;
        auVar25._8_8_ = 0;
        auVar2 = sqrtpd(auVar25,auVar25);
        if (auVar2._0_8_ < dVar29 + param_12->r_mul) {
          return true;
        }
        *param_10 = (dVar30 + dVar30 + this->boxz) * this->boxz + dVar29;
      }
      dVar30 = param_8 + *param_10;
    }
  }
  else {
    dVar29 = (double)param_2 * this->boxy - param_5;
    dVar30 = dVar29 * dVar29;
    *param_10 = dVar30;
    if (param_3 < 1) {
      if (-1 < param_3) {
        auVar21._0_8_ = dVar30 * param_11;
        auVar21._8_8_ = 0;
        auVar2 = sqrtpd(auVar21,auVar21);
        if (auVar2._0_8_ < dVar30 + param_12->r_mul) {
          return true;
        }
        goto LAB_1436c2e82;
      }
      dVar28 = (double)(param_3 + 1) * this->boxz - param_6;
      dVar30 = dVar28 * dVar28 + dVar30;
      *param_10 = dVar30;
      auVar20._0_8_ = dVar30 * param_11;
      auVar20._8_8_ = 0;
      auVar2 = sqrtpd(auVar20,auVar20);
      if (auVar2._0_8_ < dVar30 + param_12->r_mul) {
        return true;
      }
      dVar30 = (this->boxz - (dVar28 + dVar28)) * this->boxz + dVar30;
    }
    else {
      dVar28 = (double)param_3 * this->boxz - param_6;
      param_9 = dVar28 * dVar28 + dVar30;
      *param_10 = param_9;
      auVar19._0_8_ = param_9 * param_11;
      auVar19._8_8_ = 0;
      auVar2 = sqrtpd(auVar19,auVar19);
      if (auVar2._0_8_ < param_9 + param_12->r_mul) {
        return true;
      }
      dVar30 = (dVar28 + dVar28 + this->boxz) * this->boxz;
LAB_1436c2e82:
      dVar30 = dVar30 + param_9;
    }
    *param_10 = dVar30;
    dVar30 = (dVar29 + dVar29 + this->boxy) * this->boxy + dVar30;
  }
  dVar30 = dVar30 + param_7;
LAB_1436c30ed:
  *param_10 = dVar30;
  return false;
}

// compute_min_radius @ 1436c3110

bool __thiscall
voro::voro_compute<voro::container>::compute_min_radius
          (voro_compute<voro::container> *this,int param_1,int param_2,int param_3,double param_4,
          double param_5,double param_6,double param_7)

{
  double dVar1;
  double dVar2;
  
  if (param_1 < 1) {
    if (param_1 < 0) {
      param_1 = param_1 + 1;
      goto LAB_1436c3123;
    }
    dVar2 = 0.0;
  }
  else {
LAB_1436c3123:
    dVar2 = (double)param_1 * this->boxx - param_4;
    dVar2 = dVar2 * dVar2;
  }
  if (param_2 < 1) {
    if (param_2 < 0) {
      param_2 = param_2 + 1;
      goto LAB_1436c3151;
    }
  }
  else {
LAB_1436c3151:
    dVar1 = (double)param_2 * this->boxy - param_5;
    dVar2 = dVar2 + dVar1 * dVar1;
  }
  if (param_3 < 1) {
    if (-1 < param_3) goto LAB_1436c3195;
    param_3 = param_3 + 1;
  }
  dVar1 = (double)param_3 * this->boxz - param_6;
  dVar2 = dVar2 + dVar1 * dVar1;
LAB_1436c3195:
  return param_7 < dVar2;
}

// compute_min_radius @ 1436c31b0

bool __thiscall
voro::voro_compute<voro::container_poly>::compute_min_radius
          (voro_compute<voro::container_poly> *this,int param_1,int param_2,int param_3,
          double param_4,double param_5,double param_6,double param_7)

{
  double dVar1;
  double dVar2;
  
  if (param_1 < 1) {
    if (param_1 < 0) {
      param_1 = param_1 + 1;
      goto LAB_1436c31c3;
    }
    dVar2 = 0.0;
  }
  else {
LAB_1436c31c3:
    dVar2 = (double)param_1 * this->boxx - param_4;
    dVar2 = dVar2 * dVar2;
  }
  if (param_2 < 1) {
    if (param_2 < 0) {
      param_2 = param_2 + 1;
      goto LAB_1436c31f1;
    }
  }
  else {
LAB_1436c31f1:
    dVar1 = (double)param_2 * this->boxy - param_5;
    dVar2 = dVar2 + dVar1 * dVar1;
  }
  if (param_3 < 1) {
    if (-1 < param_3) goto LAB_1436c3235;
    param_3 = param_3 + 1;
  }
  dVar1 = (double)param_3 * this->boxz - param_6;
  dVar2 = dVar2 + dVar1 * dVar1;
LAB_1436c3235:
  dVar1 = *(double *)&this->con->field_0xd8;
  return dVar1 * dVar1 + param_7 < dVar2;
}

// find_voronoi_cell @ 1436c3260

void __thiscall
voro::voro_compute<voro::container>::find_voronoi_cell
          (voro_compute<voro::container> *this,double param_1,double param_2,double param_3,
          int param_4,int param_5,int param_6,int param_7,particle_record *param_8,double *param_9)

{
  double dVar1;
  int iVar2;
  container *pcVar3;
  double *pdVar4;
  uint *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  longlong lVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  int *piVar27;
  int iVar28;
  uint uVar29;
  ulonglong uVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  ulonglong uVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  ulonglong uVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  uint local_res8;
  int *local_100;
  uint *local_f8;
  int *local_f0;
  ulonglong local_e8;
  
  dVar6 = 0.0;
  dVar7 = 0.0;
  dVar8 = 0.0;
  param_8->ijk = -1;
  *param_9 = 1e+30;
  pcVar3 = this->con;
  iVar12 = param_4;
  if (pcVar3->field_0xa0 != '\0') {
    iVar12 = *(int *)pcVar3;
  }
  iVar13 = param_5;
  if (pcVar3->field_0xa1 != '\0') {
    iVar13 = *(int *)&pcVar3->field_0x4;
  }
  iVar15 = param_6;
  if (pcVar3->field_0xa2 != '\0') {
    iVar15 = *(int *)&pcVar3->field_0x8;
  }
  uVar30 = 0;
  iVar16 = (param_7 - (*(int *)&pcVar3->field_0x4 * iVar15 + iVar13) * *(int *)pcVar3) - iVar12;
  scan_all(this,param_7,param_1,param_2,param_3,0,0,0,param_8,param_9);
  pcVar3 = this->con;
  dVar9 = (param_1 - *(double *)&pcVar3->field_0x70) -
          (double)param_4 * *(double *)&pcVar3->field_0x18;
  dVar10 = (param_2 - *(double *)&pcVar3->field_0x80) -
           (double)param_5 * *(double *)&pcVar3->field_0x20;
  iVar31 = (int)(dVar9 * this->xsp * __real_4020000000000000);
  dVar11 = (param_3 - *(double *)&pcVar3->field_0x90) -
           (double)param_6 * *(double *)&pcVar3->field_0x28;
  iVar18 = (int)(dVar10 * this->ysp * __real_4020000000000000);
  iVar28 = (int)(dVar11 * this->zsp * __real_4020000000000000);
  if (iVar31 < 4) {
    local_res8 = 0;
    uVar26 = uVar30;
    uVar36 = uVar30;
    dVar43 = dVar9;
  }
  else {
    iVar17 = 7 - iVar31;
    iVar31 = 0;
    if (-1 < iVar17) {
      iVar31 = iVar17;
    }
    local_res8 = 0x60007f;
    uVar26 = 0x200001;
    uVar36 = 0x60007f;
    dVar43 = this->boxx - dVar9;
  }
  param_7 = (int)uVar26;
  iVar17 = iVar18;
  dVar42 = dVar10;
  if (3 < iVar18) {
    local_res8 = (uint)uVar36 | 0x3003f80;
    uVar36 = (ulonglong)local_res8;
    param_7 = param_7 | 0x1000080;
    uVar26 = (ulonglong)(uint)param_7;
    dVar42 = this->boxy - dVar10;
    iVar17 = 0;
    if (-1 < 7 - iVar18) {
      iVar17 = 7 - iVar18;
    }
  }
  iVar18 = iVar28;
  dVar41 = dVar11;
  if (3 < iVar28) {
    local_res8 = (uint)uVar36 | 0x181fc000;
    uVar36 = (ulonglong)local_res8;
    param_7 = (uint)uVar26 | 0x8004000;
    uVar26 = (ulonglong)(uint)param_7;
    dVar41 = this->boxz - dVar11;
    iVar18 = 0;
    if (-1 < 7 - iVar28) {
      iVar18 = 7 - iVar28;
    }
  }
  dVar1 = *param_9;
  if (((dVar43 * dVar43 <= dVar1) || (dVar42 * dVar42 <= dVar1)) || (dVar41 * dVar41 <= dVar1)) {
    pdVar4 = this->mrad;
    lVar21 = (longlong)((iVar31 + (iVar17 + iVar18 * 4) * 4) * 0x40);
    uVar23 = this->wl[lVar21];
    puVar5 = this->wl + lVar21;
    puVar22 = puVar5;
    uVar40 = uVar30;
    do {
      if (*param_9 < pdVar4[lVar21 + uVar40]) {
        return;
      }
      puVar22 = puVar22 + 1;
      uVar29 = (int)uVar30 + 1;
      uVar40 = uVar40 + 1;
      uVar32 = ((uint)uVar36 ^ *puVar22) + (int)uVar26;
      uVar24 = uVar32 >> 7 & 0x7f;
      uVar33 = uVar32 >> 0xe & 0x7f;
      iVar18 = uVar24 - 0x40;
      iVar17 = (uVar32 & 0x7f) - 0x40;
      iVar28 = uVar33 - 0x40;
      iVar31 = iVar12 + iVar17;
      if ((((-1 < iVar31) && (iVar31 < this->hx)) &&
          ((iVar37 = iVar13 + iVar18, -1 < iVar37 &&
           ((iVar37 < this->hy && (iVar20 = iVar15 + iVar28, -1 < iVar20)))))) &&
         (iVar20 < this->hz)) {
        iVar39 = iVar17;
        if (iVar17 < 1) {
          if (iVar17 < 0) {
            iVar39 = (uVar32 & 0x7f) - 0x3f;
            goto LAB_1436c360f;
          }
          dVar43 = 0.0;
        }
        else {
LAB_1436c360f:
          dVar43 = (double)iVar39 * this->boxx - dVar9;
          dVar43 = dVar43 * dVar43;
        }
        iVar39 = iVar18;
        if (iVar18 < 1) {
          if (iVar18 < 0) {
            iVar39 = uVar24 - 0x3f;
            goto LAB_1436c3639;
          }
        }
        else {
LAB_1436c3639:
          dVar42 = (double)iVar39 * this->boxy - dVar10;
          dVar43 = dVar43 + dVar42 * dVar42;
        }
        iVar39 = iVar28;
        if (iVar28 < 1) {
          if (iVar28 < 0) {
            iVar39 = uVar33 - 0x3f;
            goto LAB_1436c3665;
          }
        }
        else {
LAB_1436c3665:
          dVar42 = (double)iVar39 * this->boxz - dVar11;
          dVar43 = dVar43 + dVar42 * dVar42;
        }
        if (dVar43 <= *param_9) {
          pcVar3 = this->con;
          if (pcVar3->field_0xa0 != '\0') {
            iVar39 = *(int *)pcVar3;
            if (param_4 + iVar31 < iVar39) {
              iVar31 = iVar31 + iVar39;
              dVar8 = *(double *)&pcVar3->field_0x70 - *(double *)&pcVar3->field_0x78;
            }
            else if (param_4 + iVar31 < iVar39 * 2) {
              dVar8 = 0.0;
            }
            else {
              iVar31 = iVar31 - iVar39;
              dVar8 = *(double *)&pcVar3->field_0x78 - *(double *)&pcVar3->field_0x70;
            }
          }
          if (pcVar3->field_0xa1 != '\0') {
            iVar39 = *(int *)&pcVar3->field_0x4;
            if (param_5 + iVar37 < iVar39) {
              iVar37 = iVar37 + iVar39;
              dVar7 = *(double *)&pcVar3->field_0x80 - *(double *)&pcVar3->field_0x88;
            }
            else if (param_5 + iVar37 < iVar39 * 2) {
              dVar7 = 0.0;
            }
            else {
              iVar37 = iVar37 - iVar39;
              dVar7 = *(double *)&pcVar3->field_0x88 - *(double *)&pcVar3->field_0x80;
            }
          }
          if (pcVar3->field_0xa2 != '\0') {
            iVar39 = *(int *)&pcVar3->field_0x8;
            if (param_6 + iVar20 < iVar39) {
              iVar20 = iVar20 + iVar39;
              dVar6 = *(double *)&pcVar3->field_0x90 - *(double *)&pcVar3->field_0x98;
            }
            else if (param_6 + iVar20 < iVar39 * 2) {
              dVar6 = 0.0;
            }
            else {
              iVar20 = iVar20 - iVar39;
              dVar6 = *(double *)&pcVar3->field_0x98 - *(double *)&pcVar3->field_0x90;
            }
          }
          scan_all(this,(iVar20 * *(int *)&pcVar3->field_0x4 + iVar37) * *(int *)pcVar3 + iVar31 +
                        iVar16,param_1 - dVar8,param_2 - dVar7,param_3 - dVar6,iVar17,iVar18,iVar28,
                   param_8,param_9);
          uVar36 = (ulonglong)local_res8;
        }
      }
      uVar30 = (ulonglong)uVar29;
      uVar26 = (ulonglong)(uint)param_7;
    } while ((longlong)uVar40 < (longlong)(int)uVar23);
    puVar22 = &this->mv;
    *puVar22 = *puVar22 + 1;
    if (*puVar22 == 0) {
      puVar22 = this->mask;
      if (puVar22 < puVar22 + this->hxyz) {
        do {
          *puVar22 = 0;
          puVar22 = puVar22 + 1;
        } while (puVar22 < this->mask + this->hxyz);
      }
      this->mv = 1;
    }
    local_100 = this->qu;
    piVar27 = local_100;
    if ((longlong)uVar40 < 0x3f) {
      local_f8 = puVar5 + uVar40;
      local_e8 = uVar40;
      local_f0 = local_100;
      do {
        if (*param_9 <= pdVar4[lVar21 + local_e8] && pdVar4[lVar21 + local_e8] != *param_9) {
          return;
        }
        local_e8 = local_e8 + 1;
        puVar5 = local_f8 + 1;
        local_f8 = local_f8 + 1;
        uVar23 = ((uint)uVar36 ^ *puVar5) + param_7;
        uVar29 = (int)uVar30 + 1;
        iVar17 = (uVar23 >> 7 & 0x7f) - 0x40;
        iVar18 = (uVar23 >> 0xe & 0x7f) - 0x40;
        iVar31 = (uVar23 & 0x7f) - 0x40;
        iVar28 = iVar12 + iVar31;
        if (((((-1 < iVar28) && (iVar37 = this->hx, iVar28 < iVar37)) &&
             (iVar20 = iVar13 + iVar17, -1 < iVar20)) &&
            ((iVar39 = this->hy, iVar20 < iVar39 && (iVar25 = iVar15 + iVar18, -1 < iVar25)))) &&
           (iVar25 < this->hz)) {
          puVar5 = this->mask;
          puVar5[(longlong)((iVar25 * iVar39 + iVar20) * iVar37) + (longlong)iVar28] = this->mv;
          bVar14 = compute_min_radius(this,iVar31,iVar17,iVar18,dVar9,dVar10,dVar11,*param_9);
          if (!bVar14) {
            pcVar3 = this->con;
            iVar38 = iVar28;
            if (pcVar3->field_0xa0 != '\0') {
              iVar35 = *(int *)pcVar3;
              if (param_4 + iVar28 < iVar35) {
                dVar8 = *(double *)&pcVar3->field_0x70 - *(double *)&pcVar3->field_0x78;
                iVar38 = iVar28 + iVar35;
              }
              else if (param_4 + iVar28 < iVar35 * 2) {
                dVar8 = 0.0;
              }
              else {
                dVar8 = *(double *)&pcVar3->field_0x78 - *(double *)&pcVar3->field_0x70;
                iVar38 = iVar28 - iVar35;
              }
            }
            iVar35 = iVar20;
            if (pcVar3->field_0xa1 != '\0') {
              iVar34 = *(int *)&pcVar3->field_0x4;
              if (param_5 + iVar20 < iVar34) {
                dVar7 = *(double *)&pcVar3->field_0x80 - *(double *)&pcVar3->field_0x88;
                iVar35 = iVar20 + iVar34;
              }
              else if (param_5 + iVar20 < iVar34 * 2) {
                dVar7 = 0.0;
              }
              else {
                dVar7 = *(double *)&pcVar3->field_0x88 - *(double *)&pcVar3->field_0x80;
                iVar35 = iVar20 - iVar34;
              }
            }
            iVar34 = iVar25;
            if (pcVar3->field_0xa2 != '\0') {
              iVar2 = *(int *)&pcVar3->field_0x8;
              if (param_6 + iVar25 < iVar2) {
                dVar6 = *(double *)&pcVar3->field_0x90 - *(double *)&pcVar3->field_0x98;
                iVar34 = iVar2 + iVar25;
              }
              else if (param_6 + iVar25 < iVar2 * 2) {
                dVar6 = 0.0;
              }
              else {
                dVar6 = *(double *)&pcVar3->field_0x98 - *(double *)&pcVar3->field_0x90;
                iVar34 = iVar25 - iVar2;
              }
            }
            scan_all(this,(iVar35 + iVar34 * *(int *)&pcVar3->field_0x4) * *(int *)pcVar3 + iVar38 +
                          iVar16,param_1 - dVar8,param_2 - dVar7,param_3 - dVar6,iVar31,iVar17,
                     iVar18,param_8,param_9);
            if (this->qu_l + -0x12 < local_100) {
              add_list_memory(this,&local_f0,&local_100);
            }
            scan_bits_mask_add(this,uVar23,
                               puVar5 + (longlong)((iVar25 * iVar39 + iVar20) * iVar37) +
                                        (longlong)iVar28,iVar28,iVar20,iVar25,&local_100);
          }
        }
        uVar30 = (ulonglong)uVar29;
        uVar36 = (ulonglong)local_res8;
        piVar27 = local_f0;
      } while ((longlong)local_e8 < 0x3f);
    }
    if ((pdVar4[lVar21 + (int)uVar29] < *param_9 || pdVar4[lVar21 + (int)uVar29] == *param_9) &&
       (piVar19 = local_100, piVar27 != local_100)) {
      do {
        if (piVar27 == this->qu_l) {
          piVar27 = this->qu;
        }
        iVar31 = *piVar27;
        iVar18 = piVar27[1];
        iVar28 = piVar27[2];
        piVar27 = piVar27 + 3;
        iVar39 = iVar31 - iVar12;
        iVar20 = iVar18 - iVar13;
        iVar37 = iVar28 - iVar15;
        iVar17 = iVar39;
        if (iVar39 < 1) {
          if (iVar39 < 0) {
            iVar17 = iVar39 + 1;
            goto LAB_1436c3bf6;
          }
          dVar43 = 0.0;
        }
        else {
LAB_1436c3bf6:
          dVar43 = (double)iVar17 * this->boxx - dVar9;
          dVar43 = dVar43 * dVar43;
        }
        iVar17 = iVar20;
        if (iVar20 < 1) {
          if (iVar20 < 0) {
            iVar17 = iVar20 + 1;
            goto LAB_1436c3c20;
          }
        }
        else {
LAB_1436c3c20:
          dVar42 = (double)iVar17 * this->boxy - dVar10;
          dVar43 = dVar43 + dVar42 * dVar42;
        }
        iVar17 = iVar37;
        if (iVar37 < 1) {
          if (iVar37 < 0) {
            iVar17 = iVar37 + 1;
            goto LAB_1436c3c49;
          }
        }
        else {
LAB_1436c3c49:
          dVar42 = (double)iVar17 * this->boxz - dVar11;
          dVar43 = dVar43 + dVar42 * dVar42;
        }
        if (dVar43 < *param_9 || dVar43 == *param_9) {
          pcVar3 = this->con;
          iVar17 = iVar31;
          if (pcVar3->field_0xa0 != '\0') {
            iVar25 = *(int *)pcVar3;
            if (param_4 + iVar31 < iVar25) {
              dVar8 = *(double *)&pcVar3->field_0x70 - *(double *)&pcVar3->field_0x78;
              iVar17 = iVar25 + iVar31;
            }
            else if (param_4 + iVar31 < iVar25 * 2) {
              dVar8 = 0.0;
            }
            else {
              dVar8 = *(double *)&pcVar3->field_0x78 - *(double *)&pcVar3->field_0x70;
              iVar17 = iVar31 - iVar25;
            }
          }
          iVar25 = iVar18;
          if (pcVar3->field_0xa1 != '\0') {
            iVar38 = *(int *)&pcVar3->field_0x4;
            if (param_5 + iVar18 < iVar38) {
              dVar7 = *(double *)&pcVar3->field_0x80 - *(double *)&pcVar3->field_0x88;
              iVar25 = iVar38 + iVar18;
            }
            else if (param_5 + iVar18 < iVar38 * 2) {
              dVar7 = 0.0;
            }
            else {
              dVar7 = *(double *)&pcVar3->field_0x88 - *(double *)&pcVar3->field_0x80;
              iVar25 = iVar18 - iVar38;
            }
          }
          iVar38 = iVar28;
          if (pcVar3->field_0xa2 != '\0') {
            iVar35 = *(int *)&pcVar3->field_0x8;
            if (param_6 + iVar28 < iVar35) {
              dVar6 = *(double *)&pcVar3->field_0x90 - *(double *)&pcVar3->field_0x98;
              iVar38 = iVar35 + iVar28;
            }
            else if (param_6 + iVar28 < iVar35 * 2) {
              dVar6 = 0.0;
            }
            else {
              dVar6 = *(double *)&pcVar3->field_0x98 - *(double *)&pcVar3->field_0x90;
              iVar38 = iVar28 - iVar35;
            }
          }
          local_f0 = piVar27;
          scan_all(this,(iVar38 * *(int *)&pcVar3->field_0x4 + iVar25) * *(int *)pcVar3 + iVar17 +
                        iVar16,param_1 - dVar8,param_2 - dVar7,param_3 - dVar6,iVar39,iVar20,iVar37,
                   param_8,param_9);
          if (local_100 < piVar27) {
            lVar21 = (longlong)piVar27 - (longlong)local_100 >> 2;
          }
          else {
            lVar21 = ((longlong)piVar27 - (longlong)this->qu >> 2) +
                     ((longlong)this->qu_l - (longlong)local_100 >> 2);
          }
          if (lVar21 < 0x12) {
            add_list_memory(this,&local_f0,&local_100);
            piVar27 = local_f0;
          }
          add_to_mask(this,iVar31,iVar18,iVar28,&local_100);
          piVar19 = local_100;
        }
      } while (piVar27 != piVar19);
    }
  }
  return;
}

// find_voronoi_cell @ 1436c3eb0

void __thiscall
voro::voro_compute<voro::container_poly>::find_voronoi_cell
          (voro_compute<voro::container_poly> *this,double param_1,double param_2,double param_3,
          int param_4,int param_5,int param_6,int param_7,particle_record *param_8,double *param_9)

{
  int iVar1;
  container_poly *pcVar2;
  uint *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  uint *puVar19;
  int *piVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  int *piVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  ulonglong uVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  double *pdVar37;
  int iVar38;
  ulonglong uVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  uint local_res8;
  int *local_108;
  double *local_100;
  uint *local_f8;
  int *local_f0;
  ulonglong local_e8;
  
  dVar4 = 0.0;
  dVar5 = 0.0;
  dVar6 = 0.0;
  param_8->ijk = -1;
  *param_9 = 1e+30;
  pcVar2 = this->con;
  iVar10 = param_4;
  if (pcVar2->field_0xa0 != '\0') {
    iVar10 = *(int *)pcVar2;
  }
  iVar11 = param_5;
  if (pcVar2->field_0xa1 != '\0') {
    iVar11 = *(int *)&pcVar2->field_0x4;
  }
  iVar13 = param_6;
  if (pcVar2->field_0xa2 != '\0') {
    iVar13 = *(int *)&pcVar2->field_0x8;
  }
  uVar30 = 0;
  iVar14 = (param_7 - (*(int *)&pcVar2->field_0x4 * iVar13 + iVar11) * *(int *)pcVar2) - iVar10;
  scan_all(this,param_7,param_1,param_2,param_3,0,0,0,param_8,param_9);
  pcVar2 = this->con;
  dVar7 = (param_1 - *(double *)&pcVar2->field_0x70) -
          (double)param_4 * *(double *)&pcVar2->field_0x18;
  dVar8 = (param_2 - *(double *)&pcVar2->field_0x80) -
          (double)param_5 * *(double *)&pcVar2->field_0x20;
  iVar31 = (int)(dVar7 * this->xsp * __real_4020000000000000);
  dVar9 = (param_3 - *(double *)&pcVar2->field_0x90) -
          (double)param_6 * *(double *)&pcVar2->field_0x28;
  iVar16 = (int)(dVar8 * this->ysp * __real_4020000000000000);
  iVar27 = (int)(dVar9 * this->zsp * __real_4020000000000000);
  if (iVar31 < 4) {
    param_7 = 0;
    uVar22 = uVar30;
    uVar25 = uVar30;
    dVar43 = dVar7;
  }
  else {
    iVar15 = 7 - iVar31;
    iVar31 = 0;
    if (-1 < iVar15) {
      iVar31 = iVar15;
    }
    param_7 = 0x60007f;
    uVar22 = 0x200001;
    uVar25 = 0x60007f;
    dVar43 = this->boxx - dVar7;
  }
  local_res8 = (uint)uVar22;
  dVar42 = dVar8;
  iVar15 = iVar16;
  if (3 < iVar16) {
    param_7 = (uint)uVar25 | 0x3003f80;
    uVar25 = (ulonglong)(uint)param_7;
    local_res8 = local_res8 | 0x1000080;
    uVar22 = (ulonglong)local_res8;
    dVar42 = this->boxy - dVar8;
    iVar15 = 0;
    if (-1 < 7 - iVar16) {
      iVar15 = 7 - iVar16;
    }
  }
  iVar16 = iVar27;
  dVar41 = dVar9;
  if (3 < iVar27) {
    param_7 = (uint)uVar25 | 0x181fc000;
    uVar25 = (ulonglong)(uint)param_7;
    local_res8 = (uint)uVar22 | 0x8004000;
    uVar22 = (ulonglong)local_res8;
    dVar41 = this->boxz - dVar9;
    iVar16 = 0;
    if (-1 < 7 - iVar27) {
      iVar16 = 7 - iVar27;
    }
  }
  dVar40 = *(double *)&pcVar2->field_0xd8 * *(double *)&pcVar2->field_0xd8 + *param_9;
  if (((dVar43 * dVar43 <= dVar40) || (dVar42 * dVar42 <= dVar40)) || (dVar41 * dVar41 <= dVar40)) {
    iVar31 = (iVar31 + (iVar15 + iVar16 * 4) * 4) * 0x40;
    pdVar37 = this->mrad + iVar31;
    uVar21 = this->wl[iVar31];
    puVar3 = this->wl + iVar31;
    puVar19 = puVar3;
    uVar39 = uVar30;
    local_100 = pdVar37;
    do {
      pcVar2 = this->con;
      dVar43 = *(double *)&pcVar2->field_0xd8 * *(double *)&pcVar2->field_0xd8 + *param_9;
      if (dVar43 < pdVar37[uVar39]) {
        return;
      }
      puVar19 = puVar19 + 1;
      uVar28 = (int)uVar30 + 1;
      uVar39 = uVar39 + 1;
      uVar32 = ((uint)uVar25 ^ *puVar19) + (int)uVar22;
      uVar23 = uVar32 >> 7 & 0x7f;
      uVar33 = uVar32 >> 0xe & 0x7f;
      iVar16 = uVar23 - 0x40;
      iVar15 = (uVar32 & 0x7f) - 0x40;
      iVar27 = uVar33 - 0x40;
      iVar31 = iVar10 + iVar15;
      if ((((-1 < iVar31) && (iVar31 < this->hx)) &&
          ((iVar35 = iVar11 + iVar16, pdVar37 = local_100, -1 < iVar35 &&
           ((iVar35 < this->hy && (iVar18 = iVar13 + iVar27, -1 < iVar18)))))) &&
         (iVar18 < this->hz)) {
        iVar38 = iVar15;
        if (iVar15 < 1) {
          if (iVar15 < 0) {
            iVar38 = (uVar32 & 0x7f) - 0x3f;
            goto LAB_1436c428f;
          }
          dVar42 = 0.0;
        }
        else {
LAB_1436c428f:
          dVar42 = (double)iVar38 * this->boxx - dVar7;
          dVar42 = dVar42 * dVar42;
        }
        iVar38 = iVar16;
        if (iVar16 < 1) {
          if (iVar16 < 0) {
            iVar38 = uVar23 - 0x3f;
            goto LAB_1436c42b9;
          }
        }
        else {
LAB_1436c42b9:
          dVar41 = (double)iVar38 * this->boxy - dVar8;
          dVar42 = dVar42 + dVar41 * dVar41;
        }
        iVar38 = iVar27;
        if (iVar27 < 1) {
          if (iVar27 < 0) {
            iVar38 = uVar33 - 0x3f;
            goto LAB_1436c42e5;
          }
        }
        else {
LAB_1436c42e5:
          dVar41 = (double)iVar38 * this->boxz - dVar9;
          dVar42 = dVar42 + dVar41 * dVar41;
        }
        if (dVar42 <= dVar43) {
          if (pcVar2->field_0xa0 != '\0') {
            iVar38 = *(int *)pcVar2;
            if (param_4 + iVar31 < iVar38) {
              iVar31 = iVar31 + iVar38;
              dVar6 = *(double *)&pcVar2->field_0x70 - *(double *)&pcVar2->field_0x78;
            }
            else if (param_4 + iVar31 < iVar38 * 2) {
              dVar6 = 0.0;
            }
            else {
              iVar31 = iVar31 - iVar38;
              dVar6 = *(double *)&pcVar2->field_0x78 - *(double *)&pcVar2->field_0x70;
            }
          }
          if (pcVar2->field_0xa1 != '\0') {
            iVar38 = *(int *)&pcVar2->field_0x4;
            if (param_5 + iVar35 < iVar38) {
              iVar35 = iVar35 + iVar38;
              dVar5 = *(double *)&pcVar2->field_0x80 - *(double *)&pcVar2->field_0x88;
            }
            else if (param_5 + iVar35 < iVar38 * 2) {
              dVar5 = 0.0;
            }
            else {
              iVar35 = iVar35 - iVar38;
              dVar5 = *(double *)&pcVar2->field_0x88 - *(double *)&pcVar2->field_0x80;
            }
          }
          if (pcVar2->field_0xa2 != '\0') {
            iVar38 = *(int *)&pcVar2->field_0x8;
            if (param_6 + iVar18 < iVar38) {
              iVar18 = iVar18 + iVar38;
              dVar4 = *(double *)&pcVar2->field_0x90 - *(double *)&pcVar2->field_0x98;
            }
            else if (param_6 + iVar18 < iVar38 * 2) {
              dVar4 = 0.0;
            }
            else {
              iVar18 = iVar18 - iVar38;
              dVar4 = *(double *)&pcVar2->field_0x98 - *(double *)&pcVar2->field_0x90;
            }
          }
          scan_all(this,(iVar18 * *(int *)&pcVar2->field_0x4 + iVar35) * *(int *)pcVar2 + iVar31 +
                        iVar14,param_1 - dVar6,param_2 - dVar5,param_3 - dVar4,iVar15,iVar16,iVar27,
                   param_8,param_9);
          pdVar37 = local_100;
        }
      }
      uVar30 = (ulonglong)uVar28;
      uVar25 = (ulonglong)(uint)param_7;
      uVar22 = (ulonglong)local_res8;
    } while ((longlong)uVar39 < (longlong)(int)uVar21);
    puVar19 = &this->mv;
    *puVar19 = *puVar19 + 1;
    if (*puVar19 == 0) {
      puVar19 = this->mask;
      if (puVar19 < puVar19 + this->hxyz) {
        do {
          *puVar19 = 0;
          puVar19 = puVar19 + 1;
        } while (puVar19 < this->mask + this->hxyz);
      }
      this->mv = 1;
    }
    local_108 = this->qu;
    piVar26 = local_108;
    if ((longlong)uVar39 < 0x3f) {
      local_f8 = puVar3 + uVar39;
      local_e8 = uVar39;
      local_f0 = local_108;
      do {
        dVar43 = *(double *)&this->con->field_0xd8;
        if (dVar43 * dVar43 + *param_9 < pdVar37[local_e8]) {
          return;
        }
        local_e8 = local_e8 + 1;
        puVar3 = local_f8 + 1;
        local_f8 = local_f8 + 1;
        uVar21 = (param_7 ^ *puVar3) + local_res8;
        uVar28 = (int)uVar30 + 1;
        iVar31 = (uVar21 & 0x7f) - 0x40;
        iVar16 = (uVar21 >> 0xe & 0x7f) - 0x40;
        iVar15 = (uVar21 >> 7 & 0x7f) - 0x40;
        iVar27 = iVar10 + iVar31;
        if (((((-1 < iVar27) && (iVar35 = this->hx, iVar27 < iVar35)) &&
             (iVar18 = iVar11 + iVar15, -1 < iVar18)) &&
            ((iVar38 = this->hy, iVar18 < iVar38 && (iVar24 = iVar13 + iVar16, -1 < iVar24)))) &&
           (iVar24 < this->hz)) {
          puVar3 = this->mask;
          puVar3[(longlong)((iVar24 * iVar38 + iVar18) * iVar35) + (longlong)iVar27] = this->mv;
          bVar12 = compute_min_radius(this,iVar31,iVar15,iVar16,dVar7,dVar8,dVar9,*param_9);
          pdVar37 = local_100;
          if (!bVar12) {
            pcVar2 = this->con;
            iVar36 = iVar27;
            if (pcVar2->field_0xa0 != '\0') {
              iVar34 = *(int *)pcVar2;
              if (param_4 + iVar27 < iVar34) {
                dVar6 = *(double *)&pcVar2->field_0x70 - *(double *)&pcVar2->field_0x78;
                iVar36 = iVar27 + iVar34;
              }
              else if (param_4 + iVar27 < iVar34 * 2) {
                dVar6 = 0.0;
              }
              else {
                dVar6 = *(double *)&pcVar2->field_0x78 - *(double *)&pcVar2->field_0x70;
                iVar36 = iVar27 - iVar34;
              }
            }
            iVar34 = iVar18;
            if (pcVar2->field_0xa1 != '\0') {
              iVar29 = *(int *)&pcVar2->field_0x4;
              if (param_5 + iVar18 < iVar29) {
                dVar5 = *(double *)&pcVar2->field_0x80 - *(double *)&pcVar2->field_0x88;
                iVar34 = iVar18 + iVar29;
              }
              else if (param_5 + iVar18 < iVar29 * 2) {
                dVar5 = 0.0;
              }
              else {
                dVar5 = *(double *)&pcVar2->field_0x88 - *(double *)&pcVar2->field_0x80;
                iVar34 = iVar18 - iVar29;
              }
            }
            iVar29 = iVar24;
            if (pcVar2->field_0xa2 != '\0') {
              iVar1 = *(int *)&pcVar2->field_0x8;
              if (param_6 + iVar24 < iVar1) {
                dVar4 = *(double *)&pcVar2->field_0x90 - *(double *)&pcVar2->field_0x98;
                iVar29 = iVar1 + iVar24;
              }
              else if (param_6 + iVar24 < iVar1 * 2) {
                dVar4 = 0.0;
              }
              else {
                dVar4 = *(double *)&pcVar2->field_0x98 - *(double *)&pcVar2->field_0x90;
                iVar29 = iVar24 - iVar1;
              }
            }
            scan_all(this,(iVar34 + iVar29 * *(int *)&pcVar2->field_0x4) * *(int *)pcVar2 + iVar36 +
                          iVar14,param_1 - dVar6,param_2 - dVar5,param_3 - dVar4,iVar31,iVar15,
                     iVar16,param_8,param_9);
            if (this->qu_l + -0x12 < local_108) {
              add_list_memory(this,&local_f0,&local_108);
            }
            scan_bits_mask_add(this,uVar21,
                               puVar3 + (longlong)((iVar24 * iVar38 + iVar18) * iVar35) +
                                        (longlong)iVar27,iVar27,iVar18,iVar24,&local_108);
            pdVar37 = local_100;
          }
        }
        uVar30 = (ulonglong)uVar28;
        piVar26 = local_f0;
      } while ((longlong)local_e8 < 0x3f);
    }
    dVar43 = *(double *)&this->con->field_0xd8;
    if ((pdVar37[(int)uVar28] <= dVar43 * dVar43 + *param_9) &&
       (piVar20 = local_108, piVar26 != local_108)) {
      do {
        if (piVar26 == this->qu_l) {
          piVar26 = this->qu;
        }
        iVar31 = *piVar26;
        iVar16 = piVar26[1];
        iVar27 = piVar26[2];
        piVar26 = piVar26 + 3;
        iVar38 = iVar31 - iVar10;
        iVar35 = iVar16 - iVar11;
        iVar18 = iVar27 - iVar13;
        iVar15 = iVar38;
        if (iVar38 < 1) {
          if (iVar38 < 0) {
            iVar15 = iVar38 + 1;
            goto LAB_1436c488d;
          }
          dVar43 = 0.0;
        }
        else {
LAB_1436c488d:
          dVar43 = (double)iVar15 * this->boxx - dVar7;
          dVar43 = dVar43 * dVar43;
        }
        iVar15 = iVar35;
        if (iVar35 < 1) {
          if (iVar35 < 0) {
            iVar15 = iVar35 + 1;
            goto LAB_1436c48ba;
          }
        }
        else {
LAB_1436c48ba:
          dVar42 = (double)iVar15 * this->boxy - dVar8;
          dVar43 = dVar43 + dVar42 * dVar42;
        }
        iVar15 = iVar18;
        if (iVar18 < 1) {
          if (iVar18 < 0) {
            iVar15 = iVar18 + 1;
            goto LAB_1436c48e6;
          }
        }
        else {
LAB_1436c48e6:
          dVar42 = (double)iVar15 * this->boxz - dVar9;
          dVar43 = dVar43 + dVar42 * dVar42;
        }
        pcVar2 = this->con;
        if (dVar43 <= *(double *)&pcVar2->field_0xd8 * *(double *)&pcVar2->field_0xd8 + *param_9) {
          iVar15 = iVar31;
          if (pcVar2->field_0xa0 != '\0') {
            iVar24 = *(int *)pcVar2;
            if (param_4 + iVar31 < iVar24) {
              dVar6 = *(double *)&pcVar2->field_0x70 - *(double *)&pcVar2->field_0x78;
              iVar15 = iVar24 + iVar31;
            }
            else if (param_4 + iVar31 < iVar24 * 2) {
              dVar6 = 0.0;
            }
            else {
              dVar6 = *(double *)&pcVar2->field_0x78 - *(double *)&pcVar2->field_0x70;
              iVar15 = iVar31 - iVar24;
            }
          }
          iVar24 = iVar16;
          if (pcVar2->field_0xa1 != '\0') {
            iVar36 = *(int *)&pcVar2->field_0x4;
            if (param_5 + iVar16 < iVar36) {
              dVar5 = *(double *)&pcVar2->field_0x80 - *(double *)&pcVar2->field_0x88;
              iVar24 = iVar36 + iVar16;
            }
            else if (param_5 + iVar16 < iVar36 * 2) {
              dVar5 = 0.0;
            }
            else {
              dVar5 = *(double *)&pcVar2->field_0x88 - *(double *)&pcVar2->field_0x80;
              iVar24 = iVar16 - iVar36;
            }
          }
          iVar36 = iVar27;
          if (pcVar2->field_0xa2 != '\0') {
            iVar34 = *(int *)&pcVar2->field_0x8;
            if (param_6 + iVar27 < iVar34) {
              dVar4 = *(double *)&pcVar2->field_0x90 - *(double *)&pcVar2->field_0x98;
              iVar36 = iVar34 + iVar27;
            }
            else if (param_6 + iVar27 < iVar34 * 2) {
              dVar4 = 0.0;
            }
            else {
              dVar4 = *(double *)&pcVar2->field_0x98 - *(double *)&pcVar2->field_0x90;
              iVar36 = iVar27 - iVar34;
            }
          }
          local_f0 = piVar26;
          scan_all(this,(iVar36 * *(int *)&pcVar2->field_0x4 + iVar24) * *(int *)pcVar2 + iVar15 +
                        iVar14,param_1 - dVar6,param_2 - dVar5,param_3 - dVar4,iVar38,iVar35,iVar18,
                   param_8,param_9);
          if (local_108 < piVar26) {
            lVar17 = (longlong)piVar26 - (longlong)local_108 >> 2;
          }
          else {
            lVar17 = ((longlong)piVar26 - (longlong)this->qu >> 2) +
                     ((longlong)this->qu_l - (longlong)local_108 >> 2);
          }
          if (lVar17 < 0x12) {
            add_list_memory(this,&local_f0,&local_108);
            piVar26 = local_f0;
          }
          add_to_mask(this,iVar31,iVar16,iVar27,&local_108);
          piVar20 = local_108;
        }
      } while (piVar26 != piVar20);
    }
  }
  return;
}

// scan_all @ 1436c4b60

void __thiscall
voro::voro_compute<voro::container>::scan_all
          (voro_compute<voro::container> *this,int param_1,double param_2,double param_3,
          double param_4,int param_5,int param_6,int param_7,particle_record *param_8,
          double *param_9)

{
  double *pdVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  double dVar5;
  
  bVar2 = false;
  iVar4 = 0;
  if (0 < this->co[param_1]) {
    do {
      lVar3 = (longlong)(iVar4 * this->ps);
      pdVar1 = this->p[param_1];
      dVar5 = (pdVar1[lVar3 + 1] - param_3) * (pdVar1[lVar3 + 1] - param_3) +
              (pdVar1[lVar3] - param_2) * (pdVar1[lVar3] - param_2) +
              (pdVar1[lVar3 + 2] - param_4) * (pdVar1[lVar3 + 2] - param_4);
      if (dVar5 < *param_9) {
        *param_9 = dVar5;
        bVar2 = true;
        param_8->l = iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < this->co[param_1]);
    if (bVar2) {
      param_8->di = param_5;
      param_8->dj = param_6;
      param_8->dk = param_7;
      param_8->ijk = param_1;
    }
  }
  return;
}

// scan_all @ 1436c4c40

void __thiscall
voro::voro_compute<voro::container_poly>::scan_all
          (voro_compute<voro::container_poly> *this,int param_1,double param_2,double param_3,
          double param_4,int param_5,int param_6,int param_7,particle_record *param_8,
          double *param_9)

{
  double *pdVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  double dVar7;
  
  bVar2 = false;
  lVar4 = (longlong)param_1;
  iVar5 = 0;
  if (0 < this->co[lVar4]) {
    lVar6 = 0;
    do {
      lVar3 = (longlong)(iVar5 * this->ps);
      pdVar1 = this->p[lVar4];
      dVar7 = *(double *)
               (*(longlong *)(*(longlong *)&this->con->field_0xd0 + lVar4 * 8) + 0x18 + lVar6);
      dVar7 = ((pdVar1[lVar3 + 1] - param_3) * (pdVar1[lVar3 + 1] - param_3) +
               (pdVar1[lVar3] - param_2) * (pdVar1[lVar3] - param_2) +
              (pdVar1[lVar3 + 2] - param_4) * (pdVar1[lVar3 + 2] - param_4)) - dVar7 * dVar7;
      if (dVar7 < *param_9) {
        *param_9 = dVar7;
        bVar2 = true;
        param_8->l = iVar5;
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x20;
    } while (iVar5 < this->co[lVar4]);
    if (bVar2) {
      param_8->di = param_5;
      param_8->dj = param_6;
      param_8->dk = param_7;
      param_8->ijk = param_1;
    }
  }
  return;
}

// scan_bits_mask_add @ 1436c4d60

void __thiscall
voro::voro_compute<voro::container>::scan_bits_mask_add
          (voro_compute<voro::container> *this,uint param_1,uint *param_2,int param_3,int param_4,
          int param_5,int **param_6)

{
  uint uVar1;
  
  if ((param_1 >> 0x16 & 1) == 0) {
    if (((param_1 >> 0x15 & 1) != 0) && (param_3 < this->hx + -1)) {
      uVar1 = this->mv;
      goto LAB_1436c4dd6;
    }
  }
  else {
    if (0 < param_3) {
      param_2[-1] = this->mv;
      **param_6 = param_3 + -1;
      *param_6 = *param_6 + 1;
      **param_6 = param_4;
      *param_6 = *param_6 + 1;
      **param_6 = param_5;
      *param_6 = *param_6 + 1;
    }
    if (((param_1 >> 0x15 & 1) == 0) && (param_3 < this->hx + -1)) {
      uVar1 = this->mv;
LAB_1436c4dd6:
      param_2[1] = uVar1;
      **param_6 = param_3 + 1;
      *param_6 = *param_6 + 1;
      **param_6 = param_4;
      *param_6 = *param_6 + 1;
      **param_6 = param_5;
      *param_6 = *param_6 + 1;
    }
  }
  if ((param_1 >> 0x19 & 1) == 0) {
    if ((param_1 >> 0x18 & 1) == 0) goto LAB_1436c4e7e;
  }
  else {
    if (0 < param_4) {
      param_2[-(longlong)this->hx] = this->mv;
      **param_6 = param_3;
      *param_6 = *param_6 + 1;
      **param_6 = param_4 + -1;
      *param_6 = *param_6 + 1;
      **param_6 = param_5;
      *param_6 = *param_6 + 1;
    }
    if ((param_1 >> 0x18 & 1) != 0) goto LAB_1436c4e7e;
  }
  if (param_4 < this->hy + -1) {
    param_2[this->hx] = this->mv;
    **param_6 = param_3;
    *param_6 = *param_6 + 1;
    **param_6 = param_4 + 1;
    *param_6 = *param_6 + 1;
    **param_6 = param_5;
    *param_6 = *param_6 + 1;
  }
LAB_1436c4e7e:
  if ((param_1 >> 0x1c & 1) == 0) {
    if ((param_1 >> 0x1b & 1) == 0) {
      return;
    }
  }
  else {
    if (0 < param_5) {
      param_2[-(longlong)this->hxy] = this->mv;
      **param_6 = param_3;
      *param_6 = *param_6 + 1;
      **param_6 = param_4;
      *param_6 = *param_6 + 1;
      **param_6 = param_5 + -1;
      *param_6 = *param_6 + 1;
    }
    if ((param_1 >> 0x1b & 1) != 0) {
      return;
    }
  }
  if (param_5 < this->hz + -1) {
    param_2[this->hxy] = this->mv;
    **param_6 = param_3;
    *param_6 = *param_6 + 1;
    **param_6 = param_4;
    *param_6 = *param_6 + 1;
    **param_6 = param_5 + 1;
    *param_6 = *param_6 + 1;
  }
  return;
}

// scan_bits_mask_add @ 1436c4f10

void __thiscall
voro::voro_compute<voro::container_poly>::scan_bits_mask_add
          (voro_compute<voro::container_poly> *this,uint param_1,uint *param_2,int param_3,
          int param_4,int param_5,int **param_6)

{
  uint uVar1;
  
  if ((param_1 >> 0x16 & 1) == 0) {
    if (((param_1 >> 0x15 & 1) != 0) && (param_3 < this->hx + -1)) {
      uVar1 = this->mv;
      goto LAB_1436c4f86;
    }
  }
  else {
    if (0 < param_3) {
      param_2[-1] = this->mv;
      **param_6 = param_3 + -1;
      *param_6 = *param_6 + 1;
      **param_6 = param_4;
      *param_6 = *param_6 + 1;
      **param_6 = param_5;
      *param_6 = *param_6 + 1;
    }
    if (((param_1 >> 0x15 & 1) == 0) && (param_3 < this->hx + -1)) {
      uVar1 = this->mv;
LAB_1436c4f86:
      param_2[1] = uVar1;
      **param_6 = param_3 + 1;
      *param_6 = *param_6 + 1;
      **param_6 = param_4;
      *param_6 = *param_6 + 1;
      **param_6 = param_5;
      *param_6 = *param_6 + 1;
    }
  }
  if ((param_1 >> 0x19 & 1) == 0) {
    if ((param_1 >> 0x18 & 1) == 0) goto LAB_1436c502e;
  }
  else {
    if (0 < param_4) {
      param_2[-(longlong)this->hx] = this->mv;
      **param_6 = param_3;
      *param_6 = *param_6 + 1;
      **param_6 = param_4 + -1;
      *param_6 = *param_6 + 1;
      **param_6 = param_5;
      *param_6 = *param_6 + 1;
    }
    if ((param_1 >> 0x18 & 1) != 0) goto LAB_1436c502e;
  }
  if (param_4 < this->hy + -1) {
    param_2[this->hx] = this->mv;
    **param_6 = param_3;
    *param_6 = *param_6 + 1;
    **param_6 = param_4 + 1;
    *param_6 = *param_6 + 1;
    **param_6 = param_5;
    *param_6 = *param_6 + 1;
  }
LAB_1436c502e:
  if ((param_1 >> 0x1c & 1) == 0) {
    if ((param_1 >> 0x1b & 1) == 0) {
      return;
    }
  }
  else {
    if (0 < param_5) {
      param_2[-(longlong)this->hxy] = this->mv;
      **param_6 = param_3;
      *param_6 = *param_6 + 1;
      **param_6 = param_4;
      *param_6 = *param_6 + 1;
      **param_6 = param_5 + -1;
      *param_6 = *param_6 + 1;
    }
    if ((param_1 >> 0x1b & 1) != 0) {
      return;
    }
  }
  if (param_5 < this->hz + -1) {
    param_2[this->hxy] = this->mv;
    **param_6 = param_3;
    *param_6 = *param_6 + 1;
    **param_6 = param_4;
    *param_6 = *param_6 + 1;
    **param_6 = param_5 + 1;
    *param_6 = *param_6 + 1;
  }
  return;
}

