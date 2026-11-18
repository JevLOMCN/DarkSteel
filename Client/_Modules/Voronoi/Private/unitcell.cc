// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Voronoi
// Functions: 9

// _Emplace_reallocate<int_const_&> @ 1436b56c0

int * __thiscall
std::vector<int,std::allocator<int>_>::_Emplace_reallocate<int_const_&>
          (vector<int,std::allocator<int>_> *this,int *param_1,int *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  int *piVar5;
  int *piVar6;
  ulong64 uVar7;
  longlong lVar8;
  size_t _Size;
  
  piVar5 = (this->_Mypair)._Myval2._Myfirst;
  lVar8 = (longlong)param_1 - (longlong)piVar5 >> 2;
  lVar2 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)piVar5 >> 2;
  if (lVar2 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)piVar5 >> 2;
  uVar1 = lVar2 + 1;
  if (0x3fffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar4 = 0x3fffffffffffffff;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar4 = uVar1;
    if (uVar1 <= uVar3) {
      uVar4 = uVar3;
    }
    if (0x3fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar4 * 4);
  _Dst[lVar8] = *param_2;
  piVar5 = (this->_Mypair)._Myval2._Mylast;
  piVar6 = (this->_Mypair)._Myval2._Myfirst;
  if (param_1 == piVar5) {
    _Size = (longlong)piVar5 - (longlong)piVar6;
    piVar5 = _Dst;
    param_1 = piVar6;
  }
  else {
    memmove(_Dst,piVar6,(longlong)param_1 - (longlong)piVar6);
    piVar5 = _Dst + lVar8 + 1;
    _Size = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)param_1;
  }
  memmove(piVar5,param_1,_Size);
  piVar5 = (this->_Mypair)._Myval2._Myfirst;
  if (piVar5 != (int *)0x0) {
    uVar7 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)piVar5 & 0xfffffffffffffffc;
    piVar6 = piVar5;
    if (0xfff < uVar7) {
      piVar6 = *(int **)(piVar5 + -2);
      uVar7 = uVar7 + 0x27;
      if (0x1f < (ulonglong)((longlong)piVar5 + (-8 - (longlong)piVar6))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(piVar6,uVar7);
  }
  (this->_Mypair)._Myval2._Myfirst = _Dst;
  (this->_Mypair)._Myval2._Mylast = _Dst + uVar1;
  (this->_Mypair)._Myval2._Myend = _Dst + uVar4;
  return _Dst + lVar8;
}

// _Emplace_reallocate<double_const_&> @ 1436b5840

double * __thiscall
std::vector<double,std::allocator<double>_>::_Emplace_reallocate<double_const_&>
          (vector<double,std::allocator<double>_> *this,double *param_1,double *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  double *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  double *pdVar5;
  double *pdVar6;
  ulong64 uVar7;
  longlong lVar8;
  size_t _Size;
  
  pdVar5 = (this->_Mypair)._Myval2._Myfirst;
  lVar8 = (longlong)param_1 - (longlong)pdVar5 >> 3;
  lVar2 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pdVar5 >> 3;
  if (lVar2 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pdVar5 >> 3;
  uVar1 = lVar2 + 1;
  if (0x1fffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar4 = 0x1fffffffffffffff;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar4 = uVar1;
    if (uVar1 <= uVar3) {
      uVar4 = uVar3;
    }
    if (0x1fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar4 * 8);
  _Dst[lVar8] = *param_2;
  pdVar5 = (this->_Mypair)._Myval2._Mylast;
  pdVar6 = (this->_Mypair)._Myval2._Myfirst;
  if (param_1 == pdVar5) {
    _Size = (longlong)pdVar5 - (longlong)pdVar6;
    pdVar5 = _Dst;
    param_1 = pdVar6;
  }
  else {
    memmove(_Dst,pdVar6,(longlong)param_1 - (longlong)pdVar6);
    pdVar5 = _Dst + lVar8 + 1;
    _Size = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)param_1;
  }
  memmove(pdVar5,param_1,_Size);
  pdVar5 = (this->_Mypair)._Myval2._Myfirst;
  if (pdVar5 != (double *)0x0) {
    uVar7 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pdVar5 & 0xfffffffffffffff8;
    pdVar6 = pdVar5;
    if (0xfff < uVar7) {
      pdVar6 = (double *)pdVar5[-1];
      uVar7 = uVar7 + 0x27;
      if (0x1f < (ulonglong)((longlong)pdVar5 + (-8 - (longlong)pdVar6))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pdVar6,uVar7);
  }
  (this->_Mypair)._Myval2._Myfirst = _Dst;
  (this->_Mypair)._Myval2._Mylast = _Dst + uVar1;
  (this->_Mypair)._Myval2._Myend = _Dst + uVar4;
  return _Dst + lVar8;
}

// unitcell @ 1436b59c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

unitcell * __thiscall
voro::unitcell::unitcell
          (unitcell *this,double param_1,double param_2,double param_3,double param_4,double param_5
          ,double param_6)

{
  int iVar1;
  double *pdVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  int iVar5;
  bool bVar6;
  unitcell *puVar7;
  double *pdVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  uint uVar22;
  uint uVar23;
  double dVar24;
  undefined1 auStackY_238 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1f8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_238;
  this->bxz = param_4;
  this->byz = param_5;
  this->bz = param_6;
  this->bx = param_1;
  this->bxy = param_2;
  this->by = param_3;
  voronoicell_base::voronoicell_base((voronoicell_base *)&this->unit_voro);
  dVar14 = __real_4024000000000000;
  uVar22 = (uint)__xmm_80000000000000008000000000000000;
  uVar23 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  *(undefined ***)&this->unit_voro = &___7voronoicell_voro__6B_;
  iVar9 = 1;
  dVar15 = this->bz * dVar14;
  auVar17._0_8_ = this->by * dVar14;
  auVar17._8_8_ = 0;
  dVar14 = this->bx * dVar14;
  voronoicell_base::init_base
            ((voronoicell_base *)&this->unit_voro,
             (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) ^ uVar23,SUB84(dVar14,0) ^ uVar22),
             dVar14,(double)CONCAT44((uint)((ulonglong)auVar17._0_8_ >> 0x20) ^ uVar23,
                                     SUB84(auVar17._0_8_,0) ^ uVar22),auVar17._0_8_,
             (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) ^ uVar23,SUB84(dVar15,0) ^ uVar22),
             dVar15);
  dVar15 = __real_8000000000000000;
  iVar13 = -1;
  dVar14 = 0.0;
  do {
    bVar6 = unit_voro_intersect(this,iVar9);
    if (!bVar6) {
      iVar9 = *(int *)&(this->unit_voro).field_0x18;
      dVar15 = 0.0;
      pdVar8 = *(double **)&(this->unit_voro).field_0x30;
      this->max_uv_z = 0.0;
      this->max_uv_y = 0.0;
      pdVar2 = pdVar8 + iVar9 * 3;
      if (pdVar8 < pdVar2) {
        dVar15 = 0.0;
        dVar14 = 0.0;
        do {
          dVar16 = pdVar8[1];
          dVar24 = *pdVar8;
          dVar18 = pdVar8[2];
          pdVar8 = pdVar8 + 3;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = dVar16 * dVar16 + dVar24 * dVar24 + dVar18 * dVar18;
          auVar17 = sqrtpd(auVar17,auVar4);
          dVar16 = auVar17._0_8_ + dVar16;
          if (dVar15 < dVar16) {
            this->max_uv_y = dVar16;
            dVar15 = dVar16;
          }
          dVar18 = dVar18 + auVar17._0_8_;
          if (dVar14 < dVar18) {
            this->max_uv_z = dVar18;
            dVar14 = dVar18;
          }
        } while (pdVar8 < pdVar2);
      }
      dVar15 = dVar15 * __real_3fe0000000000000;
      this->max_uv_z = dVar14 * __real_3fe0000000000000;
      this->max_uv_y = dVar15;
      return this;
    }
    dVar24 = (double)iVar9;
    dVar16 = dVar24 * this->bx;
    voronoicell_base::nplane<voro::voronoicell>
              ((voronoicell_base *)&this->unit_voro,&this->unit_voro,dVar16,0.0,0.0,dVar16 * dVar16,
               0);
    dVar16 = (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^ uVar23,SUB84(dVar16,0) ^ uVar22);
    voronoicell_base::nplane<voro::voronoicell>
              ((voronoicell_base *)&this->unit_voro,&this->unit_voro,dVar16,dVar15,dVar15,
               dVar16 * dVar16,0);
    iVar10 = 1;
    iVar5 = iVar13;
    if (1 < iVar9) {
      do {
        dVar19 = (double)iVar10;
        dVar16 = dVar19 * this->by;
        dVar18 = dVar24 * this->bx + dVar19 * this->bxy;
        voronoicell_base::nplane<voro::voronoicell>
                  ((voronoicell_base *)&this->unit_voro,&this->unit_voro,dVar18,dVar16,0.0,
                   dVar16 * dVar16 + dVar18 * dVar18,0);
        dVar16 = (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^ uVar23,
                                  SUB84(dVar16,0) ^ uVar22);
        dVar18 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar23,
                                  SUB84(dVar18,0) ^ uVar22);
        voronoicell_base::nplane<voro::voronoicell>
                  ((voronoicell_base *)&this->unit_voro,&this->unit_voro,dVar18,dVar16,dVar15,
                   dVar18 * dVar18 + dVar16 * dVar16,0);
        dVar18 = dVar19 * this->by;
        dVar16 = dVar19 * this->bxy - dVar24 * this->bx;
        voronoicell_base::nplane<voro::voronoicell>
                  ((voronoicell_base *)&this->unit_voro,&this->unit_voro,dVar16,dVar18,0.0,
                   dVar16 * dVar16 + dVar18 * dVar18,0);
        dVar18 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar23,
                                  SUB84(dVar18,0) ^ uVar22);
        dVar16 = (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^ uVar23,
                                  SUB84(dVar16,0) ^ uVar22);
        voronoicell_base::nplane<voro::voronoicell>
                  ((voronoicell_base *)&this->unit_voro,&this->unit_voro,dVar16,dVar18,dVar15,
                   dVar16 * dVar16 + dVar18 * dVar18,0);
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar9);
    }
    for (; iVar5 <= iVar9; iVar5 = iVar5 + 1) {
      dVar16 = dVar24 * this->by;
      dVar18 = (double)iVar5 * this->bx + dVar24 * this->bxy;
      voronoicell_base::nplane<voro::voronoicell>
                ((voronoicell_base *)&this->unit_voro,&this->unit_voro,dVar18,dVar16,0.0,
                 dVar16 * dVar16 + dVar18 * dVar18,0);
      dVar16 = (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^ uVar23,SUB84(dVar16,0) ^ uVar22)
      ;
      dVar18 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar23,SUB84(dVar18,0) ^ uVar22)
      ;
      voronoicell_base::nplane<voro::voronoicell>
                ((voronoicell_base *)&this->unit_voro,&this->unit_voro,dVar18,dVar16,dVar15,
                 dVar18 * dVar18 + dVar16 * dVar16,0);
    }
    auVar17._8_8_ = 0;
    auVar17._0_8_ = dVar16;
    iVar10 = 1;
    iVar5 = iVar13;
    if (1 < iVar9) {
      iVar1 = iVar13 + 1;
      do {
        if (iVar1 <= iVar9) {
          iVar12 = -iVar1;
          dVar16 = (double)iVar10;
          iVar11 = iVar1;
          do {
            dVar21 = (double)iVar11;
            dVar18 = dVar16 * this->bz;
            dVar20 = dVar24 * this->bx + dVar21 * this->bxy + dVar16 * this->bxz;
            dVar19 = dVar21 * this->by + dVar16 * this->byz;
            voronoicell_base::nplane<voro::voronoicell>
                      ((voronoicell_base *)&this->unit_voro,&this->unit_voro,dVar20,dVar19,dVar18,
                       dVar19 * dVar19 + dVar20 * dVar20 + dVar18 * dVar18,0);
            dVar19 = (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) ^ uVar23,
                                      SUB84(dVar19,0) ^ uVar22);
            dVar20 = (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar23,
                                      SUB84(dVar20,0) ^ uVar22);
            dVar18 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar23,
                                      SUB84(dVar18,0) ^ uVar22);
            voronoicell_base::nplane<voro::voronoicell>
                      ((voronoicell_base *)&this->unit_voro,&this->unit_voro,dVar20,dVar19,dVar18,
                       dVar20 * dVar20 + dVar19 * dVar19 + dVar18 * dVar18,0);
            dVar18 = dVar16 * this->bz;
            dVar20 = (dVar24 * this->bxy - dVar21 * this->bx) + dVar16 * this->bxz;
            dVar19 = dVar16 * this->byz + dVar24 * this->by;
            voronoicell_base::nplane<voro::voronoicell>
                      ((voronoicell_base *)&this->unit_voro,&this->unit_voro,dVar20,dVar19,dVar18,
                       dVar19 * dVar19 + dVar20 * dVar20 + dVar18 * dVar18,0);
            dVar19 = (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) ^ uVar23,
                                      SUB84(dVar19,0) ^ uVar22);
            dVar20 = (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar23,
                                      SUB84(dVar20,0) ^ uVar22);
            dVar18 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar23,
                                      SUB84(dVar18,0) ^ uVar22);
            voronoicell_base::nplane<voro::voronoicell>
                      ((voronoicell_base *)&this->unit_voro,&this->unit_voro,dVar20,dVar19,dVar18,
                       dVar20 * dVar20 + dVar19 * dVar19 + dVar18 * dVar18,0);
            dVar18 = dVar16 * this->bz;
            dVar20 = ((double)iVar12 * this->bxy - dVar24 * this->bx) + dVar16 * this->bxz;
            dVar19 = (double)iVar12 * this->by + dVar16 * this->byz;
            voronoicell_base::nplane<voro::voronoicell>
                      ((voronoicell_base *)&this->unit_voro,&this->unit_voro,dVar20,dVar19,dVar18,
                       dVar19 * dVar19 + dVar20 * dVar20 + dVar18 * dVar18,0);
            dVar19 = (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) ^ uVar23,
                                      SUB84(dVar19,0) ^ uVar22);
            dVar20 = (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar23,
                                      SUB84(dVar20,0) ^ uVar22);
            dVar18 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar23,
                                      SUB84(dVar18,0) ^ uVar22);
            voronoicell_base::nplane<voro::voronoicell>
                      ((voronoicell_base *)&this->unit_voro,&this->unit_voro,dVar20,dVar19,dVar18,
                       dVar20 * dVar20 + dVar19 * dVar19 + dVar18 * dVar18,0);
            dVar20 = (double)iVar13 * this->bxy + dVar21 * this->bx + dVar16 * this->bxz;
            dVar18 = dVar16 * this->bz;
            dVar19 = (double)iVar13 * this->by + dVar16 * this->byz;
            voronoicell_base::nplane<voro::voronoicell>
                      ((voronoicell_base *)&this->unit_voro,&this->unit_voro,dVar20,dVar19,dVar18,
                       dVar19 * dVar19 + dVar20 * dVar20 + dVar18 * dVar18,0);
            dVar19 = (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) ^ uVar23,
                                      SUB84(dVar19,0) ^ uVar22);
            dVar20 = (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar23,
                                      SUB84(dVar20,0) ^ uVar22);
            auVar17._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar23,
                                  SUB84(dVar18,0) ^ uVar22);
            auVar17._8_8_ = 0;
            voronoicell_base::nplane<voro::voronoicell>
                      ((voronoicell_base *)&this->unit_voro,&this->unit_voro,dVar20,dVar19,
                       auVar17._0_8_,
                       dVar20 * dVar20 + dVar19 * dVar19 + auVar17._0_8_ * auVar17._0_8_,0);
            iVar11 = iVar11 + 1;
            iVar12 = iVar12 + -1;
          } while (iVar11 <= iVar9);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar9);
    }
    for (; iVar5 <= iVar9; iVar5 = iVar5 + 1) {
      iVar10 = iVar13;
      do {
        dVar16 = dVar24 * this->bz;
        dVar19 = (double)iVar10 * this->bxy + (double)iVar5 * this->bx + dVar24 * this->bxz;
        dVar18 = (double)iVar10 * this->by + dVar24 * this->byz;
        voronoicell_base::nplane<voro::voronoicell>
                  ((voronoicell_base *)&this->unit_voro,&this->unit_voro,dVar19,dVar18,dVar16,
                   dVar18 * dVar18 + dVar19 * dVar19 + dVar16 * dVar16,0);
        dVar18 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar23,
                                  SUB84(dVar18,0) ^ uVar22);
        dVar19 = (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) ^ uVar23,
                                  SUB84(dVar19,0) ^ uVar22);
        auVar17._0_8_ =
             (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^ uVar23,SUB84(dVar16,0) ^ uVar22);
        auVar17._8_8_ = 0;
        voronoicell_base::nplane<voro::voronoicell>
                  ((voronoicell_base *)&this->unit_voro,&this->unit_voro,dVar19,dVar18,auVar17._0_8_
                   ,dVar19 * dVar19 + dVar18 * dVar18 + auVar17._0_8_ * auVar17._0_8_,0);
        iVar10 = iVar10 + 1;
      } while (iVar10 <= iVar9);
    }
    iVar9 = iVar9 + 1;
    iVar13 = iVar13 + -1;
  } while (-0x14 < iVar13);
  local_1f8._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_1f8,"Periodic cell computation failed",0x20,Yes);
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Voronoi\\Private\\voro++\\src\\common.hh"
                     ,0x20,L"voro++ failure: %s (status code: %d)");
  if ((void *)local_1f8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_1f8._padding_);
  }
  if (!bVar6) {
    return this;
  }
  pcVar3 = (code *)swi(3);
  puVar7 = (unitcell *)(*pcVar3)();
  return puVar7;
}

// ~deque<int,std::allocator<int>_> @ 1436b6440

void __thiscall
std::deque<int,std::allocator<int>_>::~deque<int,std::allocator<int>_>
          (deque<int,std::allocator<int>_> *this)

{
  int *piVar1;
  int **ppiVar2;
  void *pvVar3;
  int **ppiVar4;
  ulong64 uVar5;
  
  uVar5 = (this->_Mypair)._Myval2._Mysize;
  if (uVar5 != 0) {
    do {
      uVar5 = uVar5 - 1;
      (this->_Mypair)._Myval2._Mysize = uVar5;
    } while (uVar5 != 0);
    (this->_Mypair)._Myval2._Myoff = 0;
  }
  if ((this->_Mypair)._Myval2._Map != (int **)0x0) {
    uVar5 = (this->_Mypair)._Myval2._Mapsize;
    while (0 < (longlong)uVar5) {
      uVar5 = uVar5 - 1;
      piVar1 = (this->_Mypair)._Myval2._Map[uVar5];
      if (piVar1 != (int *)0x0) {
        ::operator_delete(piVar1,0x10);
      }
    }
    ppiVar2 = (this->_Mypair)._Myval2._Map;
    uVar5 = (this->_Mypair)._Myval2._Mapsize * 8;
    ppiVar4 = ppiVar2;
    if (0xfff < uVar5) {
      ppiVar4 = (int **)ppiVar2[-1];
      uVar5 = uVar5 + 0x27;
      if (0x1f < (ulonglong)((longlong)ppiVar2 + (-8 - (longlong)ppiVar4))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(ppiVar4,uVar5);
    (this->_Mypair)._Myval2._Map = (int **)0x0;
    (this->_Mypair)._Myval2._Mapsize = 0;
  }
  pvVar3 = (void *)(this->_Mypair)._Myval2._padding_;
  (this->_Mypair)._Myval2._padding_ = 0;
  ::operator_delete(pvVar3,0x10);
  return;
}

// images @ 1436b6530

void __thiscall
voro::unitcell::images
          (unitcell *this,vector<int,std::allocator<int>_> *param_1,
          vector<double,std::allocator<double>_> *param_2)

{
  int **ppiVar1;
  ulong64 uVar2;
  int iVar3;
  double *pdVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 *_Dst;
  int *piVar7;
  vector<int,std::allocator<int>_> *pvVar8;
  ulonglong uVar9;
  size_t sVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int local_res20 [2];
  deque<int,std::allocator<int>_> local_88;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  double local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  pvVar8 = param_1;
  _Dst = operator_new__(0x242d);
  local_48 = _Dst + 0x1216;
  sVar10 = 0x1216;
  if (local_48 < _Dst) {
    sVar10 = 0;
  }
  puVar12 = _Dst;
  local_40 = _Dst;
  if (sVar10 != 0) {
    pvVar8 = (vector<int,std::allocator<int>_> *)CONCAT71((int7)((ulonglong)pvVar8 >> 8),1);
    memset(_Dst,(int)pvVar8,sVar10);
    puVar12 = _Dst + sVar10;
  }
  *puVar12 = 0;
  puVar12 = puVar12 + 1;
  sVar10 = (longlong)(_Dst + 0x242d) - (longlong)puVar12;
  if (_Dst + 0x242d < puVar12) {
    sVar10 = 0;
  }
  if (sVar10 != 0) {
    memset(puVar12,(int)CONCAT71((int7)((ulonglong)pvVar8 >> 8),1),sVar10);
  }
  local_88._Mypair._Myval2._Map = (int **)0x0;
  local_88._Mypair._Myval2._Mapsize = 0;
  local_88._Mypair._Myval2._Myoff = 0;
  local_88._Mypair._Myval2._Mysize = 0;
  local_88._Mypair._Myval2._padding_ = (longlong)::operator_new(0x10);
  *(longlong *)(local_88._Mypair._Myval2._padding_ + 8) = 0;
  *(deque<int,std::allocator<int>_> **)local_88._Mypair._Myval2._padding_ = &local_88;
  local_res20[0] = 0;
  std::queue<int,std::deque<int,std::allocator<int>_>_>::push
            ((queue<int,std::deque<int,std::allocator<int>_>_> *)&local_88,local_res20);
  local_res20[0] = 0;
  std::queue<int,std::deque<int,std::allocator<int>_>_>::push
            ((queue<int,std::deque<int,std::allocator<int>_>_> *)&local_88,local_res20);
  local_res20[0] = 0;
  std::queue<int,std::deque<int,std::allocator<int>_>_>::push
            ((queue<int,std::deque<int,std::allocator<int>_>_> *)&local_88,local_res20);
  while (local_88._Mypair._Myval2._Mysize != 0) {
    uVar13 = local_88._Mypair._Myval2._Mapsize - 1;
    iVar3 = local_88._Mypair._Myval2._Map[local_88._Mypair._Myval2._Myoff >> 2 & uVar13]
            [(uint)local_88._Mypair._Myval2._Myoff & 3];
    uVar9 = local_88._Mypair._Myval2._Myoff + 1;
    if (local_88._Mypair._Myval2._Mysize == 1) {
      uVar9 = 0;
    }
    iVar15 = local_88._Mypair._Myval2._Map[uVar9 >> 2 & uVar13][(uint)uVar9 & 3];
    local_88._Mypair._Myval2._Myoff = 0;
    if (local_88._Mypair._Myval2._Mysize != 2) {
      local_88._Mypair._Myval2._Myoff = uVar9 + 1;
    }
    iVar14 = local_88._Mypair._Myval2._Map[local_88._Mypair._Myval2._Myoff >> 2 & uVar13]
             [(uint)local_88._Mypair._Myval2._Myoff & 3];
    local_88._Mypair._Myval2._Mysize = local_88._Mypair._Myval2._Mysize - 3;
    if (local_88._Mypair._Myval2._Mysize == 0) {
      local_88._Mypair._Myval2._Myoff = 0;
    }
    else {
      local_88._Mypair._Myval2._Myoff = local_88._Mypair._Myval2._Myoff + 1;
    }
    local_res20[0] = iVar15;
    local_60 = iVar14;
    local_5c = iVar3;
    local_58 = iVar15;
    local_54 = iVar14;
    bVar6 = intersects_image(this,(double)iVar3,(double)iVar15,(double)iVar14,&local_50);
    _Dst = local_40;
    if (bVar6) {
      piVar7 = (param_1->_Mypair)._Myval2._Mylast;
      if (piVar7 == (param_1->_Mypair)._Myval2._Myend) {
        std::vector<int,std::allocator<int>_>::_Emplace_reallocate<int_const_&>
                  (param_1,piVar7,&local_5c);
      }
      else {
        *piVar7 = iVar3;
        ppiVar1 = &(param_1->_Mypair)._Myval2._Mylast;
        *ppiVar1 = *ppiVar1 + 1;
      }
      piVar7 = (param_1->_Mypair)._Myval2._Mylast;
      if (piVar7 == (param_1->_Mypair)._Myval2._Myend) {
        std::vector<int,std::allocator<int>_>::_Emplace_reallocate<int_const_&>
                  (param_1,piVar7,&local_58);
      }
      else {
        *piVar7 = iVar15;
        ppiVar1 = &(param_1->_Mypair)._Myval2._Mylast;
        *ppiVar1 = *ppiVar1 + 1;
      }
      piVar7 = (param_1->_Mypair)._Myval2._Mylast;
      if (piVar7 == (param_1->_Mypair)._Myval2._Myend) {
        std::vector<int,std::allocator<int>_>::_Emplace_reallocate<int_const_&>
                  (param_1,piVar7,&local_54);
      }
      else {
        *piVar7 = iVar14;
        ppiVar1 = &(param_1->_Mypair)._Myval2._Mylast;
        *ppiVar1 = *ppiVar1 + 1;
      }
      pdVar4 = (param_2->_Mypair)._Myval2._Mylast;
      if (pdVar4 == (param_2->_Mypair)._Myval2._Myend) {
        std::vector<double,std::allocator<double>_>::_Emplace_reallocate<double_const_&>
                  (param_2,pdVar4,&local_50);
      }
      else {
        *pdVar4 = local_50;
        (param_2->_Mypair)._Myval2._Mylast = pdVar4 + 1;
      }
      puVar12 = local_48;
      lVar5 = (longlong)iVar3 + (longlong)((iVar14 * 0x15 + iVar15) * 0x15);
      if ((-10 < iVar14) && (local_48[lVar5 + -0x1b9] != '\0')) {
        if ((((int)local_88._Mypair._Myval2._Myoff + (int)local_88._Mypair._Myval2._Mysize & 3U) ==
             0) && (local_88._Mypair._Myval2._Mapsize <= local_88._Mypair._Myval2._Mysize + 4 >> 2))
        {
          std::deque<int,std::allocator<int>_>::_Growmap(&local_88,1);
        }
        local_88._Mypair._Myval2._Myoff =
             local_88._Mypair._Myval2._Myoff & local_88._Mypair._Myval2._Mapsize * 4 - 1;
        uVar9 = local_88._Mypair._Myval2._Mysize + local_88._Mypair._Myval2._Myoff;
        uVar11 = uVar9 >> 2;
        uVar13 = local_88._Mypair._Myval2._Mapsize - 1 & uVar11;
        if (local_88._Mypair._Myval2._Map[uVar13] == (int *)0x0) {
          piVar7 = ::operator_new(0x10);
          local_88._Mypair._Myval2._Map[uVar13] = piVar7;
        }
        local_88._Mypair._Myval2._Map[local_88._Mypair._Myval2._Mapsize - 1 & uVar11]
        [(uint)uVar9 & 3] = iVar3;
        uVar2 = local_88._Mypair._Myval2._Mysize + 1;
        if ((((char)local_88._Mypair._Myval2._Myoff + '\x01' +
              (char)local_88._Mypair._Myval2._Mysize & 3U) == 0) &&
           (local_88._Mypair._Myval2._Mapsize <= local_88._Mypair._Myval2._Mysize + 5 >> 2)) {
          local_88._Mypair._Myval2._Mysize = uVar2;
          std::deque<int,std::allocator<int>_>::_Growmap(&local_88,1);
          uVar2 = local_88._Mypair._Myval2._Mysize;
        }
        local_88._Mypair._Myval2._Mysize = uVar2;
        local_88._Mypair._Myval2._Myoff =
             local_88._Mypair._Myval2._Myoff & local_88._Mypair._Myval2._Mapsize * 4 - 1;
        uVar9 = local_88._Mypair._Myval2._Mysize + local_88._Mypair._Myval2._Myoff;
        uVar11 = uVar9 >> 2;
        uVar13 = local_88._Mypair._Myval2._Mapsize - 1 & uVar11;
        if (local_88._Mypair._Myval2._Map[uVar13] == (int *)0x0) {
          piVar7 = ::operator_new(0x10);
          local_88._Mypair._Myval2._Map[uVar13] = piVar7;
        }
        local_88._Mypair._Myval2._Map[local_88._Mypair._Myval2._Mapsize - 1 & uVar11]
        [(uint)uVar9 & 3] = local_res20[0];
        uVar2 = local_88._Mypair._Myval2._Mysize + 1;
        if ((((char)local_88._Mypair._Myval2._Mysize + '\x01' +
              (char)local_88._Mypair._Myval2._Myoff & 3U) == 0) &&
           (local_88._Mypair._Myval2._Mapsize <= local_88._Mypair._Myval2._Mysize + 5 >> 2)) {
          local_88._Mypair._Myval2._Mysize = uVar2;
          std::deque<int,std::allocator<int>_>::_Growmap(&local_88,1);
          uVar2 = local_88._Mypair._Myval2._Mysize;
        }
        local_88._Mypair._Myval2._Mysize = uVar2;
        local_88._Mypair._Myval2._Myoff =
             local_88._Mypair._Myval2._Myoff & local_88._Mypair._Myval2._Mapsize * 4 - 1;
        uVar9 = local_88._Mypair._Myval2._Mysize + local_88._Mypair._Myval2._Myoff;
        uVar13 = uVar9 >> 2;
        uVar11 = local_88._Mypair._Myval2._Mapsize - 1 & uVar13;
        if (local_88._Mypair._Myval2._Map[uVar11] == (int *)0x0) {
          piVar7 = ::operator_new(0x10);
          local_88._Mypair._Myval2._Map[uVar11] = piVar7;
        }
        local_88._Mypair._Myval2._Map[local_88._Mypair._Myval2._Mapsize - 1 & uVar13]
        [(uint)uVar9 & 3] = iVar14 + -1;
        local_88._Mypair._Myval2._Mysize = local_88._Mypair._Myval2._Mysize + 1;
        puVar12[lVar5 + -0x1b9] = 0;
        iVar15 = local_res20[0];
        iVar14 = local_60;
      }
      if ((-10 < iVar15) && (puVar12[lVar5 + -0x15] != '\0')) {
        if ((((int)local_88._Mypair._Myval2._Myoff + (int)local_88._Mypair._Myval2._Mysize & 3U) ==
             0) && (local_88._Mypair._Myval2._Mapsize <= local_88._Mypair._Myval2._Mysize + 4 >> 2))
        {
          std::deque<int,std::allocator<int>_>::_Growmap(&local_88,1);
        }
        local_88._Mypair._Myval2._Myoff =
             local_88._Mypair._Myval2._Myoff & local_88._Mypair._Myval2._Mapsize * 4 - 1;
        uVar9 = local_88._Mypair._Myval2._Mysize + local_88._Mypair._Myval2._Myoff;
        uVar11 = uVar9 >> 2;
        uVar13 = local_88._Mypair._Myval2._Mapsize - 1 & uVar11;
        if (local_88._Mypair._Myval2._Map[uVar13] == (int *)0x0) {
          piVar7 = ::operator_new(0x10);
          local_88._Mypair._Myval2._Map[uVar13] = piVar7;
        }
        iVar15 = local_res20[0] + -1;
        local_88._Mypair._Myval2._Map[local_88._Mypair._Myval2._Mapsize - 1 & uVar11]
        [(uint)uVar9 & 3] = iVar3;
        uVar2 = local_88._Mypair._Myval2._Mysize + 1;
        if ((((char)local_88._Mypair._Myval2._Myoff + '\x01' +
              (char)local_88._Mypair._Myval2._Mysize & 3U) == 0) &&
           (local_88._Mypair._Myval2._Mapsize <= local_88._Mypair._Myval2._Mysize + 5 >> 2)) {
          local_88._Mypair._Myval2._Mysize = uVar2;
          std::deque<int,std::allocator<int>_>::_Growmap(&local_88,1);
          uVar2 = local_88._Mypair._Myval2._Mysize;
        }
        local_88._Mypair._Myval2._Mysize = uVar2;
        local_88._Mypair._Myval2._Myoff =
             local_88._Mypair._Myval2._Myoff & local_88._Mypair._Myval2._Mapsize * 4 - 1;
        uVar9 = local_88._Mypair._Myval2._Mysize + local_88._Mypair._Myval2._Myoff;
        uVar11 = uVar9 >> 2;
        uVar13 = local_88._Mypair._Myval2._Mapsize - 1 & uVar11;
        if (local_88._Mypair._Myval2._Map[uVar13] == (int *)0x0) {
          piVar7 = ::operator_new(0x10);
          local_88._Mypair._Myval2._Map[uVar13] = piVar7;
        }
        local_88._Mypair._Myval2._Map[local_88._Mypair._Myval2._Mapsize - 1 & uVar11]
        [(uint)uVar9 & 3] = iVar15;
        uVar2 = local_88._Mypair._Myval2._Mysize + 1;
        if ((((char)local_88._Mypair._Myval2._Mysize + '\x01' +
              (char)local_88._Mypair._Myval2._Myoff & 3U) == 0) &&
           (local_88._Mypair._Myval2._Mapsize <= local_88._Mypair._Myval2._Mysize + 5 >> 2)) {
          local_88._Mypair._Myval2._Mysize = uVar2;
          std::deque<int,std::allocator<int>_>::_Growmap(&local_88,1);
          uVar2 = local_88._Mypair._Myval2._Mysize;
        }
        local_88._Mypair._Myval2._Mysize = uVar2;
        local_88._Mypair._Myval2._Myoff =
             local_88._Mypair._Myval2._Myoff & local_88._Mypair._Myval2._Mapsize * 4 - 1;
        uVar9 = local_88._Mypair._Myval2._Mysize + local_88._Mypair._Myval2._Myoff;
        uVar13 = uVar9 >> 2;
        uVar11 = local_88._Mypair._Myval2._Mapsize - 1 & uVar13;
        if (local_88._Mypair._Myval2._Map[uVar11] == (int *)0x0) {
          piVar7 = ::operator_new(0x10);
          local_88._Mypair._Myval2._Map[uVar11] = piVar7;
        }
        local_88._Mypair._Myval2._Map[local_88._Mypair._Myval2._Mapsize - 1 & uVar13]
        [(uint)uVar9 & 3] = local_60;
        local_88._Mypair._Myval2._Mysize = local_88._Mypair._Myval2._Mysize + 1;
        puVar12[lVar5 + -0x15] = 0;
        iVar14 = local_60;
      }
      if ((-10 < iVar3) && (puVar12[lVar5 + -1] != '\0')) {
        if ((((int)local_88._Mypair._Myval2._Myoff + (int)local_88._Mypair._Myval2._Mysize & 3U) ==
             0) && (local_88._Mypair._Myval2._Mapsize <= local_88._Mypair._Myval2._Mysize + 4 >> 2))
        {
          std::deque<int,std::allocator<int>_>::_Growmap(&local_88,1);
        }
        local_88._Mypair._Myval2._Myoff =
             local_88._Mypair._Myval2._Myoff & local_88._Mypair._Myval2._Mapsize * 4 - 1;
        uVar9 = local_88._Mypair._Myval2._Mysize + local_88._Mypair._Myval2._Myoff;
        uVar11 = uVar9 >> 2;
        uVar13 = local_88._Mypair._Myval2._Mapsize - 1 & uVar11;
        if (local_88._Mypair._Myval2._Map[uVar13] == (int *)0x0) {
          piVar7 = ::operator_new(0x10);
          local_88._Mypair._Myval2._Map[uVar13] = piVar7;
        }
        local_88._Mypair._Myval2._Map[local_88._Mypair._Myval2._Mapsize - 1 & uVar11]
        [(uint)uVar9 & 3] = iVar3 + -1;
        uVar2 = local_88._Mypair._Myval2._Mysize + 1;
        if ((((char)local_88._Mypair._Myval2._Mysize + '\x01' +
              (char)local_88._Mypair._Myval2._Myoff & 3U) == 0) &&
           (local_88._Mypair._Myval2._Mapsize <= local_88._Mypair._Myval2._Mysize + 5 >> 2)) {
          local_88._Mypair._Myval2._Mysize = uVar2;
          std::deque<int,std::allocator<int>_>::_Growmap(&local_88,1);
          uVar2 = local_88._Mypair._Myval2._Mysize;
        }
        local_88._Mypair._Myval2._Mysize = uVar2;
        local_88._Mypair._Myval2._Myoff =
             local_88._Mypair._Myval2._Myoff & local_88._Mypair._Myval2._Mapsize * 4 - 1;
        uVar9 = local_88._Mypair._Myval2._Mysize + local_88._Mypair._Myval2._Myoff;
        uVar11 = uVar9 >> 2;
        uVar13 = local_88._Mypair._Myval2._Mapsize - 1 & uVar11;
        if (local_88._Mypair._Myval2._Map[uVar13] == (int *)0x0) {
          piVar7 = ::operator_new(0x10);
          local_88._Mypair._Myval2._Map[uVar13] = piVar7;
        }
        local_88._Mypair._Myval2._Map[local_88._Mypair._Myval2._Mapsize - 1 & uVar11]
        [(uint)uVar9 & 3] = local_res20[0];
        uVar2 = local_88._Mypair._Myval2._Mysize + 1;
        if ((((char)local_88._Mypair._Myval2._Mysize + '\x01' +
              (char)local_88._Mypair._Myval2._Myoff & 3U) == 0) &&
           (local_88._Mypair._Myval2._Mapsize <= local_88._Mypair._Myval2._Mysize + 5 >> 2)) {
          local_88._Mypair._Myval2._Mysize = uVar2;
          std::deque<int,std::allocator<int>_>::_Growmap(&local_88,1);
          uVar2 = local_88._Mypair._Myval2._Mysize;
        }
        local_88._Mypair._Myval2._Mysize = uVar2;
        local_88._Mypair._Myval2._Myoff =
             local_88._Mypair._Myval2._Myoff & local_88._Mypair._Myval2._Mapsize * 4 - 1;
        uVar9 = local_88._Mypair._Myval2._Mysize + local_88._Mypair._Myval2._Myoff;
        uVar13 = uVar9 >> 2;
        uVar11 = local_88._Mypair._Myval2._Mapsize - 1 & uVar13;
        if (local_88._Mypair._Myval2._Map[uVar11] == (int *)0x0) {
          piVar7 = ::operator_new(0x10);
          local_88._Mypair._Myval2._Map[uVar11] = piVar7;
        }
        local_88._Mypair._Myval2._Map[local_88._Mypair._Myval2._Mapsize - 1 & uVar13]
        [(uint)uVar9 & 3] = local_60;
        local_88._Mypair._Myval2._Mysize = local_88._Mypair._Myval2._Mysize + 1;
        puVar12[lVar5 + -1] = 0;
        iVar14 = local_60;
      }
      if ((iVar3 < 10) && (puVar12[lVar5 + 1] != '\0')) {
        if ((((int)local_88._Mypair._Myval2._Myoff + (int)local_88._Mypair._Myval2._Mysize & 3U) ==
             0) && (local_88._Mypair._Myval2._Mapsize <= local_88._Mypair._Myval2._Mysize + 4 >> 2))
        {
          std::deque<int,std::allocator<int>_>::_Growmap(&local_88,1);
        }
        local_88._Mypair._Myval2._Myoff =
             local_88._Mypair._Myval2._Myoff & local_88._Mypair._Myval2._Mapsize * 4 - 1;
        uVar9 = local_88._Mypair._Myval2._Mysize + local_88._Mypair._Myval2._Myoff;
        uVar11 = uVar9 >> 2;
        uVar13 = local_88._Mypair._Myval2._Mapsize - 1 & uVar11;
        if (local_88._Mypair._Myval2._Map[uVar13] == (int *)0x0) {
          piVar7 = ::operator_new(0x10);
          local_88._Mypair._Myval2._Map[uVar13] = piVar7;
        }
        local_88._Mypair._Myval2._Map[local_88._Mypair._Myval2._Mapsize - 1 & uVar11]
        [(uint)uVar9 & 3] = iVar3 + 1;
        uVar2 = local_88._Mypair._Myval2._Mysize + 1;
        if ((((char)local_88._Mypair._Myval2._Myoff + '\x01' +
              (char)local_88._Mypair._Myval2._Mysize & 3U) == 0) &&
           (local_88._Mypair._Myval2._Mapsize <= local_88._Mypair._Myval2._Mysize + 5 >> 2)) {
          local_88._Mypair._Myval2._Mysize = uVar2;
          std::deque<int,std::allocator<int>_>::_Growmap(&local_88,1);
          uVar2 = local_88._Mypair._Myval2._Mysize;
        }
        local_88._Mypair._Myval2._Mysize = uVar2;
        local_88._Mypair._Myval2._Myoff =
             local_88._Mypair._Myval2._Myoff & local_88._Mypair._Myval2._Mapsize * 4 - 1;
        uVar9 = local_88._Mypair._Myval2._Mysize + local_88._Mypair._Myval2._Myoff;
        uVar11 = uVar9 >> 2;
        uVar13 = local_88._Mypair._Myval2._Mapsize - 1 & uVar11;
        if (local_88._Mypair._Myval2._Map[uVar13] == (int *)0x0) {
          piVar7 = ::operator_new(0x10);
          local_88._Mypair._Myval2._Map[uVar13] = piVar7;
        }
        local_88._Mypair._Myval2._Map[local_88._Mypair._Myval2._Mapsize - 1 & uVar11]
        [(uint)uVar9 & 3] = local_res20[0];
        uVar2 = local_88._Mypair._Myval2._Mysize + 1;
        if ((((char)local_88._Mypair._Myval2._Myoff + '\x01' +
              (char)local_88._Mypair._Myval2._Mysize & 3U) == 0) &&
           (local_88._Mypair._Myval2._Mapsize <= local_88._Mypair._Myval2._Mysize + 5 >> 2)) {
          local_88._Mypair._Myval2._Mysize = uVar2;
          std::deque<int,std::allocator<int>_>::_Growmap(&local_88,1);
          uVar2 = local_88._Mypair._Myval2._Mysize;
        }
        local_88._Mypair._Myval2._Mysize = uVar2;
        local_88._Mypair._Myval2._Myoff =
             local_88._Mypair._Myval2._Myoff & local_88._Mypair._Myval2._Mapsize * 4 - 1;
        uVar9 = local_88._Mypair._Myval2._Mysize + local_88._Mypair._Myval2._Myoff;
        uVar13 = uVar9 >> 2;
        uVar11 = local_88._Mypair._Myval2._Mapsize - 1 & uVar13;
        if (local_88._Mypair._Myval2._Map[uVar11] == (int *)0x0) {
          piVar7 = ::operator_new(0x10);
          local_88._Mypair._Myval2._Map[uVar11] = piVar7;
        }
        local_88._Mypair._Myval2._Map[local_88._Mypair._Myval2._Mapsize - 1 & uVar13]
        [(uint)uVar9 & 3] = local_60;
        local_88._Mypair._Myval2._Mysize = local_88._Mypair._Myval2._Mysize + 1;
        puVar12[lVar5 + 1] = 0;
        iVar14 = local_60;
      }
      if ((local_res20[0] < 10) && (puVar12[lVar5 + 0x15] != '\0')) {
        if ((((int)local_88._Mypair._Myval2._Myoff + (int)local_88._Mypair._Myval2._Mysize & 3U) ==
             0) && (local_88._Mypair._Myval2._Mapsize <= local_88._Mypair._Myval2._Mysize + 4 >> 2))
        {
          std::deque<int,std::allocator<int>_>::_Growmap(&local_88,1);
        }
        local_88._Mypair._Myval2._Myoff =
             local_88._Mypair._Myval2._Myoff & local_88._Mypair._Myval2._Mapsize * 4 - 1;
        uVar9 = local_88._Mypair._Myval2._Mysize + local_88._Mypair._Myval2._Myoff;
        uVar11 = uVar9 >> 2;
        uVar13 = local_88._Mypair._Myval2._Mapsize - 1 & uVar11;
        if (local_88._Mypair._Myval2._Map[uVar13] == (int *)0x0) {
          piVar7 = ::operator_new(0x10);
          local_88._Mypair._Myval2._Map[uVar13] = piVar7;
        }
        iVar15 = local_res20[0] + 1;
        local_88._Mypair._Myval2._Map[local_88._Mypair._Myval2._Mapsize - 1 & uVar11]
        [(uint)uVar9 & 3] = iVar3;
        uVar2 = local_88._Mypair._Myval2._Mysize + 1;
        if ((((char)local_88._Mypair._Myval2._Myoff + '\x01' +
              (char)local_88._Mypair._Myval2._Mysize & 3U) == 0) &&
           (local_88._Mypair._Myval2._Mapsize <= local_88._Mypair._Myval2._Mysize + 5 >> 2)) {
          local_88._Mypair._Myval2._Mysize = uVar2;
          std::deque<int,std::allocator<int>_>::_Growmap(&local_88,1);
          uVar2 = local_88._Mypair._Myval2._Mysize;
        }
        local_88._Mypair._Myval2._Mysize = uVar2;
        local_88._Mypair._Myval2._Myoff =
             local_88._Mypair._Myval2._Myoff & local_88._Mypair._Myval2._Mapsize * 4 - 1;
        uVar9 = local_88._Mypair._Myval2._Mysize + local_88._Mypair._Myval2._Myoff;
        uVar11 = uVar9 >> 2;
        uVar13 = local_88._Mypair._Myval2._Mapsize - 1 & uVar11;
        if (local_88._Mypair._Myval2._Map[uVar13] == (int *)0x0) {
          piVar7 = ::operator_new(0x10);
          local_88._Mypair._Myval2._Map[uVar13] = piVar7;
        }
        local_88._Mypair._Myval2._Map[local_88._Mypair._Myval2._Mapsize - 1 & uVar11]
        [(uint)uVar9 & 3] = iVar15;
        uVar2 = local_88._Mypair._Myval2._Mysize + 1;
        if ((((char)local_88._Mypair._Myval2._Myoff + '\x01' +
              (char)local_88._Mypair._Myval2._Mysize & 3U) == 0) &&
           (local_88._Mypair._Myval2._Mapsize <= local_88._Mypair._Myval2._Mysize + 5 >> 2)) {
          local_88._Mypair._Myval2._Mysize = uVar2;
          std::deque<int,std::allocator<int>_>::_Growmap(&local_88,1);
          uVar2 = local_88._Mypair._Myval2._Mysize;
        }
        local_88._Mypair._Myval2._Mysize = uVar2;
        local_88._Mypair._Myval2._Myoff =
             local_88._Mypair._Myval2._Myoff & local_88._Mypair._Myval2._Mapsize * 4 - 1;
        uVar9 = local_88._Mypair._Myval2._Mysize + local_88._Mypair._Myval2._Myoff;
        uVar13 = uVar9 >> 2;
        uVar11 = local_88._Mypair._Myval2._Mapsize - 1 & uVar13;
        if (local_88._Mypair._Myval2._Map[uVar11] == (int *)0x0) {
          piVar7 = ::operator_new(0x10);
          local_88._Mypair._Myval2._Map[uVar11] = piVar7;
        }
        local_88._Mypair._Myval2._Map[local_88._Mypair._Myval2._Mapsize - 1 & uVar13]
        [(uint)uVar9 & 3] = local_60;
        local_88._Mypair._Myval2._Mysize = local_88._Mypair._Myval2._Mysize + 1;
        puVar12[lVar5 + 0x15] = 0;
        iVar14 = local_60;
      }
      _Dst = local_40;
      if ((iVar14 < 10) && (puVar12[lVar5 + 0x1b9] != '\0')) {
        if ((((int)local_88._Mypair._Myval2._Myoff + (int)local_88._Mypair._Myval2._Mysize & 3U) ==
             0) && (local_88._Mypair._Myval2._Mapsize <= local_88._Mypair._Myval2._Mysize + 4 >> 2))
        {
          std::deque<int,std::allocator<int>_>::_Growmap(&local_88,1);
        }
        local_88._Mypair._Myval2._Myoff =
             local_88._Mypair._Myval2._Myoff & local_88._Mypair._Myval2._Mapsize * 4 - 1;
        uVar9 = local_88._Mypair._Myval2._Mysize + local_88._Mypair._Myval2._Myoff;
        uVar11 = uVar9 >> 2;
        uVar13 = local_88._Mypair._Myval2._Mapsize - 1 & uVar11;
        if (local_88._Mypair._Myval2._Map[uVar13] == (int *)0x0) {
          piVar7 = ::operator_new(0x10);
          local_88._Mypair._Myval2._Map[uVar13] = piVar7;
        }
        local_88._Mypair._Myval2._Map[local_88._Mypair._Myval2._Mapsize - 1 & uVar11]
        [(uint)uVar9 & 3] = iVar3;
        uVar2 = local_88._Mypair._Myval2._Mysize + 1;
        if ((((char)local_88._Mypair._Myval2._Myoff + '\x01' +
              (char)local_88._Mypair._Myval2._Mysize & 3U) == 0) &&
           (local_88._Mypair._Myval2._Mapsize <= local_88._Mypair._Myval2._Mysize + 5 >> 2)) {
          local_88._Mypair._Myval2._Mysize = uVar2;
          std::deque<int,std::allocator<int>_>::_Growmap(&local_88,1);
          uVar2 = local_88._Mypair._Myval2._Mysize;
        }
        local_88._Mypair._Myval2._Mysize = uVar2;
        local_88._Mypair._Myval2._Myoff =
             local_88._Mypair._Myval2._Myoff & local_88._Mypair._Myval2._Mapsize * 4 - 1;
        uVar9 = local_88._Mypair._Myval2._Mysize + local_88._Mypair._Myval2._Myoff;
        uVar11 = uVar9 >> 2;
        uVar13 = local_88._Mypair._Myval2._Mapsize - 1 & uVar11;
        if (local_88._Mypair._Myval2._Map[uVar13] == (int *)0x0) {
          piVar7 = ::operator_new(0x10);
          local_88._Mypair._Myval2._Map[uVar13] = piVar7;
        }
        local_88._Mypair._Myval2._Map[local_88._Mypair._Myval2._Mapsize - 1 & uVar11]
        [(uint)uVar9 & 3] = local_res20[0];
        uVar2 = local_88._Mypair._Myval2._Mysize + 1;
        if ((((char)local_88._Mypair._Myval2._Myoff + '\x01' +
              (char)local_88._Mypair._Myval2._Mysize & 3U) == 0) &&
           (local_88._Mypair._Myval2._Mapsize <= local_88._Mypair._Myval2._Mysize + 5 >> 2)) {
          local_88._Mypair._Myval2._Mysize = uVar2;
          std::deque<int,std::allocator<int>_>::_Growmap(&local_88,1);
          uVar2 = local_88._Mypair._Myval2._Mysize;
        }
        local_88._Mypair._Myval2._Mysize = uVar2;
        local_88._Mypair._Myval2._Myoff =
             local_88._Mypair._Myval2._Myoff & local_88._Mypair._Myval2._Mapsize * 4 - 1;
        uVar9 = local_88._Mypair._Myval2._Mysize + local_88._Mypair._Myval2._Myoff;
        uVar13 = uVar9 >> 2;
        uVar11 = local_88._Mypair._Myval2._Mapsize - 1 & uVar13;
        if (local_88._Mypair._Myval2._Map[uVar11] == (int *)0x0) {
          piVar7 = ::operator_new(0x10);
          local_88._Mypair._Myval2._Map[uVar11] = piVar7;
        }
        local_88._Mypair._Myval2._Map[local_88._Mypair._Myval2._Mapsize - 1 & uVar13]
        [(uint)uVar9 & 3] = iVar14 + 1;
        local_88._Mypair._Myval2._Mysize = local_88._Mypair._Myval2._Mysize + 1;
        puVar12[lVar5 + 0x1b9] = 0;
        _Dst = local_40;
      }
    }
  }
  operator_delete__(_Dst);
  std::deque<int,std::allocator<int>_>::~deque<int,std::allocator<int>_>(&local_88);
  return;
}

// intersects_image @ 1436b7400

bool __thiscall
voro::unitcell::intersects_image
          (unitcell *this,double param_1,double param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  voronoicell_base local_128;
  
  dVar3 = __real_3ff0000000000000;
  dVar8 = __real_3ff0000000000000 / this->by;
  dVar1 = __real_3ff0000000000000 / this->bx;
  dVar9 = __real_3ff0000000000000 / this->bz;
  dVar2 = dVar8 * dVar1 * dVar9;
  voronoicell_base::voronoicell_base(&local_128);
  local_128._padding_ = (longlong)&___7voronoicell_voro__6B_;
  voronoicell_base::check_memory_for_copy<voro::voronoicell>
            (&local_128,(voronoicell *)&local_128,(voronoicell_base *)&this->unit_voro);
  voronoicell_base::copy(&local_128,(voronoicell_base *)&this->unit_voro);
  bVar5 = false;
  bVar4 = voronoicell_base::nplane<voro::voronoicell>
                    (&local_128,(voronoicell *)&local_128,0.0,0.0,dVar9,param_3 + param_3 + dVar3,0)
  ;
  bVar6 = false;
  if (bVar4) {
    uVar10 = (uint)__xmm_80000000000000008000000000000000;
    uVar11 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    bVar4 = voronoicell_base::nplane<voro::voronoicell>
                      (&local_128,(voronoicell *)&local_128,0.0,0.0,
                       (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) ^ uVar11,
                                        SUB84(dVar9,0) ^ uVar10),dVar3 - (param_3 + param_3),0);
    if (bVar4) {
      dVar7 = dVar8 * this->byz * dVar9;
      bVar4 = voronoicell_base::nplane<voro::voronoicell>
                        (&local_128,(voronoicell *)&local_128,0.0,dVar8,
                         (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^ uVar11,
                                          SUB84(dVar7,0) ^ uVar10),param_2 + param_2 + dVar3,0);
      bVar6 = bVar5;
      if (bVar4) {
        bVar4 = voronoicell_base::nplane<voro::voronoicell>
                          (&local_128,(voronoicell *)&local_128,0.0,
                           (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^ uVar11,
                                            SUB84(dVar8,0) ^ uVar10),dVar8 * this->byz * dVar9,
                           dVar3 - (param_2 + param_2),0);
        if (bVar4) {
          dVar9 = this->bxy * dVar1 * dVar8;
          bVar4 = voronoicell_base::nplane<voro::voronoicell>
                            (&local_128,(voronoicell *)&local_128,dVar1,
                             (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) ^ uVar11,
                                              SUB84(dVar9,0) ^ uVar10),
                             (this->bxy * this->byz - this->bxz * this->by) * dVar2,
                             param_1 + param_1 + dVar3,0);
          if (bVar4) {
            bVar4 = voronoicell_base::nplane<voro::voronoicell>
                              (&local_128,(voronoicell *)&local_128,
                               (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar11,
                                                SUB84(dVar1,0) ^ uVar10),this->bxy * dVar1 * dVar8,
                               (this->bxz * this->by - this->bxy * this->byz) * dVar2,
                               dVar3 - (param_1 + param_1),0);
            if (bVar4) {
              dVar8 = voronoicell_base::volume(&local_128);
              bVar6 = true;
              *param_4 = dVar8 * dVar2;
            }
          }
        }
      }
    }
  }
  voronoicell_base::~voronoicell_base(&local_128);
  return bVar6;
}

// push @ 1436b76f0

void __thiscall
std::queue<int,std::deque<int,std::allocator<int>_>_>::push
          (queue<int,std::deque<int,std::allocator<int>_>_> *this,int *param_1)

{
  ulong64 *puVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  int *piVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar2 = (this->c)._Mypair._Myval2._Mysize;
  if ((((char)uVar2 + (char)(this->c)._Mypair._Myval2._Myoff & 3U) == 0) &&
     ((this->c)._Mypair._Myval2._Mapsize <= uVar2 + 4 >> 2)) {
    deque<int,std::allocator<int>_>::_Growmap(&this->c,1);
  }
  uVar2 = (this->c)._Mypair._Myval2._Mapsize;
  puVar1 = &(this->c)._Mypair._Myval2._Myoff;
  *puVar1 = *puVar1 & uVar2 * 4 - 1;
  uVar6 = (this->c)._Mypair._Myval2._Mysize + (this->c)._Mypair._Myval2._Myoff;
  uVar5 = uVar6 >> 2;
  uVar3 = uVar2 - 1 & uVar5;
  if ((this->c)._Mypair._Myval2._Map[uVar3] == (int *)0x0) {
    piVar4 = ::operator_new(0x10);
    (this->c)._Mypair._Myval2._Map[uVar3] = piVar4;
  }
  (this->c)._Mypair._Myval2._Map[(this->c)._Mypair._Myval2._Mapsize - 1 & uVar5][(uint)uVar6 & 3] =
       *param_1;
  puVar1 = &(this->c)._Mypair._Myval2._Mysize;
  *puVar1 = *puVar1 + 1;
  return;
}

// unit_voro_intersect @ 1436b77d0

bool __thiscall voro::unitcell::unit_voro_intersect(unitcell *this,int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  bVar1 = unit_voro_test(this,param_1,0,0);
  if (bVar1) {
LAB_1436b7c39:
    bVar1 = true;
  }
  else {
    iVar6 = 1;
    iVar3 = 1;
    if (1 < param_1) {
      do {
        dVar10 = (double)iVar3;
        dVar8 = dVar10 * this->by;
        dVar7 = (double)param_1 * this->bx + dVar10 * this->bxy;
        bVar1 = voronoicell_base::plane_intersects
                          ((voronoicell_base *)&this->unit_voro,dVar7,dVar8,0.0,
                           dVar8 * dVar8 + dVar7 * dVar7);
        if (bVar1) goto LAB_1436b7c39;
        dVar8 = dVar10 * this->by;
        dVar7 = dVar10 * this->bxy - (double)param_1 * this->bx;
        bVar1 = voronoicell_base::plane_intersects
                          ((voronoicell_base *)&this->unit_voro,dVar7,dVar8,0.0,
                           dVar7 * dVar7 + dVar8 * dVar8);
        if (bVar1) goto LAB_1436b7c39;
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_1);
    }
    iVar3 = -param_1;
    if (iVar3 <= param_1) {
      iVar4 = iVar3;
      do {
        dVar8 = (double)param_1 * this->by;
        dVar7 = (double)iVar4 * this->bx + (double)param_1 * this->bxy;
        bVar1 = voronoicell_base::plane_intersects
                          ((voronoicell_base *)&this->unit_voro,dVar7,dVar8,0.0,
                           dVar8 * dVar8 + dVar7 * dVar7);
        if (bVar1) goto LAB_1436b7c39;
        iVar4 = iVar4 + 1;
      } while (iVar4 <= param_1);
    }
    if (1 < param_1) {
      iVar4 = 1 - param_1;
      do {
        if (iVar4 <= param_1) {
          iVar2 = -iVar4;
          dVar7 = (double)iVar6;
          dVar8 = (double)param_1;
          iVar5 = iVar4;
          do {
            dVar12 = (double)iVar5;
            dVar9 = dVar7 * this->bz;
            dVar10 = dVar12 * this->by + dVar7 * this->byz;
            dVar11 = dVar8 * this->bx + dVar12 * this->bxy + dVar7 * this->bxz;
            bVar1 = voronoicell_base::plane_intersects
                              ((voronoicell_base *)&this->unit_voro,dVar11,dVar10,dVar9,
                               dVar10 * dVar10 + dVar11 * dVar11 + dVar9 * dVar9);
            if (bVar1) goto LAB_1436b7c39;
            dVar9 = dVar7 * this->bz;
            dVar11 = (dVar8 * this->bxy - dVar12 * this->bx) + dVar7 * this->bxz;
            dVar10 = dVar7 * this->byz + dVar8 * this->by;
            bVar1 = voronoicell_base::plane_intersects
                              ((voronoicell_base *)&this->unit_voro,dVar11,dVar10,dVar9,
                               dVar11 * dVar11 + dVar10 * dVar10 + dVar9 * dVar9);
            if (bVar1) goto LAB_1436b7c39;
            dVar9 = dVar7 * this->bz;
            dVar10 = (double)iVar2 * this->by + dVar7 * this->byz;
            dVar11 = ((double)iVar2 * this->bxy - dVar8 * this->bx) + dVar7 * this->bxz;
            bVar1 = voronoicell_base::plane_intersects
                              ((voronoicell_base *)&this->unit_voro,dVar11,dVar10,dVar9,
                               dVar10 * dVar10 + dVar11 * dVar11 + dVar9 * dVar9);
            if (bVar1) goto LAB_1436b7c39;
            dVar9 = dVar7 * this->bz;
            dVar11 = dVar12 * this->bx + (double)-param_1 * this->bxy + dVar7 * this->bxz;
            dVar10 = (double)-param_1 * this->by + dVar7 * this->byz;
            bVar1 = voronoicell_base::plane_intersects
                              ((voronoicell_base *)&this->unit_voro,dVar11,dVar10,dVar9,
                               dVar10 * dVar10 + dVar11 * dVar11 + dVar9 * dVar9);
            if (bVar1) goto LAB_1436b7c39;
            iVar5 = iVar5 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar5 <= param_1);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_1);
    }
    for (; iVar3 <= param_1; iVar3 = iVar3 + 1) {
      dVar7 = (double)param_1;
      iVar6 = -param_1;
      do {
        dVar10 = dVar7 * this->bz;
        dVar8 = (double)iVar6 * this->by + dVar7 * this->byz;
        dVar9 = (double)iVar3 * this->bx + (double)iVar6 * this->bxy + dVar7 * this->bxz;
        bVar1 = voronoicell_base::plane_intersects
                          ((voronoicell_base *)&this->unit_voro,dVar9,dVar8,dVar10,
                           dVar8 * dVar8 + dVar9 * dVar9 + dVar10 * dVar10);
        if (bVar1) goto LAB_1436b7c39;
        iVar6 = iVar6 + 1;
      } while (iVar6 <= param_1);
    }
    bVar1 = false;
  }
  return bVar1;
}

// unit_voro_test @ 1436b7c80

bool __thiscall voro::unitcell::unit_voro_test(unitcell *this,int param_1,int param_2,int param_3)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (double)param_3;
  dVar4 = dVar3 * this->bz;
  dVar2 = (double)param_2 * this->by + dVar3 * this->byz;
  dVar3 = (double)param_2 * this->bxy + (double)param_1 * this->bx + dVar3 * this->bxz;
  bVar1 = voronoicell_base::plane_intersects
                    ((voronoicell_base *)&this->unit_voro,dVar3,dVar2,dVar4,
                     dVar2 * dVar2 + dVar3 * dVar3 + dVar4 * dVar4);
  return bVar1;
}

