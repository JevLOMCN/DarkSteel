// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 11

// AllignedFree<float_*> @ 14f0655a0

void __cdecl vraudio::AllignedFree<float_*>(float *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0655a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(*(void **)(param_1 + -2));
  return;
}

// _Destroy_range<std::allocator<std::unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>_>_> @ 14f0655c0

void __cdecl
std::
_Destroy_range<std::allocator<std::unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>_>_>
          (unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
           *param_1,
          unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
          *param_2,allocator<std::unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>_>
                   *param_3)

{
  PartitionedFftFilter *pPVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    pPVar1 = (param_1->_Mypair)._Myval2;
    if (pPVar1 != (PartitionedFftFilter *)0x0) {
      vraudio::AudioBuffer::~AudioBuffer(&pPVar1->temp_kernel_chunk_buffer_);
      vraudio::AudioBuffer::~AudioBuffer(&pPVar1->temp_zeropad_buffer_);
      vraudio::AudioBuffer::~AudioBuffer(&pPVar1->freq_domain_accumulator_);
      vraudio::AudioBuffer::~AudioBuffer(&pPVar1->filtered_time_domain_buffers_);
      vraudio::AudioBuffer::~AudioBuffer(&pPVar1->freq_domain_buffer_);
      vraudio::AudioBuffer::~AudioBuffer(&pPVar1->kernel_freq_domain_buffer_);
      ::operator_delete(pPVar1,0x200);
    }
  }
  return;
}

// _Emplace_reallocate<vraudio::PartitionedFftFilter_*> @ 14f065660

unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_> *
__thiscall
std::
vector<std::unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>,std::allocator<std::unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>_>_>
::_Emplace_reallocate<vraudio::PartitionedFftFilter_*>
          (vector<std::unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>,std::allocator<std::unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>_>_>
           *this,unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
                 *param_1,PartitionedFftFilter **param_2)

{
  ulonglong uVar1;
  unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
  *puVar2;
  PartitionedFftFilter *pPVar3;
  longlong lVar4;
  unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
  *puVar5;
  ulonglong uVar6;
  unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
  *puVar7;
  longlong lVar8;
  unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
  *puVar9;
  ulonglong uVar10;
  
  puVar2 = (this->_Mypair)._Myval2._Myfirst;
  lVar8 = (longlong)param_1 - (longlong)puVar2 >> 3;
  lVar4 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)puVar2 >> 3;
  if (lVar4 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar6 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)puVar2 >> 3;
  uVar1 = lVar4 + 1;
  if (0x1fffffffffffffff - (uVar6 >> 1) < uVar6) {
    uVar10 = 0x1fffffffffffffff;
  }
  else {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar10 = uVar1;
    if (uVar1 <= uVar6) {
      uVar10 = uVar6;
    }
    if (0x1fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  puVar5 = _Allocate<16,std::_Default_allocate_traits>(uVar10 * 8);
  puVar5[lVar8]._Mypair._Myval2 = *param_2;
  puVar2 = (this->_Mypair)._Myval2._Mylast;
  puVar7 = (this->_Mypair)._Myval2._Myfirst;
  puVar9 = puVar5;
  if (param_1 == puVar2) {
    for (; puVar7 != puVar2; puVar7 = puVar7 + 1) {
      pPVar3 = (puVar7->_Mypair)._Myval2;
      (puVar7->_Mypair)._Myval2 = (PartitionedFftFilter *)0x0;
      (puVar9->_Mypair)._Myval2 = pPVar3;
      puVar9 = puVar9 + 1;
    }
  }
  else {
    for (; puVar7 != param_1; puVar7 = puVar7 + 1) {
      pPVar3 = (puVar7->_Mypair)._Myval2;
      (puVar7->_Mypair)._Myval2 = (PartitionedFftFilter *)0x0;
      (puVar9->_Mypair)._Myval2 = pPVar3;
      puVar9 = puVar9 + 1;
    }
    _Destroy_range<std::allocator<std::unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>_>_>
              (puVar9,puVar9,
               (allocator<std::unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>_>
                *)this);
    puVar2 = (this->_Mypair)._Myval2._Mylast;
    puVar9 = puVar5 + lVar8;
    for (; puVar9 = puVar9 + 1, param_1 != puVar2; param_1 = param_1 + 1) {
      pPVar3 = (param_1->_Mypair)._Myval2;
      (param_1->_Mypair)._Myval2 = (PartitionedFftFilter *)0x0;
      (puVar9->_Mypair)._Myval2 = pPVar3;
    }
  }
  _Destroy_range<std::allocator<std::unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>_>_>
            (puVar9,puVar9,
             (allocator<std::unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>_>
              *)this);
  _Change_array(this,puVar5,uVar1,uVar10);
  return puVar5 + lVar8;
}

// AmbisonicBinauralDecoder @ 14f0657f0

/* WARNING: Type propagation algorithm not settling */

AmbisonicBinauralDecoder * __thiscall
vraudio::AmbisonicBinauralDecoder::AmbisonicBinauralDecoder
          (AmbisonicBinauralDecoder *this,AudioBuffer *param_1,ulong64 param_2,FftManager *param_3)

{
  vector<std::unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>,std::allocator<std::unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>_>_>
  *this_00;
  unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
  **ppuVar1;
  ulong64 uVar2;
  unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
  *puVar3;
  unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
  *puVar4;
  bool bVar5;
  uint uVar6;
  unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
  *puVar7;
  PartitionedFftFilter *this_01;
  PartitionedFftFilter *pPVar8;
  longlong lVar9;
  unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
  *puVar10;
  unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
  uVar11;
  ulong64 uVar12;
  ulonglong uVar13;
  unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
  *puVar14;
  ulonglong uVar15;
  unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
  *puVar16;
  _Compressed_pair<std::default_delete<vraudio::PartitionedFftFilter>,vraudio::PartitionedFftFilter_*,1>
  local_res10;
  ulong64 local_res18;
  undefined4 local_res20;
  FatalLogger local_138;
  
  this_00 = &this->sh_hrir_filters_;
  this->fft_manager_ = param_3;
  local_res20 = 0;
  (this_00->_Mypair)._Myval2._Myfirst =
       (unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
        *)0x0;
  (this->sh_hrir_filters_)._Mypair._Myval2._Mylast =
       (unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
        *)0x0;
  (this->sh_hrir_filters_)._Mypair._Myval2._Myend =
       (unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
        *)0x0;
  uVar6 = (int)param_2 - 1;
  uVar6 = uVar6 >> 1 | uVar6;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  local_res10._Myval2 = (PartitionedFftFilter *)param_1;
  local_res18 = param_2;
  AudioBuffer::AudioBuffer(&this->freq_input_,1,(ulonglong)((uVar6 >> 0x10 | uVar6) + 1) * 2);
  AudioBuffer::AudioBuffer(&this->filtered_input_,1,param_2);
  uVar15 = (ulonglong)_tls_index;
  if (this->fft_manager_ == (FftManager *)0x0) {
    FatalLogger::FatalLogger
              (&local_138,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\ambisonics\\ambisonic_binaural_decoder.cc"
               ,0x1f);
    bVar5 = true;
  }
  else {
    bVar5 = false;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0x9d4c) <
         `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__), bVar5 = false,
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
  if (bVar5) {
    FatalLogger::~FatalLogger(&local_138);
  }
  bVar5 = false;
  if (param_2 == 0) {
    bVar5 = true;
    FatalLogger::FatalLogger
              (&local_138,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\ambisonics\\ambisonic_binaural_decoder.cc"
               ,0x20);
  }
  else if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0x9d4c) <
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
  if (bVar5) {
    FatalLogger::~FatalLogger(&local_138);
  }
  bVar5 = false;
  lVar9 = (longlong)(param_1->channel_views_)._Mypair._Myval2._Mylast -
          (longlong)(param_1->channel_views_)._Mypair._Myval2._Myfirst;
  uVar2 = param_1->num_frames_;
  lVar9 = lVar9 / 6 + (lVar9 >> 0x3f);
  uVar13 = (lVar9 >> 2) - (lVar9 >> 0x3f);
  if (uVar13 == 0) {
    bVar5 = true;
    FatalLogger::FatalLogger
              (&local_138,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\ambisonics\\ambisonic_binaural_decoder.cc"
               ,0x23);
  }
  else if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0x9d4c) <
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
  if (bVar5) {
    FatalLogger::~FatalLogger(&local_138);
  }
  bVar5 = false;
  if (uVar2 == 0) {
    bVar5 = true;
    FatalLogger::FatalLogger
              (&local_138,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\ambisonics\\ambisonic_binaural_decoder.cc"
               ,0x24);
  }
  else if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0x9d4c) <
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
  if (bVar5) {
    FatalLogger::~FatalLogger(&local_138);
  }
  puVar3 = (this_00->_Mypair)._Myval2._Myfirst;
  if ((ulonglong)((longlong)(this->sh_hrir_filters_)._Mypair._Myval2._Myend - (longlong)puVar3 >> 3)
      < uVar13) {
    if (0x1fffffffffffffff < uVar13) {
                    /* WARNING: Subroutine does not return */
      std::
      vector<std::unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>,std::allocator<std::unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>_>_>
      ::_Xlength();
    }
    puVar4 = (this->sh_hrir_filters_)._Mypair._Myval2._Mylast;
    puVar7 = std::_Allocate<16,std::_Default_allocate_traits>(uVar13 * 8);
    puVar14 = (this->sh_hrir_filters_)._Mypair._Myval2._Mylast;
    puVar10 = puVar7;
    for (puVar16 = (this_00->_Mypair)._Myval2._Myfirst; puVar16 != puVar14; puVar16 = puVar16 + 1) {
      pPVar8 = (puVar16->_Mypair)._Myval2;
      (puVar16->_Mypair)._Myval2 = (PartitionedFftFilter *)0x0;
      (puVar10->_Mypair)._Myval2 = pPVar8;
      puVar10 = puVar10 + 1;
    }
    std::
    _Destroy_range<std::allocator<std::unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>_>_>
              (puVar10,puVar10,
               (allocator<std::unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>_>
                *)this_00);
    puVar14 = (this_00->_Mypair)._Myval2._Myfirst;
    if (puVar14 !=
        (unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
         *)0x0) {
      puVar16 = (this->sh_hrir_filters_)._Mypair._Myval2._Mylast;
      for (; puVar14 != puVar16; puVar14 = puVar14 + 1) {
        pPVar8 = (puVar14->_Mypair)._Myval2;
        if (pPVar8 != (PartitionedFftFilter *)0x0) {
          AudioBuffer::~AudioBuffer(&pPVar8->temp_kernel_chunk_buffer_);
          AudioBuffer::~AudioBuffer(&pPVar8->temp_zeropad_buffer_);
          AudioBuffer::~AudioBuffer(&pPVar8->freq_domain_accumulator_);
          AudioBuffer::~AudioBuffer(&pPVar8->filtered_time_domain_buffers_);
          AudioBuffer::~AudioBuffer(&pPVar8->freq_domain_buffer_);
          AudioBuffer::~AudioBuffer(&pPVar8->kernel_freq_domain_buffer_);
          ::operator_delete(pPVar8,0x200);
        }
      }
      pPVar8 = (PartitionedFftFilter *)(this_00->_Mypair)._Myval2._Myfirst;
      uVar12 = (longlong)(this->sh_hrir_filters_)._Mypair._Myval2._Myend - (longlong)pPVar8 &
               0xfffffffffffffff8;
      uVar11._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<vraudio::PartitionedFftFilter>,vraudio::PartitionedFftFilter_*,1>
            )(_Compressed_pair<std::default_delete<vraudio::PartitionedFftFilter>,vraudio::PartitionedFftFilter_*,1>
              )pPVar8;
      if (0xfff < uVar12) {
        uVar11._Mypair._Myval2 =
             ((unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
               *)&pPVar8[0xffffffffffffffff].temp_kernel_chunk_buffer_.source_id_)->_Mypair;
        uVar12 = uVar12 + 0x27;
        if (0x1f < (ulonglong)((longlong)pPVar8 + (-8 - (longlong)uVar11._Mypair._Myval2))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar11._Mypair._Myval2,uVar12);
      param_1 = (AudioBuffer *)local_res10._Myval2;
    }
    (this_00->_Mypair)._Myval2._Myfirst = puVar7;
    (this->sh_hrir_filters_)._Mypair._Myval2._Mylast =
         puVar7 + ((longlong)puVar4 - (longlong)puVar3 >> 3);
    (this->sh_hrir_filters_)._Mypair._Myval2._Myend = puVar7 + uVar13;
    param_2 = local_res18;
  }
  uVar15 = 0;
  if (uVar13 != 0) {
    lVar9 = 0;
    do {
      this_01 = ::operator_new(0x200);
      pPVar8 = (PartitionedFftFilter *)0x0;
      if (this_01 != (PartitionedFftFilter *)0x0) {
        pPVar8 = PartitionedFftFilter::PartitionedFftFilter
                           (this_01,uVar2,param_2,this->fft_manager_);
      }
      puVar3 = (this->sh_hrir_filters_)._Mypair._Myval2._Mylast;
      local_res10._Myval2 = pPVar8;
      if (puVar3 == (this->sh_hrir_filters_)._Mypair._Myval2._Myend) {
        std::
        vector<std::unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>,std::allocator<std::unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>_>_>
        ::_Emplace_reallocate<vraudio::PartitionedFftFilter_*>(this_00,puVar3,&local_res10._Myval2);
      }
      else {
        (puVar3->_Mypair)._Myval2 = pPVar8;
        ppuVar1 = &(this->sh_hrir_filters_)._Mypair._Myval2._Mylast;
        *ppuVar1 = *ppuVar1 + 1;
      }
      PartitionedFftFilter::SetTimeDomainKernel
                ((this_00->_Mypair)._Myval2._Myfirst[uVar15]._Mypair._Myval2,
                 (ChannelView *)(((PartitionedFftFilter *)param_1)->max_num_partitions_ + lVar9));
      uVar15 = uVar15 + 1;
      lVar9 = lVar9 + 0x18;
    } while (uVar15 < uVar13);
  }
  return this;
}

// FatalLogger @ 14f065d20

FatalLogger * __thiscall FatalLogger::FatalLogger(FatalLogger *this,char *param_1,int param_2)

{
  int iVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  
  *(undefined1 **)&this->error_string_ =
       &std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::_vbtable_;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)&(this->error_string_).field_0x88);
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)this,
             (basic_streambuf<char,std::char_traits<char>_> *)&(this->error_string_)._Stringbuffer,
             false);
  *(undefined ***)
   (&(this->error_string_).field_0x0 + *(int *)(*(longlong *)&this->error_string_ + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  iVar1 = *(int *)(*(longlong *)&this->error_string_ + 4);
  *(int *)((longlong)iVar1 + -4 + (longlong)this) = iVar1 + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&(this->error_string_)._Stringbuffer);
  (this->error_string_)._Stringbuffer._Seekhigh = (char *)0x0;
  (this->error_string_)._Stringbuffer._padding_ =
       (longlong)std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  (this->error_string_)._Stringbuffer._Mystate = 4;
  pbVar2 = std::operator<<<std::char_traits<char>_>
                     ((basic_ostream<char,std::char_traits<char>_> *)this,param_1);
  pbVar2 = std::operator<<<std::char_traits<char>_>(pbVar2,":");
  pbVar2 = (basic_ostream<char,std::char_traits<char>_> *)
           std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
  std::operator<<<std::char_traits<char>_>(pbVar2,": ");
  return this;
}

// ~AudioBuffer @ 14f065e10

void __thiscall vraudio::AudioBuffer::~AudioBuffer(AudioBuffer *this)

{
  ChannelView *pCVar1;
  float *pfVar2;
  ChannelView *pCVar3;
  ulong64 uVar4;
  
  pCVar1 = (this->channel_views_)._Mypair._Myval2._Myfirst;
  if (pCVar1 != (ChannelView *)0x0) {
    uVar4 = (((longlong)(this->channel_views_)._Mypair._Myval2._Myend - (longlong)pCVar1) / 0x18) *
            0x18;
    pCVar3 = pCVar1;
    if (0xfff < uVar4) {
      pCVar3 = *(ChannelView **)&pCVar1[-1].enabled_;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)pCVar1 + (-8 - (longlong)pCVar3))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pCVar3,uVar4);
    (this->channel_views_)._Mypair._Myval2._Myfirst = (ChannelView *)0x0;
    (this->channel_views_)._Mypair._Myval2._Mylast = (ChannelView *)0x0;
    (this->channel_views_)._Mypair._Myval2._Myend = (ChannelView *)0x0;
  }
  pfVar2 = (this->data_)._Mypair._Myval2._Myfirst;
  if (pfVar2 != (float *)0x0) {
    free(*(void **)(pfVar2 + -2));
    (this->data_)._Mypair._Myval2._Myfirst = (float *)0x0;
    (this->data_)._Mypair._Myval2._Mylast = (float *)0x0;
    (this->data_)._Mypair._Myval2._Myend = (float *)0x0;
  }
  return;
}

// ~FatalLogger @ 14f065ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FatalLogger::~FatalLogger(FatalLogger *this)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  char *****pppppcVar4;
  basic_ostream<char,std::char_traits<char>_> *this_00;
  ulong64 uVar5;
  ulonglong uVar6;
  void *_Src;
  char *pcVar7;
  ulonglong _Size;
  undefined1 auStackY_78 [32];
  char ****local_48;
  undefined8 uStack_40;
  ulong64 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_78;
  local_38 = 0;
  uVar1 = (this->error_string_)._Stringbuffer._Mystate;
  local_30 = 0xf;
  uStack_40 = 0;
  local_48 = (char ****)0x0;
  if ((((byte)uVar1 & 0x22) == 2) ||
     (pcVar7 = *(char **)(this->error_string_)._Stringbuffer._padding_, pcVar7 == (char *)0x0)) {
    _Size = 0;
    _Src = (void *)0x0;
    if (((uVar1 & 4) == 0) &&
       (lVar2 = *(longlong *)(this->error_string_)._Stringbuffer._padding_, lVar2 != 0)) {
      _Src = *(void **)(this->error_string_)._Stringbuffer._padding_;
      _Size = ((longlong)*(int *)(this->error_string_)._Stringbuffer._padding_ - (longlong)_Src) +
              lVar2;
    }
  }
  else {
    if (pcVar7 < (this->error_string_)._Stringbuffer._Seekhigh) {
      pcVar7 = (this->error_string_)._Stringbuffer._Seekhigh;
    }
    _Src = *(void **)(this->error_string_)._Stringbuffer._padding_;
    _Size = (longlong)pcVar7 - (longlong)_Src;
  }
  if (_Src != (void *)0x0) {
    if (_Size < 0x10) {
      local_38 = _Size;
      memmove(&local_48,_Src,_Size);
      *(undefined1 *)((longlong)&local_48 + _Size) = 0;
    }
    else {
      if (0x7fffffffffffffff < _Size) {
                    /* WARNING: Subroutine does not return */
        std::_Xlen_string();
      }
      uVar3 = _Size | 0xf;
      uVar6 = 0x7fffffffffffffff;
      if ((uVar3 < 0x8000000000000000) && (uVar6 = uVar3, uVar3 < 0x16)) {
        uVar6 = 0x16;
      }
      pppppcVar4 = std::_Allocate<16,std::_Default_allocate_traits>(uVar6 + 1);
      local_38 = _Size;
      local_30 = uVar6;
      memcpy(pppppcVar4,_Src,_Size);
      *(char *)((longlong)pppppcVar4 + _Size) = '\0';
      local_48 = (char ****)pppppcVar4;
    }
  }
  pppppcVar4 = &local_48;
  if (0xf < local_30) {
    pppppcVar4 = (char *****)local_48;
  }
  this_00 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                      ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,(char *)pppppcVar4,
                       local_38);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (this_00,std::endl<char,std::char_traits<char>_>);
  if (0xf < local_30) {
    uVar5 = local_30 + 1;
    pppppcVar4 = (char *****)local_48;
    if (0xfff < uVar5) {
      pppppcVar4 = (char *****)local_48[-1];
      uVar5 = local_30 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_48 + (-8 - (longlong)pppppcVar4))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pppppcVar4,uVar5);
  }
  std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::_vbase_destructor_
            (&this->error_string_);
  return;
}

// Process @ 14f0660c0

void __thiscall
vraudio::AmbisonicBinauralDecoder::Process
          (AmbisonicBinauralDecoder *this,AudioBuffer *param_1,AudioBuffer *param_2)

{
  ChannelView *pCVar1;
  ChannelView *this_00;
  longlong lVar2;
  longlong lVar3;
  ChannelView *pCVar4;
  ulonglong uVar5;
  ChannelView *pCVar6;
  ulonglong uVar7;
  
  pCVar1 = (param_2->channel_views_)._Mypair._Myval2._Mylast;
  for (pCVar4 = (param_2->channel_views_)._Mypair._Myval2._Myfirst; pCVar4 != pCVar1;
      pCVar4 = pCVar4 + 1) {
    pCVar4->enabled_ = true;
    memset(pCVar4->begin_itr_,0,pCVar4->size_ << 2);
  }
  pCVar6 = (param_1->channel_views_)._Mypair._Myval2._Myfirst;
  uVar5 = 0;
  pCVar1 = (this->freq_input_).channel_views_._Mypair._Myval2._Myfirst;
  lVar3 = (longlong)(param_1->channel_views_)._Mypair._Myval2._Mylast - (longlong)pCVar6;
  pCVar4 = (this->filtered_input_).channel_views_._Mypair._Myval2._Myfirst;
  this_00 = (param_2->channel_views_)._Mypair._Myval2._Myfirst;
  lVar2 = lVar3 >> 0x3f;
  uVar7 = uVar5;
  if (lVar3 / 0x18 + lVar2 != lVar2) {
    do {
      FftManager::FreqFromTimeDomain
                (this->fft_manager_,(ChannelView *)((longlong)&pCVar6->begin_itr_ + uVar7),pCVar1);
      PartitionedFftFilter::Filter
                ((this->sh_hrir_filters_)._Mypair._Myval2._Myfirst[uVar5]._Mypair._Myval2,pCVar1);
      PartitionedFftFilter::GetFilteredSignal
                ((this->sh_hrir_filters_)._Mypair._Myval2._Myfirst[uVar5]._Mypair._Myval2,pCVar4);
      if ((int)uVar5 - ((int)SQRT((float)uVar5) + 1) * (int)SQRT((float)uVar5) < 0) {
        ChannelView::operator+=(this_00,pCVar4);
        ChannelView::operator-=(this_00 + 1,pCVar4);
      }
      else {
        ChannelView::operator+=(this_00,pCVar4);
        ChannelView::operator+=(this_00 + 1,pCVar4);
      }
      pCVar6 = (param_1->channel_views_)._Mypair._Myval2._Myfirst;
      uVar5 = uVar5 + 1;
      uVar7 = uVar7 + 0x18;
    } while (uVar5 < (ulonglong)
                     (((longlong)(param_1->channel_views_)._Mypair._Myval2._Mylast -
                      (longlong)pCVar6) / 0x18));
  }
  return;
}

// _Change_array @ 14f066260

/* WARNING: Type propagation algorithm not settling */

void __thiscall
std::
vector<std::unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>,std::allocator<std::unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>_>_>
::_Change_array(vector<std::unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>,std::allocator<std::unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>_>_>
                *this,unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
                      *param_1,ulong64 param_2,ulong64 param_3)

{
  unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
  *puVar1;
  unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
  *puVar2;
  ulong64 uVar3;
  
  puVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (puVar1 != (unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
                 *)0x0) {
    _Destroy_range<std::allocator<std::unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>_>_>
              (puVar1,(this->_Mypair)._Myval2._Mylast,
               (allocator<std::unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>_>
                *)this);
    puVar1 = (this->_Mypair)._Myval2._Myfirst;
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)puVar1 & 0xfffffffffffffff8;
    puVar2 = puVar1;
    if (0xfff < uVar3) {
      puVar2 = *(unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
                 **)(puVar1 + 0xffffffffffffffff);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)puVar1 + (-8 - (longlong)puVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(puVar2,uVar3);
  }
  (this->_Mypair)._Myval2._Myfirst = param_1;
  (this->_Mypair)._Myval2._Mylast = param_1 + param_2;
  (this->_Mypair)._Myval2._Myend = param_1 + param_3;
  return;
}

// _Xlength @ 14f066310

void __cdecl
std::
vector<std::unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>,std::allocator<std::unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>_>_>
::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// `dynamic_atexit_destructor_for_'kNullStream'' @ 1504719e0

void __cdecl `NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001504719e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_
            ((basic_ostream<char,std::char_traits<char>_> *)
             &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
              ::__l2::kNullStream);
  return;
}

