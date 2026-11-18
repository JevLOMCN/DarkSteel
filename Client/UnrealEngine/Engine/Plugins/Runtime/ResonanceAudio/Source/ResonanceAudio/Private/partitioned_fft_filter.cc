// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 10

// PartitionedFftFilter @ 14f076c60

PartitionedFftFilter * __thiscall
vraudio::PartitionedFftFilter::PartitionedFftFilter
          (PartitionedFftFilter *this,ulong64 param_1,ulong64 param_2,ulong64 param_3,
          FftManager *param_4)

{
  ChannelView *pCVar1;
  bool bVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ChannelView *pCVar6;
  ulonglong uVar7;
  FatalLogger local_118;
  
  this->fft_manager_ = param_4;
  uVar5 = 0;
  uVar7 = param_4->fft_size_;
  this->fft_size_ = uVar7;
  this->chunk_size_ = uVar7 >> 1;
  this->frames_per_buffer_ = param_2;
  uVar3 = CeilToMultipleOfFramesPerBuffer(param_3,param_2);
  this->max_filter_size_ = uVar3;
  this->max_num_partitions_ = uVar3 / this->frames_per_buffer_;
  uVar3 = CeilToMultipleOfFramesPerBuffer(param_1,this->frames_per_buffer_);
  this->filter_size_ = uVar3;
  this->num_partitions_ = uVar3 / this->frames_per_buffer_;
  AudioBuffer::AudioBuffer
            (&this->kernel_freq_domain_buffer_,this->max_num_partitions_,this->fft_size_);
  this->buffer_selector_ = 0;
  this->curr_front_buffer_ = 0;
  AudioBuffer::AudioBuffer(&this->freq_domain_buffer_,this->max_num_partitions_,this->fft_size_);
  AudioBuffer::AudioBuffer(&this->filtered_time_domain_buffers_,2,this->fft_size_);
  AudioBuffer::AudioBuffer(&this->freq_domain_accumulator_,1,this->fft_size_);
  AudioBuffer::AudioBuffer(&this->temp_zeropad_buffer_,1,this->chunk_size_);
  AudioBuffer::AudioBuffer(&this->temp_kernel_chunk_buffer_,1,this->frames_per_buffer_);
  uVar7 = (ulonglong)_tls_index;
  if (this->fft_manager_ == (FftManager *)0x0) {
    FatalLogger::FatalLogger
              (&local_118,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\dsp\\partitioned_fft_filter.cc"
               ,0x44);
    uVar4 = 1;
  }
  else {
    uVar4 = uVar5;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) <
         `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__), uVar4 = 0,
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
  if (uVar4 != 0) {
    FatalLogger::~FatalLogger(&local_118);
  }
  bVar2 = false;
  if (this->chunk_size_ < this->frames_per_buffer_) {
    bVar2 = true;
    FatalLogger::FatalLogger
              (&local_118,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\dsp\\partitioned_fft_filter.cc"
               ,0x45);
  }
  else if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) <
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
  if (bVar2) {
    FatalLogger::~FatalLogger(&local_118);
  }
  bVar2 = false;
  if (this->filter_size_ < param_1) {
    bVar2 = true;
    FatalLogger::FatalLogger
              (&local_118,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\dsp\\partitioned_fft_filter.cc"
               ,0x46);
  }
  else if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) <
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
  if (bVar2) {
    FatalLogger::~FatalLogger(&local_118);
  }
  bVar2 = false;
  if (this->max_filter_size_ < param_3) {
    bVar2 = true;
    FatalLogger::FatalLogger
              (&local_118,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\dsp\\partitioned_fft_filter.cc"
               ,0x47);
  }
  else if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) <
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
  if (bVar2) {
    FatalLogger::~FatalLogger(&local_118);
  }
  bVar2 = false;
  if (this->max_filter_size_ < param_1) {
    bVar2 = true;
    FatalLogger::FatalLogger
              (&local_118,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\dsp\\partitioned_fft_filter.cc"
               ,0x49);
  }
  else if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) <
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
  if (bVar2) {
    FatalLogger::~FatalLogger(&local_118);
  }
  bVar2 = false;
  if (this->num_partitions_ * this->frames_per_buffer_ - this->filter_size_ == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) <
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
  else {
    bVar2 = true;
    FatalLogger::FatalLogger
              (&local_118,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\dsp\\partitioned_fft_filter.cc"
               ,0x4b);
  }
  if (bVar2) {
    FatalLogger::~FatalLogger(&local_118);
  }
  bVar2 = false;
  if (this->max_num_partitions_ * this->frames_per_buffer_ - this->max_filter_size_ == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) <
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
  else {
    bVar2 = true;
    FatalLogger::FatalLogger
              (&local_118,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\dsp\\partitioned_fft_filter.cc"
               ,0x4c);
  }
  if (bVar2) {
    FatalLogger::~FatalLogger(&local_118);
  }
  uVar7 = uVar5;
  if (this->num_partitions_ != 0) {
    do {
      pCVar1 = (this->kernel_freq_domain_buffer_).channel_views_._Mypair._Myval2._Myfirst;
      memset(*(void **)((longlong)&pCVar1->begin_itr_ + uVar5),0,
             *(longlong *)((longlong)&pCVar1->size_ + uVar5) << 2);
      pCVar1 = (this->freq_domain_buffer_).channel_views_._Mypair._Myval2._Myfirst;
      memset(*(void **)((longlong)&pCVar1->begin_itr_ + uVar5),0,
             *(longlong *)((longlong)&pCVar1->size_ + uVar5) << 2);
      uVar7 = uVar7 + 1;
      uVar5 = uVar5 + 0x18;
    } while (uVar7 < this->num_partitions_);
  }
  pCVar1 = (this->filtered_time_domain_buffers_).channel_views_._Mypair._Myval2._Mylast;
  for (pCVar6 = (this->filtered_time_domain_buffers_).channel_views_._Mypair._Myval2._Myfirst;
      pCVar6 != pCVar1; pCVar6 = pCVar6 + 1) {
    pCVar6->enabled_ = true;
    memset(pCVar6->begin_itr_,0,pCVar6->size_ << 2);
  }
  return this;
}

// PartitionedFftFilter @ 14f077230

PartitionedFftFilter * __thiscall
vraudio::PartitionedFftFilter::PartitionedFftFilter
          (PartitionedFftFilter *this,ulong64 param_1,ulong64 param_2,FftManager *param_3)

{
  PartitionedFftFilter(this,param_1,param_2,param_1,param_3);
  return this;
}

// Clear @ 14f077260

void __thiscall vraudio::PartitionedFftFilter::Clear(PartitionedFftFilter *this)

{
  ChannelView *pCVar1;
  ChannelView *pCVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  uVar4 = uVar3;
  if (this->num_partitions_ != 0) {
    do {
      pCVar1 = (this->kernel_freq_domain_buffer_).channel_views_._Mypair._Myval2._Myfirst;
      memset(*(void **)((longlong)&pCVar1->begin_itr_ + uVar3),0,
             *(longlong *)((longlong)&pCVar1->size_ + uVar3) << 2);
      pCVar1 = (this->freq_domain_buffer_).channel_views_._Mypair._Myval2._Myfirst;
      memset(*(void **)((longlong)&pCVar1->begin_itr_ + uVar3),0,
             *(longlong *)((longlong)&pCVar1->size_ + uVar3) << 2);
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 + 0x18;
    } while (uVar4 < this->num_partitions_);
  }
  pCVar1 = (this->filtered_time_domain_buffers_).channel_views_._Mypair._Myval2._Mylast;
  for (pCVar2 = (this->filtered_time_domain_buffers_).channel_views_._Mypair._Myval2._Myfirst;
      pCVar2 != pCVar1; pCVar2 = pCVar2 + 1) {
    pCVar2->enabled_ = true;
    memset(pCVar2->begin_itr_,0,pCVar2->size_ << 2);
  }
  return;
}

// Filter @ 14f077310

void __thiscall
vraudio::PartitionedFftFilter::Filter(PartitionedFftFilter *this,ChannelView *param_1)

{
  ChannelView *pCVar1;
  ChannelView *pCVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (this->fft_size_ != 0) {
    memmove((this->freq_domain_buffer_).channel_views_._Mypair._Myval2._Myfirst
            [this->curr_front_buffer_].begin_itr_,param_1->begin_itr_,this->fft_size_ * 4);
  }
  uVar3 = 0;
  uVar5 = (ulong64)(this->buffer_selector_ == 0);
  this->buffer_selector_ = uVar5;
  pCVar2 = (this->freq_domain_accumulator_).channel_views_._Mypair._Myval2._Myfirst;
  pCVar1 = (this->freq_domain_accumulator_).channel_views_._Mypair._Myval2._Mylast;
  if (pCVar2 != pCVar1) {
    do {
      pCVar2->enabled_ = true;
      memset(pCVar2->begin_itr_,0,pCVar2->size_ << 2);
      pCVar2 = pCVar2 + 1;
    } while (pCVar2 != pCVar1);
    uVar5 = this->buffer_selector_;
  }
  uVar6 = this->num_partitions_;
  pCVar2 = (this->freq_domain_accumulator_).channel_views_._Mypair._Myval2._Myfirst;
  uVar4 = uVar3;
  uVar7 = 0;
  if (uVar6 != 0) {
    do {
      FftManager::FreqDomainConvolution
                (this->fft_manager_,
                 (this->freq_domain_buffer_).channel_views_._Mypair._Myval2._Myfirst +
                 (this->curr_front_buffer_ + uVar4) % uVar6,
                 (ChannelView *)
                 ((longlong)
                  &((this->kernel_freq_domain_buffer_).channel_views_._Mypair._Myval2._Myfirst)->
                   begin_itr_ + uVar3),pCVar2);
      uVar6 = this->num_partitions_;
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 + 0x18;
    } while (uVar4 < uVar6);
    uVar5 = this->buffer_selector_;
    uVar7 = uVar6;
  }
  uVar3 = uVar7;
  if (uVar7 == 0) {
    uVar3 = 1;
  }
  this->curr_front_buffer_ = (this->curr_front_buffer_ + (uVar7 - 1)) % uVar3;
  FftManager::TimeFromFreqDomain
            (this->fft_manager_,pCVar2,
             (this->filtered_time_domain_buffers_).channel_views_._Mypair._Myval2._Myfirst + uVar5);
  return;
}

// GetFilteredSignal @ 14f077480

void __thiscall
vraudio::PartitionedFftFilter::GetFilteredSignal(PartitionedFftFilter *this,ChannelView *param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ChannelView *pCVar3;
  ChannelView *pCVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulong64 uVar7;
  
  uVar1 = this->buffer_selector_;
  uVar6 = 0;
  uVar2 = this->chunk_size_;
  uVar5 = uVar6;
  if (uVar1 == 0) {
    uVar5 = 0x18;
  }
  uVar7 = this->frames_per_buffer_;
  if (uVar7 == uVar2) {
    pCVar3 = (this->filtered_time_domain_buffers_).channel_views_._Mypair._Myval2._Myfirst;
    AddPointwise(uVar2,pCVar3[uVar1].begin_itr_,
                 (float *)(*(longlong *)((longlong)&pCVar3->begin_itr_ + uVar5) + uVar2 * 4),
                 param_1->begin_itr_);
    return;
  }
  pCVar3 = (this->filtered_time_domain_buffers_).channel_views_._Mypair._Myval2._Myfirst;
  pCVar4 = (this->temp_zeropad_buffer_).channel_views_._Mypair._Myval2._Myfirst;
  if (uVar7 != 0) {
    do {
      pCVar4->begin_itr_[uVar6] =
           *(float *)(*(longlong *)((longlong)&pCVar3->begin_itr_ + uVar5) + (uVar7 + uVar6) * 4) +
           pCVar3[uVar1].begin_itr_[uVar6];
      uVar6 = uVar6 + 1;
      uVar7 = this->frames_per_buffer_;
    } while (uVar6 < uVar7);
    if (uVar7 != 0) {
      memmove(param_1->begin_itr_,pCVar4->begin_itr_,uVar7 * 4);
    }
  }
  return;
}

// ReplacePartition @ 14f077570

void __thiscall
vraudio::PartitionedFftFilter::ReplacePartition
          (PartitionedFftFilter *this,ulong64 param_1,ChannelView *param_2)

{
  FftManager::FreqFromTimeDomain
            (this->fft_manager_,param_2,
             (this->kernel_freq_domain_buffer_).channel_views_._Mypair._Myval2._Myfirst + param_1);
  return;
}

// ResetFreqDomainBuffers @ 14f077590

void __thiscall
vraudio::PartitionedFftFilter::ResetFreqDomainBuffers(PartitionedFftFilter *this,ulong64 param_1)

{
  vector<vraudio::ChannelView,std::allocator<vraudio::ChannelView>_> *pvVar1;
  ChannelView *pCVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  ChannelView *pCVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  AudioBuffer local_68;
  
  uVar3 = CeilToMultipleOfFramesPerBuffer(param_1,this->frames_per_buffer_);
  uVar9 = this->num_partitions_;
  this->filter_size_ = uVar3;
  uVar4 = uVar3 / this->frames_per_buffer_;
  pvVar1 = &(this->freq_domain_buffer_).channel_views_;
  uVar8 = 1;
  if (1 < uVar4) {
    uVar8 = uVar4;
  }
  this->num_partitions_ = uVar8;
  uVar4 = uVar9;
  if (uVar8 < uVar9) {
    uVar4 = uVar8;
  }
  if (this->curr_front_buffer_ != 0) {
    AudioBuffer::AudioBuffer(&local_68,uVar4,this->fft_size_);
    uVar8 = 0;
    if (uVar4 != 0) {
      lVar10 = 0;
      do {
        pCVar2 = (pvVar1->_Mypair)._Myval2._Myfirst + (this->curr_front_buffer_ + uVar8) % uVar9;
        pCVar5 = (ChannelView *)
                 ((longlong)&(local_68.channel_views_._Mypair._Myval2._Myfirst)->begin_itr_ + lVar10
                 );
        if (pCVar5 != pCVar2) {
          memcpy(pCVar5->begin_itr_,pCVar2->begin_itr_,pCVar5->size_ << 2);
        }
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 0x18;
      } while (uVar8 < uVar4);
      lVar10 = 0;
      do {
        puVar7 = (undefined8 *)
                 ((longlong)&(local_68.channel_views_._Mypair._Myval2._Myfirst)->begin_itr_ + lVar10
                 );
        puVar6 = (undefined8 *)
                 ((longlong)&((pvVar1->_Mypair)._Myval2._Myfirst)->begin_itr_ + lVar10);
        if (puVar6 != puVar7) {
          memcpy((void *)*puVar6,(void *)*puVar7,puVar6[1] << 2);
        }
        lVar10 = lVar10 + 0x18;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    this->curr_front_buffer_ = 0;
    AudioBuffer::~AudioBuffer(&local_68);
  }
  if (uVar9 < this->num_partitions_) {
    lVar10 = uVar9 * 0x18;
    do {
      pCVar2 = (this->freq_domain_buffer_).channel_views_._Mypair._Myval2._Myfirst;
      memset(*(void **)((longlong)&pCVar2->begin_itr_ + lVar10),0,
             *(longlong *)((longlong)&pCVar2->size_ + lVar10) << 2);
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x18;
    } while (uVar9 < this->num_partitions_);
  }
  return;
}

// SetFilterLength @ 14f077720

void __thiscall
vraudio::PartitionedFftFilter::SetFilterLength(PartitionedFftFilter *this,ulong64 param_1)

{
  ulonglong uVar1;
  ChannelView *pCVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = CeilToMultipleOfFramesPerBuffer(param_1,this->frames_per_buffer_);
  uVar1 = this->num_partitions_;
  uVar4 = uVar3 / this->frames_per_buffer_;
  if (uVar1 < uVar4) {
    lVar5 = uVar1 * 0x18;
    lVar6 = uVar4 - uVar1;
    do {
      pCVar2 = (this->kernel_freq_domain_buffer_).channel_views_._Mypair._Myval2._Myfirst;
      memset(*(void **)((longlong)&pCVar2->begin_itr_ + lVar5),0,
             *(longlong *)((longlong)&pCVar2->size_ + lVar5) << 2);
      lVar5 = lVar5 + 0x18;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  ResetFreqDomainBuffers(this,uVar3);
  return;
}

// SetFreqDomainKernel @ 14f0777c0

void __thiscall
vraudio::PartitionedFftFilter::SetFreqDomainKernel(PartitionedFftFilter *this,AudioBuffer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  longlong lVar5;
  ChannelView *pCVar6;
  
  pCVar6 = (param_1->channel_views_)._Mypair._Myval2._Myfirst;
  lVar5 = (longlong)(param_1->channel_views_)._Mypair._Myval2._Mylast - (longlong)pCVar6;
  lVar5 = lVar5 / 6 + (lVar5 >> 0x3f);
  uVar3 = (lVar5 >> 2) - (lVar5 >> 0x3f);
  if (uVar3 != 0) {
    lVar5 = 0;
    uVar4 = uVar3;
    do {
      puVar1 = (undefined8 *)((longlong)&pCVar6->begin_itr_ + lVar5);
      puVar2 = (undefined8 *)
               ((longlong)
                &((this->kernel_freq_domain_buffer_).channel_views_._Mypair._Myval2._Myfirst)->
                 begin_itr_ + lVar5);
      if (puVar2 != puVar1) {
        memcpy((void *)*puVar2,(void *)*puVar1,puVar2[1] << 2);
        pCVar6 = (param_1->channel_views_)._Mypair._Myval2._Myfirst;
      }
      lVar5 = lVar5 + 0x18;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (uVar3 != this->num_partitions_) {
    ResetFreqDomainBuffers(this,uVar3 * this->frames_per_buffer_);
  }
  return;
}

// SetTimeDomainKernel @ 14f077880

/* WARNING: Removing unreachable block (ram,0x00014f07795a) */
/* WARNING: Removing unreachable block (ram,0x00014f077965) */
/* WARNING: Removing unreachable block (ram,0x00014f077969) */
/* WARNING: Removing unreachable block (ram,0x00014f07796e) */

void __thiscall
vraudio::PartitionedFftFilter::SetTimeDomainKernel(PartitionedFftFilter *this,ChannelView *param_1)

{
  float *pfVar1;
  ulong64 uVar2;
  ChannelView *pCVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar2 = this->frames_per_buffer_;
  uVar4 = CeilToMultipleOfFramesPerBuffer(param_1->size_,uVar2);
  pCVar3 = (this->temp_kernel_chunk_buffer_).channel_views_._Mypair._Myval2._Myfirst;
  uVar5 = uVar4 / uVar2;
  uVar7 = 0;
  uVar9 = uVar7;
  if (uVar5 != 0) {
    do {
      uVar8 = this->frames_per_buffer_;
      pfVar1 = param_1->begin_itr_ + uVar8 * uVar7;
      uVar6 = (longlong)((param_1->size_ * 4 - (longlong)pfVar1) + (longlong)param_1->begin_itr_) >>
              2;
      if (uVar6 < uVar8) {
        uVar8 = uVar6;
      }
      if (uVar8 != 0) {
        memmove(pCVar3->begin_itr_,pfVar1,uVar8 * 4);
      }
      pfVar1 = pCVar3->begin_itr_ + uVar8;
      memset(pfVar1,0,(longlong)pCVar3->begin_itr_ + (pCVar3->size_ * 4 - (longlong)pfVar1) &
                      0xfffffffffffffffc);
      FftManager::FreqFromTimeDomain
                (this->fft_manager_,pCVar3,
                 (ChannelView *)
                 ((longlong)
                  &((this->kernel_freq_domain_buffer_).channel_views_._Mypair._Myval2._Myfirst)->
                   begin_itr_ + uVar9));
      uVar7 = uVar7 + 1;
      uVar9 = uVar9 + 0x18;
    } while (uVar7 < uVar5);
  }
  if (uVar5 != this->num_partitions_) {
    ResetFreqDomainBuffers(this,uVar5 * this->frames_per_buffer_);
  }
  return;
}

