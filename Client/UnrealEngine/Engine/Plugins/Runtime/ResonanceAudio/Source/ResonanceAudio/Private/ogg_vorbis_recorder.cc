// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 7

// _Emplace_reallocate<std::unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_>_> @ 14f0973b0

/* WARNING: Type propagation algorithm not settling */

unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> * __thiscall
std::
vector<std::unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_>,std::allocator<std::unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_>_>_>
::
_Emplace_reallocate<std::unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_>_>
          (vector<std::unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_>,std::allocator<std::unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_>_>_>
           *this,unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_>
                 *param_1,
          unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> *param_2)

{
  ulonglong uVar1;
  AudioBuffer *pAVar2;
  unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> *puVar3;
  longlong lVar4;
  unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> *puVar8;
  ulong64 uVar9;
  unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> *puVar10;
  longlong lVar11;
  
  puVar10 = (this->_Mypair)._Myval2._Myfirst;
  lVar11 = (longlong)param_1 - (longlong)puVar10 >> 3;
  lVar4 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)puVar10 >> 3;
  if (lVar4 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar6 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)puVar10 >> 3;
  uVar1 = lVar4 + 1;
  if (0x1fffffffffffffff - (uVar6 >> 1) < uVar6) {
    uVar7 = 0x1fffffffffffffff;
  }
  else {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar7 = uVar1;
    if (uVar1 <= uVar6) {
      uVar7 = uVar6;
    }
    if (0x1fffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  puVar5 = _Allocate<16,std::_Default_allocate_traits>(uVar7 * 8);
  pAVar2 = (param_2->_Mypair)._Myval2;
  (param_2->_Mypair)._Myval2 = (AudioBuffer *)0x0;
  puVar5[lVar11]._Mypair._Myval2 = pAVar2;
  puVar10 = (this->_Mypair)._Myval2._Mylast;
  puVar8 = (this->_Mypair)._Myval2._Myfirst;
  puVar3 = puVar5;
  if (param_1 == puVar10) {
    for (; puVar8 != puVar10; puVar8 = puVar8 + 1) {
      pAVar2 = (puVar8->_Mypair)._Myval2;
      (puVar8->_Mypair)._Myval2 = (AudioBuffer *)0x0;
      (puVar3->_Mypair)._Myval2 = pAVar2;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    for (; puVar8 != param_1; puVar8 = puVar8 + 1) {
      pAVar2 = (puVar8->_Mypair)._Myval2;
      (puVar8->_Mypair)._Myval2 = (AudioBuffer *)0x0;
      (puVar3->_Mypair)._Myval2 = pAVar2;
      puVar3 = puVar3 + 1;
    }
    puVar10 = (this->_Mypair)._Myval2._Mylast;
    puVar8 = puVar5 + lVar11;
    for (; param_1 != puVar10; param_1 = param_1 + 1) {
      puVar8 = puVar8 + 1;
      pAVar2 = (param_1->_Mypair)._Myval2;
      (param_1->_Mypair)._Myval2 = (AudioBuffer *)0x0;
      (puVar8->_Mypair)._Myval2 = pAVar2;
    }
  }
  puVar10 = (this->_Mypair)._Myval2._Myfirst;
  if (puVar10 != (unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> *)0x0)
  {
    puVar8 = (this->_Mypair)._Myval2._Mylast;
    for (; puVar10 != puVar8; puVar10 = puVar10 + 1) {
      pAVar2 = (puVar10->_Mypair)._Myval2;
      if (pAVar2 != (AudioBuffer *)0x0) {
        vraudio::AudioBuffer::~AudioBuffer(pAVar2);
        ::operator_delete(pAVar2,0x48);
      }
    }
    puVar10 = (this->_Mypair)._Myval2._Myfirst;
    uVar9 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)puVar10 & 0xfffffffffffffff8;
    puVar8 = puVar10;
    if (0xfff < uVar9) {
      puVar8 = *(unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> **)
                (puVar10 + 0xffffffffffffffff);
      uVar9 = uVar9 + 0x27;
      if (0x1f < (ulonglong)((longlong)puVar10 + (-8 - (longlong)puVar8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(puVar8,uVar9);
  }
  (this->_Mypair)._Myval2._Myfirst = puVar5;
  (this->_Mypair)._Myval2._Mylast = puVar5 + uVar1;
  (this->_Mypair)._Myval2._Myend = puVar5 + uVar7;
  return puVar5 + lVar11;
}

// OggVorbisRecorder @ 14f0975b0

OggVorbisRecorder * __thiscall
vraudio::OggVorbisRecorder::OggVorbisRecorder
          (OggVorbisRecorder *this,int param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4)

{
  float **ppfVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  bool bVar3;
  int iStack_fc;
  undefined1 local_f8 [112];
  char *local_88;
  int local_80;
  basic_ios<char,std::char_traits<char>_> local_70;
  
  bVar3 = false;
  this->max_num_buffers_ = param_4;
  this->num_channels_ = param_2;
  this->num_frames_ = param_3;
  (this->data_)._Mypair._Myval2._Myfirst =
       (unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> *)0x0;
  (this->data_)._Mypair._Myval2._Mylast =
       (unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> *)0x0;
  (this->data_)._Mypair._Myval2._Myend =
       (unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> *)0x0;
  (this->temp_data_channel_ptrs_)._Mypair._Myval2._Myfirst = (float **)0x0;
  (this->temp_data_channel_ptrs_)._Mypair._Myval2._Mylast = (float **)0x0;
  (this->temp_data_channel_ptrs_)._Mypair._Myval2._Myend = (float **)0x0;
  this->sample_rate_hz_ = param_1;
  if (param_2 != 0) {
    if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      std::vector<float_const_*,std::allocator<float_const_*>_>::_Xlength();
    }
    ppfVar1 = std::_Allocate<16,std::_Default_allocate_traits>(param_2 * 8);
    (this->temp_data_channel_ptrs_)._Mypair._Myval2._Myfirst = ppfVar1;
    (this->temp_data_channel_ptrs_)._Mypair._Myval2._Myend = ppfVar1 + param_2;
    ppfVar1 = (this->temp_data_channel_ptrs_)._Mypair._Myval2._Myfirst;
    memset(ppfVar1,0,param_2 * 8);
    (this->temp_data_channel_ptrs_)._Mypair._Myval2._Mylast = ppfVar1 + param_2;
  }
  BufferCrossfader::BufferCrossfader(&this->crossfader_,this->num_frames_);
  AudioBuffer::AudioBuffer(&this->crossfade_buffer_,this->num_channels_,this->num_frames_);
  VorbisStreamEncoder::VorbisStreamEncoder(&this->encoder_);
  if (this->max_num_buffers_ == 0) {
    local_f8._0_8_ =
         &std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::_vbtable_;
    std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(&local_70)
    ;
    std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)local_f8,
               (basic_streambuf<char,std::char_traits<char>_> *)(local_f8 + 8),false);
    *(undefined ***)(local_f8 + *(int *)(local_f8._0_8_ + 4)) =
         std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)&iStack_fc + (longlong)*(int *)(local_f8._0_8_ + 4)) =
         *(int *)(local_f8._0_8_ + 4) + -0x88;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)(local_f8 + 8));
    local_88 = (char *)0x0;
    local_f8._8_8_ =
         std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_80 = 4;
    pbVar2 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)local_f8,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\utils\\ogg_vorbis_recorder.cc"
                       );
    pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,":");
    pbVar2 = (basic_ostream<char,std::char_traits<char>_> *)
             std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,0x24);
    std::operator<<<std::char_traits<char>_>(pbVar2,": ");
    bVar3 = true;
  }
  else if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
           ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
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
    FatalLogger::~FatalLogger((FatalLogger *)local_f8);
  }
  return this;
}

// AddInput @ 14f097800

void __thiscall
vraudio::OggVorbisRecorder::AddInput
          (OggVorbisRecorder *this,
          unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> param_1)

{
  unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> **ppuVar1;
  unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> *puVar2;
  AudioBuffer *pAVar3;
  AudioBuffer *this_00;
  unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> *puVar4;
  unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> *puVar5;
  
  puVar5 = (this->data_)._Mypair._Myval2._Mylast;
  if ((longlong)puVar5 - (longlong)(this->data_)._Mypair._Myval2._Myfirst >> 3 ==
      this->max_num_buffers_) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
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
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                ::__l2::kNullStream,"Maximum input buffer limit reached, overwriting data");
    puVar5 = (this->data_)._Mypair._Myval2._Myfirst;
    puVar2 = (this->data_)._Mypair._Myval2._Mylast;
    puVar4 = puVar5;
    while (puVar4 = puVar4 + 1, puVar4 != puVar2) {
      pAVar3 = (puVar4->_Mypair)._Myval2;
      (puVar4->_Mypair)._Myval2 = (AudioBuffer *)0x0;
      this_00 = (puVar5->_Mypair)._Myval2;
      (puVar5->_Mypair)._Myval2 = pAVar3;
      if (this_00 != (AudioBuffer *)0x0) {
        AudioBuffer::~AudioBuffer(this_00);
        ::operator_delete(this_00,0x48);
      }
      puVar5 = puVar5 + 1;
    }
    pAVar3 = (this->data_)._Mypair._Myval2._Mylast[-1]._Mypair._Myval2;
    if (pAVar3 != (AudioBuffer *)0x0) {
      AudioBuffer::~AudioBuffer(pAVar3);
      ::operator_delete(pAVar3,0x48);
    }
    ppuVar1 = &(this->data_)._Mypair._Myval2._Mylast;
    *ppuVar1 = *ppuVar1 + -1;
    puVar5 = (this->data_)._Mypair._Myval2._Mylast;
  }
  if (puVar5 == (this->data_)._Mypair._Myval2._Myend) {
    std::
    vector<std::unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_>,std::allocator<std::unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_>_>_>
    ::
    _Emplace_reallocate<std::unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_>_>
              (&this->data_,puVar5,
               (unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> *)
               param_1._Mypair._Myval2);
  }
  else {
    pAVar3 = *(AudioBuffer **)param_1._Mypair._Myval2;
    *(undefined8 *)param_1._Mypair._Myval2 = 0;
    (puVar5->_Mypair)._Myval2 = pAVar3;
    ppuVar1 = &(this->data_)._Mypair._Myval2._Mylast;
    *ppuVar1 = *ppuVar1 + 1;
  }
  pAVar3 = *(AudioBuffer **)param_1._Mypair._Myval2;
  if (pAVar3 != (AudioBuffer *)0x0) {
    AudioBuffer::~AudioBuffer(pAVar3);
    ::operator_delete(pAVar3,0x48);
    return;
  }
  return;
}

// MakeSeamless @ 14f0979d0

void __thiscall vraudio::OggVorbisRecorder::MakeSeamless(OggVorbisRecorder *this)

{
  unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> **ppuVar1;
  unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> *puVar2;
  AudioBuffer *pAVar3;
  
  puVar2 = (this->data_)._Mypair._Myval2._Myfirst;
  if (((longlong)(this->data_)._Mypair._Myval2._Mylast - (longlong)puVar2 & 0xfffffffffffffff8U) ==
      8) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        std::basic_ostream<char,std::char_traits<char>_>::
        basic_ostream<char,std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)
                   &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                    ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false);
        atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
        _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                ::__l2::kNullStream,"Not enough data to make seamless file");
    return;
  }
  pAVar3 = (puVar2->_Mypair)._Myval2;
  BufferCrossfader::ApplyLinearCrossfade
            (&this->crossfader_,pAVar3,(this->data_)._Mypair._Myval2._Mylast[-1]._Mypair._Myval2,
             &this->crossfade_buffer_);
  AudioBuffer::operator=(pAVar3,&this->crossfade_buffer_);
  pAVar3 = (this->data_)._Mypair._Myval2._Mylast[-1]._Mypair._Myval2;
  if (pAVar3 != (AudioBuffer *)0x0) {
    AudioBuffer::~AudioBuffer(pAVar3);
    ::operator_delete(pAVar3,0x48);
  }
  ppuVar1 = &(this->data_)._Mypair._Myval2._Mylast;
  *ppuVar1 = *ppuVar1 + -1;
  return;
}

// Reset @ 14f097b00

void __thiscall vraudio::OggVorbisRecorder::Reset(OggVorbisRecorder *this)

{
  unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> *puVar1;
  AudioBuffer *this_00;
  unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> *puVar2;
  
  puVar1 = (this->data_)._Mypair._Myval2._Mylast;
  puVar2 = (this->data_)._Mypair._Myval2._Myfirst;
  if (puVar2 != puVar1) {
    do {
      this_00 = (puVar2->_Mypair)._Myval2;
      if (this_00 != (AudioBuffer *)0x0) {
        AudioBuffer::~AudioBuffer(this_00);
        ::operator_delete(this_00,0x48);
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
    (this->data_)._Mypair._Myval2._Mylast = (this->data_)._Mypair._Myval2._Myfirst;
  }
  return;
}

// WriteToFile @ 14f097b70

bool __thiscall
vraudio::OggVorbisRecorder::WriteToFile
          (OggVorbisRecorder *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,float param_2,
          bool param_3)

{
  unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> **ppuVar1;
  unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> *puVar2;
  AudioBuffer *pAVar3;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var4;
  bool bVar5;
  basic_ostream<char,std::char_traits<char>_> *pbVar6;
  char *pcVar7;
  unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_> *puVar8;
  ulonglong uVar9;
  
  puVar8 = (this->data_)._Mypair._Myval2._Myfirst;
  puVar2 = (this->data_)._Mypair._Myval2._Mylast;
  if (puVar8 == puVar2) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
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
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                ::__l2::kNullStream,"No recorded data");
    return false;
  }
  uVar9 = (ulonglong)_tls_index;
  if (param_3) {
    if (((longlong)puVar2 - (longlong)puVar8 & 0xfffffffffffffff8U) == 8) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8) + 0x9d4c) <
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
      std::operator<<<std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)
                 &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                  ::__l2::kNullStream,"Not enough data to make seamless file");
    }
    else {
      pAVar3 = (puVar8->_Mypair)._Myval2;
      BufferCrossfader::ApplyLinearCrossfade
                (&this->crossfader_,pAVar3,(this->data_)._Mypair._Myval2._Mylast[-1]._Mypair._Myval2
                 ,&this->crossfade_buffer_);
      AudioBuffer::operator=(pAVar3,&this->crossfade_buffer_);
      pAVar3 = (this->data_)._Mypair._Myval2._Mylast[-1]._Mypair._Myval2;
      if (pAVar3 != (AudioBuffer *)0x0) {
        AudioBuffer::~AudioBuffer(pAVar3);
        ::operator_delete(pAVar3,0x48);
      }
      ppuVar1 = &(this->data_)._Mypair._Myval2._Mylast;
      *ppuVar1 = *ppuVar1 + -1;
    }
  }
  bVar5 = VorbisStreamEncoder::InitializeForFile
                    (&this->encoder_,param_1,this->num_channels_,this->sample_rate_hz_,
                     kVariableBitRate,0,param_2);
  if (bVar5) {
    puVar2 = (this->data_)._Mypair._Myval2._Mylast;
    for (puVar8 = (this->data_)._Mypair._Myval2._Myfirst; puVar8 != puVar2; puVar8 = puVar8 + 1) {
      GetRawChannelDataPointersFromAudioBuffer
                ((puVar8->_Mypair)._Myval2,&this->temp_data_channel_ptrs_);
      bVar5 = VorbisStreamEncoder::AddPlanarBuffer
                        (&this->encoder_,(this->temp_data_channel_ptrs_)._Mypair._Myval2._Myfirst,
                         this->num_channels_,this->num_frames_);
      if (!bVar5) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8) + 0x9d4c) <
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
                      ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false
                    );
          atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
          _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        pcVar7 = "Failed to write buffer into file: ";
        goto LAB_14f097da5;
      }
    }
    bVar5 = VorbisStreamEncoder::FlushAndClose(&this->encoder_);
    if (bVar5) {
      Reset(this);
      bVar5 = true;
    }
    else {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8) + 0x9d4c) <
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
      pcVar7 = "Failed to safely close file: ";
LAB_14f097da5:
      pbVar6 = std::operator<<<std::char_traits<char>_>
                         ((basic_ostream<char,std::char_traits<char>_> *)
                          &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                           ::__l2::kNullStream,pcVar7);
      p_Var4 = &param_1->_Mypair;
      if (0xf < (param_1->_Mypair)._Myval2._Myres) {
        param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                  (param_1->_Mypair)._Myval2._Bx._Ptr;
      }
      std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                (pbVar6,(char *)param_1,(p_Var4->_Myval2)._Mysize);
      Reset(this);
      bVar5 = false;
    }
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8) + 0x9d4c) <
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
    pbVar6 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)
                        &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                         ::__l2::kNullStream,"Cannot initialize file to record: ");
    p_Var4 = &param_1->_Mypair;
    if (0xf < (param_1->_Mypair)._Myval2._Myres) {
      param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_1->_Mypair)._Myval2._Bx._Ptr;
    }
    std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
              (pbVar6,(char *)param_1,(p_Var4->_Myval2)._Mysize);
    Reset(this);
    bVar5 = false;
  }
  return bVar5;
}

// _Xlength @ 14f097fc0

void __cdecl
std::
vector<std::unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_>,std::allocator<std::unique_ptr<vraudio::AudioBuffer,std::default_delete<vraudio::AudioBuffer>_>_>_>
::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

