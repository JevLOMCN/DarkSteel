// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Voronoi
// Functions: 75

// _Copy_memmove<double_*,double_*> @ 1436a3a40

double * __cdecl
std::_Copy_memmove<double_*,double_*>(double *param_1,double *param_2,double *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (double *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove_tail<double_*> @ 1436a3a80

double * __cdecl
std::_Copy_memmove_tail<double_*>(char *param_1,double *param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (double *)((longlong)param_2 + param_3);
}

// _Fill_zero_memset<int_*> @ 1436a3ab0

void __cdecl std::_Fill_zero_memset<int_*>(int *param_1,ulong64 param_2)

{
  memset(param_1,0,param_2 * 4);
  return;
}

// _Is_all_bits_zero<int> @ 1436a3ad0

bool __cdecl std::_Is_all_bits_zero<int>(int *param_1)

{
  return *param_1 == 0;
}

// add_memory<voro::voronoicell> @ 1436a3ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
voro::voronoicell_base::add_memory<voro::voronoicell>
          (voronoicell_base *this,voronoicell *param_1,int param_2,int *param_3)

{
  int iVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  ulong64 uVar6;
  int *piVar7;
  int *piVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStack_1a8 [32];
  wchar_t *local_188;
  undefined4 local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  uVar13 = param_2 * 2 + 1;
  lVar12 = (longlong)param_2;
  iVar11 = this->mem[lVar12];
  if (iVar11 == 0) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (longlong)(int)(uVar13 * 8);
    uVar6 = SUB168(ZEXT816(4) * auVar3,0);
    if (SUB168(ZEXT816(4) * auVar3,8) != 0) {
      uVar6 = 0xffffffffffffffff;
    }
    piVar7 = operator_new__(uVar6);
    this->mep[lVar12] = piVar7;
    this->mem[lVar12] = 8;
  }
  else {
    this->mem[lVar12] = iVar11 * 2;
    iVar11 = 0;
    if (0x1000000 < this->mem[lVar12]) {
      voro_fatal_error("Point memory allocation exceeded absolute maximum",2);
    }
    if (((this->mem[lVar12] < 2) || ((int)uVar13 < 2)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("mem[i] > 1 && s > 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Voronoi\\Private\\voro++\\src\\cell.cc"
                           ,0x94,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (longlong)(int)(uVar13 * this->mem[lVar12]);
    uVar6 = SUB168(ZEXT816(4) * auVar4,0);
    if (SUB168(ZEXT816(4) * auVar4,8) != 0) {
      uVar6 = 0xffffffffffffffff;
    }
    piVar7 = operator_new__(uVar6);
    if (0 < (int)(uVar13 * this->mec[lVar12])) {
      lVar10 = 0;
      do {
        iVar1 = this->mep[lVar12][lVar10 + lVar12 * 2];
        if (iVar1 < 0) {
          piVar8 = this->ds2;
          if (piVar8 < param_3) {
            do {
              if (this->ed[*piVar8] == this->mep[lVar12] + iVar11) {
                this->ed[*piVar8] = piVar7 + iVar11;
                break;
              }
              piVar8 = piVar8 + 1;
            } while (piVar8 < param_3);
          }
          if (piVar8 == param_3) {
            local_168._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,"Couldn\'t relocate dangling pointer",0x22,Yes);
            local_180 = 3;
            local_188 = local_168.Ptr;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Voronoi\\Private\\voro++\\src\\common.hh"
                               ,0x20,L"voro++ failure: %s (status code: %d)");
            if ((void *)local_168._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_168._padding_);
            }
            if (bVar5) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
        else {
          this->ed[iVar1] = piVar7 + iVar11;
        }
        if (0 < (int)uVar13) {
          uVar9 = (ulonglong)uVar13;
          iVar11 = iVar11 + uVar13;
          do {
            piVar7[lVar10] = this->mep[lVar12][lVar10];
            lVar10 = lVar10 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      } while (iVar11 < (int)(uVar13 * this->mec[lVar12]));
    }
    operator_delete__(this->mep[lVar12]);
    this->mep[lVar12] = piVar7;
  }
  return;
}

// add_memory<voro::voronoicell_neighbor> @ 1436a3db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
voro::voronoicell_base::add_memory<voro::voronoicell_neighbor>
          (voronoicell_base *this,voronoicell_neighbor *param_1,int param_2,int *param_3)

{
  int iVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  ulong64 uVar8;
  int *piVar9;
  int *piVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 auStack_1b8 [32];
  wchar_t *local_198;
  undefined4 local_190;
  int local_188;
  uint local_184;
  uint local_180;
  longlong local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  lVar13 = (longlong)param_2;
  iVar1 = this->mem[lVar13];
  uVar17 = param_2 * 2 + 1;
  local_180 = param_2;
  local_178 = lVar13;
  if (iVar1 == 0) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (longlong)(param_2 * 8);
    uVar8 = SUB168(ZEXT816(4) * auVar3,0);
    if (SUB168(ZEXT816(4) * auVar3,8) != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    piVar9 = operator_new__(uVar8);
    param_1->mne[lVar13] = piVar9;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (longlong)(int)(uVar17 * 8);
    uVar8 = SUB168(ZEXT816(4) * auVar4,0);
    if (SUB168(ZEXT816(4) * auVar4,8) != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    piVar9 = operator_new__(uVar8);
    this->mep[lVar13] = piVar9;
    this->mem[lVar13] = 8;
  }
  else {
    this->mem[lVar13] = iVar1 * 2;
    local_184 = 0;
    if (0x1000000 < this->mem[lVar13]) {
      voro_fatal_error("Point memory allocation exceeded absolute maximum",2);
    }
    if (((this->mem[lVar13] < 2) || ((int)uVar17 < 2)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("mem[i] > 1 && s > 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Voronoi\\Private\\voro++\\src\\cell.cc"
                           ,0x94,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (longlong)(int)(uVar17 * this->mem[lVar13]);
    uVar8 = SUB168(ZEXT816(4) * auVar5,0);
    if (SUB168(ZEXT816(4) * auVar5,8) != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    piVar9 = operator_new__(uVar8);
    local_188 = 0;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (longlong)(param_2 * *(int *)(param_1->_padding_ + lVar13 * 4));
    uVar8 = SUB168(ZEXT816(4) * auVar6,0);
    if (SUB168(ZEXT816(4) * auVar6,8) != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    piVar10 = operator_new__(uVar8);
    param_1->paux1 = piVar10;
    if (0 < (int)(uVar17 * this->mec[lVar13])) {
      uVar14 = 0;
      lVar18 = 0;
      uVar16 = uVar14;
      do {
        iVar1 = this->mep[lVar13][uVar14 + lVar13 * 2];
        iVar15 = (int)uVar16;
        if (iVar1 < 0) {
          piVar10 = this->ds2;
          if (piVar10 < param_3) {
            do {
              if (this->ed[*piVar10] == this->mep[lVar13] + iVar15) {
                this->ed[*piVar10] = piVar9 + iVar15;
                param_1->ne[*piVar10] = param_1->paux1 + local_188;
                break;
              }
              piVar10 = piVar10 + 1;
            } while (piVar10 < param_3);
          }
          if (piVar10 == param_3) {
            local_168._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,"Couldn\'t relocate dangling pointer",0x22,Yes);
            local_190 = 3;
            local_198 = local_168.Ptr;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Voronoi\\Private\\voro++\\src\\common.hh"
                               ,0x20,L"voro++ failure: %s (status code: %d)");
            if ((void *)local_168._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_168._padding_);
            }
            lVar13 = local_178;
            if (bVar7) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          uVar16 = (ulonglong)local_184;
        }
        else {
          this->ed[iVar1] = piVar9 + iVar15;
          param_1->ne[iVar1] = param_1->paux1 + local_188;
        }
        if (0 < (int)uVar17) {
          local_184 = (int)uVar16 + uVar17;
          uVar16 = (ulonglong)local_184;
          uVar11 = (ulonglong)uVar17;
          do {
            piVar9[uVar14] = this->mep[lVar13][uVar14];
            uVar14 = uVar14 + 1;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        if (0 < (int)local_180) {
          local_188 = local_188 + local_180;
          uVar11 = (ulonglong)local_180;
          lVar12 = lVar18 * 4;
          do {
            param_1->paux1[lVar18] = *(int *)(lVar12 + (longlong)param_1->mne[lVar13]);
            lVar18 = lVar18 + 1;
            uVar11 = uVar11 - 1;
            lVar12 = lVar12 + 4;
          } while (uVar11 != 0);
        }
      } while ((int)uVar16 < (int)(uVar17 * this->mec[lVar13]));
    }
    operator_delete__(this->mep[lVar13]);
    this->mep[lVar13] = piVar9;
    operator_delete__(param_1->mne[lVar13]);
    param_1->mne[lVar13] = param_1->paux1;
  }
  return;
}

// add_memory_vertices<voro::voronoicell> @ 1436a4180

void __thiscall
voro::voronoicell_base::add_memory_vertices<voro::voronoicell>
          (voronoicell_base *this,voronoicell *param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  ulong64 uVar6;
  int **ppiVar7;
  int *piVar8;
  double *pdVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  iVar1 = this->current_vertices;
  iVar5 = iVar1 * 2;
  if (0x1000000 < iVar5) {
    voro_fatal_error("Vertex memory allocation exceeded absolute maximum",2);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)iVar5;
  uVar6 = SUB168(ZEXT816(8) * auVar2,0);
  if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  ppiVar7 = operator_new__(uVar6);
  uVar11 = 0;
  uVar10 = uVar11;
  uVar13 = uVar11;
  if (0 < this->current_vertices) {
    do {
      uVar12 = (int)uVar13 + 1;
      *(undefined8 *)(uVar10 + (longlong)ppiVar7) = *(undefined8 *)(uVar10 + (longlong)this->ed);
      uVar10 = uVar10 + 8;
      uVar13 = (ulonglong)uVar12;
    } while ((int)uVar12 < this->current_vertices);
  }
  operator_delete__(this->ed);
  this->ed = ppiVar7;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (longlong)iVar5;
  uVar6 = SUB168(ZEXT816(4) * auVar3,0);
  if (SUB168(ZEXT816(4) * auVar3,8) != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  piVar8 = operator_new__(uVar6);
  uVar10 = uVar11;
  uVar13 = uVar11;
  if (0 < this->current_vertices) {
    do {
      uVar12 = (int)uVar13 + 1;
      *(undefined4 *)(uVar10 + (longlong)piVar8) = *(undefined4 *)(uVar10 + (longlong)this->nu);
      uVar10 = uVar10 + 4;
      uVar13 = (ulonglong)uVar12;
    } while ((int)uVar12 < this->current_vertices);
  }
  operator_delete__(this->nu);
  this->nu = piVar8;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (longlong)(iVar1 * 6);
  uVar6 = SUB168(ZEXT816(8) * auVar4,0);
  if (SUB168(ZEXT816(8) * auVar4,8) != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  pdVar9 = operator_new__(uVar6);
  uVar10 = uVar11;
  if (0 < this->current_vertices * 3) {
    do {
      uVar12 = (int)uVar10 + 1;
      *(undefined8 *)(uVar11 + (longlong)pdVar9) = *(undefined8 *)(uVar11 + (longlong)this->pts);
      uVar11 = uVar11 + 8;
      uVar10 = (ulonglong)uVar12;
    } while ((int)uVar12 < this->current_vertices * 3);
  }
  operator_delete__(this->pts);
  this->pts = pdVar9;
  this->current_vertices = iVar5;
  return;
}

// add_memory_vertices<voro::voronoicell_neighbor> @ 1436a42e0

void __thiscall
voro::voronoicell_base::add_memory_vertices<voro::voronoicell_neighbor>
          (voronoicell_base *this,voronoicell_neighbor *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  bool bVar8;
  ulong64 uVar9;
  int **ppiVar10;
  int *piVar11;
  double *pdVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  iVar1 = this->current_vertices;
  iVar7 = iVar1 * 2;
  if (0x1000000 < iVar7) {
    voro_fatal_error("Vertex memory allocation exceeded absolute maximum",2);
  }
  uVar17 = (ulonglong)iVar7;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar17;
  uVar9 = SUB168(ZEXT816(8) * auVar3,0);
  if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
    uVar9 = 0xffffffffffffffff;
  }
  ppiVar10 = operator_new__(uVar9);
  uVar14 = 0;
  uVar13 = uVar14;
  uVar16 = uVar14;
  if (0 < this->current_vertices) {
    do {
      uVar15 = (int)uVar16 + 1;
      *(undefined8 *)(uVar13 + (longlong)ppiVar10) = *(undefined8 *)(uVar13 + (longlong)this->ed);
      uVar13 = uVar13 + 8;
      uVar16 = (ulonglong)uVar15;
    } while ((int)uVar15 < this->current_vertices);
  }
  operator_delete__(this->ed);
  this->ed = ppiVar10;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar17;
  uVar9 = SUB168(ZEXT816(8) * auVar4,0);
  if (SUB168(ZEXT816(8) * auVar4,8) != 0) {
    uVar9 = 0xffffffffffffffff;
  }
  ppiVar10 = operator_new__(uVar9);
  if ((iVar7 < (int)param_1->_padding_) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("current_vertices <= i",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Voronoi\\Private\\voro++\\src\\cell.hh"
                         ,0x194,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar13 = uVar14;
  uVar16 = uVar14;
  if (0 < (int)param_1->_padding_) {
    do {
      uVar15 = (int)uVar16 + 1;
      *(undefined8 *)(uVar13 + (longlong)ppiVar10) = *(undefined8 *)(uVar13 + (longlong)param_1->ne)
      ;
      uVar13 = uVar13 + 8;
      uVar16 = (ulonglong)uVar15;
    } while ((int)uVar15 < (int)param_1->_padding_);
  }
  operator_delete__(param_1->ne);
  param_1->ne = ppiVar10;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar17;
  uVar9 = SUB168(ZEXT816(4) * auVar5,0);
  if (SUB168(ZEXT816(4) * auVar5,8) != 0) {
    uVar9 = 0xffffffffffffffff;
  }
  piVar11 = operator_new__(uVar9);
  uVar17 = uVar14;
  uVar13 = uVar14;
  if (0 < this->current_vertices) {
    do {
      uVar15 = (int)uVar13 + 1;
      *(undefined4 *)(uVar17 + (longlong)piVar11) = *(undefined4 *)(uVar17 + (longlong)this->nu);
      uVar17 = uVar17 + 4;
      uVar13 = (ulonglong)uVar15;
    } while ((int)uVar15 < this->current_vertices);
  }
  operator_delete__(this->nu);
  this->nu = piVar11;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (longlong)(iVar1 * 6);
  uVar9 = SUB168(ZEXT816(8) * auVar6,0);
  if (SUB168(ZEXT816(8) * auVar6,8) != 0) {
    uVar9 = 0xffffffffffffffff;
  }
  pdVar12 = operator_new__(uVar9);
  uVar17 = uVar14;
  if (0 < this->current_vertices * 3) {
    do {
      uVar15 = (int)uVar17 + 1;
      *(undefined8 *)(uVar14 + (longlong)pdVar12) = *(undefined8 *)(uVar14 + (longlong)this->pts);
      uVar14 = uVar14 + 8;
      uVar17 = (ulonglong)uVar15;
    } while ((int)uVar15 < this->current_vertices * 3);
  }
  operator_delete__(this->pts);
  this->pts = pdVar12;
  this->current_vertices = iVar7;
  return;
}

// add_memory_vorder<voro::voronoicell> @ 1436a44f0

void __thiscall
voro::voronoicell_base::add_memory_vorder<voro::voronoicell>
          (voronoicell_base *this,voronoicell *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  ulong64 uVar5;
  int *piVar6;
  int **ppiVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  iVar4 = this->current_vertex_order * 2;
  if (0x1000000 < iVar4) {
    voro_fatal_error("Vertex order memory allocation exceeded absolute maximum",2);
  }
  uVar13 = (ulonglong)iVar4;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar13;
  uVar5 = SUB168(ZEXT816(4) * auVar1,0);
  if (SUB168(ZEXT816(4) * auVar1,8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  piVar6 = operator_new__(uVar5);
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = uVar10;
  uVar11 = uVar10;
  uVar12 = uVar9;
  if (0 < this->current_vertex_order) {
    do {
      uVar12 = (int)uVar11 + 1;
      *(undefined4 *)(uVar8 + (longlong)piVar6) = *(undefined4 *)(uVar8 + (longlong)this->mem);
      uVar8 = uVar8 + 4;
      uVar11 = (ulonglong)uVar12;
    } while ((int)uVar12 < this->current_vertex_order);
  }
  if ((int)uVar12 < iVar4) {
    memset(piVar6 + (int)uVar12,0,(longlong)(int)(iVar4 - uVar12) << 2);
  }
  operator_delete__(this->mem);
  this->mem = piVar6;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar13;
  uVar5 = SUB168(ZEXT816(8) * auVar2,0);
  if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  ppiVar7 = operator_new__(uVar5);
  uVar8 = uVar10;
  uVar11 = uVar10;
  if (0 < this->current_vertex_order) {
    do {
      uVar12 = (int)uVar11 + 1;
      *(undefined8 *)(uVar8 + (longlong)ppiVar7) = *(undefined8 *)(uVar8 + (longlong)this->mep);
      uVar8 = uVar8 + 8;
      uVar11 = (ulonglong)uVar12;
    } while ((int)uVar12 < this->current_vertex_order);
  }
  operator_delete__(this->mep);
  this->mep = ppiVar7;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar13;
  uVar5 = SUB168(ZEXT816(4) * auVar3,0);
  if (SUB168(ZEXT816(4) * auVar3,8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  piVar6 = operator_new__(uVar5);
  uVar13 = uVar10;
  if (0 < this->current_vertex_order) {
    do {
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      *(undefined4 *)(uVar13 + (longlong)piVar6) = *(undefined4 *)(uVar13 + (longlong)this->mec);
      uVar13 = uVar13 + 4;
    } while ((int)uVar9 < this->current_vertex_order);
  }
  if ((int)uVar9 < iVar4) {
    memset(piVar6 + (int)uVar9,0,(longlong)(int)(iVar4 - uVar9) << 2);
  }
  operator_delete__(this->mec);
  this->mec = piVar6;
  this->current_vertex_order = iVar4;
  return;
}

// add_memory_vorder<voro::voronoicell_neighbor> @ 1436a4690

void __thiscall
voro::voronoicell_base::add_memory_vorder<voro::voronoicell_neighbor>
          (voronoicell_base *this,voronoicell_neighbor *param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  bool bVar7;
  ulong64 uVar8;
  int *piVar9;
  int **ppiVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  
  iVar6 = this->current_vertex_order * 2;
  if (0x1000000 < iVar6) {
    voro_fatal_error("Vertex order memory allocation exceeded absolute maximum",2);
  }
  uVar15 = (ulonglong)iVar6;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar15;
  uVar8 = SUB168(ZEXT816(4) * auVar2,0);
  if (SUB168(ZEXT816(4) * auVar2,8) != 0) {
    uVar8 = 0xffffffffffffffff;
  }
  piVar9 = operator_new__(uVar8);
  uVar12 = 0;
  uVar14 = 0;
  uVar11 = uVar12;
  uVar13 = uVar12;
  if (0 < this->current_vertex_order) {
    do {
      uVar14 = (int)uVar13 + 1;
      *(undefined4 *)(uVar11 + (longlong)piVar9) = *(undefined4 *)(uVar11 + (longlong)this->mem);
      uVar11 = uVar11 + 4;
      uVar13 = (ulonglong)uVar14;
    } while ((int)uVar14 < this->current_vertex_order);
  }
  if ((int)uVar14 < iVar6) {
    memset(piVar9 + (int)uVar14,0,(longlong)(int)(iVar6 - uVar14) << 2);
  }
  operator_delete__(this->mem);
  this->mem = piVar9;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar15;
  uVar8 = SUB168(ZEXT816(8) * auVar3,0);
  if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
    uVar8 = 0xffffffffffffffff;
  }
  ppiVar10 = operator_new__(uVar8);
  uVar11 = uVar12;
  uVar13 = uVar12;
  if (0 < this->current_vertex_order) {
    do {
      uVar14 = (int)uVar13 + 1;
      *(undefined8 *)(uVar11 + (longlong)ppiVar10) = *(undefined8 *)(uVar11 + (longlong)this->mep);
      uVar11 = uVar11 + 8;
      uVar13 = (ulonglong)uVar14;
    } while ((int)uVar14 < this->current_vertex_order);
  }
  operator_delete__(this->mep);
  this->mep = ppiVar10;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar15;
  uVar8 = SUB168(ZEXT816(4) * auVar4,0);
  if (SUB168(ZEXT816(4) * auVar4,8) != 0) {
    uVar8 = 0xffffffffffffffff;
  }
  piVar9 = operator_new__(uVar8);
  uVar14 = 0;
  uVar11 = uVar12;
  uVar13 = uVar12;
  if (0 < this->current_vertex_order) {
    do {
      uVar14 = (int)uVar13 + 1;
      *(undefined4 *)(uVar11 + (longlong)piVar9) = *(undefined4 *)(uVar11 + (longlong)this->mec);
      uVar11 = uVar11 + 4;
      uVar13 = (ulonglong)uVar14;
    } while ((int)uVar14 < this->current_vertex_order);
  }
  if ((int)uVar14 < iVar6) {
    memset(piVar9 + (int)uVar14,0,(longlong)(int)(iVar6 - uVar14) << 2);
  }
  operator_delete__(this->mec);
  this->mec = piVar9;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar15;
  uVar8 = SUB168(ZEXT816(8) * auVar5,0);
  if (SUB168(ZEXT816(8) * auVar5,8) != 0) {
    uVar8 = 0xffffffffffffffff;
  }
  ppiVar10 = operator_new__(uVar8);
  if ((iVar6 < *(int *)((longlong)&param_1->_padding_ + 4)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("current_vertex_order <= i",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Voronoi\\Private\\voro++\\src\\cell.hh"
                         ,0x19a,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar15 = uVar12;
  if (0 < *(int *)((longlong)&param_1->_padding_ + 4)) {
    do {
      uVar14 = (int)uVar15 + 1;
      *(undefined8 *)(uVar12 + (longlong)ppiVar10) =
           *(undefined8 *)(uVar12 + (longlong)param_1->mne);
      uVar12 = uVar12 + 8;
      uVar15 = (ulonglong)uVar14;
    } while ((int)uVar14 < *(int *)((longlong)&param_1->_padding_ + 4));
  }
  operator_delete__(param_1->mne);
  param_1->mne = ppiVar10;
  this->current_vertex_order = iVar6;
  return;
}

// check_memory_for_copy<voro::voronoicell> @ 1436a48b0

void __thiscall
voro::voronoicell_base::check_memory_for_copy<voro::voronoicell>
          (voronoicell_base *this,voronoicell *param_1,voronoicell_base *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  
  iVar1 = this->current_vertex_order;
  if (iVar1 < param_2->current_vertex_order) {
    do {
      add_memory_vorder<voro::voronoicell>(this,param_1);
      iVar1 = this->current_vertex_order;
    } while (iVar1 < param_2->current_vertex_order);
  }
  iVar4 = 0;
  if (0 < iVar1) {
    piVar2 = param_2->mec;
    piVar3 = this->mem;
    lVar5 = 0;
    do {
      if (*(int *)(lVar5 + (longlong)piVar3) < *(int *)(lVar5 + (longlong)piVar2)) {
        do {
          add_memory<voro::voronoicell>(this,param_1,iVar4,this->ds2);
          piVar2 = param_2->mec;
          piVar3 = this->mem;
        } while (*(int *)(lVar5 + (longlong)piVar3) < *(int *)(lVar5 + (longlong)piVar2));
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 4;
    } while (iVar4 < this->current_vertex_order);
  }
  if (this->current_vertices < param_2->p) {
    do {
      add_memory_vertices<voro::voronoicell>(this,param_1);
    } while (this->current_vertices < param_2->p);
  }
  return;
}

// check_memory_for_copy<voro::voronoicell_neighbor> @ 1436a4980

void __thiscall
voro::voronoicell_base::check_memory_for_copy<voro::voronoicell_neighbor>
          (voronoicell_base *this,voronoicell_neighbor *param_1,voronoicell_base *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  
  iVar1 = this->current_vertex_order;
  if (iVar1 < param_2->current_vertex_order) {
    do {
      add_memory_vorder<voro::voronoicell_neighbor>(this,param_1);
      iVar1 = this->current_vertex_order;
    } while (iVar1 < param_2->current_vertex_order);
  }
  iVar4 = 0;
  if (0 < iVar1) {
    piVar2 = param_2->mec;
    piVar3 = this->mem;
    lVar5 = 0;
    do {
      if (*(int *)(lVar5 + (longlong)piVar3) < *(int *)(lVar5 + (longlong)piVar2)) {
        do {
          add_memory<voro::voronoicell_neighbor>(this,param_1,iVar4,this->ds2);
          piVar2 = param_2->mec;
          piVar3 = this->mem;
        } while (*(int *)(lVar5 + (longlong)piVar3) < *(int *)(lVar5 + (longlong)piVar2));
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 4;
    } while (iVar4 < this->current_vertex_order);
  }
  if (this->current_vertices < param_2->p) {
    do {
      add_memory_vertices<voro::voronoicell_neighbor>(this,param_1);
    } while (this->current_vertices < param_2->p);
  }
  return;
}

// collapse_order1<voro::voronoicell> @ 1436a4a50

bool __thiscall
voro::voronoicell_base::collapse_order1<voro::voronoicell>
          (voronoicell_base *this,voronoicell *param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  int iVar11;
  longlong lVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  longlong lVar10;
  
  piVar8 = this->mec;
  iVar5 = piVar8[1];
  while (0 < iVar5) {
    this->up = 0;
    piVar8[1] = piVar8[1] + -1;
    piVar3 = this->mep[1];
    lVar7 = (longlong)(piVar8[1] * 3);
    iVar5 = piVar3[lVar7];
    iVar11 = piVar3[lVar7 + 1];
    iVar2 = piVar3[lVar7 + 2];
    lVar7 = (longlong)this->nu[iVar5] + -1;
    iVar15 = this->nu[iVar5] + -1;
    if (this->mec[lVar7] == this->mem[lVar7]) {
      add_memory<voro::voronoicell>(this,param_1,iVar15,this->ds2);
    }
    iVar14 = this->mec[lVar7];
    piVar8 = this->mep[lVar7];
    this->mec[lVar7] = iVar14 + 1;
    piVar8 = piVar8 + (iVar15 * 2 + 1) * iVar14;
    piVar8[iVar15 * 2] = iVar5;
    iVar9 = 0;
    lVar10 = 0;
    lVar12 = 0;
    iVar14 = iVar9;
    if (0 < iVar11) {
      do {
        piVar8[lVar12] = this->ed[iVar5][lVar12];
        iVar6 = this->nu[iVar5] + iVar14;
        iVar14 = iVar14 + 1;
        lVar1 = lVar7 + lVar12;
        lVar12 = lVar12 + 1;
        piVar8[lVar1] = this->ed[iVar5][iVar6];
      } while (lVar12 < iVar11);
    }
    for (; lVar12 < lVar7; lVar12 = lVar12 + 1) {
      iVar11 = this->ed[iVar5][lVar12 + 1];
      piVar8[lVar12] = iVar11;
      iVar6 = this->ed[iVar5][(longlong)(this->nu[iVar5] + iVar14) + 1];
      piVar8[lVar7 + lVar12] = iVar6;
      this->ed[iVar11][this->nu[iVar11] + iVar6] = this->ed[iVar11][this->nu[iVar11] + iVar6] + -1;
      iVar14 = iVar14 + 1;
    }
    iVar11 = this->nu[iVar5];
    piVar4 = this->mec;
    piVar3 = piVar4 + iVar11;
    *piVar3 = *piVar3 + -1;
    piVar13 = this->nu;
    iVar14 = piVar13[iVar5] * 2;
    piVar3 = this->mep[piVar13[iVar5]] + (iVar14 + 1) * piVar4[iVar11];
    lVar7 = lVar10;
    iVar11 = iVar9;
    if (-1 < iVar14) {
      do {
        iVar11 = iVar11 + 1;
        *(undefined4 *)(lVar7 + (longlong)this->ed[iVar5]) =
             *(undefined4 *)(lVar7 + (longlong)piVar3);
        piVar13 = this->nu;
        lVar7 = lVar7 + 4;
      } while (iVar11 <= piVar13[iVar5] * 2);
    }
    this->ed[piVar3[piVar13[iVar5] * 2]] = piVar3;
    this->ed[iVar5] = piVar8;
    this->nu[iVar5] = iVar15;
    iVar11 = this->p + -1;
    this->p = iVar11;
    iVar5 = this->up;
    if (this->up == iVar2) {
      this->up = 0;
      iVar5 = iVar9;
    }
    if (iVar11 != iVar2) {
      if (iVar5 == iVar11) {
        this->up = iVar2;
      }
      lVar7 = (longlong)(iVar2 * 3);
      this->pts[lVar7] = this->pts[iVar11 * 3];
      this->pts[lVar7 + 1] = this->pts[(longlong)(this->p * 3) + 1];
      this->pts[lVar7 + 2] = this->pts[(longlong)(this->p * 3) + 2];
      iVar5 = this->p;
      lVar7 = (longlong)iVar5;
      piVar8 = this->nu;
      if (0 < piVar8[lVar7]) {
        do {
          piVar3 = this->ed[(int)lVar7];
          iVar5 = piVar8[(int)lVar7] + iVar9;
          iVar9 = iVar9 + 1;
          this->ed[*(int *)(lVar10 + (longlong)piVar3)][piVar3[iVar5]] = iVar2;
          iVar5 = this->p;
          lVar7 = (longlong)iVar5;
          piVar8 = this->nu;
          lVar10 = lVar10 + 4;
        } while (iVar9 < piVar8[lVar7]);
      }
      this->ed[iVar2] = this->ed[iVar5];
      this->nu[iVar2] = this->nu[this->p];
      this->ed[iVar2][this->nu[iVar2] * 2] = iVar2;
    }
    piVar8 = this->mec;
    iVar5 = piVar8[1];
  }
  return true;
}

// collapse_order1<voro::voronoicell_neighbor> @ 1436a4da0

bool __thiscall
voro::voronoicell_base::collapse_order1<voro::voronoicell_neighbor>
          (voronoicell_base *this,voronoicell_neighbor *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  piVar5 = this->mec;
  if (0 < piVar5[1]) {
    do {
      this->up = 0;
      piVar5[1] = piVar5[1] + -1;
      piVar2 = this->mep[1];
      lVar7 = (longlong)(piVar5[1] * 3);
      iVar1 = piVar2[lVar7 + 2];
      bVar3 = delete_connection<voro::voronoicell_neighbor>
                        (this,param_1,piVar2[lVar7],piVar2[lVar7 + 1],false);
      if (!bVar3) {
        return false;
      }
      iVar6 = this->p + -1;
      this->p = iVar6;
      iVar4 = this->up;
      if (this->up == iVar1) {
        this->up = 0;
        iVar4 = 0;
      }
      if (iVar6 != iVar1) {
        if (iVar4 == iVar6) {
          this->up = iVar1;
        }
        lVar7 = (longlong)(iVar1 * 3);
        this->pts[lVar7] = this->pts[iVar6 * 3];
        this->pts[lVar7 + 1] = this->pts[(longlong)(this->p * 3) + 1];
        this->pts[lVar7 + 2] = this->pts[(longlong)(this->p * 3) + 2];
        iVar4 = this->p;
        lVar7 = (longlong)iVar4;
        piVar5 = this->nu;
        uVar9 = 0;
        uVar10 = 0;
        if (0 < piVar5[lVar7]) {
          do {
            piVar2 = this->ed[(int)lVar7];
            uVar8 = (int)uVar9 + 1;
            this->ed[*(int *)(uVar10 + (longlong)piVar2)][piVar2[piVar5[(int)lVar7] + (int)uVar9]] =
                 iVar1;
            iVar4 = this->p;
            lVar7 = (longlong)iVar4;
            piVar5 = this->nu;
            uVar9 = (ulonglong)uVar8;
            uVar10 = uVar10 + 4;
          } while ((int)uVar8 < piVar5[lVar7]);
        }
        param_1->ne[iVar1] = param_1->ne[iVar4];
        this->ed[iVar1] = this->ed[this->p];
        this->nu[iVar1] = this->nu[this->p];
        this->ed[iVar1][this->nu[iVar1] * 2] = iVar1;
      }
      piVar5 = this->mec;
    } while (0 < piVar5[1]);
  }
  return true;
}

// collapse_order2<voro::voronoicell> @ 1436a4f40

bool __thiscall
voro::voronoicell_base::collapse_order2<voro::voronoicell>
          (voronoicell_base *this,voronoicell *param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  int iVar16;
  
  bVar5 = collapse_order1<voro::voronoicell>(this,param_1);
  if (bVar5) {
    piVar11 = this->mec;
    iVar6 = piVar11[2];
    while (0 < iVar6) {
      piVar11[2] = piVar11[2] + -1;
      piVar3 = this->mep[2];
      lVar13 = (longlong)(piVar11[2] * 5);
      iVar6 = piVar3[lVar13];
      iVar10 = piVar3[lVar13 + 1];
      if (iVar6 == iVar10) goto LAB_1436a54b3;
      iVar7 = 0;
      iVar12 = this->nu[iVar6];
      if (0 < iVar12) {
        piVar11 = this->ed[iVar6];
        do {
          if (*piVar11 == iVar10) break;
          iVar7 = iVar7 + 1;
          piVar11 = piVar11 + 1;
        } while (iVar7 < iVar12);
      }
      iVar9 = piVar3[lVar13 + 3];
      iVar8 = piVar3[lVar13 + 2];
      iVar2 = piVar3[lVar13 + 4];
      if (iVar7 == iVar12) {
        this->ed[iVar6][iVar8] = iVar10;
        this->ed[iVar10][iVar9] = iVar6;
        this->ed[iVar6][this->nu[iVar6] + iVar8] = iVar9;
        this->ed[iVar10][this->nu[iVar10] + iVar9] = iVar8;
      }
      else {
        lVar13 = (longlong)iVar12 + -1;
        iVar12 = iVar12 + -1;
        if (this->mec[lVar13] == this->mem[lVar13]) {
          add_memory<voro::voronoicell>(this,param_1,iVar12,this->ds2);
        }
        iVar16 = 0;
        iVar7 = this->mec[lVar13];
        piVar11 = this->mep[lVar13];
        this->mec[lVar13] = iVar7 + 1;
        lVar14 = 0;
        piVar11 = piVar11 + (iVar12 * 2 + 1) * iVar7;
        piVar11[iVar12 * 2] = iVar6;
        if (0 < iVar8) {
          do {
            piVar11[lVar14] = this->ed[iVar6][lVar14];
            iVar7 = this->nu[iVar6] + iVar16;
            iVar16 = iVar16 + 1;
            lVar1 = lVar14 + lVar13;
            lVar14 = lVar14 + 1;
            piVar11[lVar1] = this->ed[iVar6][iVar7];
          } while (lVar14 < iVar8);
        }
        for (; lVar14 < lVar13; lVar14 = lVar14 + 1) {
          iVar7 = this->ed[iVar6][lVar14 + 1];
          piVar11[lVar14] = iVar7;
          iVar8 = this->nu[iVar6] + iVar16;
          iVar16 = iVar16 + 1;
          iVar8 = this->ed[iVar6][(longlong)iVar8 + 1];
          piVar11[lVar14 + lVar13] = iVar8;
          this->ed[iVar7][this->nu[iVar7] + iVar8] = this->ed[iVar7][this->nu[iVar7] + iVar8] + -1;
        }
        iVar16 = 0;
        iVar7 = this->nu[iVar6];
        piVar4 = this->mec;
        piVar3 = piVar4 + iVar7;
        *piVar3 = *piVar3 + -1;
        piVar15 = this->nu;
        iVar8 = piVar15[iVar6] * 2;
        piVar3 = this->mep[piVar15[iVar6]] + (iVar8 + 1) * piVar4[iVar7];
        if (-1 < iVar8) {
          lVar13 = 0;
          do {
            iVar16 = iVar16 + 1;
            *(undefined4 *)(lVar13 + (longlong)this->ed[iVar6]) =
                 *(undefined4 *)((longlong)piVar3 + lVar13);
            piVar15 = this->nu;
            lVar13 = lVar13 + 4;
          } while (iVar16 <= piVar15[iVar6] * 2);
        }
        this->ed[piVar3[piVar15[iVar6] * 2]] = piVar3;
        this->ed[iVar6] = piVar11;
        this->nu[iVar6] = iVar12;
        lVar13 = (longlong)this->nu[iVar10] + -1;
        iVar6 = this->nu[iVar10] + -1;
        if (this->mec[lVar13] == this->mem[lVar13]) {
          add_memory<voro::voronoicell>(this,param_1,iVar6,this->ds2);
        }
        iVar7 = 0;
        iVar12 = this->mec[lVar13];
        piVar11 = this->mep[lVar13];
        this->mec[lVar13] = iVar12 + 1;
        lVar14 = 0;
        piVar11 = piVar11 + (iVar6 * 2 + 1) * iVar12;
        piVar11[iVar6 * 2] = iVar10;
        if (0 < (longlong)iVar9) {
          do {
            piVar11[lVar14] = this->ed[iVar10][lVar14];
            iVar12 = this->nu[iVar10] + iVar7;
            iVar7 = iVar7 + 1;
            lVar1 = lVar14 + lVar13;
            lVar14 = lVar14 + 1;
            piVar11[lVar1] = this->ed[iVar10][iVar12];
          } while (lVar14 < iVar9);
        }
        for (; lVar14 < lVar13; lVar14 = lVar14 + 1) {
          iVar12 = this->ed[iVar10][lVar14 + 1];
          piVar11[lVar14] = iVar12;
          iVar9 = this->nu[iVar10] + iVar7;
          iVar7 = iVar7 + 1;
          iVar9 = this->ed[iVar10][(longlong)iVar9 + 1];
          piVar11[lVar14 + lVar13] = iVar9;
          this->ed[iVar12][this->nu[iVar12] + iVar9] =
               this->ed[iVar12][this->nu[iVar12] + iVar9] + -1;
        }
        iVar9 = 0;
        iVar12 = this->nu[iVar10];
        piVar4 = this->mec;
        piVar3 = piVar4 + iVar12;
        *piVar3 = *piVar3 + -1;
        piVar15 = this->nu;
        iVar7 = piVar15[iVar10] * 2;
        piVar3 = this->mep[piVar15[iVar10]] + (iVar7 + 1) * piVar4[iVar12];
        if (-1 < iVar7) {
          lVar13 = 0;
          do {
            iVar9 = iVar9 + 1;
            *(undefined4 *)(lVar13 + (longlong)this->ed[iVar10]) =
                 *(undefined4 *)((longlong)piVar3 + lVar13);
            piVar15 = this->nu;
            lVar13 = lVar13 + 4;
          } while (iVar9 <= piVar15[iVar10] * 2);
        }
        this->ed[piVar3[piVar15[iVar10] * 2]] = piVar3;
        this->ed[iVar10] = piVar11;
        this->nu[iVar10] = iVar6;
      }
      iVar6 = this->up;
      iVar10 = this->p + -1;
      this->p = iVar10;
      if (iVar6 == iVar2) {
        this->up = 0;
        iVar6 = 0;
      }
      if (iVar10 != iVar2) {
        if (iVar6 == iVar10) {
          this->up = iVar2;
        }
        iVar12 = 0;
        lVar13 = (longlong)(iVar2 * 3);
        this->pts[lVar13] = this->pts[iVar10 * 3];
        this->pts[lVar13 + 1] = this->pts[(longlong)(this->p * 3) + 1];
        this->pts[lVar13 + 2] = this->pts[(longlong)(this->p * 3) + 2];
        iVar6 = this->p;
        lVar13 = (longlong)iVar6;
        piVar11 = this->nu;
        if (0 < piVar11[lVar13]) {
          lVar14 = 0;
          do {
            piVar3 = this->ed[(int)lVar13];
            iVar6 = piVar11[(int)lVar13] + iVar12;
            iVar12 = iVar12 + 1;
            this->ed[*(int *)(lVar14 + (longlong)piVar3)][piVar3[iVar6]] = iVar2;
            iVar6 = this->p;
            lVar13 = (longlong)iVar6;
            piVar11 = this->nu;
            lVar14 = lVar14 + 4;
          } while (iVar12 < piVar11[lVar13]);
        }
        this->ed[iVar2] = this->ed[iVar6];
        this->nu[iVar2] = this->nu[this->p];
        this->ed[iVar2][this->nu[iVar2] * 2] = iVar2;
      }
      bVar5 = collapse_order1<voro::voronoicell>(this,param_1);
      if (!bVar5) goto LAB_1436a54b3;
      piVar11 = this->mec;
      iVar6 = piVar11[2];
    }
    bVar5 = true;
  }
  else {
LAB_1436a54b3:
    bVar5 = false;
  }
  return bVar5;
}

// collapse_order2<voro::voronoicell_neighbor> @ 1436a54d0

bool __thiscall
voro::voronoicell_base::collapse_order2<voro::voronoicell_neighbor>
          (voronoicell_base *this,voronoicell_neighbor *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar10;
  
  bVar5 = collapse_order1<voro::voronoicell_neighbor>(this,param_1);
  if (bVar5) {
    piVar6 = this->mec;
    if (0 < piVar6[2]) {
      uVar15 = 0;
      do {
        piVar6[2] = piVar6[2] + -1;
        piVar4 = this->mep[2];
        lVar12 = (longlong)(piVar6[2] * 5);
        iVar8 = piVar4[lVar12];
        iVar1 = piVar4[lVar12 + 1];
        if (iVar8 == iVar1) goto LAB_1436a586b;
        uVar14 = 0;
        uVar11 = this->nu[iVar8];
        uVar7 = uVar14;
        if (0 < (int)uVar11) {
          piVar6 = this->ed[iVar8];
          uVar10 = uVar15;
          do {
            uVar7 = (uint)uVar10;
            if (*piVar6 == iVar1) break;
            uVar7 = uVar7 + 1;
            uVar10 = (ulonglong)uVar7;
            piVar6 = piVar6 + 1;
          } while ((int)uVar7 < (int)uVar11);
        }
        iVar2 = piVar4[lVar12 + 2];
        iVar3 = piVar4[lVar12 + 3];
        uVar9 = piVar4[lVar12 + 4];
        if (uVar7 == uVar11) {
          this->ed[iVar8][iVar2] = iVar1;
          this->ed[iVar1][iVar3] = iVar8;
          this->ed[iVar8][this->nu[iVar8] + iVar2] = iVar3;
          this->ed[iVar1][this->nu[iVar1] + iVar3] = iVar2;
        }
        else {
          bVar5 = delete_connection<voro::voronoicell_neighbor>(this,param_1,iVar8,iVar2,false);
          if ((!bVar5) ||
             (bVar5 = delete_connection<voro::voronoicell_neighbor>(this,param_1,iVar1,iVar3,true),
             !bVar5)) goto LAB_1436a586b;
        }
        uVar7 = this->p - 1;
        this->p = uVar7;
        uVar11 = this->up;
        if (this->up == uVar9) {
          this->up = 0;
          uVar11 = uVar14;
        }
        if (uVar7 != uVar9) {
          if (uVar11 == uVar7) {
            this->up = uVar9;
          }
          lVar12 = (longlong)(int)(uVar9 * 3);
          this->pts[lVar12] = this->pts[(int)(uVar7 * 3)];
          this->pts[lVar12 + 1] = this->pts[(longlong)(this->p * 3) + 1];
          this->pts[lVar12 + 2] = this->pts[(longlong)(this->p * 3) + 2];
          iVar8 = this->p;
          lVar12 = (longlong)iVar8;
          piVar6 = this->nu;
          uVar10 = uVar15;
          uVar13 = uVar15;
          if (0 < piVar6[lVar12]) {
            do {
              piVar4 = this->ed[(int)lVar12];
              uVar11 = (int)uVar10 + 1;
              this->ed[*(int *)((longlong)piVar4 + uVar13)]
              [piVar4[piVar6[(int)lVar12] + (int)uVar10]] = uVar9;
              iVar8 = this->p;
              lVar12 = (longlong)iVar8;
              piVar6 = this->nu;
              uVar10 = (ulonglong)uVar11;
              uVar13 = uVar13 + 4;
            } while ((int)uVar11 < piVar6[lVar12]);
          }
          param_1->ne[(int)uVar9] = param_1->ne[iVar8];
          this->ed[(int)uVar9] = this->ed[this->p];
          this->nu[(int)uVar9] = this->nu[this->p];
          this->ed[(int)uVar9][this->nu[(int)uVar9] * 2] = uVar9;
        }
        piVar6 = this->mec;
        iVar8 = piVar6[1];
        while (0 < iVar8) {
          piVar4 = this->mec;
          this->up = 0;
          piVar6 = piVar4 + 1;
          *piVar6 = *piVar6 + -1;
          piVar6 = this->mep[1];
          lVar12 = (longlong)(piVar4[1] * 3);
          uVar11 = piVar6[lVar12 + 2];
          bVar5 = delete_connection<voro::voronoicell_neighbor>
                            (this,param_1,piVar6[lVar12],piVar6[lVar12 + 1],false);
          if (!bVar5) goto LAB_1436a586b;
          uVar9 = this->p - 1;
          this->p = uVar9;
          uVar7 = this->up;
          if (this->up == uVar11) {
            this->up = 0;
            uVar7 = uVar14;
          }
          if (uVar9 != uVar11) {
            if (uVar7 == uVar9) {
              this->up = uVar11;
            }
            lVar12 = (longlong)(int)(uVar11 * 3);
            this->pts[lVar12] = this->pts[(int)(uVar9 * 3)];
            this->pts[lVar12 + 1] = this->pts[(longlong)(this->p * 3) + 1];
            this->pts[lVar12 + 2] = this->pts[(longlong)(this->p * 3) + 2];
            iVar8 = this->p;
            lVar12 = (longlong)iVar8;
            piVar6 = this->nu;
            uVar10 = uVar15;
            uVar13 = uVar15;
            if (0 < piVar6[lVar12]) {
              do {
                piVar4 = this->ed[(int)lVar12];
                uVar7 = (int)uVar10 + 1;
                this->ed[*(int *)(uVar13 + (longlong)piVar4)]
                [piVar4[piVar6[(int)lVar12] + (int)uVar10]] = uVar11;
                iVar8 = this->p;
                lVar12 = (longlong)iVar8;
                piVar6 = this->nu;
                uVar10 = (ulonglong)uVar7;
                uVar13 = uVar13 + 4;
              } while ((int)uVar7 < piVar6[lVar12]);
            }
            param_1->ne[(int)uVar11] = param_1->ne[iVar8];
            this->ed[(int)uVar11] = this->ed[this->p];
            this->nu[(int)uVar11] = this->nu[this->p];
            this->ed[(int)uVar11][this->nu[(int)uVar11] * 2] = uVar11;
          }
          piVar6 = this->mec;
          iVar8 = piVar6[1];
        }
      } while (0 < piVar6[2]);
    }
    bVar5 = true;
  }
  else {
LAB_1436a586b:
    bVar5 = false;
  }
  return bVar5;
}

// delete_connection<voro::voronoicell_neighbor> @ 1436a58a0

bool __thiscall
voro::voronoicell_base::delete_connection<voro::voronoicell_neighbor>
          (voronoicell_base *this,voronoicell_neighbor *param_1,int param_2,int param_3,bool param_4
          )

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int **ppiVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  int *piVar15;
  int iVar16;
  
  uVar8 = 0;
  iVar16 = param_3;
  if ((!param_4) && (iVar16 = 0, param_3 != this->nu[param_2] + -1)) {
    iVar16 = param_3 + 1;
  }
  iVar5 = this->nu[param_2];
  lVar4 = (longlong)iVar5 + -1;
  iVar5 = iVar5 + -1;
  if (this->mec[lVar4] == this->mem[lVar4]) {
    add_memory<voro::voronoicell_neighbor>(this,param_1,iVar5,this->ds2);
  }
  param_1->paux1 = param_1->mne[lVar4] + iVar5 * *(int *)(param_1->_padding_ + lVar4 * 4);
  uVar6 = uVar8;
  iVar13 = 0;
  if (0 < iVar16) {
    do {
      param_1->paux1[uVar6] = param_1->ne[param_2][uVar6];
      uVar6 = uVar6 + 1;
      iVar13 = iVar16;
    } while ((longlong)uVar6 < (longlong)iVar16);
  }
  for (lVar7 = (longlong)iVar13; lVar7 < lVar4; lVar7 = lVar7 + 1) {
    param_1->paux1[lVar7] = param_1->ne[param_2][lVar7 + 1];
  }
  iVar16 = this->mec[lVar4];
  piVar2 = this->mep[lVar4];
  this->mec[lVar4] = iVar16 + 1;
  piVar2 = piVar2 + (iVar5 * 2 + 1) * iVar16;
  piVar2[iVar5 * 2] = param_2;
  uVar10 = uVar8;
  uVar14 = uVar8;
  uVar6 = uVar8;
  if (0 < param_3) {
    do {
      piVar2[uVar10] = this->ed[param_2][uVar10];
      uVar6 = (ulonglong)((int)uVar14 + 1);
      uVar11 = uVar10 + 1;
      piVar2[lVar4 + uVar10] = this->ed[param_2][this->nu[param_2] + (int)uVar14];
      uVar10 = uVar11;
      uVar14 = uVar6;
    } while ((longlong)uVar11 < (longlong)param_3);
  }
  for (lVar7 = (longlong)(int)uVar6; lVar7 < lVar4; lVar7 = lVar7 + 1) {
    iVar16 = this->ed[param_2][lVar7 + 1];
    piVar2[lVar7] = iVar16;
    iVar13 = (int)uVar6;
    uVar6 = (ulonglong)(iVar13 + 1);
    iVar13 = this->ed[param_2][(longlong)(this->nu[param_2] + iVar13) + 1];
    piVar2[lVar4 + lVar7] = iVar13;
    this->ed[iVar16][this->nu[iVar16] + iVar13] = this->ed[iVar16][this->nu[iVar16] + iVar13] + -1;
  }
  ppiVar9 = &this->nu;
  iVar16 = (*ppiVar9)[param_2];
  piVar3 = this->mec;
  piVar1 = piVar3 + iVar16;
  *piVar1 = *piVar1 + -1;
  piVar15 = *ppiVar9;
  iVar13 = piVar15[param_2] * 2;
  piVar1 = this->mep[piVar15[param_2]] + (iVar13 + 1) * piVar3[iVar16];
  uVar6 = uVar8;
  uVar10 = uVar8;
  if (-1 < iVar13) {
    do {
      uVar12 = (int)uVar10 + 1;
      *(undefined4 *)(uVar6 + (longlong)this->ed[param_2]) =
           *(undefined4 *)((longlong)piVar1 + uVar6);
      piVar15 = *ppiVar9;
      uVar6 = uVar6 + 4;
      uVar10 = (ulonglong)uVar12;
    } while ((int)uVar12 <= piVar15[param_2] * 2);
  }
  lVar4 = (longlong)piVar15[param_2];
  param_1->paux2 = param_1->mne[lVar4] + piVar15[param_2] * *(int *)(param_1->_padding_ + lVar4 * 4)
  ;
  if (0 < lVar4) {
    do {
      param_1->ne[param_2][uVar8] = param_1->paux2[uVar8];
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < lVar4);
  }
  ppiVar9 = &this->nu;
  param_1->ne[piVar1[(*ppiVar9)[param_2] * 2]] = param_1->paux2;
  param_1->ne[param_2] = param_1->paux1;
  this->ed[piVar1[(*ppiVar9)[param_2] * 2]] = piVar1;
  this->ed[param_2] = piVar2;
  (*ppiVar9)[param_2] = iVar5;
  return true;
}

// nplane<voro::voronoicell> @ 1436a5c10

bool __thiscall
voro::voronoicell_base::nplane<voro::voronoicell>
          (voronoicell_base *this,voronoicell *param_1,double param_2,double param_3,double param_4,
          double param_5,int param_6)

{
  int ***pppiVar1;
  ulonglong uVar2;
  double *pdVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulong64 uVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  longlong lVar23;
  uint *puVar24;
  uint *puVar25;
  int *piVar26;
  longlong lVar27;
  uint uVar28;
  int iVar29;
  int *piVar30;
  int **ppiVar31;
  double dVar32;
  int *piVar33;
  ulonglong uVar34;
  uint uVar35;
  ulonglong uVar36;
  longlong lVar37;
  double dVar38;
  int iVar39;
  uint uVar40;
  longlong lVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  double dVar44;
  longlong local_res8;
  uint local_res18;
  uint local_res20;
  int local_d8;
  int local_d4;
  double local_d0;
  uint *local_c8;
  uint *local_c0;
  int *local_b8;
  longlong local_b0;
  uint *local_a8 [13];
  
  uVar42 = 0;
  uVar28 = 0;
  puVar24 = (uint *)this->ds;
  uVar40 = this->up;
  lVar27 = (longlong)(int)uVar40;
  dVar32 = 0.0;
  dVar44 = 0.0;
  local_c0 = (uint *)this->ds2;
  this->pz = param_4;
  this->px = param_2;
  this->py = param_3;
  this->prsq = param_5;
  this->n_marg = 0;
  dVar12 = __real_bdb5fd7fe1796495;
  dVar11 = __real_3db5fd7fe1796495;
  pdVar3 = this->pts;
  local_d4 = 0;
  local_res18 = 0;
  local_res20 = 0;
  bVar14 = false;
  dVar10 = param_3 * pdVar3[lVar27 * 3 + 1] + param_2 * pdVar3[lVar27 * 3] +
           (param_4 * pdVar3[lVar27 * 3 + 2] - param_5);
  param_5._4_4_ = (undefined4)((ulonglong)dVar10 >> 0x20);
  local_c8 = puVar24;
  local_a8[0] = local_c0;
  if (__real_bdb5fd7fe1796495 <= dVar10) {
    if (dVar10 <= __real_3db5fd7fe1796495) {
      param_5 = dVar10;
      iVar29 = check_marginal(this,uVar40,&param_5);
      param_5 = (double)CONCAT44(param_5._4_4_,iVar29);
      if (iVar29 == 1) goto LAB_1436a5d3c;
      param_5 = (double)CONCAT44(param_5._4_4_,iVar29);
      if (iVar29 == -1) goto LAB_1436a6070;
    }
    else {
      param_5 = (double)CONCAT44(param_5._4_4_,1);
LAB_1436a5d3c:
      local_res18 = 0;
      uVar36 = uVar42;
      do {
        pdVar3 = this->pts;
        uVar40 = *(uint *)(uVar36 + (longlong)this->ed[this->up]);
        lVar27 = (longlong)(int)uVar40;
        dVar44 = this->py * pdVar3[lVar27 * 3 + 1] + this->px * pdVar3[lVar27 * 3] +
                 (pdVar3[lVar27 * 3 + 2] * this->pz - this->prsq);
        local_d0 = dVar44;
        if (dVar12 <= dVar44) {
          if (dVar44 <= dVar11) {
            iVar29 = check_marginal(this,uVar40,&local_d0);
          }
          else {
            iVar29 = 1;
          }
        }
        else {
          iVar29 = -1;
        }
        if (dVar44 < dVar10) break;
        local_res18 = (int)uVar42 + 1;
        uVar42 = (ulonglong)local_res18;
        uVar36 = uVar36 + 4;
      } while ((int)local_res18 < this->nu[this->up]);
      ppiVar31 = &this->nu;
      if ((int)uVar42 == (*ppiVar31)[this->up]) {
        return false;
      }
      uVar28 = this->ed[this->up][(*ppiVar31)[this->up] + (int)uVar42];
      while (dVar38 = dVar44, iVar29 == 1) {
        iVar15 = this->p;
        local_d4 = local_d4 + 1;
        local_res20 = uVar28;
        if (iVar15 <= local_d4) goto LAB_1436a638e;
        this->up = (int)lVar27;
        local_res18 = 0;
        uVar42 = 0;
        lVar41 = 0;
        dVar44 = dVar38;
        if (0 < (int)uVar28) {
          do {
            pdVar3 = this->pts;
            lVar27 = (longlong)this->ed[this->up][lVar41];
            dVar44 = this->px * pdVar3[lVar27 * 3] + pdVar3[lVar27 * 3 + 1] * this->py +
                     (pdVar3[lVar27 * 3 + 2] * this->pz - this->prsq);
            local_d0 = dVar44;
            if (dVar12 <= dVar44) {
              if (dVar44 <= dVar11) {
                iVar29 = check_marginal(this,this->ed[this->up][lVar41],&local_d0);
              }
              else {
                iVar29 = 1;
              }
            }
            else {
              iVar29 = -1;
            }
            if (dVar44 < dVar38) break;
            uVar42 = (ulonglong)((int)uVar42 + 1);
            lVar41 = lVar41 + 1;
          } while (lVar41 < (int)uVar28);
          local_res18 = (uint)uVar42;
          puVar24 = local_c8;
        }
        if ((uint)uVar42 == uVar28) {
          lVar37 = (longlong)this->up;
          local_res18 = (uint)uVar42 + 1;
          uVar42 = (ulonglong)local_res18;
          if ((int)local_res18 < (*ppiVar31)[lVar37]) {
            lVar41 = lVar41 * 4;
            do {
              lVar41 = lVar41 + 4;
              pdVar3 = this->pts;
              iVar29 = *(int *)(lVar41 + (longlong)this->ed[(int)lVar37]);
              lVar27 = (longlong)iVar29;
              dVar44 = this->px * pdVar3[lVar27 * 3] + pdVar3[lVar27 * 3 + 1] * this->py +
                       (pdVar3[lVar27 * 3 + 2] * this->pz - this->prsq);
              local_d0 = dVar44;
              if (dVar12 <= dVar44) {
                if (dVar44 <= dVar11) {
                  iVar29 = check_marginal(this,iVar29,&local_d0);
                }
                else {
                  iVar29 = 1;
                }
              }
              else {
                iVar29 = -1;
              }
              if (dVar44 < dVar38) break;
              lVar37 = (longlong)this->up;
              uVar40 = (int)uVar42 + 1;
              uVar42 = (ulonglong)uVar40;
            } while ((int)uVar40 < (*ppiVar31)[lVar37]);
            local_res18 = (uint)uVar42;
            puVar24 = local_c8;
          }
          if ((int)uVar42 == (*ppiVar31)[this->up]) {
            return false;
          }
        }
        uVar40 = (uint)lVar27;
        uVar28 = this->ed[this->up][(*ppiVar31)[this->up] + (int)uVar42];
        dVar10 = dVar38;
      }
      if (iVar29 != 0) goto LAB_1436a6769;
      this->up = uVar40;
      dVar32 = dVar38;
    }
    dVar44 = dVar32;
    bVar13 = true;
  }
  else {
    param_5 = (double)CONCAT44(param_5._4_4_,0xffffffff);
LAB_1436a6070:
    local_res18 = 0;
    uVar36 = uVar42;
    do {
      pdVar3 = this->pts;
      iVar29 = *(int *)(uVar36 + (longlong)this->ed[this->up]);
      lVar41 = (longlong)iVar29;
      dVar9 = pdVar3[lVar41 * 3] * this->px + pdVar3[lVar41 * 3 + 1] * this->py +
              (pdVar3[lVar41 * 3 + 2] * this->pz - this->prsq);
      local_d0 = dVar9;
      if (dVar12 <= dVar9) {
        if (dVar9 <= dVar11) {
          iVar17 = check_marginal(this,iVar29,&local_d0);
        }
        else {
          iVar17 = 1;
        }
      }
      else {
        iVar17 = -1;
      }
      if (dVar10 < dVar9) break;
      local_res18 = (int)uVar42 + 1;
      uVar42 = (ulonglong)local_res18;
      uVar36 = uVar36 + 4;
    } while ((int)local_res18 < this->nu[this->up]);
    ppiVar31 = &this->nu;
    piVar26 = *ppiVar31;
    if ((int)uVar42 == piVar26[this->up]) {
      return true;
    }
    dVar38 = dVar10;
    if (iVar17 == -1) {
      local_d4 = 1;
      iVar29 = this->ed[this->up][piVar26[this->up] + (int)uVar42];
      iVar15 = this->p;
      dVar38 = dVar32;
      if (1 < iVar15) {
        do {
          dVar10 = dVar9;
          lVar23 = (longlong)iVar29;
          this->up = (int)lVar41;
          local_res18 = 0;
          uVar42 = 0;
          lVar37 = 0;
          dVar9 = dVar10;
          local_b0 = lVar23;
          if (0 < iVar29) {
            do {
              pdVar3 = this->pts;
              lVar41 = (longlong)this->ed[this->up][lVar37];
              dVar9 = pdVar3[lVar41 * 3 + 1] * this->py + this->px * pdVar3[lVar41 * 3] +
                      (pdVar3[lVar41 * 3 + 2] * this->pz - this->prsq);
              local_d0 = dVar9;
              if (dVar12 <= dVar9) {
                if (dVar9 <= dVar11) {
                  iVar17 = check_marginal(this,this->ed[this->up][lVar37],&local_d0);
                  lVar23 = local_b0;
                }
                else {
                  iVar17 = 1;
                }
              }
              else {
                iVar17 = -1;
              }
              if (dVar10 < dVar9) break;
              uVar42 = (ulonglong)((int)uVar42 + 1);
              lVar37 = lVar37 + 1;
            } while (lVar37 < lVar23);
            local_res18 = (uint)uVar42;
            puVar24 = local_c8;
          }
          piVar26 = *ppiVar31;
          if ((int)uVar42 == iVar29) {
            lVar23 = (longlong)this->up;
            local_res18 = (int)uVar42 + 1;
            uVar42 = (ulonglong)local_res18;
            if ((int)local_res18 < piVar26[lVar23]) {
              lVar37 = lVar37 * 4;
              do {
                lVar37 = lVar37 + 4;
                pdVar3 = this->pts;
                iVar29 = *(int *)(lVar37 + (longlong)this->ed[(int)lVar23]);
                lVar41 = (longlong)iVar29;
                dVar9 = this->py * pdVar3[lVar41 * 3 + 1] + this->px * pdVar3[lVar41 * 3] +
                        (pdVar3[lVar41 * 3 + 2] * this->pz - this->prsq);
                local_d0 = dVar9;
                if (dVar12 <= dVar9) {
                  if (dVar9 <= dVar11) {
                    iVar17 = check_marginal(this,iVar29,&local_d0);
                  }
                  else {
                    iVar17 = 1;
                  }
                }
                else {
                  iVar17 = -1;
                }
                if (dVar10 < dVar9) break;
                lVar23 = (longlong)this->up;
                uVar28 = (int)uVar42 + 1;
                uVar42 = (ulonglong)uVar28;
              } while ((int)uVar28 < (*ppiVar31)[lVar23]);
              local_res18 = (uint)uVar42;
              puVar24 = local_c8;
            }
            piVar26 = *ppiVar31;
            if ((int)uVar42 == piVar26[this->up]) {
              return true;
            }
          }
          iVar29 = (int)lVar41;
          dVar38 = dVar10;
          if (iVar17 != -1) goto LAB_1436a6735;
          local_d4 = local_d4 + 1;
          iVar29 = this->ed[this->up][piVar26[this->up] + (int)uVar42];
          iVar15 = this->p;
          dVar38 = dVar32;
        } while (local_d4 < iVar15);
      }
LAB_1436a638e:
      dVar44 = dVar38;
      uVar40 = (uint)lVar27;
      ppiVar31 = &this->nu;
      dVar32 = 0.0;
      local_d8 = 1;
      local_d4 = 0;
      param_4 = 0.0;
      uVar28 = 0;
      if (0 < iVar15) {
        local_b8 = (int *)0x0;
        local_b0 = 0;
        dVar38 = dVar32;
        do {
          piVar26 = local_b8;
          uVar40 = (uint)lVar27;
          pdVar3 = this->pts;
          dVar9 = this->py * *(double *)((longlong)(local_b8 + 2) + (longlong)pdVar3) +
                  this->px * *(double *)((longlong)local_b8 + (longlong)pdVar3) +
                  (*(double *)((longlong)(local_b8 + 4) + (longlong)pdVar3) * this->pz - this->prsq)
          ;
          local_d0 = dVar9;
          if (dVar12 <= dVar9) {
            uVar28 = local_res20;
            if (dVar9 <= dVar11) {
              local_d8 = check_marginal(this,SUB84(dVar32,0),&local_d0);
              dVar32 = param_4;
              if (local_d8 != 1) {
                if (local_d8 == -1) goto LAB_1436a6574;
                this->up = param_4._0_4_;
                bVar13 = true;
                goto LAB_1436a66ac;
              }
            }
            else {
              local_d8 = 1;
            }
            uVar42 = 0;
            local_res18 = 0;
            lVar41 = local_b0;
            uVar36 = uVar42;
            if (0 < *(int *)((longlong)dVar38 + (longlong)*ppiVar31)) {
              do {
                iVar29 = *(int *)(uVar36 + *(longlong *)(lVar41 + (longlong)this->ed));
                lVar27 = (longlong)iVar29;
                if (iVar29 < SUB84(dVar32,0)) {
                  pdVar3 = this->pts;
                  dVar44 = pdVar3[lVar27 * 3 + 1] * this->py + this->px * pdVar3[lVar27 * 3] +
                           (pdVar3[lVar27 * 3 + 2] * this->pz - this->prsq);
                  local_d0 = dVar44;
                  if (dVar44 < dVar12) {
                    local_d4 = -1;
                    piVar26 = local_b8;
                    break;
                  }
                  if (dVar44 <= dVar11) {
                    local_d4 = check_marginal(this,iVar29,&local_d0);
                    lVar41 = local_b0;
                    dVar32 = param_4;
                    piVar26 = local_b8;
                    if (local_d4 != 1) break;
                  }
                  else {
                    local_d4 = 1;
                  }
                }
                local_res18 = (int)uVar42 + 1;
                uVar42 = (ulonglong)local_res18;
                piVar26 = local_b8;
                uVar36 = uVar36 + 4;
              } while ((int)local_res18 < *(int *)((longlong)dVar38 + (longlong)*ppiVar31));
            }
            uVar40 = (uint)lVar27;
            if ((int)uVar42 < *(int *)((longlong)dVar38 + (longlong)*ppiVar31)) {
              this->up = param_4._0_4_;
              if (local_d4 == 0) {
                bVar13 = true;
              }
              else {
                bVar13 = false;
                dVar10 = dVar9;
                uVar28 = this->ed[(int)param_4._0_4_][(*ppiVar31)[(int)param_4._0_4_] + (int)uVar42]
                ;
              }
              goto LAB_1436a66ac;
            }
          }
          else {
            local_d8 = -1;
LAB_1436a6574:
            uVar43 = 0;
            local_res20 = 0;
            uVar36 = uVar43;
            if (0 < *(int *)((longlong)dVar38 + (longlong)*ppiVar31)) {
              do {
                uVar35 = (uint)uVar43;
                iVar29 = *(int *)(uVar36 + *(longlong *)(local_b0 + (longlong)this->ed));
                lVar41 = (longlong)iVar29;
                this->up = iVar29;
                if (iVar29 < SUB84(dVar32,0)) {
                  pdVar3 = this->pts;
                  dVar10 = this->px * pdVar3[lVar41 * 3] + pdVar3[lVar41 * 3 + 1] * this->py +
                           (pdVar3[lVar41 * 3 + 2] * this->pz - this->prsq);
                  param_5._4_4_ = (undefined4)((ulonglong)dVar10 >> 0x20);
                  if (dVar12 <= dVar10) {
                    if (dVar11 < dVar10) {
                      iVar29 = 1;
                      param_5 = (double)CONCAT44(param_5._4_4_,1);
                      piVar26 = local_b8;
                      goto LAB_1436a666a;
                    }
                    param_5 = dVar10;
                    iVar29 = check_marginal(this,iVar29,&param_5);
                    param_5 = (double)CONCAT44(param_5._4_4_,iVar29);
                    dVar32 = param_4;
                    piVar26 = local_b8;
                    uVar35 = local_res20;
                    if (iVar29 != -1) goto LAB_1436a666a;
                  }
                  else {
                    param_5 = (double)CONCAT44(param_5._4_4_,0xffffffff);
                  }
                }
                local_res20 = uVar35 + 1;
                uVar43 = (ulonglong)local_res20;
                uVar36 = uVar36 + 4;
                piVar26 = local_b8;
              } while ((int)local_res20 < *(int *)((longlong)dVar38 + (longlong)*ppiVar31));
            }
            iVar29 = param_5._0_4_;
            uVar35 = (uint)uVar43;
LAB_1436a666a:
            if ((int)uVar35 < *(int *)((longlong)dVar38 + (longlong)*ppiVar31)) {
              uVar28 = local_res20;
              if (iVar29 == 0) {
                bVar13 = true;
                this->up = param_4._0_4_;
              }
              else {
                bVar13 = false;
                local_res18 = this->ed[(int)param_4._0_4_]
                              [(int)((*ppiVar31)[(int)param_4._0_4_] + uVar35)];
                uVar42 = (ulonglong)local_res18;
                dVar44 = dVar9;
                uVar40 = param_4._0_4_;
              }
              goto LAB_1436a66ac;
            }
          }
          uVar40 = (uint)lVar27;
          local_b8 = piVar26 + 6;
          uVar28 = param_4._0_4_ + 1;
          dVar32 = (double)(ulonglong)uVar28;
          local_b0 = local_b0 + 8;
          param_4 = (double)(ulonglong)uVar28;
          dVar38 = (double)((longlong)dVar38 + 4);
        } while ((int)uVar28 < this->p);
      }
      param_4._0_4_ = uVar28;
      bVar13 = false;
      uVar28 = local_res20;
LAB_1436a66ac:
      if (param_4._0_4_ == this->p) {
        return local_d8 == -1;
      }
    }
    else {
LAB_1436a6735:
      uVar28 = (uint)uVar42;
      if (iVar17 == 1) {
        uVar40 = this->up;
        this->up = iVar29;
        local_res18 = this->ed[(int)uVar40][(int)(piVar26[(int)uVar40] + uVar28)];
        uVar42 = (ulonglong)local_res18;
        dVar10 = dVar9;
LAB_1436a6769:
        bVar13 = false;
        dVar44 = dVar38;
      }
      else {
        this->up = iVar29;
        bVar13 = true;
        uVar28 = local_res20;
        dVar10 = dVar38;
      }
    }
  }
  if (this->p == this->current_vertices) {
    add_memory_vertices<voro::voronoicell>(this,param_1);
  }
  dVar32 = __real_3ff0000000000000;
  if (!bVar13) {
    puVar25 = puVar24;
    if (puVar24 == (uint *)this->stacke) {
      this->current_delete_size = this->current_delete_size << 1;
      if (0x1000000 < this->current_delete_size) {
        voro_fatal_error("Delete stack 1 memory allocation exceeded absolute maximum",2);
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (longlong)this->current_delete_size;
      uVar18 = SUB168(ZEXT816(4) * auVar4,0);
      if (SUB168(ZEXT816(4) * auVar4,8) != 0) {
        uVar18 = 0xffffffffffffffff;
      }
      puVar20 = operator_new__(uVar18);
      puVar25 = puVar20;
      for (puVar19 = (uint *)this->ds; puVar19 < puVar24; puVar19 = puVar19 + 1) {
        *puVar25 = *puVar19;
        puVar25 = puVar25 + 1;
      }
      operator_delete__(this->ds);
      this->ds = (int *)puVar20;
      this->stacke = (int *)(puVar20 + this->current_delete_size);
    }
    *puVar25 = this->up;
    pdVar3 = this->pts;
    lVar27 = (longlong)(int)(uVar40 * 3);
    puVar24 = puVar25 + 1;
    dVar44 = dVar10 / (dVar10 - dVar44);
    dVar38 = dVar32 - dVar44;
    pdVar3[this->p * 3] = dVar38 * pdVar3[this->up * 3] + dVar44 * pdVar3[lVar27];
    pdVar3 = this->pts;
    pdVar3[(longlong)(this->p * 3) + 1] =
         dVar38 * pdVar3[(longlong)(this->up * 3) + 1] + dVar44 * pdVar3[lVar27 + 1];
    pdVar3 = this->pts;
    pdVar3[(longlong)(this->p * 3) + 2] =
         dVar38 * pdVar3[(longlong)(this->up * 3) + 2] + dVar44 * pdVar3[lVar27 + 2];
    this->nu[this->p] = 3;
    local_c8 = puVar24;
    if (this->mec[3] == this->mem[3]) {
      add_memory<voro::voronoicell>(this,param_1,3,(int *)local_c0);
    }
    local_res20 = 2;
    iVar29 = this->mec[3];
    piVar26 = this->mep[3];
    this->mec[3] = iVar29 + 1;
    this->ed[this->p] = piVar26 + iVar29 * 7;
    this->ed[this->p][6] = this->p;
    iVar29 = (int)uVar42;
    this->ed[this->up][iVar29] = -1;
    this->ed[(int)uVar40][(int)uVar28] = this->p;
    this->ed[(int)uVar40][(int)(this->nu[(int)uVar40] + uVar28)] = 1;
    this->ed[this->p][1] = uVar40;
    this->ed[this->p][(longlong)this->nu[this->p] + 1] = uVar28;
    uVar36 = (ulonglong)this->up;
    param_5 = (double)CONCAT44(param_5._4_4_,this->up);
    if (iVar29 == this->nu[uVar36] + -1) {
      uVar40 = 0;
    }
    else {
      uVar40 = iVar29 + 1;
    }
    goto LAB_1436a739c;
  }
  bVar13 = search_for_outside_edge<voro::voronoicell>(this,param_1,&this->up);
  if (!bVar13) {
    return false;
  }
  pppiVar1 = &this->ed;
  uVar36 = 0;
  uVar42 = 0;
  this->pts[this->p * 3] = this->pts[this->up * 3];
  this->pts[(longlong)(this->p * 3) + 1] = this->pts[(longlong)(this->up * 3) + 1];
  this->pts[(longlong)(this->p * 3) + 2] = this->pts[(longlong)(this->up * 3) + 2];
  pdVar3 = this->pts;
  lVar27 = (longlong)*(*pppiVar1)[this->up];
  local_d0 = this->py * pdVar3[lVar27 * 3 + 1] + this->px * pdVar3[lVar27 * 3] +
             (pdVar3[lVar27 * 3 + 2] * this->pz - this->prsq);
  if (local_d0 < dVar12) {
LAB_1436a6be4:
    uVar28 = this->nu[this->up] - 1;
    lVar27 = (longlong)(int)uVar28;
    pdVar3 = this->pts;
    lVar41 = (longlong)(*pppiVar1)[this->up][lVar27];
    local_d0 = this->px * pdVar3[lVar41 * 3] + this->py * pdVar3[lVar41 * 3 + 1] +
               (pdVar3[lVar41 * 3 + 2] * this->pz - this->prsq);
    if (local_d0 < dVar12) goto LAB_1436a6c72;
    if (local_d0 <= dVar11) {
      iVar29 = check_marginal(this,(*pppiVar1)[this->up][lVar27],&local_d0);
      while (iVar29 == -1) {
LAB_1436a6c72:
        do {
          uVar28 = uVar28 - 1;
          lVar27 = lVar27 + -1;
          if (lVar27 == 0) {
            return true;
          }
          pdVar3 = this->pts;
          lVar41 = (longlong)this->ed[this->up][lVar27];
          local_d0 = pdVar3[lVar41 * 3 + 1] * this->py + this->px * pdVar3[lVar41 * 3] +
                     (pdVar3[lVar41 * 3 + 2] * this->pz - this->prsq);
        } while (local_d0 < dVar12);
        if (dVar11 < local_d0) break;
        iVar29 = check_marginal(this,this->ed[this->up][lVar27],&local_d0);
      }
    }
    uVar40 = 1;
    pdVar3 = this->pts;
    iVar29 = this->ed[this->up][1];
    lVar27 = (longlong)iVar29;
    local_d0 = this->px * pdVar3[lVar27 * 3] + this->py * pdVar3[lVar27 * 3 + 1] +
               (pdVar3[lVar27 * 3 + 2] * this->pz - this->prsq);
    if (dVar12 <= local_d0) {
      if (local_d0 <= dVar11) {
        iVar15 = check_marginal(this,iVar29,&local_d0);
        iVar29 = this->up;
        if (iVar15 == -1) goto LAB_1436a6d90;
      }
      else {
LAB_1436a6e32:
        iVar15 = 1;
        iVar29 = this->up;
      }
    }
    else {
      iVar29 = this->up;
LAB_1436a6d90:
      lVar27 = 4;
      do {
        while( true ) {
          lVar27 = lVar27 + 4;
          uVar40 = uVar40 + 1;
          pdVar3 = this->pts;
          iVar29 = *(int *)(lVar27 + (longlong)this->ed[iVar29]);
          lVar41 = (longlong)iVar29;
          local_d0 = pdVar3[lVar41 * 3 + 1] * this->py + this->px * pdVar3[lVar41 * 3] +
                     (pdVar3[lVar41 * 3 + 2] * this->pz - this->prsq);
          if (dVar12 <= local_d0) break;
          iVar29 = this->up;
        }
        if (dVar11 < local_d0) goto LAB_1436a6e32;
        iVar15 = check_marginal(this,iVar29,&local_d0);
        iVar29 = this->up;
      } while (iVar15 == -1);
    }
    if ((uVar28 == uVar40) && (iVar15 == 0)) {
      bVar14 = true;
      this->nu[this->p] = this->nu[iVar29];
    }
    else {
      this->nu[this->p] = (this->nu[iVar29] - uVar28) + 1 + uVar40;
    }
    iVar29 = this->p;
    uVar35 = 1;
    piVar26 = this->nu;
    local_res20 = 1;
    if (this->current_vertex_order <= piVar26[iVar29]) {
      do {
        add_memory_vorder<voro::voronoicell>(this,param_1);
        iVar29 = this->p;
        piVar26 = this->nu;
      } while (this->current_vertex_order <= piVar26[iVar29]);
    }
    iVar29 = piVar26[iVar29];
    if (this->mec[iVar29] == this->mem[iVar29]) {
      add_memory<voro::voronoicell>(this,param_1,iVar29,(int *)local_c0);
    }
    iVar17 = uVar28 + 1;
    iVar29 = this->nu[this->p];
    iVar15 = this->mec[iVar29];
    piVar26 = this->mep[iVar29];
    this->mec[iVar29] = iVar15 + 1;
    this->ed[this->p] = piVar26 + (iVar29 * 2 + 1) * iVar15;
    iVar29 = this->p;
    this->ed[iVar29][this->nu[iVar29] * 2] = iVar29;
    lVar27 = (longlong)this->up;
    piVar26 = this->nu;
    if (iVar17 < piVar26[lVar27]) {
      lVar41 = 4;
      lVar37 = (longlong)iVar17 * 4;
      do {
        piVar30 = this->ed[(int)lVar27];
        iVar15 = piVar26[(int)lVar27] + iVar17;
        iVar17 = iVar17 + 1;
        iVar29 = *(int *)((longlong)piVar30 + lVar37);
        iVar15 = piVar30[iVar15];
        *(int *)(lVar41 + (longlong)this->ed[this->p]) = iVar29;
        this->ed[this->p][(int)(this->nu[this->p] + uVar35)] = iVar15;
        this->ed[iVar29][iVar15] = this->p;
        this->ed[iVar29][this->nu[iVar29] + iVar15] = uVar35;
        uVar35 = uVar35 + 1;
        *(undefined4 *)(lVar37 + (longlong)this->ed[this->up]) = 0xffffffff;
        lVar27 = (longlong)this->up;
        piVar26 = this->nu;
        lVar41 = lVar41 + 4;
        lVar37 = lVar37 + 4;
        puVar24 = local_c8;
        local_res20 = uVar35;
      } while (iVar17 < piVar26[lVar27]);
    }
    iVar29 = 0;
    if (0 < (int)uVar40) {
      lVar41 = 0;
      lVar27 = (longlong)(int)local_res20 * 4;
      do {
        piVar26 = this->ed[this->up];
        iVar17 = this->nu[this->up] + iVar29;
        iVar29 = iVar29 + 1;
        iVar15 = piVar26[lVar41];
        iVar17 = piVar26[iVar17];
        *(int *)(lVar27 + (longlong)this->ed[this->p]) = iVar15;
        this->ed[this->p][(int)(this->nu[this->p] + local_res20)] = iVar17;
        this->ed[iVar15][iVar17] = this->p;
        this->ed[iVar15][this->nu[iVar15] + iVar17] = local_res20;
        local_res20 = local_res20 + 1;
        this->ed[this->up][lVar41] = -1;
        lVar41 = lVar41 + 1;
        lVar27 = lVar27 + 4;
        puVar24 = local_c8;
      } while (lVar41 < (int)uVar40);
    }
  }
  else {
    if (local_d0 <= dVar11) {
      uVar40 = check_marginal(this,*(*pppiVar1)[this->up],&local_d0);
      param_4 = (double)(ulonglong)uVar40;
      if (uVar40 == 0xffffffff) goto LAB_1436a6be4;
    }
    else {
      param_4 = 4.94065645841247e-324;
      uVar42 = uVar36;
    }
    do {
      uVar36 = uVar36 + 1;
      iVar29 = (int)uVar42;
      uVar40 = iVar29 + 1;
      uVar42 = (ulonglong)uVar40;
      if (uVar40 == this->nu[this->up]) {
        return false;
      }
      pdVar3 = this->pts;
      lVar27 = (longlong)(*pppiVar1)[this->up][uVar36];
      local_d0 = pdVar3[lVar27 * 3 + 1] * this->py + this->px * pdVar3[lVar27 * 3] +
                 (pdVar3[lVar27 * 3 + 2] * this->pz - this->prsq);
    } while ((dVar12 <= local_d0) &&
            ((dVar11 < local_d0 ||
             (iVar15 = check_marginal(this,(*pppiVar1)[this->up][uVar36],&local_d0), iVar15 != -1)))
            );
    lVar27 = (longlong)this->up;
    iVar29 = iVar29 + 2;
    if (iVar29 < this->nu[lVar27]) {
      lVar41 = (longlong)iVar29 * 4;
      do {
        pdVar3 = this->pts;
        iVar15 = *(int *)(lVar41 + (longlong)this->ed[(int)lVar27]);
        lVar27 = (longlong)iVar15;
        local_d0 = this->px * pdVar3[lVar27 * 3] + pdVar3[lVar27 * 3 + 1] * this->py +
                   (pdVar3[lVar27 * 3 + 2] * this->pz - this->prsq);
        if ((dVar12 <= local_d0) &&
           ((dVar11 < local_d0 || (iVar15 = check_marginal(this,iVar15,&local_d0), iVar15 != -1))))
        break;
        lVar27 = (longlong)this->up;
        iVar29 = iVar29 + 1;
        lVar41 = lVar41 + 4;
      } while (iVar29 < this->nu[lVar27]);
    }
    iVar15 = this->nu[this->up];
    if (((iVar29 == iVar15) && (uVar40 == 1)) && (param_4._0_4_ == 0)) {
      bVar14 = true;
    }
    else {
      iVar15 = (iVar29 - uVar40) + 2;
    }
    uVar35 = 1;
    local_res20 = 1;
    this->nu[this->p] = iVar15;
    iVar15 = this->p;
    piVar26 = this->nu;
    if (this->current_vertex_order <= piVar26[iVar15]) {
      do {
        add_memory_vorder<voro::voronoicell>(this,param_1);
        iVar15 = this->p;
        piVar26 = this->nu;
      } while (this->current_vertex_order <= piVar26[iVar15]);
    }
    iVar15 = piVar26[iVar15];
    if (this->mec[iVar15] == this->mem[iVar15]) {
      add_memory<voro::voronoicell>(this,param_1,iVar15,(int *)local_c0);
    }
    iVar15 = this->nu[this->p];
    iVar17 = this->mec[iVar15];
    piVar26 = this->mep[iVar15];
    this->mec[iVar15] = iVar17 + 1;
    this->ed[this->p] = piVar26 + (iVar15 * 2 + 1) * iVar17;
    iVar15 = this->p;
    this->ed[iVar15][this->nu[iVar15] * 2] = iVar15;
    uVar28 = uVar40;
    if (uVar40 == 0) {
      uVar28 = this->nu[this->up];
    }
    uVar28 = uVar28 - 1;
    if ((longlong)uVar36 < (longlong)iVar29) {
      lVar27 = 4;
      do {
        piVar26 = this->ed[this->up];
        iVar17 = (int)uVar42;
        uVar40 = iVar17 + 1;
        uVar42 = (ulonglong)uVar40;
        iVar15 = piVar26[uVar36];
        iVar17 = piVar26[this->nu[this->up] + iVar17];
        *(int *)(lVar27 + (longlong)this->ed[this->p]) = iVar15;
        this->ed[this->p][(int)(this->nu[this->p] + uVar35)] = iVar17;
        this->ed[iVar15][iVar17] = this->p;
        this->ed[iVar15][this->nu[iVar15] + iVar17] = uVar35;
        uVar35 = uVar35 + 1;
        this->ed[this->up][uVar36] = -1;
        uVar36 = uVar36 + 1;
        lVar27 = lVar27 + 4;
        puVar24 = local_c8;
        local_res20 = uVar35;
      } while ((longlong)uVar36 < (longlong)iVar29);
    }
    if (uVar40 == this->nu[this->up]) {
      uVar40 = 0;
    }
  }
  if (local_c0 == (uint *)this->stacke2) {
    add_memory_ds2(this,(int **)local_a8);
    local_c0 = local_a8[0];
  }
  *local_c0 = this->up;
  local_c0 = local_c0 + 1;
  uVar36 = (ulonglong)this->up;
  piVar26 = this->ed[uVar36];
  param_5 = (double)CONCAT44(param_5._4_4_,this->up);
  local_res18 = piVar26[(int)(this->nu[uVar36] + uVar28)];
  uVar42 = (ulonglong)local_res18;
  this->up = piVar26[(int)uVar28];
  this->ed[uVar36][this->nu[uVar36] * 2] = -this->p;
LAB_1436a739c:
  iVar29 = this->p;
  local_d8 = iVar29;
  do {
    this->p = local_d8 + 1;
    while( true ) {
      iVar15 = (int)uVar36;
      uVar28 = (uint)uVar42;
      if ((iVar15 == this->up) && (uVar40 == uVar28)) {
        lVar27 = (longlong)local_d8;
        this->ed[lVar27][(int)local_res20] = iVar29;
        *this->ed[iVar29] = local_d8;
        this->ed[lVar27][(int)(this->nu[lVar27] + local_res20)] = 0;
        this->ed[iVar29][this->nu[iVar29]] = local_res20;
        puVar25 = (uint *)this->ds;
        if (puVar25 < puVar24) {
          do {
            if (this->ed[(int)*puVar25][this->nu[(int)*puVar25]] == -1) {
              puVar19 = puVar24 + -1;
              puVar24 = puVar24 + -1;
              *puVar25 = *puVar19;
            }
            else {
              this->ed[(int)*puVar25][this->nu[(int)*puVar25]] = -1;
              puVar25 = puVar25 + 1;
            }
          } while (puVar25 < puVar24);
        }
        puVar25 = (uint *)this->ds2;
        puVar19 = local_c0;
        if (puVar25 < local_c0) {
          do {
            uVar40 = *puVar25;
            this->ed[(int)uVar40][this->nu[(int)uVar40] * 2] = uVar40;
            if (this->ed[(int)uVar40][this->nu[(int)uVar40]] != -1) {
              this->ed[(int)uVar40][this->nu[(int)uVar40]] = -1;
              puVar20 = puVar24;
              if (puVar24 == (uint *)this->stacke) {
                this->current_delete_size = this->current_delete_size << 1;
                if (0x1000000 < this->current_delete_size) {
                  voro_fatal_error("Delete stack 1 memory allocation exceeded absolute maximum",2);
                }
                auVar7._8_8_ = 0;
                auVar7._0_8_ = (longlong)this->current_delete_size;
                uVar18 = SUB168(ZEXT816(4) * auVar7,0);
                if (SUB168(ZEXT816(4) * auVar7,8) != 0) {
                  uVar18 = 0xffffffffffffffff;
                }
                puVar21 = operator_new__(uVar18);
                puVar20 = puVar21;
                for (puVar19 = (uint *)this->ds; puVar19 < puVar24; puVar19 = puVar19 + 1) {
                  *puVar20 = *puVar19;
                  puVar20 = puVar20 + 1;
                }
                operator_delete__(this->ds);
                this->ds = (int *)puVar21;
                this->stacke = (int *)(puVar21 + this->current_delete_size);
                puVar19 = local_c0;
              }
              *puVar20 = uVar40;
              puVar24 = puVar20 + 1;
            }
            puVar25 = puVar25 + 1;
          } while (puVar25 < puVar19);
        }
        puVar25 = (uint *)this->ds;
        if (puVar25 < puVar24) {
          do {
            uVar40 = *puVar25;
            piVar26 = this->nu;
            ppiVar31 = this->ed;
            puVar19 = (uint *)ppiVar31[(int)uVar40];
            if (puVar19 < puVar19 + piVar26[(int)uVar40]) {
              do {
                uVar28 = *puVar19;
                if ((uVar28 != 0xffffffff) && (ppiVar31[(int)uVar28][piVar26[(int)uVar28]] != -1)) {
                  puVar20 = puVar24;
                  if (puVar24 == (uint *)this->stacke) {
                    this->current_delete_size = this->current_delete_size << 1;
                    if (0x1000000 < this->current_delete_size) {
                      voro_fatal_error("Delete stack 1 memory allocation exceeded absolute maximum",
                                       2);
                    }
                    auVar8._8_8_ = 0;
                    auVar8._0_8_ = (longlong)this->current_delete_size;
                    uVar18 = SUB168(ZEXT816(4) * auVar8,0);
                    if (SUB168(ZEXT816(4) * auVar8,8) != 0) {
                      uVar18 = 0xffffffffffffffff;
                    }
                    puVar22 = operator_new__(uVar18);
                    puVar20 = puVar22;
                    for (puVar21 = (uint *)this->ds; puVar21 < puVar24; puVar21 = puVar21 + 1) {
                      *puVar20 = *puVar21;
                      puVar20 = puVar20 + 1;
                    }
                    operator_delete__(this->ds);
                    this->ds = (int *)puVar22;
                    this->stacke = (int *)(puVar22 + this->current_delete_size);
                    puVar25 = puVar22 + (int)((longlong)puVar24 - (longlong)puVar25 >> 2);
                  }
                  *puVar20 = uVar28;
                  puVar24 = puVar20 + 1;
                  this->ed[(int)uVar28][this->nu[(int)uVar28]] = -1;
                }
                piVar26 = this->nu;
                puVar19 = puVar19 + 1;
                ppiVar31 = this->ed;
              } while (puVar19 < ppiVar31[(int)uVar40] + piVar26[(int)uVar40]);
            }
            puVar25 = puVar25 + 1;
          } while (puVar25 < puVar24);
        }
        this->up = 0;
        if (this->ds < puVar24) {
          do {
            piVar26 = this->nu;
            iVar15 = this->p + -1;
            ppiVar31 = this->ed;
            this->p = iVar15;
            iVar29 = ppiVar31[iVar15][piVar26[iVar15]];
            while (iVar29 == -1) {
              iVar29 = piVar26[iVar15];
              lVar27 = (longlong)iVar29;
              piVar30 = ppiVar31[iVar15];
              piVar33 = this->mec;
              piVar26 = piVar33 + lVar27;
              *piVar26 = *piVar26 + -1;
              ppiVar31 = this->ed;
              piVar26 = this->mep[lVar27] + (iVar29 * 2 + 1) * piVar33[lVar27];
              iVar15 = this->p;
              if (piVar30 < ppiVar31[iVar15] + lVar27 * 2 + 1) {
                do {
                  iVar15 = *piVar26;
                  piVar26 = piVar26 + 1;
                  *piVar30 = iVar15;
                  piVar30 = piVar30 + 1;
                  iVar15 = this->p;
                  ppiVar31 = this->ed;
                } while (piVar30 < ppiVar31[iVar15] + lVar27 * 2 + 1);
              }
              ppiVar31[ppiVar31[iVar15][iVar29 * 2]] = ppiVar31[iVar15];
              iVar15 = this->p + -1;
              this->p = iVar15;
              piVar26 = this->nu;
              ppiVar31 = this->ed;
              iVar29 = ppiVar31[iVar15][piVar26[iVar15]];
            }
            uVar40 = puVar24[-1];
            puVar24 = puVar24 + -1;
            this->up = uVar40;
            if ((int)uVar40 < iVar15) {
              this->pts[(int)(uVar40 * 3)] = this->pts[iVar15 * 3];
              this->pts[(longlong)(this->up * 3) + 1] = this->pts[(longlong)(this->p * 3) + 1];
              this->pts[(longlong)(this->up * 3) + 2] = this->pts[(longlong)(this->p * 3) + 2];
              iVar29 = this->nu[this->up];
              lVar27 = (longlong)iVar29;
              piVar30 = this->ed[this->up];
              piVar33 = this->mec;
              piVar26 = piVar33 + lVar27;
              *piVar26 = *piVar26 + -1;
              ppiVar31 = this->ed;
              piVar26 = this->mep[lVar27] + (iVar29 * 2 + 1) * piVar33[lVar27];
              iVar15 = this->up;
              if (piVar30 < ppiVar31[iVar15] + lVar27 * 2 + 1) {
                do {
                  iVar15 = *piVar26;
                  piVar26 = piVar26 + 1;
                  *piVar30 = iVar15;
                  iVar15 = this->up;
                  piVar30 = piVar30 + 1;
                  ppiVar31 = this->ed;
                } while (piVar30 < ppiVar31[iVar15] + lVar27 * 2 + 1);
              }
              ppiVar31[ppiVar31[iVar15][iVar29 * 2]] = ppiVar31[iVar15];
              this->ed[this->up] = this->ed[this->p];
              this->nu[this->up] = this->nu[this->p];
              iVar29 = this->up;
              lVar27 = (longlong)iVar29;
              piVar26 = this->nu;
              uVar42 = 0;
              uVar36 = 0;
              if (0 < piVar26[lVar27]) {
                do {
                  iVar29 = (int)lVar27;
                  piVar30 = this->ed[iVar29];
                  uVar40 = (int)uVar42 + 1;
                  this->ed[*(int *)(uVar36 + (longlong)piVar30)]
                  [piVar30[piVar26[iVar29] + (int)uVar42]] = iVar29;
                  iVar29 = this->up;
                  lVar27 = (longlong)iVar29;
                  piVar26 = this->nu;
                  uVar42 = (ulonglong)uVar40;
                  uVar36 = uVar36 + 4;
                } while ((int)uVar40 < piVar26[lVar27]);
              }
              this->ed[iVar29][piVar26[iVar29] * 2] = iVar29;
            }
            else {
              this->up = iVar15;
              this->p = iVar15 + 1;
            }
          } while (this->ds < puVar24);
        }
        if (0 < *this->mec) {
          voro_fatal_error("Zero order vertex formed",3);
        }
        bVar14 = collapse_order2<voro::voronoicell>(this,param_1);
        return bVar14;
      }
      pdVar3 = this->pts;
      uVar35 = this->ed[iVar15][(int)uVar40];
      lVar27 = (longlong)(int)uVar35;
      dVar44 = this->py * pdVar3[lVar27 * 3 + 1] + this->px * pdVar3[lVar27 * 3] +
               (pdVar3[lVar27 * 3 + 2] * this->pz - this->prsq);
      local_d0 = dVar44;
      if (dVar44 < dVar12) break;
      if ((dVar11 < dVar44) || (iVar16 = check_marginal(this,uVar35,&local_d0), iVar16 == 1)) {
        param_5 = (double)CONCAT44(param_5._4_4_,uVar35);
        iVar17 = this->nu[iVar15] + uVar40;
        uVar40 = 0;
        if (this->ed[iVar15][iVar17] != this->nu[lVar27] + -1) {
          uVar40 = this->ed[iVar15][iVar17] + 1;
        }
        puVar25 = puVar24;
        if (puVar24 == (uint *)this->stacke) {
          this->current_delete_size = this->current_delete_size << 1;
          if (0x1000000 < this->current_delete_size) {
            voro_fatal_error("Delete stack 1 memory allocation exceeded absolute maximum",2);
          }
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (longlong)this->current_delete_size;
          uVar18 = SUB168(ZEXT816(4) * auVar6,0);
          if (SUB168(ZEXT816(4) * auVar6,8) != 0) {
            uVar18 = 0xffffffffffffffff;
          }
          puVar20 = operator_new__(uVar18);
          puVar25 = puVar20;
          for (puVar19 = (uint *)this->ds; puVar19 < puVar24; puVar19 = puVar19 + 1) {
            *puVar25 = *puVar19;
            puVar25 = puVar25 + 1;
          }
          operator_delete__(this->ds);
          this->ds = (int *)puVar20;
          this->stacke = (int *)(puVar20 + this->current_delete_size);
        }
        uVar36 = (ulonglong)uVar35;
        *puVar25 = uVar35;
        puVar24 = puVar25 + 1;
        dVar10 = dVar44;
        local_c8 = puVar24;
      }
      else {
        iVar17 = this->current_vertices;
        iVar39 = this->p;
        if (iVar16 == -1) goto LAB_1436a7463;
        if (iVar39 == iVar17) {
          add_memory_vertices<voro::voronoicell>(this,param_1);
        }
        lVar41 = (longlong)(int)param_5._0_4_;
        param_5 = (double)CONCAT44(param_5._4_4_,uVar35);
        uVar43 = (ulonglong)this->ed[iVar15][(int)(this->nu[lVar41] + uVar40)];
        uVar42 = uVar43;
        uVar36 = uVar43;
        uVar40 = (uint)!bVar14;
        local_b0 = lVar27;
        do {
          do {
            uVar35 = uVar40;
            uVar34 = 0;
            uVar40 = uVar35 + 1;
            uVar2 = uVar42 + 1;
            uVar42 = uVar34;
            if ((int)uVar36 != this->nu[lVar27] + -1) {
              uVar34 = (ulonglong)((int)uVar36 + 1);
              uVar42 = uVar2;
            }
            pdVar3 = this->pts;
            iVar15 = this->ed[lVar27][uVar42];
            lVar41 = (longlong)iVar15;
            local_d0 = pdVar3[lVar41 * 3 + 1] * this->py + this->px * pdVar3[lVar41 * 3] +
                       (pdVar3[lVar41 * 3 + 2] * this->pz - this->prsq);
            uVar36 = uVar34;
          } while (local_d0 < dVar12);
          if (dVar11 < local_d0) {
            iVar17 = 1;
            break;
          }
          iVar17 = check_marginal(this,iVar15,&local_d0);
          lVar27 = local_b0;
        } while (iVar17 == -1);
        piVar26 = this->nu;
        ppiVar31 = this->ed;
        local_a8[0] = (uint *)ppiVar31[(int)param_5._0_4_];
        iVar39 = -local_a8[0][piVar26[(int)param_5._0_4_] * 2];
        if ((param_5._0_4_ == this->up) && ((uint)uVar34 == uVar28)) {
          param_4._0_1_ = false;
          if (0 < iVar39) {
            uVar40 = uVar40 + piVar26[iVar39];
          }
        }
        else if (iVar39 < 1) {
          if (iVar17 != 0) goto LAB_1436a7889;
          param_4._0_1_ = -ppiVar31[iVar15][piVar26[iVar15] * 2] == local_d8;
          if (param_4._0_1_) {
            uVar40 = uVar35;
          }
        }
        else {
          uVar40 = uVar40 + piVar26[iVar39];
          if (iVar17 == 0) {
            iVar17 = -ppiVar31[iVar15][piVar26[iVar15] * 2];
            if (iVar17 < 1) {
              if (((iVar39 != iVar29) || (iVar15 != this->up)) ||
                 (local_a8[0][(int)(piVar26[(int)param_5._0_4_] + (uint)uVar34)] != uVar28))
              goto LAB_1436a7889;
              param_4._0_1_ = true;
              uVar40 = uVar40 - 1;
            }
            else {
              param_4._0_1_ = ppiVar31[iVar17][(longlong)piVar26[iVar17] + -1] == iVar39;
              if (param_4._0_1_) {
                uVar40 = uVar40 - 1;
              }
            }
          }
          else {
LAB_1436a7889:
            param_4._0_1_ = false;
          }
        }
        iVar15 = this->current_vertex_order;
        while (iVar15 <= (int)uVar40) {
          add_memory_vorder<voro::voronoicell>(this,param_1);
          iVar15 = this->current_vertex_order;
        }
        if (this->mec[(int)uVar40] == this->mem[(int)uVar40]) {
          add_memory<voro::voronoicell>(this,param_1,uVar40,(int *)local_c0);
        }
        if (iVar39 < 1) {
          iVar15 = this->mec[(int)uVar40];
          piVar26 = this->mep[(int)uVar40];
          this->mec[(int)uVar40] = iVar15 + 1;
          this->ed[this->p] = piVar26 + (int)((uVar40 * 2 + 1) * iVar15);
          this->ed[this->p][(int)(uVar40 * 2)] = this->p;
          puVar24 = local_c0;
          if (local_c0 == (uint *)this->stacke2) {
            this->current_delete2_size = this->current_delete2_size << 1;
            if (0x1000000 < this->current_delete2_size) {
              voro_fatal_error("Delete stack 2 memory allocation exceeded absolute maximum",2);
            }
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (longlong)this->current_delete2_size;
            uVar18 = SUB168(ZEXT816(4) * auVar5,0);
            if (SUB168(ZEXT816(4) * auVar5,8) != 0) {
              uVar18 = 0xffffffffffffffff;
            }
            puVar19 = operator_new__(uVar18);
            puVar24 = puVar19;
            for (puVar25 = (uint *)this->ds2; puVar25 < local_c0; puVar25 = puVar25 + 1) {
              *puVar24 = *puVar25;
              puVar24 = puVar24 + 1;
            }
            operator_delete__(this->ds2);
            this->ds2 = (int *)puVar19;
            this->stacke2 = (int *)(puVar19 + this->current_delete2_size);
          }
          *puVar24 = param_5._0_4_;
          local_c0 = puVar24 + 1;
          lVar27 = (longlong)(int)(param_5._0_4_ * 3);
          this->pts[this->p * 3] = this->pts[lVar27];
          this->pts[(longlong)(this->p * 3) + 1] = this->pts[lVar27 + 1];
          this->pts[(longlong)(this->p * 3) + 2] = this->pts[lVar27 + 2];
          uVar28 = 0;
          this->ed[(int)param_5._0_4_][this->nu[(int)param_5._0_4_] * 2] = -this->p;
          iVar39 = this->p;
          this->p = iVar39 + 1;
        }
        else {
          uVar28 = this->nu[iVar39];
          if (uVar28 != uVar40) {
            uVar28 = 0;
            iVar15 = this->mec[(int)uVar40];
            iVar17 = (uVar40 * 2 + 1) * iVar15;
            piVar26 = this->mep[(int)uVar40];
            local_b8 = piVar26 + iVar17;
            this->mec[(int)uVar40] = iVar15 + 1;
            if (0 < this->nu[iVar39]) {
              piVar26 = piVar26 + iVar17;
              piVar30 = piVar26;
              do {
                *piVar30 = *(int *)((longlong)this->ed[iVar39] + (-4 - (longlong)piVar26) +
                                   (longlong)(piVar30 + 1));
                iVar15 = this->nu[iVar39] + uVar28;
                uVar28 = uVar28 + 1;
                piVar30[(int)uVar40] = this->ed[iVar39][iVar15];
                piVar30 = piVar30 + 1;
              } while ((int)uVar28 < this->nu[iVar39]);
            }
            local_b8[(int)(uVar40 * 2)] = iVar39;
            iVar15 = this->nu[iVar39];
            piVar30 = this->mec;
            piVar26 = piVar30 + iVar15;
            *piVar26 = *piVar26 + -1;
            piVar33 = this->nu;
            piVar26 = this->mep[piVar33[iVar39]] + (piVar33[iVar39] * 2 + 1) * piVar30[iVar15];
            if (piVar26 != this->ed[iVar39]) {
              uVar42 = 0;
              uVar36 = uVar42;
              if (-1 < piVar33[iVar39] * 2) {
                do {
                  uVar35 = (int)uVar36 + 1;
                  *(undefined4 *)(uVar42 + (longlong)this->ed[iVar39]) =
                       *(undefined4 *)(uVar42 + (longlong)piVar26);
                  piVar33 = this->nu;
                  uVar42 = uVar42 + 4;
                  uVar36 = (ulonglong)uVar35;
                } while ((int)uVar35 <= piVar33[iVar39] * 2);
              }
              this->ed[piVar26[piVar33[iVar39] * 2]] = this->ed[iVar39];
            }
            this->ed[iVar39] = local_b8;
          }
        }
        this->nu[iVar39] = uVar40;
        if (!bVar14) {
          lVar27 = (longlong)local_d8;
          this->ed[iVar39][(int)uVar28] = local_d8;
          this->ed[iVar39][(int)(this->nu[iVar39] + uVar28)] = local_res20;
          this->ed[lVar27][(int)local_res20] = iVar39;
          this->ed[lVar27][(int)(this->nu[lVar27] + local_res20)] = uVar28;
          uVar28 = uVar28 + 1;
        }
        local_res8 = (longlong)(int)uVar28 * 4;
        uVar42 = uVar43;
        while( true ) {
          uVar35 = uVar40;
          if (!param_4._0_1_) {
            uVar35 = uVar40 - 1;
          }
          iVar15 = (int)uVar43;
          if ((int)uVar35 <= (int)uVar28) break;
          iVar17 = this->nu[local_b0];
          if (iVar15 == iVar17 + -1) {
            uVar35 = 0;
            uVar42 = 0;
          }
          else {
            uVar35 = iVar15 + 1;
            uVar42 = uVar42 + 1;
          }
          uVar43 = (ulonglong)uVar35;
          piVar26 = this->ed[local_b0];
          iVar15 = piVar26[(int)(uVar35 + iVar17)];
          iVar17 = piVar26[uVar42];
          *(int *)(local_res8 + (longlong)this->ed[iVar39]) = iVar17;
          this->ed[iVar39][(int)(this->nu[iVar39] + uVar28)] = iVar15;
          this->ed[iVar17][iVar15] = iVar39;
          this->ed[iVar17][this->nu[iVar17] + iVar15] = uVar28;
          uVar28 = uVar28 + 1;
          local_res8 = local_res8 + 4;
          this->ed[local_b0][uVar42] = -1;
        }
        uVar42 = (ulonglong)local_res18;
        if (iVar15 == this->nu[(int)param_5._0_4_] + -1) {
          uVar40 = 0;
        }
        else {
          uVar40 = iVar15 + 1;
        }
        uVar36 = (ulonglong)param_5 & 0xffffffff;
        puVar24 = local_c8;
        local_res20 = uVar28;
        local_d8 = iVar39;
        bVar14 = param_4._0_1_;
      }
    }
    iVar17 = this->current_vertices;
    iVar39 = this->p;
LAB_1436a7463:
    if (iVar39 == iVar17) {
      add_memory_vertices<voro::voronoicell>(this,param_1);
    }
    pdVar3 = this->pts;
    lVar23 = (longlong)(int)param_5._0_4_;
    lVar37 = (longlong)(int)(param_5._0_4_ * 3);
    lVar41 = (longlong)(int)(uVar35 * 3);
    dVar38 = dVar10 / (dVar10 - dVar44);
    dVar44 = dVar32 - dVar38;
    pdVar3[this->p * 3] = dVar44 * pdVar3[lVar37] + dVar38 * pdVar3[lVar41];
    pdVar3 = this->pts;
    pdVar3[(longlong)(this->p * 3) + 1] = dVar44 * pdVar3[lVar37 + 1] + dVar38 * pdVar3[lVar41 + 1];
    pdVar3 = this->pts;
    pdVar3[(longlong)(this->p * 3) + 2] = dVar44 * pdVar3[lVar37 + 2] + dVar38 * pdVar3[lVar41 + 2];
    this->nu[this->p] = 3;
    if (this->mec[3] == this->mem[3]) {
      add_memory<voro::voronoicell>(this,param_1,3,(int *)local_c0);
    }
    iVar15 = this->mec[3];
    lVar41 = (longlong)local_d8;
    iVar17 = this->ed[lVar23][(int)(this->nu[lVar23] + uVar40)];
    piVar26 = this->mep[3];
    this->mec[3] = iVar15 + 1;
    this->ed[this->p] = piVar26 + iVar15 * 7;
    *this->ed[this->p] = local_d8;
    this->ed[this->p][1] = uVar35;
    this->ed[this->p][3] = local_res20;
    this->ed[this->p][4] = iVar17;
    this->ed[this->p][6] = this->p;
    this->ed[lVar27][iVar17] = this->p;
    uVar36 = (ulonglong)(int)param_5._0_4_;
    this->ed[lVar27][this->nu[lVar27] + iVar17] = 1;
    this->ed[lVar41][(int)local_res20] = this->p;
    this->ed[lVar41][(int)(this->nu[lVar41] + local_res20)] = 0;
    this->ed[uVar36][(int)uVar40] = -1;
    if (uVar40 == this->nu[lVar23] - 1U) {
      local_d8 = this->p;
      uVar40 = 0;
      local_res20 = 2;
    }
    else {
      local_d8 = this->p;
      uVar40 = uVar40 + 1;
      local_res20 = 2;
    }
  } while( true );
}

// nplane<voro::voronoicell_neighbor> @ 1436a83e0

bool __thiscall
voro::voronoicell_base::nplane<voro::voronoicell_neighbor>
          (voronoicell_base *this,voronoicell_neighbor *param_1,double param_2,double param_3,
          double param_4,double param_5,int param_6)

{
  int ***pppiVar1;
  uint uVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulong64 uVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  uint uVar22;
  int *piVar23;
  double **ppdVar24;
  uint *puVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  uint *puVar30;
  int iVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  int *piVar35;
  longlong lVar36;
  int **ppiVar37;
  int iVar38;
  double *pdVar39;
  double dVar40;
  ulonglong uVar41;
  uint uVar42;
  double dVar43;
  double dVar44;
  uint local_res18;
  uint local_res20;
  uint local_e8;
  int local_e4;
  double local_e0;
  double **local_d8;
  uint *local_d0;
  int *local_c8;
  longlong local_c0;
  uint *local_b8;
  uint *local_b0;
  int *local_a8;
  
  uVar27 = 0;
  puVar25 = (uint *)this->ds;
  uVar26 = this->up;
  lVar29 = (longlong)(int)uVar26;
  dVar40 = 0.0;
  this->pz = param_4;
  dVar10 = __real_3db5fd7fe1796495;
  local_d0 = (uint *)this->ds2;
  this->px = param_2;
  this->py = param_3;
  this->prsq = param_5;
  this->n_marg = 0;
  dVar11 = __real_bdb5fd7fe1796495;
  pdVar39 = this->pts;
  local_e4 = 0;
  local_res18 = 0;
  iVar38 = 0;
  bVar13 = false;
  dVar9 = param_3 * pdVar39[lVar29 * 3 + 1] + param_2 * pdVar39[lVar29 * 3] +
          (param_4 * pdVar39[lVar29 * 3 + 2] - param_5);
  param_5._4_4_ = (uint)((ulonglong)dVar9 >> 0x20);
  dVar43 = 0.0;
  local_b8 = puVar25;
  local_b0 = local_d0;
  if (dVar9 < __real_bdb5fd7fe1796495) {
    param_5 = (double)CONCAT44(param_5._4_4_,0xffffffff);
LAB_1436a8952:
    local_res18 = 0;
    param_4 = 0.0;
    do {
      local_d8 = (double **)&this->nu;
      pdVar39 = this->pts;
      iVar14 = *(int *)((longlong)param_4 + (longlong)this->ed[this->up]);
      lVar28 = (longlong)iVar14;
      dVar44 = this->py * pdVar39[lVar28 * 3 + 1] + pdVar39[lVar28 * 3] * this->px +
               (pdVar39[lVar28 * 3 + 2] * this->pz - this->prsq);
      local_e0 = dVar44;
      if (dVar11 <= dVar44) {
        if (dVar44 <= dVar10) {
          iVar31 = check_marginal(this,iVar14,&local_e0);
        }
        else {
          iVar31 = 1;
        }
      }
      else {
        iVar31 = -1;
      }
      if (dVar9 < dVar44) break;
      local_d8 = (double **)&this->nu;
      param_4 = (double)((longlong)param_4 + 4);
      local_res18 = (int)uVar27 + 1;
      uVar27 = (ulonglong)local_res18;
    } while ((int)local_res18 < this->nu[this->up]);
    pdVar39 = (double *)this->nu;
    iVar15 = *(int *)((longlong)pdVar39 + (longlong)this->up * 4);
    if ((int)uVar27 == iVar15) {
      return true;
    }
    if (iVar31 != -1) {
LAB_1436a9064:
      dVar40 = dVar9;
      if (iVar31 == 1) {
        uVar26 = this->up;
        this->up = iVar14;
        iVar38 = (int)uVar27;
        local_res18 = this->ed[(int)uVar26]
                      [*(int *)((longlong)pdVar39 + (longlong)(int)uVar26 * 4) + iVar38];
        uVar27 = (ulonglong)local_res18;
        dVar9 = dVar44;
        goto LAB_1436a9098;
      }
      this->up = iVar14;
      dVar9 = dVar40;
      goto LAB_1436a8817;
    }
    local_e4 = 1;
    iVar15 = this->ed[this->up][iVar15 + (int)uVar27];
    iVar14 = this->p;
    if (1 < iVar14) {
      do {
        dVar9 = dVar44;
        piVar23 = (int *)(longlong)iVar15;
        this->up = (int)lVar28;
        local_res18 = 0;
        uVar27 = 0;
        lVar32 = 0;
        dVar44 = dVar9;
        local_c8 = piVar23;
        if (0 < iVar15) {
          do {
            pdVar39 = this->pts;
            lVar28 = (longlong)this->ed[this->up][lVar32];
            dVar44 = pdVar39[lVar28 * 3 + 1] * this->py + this->px * pdVar39[lVar28 * 3] +
                     (pdVar39[lVar28 * 3 + 2] * this->pz - this->prsq);
            local_e0 = dVar44;
            if (dVar11 <= dVar44) {
              if (dVar44 <= dVar10) {
                iVar31 = check_marginal(this,this->ed[this->up][lVar32],&local_e0);
                piVar23 = local_c8;
              }
              else {
                iVar31 = 1;
              }
            }
            else {
              iVar31 = -1;
            }
            if (dVar9 < dVar44) break;
            uVar27 = (ulonglong)((int)uVar27 + 1);
            lVar32 = lVar32 + 1;
          } while (lVar32 < (longlong)piVar23);
          local_res18 = (uint)uVar27;
          puVar25 = local_b8;
        }
        pdVar39 = *local_d8;
        if ((int)uVar27 == iVar15) {
          lVar36 = (longlong)this->up;
          local_res18 = (int)uVar27 + 1;
          uVar27 = (ulonglong)local_res18;
          ppdVar24 = local_d8;
          if ((int)local_res18 < *(int *)((longlong)pdVar39 + lVar36 * 4)) {
            lVar32 = lVar32 * 4;
            do {
              lVar32 = lVar32 + 4;
              pdVar39 = this->pts;
              iVar14 = *(int *)(lVar32 + (longlong)this->ed[(int)lVar36]);
              lVar28 = (longlong)iVar14;
              dVar44 = this->py * pdVar39[lVar28 * 3 + 1] + this->px * pdVar39[lVar28 * 3] +
                       (pdVar39[lVar28 * 3 + 2] * this->pz - this->prsq);
              local_e0 = dVar44;
              if (dVar11 <= dVar44) {
                if (dVar44 <= dVar10) {
                  iVar31 = check_marginal(this,iVar14,&local_e0);
                  ppdVar24 = local_d8;
                }
                else {
                  iVar31 = 1;
                }
              }
              else {
                iVar31 = -1;
              }
              if (dVar9 < dVar44) break;
              lVar36 = (longlong)this->up;
              uVar42 = (int)uVar27 + 1;
              uVar27 = (ulonglong)uVar42;
            } while ((int)uVar42 < *(int *)((longlong)*ppdVar24 + lVar36 * 4));
            local_res18 = (uint)uVar27;
          }
          pdVar39 = *ppdVar24;
          if ((int)uVar27 == *(int *)((longlong)pdVar39 + (longlong)this->up * 4)) {
            return true;
          }
        }
        iVar14 = (int)lVar28;
        if (iVar31 != -1) goto LAB_1436a9064;
        local_e4 = local_e4 + 1;
        iVar15 = this->ed[this->up]
                 [*(int *)((longlong)pdVar39 + (longlong)this->up * 4) + (int)uVar27];
        iVar14 = this->p;
      } while (local_e4 < iVar14);
    }
LAB_1436a8c9b:
    uVar26 = (uint)lVar29;
    ppiVar37 = &this->nu;
    dVar43 = 0.0;
    local_e8 = 1;
    local_e4 = 0;
    param_4 = 0.0;
    uVar42 = 0;
    if (0 < iVar14) {
      local_c8 = (int *)0x0;
      local_d8 = (double **)0x0;
      local_c0 = 0;
      do {
        lVar28 = local_c0;
        uVar26 = (uint)lVar29;
        pdVar39 = this->pts;
        dVar44 = this->py * *(double *)((longlong)pdVar39 + local_c0 + 8) +
                 this->px * *(double *)((longlong)pdVar39 + local_c0) +
                 (*(double *)((longlong)pdVar39 + local_c0 + 0x10) * this->pz - this->prsq);
        local_e0 = dVar44;
        if (dVar11 <= dVar44) {
          if (dVar44 <= dVar10) {
            local_e8 = check_marginal(this,SUB84(dVar43,0),&local_e0);
            dVar43 = param_4;
            if (local_e8 != 1) {
              if (local_e8 == -1) goto LAB_1436a8ea0;
              this->up = param_4._0_4_;
              bVar12 = true;
              goto LAB_1436a904f;
            }
          }
          else {
            local_e8 = 1;
          }
          uVar33 = 0;
          local_res18 = 0;
          ppdVar24 = local_d8;
          piVar23 = local_c8;
          uVar27 = uVar33;
          if (0 < *(int *)((longlong)local_c8 + (longlong)*ppiVar37)) {
            do {
              iVar14 = *(int *)(uVar33 + *(longlong *)((longlong)this->ed + (longlong)ppdVar24));
              lVar29 = (longlong)iVar14;
              if (iVar14 < SUB84(dVar43,0)) {
                pdVar39 = this->pts;
                dVar40 = pdVar39[lVar29 * 3 + 1] * this->py + this->px * pdVar39[lVar29 * 3] +
                         (pdVar39[lVar29 * 3 + 2] * this->pz - this->prsq);
                local_e0 = dVar40;
                if (dVar40 < dVar11) {
                  local_e4 = -1;
                  lVar28 = local_c0;
                  break;
                }
                if (dVar40 <= dVar10) {
                  local_e4 = check_marginal(this,iVar14,&local_e0);
                  ppdVar24 = local_d8;
                  lVar28 = local_c0;
                  piVar23 = local_c8;
                  dVar43 = param_4;
                  if (local_e4 != 1) break;
                }
                else {
                  local_e4 = 1;
                }
              }
              local_res18 = (int)uVar27 + 1;
              uVar27 = (ulonglong)local_res18;
              uVar33 = uVar33 + 4;
              lVar28 = local_c0;
            } while ((int)local_res18 < *(int *)((longlong)piVar23 + (longlong)*ppiVar37));
          }
          uVar26 = (uint)lVar29;
          if ((int)uVar27 < *(int *)((longlong)*ppiVar37 + (longlong)piVar23)) {
            this->up = param_4._0_4_;
            if (local_e4 == 0) {
              bVar12 = true;
            }
            else {
              bVar12 = false;
              iVar38 = this->ed[(int)param_4._0_4_][(*ppiVar37)[(int)param_4._0_4_] + (int)uVar27];
              dVar9 = dVar44;
            }
            goto LAB_1436a904f;
          }
        }
        else {
          local_e8 = -1;
LAB_1436a8ea0:
          iVar38 = 0;
          piVar23 = local_c8;
          if (0 < *(int *)((longlong)local_c8 + (longlong)*ppiVar37)) {
            lVar32 = 0;
            do {
              iVar14 = *(int *)(lVar32 + *(longlong *)((longlong)this->ed + (longlong)local_d8));
              lVar28 = (longlong)iVar14;
              this->up = iVar14;
              if (iVar14 < SUB84(dVar43,0)) {
                pdVar39 = this->pts;
                dVar9 = pdVar39[lVar28 * 3 + 1] * this->py + this->px * pdVar39[lVar28 * 3] +
                        (pdVar39[lVar28 * 3 + 2] * this->pz - this->prsq);
                param_5._4_4_ = (uint)((ulonglong)dVar9 >> 0x20);
                if (dVar11 <= dVar9) {
                  if (dVar10 < dVar9) {
                    iVar14 = 1;
                    param_5 = (double)CONCAT44(param_5._4_4_,1);
                    lVar28 = local_c0;
                    goto LAB_1436a8f9c;
                  }
                  param_5 = dVar9;
                  iVar14 = check_marginal(this,iVar14,&param_5);
                  param_5 = (double)CONCAT44(param_5._4_4_,iVar14);
                  lVar28 = local_c0;
                  piVar23 = local_c8;
                  dVar43 = param_4;
                  if (iVar14 != -1) goto LAB_1436a8f9c;
                }
                else {
                  param_5 = (double)CONCAT44(param_5._4_4_,0xffffffff);
                }
              }
              iVar38 = iVar38 + 1;
              lVar32 = lVar32 + 4;
              lVar28 = local_c0;
            } while (iVar38 < *(int *)((longlong)piVar23 + (longlong)*ppiVar37));
          }
          iVar14 = param_5._0_4_;
LAB_1436a8f9c:
          if (iVar38 < *(int *)((longlong)*ppiVar37 + (longlong)piVar23)) {
            if (iVar14 == 0) {
              bVar12 = true;
              this->up = param_4._0_4_;
            }
            else {
              bVar12 = false;
              local_res18 = this->ed[(int)param_4._0_4_][(*ppiVar37)[(int)param_4._0_4_] + iVar38];
              uVar27 = (ulonglong)local_res18;
              dVar40 = dVar44;
              uVar26 = param_4._0_4_;
            }
            goto LAB_1436a904f;
          }
        }
        uVar26 = (uint)lVar29;
        local_c0 = lVar28 + 0x18;
        uVar42 = param_4._0_4_ + 1;
        dVar43 = (double)(ulonglong)uVar42;
        local_d8 = local_d8 + 1;
        param_4 = (double)(ulonglong)uVar42;
        local_c8 = piVar23 + 1;
      } while ((int)uVar42 < this->p);
    }
    param_4._0_4_ = uVar42;
    bVar12 = false;
LAB_1436a904f:
    dVar43 = dVar40;
    if (param_4._0_4_ == this->p) {
      return local_e8 == -1;
    }
  }
  else {
    if (dVar9 <= dVar10) {
      param_5 = dVar9;
      iVar14 = check_marginal(this,uVar26,&param_5);
      param_5 = (double)CONCAT44(param_5._4_4_,iVar14);
      if (iVar14 != 1) {
        param_5 = (double)CONCAT44(param_5._4_4_,iVar14);
        if (iVar14 == -1) goto LAB_1436a8952;
        bVar12 = true;
        goto LAB_1436a881b;
      }
    }
    else {
      param_5 = (double)CONCAT44(param_5._4_4_,1);
    }
    local_res18 = 0;
    uVar33 = uVar27;
    do {
      pdVar39 = this->pts;
      uVar26 = *(uint *)(uVar27 + (longlong)this->ed[this->up]);
      lVar29 = (longlong)(int)uVar26;
      dVar43 = this->py * pdVar39[lVar29 * 3 + 1] + this->px * pdVar39[lVar29 * 3] +
               (pdVar39[lVar29 * 3 + 2] * this->pz - this->prsq);
      local_e0 = dVar43;
      if (dVar11 <= dVar43) {
        if (dVar43 <= dVar10) {
          iVar31 = check_marginal(this,uVar26,&local_e0);
        }
        else {
          iVar31 = 1;
        }
      }
      else {
        iVar31 = -1;
      }
      if (dVar43 < dVar9) break;
      local_res18 = (int)uVar33 + 1;
      uVar33 = (ulonglong)local_res18;
      uVar27 = uVar27 + 4;
    } while ((int)local_res18 < this->nu[this->up]);
    ppiVar37 = &this->nu;
    if ((int)uVar33 == (*ppiVar37)[this->up]) {
      return false;
    }
    iVar38 = this->ed[this->up][(*ppiVar37)[this->up] + (int)uVar33];
    uVar27 = uVar33;
    while (dVar40 = dVar43, iVar31 == 1) {
      iVar14 = this->p;
      local_e4 = local_e4 + 1;
      if (iVar14 <= local_e4) goto LAB_1436a8c9b;
      this->up = (int)lVar29;
      local_res18 = 0;
      uVar27 = 0;
      lVar28 = 0;
      dVar43 = dVar40;
      if (0 < iVar38) {
        do {
          pdVar39 = this->pts;
          lVar29 = (longlong)this->ed[this->up][lVar28];
          dVar43 = this->py * pdVar39[lVar29 * 3 + 1] + this->px * pdVar39[lVar29 * 3] +
                   (pdVar39[lVar29 * 3 + 2] * this->pz - this->prsq);
          local_e0 = dVar43;
          if (dVar11 <= dVar43) {
            if (dVar43 <= dVar10) {
              iVar31 = check_marginal(this,this->ed[this->up][lVar28],&local_e0);
            }
            else {
              iVar31 = 1;
            }
          }
          else {
            iVar31 = -1;
          }
          if (dVar43 < dVar40) break;
          uVar27 = (ulonglong)((int)uVar27 + 1);
          lVar28 = lVar28 + 1;
        } while (lVar28 < iVar38);
        local_res18 = (uint)uVar27;
        puVar25 = local_b8;
      }
      if ((int)uVar27 == iVar38) {
        lVar32 = (longlong)this->up;
        local_res18 = (int)uVar27 + 1;
        uVar27 = (ulonglong)local_res18;
        if ((int)local_res18 < (*ppiVar37)[lVar32]) {
          lVar28 = lVar28 * 4;
          do {
            lVar28 = lVar28 + 4;
            pdVar39 = this->pts;
            iVar38 = *(int *)(lVar28 + (longlong)this->ed[(int)lVar32]);
            lVar29 = (longlong)iVar38;
            dVar43 = pdVar39[lVar29 * 3 + 1] * this->py + this->px * pdVar39[lVar29 * 3] +
                     (pdVar39[lVar29 * 3 + 2] * this->pz - this->prsq);
            local_e0 = dVar43;
            if (dVar11 <= dVar43) {
              if (dVar43 <= dVar10) {
                iVar31 = check_marginal(this,iVar38,&local_e0);
              }
              else {
                iVar31 = 1;
              }
            }
            else {
              iVar31 = -1;
            }
            if (dVar43 < dVar40) break;
            lVar32 = (longlong)this->up;
            uVar26 = (int)uVar27 + 1;
            uVar27 = (ulonglong)uVar26;
          } while ((int)uVar26 < (*ppiVar37)[lVar32]);
          local_res18 = (uint)uVar27;
        }
        if ((int)uVar27 == (*ppiVar37)[this->up]) {
          return false;
        }
      }
      uVar26 = (uint)lVar29;
      iVar38 = this->ed[this->up][(*ppiVar37)[this->up] + (int)uVar27];
      dVar9 = dVar40;
    }
    if (iVar31 == 0) {
      this->up = uVar26;
      dVar43 = dVar40;
LAB_1436a8817:
      bVar12 = true;
    }
    else {
LAB_1436a9098:
      bVar12 = false;
      dVar43 = dVar40;
    }
  }
LAB_1436a881b:
  uVar33 = 0;
  if (this->p == this->current_vertices) {
    add_memory_vertices<voro::voronoicell_neighbor>(this,param_1);
  }
  dVar40 = __real_3ff0000000000000;
  if (!bVar12) {
    puVar30 = puVar25;
    if (puVar25 == (uint *)this->stacke) {
      this->current_delete_size = this->current_delete_size << 1;
      if (0x1000000 < this->current_delete_size) {
        voro_fatal_error("Delete stack 1 memory allocation exceeded absolute maximum",2);
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (longlong)this->current_delete_size;
      uVar17 = SUB168(ZEXT816(4) * auVar4,0);
      if (SUB168(ZEXT816(4) * auVar4,8) != 0) {
        uVar17 = 0xffffffffffffffff;
      }
      puVar19 = operator_new__(uVar17);
      puVar30 = puVar19;
      for (puVar18 = (uint *)this->ds; puVar18 < puVar25; puVar18 = puVar18 + 1) {
        *puVar30 = *puVar18;
        puVar30 = puVar30 + 1;
      }
      operator_delete__(this->ds);
      this->ds = (int *)puVar19;
      this->stacke = (int *)(puVar19 + this->current_delete_size);
    }
    *puVar30 = this->up;
    pdVar39 = this->pts;
    lVar29 = (longlong)(int)(uVar26 * 3);
    puVar25 = puVar30 + 1;
    dVar43 = dVar9 / (dVar9 - dVar43);
    dVar44 = dVar40 - dVar43;
    pdVar39[this->p * 3] = dVar44 * pdVar39[this->up * 3] + dVar43 * pdVar39[lVar29];
    pdVar39 = this->pts;
    pdVar39[(longlong)(this->p * 3) + 1] =
         dVar44 * pdVar39[(longlong)(this->up * 3) + 1] + dVar43 * pdVar39[lVar29 + 1];
    pdVar39 = this->pts;
    pdVar39[(longlong)(this->p * 3) + 2] =
         dVar44 * pdVar39[(longlong)(this->up * 3) + 2] + dVar43 * pdVar39[lVar29 + 2];
    this->nu[this->p] = 3;
    local_b8 = puVar25;
    if (this->mec[3] == this->mem[3]) {
      add_memory<voro::voronoicell_neighbor>(this,param_1,3,(int *)local_d0);
    }
    iVar31 = (int)uVar27;
    local_e8 = 2;
    param_1->ne[this->p] = param_1->mne[3] + *(int *)(param_1->_padding_ + 0xc) * 3;
    *param_1->ne[this->p] = param_6;
    param_1->ne[this->p][1] = param_1->ne[this->up][iVar31];
    param_1->ne[this->p][2] = param_1->ne[(int)uVar26][iVar38];
    iVar14 = this->mec[3];
    piVar23 = this->mep[3];
    this->mec[3] = iVar14 + 1;
    this->ed[this->p] = piVar23 + iVar14 * 7;
    this->ed[this->p][6] = this->p;
    this->ed[this->up][iVar31] = -1;
    this->ed[(int)uVar26][iVar38] = this->p;
    this->ed[(int)uVar26][this->nu[(int)uVar26] + iVar38] = 1;
    this->ed[this->p][1] = uVar26;
    this->ed[this->p][(longlong)this->nu[this->p] + 1] = iVar38;
    local_res20 = this->up;
    uVar33 = (ulonglong)(int)local_res20;
    if (iVar31 == this->nu[uVar33] + -1) {
      uVar26 = 0;
      param_5 = (double)((ulonglong)param_5._4_4_ << 0x20);
    }
    else {
      uVar26 = iVar31 + 1;
      param_5 = (double)CONCAT44(param_5._4_4_,uVar26);
    }
    goto LAB_1436a9da7;
  }
  bVar12 = search_for_outside_edge<voro::voronoicell_neighbor>(this,param_1,&this->up);
  if (!bVar12) {
    return false;
  }
  pppiVar1 = &this->ed;
  uVar27 = 0;
  this->pts[this->p * 3] = this->pts[this->up * 3];
  this->pts[(longlong)(this->p * 3) + 1] = this->pts[(longlong)(this->up * 3) + 1];
  this->pts[(longlong)(this->p * 3) + 2] = this->pts[(longlong)(this->up * 3) + 2];
  pdVar39 = this->pts;
  lVar29 = (longlong)*(*pppiVar1)[this->up];
  local_e0 = this->py * pdVar39[lVar29 * 3 + 1] + this->px * pdVar39[lVar29 * 3] +
             (pdVar39[lVar29 * 3 + 2] * this->pz - this->prsq);
  if (local_e0 < dVar11) {
LAB_1436a9475:
    param_4._0_4_ = this->nu[this->up] - 1;
    lVar29 = (longlong)(int)param_4._0_4_;
    pdVar39 = this->pts;
    lVar28 = (longlong)(*pppiVar1)[this->up][lVar29];
    local_e0 = this->px * pdVar39[lVar28 * 3] + this->py * pdVar39[lVar28 * 3 + 1] +
               (pdVar39[lVar28 * 3 + 2] * this->pz - this->prsq);
    if (local_e0 < dVar11) goto LAB_1436a9510;
    if (local_e0 <= dVar10) {
      iVar38 = check_marginal(this,(*pppiVar1)[this->up][lVar29],&local_e0);
      while (iVar38 == -1) {
LAB_1436a9510:
        do {
          param_4._0_4_ = param_4._0_4_ - 1;
          lVar29 = lVar29 + -1;
          if (lVar29 == 0) {
            return true;
          }
          pdVar39 = this->pts;
          lVar28 = (longlong)this->ed[this->up][lVar29];
          local_e0 = pdVar39[lVar28 * 3 + 1] * this->py + this->px * pdVar39[lVar28 * 3] +
                     (pdVar39[lVar28 * 3 + 2] * this->pz - this->prsq);
        } while (local_e0 < dVar11);
        if (dVar10 < local_e0) break;
        iVar38 = check_marginal(this,this->ed[this->up][lVar29],&local_e0);
      }
    }
    uVar26 = 1;
    param_5 = (double)CONCAT44(param_5._4_4_,1);
    pdVar39 = this->pts;
    iVar38 = this->ed[this->up][1];
    lVar29 = (longlong)iVar38;
    local_e0 = this->py * pdVar39[lVar29 * 3 + 1] + this->px * pdVar39[lVar29 * 3] +
               (pdVar39[lVar29 * 3 + 2] * this->pz - this->prsq);
    if (dVar11 <= local_e0) {
      if (local_e0 <= dVar10) {
        iVar14 = check_marginal(this,iVar38,&local_e0);
        iVar38 = this->up;
        if (iVar14 == -1) goto LAB_1436a9638;
      }
      else {
LAB_1436a96da:
        iVar14 = 1;
        iVar38 = this->up;
      }
    }
    else {
      iVar38 = this->up;
LAB_1436a9638:
      lVar29 = 4;
      do {
        while( true ) {
          lVar29 = lVar29 + 4;
          uVar26 = uVar26 + 1;
          param_5 = (double)CONCAT44(param_5._4_4_,uVar26);
          pdVar39 = this->pts;
          iVar38 = *(int *)(lVar29 + (longlong)this->ed[iVar38]);
          lVar28 = (longlong)iVar38;
          local_e0 = pdVar39[lVar28 * 3 + 1] * this->py + this->px * pdVar39[lVar28 * 3] +
                     (pdVar39[lVar28 * 3 + 2] * this->pz - this->prsq);
          if (dVar11 <= local_e0) break;
          iVar38 = this->up;
        }
        if (dVar10 < local_e0) goto LAB_1436a96da;
        iVar14 = check_marginal(this,iVar38,&local_e0);
        iVar38 = this->up;
      } while (iVar14 == -1);
    }
    if ((param_4._0_4_ == uVar26) && (iVar14 == 0)) {
      bVar13 = true;
      this->nu[this->p] = this->nu[iVar38];
    }
    else {
      this->nu[this->p] = (this->nu[iVar38] - param_4._0_4_) + 1 + uVar26;
    }
    iVar38 = this->p;
    uVar42 = 1;
    piVar23 = this->nu;
    local_e8 = 1;
    if (this->current_vertex_order <= piVar23[iVar38]) {
      do {
        add_memory_vorder<voro::voronoicell_neighbor>(this,param_1);
        iVar38 = this->p;
        piVar23 = this->nu;
      } while (this->current_vertex_order <= piVar23[iVar38]);
    }
    iVar38 = piVar23[iVar38];
    if (this->mec[iVar38] == this->mem[iVar38]) {
      add_memory<voro::voronoicell_neighbor>(this,param_1,iVar38,(int *)local_d0);
    }
    iVar31 = param_4._0_4_ + 1;
    iVar38 = this->nu[this->p];
    param_1->ne[this->p] =
         param_1->mne[iVar38] + iVar38 * *(int *)(param_1->_padding_ + (longlong)iVar38 * 4);
    iVar38 = this->nu[this->p];
    iVar14 = this->mec[iVar38];
    piVar23 = this->mep[iVar38];
    this->mec[iVar38] = iVar14 + 1;
    this->ed[this->p] = piVar23 + (iVar38 * 2 + 1) * iVar14;
    iVar38 = this->p;
    this->ed[iVar38][this->nu[iVar38] * 2] = iVar38;
    iVar38 = this->up;
    lVar29 = (longlong)iVar38;
    piVar23 = this->nu;
    if (iVar31 < piVar23[lVar29]) {
      lVar28 = (longlong)iVar31 * 4;
      lVar32 = 4;
      do {
        iVar15 = (int)lVar29;
        iVar14 = piVar23[iVar15] + iVar31;
        iVar31 = iVar31 + 1;
        iVar38 = *(int *)(lVar28 + (longlong)this->ed[iVar15]);
        iVar14 = this->ed[iVar15][iVar14];
        *(undefined4 *)((longlong)param_1->ne[this->p] + lVar32) =
             *(undefined4 *)(lVar28 + (longlong)param_1->ne[iVar15]);
        *(int *)((longlong)this->ed[this->p] + lVar32) = iVar38;
        this->ed[this->p][(int)(this->nu[this->p] + uVar42)] = iVar14;
        this->ed[iVar38][iVar14] = this->p;
        this->ed[iVar38][this->nu[iVar38] + iVar14] = uVar42;
        uVar42 = uVar42 + 1;
        *(undefined4 *)(lVar28 + (longlong)this->ed[this->up]) = 0xffffffff;
        iVar38 = this->up;
        lVar29 = (longlong)iVar38;
        piVar23 = this->nu;
        lVar28 = lVar28 + 4;
        puVar25 = local_b8;
        lVar32 = lVar32 + 4;
        local_e8 = uVar42;
      } while (iVar31 < piVar23[lVar29]);
    }
    if (0 < (int)uVar26) {
      lVar32 = 0;
      iVar38 = 0;
      lVar29 = (longlong)(int)local_e8 * 4;
      lVar28 = 0;
      do {
        iVar14 = this->up;
        iVar31 = *(int *)((longlong)this->ed[iVar14] + lVar28);
        iVar15 = this->nu[iVar14] + iVar38;
        iVar38 = iVar38 + 1;
        iVar15 = this->ed[iVar14][iVar15];
        *(int *)(lVar29 + (longlong)param_1->ne[this->p]) = param_1->ne[iVar14][lVar32];
        *(int *)(lVar29 + (longlong)this->ed[this->p]) = iVar31;
        this->ed[this->p][(int)(this->nu[this->p] + local_e8)] = iVar15;
        this->ed[iVar31][iVar15] = this->p;
        this->ed[iVar31][this->nu[iVar31] + iVar15] = local_e8;
        local_e8 = local_e8 + 1;
        this->ed[this->up][lVar32] = -1;
        lVar32 = lVar32 + 1;
        lVar29 = lVar29 + 4;
        lVar28 = lVar28 + 4;
      } while (lVar32 < (int)uVar26);
      iVar38 = this->up;
      puVar25 = local_b8;
      uVar26 = param_5._0_4_;
    }
  }
  else {
    if (local_e0 <= dVar10) {
      uVar26 = check_marginal(this,*(*pppiVar1)[this->up],&local_e0);
      param_4 = (double)(ulonglong)uVar26;
      if (uVar26 == 0xffffffff) goto LAB_1436a9475;
    }
    else {
      param_4 = 4.94065645841247e-324;
      uVar27 = uVar33;
    }
    do {
      uVar33 = uVar33 + 1;
      iVar38 = (int)uVar27;
      uVar26 = iVar38 + 1;
      uVar27 = (ulonglong)uVar26;
      if (uVar26 == this->nu[this->up]) {
        return false;
      }
      pdVar39 = this->pts;
      lVar29 = (longlong)(*pppiVar1)[this->up][uVar33];
      local_e0 = this->py * pdVar39[lVar29 * 3 + 1] + this->px * pdVar39[lVar29 * 3] +
                 (pdVar39[lVar29 * 3 + 2] * this->pz - this->prsq);
    } while ((dVar11 <= local_e0) &&
            ((dVar10 < local_e0 ||
             (iVar14 = check_marginal(this,(*pppiVar1)[this->up][uVar33],&local_e0), iVar14 != -1)))
            );
    lVar29 = (longlong)this->up;
    iVar38 = iVar38 + 2;
    if (iVar38 < this->nu[lVar29]) {
      lVar28 = (longlong)iVar38 * 4;
      do {
        pdVar39 = this->pts;
        iVar14 = *(int *)(lVar28 + (longlong)this->ed[(int)lVar29]);
        lVar29 = (longlong)iVar14;
        local_e0 = this->px * pdVar39[lVar29 * 3] + pdVar39[lVar29 * 3 + 1] * this->py +
                   (pdVar39[lVar29 * 3 + 2] * this->pz - this->prsq);
        if ((dVar11 <= local_e0) &&
           ((dVar10 < local_e0 || (iVar14 = check_marginal(this,iVar14,&local_e0), iVar14 != -1))))
        break;
        lVar29 = (longlong)this->up;
        iVar38 = iVar38 + 1;
        lVar28 = lVar28 + 4;
      } while (iVar38 < this->nu[lVar29]);
    }
    iVar14 = this->nu[this->up];
    if (((iVar38 == iVar14) && (uVar26 == 1)) && (param_4._0_4_ == 0)) {
      bVar13 = true;
    }
    else {
      iVar14 = (iVar38 - uVar26) + 2;
    }
    uVar42 = 1;
    local_e8 = 1;
    this->nu[this->p] = iVar14;
    iVar14 = this->p;
    piVar23 = this->nu;
    if (this->current_vertex_order <= piVar23[iVar14]) {
      do {
        add_memory_vorder<voro::voronoicell_neighbor>(this,param_1);
        iVar14 = this->p;
        piVar23 = this->nu;
      } while (this->current_vertex_order <= piVar23[iVar14]);
    }
    iVar14 = piVar23[iVar14];
    if (this->mec[iVar14] == this->mem[iVar14]) {
      add_memory<voro::voronoicell_neighbor>(this,param_1,iVar14,(int *)local_d0);
    }
    iVar14 = this->nu[this->p];
    param_1->ne[this->p] =
         param_1->mne[iVar14] + iVar14 * *(int *)(param_1->_padding_ + (longlong)iVar14 * 4);
    iVar14 = this->nu[this->p];
    iVar31 = this->mec[iVar14];
    piVar23 = this->mep[iVar14];
    this->mec[iVar14] = iVar31 + 1;
    this->ed[this->p] = piVar23 + (iVar14 * 2 + 1) * iVar31;
    iVar14 = this->p;
    this->ed[iVar14][this->nu[iVar14] * 2] = iVar14;
    uVar22 = uVar26;
    if (uVar26 == 0) {
      uVar22 = this->nu[this->up];
    }
    param_4._0_4_ = uVar22 - 1;
    if ((longlong)uVar33 < (longlong)iVar38) {
      lVar29 = 4;
      lVar28 = uVar33 * 4;
      do {
        iVar14 = this->up;
        iVar31 = *(int *)((longlong)this->ed[iVar14] + lVar28);
        iVar15 = (int)uVar27;
        uVar26 = iVar15 + 1;
        uVar27 = (ulonglong)uVar26;
        iVar15 = this->ed[iVar14][this->nu[iVar14] + iVar15];
        *(int *)(lVar29 + (longlong)param_1->ne[this->p]) = param_1->ne[iVar14][uVar33];
        *(int *)(lVar29 + (longlong)this->ed[this->p]) = iVar31;
        this->ed[this->p][(int)(this->nu[this->p] + uVar42)] = iVar15;
        this->ed[iVar31][iVar15] = this->p;
        this->ed[iVar31][this->nu[iVar31] + iVar15] = uVar42;
        uVar42 = uVar42 + 1;
        this->ed[this->up][uVar33] = -1;
        uVar33 = uVar33 + 1;
        lVar29 = lVar29 + 4;
        puVar25 = local_b8;
        lVar28 = lVar28 + 4;
        local_e8 = uVar42;
      } while ((longlong)uVar33 < (longlong)iVar38);
    }
    iVar38 = this->up;
    if (uVar26 == this->nu[iVar38]) {
      uVar26 = 0;
    }
    param_5 = (double)CONCAT44(param_5._4_4_,uVar26);
  }
  piVar23 = param_1->ne[this->p];
  iVar38 = param_1->ne[iVar38][(int)uVar26];
  if (!bVar13) {
    piVar23[(int)local_e8] = iVar38;
    piVar23 = param_1->ne[this->p];
    iVar38 = param_6;
  }
  *piVar23 = iVar38;
  if (local_d0 == (uint *)this->stacke2) {
    add_memory_ds2(this,(int **)&local_b0);
    local_d0 = local_b0;
  }
  *local_d0 = this->up;
  local_d0 = local_d0 + 1;
  local_res20 = this->up;
  uVar33 = (ulonglong)(int)local_res20;
  piVar23 = this->ed[uVar33];
  local_res18 = piVar23[(int)(this->nu[uVar33] + param_4._0_4_)];
  uVar27 = (ulonglong)local_res18;
  this->up = piVar23[(int)param_4._0_4_];
  this->ed[uVar33][this->nu[uVar33] * 2] = -this->p;
LAB_1436a9da7:
  local_e4 = this->p;
  local_c0 = CONCAT44(local_c0._4_4_,local_e4);
  do {
    this->p = local_e4 + 1;
    while( true ) {
      iVar38 = (int)uVar33;
      uVar42 = (uint)uVar27;
      if ((iVar38 == this->up) && (uVar26 == uVar42)) {
        lVar29 = (longlong)local_e4;
        lVar28 = (longlong)(int)local_c0;
        this->ed[lVar29][(int)local_e8] = (int)local_c0;
        *this->ed[lVar28] = local_e4;
        this->ed[lVar29][(int)(this->nu[lVar29] + local_e8)] = 0;
        this->ed[lVar28][this->nu[lVar28]] = local_e8;
        puVar30 = (uint *)this->ds;
        if (puVar30 < puVar25) {
          do {
            if (this->ed[(int)*puVar30][this->nu[(int)*puVar30]] == -1) {
              puVar18 = puVar25 + -1;
              puVar25 = puVar25 + -1;
              *puVar30 = *puVar18;
            }
            else {
              this->ed[(int)*puVar30][this->nu[(int)*puVar30]] = -1;
              puVar30 = puVar30 + 1;
            }
          } while (puVar30 < puVar25);
        }
        puVar30 = (uint *)this->ds2;
        puVar18 = local_d0;
        if (puVar30 < local_d0) {
          do {
            uVar26 = *puVar30;
            this->ed[(int)uVar26][this->nu[(int)uVar26] * 2] = uVar26;
            if (this->ed[(int)uVar26][this->nu[(int)uVar26]] != -1) {
              this->ed[(int)uVar26][this->nu[(int)uVar26]] = -1;
              puVar19 = puVar25;
              if (puVar25 == (uint *)this->stacke) {
                this->current_delete_size = this->current_delete_size << 1;
                if (0x1000000 < this->current_delete_size) {
                  voro_fatal_error("Delete stack 1 memory allocation exceeded absolute maximum",2);
                }
                auVar7._8_8_ = 0;
                auVar7._0_8_ = (longlong)this->current_delete_size;
                uVar17 = SUB168(ZEXT816(4) * auVar7,0);
                if (SUB168(ZEXT816(4) * auVar7,8) != 0) {
                  uVar17 = 0xffffffffffffffff;
                }
                puVar20 = operator_new__(uVar17);
                puVar19 = puVar20;
                for (puVar18 = (uint *)this->ds; puVar18 < puVar25; puVar18 = puVar18 + 1) {
                  *puVar19 = *puVar18;
                  puVar19 = puVar19 + 1;
                }
                operator_delete__(this->ds);
                this->ds = (int *)puVar20;
                this->stacke = (int *)(puVar20 + this->current_delete_size);
                puVar18 = local_d0;
              }
              *puVar19 = uVar26;
              puVar25 = puVar19 + 1;
            }
            puVar30 = puVar30 + 1;
          } while (puVar30 < puVar18);
        }
        puVar30 = (uint *)this->ds;
        if (puVar30 < puVar25) {
          do {
            dVar40 = (double)(longlong)(int)*puVar30;
            ppiVar37 = this->ed;
            piVar23 = this->nu;
            puVar18 = (uint *)ppiVar37[(longlong)dVar40];
            param_5 = dVar40;
            if (puVar18 < puVar18 + piVar23[(longlong)dVar40]) {
              do {
                uVar26 = *puVar18;
                if ((uVar26 != 0xffffffff) && (ppiVar37[(int)uVar26][piVar23[(int)uVar26]] != -1)) {
                  puVar19 = puVar25;
                  if (puVar25 == (uint *)this->stacke) {
                    this->current_delete_size = this->current_delete_size << 1;
                    if (0x1000000 < this->current_delete_size) {
                      voro_fatal_error("Delete stack 1 memory allocation exceeded absolute maximum",
                                       2);
                    }
                    auVar8._8_8_ = 0;
                    auVar8._0_8_ = (longlong)this->current_delete_size;
                    uVar17 = SUB168(ZEXT816(4) * auVar8,0);
                    if (SUB168(ZEXT816(4) * auVar8,8) != 0) {
                      uVar17 = 0xffffffffffffffff;
                    }
                    puVar21 = operator_new__(uVar17);
                    puVar19 = puVar21;
                    for (puVar20 = (uint *)this->ds; puVar20 < puVar25; puVar20 = puVar20 + 1) {
                      *puVar19 = *puVar20;
                      puVar19 = puVar19 + 1;
                    }
                    operator_delete__(this->ds);
                    this->ds = (int *)puVar21;
                    this->stacke = (int *)(puVar21 + this->current_delete_size);
                    puVar30 = puVar21 + (int)((longlong)puVar25 - (longlong)puVar30 >> 2);
                    dVar40 = param_5;
                  }
                  *puVar19 = uVar26;
                  puVar25 = puVar19 + 1;
                  this->ed[(int)uVar26][this->nu[(int)uVar26]] = -1;
                }
                piVar23 = this->nu;
                puVar18 = puVar18 + 1;
                ppiVar37 = this->ed;
              } while (puVar18 < ppiVar37[(longlong)dVar40] + piVar23[(longlong)dVar40]);
            }
            puVar30 = puVar30 + 1;
          } while (puVar30 < puVar25);
        }
        uVar27 = 0;
        this->up = 0;
        if (this->ds < puVar25) {
          do {
            piVar23 = this->nu;
            iVar14 = this->p + -1;
            ppiVar37 = this->ed;
            this->p = iVar14;
            iVar38 = ppiVar37[iVar14][piVar23[iVar14]];
            while (iVar38 == -1) {
              iVar38 = piVar23[iVar14];
              lVar29 = (longlong)iVar38;
              piVar35 = ppiVar37[iVar14];
              piVar3 = this->mec;
              piVar23 = piVar3 + lVar29;
              *piVar23 = *piVar23 + -1;
              iVar14 = this->p;
              piVar23 = this->mep[lVar29] + (iVar38 * 2 + 1) * piVar3[lVar29];
              if (piVar35 < this->ed[iVar14] + lVar29 * 2 + 1) {
                do {
                  iVar14 = *piVar23;
                  piVar23 = piVar23 + 1;
                  *piVar35 = iVar14;
                  piVar35 = piVar35 + 1;
                  iVar14 = this->p;
                } while (piVar35 < this->ed[iVar14] + lVar29 * 2 + 1);
              }
              param_1->paux2 =
                   param_1->mne[lVar29] + iVar38 * *(int *)(param_1->_padding_ + lVar29 * 4);
              if (0 < iVar38) {
                uVar33 = uVar27;
                do {
                  param_1->ne[iVar14][uVar33] = param_1->paux2[uVar33];
                  uVar33 = uVar33 + 1;
                } while ((longlong)uVar33 < lVar29);
              }
              param_1->ne[this->ed[this->p][iVar38 * 2]] = param_1->ne[this->p];
              piVar23 = this->ed[this->p];
              this->ed[piVar23[iVar38 * 2]] = piVar23;
              iVar14 = this->p + -1;
              this->p = iVar14;
              piVar23 = this->nu;
              ppiVar37 = this->ed;
              iVar38 = ppiVar37[iVar14][piVar23[iVar14]];
            }
            uVar26 = puVar25[-1];
            puVar25 = puVar25 + -1;
            this->up = uVar26;
            if ((int)uVar26 < iVar14) {
              this->pts[(int)(uVar26 * 3)] = this->pts[iVar14 * 3];
              this->pts[(longlong)(this->up * 3) + 1] = this->pts[(longlong)(this->p * 3) + 1];
              this->pts[(longlong)(this->up * 3) + 2] = this->pts[(longlong)(this->p * 3) + 2];
              iVar38 = this->nu[this->up];
              lVar29 = (longlong)iVar38;
              piVar35 = this->ed[this->up];
              piVar3 = this->mec;
              piVar23 = piVar3 + lVar29;
              *piVar23 = *piVar23 + -1;
              iVar14 = this->up;
              piVar23 = this->mep[lVar29] + (iVar38 * 2 + 1) * piVar3[lVar29];
              if (piVar35 < this->ed[iVar14] + lVar29 * 2 + 1) {
                do {
                  iVar14 = *piVar23;
                  piVar23 = piVar23 + 1;
                  *piVar35 = iVar14;
                  piVar35 = piVar35 + 1;
                  iVar14 = this->up;
                } while (piVar35 < this->ed[iVar14] + lVar29 * 2 + 1);
              }
              param_1->paux2 =
                   param_1->mne[lVar29] + iVar38 * *(int *)(param_1->_padding_ + lVar29 * 4);
              if (0 < iVar38) {
                uVar33 = uVar27;
                do {
                  param_1->ne[iVar14][uVar33] = param_1->paux2[uVar33];
                  uVar33 = uVar33 + 1;
                } while ((longlong)uVar33 < lVar29);
              }
              param_1->ne[this->ed[this->up][iVar38 * 2]] = param_1->ne[this->up];
              param_1->ne[this->up] = param_1->ne[this->p];
              piVar23 = this->ed[this->up];
              this->ed[piVar23[iVar38 * 2]] = piVar23;
              this->ed[this->up] = this->ed[this->p];
              this->nu[this->up] = this->nu[this->p];
              iVar38 = this->up;
              lVar29 = (longlong)iVar38;
              piVar23 = this->nu;
              uVar33 = uVar27;
              uVar41 = uVar27;
              if (0 < piVar23[lVar29]) {
                do {
                  iVar38 = (int)lVar29;
                  piVar35 = this->ed[iVar38];
                  uVar26 = (int)uVar33 + 1;
                  this->ed[*(int *)((longlong)piVar35 + uVar41)]
                  [piVar35[piVar23[iVar38] + (int)uVar33]] = iVar38;
                  iVar38 = this->up;
                  lVar29 = (longlong)iVar38;
                  piVar23 = this->nu;
                  uVar33 = (ulonglong)uVar26;
                  uVar41 = uVar41 + 4;
                } while ((int)uVar26 < piVar23[lVar29]);
              }
              this->ed[iVar38][piVar23[iVar38] * 2] = iVar38;
            }
            else {
              this->up = iVar14;
              this->p = iVar14 + 1;
            }
          } while (this->ds < puVar25);
        }
        if (0 < *this->mec) {
          voro_fatal_error("Zero order vertex formed",3);
        }
        bVar13 = collapse_order2<voro::voronoicell_neighbor>(this,param_1);
        return bVar13;
      }
      pdVar39 = this->pts;
      uVar22 = this->ed[iVar38][(int)uVar26];
      puVar30 = (uint *)(longlong)(int)uVar22;
      dVar43 = this->px * pdVar39[(longlong)puVar30 * 3] +
               pdVar39[(longlong)puVar30 * 3 + 1] * this->py +
               (pdVar39[(longlong)puVar30 * 3 + 2] * this->pz - this->prsq);
      local_e0 = dVar43;
      if (dVar43 < dVar11) break;
      if ((dVar10 < dVar43) || (iVar15 = check_marginal(this,uVar22,&local_e0), iVar15 == 1)) {
        iVar14 = this->nu[iVar38] + uVar26;
        uVar26 = 0;
        if (this->ed[iVar38][iVar14] != this->nu[(longlong)puVar30] + -1) {
          uVar26 = this->ed[iVar38][iVar14] + 1;
        }
        param_5 = (double)CONCAT44(param_5._4_4_,uVar26);
        puVar30 = puVar25;
        if (puVar25 == (uint *)this->stacke) {
          this->current_delete_size = this->current_delete_size << 1;
          if (0x1000000 < this->current_delete_size) {
            voro_fatal_error("Delete stack 1 memory allocation exceeded absolute maximum",2);
          }
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (longlong)this->current_delete_size;
          uVar17 = SUB168(ZEXT816(4) * auVar6,0);
          if (SUB168(ZEXT816(4) * auVar6,8) != 0) {
            uVar17 = 0xffffffffffffffff;
          }
          puVar19 = operator_new__(uVar17);
          puVar30 = puVar19;
          for (puVar18 = (uint *)this->ds; puVar18 < puVar25; puVar18 = puVar18 + 1) {
            *puVar30 = *puVar18;
            puVar30 = puVar30 + 1;
          }
          operator_delete__(this->ds);
          this->ds = (int *)puVar19;
          this->stacke = (int *)(puVar19 + this->current_delete_size);
        }
        uVar33 = (ulonglong)uVar22;
        *puVar30 = uVar22;
        puVar25 = puVar30 + 1;
        dVar9 = dVar43;
        local_b8 = puVar25;
        local_res20 = uVar22;
      }
      else {
        iVar14 = this->current_vertices;
        iVar31 = this->p;
        if (iVar15 == -1) goto LAB_1436a9e76;
        if (iVar31 == iVar14) {
          add_memory_vertices<voro::voronoicell_neighbor>(this,param_1);
        }
        uVar27 = (ulonglong)this->ed[iVar38][(int)(this->nu[(int)local_res20] + param_5._0_4_)];
        param_5 = (double)CONCAT44(param_5._4_4_,
                                   this->ed[iVar38]
                                   [(int)(this->nu[(int)local_res20] + param_5._0_4_)]);
        uVar33 = uVar27;
        uVar26 = (uint)!bVar13;
        local_b0 = puVar30;
        do {
          do {
            uVar16 = uVar26;
            uVar34 = 0;
            uVar26 = uVar16 + 1;
            uVar41 = uVar27 + 1;
            uVar27 = uVar34;
            if ((int)uVar33 != this->nu[(longlong)puVar30] + -1) {
              uVar34 = (ulonglong)((int)uVar33 + 1);
              uVar27 = uVar41;
            }
            pdVar39 = this->pts;
            uVar2 = this->ed[(longlong)puVar30][uVar27];
            lVar29 = (longlong)(int)uVar2;
            local_e0 = this->py * pdVar39[lVar29 * 3 + 1] + this->px * pdVar39[lVar29 * 3] +
                       (pdVar39[lVar29 * 3 + 2] * this->pz - this->prsq);
            uVar33 = uVar34;
          } while (local_e0 < dVar11);
          if (dVar10 < local_e0) {
            iVar38 = 1;
            break;
          }
          iVar38 = check_marginal(this,uVar2,&local_e0);
          puVar30 = local_b0;
        } while (iVar38 == -1);
        piVar23 = this->nu;
        ppiVar37 = this->ed;
        local_d8 = (double **)ppiVar37[(int)uVar22];
        iVar14 = -*(int *)((longlong)local_d8 + (longlong)(piVar23[(int)uVar22] * 2) * 4);
        if ((uVar22 == this->up) && ((uint)uVar34 == uVar42)) {
          param_4._0_1_ = false;
          if (0 < iVar14) {
            uVar26 = uVar26 + piVar23[iVar14];
          }
        }
        else if (iVar14 < 1) {
          if (iVar38 != 0) goto LAB_1436aa325;
          param_4._0_1_ = -ppiVar37[(int)uVar2][piVar23[(int)uVar2] * 2] == local_e4;
          if (param_4._0_1_) {
            uVar26 = uVar16;
          }
        }
        else {
          uVar26 = uVar26 + piVar23[iVar14];
          if (iVar38 == 0) {
            iVar38 = -ppiVar37[(int)uVar2][piVar23[(int)uVar2] * 2];
            if (iVar38 < 1) {
              if (((iVar14 != (int)local_c0) || (uVar2 != this->up)) ||
                 (*(uint *)((longlong)local_d8 +
                           (longlong)(int)(piVar23[(int)uVar22] + (uint)uVar34) * 4) != uVar42))
              goto LAB_1436aa325;
              param_4._0_1_ = true;
              uVar26 = uVar26 - 1;
            }
            else {
              param_4._0_1_ = ppiVar37[iVar38][(longlong)piVar23[iVar38] + -1] == iVar14;
              if (param_4._0_1_) {
                uVar26 = uVar26 - 1;
              }
            }
          }
          else {
LAB_1436aa325:
            param_4._0_1_ = false;
          }
        }
        iVar38 = this->current_vertex_order;
        while (iVar38 <= (int)uVar26) {
          add_memory_vorder<voro::voronoicell_neighbor>(this,param_1);
          iVar38 = this->current_vertex_order;
        }
        lVar29 = (longlong)(int)uVar26;
        if (this->mec[lVar29] == this->mem[lVar29]) {
          add_memory<voro::voronoicell_neighbor>(this,param_1,uVar26,(int *)local_d0);
        }
        if (iVar14 < 1) {
          param_1->ne[this->p] =
               param_1->mne[lVar29] + (int)(uVar26 * *(int *)(param_1->_padding_ + lVar29 * 4));
          iVar38 = this->mec[lVar29];
          piVar23 = this->mep[lVar29];
          this->mec[lVar29] = iVar38 + 1;
          this->ed[this->p] = piVar23 + (int)((uVar26 * 2 + 1) * iVar38);
          this->ed[this->p][(int)(uVar26 * 2)] = this->p;
          puVar25 = local_d0;
          if (local_d0 == (uint *)this->stacke2) {
            this->current_delete2_size = this->current_delete2_size << 1;
            if (0x1000000 < this->current_delete2_size) {
              voro_fatal_error("Delete stack 2 memory allocation exceeded absolute maximum",2);
            }
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (longlong)this->current_delete2_size;
            uVar17 = SUB168(ZEXT816(4) * auVar5,0);
            if (SUB168(ZEXT816(4) * auVar5,8) != 0) {
              uVar17 = 0xffffffffffffffff;
            }
            puVar18 = operator_new__(uVar17);
            puVar25 = puVar18;
            for (puVar30 = (uint *)this->ds2; puVar30 < local_d0; puVar30 = puVar30 + 1) {
              *puVar25 = *puVar30;
              puVar25 = puVar25 + 1;
            }
            operator_delete__(this->ds2);
            this->ds2 = (int *)puVar18;
            this->stacke2 = (int *)(puVar18 + this->current_delete2_size);
          }
          *puVar25 = uVar22;
          local_d0 = puVar25 + 1;
          lVar29 = (longlong)(int)(uVar22 * 3);
          this->pts[this->p * 3] = this->pts[lVar29];
          this->pts[(longlong)(this->p * 3) + 1] = this->pts[lVar29 + 1];
          this->pts[(longlong)(this->p * 3) + 2] = this->pts[lVar29 + 2];
          this->ed[(int)uVar22][this->nu[(int)uVar22] * 2] = -this->p;
          iVar14 = this->p;
          this->p = iVar14 + 1;
          uVar42 = 0;
        }
        else {
          uVar42 = this->nu[iVar14];
          if (uVar42 != uVar26) {
            param_1->paux1 =
                 param_1->mne[lVar29] + (int)(uVar26 * *(int *)(param_1->_padding_ + lVar29 * 4));
            iVar38 = this->mec[lVar29];
            local_d8 = (double **)(this->mep[lVar29] + (int)((uVar26 * 2 + 1) * iVar38));
            uVar42 = 0;
            this->mec[lVar29] = iVar38 + 1;
            if (0 < this->nu[iVar14]) {
              lVar28 = 0;
              do {
                *(undefined4 *)(lVar28 + (longlong)param_1->paux1) =
                     *(undefined4 *)(lVar28 + (longlong)param_1->ne[iVar14]);
                *(undefined4 *)(lVar28 + (longlong)local_d8) =
                     *(undefined4 *)(lVar28 + (longlong)this->ed[iVar14]);
                iVar38 = this->nu[iVar14] + uVar42;
                uVar42 = uVar42 + 1;
                ((undefined4 *)(lVar28 + (longlong)local_d8))[lVar29] = this->ed[iVar14][iVar38];
                lVar28 = lVar28 + 4;
              } while ((int)uVar42 < this->nu[iVar14]);
            }
            *(int *)((longlong)local_d8 + (longlong)(int)(uVar26 * 2) * 4) = iVar14;
            iVar38 = this->nu[iVar14];
            piVar35 = this->mec;
            piVar23 = piVar35 + iVar38;
            *piVar23 = *piVar23 + -1;
            piVar23 = this->nu;
            local_a8 = this->mep[piVar23[iVar14]];
            local_e0 = (double)(longlong)((piVar23[iVar14] * 2 + 1) * piVar35[iVar38]);
            local_c8 = local_a8 + (longlong)local_e0;
            if (local_c8 != this->ed[iVar14]) {
              iVar38 = 0;
              if (-1 < piVar23[iVar14] * 2) {
                lVar29 = 0;
                do {
                  iVar38 = iVar38 + 1;
                  *(undefined4 *)(lVar29 + (longlong)this->ed[iVar14]) =
                       *(undefined4 *)(lVar29 + (longlong)local_c8);
                  piVar23 = this->nu;
                  lVar29 = lVar29 + 4;
                } while (iVar38 <= piVar23[iVar14] * 2);
              }
              lVar29 = (longlong)piVar23[iVar14];
              param_1->paux2 =
                   param_1->mne[lVar29] +
                   piVar23[iVar14] * *(int *)(param_1->_padding_ + lVar29 * 4);
              lVar28 = 0;
              if (0 < lVar29) {
                do {
                  param_1->ne[iVar14][lVar28] = param_1->paux2[lVar28];
                  lVar28 = lVar28 + 1;
                } while (lVar28 < lVar29);
              }
              param_1->ne[local_a8[(longlong)(this->nu[iVar14] * 2) + (longlong)local_e0]] =
                   param_1->ne[iVar14];
              this->ed[local_a8[(longlong)(this->nu[iVar14] * 2) + (longlong)local_e0]] =
                   this->ed[iVar14];
            }
            param_1->ne[iVar14] = param_1->paux1;
            this->ed[iVar14] = (int *)local_d8;
          }
        }
        this->nu[iVar14] = uVar26;
        if (!bVar13) {
          lVar29 = (longlong)local_e4;
          this->ed[iVar14][(int)uVar42] = local_e4;
          this->ed[iVar14][(int)(this->nu[iVar14] + uVar42)] = local_e8;
          param_1->ne[iVar14][(int)uVar42] = param_6;
          this->ed[lVar29][(int)local_e8] = iVar14;
          this->ed[lVar29][(int)(this->nu[lVar29] + local_e8)] = uVar42;
          uVar42 = uVar42 + 1;
        }
        uVar33 = (ulonglong)(int)param_5._0_4_;
        param_5 = (double)((longlong)(int)uVar42 * 4);
        uVar27 = uVar33;
        while( true ) {
          uVar16 = uVar26;
          if (!param_4._0_1_) {
            uVar16 = uVar26 - 1;
          }
          iVar38 = (int)uVar27;
          if ((int)uVar16 <= (int)uVar42) break;
          iVar31 = this->nu[(longlong)local_b0];
          if (iVar38 == iVar31 + -1) {
            uVar16 = 0;
            uVar33 = 0;
          }
          else {
            uVar16 = iVar38 + 1;
            uVar33 = uVar33 + 1;
          }
          uVar27 = (ulonglong)uVar16;
          iVar38 = this->ed[(longlong)local_b0][uVar33];
          iVar31 = this->ed[(longlong)local_b0][(int)(uVar16 + iVar31)];
          *(int *)((longlong)param_5 + (longlong)param_1->ne[iVar14]) =
               param_1->ne[(longlong)local_b0][uVar33];
          *(int *)((longlong)param_5 + (longlong)this->ed[iVar14]) = iVar38;
          this->ed[iVar14][(int)(this->nu[iVar14] + uVar42)] = iVar31;
          this->ed[iVar38][iVar31] = iVar14;
          this->ed[iVar38][this->nu[iVar38] + iVar31] = uVar42;
          uVar42 = uVar42 + 1;
          param_5 = (double)((longlong)param_5 + 4);
          this->ed[(longlong)local_b0][uVar33] = -1;
        }
        uVar33 = (ulonglong)(int)local_b0;
        uVar27 = (ulonglong)local_res18;
        if (iVar38 == this->nu[uVar33] + -1) {
          uVar26 = 0;
        }
        else {
          uVar26 = iVar38 + 1;
        }
        uVar16 = uVar42;
        if (param_4._0_1_) {
          uVar16 = 0;
        }
        param_5 = (double)CONCAT44(param_5._4_4_,uVar26);
        param_1->ne[iVar14][(int)uVar16] = param_1->ne[uVar33][(int)uVar26];
        puVar25 = local_b8;
        local_e8 = uVar42;
        local_e4 = iVar14;
        local_res20 = uVar22;
        bVar13 = param_4._0_1_;
      }
    }
    iVar14 = this->current_vertices;
    iVar31 = this->p;
LAB_1436a9e76:
    if (iVar31 == iVar14) {
      add_memory_vertices<voro::voronoicell_neighbor>(this,param_1);
    }
    pdVar39 = this->pts;
    lVar28 = (longlong)(int)(local_res20 * 3);
    lVar29 = (longlong)(int)(uVar22 * 3);
    dVar44 = dVar9 / (dVar9 - dVar43);
    dVar43 = dVar40 - dVar44;
    pdVar39[this->p * 3] = dVar43 * pdVar39[lVar28] + dVar44 * pdVar39[lVar29];
    pdVar39 = this->pts;
    pdVar39[(longlong)(this->p * 3) + 1] =
         dVar43 * pdVar39[lVar28 + 1] + dVar44 * pdVar39[lVar29 + 1];
    pdVar39 = this->pts;
    pdVar39[(longlong)(this->p * 3) + 2] =
         dVar43 * pdVar39[lVar28 + 2] + dVar44 * pdVar39[lVar29 + 2];
    this->nu[this->p] = 3;
    if (this->mec[3] == this->mem[3]) {
      add_memory<voro::voronoicell_neighbor>(this,param_1,3,(int *)local_d0);
    }
    iVar38 = this->ed[(int)local_res20][(int)(this->nu[(int)local_res20] + uVar26)];
    param_1->ne[this->p] = param_1->mne[3] + *(int *)(param_1->_padding_ + 0xc) * 3;
    *param_1->ne[this->p] = param_6;
    param_1->ne[this->p][1] = param_1->ne[(int)local_res20][(int)uVar26];
    param_1->ne[this->p][2] = param_1->ne[(int)uVar22][iVar38];
    iVar14 = this->mec[3];
    piVar23 = this->mep[3];
    this->mec[3] = iVar14 + 1;
    lVar29 = (longlong)local_e4;
    this->ed[this->p] = piVar23 + iVar14 * 7;
    *this->ed[this->p] = local_e4;
    this->ed[this->p][1] = uVar22;
    this->ed[this->p][3] = local_e8;
    this->ed[this->p][4] = iVar38;
    this->ed[this->p][6] = this->p;
    this->ed[(int)uVar22][iVar38] = this->p;
    uVar33 = (ulonglong)(int)local_res20;
    this->ed[(int)uVar22][this->nu[(int)uVar22] + iVar38] = 1;
    this->ed[lVar29][(int)local_e8] = this->p;
    this->ed[lVar29][(int)(this->nu[lVar29] + local_e8)] = 0;
    this->ed[uVar33][(int)param_5._0_4_] = -1;
    if (param_5._0_4_ == this->nu[(int)local_res20] + -1) {
      local_e4 = this->p;
      uVar26 = 0;
      param_5 = (double)((ulonglong)param_5._4_4_ << 0x20);
      local_e8 = 2;
    }
    else {
      local_e4 = this->p;
      uVar26 = param_5._0_4_ + 1;
      param_5 = (double)CONCAT44(param_5._4_4_,uVar26);
      local_e8 = 2;
    }
  } while( true );
}

// search_for_outside_edge<voro::voronoicell> @ 1436ab130

bool __thiscall
voro::voronoicell_base::search_for_outside_edge<voro::voronoicell>
          (voronoicell_base *this,voronoicell *param_1,int *param_2)

{
  uint uVar1;
  double *pdVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  int iVar6;
  ulong64 uVar7;
  uint *puVar8;
  uint *puVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint *puVar12;
  longlong lVar13;
  longlong lVar14;
  uint *puVar15;
  int iVar16;
  double local_res8;
  
  puVar15 = (uint *)this->ds2;
  uVar1 = *param_2;
  puVar12 = puVar15 + 1;
  *puVar15 = uVar1;
  dVar5 = __real_bdb5fd7fe1796495;
  dVar4 = __real_3db5fd7fe1796495;
  if (puVar12 <= puVar15) {
    return false;
  }
  do {
    uVar10 = (ulonglong)uVar1;
    *param_2 = uVar1;
    puVar15 = puVar15 + 1;
    iVar16 = 0;
    if (0 < this->nu[(int)uVar1]) {
      lVar14 = 0;
      do {
        pdVar2 = this->pts;
        uVar1 = *(uint *)(lVar14 + (longlong)this->ed[(int)uVar10]);
        lVar13 = (longlong)(int)uVar1;
        local_res8 = pdVar2[lVar13 * 3] * this->px + pdVar2[lVar13 * 3 + 1] * this->py +
                     (pdVar2[lVar13 * 3 + 2] * this->pz - this->prsq);
        if (local_res8 < dVar5) {
          return true;
        }
        if (local_res8 <= dVar4) {
          iVar6 = check_marginal(this,uVar1,&local_res8);
          if (iVar6 == -1) {
            return true;
          }
          if (iVar6 == 0) {
            for (puVar11 = (uint *)this->ds2; puVar11 < puVar12; puVar11 = puVar11 + 1) {
              if (*puVar11 == uVar1) goto LAB_1436ab2f2;
            }
            puVar11 = puVar12;
            if (puVar12 == (uint *)this->stacke2) {
              this->current_delete2_size = this->current_delete2_size << 1;
              if (0x1000000 < this->current_delete2_size) {
                voro_fatal_error("Delete stack 2 memory allocation exceeded absolute maximum",2);
              }
              auVar3._8_8_ = 0;
              auVar3._0_8_ = (longlong)this->current_delete2_size;
              uVar7 = SUB168(ZEXT816(4) * auVar3,0);
              if (SUB168(ZEXT816(4) * auVar3,8) != 0) {
                uVar7 = 0xffffffffffffffff;
              }
              puVar8 = operator_new__(uVar7);
              puVar11 = puVar8;
              for (puVar9 = (uint *)this->ds2; puVar9 < puVar12; puVar9 = puVar9 + 1) {
                *puVar11 = *puVar9;
                puVar11 = puVar11 + 1;
              }
              operator_delete__(this->ds2);
              this->ds2 = (int *)puVar8;
              this->stacke2 = (int *)(puVar8 + this->current_delete2_size);
            }
            *puVar11 = uVar1;
            puVar12 = puVar11 + 1;
          }
        }
LAB_1436ab2f2:
        uVar10 = (ulonglong)*param_2;
        iVar16 = iVar16 + 1;
        lVar14 = lVar14 + 4;
      } while (iVar16 < this->nu[uVar10]);
    }
    if (puVar12 <= puVar15) {
      return false;
    }
    uVar1 = *puVar15;
  } while( true );
}

// search_for_outside_edge<voro::voronoicell_neighbor> @ 1436ab350

bool __thiscall
voro::voronoicell_base::search_for_outside_edge<voro::voronoicell_neighbor>
          (voronoicell_base *this,voronoicell_neighbor *param_1,int *param_2)

{
  uint uVar1;
  double *pdVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  int iVar6;
  ulong64 uVar7;
  uint *puVar8;
  uint *puVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint *puVar12;
  longlong lVar13;
  longlong lVar14;
  uint *puVar15;
  int iVar16;
  double local_res8;
  
  puVar15 = (uint *)this->ds2;
  uVar1 = *param_2;
  puVar12 = puVar15 + 1;
  *puVar15 = uVar1;
  dVar5 = __real_bdb5fd7fe1796495;
  dVar4 = __real_3db5fd7fe1796495;
  if (puVar12 <= puVar15) {
    return false;
  }
  do {
    uVar10 = (ulonglong)uVar1;
    *param_2 = uVar1;
    puVar15 = puVar15 + 1;
    iVar16 = 0;
    if (0 < this->nu[(int)uVar1]) {
      lVar14 = 0;
      do {
        pdVar2 = this->pts;
        uVar1 = *(uint *)(lVar14 + (longlong)this->ed[(int)uVar10]);
        lVar13 = (longlong)(int)uVar1;
        local_res8 = pdVar2[lVar13 * 3] * this->px + pdVar2[lVar13 * 3 + 1] * this->py +
                     (pdVar2[lVar13 * 3 + 2] * this->pz - this->prsq);
        if (local_res8 < dVar5) {
          return true;
        }
        if (local_res8 <= dVar4) {
          iVar6 = check_marginal(this,uVar1,&local_res8);
          if (iVar6 == -1) {
            return true;
          }
          if (iVar6 == 0) {
            for (puVar11 = (uint *)this->ds2; puVar11 < puVar12; puVar11 = puVar11 + 1) {
              if (*puVar11 == uVar1) goto LAB_1436ab512;
            }
            puVar11 = puVar12;
            if (puVar12 == (uint *)this->stacke2) {
              this->current_delete2_size = this->current_delete2_size << 1;
              if (0x1000000 < this->current_delete2_size) {
                voro_fatal_error("Delete stack 2 memory allocation exceeded absolute maximum",2);
              }
              auVar3._8_8_ = 0;
              auVar3._0_8_ = (longlong)this->current_delete2_size;
              uVar7 = SUB168(ZEXT816(4) * auVar3,0);
              if (SUB168(ZEXT816(4) * auVar3,8) != 0) {
                uVar7 = 0xffffffffffffffff;
              }
              puVar8 = operator_new__(uVar7);
              puVar11 = puVar8;
              for (puVar9 = (uint *)this->ds2; puVar9 < puVar12; puVar9 = puVar9 + 1) {
                *puVar11 = *puVar9;
                puVar11 = puVar11 + 1;
              }
              operator_delete__(this->ds2);
              this->ds2 = (int *)puVar8;
              this->stacke2 = (int *)(puVar8 + this->current_delete2_size);
            }
            *puVar11 = uVar1;
            puVar12 = puVar11 + 1;
          }
        }
LAB_1436ab512:
        uVar10 = (ulonglong)*param_2;
        iVar16 = iVar16 + 1;
        lVar14 = lVar14 + 4;
      } while (iVar16 < this->nu[uVar10]);
    }
    if (puVar12 <= puVar15) {
      return false;
    }
    uVar1 = *puVar15;
  } while( true );
}

// voronoicell_base @ 1436ab570

voronoicell_base * __thiscall voro::voronoicell_base::voronoicell_base(voronoicell_base *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int **ppiVar9;
  ulong64 uVar10;
  int *piVar11;
  double *pdVar12;
  void *pvVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  
  this->current_vertices = 0x100;
  this->_padding_ = (longlong)&___7voronoicell_base_voro__6B_;
  this->current_vertex_order = 0x40;
  this->current_delete_size = 0x100;
  this->current_delete2_size = 0x100;
  ppiVar9 = operator_new__(0x800);
  this->ed = ppiVar9;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)this->current_vertices;
  uVar10 = SUB168(ZEXT816(4) * auVar1,0);
  if (SUB168(ZEXT816(4) * auVar1,8) != 0) {
    uVar10 = 0xffffffffffffffff;
  }
  piVar11 = operator_new__(uVar10);
  this->nu = piVar11;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)(this->current_vertices * 3);
  uVar10 = SUB168(ZEXT816(8) * auVar2,0);
  if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
    uVar10 = 0xffffffffffffffff;
  }
  pdVar12 = operator_new__(uVar10);
  this->pts = pdVar12;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (longlong)this->current_vertex_order;
  uVar10 = SUB168(ZEXT816(4) * auVar3,0);
  if (SUB168(ZEXT816(4) * auVar3,8) != 0) {
    uVar10 = 0xffffffffffffffff;
  }
  piVar11 = operator_new__(uVar10);
  this->mem = piVar11;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (longlong)this->current_vertex_order;
  uVar10 = SUB168(ZEXT816(4) * auVar4,0);
  if (SUB168(ZEXT816(4) * auVar4,8) != 0) {
    uVar10 = 0xffffffffffffffff;
  }
  piVar11 = operator_new__(uVar10);
  this->mec = piVar11;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (longlong)this->current_vertex_order;
  uVar10 = SUB168(ZEXT816(8) * auVar5,0);
  if (SUB168(ZEXT816(8) * auVar5,8) != 0) {
    uVar10 = 0xffffffffffffffff;
  }
  ppiVar9 = operator_new__(uVar10);
  this->mep = ppiVar9;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (longlong)this->current_delete_size;
  uVar10 = SUB168(ZEXT816(4) * auVar6,0);
  if (SUB168(ZEXT816(4) * auVar6,8) != 0) {
    uVar10 = 0xffffffffffffffff;
  }
  piVar11 = operator_new__(uVar10);
  this->ds = piVar11;
  this->stacke = piVar11 + this->current_delete_size;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (longlong)this->current_delete2_size;
  uVar10 = SUB168(ZEXT816(4) * auVar7,0);
  if (SUB168(ZEXT816(4) * auVar7,8) != 0) {
    uVar10 = 0xffffffffffffffff;
  }
  piVar11 = operator_new__(uVar10);
  this->ds2 = piVar11;
  this->current_marginal = 0x40;
  this->stacke2 = piVar11 + this->current_delete_size;
  piVar11 = operator_new__(0x100);
  this->marg = piVar11;
  *this->mem = 8;
  *this->mec = 0;
  piVar11 = operator_new__(0x20);
  *this->mep = piVar11;
  this->mem[1] = 8;
  this->mec[1] = 0;
  piVar11 = operator_new__(0x60);
  this->mep[1] = piVar11;
  this->mem[2] = 8;
  this->mec[2] = 0;
  piVar11 = operator_new__(0xa0);
  this->mep[2] = piVar11;
  this->mem[3] = 0x100;
  this->mec[3] = 0;
  piVar11 = operator_new__(0x1c00);
  iVar14 = 4;
  this->mep[3] = piVar11;
  if (4 < this->current_vertex_order) {
    iVar15 = 0x48;
    lVar16 = 0x10;
    lVar17 = 0x20;
    do {
      *(undefined4 *)(lVar16 + (longlong)this->mem) = 8;
      *(undefined4 *)(lVar16 + (longlong)this->mec) = 0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (longlong)iVar15;
      uVar10 = SUB168(ZEXT816(4) * auVar8,0);
      if (SUB168(ZEXT816(4) * auVar8,8) != 0) {
        uVar10 = 0xffffffffffffffff;
      }
      pvVar13 = operator_new__(uVar10);
      lVar16 = lVar16 + 4;
      iVar14 = iVar14 + 1;
      iVar15 = iVar15 + 0x10;
      *(void **)(lVar17 + (longlong)this->mep) = pvVar13;
      lVar17 = lVar17 + 8;
    } while (iVar14 < this->current_vertex_order);
  }
  return this;
}

// voronoicell_neighbor @ 1436ab7e0

voronoicell_neighbor * __thiscall
voro::voronoicell_neighbor::voronoicell_neighbor(voronoicell_neighbor *this)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  voronoicell_neighbor *pvVar6;
  ulong64 uVar7;
  int **ppiVar8;
  int *piVar9;
  void *pvVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  
  voronoicell_base::voronoicell_base((voronoicell_base *)this);
  iVar11 = *(int *)((longlong)&this->_padding_ + 4);
  this->_padding_ = (longlong)&___7voronoicell_neighbor_voro__6B_;
  if ((iVar11 < 4) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("current_vertex_order >= 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Voronoi\\Private\\voro++\\src\\cell.cc"
                         ,0x7df,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    pvVar6 = (voronoicell_neighbor *)(*pcVar1)();
    return pvVar6;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)*(int *)((longlong)&this->_padding_ + 4);
  uVar7 = SUB168(ZEXT816(8) * auVar2,0);
  if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
    uVar7 = 0xffffffffffffffff;
  }
  ppiVar8 = operator_new__(uVar7);
  this->mne = ppiVar8;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (longlong)(int)this->_padding_;
  uVar7 = SUB168(ZEXT816(8) * auVar3,0);
  if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
    uVar7 = 0xffffffffffffffff;
  }
  ppiVar8 = operator_new__(uVar7);
  this->ne = ppiVar8;
  piVar9 = operator_new__(0);
  lVar13 = 0x20;
  *this->mne = piVar9;
  iVar12 = 0x20;
  piVar9 = operator_new__(0x20);
  this->mne[1] = piVar9;
  piVar9 = operator_new__(0x40);
  this->mne[2] = piVar9;
  piVar9 = operator_new__(0xc00);
  iVar11 = 4;
  this->mne[3] = piVar9;
  if (4 < *(int *)((longlong)&this->_padding_ + 4)) {
    do {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (longlong)iVar12;
      uVar7 = SUB168(ZEXT816(4) * auVar4,0);
      if (SUB168(ZEXT816(4) * auVar4,8) != 0) {
        uVar7 = 0xffffffffffffffff;
      }
      pvVar10 = operator_new__(uVar7);
      iVar11 = iVar11 + 1;
      iVar12 = iVar12 + 8;
      *(void **)(lVar13 + (longlong)this->mne) = pvVar10;
      lVar13 = lVar13 + 8;
    } while (iVar11 < *(int *)((longlong)&this->_padding_ + 4));
  }
  return this;
}

// ~voronoicell_base @ 1436ab940

void __thiscall voro::voronoicell_base::~voronoicell_base(voronoicell_base *this)

{
  int iVar1;
  longlong lVar2;
  
  this->_padding_ = (longlong)&___7voronoicell_base_voro__6B_;
  iVar1 = this->current_vertex_order + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      if (0 < this->mem[lVar2]) {
        operator_delete__(this->mep[lVar2]);
      }
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  operator_delete__(this->marg);
  operator_delete__(this->ds2);
  operator_delete__(this->ds);
  operator_delete__(this->mep);
  operator_delete__(this->mec);
  operator_delete__(this->mem);
  operator_delete__(this->pts);
  operator_delete__(this->nu);
  operator_delete__(this->ed);
  return;
}

// ~voronoicell_neighbor @ 1436ab9e0

void __thiscall voro::voronoicell_neighbor::~voronoicell_neighbor(voronoicell_neighbor *this)

{
  int iVar1;
  longlong lVar2;
  
  this->_padding_ = (longlong)&___7voronoicell_neighbor_voro__6B_;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      if (0 < *(int *)(this->_padding_ + lVar2 * 4)) {
        operator_delete__(this->mne[lVar2]);
      }
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  operator_delete__(this->mne);
  operator_delete__(this->ne);
  this->_padding_ = (longlong)&___7voronoicell_base_voro__6B_;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      if (0 < *(int *)(this->_padding_ + lVar2 * 4)) {
        operator_delete__(*(void **)(this->_padding_ + lVar2 * 8));
      }
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  operator_delete__((void *)this->_padding_);
  operator_delete__((void *)this->_padding_);
  operator_delete__((void *)this->_padding_);
  operator_delete__((void *)this->_padding_);
  operator_delete__((void *)this->_padding_);
  operator_delete__((void *)this->_padding_);
  operator_delete__((void *)this->_padding_);
  operator_delete__((void *)this->_padding_);
  operator_delete__((void *)this->_padding_);
  return;
}

// operator= @ 1436abad0

void __thiscall
voro::voronoicell_neighbor::operator=(voronoicell_neighbor *this,voronoicell_neighbor *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  voronoicell_base::check_memory_for_copy<voro::voronoicell_neighbor>
            ((voronoicell_base *)this,this,(voronoicell_base *)param_1);
  voronoicell_base::copy((voronoicell_base *)this,(voronoicell_base *)param_1);
  iVar4 = 0;
  if (0 < *(int *)((longlong)&param_1->_padding_ + 4)) {
    lVar1 = param_1->_padding_;
    lVar7 = 0;
    iVar8 = 0;
    lVar6 = 0;
    do {
      iVar5 = 0;
      if (0 < iVar4 * *(int *)(lVar7 + lVar1)) {
        lVar2 = 0;
        do {
          iVar5 = iVar5 + 1;
          *(undefined4 *)(lVar2 + *(longlong *)(lVar6 + (longlong)this->mne)) =
               *(undefined4 *)(lVar2 + *(longlong *)(lVar6 + (longlong)param_1->mne));
          lVar1 = param_1->_padding_;
          lVar2 = lVar2 + 4;
        } while (iVar5 < iVar4 * *(int *)(lVar7 + lVar1));
      }
      iVar5 = 0;
      if (0 < *(int *)(lVar7 + lVar1)) {
        iVar3 = 0;
        iVar9 = iVar8;
        do {
          iVar5 = iVar5 + 1;
          lVar1 = (longlong)iVar3;
          iVar3 = iVar3 + iVar4;
          lVar2 = (longlong)iVar9;
          iVar9 = iVar9 + iVar8 + 1;
          this->ne[*(int *)(*(longlong *)(lVar6 + param_1->_padding_) + lVar2 * 4)] =
               (int *)(*(longlong *)(lVar6 + (longlong)this->mne) + lVar1 * 4);
          lVar1 = param_1->_padding_;
        } while (iVar5 < *(int *)(lVar7 + lVar1));
      }
      iVar4 = iVar4 + 1;
      iVar8 = iVar8 + 2;
      lVar6 = lVar6 + 8;
      lVar7 = lVar7 + 4;
    } while (iVar4 < *(int *)((longlong)&param_1->_padding_ + 4));
  }
  return;
}

// operator= @ 1436abc30

void __thiscall
voro::voronoicell_neighbor::operator=(voronoicell_neighbor *this,voronoicell *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  
  voronoicell_base::check_memory_for_copy<voro::voronoicell_neighbor>
            ((voronoicell_base *)this,this,(voronoicell_base *)param_1);
  voronoicell_base::copy((voronoicell_base *)this,(voronoicell_base *)param_1);
  uVar3 = 0;
  if (0 < *(int *)&param_1->field_0xc) {
    lVar2 = *(longlong *)&param_1->field_0x40;
    uVar8 = uVar3;
    uVar1 = uVar3;
    uVar11 = uVar3;
    do {
      uVar5 = 0;
      iVar9 = (int)uVar1;
      uVar1 = uVar5;
      uVar7 = uVar5;
      if (0 < iVar9 * *(int *)(uVar8 + lVar2)) {
        do {
          uVar6 = (int)uVar7 + 1;
          *(undefined4 *)(uVar1 + *(longlong *)(uVar3 + (longlong)this->mne)) = 0;
          lVar2 = *(longlong *)&param_1->field_0x40;
          uVar1 = uVar1 + 4;
          uVar7 = (ulonglong)uVar6;
        } while ((int)uVar6 < iVar9 * *(int *)(uVar8 + lVar2));
      }
      iVar10 = (int)uVar11;
      if (0 < *(int *)(uVar8 + lVar2)) {
        uVar1 = uVar5;
        do {
          uVar6 = (int)uVar1 + 1;
          uVar1 = (ulonglong)uVar6;
          iVar4 = (int)uVar5;
          uVar5 = (ulonglong)(uint)(iVar4 + iVar9);
          iVar12 = (int)uVar11;
          uVar11 = (ulonglong)(uint)(iVar12 + iVar10 + 1);
          this->ne[*(int *)(*(longlong *)(uVar3 + *(longlong *)&param_1->field_0x48) +
                           (longlong)iVar12 * 4)] =
               (int *)(*(longlong *)((longlong)this->mne + uVar3) + (longlong)iVar4 * 4);
          lVar2 = *(longlong *)&param_1->field_0x40;
        } while ((int)uVar6 < *(int *)(uVar8 + lVar2));
      }
      uVar1 = (ulonglong)(iVar9 + 1U);
      uVar11 = (ulonglong)(iVar10 + 2);
      uVar3 = uVar3 + 8;
      uVar8 = uVar8 + 4;
    } while ((int)(iVar9 + 1U) < *(int *)&param_1->field_0xc);
  }
  return;
}

// `scalar_deleting_destructor' @ 1436abd80

void * __thiscall
voro::voronoicell_base::_scalar_deleting_destructor_(voronoicell_base *this,uint param_1)

{
  ~voronoicell_base(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436abdc0

void * __thiscall
voro::voronoicell_neighbor::_scalar_deleting_destructor_(voronoicell_neighbor *this,uint param_1)

{
  int iVar1;
  longlong lVar2;
  
  this->_padding_ = (longlong)&___7voronoicell_neighbor_voro__6B_;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      if (0 < *(int *)(this->_padding_ + lVar2 * 4)) {
        operator_delete__(this->mne[lVar2]);
      }
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  operator_delete__(this->mne);
  operator_delete__(this->ne);
  voronoicell_base::~voronoicell_base((voronoicell_base *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// _Change_array @ 1436abe60

void __thiscall
std::vector<double,std::allocator<double>_>::_Change_array
          (vector<double,std::allocator<double>_> *this,double *param_1,ulong64 param_2,
          ulong64 param_3)

{
  double *pdVar1;
  double *pdVar2;
  ulong64 uVar3;
  
  pdVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pdVar1 != (double *)0x0) {
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pdVar1 & 0xfffffffffffffff8;
    pdVar2 = pdVar1;
    if (0xfff < uVar3) {
      pdVar2 = (double *)pdVar1[-1];
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pdVar1 + (-8 - (longlong)pdVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pdVar2,uVar3);
  }
  (this->_Mypair)._Myval2._Myfirst = param_1;
  (this->_Mypair)._Myval2._Mylast = param_1 + param_2;
  (this->_Mypair)._Myval2._Myend = param_1 + param_3;
  return;
}

// add_memory_ds2 @ 1436abf10

void __thiscall voro::voronoicell_base::add_memory_ds2(voronoicell_base *this,int **param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong64 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  this->current_delete2_size = this->current_delete2_size << 1;
  if (0x1000000 < this->current_delete2_size) {
    voro_fatal_error("Delete stack 2 memory allocation exceeded absolute maximum",2);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)this->current_delete2_size;
  uVar3 = SUB168(ZEXT816(4) * auVar2,0);
  if (SUB168(ZEXT816(4) * auVar2,8) != 0) {
    uVar3 = 0xffffffffffffffff;
  }
  piVar4 = operator_new__(uVar3);
  piVar5 = this->ds2;
  piVar6 = piVar4;
  if (piVar5 < *param_1) {
    do {
      iVar1 = *piVar5;
      piVar5 = piVar5 + 1;
      *piVar6 = iVar1;
      piVar6 = piVar6 + 1;
    } while (piVar5 < *param_1);
  }
  operator_delete__(this->ds2);
  this->ds2 = piVar4;
  *param_1 = piVar6;
  this->stacke2 = this->ds2 + this->current_delete2_size;
  return;
}

// add_memory_ds @ 1436abfd0

void __thiscall voro::voronoicell_base::add_memory_ds(voronoicell_base *this,int **param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong64 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  this->current_delete_size = this->current_delete_size << 1;
  if (0x1000000 < this->current_delete_size) {
    voro_fatal_error("Delete stack 1 memory allocation exceeded absolute maximum",2);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)this->current_delete_size;
  uVar3 = SUB168(ZEXT816(4) * auVar2,0);
  if (SUB168(ZEXT816(4) * auVar2,8) != 0) {
    uVar3 = 0xffffffffffffffff;
  }
  piVar4 = operator_new__(uVar3);
  piVar5 = this->ds;
  piVar6 = piVar4;
  if (piVar5 < *param_1) {
    do {
      iVar1 = *piVar5;
      piVar5 = piVar5 + 1;
      *piVar6 = iVar1;
      piVar6 = piVar6 + 1;
    } while (piVar5 < *param_1);
  }
  operator_delete__(this->ds);
  this->ds = piVar4;
  *param_1 = piVar6;
  this->stacke = this->ds + this->current_delete_size;
  return;
}

// centroid @ 1436ac090

void __thiscall
voro::voronoicell_base::centroid
          (voronoicell_base *this,double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  double *pdVar5;
  int *piVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  longlong local_res8;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  
  *param_3 = 0.0;
  uVar16 = 1;
  *param_2 = 0.0;
  *param_1 = 0.0;
  dVar19 = 0.0;
  if (this->p < 2) {
    reset_edges(this);
  }
  else {
    local_c8 = 4;
    local_d0 = 8;
    local_d8 = 0x18;
    do {
      pdVar5 = this->pts;
      iVar13 = 0;
      dVar7 = *pdVar5 - *(double *)((longlong)pdVar5 + local_d8);
      dVar8 = pdVar5[1] - *(double *)((longlong)pdVar5 + local_d8 + 8);
      dVar9 = pdVar5[2] - *(double *)((longlong)pdVar5 + local_d8 + 0x10);
      if (0 < *(int *)(local_c8 + (longlong)this->nu)) {
        local_res8 = 0;
        do {
          lVar11 = *(longlong *)((longlong)this->ed + local_d0);
          uVar4 = *(uint *)(lVar11 + local_res8);
          uVar15 = (ulonglong)(int)uVar4;
          if (-1 < (int)uVar4) {
            *(uint *)(lVar11 + local_res8) = ~uVar4;
            iVar10 = *(int *)(*(longlong *)((longlong)this->ed + local_d0) +
                             (longlong)(*(int *)((longlong)this->nu + local_c8) + iVar13) * 4);
            iVar12 = 0;
            if (iVar10 != this->nu[uVar15] + -1) {
              iVar12 = iVar10 + 1;
            }
            lVar11 = (longlong)(int)(uVar4 * 3);
            pdVar5 = this->pts;
            dVar1 = pdVar5[lVar11];
            dVar2 = pdVar5[lVar11 + 1];
            dVar3 = pdVar5[lVar11 + 2];
            dVar17 = *pdVar5;
            dVar18 = pdVar5[1];
            dVar20 = pdVar5[2];
            piVar6 = this->ed[uVar15];
            uVar4 = piVar6[iVar12];
            piVar6[iVar12] = ~uVar4;
            dVar1 = dVar1 - dVar17;
            dVar2 = dVar2 - dVar18;
            dVar3 = dVar3 - dVar20;
            while (uVar4 != uVar16) {
              iVar14 = (int)uVar15;
              uVar15 = (ulonglong)uVar4;
              iVar10 = this->nu[iVar14] + iVar12;
              iVar12 = 0;
              if (this->ed[iVar14][iVar10] != this->nu[(int)uVar4] + -1) {
                iVar12 = this->ed[iVar14][iVar10] + 1;
              }
              lVar11 = (longlong)(int)(uVar4 * 3);
              pdVar5 = this->pts;
              dVar21 = pdVar5[lVar11] - *pdVar5;
              dVar18 = pdVar5[lVar11 + 2] - pdVar5[2];
              dVar20 = pdVar5[lVar11 + 1] - pdVar5[1];
              dVar17 = (((dVar2 * dVar7 * dVar18 + dVar3 * dVar8 * dVar21 + dVar1 * dVar9 * dVar20)
                        - dVar2 * dVar9 * dVar21) - dVar1 * dVar8 * dVar18) - dVar3 * dVar7 * dVar20
              ;
              dVar19 = dVar19 + dVar17;
              *param_1 = ((dVar21 + dVar1) - dVar7) * dVar17 + *param_1;
              *param_2 = ((dVar20 + dVar2) - dVar8) * dVar17 + *param_2;
              *param_3 = ((dVar18 + dVar3) - dVar9) * dVar17 + *param_3;
              lVar11 = (longlong)(int)uVar4;
              uVar4 = this->ed[lVar11][iVar12];
              this->ed[lVar11][iVar12] = ~uVar4;
              dVar1 = dVar21;
              dVar2 = dVar20;
              dVar3 = dVar18;
            }
          }
          local_res8 = local_res8 + 4;
          iVar13 = iVar13 + 1;
        } while (iVar13 < *(int *)(local_c8 + (longlong)this->nu));
      }
      local_d8 = local_d8 + 0x18;
      local_d0 = local_d0 + 8;
      local_c8 = local_c8 + 4;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < this->p);
    reset_edges(this);
    dVar7 = __real_3fe0000000000000;
    if (__real_3b5e392010175ee5 < dVar19) {
      dVar19 = __real_3fc0000000000000 / dVar19;
      *param_1 = dVar19 * *param_1 + *this->pts * __real_3fe0000000000000;
      *param_2 = this->pts[1] * dVar7 + dVar19 * *param_2;
      *param_3 = this->pts[2] * dVar7 + dVar19 * *param_3;
      return;
    }
  }
  *param_3 = 0.0;
  *param_2 = 0.0;
  *param_1 = 0.0;
  return;
}

// check_duplicates @ 1436ac4e0

void __thiscall voro::voronoicell_base::check_duplicates(voronoicell_base *this)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  iVar8 = 0;
  if (0 < this->p) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      iVar4 = 1;
      if (1 < *(int *)((longlong)this->nu + lVar7)) {
        lVar3 = 4;
        do {
          iVar2 = 0;
          if (0 < iVar4) {
            lVar5 = 0;
            do {
              lVar1 = *(longlong *)(lVar6 + (longlong)this->ed);
              if (*(int *)(lVar1 + lVar3) == *(int *)(lVar1 + lVar5)) {
                printf("Duplicate edges: (%d,%d) and (%d,%d) [%d]\n");
              }
              iVar2 = iVar2 + 1;
              lVar5 = lVar5 + 4;
            } while (iVar2 < iVar4);
          }
          iVar4 = iVar4 + 1;
          lVar3 = lVar3 + 4;
        } while (iVar4 < *(int *)((longlong)this->nu + lVar7));
      }
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 4;
      lVar6 = lVar6 + 8;
    } while (iVar8 < this->p);
  }
  return;
}

// check_facets @ 1436ac5d0

void __thiscall voro::voronoicell_neighbor::check_facets(voronoicell_neighbor *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  _iobuf *p_Var4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  
  uVar10 = 1;
  if (1 < (int)this->_padding_) {
    local_res20 = 4;
    local_res18 = 8;
    do {
      lVar7 = this->_padding_;
      iVar11 = 0;
      if (0 < *(int *)(local_res20 + lVar7)) {
        local_res10 = 0;
        do {
          lVar8 = *(longlong *)(local_res18 + this->_padding_);
          uVar1 = *(uint *)(lVar8 + local_res10);
          uVar6 = (ulonglong)(int)uVar1;
          if (-1 < (int)uVar1) {
            *(uint *)(lVar8 + local_res10) = ~uVar1;
            lVar8 = this->_padding_;
            iVar2 = *(int *)(local_res10 + *(longlong *)(local_res18 + (longlong)this->ne));
            iVar3 = *(int *)(*(longlong *)(local_res18 + lVar8) +
                            (longlong)(*(int *)(local_res20 + this->_padding_) + iVar11) * 4);
            iVar5 = 0;
            if (iVar3 != *(int *)(this->_padding_ + uVar6 * 4) + -1) {
              iVar5 = iVar3 + 1;
            }
            do {
              lVar7 = (longlong)iVar5 * 4;
              lVar9 = (longlong)(int)uVar6;
              lVar8 = *(longlong *)(lVar8 + lVar9 * 8);
              uVar1 = *(uint *)(lVar8 + lVar7);
              *(uint *)(lVar8 + lVar7) = ~uVar1;
              if (this->ne[lVar9][iVar5] != iVar2) {
                p_Var4 = (_iobuf *)__acrt_iob_func(2);
                fprintf(p_Var4,"Facet error at (%d,%d)=%d, started from (%d,%d)=%d\n");
              }
              lVar7 = this->_padding_;
              uVar6 = (ulonglong)uVar1;
              lVar8 = this->_padding_;
              iVar3 = *(int *)(*(longlong *)(lVar8 + lVar9 * 8) +
                              (longlong)(*(int *)(lVar7 + lVar9 * 4) + iVar5) * 4);
              iVar5 = 0;
              if (iVar3 != *(int *)(lVar7 + (longlong)(int)uVar1 * 4) + -1) {
                iVar5 = iVar3 + 1;
              }
            } while (uVar1 != uVar10);
          }
          local_res10 = local_res10 + 4;
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(local_res20 + lVar7));
      }
      local_res18 = local_res18 + 8;
      local_res20 = local_res20 + 4;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)this->_padding_);
  }
  voronoicell_base::reset_edges((voronoicell_base *)this);
  return;
}

// check_marginal @ 1436ac7d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
voro::voronoicell_base::check_marginal(voronoicell_base *this,int param_1,double *param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulong64 uVar5;
  int *piVar6;
  int *piVar7;
  int **ppiVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar4;
  
  uVar10 = 0;
  iVar1 = this->n_marg;
  if (0 < iVar1) {
    piVar6 = this->marg;
    uVar4 = uVar10;
    piVar7 = piVar6;
    do {
      if (*piVar7 == param_1) {
        return piVar6[(longlong)(int)uVar4 + 1];
      }
      uVar3 = (int)uVar4 + 2;
      uVar4 = (ulonglong)uVar3;
      piVar7 = piVar7 + 2;
    } while ((int)uVar3 < iVar1);
  }
  if (iVar1 == this->current_marginal) {
    iVar1 = this->current_marginal * 2;
    this->current_marginal = iVar1;
    if (0x1000000 < iVar1) {
      voro_fatal_error("Marginal case buffer allocation exceeded absolute maximum",2);
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (longlong)this->current_marginal;
    uVar5 = SUB168(ZEXT816(4) * auVar2,0);
    if (SUB168(ZEXT816(4) * auVar2,8) != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    piVar6 = operator_new__(uVar5);
    uVar4 = uVar10;
    if (0 < this->n_marg) {
      do {
        uVar3 = (int)uVar4 + 1;
        *(undefined4 *)(uVar10 + (longlong)piVar6) = *(undefined4 *)(uVar10 + (longlong)this->marg);
        uVar10 = uVar10 + 4;
        uVar4 = (ulonglong)uVar3;
      } while ((int)uVar3 < this->n_marg);
    }
    operator_delete__(this->marg);
    this->marg = piVar6;
  }
  piVar6 = &this->n_marg;
  ppiVar8 = &this->marg;
  (*ppiVar8)[*piVar6] = param_1;
  iVar1 = *piVar6;
  *piVar6 = iVar1 + 1;
  if (*param_2 <= ___real_3da5fd7fe1796495) {
    iVar9 = (___real_bda5fd7fe1796495 <= *param_2) - 1;
  }
  else {
    iVar9 = 1;
  }
  (*ppiVar8)[(longlong)iVar1 + 1] = iVar9;
  iVar1 = *piVar6;
  *piVar6 = iVar1 + 1;
  return (*ppiVar8)[iVar1];
}

// check_relations @ 1436ac930

void __thiscall voro::voronoicell_base::check_relations(voronoicell_base *this)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar4 = 0;
  if (0 < this->p) {
    lVar5 = 0;
    lVar7 = 0;
    do {
      piVar2 = this->nu;
      iVar3 = 0;
      if (0 < *(int *)(lVar5 + (longlong)piVar2)) {
        lVar6 = 0;
        do {
          lVar1 = *(longlong *)(lVar7 + (longlong)this->ed);
          if (this->ed[*(int *)(lVar1 + lVar6)]
              [*(int *)(lVar1 + (longlong)(*(int *)(lVar5 + (longlong)piVar2) + iVar3) * 4)] !=
              iVar4) {
            printf("Relational error at point %d, edge %d.\n");
          }
          piVar2 = this->nu;
          iVar3 = iVar3 + 1;
          lVar6 = lVar6 + 4;
        } while (iVar3 < *(int *)(lVar5 + (longlong)piVar2));
      }
      iVar4 = iVar4 + 1;
      lVar7 = lVar7 + 8;
      lVar5 = lVar5 + 4;
    } while (iVar4 < this->p);
  }
  return;
}

// construct_relations @ 1436ac9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall voro::voronoicell_base::construct_relations(voronoicell_base *this)

{
  code *pcVar1;
  bool bVar2;
  int **ppiVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_1a8 [32];
  wchar_t *local_188;
  undefined4 local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  iVar10 = 0;
  if (0 < this->p) {
    local_168 = 0;
    local_170 = 0;
    do {
      iVar9 = 0;
      lVar7 = local_168;
      lVar8 = local_170;
      if (0 < *(int *)(local_168 + (longlong)this->nu)) {
        local_178 = 0;
        do {
          ppiVar3 = this->ed;
          iVar6 = 0;
          iVar4 = *(int *)(*(longlong *)(lVar8 + (longlong)ppiVar3) + local_178);
          if (*ppiVar3[iVar4] != iVar10) {
            lVar5 = 0;
            do {
              lVar5 = lVar5 + 4;
              iVar6 = iVar6 + 1;
              if (iVar6 == this->nu[iVar4]) {
                local_158._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_158,"Relation table construction failed",0x22,Yes);
                local_180 = 3;
                local_188 = local_158.Ptr;
                bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("false",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Voronoi\\Private\\voro++\\src\\common.hh"
                                   ,0x20,L"voro++ failure: %s (status code: %d)");
                if ((void *)local_158._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_158._padding_);
                }
                if (bVar2) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
              }
              ppiVar3 = this->ed;
              lVar7 = local_168;
              lVar8 = local_170;
            } while (*(int *)(lVar5 + (longlong)ppiVar3[iVar4]) != iVar10);
          }
          iVar4 = *(int *)(lVar7 + (longlong)this->nu) + iVar9;
          iVar9 = iVar9 + 1;
          local_178 = local_178 + 4;
          *(int *)(*(longlong *)(lVar8 + (longlong)ppiVar3) + (longlong)iVar4 * 4) = iVar6;
        } while (iVar9 < *(int *)(lVar7 + (longlong)this->nu));
      }
      local_170 = lVar8 + 8;
      local_168 = lVar7 + 4;
      iVar10 = iVar10 + 1;
    } while (iVar10 < this->p);
  }
  return;
}

// copy @ 1436acbf0

void __thiscall voro::voronoicell_base::copy(voronoicell_base *this,voronoicell_base *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar4 = 0;
  this->p = param_1->p;
  this->up = 0;
  if (0 < this->current_vertex_order) {
    iVar8 = 1;
    uVar5 = uVar4;
    uVar11 = uVar4;
    uVar12 = uVar4;
    uVar13 = uVar4;
    do {
      *(undefined4 *)(uVar11 + (longlong)this->mec) =
           *(undefined4 *)(uVar11 + (longlong)param_1->mec);
      piVar3 = this->mec;
      uVar7 = uVar4;
      uVar10 = uVar4;
      if (0 < iVar8 * *(int *)(uVar11 + (longlong)piVar3)) {
        do {
          uVar6 = (int)uVar7 + 1;
          *(undefined4 *)(uVar10 + *(longlong *)(uVar5 + (longlong)this->mep)) =
               *(undefined4 *)(uVar10 + *(longlong *)(uVar5 + (longlong)param_1->mep));
          piVar3 = this->mec;
          uVar7 = (ulonglong)uVar6;
          uVar10 = uVar10 + 4;
        } while ((int)uVar6 < iVar8 * *(int *)(uVar11 + (longlong)piVar3));
      }
      uVar7 = uVar4;
      uVar10 = uVar4;
      if (0 < iVar8 * *(int *)(uVar11 + (longlong)piVar3)) {
        do {
          lVar2 = *(longlong *)(uVar5 + (longlong)this->mep);
          iVar9 = (int)uVar10;
          uVar6 = iVar9 + iVar8;
          uVar10 = (ulonglong)uVar6;
          lVar1 = uVar7 * 4;
          uVar7 = uVar7 + 1 + uVar13;
          this->ed[*(int *)(lVar2 + lVar1 + uVar5)] = (int *)(lVar2 + (longlong)iVar9 * 4);
        } while ((int)uVar6 < iVar8 * *(int *)(uVar11 + (longlong)this->mec));
      }
      uVar6 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar6;
      iVar8 = iVar8 + 2;
      uVar13 = uVar13 + 2;
      uVar11 = uVar11 + 4;
      uVar5 = uVar5 + 8;
    } while ((int)uVar6 < this->current_vertex_order);
  }
  iVar8 = this->p;
  uVar5 = uVar4;
  uVar11 = uVar4;
  if (0 < iVar8) {
    do {
      uVar6 = (int)uVar11 + 1;
      *(undefined4 *)(uVar5 + (longlong)this->nu) = *(undefined4 *)(uVar5 + (longlong)param_1->nu);
      iVar8 = this->p;
      uVar5 = uVar5 + 4;
      uVar11 = (ulonglong)uVar6;
    } while ((int)uVar6 < iVar8);
  }
  uVar5 = uVar4;
  if (0 < iVar8 * 3) {
    do {
      uVar6 = (int)uVar5 + 1;
      *(undefined8 *)(uVar4 + (longlong)this->pts) = *(undefined8 *)(uVar4 + (longlong)param_1->pts)
      ;
      uVar4 = uVar4 + 8;
      uVar5 = (ulonglong)uVar6;
    } while ((int)uVar6 < this->p * 3);
  }
  return;
}

// extractCellInfo @ 1436acdc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
voro::voronoicell::extractCellInfo
          (voronoicell *this,TVector<double> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  double *pdVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint local_58;
  uint local_54;
  undefined4 local_50 [10];
  
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (param_2,*(int *)&this->field_0x18,Default);
  dVar6 = __real_3fe0000000000000;
  pdVar11 = *(double **)&this->field_0x30;
  uVar12 = 0;
  if (0 < *(int *)&this->field_0x18) {
    lVar13 = 0;
    do {
      dVar2 = *pdVar11;
      uVar16 = ~uVar12 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar8 = uVar16;
      }
      dVar3 = (param_1->field0_0x0)._s_0.X;
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(double *)((param_2->AllocatorInstance).Data + lVar13) = dVar2 * dVar6 + dVar3;
      dVar2 = pdVar11[1];
      uVar8 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar8 = uVar16;
      }
      dVar3 = (param_1->field0_0x0)._s_0.Y;
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(double *)((param_2->AllocatorInstance).Data + lVar13 + 8) = dVar2 * dVar6 + dVar3;
      dVar2 = pdVar11[2];
      pdVar11 = pdVar11 + 3;
      uVar8 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar8 = uVar16;
      }
      dVar3 = (param_1->field0_0x0)._s_0.Z;
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar12 = uVar12 + 1;
      *(double *)((param_2->AllocatorInstance).Data + lVar13 + 0x10) = dVar2 * dVar6 + dVar3;
      lVar13 = lVar13 + 0x18;
    } while ((int)uVar12 < *(int *)&this->field_0x18);
  }
  piVar1 = &param_3->ArrayMax;
  uVar12 = 0;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,piVar1);
  }
  local_54 = 1;
  if (1 < *(int *)&this->field_0x18) {
    do {
      uVar14 = 0;
      uVar15 = uVar14;
      uVar8 = local_54;
      if (0 < *(int *)(*(longlong *)&this->field_0x28 + (longlong)(int)local_54 * 4)) {
        do {
          local_58 = *(uint *)(uVar14 + *(longlong *)
                                         (*(longlong *)&this->field_0x20 + (longlong)(int)uVar8 * 8)
                              );
          if (-1 < (int)local_58) {
            pFVar4 = (param_3->AllocatorInstance).Data;
            local_50[0] = 0;
            if (((pFVar4 <= (FScriptContainerElement *)local_50) &&
                ((FScriptContainerElement *)local_50 < pFVar4 + (longlong)*piVar1 * 4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar9 = param_3->ArrayNum;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&param_3->AllocatorInstance,piVar1);
            }
            param_3->ArrayNum = iVar9 + 1;
            *(undefined4 *)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_50[0];
            pFVar4 = (param_3->AllocatorInstance).Data;
            if (((pFVar4 <= (FScriptContainerElement *)&local_54) &&
                ((FScriptContainerElement *)&local_54 < pFVar4 + (longlong)*piVar1 * 4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar9 = param_3->ArrayNum;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&param_3->AllocatorInstance,piVar1);
            }
            param_3->ArrayNum = iVar9 + 1;
            *(uint *)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_54;
            *(uint *)(uVar14 + *(longlong *)
                                (*(longlong *)&this->field_0x20 + (longlong)(int)local_54 * 8)) =
                 -1 - local_58;
            iVar9 = *(int *)(*(longlong *)
                              (*(longlong *)&this->field_0x20 + (longlong)(int)local_54 * 8) +
                            (longlong)
                            (*(int *)(*(longlong *)&this->field_0x28 + (longlong)(int)local_54 * 4)
                            + (int)uVar15) * 4);
            iVar10 = 0;
            if (iVar9 != *(int *)(*(longlong *)&this->field_0x28 + (longlong)(int)local_58 * 4) + -1
               ) {
              iVar10 = iVar9 + 1;
            }
            do {
              pFVar4 = (param_3->AllocatorInstance).Data;
              if (((pFVar4 <= (FScriptContainerElement *)&local_58) &&
                  ((FScriptContainerElement *)&local_58 < pFVar4 + (longlong)*piVar1 * 4)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar9 = param_3->ArrayNum;
              if (iVar9 == *piVar1) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&param_3->AllocatorInstance,piVar1);
              }
              param_3->ArrayNum = iVar9 + 1;
              *(uint *)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_58;
              lVar13 = *(longlong *)(*(longlong *)&this->field_0x20 + (longlong)(int)local_58 * 8);
              uVar8 = *(uint *)(lVar13 + (longlong)iVar10 * 4);
              *(uint *)(lVar13 + (longlong)iVar10 * 4) = ~uVar8;
              iVar9 = *(int *)(*(longlong *)
                                (*(longlong *)&this->field_0x20 + (longlong)(int)local_58 * 8) +
                              (longlong)
                              (*(int *)(*(longlong *)&this->field_0x28 + (longlong)(int)local_58 * 4
                                       ) + iVar10) * 4);
              iVar10 = 0;
              if (iVar9 != *(int *)(*(longlong *)&this->field_0x28 + (longlong)(int)uVar8 * 4) + -1)
              {
                iVar10 = iVar9 + 1;
              }
              local_58 = uVar8;
            } while (uVar8 != local_54);
            uVar16 = param_3->ArrayNum;
            uVar8 = 0;
            if ((int)uVar12 < (int)uVar16) {
              uVar8 = ~uVar12 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *(uint *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar12 * 4) =
                 (uVar16 - uVar12) + -1;
            uVar8 = local_54;
            uVar12 = uVar16;
          }
          uVar16 = (int)uVar15 + 1;
          uVar14 = uVar14 + 4;
          uVar15 = (ulonglong)uVar16;
        } while ((int)uVar16 < *(int *)(*(longlong *)&this->field_0x28 + (longlong)(int)uVar8 * 4));
      }
      local_54 = uVar8 + 1;
    } while ((int)local_54 < *(int *)&this->field_0x18);
  }
  voronoicell_base::reset_edges((voronoicell_base *)this);
  return;
}

// extractCellInfo @ 1436ad320

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
voro::voronoicell_neighbor::extractCellInfo
          (voronoicell_neighbor *this,TVector<double> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  double *pdVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  uint local_e8;
  uint local_e4;
  undefined4 local_e0 [2];
  undefined1 local_d8 [16];
  double local_c8;
  
  pTVar13 = param_4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (param_2,(int)this->_padding_,Default);
  dVar12 = __real_3fe0000000000000;
  pdVar23 = (double *)this->_padding_;
  uVar18 = 0;
  if (0 < (int)this->_padding_) {
    lVar21 = 0;
    do {
      dVar2 = *pdVar23;
      uVar25 = ~uVar18 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar18 < param_2->ArrayNum) {
        uVar15 = uVar25;
      }
      dVar3 = (param_1->field0_0x0)._s_0.X;
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(double *)((param_2->AllocatorInstance).Data + lVar21) = dVar2 * dVar12 + dVar3;
      dVar2 = pdVar23[1];
      uVar15 = 0;
      if ((int)uVar18 < param_2->ArrayNum) {
        uVar15 = uVar25;
      }
      dVar3 = (param_1->field0_0x0)._s_0.Y;
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(double *)((param_2->AllocatorInstance).Data + lVar21 + 8) = dVar2 * dVar12 + dVar3;
      dVar2 = pdVar23[2];
      pdVar23 = pdVar23 + 3;
      uVar15 = 0;
      if ((int)uVar18 < param_2->ArrayNum) {
        uVar15 = uVar25;
      }
      dVar3 = (param_1->field0_0x0)._s_0.Z;
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar18 = uVar18 + 1;
      *(double *)((param_2->AllocatorInstance).Data + lVar21 + 0x10) = dVar2 * dVar12 + dVar3;
      lVar21 = lVar21 + 0x18;
    } while ((int)uVar18 < (int)this->_padding_);
  }
  piVar1 = &param_3->ArrayMax;
  uVar18 = 0;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,piVar1);
  }
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  param_5->ArrayNum = 0;
  if (param_5->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
  }
  dVar2 = __real_3b5e392010175ee5;
  dVar12 = __real_3ff0000000000000;
  local_e4 = 1;
  if (1 < (int)this->_padding_) {
    do {
      iVar20 = 0;
      uVar15 = local_e4;
      if (0 < *(int *)(this->_padding_ + (longlong)(int)local_e4 * 4)) {
        param_4 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
        do {
          local_e8 = *(uint *)((longlong)&(param_4->AllocatorInstance).Data +
                              *(longlong *)(this->_padding_ + (longlong)(int)uVar15 * 8));
          if (-1 < (int)local_e8) {
            pFVar4 = (pTVar13->AllocatorInstance).Data;
            pFVar24 = (FScriptContainerElement *)
                      ((longlong)this->ne[(int)uVar15] + (longlong)param_4);
            if (((pFVar4 <= pFVar24) && (pFVar24 < pFVar4 + (longlong)pTVar13->ArrayMax * 4)) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar16 = pTVar13->ArrayNum;
            if (iVar16 == pTVar13->ArrayMax) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
            }
            pTVar13->ArrayNum = iVar16 + 1;
            local_e0[0] = 0;
            *(undefined4 *)((pTVar13->AllocatorInstance).Data + (longlong)iVar16 * 4) =
                 *(undefined4 *)pFVar24;
            pFVar4 = (param_3->AllocatorInstance).Data;
            if (((pFVar4 <= (FScriptContainerElement *)local_e0) &&
                ((FScriptContainerElement *)local_e0 < pFVar4 + (longlong)*piVar1 * 4)) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar16 = param_3->ArrayNum;
            if (iVar16 == *piVar1) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&param_3->AllocatorInstance,piVar1);
            }
            param_3->ArrayNum = iVar16 + 1;
            *(undefined4 *)((param_3->AllocatorInstance).Data + (longlong)iVar16 * 4) = local_e0[0];
            pFVar4 = (param_3->AllocatorInstance).Data;
            if (((pFVar4 <= (FScriptContainerElement *)&local_e4) &&
                ((FScriptContainerElement *)&local_e4 < pFVar4 + (longlong)*piVar1 * 4)) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar16 = param_3->ArrayNum;
            if (iVar16 == *piVar1) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&param_3->AllocatorInstance,piVar1);
            }
            local_d8 = ZEXT816(0);
            param_3->ArrayNum = iVar16 + 1;
            dVar6 = 0.0;
            dVar10 = 0.0;
            dVar3 = 0.0;
            dVar11 = 0.0;
            dVar8 = 0.0;
            *(uint *)((param_3->AllocatorInstance).Data + (longlong)iVar16 * 4) = local_e4;
            local_c8 = 0.0;
            *(uint *)((longlong)&(param_4->AllocatorInstance).Data +
                     *(longlong *)(this->_padding_ + (longlong)(int)local_e4 * 8)) = -1 - local_e8;
            iVar16 = *(int *)(*(longlong *)(this->_padding_ + (longlong)(int)local_e4 * 8) +
                             (longlong)
                             (*(int *)(this->_padding_ + (longlong)(int)local_e4 * 4) + iVar20) * 4)
            ;
            iVar22 = 0;
            if (iVar16 != *(int *)(this->_padding_ + (longlong)(int)local_e8 * 4) + -1) {
              iVar22 = iVar16 + 1;
            }
            do {
              pFVar4 = (param_3->AllocatorInstance).Data;
              if (((pFVar4 <= (FScriptContainerElement *)&local_e8) &&
                  ((FScriptContainerElement *)&local_e8 < pFVar4 + (longlong)*piVar1 * 4)) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar14)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar16 = param_3->ArrayNum;
              if (iVar16 == *piVar1) {
                iVar16 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&param_3->AllocatorInstance,piVar1);
              }
              param_3->ArrayNum = iVar16 + 1;
              *(uint *)((param_3->AllocatorInstance).Data + (longlong)iVar16 * 4) = local_e8;
              lVar21 = *(longlong *)(this->_padding_ + (longlong)(int)local_e8 * 8);
              uVar15 = *(uint *)(lVar21 + (longlong)iVar22 * 4);
              *(uint *)(lVar21 + (longlong)iVar22 * 4) = ~uVar15;
              if (dVar8 <= dVar2) {
                lVar21 = this->_padding_;
                lVar19 = (longlong)(int)(uVar15 * 3);
                lVar17 = (longlong)(int)(local_e8 * 3);
                if (dVar2 < dVar6) {
                  dVar27 = *(double *)(lVar21 + 8 + lVar19 * 8) -
                           *(double *)(lVar21 + 8 + lVar17 * 8);
                  dVar8 = *(double *)(lVar21 + 0x10 + lVar19 * 8) -
                          *(double *)(lVar21 + 0x10 + lVar17 * 8);
                  dVar28 = *(double *)(lVar21 + lVar19 * 8) - *(double *)(lVar21 + lVar17 * 8);
                  dVar29 = dVar27 * dVar11 - dVar8 * dVar3;
                  dVar9 = dVar8 * dVar10 - dVar28 * dVar11;
                  auVar26._0_8_ = dVar29 * dVar29;
                  auVar26._8_8_ = 0;
                  dVar27 = dVar28 * dVar3 - dVar27 * dVar10;
                  dVar8 = dVar9 * dVar9 + auVar26._0_8_ + dVar27 * dVar27;
                  if (dVar2 < dVar8) {
                    auVar7._8_8_ = 0;
                    auVar7._0_8_ = dVar8;
                    auVar26 = sqrtpd(auVar26,auVar7);
                    dVar28 = dVar12 / auVar26._0_8_;
                    local_c8 = dVar28 * dVar27;
                    local_d8._8_8_ = dVar28 * dVar9;
                    local_d8._0_8_ = dVar28 * dVar29;
                  }
                }
                else {
                  dVar3 = *(double *)(lVar21 + 8 + lVar19 * 8) -
                          *(double *)(lVar21 + 8 + lVar17 * 8);
                  dVar10 = *(double *)(lVar21 + lVar19 * 8) - *(double *)(lVar21 + lVar17 * 8);
                  dVar11 = *(double *)(lVar21 + 0x10 + lVar19 * 8) -
                           *(double *)(lVar21 + 0x10 + lVar17 * 8);
                  dVar6 = dVar3 * dVar3 + dVar10 * dVar10 + dVar11 * dVar11;
                }
              }
              iVar16 = *(int *)(*(longlong *)(this->_padding_ + (longlong)(int)local_e8 * 8) +
                               (longlong)
                               (*(int *)(this->_padding_ + (longlong)(int)local_e8 * 4) + iVar22) *
                               4);
              iVar22 = 0;
              if (iVar16 != *(int *)(this->_padding_ + (longlong)(int)uVar15 * 4) + -1) {
                iVar22 = iVar16 + 1;
              }
              local_e8 = uVar15;
            } while (uVar15 != local_e4);
            pFVar4 = (param_5->AllocatorInstance).Data;
            if (((pFVar4 <= (FScriptContainerElement *)local_d8) &&
                ((FScriptContainerElement *)local_d8 < pFVar4 + (longlong)param_5->ArrayMax * 0x18))
               && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar16 = param_5->ArrayNum;
            if (iVar16 == param_5->ArrayMax) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&param_5->AllocatorInstance,&param_5->ArrayMax);
            }
            param_5->ArrayNum = iVar16 + 1;
            pFVar24 = (param_5->AllocatorInstance).Data;
            pFVar4 = pFVar24 + (longlong)iVar16 * 0x18;
            *(undefined8 *)pFVar4 = local_d8._0_8_;
            *(undefined8 *)(pFVar4 + 8) = local_d8._8_8_;
            *(double *)(pFVar24 + (longlong)iVar16 * 0x18 + 0x10) = local_c8;
            uVar25 = param_3->ArrayNum;
            uVar15 = 0;
            if ((int)uVar18 < (int)uVar25) {
              uVar15 = ~uVar18 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *(uint *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar18 * 4) =
                 (uVar25 - uVar18) + -1;
            uVar15 = local_e4;
            uVar18 = uVar25;
          }
          iVar20 = iVar20 + 1;
          param_4 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                    ((longlong)&(param_4->AllocatorInstance).Data + 4);
        } while (iVar20 < *(int *)(this->_padding_ + (longlong)(int)uVar15 * 4));
      }
      local_e4 = uVar15 + 1;
    } while ((int)local_e4 < (int)this->_padding_);
  }
  voronoicell_base::reset_edges((voronoicell_base *)this);
  return;
}

// face_areas @ 1436adc30

void __thiscall
voro::voronoicell_base::face_areas
          (voronoicell_base *this,vector<double,std::allocator<double>_> *param_1)

{
  double **ppdVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double *_Dst;
  longlong lVar11;
  ulonglong uVar12;
  double *pdVar13;
  double *_Src;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  size_t _Size;
  int iVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  uint local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong local_b8;
  
  pdVar13 = (param_1->_Mypair)._Myval2._Myfirst;
  if (pdVar13 != (param_1->_Mypair)._Myval2._Mylast) {
    (param_1->_Mypair)._Myval2._Mylast = pdVar13;
  }
  dVar10 = __real_3fc0000000000000;
  local_res8 = 1;
  if (1 < this->p) {
    local_res20 = 4;
    local_res18 = 8;
    local_b8 = 0x28;
    do {
      iVar18 = 0;
      if (0 < *(int *)((longlong)this->nu + local_res20)) {
        local_res10 = 0;
        do {
          lVar11 = *(longlong *)((longlong)this->ed + local_res18);
          uVar2 = *(uint *)(lVar11 + local_res10);
          uVar15 = (ulonglong)(int)uVar2;
          if (-1 < (int)uVar2) {
            dVar9 = 0.0;
            *(uint *)(lVar11 + local_res10) = ~uVar2;
            iVar3 = *(int *)(*(longlong *)((longlong)this->ed + local_res18) +
                            (longlong)(*(int *)((longlong)this->nu + local_res20) + iVar18) * 4);
            piVar4 = this->ed[uVar15];
            iVar17 = 0;
            if (iVar3 != this->nu[uVar15] + -1) {
              iVar17 = iVar3 + 1;
            }
            uVar2 = piVar4[iVar17];
            piVar4[iVar17] = ~uVar2;
            while (uVar2 != local_res8) {
              iVar14 = (int)uVar15;
              pdVar13 = this->pts;
              iVar3 = this->ed[iVar14][this->nu[iVar14] + iVar17];
              lVar11 = (longlong)(iVar14 * 3);
              uVar15 = (ulonglong)uVar2;
              dVar8 = pdVar13[lVar11] - *(double *)((longlong)pdVar13 + local_b8 + -0x10);
              dVar7 = pdVar13[lVar11 + 1] - *(double *)((longlong)pdVar13 + local_b8 + -8);
              dVar23 = pdVar13[lVar11 + 2] - *(double *)((longlong)pdVar13 + local_b8);
              lVar11 = (longlong)(int)(uVar2 * 3);
              dVar22 = pdVar13[lVar11 + 1] - *(double *)((longlong)pdVar13 + local_b8 + -8);
              dVar21 = pdVar13[lVar11 + 2] - *(double *)((longlong)pdVar13 + local_b8);
              dVar6 = pdVar13[lVar11] - *(double *)((longlong)pdVar13 + local_b8 + -0x10);
              piVar4 = this->ed[(int)uVar2];
              iVar17 = 0;
              if (iVar3 != this->nu[(int)uVar2] + -1) {
                iVar17 = iVar3 + 1;
              }
              uVar2 = piVar4[iVar17];
              piVar4[iVar17] = ~uVar2;
              dVar24 = dVar21 * dVar7 - dVar22 * dVar23;
              auVar19._0_8_ = dVar8 * dVar21;
              auVar19._8_8_ = 0;
              dVar7 = dVar8 * dVar22 - dVar6 * dVar7;
              dVar6 = dVar6 * dVar23 - auVar19._0_8_;
              auVar20._8_8_ = 0;
              auVar20._0_8_ = dVar6 * dVar6 + dVar24 * dVar24 + dVar7 * dVar7;
              auVar20 = sqrtpd(auVar19,auVar20);
              dVar9 = dVar9 + auVar20._0_8_;
            }
            pdVar13 = (param_1->_Mypair)._Myval2._Myend;
            _Src = (param_1->_Mypair)._Myval2._Mylast;
            if (_Src == pdVar13) {
              pdVar5 = (param_1->_Mypair)._Myval2._Myfirst;
              lVar11 = (longlong)_Src - (longlong)pdVar5 >> 3;
              if (lVar11 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                std::vector<double,std::allocator<double>_>::_Xlength();
              }
              uVar15 = lVar11 + 1;
              uVar12 = (longlong)pdVar13 - (longlong)pdVar5 >> 3;
              if (0x1fffffffffffffff - (uVar12 >> 1) < uVar12) {
                uVar16 = 0x1fffffffffffffff;
              }
              else {
                uVar12 = (uVar12 >> 1) + uVar12;
                uVar16 = uVar15;
                if (uVar15 <= uVar12) {
                  uVar16 = uVar12;
                }
                if (0x1fffffffffffffff < uVar16) {
                    /* WARNING: Subroutine does not return */
                  std::_Throw_bad_array_new_length();
                }
              }
              _Dst = std::_Allocate<16,std::_Default_allocate_traits>(uVar16 * 8);
              _Dst[lVar11] = dVar9 * dVar10;
              pdVar13 = (param_1->_Mypair)._Myval2._Mylast;
              pdVar5 = (param_1->_Mypair)._Myval2._Myfirst;
              if (_Src == pdVar13) {
                _Size = (longlong)pdVar13 - (longlong)pdVar5;
                pdVar13 = _Dst;
                _Src = pdVar5;
              }
              else {
                memmove(_Dst,pdVar5,(longlong)_Src - (longlong)pdVar5);
                _Size = (longlong)(param_1->_Mypair)._Myval2._Mylast - (longlong)_Src;
                pdVar13 = _Dst + lVar11 + 1;
              }
              memmove(pdVar13,_Src,_Size);
              std::vector<double,std::allocator<double>_>::_Change_array(param_1,_Dst,uVar15,uVar16)
              ;
            }
            else {
              *_Src = dVar9 * dVar10;
              ppdVar1 = &(param_1->_Mypair)._Myval2._Mylast;
              *ppdVar1 = *ppdVar1 + 1;
            }
          }
          local_res10 = local_res10 + 4;
          iVar18 = iVar18 + 1;
        } while (iVar18 < *(int *)((longlong)this->nu + local_res20));
      }
      local_res8 = local_res8 + 1;
      local_res18 = local_res18 + 8;
      local_res20 = local_res20 + 4;
      local_b8 = local_b8 + 0x18;
    } while ((int)local_res8 < this->p);
  }
  reset_edges(this);
  return;
}

// face_freq_table @ 1436ae050

void __thiscall
voro::voronoicell_base::face_freq_table
          (voronoicell_base *this,vector<int,std::allocator<int>_> *param_1)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulong64 uVar9;
  int **ppiVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  uint local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  
  piVar2 = (param_1->_Mypair)._Myval2._Myfirst;
  if (piVar2 != (param_1->_Mypair)._Myval2._Mylast) {
    (param_1->_Mypair)._Myval2._Mylast = piVar2;
  }
  local_res8 = 1;
  if (1 < this->p) {
    local_res20 = 4;
    local_res18 = 8;
    do {
      iVar16 = 0;
      if (0 < *(int *)(local_res20 + (longlong)this->nu)) {
        local_res10 = 0;
        do {
          lVar3 = *(longlong *)((longlong)this->ed + local_res18);
          uVar7 = *(uint *)(lVar3 + local_res10);
          lVar13 = (longlong)(int)uVar7;
          if (-1 < (int)uVar7) {
            lVar17 = 1;
            *(uint *)(lVar3 + local_res10) = ~uVar7;
            ppiVar10 = this->ed;
            iVar15 = *(int *)(*(longlong *)((longlong)ppiVar10 + local_res18) +
                             (longlong)(*(int *)((longlong)this->nu + local_res20) + iVar16) * 4);
            uVar7 = 1;
            iVar14 = 0;
            if (iVar15 != this->nu[lVar13] + -1) {
              iVar14 = iVar15 + 1;
            }
            do {
              uVar6 = uVar7;
              iVar12 = (int)lVar13;
              lVar17 = lVar17 + 1;
              uVar7 = uVar6 + 1;
              uVar1 = ppiVar10[iVar12][iVar14];
              lVar13 = (longlong)(int)uVar1;
              ppiVar10[iVar12][iVar14] = ~uVar1;
              ppiVar10 = this->ed;
              iVar15 = 0;
              if (ppiVar10[iVar12][this->nu[iVar12] + iVar14] != this->nu[lVar13] + -1) {
                iVar15 = ppiVar10[iVar12][this->nu[iVar12] + iVar14] + 1;
              }
              iVar14 = iVar15;
            } while (uVar1 != local_res8);
            piVar2 = (param_1->_Mypair)._Myval2._Mylast;
            piVar4 = (param_1->_Mypair)._Myval2._Myfirst;
            uVar11 = (longlong)piVar2 - (longlong)piVar4 >> 2;
            if (uVar11 <= uVar7) {
              uVar8 = (ulonglong)(int)(uVar6 + 2);
              if (uVar8 < uVar11) {
                (param_1->_Mypair)._Myval2._Mylast = piVar4 + uVar8;
              }
              else if (uVar11 < uVar8) {
                uVar5 = (longlong)(param_1->_Mypair)._Myval2._Myend - (longlong)piVar4 >> 2;
                if (uVar5 < uVar8) {
                  if (0x3fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
                    std::vector<int,std::allocator<int>_>::_Xlength();
                  }
                  if (0x3fffffffffffffff - (uVar5 >> 1) < uVar5) {
                    uVar9 = 0x3fffffffffffffff;
                  }
                  else {
                    uVar5 = uVar5 + (uVar5 >> 1);
                    uVar9 = uVar8;
                    if ((uVar8 <= uVar5) && (uVar9 = uVar5, 0x3fffffffffffffff < uVar5)) {
                    /* WARNING: Subroutine does not return */
                      std::_Throw_bad_array_new_length();
                    }
                  }
                  piVar4 = std::_Allocate<16,std::_Default_allocate_traits>(uVar9 * 4);
                  memset(piVar4 + uVar11,0,(uVar8 - uVar11) * 4);
                  piVar2 = (param_1->_Mypair)._Myval2._Myfirst;
                  memmove(piVar4,piVar2,
                          (longlong)(param_1->_Mypair)._Myval2._Mylast - (longlong)piVar2);
                  std::vector<int,std::allocator<int>_>::_Change_array(param_1,piVar4,uVar8,uVar9);
                }
                else {
                  memset(piVar2,0,(uVar8 - uVar11) * 4);
                  (param_1->_Mypair)._Myval2._Mylast = piVar2 + (uVar8 - uVar11);
                }
              }
            }
            piVar2 = (param_1->_Mypair)._Myval2._Myfirst + lVar17;
            *piVar2 = *piVar2 + 1;
          }
          local_res10 = local_res10 + 4;
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(local_res20 + (longlong)this->nu));
      }
      local_res8 = local_res8 + 1;
      local_res18 = local_res18 + 8;
      local_res20 = local_res20 + 4;
    } while ((int)local_res8 < this->p);
  }
  reset_edges(this);
  return;
}

// face_orders @ 1436ae330

void __thiscall
voro::voronoicell_base::face_orders
          (voronoicell_base *this,vector<int,std::allocator<int>_> *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *_Dst;
  ulonglong uVar4;
  int *piVar5;
  int *_Src;
  ulonglong uVar6;
  longlong lVar7;
  int **ppiVar8;
  size_t _Size;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  
  piVar5 = (param_1->_Mypair)._Myval2._Myfirst;
  if (piVar5 != (param_1->_Mypair)._Myval2._Mylast) {
    (param_1->_Mypair)._Myval2._Mylast = piVar5;
  }
  local_res8 = 1;
  if (1 < this->p) {
    local_res20 = 4;
    local_res10 = 8;
    do {
      iVar13 = 0;
      if (0 < *(int *)((longlong)this->nu + local_res20)) {
        local_res18 = 0;
        do {
          lVar7 = *(longlong *)((longlong)this->ed + local_res10);
          uVar1 = *(uint *)(lVar7 + local_res18);
          lVar10 = (longlong)(int)uVar1;
          if (-1 < (int)uVar1) {
            iVar12 = 1;
            *(uint *)(lVar7 + local_res18) = ~uVar1;
            ppiVar8 = this->ed;
            iVar3 = *(int *)(*(longlong *)((longlong)ppiVar8 + local_res10) +
                            (longlong)(*(int *)((longlong)this->nu + local_res20) + iVar13) * 4);
            iVar11 = 0;
            if (iVar3 != this->nu[lVar10] + -1) {
              iVar11 = iVar3 + 1;
            }
            do {
              iVar9 = (int)lVar10;
              iVar12 = iVar12 + 1;
              uVar1 = ppiVar8[iVar9][iVar11];
              lVar10 = (longlong)(int)uVar1;
              ppiVar8[iVar9][iVar11] = ~uVar1;
              ppiVar8 = this->ed;
              iVar3 = this->nu[iVar9] + iVar11;
              iVar11 = 0;
              if (ppiVar8[iVar9][iVar3] != this->nu[lVar10] + -1) {
                iVar11 = ppiVar8[iVar9][iVar3] + 1;
              }
            } while (uVar1 != local_res8);
            piVar5 = (param_1->_Mypair)._Myval2._Myend;
            _Src = (param_1->_Mypair)._Myval2._Mylast;
            if (_Src == piVar5) {
              piVar2 = (param_1->_Mypair)._Myval2._Myfirst;
              lVar7 = (longlong)_Src - (longlong)piVar2 >> 2;
              if (lVar7 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                std::vector<int,std::allocator<int>_>::_Xlength();
              }
              uVar4 = (longlong)piVar5 - (longlong)piVar2 >> 2;
              if (0x3fffffffffffffff - (uVar4 >> 1) < uVar4) {
                uVar6 = 0x3fffffffffffffff;
              }
              else {
                uVar4 = (uVar4 >> 1) + uVar4;
                uVar6 = lVar7 + 1U;
                if (lVar7 + 1U <= uVar4) {
                  uVar6 = uVar4;
                }
                if (0x3fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
                  std::_Throw_bad_array_new_length();
                }
              }
              _Dst = std::_Allocate<16,std::_Default_allocate_traits>(uVar6 * 4);
              _Dst[lVar7] = iVar12;
              piVar5 = (param_1->_Mypair)._Myval2._Mylast;
              piVar2 = (param_1->_Mypair)._Myval2._Myfirst;
              if (_Src == piVar5) {
                _Size = (longlong)piVar5 - (longlong)piVar2;
                piVar5 = _Dst;
                _Src = piVar2;
              }
              else {
                memmove(_Dst,piVar2,(longlong)_Src - (longlong)piVar2);
                _Size = (longlong)(param_1->_Mypair)._Myval2._Mylast - (longlong)_Src;
                piVar5 = _Dst + lVar7 + 1;
              }
              memmove(piVar5,_Src,_Size);
              std::vector<int,std::allocator<int>_>::_Change_array(param_1,_Dst,lVar7 + 1,uVar6);
            }
            else {
              *_Src = iVar12;
              ppiVar8 = &(param_1->_Mypair)._Myval2._Mylast;
              *ppiVar8 = *ppiVar8 + 1;
            }
          }
          local_res18 = local_res18 + 4;
          iVar13 = iVar13 + 1;
        } while (iVar13 < *(int *)((longlong)this->nu + local_res20));
      }
      local_res8 = local_res8 + 1;
      local_res10 = local_res10 + 8;
      local_res20 = local_res20 + 4;
    } while ((int)local_res8 < this->p);
  }
  reset_edges(this);
  return;
}

// face_perimeters @ 1436ae5c0

void __thiscall
voro::voronoicell_base::face_perimeters
          (voronoicell_base *this,vector<double,std::allocator<double>_> *param_1)

{
  double **ppdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  double *pdVar6;
  undefined1 auVar7 [16];
  double dVar8;
  int iVar9;
  double *_Dst;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  double *pdVar13;
  double *_Src;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  size_t _Size;
  int **ppiVar17;
  int iVar18;
  int iVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar25 [16];
  uint local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong local_78;
  
  pdVar13 = (param_1->_Mypair)._Myval2._Myfirst;
  if (pdVar13 != (param_1->_Mypair)._Myval2._Mylast) {
    (param_1->_Mypair)._Myval2._Mylast = pdVar13;
  }
  dVar8 = __real_3fe0000000000000;
  local_res8 = 1;
  if (1 < this->p) {
    local_78 = 4;
    local_res18 = 8;
    local_res20 = 0x28;
    do {
      iVar18 = 0;
      if (0 < *(int *)(local_78 + (longlong)this->nu)) {
        local_res10 = 0;
        do {
          lVar11 = *(longlong *)((longlong)this->ed + local_res18);
          uVar5 = *(uint *)(lVar11 + local_res10);
          uVar16 = (ulonglong)(int)uVar5;
          if (-1 < (int)uVar5) {
            lVar10 = (longlong)(int)(uVar5 * 3);
            pdVar13 = this->pts;
            dVar24 = pdVar13[lVar10 + 1] - *(double *)((longlong)pdVar13 + local_res20 + -8);
            dVar23 = pdVar13[lVar10] - *(double *)((longlong)pdVar13 + local_res20 + -0x10);
            dVar20 = pdVar13[lVar10 + 2] - *(double *)((longlong)pdVar13 + local_res20);
            *(uint *)(lVar11 + local_res10) = ~uVar5;
            ppiVar17 = this->ed;
            iVar9 = *(int *)(*(longlong *)((longlong)ppiVar17 + local_res18) +
                            (longlong)(*(int *)((longlong)this->nu + local_78) + iVar18) * 4);
            iVar19 = 0;
            if (iVar9 != this->nu[uVar16] + -1) {
              iVar19 = iVar9 + 1;
            }
            auVar22._8_8_ = 0;
            auVar22._0_8_ = dVar24 * dVar24 + dVar23 * dVar23 + dVar20 * dVar20;
            auVar25 = sqrtpd(unaff_XMM6,auVar22);
            do {
              pdVar13 = this->pts;
              iVar15 = (int)uVar16;
              uVar5 = ppiVar17[iVar15][iVar19];
              lVar10 = (longlong)(int)(uVar5 * 3);
              lVar11 = (longlong)(iVar15 * 3);
              uVar16 = (ulonglong)uVar5;
              dVar20 = pdVar13[lVar10 + 1];
              dVar23 = pdVar13[lVar11 + 1];
              dVar24 = pdVar13[lVar10 + 2];
              dVar2 = pdVar13[lVar11 + 2];
              dVar3 = pdVar13[lVar10];
              dVar4 = pdVar13[lVar11];
              ppiVar17[iVar15][iVar19] = ~uVar5;
              ppiVar17 = this->ed;
              iVar9 = this->nu[iVar15] + iVar19;
              auVar21._0_8_ = (dVar24 - dVar2) * (dVar24 - dVar2);
              auVar21._8_8_ = 0;
              iVar19 = 0;
              if (ppiVar17[iVar15][iVar9] != this->nu[(int)uVar5] + -1) {
                iVar19 = ppiVar17[iVar15][iVar9] + 1;
              }
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (dVar20 - dVar23) * (dVar20 - dVar23) +
                             (dVar3 - dVar4) * (dVar3 - dVar4) + auVar21._0_8_;
              auVar22 = sqrtpd(auVar21,auVar7);
              auVar25._0_8_ = auVar25._0_8_ + auVar22._0_8_;
            } while (uVar5 != local_res8);
            pdVar13 = (param_1->_Mypair)._Myval2._Myend;
            _Src = (param_1->_Mypair)._Myval2._Mylast;
            unaff_XMM6._0_8_ = auVar25._0_8_ * dVar8;
            unaff_XMM6._8_8_ = auVar25._8_8_;
            if (_Src == pdVar13) {
              pdVar6 = (param_1->_Mypair)._Myval2._Myfirst;
              lVar11 = (longlong)_Src - (longlong)pdVar6 >> 3;
              if (lVar11 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                std::vector<double,std::allocator<double>_>::_Xlength();
              }
              uVar16 = lVar11 + 1;
              uVar12 = (longlong)pdVar13 - (longlong)pdVar6 >> 3;
              if (0x1fffffffffffffff - (uVar12 >> 1) < uVar12) {
                uVar14 = 0x1fffffffffffffff;
              }
              else {
                uVar12 = (uVar12 >> 1) + uVar12;
                uVar14 = uVar16;
                if (uVar16 <= uVar12) {
                  uVar14 = uVar12;
                }
                if (0x1fffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
                  std::_Throw_bad_array_new_length();
                }
              }
              _Dst = std::_Allocate<16,std::_Default_allocate_traits>(uVar14 * 8);
              _Dst[lVar11] = unaff_XMM6._0_8_;
              pdVar13 = (param_1->_Mypair)._Myval2._Mylast;
              pdVar6 = (param_1->_Mypair)._Myval2._Myfirst;
              if (_Src == pdVar13) {
                _Size = (longlong)pdVar13 - (longlong)pdVar6;
                pdVar13 = _Dst;
                _Src = pdVar6;
              }
              else {
                memmove(_Dst,pdVar6,(longlong)_Src - (longlong)pdVar6);
                _Size = (longlong)(param_1->_Mypair)._Myval2._Mylast - (longlong)_Src;
                pdVar13 = _Dst + lVar11 + 1;
              }
              memmove(pdVar13,_Src,_Size);
              std::vector<double,std::allocator<double>_>::_Change_array(param_1,_Dst,uVar16,uVar14)
              ;
            }
            else {
              *_Src = unaff_XMM6._0_8_;
              ppdVar1 = &(param_1->_Mypair)._Myval2._Mylast;
              *ppdVar1 = *ppdVar1 + 1;
            }
          }
          local_res10 = local_res10 + 4;
          iVar18 = iVar18 + 1;
        } while (iVar18 < *(int *)(local_78 + (longlong)this->nu));
      }
      local_res8 = local_res8 + 1;
      local_res18 = local_res18 + 8;
      local_78 = local_78 + 4;
      local_res20 = local_res20 + 0x18;
    } while ((int)local_res8 < this->p);
  }
  reset_edges(this);
  return;
}

// face_vertices @ 1436ae950

void __thiscall
voro::voronoicell_base::face_vertices
          (voronoicell_base *this,vector<int,std::allocator<int>_> *param_1)

{
  int **ppiVar1;
  ulonglong uVar2;
  uint uVar3;
  uint *puVar4;
  uint *_Src;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  ulonglong uVar9;
  uint *_Src_00;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  size_t sVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint local_res10;
  int local_res18;
  int local_res20;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  
  piVar6 = (param_1->_Mypair)._Myval2._Myfirst;
  local_res18 = 0;
  if (piVar6 != (param_1->_Mypair)._Myval2._Mylast) {
    (param_1->_Mypair)._Myval2._Mylast = piVar6;
  }
  local_res10 = 1;
  if (1 < this->p) {
    local_58 = 4;
    local_60 = 8;
    do {
      local_res20 = 0;
      if (0 < *(int *)(local_58 + (longlong)this->nu)) {
        local_68 = 0;
        do {
          uVar3 = *(uint *)(local_68 + *(longlong *)((longlong)this->ed + local_60));
          lVar14 = (longlong)(int)uVar3;
          if (-1 < (int)uVar3) {
            piVar6 = (param_1->_Mypair)._Myval2._Myend;
            piVar8 = (param_1->_Mypair)._Myval2._Mylast;
            if (piVar8 == piVar6) {
              piVar5 = (param_1->_Mypair)._Myval2._Myfirst;
              lVar11 = (longlong)piVar8 - (longlong)piVar5 >> 2;
              if (lVar11 == 0x3fffffffffffffff) goto LAB_1436aee21;
              uVar2 = lVar11 + 1;
              uVar9 = (longlong)piVar6 - (longlong)piVar5 >> 2;
              if (0x3fffffffffffffff - (uVar9 >> 1) < uVar9) {
                uVar10 = 0x3fffffffffffffff;
              }
              else {
                uVar9 = (uVar9 >> 1) + uVar9;
                uVar10 = uVar2;
                if (uVar2 <= uVar9) {
                  uVar10 = uVar9;
                }
                if (0x3fffffffffffffff < uVar10) goto LAB_1436aee1b;
              }
              piVar7 = std::_Allocate<16,std::_Default_allocate_traits>(uVar10 * 4);
              piVar7[lVar11] = 0;
              piVar6 = (param_1->_Mypair)._Myval2._Mylast;
              piVar5 = (param_1->_Mypair)._Myval2._Myfirst;
              if (piVar8 == piVar6) {
                sVar13 = (longlong)piVar6 - (longlong)piVar5;
                piVar6 = piVar7;
                piVar8 = piVar5;
              }
              else {
                memmove(piVar7,piVar5,(longlong)piVar8 - (longlong)piVar5);
                sVar13 = (longlong)(param_1->_Mypair)._Myval2._Mylast - (longlong)piVar8;
                piVar6 = piVar7 + lVar11 + 1;
              }
              memmove(piVar6,piVar8,sVar13);
              std::vector<int,std::allocator<int>_>::_Change_array(param_1,piVar7,uVar2,uVar10);
            }
            else {
              *piVar8 = 0;
              ppiVar1 = &(param_1->_Mypair)._Myval2._Mylast;
              *ppiVar1 = *ppiVar1 + 1;
            }
            puVar4 = (uint *)(param_1->_Mypair)._Myval2._Myend;
            _Src_00 = (uint *)(param_1->_Mypair)._Myval2._Mylast;
            if (_Src_00 == puVar4) {
              piVar6 = (param_1->_Mypair)._Myval2._Myfirst;
              lVar11 = (longlong)_Src_00 - (longlong)piVar6 >> 2;
              if (lVar11 == 0x3fffffffffffffff) {
LAB_1436aee21:
                    /* WARNING: Subroutine does not return */
                std::vector<int,std::allocator<int>_>::_Xlength();
              }
              uVar2 = lVar11 + 1;
              uVar9 = (longlong)puVar4 - (longlong)piVar6 >> 2;
              if (0x3fffffffffffffff - (uVar9 >> 1) < uVar9) {
                uVar10 = 0x3fffffffffffffff;
              }
              else {
                uVar9 = (uVar9 >> 1) + uVar9;
                uVar10 = uVar2;
                if (uVar2 <= uVar9) {
                  uVar10 = uVar9;
                }
                if (0x3fffffffffffffff < uVar10) {
LAB_1436aee1b:
                    /* WARNING: Subroutine does not return */
                  std::_Throw_bad_array_new_length();
                }
              }
              piVar6 = std::_Allocate<16,std::_Default_allocate_traits>(uVar10 * 4);
              piVar6[lVar11] = local_res10;
              puVar4 = (uint *)(param_1->_Mypair)._Myval2._Mylast;
              _Src = (uint *)(param_1->_Mypair)._Myval2._Myfirst;
              if (_Src_00 == puVar4) {
                sVar13 = (longlong)puVar4 - (longlong)_Src;
                piVar8 = piVar6;
                _Src_00 = _Src;
              }
              else {
                memmove(piVar6,_Src,(longlong)_Src_00 - (longlong)_Src);
                sVar13 = (longlong)(param_1->_Mypair)._Myval2._Mylast - (longlong)_Src_00;
                piVar8 = piVar6 + lVar11 + 1;
              }
              memmove(piVar8,_Src_00,sVar13);
              std::vector<int,std::allocator<int>_>::_Change_array(param_1,piVar6,uVar2,uVar10);
            }
            else {
              *_Src_00 = local_res10;
              ppiVar1 = &(param_1->_Mypair)._Myval2._Mylast;
              *ppiVar1 = *ppiVar1 + 1;
            }
            *(uint *)(local_68 + *(longlong *)((longlong)this->ed + local_60)) = ~uVar3;
            iVar12 = *(int *)(*(longlong *)((longlong)this->ed + local_60) +
                             (longlong)(*(int *)((longlong)this->nu + local_58) + local_res20) * 4);
            iVar15 = 0;
            if (iVar12 != this->nu[lVar14] + -1) {
              iVar15 = iVar12 + 1;
            }
            do {
              piVar6 = (param_1->_Mypair)._Myval2._Myend;
              piVar8 = (param_1->_Mypair)._Myval2._Mylast;
              iVar12 = (int)lVar14;
              if (piVar8 == piVar6) {
                piVar5 = (param_1->_Mypair)._Myval2._Myfirst;
                lVar14 = (longlong)piVar8 - (longlong)piVar5 >> 2;
                if (lVar14 == 0x3fffffffffffffff) goto LAB_1436aee21;
                uVar2 = lVar14 + 1;
                uVar9 = (longlong)piVar6 - (longlong)piVar5 >> 2;
                if (0x3fffffffffffffff - (uVar9 >> 1) < uVar9) {
                  uVar10 = 0x3fffffffffffffff;
                }
                else {
                  uVar9 = uVar9 + (uVar9 >> 1);
                  uVar10 = uVar2;
                  if (uVar2 <= uVar9) {
                    uVar10 = uVar9;
                  }
                  if (0x3fffffffffffffff < uVar10) goto LAB_1436aee1b;
                }
                piVar7 = std::_Allocate<16,std::_Default_allocate_traits>(uVar10 * 4);
                piVar7[lVar14] = iVar12;
                piVar6 = (param_1->_Mypair)._Myval2._Mylast;
                piVar5 = (param_1->_Mypair)._Myval2._Myfirst;
                if (piVar8 == piVar6) {
                  sVar13 = (longlong)piVar6 - (longlong)piVar5;
                  piVar6 = piVar7;
                  piVar8 = piVar5;
                }
                else {
                  memmove(piVar7,piVar5,(longlong)piVar8 - (longlong)piVar5);
                  sVar13 = (longlong)(param_1->_Mypair)._Myval2._Mylast - (longlong)piVar8;
                  piVar6 = piVar7 + lVar14 + 1;
                }
                memmove(piVar6,piVar8,sVar13);
                std::vector<int,std::allocator<int>_>::_Change_array(param_1,piVar7,uVar2,uVar10);
              }
              else {
                *piVar8 = iVar12;
                ppiVar1 = &(param_1->_Mypair)._Myval2._Mylast;
                *ppiVar1 = *ppiVar1 + 1;
              }
              uVar3 = this->ed[iVar12][iVar15];
              lVar14 = (longlong)(int)uVar3;
              this->ed[iVar12][iVar15] = ~uVar3;
              iVar16 = 0;
              if (this->ed[iVar12][this->nu[iVar12] + iVar15] != this->nu[lVar14] + -1) {
                iVar16 = this->ed[iVar12][this->nu[iVar12] + iVar15] + 1;
              }
              iVar15 = iVar16;
            } while (uVar3 != local_res10);
            piVar6 = (param_1->_Mypair)._Myval2._Myfirst;
            iVar12 = (int)((longlong)(param_1->_Mypair)._Myval2._Mylast - (longlong)piVar6 >> 2);
            piVar6[local_res18] = (iVar12 - local_res18) + -1;
            local_res18 = iVar12;
          }
          local_res20 = local_res20 + 1;
          local_68 = local_68 + 4;
        } while (local_res20 < *(int *)(local_58 + (longlong)this->nu));
      }
      local_res10 = local_res10 + 1;
      local_60 = local_60 + 8;
      local_58 = local_58 + 4;
    } while ((int)local_res10 < this->p);
  }
  reset_edges(this);
  return;
}

// init @ 1436aee30

void __thiscall
voro::voronoicell_neighbor::init
          (voronoicell_neighbor *this,double param_1,double param_2,double param_3,double param_4,
          double param_5,double param_6)

{
  int *piVar1;
  
  voronoicell_base::init_base
            ((voronoicell_base *)this,param_1,param_2,param_3,param_4,param_5,param_6);
  piVar1 = this->mne[3];
  piVar1[3] = -5;
  piVar1[6] = -5;
  piVar1[9] = -5;
  piVar1[0xc] = -6;
  piVar1[0xf] = -6;
  piVar1[0x12] = -6;
  piVar1[0x15] = -6;
  *piVar1 = -5;
  piVar1[1] = -3;
  piVar1[2] = -1;
  piVar1[4] = -2;
  piVar1[5] = -3;
  piVar1[7] = -1;
  piVar1[8] = -4;
  piVar1[10] = -4;
  piVar1[0xb] = -2;
  piVar1[0xd] = -1;
  piVar1[0xe] = -3;
  piVar1[0x10] = -3;
  piVar1[0x11] = -2;
  piVar1[0x13] = -4;
  piVar1[0x14] = -1;
  piVar1[0x16] = -2;
  piVar1[0x17] = -4;
  *this->ne = piVar1;
  this->ne[1] = piVar1 + 3;
  this->ne[2] = piVar1 + 6;
  this->ne[3] = piVar1 + 9;
  this->ne[4] = piVar1 + 0xc;
  this->ne[5] = piVar1 + 0xf;
  this->ne[6] = piVar1 + 0x12;
  this->ne[7] = piVar1 + 0x15;
  return;
}

// init_base @ 1436aefa0

void __thiscall
voro::voronoicell_base::init_base
          (voronoicell_base *this,double param_1,double param_2,double param_3,double param_4,
          double param_5,double param_6)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  iVar3 = 0;
  if (0 < this->current_vertex_order) {
    lVar2 = 0;
    do {
      iVar3 = iVar3 + 1;
      *(undefined4 *)(lVar2 + (longlong)this->mec) = 0;
      lVar2 = lVar2 + 4;
    } while (iVar3 < this->current_vertex_order);
  }
  dVar9 = param_1 + param_1;
  this->p = 8;
  this->up = 0;
  dVar7 = param_3 + param_3;
  dVar8 = param_2 + param_2;
  dVar4 = param_5 + param_5;
  this->mec[3] = 8;
  dVar6 = param_4 + param_4;
  dVar5 = param_6 + param_6;
  *this->pts = dVar9;
  this->pts[1] = dVar7;
  this->pts[2] = dVar4;
  this->pts[3] = dVar8;
  this->pts[4] = dVar7;
  this->pts[5] = dVar4;
  this->pts[6] = dVar9;
  this->pts[7] = dVar6;
  this->pts[8] = dVar4;
  this->pts[9] = dVar8;
  this->pts[10] = dVar6;
  this->pts[0xb] = dVar4;
  this->pts[0xc] = dVar9;
  this->pts[0xd] = dVar7;
  this->pts[0xe] = dVar5;
  this->pts[0xf] = dVar8;
  this->pts[0x10] = dVar7;
  this->pts[0x11] = dVar5;
  this->pts[0x12] = dVar9;
  this->pts[0x13] = dVar6;
  this->pts[0x14] = dVar5;
  this->pts[0x15] = dVar8;
  this->pts[0x16] = dVar6;
  this->pts[0x17] = dVar5;
  piVar1 = this->mep[3];
  piVar1[7] = 3;
  piVar1[0xe] = 0;
  *piVar1 = 1;
  piVar1[1] = 4;
  piVar1[2] = 2;
  piVar1[3] = 2;
  piVar1[4] = 1;
  piVar1[5] = 0;
  piVar1[6] = 0;
  piVar1[8] = 5;
  piVar1[9] = 0;
  piVar1[10] = 2;
  piVar1[0xb] = 1;
  piVar1[0xc] = 0;
  piVar1[0xd] = 1;
  piVar1[0xf] = 6;
  piVar1[0x10] = 3;
  piVar1[0x11] = 2;
  piVar1[0x12] = 1;
  piVar1[0x13] = 0;
  piVar1[0x14] = 2;
  piVar1[0x1d] = 0;
  piVar1[0x16] = 7;
  piVar1[0x17] = 1;
  piVar1[0x18] = 2;
  piVar1[0x19] = 1;
  piVar1[0x1a] = 0;
  piVar1[0x1b] = 3;
  piVar1[0x1e] = 5;
  piVar1[0x1f] = 2;
  piVar1[0x20] = 1;
  piVar1[0x21] = 0;
  piVar1[0x22] = 4;
  piVar1[0x24] = 1;
  piVar1[0x25] = 7;
  piVar1[0x26] = 2;
  piVar1[0x27] = 1;
  piVar1[0x28] = 0;
  piVar1[0x29] = 5;
  piVar1[0x2b] = 2;
  piVar1[0x2c] = 4;
  piVar1[0x2d] = 2;
  piVar1[0x2e] = 1;
  piVar1[0x2f] = 0;
  piVar1[0x30] = 6;
  piVar1[0x32] = 3;
  piVar1[0x33] = 6;
  piVar1[0x34] = 2;
  piVar1[0x35] = 1;
  piVar1[0x36] = 0;
  piVar1[0x37] = 7;
  piVar1[0x15] = 2;
  piVar1[0x1c] = 6;
  piVar1[0x23] = 4;
  piVar1[0x2a] = 7;
  piVar1[0x31] = 5;
  *this->ed = piVar1;
  this->ed[1] = piVar1 + 7;
  this->ed[2] = piVar1 + 0xe;
  this->ed[3] = piVar1 + 0x15;
  this->ed[4] = piVar1 + 0x1c;
  this->ed[5] = piVar1 + 0x23;
  this->ed[6] = piVar1 + 0x2a;
  this->ed[7] = piVar1 + 0x31;
  this->nu[7] = 3;
  this->nu[6] = 3;
  this->nu[5] = 3;
  this->nu[4] = 3;
  this->nu[3] = 3;
  this->nu[2] = 3;
  this->nu[1] = 3;
  *this->nu = 3;
  return;
}

// init_octahedron @ 1436af370

void __thiscall
voro::voronoicell_neighbor::init_octahedron(voronoicell_neighbor *this,double param_1)

{
  int *piVar1;
  
  voronoicell_base::init_octahedron_base((voronoicell_base *)this,param_1);
  piVar1 = this->mne[4];
  piVar1[4] = -1;
  piVar1[8] = -6;
  piVar1[0xc] = -8;
  piVar1[0x10] = -5;
  piVar1[0x14] = -7;
  *piVar1 = -5;
  piVar1[1] = -6;
  piVar1[2] = -7;
  piVar1[3] = -8;
  piVar1[5] = -2;
  piVar1[6] = -3;
  piVar1[7] = -4;
  piVar1[9] = -5;
  piVar1[10] = -2;
  piVar1[0xb] = -1;
  piVar1[0xd] = -7;
  piVar1[0xe] = -4;
  piVar1[0xf] = -3;
  piVar1[0x11] = -8;
  piVar1[0x12] = -3;
  piVar1[0x13] = -2;
  piVar1[0x15] = -6;
  piVar1[0x16] = -1;
  piVar1[0x17] = -4;
  *this->ne = piVar1;
  this->ne[1] = piVar1 + 4;
  this->ne[2] = piVar1 + 8;
  this->ne[3] = piVar1 + 0xc;
  this->ne[4] = piVar1 + 0x10;
  this->ne[5] = piVar1 + 0x14;
  return;
}

// init_octahedron_base @ 1436af4a0

void __thiscall voro::voronoicell_base::init_octahedron_base(voronoicell_base *this,double param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  double dVar6;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < this->current_vertex_order) {
    do {
      uVar3 = (int)uVar4 + 1;
      *(undefined4 *)(uVar2 + (longlong)this->mec) = 0;
      uVar2 = uVar2 + 4;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < this->current_vertex_order);
  }
  dVar6 = param_1 + param_1;
  this->p = 6;
  this->up = 0;
  this->mec[4] = 6;
  uVar3 = SUB84(dVar6,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar5 = (uint)((ulonglong)dVar6 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  *this->pts = (double)CONCAT44(uVar5,uVar3);
  this->pts[1] = 0.0;
  this->pts[2] = 0.0;
  this->pts[3] = dVar6;
  this->pts[4] = 0.0;
  this->pts[5] = 0.0;
  this->pts[6] = 0.0;
  this->pts[7] = (double)CONCAT44(uVar5,uVar3);
  this->pts[8] = 0.0;
  this->pts[9] = 0.0;
  this->pts[10] = dVar6;
  this->pts[0xb] = 0.0;
  this->pts[0xc] = 0.0;
  this->pts[0xd] = 0.0;
  this->pts[0xe] = (double)CONCAT44(uVar5,uVar3);
  this->pts[0xf] = 0.0;
  this->pts[0x10] = 0.0;
  this->pts[0x11] = dVar6;
  piVar1 = this->mep[4];
  piVar1[9] = 2;
  *piVar1 = 2;
  piVar1[1] = 5;
  piVar1[2] = 3;
  piVar1[3] = 4;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar1[6] = 0;
  piVar1[7] = 0;
  piVar1[8] = 0;
  piVar1[10] = 4;
  piVar1[0xb] = 3;
  piVar1[0xc] = 5;
  piVar1[0xd] = 2;
  piVar1[0xe] = 2;
  piVar1[0xf] = 2;
  piVar1[0x10] = 2;
  piVar1[0x11] = 1;
  piVar1[0x12] = 0;
  piVar1[0x13] = 4;
  piVar1[0x14] = 1;
  piVar1[0x15] = 5;
  piVar1[0x16] = 0;
  piVar1[0x17] = 3;
  piVar1[0x18] = 0;
  piVar1[0x19] = 1;
  piVar1[0x1a] = 2;
  piVar1[0x1b] = 0;
  piVar1[0x1c] = 5;
  piVar1[0x1d] = 1;
  piVar1[0x1e] = 4;
  piVar1[0x1f] = 2;
  piVar1[0x20] = 3;
  piVar1[0x21] = 2;
  piVar1[0x22] = 1;
  piVar1[0x23] = 3;
  piVar1[0x24] = 0;
  piVar1[0x25] = 3;
  piVar1[0x26] = 1;
  piVar1[0x2d] = 0;
  piVar1[0x27] = 2;
  piVar1[0x28] = 3;
  piVar1[0x29] = 3;
  piVar1[0x2a] = 1;
  piVar1[0x2b] = 1;
  piVar1[0x2c] = 4;
  piVar1[0x2e] = 2;
  piVar1[0x2f] = 1;
  piVar1[0x30] = 3;
  piVar1[0x31] = 1;
  piVar1[0x32] = 3;
  piVar1[0x33] = 3;
  piVar1[0x34] = 1;
  piVar1[0x35] = 5;
  *this->ed = piVar1;
  this->ed[1] = piVar1 + 9;
  this->ed[2] = piVar1 + 0x12;
  this->ed[3] = piVar1 + 0x1b;
  this->ed[4] = piVar1 + 0x24;
  this->ed[5] = piVar1 + 0x2d;
  this->nu[5] = 4;
  this->nu[4] = 4;
  this->nu[3] = 4;
  this->nu[2] = 4;
  this->nu[1] = 4;
  *this->nu = 4;
  return;
}

// init_tetrahedron @ 1436af7e0

void __thiscall
voro::voronoicell_neighbor::init_tetrahedron
          (voronoicell_neighbor *this,double param_1,double param_2,double param_3,double param_4,
          double param_5,double param_6,double param_7,double param_8,double param_9,double param_10
          ,double param_11,double param_12)

{
  int *piVar1;
  
  voronoicell_base::init_tetrahedron_base
            ((voronoicell_base *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
             param_8,param_9,param_10,param_11,param_12);
  piVar1 = this->mne[3];
  piVar1[3] = -3;
  piVar1[6] = -4;
  piVar1[9] = -2;
  *piVar1 = -4;
  piVar1[1] = -3;
  piVar1[2] = -2;
  piVar1[4] = -4;
  piVar1[5] = -1;
  piVar1[7] = -2;
  piVar1[8] = -1;
  piVar1[10] = -3;
  piVar1[0xb] = -1;
  *this->ne = piVar1;
  this->ne[1] = piVar1 + 3;
  this->ne[2] = piVar1 + 6;
  this->ne[3] = piVar1 + 9;
  return;
}

// init_tetrahedron_base @ 1436af920

void __thiscall
voro::voronoicell_base::init_tetrahedron_base
          (voronoicell_base *this,double param_1,double param_2,double param_3,double param_4,
          double param_5,double param_6,double param_7,double param_8,double param_9,double param_10
          ,double param_11,double param_12)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < this->current_vertex_order) {
    do {
      uVar3 = (int)uVar4 + 1;
      *(undefined4 *)(uVar2 + (longlong)this->mec) = 0;
      uVar2 = uVar2 + 4;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < this->current_vertex_order);
  }
  this->p = 4;
  this->up = 0;
  this->mec[3] = 4;
  *this->pts = param_1 + param_1;
  this->pts[1] = param_2 + param_2;
  this->pts[2] = param_3 + param_3;
  this->pts[3] = param_4 + param_4;
  this->pts[4] = param_5 + param_5;
  this->pts[5] = param_6 + param_6;
  this->pts[6] = param_7 + param_7;
  this->pts[7] = param_8 + param_8;
  this->pts[8] = param_9 + param_9;
  this->pts[9] = param_10 + param_10;
  this->pts[10] = param_11 + param_11;
  this->pts[0xb] = param_12 + param_12;
  piVar1 = this->mep[3];
  piVar1[7] = 0;
  piVar1[0xe] = 0;
  piVar1[0x15] = 0;
  *piVar1 = 1;
  piVar1[1] = 3;
  piVar1[2] = 2;
  piVar1[3] = 0;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar1[6] = 0;
  piVar1[8] = 2;
  piVar1[9] = 3;
  piVar1[10] = 0;
  piVar1[0xb] = 2;
  piVar1[0xc] = 1;
  piVar1[0xd] = 1;
  piVar1[0xf] = 3;
  piVar1[0x10] = 1;
  piVar1[0x11] = 2;
  piVar1[0x12] = 2;
  piVar1[0x13] = 1;
  piVar1[0x14] = 2;
  piVar1[0x16] = 1;
  piVar1[0x17] = 2;
  piVar1[0x18] = 1;
  piVar1[0x19] = 2;
  piVar1[0x1a] = 1;
  piVar1[0x1b] = 3;
  *this->ed = piVar1;
  this->ed[1] = piVar1 + 7;
  this->ed[2] = piVar1 + 0xe;
  this->ed[3] = piVar1 + 0x15;
  this->nu[3] = 3;
  this->nu[2] = 3;
  this->nu[1] = 3;
  *this->nu = 3;
  return;
}

// max_radius_squared @ 1436afb60

double __thiscall voro::voronoicell_base::max_radius_squared(voronoicell_base *this)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  
  pdVar2 = this->pts;
  pdVar1 = pdVar2 + this->p * 3;
  dVar4 = pdVar2[1] * pdVar2[1] + *pdVar2 * *pdVar2 + pdVar2[2] * pdVar2[2];
  while (dVar3 = dVar4, pdVar2 = pdVar2 + 3, pdVar2 < pdVar1) {
    dVar4 = pdVar2[1] * pdVar2[1] + *pdVar2 * *pdVar2 + pdVar2[2] * pdVar2[2];
    if (dVar4 <= dVar3) {
      dVar4 = dVar3;
    }
  }
  return dVar3;
}

// neighbors @ 1436afbe0

void __thiscall
voro::voronoicell_neighbor::neighbors
          (voronoicell_neighbor *this,vector<int,std::allocator<int>_> *param_1)

{
  int **ppiVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  ulonglong uVar6;
  int *piVar7;
  int *_Src;
  longlong lVar8;
  longlong lVar9;
  size_t _Size;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  int local_res8;
  uint local_res10;
  longlong local_res18;
  longlong local_res20;
  
  piVar7 = (param_1->_Mypair)._Myval2._Myfirst;
  if (piVar7 != (param_1->_Mypair)._Myval2._Mylast) {
    (param_1->_Mypair)._Myval2._Mylast = piVar7;
  }
  local_res10 = 1;
  if (1 < (int)this->_padding_) {
    local_res20 = 4;
    local_res18 = 8;
    do {
      lVar8 = this->_padding_;
      local_res8 = 0;
      if (0 < *(int *)(lVar8 + local_res20)) {
        lVar13 = 0;
        do {
          uVar2 = *(uint *)(*(longlong *)(this->_padding_ + local_res18) + lVar13);
          lVar9 = (longlong)(int)uVar2;
          if (-1 < (int)uVar2) {
            piVar7 = (param_1->_Mypair)._Myval2._Myend;
            _Src = (param_1->_Mypair)._Myval2._Mylast;
            piVar4 = (int *)(*(longlong *)((longlong)this->ne + local_res18) + lVar13);
            if (_Src == piVar7) {
              piVar5 = (param_1->_Mypair)._Myval2._Myfirst;
              lVar8 = (longlong)_Src - (longlong)piVar5 >> 2;
              if (lVar8 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                std::vector<int,std::allocator<int>_>::_Xlength();
              }
              uVar6 = (longlong)piVar7 - (longlong)piVar5 >> 2;
              if (0x3fffffffffffffff - (uVar6 >> 1) < uVar6) {
                uVar14 = 0x3fffffffffffffff;
              }
              else {
                uVar6 = (uVar6 >> 1) + uVar6;
                uVar14 = lVar8 + 1U;
                if (lVar8 + 1U <= uVar6) {
                  uVar14 = uVar6;
                }
                if (0x3fffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
                  std::_Throw_bad_array_new_length();
                }
              }
              piVar5 = std::_Allocate<16,std::_Default_allocate_traits>(uVar14 * 4);
              piVar5[lVar8] = *piVar4;
              piVar7 = (param_1->_Mypair)._Myval2._Mylast;
              piVar4 = (param_1->_Mypair)._Myval2._Myfirst;
              if (_Src == piVar7) {
                _Size = (longlong)piVar7 - (longlong)piVar4;
                piVar7 = piVar5;
                _Src = piVar4;
              }
              else {
                memmove(piVar5,piVar4,(longlong)_Src - (longlong)piVar4);
                _Size = (longlong)(param_1->_Mypair)._Myval2._Mylast - (longlong)_Src;
                piVar7 = piVar5 + lVar8 + 1;
              }
              memmove(piVar7,_Src,_Size);
              std::vector<int,std::allocator<int>_>::_Change_array(param_1,piVar5,lVar8 + 1,uVar14);
            }
            else {
              *_Src = *piVar4;
              ppiVar1 = &(param_1->_Mypair)._Myval2._Mylast;
              *ppiVar1 = *ppiVar1 + 1;
            }
            *(uint *)(*(longlong *)(this->_padding_ + local_res18) + lVar13) = ~uVar2;
            lVar12 = this->_padding_;
            iVar3 = *(int *)(*(longlong *)(lVar12 + local_res18) +
                            (longlong)(*(int *)(this->_padding_ + local_res20) + local_res8) * 4);
            iVar11 = 0;
            if (iVar3 != *(int *)(this->_padding_ + lVar9 * 4) + -1) {
              iVar11 = iVar3 + 1;
            }
            do {
              lVar10 = (longlong)(int)lVar9;
              lVar8 = *(longlong *)(lVar12 + lVar10 * 8);
              uVar2 = *(uint *)(lVar8 + (longlong)iVar11 * 4);
              lVar9 = (longlong)(int)uVar2;
              *(uint *)(lVar8 + (longlong)iVar11 * 4) = ~uVar2;
              lVar8 = this->_padding_;
              lVar12 = this->_padding_;
              iVar3 = *(int *)(*(longlong *)(lVar12 + lVar10 * 8) +
                              (longlong)(*(int *)(lVar8 + lVar10 * 4) + iVar11) * 4);
              iVar11 = 0;
              if (iVar3 != *(int *)(lVar8 + lVar9 * 4) + -1) {
                iVar11 = iVar3 + 1;
              }
            } while (uVar2 != local_res10);
          }
          local_res8 = local_res8 + 1;
          lVar13 = lVar13 + 4;
        } while (local_res8 < *(int *)(lVar8 + local_res20));
      }
      local_res10 = local_res10 + 1;
      local_res18 = local_res18 + 8;
      local_res20 = local_res20 + 4;
    } while ((int)local_res10 < (int)this->_padding_);
  }
  voronoicell_base::reset_edges((voronoicell_base *)this);
  return;
}

// neighborsTArray @ 1436afeb0

void __thiscall
voro::voronoicell_neighbor::neighborsTArray
          (voronoicell_neighbor *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint local_res8;
  longlong local_res10;
  
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_res8 = 1;
  if (1 < (int)this->_padding_) {
    lVar14 = 8;
    local_res10 = 4;
    do {
      lVar7 = this->_padding_;
      iVar8 = 0;
      if (0 < *(int *)(local_res10 + lVar7)) {
        lVar15 = 0;
        do {
          uVar2 = *(uint *)(lVar15 + *(longlong *)(this->_padding_ + lVar14));
          lVar9 = (longlong)(int)uVar2;
          if (-1 < (int)uVar2) {
            if ((!param_2) || (-1 < *(int *)(lVar15 + *(longlong *)((longlong)this->ne + lVar14))))
            {
              pFVar3 = (param_1->AllocatorInstance).Data;
              pFVar10 = (FScriptContainerElement *)
                        (*(longlong *)(lVar14 + (longlong)this->ne) + lVar15);
              if ((pFVar3 <= pFVar10) &&
                 ((pFVar10 < pFVar3 + (longlong)*piVar1 * 4 &&
                  (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar5)))) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar6 = param_1->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&param_1->AllocatorInstance,piVar1);
              }
              param_1->ArrayNum = iVar6 + 1;
              *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 4) =
                   *(undefined4 *)pFVar10;
            }
            *(uint *)(lVar15 + *(longlong *)(this->_padding_ + lVar14)) = ~uVar2;
            lVar13 = this->_padding_;
            iVar6 = *(int *)(*(longlong *)(lVar14 + lVar13) +
                            (longlong)(*(int *)(local_res10 + this->_padding_) + iVar8) * 4);
            iVar12 = 0;
            if (iVar6 != *(int *)(this->_padding_ + lVar9 * 4) + -1) {
              iVar12 = iVar6 + 1;
            }
            do {
              lVar11 = (longlong)(int)lVar9;
              lVar7 = *(longlong *)(lVar13 + lVar11 * 8);
              uVar2 = *(uint *)(lVar7 + (longlong)iVar12 * 4);
              lVar9 = (longlong)(int)uVar2;
              *(uint *)(lVar7 + (longlong)iVar12 * 4) = ~uVar2;
              lVar7 = this->_padding_;
              lVar13 = this->_padding_;
              iVar6 = *(int *)(*(longlong *)(lVar13 + lVar11 * 8) +
                              (longlong)(*(int *)(lVar7 + lVar11 * 4) + iVar12) * 4);
              iVar12 = 0;
              if (iVar6 != *(int *)(lVar7 + lVar9 * 4) + -1) {
                iVar12 = iVar6 + 1;
              }
            } while (uVar2 != local_res8);
          }
          iVar8 = iVar8 + 1;
          lVar15 = lVar15 + 4;
        } while (iVar8 < *(int *)(local_res10 + lVar7));
      }
      local_res8 = local_res8 + 1;
      local_res10 = local_res10 + 4;
      lVar14 = lVar14 + 8;
    } while ((int)local_res8 < (int)this->_padding_);
  }
  voronoicell_base::reset_edges((voronoicell_base *)this);
  return;
}

// normals @ 1436b0130

void __thiscall
voro::voronoicell_base::normals
          (voronoicell_base *this,vector<double,std::allocator<double>_> *param_1)

{
  int iVar1;
  double *pdVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  pdVar2 = (param_1->_Mypair)._Myval2._Myfirst;
  if (pdVar2 != (param_1->_Mypair)._Myval2._Mylast) {
    (param_1->_Mypair)._Myval2._Mylast = pdVar2;
  }
  iVar6 = 1;
  if (1 < this->p) {
    lVar4 = 4;
    lVar7 = 8;
    do {
      iVar3 = 0;
      if (0 < *(int *)((longlong)this->nu + lVar4)) {
        lVar5 = 0;
        do {
          iVar1 = *(int *)(lVar5 + *(longlong *)((longlong)this->ed + lVar7));
          if (-1 < iVar1) {
            normals_search(this,param_1,iVar6,iVar3,iVar1);
          }
          iVar3 = iVar3 + 1;
          lVar5 = lVar5 + 4;
        } while (iVar3 < *(int *)((longlong)this->nu + lVar4));
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 8;
      lVar4 = lVar4 + 4;
    } while (iVar6 < this->p);
  }
  reset_edges(this);
  return;
}

// normals_search @ 1436b0200

void __thiscall
voro::voronoicell_base::normals_search
          (voronoicell_base *this,vector<double,std::allocator<double>_> *param_1,int param_2,
          int param_3,int param_4)

{
  uint uVar1;
  double *pdVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int **ppiVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double local_res8;
  
  dVar6 = __real_3b5e392010175ee5;
  uVar17 = (ulonglong)param_4;
  this->ed[param_2][param_3] = ~param_4;
  ppiVar15 = this->ed;
  iVar14 = 0;
  if (ppiVar15[param_2][this->nu[param_2] + param_3] != this->nu[uVar17] + -1) {
    iVar14 = ppiVar15[param_2][this->nu[param_2] + param_3] + 1;
  }
  do {
    iVar16 = (int)uVar17;
    uVar1 = ppiVar15[iVar16][iVar14];
    uVar13 = (ulonglong)(int)uVar1;
    ppiVar15[iVar16][iVar14] = ~uVar1;
    pdVar2 = this->pts;
    lVar11 = (longlong)(int)(uVar1 * 3);
    lVar10 = (longlong)(iVar16 * 3);
    dVar19 = pdVar2[lVar11] - pdVar2[lVar10];
    dVar20 = pdVar2[lVar11 + 1] - pdVar2[lVar10 + 1];
    dVar21 = pdVar2[lVar11 + 2] - pdVar2[lVar10 + 2];
    if (dVar6 < dVar20 * dVar20 + dVar19 * dVar19 + dVar21 * dVar21) {
      do {
        if (uVar1 == param_2) {
          local_res8 = 0.0;
          std::vector<double,std::allocator<double>_>::push_back(param_1,&local_res8);
          local_res8 = 0.0;
          std::vector<double,std::allocator<double>_>::push_back(param_1,&local_res8);
          local_res8 = 0.0;
          std::vector<double,std::allocator<double>_>::push_back(param_1,&local_res8);
          return;
        }
        iVar16 = (int)uVar17;
        iVar12 = (int)uVar13;
        uVar17 = uVar13 & 0xffffffff;
        iVar16 = this->ed[iVar16][this->nu[iVar16] + iVar14];
        piVar3 = this->ed[iVar12];
        iVar14 = 0;
        if (iVar16 != this->nu[iVar12] + -1) {
          iVar14 = iVar16 + 1;
        }
        uVar1 = piVar3[iVar14];
        uVar13 = (ulonglong)uVar1;
        piVar3[iVar14] = ~uVar1;
        pdVar2 = this->pts;
        lVar11 = (longlong)(int)(uVar1 * 3);
        lVar10 = (longlong)(iVar12 * 3);
        local_res8 = (pdVar2[lVar11 + 1] - pdVar2[lVar10 + 1]) * dVar21 -
                     (pdVar2[lVar11 + 2] - pdVar2[lVar10 + 2]) * dVar20;
        dVar7 = (pdVar2[lVar11 + 2] - pdVar2[lVar10 + 2]) * dVar19 -
                (pdVar2[lVar11] - pdVar2[lVar10]) * dVar21;
        auVar18._0_8_ = local_res8 * local_res8;
        auVar18._8_8_ = 0;
        dVar8 = (pdVar2[lVar11] - pdVar2[lVar10]) * dVar20 -
                (pdVar2[lVar11 + 1] - pdVar2[lVar10 + 1]) * dVar19;
        dVar5 = dVar7 * dVar7 + auVar18._0_8_ + dVar8 * dVar8;
      } while (dVar5 <= dVar6);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = dVar5;
      auVar18 = sqrtpd(auVar18,auVar4);
      dVar6 = __real_3ff0000000000000 / auVar18._0_8_;
      local_res8 = dVar6 * local_res8;
      std::vector<double,std::allocator<double>_>::push_back(param_1,&local_res8);
      local_res8 = dVar6 * dVar7;
      std::vector<double,std::allocator<double>_>::push_back(param_1,&local_res8);
      local_res8 = dVar6 * dVar8;
      std::vector<double,std::allocator<double>_>::push_back(param_1,&local_res8);
      while (uVar9 = uVar13, uVar1 != param_2) {
        iVar12 = (int)uVar9;
        iVar16 = this->ed[(int)uVar17][this->nu[(int)uVar17] + iVar14];
        piVar3 = this->ed[iVar12];
        iVar14 = 0;
        if (iVar16 != this->nu[iVar12] + -1) {
          iVar14 = iVar16 + 1;
        }
        uVar1 = piVar3[iVar14];
        piVar3[iVar14] = ~uVar1;
        uVar13 = (ulonglong)uVar1;
        uVar17 = uVar9;
      }
      return;
    }
    uVar17 = (ulonglong)uVar1;
    ppiVar15 = this->ed;
    iVar12 = 0;
    if (ppiVar15[iVar16][this->nu[iVar16] + iVar14] != this->nu[uVar13] + -1) {
      iVar12 = ppiVar15[iVar16][this->nu[iVar16] + iVar14] + 1;
    }
    iVar14 = iVar12;
  } while (uVar1 != param_2);
  local_res8 = 0.0;
  std::vector<double,std::allocator<double>_>::push_back(param_1,&local_res8);
  local_res8 = 0.0;
  std::vector<double,std::allocator<double>_>::push_back(param_1,&local_res8);
  local_res8 = 0.0;
  std::vector<double,std::allocator<double>_>::push_back(param_1,&local_res8);
  return;
}

// number_of_edges @ 1436b05e0

int __thiscall voro::voronoicell_base::number_of_edges(voronoicell_base *this)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  
  piVar6 = this->nu;
  uVar9 = 0;
  uVar8 = 0;
  uVar10 = 0;
  piVar2 = piVar6 + this->p;
  uVar7 = (longlong)this->p & 0x3fffffffffffffff;
  if (piVar2 < piVar6) {
    uVar7 = uVar9;
  }
  uVar13 = uVar10;
  if ((uVar7 != 0) && (uVar13 = 0, 7 < uVar7)) {
    iVar17 = 0;
    iVar18 = 0;
    iVar19 = 0;
    iVar20 = 0;
    iVar12 = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar16 = 0;
    uVar11 = uVar9;
    do {
      uVar11 = uVar11 + 8;
      iVar17 = iVar17 + *piVar6;
      iVar18 = iVar18 + piVar6[1];
      iVar19 = iVar19 + piVar6[2];
      iVar20 = iVar20 + piVar6[3];
      piVar1 = piVar6 + 4;
      piVar3 = piVar6 + 5;
      piVar4 = piVar6 + 6;
      piVar5 = piVar6 + 7;
      piVar6 = piVar6 + 8;
      iVar12 = iVar12 + *piVar1;
      iVar14 = iVar14 + *piVar3;
      iVar15 = iVar15 + *piVar4;
      iVar16 = iVar16 + *piVar5;
    } while (uVar11 < (uVar7 & 0xfffffffffffffff8));
    uVar13 = iVar12 + iVar17 + iVar15 + iVar19 + iVar14 + iVar18 + iVar16 + iVar20;
  }
  if (piVar2 <= piVar6) goto LAB_1436b069f;
  if (((longlong)piVar2 + (3 - (longlong)piVar6) & 0xfffffffffffffffcU) < 8) {
LAB_1436b0695:
    uVar13 = uVar13 + *piVar6;
  }
  else {
    uVar7 = uVar9;
    do {
      uVar8 = (int)uVar9 + *piVar6;
      uVar9 = (ulonglong)uVar8;
      uVar10 = (int)uVar7 + piVar6[1];
      uVar7 = (ulonglong)uVar10;
      piVar6 = piVar6 + 2;
    } while (piVar6 < piVar2 + -1);
    if (piVar6 < piVar2) goto LAB_1436b0695;
  }
  uVar13 = uVar13 + uVar10 + uVar8;
LAB_1436b069f:
  return (int)uVar13 >> 1;
}

// number_of_faces @ 1436b06b0

int __thiscall voro::voronoicell_base::number_of_faces(voronoicell_base *this)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int **ppiVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  
  iVar13 = 0;
  uVar8 = 1;
  if (1 < this->p) {
    lVar14 = 4;
    lVar15 = 8;
    piVar6 = this->nu;
    do {
      iVar7 = 0;
      piVar12 = piVar6;
      if (0 < *(int *)(lVar14 + (longlong)piVar6)) {
        lVar9 = 0;
        do {
          lVar2 = *(longlong *)(lVar15 + (longlong)this->ed);
          uVar1 = *(uint *)(lVar2 + lVar9);
          lVar4 = (longlong)(int)uVar1;
          if (-1 < (int)uVar1) {
            iVar13 = iVar13 + 1;
            *(uint *)(lVar2 + lVar9) = ~uVar1;
            ppiVar10 = this->ed;
            iVar3 = *(int *)(*(longlong *)(lVar15 + (longlong)ppiVar10) +
                            (longlong)(*(int *)(lVar14 + (longlong)this->nu) + iVar7) * 4);
            iVar11 = 0;
            if (iVar3 != this->nu[lVar4] + -1) {
              iVar11 = iVar3 + 1;
            }
            do {
              iVar3 = (int)lVar4;
              uVar1 = ppiVar10[iVar3][iVar11];
              lVar4 = (longlong)(int)uVar1;
              ppiVar10[iVar3][iVar11] = ~uVar1;
              piVar6 = this->nu;
              ppiVar10 = this->ed;
              iVar5 = piVar6[iVar3] + iVar11;
              iVar11 = 0;
              if (ppiVar10[iVar3][iVar5] != piVar6[lVar4] + -1) {
                iVar11 = ppiVar10[iVar3][iVar5] + 1;
              }
              piVar12 = piVar6;
            } while (uVar1 != uVar8);
          }
          iVar7 = iVar7 + 1;
          lVar9 = lVar9 + 4;
        } while (iVar7 < *(int *)(lVar14 + (longlong)piVar6));
      }
      uVar8 = uVar8 + 1;
      lVar15 = lVar15 + 8;
      lVar14 = lVar14 + 4;
      piVar6 = piVar12;
    } while ((int)uVar8 < this->p);
  }
  reset_edges(this);
  return iVar13;
}

// plane_intersects @ 1436b0810

bool __thiscall
voro::voronoicell_base::plane_intersects
          (voronoicell_base *this,double param_1,double param_2,double param_3,double param_4)

{
  double *pdVar1;
  bool bVar2;
  longlong lVar3;
  double dVar4;
  
  pdVar1 = this->pts;
  lVar3 = (longlong)(this->up * 3);
  dVar4 = param_2 * pdVar1[lVar3 + 1] + param_1 * pdVar1[lVar3] + param_3 * pdVar1[lVar3 + 2];
  if (dVar4 < param_4) {
    bVar2 = plane_intersects_track(this,param_1,param_2,param_3,param_4,dVar4);
    return bVar2;
  }
  return true;
}

// plane_intersects_guess @ 1436b0880

bool __thiscall
voro::voronoicell_base::plane_intersects_guess
          (voronoicell_base *this,double param_1,double param_2,double param_3,double param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  
  pdVar5 = this->pts;
  this->up = 0;
  dVar8 = param_2 * pdVar5[1] + param_1 * *pdVar5 + param_3 * pdVar5[2];
  if (param_4 <= dVar8) {
    return true;
  }
  iVar3 = 1;
  iVar6 = this->p >> 3;
  iVar2 = 1;
  if (1 < iVar6) {
    pdVar4 = pdVar5 + 5;
    do {
      pdVar5 = pdVar5 + 3;
      dVar7 = param_2 * pdVar4[-1] + param_1 * *pdVar5 + param_3 * *pdVar4;
      if (dVar8 < dVar7) {
        if (param_4 < dVar7) {
          return true;
        }
        this->up = iVar2;
        dVar8 = dVar7;
      }
      iVar3 = iVar3 + iVar2;
      iVar2 = iVar2 + 1;
      pdVar4 = pdVar4 + 3;
    } while (iVar3 < iVar6);
  }
  bVar1 = plane_intersects_track(this,param_1,param_2,param_3,param_4,dVar8);
  return bVar1;
}

// plane_intersects_track @ 1436b0990

bool __thiscall
voro::voronoicell_base::plane_intersects_track
          (voronoicell_base *this,double param_1,double param_2,double param_3,double param_4,
          double param_5)

{
  int iVar1;
  int *piVar2;
  int **ppiVar3;
  double *pdVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  int *piVar11;
  double *pdVar13;
  int iVar14;
  int iVar15;
  double dVar16;
  ulonglong uVar12;
  
  uVar9 = 0;
  piVar2 = this->nu;
  iVar1 = piVar2[this->up];
  if (iVar1 < 1) {
    return false;
  }
  ppiVar3 = this->ed;
  pdVar13 = this->pts;
  uVar8 = uVar9;
  piVar11 = ppiVar3[this->up];
  while( true ) {
    iVar14 = *piVar11;
    lVar5 = (longlong)(iVar14 * 3);
    dVar16 = param_2 * pdVar13[lVar5 + 1] + param_1 * pdVar13[lVar5] + param_3 * pdVar13[lVar5 + 2];
    if (param_5 < dVar16) break;
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
    piVar11 = piVar11 + 1;
    if (iVar1 <= (int)uVar7) {
      return false;
    }
  }
  uVar7 = ppiVar3[this->up][iVar1 + (int)uVar8];
  this->up = iVar14;
  if (param_4 <= dVar16) {
    return true;
  }
  iVar1 = this->p;
  iVar15 = 1;
  if (iVar1 < 2) {
    if (iVar1 < 1) {
      return false;
    }
  }
  else {
    do {
      uVar8 = uVar9;
      uVar10 = 0;
      if (0 < (int)uVar7) {
        lVar5 = (longlong)iVar14;
        uVar12 = uVar9;
        do {
          uVar10 = (uint)uVar12;
          iVar14 = ppiVar3[lVar5][uVar8];
          lVar6 = (longlong)(iVar14 * 3);
          param_5 = param_2 * pdVar13[lVar6 + 1] + param_1 * pdVar13[lVar6] +
                    param_3 * pdVar13[lVar6 + 2];
          if (dVar16 < param_5) break;
          uVar10 = uVar10 + 1;
          uVar12 = (ulonglong)uVar10;
          uVar8 = uVar8 + 1;
        } while ((longlong)uVar8 < (longlong)(int)uVar7);
      }
      if (uVar10 == uVar7) {
        uVar10 = uVar10 + 1;
        uVar7 = piVar2[this->up];
        if ((int)uVar10 < (int)uVar7) {
          piVar11 = ppiVar3[this->up] + uVar8 + 1;
          do {
            iVar14 = *piVar11;
            lVar5 = (longlong)(iVar14 * 3);
            param_5 = param_2 * pdVar13[lVar5 + 1] + param_1 * pdVar13[lVar5] +
                      param_3 * pdVar13[lVar5 + 2];
            if (dVar16 < param_5) goto LAB_1436b0b67;
            uVar10 = uVar10 + 1;
            piVar11 = piVar11 + 1;
          } while ((int)uVar10 < (int)uVar7);
        }
        if (uVar10 == uVar7) {
          return false;
        }
      }
LAB_1436b0b67:
      uVar7 = ppiVar3[this->up][(int)(piVar2[this->up] + uVar10)];
      this->up = iVar14;
      if (param_4 <= param_5) {
        return true;
      }
      iVar15 = iVar15 + 1;
      dVar16 = param_5;
    } while (iVar15 < iVar1);
  }
  pdVar4 = pdVar13 + 2;
  do {
    if (param_4 < param_2 * pdVar4[-1] + param_1 * *pdVar13 + param_3 * *pdVar4) {
      return true;
    }
    uVar7 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar7;
    pdVar13 = pdVar13 + 3;
    pdVar4 = pdVar4 + 3;
  } while ((int)uVar7 < iVar1);
  return false;
}

// print_edges @ 1436b0c00

void __thiscall voro::voronoicell_base::print_edges(voronoicell_base *this)

{
  int iVar1;
  char *_Str;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  if (0 < this->p) {
    lVar5 = 0;
    lVar2 = 0;
    do {
      printf("%d %d  ");
      iVar3 = 0;
      if (0 < *(int *)(lVar2 + (longlong)this->nu)) {
        do {
          printf(" %d");
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(lVar2 + (longlong)this->nu));
      }
      printf("  ");
      iVar1 = *(int *)(lVar2 + (longlong)this->nu);
      while (iVar3 < iVar1 * 2) {
        printf(" %d");
        iVar1 = *(int *)(lVar2 + (longlong)this->nu);
      }
      printf("   %d");
      (**(code **)(this->_padding_ + 0x10))(this,iVar4);
      printf("  %g %g %g %p");
      iVar3 = *(int *)(lVar2 + (longlong)this->nu);
      _Str = " Memory error";
      if (*(int **)(lVar5 + (longlong)this->ed) <
          this->mep[iVar3] + (iVar3 * 2 + 1) * this->mec[iVar3]) {
        _Str = "";
      }
      puts(_Str);
      iVar4 = iVar4 + 1;
      lVar2 = lVar2 + 4;
      lVar5 = lVar5 + 8;
    } while (iVar4 < this->p);
  }
  return;
}

// print_edges_neighbors @ 1436b0dd0

void __thiscall
voro::voronoicell_neighbor::print_edges_neighbors(voronoicell_neighbor *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_1;
  if (*(int *)(this->_padding_ + lVar2 * 4) < 1) {
    printf("     ()");
    return;
  }
  iVar1 = 0;
  printf("     (");
  if (0 < *(int *)(this->_padding_ + lVar2 * 4) + -1) {
    do {
      iVar1 = iVar1 + 1;
      printf("%d,");
    } while (iVar1 < *(int *)(this->_padding_ + lVar2 * 4) + -1);
  }
  printf("%d)");
  return;
}

// push_back @ 1436b0eb0

void __thiscall
std::vector<double,std::allocator<double>_>::push_back
          (vector<double,std::allocator<double>_> *this,double *param_1)

{
  double **ppdVar1;
  ulonglong uVar2;
  double *pdVar3;
  double *_Dst;
  ulonglong uVar4;
  double *pdVar5;
  double *_Src;
  ulonglong uVar6;
  longlong lVar7;
  size_t _Size;
  
  pdVar5 = (this->_Mypair)._Myval2._Myend;
  _Src = (this->_Mypair)._Myval2._Mylast;
  if (_Src != pdVar5) {
    *_Src = *param_1;
    ppdVar1 = &(this->_Mypair)._Myval2._Mylast;
    *ppdVar1 = *ppdVar1 + 1;
    return;
  }
  pdVar3 = (this->_Mypair)._Myval2._Myfirst;
  lVar7 = (longlong)_Src - (longlong)pdVar3 >> 3;
  if (lVar7 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar4 = (longlong)pdVar5 - (longlong)pdVar3 >> 3;
  uVar2 = lVar7 + 1;
  if (0x1fffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar6 = 0x1fffffffffffffff;
  }
  else {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar6 = uVar2;
    if (uVar2 <= uVar4) {
      uVar6 = uVar4;
    }
    if (0x1fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar6 * 8);
  _Dst[lVar7] = *param_1;
  pdVar5 = (this->_Mypair)._Myval2._Mylast;
  pdVar3 = (this->_Mypair)._Myval2._Myfirst;
  if (_Src == pdVar5) {
    _Size = (longlong)pdVar5 - (longlong)pdVar3;
    pdVar5 = _Dst;
    _Src = pdVar3;
  }
  else {
    memmove(_Dst,pdVar3,(longlong)_Src - (longlong)pdVar3);
    _Size = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)_Src;
    pdVar5 = _Dst + lVar7 + 1;
  }
  memmove(pdVar5,_Src,_Size);
  _Change_array(this,_Dst,uVar2,uVar6);
  return;
}

// reset_edges @ 1436b0fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall voro::voronoicell_base::reset_edges(voronoicell_base *this)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_188 [32];
  wchar_t *local_168;
  undefined4 local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  uVar8 = 0;
  uVar7 = uVar8;
  uVar9 = uVar8;
  uVar10 = uVar8;
  if (0 < this->p) {
    do {
      uVar4 = uVar8;
      uVar6 = uVar8;
      if (0 < *(int *)(uVar10 + (longlong)this->nu)) {
        do {
          if (-1 < *(int *)(uVar4 + *(longlong *)(uVar9 + (longlong)this->ed))) {
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"Edge reset routine found a previously untested edge",0x33,Yes);
            local_160 = 3;
            local_168 = local_158.Ptr;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Voronoi\\Private\\voro++\\src\\common.hh"
                               ,0x20,L"voro++ failure: %s (status code: %d)");
            if ((void *)local_158._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_158._padding_);
            }
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          uVar5 = (int)uVar6 + 1;
          puVar1 = (uint *)(*(longlong *)(uVar9 + (longlong)this->ed) + uVar4);
          *puVar1 = ~*puVar1;
          uVar4 = uVar4 + 4;
          uVar6 = (ulonglong)uVar5;
        } while ((int)uVar5 < *(int *)(uVar10 + (longlong)this->nu));
      }
      uVar5 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar5;
      uVar9 = uVar9 + 8;
      uVar10 = uVar10 + 4;
    } while ((int)uVar5 < this->p);
  }
  return;
}

// resize @ 1436b1160

void __thiscall
std::vector<double,std::allocator<double>_>::resize
          (vector<double,std::allocator<double>_> *this,ulong64 param_1)

{
  double *pdVar1;
  double *pdVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  
  pdVar1 = (this->_Mypair)._Myval2._Mylast;
  pdVar2 = (this->_Mypair)._Myval2._Myfirst;
  uVar5 = (longlong)pdVar1 - (longlong)pdVar2 >> 3;
  if (param_1 < uVar5) {
    (this->_Mypair)._Myval2._Mylast = pdVar2 + param_1;
  }
  else if (uVar5 < param_1) {
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pdVar2 >> 3;
    if (uVar3 < param_1) {
      if (0x1fffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
        _Xlength();
      }
      if (0x1fffffffffffffff - (uVar3 >> 1) < uVar3) {
        uVar4 = 0x1fffffffffffffff;
      }
      else {
        uVar3 = uVar3 + (uVar3 >> 1);
        uVar4 = param_1;
        if ((param_1 <= uVar3) && (uVar4 = uVar3, 0x1fffffffffffffff < uVar3)) {
                    /* WARNING: Subroutine does not return */
          _Throw_bad_array_new_length();
        }
      }
      pdVar2 = _Allocate<16,std::_Default_allocate_traits>(uVar4 * 8);
      memset(pdVar2 + uVar5,0,(param_1 - uVar5) * 8);
      pdVar1 = (this->_Mypair)._Myval2._Myfirst;
      memmove(pdVar2,pdVar1,(longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pdVar1);
      _Change_array(this,pdVar2,param_1,uVar4);
    }
    else {
      memset(pdVar1,0,(param_1 - uVar5) * 8);
      (this->_Mypair)._Myval2._Mylast = pdVar1 + (param_1 - uVar5);
    }
  }
  return;
}

// surface_area @ 1436b1290

double __thiscall voro::voronoicell_base::surface_area(voronoicell_base *this)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  double *pdVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  
  uVar13 = 1;
  dVar7 = 0.0;
  dVar20 = 0.0;
  if (1 < this->p) {
    local_res18 = 4;
    local_res8 = 8;
    local_res10 = 0x28;
    do {
      iVar9 = 0;
      if (0 < *(int *)(local_res18 + (longlong)this->nu)) {
        lVar14 = 0;
        do {
          lVar8 = *(longlong *)(local_res8 + (longlong)this->ed);
          uVar1 = *(uint *)(lVar8 + lVar14);
          uVar12 = (ulonglong)(int)uVar1;
          if (-1 < (int)uVar1) {
            *(uint *)(lVar8 + lVar14) = ~uVar1;
            iVar2 = *(int *)(*(longlong *)(local_res8 + (longlong)this->ed) +
                            (longlong)(*(int *)(local_res18 + (longlong)this->nu) + iVar9) * 4);
            piVar3 = this->ed[uVar12];
            iVar10 = 0;
            if (iVar2 != this->nu[uVar12] + -1) {
              iVar10 = iVar2 + 1;
            }
            uVar1 = piVar3[iVar10];
            piVar3[iVar10] = ~uVar1;
            while (uVar1 != uVar13) {
              iVar11 = (int)uVar12;
              pdVar4 = this->pts;
              iVar2 = this->ed[iVar11][this->nu[iVar11] + iVar10];
              lVar8 = (longlong)(iVar11 * 3);
              uVar12 = (ulonglong)uVar1;
              dVar6 = pdVar4[lVar8 + 2] - *(double *)(local_res10 + (longlong)pdVar4);
              dVar21 = pdVar4[lVar8] - *(double *)((longlong)pdVar4 + local_res10 + -0x10);
              dVar20 = pdVar4[lVar8 + 1] - *(double *)(local_res10 + -8 + (longlong)pdVar4);
              lVar8 = (longlong)(int)(uVar1 * 3);
              dVar19 = pdVar4[lVar8 + 1] - *(double *)(local_res10 + -8 + (longlong)pdVar4);
              dVar17 = pdVar4[lVar8 + 2] - *(double *)(local_res10 + (longlong)pdVar4);
              dVar18 = pdVar4[lVar8] - *(double *)((longlong)pdVar4 + local_res10 + -0x10);
              auVar15._0_8_ = dVar19 * dVar6;
              auVar15._8_8_ = 0;
              piVar3 = this->ed[(int)uVar1];
              iVar10 = 0;
              if (iVar2 != this->nu[(int)uVar1] + -1) {
                iVar10 = iVar2 + 1;
              }
              uVar1 = piVar3[iVar10];
              dVar16 = dVar17 * dVar20 - auVar15._0_8_;
              piVar3[iVar10] = ~uVar1;
              dVar6 = dVar6 * dVar18 - dVar17 * dVar21;
              dVar20 = dVar19 * dVar21 - dVar20 * dVar18;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = dVar6 * dVar6 + dVar16 * dVar16 + dVar20 * dVar20;
              auVar15 = sqrtpd(auVar15,auVar5);
              dVar7 = dVar7 + auVar15._0_8_;
            }
          }
          iVar9 = iVar9 + 1;
          lVar14 = lVar14 + 4;
        } while (iVar9 < *(int *)(local_res18 + (longlong)this->nu));
      }
      local_res8 = local_res8 + 8;
      local_res18 = local_res18 + 4;
      local_res10 = local_res10 + 0x18;
      uVar13 = uVar13 + 1;
      dVar20 = dVar7;
    } while ((int)uVar13 < this->p);
  }
  reset_edges(this);
  return dVar20 * __real_3fc0000000000000;
}

// total_edge_distance @ 1436b1540

double __thiscall voro::voronoicell_base::total_edge_distance(voronoicell_base *this)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  
  iVar11 = 0;
  iVar16 = this->p + -1;
  dVar28 = 0.0;
  if (0 < iVar16) {
    piVar9 = this->nu;
    lVar15 = 0x10;
    lVar18 = 0;
    lVar13 = 0;
    do {
      lVar12 = (longlong)*piVar9;
      lVar7 = 0;
      if (lVar12 < 4) {
        if (0 < lVar12) {
          lVar17 = *(longlong *)(lVar18 + (longlong)this->ed);
          lVar10 = lVar15;
          goto LAB_1436b172b;
        }
      }
      else {
        lVar10 = lVar13 + 0x10;
        lVar14 = (lVar12 - 4U >> 2) + 1;
        lVar17 = *(longlong *)(lVar18 + (longlong)this->ed);
        lVar7 = lVar14 * 4;
        piVar8 = (int *)(lVar17 + 8);
        do {
          if (iVar11 < piVar8[-2]) {
            lVar6 = (longlong)(piVar8[-2] * 3);
            pdVar1 = this->pts;
            dVar27 = pdVar1[lVar6] - *(double *)((longlong)pdVar1 + lVar13);
            dVar19 = pdVar1[lVar6 + 1] - *(double *)((longlong)pdVar1 + lVar13 + 8);
            dVar26 = pdVar1[lVar6 + 2] - *(double *)((longlong)pdVar1 + lVar10);
            auVar20._0_8_ = dVar19 * dVar19;
            auVar20._8_8_ = 0;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = dVar27 * dVar27 + auVar20._0_8_ + dVar26 * dVar26;
            auVar21 = sqrtpd(auVar20,auVar21);
            dVar28 = dVar28 + auVar21._0_8_;
          }
          if (iVar11 < piVar8[-1]) {
            lVar6 = (longlong)(piVar8[-1] * 3);
            pdVar1 = this->pts;
            dVar27 = pdVar1[lVar6] - *(double *)((longlong)pdVar1 + lVar13);
            dVar19 = pdVar1[lVar6 + 1] - *(double *)((longlong)pdVar1 + lVar13 + 8);
            dVar26 = pdVar1[lVar6 + 2] - *(double *)((longlong)pdVar1 + lVar10);
            auVar22._0_8_ = dVar19 * dVar19;
            auVar22._8_8_ = 0;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = dVar27 * dVar27 + auVar22._0_8_ + dVar26 * dVar26;
            auVar21 = sqrtpd(auVar22,auVar2);
            dVar28 = dVar28 + auVar21._0_8_;
          }
          if (iVar11 < *piVar8) {
            lVar6 = (longlong)(*piVar8 * 3);
            pdVar1 = this->pts;
            dVar27 = pdVar1[lVar6] - *(double *)((longlong)pdVar1 + lVar13);
            dVar19 = pdVar1[lVar6 + 1] - *(double *)((longlong)pdVar1 + lVar13 + 8);
            dVar26 = pdVar1[lVar6 + 2] - *(double *)((longlong)pdVar1 + lVar10);
            auVar23._0_8_ = dVar19 * dVar19;
            auVar23._8_8_ = 0;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = dVar27 * dVar27 + auVar23._0_8_ + dVar26 * dVar26;
            auVar21 = sqrtpd(auVar23,auVar3);
            dVar28 = dVar28 + auVar21._0_8_;
          }
          if (iVar11 < piVar8[1]) {
            lVar6 = (longlong)(piVar8[1] * 3);
            pdVar1 = this->pts;
            dVar27 = pdVar1[lVar6] - *(double *)((longlong)pdVar1 + lVar13);
            dVar19 = pdVar1[lVar6 + 1] - *(double *)((longlong)pdVar1 + lVar13 + 8);
            dVar26 = pdVar1[lVar6 + 2] - *(double *)((longlong)pdVar1 + lVar10);
            auVar24._0_8_ = dVar19 * dVar19;
            auVar24._8_8_ = 0;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = dVar27 * dVar27 + auVar24._0_8_ + dVar26 * dVar26;
            auVar21 = sqrtpd(auVar24,auVar4);
            dVar28 = dVar28 + auVar21._0_8_;
          }
          piVar8 = piVar8 + 4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        if (lVar7 < lVar12) {
LAB_1436b172b:
          piVar8 = (int *)(lVar17 + lVar7 * 4);
          lVar12 = lVar12 - lVar7;
          do {
            if (iVar11 < *piVar8) {
              lVar7 = (longlong)(*piVar8 * 3);
              pdVar1 = this->pts;
              dVar27 = pdVar1[lVar7] - *(double *)(lVar13 + (longlong)pdVar1);
              dVar19 = pdVar1[lVar7 + 1] - *(double *)(lVar13 + 8 + (longlong)pdVar1);
              dVar26 = pdVar1[lVar7 + 2] - *(double *)(lVar10 + (longlong)pdVar1);
              auVar25._0_8_ = dVar19 * dVar19;
              auVar25._8_8_ = 0;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = dVar27 * dVar27 + auVar25._0_8_ + dVar26 * dVar26;
              auVar21 = sqrtpd(auVar25,auVar5);
              dVar28 = dVar28 + auVar21._0_8_;
            }
            piVar8 = piVar8 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
      }
      iVar11 = iVar11 + 1;
      piVar9 = piVar9 + 1;
      lVar18 = lVar18 + 8;
      lVar13 = lVar13 + 0x18;
      lVar15 = lVar15 + 0x18;
    } while (iVar11 < iVar16);
  }
  return dVar28 * __real_3fe0000000000000;
}

// translate @ 1436b17e0

void __thiscall
voro::voronoicell_base::translate
          (voronoicell_base *this,double param_1,double param_2,double param_3)

{
  double *pdVar1;
  
  pdVar1 = this->pts;
  if (pdVar1 < pdVar1 + this->p * 3) {
    do {
      *pdVar1 = param_1 + param_1;
      pdVar1[1] = param_2 + param_2;
      pdVar1[2] = param_3 + param_3;
      pdVar1 = pdVar1 + 3;
    } while (pdVar1 < this->pts + this->p * 3);
  }
  return;
}

// vertex_orders @ 1436b1840

void __thiscall
voro::voronoicell_base::vertex_orders
          (voronoicell_base *this,vector<int,std::allocator<int>_> *param_1)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  piVar1 = (param_1->_Mypair)._Myval2._Mylast;
  piVar2 = (param_1->_Mypair)._Myval2._Myfirst;
  uVar6 = (ulonglong)this->p;
  uVar8 = (longlong)piVar1 - (longlong)piVar2 >> 2;
  if (uVar6 < uVar8) {
    (param_1->_Mypair)._Myval2._Mylast = piVar2 + uVar6;
  }
  else if (uVar8 < uVar6) {
    uVar4 = (longlong)(param_1->_Mypair)._Myval2._Myend - (longlong)piVar2 >> 2;
    if (uVar4 < uVar6) {
      if (0x3fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
        std::vector<int,std::allocator<int>_>::_Xlength();
      }
      if (0x3fffffffffffffff - (uVar4 >> 1) < uVar4) {
        uVar5 = 0x3fffffffffffffff;
      }
      else {
        uVar4 = uVar4 + (uVar4 >> 1);
        uVar5 = uVar6;
        if ((uVar6 <= uVar4) && (uVar5 = uVar4, 0x3fffffffffffffff < uVar4)) {
                    /* WARNING: Subroutine does not return */
          std::_Throw_bad_array_new_length();
        }
      }
      piVar2 = std::_Allocate<16,std::_Default_allocate_traits>(uVar5 * 4);
      memset(piVar2 + uVar8,0,(uVar6 - uVar8) * 4);
      piVar1 = (param_1->_Mypair)._Myval2._Myfirst;
      memmove(piVar2,piVar1,(longlong)(param_1->_Mypair)._Myval2._Mylast - (longlong)piVar1);
      std::vector<int,std::allocator<int>_>::_Change_array(param_1,piVar2,uVar6,uVar5);
    }
    else {
      memset(piVar1,0,(uVar6 - uVar8) * 4);
      (param_1->_Mypair)._Myval2._Mylast = piVar1 + (uVar6 - uVar8);
    }
  }
  iVar7 = 0;
  if (0 < this->p) {
    lVar3 = 0;
    do {
      iVar7 = iVar7 + 1;
      *(undefined4 *)(lVar3 + (longlong)(param_1->_Mypair)._Myval2._Myfirst) =
           *(undefined4 *)(lVar3 + (longlong)this->nu);
      lVar3 = lVar3 + 4;
    } while (iVar7 < this->p);
  }
  return;
}

// vertices @ 1436b19a0

void __thiscall
voro::voronoicell_base::vertices
          (voronoicell_base *this,vector<double,std::allocator<double>_> *param_1)

{
  double dVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  
  std::vector<double,std::allocator<double>_>::resize(param_1,(longlong)(this->p * 3));
  dVar1 = __real_3fe0000000000000;
  iVar4 = 0;
  if (0 < this->p * 3) {
    pdVar2 = (param_1->_Mypair)._Myval2._Myfirst + 2;
    pdVar3 = this->pts;
    do {
      iVar4 = iVar4 + 3;
      pdVar2[-2] = *pdVar3 * dVar1;
      pdVar2[-1] = pdVar3[1] * dVar1;
      *pdVar2 = pdVar3[2] * dVar1;
      pdVar2 = pdVar2 + 3;
      pdVar3 = pdVar3 + 3;
    } while (iVar4 < this->p * 3);
  }
  return;
}

// vertices @ 1436b1a50

void __thiscall
voro::voronoicell_base::vertices
          (voronoicell_base *this,double param_1,double param_2,double param_3,
          vector<double,std::allocator<double>_> *param_4)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  
  std::vector<double,std::allocator<double>_>::resize(param_4,(longlong)(this->p * 3));
  dVar3 = __real_3fe0000000000000;
  iVar6 = 0;
  pdVar5 = this->pts;
  if (0 < this->p * 3) {
    pdVar4 = (param_4->_Mypair)._Myval2._Myfirst + 2;
    do {
      pdVar1 = pdVar5 + 2;
      iVar6 = iVar6 + 3;
      pdVar4[-2] = *pdVar5 * dVar3 + param_1;
      pdVar2 = pdVar5 + 1;
      pdVar5 = pdVar5 + 3;
      pdVar4[-1] = *pdVar2 * dVar3 + param_2;
      *pdVar4 = *pdVar1 * dVar3 + param_3;
      pdVar4 = pdVar4 + 3;
    } while (iVar6 < this->p * 3);
  }
  return;
}

// volume @ 1436b1b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall voro::voronoicell_base::volume(voronoicell_base *this)

{
  uint uVar1;
  double *pdVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  longlong local_res8;
  
  uVar17 = 1;
  dVar10 = 0.0;
  dVar7 = 0.0;
  if (1 < this->p) {
    lVar18 = 8;
    lVar19 = 4;
    local_res8 = 0x18;
    do {
      pdVar2 = this->pts;
      iVar16 = 0;
      dVar7 = *pdVar2 - *(double *)((longlong)pdVar2 + local_res8);
      dVar8 = pdVar2[1] - *(double *)((longlong)pdVar2 + local_res8 + 8);
      dVar9 = pdVar2[2] - *(double *)((longlong)pdVar2 + local_res8 + 0x10);
      if (0 < *(int *)(lVar19 + (longlong)this->nu)) {
        lVar15 = 0;
        do {
          lVar11 = *(longlong *)((longlong)this->ed + lVar18);
          uVar1 = *(uint *)(lVar11 + lVar15);
          uVar13 = (ulonglong)(int)uVar1;
          if (-1 < (int)uVar1) {
            *(uint *)(lVar11 + lVar15) = ~uVar1;
            iVar12 = *(int *)(*(longlong *)((longlong)this->ed + lVar18) +
                             (longlong)(*(int *)((longlong)this->nu + lVar19) + iVar16) * 4);
            iVar14 = 0;
            if (iVar12 != this->nu[uVar13] + -1) {
              iVar14 = iVar12 + 1;
            }
            lVar11 = (longlong)(int)(uVar1 * 3);
            pdVar2 = this->pts;
            dVar25 = pdVar2[lVar11] - *pdVar2;
            dVar24 = pdVar2[lVar11 + 1] - pdVar2[1];
            dVar23 = pdVar2[lVar11 + 2] - pdVar2[2];
            piVar3 = this->ed[uVar13];
            uVar1 = piVar3[iVar14];
            piVar3[iVar14] = ~uVar1;
            while (uVar1 != uVar17) {
              dVar22 = dVar24 * dVar7;
              iVar12 = (int)uVar13;
              uVar13 = (ulonglong)uVar1;
              dVar5 = dVar24 * dVar9;
              dVar4 = dVar25 * dVar8;
              dVar6 = dVar23 * dVar7;
              dVar20 = dVar23 * dVar8;
              iVar12 = this->ed[iVar12][this->nu[iVar12] + iVar14];
              lVar11 = (longlong)(int)(uVar1 * 3);
              pdVar2 = this->pts;
              dVar21 = dVar25 * dVar9;
              dVar25 = pdVar2[lVar11] - *pdVar2;
              dVar23 = pdVar2[lVar11 + 2] - pdVar2[2];
              dVar24 = pdVar2[lVar11 + 1] - pdVar2[1];
              piVar3 = this->ed[(int)uVar1];
              iVar14 = 0;
              if (iVar12 != this->nu[(int)uVar1] + -1) {
                iVar14 = iVar12 + 1;
              }
              uVar1 = piVar3[iVar14];
              piVar3[iVar14] = ~uVar1;
              dVar10 = dVar10 + ((((dVar22 * dVar23 + dVar20 * dVar25 + dVar21 * dVar24) -
                                  dVar5 * dVar25) - dVar4 * dVar23) - dVar6 * dVar24);
            }
          }
          iVar16 = iVar16 + 1;
          lVar15 = lVar15 + 4;
        } while (iVar16 < *(int *)(lVar19 + (longlong)this->nu));
      }
      local_res8 = local_res8 + 0x18;
      uVar17 = uVar17 + 1;
      lVar18 = lVar18 + 8;
      lVar19 = lVar19 + 4;
      dVar7 = dVar10;
    } while ((int)uVar17 < this->p);
  }
  reset_edges(this);
  return dVar7 * ___real_3f95555555555555;
}

// voro_fatal_error @ 1436b1e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl voro::voro_fatal_error(char *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  size_t sVar3;
  undefined1 auStack_168 [32];
  wchar_t *local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_138._padding_ = 0;
  if (param_1 == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar3 = strlen(param_1);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,param_1,(int)sVar3,Yes);
  }
  local_148 = local_138.Ptr;
  local_140 = param_2;
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Voronoi\\Private\\voro++\\src\\common.hh"
                     ,0x20,L"voro++ failure: %s (status code: %d)");
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

