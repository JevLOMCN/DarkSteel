// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Voronoi
// Functions: 28

// container @ 1436b1f10

container * __thiscall
voro::container::container
          (container *this,double param_1,double param_2,double param_3,double param_4,
          double param_5,double param_6,int param_7,int param_8,int param_9,bool param_10,
          bool param_11,bool param_12,int param_13)

{
  container_base::container_base
            ((container_base *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             param_9,param_10,param_11,param_12,param_13,3);
  return this;
}

// container_base @ 1436b1fc0

container_base * __thiscall
voro::container_base::container_base
          (container_base *this,double param_1,double param_2,double param_3,double param_4,
          double param_5,double param_6,int param_7,int param_8,int param_9,bool param_10,
          bool param_11,bool param_12,int param_13,int param_14)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  void *pvVar8;
  ulong64 uVar9;
  int **ppiVar10;
  double **ppdVar11;
  int *piVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  voro_base::voro_base
            ((voro_base *)this,param_7,param_8,param_9,(param_2 - param_1) / (double)param_7,
             (param_4 - param_3) / (double)param_8,(param_6 - param_5) / (double)param_9);
  pvVar8 = operator_new__(0x100);
  this->_padding_ = (longlong)pvVar8;
  this->_padding_ = (longlong)pvVar8;
  this->_padding_ = (longlong)pvVar8 + 0x100;
  *(undefined4 *)&this->_padding_ = 0x20;
  this->xperiodic = param_10;
  this->yperiodic = param_11;
  this->zperiodic = param_12;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)(int)this->_padding_;
  uVar9 = SUB168(ZEXT816(8) * auVar1,0);
  this->ax = param_1;
  this->bx = param_2;
  this->ay = param_3;
  this->by = param_4;
  this->az = param_5;
  this->bz = param_6;
  if (SUB168(ZEXT816(8) * auVar1,8) != 0) {
    uVar9 = 0xffffffffffffffff;
  }
  ppiVar10 = operator_new__(uVar9);
  this->id = ppiVar10;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)(int)this->_padding_;
  uVar9 = SUB168(ZEXT816(8) * auVar2,0);
  if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
    uVar9 = 0xffffffffffffffff;
  }
  ppdVar11 = operator_new__(uVar9);
  this->p = ppdVar11;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (longlong)(int)this->_padding_;
  uVar9 = SUB168(ZEXT816(4) * auVar3,0);
  if (SUB168(ZEXT816(4) * auVar3,8) != 0) {
    uVar9 = 0xffffffffffffffff;
  }
  piVar12 = operator_new__(uVar9);
  this->co = piVar12;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (longlong)(int)this->_padding_;
  uVar9 = SUB168(ZEXT816(4) * auVar4,0);
  if (SUB168(ZEXT816(4) * auVar4,8) != 0) {
    uVar9 = 0xffffffffffffffff;
  }
  piVar12 = operator_new__(uVar9);
  uVar16 = 0;
  this->mem = piVar12;
  this->ps = param_14;
  iVar7 = (int)this->_padding_;
  uVar13 = uVar16;
  uVar15 = uVar16;
  if (0 < iVar7) {
    do {
      uVar14 = (int)uVar15 + 1;
      *(undefined4 *)(uVar13 + (longlong)this->co) = 0;
      iVar7 = (int)this->_padding_;
      uVar13 = uVar13 + 4;
      uVar15 = (ulonglong)uVar14;
    } while ((int)uVar14 < iVar7);
  }
  uVar13 = uVar16;
  uVar15 = uVar16;
  if (0 < iVar7) {
    do {
      uVar14 = (int)uVar15 + 1;
      *(int *)(uVar13 + (longlong)this->mem) = param_13;
      iVar7 = (int)this->_padding_;
      uVar13 = uVar13 + 4;
      uVar15 = (ulonglong)uVar14;
    } while ((int)uVar14 < iVar7);
  }
  uVar13 = uVar16;
  uVar15 = uVar16;
  if (0 < iVar7) {
    do {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (longlong)param_13;
      uVar9 = SUB168(ZEXT816(4) * auVar5,0);
      if (SUB168(ZEXT816(4) * auVar5,8) != 0) {
        uVar9 = 0xffffffffffffffff;
      }
      pvVar8 = operator_new__(uVar9);
      uVar14 = (int)uVar13 + 1;
      *(void **)(uVar15 + (longlong)this->id) = pvVar8;
      iVar7 = (int)this->_padding_;
      uVar13 = (ulonglong)uVar14;
      uVar15 = uVar15 + 8;
    } while ((int)uVar14 < iVar7);
  }
  uVar13 = uVar16;
  if (0 < iVar7) {
    do {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (longlong)(param_13 * this->ps);
      uVar9 = SUB168(ZEXT816(8) * auVar6,0);
      if (SUB168(ZEXT816(8) * auVar6,8) != 0) {
        uVar9 = 0xffffffffffffffff;
      }
      pvVar8 = operator_new__(uVar9);
      uVar14 = (int)uVar13 + 1;
      *(void **)(uVar16 + (longlong)this->p) = pvVar8;
      uVar16 = uVar16 + 8;
      uVar13 = (ulonglong)uVar14;
    } while ((int)uVar14 < (int)this->_padding_);
  }
  return this;
}

// container_poly @ 1436b22f0

container_poly * __thiscall
voro::container_poly::container_poly
          (container_poly *this,double param_1,double param_2,double param_3,double param_4,
          double param_5,double param_6,int param_7,int param_8,int param_9,bool param_10,
          bool param_11,bool param_12,int param_13)

{
  container_base::container_base
            ((container_base *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             param_9,param_10,param_11,param_12,param_13,4);
  *(undefined8 *)&this->field_0xd0 = *(undefined8 *)&this->field_0xb0;
  *(undefined8 *)&this->field_0xd8 = 0;
  return this;
}

// wall_list @ 1436b23c0

wall_list * __thiscall voro::wall_list::wall_list(wall_list *this)

{
  wall **ppwVar1;
  
  ppwVar1 = operator_new__(0x100);
  this->walls = ppwVar1;
  this->wep = ppwVar1;
  this->wel = ppwVar1 + 0x20;
  this->current_wall_size = 0x20;
  return this;
}

// ~container_base @ 1436b2400

void __thiscall voro::container_base::~container_base(container_base *this)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  if (this->p != (double **)0x0) {
    uVar1 = uVar2;
    uVar4 = uVar2;
    if (0 < (int)this->_padding_) {
      do {
        operator_delete__(*(void **)((longlong)this->p + uVar1));
        uVar3 = (int)uVar4 + 1;
        uVar1 = uVar1 + 8;
        uVar4 = (ulonglong)uVar3;
      } while ((int)uVar3 < (int)this->_padding_);
    }
    operator_delete__(this->p);
  }
  if (this->id != (int **)0x0) {
    uVar1 = uVar2;
    if (0 < (int)this->_padding_) {
      do {
        operator_delete__(*(void **)((longlong)this->id + uVar2));
        uVar3 = (int)uVar1 + 1;
        uVar2 = uVar2 + 8;
        uVar1 = (ulonglong)uVar3;
      } while ((int)uVar3 < (int)this->_padding_);
    }
    operator_delete__(this->id);
  }
  operator_delete__(this->co);
  operator_delete__(this->mem);
  operator_delete__((void *)this->_padding_);
  operator_delete__((void *)this->_padding_);
  return;
}

// ~wall_list @ 1436b24f0

void __thiscall voro::wall_list::~wall_list(wall_list *this)

{
  operator_delete__(this->walls);
  return;
}

// add_particle_memory @ 1436b2500

void __thiscall voro::container_base::add_particle_memory(container_base *this,int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  ulong64 uVar4;
  int *piVar5;
  double *pdVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  iVar3 = this->mem[param_1] * 2;
  if (0x1000000 < iVar3) {
    voro_fatal_error("Absolute maximum memory allocation exceeded",2);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)iVar3;
  uVar4 = SUB168(ZEXT816(4) * auVar1,0);
  if (SUB168(ZEXT816(4) * auVar1,8) != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  piVar5 = operator_new__(uVar4);
  uVar8 = 0;
  uVar7 = uVar8;
  uVar10 = uVar8;
  if (0 < this->co[param_1]) {
    do {
      uVar9 = (int)uVar10 + 1;
      *(undefined4 *)(uVar7 + (longlong)piVar5) =
           *(undefined4 *)(uVar7 + (longlong)this->id[param_1]);
      uVar7 = uVar7 + 4;
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < this->co[param_1]);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)(iVar3 * this->ps);
  uVar4 = SUB168(ZEXT816(8) * auVar2,0);
  if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  pdVar6 = operator_new__(uVar4);
  uVar7 = uVar8;
  if (0 < this->co[param_1] * this->ps) {
    do {
      uVar9 = (int)uVar7 + 1;
      *(undefined8 *)(uVar8 + (longlong)pdVar6) =
           *(undefined8 *)(uVar8 + (longlong)this->p[param_1]);
      uVar8 = uVar8 + 8;
      uVar7 = (ulonglong)uVar9;
    } while ((int)uVar9 < this->co[param_1] * this->ps);
  }
  this->mem[param_1] = iVar3;
  operator_delete__(this->id[param_1]);
  this->id[param_1] = piVar5;
  operator_delete__(this->p[param_1]);
  this->p[param_1] = pdVar6;
  return;
}

// add_wall @ 1436b2680

void __thiscall voro::wall_list::add_wall(wall_list *this,wall_list *param_1)

{
  wall *pwVar1;
  wall *pwVar2;
  undefined1 auVar3 [16];
  ulong64 uVar4;
  wall **ppwVar5;
  wall **ppwVar6;
  wall **ppwVar7;
  wall **ppwVar8;
  
  ppwVar7 = param_1->walls;
  if (ppwVar7 < param_1->wep) {
    do {
      ppwVar8 = this->wep;
      pwVar1 = *ppwVar7;
      if (ppwVar8 == this->wel) {
        this->current_wall_size = this->current_wall_size << 1;
        if (0x800 < this->current_wall_size) {
          voro_fatal_error("Wall memory allocation exceeded absolute maximum",2);
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (longlong)this->current_wall_size;
        uVar4 = SUB168(ZEXT816(8) * auVar3,0);
        if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
          uVar4 = 0xffffffffffffffff;
        }
        ppwVar5 = operator_new__(uVar4);
        ppwVar6 = this->walls;
        ppwVar8 = ppwVar5;
        if (ppwVar6 < this->wep) {
          do {
            pwVar2 = *ppwVar6;
            ppwVar6 = ppwVar6 + 1;
            *ppwVar8 = pwVar2;
            ppwVar8 = ppwVar8 + 1;
          } while (ppwVar6 < this->wep);
        }
        operator_delete__(this->walls);
        this->walls = ppwVar5;
        this->wep = ppwVar8;
        this->wel = ppwVar5 + this->current_wall_size;
      }
      *ppwVar8 = pwVar1;
      ppwVar7 = ppwVar7 + 1;
      this->wep = this->wep + 1;
    } while (ppwVar7 < param_1->wep);
  }
  return;
}

// clear @ 1436b2780

void __thiscall voro::container::clear(container *this)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)&this->field_0xb8;
  if (puVar1 < puVar1 + *(int *)&this->field_0x10) {
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (puVar1 < (undefined4 *)
                      (*(longlong *)&this->field_0xb8 + (longlong)*(int *)&this->field_0x10 * 4));
  }
  return;
}

// clear @ 1436b27d0

void __thiscall voro::container_poly::clear(container_poly *this)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)&this->field_0xb8;
  if (puVar1 + *(int *)&this->field_0x10 <= puVar1) {
    *(undefined8 *)&this->field_0xd8 = 0;
    return;
  }
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 < (undefined4 *)
                    (*(longlong *)&this->field_0xb8 + (longlong)*(int *)&this->field_0x10 * 4));
  *(undefined8 *)&this->field_0xd8 = 0;
  return;
}

// compute_all_cells @ 1436b2830

void __thiscall
voro::container::compute_all_cells(container *this,voro_compute<voro::container> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_res8;
  voronoicell_base local_d8;
  
  voronoicell_base::voronoicell_base(&local_d8);
  piVar5 = *(int **)&this->field_0xb8;
  iVar1 = *(int *)this;
  iVar2 = *(int *)&this->field_0x4;
  iVar9 = 0;
  iVar3 = *(int *)&this->field_0x10;
  iVar8 = 0;
  iVar7 = 0;
  local_d8._padding_ = (longlong)&___7voronoicell_voro__6B_;
  iVar10 = 0;
  local_res8 = 0;
  iVar4 = *piVar5;
  do {
    if (iVar4 != 0) {
      do {
        do {
          voro_compute<voro::container>::compute_cell<voro::voronoicell>
                    (param_1,(voronoicell *)&local_d8,iVar9,local_res8,iVar10,iVar7,iVar8);
          local_res8 = local_res8 + 1;
        } while (local_res8 < piVar5[iVar9]);
        local_res8 = 0;
        do {
          lVar6 = (longlong)iVar9;
          iVar10 = iVar10 + 1;
          iVar9 = iVar9 + 1;
          if (iVar10 == iVar1) {
            iVar10 = 0;
            iVar7 = iVar7 + 1;
            if (iVar7 == iVar2) {
              iVar7 = 0;
              iVar8 = iVar8 + 1;
              if (iVar9 == iVar3) goto LAB_1436b2938;
            }
          }
        } while (piVar5[lVar6 + 1] == 0);
      } while( true );
    }
    lVar6 = (longlong)iVar9;
    iVar10 = iVar10 + 1;
    iVar9 = iVar9 + 1;
    if (iVar10 == iVar1) {
      iVar10 = 0;
      iVar7 = iVar7 + 1;
      if (iVar7 == iVar2) {
        iVar7 = 0;
        iVar8 = iVar8 + 1;
        if (iVar9 == iVar3) {
LAB_1436b2938:
          voronoicell_base::~voronoicell_base(&local_d8);
          return;
        }
      }
    }
    iVar4 = piVar5[lVar6 + 1];
  } while( true );
}

// compute_all_cells @ 1436b2970

void __thiscall
voro::container_poly::compute_all_cells(container_poly *this,voro_compute<voro::container> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_res8;
  voronoicell_base local_d8;
  
  voronoicell_base::voronoicell_base(&local_d8);
  piVar5 = *(int **)&this->field_0xb8;
  iVar1 = *(int *)this;
  iVar2 = *(int *)&this->field_0x4;
  iVar9 = 0;
  iVar3 = *(int *)&this->field_0x10;
  iVar8 = 0;
  iVar7 = 0;
  local_d8._padding_ = (longlong)&___7voronoicell_voro__6B_;
  iVar10 = 0;
  local_res8 = 0;
  iVar4 = *piVar5;
  do {
    if (iVar4 != 0) {
      do {
        do {
          voro_compute<voro::container>::compute_cell<voro::voronoicell>
                    (param_1,(voronoicell *)&local_d8,iVar9,local_res8,iVar10,iVar7,iVar8);
          local_res8 = local_res8 + 1;
        } while (local_res8 < piVar5[iVar9]);
        local_res8 = 0;
        do {
          lVar6 = (longlong)iVar9;
          iVar10 = iVar10 + 1;
          iVar9 = iVar9 + 1;
          if (iVar10 == iVar1) {
            iVar10 = 0;
            iVar7 = iVar7 + 1;
            if (iVar7 == iVar2) {
              iVar7 = 0;
              iVar8 = iVar8 + 1;
              if (iVar9 == iVar3) goto LAB_1436b2a78;
            }
          }
        } while (piVar5[lVar6 + 1] == 0);
      } while( true );
    }
    lVar6 = (longlong)iVar9;
    iVar10 = iVar10 + 1;
    iVar9 = iVar9 + 1;
    if (iVar10 == iVar1) {
      iVar10 = 0;
      iVar7 = iVar7 + 1;
      if (iVar7 == iVar2) {
        iVar7 = 0;
        iVar8 = iVar8 + 1;
        if (iVar9 == iVar3) {
LAB_1436b2a78:
          voronoicell_base::~voronoicell_base(&local_d8);
          return;
        }
      }
    }
    iVar4 = piVar5[lVar6 + 1];
  } while( true );
}

// deallocate @ 1436b2ab0

void __thiscall voro::wall_list::deallocate(wall_list *this)

{
  wall *pwVar1;
  wall **ppwVar2;
  
  ppwVar2 = this->walls;
  if (ppwVar2 < this->wep) {
    do {
      pwVar1 = *ppwVar2;
      if (pwVar1 != (wall *)0x0) {
        (**(code **)*pwVar1)(pwVar1,1);
      }
      ppwVar2 = ppwVar2 + 1;
    } while (ppwVar2 < this->wep);
  }
  return;
}

// find_voronoi_cell @ 1436b2b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
voro::container::find_voronoi_cell
          (container *this,double param_1,double param_2,double param_3,double *param_4,
          double *param_5,double *param_6,int *param_7,voro_compute<voro::container> *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  undefined1 auStackY_f8 [32];
  double local_88;
  particle_record local_80;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  dVar11 = (param_1 - *(double *)&this->field_0x70) * *(double *)&this->field_0x30;
  iVar1 = (int)dVar11;
  iVar10 = iVar1 + -1;
  if (0.0 <= dVar11) {
    iVar10 = iVar1;
  }
  iVar1 = 0;
  if ((iVar10 < 0) || (iVar4 = *(int *)this, iVar9 = iVar1, iVar4 <= iVar10)) {
    if (this->field_0xa0 == '\0') {
      return false;
    }
    iVar4 = *(int *)this;
    if (iVar10 < 0) {
      iVar9 = (iVar10 + 1) / iVar4 + -1;
    }
    else {
      iVar9 = iVar10 / iVar4;
    }
    iVar10 = iVar10 - iVar4 * iVar9;
    param_1 = param_1 - (*(double *)&this->field_0x78 - *(double *)&this->field_0x70) *
                        (double)iVar9;
  }
  dVar11 = (param_2 - *(double *)&this->field_0x80) * *(double *)&this->field_0x38;
  iVar2 = (int)dVar11;
  iVar7 = iVar2 + -1;
  if (0.0 <= dVar11) {
    iVar7 = iVar2;
  }
  if ((iVar7 < 0) || (iVar2 = iVar1, *(int *)&this->field_0x4 <= iVar7)) {
    if (this->field_0xa1 == '\0') {
      return false;
    }
    iVar8 = *(int *)&this->field_0x4;
    if (iVar7 < 0) {
      iVar2 = (iVar7 + 1) / iVar8 + -1;
    }
    else {
      iVar2 = iVar7 / iVar8;
    }
    iVar7 = iVar7 - iVar8 * iVar2;
    param_2 = param_2 - (*(double *)&this->field_0x88 - *(double *)&this->field_0x80) *
                        (double)iVar2;
  }
  dVar11 = (param_3 - *(double *)&this->field_0x90) * *(double *)&this->field_0x40;
  iVar3 = (int)dVar11;
  iVar8 = iVar3 + -1;
  if (0.0 <= dVar11) {
    iVar8 = iVar3;
  }
  if ((iVar8 < 0) || (*(int *)&this->field_0x8 <= iVar8)) {
    if (this->field_0xa2 == '\0') {
      return false;
    }
    iVar3 = *(int *)&this->field_0x8;
    if (iVar8 < 0) {
      iVar1 = (iVar8 + 1) / iVar3 + -1;
    }
    else {
      iVar1 = iVar8 / iVar3;
    }
    iVar8 = iVar8 - iVar3 * iVar1;
    param_3 = param_3 - (*(double *)&this->field_0x98 - *(double *)&this->field_0x90) *
                        (double)iVar1;
  }
  voro_compute<voro::container>::find_voronoi_cell
            (param_8,param_1,param_2,param_3,iVar10,iVar7,iVar8,
             iVar4 * iVar7 + iVar8 * *(int *)&this->field_0xc + iVar10,&local_80,&local_88);
  lVar5 = (longlong)local_80.ijk;
  if (local_80.ijk == -1) {
    return false;
  }
  if (this->field_0xa0 != '\0') {
    iVar10 = iVar10 + local_80.di;
    if (iVar10 < 0) {
      iVar10 = (iVar10 + 1) / *(int *)this + -1;
    }
    else {
      if (iVar10 < *(int *)this) goto LAB_1436b2d63;
      iVar10 = iVar10 / *(int *)this;
    }
    iVar9 = iVar9 + iVar10;
  }
LAB_1436b2d63:
  if (this->field_0xa1 != '\0') {
    iVar7 = iVar7 + local_80.dj;
    if (iVar7 < 0) {
      iVar7 = (iVar7 + 1) / *(int *)&this->field_0x4 + -1;
    }
    else {
      if (iVar7 < *(int *)&this->field_0x4) goto LAB_1436b2d8e;
      iVar7 = iVar7 / *(int *)&this->field_0x4;
    }
    iVar2 = iVar2 + iVar7;
  }
LAB_1436b2d8e:
  if (this->field_0xa2 != '\0') {
    iVar8 = iVar8 + local_80.dk;
    if (iVar8 < 0) {
      iVar8 = (iVar8 + 1) / *(int *)&this->field_0x8 + -1;
    }
    else {
      if (iVar8 < *(int *)&this->field_0x8) goto LAB_1436b2db8;
      iVar8 = iVar8 / *(int *)&this->field_0x8;
    }
    iVar1 = iVar1 + iVar8;
  }
LAB_1436b2db8:
  lVar6 = (longlong)(local_80.l * 3);
  *param_4 = (*(double *)&this->field_0x78 - *(double *)&this->field_0x70) * (double)iVar9 +
             *(double *)(*(longlong *)(*(longlong *)&this->field_0xb0 + lVar5 * 8) + lVar6 * 8);
  *param_5 = (*(double *)&this->field_0x88 - *(double *)&this->field_0x80) * (double)iVar2 +
             *(double *)(*(longlong *)(*(longlong *)&this->field_0xb0 + lVar5 * 8) + 8 + lVar6 * 8);
  *param_6 = (*(double *)&this->field_0x98 - *(double *)&this->field_0x90) * (double)iVar1 +
             *(double *)
              (*(longlong *)(*(longlong *)&this->field_0xb0 + lVar5 * 8) + 0x10 + lVar6 * 8);
  *param_7 = *(int *)(*(longlong *)(*(longlong *)&this->field_0xa8 + lVar5 * 8) +
                     (longlong)local_80.l * 4);
  return true;
}

// find_voronoi_cell @ 1436b2eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
voro::container_poly::find_voronoi_cell
          (container_poly *this,double param_1,double param_2,double param_3,double *param_4,
          double *param_5,double *param_6,int *param_7,voro_compute<voro::container> *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  undefined1 auStackY_f8 [32];
  double local_88;
  particle_record local_80;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  dVar11 = (param_1 - *(double *)&this->field_0x70) * *(double *)&this->field_0x30;
  iVar1 = (int)dVar11;
  iVar10 = iVar1 + -1;
  if (0.0 <= dVar11) {
    iVar10 = iVar1;
  }
  iVar1 = 0;
  if ((iVar10 < 0) || (iVar4 = *(int *)this, iVar9 = iVar1, iVar4 <= iVar10)) {
    if (this->field_0xa0 == '\0') {
      return false;
    }
    iVar4 = *(int *)this;
    if (iVar10 < 0) {
      iVar9 = (iVar10 + 1) / iVar4 + -1;
    }
    else {
      iVar9 = iVar10 / iVar4;
    }
    iVar10 = iVar10 - iVar4 * iVar9;
    param_1 = param_1 - (*(double *)&this->field_0x78 - *(double *)&this->field_0x70) *
                        (double)iVar9;
  }
  dVar11 = (param_2 - *(double *)&this->field_0x80) * *(double *)&this->field_0x38;
  iVar2 = (int)dVar11;
  iVar7 = iVar2 + -1;
  if (0.0 <= dVar11) {
    iVar7 = iVar2;
  }
  if ((iVar7 < 0) || (iVar2 = iVar1, *(int *)&this->field_0x4 <= iVar7)) {
    if (this->field_0xa1 == '\0') {
      return false;
    }
    iVar8 = *(int *)&this->field_0x4;
    if (iVar7 < 0) {
      iVar2 = (iVar7 + 1) / iVar8 + -1;
    }
    else {
      iVar2 = iVar7 / iVar8;
    }
    iVar7 = iVar7 - iVar8 * iVar2;
    param_2 = param_2 - (*(double *)&this->field_0x88 - *(double *)&this->field_0x80) *
                        (double)iVar2;
  }
  dVar11 = (param_3 - *(double *)&this->field_0x90) * *(double *)&this->field_0x40;
  iVar3 = (int)dVar11;
  iVar8 = iVar3 + -1;
  if (0.0 <= dVar11) {
    iVar8 = iVar3;
  }
  if ((iVar8 < 0) || (*(int *)&this->field_0x8 <= iVar8)) {
    if (this->field_0xa2 == '\0') {
      return false;
    }
    iVar3 = *(int *)&this->field_0x8;
    if (iVar8 < 0) {
      iVar1 = (iVar8 + 1) / iVar3 + -1;
    }
    else {
      iVar1 = iVar8 / iVar3;
    }
    iVar8 = iVar8 - iVar3 * iVar1;
    param_3 = param_3 - (*(double *)&this->field_0x98 - *(double *)&this->field_0x90) *
                        (double)iVar1;
  }
  voro_compute<voro::container>::find_voronoi_cell
            (param_8,param_1,param_2,param_3,iVar10,iVar7,iVar8,
             iVar4 * iVar7 + iVar8 * *(int *)&this->field_0xc + iVar10,&local_80,&local_88);
  lVar5 = (longlong)local_80.ijk;
  if (local_80.ijk == -1) {
    return false;
  }
  if (this->field_0xa0 != '\0') {
    iVar10 = iVar10 + local_80.di;
    if (iVar10 < 0) {
      iVar10 = (iVar10 + 1) / *(int *)this + -1;
    }
    else {
      if (iVar10 < *(int *)this) goto LAB_1436b3113;
      iVar10 = iVar10 / *(int *)this;
    }
    iVar9 = iVar9 + iVar10;
  }
LAB_1436b3113:
  if (this->field_0xa1 != '\0') {
    iVar7 = iVar7 + local_80.dj;
    if (iVar7 < 0) {
      iVar7 = (iVar7 + 1) / *(int *)&this->field_0x4 + -1;
    }
    else {
      if (iVar7 < *(int *)&this->field_0x4) goto LAB_1436b313e;
      iVar7 = iVar7 / *(int *)&this->field_0x4;
    }
    iVar2 = iVar2 + iVar7;
  }
LAB_1436b313e:
  if (this->field_0xa2 != '\0') {
    iVar8 = iVar8 + local_80.dk;
    if (iVar8 < 0) {
      iVar8 = (iVar8 + 1) / *(int *)&this->field_0x8 + -1;
    }
    else {
      if (iVar8 < *(int *)&this->field_0x8) goto LAB_1436b3168;
      iVar8 = iVar8 / *(int *)&this->field_0x8;
    }
    iVar1 = iVar1 + iVar8;
  }
LAB_1436b3168:
  lVar6 = (longlong)(local_80.l * 4);
  *param_4 = (*(double *)&this->field_0x78 - *(double *)&this->field_0x70) * (double)iVar9 +
             *(double *)(*(longlong *)(*(longlong *)&this->field_0xb0 + lVar5 * 8) + lVar6 * 8);
  *param_5 = (*(double *)&this->field_0x88 - *(double *)&this->field_0x80) * (double)iVar2 +
             *(double *)(*(longlong *)(*(longlong *)&this->field_0xb0 + lVar5 * 8) + 8 + lVar6 * 8);
  *param_6 = (*(double *)&this->field_0x98 - *(double *)&this->field_0x90) * (double)iVar1 +
             *(double *)
              (*(longlong *)(*(longlong *)&this->field_0xb0 + lVar5 * 8) + 0x10 + lVar6 * 8);
  *param_7 = *(int *)(*(longlong *)(*(longlong *)&this->field_0xa8 + lVar5 * 8) +
                     (longlong)local_80.l * 4);
  return true;
}

// increase_wall_memory @ 1436b3270

void __thiscall voro::wall_list::increase_wall_memory(wall_list *this)

{
  wall *pwVar1;
  undefined1 auVar2 [16];
  ulong64 uVar3;
  wall **ppwVar4;
  wall **ppwVar5;
  wall **ppwVar6;
  
  this->current_wall_size = this->current_wall_size << 1;
  if (0x800 < this->current_wall_size) {
    voro_fatal_error("Wall memory allocation exceeded absolute maximum",2);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)this->current_wall_size;
  uVar3 = SUB168(ZEXT816(8) * auVar2,0);
  if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
    uVar3 = 0xffffffffffffffff;
  }
  ppwVar4 = operator_new__(uVar3);
  ppwVar5 = this->walls;
  ppwVar6 = ppwVar4;
  if (ppwVar5 < this->wep) {
    do {
      pwVar1 = *ppwVar5;
      ppwVar5 = ppwVar5 + 1;
      *ppwVar6 = pwVar1;
      ppwVar6 = ppwVar6 + 1;
    } while (ppwVar5 < this->wep);
  }
  operator_delete__(this->walls);
  this->walls = ppwVar4;
  this->wep = ppwVar6;
  this->wel = ppwVar4 + this->current_wall_size;
  return;
}

// make_compute @ 1436b3320

voro_compute<voro::container> * __thiscall
voro::container::make_compute(container *this,voro_compute<voro::container> *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x8;
  if (this->field_0xa2 != '\0') {
    iVar1 = iVar1 * 2 + 1;
  }
  iVar3 = *(int *)&this->field_0x4;
  if (this->field_0xa1 != '\0') {
    iVar3 = iVar3 * 2 + 1;
  }
  iVar2 = *(int *)this;
  if (this->field_0xa0 != '\0') {
    iVar2 = iVar2 * 2 + 1;
  }
  voro_compute<voro::container>::voro_compute<voro::container>
            (__return_storage_ptr__,this,iVar2,iVar3,iVar1);
  return __return_storage_ptr__;
}

// make_compute @ 1436b3390

voro_compute<voro::container_poly> * __thiscall
voro::container_poly::make_compute
          (container_poly *this,voro_compute<voro::container_poly> *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)&this->field_0x8;
  if (this->field_0xa2 != '\0') {
    iVar1 = iVar1 * 2 + 1;
  }
  iVar3 = *(int *)&this->field_0x4;
  if (this->field_0xa1 != '\0') {
    iVar3 = iVar3 * 2 + 1;
  }
  iVar2 = *(int *)this;
  if (this->field_0xa0 != '\0') {
    iVar2 = iVar2 * 2 + 1;
  }
  voro_compute<voro::container_poly>::voro_compute<voro::container_poly>
            (__return_storage_ptr__,this,iVar2,iVar3,iVar1);
  return __return_storage_ptr__;
}

// point_inside @ 1436b3400

bool __thiscall
voro::container_base::point_inside
          (container_base *this,double param_1,double param_2,double param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if ((((param_1 < this->ax) || (this->bx <= param_1 && param_1 != this->bx)) ||
      (param_2 < this->ay)) ||
     (((this->by <= param_2 && param_2 != this->by || (param_3 < this->az)) ||
      (this->bz <= param_3 && param_3 != this->bz)))) {
    bVar2 = false;
  }
  else {
    puVar3 = (undefined8 *)this->_padding_;
    if (puVar3 < (undefined8 *)this->_padding_) {
      do {
        cVar1 = (**(code **)(*(longlong *)*puVar3 + 8))
                          ((longlong *)*puVar3,SUB84(param_1,0),SUB84(param_2,0),SUB84(param_3,0));
        if (cVar1 == '\0') {
          return false;
        }
        puVar3 = puVar3 + 1;
      } while (puVar3 < (undefined8 *)this->_padding_);
    }
    bVar2 = true;
  }
  return bVar2;
}

// put @ 1436b34d0

void __thiscall
voro::container::put
          (container *this,particle_order *param_1,int param_2,double param_3,double param_4,
          double param_5)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double local_res20;
  int local_28 [4];
  
  local_res20 = param_3;
  bVar2 = container_base::put_remap((container_base *)this,local_28,&local_res20,&param_4,&param_5);
  if (bVar2) {
    lVar3 = *(longlong *)&this->field_0xb8;
    lVar4 = (longlong)local_28[0];
    if (*(int *)(lVar3 + lVar4 * 4) == *(int *)(*(longlong *)&this->field_0xc0 + lVar4 * 4)) {
      container_base::add_particle_memory((container_base *)this,local_28[0]);
      lVar3 = *(longlong *)&this->field_0xb8;
    }
    *(int *)(*(longlong *)(*(longlong *)&this->field_0xa8 + lVar4 * 8) +
            (longlong)*(int *)(lVar3 + lVar4 * 4) * 4) = param_2;
    iVar1 = *(int *)(*(longlong *)&this->field_0xb8 + lVar4 * 4);
    if (param_1->op == param_1->o + param_1->size) {
      particle_order::add_ordering_memory(param_1);
    }
    *param_1->op = local_28[0];
    param_1->op = param_1->op + 1;
    *param_1->op = iVar1;
    param_1->op = param_1->op + 1;
    iVar1 = *(int *)(*(longlong *)&this->field_0xb8 + lVar4 * 4);
    lVar5 = (longlong)(iVar1 * 3);
    lVar3 = *(longlong *)(*(longlong *)&this->field_0xb0 + lVar4 * 8);
    *(int *)(*(longlong *)&this->field_0xb8 + lVar4 * 4) = iVar1 + 1;
    *(double *)(lVar3 + lVar5 * 8) = local_res20;
    *(double *)(lVar3 + 8 + lVar5 * 8) = param_4;
    *(double *)(lVar3 + 0x10 + lVar5 * 8) = param_5;
  }
  return;
}

// put @ 1436b3600

void __thiscall
voro::container::put(container *this,int param_1,double param_2,double param_3,double param_4)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double local_res18;
  double local_res20;
  int local_18 [4];
  
  local_res18 = param_2;
  local_res20 = param_3;
  bVar2 = container_base::put_remap
                    ((container_base *)this,local_18,&local_res18,&local_res20,&param_4);
  if (bVar2) {
    lVar3 = (longlong)local_18[0];
    lVar4 = *(longlong *)&this->field_0xb8;
    if (*(int *)(lVar4 + lVar3 * 4) == *(int *)(*(longlong *)&this->field_0xc0 + lVar3 * 4)) {
      container_base::add_particle_memory((container_base *)this,local_18[0]);
      lVar4 = *(longlong *)&this->field_0xb8;
    }
    *(int *)(*(longlong *)(*(longlong *)&this->field_0xa8 + lVar3 * 8) +
            (longlong)*(int *)(lVar4 + lVar3 * 4) * 4) = param_1;
    iVar1 = *(int *)(*(longlong *)&this->field_0xb8 + lVar3 * 4);
    lVar4 = *(longlong *)(*(longlong *)&this->field_0xb0 + lVar3 * 8);
    lVar5 = (longlong)(iVar1 * 3);
    *(int *)(*(longlong *)&this->field_0xb8 + lVar3 * 4) = iVar1 + 1;
    *(double *)(lVar4 + lVar5 * 8) = local_res18;
    *(double *)(lVar4 + 8 + lVar5 * 8) = local_res20;
    *(double *)(lVar4 + 0x10 + lVar5 * 8) = param_4;
  }
  return;
}

// put @ 1436b36f0

void __thiscall
voro::container_poly::put
          (container_poly *this,particle_order *param_1,int param_2,double param_3,double param_4,
          double param_5,double param_6)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double local_res20;
  int local_28 [4];
  
  local_res20 = param_3;
  bVar3 = container_base::put_remap((container_base *)this,local_28,&local_res20,&param_4,&param_5);
  if (bVar3) {
    lVar4 = *(longlong *)&this->field_0xb8;
    lVar5 = (longlong)local_28[0];
    if (*(int *)(lVar4 + lVar5 * 4) == *(int *)(*(longlong *)&this->field_0xc0 + lVar5 * 4)) {
      container_base::add_particle_memory((container_base *)this,local_28[0]);
      lVar4 = *(longlong *)&this->field_0xb8;
    }
    *(int *)(*(longlong *)(*(longlong *)&this->field_0xa8 + lVar5 * 8) +
            (longlong)*(int *)(lVar4 + lVar5 * 4) * 4) = param_2;
    iVar1 = *(int *)(*(longlong *)&this->field_0xb8 + lVar5 * 4);
    if (param_1->op == param_1->o + param_1->size) {
      particle_order::add_ordering_memory(param_1);
    }
    *param_1->op = local_28[0];
    param_1->op = param_1->op + 1;
    *param_1->op = iVar1;
    param_1->op = param_1->op + 1;
    iVar1 = *(int *)(*(longlong *)&this->field_0xb8 + lVar5 * 4);
    lVar6 = (longlong)(iVar1 * 4);
    lVar2 = *(longlong *)(*(longlong *)&this->field_0xb0 + lVar5 * 8);
    *(int *)(*(longlong *)&this->field_0xb8 + lVar5 * 4) = iVar1 + 1;
    lVar4 = lVar2 + lVar6 * 8;
    *(double *)(lVar4 + 0x18) = param_6;
    *(double *)(lVar2 + lVar6 * 8) = local_res20;
    *(double *)(lVar4 + 8) = param_4;
    *(double *)(lVar4 + 0x10) = param_5;
    if (*(double *)&this->field_0xd8 <= param_6 && param_6 != *(double *)&this->field_0xd8) {
      *(double *)&this->field_0xd8 = param_6;
    }
  }
  return;
}

// put @ 1436b3840

void __thiscall
voro::container_poly::put
          (container_poly *this,int param_1,double param_2,double param_3,double param_4,
          double param_5)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double local_res18;
  double local_res20;
  int local_18 [4];
  
  local_res18 = param_2;
  local_res20 = param_3;
  bVar3 = container_base::put_remap
                    ((container_base *)this,local_18,&local_res18,&local_res20,&param_4);
  if (bVar3) {
    lVar4 = (longlong)local_18[0];
    lVar5 = *(longlong *)&this->field_0xb8;
    if (*(int *)(lVar5 + lVar4 * 4) == *(int *)(*(longlong *)&this->field_0xc0 + lVar4 * 4)) {
      container_base::add_particle_memory((container_base *)this,local_18[0]);
      lVar5 = *(longlong *)&this->field_0xb8;
    }
    *(int *)(*(longlong *)(*(longlong *)&this->field_0xa8 + lVar4 * 8) +
            (longlong)*(int *)(lVar5 + lVar4 * 4) * 4) = param_1;
    iVar1 = *(int *)(*(longlong *)&this->field_0xb8 + lVar4 * 4);
    lVar2 = *(longlong *)(*(longlong *)&this->field_0xb0 + lVar4 * 8);
    lVar6 = (longlong)(iVar1 * 4);
    *(int *)(*(longlong *)&this->field_0xb8 + lVar4 * 4) = iVar1 + 1;
    lVar5 = lVar2 + lVar6 * 8;
    *(double *)(lVar5 + 0x18) = param_5;
    *(double *)(lVar2 + lVar6 * 8) = local_res18;
    *(double *)(lVar5 + 8) = local_res20;
    *(double *)(lVar5 + 0x10) = param_4;
    if (*(double *)&this->field_0xd8 <= param_5 && param_5 != *(double *)&this->field_0xd8) {
      *(double *)&this->field_0xd8 = param_5;
    }
  }
  return;
}

// put_locate_block @ 1436b3950

bool __thiscall
voro::container_base::put_locate_block
          (container_base *this,int *param_1,double *param_2,double *param_3,double *param_4)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = put_remap(this,param_1,param_2,param_3,param_4);
  if (bVar2) {
    iVar1 = *param_1;
    if (this->co[iVar1] == this->mem[iVar1]) {
      add_particle_memory(this,iVar1);
    }
    return true;
  }
  return false;
}

// put_remap @ 1436b39c0

bool __thiscall
voro::container_base::put_remap
          (container_base *this,int *param_1,double *param_2,double *param_3,double *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  dVar4 = (*param_2 - this->ax) * (double)this->_padding_;
  iVar1 = (int)dVar4;
  iVar3 = iVar1 + -1;
  if (0.0 <= dVar4) {
    iVar3 = iVar1;
  }
  *param_1 = iVar3;
  if (this->xperiodic == false) {
    if (iVar3 < 0) {
      return false;
    }
    if ((int)this->_padding_ <= iVar3) {
      return false;
    }
  }
  else {
    iVar1 = (int)this->_padding_;
    if (iVar3 < 0) {
      iVar1 = (iVar1 - ((iVar1 - iVar3) + -1) % iVar1) + -1;
    }
    else {
      iVar1 = iVar3 % iVar1;
    }
    *param_2 = (double)(iVar1 - iVar3) * (double)this->_padding_ + *param_2;
    *param_1 = iVar1;
  }
  dVar4 = (*param_3 - this->ay) * (double)this->_padding_;
  iVar1 = (int)dVar4;
  iVar3 = iVar1 + -1;
  if (0.0 <= dVar4) {
    iVar3 = iVar1;
  }
  if (this->yperiodic == false) {
    if (iVar3 < 0) {
      return false;
    }
    if (*(int *)((longlong)&this->_padding_ + 4) <= iVar3) {
      return false;
    }
  }
  else {
    iVar1 = *(int *)((longlong)&this->_padding_ + 4);
    if (iVar3 < 0) {
      iVar1 = (iVar1 - ((iVar1 - iVar3) + -1) % iVar1) + -1;
    }
    else {
      iVar1 = iVar3 % iVar1;
    }
    *param_3 = (double)(iVar1 - iVar3) * (double)this->_padding_ + *param_3;
    iVar3 = iVar1;
  }
  dVar4 = (*param_4 - this->az) * (double)this->_padding_;
  iVar2 = (int)dVar4;
  iVar1 = iVar2 + -1;
  if (0.0 <= dVar4) {
    iVar1 = iVar2;
  }
  if (this->zperiodic == false) {
    if ((iVar1 < 0) || ((int)this->_padding_ <= iVar1)) {
      return false;
    }
  }
  else {
    iVar2 = (int)this->_padding_;
    if (iVar1 < 0) {
      iVar2 = (iVar2 - ((iVar2 - iVar1) + -1) % iVar2) + -1;
    }
    else {
      iVar2 = iVar1 % iVar2;
    }
    *param_4 = (double)(iVar2 - iVar1) * (double)this->_padding_ + *param_4;
    iVar1 = iVar2;
  }
  *param_1 = *param_1 +
             iVar1 * *(int *)((longlong)&this->_padding_ + 4) + iVar3 * (int)this->_padding_;
  return true;
}

// region_count @ 1436b3b90

void __thiscall voro::container_base::region_count(container_base *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < (int)this->_padding_) {
    do {
      iVar4 = 0;
      if (0 < *(int *)((longlong)&this->_padding_ + 4)) {
        iVar1 = (int)this->_padding_;
        do {
          iVar2 = 0;
          if (0 < iVar1) {
            do {
              printf("Region (%d,%d,%d): %d particles\n");
              iVar1 = (int)this->_padding_;
              iVar2 = iVar2 + 1;
            } while (iVar2 < iVar1);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)((longlong)&this->_padding_ + 4));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)this->_padding_);
  }
  return;
}

// sum_cell_volumes @ 1436b3c40

double __thiscall
voro::container::sum_cell_volumes(container *this,voro_compute<voro::container> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  double dVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  voronoicell_base local_e8;
  
  voronoicell_base::voronoicell_base(&local_e8);
  piVar5 = *(int **)&this->field_0xb8;
  iVar1 = *(int *)this;
  iVar2 = *(int *)&this->field_0x4;
  iVar11 = 0;
  iVar3 = *(int *)&this->field_0x10;
  iVar10 = 0;
  iVar9 = 0;
  local_e8._padding_ = (longlong)&___7voronoicell_voro__6B_;
  iVar12 = 0;
  iVar4 = *piVar5;
  do {
    dVar6 = 0.0;
    iVar13 = 0;
    if (iVar4 != 0) {
      do {
        do {
          bVar7 = voro_compute<voro::container>::compute_cell<voro::voronoicell>
                            (param_1,(voronoicell *)&local_e8,iVar11,iVar13,iVar12,iVar9,iVar10);
          if (bVar7) {
            dVar14 = voronoicell_base::volume(&local_e8);
            dVar6 = dVar6 + dVar14;
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < piVar5[iVar11]);
        iVar13 = 0;
        do {
          lVar8 = (longlong)iVar11;
          iVar12 = iVar12 + 1;
          iVar11 = iVar11 + 1;
          if (iVar12 == iVar1) {
            iVar12 = 0;
            iVar9 = iVar9 + 1;
            if (iVar9 == iVar2) {
              iVar9 = 0;
              iVar10 = iVar10 + 1;
              if (iVar11 == iVar3) goto LAB_1436b3d57;
            }
          }
        } while (piVar5[lVar8 + 1] == 0);
      } while( true );
    }
    lVar8 = (longlong)iVar11;
    iVar12 = iVar12 + 1;
    iVar11 = iVar11 + 1;
    if (iVar12 == iVar1) {
      iVar12 = 0;
      iVar9 = iVar9 + 1;
      if (iVar9 == iVar2) {
        iVar9 = 0;
        iVar10 = iVar10 + 1;
        dVar6 = 0.0;
        if (iVar11 == iVar3) {
LAB_1436b3d57:
          voronoicell_base::~voronoicell_base(&local_e8);
          return dVar6;
        }
      }
    }
    iVar4 = piVar5[lVar8 + 1];
  } while( true );
}

// sum_cell_volumes @ 1436b3d90

double __thiscall
voro::container_poly::sum_cell_volumes(container_poly *this,voro_compute<voro::container> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  double dVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  voronoicell_base local_e8;
  
  voronoicell_base::voronoicell_base(&local_e8);
  piVar5 = *(int **)&this->field_0xb8;
  iVar1 = *(int *)this;
  iVar2 = *(int *)&this->field_0x4;
  iVar11 = 0;
  iVar3 = *(int *)&this->field_0x10;
  iVar10 = 0;
  iVar9 = 0;
  local_e8._padding_ = (longlong)&___7voronoicell_voro__6B_;
  iVar12 = 0;
  iVar4 = *piVar5;
  do {
    dVar6 = 0.0;
    iVar13 = 0;
    if (iVar4 != 0) {
      do {
        do {
          bVar7 = voro_compute<voro::container>::compute_cell<voro::voronoicell>
                            (param_1,(voronoicell *)&local_e8,iVar11,iVar13,iVar12,iVar9,iVar10);
          if (bVar7) {
            dVar14 = voronoicell_base::volume(&local_e8);
            dVar6 = dVar6 + dVar14;
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < piVar5[iVar11]);
        iVar13 = 0;
        do {
          lVar8 = (longlong)iVar11;
          iVar12 = iVar12 + 1;
          iVar11 = iVar11 + 1;
          if (iVar12 == iVar1) {
            iVar12 = 0;
            iVar9 = iVar9 + 1;
            if (iVar9 == iVar2) {
              iVar9 = 0;
              iVar10 = iVar10 + 1;
              if (iVar11 == iVar3) goto LAB_1436b3ea7;
            }
          }
        } while (piVar5[lVar8 + 1] == 0);
      } while( true );
    }
    lVar8 = (longlong)iVar11;
    iVar12 = iVar12 + 1;
    iVar11 = iVar11 + 1;
    if (iVar12 == iVar1) {
      iVar12 = 0;
      iVar9 = iVar9 + 1;
      if (iVar9 == iVar2) {
        iVar9 = 0;
        iVar10 = iVar10 + 1;
        dVar6 = 0.0;
        if (iVar11 == iVar3) {
LAB_1436b3ea7:
          voronoicell_base::~voronoicell_base(&local_e8);
          return dVar6;
        }
      }
    }
    iVar4 = piVar5[lVar8 + 1];
  } while( true );
}

