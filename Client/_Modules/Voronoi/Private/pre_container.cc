// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Voronoi
// Functions: 12

// pre_container_base @ 1436b49d0

pre_container_base * __thiscall
voro::pre_container_base::pre_container_base
          (pre_container_base *this,double param_1,double param_2,double param_3,double param_4,
          double param_5,double param_6,bool param_7,bool param_8,bool param_9,int param_10)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int **ppiVar3;
  ulong64 uVar4;
  double **ppdVar5;
  int *piVar6;
  double *pdVar7;
  
  this->xperiodic = param_7;
  this->yperiodic = param_8;
  this->ax = param_1;
  this->by = param_4;
  this->zperiodic = param_9;
  this->ps = param_10;
  this->bx = param_2;
  this->ay = param_3;
  this->az = param_5;
  this->bz = param_6;
  this->index_sz = 0x100;
  ppiVar3 = operator_new__(0x800);
  this->pre_id = ppiVar3;
  this->end_id = ppiVar3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)this->index_sz;
  uVar4 = SUB168(ZEXT816(8) * auVar1,0);
  if (SUB168(ZEXT816(8) * auVar1,8) != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  ppdVar5 = operator_new__(uVar4);
  this->pre_p = ppdVar5;
  this->end_p = ppdVar5;
  piVar6 = operator_new__(0x1000);
  *this->end_id = piVar6;
  this->ch_id = piVar6;
  this->l_id = this->end_id + this->index_sz;
  this->e_id = piVar6 + 0x400;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)(this->ps << 10);
  uVar4 = SUB168(ZEXT816(8) * auVar2,0);
  if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  pdVar7 = operator_new__(uVar4);
  *this->end_p = pdVar7;
  this->ch_p = pdVar7;
  return this;
}

// ~pre_container_base @ 1436b4ae0

void __thiscall voro::pre_container_base::~pre_container_base(pre_container_base *this)

{
  operator_delete__(*this->end_p);
  operator_delete__(*this->end_id);
  if (this->end_id != this->pre_id) {
    do {
      this->end_p = this->end_p + -1;
      operator_delete__(*this->end_p);
      this->end_id = this->end_id + -1;
      operator_delete__(*this->end_id);
    } while (this->end_id != this->pre_id);
  }
  operator_delete__(this->pre_p);
  operator_delete__(this->pre_id);
  return;
}

// extend_chunk_index @ 1436b4b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall voro::pre_container_base::extend_chunk_index(pre_container_base *this)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  ulong64 uVar5;
  int **ppiVar6;
  double **ppdVar7;
  double **ppdVar8;
  int **ppiVar9;
  int **ppiVar10;
  double **ppdVar11;
  undefined1 auStack_178 [32];
  wchar_t *local_158;
  undefined4 local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  this->index_sz = this->index_sz << 1;
  if (0x10000 < this->index_sz) {
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"Absolute memory limit on chunk index reached",0x2c,Yes);
    local_150 = 2;
    local_158 = local_148.Ptr;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Voronoi\\Private\\voro++\\src\\common.hh"
                       ,0x20,L"voro++ failure: %s (status code: %d)");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)this->index_sz;
  uVar5 = SUB168(ZEXT816(8) * auVar2,0);
  if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  ppiVar6 = operator_new__(uVar5);
  ppiVar10 = this->pre_id;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (longlong)this->index_sz;
  uVar5 = SUB168(ZEXT816(8) * auVar3,0);
  if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  ppdVar7 = operator_new__(uVar5);
  ppdVar8 = this->pre_p;
  ppiVar9 = ppiVar6;
  ppdVar11 = ppdVar7;
  if (ppiVar10 < this->end_id) {
    do {
      *ppiVar9 = *ppiVar10;
      ppiVar10 = ppiVar10 + 1;
      ppiVar9 = ppiVar9 + 1;
      *ppdVar11 = *ppdVar8;
      ppdVar11 = ppdVar11 + 1;
      ppdVar8 = ppdVar8 + 1;
    } while (ppiVar10 < this->end_id);
  }
  operator_delete__(this->pre_id);
  this->pre_id = ppiVar6;
  this->end_id = ppiVar9;
  this->l_id = ppiVar6 + this->index_sz;
  operator_delete__(this->pre_p);
  this->pre_p = ppdVar7;
  this->end_p = ppdVar11;
  return;
}

// guess_optimal @ 1436b4d00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
voro::pre_container_base::guess_optimal
          (pre_container_base *this,int *param_1,int *param_2,int *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = this->bx - this->ax;
  dVar2 = this->by - this->ay;
  dVar3 = this->bz - this->az;
  dVar5 = pow((double)((int)((longlong)this->end_id - (longlong)this->pre_id >> 3) * 0x400 +
                      (int)((longlong)this->ch_id - (longlong)*this->end_id >> 2)) /
              (dVar3 * dVar2 * dVar1 * ___real_4016666666666666),__real_3fd5555555555555);
  dVar4 = __real_3ff0000000000000;
  *param_1 = (int)(dVar5 * dVar1 + __real_3ff0000000000000);
  *param_2 = (int)(dVar5 * dVar2 + dVar4);
  *param_3 = (int)(dVar5 * dVar3 + dVar4);
  return;
}

// guess_optimal @ 1436b4e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
voro::guess_optimal(int param_1,double param_2,double param_3,double param_4,int *param_5,
                   int *param_6,int *param_7)

{
  double dVar1;
  double dVar2;
  
  dVar2 = pow((double)param_1 / (param_3 * param_4 * param_2 * ___real_4016666666666666),
              __real_3fd5555555555555);
  dVar1 = __real_3ff0000000000000;
  *param_5 = (int)(dVar2 * param_2 + __real_3ff0000000000000);
  *param_6 = (int)(dVar2 * param_3 + dVar1);
  *param_7 = (int)(dVar2 * param_4 + dVar1);
  return;
}

// new_chunk @ 1436b4ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall voro::pre_container_base::new_chunk(pre_container_base *this)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  ulong64 uVar6;
  int **ppiVar7;
  double **ppdVar8;
  int *piVar9;
  double *pdVar10;
  double **ppdVar11;
  int **ppiVar12;
  int **ppiVar13;
  double **ppdVar14;
  undefined1 auStack_188 [32];
  wchar_t *local_168;
  undefined4 local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  ppiVar13 = this->end_id;
  this->end_p = this->end_p + 1;
  this->end_id = ppiVar13 + 1;
  if (ppiVar13 + 1 == this->l_id) {
    this->index_sz = this->index_sz << 1;
    if (0x10000 < this->index_sz) {
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"Absolute memory limit on chunk index reached",0x2c,Yes);
      local_160 = 2;
      local_168 = local_158.Ptr;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Voronoi\\Private\\voro++\\src\\common.hh"
                         ,0x20,L"voro++ failure: %s (status code: %d)");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (longlong)this->index_sz;
    uVar6 = SUB168(ZEXT816(8) * auVar2,0);
    if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
      uVar6 = 0xffffffffffffffff;
    }
    ppiVar7 = operator_new__(uVar6);
    ppiVar13 = this->pre_id;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (longlong)this->index_sz;
    uVar6 = SUB168(ZEXT816(8) * auVar3,0);
    if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
      uVar6 = 0xffffffffffffffff;
    }
    ppdVar8 = operator_new__(uVar6);
    ppdVar11 = this->pre_p;
    ppiVar12 = ppiVar7;
    ppdVar14 = ppdVar8;
    if (ppiVar13 < this->end_id) {
      do {
        *ppiVar12 = *ppiVar13;
        ppiVar13 = ppiVar13 + 1;
        ppiVar12 = ppiVar12 + 1;
        *ppdVar14 = *ppdVar11;
        ppdVar14 = ppdVar14 + 1;
        ppdVar11 = ppdVar11 + 1;
      } while (ppiVar13 < this->end_id);
    }
    operator_delete__(this->pre_id);
    this->pre_id = ppiVar7;
    this->end_id = ppiVar12;
    this->l_id = ppiVar7 + this->index_sz;
    operator_delete__(this->pre_p);
    this->pre_p = ppdVar8;
    this->end_p = ppdVar14;
  }
  piVar9 = operator_new__(0x1000);
  *this->end_id = piVar9;
  this->e_id = piVar9 + 0x400;
  this->ch_id = piVar9;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (longlong)(this->ps << 10);
  uVar6 = SUB168(ZEXT816(8) * auVar4,0);
  if (SUB168(ZEXT816(8) * auVar4,8) != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  pdVar10 = operator_new__(uVar6);
  *this->end_p = pdVar10;
  this->ch_p = pdVar10;
  return;
}

// put @ 1436b50e0

void __thiscall
voro::pre_container::put
          (pre_container *this,int param_1,double param_2,double param_3,double param_4)

{
  if ((((this->field_0x30 != '\0') ||
       ((*(double *)this <= param_2 &&
        (param_2 < *(double *)&this->field_0x8 || param_2 == *(double *)&this->field_0x8)))) &&
      ((this->field_0x31 != '\0' ||
       ((*(double *)&this->field_0x10 <= param_3 &&
        (param_3 < *(double *)&this->field_0x18 || param_3 == *(double *)&this->field_0x18)))))) &&
     ((this->field_0x32 != '\0' ||
      ((*(double *)&this->field_0x20 <= param_4 &&
       (param_4 < *(double *)&this->field_0x28 || param_4 == *(double *)&this->field_0x28)))))) {
    if (*(longlong *)&this->field_0x58 == *(longlong *)&this->field_0x60) {
      pre_container_base::new_chunk((pre_container_base *)this);
    }
    **(int **)&this->field_0x58 = param_1;
    *(longlong *)&this->field_0x58 = *(longlong *)&this->field_0x58 + 4;
    **(double **)&this->field_0x78 = param_2;
    *(longlong *)&this->field_0x78 = *(longlong *)&this->field_0x78 + 8;
    **(double **)&this->field_0x78 = param_3;
    *(longlong *)&this->field_0x78 = *(longlong *)&this->field_0x78 + 8;
    **(double **)&this->field_0x78 = param_4;
    *(longlong *)&this->field_0x78 = *(longlong *)&this->field_0x78 + 8;
  }
  return;
}

// put @ 1436b51c0

void __thiscall
voro::pre_container_poly::put
          (pre_container_poly *this,int param_1,double param_2,double param_3,double param_4,
          double param_5)

{
  if ((((this->field_0x30 != '\0') ||
       ((*(double *)this <= param_2 &&
        (param_2 < *(double *)&this->field_0x8 || param_2 == *(double *)&this->field_0x8)))) &&
      ((this->field_0x31 != '\0' ||
       ((*(double *)&this->field_0x10 <= param_3 &&
        (param_3 < *(double *)&this->field_0x18 || param_3 == *(double *)&this->field_0x18)))))) &&
     ((this->field_0x32 != '\0' ||
      ((*(double *)&this->field_0x20 <= param_4 &&
       (param_4 < *(double *)&this->field_0x28 || param_4 == *(double *)&this->field_0x28)))))) {
    if (*(longlong *)&this->field_0x58 == *(longlong *)&this->field_0x60) {
      pre_container_base::new_chunk((pre_container_base *)this);
    }
    **(int **)&this->field_0x58 = param_1;
    *(longlong *)&this->field_0x58 = *(longlong *)&this->field_0x58 + 4;
    **(double **)&this->field_0x78 = param_2;
    *(longlong *)&this->field_0x78 = *(longlong *)&this->field_0x78 + 8;
    **(double **)&this->field_0x78 = param_3;
    *(longlong *)&this->field_0x78 = *(longlong *)&this->field_0x78 + 8;
    **(double **)&this->field_0x78 = param_4;
    *(longlong *)&this->field_0x78 = *(longlong *)&this->field_0x78 + 8;
    **(double **)&this->field_0x78 = param_5;
    *(longlong *)&this->field_0x78 = *(longlong *)&this->field_0x78 + 8;
  }
  return;
}

// setup @ 1436b52b0

void __thiscall voro::pre_container::setup(pre_container *this,container *param_1)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  int iVar4;
  double *pdVar5;
  undefined8 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined8 *puVar9;
  
  puVar6 = *(undefined8 **)&this->field_0x40;
  puVar9 = *(undefined8 **)&this->field_0x68;
  if (puVar6 < *(undefined8 **)&this->field_0x48) {
    do {
      piVar7 = (int *)*puVar6;
      puVar6 = puVar6 + 1;
      pdVar5 = (double *)*puVar9;
      puVar9 = puVar9 + 1;
      piVar8 = piVar7 + 0x400;
      for (; piVar7 < piVar8; piVar7 = piVar7 + 1) {
        pdVar1 = pdVar5 + 2;
        dVar3 = *pdVar5;
        pdVar2 = pdVar5 + 1;
        pdVar5 = pdVar5 + 3;
        container::put(param_1,*piVar7,dVar3,*pdVar2,*pdVar1);
      }
    } while (puVar6 < *(undefined8 **)&this->field_0x48);
  }
  piVar8 = (int *)*puVar6;
  pdVar5 = (double *)*puVar9;
  if (piVar8 < *(int **)&this->field_0x58) {
    do {
      pdVar1 = pdVar5 + 2;
      iVar4 = *piVar8;
      dVar3 = *pdVar5;
      piVar8 = piVar8 + 1;
      pdVar2 = pdVar5 + 1;
      pdVar5 = pdVar5 + 3;
      container::put(param_1,iVar4,dVar3,*pdVar2,*pdVar1);
    } while (piVar8 < *(int **)&this->field_0x58);
  }
  return;
}

// setup @ 1436b53a0

void __thiscall
voro::pre_container::setup(pre_container *this,particle_order *param_1,container *param_2)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  int iVar4;
  double *pdVar5;
  undefined8 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined8 *puVar9;
  
  puVar6 = *(undefined8 **)&this->field_0x40;
  puVar9 = *(undefined8 **)&this->field_0x68;
  if (puVar6 < *(undefined8 **)&this->field_0x48) {
    do {
      piVar7 = (int *)*puVar6;
      puVar6 = puVar6 + 1;
      pdVar5 = (double *)*puVar9;
      puVar9 = puVar9 + 1;
      piVar8 = piVar7 + 0x400;
      for (; piVar7 < piVar8; piVar7 = piVar7 + 1) {
        pdVar1 = pdVar5 + 1;
        pdVar2 = pdVar5 + 2;
        dVar3 = *pdVar5;
        pdVar5 = pdVar5 + 3;
        container::put(param_2,param_1,*piVar7,dVar3,*pdVar1,*pdVar2);
      }
    } while (puVar6 < *(undefined8 **)&this->field_0x48);
  }
  piVar8 = (int *)*puVar6;
  pdVar5 = (double *)*puVar9;
  if (piVar8 < *(int **)&this->field_0x58) {
    do {
      pdVar1 = pdVar5 + 1;
      pdVar2 = pdVar5 + 2;
      iVar4 = *piVar8;
      dVar3 = *pdVar5;
      pdVar5 = pdVar5 + 3;
      piVar8 = piVar8 + 1;
      container::put(param_2,param_1,iVar4,dVar3,*pdVar1,*pdVar2);
    } while (piVar8 < *(int **)&this->field_0x58);
  }
  return;
}

// setup @ 1436b54b0

void __thiscall voro::pre_container_poly::setup(pre_container_poly *this,container_poly *param_1)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  int iVar5;
  double *pdVar6;
  undefined8 *puVar7;
  int *piVar8;
  int *piVar9;
  undefined8 *puVar10;
  
  puVar7 = *(undefined8 **)&this->field_0x40;
  puVar10 = *(undefined8 **)&this->field_0x68;
  if (puVar7 < *(undefined8 **)&this->field_0x48) {
    do {
      piVar8 = (int *)*puVar7;
      puVar7 = puVar7 + 1;
      pdVar6 = (double *)*puVar10;
      puVar10 = puVar10 + 1;
      piVar9 = piVar8 + 0x400;
      for (; piVar8 < piVar9; piVar8 = piVar8 + 1) {
        pdVar1 = pdVar6 + 2;
        pdVar2 = pdVar6 + 3;
        dVar4 = *pdVar6;
        pdVar3 = pdVar6 + 1;
        pdVar6 = pdVar6 + 4;
        container_poly::put(param_1,*piVar8,dVar4,*pdVar3,*pdVar1,*pdVar2);
      }
    } while (puVar7 < *(undefined8 **)&this->field_0x48);
  }
  piVar9 = (int *)*puVar7;
  pdVar6 = (double *)*puVar10;
  if (piVar9 < *(int **)&this->field_0x58) {
    do {
      pdVar1 = pdVar6 + 2;
      pdVar2 = pdVar6 + 3;
      iVar5 = *piVar9;
      piVar9 = piVar9 + 1;
      dVar4 = *pdVar6;
      pdVar3 = pdVar6 + 1;
      pdVar6 = pdVar6 + 4;
      container_poly::put(param_1,iVar5,dVar4,*pdVar3,*pdVar1,*pdVar2);
    } while (piVar9 < *(int **)&this->field_0x58);
  }
  return;
}

// setup @ 1436b55b0

void __thiscall
voro::pre_container_poly::setup
          (pre_container_poly *this,particle_order *param_1,container_poly *param_2)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  int iVar4;
  double *pdVar5;
  double *pdVar6;
  undefined8 *puVar7;
  int *piVar8;
  int *piVar9;
  undefined8 *puVar10;
  
  puVar7 = *(undefined8 **)&this->field_0x40;
  puVar10 = *(undefined8 **)&this->field_0x68;
  if (puVar7 < *(undefined8 **)&this->field_0x48) {
    do {
      piVar8 = (int *)*puVar7;
      puVar7 = puVar7 + 1;
      pdVar6 = (double *)*puVar10;
      puVar10 = puVar10 + 1;
      piVar9 = piVar8 + 0x400;
      for (; piVar8 < piVar9; piVar8 = piVar8 + 1) {
        pdVar1 = pdVar6 + 1;
        pdVar5 = pdVar6 + 2;
        pdVar2 = pdVar6 + 3;
        dVar3 = *pdVar6;
        pdVar6 = pdVar6 + 4;
        container_poly::put(param_2,param_1,*piVar8,dVar3,*pdVar1,*pdVar5,*pdVar2);
      }
    } while (puVar7 < *(undefined8 **)&this->field_0x48);
  }
  piVar9 = (int *)*puVar7;
  pdVar6 = (double *)*puVar10;
  if (piVar9 < *(int **)&this->field_0x58) {
    do {
      pdVar1 = pdVar6 + 1;
      pdVar5 = pdVar6 + 2;
      pdVar2 = pdVar6 + 3;
      iVar4 = *piVar9;
      dVar3 = *pdVar6;
      pdVar6 = pdVar6 + 4;
      piVar9 = piVar9 + 1;
      container_poly::put(param_2,param_1,iVar4,dVar3,*pdVar1,*pdVar5,*pdVar2);
    } while (piVar9 < *(int **)&this->field_0x58);
  }
  return;
}

