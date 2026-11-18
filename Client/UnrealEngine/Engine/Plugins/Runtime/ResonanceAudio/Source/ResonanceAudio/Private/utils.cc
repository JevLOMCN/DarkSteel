// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 9

// vector<float,std::allocator<float>_> @ 14f07cd10

vector<float,std::allocator<float>_> * __thiscall
std::vector<float,std::allocator<float>_>::vector<float,std::allocator<float>_>
          (vector<float,std::allocator<float>_> *this,initializer_list<float> *param_1,
          allocator<float> *param_2)

{
  ulonglong uVar1;
  float *_Src;
  void *pvVar2;
  float *_Dst;
  size_t _Size;
  ulonglong uVar3;
  
  _Src = param_1->_First;
  _Dst = (float *)0x0;
  _Size = (longlong)param_1->_Last - (longlong)_Src;
  (this->_Mypair)._Myval2._Myfirst = (float *)0x0;
  (this->_Mypair)._Myval2._Mylast = (float *)0x0;
  uVar3 = (longlong)_Size >> 2;
  (this->_Mypair)._Myval2._Myend = (float *)0x0;
  if (uVar3 != 0) {
    if (0x3fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    uVar1 = uVar3 * 4;
    if (uVar1 != 0) {
      if (uVar1 < 0x1000) {
        _Dst = ::operator_new(uVar1);
      }
      else {
        if (uVar1 + 0x27 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          _Throw_bad_array_new_length();
        }
        pvVar2 = ::operator_new(uVar1 + 0x27);
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        _Dst = (float *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
        *(void **)(_Dst + -2) = pvVar2;
      }
    }
    (this->_Mypair)._Myval2._Myfirst = _Dst;
    (this->_Mypair)._Myval2._Mylast = _Dst;
    (this->_Mypair)._Myval2._Myend = _Dst + uVar3;
    memmove(_Dst,_Src,_Size);
    (this->_Mypair)._Myval2._Mylast = _Dst + uVar3;
  }
  return this;
}

// CeilToMultipleOfFramesPerBuffer @ 14f07ce20

ulong64 __cdecl vraudio::CeilToMultipleOfFramesPerBuffer(ulong64 param_1,ulong64 param_2)

{
  if (param_1 % param_2 == 0) {
    if (param_1 < param_2) {
      param_1 = param_2;
    }
    return param_1;
  }
  return param_2 + (param_1 - param_1 % param_2);
}

// GenerateBandLimitedGaussianNoise @ 14f07ce50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
vraudio::GenerateBandLimitedGaussianNoise
          (float param_1,int param_2,uint param_3,AudioBuffer *param_4)

{
  ulong64 uVar1;
  ChannelView *pCVar2;
  ulonglong uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float *pfVar8;
  ChannelView *pCVar9;
  ulonglong uVar10;
  float fVar11;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  undefined1 auStack_128 [32];
  BiquadCoefficients local_108;
  BiquadFilter local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_128;
  uVar1 = param_4->num_frames_;
  ComputeBandPassBiquadCoefficients(&local_108,param_2,param_1,1);
  BiquadFilter::BiquadFilter(&local_e8,&local_108,uVar1);
  fVar6 = __real_2f800000;
  fVar5 = __real_c0000000;
  pCVar2 = (param_4->channel_views_)._Mypair._Myval2._Mylast;
  for (pCVar9 = (param_4->channel_views_)._Mypair._Myval2._Myfirst; pCVar9 != pCVar2;
      pCVar9 = pCVar9 + 1) {
    pfVar8 = pCVar9->begin_itr_;
    pfVar4 = pfVar8 + pCVar9->size_;
    uVar7 = param_3;
    for (; pfVar8 != pfVar4; pfVar8 = pfVar8 + 1) {
      uVar7 = uVar7 * 0x19660d + 0x3c6ef35f;
      *pfVar8 = (float)uVar7 * fVar6;
    }
    uVar3 = pCVar9->size_;
    uVar10 = 0;
    if (uVar3 != 1) {
      do {
        pfVar4 = pCVar9->begin_itr_;
        fVar11 = logf(pfVar4[uVar10]);
        __libm_sse2_sincosf_();
        pfVar4[uVar10] = extraout_XMM0_Db * SQRT(fVar11 * fVar5);
        pCVar9->begin_itr_[uVar10 + 1] = extraout_XMM0_Da * SQRT(fVar11 * fVar5);
        uVar10 = uVar10 + 2;
      } while (uVar10 < uVar3 - 1);
    }
    if ((uVar3 & 1) != 0) {
      pCVar9->begin_itr_[uVar3 - 1] = *pCVar9->begin_itr_;
    }
    BiquadFilter::Filter(&local_e8,pCVar9,pCVar9);
    BiquadFilter::Clear(&local_e8);
  }
  return;
}

// GenerateDecorrelationFilters @ 14f07d060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> __cdecl
vraudio::GenerateDecorrelationFilters(int param_1)

{
  float *pfVar1;
  ChannelView *pCVar2;
  uint uVar3;
  uint uVar4;
  AudioBuffer *this;
  AudioBuffer *pAVar5;
  undefined4 in_register_0000000c;
  _Compressed_pair<std::default_delete<vraudio::AudioBuffer>,vraudio::AudioBuffer_*,1> _Var6;
  int in_EDX;
  ulong64 uVar7;
  ChannelView *pCVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStackY_118 [32];
  allocator<float> local_e8 [16];
  initializer_list<float> local_d8;
  vector<float,std::allocator<float>_> local_c8;
  vector<float,std::allocator<float>_> local_b0;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  ulonglong local_80;
  
  _Var6._Myval2._4_4_ = in_register_0000000c;
  _Var6._Myval2._0_4_ = param_1;
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_118;
  fVar15 = (float)roundf((float)in_EDX * ___real_3b23d70a);
  lVar14 = 2;
  uVar4 = 2;
  uVar3 = 2;
  fVar16 = __real_3f970a3d;
  fVar17 = __real_3f800000;
  while( true ) {
    if ((uVar3 & 1) != 0) {
      fVar17 = fVar17 * fVar16;
    }
    uVar3 = (int)uVar3 >> 1;
    if (uVar3 == 0) break;
    fVar16 = fVar16 * fVar16;
  }
  uVar3 = 3;
  fVar19 = __real_3f800000 - fVar17 * __real_3e800000;
  fVar16 = __real_3f970a3d;
  fVar17 = __real_3f800000;
  while( true ) {
    if ((uVar3 & 1) != 0) {
      fVar17 = fVar17 * fVar16;
    }
    uVar3 = (int)uVar3 >> 1;
    if (uVar3 == 0) break;
    fVar16 = fVar16 * fVar16;
  }
  fVar18 = __real_3f170a3d - fVar17 * __real_3d800000;
  fVar16 = __real_3f800000;
  fVar17 = __real_3f970a3d;
  while( true ) {
    if ((uVar4 & 1) != 0) {
      fVar16 = fVar16 * fVar17;
    }
    uVar4 = (int)uVar4 >> 1;
    if (uVar4 == 0) break;
    fVar17 = fVar17 * fVar17;
  }
  fVar16 = fVar16 * __real_3e000000;
  local_d8._First = &local_98;
  local_d8._Last = &local_84;
  uVar3 = (uint)fVar18 ^ __xmm_80000000800000008000000080000000;
  local_98 = fVar16;
  local_94 = fVar18;
  local_90 = fVar19;
  local_8c = (float)uVar3;
  local_88 = fVar16;
  std::vector<float,std::allocator<float>_>::vector<float,std::allocator<float>_>
            (&local_c8,&local_d8,local_e8);
  local_d8._First = &local_98;
  local_d8._Last = &local_84;
  local_98 = fVar16;
  local_94 = (float)uVar3;
  local_90 = fVar19;
  local_8c = fVar18;
  local_88 = fVar16;
  std::vector<float,std::allocator<float>_>::vector<float,std::allocator<float>_>
            (&local_b0,&local_d8,local_e8);
  this = ::operator_new(0x48);
  lVar13 = (longlong)(int)fVar15;
  pAVar5 = (AudioBuffer *)0x0;
  if (this != (AudioBuffer *)0x0) {
    pAVar5 = AudioBuffer::AudioBuffer
                       (this,2,((longlong)local_c8._Mypair._Myval2._Mylast -
                                (longlong)local_c8._Mypair._Myval2._Myfirst >> 2) * lVar13);
  }
  (_Var6._Myval2)->num_frames_ = (ulong64)pAVar5;
  pCVar2 = (pAVar5->channel_views_)._Mypair._Myval2._Mylast;
  for (pCVar8 = (pAVar5->channel_views_)._Mypair._Myval2._Myfirst; pCVar8 != pCVar2;
      pCVar8 = pCVar8 + 1) {
    pCVar8->enabled_ = true;
    memset(pCVar8->begin_itr_,0,pCVar8->size_ << 2);
  }
  uVar9 = (longlong)local_c8._Mypair._Myval2._Mylast - (longlong)local_c8._Mypair._Myval2._Myfirst
          >> 2;
  uVar11 = 0;
  if (uVar9 < 4) {
    if (uVar9 != 0) goto LAB_14f07d337;
  }
  else {
    pfVar12 = local_b0._Mypair._Myval2._Myfirst + 1;
    do {
      pfVar1 = pfVar12 + 4;
      lVar10 = lVar13 * uVar11;
      uVar11 = uVar11 + 4;
      *(undefined4 *)(**(longlong **)((_Var6._Myval2)->num_frames_ + 0x28) + lVar10 * 4) =
           *(undefined4 *)
            ((longlong)local_c8._Mypair._Myval2._Myfirst +
             (-0x14 - (longlong)local_b0._Mypair._Myval2._Myfirst) + (longlong)pfVar1);
      *(float *)(*(longlong *)(*(longlong *)((_Var6._Myval2)->num_frames_ + 0x28) + 0x18) +
                lVar10 * 4) = pfVar12[-1];
      lVar10 = (lVar14 + -1) * lVar13;
      *(undefined4 *)(**(longlong **)((_Var6._Myval2)->num_frames_ + 0x28) + lVar10 * 4) =
           *(undefined4 *)
            ((longlong)local_c8._Mypair._Myval2._Myfirst +
             (-0x10 - (longlong)local_b0._Mypair._Myval2._Myfirst) + (longlong)pfVar1);
      *(float *)(*(longlong *)(*(longlong *)((_Var6._Myval2)->num_frames_ + 0x28) + 0x18) +
                lVar10 * 4) = *pfVar12;
      *(undefined4 *)(**(longlong **)((_Var6._Myval2)->num_frames_ + 0x28) + lVar13 * lVar14 * 4) =
           *(undefined4 *)
            ((longlong)local_c8._Mypair._Myval2._Myfirst +
             (-0xc - (longlong)local_b0._Mypair._Myval2._Myfirst) + (longlong)pfVar1);
      *(float *)(*(longlong *)(*(longlong *)((_Var6._Myval2)->num_frames_ + 0x28) + 0x18) +
                lVar13 * lVar14 * 4) = pfVar12[1];
      lVar10 = lVar14 + 1;
      lVar14 = lVar14 + 4;
      lVar10 = lVar10 * lVar13;
      *(undefined4 *)(**(longlong **)((_Var6._Myval2)->num_frames_ + 0x28) + lVar10 * 4) =
           *(undefined4 *)
            ((longlong)local_c8._Mypair._Myval2._Myfirst +
             (-8 - (longlong)local_b0._Mypair._Myval2._Myfirst) + (longlong)pfVar1);
      *(float *)(*(longlong *)(*(longlong *)((_Var6._Myval2)->num_frames_ + 0x28) + 0x18) +
                lVar10 * 4) = pfVar12[2];
      pfVar12 = pfVar1;
    } while (uVar11 < uVar9 - 3);
    if (uVar11 < uVar9) {
LAB_14f07d337:
      pfVar12 = local_b0._Mypair._Myval2._Myfirst + uVar11;
      do {
        lVar14 = lVar13 * uVar11;
        uVar11 = uVar11 + 1;
        *(undefined4 *)(**(longlong **)((_Var6._Myval2)->num_frames_ + 0x28) + lVar14 * 4) =
             *(undefined4 *)
              ((longlong)pfVar12 +
              ((longlong)local_c8._Mypair._Myval2._Myfirst -
              (longlong)local_b0._Mypair._Myval2._Myfirst));
        *(float *)(*(longlong *)(*(longlong *)((_Var6._Myval2)->num_frames_ + 0x28) + 0x18) +
                  lVar14 * 4) = *pfVar12;
        pfVar12 = pfVar12 + 1;
      } while (uVar11 < uVar9);
    }
  }
  if (local_b0._Mypair._Myval2._Myfirst != (float *)0x0) {
    uVar7 = (longlong)local_b0._Mypair._Myval2._Myend - (longlong)local_b0._Mypair._Myval2._Myfirst
            & 0xfffffffffffffffc;
    pfVar12 = local_b0._Mypair._Myval2._Myfirst;
    if (0xfff < uVar7) {
      pfVar12 = *(float **)(local_b0._Mypair._Myval2._Myfirst + -2);
      uVar7 = uVar7 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_b0._Mypair._Myval2._Myfirst + (-8 - (longlong)pfVar12))
         ) goto LAB_14f07d3e4;
    }
    ::operator_delete(pfVar12,uVar7);
  }
  if (local_c8._Mypair._Myval2._Myfirst != (float *)0x0) {
    uVar7 = (longlong)local_c8._Mypair._Myval2._Myend - (longlong)local_c8._Mypair._Myval2._Myfirst
            & 0xfffffffffffffffc;
    pfVar12 = local_c8._Mypair._Myval2._Myfirst;
    if (0xfff < uVar7) {
      pfVar12 = *(float **)(local_c8._Mypair._Myval2._Myfirst + -2);
      uVar7 = uVar7 + 0x27;
      if (0x1f < (ulonglong)((longlong)local_c8._Mypair._Myval2._Myfirst + (-8 - (longlong)pfVar12))
         ) {
LAB_14f07d3e4:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pfVar12,uVar7);
  }
  return (unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_>)
         (_Compressed_pair<std::default_delete<vraudio::AudioBuffer>,vraudio::AudioBuffer_*,1>)
         _Var6._Myval2;
}

// GenerateGaussianNoise @ 14f07d450

void __cdecl
vraudio::GenerateGaussianNoise(float param_1,float param_2,uint param_3,ChannelView *param_4)

{
  ulonglong uVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  ulonglong uVar5;
  float fVar6;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  
  fVar6 = __real_2f800000;
  pfVar4 = param_4->begin_itr_;
  pfVar2 = pfVar4 + param_4->size_;
  fVar3 = __real_c0000000;
  for (; __real_c0000000 = fVar3, pfVar4 != pfVar2; pfVar4 = pfVar4 + 1) {
    param_3 = param_3 * 0x19660d + 0x3c6ef35f;
    *pfVar4 = (float)param_3 * fVar6;
    fVar3 = __real_c0000000;
  }
  uVar1 = param_4->size_;
  uVar5 = 0;
  if (uVar1 != 1) {
    do {
      pfVar2 = param_4->begin_itr_;
      fVar6 = logf(pfVar2[uVar5]);
      __libm_sse2_sincosf_();
      pfVar2[uVar5] = extraout_XMM0_Db * SQRT(fVar6 * fVar3) * param_2 + param_1;
      param_4->begin_itr_[uVar5 + 1] = extraout_XMM0_Da * SQRT(fVar6 * fVar3) * param_2 + param_1;
      uVar5 = uVar5 + 2;
    } while (uVar5 < uVar1 - 1);
  }
  if ((uVar1 & 1) != 0) {
    param_4->begin_itr_[uVar1 - 1] = *param_4->begin_itr_;
  }
  return;
}

// GenerateHannWindow @ 14f07d5c0

void __cdecl vraudio::GenerateHannWindow(bool param_1,ulong64 param_2,ChannelView *param_3)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = __real_3f000000;
  fVar1 = __real_3f800000;
  fVar4 = (float)param_2;
  if (!param_1) {
    fVar4 = fVar4 + fVar4;
  }
  uVar3 = 0;
  fVar4 = (__real_3f800000 / (fVar4 - __real_3f800000)) * __real_40c90fdb;
  if (param_2 != 0) {
    do {
      fVar5 = cosf((float)uVar3 * fVar4);
      param_3->begin_itr_[uVar3] = (fVar1 - fVar5) * fVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  return;
}

// GenerateUniformNoise @ 14f07d6c0

void __cdecl
vraudio::GenerateUniformNoise(float param_1,float param_2,uint param_3,ChannelView *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = param_4->begin_itr_;
  pfVar1 = pfVar2 + param_4->size_;
  fVar3 = (param_2 - param_1) * __real_2f800000;
  for (; pfVar2 != pfVar1; pfVar2 = pfVar2 + 1) {
    param_3 = param_3 * 0x19660d + 0x3c6ef35f;
    *pfVar2 = (float)param_3 * fVar3 + param_1;
  }
  return;
}

// GetNumReverbOctaveBands @ 14f07d720

ulong64 __cdecl vraudio::GetNumReverbOctaveBands(int param_1)

{
  longlong lVar1;
  ulong64 uVar2;
  float fVar3;
  
  log2f((float)param_1 * __real_3c83126f);
  fVar3 = (float)roundf();
  lVar1 = 0;
  if ((__real_5f000000 <= fVar3) && (fVar3 = fVar3 - __real_5f000000, fVar3 < __real_5f000000)) {
    lVar1 = -0x8000000000000000;
  }
  uVar2 = 9;
  if ((ulonglong)((longlong)fVar3 + lVar1) < 9) {
    uVar2 = (longlong)fVar3 + lVar1;
  }
  return uVar2;
}

// GetNumSamplesFromMilliseconds @ 14f07d790

ulong64 __cdecl vraudio::GetNumSamplesFromMilliseconds(float param_1,int param_2)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = 0;
  fVar2 = param_1 * __real_3a83126f * (float)param_2;
  if ((__real_5f000000 <= fVar2) && (fVar2 = fVar2 - __real_5f000000, fVar2 < __real_5f000000)) {
    lVar1 = -0x8000000000000000;
  }
  return (longlong)fVar2 + lVar1;
}

