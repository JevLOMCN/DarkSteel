// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 5

// AssociatedLegendrePolynomialsGenerator @ 14f067030

AssociatedLegendrePolynomialsGenerator * __thiscall
vraudio::AssociatedLegendrePolynomialsGenerator::AssociatedLegendrePolynomialsGenerator
          (AssociatedLegendrePolynomialsGenerator *this,int param_1,bool param_2,bool param_3)

{
  this->max_degree_ = param_1;
  this->condon_shortley_phase_ = param_2;
  this->compute_negative_order_ = param_3;
  return this;
}

// ComputeValue @ 14f067050

float __thiscall
vraudio::AssociatedLegendrePolynomialsGenerator::ComputeValue
          (AssociatedLegendrePolynomialsGenerator *this,int param_1,int param_2,float param_3,
          vector<float,std::allocator<float>_> *param_4)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar6 = (longlong)param_1;
  if (param_1 == 0) {
    if (param_2 == 0) {
      return __real_3f800000;
    }
  }
  else {
    if ((param_1 == 1) && (param_2 == 0)) {
      return param_3;
    }
    if (param_1 == param_2) {
      fVar8 = powf(__real_bf800000,(float)param_1);
      iVar3 = param_1 * 2 + -1;
      fVar7 = __real_3f800000;
      if (iVar3 < 0) {
        fVar7 = 0.0;
      }
      else {
        for (; 0 < iVar3; iVar3 = iVar3 + -2) {
          fVar9 = (float)iVar3;
          fVar7 = fVar7 * fVar9;
        }
      }
      fVar9 = powf(__real_3f800000 - param_3 * param_3,(float)param_1 * __real_3f000000);
      return fVar9 * fVar8 * fVar7;
    }
  }
  bVar1 = this->compute_negative_order_;
  if (param_2 == param_1 + -1) {
    uVar4 = lVar6 * (lVar6 + -1);
    if (bVar1 == false) {
      uVar4 = uVar4 >> 1;
    }
    fVar7 = (float)(param_1 * 2 + -1) * param_3 *
            (param_4->_Mypair)._Myval2._Myfirst[uVar4 + lVar6 + -1];
  }
  else if (param_2 < 0) {
    uVar4 = (lVar6 + 1) * lVar6;
    fVar7 = Factorial(param_2 + param_1);
    fVar8 = powf(__real_bf800000,(float)param_2);
    fVar9 = Factorial(param_1 - param_2);
    if (bVar1 == false) {
      uVar4 = uVar4 >> 1;
    }
    fVar7 = ((fVar7 * fVar8) / fVar9) *
            (param_4->_Mypair)._Myval2._Myfirst[uVar4 + (longlong)-param_2];
  }
  else {
    uVar4 = (lVar6 + -1) * lVar6;
    pfVar2 = (param_4->_Mypair)._Myval2._Myfirst;
    uVar5 = (lVar6 + -1) * (lVar6 + -2);
    if (bVar1 == false) {
      uVar4 = uVar4 >> 1;
    }
    if (bVar1 == false) {
      uVar5 = uVar5 >> 1;
    }
    fVar7 = ((float)(param_1 * 2 + -1) * param_3 * pfVar2[uVar4 + (longlong)param_2] -
            (float)(param_2 + param_1 + -1) * pfVar2[uVar5 + (longlong)param_2]) /
            (float)(param_1 - param_2);
  }
  return fVar7;
}

// Generate @ 14f0672a0

vector<float,std::allocator<float>_> * __thiscall
vraudio::AssociatedLegendrePolynomialsGenerator::Generate
          (AssociatedLegendrePolynomialsGenerator *this,
          vector<float,std::allocator<float>_> *__return_storage_ptr__,float param_1)

{
  bool bVar1;
  float _X;
  double _X_00;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float *pfVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  uint local_res8;
  longlong local_d8;
  ulonglong local_c0;
  ulonglong local_b8;
  
  iVar5 = this->max_degree_ + 1;
  if (this->compute_negative_order_ == false) {
    iVar5 = ((this->max_degree_ + 2) * iVar5) / 2;
  }
  else {
    iVar5 = iVar5 * iVar5;
  }
  pfVar9 = (float *)0x0;
  uVar13 = (ulonglong)iVar5;
  (__return_storage_ptr__->_Mypair)._Myval2._Myfirst = (float *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mylast = (float *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myend = (float *)0x0;
  if (iVar5 != 0) {
    if (0x3fffffffffffffff < uVar13) {
                    /* WARNING: Subroutine does not return */
      std::vector<float,std::allocator<float>_>::_Xlength();
    }
    uVar18 = uVar13 * 4;
    if (uVar18 != 0) {
      if (uVar18 < 0x1000) {
        pfVar9 = ::operator_new(uVar18);
      }
      else {
        if (uVar18 + 0x27 <= uVar18) {
                    /* WARNING: Subroutine does not return */
          std::_Throw_bad_array_new_length();
        }
        pvVar2 = ::operator_new(uVar18 + 0x27);
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        pfVar9 = (float *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
        *(void **)(pfVar9 + -2) = pvVar2;
      }
    }
    (__return_storage_ptr__->_Mypair)._Myval2._Myfirst = pfVar9;
    (__return_storage_ptr__->_Mypair)._Myval2._Myend = pfVar9 + uVar13;
    memset(pfVar9,0,uVar18);
    (__return_storage_ptr__->_Mypair)._Myval2._Mylast = pfVar9 + uVar13;
  }
  pfVar9 = (__return_storage_ptr__->_Mypair)._Myval2._Myfirst;
  fVar19 = ComputeValue(this,0,0,param_1,__return_storage_ptr__);
  *pfVar9 = fVar19;
  if (0 < this->max_degree_) {
    lVar3 = 8;
    if (this->compute_negative_order_ == false) {
      lVar3 = 4;
    }
    *(float *)(lVar3 + (longlong)pfVar9) = param_1;
  }
  fVar19 = __real_3f800000;
  iVar5 = this->max_degree_;
  iVar17 = 2;
  iVar16 = 1;
  iVar14 = 2;
  if (1 < iVar5) {
    lVar3 = 1;
    do {
      fVar20 = fVar19;
      if ((iVar14 != 0) && (fVar20 = param_1, iVar14 != 1)) {
        bVar1 = this->compute_negative_order_;
        uVar13 = (lVar3 + 1) * lVar3;
        fVar20 = (float)(iVar14 * 2 + -1) * param_1;
        if (iVar14 + -1 == 0) {
          if (bVar1 == false) {
            uVar13 = uVar13 >> 1;
          }
          fVar20 = fVar20 * pfVar9[uVar13 + lVar3];
        }
        else {
          uVar18 = ((longlong)iVar14 + -1) * ((longlong)iVar14 + -2);
          if (bVar1 == false) {
            uVar13 = uVar13 >> 1;
          }
          if (bVar1 == false) {
            uVar18 = uVar18 >> 1;
          }
          fVar20 = (fVar20 * pfVar9[uVar13] - (float)(iVar14 + -1) * pfVar9[uVar18]) / (float)iVar14
          ;
        }
      }
      uVar13 = ((longlong)iVar14 + 1) * (longlong)iVar14;
      if (this->compute_negative_order_ == false) {
        uVar13 = uVar13 >> 1;
      }
      iVar14 = iVar14 + 1;
      lVar3 = lVar3 + 1;
      pfVar9[uVar13] = fVar20;
      iVar5 = this->max_degree_;
    } while (iVar14 <= iVar5);
  }
  iVar14 = 1;
  if (0 < iVar5) {
    lVar3 = 1;
    do {
      uVar13 = ((longlong)iVar14 + 1) * (longlong)iVar14;
      fVar20 = ComputeValue(this,iVar14,iVar14,param_1,__return_storage_ptr__);
      if (this->compute_negative_order_ == false) {
        uVar13 = uVar13 >> 1;
      }
      iVar14 = iVar14 + 1;
      lVar10 = uVar13 + lVar3;
      lVar3 = lVar3 + 1;
      pfVar9[lVar10] = fVar20;
      iVar5 = this->max_degree_;
    } while (iVar14 <= iVar5);
  }
  if (1 < iVar5) {
    lVar3 = 2;
    do {
      uVar13 = ((longlong)iVar17 + 1) * (longlong)iVar17;
      fVar20 = ComputeValue(this,iVar17,iVar17 + -1,param_1,__return_storage_ptr__);
      if (this->compute_negative_order_ == false) {
        uVar13 = uVar13 >> 1;
      }
      iVar17 = iVar17 + 1;
      lVar10 = uVar13 + lVar3;
      lVar3 = lVar3 + 1;
      pfVar9[lVar10 + -1] = fVar20;
      iVar5 = this->max_degree_;
    } while (iVar17 <= iVar5);
  }
  _X = __real_bf800000;
  fVar20 = __real_3f000000;
  iVar14 = 3;
  if (2 < iVar5) {
    local_d8 = 3;
    local_res8 = 1;
    do {
      iVar5 = 1;
      lVar3 = 1;
      if (0 < (int)local_res8) {
        uVar18 = ((longlong)iVar14 + 1) * (longlong)iVar14;
        uVar13 = uVar18 >> 1;
        do {
          if (iVar14 == 0) {
            while (iVar5 == 0) {
              iVar5 = 1;
              uVar7 = uVar18;
              if (this->compute_negative_order_ == false) {
                uVar7 = uVar13;
              }
              pfVar9[uVar7 + lVar3] = fVar19;
              lVar3 = lVar3 + 1;
            }
LAB_14f067722:
            bVar1 = this->compute_negative_order_;
            if (iVar5 == iVar14 + -1) {
              uVar7 = (longlong)iVar14 * ((longlong)iVar14 + -1);
              if (bVar1 == false) {
                uVar7 = uVar7 >> 1;
              }
              fVar23 = (float)(iVar14 * 2 + -1) * param_1 * pfVar9[uVar7 + local_d8 + -1];
            }
            else if (iVar5 < 0) {
              fVar24 = Factorial(iVar14 + iVar5);
              fVar21 = powf(_X,(float)iVar5);
              fVar23 = Factorial(iVar14 - iVar5);
              uVar7 = uVar18;
              if (this->compute_negative_order_ == false) {
                uVar7 = uVar13;
              }
              fVar23 = ((fVar24 * fVar21) / fVar23) * pfVar9[uVar7 - lVar3];
            }
            else {
              uVar7 = (longlong)iVar14 * ((longlong)iVar14 + -1);
              uVar8 = ((longlong)iVar14 + -1) * ((longlong)iVar14 + -2);
              if (bVar1 == false) {
                uVar7 = uVar7 >> 1;
              }
              if (bVar1 == false) {
                uVar8 = uVar8 >> 1;
              }
              fVar23 = ((float)(iVar14 * 2 + -1) * param_1 * pfVar9[uVar7 + lVar3] -
                       (float)(iVar14 + iVar5 + -1) * pfVar9[uVar8 + lVar3]) /
                       (float)(iVar14 - iVar5);
            }
          }
          else {
            if (iVar14 == 1) {
              while (iVar5 == 0) {
                iVar5 = 1;
                uVar7 = uVar18;
                if (this->compute_negative_order_ == false) {
                  uVar7 = uVar13;
                }
                pfVar9[uVar7 + lVar3] = param_1;
                lVar3 = lVar3 + 1;
              }
            }
            if (iVar14 != iVar5) goto LAB_14f067722;
            fVar21 = powf(_X,(float)iVar14);
            iVar17 = iVar14 * 2 + -1;
            fVar24 = fVar19;
            if (iVar17 < 0) {
              fVar24 = 0.0;
            }
            else {
              for (; 0 < iVar17; iVar17 = iVar17 + -2) {
                fVar23 = (float)iVar17;
                fVar24 = fVar24 * fVar23;
              }
            }
            fVar23 = powf(fVar19 - param_1 * param_1,(float)iVar14 * fVar20);
            fVar23 = fVar23 * fVar21 * fVar24;
          }
          uVar7 = uVar18;
          if (this->compute_negative_order_ == false) {
            uVar7 = uVar13;
          }
          iVar5 = iVar5 + 1;
          lVar10 = uVar7 + lVar3;
          lVar3 = lVar3 + 1;
          pfVar9[lVar10] = fVar23;
        } while (iVar5 <= (int)local_res8);
      }
      iVar5 = this->max_degree_;
      local_d8 = local_d8 + 1;
      iVar14 = iVar14 + 1;
      local_res8 = local_res8 + 1;
    } while (iVar14 <= iVar5);
  }
  local_b8 = 0xffffffffffffffff;
  if ((this->compute_negative_order_ != false) && (0 < iVar5)) {
    local_d8 = 1;
    uVar12 = 1;
    do {
      uVar6 = uVar12 + 1;
      lVar3 = 1;
      if (0 < (int)uVar12) {
        lVar10 = -1;
        uVar13 = ((longlong)(int)uVar12 + 1) * (longlong)(int)uVar12;
        uVar11 = 0xffffffff;
        local_c0 = (ulonglong)uVar12;
        uVar15 = uVar6;
        do {
          if ((uVar12 != 1) || (fVar24 = param_1, uVar11 != 0)) {
            if (uVar12 == uVar11) {
              fVar21 = powf(_X,(float)(int)uVar12);
              iVar5 = uVar12 * 2 + -1;
              fVar24 = fVar19;
              if (iVar5 < 0) {
                fVar24 = 0.0;
              }
              else {
                for (; 0 < iVar5; iVar5 = iVar5 + -2) {
                  fVar23 = (float)iVar5;
                  fVar24 = fVar24 * fVar23;
                }
              }
              fVar23 = powf(fVar19 - param_1 * param_1,(float)(int)uVar12 * fVar20);
              fVar24 = fVar23 * fVar21 * fVar24;
            }
            else {
              bVar1 = this->compute_negative_order_;
              if (uVar11 == uVar12 - 1) {
                uVar18 = (longlong)(int)uVar12 * ((longlong)(int)uVar12 + -1);
                if (bVar1 == false) {
                  uVar18 = uVar18 >> 1;
                }
                fVar24 = (float)(int)(uVar12 * 2 + -1) * param_1 * pfVar9[uVar18 + local_d8 + -1];
              }
              else if ((int)uVar11 < 0) {
                fVar24 = Factorial(uVar11 + uVar12);
                fVar21 = powf(_X,(float)(int)uVar11);
                fVar23 = Factorial(uVar15);
                uVar18 = uVar13;
                if (bVar1 == false) {
                  uVar18 = uVar13 >> 1;
                }
                fVar24 = ((fVar24 * fVar21) / fVar23) * pfVar9[uVar18 + lVar3];
              }
              else {
                uVar18 = (longlong)(int)uVar12 * ((longlong)(int)uVar12 + -1);
                uVar7 = ((longlong)(int)uVar12 + -1) * ((longlong)(int)uVar12 + -2);
                if (bVar1 == false) {
                  uVar18 = uVar18 >> 1;
                }
                if (bVar1 == false) {
                  uVar7 = uVar7 >> 1;
                }
                fVar24 = ((float)(int)(uVar12 * 2 + -1) * param_1 * pfVar9[uVar18 + lVar10] -
                         (float)(int)(uVar11 + uVar12 + -1) * pfVar9[uVar7 + lVar10]) /
                         (float)(int)uVar15;
              }
            }
          }
          uVar18 = uVar13;
          if (this->compute_negative_order_ == false) {
            uVar18 = uVar13 >> 1;
          }
          uVar11 = uVar11 - 1;
          lVar4 = uVar18 + lVar10;
          uVar15 = uVar15 + 1;
          lVar3 = lVar3 + 1;
          lVar10 = lVar10 + -1;
          local_c0 = local_c0 - 1;
          pfVar9[lVar4] = fVar24;
        } while (local_c0 != 0);
      }
      iVar5 = this->max_degree_;
      local_d8 = local_d8 + 1;
      uVar12 = uVar6;
    } while ((int)uVar6 <= iVar5);
  }
  _X_00 = __real_bff0000000000000;
  if ((this->condon_shortley_phase_ == false) && (0 < iVar5)) {
    local_res8 = 0xffffffff;
    pfVar9 = (__return_storage_ptr__->_Mypair)._Myval2._Myfirst;
    do {
      uVar18 = local_b8;
      uVar13 = (ulonglong)local_res8;
      if (this->compute_negative_order_ == false) {
        uVar18 = 0;
        uVar13 = 0;
      }
      if ((int)uVar13 <= iVar16) {
        uVar7 = ((longlong)iVar16 + 1) * (longlong)iVar16;
        do {
          uVar8 = uVar7;
          if (this->compute_negative_order_ == false) {
            uVar8 = uVar7 >> 1;
          }
          lVar3 = uVar8 + uVar18;
          dVar22 = pow(_X_00,(double)(int)uVar13);
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
          uVar18 = uVar18 + 1;
          pfVar9[lVar3] = (float)dVar22 * pfVar9[lVar3];
        } while ((int)uVar12 <= iVar16);
      }
      iVar16 = iVar16 + 1;
      local_res8 = local_res8 - 1;
      local_b8 = local_b8 - 1;
    } while (iVar16 <= this->max_degree_);
  }
  return __return_storage_ptr__;
}

// GetIndex @ 14f067c80

ulong64 __thiscall
vraudio::AssociatedLegendrePolynomialsGenerator::GetIndex
          (AssociatedLegendrePolynomialsGenerator *this,int param_1,int param_2)

{
  ulonglong uVar1;
  
  uVar1 = ((longlong)param_1 + 1) * (longlong)param_1;
  if (this->compute_negative_order_ == false) {
    uVar1 = uVar1 >> 1;
  }
  return uVar1 + (longlong)param_2;
}

// GetNumValues @ 14f067cb0

ulong64 __thiscall
vraudio::AssociatedLegendrePolynomialsGenerator::GetNumValues
          (AssociatedLegendrePolynomialsGenerator *this)

{
  int iVar1;
  
  iVar1 = this->max_degree_ + 1;
  if (this->compute_negative_order_ != false) {
    return (longlong)(iVar1 * iVar1);
  }
  return (longlong)(((this->max_degree_ + 2) * iVar1) / 2);
}

