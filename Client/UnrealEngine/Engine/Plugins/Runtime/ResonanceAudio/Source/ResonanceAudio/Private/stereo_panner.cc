// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 2

// _Resize_reallocate<std::_Value_init_tag> @ 14f07ca70

void __thiscall
std::vector<float,std::allocator<float>_>::_Resize_reallocate<std::_Value_init_tag>
          (vector<float,std::allocator<float>_> *this,ulong64 param_1,_Value_init_tag *param_2)

{
  float *pfVar1;
  void *pvVar2;
  ulonglong uVar3;
  float *pfVar4;
  ulong64 uVar5;
  float *_Dst;
  ulonglong uVar6;
  longlong lVar7;
  
  if (0x3fffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)(this->_Mypair)._Myval2._Myfirst >> 2
  ;
  lVar7 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)(this->_Mypair)._Myval2._Myfirst >>
          2;
  if ((0x3fffffffffffffff - (uVar3 >> 1) < uVar3) ||
     ((uVar3 = (uVar3 >> 1) + uVar3, uVar6 = param_1, param_1 <= uVar3 &&
      (uVar6 = uVar3, 0x3fffffffffffffff < uVar3)))) {
LAB_14f07cbdf:
                    /* WARNING: Subroutine does not return */
    _Throw_bad_array_new_length();
  }
  uVar3 = uVar6 * 4;
  if (uVar3 == 0) {
    _Dst = (float *)0x0;
  }
  else if (uVar3 < 0x1000) {
    _Dst = ::operator_new(uVar3);
  }
  else {
    if (uVar3 + 0x27 <= uVar3) goto LAB_14f07cbdf;
    pvVar2 = ::operator_new(uVar3 + 0x27);
    if (pvVar2 == (void *)0x0) goto LAB_14f07cbbf;
    _Dst = (float *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
    *(void **)(_Dst + -2) = pvVar2;
  }
  memset(_Dst + lVar7,0,(param_1 - lVar7) * 4);
  pfVar1 = (this->_Mypair)._Myval2._Myfirst;
  memmove(_Dst,pfVar1,(longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pfVar1);
  pfVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pfVar1 != (float *)0x0) {
    uVar5 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pfVar1 & 0xfffffffffffffffc;
    pfVar4 = pfVar1;
    if (0xfff < uVar5) {
      pfVar4 = *(float **)(pfVar1 + -2);
      uVar5 = uVar5 + 0x27;
      if (0x1f < (ulonglong)((longlong)pfVar1 + (-8 - (longlong)pfVar4))) {
LAB_14f07cbbf:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pfVar4,uVar5);
  }
  (this->_Mypair)._Myval2._Myfirst = _Dst;
  (this->_Mypair)._Myval2._Mylast = _Dst + param_1;
  (this->_Mypair)._Myval2._Myend = _Dst + uVar6;
  return;
}

// CalculateStereoPanGains @ 14f07cbf0

void __cdecl
vraudio::CalculateStereoPanGains
          (SphericalAngle *param_1,vector<float,std::allocator<float>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  _Value_init_tag local_res8 [8];
  
  pfVar2 = (param_2->_Mypair)._Myval2._Mylast;
  pfVar1 = (param_2->_Mypair)._Myval2._Myfirst;
  uVar3 = (longlong)pfVar2 - (longlong)pfVar1 >> 2;
  if (uVar3 < 3) {
    if (1 < uVar3) goto LAB_14f07cc79;
    if ((ulonglong)((longlong)(param_2->_Mypair)._Myval2._Myend - (longlong)pfVar1 >> 2) < 2) {
      std::vector<float,std::allocator<float>_>::_Resize_reallocate<std::_Value_init_tag>
                (param_2,2,local_res8);
      goto LAB_14f07cc79;
    }
    memset(pfVar2,0,(2 - uVar3) * 4);
    pfVar2 = pfVar2 + (2 - uVar3);
  }
  else {
    pfVar2 = pfVar1 + 2;
  }
  (param_2->_Mypair)._Myval2._Mylast = pfVar2;
LAB_14f07cc79:
  fVar4 = cosf(param_1->elevation_);
  pfVar2 = (param_2->_Mypair)._Myval2._Myfirst;
  fVar5 = cosf(__real_3fc90fdb - param_1->azimuth_);
  *pfVar2 = (fVar5 * fVar4 + __real_3f800000) * __real_3f000000;
  fVar5 = cosf(__real_bfc90fdb - param_1->azimuth_);
  pfVar2[1] = (fVar5 * fVar4 + __real_3f800000) * __real_3f000000;
  return;
}

