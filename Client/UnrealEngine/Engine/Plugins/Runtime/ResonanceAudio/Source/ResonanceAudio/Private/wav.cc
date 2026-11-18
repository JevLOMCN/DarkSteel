// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 5

// Wav @ 14f09b680

Wav * __thiscall
vraudio::Wav::Wav(Wav *this,ulong64 param_1,int param_2,
                 vector<short,std::allocator<short>_> *param_3)

{
  short *_Src;
  short *_Dst;
  ulong64 uVar1;
  size_t _Size;
  
  this->num_channels_ = param_1;
  this->sample_rate_ = param_2;
  (this->interleaved_samples_)._Mypair._Myval2._Myfirst = (short *)0x0;
  (this->interleaved_samples_)._Mypair._Myval2._Mylast = (short *)0x0;
  (this->interleaved_samples_)._Mypair._Myval2._Myend = (short *)0x0;
  uVar1 = (longlong)(param_3->_Mypair)._Myval2._Mylast -
          (longlong)(param_3->_Mypair)._Myval2._Myfirst >> 1;
  if (uVar1 != 0) {
    std::vector<short,std::allocator<short>_>::_Buy_nonzero(&this->interleaved_samples_,uVar1);
    _Src = (param_3->_Mypair)._Myval2._Myfirst;
    _Dst = (this->interleaved_samples_)._Mypair._Myval2._Myfirst;
    _Size = (longlong)(param_3->_Mypair)._Myval2._Mylast - (longlong)_Src;
    memmove(_Dst,_Src,_Size);
    (this->interleaved_samples_)._Mypair._Myval2._Mylast = _Dst + ((longlong)_Size >> 1);
  }
  return this;
}

// ~Wav @ 14f09b710

void __thiscall vraudio::Wav::~Wav(Wav *this)

{
  std::vector<short,std::allocator<short>_>::_Tidy(&this->interleaved_samples_);
  return;
}

// CreateOrNull @ 14f09b720

unique_ptr<vraudio::Wav_const_,std::default_delete<vraudio::Wav_const_>_> __cdecl
vraudio::Wav::CreateOrNull(uchar *param_1,ulong64 param_2)

{
  bool bVar1;
  int iVar2;
  ulong64 uVar3;
  void *pvVar4;
  ulong64 uVar5;
  ulong64 *puVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  ulong64 *_Dst;
  ulonglong uVar9;
  ulong64 in_R8;
  ulong64 *puVar10;
  WavReader local_78;
  
  WavReader::WavReader(&local_78,(uchar *)param_2,in_R8);
  uVar3 = WavReader::GetNumTotalSamples(&local_78);
  bVar1 = WavReader::IsHeaderValid(&local_78);
  if ((!bVar1) || (uVar3 == 0)) {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    return (unique_ptr<vraudio::Wav_const_,std::default_delete<vraudio::Wav_const_>_>)
           (_Compressed_pair<std::default_delete<vraudio::Wav_const_>,vraudio::Wav_const_*,1>)
           param_1;
  }
  if (0x7fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::vector<short,std::allocator<short>_>::_Xlength();
  }
  uVar7 = uVar3 * 2;
  _Dst = (ulong64 *)0x0;
  if (uVar7 != 0) {
    if (uVar7 < 0x1000) {
      _Dst = ::operator_new(uVar7);
    }
    else {
      if (uVar7 + 0x27 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_bad_array_new_length();
      }
      pvVar4 = ::operator_new(uVar7 + 0x27);
      if (pvVar4 == (void *)0x0) goto LAB_14f09b935;
      _Dst = (ulong64 *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
      _Dst[-1] = (ulong64)pvVar4;
    }
  }
  memset(_Dst,0,uVar7);
  uVar5 = WavReader::ReadSamples(&local_78,uVar3,(short *)_Dst);
  uVar8 = (longlong)uVar7 >> 1;
  if (uVar5 == uVar3) {
    puVar6 = ::operator_new(0x28);
    puVar10 = (ulong64 *)0x0;
    if (puVar6 != (ulong64 *)0x0) {
      iVar2 = WavReader::GetSampleRateHz(&local_78);
      uVar3 = WavReader::GetNumChannels(&local_78);
      *puVar6 = uVar3;
      *(int *)(puVar6 + 1) = iVar2;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar10 = puVar6;
      if (uVar8 != 0) {
        std::vector<short,std::allocator<short>_>::_Buy_nonzero
                  ((vector<short,std::allocator<short>_> *)(puVar6 + 2),uVar8);
        pvVar4 = (void *)puVar6[2];
        memmove(pvVar4,_Dst,uVar7);
        puVar6[3] = (ulong64)((longlong)pvVar4 + uVar8 * 2);
      }
    }
    *(ulong64 **)param_1 = puVar10;
    if (_Dst == (ulong64 *)0x0) {
      return (unique_ptr<vraudio::Wav_const_,std::default_delete<vraudio::Wav_const_>_>)
             (_Compressed_pair<std::default_delete<vraudio::Wav_const_>,vraudio::Wav_const_*,1>)
             param_1;
    }
    uVar7 = uVar8 * 2;
    if (uVar7 < 0x1000) goto LAB_14f09b830;
    puVar10 = (ulong64 *)_Dst[-1];
  }
  else {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    if (_Dst == (ulong64 *)0x0) {
      return (unique_ptr<vraudio::Wav_const_,std::default_delete<vraudio::Wav_const_>_>)
             (_Compressed_pair<std::default_delete<vraudio::Wav_const_>,vraudio::Wav_const_*,1>)
             param_1;
    }
    uVar7 = uVar8 * 2;
    if (uVar7 < 0x1000) goto LAB_14f09b830;
    puVar10 = (ulong64 *)_Dst[-1];
  }
  uVar9 = (longlong)_Dst + (-8 - (longlong)puVar10);
  uVar7 = uVar8 * 2 + 0x27;
  _Dst = puVar10;
  if (0x1f < uVar9) {
LAB_14f09b935:
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
LAB_14f09b830:
  ::operator_delete(_Dst,uVar7);
  return (unique_ptr<vraudio::Wav_const_,std::default_delete<vraudio::Wav_const_>_>)
         (_Compressed_pair<std::default_delete<vraudio::Wav_const_>,vraudio::Wav_const_*,1>)param_1;
}

// _Buy_nonzero @ 14f09b980

void __thiscall
std::vector<short,std::allocator<short>_>::_Buy_nonzero
          (vector<short,std::allocator<short>_> *this,ulong64 param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  short *psVar3;
  
  if (0x7fffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar1 = param_1 * 2;
  if (uVar1 == 0) {
    psVar3 = (short *)0x0;
  }
  else if (uVar1 < 0x1000) {
    psVar3 = ::operator_new(uVar1);
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
    psVar3 = (short *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
    *(void **)(psVar3 + -4) = pvVar2;
  }
  (this->_Mypair)._Myval2._Myfirst = psVar3;
  (this->_Mypair)._Myval2._Mylast = psVar3;
  (this->_Mypair)._Myval2._Myend = psVar3 + param_1;
  return;
}

// _Tidy @ 14f09ba20

void __thiscall
std::vector<short,std::allocator<short>_>::_Tidy(vector<short,std::allocator<short>_> *this)

{
  short *psVar1;
  short *psVar2;
  ulonglong uVar3;
  
  psVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (psVar1 != (short *)0x0) {
    uVar3 = ((longlong)(this->_Mypair)._Myval2._Myend - (longlong)psVar1 >> 1) * 2;
    psVar2 = psVar1;
    if (0xfff < uVar3) {
      psVar2 = *(short **)(psVar1 + -4);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)psVar1 + (-8 - (longlong)psVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(psVar2,uVar3);
    (this->_Mypair)._Myval2._Myfirst = (short *)0x0;
    (this->_Mypair)._Myval2._Mylast = (short *)0x0;
    (this->_Mypair)._Myval2._Myend = (short *)0x0;
  }
  return;
}

