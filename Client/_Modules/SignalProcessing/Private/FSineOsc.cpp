// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 9

// FSineOsc @ 1444f2350

FSineOsc * __thiscall
Audio::FSineOsc::FSineOsc(FSineOsc *this,int param_1,float param_2,float param_3,float param_4)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  FSineOsc *pFVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float _X;
  float fVar8;
  
  this->Scale = param_3;
  this->Add = param_4;
  this->_padding_ = (longlong)&___7FSineOsc_Audio__6B_;
  this->SampleRate = 0;
  this->FrequencyHz = 440.0;
  this->B1 = 0.0;
  this->B2 = 0.0;
  this->Yn_1 = 0.0;
  this->Yn_2 = 0.0;
  if ((param_1 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSampleRate > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SinOsc.cpp"
                         ,0x26,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FSineOsc *)(*pcVar1)();
    return pFVar4;
  }
  if ((param_2 <= 0.0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFrequencyHz > 0.0f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SinOsc.cpp"
                         ,0x27,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FSineOsc *)(*pcVar1)();
    return pFVar4;
  }
  this->SampleRate = param_1;
  this->Scale = 1.0;
  this->Add = 0.0;
  this->FrequencyHz = -1.0;
  if ((param_1 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SampleRate > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SinOsc.cpp"
                         ,0x3e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FSineOsc *)(*pcVar1)();
    return pFVar4;
  }
  if (param_2 != this->FrequencyHz) {
    this->FrequencyHz = param_2;
    _X = (param_2 * __real_40c90fdb) / (float)this->SampleRate;
    fVar5 = cosf(_X);
    fVar7 = __real_bf800000;
    fVar8 = this->Yn_1;
    if (__real_3f800000 <= this->Yn_1) {
      fVar8 = __real_3f800000;
    }
    fVar5 = fVar5 * __real_c0000000;
    this->B2 = 1.0;
    if (fVar8 <= fVar7) {
      fVar8 = fVar7;
    }
    this->B1 = fVar5;
    this->Yn_1 = fVar8;
    fVar5 = fVar7;
    if ((fVar7 <= fVar8) && (fVar5 = fVar8, __real_3f800000 <= fVar8)) {
      fVar5 = __real_3f800000;
    }
    fVar6 = asinf(fVar5);
    fVar5 = _X;
    if (_X <= __real_322bcc77) {
      fVar5 = __real_322bcc77;
    }
    fVar2 = __real_3f800000;
    if (this->Yn_2 <= fVar8 && fVar8 != this->Yn_2) {
      fVar2 = fVar7;
    }
    fVar7 = sinf((fVar6 / fVar5 + fVar2) * _X);
    this->Yn_2 = fVar7;
  }
  return this;
}

// FSineOsc @ 1444f2520

FSineOsc * __thiscall Audio::FSineOsc::FSineOsc(FSineOsc *this)

{
  this->FrequencyHz = 440.0;
  this->B1 = 0.0;
  this->_padding_ = (longlong)&___7FSineOsc_Audio__6B_;
  this->SampleRate = 0;
  this->B2 = 0.0;
  this->Yn_1 = 0.0;
  this->Yn_2 = 0.0;
  this->Scale = 1.0;
  this->Add = 0.0;
  return this;
}

// ~FSineOsc @ 1444f4630

void __thiscall Audio::FSineOsc::~FSineOsc(FSineOsc *this)

{
  this->_padding_ = (longlong)&___7FSineOsc_Audio__6B_;
  return;
}

// GetFrequency @ 144503a80

float __thiscall Audio::FSineOsc::GetFrequency(FSineOsc *this)

{
  return this->FrequencyHz;
}

// Init @ 144507ac0

void __thiscall
Audio::FSineOsc::Init(FSineOsc *this,int param_1,float param_2,float param_3,float param_4)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float _X;
  float fVar7;
  
  if ((param_1 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSampleRate > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SinOsc.cpp"
                         ,0x26,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_2 <= 0.0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFrequencyHz > 0.0f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SinOsc.cpp"
                         ,0x27,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->SampleRate = param_1;
  this->Add = param_4;
  this->Scale = param_3;
  this->FrequencyHz = -1.0;
  if ((param_1 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SampleRate > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SinOsc.cpp"
                         ,0x3e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_2 != this->FrequencyHz) {
    this->FrequencyHz = param_2;
    _X = (param_2 * __real_40c90fdb) / (float)this->SampleRate;
    fVar4 = cosf(_X);
    fVar6 = __real_bf800000;
    fVar7 = this->Yn_1;
    if (__real_3f800000 <= this->Yn_1) {
      fVar7 = __real_3f800000;
    }
    fVar4 = fVar4 * __real_c0000000;
    this->B2 = 1.0;
    if (fVar7 <= fVar6) {
      fVar7 = fVar6;
    }
    this->B1 = fVar4;
    this->Yn_1 = fVar7;
    fVar4 = fVar6;
    if ((fVar6 <= fVar7) && (fVar4 = fVar7, __real_3f800000 <= fVar7)) {
      fVar4 = __real_3f800000;
    }
    fVar5 = asinf(fVar4);
    fVar4 = _X;
    if (_X <= __real_322bcc77) {
      fVar4 = __real_322bcc77;
    }
    fVar2 = __real_3f800000;
    if (this->Yn_2 <= fVar7 && fVar7 != this->Yn_2) {
      fVar2 = fVar6;
    }
    fVar6 = sinf((fVar5 / fVar4 + fVar2) * _X);
    this->Yn_2 = fVar6;
  }
  return;
}

// ProcessAudio @ 14450ebc0

float __thiscall Audio::FSineOsc::ProcessAudio(FSineOsc *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = this->Yn_2;
  fVar2 = (float)((uint)(this->Yn_1 * this->B1) ^ __xmm_80000000800000008000000080000000);
  this->Yn_2 = this->Yn_1;
  fVar2 = fVar2 - this->B2 * fVar1;
  this->Yn_1 = fVar2;
  return fVar2 * this->Scale + this->Add;
}

// SetAdd @ 144518c60

void __thiscall Audio::FSineOsc::SetAdd(FSineOsc *this,float param_1)

{
  this->Add = param_1;
  return;
}

// SetFrequency @ 14451a220

void __thiscall Audio::FSineOsc::SetFrequency(FSineOsc *this,float param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float _X;
  float fVar7;
  
  if ((this->SampleRate < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SampleRate > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SinOsc.cpp"
                         ,0x3e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 != this->FrequencyHz) {
    this->FrequencyHz = param_1;
    _X = (param_1 * __real_40c90fdb) / (float)this->SampleRate;
    fVar4 = cosf(_X);
    fVar6 = __real_bf800000;
    fVar7 = this->Yn_1;
    if (__real_3f800000 <= this->Yn_1) {
      fVar7 = __real_3f800000;
    }
    fVar4 = fVar4 * __real_c0000000;
    this->B2 = 1.0;
    if (fVar7 <= fVar6) {
      fVar7 = fVar6;
    }
    this->B1 = fVar4;
    this->Yn_1 = fVar7;
    fVar4 = fVar6;
    if ((fVar6 <= fVar7) && (fVar4 = fVar7, __real_3f800000 <= fVar7)) {
      fVar4 = __real_3f800000;
    }
    fVar5 = asinf(fVar4);
    fVar4 = _X;
    if (_X <= __real_322bcc77) {
      fVar4 = __real_322bcc77;
    }
    fVar2 = __real_3f800000;
    if (this->Yn_2 <= fVar7 && fVar7 != this->Yn_2) {
      fVar2 = fVar6;
    }
    fVar6 = sinf((fVar5 / fVar4 + fVar2) * _X);
    this->Yn_2 = fVar6;
  }
  return;
}

// SetScale @ 14451c7f0

void __thiscall Audio::FSineOsc::SetScale(FSineOsc *this,float param_1)

{
  this->Scale = param_1;
  return;
}

