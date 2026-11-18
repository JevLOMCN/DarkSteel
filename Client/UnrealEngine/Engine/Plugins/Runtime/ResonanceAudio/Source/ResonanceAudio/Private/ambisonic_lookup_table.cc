// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 9

// vector<float,std::allocator<float>_> @ 14f066330

vector<float,std::allocator<float>_> * __thiscall
std::vector<float,std::allocator<float>_>::vector<float,std::allocator<float>_>
          (vector<float,std::allocator<float>_> *this,ulong64 param_1,allocator<float> *param_2)

{
  ulonglong _Size;
  void *pvVar1;
  float *_Dst;
  
  _Dst = (float *)0x0;
  (this->_Mypair)._Myval2._Myfirst = (float *)0x0;
  (this->_Mypair)._Myval2._Mylast = (float *)0x0;
  (this->_Mypair)._Myval2._Myend = (float *)0x0;
  if (param_1 != 0) {
    if (0x3fffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    _Size = param_1 * 4;
    if (_Size != 0) {
      if (_Size < 0x1000) {
        _Dst = ::operator_new(_Size);
      }
      else {
        if (_Size + 0x27 <= _Size) {
                    /* WARNING: Subroutine does not return */
          _Throw_bad_array_new_length();
        }
        pvVar1 = ::operator_new(_Size + 0x27);
        if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        _Dst = (float *)((longlong)pvVar1 + 0x27U & 0xffffffffffffffe0);
        *(void **)(_Dst + -2) = pvVar1;
      }
    }
    (this->_Mypair)._Myval2._Myfirst = _Dst;
    (this->_Mypair)._Myval2._Myend = _Dst + param_1;
    memset(_Dst,0,_Size);
    (this->_Mypair)._Myval2._Mylast = _Dst + param_1;
  }
  return this;
}

// AmbisonicLookupTable @ 14f066410

AmbisonicLookupTable * __thiscall
vraudio::AmbisonicLookupTable::AmbisonicLookupTable(AmbisonicLookupTable *this,int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  ulong64 uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  float *pfVar13;
  float fVar14;
  allocator<float> local_res10 [8];
  
  this->max_ambisonic_order_ = param_1;
  uVar5 = ((longlong)param_1 + 1) * ((longlong)param_1 + 1) - 1;
  this->max_num_coeffs_in_table_ = uVar5;
  std::vector<float,std::allocator<float>_>::vector<float,std::allocator<float>_>
            (&this->encoder_table_,uVar5 * 0x2059,local_res10);
  std::vector<float,std::allocator<float>_>::vector<float,std::allocator<float>_>
            (&this->symmetries_table_,this->max_num_coeffs_in_table_ * 3,local_res10);
  ComputeEncoderTable(this);
  fVar3 = __real_bf800000;
  fVar2 = __real_3f800000;
  iVar11 = 1;
  if (0 < this->max_ambisonic_order_) {
    uVar9 = 0xffffffff;
    do {
      if ((int)uVar9 <= iVar11) {
        pfVar1 = (this->symmetries_table_)._Mypair._Myval2._Myfirst;
        lVar6 = (longlong)(int)((iVar11 + 1) * iVar11 + uVar9);
        lVar12 = lVar6 + -1;
        pfVar13 = pfVar1 + lVar6 + -1;
        uVar10 = uVar9;
        do {
          fVar14 = fVar2;
          if ((int)uVar10 < 0) {
            fVar14 = fVar3;
          }
          *pfVar13 = fVar14;
          uVar7 = uVar10 + iVar11;
          iVar4 = -1;
          iVar8 = 1;
          while( true ) {
            if ((uVar7 & 1) != 0) {
              iVar8 = iVar8 * iVar4;
            }
            uVar7 = (int)uVar7 >> 1;
            if (uVar7 == 0) break;
            iVar4 = iVar4 * iVar4;
          }
          iVar4 = -1;
          pfVar1[this->max_num_coeffs_in_table_ + lVar12] = (float)iVar8;
          iVar8 = 1;
          uVar7 = uVar10;
          if ((int)uVar10 < 0) {
            uVar7 = -uVar10;
            if ((int)-uVar10 < 0) {
              uVar7 = uVar10;
            }
            while( true ) {
              if ((uVar7 & 1) != 0) {
                iVar8 = iVar8 * iVar4;
              }
              uVar7 = (int)uVar7 >> 1;
              if (uVar7 == 0) break;
              iVar4 = iVar4 * iVar4;
            }
            iVar8 = -iVar8;
          }
          else {
            while( true ) {
              if ((uVar7 & 1) != 0) {
                iVar8 = iVar8 * iVar4;
              }
              uVar7 = (int)uVar7 >> 1;
              if (uVar7 == 0) break;
              iVar4 = iVar4 * iVar4;
            }
          }
          uVar10 = uVar10 + 1;
          pfVar13 = pfVar13 + 1;
          lVar6 = lVar12 + this->max_num_coeffs_in_table_ * 2;
          lVar12 = lVar12 + 1;
          pfVar1[lVar6] = (float)iVar8;
        } while ((int)uVar10 <= iVar11);
      }
      iVar11 = iVar11 + 1;
      uVar9 = uVar9 - 1;
    } while (iVar11 <= this->max_ambisonic_order_);
  }
  return this;
}

// ComputeEncoderTable @ 14f0665a0

void __thiscall vraudio::AmbisonicLookupTable::ComputeEncoderTable(AmbisonicLookupTable *this)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  vector<float,std::allocator<float>_> *pvVar6;
  ulong64 uVar7;
  float *pfVar8;
  ulonglong uVar9;
  int iVar10;
  ulong64 uVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int local_res8;
  float *local_res20;
  SphericalAngle local_118;
  float *local_110;
  AssociatedLegendrePolynomialsGenerator local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  vector<float,std::allocator<float>_> local_e0;
  vector<float,std::allocator<float>_> local_c8 [5];
  
  AssociatedLegendrePolynomialsGenerator::AssociatedLegendrePolynomialsGenerator
            (&local_108,this->max_ambisonic_order_,false,false);
  fVar4 = __real_40000000;
  fVar3 = __real_3c8efa35;
  fVar2 = __real_3f800000;
  pfVar13 = (float *)0x0;
  local_f8 = 0;
  local_110 = (float *)0x0;
  local_res20 = (float *)0x0;
  local_f0 = 0;
  do {
    local_100 = 0;
    uVar16 = local_f0;
    if ((longlong)local_f8 < 0) {
      fVar21 = (float)local_f8 * fVar3;
    }
    else {
      fVar21 = (float)(longlong)local_f8 * fVar3;
    }
    do {
      uVar9 = local_100;
      SphericalAngle::SphericalAngle(&local_118,fVar21,(float)local_100 * fVar3);
      fVar17 = sinf(local_118.elevation_);
      pvVar6 = AssociatedLegendrePolynomialsGenerator::Generate(&local_108,&local_e0,fVar17);
      if (local_c8 != pvVar6) {
        if (pfVar13 != (float *)0x0) {
          uVar11 = (longlong)local_res20 - (longlong)pfVar13 & 0xfffffffffffffffc;
          pfVar8 = pfVar13;
          if (0xfff < uVar11) {
            pfVar8 = *(float **)(pfVar13 + -2);
            uVar11 = uVar11 + 0x27;
            if (0x1f < (ulonglong)((longlong)pfVar13 + (-8 - (longlong)pfVar8))) goto LAB_14f0668fb;
          }
          ::operator_delete(pfVar8,uVar11);
        }
        pfVar13 = (pvVar6->_Mypair)._Myval2._Myfirst;
        local_res20 = (pvVar6->_Mypair)._Myval2._Myend;
        (pvVar6->_Mypair)._Myval2._Myfirst = (float *)0x0;
        (pvVar6->_Mypair)._Myval2._Mylast = (float *)0x0;
        (pvVar6->_Mypair)._Myval2._Myend = (float *)0x0;
        local_110 = pfVar13;
      }
      if (local_e0._Mypair._Myval2._Myfirst != (float *)0x0) {
        uVar11 = (longlong)local_e0._Mypair._Myval2._Myend -
                 (longlong)local_e0._Mypair._Myval2._Myfirst & 0xfffffffffffffffc;
        pfVar8 = local_e0._Mypair._Myval2._Myfirst;
        if (0xfff < uVar11) {
          pfVar8 = *(float **)(local_e0._Mypair._Myval2._Myfirst + -2);
          uVar11 = uVar11 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_e0._Mypair._Myval2._Myfirst + (-8 - (longlong)pfVar8))) {
LAB_14f0668fb:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(pfVar8,uVar11);
      }
      if (0 < this->max_ambisonic_order_) {
        local_res8 = -1;
        iVar10 = 1;
        do {
          pfVar13 = local_110;
          iVar14 = iVar10 + 1;
          if (local_res8 <= iVar10) {
            local_e8 = uVar9 + uVar16;
            iVar12 = local_res8;
            do {
              lVar5 = local_e8;
              iVar15 = -iVar12;
              if (-iVar12 < 0) {
                iVar15 = iVar12;
              }
              uVar7 = AssociatedLegendrePolynomialsGenerator::GetIndex(&local_108,iVar10,iVar15);
              uVar11 = this->max_num_coeffs_in_table_;
              iVar1 = iVar12 + iVar14 * iVar10;
              fVar17 = fVar2;
              if (iVar12 != 0) {
                fVar17 = 0.0;
              }
              fVar18 = Factorial(iVar10 - iVar15);
              fVar19 = Factorial(iVar15 + iVar10);
              if (iVar12 < 0) {
                fVar20 = sinf((float)-iVar12 * local_118.azimuth_);
              }
              else {
                fVar20 = cosf((float)iVar12 * local_118.azimuth_);
              }
              iVar12 = iVar12 + 1;
              (this->encoder_table_)._Mypair._Myval2._Myfirst[lVar5 * uVar11 + (longlong)iVar1 + -1]
                   = fVar20 * pfVar13[uVar7] * SQRT((fVar18 * (fVar4 - fVar17)) / fVar19);
              uVar9 = local_100;
              uVar16 = local_f0;
            } while (iVar12 <= iVar10);
          }
          local_res8 = local_res8 + -1;
          pfVar13 = local_110;
          iVar10 = iVar14;
        } while (iVar14 <= this->max_ambisonic_order_);
      }
      local_100 = uVar9 + 1;
    } while (local_100 < 0x5b);
    local_f0 = uVar16 + 0x5b;
    local_f8 = local_f8 + 1;
    if (0x2058 < local_f0) {
      if (pfVar13 != (float *)0x0) {
        uVar11 = (longlong)local_res20 - (longlong)pfVar13 & 0xfffffffffffffffc;
        pfVar8 = pfVar13;
        if (0xfff < uVar11) {
          pfVar8 = *(float **)(pfVar13 + -2);
          uVar11 = uVar11 + 0x27;
          if (0x1f < (ulonglong)((longlong)pfVar13 + (-8 - (longlong)pfVar8))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(pfVar8,uVar11);
      }
      return;
    }
  } while( true );
}

// ComputeSymmetriesTable @ 14f0669a0

void __thiscall vraudio::AmbisonicLookupTable::ComputeSymmetriesTable(AmbisonicLookupTable *this)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  float *pfVar12;
  float fVar13;
  
  fVar3 = __real_bf800000;
  fVar2 = __real_3f800000;
  iVar10 = 1;
  if (0 < this->max_ambisonic_order_) {
    uVar8 = 0xffffffff;
    do {
      if ((int)uVar8 <= iVar10) {
        pfVar1 = (this->symmetries_table_)._Mypair._Myval2._Myfirst;
        lVar5 = (longlong)(int)((iVar10 + 1) * iVar10 + uVar8);
        lVar11 = lVar5 + -1;
        pfVar12 = pfVar1 + lVar5 + -1;
        uVar9 = uVar8;
        do {
          fVar13 = fVar2;
          if ((int)uVar9 < 0) {
            fVar13 = fVar3;
          }
          *pfVar12 = fVar13;
          uVar6 = uVar9 + iVar10;
          iVar4 = -1;
          iVar7 = 1;
          while( true ) {
            if ((uVar6 & 1) != 0) {
              iVar7 = iVar7 * iVar4;
            }
            uVar6 = (int)uVar6 >> 1;
            if (uVar6 == 0) break;
            iVar4 = iVar4 * iVar4;
          }
          iVar4 = -1;
          pfVar1[this->max_num_coeffs_in_table_ + lVar11] = (float)iVar7;
          iVar7 = 1;
          uVar6 = uVar9;
          if ((int)uVar9 < 0) {
            uVar6 = -uVar9;
            if ((int)-uVar9 < 0) {
              uVar6 = uVar9;
            }
            while( true ) {
              if ((uVar6 & 1) != 0) {
                iVar7 = iVar7 * iVar4;
              }
              uVar6 = (int)uVar6 >> 1;
              if (uVar6 == 0) break;
              iVar4 = iVar4 * iVar4;
            }
            iVar7 = -iVar7;
          }
          else {
            while( true ) {
              if ((uVar6 & 1) != 0) {
                iVar7 = iVar7 * iVar4;
              }
              uVar6 = (int)uVar6 >> 1;
              if (uVar6 == 0) break;
              iVar4 = iVar4 * iVar4;
            }
          }
          uVar9 = uVar9 + 1;
          pfVar12 = pfVar12 + 1;
          lVar5 = lVar11 + this->max_num_coeffs_in_table_ * 2;
          lVar11 = lVar11 + 1;
          pfVar1[lVar5] = (float)iVar7;
        } while ((int)uVar9 <= iVar10);
      }
      iVar10 = iVar10 + 1;
      uVar8 = uVar8 - 1;
    } while (iVar10 <= this->max_ambisonic_order_);
  }
  return;
}

// Factorial @ 14f066ae0

float __cdecl vraudio::Factorial(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (param_1 < 0) {
    return 0.0;
  }
  fVar10 = __real_3f800000;
  if (7 < param_1) {
    iVar7 = param_1 + -2;
    do {
      iVar1 = iVar7 + 1;
      fVar8 = (float)param_1;
      param_1 = param_1 + -8;
      iVar2 = iVar7 + -1;
      iVar3 = iVar7 + -2;
      fVar9 = (float)iVar7;
      iVar4 = iVar7 + -3;
      iVar5 = iVar7 + -4;
      iVar6 = iVar7 + -5;
      iVar7 = iVar7 + -8;
      fVar10 = fVar8 * fVar10 * (float)iVar1 * fVar9 * (float)iVar2 * (float)iVar3 * (float)iVar4 *
               (float)iVar5 * (float)iVar6;
    } while (7 < param_1);
  }
  for (; 0 < param_1; param_1 = param_1 + -1) {
    fVar8 = (float)param_1;
    fVar10 = fVar10 * fVar8;
  }
  return fVar10;
}

// GetEncodingCoeffs @ 14f066ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
vraudio::AmbisonicLookupTable::GetEncodingCoeffs
          (AmbisonicLookupTable *this,int param_1,SphericalAngle *param_2,float param_3,
          vector<float,std::allocator<float>_> *param_4)

{
  float *pfVar1;
  float *pfVar2;
  ulong64 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  SphericalAngle *local_res18 [2];
  SphericalAngle *local_58 [4];
  
  fVar18 = param_2->azimuth_;
  lVar14 = ((longlong)param_1 + 1) * ((longlong)param_1 + 1);
  uVar15 = lVar14 - 1;
  if (__real_40490fdb <= fVar18) {
    uVar9 = -(int)(fVar18 * ___real_c2652ee1) - 0x168;
  }
  else {
    uVar9 = (uint)(fVar18 * __real_42652ee1);
  }
  uVar5 = -uVar9;
  if ((int)-uVar9 < 0) {
    uVar5 = uVar9;
  }
  uVar16 = (ulonglong)(int)uVar5;
  iVar17 = (int)(param_2->elevation_ * __real_42652ee1);
  uVar13 = 0xb4 - uVar16;
  if (uVar5 < 0x5b) {
    uVar13 = uVar16;
  }
  uVar8 = 0;
  if ((0x5a < uVar13) &&
     (local_res18[0] = param_2,
     bVar4 = `vraudio::`anonymous_namespace'::EnsureClampAzimuthIndex'::__l3::<lambda_1>::operator()
                       (local_res18), !bVar4)) {
    uVar13 = uVar8;
  }
  iVar6 = -iVar17;
  if (-iVar17 < 0) {
    iVar6 = iVar17;
  }
  local_res18[0] = (SphericalAngle *)(longlong)iVar6;
  if (((SphericalAngle *)0x5a < local_res18[0]) &&
     (local_58[0] = param_2,
     bVar4 = `vraudio::`anonymous_namespace'::EnsureClampElevationIndex'::__l3::<lambda_1>::
             operator()(local_58), !bVar4)) {
    local_res18[0] = (SphericalAngle *)0x0;
  }
  pfVar12 = (param_4->_Mypair)._Myval2._Myfirst;
  *pfVar12 = 1.0;
  fVar18 = __real_3f800000;
  if (lVar14 != 1) {
    pfVar1 = (this->encoder_table_)._Mypair._Myval2._Myfirst;
    if ((int)uVar9 < 0) {
      pfVar2 = (this->symmetries_table_)._Mypair._Myval2._Myfirst;
      do {
        fVar18 = pfVar2[uVar8];
        uVar3 = this->max_num_coeffs_in_table_;
        if (iVar17 < 0) {
          fVar18 = fVar18 * pfVar2[uVar3 + uVar8];
        }
        if (0x5a < uVar16) {
          fVar18 = fVar18 * pfVar2[uVar8 + uVar3 * 2];
        }
        pfVar12[uVar8 + 1] =
             fVar18 * pfVar1[uVar3 * (uVar13 * 0x5b + (longlong)local_res18[0]) + uVar8];
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar15);
    }
    else {
      if (uVar15 < 4) {
        pfVar12 = (param_4->_Mypair)._Myval2._Myfirst;
      }
      else {
        lVar11 = 0xc;
        lVar10 = uVar13 * 0x5b + (longlong)local_res18[0];
        do {
          uVar3 = this->max_num_coeffs_in_table_;
          fVar19 = fVar18;
          if (iVar17 < 0) {
            fVar19 = (this->symmetries_table_)._Mypair._Myval2._Myfirst[uVar3 + uVar8];
          }
          if (0x5a < uVar16) {
            fVar19 = fVar19 * (this->symmetries_table_)._Mypair._Myval2._Myfirst[uVar8 + uVar3 * 2];
          }
          *(float *)((longlong)pfVar12 + lVar11 + -8) = fVar19 * pfVar1[uVar3 * lVar10 + uVar8];
          uVar3 = this->max_num_coeffs_in_table_;
          fVar19 = fVar18;
          if (iVar17 < 0) {
            fVar19 = (this->symmetries_table_)._Mypair._Myval2._Myfirst[uVar3 + uVar8 + 1];
          }
          if (0x5a < uVar16) {
            fVar19 = fVar19 * (this->symmetries_table_)._Mypair._Myval2._Myfirst
                              [uVar8 + uVar3 * 2 + 1];
          }
          *(float *)((longlong)pfVar12 + lVar11 + -4) = fVar19 * pfVar1[uVar3 * lVar10 + uVar8 + 1];
          uVar3 = this->max_num_coeffs_in_table_;
          fVar19 = fVar18;
          if (iVar17 < 0) {
            fVar19 = (this->symmetries_table_)._Mypair._Myval2._Myfirst[uVar3 + uVar8 + 2];
          }
          if (0x5a < uVar16) {
            fVar19 = fVar19 * (this->symmetries_table_)._Mypair._Myval2._Myfirst
                              [uVar8 + uVar3 * 2 + 2];
          }
          *(float *)(lVar11 + (longlong)pfVar12) = fVar19 * pfVar1[uVar3 * lVar10 + uVar8 + 2];
          uVar3 = this->max_num_coeffs_in_table_;
          fVar19 = fVar18;
          if (iVar17 < 0) {
            fVar19 = (this->symmetries_table_)._Mypair._Myval2._Myfirst[uVar3 + uVar8 + 3];
          }
          if (0x5a < uVar16) {
            fVar19 = fVar19 * (this->symmetries_table_)._Mypair._Myval2._Myfirst
                              [uVar8 + uVar3 * 2 + 3];
          }
          lVar7 = uVar3 * lVar10 + uVar8;
          uVar8 = uVar8 + 4;
          *(float *)((longlong)pfVar12 + lVar11 + 4) = fVar19 * pfVar1[lVar7 + 3];
          lVar11 = lVar11 + 0x10;
        } while (uVar8 < lVar14 - 4U);
        if (uVar15 <= uVar8) goto LAB_14f066ebd;
      }
      do {
        uVar3 = this->max_num_coeffs_in_table_;
        fVar19 = fVar18;
        if (iVar17 < 0) {
          fVar19 = (this->symmetries_table_)._Mypair._Myval2._Myfirst[uVar3 + uVar8];
        }
        if (0x5a < uVar16) {
          fVar19 = fVar19 * (this->symmetries_table_)._Mypair._Myval2._Myfirst[uVar8 + uVar3 * 2];
        }
        pfVar12[uVar8 + 1] =
             fVar19 * pfVar1[uVar3 * (uVar13 * 0x5b + (longlong)local_res18[0]) + uVar8];
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar15);
    }
  }
LAB_14f066ebd:
  if ((float)kMinSpreads[param_1] <= param_3) {
    pfVar12 = (param_4->_Mypair)._Myval2._Myfirst;
    iVar17 = ((int)param_3 - kMinSpreads[param_1]) * (param_1 + 1) + kSpreadCoeffOffsets[param_1];
    uVar15 = 1;
    *pfVar12 = kSpreadCoeffs[iVar17] * *pfVar12;
    if (1 < (ulonglong)((longlong)(param_4->_Mypair)._Myval2._Mylast - (longlong)pfVar12 >> 2)) {
      do {
        pfVar12[uVar15] = kSpreadCoeffs[(int)SQRT((float)uVar15) + iVar17] * pfVar12[uVar15];
        uVar15 = uVar15 + 1;
      } while (uVar15 < (ulonglong)
                        ((longlong)(param_4->_Mypair)._Myval2._Mylast - (longlong)pfVar12 >> 2));
    }
  }
  return;
}

// UnnormalizedSphericalHarmonic @ 14f066fd0

float __thiscall
vraudio::AmbisonicLookupTable::UnnormalizedSphericalHarmonic
          (AmbisonicLookupTable *this,float param_1,int param_2,float param_3)

{
  float fVar1;
  
  if (-1 < param_2) {
    fVar1 = cosf((float)param_2 * param_3);
    return fVar1 * param_1;
  }
  fVar1 = sinf((float)-param_2 * param_3);
  return fVar1 * param_1;
}

// operator() @ 1505a0490

bool __thiscall
`vraudio::`anonymous_namespace'::EnsureClampAzimuthIndex'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_608979740702801837>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_608979740702801837>,
                       &``vraudio::EnsureClampAzimuthIndex'::`3'::<lambda_1>::operator()'::`2'::
                        ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1505a04f0

bool __thiscall
`vraudio::`anonymous_namespace'::EnsureClampElevationIndex'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_608979740702801849>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_608979740702801849>,
                       &``vraudio::EnsureClampElevationIndex'::`3'::<lambda_1>::operator()'::`2'::
                        ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

