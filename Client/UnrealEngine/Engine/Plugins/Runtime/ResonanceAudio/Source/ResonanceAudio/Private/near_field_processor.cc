// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 2

// NearFieldProcessor @ 14f076960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

NearFieldProcessor * __thiscall
vraudio::NearFieldProcessor::NearFieldProcessor
          (NearFieldProcessor *this,int param_1,ulong64 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_88 [32];
  BiquadCoefficients local_68;
  BiquadCoefficients local_50;
  BiquadCoefficients local_38;
  ulonglong local_20;
  
  fVar1 = __real_5f000000;
  local_20 = __security_cookie.value ^ (ulonglong)auStack_88;
  this->frames_per_buffer_ = param_2;
  uVar4 = _UNK_15076b188;
  uVar2 = ___xmm_3f80000000000000000000003f800000;
  lVar6 = 0;
  fVar7 = (float)param_1 * ___real_3a2ec377;
  if ((fVar1 <= fVar7) && (fVar7 = fVar7 - fVar1, fVar7 < fVar1)) {
    lVar6 = -0x8000000000000000;
  }
  local_68.b._Elems[1] = 0.0;
  local_68.b._Elems[2] = 0.0;
  this->delay_compensation_ = (longlong)fVar7 + lVar6 + -1;
  uVar5 = _UNK_15076b188;
  uVar3 = ___xmm_3f80000000000000000000003f800000;
  ___xmm_3f80000000000000000000003f800000 = (float)uVar2;
  _UNK_15076b184 = SUB84(uVar2,4);
  local_68.a._Elems[0] = ___xmm_3f80000000000000000000003f800000;
  local_68.a._Elems[1] = _UNK_15076b184;
  _UNK_15076b188 = (float)uVar4;
  _UNK_15076b18c = SUB84(uVar4,4);
  local_68.a._Elems[2] = _UNK_15076b188;
  local_68.b._Elems[0] = _UNK_15076b18c;
  ___xmm_3f80000000000000000000003f800000 = uVar3;
  _UNK_15076b188 = uVar5;
  BiquadFilter::BiquadFilter(&this->lo_pass_filter_,&local_68,param_2);
  local_68.a._Elems[0] = ___xmm_3f80000000000000000000003f800000;
  local_68.a._Elems[1] = _UNK_15076b184;
  local_68.a._Elems[2] = _UNK_15076b188;
  local_68.b._Elems[0] = _UNK_15076b18c;
  local_68.b._Elems[1] = 0.0;
  local_68.b._Elems[2] = 0.0;
  BiquadFilter::BiquadFilter(&this->hi_pass_filter_,&local_68,this->frames_per_buffer_);
  AudioBuffer::AudioBuffer(&this->low_passed_buffer_,1,this->frames_per_buffer_);
  DelayFilter::DelayFilter(&this->delay_filter_,this->delay_compensation_,this->frames_per_buffer_);
  local_50.b._Elems[1] = 0.0;
  local_50.b._Elems[2] = 0.0;
  local_50.a._Elems[0] = ___xmm_3f80000000000000000000003f800000;
  local_50.a._Elems[1] = _UNK_15076b184;
  local_50.a._Elems[2] = _UNK_15076b188;
  local_50.b._Elems[0] = _UNK_15076b18c;
  local_38.b._Elems[1] = 0.0;
  local_38.b._Elems[2] = 0.0;
  local_38.a._Elems[0] = ___xmm_3f80000000000000000000003f800000;
  local_38.a._Elems[1] = _UNK_15076b184;
  local_38.a._Elems[2] = _UNK_15076b188;
  local_38.b._Elems[0] = _UNK_15076b18c;
  ComputeDualBandBiquadCoefficients(param_1,__real_447a0000,&local_50,&local_38);
  BiquadFilter::SetCoefficients(&this->lo_pass_filter_,&local_50);
  BiquadFilter::SetCoefficients(&this->hi_pass_filter_,&local_38);
  return this;
}

// Process @ 14f076ac0

void __thiscall
vraudio::NearFieldProcessor::Process
          (NearFieldProcessor *this,ChannelView *param_1,ChannelView *param_2,bool param_3)

{
  ChannelView *pCVar1;
  
  pCVar1 = (this->low_passed_buffer_).channel_views_._Mypair._Myval2._Myfirst;
  BiquadFilter::Filter(&this->lo_pass_filter_,param_1,pCVar1);
  BiquadFilter::Filter(&this->hi_pass_filter_,param_1,param_2);
  ConstantGain(0,__real_c0000000,pCVar1,param_2,true);
  if (param_3) {
    DelayFilter::InsertData(&this->delay_filter_,param_2);
    DelayFilter::GetDelayedData(&this->delay_filter_,this->delay_compensation_,param_2);
  }
  return;
}

