// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 6

// CheckNotNull<unsigned_char_const_*_&> @ 14f07b030

uchar ** __cdecl CheckNotNull<unsigned_char_const_*_&>(uchar **param_1)

{
  return param_1;
}

// CheckNotNull<vraudio::Wav_const_*> @ 14f07b040

Wav * __cdecl CheckNotNull<vraudio::Wav_const_*>(Wav **param_1)

{
  return *param_1;
}

// sqrt<unsigned___int64,0> @ 14f07b050

double __cdecl sqrt<unsigned___int64,0>(ulong64 param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (-1 < (longlong)param_1) {
    auVar1._0_8_ = (double)(longlong)param_1;
    auVar1._8_8_ = 0;
    auVar2 = sqrtpd(auVar1,auVar1);
    return auVar2._0_8_;
  }
  auVar2._0_8_ = (double)param_1;
  auVar2._8_8_ = 0;
  auVar2 = sqrtpd(auVar2,auVar2);
  return auVar2._0_8_;
}

// ~unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> @ 14f07b090

void __thiscall
std::unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_>::
~unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_>
          (unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> *this)

{
  AudioBuffer *pAVar1;
  ChannelView *pCVar2;
  float *pfVar3;
  ulong64 uVar4;
  ChannelView *pCVar5;
  
  pAVar1 = (this->_Mypair)._Myval2;
  if (pAVar1 != (AudioBuffer *)0x0) {
    pCVar2 = (pAVar1->channel_views_)._Mypair._Myval2._Myfirst;
    if (pCVar2 != (ChannelView *)0x0) {
      uVar4 = (((longlong)(pAVar1->channel_views_)._Mypair._Myval2._Myend - (longlong)pCVar2) / 0x18
              ) * 0x18;
      pCVar5 = pCVar2;
      if (0xfff < uVar4) {
        pCVar5 = *(ChannelView **)&pCVar2[-1].enabled_;
        uVar4 = uVar4 + 0x27;
        if (0x1f < (ulonglong)((longlong)pCVar2 + (-8 - (longlong)pCVar5))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pCVar5,uVar4);
      (pAVar1->channel_views_)._Mypair._Myval2._Myfirst = (ChannelView *)0x0;
      (pAVar1->channel_views_)._Mypair._Myval2._Mylast = (ChannelView *)0x0;
      (pAVar1->channel_views_)._Mypair._Myval2._Myend = (ChannelView *)0x0;
    }
    pfVar3 = (pAVar1->data_)._Mypair._Myval2._Myfirst;
    if (pfVar3 != (float *)0x0) {
      free(*(void **)(pfVar3 + -2));
      (pAVar1->data_)._Mypair._Myval2._Myfirst = (float *)0x0;
      (pAVar1->data_)._Mypair._Myval2._Mylast = (float *)0x0;
      (pAVar1->data_)._Mypair._Myval2._Myend = (float *)0x0;
    }
    ::operator_delete(pAVar1,0x48);
  }
  return;
}

// CreateShHrirsFromAssets @ 14f07b170

unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> __cdecl
vraudio::CreateShHrirsFromAssets
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2,
          Resampler *param_3)

{
  uchar *puVar1;
  undefined4 in_register_00000014;
  ulong64 local_res8;
  Wav *local_18 [2];
  
  local_res8 = 0;
  puVar1 = sadie::HrtfAssets::GetFile
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                      CONCAT44(in_register_00000014,param_2),&local_res8);
  Wav::CreateOrNull((uchar *)local_18,(ulong64)puVar1);
  CreateShHrirsFromWav
            ((Wav *)param_1,(int)local_18[0],(Resampler *)((ulonglong)param_3 & 0xffffffff));
  if (local_18[0] != (Wav *)0x0) {
    Wav::~Wav(local_18[0]);
    ::operator_delete(local_18[0],0x28);
  }
  return (unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_>)
         (_Compressed_pair<std::default_delete<vraudio::AudioBuffer>,vraudio::AudioBuffer_*,1>)
         param_1;
}

// CreateShHrirsFromWav @ 14f07b200

unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> __cdecl
vraudio::CreateShHrirsFromWav(Wav *param_1,int param_2,Resampler *param_3)

{
  int iVar1;
  ulong64 uVar2;
  bool bVar3;
  ulonglong uVar4;
  AudioBuffer *pAVar5;
  _Compressed_pair<std::default_delete<vraudio::AudioBuffer>,vraudio::AudioBuffer_*,1> _Var6;
  basic_ostream<char,std::char_traits<char>_> *pbVar7;
  ulong64 uVar8;
  AudioBuffer *pAVar9;
  longlong lVar10;
  undefined4 in_register_00000014;
  ulong64 *puVar11;
  Resampler *in_R9;
  ulonglong uVar12;
  int iVar13;
  double dVar14;
  undefined1 auVar15 [16];
  unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> local_128;
  FatalLogger local_120;
  
  puVar11 = (ulong64 *)CONCAT44(in_register_00000014,param_2);
  uVar2 = *puVar11;
  pAVar9 = (AudioBuffer *)0x0;
  if (uVar2 != 0) {
    auVar15._0_8_ = (double)uVar2;
    auVar15._8_8_ = 0;
    lVar10 = 0;
    auVar15 = sqrtpd(auVar15,auVar15);
    dVar14 = auVar15._0_8_;
    if ((__real_43e0000000000000 <= dVar14) &&
       (dVar14 = dVar14 - __real_43e0000000000000, dVar14 < __real_43e0000000000000)) {
      lVar10 = -0x8000000000000000;
    }
    if (uVar2 == ((longlong)dVar14 + lVar10) * ((longlong)dVar14 + lVar10)) {
      pAVar5 = pAVar9;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__), pAVar5 = (AudioBuffer *)0x0,
         `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        std::basic_ostream<char,std::char_traits<char>_>::
        basic_ostream<char,std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)
                   &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                    ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false);
        atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
        _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      goto LAB_14f07b324;
    }
  }
  FatalLogger::FatalLogger
            (&local_120,
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\dsp\\sh_hrir_creator.cc"
             ,0x20);
  pAVar5 = (AudioBuffer *)&DAT_00000001;
LAB_14f07b324:
  if (pAVar5 != (AudioBuffer *)0x0) {
    FatalLogger::~FatalLogger(&local_120);
  }
  bVar3 = false;
  uVar4 = (ulonglong)((longlong)(puVar11[3] - puVar11[2]) >> 1) / uVar2;
  pAVar5 = ::operator_new(0x48);
  _Var6._Myval2 = pAVar9;
  if (pAVar5 != (AudioBuffer *)0x0) {
    _Var6._Myval2 = AudioBuffer::AudioBuffer(pAVar5,uVar2,uVar4);
  }
  local_128._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<vraudio::AudioBuffer>,vraudio::AudioBuffer_*,1>)
       (_Compressed_pair<std::default_delete<vraudio::AudioBuffer>,vraudio::AudioBuffer_*,1>)
       _Var6._Myval2;
  FillAudioBuffer((vector<short,std::allocator<short>_> *)(puVar11 + 2),uVar2,_Var6._Myval2);
  iVar1 = (int)puVar11[1];
  if (iVar1 < 1) {
    bVar3 = true;
    FatalLogger::FatalLogger
              (&local_120,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\dsp\\sh_hrir_creator.cc"
               ,0x28);
    uVar12 = (ulonglong)_tls_index;
  }
  else {
    uVar12 = (ulonglong)_tls_index;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x9d4c) <
         `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)
                 &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                  ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false);
      atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
      _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (bVar3) {
    FatalLogger::~FatalLogger(&local_120);
  }
  bVar3 = false;
  iVar13 = (int)param_3;
  if (iVar13 < 1) {
    bVar3 = true;
    FatalLogger::FatalLogger
              (&local_120,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\dsp\\sh_hrir_creator.cc"
               ,0x29);
  }
  else if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x9d4c) <
            `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
            ::__l2::_thread_safe_static_guard_0__) &&
          (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                                ::__l2::_thread_safe_static_guard_0__),
          `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1)) {
    std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false);
    atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
    _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (bVar3) {
    FatalLogger::~FatalLogger(&local_120);
  }
  if (iVar1 == iVar13) {
    param_1->num_channels_ = (ulong64)_Var6._Myval2;
  }
  else {
    bVar3 = Resampler::AreSampleRatesSupported(iVar1,iVar13);
    if (!bVar3) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x9d4c) <
           `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        std::basic_ostream<char,std::char_traits<char>_>::
        basic_ostream<char,std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)
                   &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                    ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false);
        atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
        _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      pbVar7 = std::operator<<<std::char_traits<char>_>
                         ((basic_ostream<char,std::char_traits<char>_> *)
                          &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                           ::__l2::kNullStream,"Unsupported sampling rates for loading HRIRs: ");
      pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)
               std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,iVar1);
      pbVar7 = std::operator<<<std::char_traits<char>_>(pbVar7,", ");
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,iVar13);
    }
    Resampler::ResetState(in_R9);
    Resampler::SetRateAndNumChannels(in_R9,iVar1,iVar13,uVar2);
    pAVar5 = ::operator_new(0x48);
    if (pAVar5 != (AudioBuffer *)0x0) {
      uVar8 = Resampler::GetNextOutputLength(in_R9,uVar4);
      pAVar9 = AudioBuffer::AudioBuffer(pAVar5,uVar2,uVar8);
    }
    Resampler::Process(in_R9,_Var6._Myval2,pAVar9);
    param_1->num_channels_ = (ulong64)pAVar9;
    std::unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_>::
    ~unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_>(&local_128);
  }
  return (unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_>)
         (_Compressed_pair<std::default_delete<vraudio::AudioBuffer>,vraudio::AudioBuffer_*,1>)
         param_1;
}

