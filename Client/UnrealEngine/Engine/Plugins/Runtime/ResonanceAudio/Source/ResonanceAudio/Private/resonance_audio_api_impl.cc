// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 191

// FillOutputBuffer<short_*> @ 14f08ada0

bool __thiscall
vraudio::ResonanceAudioApiImpl::FillOutputBuffer<short_*>
          (ResonanceAudioApiImpl *this,ulong64 param_1,ulong64 param_2,short *param_3)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  AudioBuffer *pAVar2;
  __uint64 _Var3;
  NullLogger local_res20 [8];
  
  if (param_3 == (short *)0x0) {
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
                ::__l2::kNullStream,kBadInputPointerMessage);
    return false;
  }
  if (param_1 == 2) {
    _Var3 = (this->system_settings_).num_channels_ * (this->system_settings_).frames_per_buffer_;
    if (param_2 * 2 == _Var3) {
      ProcessNextBuffer(this);
      pAVar2 = GraphManager::GetStereoBuffer((this->graph_manager_)._Mypair._Myval2);
      if (pAVar2 != (AudioBuffer *)0x0) {
        FillExternalBuffer(pAVar2,param_3,param_2,2);
        return true;
      }
    }
    else {
      pbVar1 = NullLogger::GetStream(local_res20);
      pbVar1 = std::operator<<<std::char_traits<char>_>(pbVar1,"Output buffer size must be ");
      pbVar1 = (basic_ostream<char,std::char_traits<char>_> *)
               std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,_Var3);
      std::operator<<<std::char_traits<char>_>(pbVar1," samples");
    }
    return false;
  }
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
              ::__l2::kNullStream,"Output buffer must be stereo");
  return false;
}

// FillOutputBuffer<float_*> @ 14f08af90

bool __thiscall
vraudio::ResonanceAudioApiImpl::FillOutputBuffer<float_*>
          (ResonanceAudioApiImpl *this,ulong64 param_1,ulong64 param_2,float *param_3)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  AudioBuffer *pAVar2;
  __uint64 _Var3;
  NullLogger local_res20 [8];
  
  if (param_3 == (float *)0x0) {
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
                ::__l2::kNullStream,kBadInputPointerMessage);
    return false;
  }
  if (param_1 == 2) {
    _Var3 = (this->system_settings_).num_channels_ * (this->system_settings_).frames_per_buffer_;
    if (param_2 * 2 == _Var3) {
      ProcessNextBuffer(this);
      pAVar2 = GraphManager::GetStereoBuffer((this->graph_manager_)._Mypair._Myval2);
      if (pAVar2 != (AudioBuffer *)0x0) {
        FillExternalBuffer(pAVar2,param_3,param_2,2);
        return true;
      }
    }
    else {
      pbVar1 = NullLogger::GetStream(local_res20);
      pbVar1 = std::operator<<<std::char_traits<char>_>(pbVar1,"Output buffer size must be ");
      pbVar1 = (basic_ostream<char,std::char_traits<char>_> *)
               std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,_Var3);
      std::operator<<<std::char_traits<char>_>(pbVar1," samples");
    }
    return false;
  }
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
              ::__l2::kNullStream,"Output buffer must be stereo");
  return false;
}

// FillOutputBuffer<short_*_const_*> @ 14f08b180

bool __thiscall
vraudio::ResonanceAudioApiImpl::FillOutputBuffer<short_*_const_*>
          (ResonanceAudioApiImpl *this,ulong64 param_1,ulong64 param_2,short **param_3)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  AudioBuffer *pAVar2;
  __uint64 _Var3;
  NullLogger local_res20 [8];
  
  if (param_3 == (short **)0x0) {
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
                ::__l2::kNullStream,kBadInputPointerMessage);
    return false;
  }
  if (param_1 == 2) {
    _Var3 = (this->system_settings_).num_channels_ * (this->system_settings_).frames_per_buffer_;
    if (param_2 * 2 == _Var3) {
      ProcessNextBuffer(this);
      pAVar2 = GraphManager::GetStereoBuffer((this->graph_manager_)._Mypair._Myval2);
      if (pAVar2 != (AudioBuffer *)0x0) {
        FillExternalBuffer(pAVar2,param_3,param_2,2);
        return true;
      }
    }
    else {
      pbVar1 = NullLogger::GetStream(local_res20);
      pbVar1 = std::operator<<<std::char_traits<char>_>(pbVar1,"Output buffer size must be ");
      pbVar1 = (basic_ostream<char,std::char_traits<char>_> *)
               std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,_Var3);
      std::operator<<<std::char_traits<char>_>(pbVar1," samples");
    }
    return false;
  }
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
              ::__l2::kNullStream,"Output buffer must be stereo");
  return false;
}

// FillOutputBuffer<float_*_const_*> @ 14f08b370

bool __thiscall
vraudio::ResonanceAudioApiImpl::FillOutputBuffer<float_*_const_*>
          (ResonanceAudioApiImpl *this,ulong64 param_1,ulong64 param_2,float **param_3)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  AudioBuffer *pAVar2;
  __uint64 _Var3;
  NullLogger local_res20 [8];
  
  if (param_3 == (float **)0x0) {
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
                ::__l2::kNullStream,kBadInputPointerMessage);
    return false;
  }
  if (param_1 == 2) {
    _Var3 = (this->system_settings_).num_channels_ * (this->system_settings_).frames_per_buffer_;
    if (param_2 * 2 == _Var3) {
      ProcessNextBuffer(this);
      pAVar2 = GraphManager::GetStereoBuffer((this->graph_manager_)._Mypair._Myval2);
      if (pAVar2 != (AudioBuffer *)0x0) {
        FillExternalBuffer(pAVar2,param_3,param_2,2);
        return true;
      }
    }
    else {
      pbVar1 = NullLogger::GetStream(local_res20);
      pbVar1 = std::operator<<<std::char_traits<char>_>(pbVar1,"Output buffer size must be ");
      pbVar1 = (basic_ostream<char,std::char_traits<char>_> *)
               std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,_Var3);
      std::operator<<<std::char_traits<char>_>(pbVar1," samples");
    }
    return false;
  }
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
              ::__l2::kNullStream,"Output buffer must be stereo");
  return false;
}

// SetSourceBuffer<short_const_*> @ 14f08b560

void __thiscall
vraudio::ResonanceAudioApiImpl::SetSourceBuffer<short_const_*>
          (ResonanceAudioApiImpl *this,int param_1,short *param_2,ulong64 param_3,ulong64 param_4)

{
  ulonglong uVar1;
  AudioBuffer *pAVar2;
  basic_ostream<char,std::char_traits<char>_> *pbVar3;
  ulong64 *puVar4;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_> _Var5;
  ulong64 uVar6;
  NullLogger local_res8 [8];
  vector<unsigned___int64,std::allocator<unsigned___int64>_> local_58;
  vector<unsigned___int64,std::allocator<unsigned___int64>_> local_40;
  
  LocklessTaskQueue::Execute(&this->task_queue_);
  if (param_2 == (short *)0x0) {
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
                ::__l2::kNullStream,kBadInputPointerMessage);
    return;
  }
  if (param_4 == (this->system_settings_).frames_per_buffer_) {
    pAVar2 = GraphManager::GetMutableAudioBuffer((this->graph_manager_)._Mypair._Myval2,param_1);
    if (pAVar2 == (AudioBuffer *)0x0) {
      pbVar3 = NullLogger::GetStream(local_res8);
      std::operator<<<std::char_traits<char>_>(pbVar3,"Source audio buffer not found");
    }
    else {
      uVar1 = ((longlong)(pAVar2->channel_views_)._Mypair._Myval2._Mylast -
              (longlong)(pAVar2->channel_views_)._Mypair._Myval2._Myfirst) / 0x18;
      if (param_3 == uVar1) {
        FillAudioBuffer(param_2,param_4,param_3,pAVar2);
      }
      else if ((param_3 == 1) && (uVar1 == 2)) {
        local_58._Mypair._Myval2._Myfirst = (ulong64 *)0x0;
        local_58._Mypair._Myval2._Mylast = (ulong64 *)0x0;
        local_40._Mypair._Myval2._Myfirst = std::_Allocate<16,std::_Default_allocate_traits>(0x10);
        puVar4 = local_40._Mypair._Myval2._Myfirst + 2;
        local_40._Mypair._Myval2._Myend = puVar4;
        memmove(local_40._Mypair._Myval2._Myfirst,&local_58,0x10);
        local_40._Mypair._Myval2._Mylast = puVar4;
        FillAudioBufferWithChannelRemapping(param_2,param_4,1,&local_40,pAVar2);
        if (local_40._Mypair._Myval2._Myfirst != (ulong64 *)0x0) {
          uVar6 = (longlong)local_40._Mypair._Myval2._Myend -
                  (longlong)local_40._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
          puVar4 = local_40._Mypair._Myval2._Myfirst;
          if (0xfff < uVar6) {
            puVar4 = (ulong64 *)local_40._Mypair._Myval2._Myfirst[-1];
            uVar6 = uVar6 + 0x27;
            if (0x1f < (ulonglong)
                       ((longlong)local_40._Mypair._Myval2._Myfirst + (-8 - (longlong)puVar4))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete(puVar4,uVar6);
        }
      }
      else if (uVar1 < param_3) {
        local_58._Mypair._Myval2._Myend = (ulong64 *)0x0;
        local_58._Mypair._Myval2._Myfirst = (ulong64 *)0x0;
        local_58._Mypair._Myval2._Mylast = (ulong64 *)0x0;
        if (uVar1 != 0) {
          if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
            std::vector<unsigned___int64,std::allocator<unsigned___int64>_>::_Xlength();
          }
          uVar6 = uVar1 * 8;
          local_58._Mypair._Myval2._Myfirst =
               std::_Allocate<16,std::_Default_allocate_traits>(uVar6);
          _Var5 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                  (uVar6 + (longlong)local_58._Mypair._Myval2._Myfirst);
          local_58._Mypair._Myval2._Myend = (ulong64 *)_Var5;
          memset(local_58._Mypair._Myval2._Myfirst,0,uVar6);
          local_58._Mypair._Myval2._Mylast = (ulong64 *)_Var5;
        }
        std::
        iota<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>,int>
                  ((_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                   local_58._Mypair._Myval2._Myfirst,
                   (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                   local_58._Mypair._Myval2._Mylast,0);
        FillAudioBufferWithChannelRemapping(param_2,param_4,param_3,&local_58,pAVar2);
        if ((_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
            local_58._Mypair._Myval2._Myfirst !=
            (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)0x0) {
          uVar6 = (longlong)local_58._Mypair._Myval2._Myend -
                  (longlong)local_58._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
          _Var5 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                  local_58._Mypair._Myval2._Myfirst;
          if (0xfff < uVar6) {
            _Var5 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_> *)
                     ((longlong)local_58._Mypair._Myval2._Myfirst + -8);
            uVar6 = uVar6 + 0x27;
            if (0x1f < ((longlong)local_58._Mypair._Myval2._Myfirst - (longlong)_Var5) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)_Var5,uVar6);
        }
      }
      else {
        pbVar3 = NullLogger::GetStream(local_res8);
        std::operator<<<std::char_traits<char>_>
                  (pbVar3,"Number of input channels does not match the number of output channels");
      }
    }
  }
  else {
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
                ::__l2::kNullStream,kBufferSizeMustMatchNumFramesMessage);
  }
  return;
}

// SetSourceBuffer<float_const_*> @ 14f08b930

void __thiscall
vraudio::ResonanceAudioApiImpl::SetSourceBuffer<float_const_*>
          (ResonanceAudioApiImpl *this,int param_1,float *param_2,ulong64 param_3,ulong64 param_4)

{
  ulonglong uVar1;
  AudioBuffer *pAVar2;
  basic_ostream<char,std::char_traits<char>_> *pbVar3;
  ulong64 *puVar4;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_> _Var5;
  ulong64 uVar6;
  NullLogger local_res8 [8];
  vector<unsigned___int64,std::allocator<unsigned___int64>_> local_58;
  vector<unsigned___int64,std::allocator<unsigned___int64>_> local_40;
  
  LocklessTaskQueue::Execute(&this->task_queue_);
  if (param_2 == (float *)0x0) {
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
                ::__l2::kNullStream,kBadInputPointerMessage);
    return;
  }
  if (param_4 == (this->system_settings_).frames_per_buffer_) {
    pAVar2 = GraphManager::GetMutableAudioBuffer((this->graph_manager_)._Mypair._Myval2,param_1);
    if (pAVar2 == (AudioBuffer *)0x0) {
      pbVar3 = NullLogger::GetStream(local_res8);
      std::operator<<<std::char_traits<char>_>(pbVar3,"Source audio buffer not found");
    }
    else {
      uVar1 = ((longlong)(pAVar2->channel_views_)._Mypair._Myval2._Mylast -
              (longlong)(pAVar2->channel_views_)._Mypair._Myval2._Myfirst) / 0x18;
      if (param_3 == uVar1) {
        FillAudioBuffer(param_2,param_4,param_3,pAVar2);
      }
      else if ((param_3 == 1) && (uVar1 == 2)) {
        local_58._Mypair._Myval2._Myfirst = (ulong64 *)0x0;
        local_58._Mypair._Myval2._Mylast = (ulong64 *)0x0;
        local_40._Mypair._Myval2._Myfirst = std::_Allocate<16,std::_Default_allocate_traits>(0x10);
        puVar4 = local_40._Mypair._Myval2._Myfirst + 2;
        local_40._Mypair._Myval2._Myend = puVar4;
        memmove(local_40._Mypair._Myval2._Myfirst,&local_58,0x10);
        local_40._Mypair._Myval2._Mylast = puVar4;
        FillAudioBufferWithChannelRemapping(param_2,param_4,1,&local_40,pAVar2);
        if (local_40._Mypair._Myval2._Myfirst != (ulong64 *)0x0) {
          uVar6 = (longlong)local_40._Mypair._Myval2._Myend -
                  (longlong)local_40._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
          puVar4 = local_40._Mypair._Myval2._Myfirst;
          if (0xfff < uVar6) {
            puVar4 = (ulong64 *)local_40._Mypair._Myval2._Myfirst[-1];
            uVar6 = uVar6 + 0x27;
            if (0x1f < (ulonglong)
                       ((longlong)local_40._Mypair._Myval2._Myfirst + (-8 - (longlong)puVar4))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete(puVar4,uVar6);
        }
      }
      else if (uVar1 < param_3) {
        local_58._Mypair._Myval2._Myend = (ulong64 *)0x0;
        local_58._Mypair._Myval2._Myfirst = (ulong64 *)0x0;
        local_58._Mypair._Myval2._Mylast = (ulong64 *)0x0;
        if (uVar1 != 0) {
          if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
            std::vector<unsigned___int64,std::allocator<unsigned___int64>_>::_Xlength();
          }
          uVar6 = uVar1 * 8;
          local_58._Mypair._Myval2._Myfirst =
               std::_Allocate<16,std::_Default_allocate_traits>(uVar6);
          _Var5 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                  (uVar6 + (longlong)local_58._Mypair._Myval2._Myfirst);
          local_58._Mypair._Myval2._Myend = (ulong64 *)_Var5;
          memset(local_58._Mypair._Myval2._Myfirst,0,uVar6);
          local_58._Mypair._Myval2._Mylast = (ulong64 *)_Var5;
        }
        std::
        iota<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>,int>
                  ((_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                   local_58._Mypair._Myval2._Myfirst,
                   (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                   local_58._Mypair._Myval2._Mylast,0);
        FillAudioBufferWithChannelRemapping(param_2,param_4,param_3,&local_58,pAVar2);
        if ((_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
            local_58._Mypair._Myval2._Myfirst !=
            (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)0x0) {
          uVar6 = (longlong)local_58._Mypair._Myval2._Myend -
                  (longlong)local_58._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
          _Var5 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                  local_58._Mypair._Myval2._Myfirst;
          if (0xfff < uVar6) {
            _Var5 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_> *)
                     ((longlong)local_58._Mypair._Myval2._Myfirst + -8);
            uVar6 = uVar6 + 0x27;
            if (0x1f < ((longlong)local_58._Mypair._Myval2._Myfirst - (longlong)_Var5) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)_Var5,uVar6);
        }
      }
      else {
        pbVar3 = NullLogger::GetStream(local_res8);
        std::operator<<<std::char_traits<char>_>
                  (pbVar3,"Number of input channels does not match the number of output channels");
      }
    }
  }
  else {
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
                ::__l2::kNullStream,kBufferSizeMustMatchNumFramesMessage);
  }
  return;
}

// SetSourceBuffer<short_const_*_const_*> @ 14f08bd00

void __thiscall
vraudio::ResonanceAudioApiImpl::SetSourceBuffer<short_const_*_const_*>
          (ResonanceAudioApiImpl *this,int param_1,short **param_2,ulong64 param_3,ulong64 param_4)

{
  ulonglong uVar1;
  AudioBuffer *pAVar2;
  basic_ostream<char,std::char_traits<char>_> *pbVar3;
  ulong64 *puVar4;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_> _Var5;
  ulong64 uVar6;
  NullLogger local_res8 [8];
  vector<unsigned___int64,std::allocator<unsigned___int64>_> local_58;
  vector<unsigned___int64,std::allocator<unsigned___int64>_> local_40;
  
  LocklessTaskQueue::Execute(&this->task_queue_);
  if (param_2 == (short **)0x0) {
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
                ::__l2::kNullStream,kBadInputPointerMessage);
    return;
  }
  if (param_4 == (this->system_settings_).frames_per_buffer_) {
    pAVar2 = GraphManager::GetMutableAudioBuffer((this->graph_manager_)._Mypair._Myval2,param_1);
    if (pAVar2 == (AudioBuffer *)0x0) {
      pbVar3 = NullLogger::GetStream(local_res8);
      std::operator<<<std::char_traits<char>_>(pbVar3,"Source audio buffer not found");
    }
    else {
      uVar1 = ((longlong)(pAVar2->channel_views_)._Mypair._Myval2._Mylast -
              (longlong)(pAVar2->channel_views_)._Mypair._Myval2._Myfirst) / 0x18;
      if (param_3 == uVar1) {
        FillAudioBuffer(param_2,param_4,param_3,pAVar2);
      }
      else if ((param_3 == 1) && (uVar1 == 2)) {
        local_58._Mypair._Myval2._Myfirst = (ulong64 *)0x0;
        local_58._Mypair._Myval2._Mylast = (ulong64 *)0x0;
        local_40._Mypair._Myval2._Myfirst = std::_Allocate<16,std::_Default_allocate_traits>(0x10);
        puVar4 = local_40._Mypair._Myval2._Myfirst + 2;
        local_40._Mypair._Myval2._Myend = puVar4;
        memmove(local_40._Mypair._Myval2._Myfirst,&local_58,0x10);
        local_40._Mypair._Myval2._Mylast = puVar4;
        FillAudioBufferWithChannelRemapping(param_2,param_4,1,&local_40,pAVar2);
        if (local_40._Mypair._Myval2._Myfirst != (ulong64 *)0x0) {
          uVar6 = (longlong)local_40._Mypair._Myval2._Myend -
                  (longlong)local_40._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
          puVar4 = local_40._Mypair._Myval2._Myfirst;
          if (0xfff < uVar6) {
            puVar4 = (ulong64 *)local_40._Mypair._Myval2._Myfirst[-1];
            uVar6 = uVar6 + 0x27;
            if (0x1f < (ulonglong)
                       ((longlong)local_40._Mypair._Myval2._Myfirst + (-8 - (longlong)puVar4))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete(puVar4,uVar6);
        }
      }
      else if (uVar1 < param_3) {
        local_58._Mypair._Myval2._Myend = (ulong64 *)0x0;
        local_58._Mypair._Myval2._Myfirst = (ulong64 *)0x0;
        local_58._Mypair._Myval2._Mylast = (ulong64 *)0x0;
        if (uVar1 != 0) {
          if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
            std::vector<unsigned___int64,std::allocator<unsigned___int64>_>::_Xlength();
          }
          uVar6 = uVar1 * 8;
          local_58._Mypair._Myval2._Myfirst =
               std::_Allocate<16,std::_Default_allocate_traits>(uVar6);
          _Var5 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                  (uVar6 + (longlong)local_58._Mypair._Myval2._Myfirst);
          local_58._Mypair._Myval2._Myend = (ulong64 *)_Var5;
          memset(local_58._Mypair._Myval2._Myfirst,0,uVar6);
          local_58._Mypair._Myval2._Mylast = (ulong64 *)_Var5;
        }
        std::
        iota<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>,int>
                  ((_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                   local_58._Mypair._Myval2._Myfirst,
                   (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                   local_58._Mypair._Myval2._Mylast,0);
        FillAudioBufferWithChannelRemapping(param_2,param_4,param_3,&local_58,pAVar2);
        if ((_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
            local_58._Mypair._Myval2._Myfirst !=
            (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)0x0) {
          uVar6 = (longlong)local_58._Mypair._Myval2._Myend -
                  (longlong)local_58._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
          _Var5 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                  local_58._Mypair._Myval2._Myfirst;
          if (0xfff < uVar6) {
            _Var5 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_> *)
                     ((longlong)local_58._Mypair._Myval2._Myfirst + -8);
            uVar6 = uVar6 + 0x27;
            if (0x1f < ((longlong)local_58._Mypair._Myval2._Myfirst - (longlong)_Var5) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)_Var5,uVar6);
        }
      }
      else {
        pbVar3 = NullLogger::GetStream(local_res8);
        std::operator<<<std::char_traits<char>_>
                  (pbVar3,"Number of input channels does not match the number of output channels");
      }
    }
  }
  else {
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
                ::__l2::kNullStream,kBufferSizeMustMatchNumFramesMessage);
  }
  return;
}

// SetSourceBuffer<float_const_*_const_*> @ 14f08c0d0

void __thiscall
vraudio::ResonanceAudioApiImpl::SetSourceBuffer<float_const_*_const_*>
          (ResonanceAudioApiImpl *this,int param_1,float **param_2,ulong64 param_3,ulong64 param_4)

{
  ulonglong uVar1;
  AudioBuffer *pAVar2;
  basic_ostream<char,std::char_traits<char>_> *pbVar3;
  ulong64 *puVar4;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_> _Var5;
  ulong64 uVar6;
  NullLogger local_res8 [8];
  vector<unsigned___int64,std::allocator<unsigned___int64>_> local_58;
  vector<unsigned___int64,std::allocator<unsigned___int64>_> local_40;
  
  LocklessTaskQueue::Execute(&this->task_queue_);
  if (param_2 == (float **)0x0) {
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
                ::__l2::kNullStream,kBadInputPointerMessage);
    return;
  }
  if (param_4 == (this->system_settings_).frames_per_buffer_) {
    pAVar2 = GraphManager::GetMutableAudioBuffer((this->graph_manager_)._Mypair._Myval2,param_1);
    if (pAVar2 == (AudioBuffer *)0x0) {
      pbVar3 = NullLogger::GetStream(local_res8);
      std::operator<<<std::char_traits<char>_>(pbVar3,"Source audio buffer not found");
    }
    else {
      uVar1 = ((longlong)(pAVar2->channel_views_)._Mypair._Myval2._Mylast -
              (longlong)(pAVar2->channel_views_)._Mypair._Myval2._Myfirst) / 0x18;
      if (param_3 == uVar1) {
        FillAudioBuffer(param_2,param_4,param_3,pAVar2);
      }
      else if ((param_3 == 1) && (uVar1 == 2)) {
        local_58._Mypair._Myval2._Myfirst = (ulong64 *)0x0;
        local_58._Mypair._Myval2._Mylast = (ulong64 *)0x0;
        local_40._Mypair._Myval2._Myfirst = std::_Allocate<16,std::_Default_allocate_traits>(0x10);
        puVar4 = local_40._Mypair._Myval2._Myfirst + 2;
        local_40._Mypair._Myval2._Myend = puVar4;
        memmove(local_40._Mypair._Myval2._Myfirst,&local_58,0x10);
        local_40._Mypair._Myval2._Mylast = puVar4;
        FillAudioBufferWithChannelRemapping(param_2,param_4,1,&local_40,pAVar2);
        if (local_40._Mypair._Myval2._Myfirst != (ulong64 *)0x0) {
          uVar6 = (longlong)local_40._Mypair._Myval2._Myend -
                  (longlong)local_40._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
          puVar4 = local_40._Mypair._Myval2._Myfirst;
          if (0xfff < uVar6) {
            puVar4 = (ulong64 *)local_40._Mypair._Myval2._Myfirst[-1];
            uVar6 = uVar6 + 0x27;
            if (0x1f < (ulonglong)
                       ((longlong)local_40._Mypair._Myval2._Myfirst + (-8 - (longlong)puVar4))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete(puVar4,uVar6);
        }
      }
      else if (uVar1 < param_3) {
        local_58._Mypair._Myval2._Myend = (ulong64 *)0x0;
        local_58._Mypair._Myval2._Myfirst = (ulong64 *)0x0;
        local_58._Mypair._Myval2._Mylast = (ulong64 *)0x0;
        if (uVar1 != 0) {
          if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
            std::vector<unsigned___int64,std::allocator<unsigned___int64>_>::_Xlength();
          }
          uVar6 = uVar1 * 8;
          local_58._Mypair._Myval2._Myfirst =
               std::_Allocate<16,std::_Default_allocate_traits>(uVar6);
          _Var5 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                  (uVar6 + (longlong)local_58._Mypair._Myval2._Myfirst);
          local_58._Mypair._Myval2._Myend = (ulong64 *)_Var5;
          memset(local_58._Mypair._Myval2._Myfirst,0,uVar6);
          local_58._Mypair._Myval2._Mylast = (ulong64 *)_Var5;
        }
        std::
        iota<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>,int>
                  ((_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                   local_58._Mypair._Myval2._Myfirst,
                   (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                   local_58._Mypair._Myval2._Mylast,0);
        FillAudioBufferWithChannelRemapping(param_2,param_4,param_3,&local_58,pAVar2);
        if ((_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
            local_58._Mypair._Myval2._Myfirst !=
            (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)0x0) {
          uVar6 = (longlong)local_58._Mypair._Myval2._Myend -
                  (longlong)local_58._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
          _Var5 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                  local_58._Mypair._Myval2._Myfirst;
          if (0xfff < uVar6) {
            _Var5 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_> *)
                     ((longlong)local_58._Mypair._Myval2._Myfirst + -8);
            uVar6 = uVar6 + 0x27;
            if (0x1f < ((longlong)local_58._Mypair._Myval2._Myfirst - (longlong)_Var5) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)_Var5,uVar6);
        }
      }
      else {
        pbVar3 = NullLogger::GetStream(local_res8);
        std::operator<<<std::char_traits<char>_>
                  (pbVar3,"Number of input channels does not match the number of output channels");
      }
    }
  }
  else {
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
                ::__l2::kNullStream,kBufferSizeMustMatchNumFramesMessage);
  }
  return;
}

// iota<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>,int> @ 14f08c4a0

void __cdecl
std::iota<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>,int>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_> param_1,
          _Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_> param_2,
          int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 (*pauVar7) [16];
  longlong lVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  iVar3 = __xmm_00000003000000020000000100000000._4_4_;
  iVar2 = (int)__xmm_00000003000000020000000100000000;
  uVar11 = (longlong)param_2 - (longlong)param_1 >> 3;
  if (uVar11 < 0x80000000) {
    uVar10 = (uint)uVar11;
    iVar13 = 0;
    if (((uVar10 != 0) && (iVar13 = 0, 7 < uVar10)) && (1 < __isa_available)) {
      uVar4 = uVar10 & 0x80000007;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
      }
      pauVar7 = (undefined1 (*) [16])((longlong)param_1 + 0x20);
      iVar12 = 0;
      iVar9 = 4;
      do {
        iVar5 = iVar9 + -2;
        iVar1 = iVar9 + 2;
        iVar13 = iVar12 + 8;
        auVar14._0_4_ = iVar12 + iVar2 + param_3;
        auVar14._4_4_ = iVar12 + iVar3 + param_3;
        auVar14._8_4_ = iVar12;
        auVar14._12_4_ = iVar12;
        auVar15._0_4_ = iVar5 + iVar2 + param_3;
        auVar15._4_4_ = iVar5 + iVar3 + param_3;
        auVar15._8_4_ = iVar5;
        auVar15._12_4_ = iVar5;
        auVar14 = pmovsxdq(auVar14,auVar14);
        pauVar7[-2] = auVar14;
        auVar14 = pmovsxdq(auVar14,auVar15);
        pauVar7[-1] = auVar14;
        auVar16._0_4_ = iVar9 + iVar2 + param_3;
        auVar16._4_4_ = iVar9 + iVar3 + param_3;
        auVar16._8_4_ = iVar9;
        auVar16._12_4_ = iVar9;
        auVar14 = pmovsxdq(auVar14,auVar16);
        auVar17._0_4_ = iVar1 + iVar2 + param_3;
        auVar17._4_4_ = iVar1 + iVar3 + param_3;
        auVar17._8_4_ = iVar1;
        auVar17._12_4_ = iVar1;
        *pauVar7 = auVar14;
        auVar14 = pmovsxdq(auVar14,auVar17);
        pauVar7[1] = auVar14;
        pauVar7 = pauVar7 + 4;
        iVar12 = iVar13;
        iVar9 = iVar9 + 8;
      } while (iVar13 != uVar10 - uVar4);
    }
    lVar8 = (longlong)iVar13;
    if (lVar8 != (int)uVar10) {
      iVar13 = iVar13 + param_3;
      do {
        lVar6 = (longlong)iVar13;
        iVar13 = iVar13 + 1;
        *(longlong *)((longlong)param_1 + lVar8 * 8) = lVar6;
        lVar8 = lVar8 + 1;
      } while (lVar8 != (int)uVar10);
      return;
    }
  }
  else {
    for (; param_1 != param_2;
        param_1 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                  ((longlong)param_1 + 8)) {
      lVar8 = (longlong)param_3;
      param_3 = param_3 + 1;
      *(longlong *)param_1 = lVar8;
    }
  }
  return;
}

// uninitialized_fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>_> @ 14f08c610

void __cdecl
std::
uninitialized_fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>_*,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>_>
          (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
           *param_1,
          _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
          *param_2,_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
                   *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// ResonanceAudioApiImpl @ 14f08c640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ResonanceAudioApiImpl * __thiscall
vraudio::ResonanceAudioApiImpl::ResonanceAudioApiImpl
          (ResonanceAudioApiImpl *this,ulong64 param_1,ulong64 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
  *p_Var3;
  void *pvVar4;
  undefined8 *puVar5;
  basic_ostream<char,std::char_traits<char>_> *pbVar6;
  GraphManager *pGVar7;
  GraphManager *pGVar8;
  ulong64 uVar9;
  NullLogger local_38 [16];
  
  uVar2 = _UNK_150689648;
  *(undefined8 *)&(this->system_settings_).head_rotation_ = ___xmm_3f800000000000000000000000000000;
  *(undefined8 *)&(this->system_settings_).head_rotation_.field_0x8 = uVar2;
  (this->system_settings_).sample_rate_hz_ = param_3;
  pGVar8 = (GraphManager *)0x0;
  (this->system_settings_).frames_per_buffer_ = param_2;
  (this->system_settings_).num_channels_ = param_1;
  *(undefined8 *)&(this->system_settings_).head_position_ = 0;
  *(undefined4 *)&(this->system_settings_).head_position_.field_0x8 = 0;
  this->_padding_ = (longlong)&___7ResonanceAudioApiImpl_vraudio__6B_;
  (this->graph_manager_)._Mypair._Myval2 = (GraphManager *)0x0;
  *(undefined4 *)&(this->system_settings_).source_parameters_manager_.parameters_ = 0;
  *(undefined8 *)&(this->system_settings_).source_parameters_manager_.parameters_.field_0x8 = 0;
  *(undefined8 *)&(this->system_settings_).source_parameters_manager_.parameters_.field_0x10 = 0;
  pvVar4 = ::operator_new(0x78);
  *(void **)pvVar4 = pvVar4;
  *(void **)((longlong)pvVar4 + 8) = pvVar4;
  *(void **)&(this->system_settings_).source_parameters_manager_.parameters_.field_0x8 = pvVar4;
  *(undefined8 *)&(this->system_settings_).source_parameters_manager_.parameters_.field_0x18 = 0;
  *(undefined8 *)&(this->system_settings_).source_parameters_manager_.parameters_.field_0x20 = 0;
  *(undefined8 *)&(this->system_settings_).source_parameters_manager_.parameters_.field_0x28 = 0;
  *(undefined8 *)&(this->system_settings_).source_parameters_manager_.parameters_.field_0x30 = 7;
  *(undefined8 *)&(this->system_settings_).source_parameters_manager_.parameters_.field_0x38 = 8;
  *(undefined4 *)&(this->system_settings_).source_parameters_manager_.parameters_ = 0x3f800000;
  uVar2 = *(undefined8 *)&(this->system_settings_).source_parameters_manager_.parameters_.field_0x8;
  puVar5 = ::operator_new(0x80);
  p_Var3 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
             **)&(this->system_settings_).source_parameters_manager_.parameters_.field_0x18;
  uVar9 = *(longlong *)&(this->system_settings_).source_parameters_manager_.parameters_.field_0x28 -
          (longlong)p_Var3 >> 3;
  if (uVar9 != 0) {
    std::
    allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>_>
    ::deallocate((allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>_>
                  *)&(this->system_settings_).source_parameters_manager_.parameters_.field_0x18,
                 p_Var3,uVar9);
  }
  puVar1 = puVar5 + 0x10;
  *(undefined8 **)&(this->system_settings_).source_parameters_manager_.parameters_.field_0x18 =
       puVar5;
  *(undefined8 **)&(this->system_settings_).source_parameters_manager_.parameters_.field_0x20 =
       puVar1;
  *(undefined8 **)&(this->system_settings_).source_parameters_manager_.parameters_.field_0x28 =
       puVar1;
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    *puVar5 = uVar2;
  }
  (this->system_settings_).primary_gain_ = 1.0;
  (this->system_settings_).reflection_properties_.room_position[0] = 0.0;
  (this->system_settings_).reflection_properties_.room_position[1] = 0.0;
  (this->system_settings_).reflection_properties_.room_position[2] = 0.0;
  (this->system_settings_).reflection_properties_.room_rotation[0] = 0.0;
  (this->system_settings_).reflection_properties_.room_rotation[1] = 0.0;
  (this->system_settings_).reflection_properties_.room_rotation[2] = 0.0;
  *(undefined8 *)((this->system_settings_).reflection_properties_.room_rotation + 3) = 0x3f800000;
  (this->system_settings_).reflection_properties_.room_dimensions[1] = 0.0;
  (this->system_settings_).reflection_properties_.room_dimensions[2] = 0.0;
  (this->system_settings_).reflection_properties_.cutoff_frequency = 0.0;
  (this->system_settings_).reflection_properties_.coefficients[0] = 0.0;
  (this->system_settings_).reflection_properties_.coefficients[1] = 0.0;
  (this->system_settings_).reflection_properties_.coefficients[2] = 0.0;
  (this->system_settings_).reflection_properties_.coefficients[3] = 0.0;
  (this->system_settings_).reflection_properties_.coefficients[4] = 0.0;
  *(undefined8 *)((this->system_settings_).reflection_properties_.coefficients + 5) = 0;
  (this->system_settings_).reverb_properties_.rt60_values[0] = 0.0;
  (this->system_settings_).reverb_properties_.rt60_values[1] = 0.0;
  (this->system_settings_).reverb_properties_.rt60_values[2] = 0.0;
  (this->system_settings_).reverb_properties_.rt60_values[3] = 0.0;
  (this->system_settings_).reverb_properties_.rt60_values[4] = 0.0;
  (this->system_settings_).reverb_properties_.rt60_values[5] = 0.0;
  (this->system_settings_).reverb_properties_.rt60_values[6] = 0.0;
  (this->system_settings_).reverb_properties_.rt60_values[7] = 0.0;
  *(undefined8 *)((this->system_settings_).reverb_properties_.rt60_values + 8) = 0;
  (this->system_settings_).stereo_speaker_mode_ = false;
  LocklessTaskQueue::LocklessTaskQueue(&this->task_queue_,0x6400);
  this->source_id_counter_ = (atomic<int>)0x0;
  if (param_1 == 2) {
    if (param_2 < 0x4001) {
      if (param_2 < FftManager::kMinFftSize) {
        pbVar6 = NullLogger::GetStream(local_38);
        pbVar6 = std::operator<<<std::char_traits<char>_>
                           (pbVar6,"The minimum number of frames per buffer is ");
        pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)
                 std::basic_ostream<char,std::char_traits<char>_>::operator<<
                           (pbVar6,FftManager::kMinFftSize);
        std::operator<<<std::char_traits<char>_>(pbVar6," samples");
      }
      else {
        pGVar7 = ::operator_new(0x350);
        if (pGVar7 != (GraphManager *)0x0) {
          pGVar8 = GraphManager::GraphManager(pGVar7,&this->system_settings_);
        }
        pGVar7 = (this->graph_manager_)._Mypair._Myval2;
        (this->graph_manager_)._Mypair._Myval2 = pGVar8;
        if (pGVar7 != (GraphManager *)0x0) {
          GraphManager::~GraphManager(pGVar7);
          ::operator_delete(pGVar7,0x350);
        }
      }
    }
    else {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
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
      pbVar6 = std::operator<<<std::char_traits<char>_>
                         ((basic_ostream<char,std::char_traits<char>_> *)
                          &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                           ::__l2::kNullStream,"Only frame lengths up to ");
      pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)
               std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar6,0x4000);
      std::operator<<<std::char_traits<char>_>(pbVar6," are supported.");
    }
  }
  else {
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
                ::__l2::kNullStream,"Only stereo output is supported");
  }
  return this;
}

// ~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>_>_> @ 14f08c9b0

void __thiscall
std::
_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>_>_>
::
~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>_>_>
          (_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>_>_>
           *this)

{
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
  _Var1;
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
  _Var2;
  ulong64 uVar3;
  
  _Var1 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
           )(this->_Mypair)._Myval2._Myfirst;
  if (_Var1 != (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
                )0x0) {
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)_Var1 & 0xfffffffffffffff8;
    _Var2 = _Var1;
    if (0xfff < uVar3) {
      _Var2 = *(_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
                *)((longlong)_Var1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)_Var1 + (-8 - (longlong)_Var2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)_Var2,uVar3);
    (this->_Mypair)._Myval2._Myfirst =
         (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
          *)0x0;
    (this->_Mypair)._Myval2._Mylast =
         (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
          *)0x0;
    (this->_Mypair)._Myval2._Myend =
         (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
          *)0x0;
  }
  return;
}

// ~vector<std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_> @ 14f08ca30

void __thiscall
std::
vector<std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>
::
~vector<std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>
          (vector<std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>
           *this)

{
  ulong64 uVar1;
  pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *ppVar2;
  pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *ppVar3;
  
  ppVar2 = (this->_Mypair)._Myval2._Myfirst;
  if (ppVar2 != (pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)
                0x0) {
    ppVar3 = (this->_Mypair)._Myval2._Mylast;
    for (; ppVar2 != ppVar3; ppVar2 = ppVar2 + 1) {
      basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (&ppVar2->second);
    }
    ppVar2 = (this->_Mypair)._Myval2._Myfirst;
    uVar1 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)ppVar2) / 0x28) * 0x28;
    ppVar3 = ppVar2;
    if (0xfff < uVar1) {
      ppVar3 = (pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)
               ppVar2[-1].second._Mypair._Myval2._Myres;
      uVar1 = uVar1 + 0x27;
      if (0x1f < (ulonglong)((longlong)ppVar2 + (-8 - (longlong)ppVar3))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(ppVar3,uVar1);
    (this->_Mypair)._Myval2._Myfirst =
         (pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)0x0;
    (this->_Mypair)._Myval2._Mylast =
         (pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)0x0;
    (this->_Mypair)._Myval2._Myend =
         (pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)0x0;
  }
  return;
}

// ~GraphManager @ 14f08cb00

void __thiscall vraudio::GraphManager::~GraphManager(GraphManager *this)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  AmbisonicLookupTable *pAVar8;
  Mixer *this_00;
  longlong lVar9;
  void *pvVar10;
  ulong64 uVar11;
  
  pvVar4 = *(void **)&(this->source_nodes_).field_0x18;
  if (pvVar4 != (void *)0x0) {
    uVar11 = *(longlong *)&(this->source_nodes_).field_0x28 - (longlong)pvVar4 & 0xfffffffffffffff8;
    pvVar10 = pvVar4;
    if (0xfff < uVar11) {
      pvVar10 = *(void **)((longlong)pvVar4 + -8);
      uVar11 = uVar11 + 0x27;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar10))) goto LAB_14f08cf95;
    }
    ::operator_delete(pvVar10,uVar11);
    *(undefined8 *)&(this->source_nodes_).field_0x18 = 0;
    *(undefined8 *)&(this->source_nodes_).field_0x20 = 0;
    *(undefined8 *)&(this->source_nodes_).field_0x28 = 0;
  }
  puVar5 = *(undefined8 **)&(this->source_nodes_).field_0x8;
  *(undefined8 *)puVar5[1] = 0;
  puVar5 = (undefined8 *)*puVar5;
  while (puVar5 != (undefined8 *)0x0) {
    plVar6 = (longlong *)puVar5[4];
    puVar7 = (undefined8 *)*puVar5;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
    ::operator_delete(puVar5,0x28);
    puVar5 = puVar7;
  }
  ::operator_delete(*(void **)&(this->source_nodes_).field_0x8,0x28);
  plVar6 = *(longlong **)&(this->output_node_).field_0x8;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  plVar6 = *(longlong **)&(this->stereo_mixing_panner_node_).field_0x8;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  pvVar4 = *(void **)&(this->ambisonic_mixing_encoder_nodes_).field_0x18;
  if (pvVar4 != (void *)0x0) {
    uVar11 = *(longlong *)&(this->ambisonic_mixing_encoder_nodes_).field_0x28 - (longlong)pvVar4 &
             0xfffffffffffffff8;
    pvVar10 = pvVar4;
    if (0xfff < uVar11) {
      pvVar10 = *(void **)((longlong)pvVar4 + -8);
      uVar11 = uVar11 + 0x27;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar10))) goto LAB_14f08cf95;
    }
    ::operator_delete(pvVar10,uVar11);
    *(undefined8 *)&(this->ambisonic_mixing_encoder_nodes_).field_0x18 = 0;
    *(undefined8 *)&(this->ambisonic_mixing_encoder_nodes_).field_0x20 = 0;
    *(undefined8 *)&(this->ambisonic_mixing_encoder_nodes_).field_0x28 = 0;
  }
  puVar5 = *(undefined8 **)&(this->ambisonic_mixing_encoder_nodes_).field_0x8;
  *(undefined8 *)puVar5[1] = 0;
  puVar5 = (undefined8 *)*puVar5;
  while (puVar5 != (undefined8 *)0x0) {
    plVar6 = (longlong *)puVar5[4];
    puVar7 = (undefined8 *)*puVar5;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
    ::operator_delete(puVar5,0x28);
    puVar5 = puVar7;
  }
  ::operator_delete(*(void **)&(this->ambisonic_mixing_encoder_nodes_).field_0x8,0x28);
  plVar6 = *(longlong **)&(this->stereo_mixer_node_).field_0x8;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  pvVar4 = *(void **)&(this->ambisonic_mixer_nodes_).field_0x18;
  if (pvVar4 != (void *)0x0) {
    uVar11 = *(longlong *)&(this->ambisonic_mixer_nodes_).field_0x28 - (longlong)pvVar4 &
             0xfffffffffffffff8;
    pvVar10 = pvVar4;
    if (0xfff < uVar11) {
      pvVar10 = *(void **)((longlong)pvVar4 + -8);
      uVar11 = uVar11 + 0x27;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar10))) {
LAB_14f08cf95:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar10,uVar11);
    *(undefined8 *)&(this->ambisonic_mixer_nodes_).field_0x18 = 0;
    *(undefined8 *)&(this->ambisonic_mixer_nodes_).field_0x20 = 0;
    *(undefined8 *)&(this->ambisonic_mixer_nodes_).field_0x28 = 0;
  }
  puVar5 = *(undefined8 **)&(this->ambisonic_mixer_nodes_).field_0x8;
  *(undefined8 *)puVar5[1] = 0;
  puVar5 = (undefined8 *)*puVar5;
  while (puVar5 != (undefined8 *)0x0) {
    plVar6 = (longlong *)puVar5[4];
    puVar7 = (undefined8 *)*puVar5;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
    ::operator_delete(puVar5,0x28);
    puVar5 = puVar7;
  }
  ::operator_delete(*(void **)&(this->ambisonic_mixer_nodes_).field_0x8,0x28);
  AudioBuffer::~AudioBuffer(&(this->resampler_).state_);
  AudioBuffer::~AudioBuffer(&(this->resampler_).temporary_filter_coeffs_);
  AudioBuffer::~AudioBuffer(&(this->resampler_).transposed_filter_coeffs_);
  FftManager::~FftManager(&this->fft_manager_);
  pAVar8 = (this->lookup_table_)._Mypair._Myval2;
  if (pAVar8 != (AmbisonicLookupTable *)0x0) {
    std::vector<float,std::allocator<float>_>::~vector<float,std::allocator<float>_>
              (&pAVar8->symmetries_table_);
    std::vector<float,std::allocator<float>_>::~vector<float,std::allocator<float>_>
              (&pAVar8->encoder_table_);
    ::operator_delete(pAVar8,0x40);
  }
  std::
  vector<std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>
  ::
  ~vector<std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::allocator<std::pair<int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>
            (&(this->config_).sh_hrir_filenames);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (&(this->config_).configuration_name);
  this_00 = (this->ambisonic_output_mixer_)._Mypair._Myval2;
  if (this_00 != (Mixer *)0x0) {
    AudioBuffer::~AudioBuffer(&this_00->output_);
    ::operator_delete(this_00,0x50);
  }
  plVar6 = *(longlong **)&(this->reverb_node_).field_0x8;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  plVar6 = *(longlong **)&(this->reflections_gain_mixer_node_).field_0x8;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  plVar6 = *(longlong **)&(this->reflections_node_).field_0x8;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  plVar6 = *(longlong **)&(this->reverb_gain_mixer_node_).field_0x8;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  return;
}

// ~ResonanceAudioApi @ 14f08cfc0

void __thiscall vraudio::ResonanceAudioApi::~ResonanceAudioApi(ResonanceAudioApi *this)

{
  *this = (ResonanceAudioApi)&___7ResonanceAudioApi_vraudio__6B_;
  return;
}

// ~ResonanceAudioApiImpl @ 14f08cfe0

void __thiscall vraudio::ResonanceAudioApiImpl::~ResonanceAudioApiImpl(ResonanceAudioApiImpl *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  GraphManager *this_00;
  
  this->_padding_ = (longlong)&___7ResonanceAudioApiImpl_vraudio__6B_;
  LocklessTaskQueue::Execute(&this->task_queue_);
  LocklessTaskQueue::~LocklessTaskQueue(&this->task_queue_);
  std::
  _Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>_>_>
  ::
  ~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>_>_>
            ((_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>_>_>
              *)&(this->system_settings_).source_parameters_manager_.parameters_.field_0x18);
  puVar1 = *(undefined8 **)
            &(this->system_settings_).source_parameters_manager_.parameters_.field_0x8;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    ::operator_delete(puVar1,0x78);
    puVar1 = puVar2;
  }
  ::operator_delete(*(void **)&(this->system_settings_).source_parameters_manager_.parameters_.
                               field_0x8,0x78);
  this_00 = (this->graph_manager_)._Mypair._Myval2;
  if (this_00 != (GraphManager *)0x0) {
    GraphManager::~GraphManager(this_00);
    ::operator_delete(this_00,0x350);
  }
  this->_padding_ = (longlong)&___7ResonanceAudioApi_vraudio__6B_;
  return;
}

// `scalar_deleting_destructor' @ 14f08d090

void * __thiscall
vraudio::ResonanceAudioApi::_scalar_deleting_destructor_(ResonanceAudioApi *this,uint param_1)

{
  *this = (ResonanceAudioApi)&___7ResonanceAudioApi_vraudio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f08d0d0

void * __thiscall
vraudio::ResonanceAudioApiImpl::_scalar_deleting_destructor_
          (ResonanceAudioApiImpl *this,uint param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  GraphManager *this_00;
  
  this->_padding_ = (longlong)&___7ResonanceAudioApiImpl_vraudio__6B_;
  LocklessTaskQueue::Execute(&this->task_queue_);
  LocklessTaskQueue::~LocklessTaskQueue(&this->task_queue_);
  std::
  _Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>_>_>
  ::
  ~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>_>_>
            ((_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>_>_>
              *)&(this->system_settings_).source_parameters_manager_.parameters_.field_0x18);
  puVar1 = *(undefined8 **)
            &(this->system_settings_).source_parameters_manager_.parameters_.field_0x8;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    ::operator_delete(puVar1,0x78);
    puVar1 = puVar2;
  }
  ::operator_delete(*(void **)&(this->system_settings_).source_parameters_manager_.parameters_.
                               field_0x8,0x78);
  this_00 = (this->graph_manager_)._Mypair._Myval2;
  if (this_00 != (GraphManager *)0x0) {
    GraphManager::~GraphManager(this_00);
    ::operator_delete(this_00,0x350);
  }
  this->_padding_ = (longlong)&___7ResonanceAudioApi_vraudio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a0);
  }
  return this;
}

// CreateAmbisonicSource @ 14f08d1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
vraudio::ResonanceAudioApiImpl::CreateAmbisonicSource(ResonanceAudioApiImpl *this,ulong64 param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ulong64 uVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_a8 [32];
  NullLogger local_88 [32];
  undefined1 local_68 [16];
  atomic<int> local_58;
  undefined1 local_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  ulonglong local_50;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (3 < param_1) {
    auVar7._0_8_ = (double)param_1;
    auVar7._8_8_ = 0;
    lVar5 = 0;
    auVar7 = sqrtpd(auVar7,auVar7);
    dVar6 = auVar7._0_8_;
    if ((__real_43e0000000000000 <= dVar6) &&
       (dVar6 = dVar6 - __real_43e0000000000000, dVar6 < __real_43e0000000000000)) {
      lVar5 = -0x8000000000000000;
    }
    if (param_1 == ((longlong)dVar6 + lVar5) * ((longlong)dVar6 + lVar5)) {
      LOCK();
      paVar1 = &this->source_id_counter_;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
      uVar3 = GraphManager::GetNumMaxAmbisonicChannels((this->graph_manager_)._Mypair._Myval2);
      local_50 = param_1;
      if (uVar3 < param_1) {
        local_50 = uVar3;
      }
      if (local_50 < param_1) {
        pbVar4 = NullLogger::GetStream(local_88);
        pbVar4 = std::operator<<<std::char_traits<char>_>
                           (pbVar4,"Number of ambisonic channels will be diminished to ");
        std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,local_50);
      }
      local_68._0_8_ =
           &std::
            _Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::CreateAmbisonicSource'::`2'::<lambda_1>,void>
            ::_vftable_;
      local_54 = local_88[0x14];
      uStack_53 = local_88[0x15];
      uStack_52 = local_88[0x16];
      uStack_51 = local_88[0x17];
      local_30 = (longlong *)local_68;
      local_68._8_8_ = this;
      local_58 = aVar2;
      LocklessTaskQueue::Post(&this->task_queue_,(function<void___cdecl(void)> *)local_68);
      if (local_30 == (longlong *)0x0) {
        return (int)aVar2;
      }
      (**(code **)(*local_30 + 0x20))(local_30,local_30 != (longlong *)local_68);
      return (int)aVar2;
    }
  }
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
  pbVar4 = std::operator<<<std::char_traits<char>_>
                     ((basic_ostream<char,std::char_traits<char>_> *)
                      &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                       ::__l2::kNullStream,"Invalid number of channels for the ambisonic source: ");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,param_1);
  return -1;
}

// CreateSoundObjectSource @ 14f08d3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
vraudio::ResonanceAudioApiImpl::CreateSoundObjectSource
          (ResonanceAudioApiImpl *this,RenderingMode param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  basic_ostream<char,std::char_traits<char>_> *pbVar3;
  longlong *plVar4;
  undefined1 auStack_f8 [32];
  NullLogger local_d8 [8];
  SourceGraphConfig local_d0;
  ResonanceAudioApiImpl *local_a8;
  atomic<int> local_a0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_98;
  int local_78;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_68 [64];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  LOCK();
  paVar1 = &this->source_id_counter_;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (param_1 == kStereoPanning) {
    StereoPanningConfig(&local_d0);
  }
  else if (param_1 == kBinauralLowQuality) {
    BinauralLowQualityConfig(&local_d0);
  }
  else if (param_1 == kBinauralMediumQuality) {
    BinauralMediumQualityConfig(&local_d0);
  }
  else {
    if (param_1 != kBinauralHighQuality) {
      if (param_1 == kRoomEffectsOnly) {
        RoomEffectsOnlyConfig(&local_d0);
        goto LAB_14f08d44d;
      }
      pbVar3 = NullLogger::GetStream(local_d8);
      std::operator<<<std::char_traits<char>_>(pbVar3,"Unknown rendering mode");
    }
    BinauralHighQualityConfig(&local_d0);
  }
LAB_14f08d44d:
  local_a8 = this;
  local_a0 = aVar2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (&local_98,&local_d0.configuration_name);
  local_78 = local_d0.ambisonic_order;
  local_74 = local_d0.enable_hrtf;
  local_73 = local_d0.enable_direct_rendering;
  plVar4 = ::operator_new(0x40);
  *plVar4 = (longlong)
            &std::
             _Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::CreateSoundObjectSource'::`2'::<lambda_1>,void>
             ::_vftable_;
  plVar4[1] = (longlong)local_a8;
  *(atomic<int> *)(plVar4 + 2) = local_a0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(plVar4 + 3),
             &local_98);
  *(int *)(plVar4 + 7) = local_78;
  *(undefined1 *)((longlong)plVar4 + 0x3c) = local_74;
  *(undefined1 *)((longlong)plVar4 + 0x3d) = local_73;
  local_68._56_8_ = plVar4;
  LocklessTaskQueue::Post(&this->task_queue_,(function<void___cdecl(void)> *)local_68);
  if ((longlong *)local_68._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_68._56_8_ + 0x20))
              (local_68._56_8_,(undefined1 *)local_68._56_8_ != local_68);
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(&local_98);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (&local_d0.configuration_name);
  return (int)aVar2;
}

// CreateStereoSource @ 14f08d530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
vraudio::ResonanceAudioApiImpl::CreateStereoSource(ResonanceAudioApiImpl *this,ulong64 param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined1 auStack_88 [48];
  undefined1 local_58 [16];
  atomic<int> local_48;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (param_1 < 3) {
    LOCK();
    paVar1 = &this->source_id_counter_;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    local_58._0_8_ =
         &std::
          _Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::CreateStereoSource'::`2'::<lambda_1>,void>
          ::_vftable_;
    local_20 = (longlong *)local_58;
    local_58._8_8_ = this;
    local_48 = aVar2;
    LocklessTaskQueue::Post(&this->task_queue_,(function<void___cdecl(void)> *)local_58);
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + 0x20))(local_20,local_20 != (longlong *)local_58);
    }
  }
  else {
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
                ::__l2::kNullStream,"Unsupported number of input channels");
    aVar2 = (atomic<int>)0xffffffff;
  }
  return (int)aVar2;
}

// DestroySource @ 14f08d660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
vraudio::ResonanceAudioApiImpl::DestroySource(ResonanceAudioApiImpl *this,int param_1)

{
  undefined1 auStack_88 [48];
  undefined1 local_58 [16];
  int local_48;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_58._0_8_ =
       &std::
        _Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::DestroySource'::`2'::<lambda_1>,void>::
        _vftable_;
  local_20 = (longlong *)local_58;
  local_58._8_8_ = this;
  local_48 = param_1;
  LocklessTaskQueue::Post(&this->task_queue_,(function<void___cdecl(void)> *)local_58);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))(local_20,local_20 != (longlong *)local_58);
  }
  return;
}

// EnableRoomEffects @ 14f08d6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
vraudio::ResonanceAudioApiImpl::EnableRoomEffects(ResonanceAudioApiImpl *this,bool param_1)

{
  undefined1 auStack_88 [48];
  undefined1 local_58 [56];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_58._0_8_ =
       &std::
        _Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::EnableRoomEffects'::`2'::<lambda_1>,void>
        ::_vftable_;
  local_20 = (longlong *)local_58;
  local_58._8_8_ = this;
  local_58[0x10] = param_1;
  LocklessTaskQueue::Post(&this->task_queue_,(function<void___cdecl(void)> *)local_58);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))(local_20,local_20 != (longlong *)local_58);
  }
  return;
}

// FillInterleavedOutputBuffer @ 14f08d790

bool __thiscall
vraudio::ResonanceAudioApiImpl::FillInterleavedOutputBuffer
          (ResonanceAudioApiImpl *this,ulong64 param_1,ulong64 param_2,short *param_3)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  AudioBuffer *pAVar2;
  __uint64 _Var3;
  NullLogger local_res20 [8];
  
  if (param_3 == (short *)0x0) {
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
                ::__l2::kNullStream,kBadInputPointerMessage);
    return false;
  }
  if (param_1 == 2) {
    _Var3 = (this->system_settings_).num_channels_ * (this->system_settings_).frames_per_buffer_;
    if (param_2 * 2 == _Var3) {
      ProcessNextBuffer(this);
      pAVar2 = GraphManager::GetStereoBuffer((this->graph_manager_)._Mypair._Myval2);
      if (pAVar2 != (AudioBuffer *)0x0) {
        FillExternalBuffer(pAVar2,param_3,param_2,2);
        return true;
      }
    }
    else {
      pbVar1 = NullLogger::GetStream(local_res20);
      pbVar1 = std::operator<<<std::char_traits<char>_>(pbVar1,"Output buffer size must be ");
      pbVar1 = (basic_ostream<char,std::char_traits<char>_> *)
               std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,_Var3);
      std::operator<<<std::char_traits<char>_>(pbVar1," samples");
    }
    return false;
  }
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
              ::__l2::kNullStream,"Output buffer must be stereo");
  return false;
}

// FillInterleavedOutputBuffer @ 14f08d980

bool __thiscall
vraudio::ResonanceAudioApiImpl::FillInterleavedOutputBuffer
          (ResonanceAudioApiImpl *this,ulong64 param_1,ulong64 param_2,float *param_3)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  AudioBuffer *pAVar2;
  __uint64 _Var3;
  NullLogger local_res20 [8];
  
  if (param_3 == (float *)0x0) {
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
                ::__l2::kNullStream,kBadInputPointerMessage);
    return false;
  }
  if (param_1 == 2) {
    _Var3 = (this->system_settings_).num_channels_ * (this->system_settings_).frames_per_buffer_;
    if (param_2 * 2 == _Var3) {
      ProcessNextBuffer(this);
      pAVar2 = GraphManager::GetStereoBuffer((this->graph_manager_)._Mypair._Myval2);
      if (pAVar2 != (AudioBuffer *)0x0) {
        FillExternalBuffer(pAVar2,param_3,param_2,2);
        return true;
      }
    }
    else {
      pbVar1 = NullLogger::GetStream(local_res20);
      pbVar1 = std::operator<<<std::char_traits<char>_>(pbVar1,"Output buffer size must be ");
      pbVar1 = (basic_ostream<char,std::char_traits<char>_> *)
               std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,_Var3);
      std::operator<<<std::char_traits<char>_>(pbVar1," samples");
    }
    return false;
  }
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
              ::__l2::kNullStream,"Output buffer must be stereo");
  return false;
}

// FillPlanarOutputBuffer @ 14f08db70

bool __thiscall
vraudio::ResonanceAudioApiImpl::FillPlanarOutputBuffer
          (ResonanceAudioApiImpl *this,ulong64 param_1,ulong64 param_2,short **param_3)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  AudioBuffer *pAVar2;
  __uint64 _Var3;
  NullLogger local_res20 [8];
  
  if (param_3 == (short **)0x0) {
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
                ::__l2::kNullStream,kBadInputPointerMessage);
    return false;
  }
  if (param_1 == 2) {
    _Var3 = (this->system_settings_).num_channels_ * (this->system_settings_).frames_per_buffer_;
    if (param_2 * 2 == _Var3) {
      ProcessNextBuffer(this);
      pAVar2 = GraphManager::GetStereoBuffer((this->graph_manager_)._Mypair._Myval2);
      if (pAVar2 != (AudioBuffer *)0x0) {
        FillExternalBuffer(pAVar2,param_3,param_2,2);
        return true;
      }
    }
    else {
      pbVar1 = NullLogger::GetStream(local_res20);
      pbVar1 = std::operator<<<std::char_traits<char>_>(pbVar1,"Output buffer size must be ");
      pbVar1 = (basic_ostream<char,std::char_traits<char>_> *)
               std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,_Var3);
      std::operator<<<std::char_traits<char>_>(pbVar1," samples");
    }
    return false;
  }
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
              ::__l2::kNullStream,"Output buffer must be stereo");
  return false;
}

// FillPlanarOutputBuffer @ 14f08dd60

bool __thiscall
vraudio::ResonanceAudioApiImpl::FillPlanarOutputBuffer
          (ResonanceAudioApiImpl *this,ulong64 param_1,ulong64 param_2,float **param_3)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  AudioBuffer *pAVar2;
  __uint64 _Var3;
  NullLogger local_res20 [8];
  
  if (param_3 == (float **)0x0) {
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
                ::__l2::kNullStream,kBadInputPointerMessage);
    return false;
  }
  if (param_1 == 2) {
    _Var3 = (this->system_settings_).num_channels_ * (this->system_settings_).frames_per_buffer_;
    if (param_2 * 2 == _Var3) {
      ProcessNextBuffer(this);
      pAVar2 = GraphManager::GetStereoBuffer((this->graph_manager_)._Mypair._Myval2);
      if (pAVar2 != (AudioBuffer *)0x0) {
        FillExternalBuffer(pAVar2,param_3,param_2,2);
        return true;
      }
    }
    else {
      pbVar1 = NullLogger::GetStream(local_res20);
      pbVar1 = std::operator<<<std::char_traits<char>_>(pbVar1,"Output buffer size must be ");
      pbVar1 = (basic_ostream<char,std::char_traits<char>_> *)
               std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,_Var3);
      std::operator<<<std::char_traits<char>_>(pbVar1," samples");
    }
    return false;
  }
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
              ::__l2::kNullStream,"Output buffer must be stereo");
  return false;
}

// GetAmbisonicOutputBuffer @ 14f08df50

AudioBuffer * __thiscall
vraudio::ResonanceAudioApiImpl::GetAmbisonicOutputBuffer(ResonanceAudioApiImpl *this)

{
  AudioBuffer *pAVar1;
  
  pAVar1 = GraphManager::GetAmbisonicBuffer((this->graph_manager_)._Mypair._Myval2);
  return pAVar1;
}

// GetStereoOutputBuffer @ 14f08df60

AudioBuffer * __thiscall
vraudio::ResonanceAudioApiImpl::GetStereoOutputBuffer(ResonanceAudioApiImpl *this)

{
  AudioBuffer *pAVar1;
  
  pAVar1 = GraphManager::GetStereoBuffer((this->graph_manager_)._Mypair._Myval2);
  return pAVar1;
}

// GetStream @ 14f08df70

basic_ostream<char,std::char_traits<char>_> * __thiscall NullLogger::GetStream(NullLogger *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
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
      return (basic_ostream<char,std::char_traits<char>_> *)
             &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
              ::__l2::kNullStream;
    }
  }
  return (basic_ostream<char,std::char_traits<char>_> *)
         &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
          ::__l2::kNullStream;
}

// ProcessNextBuffer @ 14f08e000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall vraudio::ResonanceAudioApiImpl::ProcessNextBuffer(ResonanceAudioApiImpl *this)

{
  bool bVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [56];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  LocklessTaskQueue::Execute(&this->task_queue_);
  bVar1 = GraphManager::GetRoomEffectsEnabled((this->graph_manager_)._Mypair._Myval2);
  if (bVar1) {
    GraphManager::UpdateRoomReflections((this->graph_manager_)._Mypair._Myval2);
    GraphManager::UpdateRoomReverb((this->graph_manager_)._Mypair._Myval2);
  }
  local_58._0_8_ =
       &std::
        _Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::ProcessNextBuffer'::`2'::<lambda_1>,void,vraudio::SourceParameters_*>
        ::_vftable_;
  local_20 = (longlong *)local_58;
  local_58._8_8_ = this;
  SourceParametersManager::ProcessAllParameters
            (&(this->system_settings_).source_parameters_manager_,
             (function<void___cdecl(vraudio::SourceParameters_*)> *)local_58);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))(local_20,local_20 != (longlong *)local_58);
  }
  GraphManager::Process((this->graph_manager_)._Mypair._Myval2);
  return;
}

// SetHeadPosition @ 14f08e0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
vraudio::ResonanceAudioApiImpl::SetHeadPosition
          (ResonanceAudioApiImpl *this,float param_1,float param_2,float param_3)

{
  undefined1 auStack_98 [64];
  undefined1 local_58 [16];
  float local_48;
  float local_44;
  float local_40;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_58._0_8_ =
       &std::
        _Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetHeadPosition'::`2'::<lambda_1>,void>
        ::_vftable_;
  local_20 = (longlong *)local_58;
  local_58._8_8_ = this;
  local_48 = param_1;
  local_44 = param_2;
  local_40 = param_3;
  LocklessTaskQueue::Post(&this->task_queue_,(function<void___cdecl(void)> *)local_58);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))(local_20,local_20 != (longlong *)local_58);
  }
  return;
}

// SetHeadRotation @ 14f08e150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
vraudio::ResonanceAudioApiImpl::SetHeadRotation
          (ResonanceAudioApiImpl *this,float param_1,float param_2,float param_3,float param_4)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._0_8_ =
       &std::
        _Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetHeadRotation'::`2'::<lambda_1>,void>
        ::_vftable_;
  local_20 = (longlong *)local_58;
  local_48 = param_4;
  local_58._8_8_ = this;
  local_44 = param_1;
  local_40 = param_2;
  local_3c = param_3;
  LocklessTaskQueue::Post(&this->task_queue_,(function<void___cdecl(void)> *)local_58);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))(local_20,local_20 != (longlong *)local_58);
  }
  return;
}

// SetInterleavedBuffer @ 14f08e1f0

void __thiscall
vraudio::ResonanceAudioApiImpl::SetInterleavedBuffer
          (ResonanceAudioApiImpl *this,int param_1,short *param_2,ulong64 param_3,ulong64 param_4)

{
  ulonglong uVar1;
  AudioBuffer *pAVar2;
  basic_ostream<char,std::char_traits<char>_> *pbVar3;
  ulong64 *puVar4;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_> _Var5;
  ulong64 uVar6;
  NullLogger aNStackX_8 [8];
  vector<unsigned___int64,std::allocator<unsigned___int64>_> vStack_58;
  vector<unsigned___int64,std::allocator<unsigned___int64>_> vStack_40;
  
  LocklessTaskQueue::Execute(&this->task_queue_);
  if (param_2 == (short *)0x0) {
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
                ::__l2::kNullStream,kBadInputPointerMessage);
    return;
  }
  if (param_4 == (this->system_settings_).frames_per_buffer_) {
    pAVar2 = GraphManager::GetMutableAudioBuffer((this->graph_manager_)._Mypair._Myval2,param_1);
    if (pAVar2 == (AudioBuffer *)0x0) {
      pbVar3 = NullLogger::GetStream(aNStackX_8);
      std::operator<<<std::char_traits<char>_>(pbVar3,"Source audio buffer not found");
    }
    else {
      uVar1 = ((longlong)(pAVar2->channel_views_)._Mypair._Myval2._Mylast -
              (longlong)(pAVar2->channel_views_)._Mypair._Myval2._Myfirst) / 0x18;
      if (param_3 == uVar1) {
        FillAudioBuffer(param_2,param_4,param_3,pAVar2);
      }
      else if ((param_3 == 1) && (uVar1 == 2)) {
        vStack_58._Mypair._Myval2._Myfirst = (ulong64 *)0x0;
        vStack_58._Mypair._Myval2._Mylast = (ulong64 *)0x0;
        vStack_40._Mypair._Myval2._Myfirst = std::_Allocate<16,std::_Default_allocate_traits>(0x10);
        puVar4 = vStack_40._Mypair._Myval2._Myfirst + 2;
        vStack_40._Mypair._Myval2._Myend = puVar4;
        memmove(vStack_40._Mypair._Myval2._Myfirst,&vStack_58,0x10);
        vStack_40._Mypair._Myval2._Mylast = puVar4;
        FillAudioBufferWithChannelRemapping(param_2,param_4,1,&vStack_40,pAVar2);
        if (vStack_40._Mypair._Myval2._Myfirst != (ulong64 *)0x0) {
          uVar6 = (longlong)vStack_40._Mypair._Myval2._Myend -
                  (longlong)vStack_40._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
          puVar4 = vStack_40._Mypair._Myval2._Myfirst;
          if (0xfff < uVar6) {
            puVar4 = (ulong64 *)vStack_40._Mypair._Myval2._Myfirst[-1];
            uVar6 = uVar6 + 0x27;
            if (0x1f < (ulonglong)
                       ((longlong)vStack_40._Mypair._Myval2._Myfirst + (-8 - (longlong)puVar4))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete(puVar4,uVar6);
        }
      }
      else if (uVar1 < param_3) {
        vStack_58._Mypair._Myval2._Myend = (ulong64 *)0x0;
        vStack_58._Mypair._Myval2._Myfirst = (ulong64 *)0x0;
        vStack_58._Mypair._Myval2._Mylast = (ulong64 *)0x0;
        if (uVar1 != 0) {
          if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
            std::vector<unsigned___int64,std::allocator<unsigned___int64>_>::_Xlength();
          }
          uVar6 = uVar1 * 8;
          vStack_58._Mypair._Myval2._Myfirst =
               std::_Allocate<16,std::_Default_allocate_traits>(uVar6);
          _Var5 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                  (uVar6 + (longlong)vStack_58._Mypair._Myval2._Myfirst);
          vStack_58._Mypair._Myval2._Myend = (ulong64 *)_Var5;
          memset(vStack_58._Mypair._Myval2._Myfirst,0,uVar6);
          vStack_58._Mypair._Myval2._Mylast = (ulong64 *)_Var5;
        }
        std::
        iota<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>,int>
                  ((_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                   vStack_58._Mypair._Myval2._Myfirst,
                   (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                   vStack_58._Mypair._Myval2._Mylast,0);
        FillAudioBufferWithChannelRemapping(param_2,param_4,param_3,&vStack_58,pAVar2);
        if ((_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
            vStack_58._Mypair._Myval2._Myfirst !=
            (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)0x0) {
          uVar6 = (longlong)vStack_58._Mypair._Myval2._Myend -
                  (longlong)vStack_58._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
          _Var5 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                  vStack_58._Mypair._Myval2._Myfirst;
          if (0xfff < uVar6) {
            _Var5 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_> *)
                     ((longlong)vStack_58._Mypair._Myval2._Myfirst + -8);
            uVar6 = uVar6 + 0x27;
            if (0x1f < ((longlong)vStack_58._Mypair._Myval2._Myfirst - (longlong)_Var5) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)_Var5,uVar6);
        }
      }
      else {
        pbVar3 = NullLogger::GetStream(aNStackX_8);
        std::operator<<<std::char_traits<char>_>
                  (pbVar3,"Number of input channels does not match the number of output channels");
      }
    }
  }
  else {
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
                ::__l2::kNullStream,kBufferSizeMustMatchNumFramesMessage);
  }
  return;
}

// SetInterleavedBuffer @ 14f08e200

void __thiscall
vraudio::ResonanceAudioApiImpl::SetInterleavedBuffer
          (ResonanceAudioApiImpl *this,int param_1,float *param_2,ulong64 param_3,ulong64 param_4)

{
  ulonglong uVar1;
  AudioBuffer *pAVar2;
  basic_ostream<char,std::char_traits<char>_> *pbVar3;
  ulong64 *puVar4;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_> _Var5;
  ulong64 uVar6;
  NullLogger aNStackX_8 [8];
  vector<unsigned___int64,std::allocator<unsigned___int64>_> vStack_58;
  vector<unsigned___int64,std::allocator<unsigned___int64>_> vStack_40;
  
  LocklessTaskQueue::Execute(&this->task_queue_);
  if (param_2 == (float *)0x0) {
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
                ::__l2::kNullStream,kBadInputPointerMessage);
    return;
  }
  if (param_4 == (this->system_settings_).frames_per_buffer_) {
    pAVar2 = GraphManager::GetMutableAudioBuffer((this->graph_manager_)._Mypair._Myval2,param_1);
    if (pAVar2 == (AudioBuffer *)0x0) {
      pbVar3 = NullLogger::GetStream(aNStackX_8);
      std::operator<<<std::char_traits<char>_>(pbVar3,"Source audio buffer not found");
    }
    else {
      uVar1 = ((longlong)(pAVar2->channel_views_)._Mypair._Myval2._Mylast -
              (longlong)(pAVar2->channel_views_)._Mypair._Myval2._Myfirst) / 0x18;
      if (param_3 == uVar1) {
        FillAudioBuffer(param_2,param_4,param_3,pAVar2);
      }
      else if ((param_3 == 1) && (uVar1 == 2)) {
        vStack_58._Mypair._Myval2._Myfirst = (ulong64 *)0x0;
        vStack_58._Mypair._Myval2._Mylast = (ulong64 *)0x0;
        vStack_40._Mypair._Myval2._Myfirst = std::_Allocate<16,std::_Default_allocate_traits>(0x10);
        puVar4 = vStack_40._Mypair._Myval2._Myfirst + 2;
        vStack_40._Mypair._Myval2._Myend = puVar4;
        memmove(vStack_40._Mypair._Myval2._Myfirst,&vStack_58,0x10);
        vStack_40._Mypair._Myval2._Mylast = puVar4;
        FillAudioBufferWithChannelRemapping(param_2,param_4,1,&vStack_40,pAVar2);
        if (vStack_40._Mypair._Myval2._Myfirst != (ulong64 *)0x0) {
          uVar6 = (longlong)vStack_40._Mypair._Myval2._Myend -
                  (longlong)vStack_40._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
          puVar4 = vStack_40._Mypair._Myval2._Myfirst;
          if (0xfff < uVar6) {
            puVar4 = (ulong64 *)vStack_40._Mypair._Myval2._Myfirst[-1];
            uVar6 = uVar6 + 0x27;
            if (0x1f < (ulonglong)
                       ((longlong)vStack_40._Mypair._Myval2._Myfirst + (-8 - (longlong)puVar4))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete(puVar4,uVar6);
        }
      }
      else if (uVar1 < param_3) {
        vStack_58._Mypair._Myval2._Myend = (ulong64 *)0x0;
        vStack_58._Mypair._Myval2._Myfirst = (ulong64 *)0x0;
        vStack_58._Mypair._Myval2._Mylast = (ulong64 *)0x0;
        if (uVar1 != 0) {
          if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
            std::vector<unsigned___int64,std::allocator<unsigned___int64>_>::_Xlength();
          }
          uVar6 = uVar1 * 8;
          vStack_58._Mypair._Myval2._Myfirst =
               std::_Allocate<16,std::_Default_allocate_traits>(uVar6);
          _Var5 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                  (uVar6 + (longlong)vStack_58._Mypair._Myval2._Myfirst);
          vStack_58._Mypair._Myval2._Myend = (ulong64 *)_Var5;
          memset(vStack_58._Mypair._Myval2._Myfirst,0,uVar6);
          vStack_58._Mypair._Myval2._Mylast = (ulong64 *)_Var5;
        }
        std::
        iota<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>,int>
                  ((_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                   vStack_58._Mypair._Myval2._Myfirst,
                   (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                   vStack_58._Mypair._Myval2._Mylast,0);
        FillAudioBufferWithChannelRemapping(param_2,param_4,param_3,&vStack_58,pAVar2);
        if ((_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
            vStack_58._Mypair._Myval2._Myfirst !=
            (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)0x0) {
          uVar6 = (longlong)vStack_58._Mypair._Myval2._Myend -
                  (longlong)vStack_58._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
          _Var5 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                  vStack_58._Mypair._Myval2._Myfirst;
          if (0xfff < uVar6) {
            _Var5 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_> *)
                     ((longlong)vStack_58._Mypair._Myval2._Myfirst + -8);
            uVar6 = uVar6 + 0x27;
            if (0x1f < ((longlong)vStack_58._Mypair._Myval2._Myfirst - (longlong)_Var5) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)_Var5,uVar6);
        }
      }
      else {
        pbVar3 = NullLogger::GetStream(aNStackX_8);
        std::operator<<<std::char_traits<char>_>
                  (pbVar3,"Number of input channels does not match the number of output channels");
      }
    }
  }
  else {
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
                ::__l2::kNullStream,kBufferSizeMustMatchNumFramesMessage);
  }
  return;
}

// SetPlanarBuffer @ 14f08e210

void __thiscall
vraudio::ResonanceAudioApiImpl::SetPlanarBuffer
          (ResonanceAudioApiImpl *this,int param_1,short **param_2,ulong64 param_3,ulong64 param_4)

{
  ulonglong uVar1;
  AudioBuffer *pAVar2;
  basic_ostream<char,std::char_traits<char>_> *pbVar3;
  ulong64 *puVar4;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_> _Var5;
  ulong64 uVar6;
  NullLogger aNStackX_8 [8];
  vector<unsigned___int64,std::allocator<unsigned___int64>_> vStack_58;
  vector<unsigned___int64,std::allocator<unsigned___int64>_> vStack_40;
  
  LocklessTaskQueue::Execute(&this->task_queue_);
  if (param_2 == (short **)0x0) {
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
                ::__l2::kNullStream,kBadInputPointerMessage);
    return;
  }
  if (param_4 == (this->system_settings_).frames_per_buffer_) {
    pAVar2 = GraphManager::GetMutableAudioBuffer((this->graph_manager_)._Mypair._Myval2,param_1);
    if (pAVar2 == (AudioBuffer *)0x0) {
      pbVar3 = NullLogger::GetStream(aNStackX_8);
      std::operator<<<std::char_traits<char>_>(pbVar3,"Source audio buffer not found");
    }
    else {
      uVar1 = ((longlong)(pAVar2->channel_views_)._Mypair._Myval2._Mylast -
              (longlong)(pAVar2->channel_views_)._Mypair._Myval2._Myfirst) / 0x18;
      if (param_3 == uVar1) {
        FillAudioBuffer(param_2,param_4,param_3,pAVar2);
      }
      else if ((param_3 == 1) && (uVar1 == 2)) {
        vStack_58._Mypair._Myval2._Myfirst = (ulong64 *)0x0;
        vStack_58._Mypair._Myval2._Mylast = (ulong64 *)0x0;
        vStack_40._Mypair._Myval2._Myfirst = std::_Allocate<16,std::_Default_allocate_traits>(0x10);
        puVar4 = vStack_40._Mypair._Myval2._Myfirst + 2;
        vStack_40._Mypair._Myval2._Myend = puVar4;
        memmove(vStack_40._Mypair._Myval2._Myfirst,&vStack_58,0x10);
        vStack_40._Mypair._Myval2._Mylast = puVar4;
        FillAudioBufferWithChannelRemapping(param_2,param_4,1,&vStack_40,pAVar2);
        if (vStack_40._Mypair._Myval2._Myfirst != (ulong64 *)0x0) {
          uVar6 = (longlong)vStack_40._Mypair._Myval2._Myend -
                  (longlong)vStack_40._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
          puVar4 = vStack_40._Mypair._Myval2._Myfirst;
          if (0xfff < uVar6) {
            puVar4 = (ulong64 *)vStack_40._Mypair._Myval2._Myfirst[-1];
            uVar6 = uVar6 + 0x27;
            if (0x1f < (ulonglong)
                       ((longlong)vStack_40._Mypair._Myval2._Myfirst + (-8 - (longlong)puVar4))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete(puVar4,uVar6);
        }
      }
      else if (uVar1 < param_3) {
        vStack_58._Mypair._Myval2._Myend = (ulong64 *)0x0;
        vStack_58._Mypair._Myval2._Myfirst = (ulong64 *)0x0;
        vStack_58._Mypair._Myval2._Mylast = (ulong64 *)0x0;
        if (uVar1 != 0) {
          if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
            std::vector<unsigned___int64,std::allocator<unsigned___int64>_>::_Xlength();
          }
          uVar6 = uVar1 * 8;
          vStack_58._Mypair._Myval2._Myfirst =
               std::_Allocate<16,std::_Default_allocate_traits>(uVar6);
          _Var5 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                  (uVar6 + (longlong)vStack_58._Mypair._Myval2._Myfirst);
          vStack_58._Mypair._Myval2._Myend = (ulong64 *)_Var5;
          memset(vStack_58._Mypair._Myval2._Myfirst,0,uVar6);
          vStack_58._Mypair._Myval2._Mylast = (ulong64 *)_Var5;
        }
        std::
        iota<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>,int>
                  ((_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                   vStack_58._Mypair._Myval2._Myfirst,
                   (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                   vStack_58._Mypair._Myval2._Mylast,0);
        FillAudioBufferWithChannelRemapping(param_2,param_4,param_3,&vStack_58,pAVar2);
        if ((_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
            vStack_58._Mypair._Myval2._Myfirst !=
            (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)0x0) {
          uVar6 = (longlong)vStack_58._Mypair._Myval2._Myend -
                  (longlong)vStack_58._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
          _Var5 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                  vStack_58._Mypair._Myval2._Myfirst;
          if (0xfff < uVar6) {
            _Var5 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_> *)
                     ((longlong)vStack_58._Mypair._Myval2._Myfirst + -8);
            uVar6 = uVar6 + 0x27;
            if (0x1f < ((longlong)vStack_58._Mypair._Myval2._Myfirst - (longlong)_Var5) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)_Var5,uVar6);
        }
      }
      else {
        pbVar3 = NullLogger::GetStream(aNStackX_8);
        std::operator<<<std::char_traits<char>_>
                  (pbVar3,"Number of input channels does not match the number of output channels");
      }
    }
  }
  else {
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
                ::__l2::kNullStream,kBufferSizeMustMatchNumFramesMessage);
  }
  return;
}

// SetPlanarBuffer @ 14f08e220

void __thiscall
vraudio::ResonanceAudioApiImpl::SetPlanarBuffer
          (ResonanceAudioApiImpl *this,int param_1,float **param_2,ulong64 param_3,ulong64 param_4)

{
  ulonglong uVar1;
  AudioBuffer *pAVar2;
  basic_ostream<char,std::char_traits<char>_> *pbVar3;
  ulong64 *puVar4;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_> _Var5;
  ulong64 uVar6;
  NullLogger aNStackX_8 [8];
  vector<unsigned___int64,std::allocator<unsigned___int64>_> vStack_58;
  vector<unsigned___int64,std::allocator<unsigned___int64>_> vStack_40;
  
  LocklessTaskQueue::Execute(&this->task_queue_);
  if (param_2 == (float **)0x0) {
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
                ::__l2::kNullStream,kBadInputPointerMessage);
    return;
  }
  if (param_4 == (this->system_settings_).frames_per_buffer_) {
    pAVar2 = GraphManager::GetMutableAudioBuffer((this->graph_manager_)._Mypair._Myval2,param_1);
    if (pAVar2 == (AudioBuffer *)0x0) {
      pbVar3 = NullLogger::GetStream(aNStackX_8);
      std::operator<<<std::char_traits<char>_>(pbVar3,"Source audio buffer not found");
    }
    else {
      uVar1 = ((longlong)(pAVar2->channel_views_)._Mypair._Myval2._Mylast -
              (longlong)(pAVar2->channel_views_)._Mypair._Myval2._Myfirst) / 0x18;
      if (param_3 == uVar1) {
        FillAudioBuffer(param_2,param_4,param_3,pAVar2);
      }
      else if ((param_3 == 1) && (uVar1 == 2)) {
        vStack_58._Mypair._Myval2._Myfirst = (ulong64 *)0x0;
        vStack_58._Mypair._Myval2._Mylast = (ulong64 *)0x0;
        vStack_40._Mypair._Myval2._Myfirst = std::_Allocate<16,std::_Default_allocate_traits>(0x10);
        puVar4 = vStack_40._Mypair._Myval2._Myfirst + 2;
        vStack_40._Mypair._Myval2._Myend = puVar4;
        memmove(vStack_40._Mypair._Myval2._Myfirst,&vStack_58,0x10);
        vStack_40._Mypair._Myval2._Mylast = puVar4;
        FillAudioBufferWithChannelRemapping(param_2,param_4,1,&vStack_40,pAVar2);
        if (vStack_40._Mypair._Myval2._Myfirst != (ulong64 *)0x0) {
          uVar6 = (longlong)vStack_40._Mypair._Myval2._Myend -
                  (longlong)vStack_40._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
          puVar4 = vStack_40._Mypair._Myval2._Myfirst;
          if (0xfff < uVar6) {
            puVar4 = (ulong64 *)vStack_40._Mypair._Myval2._Myfirst[-1];
            uVar6 = uVar6 + 0x27;
            if (0x1f < (ulonglong)
                       ((longlong)vStack_40._Mypair._Myval2._Myfirst + (-8 - (longlong)puVar4))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete(puVar4,uVar6);
        }
      }
      else if (uVar1 < param_3) {
        vStack_58._Mypair._Myval2._Myend = (ulong64 *)0x0;
        vStack_58._Mypair._Myval2._Myfirst = (ulong64 *)0x0;
        vStack_58._Mypair._Myval2._Mylast = (ulong64 *)0x0;
        if (uVar1 != 0) {
          if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
            std::vector<unsigned___int64,std::allocator<unsigned___int64>_>::_Xlength();
          }
          uVar6 = uVar1 * 8;
          vStack_58._Mypair._Myval2._Myfirst =
               std::_Allocate<16,std::_Default_allocate_traits>(uVar6);
          _Var5 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                  (uVar6 + (longlong)vStack_58._Mypair._Myval2._Myfirst);
          vStack_58._Mypair._Myval2._Myend = (ulong64 *)_Var5;
          memset(vStack_58._Mypair._Myval2._Myfirst,0,uVar6);
          vStack_58._Mypair._Myval2._Mylast = (ulong64 *)_Var5;
        }
        std::
        iota<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>,int>
                  ((_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                   vStack_58._Mypair._Myval2._Myfirst,
                   (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                   vStack_58._Mypair._Myval2._Mylast,0);
        FillAudioBufferWithChannelRemapping(param_2,param_4,param_3,&vStack_58,pAVar2);
        if ((_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
            vStack_58._Mypair._Myval2._Myfirst !=
            (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)0x0) {
          uVar6 = (longlong)vStack_58._Mypair._Myval2._Myend -
                  (longlong)vStack_58._Mypair._Myval2._Myfirst & 0xfffffffffffffff8;
          _Var5 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_>)
                  vStack_58._Mypair._Myval2._Myfirst;
          if (0xfff < uVar6) {
            _Var5 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned___int64>_>_> *)
                     ((longlong)vStack_58._Mypair._Myval2._Myfirst + -8);
            uVar6 = uVar6 + 0x27;
            if (0x1f < ((longlong)vStack_58._Mypair._Myval2._Myfirst - (longlong)_Var5) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)_Var5,uVar6);
        }
      }
      else {
        pbVar3 = NullLogger::GetStream(aNStackX_8);
        std::operator<<<std::char_traits<char>_>
                  (pbVar3,"Number of input channels does not match the number of output channels");
      }
    }
  }
  else {
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
                ::__l2::kNullStream,kBufferSizeMustMatchNumFramesMessage);
  }
  return;
}

// SetPrimaryVolume @ 14f08e230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
vraudio::ResonanceAudioApiImpl::SetPrimaryVolume(ResonanceAudioApiImpl *this,float param_1)

{
  undefined1 auStack_88 [48];
  undefined1 local_58 [16];
  float local_48;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_58._0_8_ =
       &std::
        _Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetPrimaryVolume'::`2'::<lambda_1>,void>
        ::_vftable_;
  local_20 = (longlong *)local_58;
  local_58._8_8_ = this;
  local_48 = param_1;
  LocklessTaskQueue::Post(&this->task_queue_,(function<void___cdecl(void)> *)local_58);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))(local_20,local_20 != (longlong *)local_58);
  }
  return;
}

// SetReflectionProperties @ 14f08e2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
vraudio::ResonanceAudioApiImpl::SetReflectionProperties
          (ResonanceAudioApiImpl *this,ReflectionProperties *param_1)

{
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  ResonanceAudioApiImpl *local_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong local_80;
  longlong lStack_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  lStack_a0 = *(longlong *)param_1->room_position;
  lStack_98 = *(longlong *)(param_1->room_position + 2);
  lStack_90 = *(longlong *)(param_1->room_rotation + 1);
  lStack_88 = *(longlong *)(param_1->room_rotation + 3);
  local_80 = *(longlong *)(param_1->room_dimensions + 1);
  lStack_78._0_4_ = param_1->cutoff_frequency;
  lStack_78._4_4_ = param_1->coefficients[0];
  local_70 = *(longlong *)(param_1->coefficients + 1);
  uStack_68 = *(undefined8 *)(param_1->coefficients + 3);
  local_b8 = *(undefined8 *)(param_1->coefficients + 5);
  local_a8 = this;
  local_58._56_8_ = ::operator_new(0x58);
  *(ResonanceAudioApiImpl **)(local_58._56_8_ + 8) = local_a8;
  *(longlong *)(local_58._56_8_ + 0x10) = lStack_a0;
  *(undefined ***)local_58._56_8_ =
       &std::
        _Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetReflectionProperties'::`2'::<lambda_1>,void>
        ::_vftable_;
  *(longlong *)(local_58._56_8_ + 0x18) = lStack_98;
  *(longlong *)(local_58._56_8_ + 0x20) = lStack_90;
  *(longlong *)(local_58._56_8_ + 0x28) = lStack_88;
  *(longlong *)(local_58._56_8_ + 0x30) = local_80;
  *(longlong *)(local_58._56_8_ + 0x38) = lStack_78;
  *(longlong *)(local_58._56_8_ + 0x40) = local_70;
  *(undefined4 *)(local_58._56_8_ + 0x48) = (undefined4)uStack_68;
  *(undefined4 *)(local_58._56_8_ + 0x4c) = uStack_68._4_4_;
  *(int *)(local_58._56_8_ + 0x50) = (int)local_b8;
  *(int *)(local_58._56_8_ + 0x54) = (int)((ulonglong)local_b8 >> 0x20);
  LocklessTaskQueue::Post(&this->task_queue_,(function<void___cdecl(void)> *)local_58);
  if ((longlong *)local_58._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_58._56_8_ + 0x20))
              (local_58._56_8_,(undefined1 *)local_58._56_8_ != local_58);
  }
  return;
}

// SetReverbProperties @ 14f08e3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
vraudio::ResonanceAudioApiImpl::SetReverbProperties
          (ResonanceAudioApiImpl *this,ReverbProperties *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  ResonanceAudioApiImpl *local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_58 [56];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  uStack_80._0_4_ = param_1->rt60_values[0];
  uStack_80._4_4_ = param_1->rt60_values[1];
  uStack_78._0_4_ = param_1->rt60_values[2];
  uStack_78._4_4_ = param_1->rt60_values[3];
  uStack_70._0_4_ = param_1->rt60_values[4];
  uStack_70._4_4_ = param_1->rt60_values[5];
  uVar1 = *(undefined8 *)(param_1->rt60_values + 6);
  local_58._0_8_ =
       &std::
        _Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetReverbProperties'::`2'::<lambda_1>,void>
        ::_vftable_;
  local_20 = (longlong *)local_58;
  uStack_68._0_4_ = (undefined4)uVar1;
  uStack_68._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  local_58._48_4_ = (undefined4)*(undefined8 *)(param_1->rt60_values + 8);
  local_58._52_4_ = (undefined4)((ulonglong)*(undefined8 *)(param_1->rt60_values + 8) >> 0x20);
  local_58._40_4_ = (undefined4)uStack_68;
  local_58._44_4_ = uStack_68._4_4_;
  local_88 = this;
  uStack_68 = uVar1;
  local_58._8_8_ = this;
  local_58._16_8_ = uStack_80;
  local_58._24_8_ = uStack_78;
  local_58._32_8_ = uStack_70;
  LocklessTaskQueue::Post(&this->task_queue_,(function<void___cdecl(void)> *)local_58);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))(local_20,local_20 != (longlong *)local_58);
  }
  return;
}

// SetSoundObjectDirectivity @ 14f08e480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
vraudio::ResonanceAudioApiImpl::SetSoundObjectDirectivity
          (ResonanceAudioApiImpl *this,int param_1,float param_2,float param_3)

{
  undefined1 auStack_98 [64];
  undefined1 local_58 [16];
  int local_48;
  float local_44;
  float local_40;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_58._0_8_ =
       &std::
        _Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectDirectivity'::`2'::<lambda_1>,void>
        ::_vftable_;
  local_20 = (longlong *)local_58;
  local_58._8_8_ = this;
  local_48 = param_1;
  local_44 = param_2;
  local_40 = param_3;
  LocklessTaskQueue::Post(&this->task_queue_,(function<void___cdecl(void)> *)local_58);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))(local_20,local_20 != (longlong *)local_58);
  }
  return;
}

// SetSoundObjectListenerDirectivity @ 14f08e520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
vraudio::ResonanceAudioApiImpl::SetSoundObjectListenerDirectivity
          (ResonanceAudioApiImpl *this,int param_1,float param_2,float param_3)

{
  undefined1 auStack_98 [64];
  undefined1 local_58 [16];
  int local_48;
  float local_44;
  float local_40;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_58._0_8_ =
       &std::
        _Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectListenerDirectivity'::`2'::<lambda_1>,void>
        ::_vftable_;
  local_20 = (longlong *)local_58;
  local_58._8_8_ = this;
  local_48 = param_1;
  local_44 = param_2;
  local_40 = param_3;
  LocklessTaskQueue::Post(&this->task_queue_,(function<void___cdecl(void)> *)local_58);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))(local_20,local_20 != (longlong *)local_58);
  }
  return;
}

// SetSoundObjectNearFieldEffectGain @ 14f08e5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
vraudio::ResonanceAudioApiImpl::SetSoundObjectNearFieldEffectGain
          (ResonanceAudioApiImpl *this,int param_1,float param_2)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  int local_48;
  float local_44;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._0_8_ =
       &std::
        _Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectNearFieldEffectGain'::`2'::<lambda_1>,void>
        ::_vftable_;
  local_20 = (longlong *)local_58;
  local_58._8_8_ = this;
  local_48 = param_1;
  local_44 = param_2;
  LocklessTaskQueue::Post(&this->task_queue_,(function<void___cdecl(void)> *)local_58);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))(local_20,local_20 != (longlong *)local_58);
  }
  return;
}

// SetSoundObjectOcclusionIntensity @ 14f08e640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
vraudio::ResonanceAudioApiImpl::SetSoundObjectOcclusionIntensity
          (ResonanceAudioApiImpl *this,int param_1,float param_2)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  int local_48;
  float local_44;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._0_8_ =
       &std::
        _Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectOcclusionIntensity'::`2'::<lambda_1>,void>
        ::_vftable_;
  local_20 = (longlong *)local_58;
  local_58._8_8_ = this;
  local_48 = param_1;
  local_44 = param_2;
  LocklessTaskQueue::Post(&this->task_queue_,(function<void___cdecl(void)> *)local_58);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))(local_20,local_20 != (longlong *)local_58);
  }
  return;
}

// SetSoundObjectSpread @ 14f08e6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
vraudio::ResonanceAudioApiImpl::SetSoundObjectSpread
          (ResonanceAudioApiImpl *this,int param_1,float param_2)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  int local_48;
  float local_44;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._0_8_ =
       &std::
        _Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectSpread'::`2'::<lambda_1>,void>
        ::_vftable_;
  local_20 = (longlong *)local_58;
  local_58._8_8_ = this;
  local_48 = param_1;
  local_44 = param_2;
  LocklessTaskQueue::Post(&this->task_queue_,(function<void___cdecl(void)> *)local_58);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))(local_20,local_20 != (longlong *)local_58);
  }
  return;
}

// SetSourceDistanceAttenuation @ 14f08e740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
vraudio::ResonanceAudioApiImpl::SetSourceDistanceAttenuation
          (ResonanceAudioApiImpl *this,int param_1,float param_2)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  int local_48;
  float local_44;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._0_8_ =
       &std::
        _Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceDistanceAttenuation'::`2'::<lambda_1>,void>
        ::_vftable_;
  local_20 = (longlong *)local_58;
  local_58._8_8_ = this;
  local_48 = param_1;
  local_44 = param_2;
  LocklessTaskQueue::Post(&this->task_queue_,(function<void___cdecl(void)> *)local_58);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))(local_20,local_20 != (longlong *)local_58);
  }
  return;
}

// SetSourceDistanceModel @ 14f08e7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
vraudio::ResonanceAudioApiImpl::SetSourceDistanceModel
          (ResonanceAudioApiImpl *this,int param_1,DistanceRolloffModel param_2,float param_3,
          float param_4)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  int local_48;
  DistanceRolloffModel local_44;
  float local_40;
  float local_3c;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  if ((param_4 < param_3) && (param_2 != kNone)) {
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
                ::__l2::kNullStream,"max_distance must be larger than min_distance");
    return;
  }
  local_58._0_8_ =
       &std::
        _Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceDistanceModel'::`2'::<lambda_1>,void>
        ::_vftable_;
  local_20 = (longlong *)local_58;
  local_3c = param_4;
  local_58._8_8_ = this;
  local_48 = param_1;
  local_44 = param_2;
  local_40 = param_3;
  LocklessTaskQueue::Post(&this->task_queue_,(function<void___cdecl(void)> *)local_58);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))(local_20,local_20 != (longlong *)local_58);
  }
  return;
}

// SetSourcePosition @ 14f08e900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
vraudio::ResonanceAudioApiImpl::SetSourcePosition
          (ResonanceAudioApiImpl *this,int param_1,float param_2,float param_3,float param_4)

{
  undefined1 auStack_a8 [32];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88._56_8_ = ::operator_new(0x20);
  *(undefined ***)local_88._56_8_ =
       &std::
        _Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourcePosition'::`2'::<lambda_1>,void>
        ::_vftable_;
  *(ResonanceAudioApiImpl **)(local_88._56_8_ + 8) = this;
  *(int *)(local_88._56_8_ + 0x10) = param_1;
  *(ulonglong *)(local_88._56_8_ + 0x14) = CONCAT44(param_3,param_2);
  *(float *)(local_88._56_8_ + 0x1c) = param_4;
  LocklessTaskQueue::Post(&this->task_queue_,(function<void___cdecl(void)> *)local_88);
  if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_88._56_8_ + 0x20))
              (local_88._56_8_,(undefined1 *)local_88._56_8_ != local_88);
  }
  return;
}

// SetSourceRoomEffectsGain @ 14f08e9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
vraudio::ResonanceAudioApiImpl::SetSourceRoomEffectsGain
          (ResonanceAudioApiImpl *this,int param_1,float param_2)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  int local_48;
  float local_44;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._0_8_ =
       &std::
        _Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceRoomEffectsGain'::`2'::<lambda_1>,void>
        ::_vftable_;
  local_20 = (longlong *)local_58;
  local_58._8_8_ = this;
  local_48 = param_1;
  local_44 = param_2;
  LocklessTaskQueue::Post(&this->task_queue_,(function<void___cdecl(void)> *)local_58);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))(local_20,local_20 != (longlong *)local_58);
  }
  return;
}

// SetSourceRotation @ 14f08ea50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
vraudio::ResonanceAudioApiImpl::SetSourceRotation
          (ResonanceAudioApiImpl *this,int param_1,float param_2,float param_3,float param_4,
          float param_5)

{
  undefined1 auStack_d8 [64];
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_98._56_8_ = ::operator_new(0x28);
  *(undefined ***)local_98._56_8_ =
       &std::
        _Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceRotation'::`2'::<lambda_1>,void>
        ::_vftable_;
  *(ResonanceAudioApiImpl **)(local_98._56_8_ + 8) = this;
  *(int *)(local_98._56_8_ + 0x10) = param_1;
  *(float *)(local_98._56_8_ + 0x14) = param_2;
  *(float *)(local_98._56_8_ + 0x18) = param_3;
  *(float *)(local_98._56_8_ + 0x1c) = param_4;
  *(float *)(local_98._56_8_ + 0x20) = param_5;
  LocklessTaskQueue::Post(&this->task_queue_,(function<void___cdecl(void)> *)local_98);
  if ((longlong *)local_98._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_98._56_8_ + 0x20))
              (local_98._56_8_,(undefined1 *)local_98._56_8_ != local_98);
  }
  return;
}

// SetSourceVolume @ 14f08eb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
vraudio::ResonanceAudioApiImpl::SetSourceVolume
          (ResonanceAudioApiImpl *this,int param_1,float param_2)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  int local_48;
  float local_44;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._0_8_ =
       &std::
        _Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceVolume'::`2'::<lambda_1>,void>
        ::_vftable_;
  local_20 = (longlong *)local_58;
  local_58._8_8_ = this;
  local_48 = param_1;
  local_44 = param_2;
  LocklessTaskQueue::Post(&this->task_queue_,(function<void___cdecl(void)> *)local_58);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))(local_20,local_20 != (longlong *)local_58);
  }
  return;
}

// SetStereoSpeakerMode @ 14f08ebe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
vraudio::ResonanceAudioApiImpl::SetStereoSpeakerMode(ResonanceAudioApiImpl *this,bool param_1)

{
  undefined1 auStack_88 [48];
  undefined1 local_58 [56];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_58._0_8_ =
       &std::
        _Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetStereoSpeakerMode'::`2'::<lambda_1>,void>
        ::_vftable_;
  local_20 = (longlong *)local_58;
  local_58._8_8_ = this;
  local_58[0x10] = param_1;
  LocklessTaskQueue::Post(&this->task_queue_,(function<void___cdecl(void)> *)local_58);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))(local_20,local_20 != (longlong *)local_58);
  }
  return;
}

// _Copy @ 14f08ec80

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::CreateAmbisonicSource'::__l2::<lambda_1>,void>
::_Copy(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::CreateAmbisonicSource'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)this + 0x18);
  return param_1;
}

// _Copy @ 14f08ecb0

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::CreateSoundObjectSource'::__l2::<lambda_1>,void>
::_Copy(void *this,void *param_1)

{
  _Func_base<void> *p_Var1;
  
  p_Var1 = ::operator_new(0x40);
  *p_Var1 = (_Func_base<void>)
            &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::CreateSoundObjectSource'::`2'::<lambda_1>,void>
             ::_vftable_;
  p_Var1[1] = *(_Func_base<void> *)((longlong)this + 8);
  *(undefined4 *)(p_Var1 + 2) = *(undefined4 *)((longlong)this + 0x10);
  basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(p_Var1 + 3),
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)this + 0x18));
  *(undefined4 *)(p_Var1 + 7) = *(undefined4 *)((longlong)this + 0x38);
  p_Var1[7].field_0x4 = *(undefined1 *)((longlong)this + 0x3c);
  p_Var1[7].field_0x5 = *(undefined1 *)((longlong)this + 0x3d);
  return p_Var1;
}

// _Copy @ 14f08ed30

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::CreateStereoSource'::__l2::<lambda_1>,void>::
_Copy(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::CreateStereoSource'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  return param_1;
}

// _Copy @ 14f08ed50

_Func_base<void> * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::DestroySource'::__l2::<lambda_1>,void>::
_Copy(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::DestroySource'::`2'::<lambda_1>,void>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  return param_1;
}

// _Copy @ 14f08ed70

_Func_base<void> * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::EnableRoomEffects'::__l2::<lambda_1>,void>
::_Copy(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::EnableRoomEffects'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  return param_1;
}

// _Copy @ 14f08ed90

_Func_base<void,vraudio::SourceParameters_*> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::ProcessNextBuffer'::__l2::<lambda_1>,void,vraudio::SourceParameters_*>
::_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::ProcessNextBuffer'::`2'::<lambda_1>,void,vraudio::SourceParameters_*>
        ::_vftable_;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Copy @ 14f08edb0

_Func_base<void> * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetHeadPosition'::__l2::<lambda_1>,void>::
_Copy(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetHeadPosition'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)this + 0x18);
  return param_1;
}

// _Copy @ 14f08ede0

_Func_base<void> * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetHeadRotation'::__l2::<lambda_1>,void>::
_Copy(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetHeadRotation'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)this + 0x18);
  return param_1;
}

// _Copy @ 14f08ee10

_Func_base<void> * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetPrimaryVolume'::__l2::<lambda_1>,void>
::_Copy(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetPrimaryVolume'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  return param_1;
}

// _Copy @ 14f08ee30

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetReflectionProperties'::__l2::<lambda_1>,void>
::_Copy(void *this,void *param_1)

{
  _Func_base<void> _Var1;
  _Func_base<void> *p_Var2;
  
  p_Var2 = ::operator_new(0x58);
  *p_Var2 = (_Func_base<void>)
            &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetReflectionProperties'::`2'::<lambda_1>,void>
             ::_vftable_;
  _Var1 = *(_Func_base<void> *)((longlong)this + 0x10);
  p_Var2[1] = *(_Func_base<void> *)((longlong)this + 8);
  p_Var2[2] = _Var1;
  _Var1 = *(_Func_base<void> *)((longlong)this + 0x20);
  p_Var2[3] = *(_Func_base<void> *)((longlong)this + 0x18);
  p_Var2[4] = _Var1;
  _Var1 = *(_Func_base<void> *)((longlong)this + 0x30);
  p_Var2[5] = *(_Func_base<void> *)((longlong)this + 0x28);
  p_Var2[6] = _Var1;
  _Var1 = *(_Func_base<void> *)((longlong)this + 0x40);
  p_Var2[7] = *(_Func_base<void> *)((longlong)this + 0x38);
  p_Var2[8] = _Var1;
  _Var1 = *(_Func_base<void> *)((longlong)this + 0x50);
  p_Var2[9] = *(_Func_base<void> *)((longlong)this + 0x48);
  p_Var2[10] = _Var1;
  return p_Var2;
}

// _Copy @ 14f08ee90

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetReverbProperties'::__l2::<lambda_1>,void>::
_Copy(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetReverbProperties'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)this + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)this + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  return param_1;
}

// _Copy @ 14f08eec0

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectDirectivity'::__l2::<lambda_1>,void>
::_Copy(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectDirectivity'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)this + 0x18);
  return param_1;
}

// _Copy @ 14f08eef0

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectListenerDirectivity'::__l2::<lambda_1>,void>
::_Copy(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectListenerDirectivity'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)this + 0x18);
  return param_1;
}

// _Copy @ 14f08ef20

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectNearFieldEffectGain'::__l2::<lambda_1>,void>
::_Copy(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectNearFieldEffectGain'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  return param_1;
}

// _Copy @ 14f08ef40

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectOcclusionIntensity'::__l2::<lambda_1>,void>
::_Copy(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectOcclusionIntensity'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  return param_1;
}

// _Copy @ 14f08ef60

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectSpread'::__l2::<lambda_1>,void>::
_Copy(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectSpread'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  return param_1;
}

// _Copy @ 14f08ef80

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceDistanceAttenuation'::__l2::<lambda_1>,void>
::_Copy(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceDistanceAttenuation'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  return param_1;
}

// _Copy @ 14f08efa0

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceDistanceModel'::__l2::<lambda_1>,void>
::_Copy(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceDistanceModel'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)this + 0x18);
  return param_1;
}

// _Copy @ 14f08efd0

_Func_base<void> * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourcePosition'::__l2::<lambda_1>,void>
::_Copy(void *this,void *param_1)

{
  _Func_base<void> *p_Var1;
  
  p_Var1 = ::operator_new(0x20);
  *p_Var1 = (_Func_base<void>)
            &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourcePosition'::`2'::<lambda_1>,void>
             ::_vftable_;
  p_Var1[1] = *(_Func_base<void> *)((longlong)this + 8);
  *(undefined4 *)(p_Var1 + 2) = *(undefined4 *)((longlong)this + 0x10);
  *(undefined8 *)&p_Var1[2].field_0x4 = *(undefined8 *)((longlong)this + 0x14);
  *(undefined4 *)&p_Var1[3].field_0x4 = *(undefined4 *)((longlong)this + 0x1c);
  return p_Var1;
}

// _Copy @ 14f08f020

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceRoomEffectsGain'::__l2::<lambda_1>,void>
::_Copy(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceRoomEffectsGain'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  return param_1;
}

// _Copy @ 14f08f040

_Func_base<void> * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceRotation'::__l2::<lambda_1>,void>
::_Copy(void *this,void *param_1)

{
  undefined8 uVar1;
  _Func_base<void> *p_Var2;
  
  p_Var2 = ::operator_new(0x28);
  *p_Var2 = (_Func_base<void>)
            &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceRotation'::`2'::<lambda_1>,void>
             ::_vftable_;
  p_Var2[1] = *(_Func_base<void> *)((longlong)this + 8);
  *(undefined4 *)(p_Var2 + 2) = *(undefined4 *)((longlong)this + 0x10);
  uVar1 = *(undefined8 *)((longlong)this + 0x1c);
  *(undefined8 *)&p_Var2[2].field_0x4 = *(undefined8 *)((longlong)this + 0x14);
  *(undefined8 *)&p_Var2[3].field_0x4 = uVar1;
  return p_Var2;
}

// _Copy @ 14f08f080

_Func_base<void> * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceVolume'::__l2::<lambda_1>,void>::
_Copy(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceVolume'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  return param_1;
}

// _Copy @ 14f08f0a0

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetStereoSpeakerMode'::__l2::<lambda_1>,void>::
_Copy(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetStereoSpeakerMode'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  return param_1;
}

// _Delete_this @ 14f08f0c0

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::CreateAmbisonicSource'::__l2::<lambda_1>,void>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x20);
    return;
  }
  return;
}

// _Delete_this @ 14f08f0e0

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::CreateSoundObjectSource'::__l2::<lambda_1>,void>
::_Delete_this(void *this,bool param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)this + 0x18));
  if (param_1) {
    ::operator_delete(this,0x40);
  }
  return;
}

// _Delete_this @ 14f08f120

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::CreateStereoSource'::__l2::<lambda_1>,void>::
_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x18);
    return;
  }
  return;
}

// _Delete_this @ 14f08f140

void __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::DestroySource'::__l2::<lambda_1>,void>::
_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x18);
    return;
  }
  return;
}

// _Delete_this @ 14f08f160

void __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::EnableRoomEffects'::__l2::<lambda_1>,void>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x18);
    return;
  }
  return;
}

// _Delete_this @ 14f08f180

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::ProcessNextBuffer'::__l2::<lambda_1>,void,vraudio::SourceParameters_*>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x10);
    return;
  }
  return;
}

// _Delete_this @ 14f08f1a0

void __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetHeadPosition'::__l2::<lambda_1>,void>::
_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x20);
    return;
  }
  return;
}

// _Delete_this @ 14f08f1c0

void __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetHeadRotation'::__l2::<lambda_1>,void>::
_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x20);
    return;
  }
  return;
}

// _Delete_this @ 14f08f1e0

void __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetPrimaryVolume'::__l2::<lambda_1>,void>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x18);
    return;
  }
  return;
}

// _Delete_this @ 14f08f200

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetReflectionProperties'::__l2::<lambda_1>,void>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x58);
    return;
  }
  return;
}

// _Delete_this @ 14f08f220

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetReverbProperties'::__l2::<lambda_1>,void>::
_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x38);
    return;
  }
  return;
}

// _Delete_this @ 14f08f240

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectDirectivity'::__l2::<lambda_1>,void>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x20);
    return;
  }
  return;
}

// _Delete_this @ 14f08f260

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectListenerDirectivity'::__l2::<lambda_1>,void>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x20);
    return;
  }
  return;
}

// _Delete_this @ 14f08f280

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectNearFieldEffectGain'::__l2::<lambda_1>,void>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x18);
    return;
  }
  return;
}

// _Delete_this @ 14f08f2a0

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectOcclusionIntensity'::__l2::<lambda_1>,void>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x18);
    return;
  }
  return;
}

// _Delete_this @ 14f08f2c0

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectSpread'::__l2::<lambda_1>,void>::
_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x18);
    return;
  }
  return;
}

// _Delete_this @ 14f08f2e0

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceDistanceAttenuation'::__l2::<lambda_1>,void>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x18);
    return;
  }
  return;
}

// _Delete_this @ 14f08f300

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceDistanceModel'::__l2::<lambda_1>,void>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x20);
    return;
  }
  return;
}

// _Delete_this @ 14f08f320

void __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourcePosition'::__l2::<lambda_1>,void>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x20);
    return;
  }
  return;
}

// _Delete_this @ 14f08f340

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceRoomEffectsGain'::__l2::<lambda_1>,void>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x18);
    return;
  }
  return;
}

// _Delete_this @ 14f08f360

void __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceRotation'::__l2::<lambda_1>,void>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x28);
    return;
  }
  return;
}

// _Delete_this @ 14f08f380

void __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceVolume'::__l2::<lambda_1>,void>::
_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x18);
    return;
  }
  return;
}

// _Delete_this @ 14f08f3a0

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetStereoSpeakerMode'::__l2::<lambda_1>,void>::
_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x18);
    return;
  }
  return;
}

// _Do_call @ 14f08f3c0

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::CreateAmbisonicSource'::__l2::<lambda_1>,void>
::_Do_call(void *this)

{
  SourceParameters *pSVar1;
  
  vraudio::GraphManager::CreateAmbisonicSource
            (*(GraphManager **)(*(longlong *)((longlong)this + 8) + 8),
             *(int *)((longlong)this + 0x10),*(ulong64 *)((longlong)this + 0x18));
  vraudio::SourceParametersManager::Register
            ((SourceParametersManager *)(*(longlong *)((longlong)this + 8) + 0x48),
             *(int *)((longlong)this + 0x10));
  pSVar1 = vraudio::SourceParametersManager::GetMutableParameters
                     ((SourceParametersManager *)(*(longlong *)((longlong)this + 8) + 0x48),
                      *(int *)((longlong)this + 0x10));
  pSVar1->room_effects_gain = 0.0;
  pSVar1->distance_rolloff_model = kNone;
  pSVar1->distance_attenuation = 1.0;
  return;
}

// _Do_call @ 14f08f420

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::CreateSoundObjectSource'::__l2::<lambda_1>,void>
::_Do_call(void *this)

{
  SourceParameters *pSVar1;
  
  vraudio::GraphManager::CreateSoundObjectSource
            (*(GraphManager **)(*(longlong *)((longlong)this + 8) + 8),
             *(int *)((longlong)this + 0x10),*(int *)((longlong)this + 0x38),
             *(bool *)((longlong)this + 0x3c),*(bool *)((longlong)this + 0x3d));
  vraudio::SourceParametersManager::Register
            ((SourceParametersManager *)(*(longlong *)((longlong)this + 8) + 0x48),
             *(int *)((longlong)this + 0x10));
  pSVar1 = vraudio::SourceParametersManager::GetMutableParameters
                     ((SourceParametersManager *)(*(longlong *)((longlong)this + 8) + 0x48),
                      *(int *)((longlong)this + 0x10));
  pSVar1->enable_hrtf = *(bool *)((longlong)this + 0x3c);
  return;
}

// _Do_call @ 14f08f480

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::CreateStereoSource'::__l2::<lambda_1>,void>::
_Do_call(void *this)

{
  SourceParameters *pSVar1;
  
  vraudio::GraphManager::CreateStereoSource
            (*(GraphManager **)(*(longlong *)((longlong)this + 8) + 8),
             *(int *)((longlong)this + 0x10));
  vraudio::SourceParametersManager::Register
            ((SourceParametersManager *)(*(longlong *)((longlong)this + 8) + 0x48),
             *(int *)((longlong)this + 0x10));
  pSVar1 = vraudio::SourceParametersManager::GetMutableParameters
                     ((SourceParametersManager *)(*(longlong *)((longlong)this + 8) + 0x48),
                      *(int *)((longlong)this + 0x10));
  pSVar1->enable_hrtf = false;
  return;
}

// _Do_call @ 14f08f4d0

void __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::DestroySource'::__l2::<lambda_1>,void>::
_Do_call(void *this)

{
  vraudio::GraphManager::DestroySource
            (*(GraphManager **)(*(longlong *)((longlong)this + 8) + 8),
             *(int *)((longlong)this + 0x10));
  vraudio::SourceParametersManager::Unregister
            ((SourceParametersManager *)(*(longlong *)((longlong)this + 8) + 0x48),
             *(int *)((longlong)this + 0x10));
  return;
}

// _Do_call @ 14f08f510

void __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::EnableRoomEffects'::__l2::<lambda_1>,void>
::_Do_call(void *this)

{
  vraudio::GraphManager::EnableRoomEffects
            (*(GraphManager **)(*(longlong *)((longlong)this + 8) + 8),
             *(bool *)((longlong)this + 0x10));
  return;
}

// _Do_call @ 14f08f530

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::ProcessNextBuffer'::__l2::<lambda_1>,void,vraudio::SourceParameters_*>
::_Do_call(void *this,SourceParameters **param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  vraudio::UpdateAttenuationParameters
            (*(float *)(lVar1 + 0x88),*(float *)(lVar1 + 0xd0),*(float *)(lVar1 + 0xf8),
             (WorldPosition *)(lVar1 + 0x38),*param_1);
  return;
}

// _Do_call @ 14f08f570

void __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetHeadPosition'::__l2::<lambda_1>,void>::
_Do_call(void *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)((longlong)this + 8);
  uVar1 = *(undefined4 *)((longlong)this + 0x14);
  uVar2 = *(undefined4 *)((longlong)this + 0x18);
  *(undefined4 *)(lVar3 + 0x38) = *(undefined4 *)((longlong)this + 0x10);
  *(undefined4 *)(lVar3 + 0x3c) = uVar1;
  *(undefined4 *)(lVar3 + 0x40) = uVar2;
  return;
}

// _Do_call @ 14f08f5a0

void __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetHeadRotation'::__l2::<lambda_1>,void>::
_Do_call(void *this)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = *(undefined4 *)((longlong)this + 0x18);
  uVar4 = *(undefined4 *)((longlong)this + 0x1c);
  uVar1 = *(undefined4 *)((longlong)this + 0x10);
  lVar2 = *(longlong *)((longlong)this + 8);
  *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)((longlong)this + 0x14);
  *(undefined4 *)(lVar2 + 0x2c) = uVar3;
  *(undefined4 *)(lVar2 + 0x30) = uVar4;
  *(undefined4 *)(lVar2 + 0x34) = uVar1;
  return;
}

// _Do_call @ 14f08f5f0

void __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetPrimaryVolume'::__l2::<lambda_1>,void>
::_Do_call(void *this)

{
  *(undefined4 *)(*(longlong *)((longlong)this + 8) + 0x88) = *(undefined4 *)((longlong)this + 0x10)
  ;
  return;
}

// _Do_call @ 14f08f610

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetReflectionProperties'::__l2::<lambda_1>,void>
::_Do_call(void *this)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)((longlong)this + 0x18);
  lVar1 = *(longlong *)((longlong)this + 8);
  *(undefined8 *)(lVar1 + 0x8c) = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(lVar1 + 0x94) = uVar2;
  uVar2 = *(undefined8 *)((longlong)this + 0x28);
  *(undefined8 *)(lVar1 + 0x9c) = *(undefined8 *)((longlong)this + 0x20);
  *(undefined8 *)(lVar1 + 0xa4) = uVar2;
  uVar2 = *(undefined8 *)((longlong)this + 0x38);
  *(undefined8 *)(lVar1 + 0xac) = *(undefined8 *)((longlong)this + 0x30);
  *(undefined8 *)(lVar1 + 0xb4) = uVar2;
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  *(undefined8 *)(lVar1 + 0xbc) = *(undefined8 *)((longlong)this + 0x40);
  *(undefined8 *)(lVar1 + 0xc4) = uVar2;
  *(undefined8 *)(lVar1 + 0xcc) = *(undefined8 *)((longlong)this + 0x50);
  return;
}

// _Do_call @ 14f08f660

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetReverbProperties'::__l2::<lambda_1>,void>::
_Do_call(void *this)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)((longlong)this + 0x18);
  lVar1 = *(longlong *)((longlong)this + 8);
  *(undefined8 *)(lVar1 + 0xd4) = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(lVar1 + 0xdc) = uVar2;
  uVar2 = *(undefined8 *)((longlong)this + 0x28);
  *(undefined8 *)(lVar1 + 0xe4) = *(undefined8 *)((longlong)this + 0x20);
  *(undefined8 *)(lVar1 + 0xec) = uVar2;
  *(undefined8 *)(lVar1 + 0xf4) = *(undefined8 *)((longlong)this + 0x30);
  return;
}

// _Do_call @ 14f08f690

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectDirectivity'::__l2::<lambda_1>,void>
::_Do_call(void *this)

{
  SourceParameters *pSVar1;
  
  pSVar1 = vraudio::SourceParametersManager::GetMutableParameters
                     ((SourceParametersManager *)(*(longlong *)((longlong)this + 8) + 0x48),
                      *(int *)((longlong)this + 0x10));
  if (pSVar1 != (SourceParameters *)0x0) {
    pSVar1->directivity_alpha = *(float *)((longlong)this + 0x14);
    pSVar1->directivity_order = *(float *)((longlong)this + 0x18);
  }
  return;
}

// _Do_call @ 14f08f6d0

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectListenerDirectivity'::__l2::<lambda_1>,void>
::_Do_call(void *this)

{
  SourceParameters *pSVar1;
  
  pSVar1 = vraudio::SourceParametersManager::GetMutableParameters
                     ((SourceParametersManager *)(*(longlong *)((longlong)this + 8) + 0x48),
                      *(int *)((longlong)this + 0x10));
  if (pSVar1 != (SourceParameters *)0x0) {
    pSVar1->listener_directivity_alpha = *(float *)((longlong)this + 0x14);
    pSVar1->listener_directivity_order = *(float *)((longlong)this + 0x18);
  }
  return;
}

// _Do_call @ 14f08f710

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectNearFieldEffectGain'::__l2::<lambda_1>,void>
::_Do_call(void *this)

{
  SourceParameters *pSVar1;
  
  pSVar1 = vraudio::SourceParametersManager::GetMutableParameters
                     ((SourceParametersManager *)(*(longlong *)((longlong)this + 8) + 0x48),
                      *(int *)((longlong)this + 0x10));
  if (pSVar1 != (SourceParameters *)0x0) {
    pSVar1->near_field_gain = *(float *)((longlong)this + 0x14);
  }
  return;
}

// _Do_call @ 14f08f740

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectOcclusionIntensity'::__l2::<lambda_1>,void>
::_Do_call(void *this)

{
  SourceParameters *pSVar1;
  
  pSVar1 = vraudio::SourceParametersManager::GetMutableParameters
                     ((SourceParametersManager *)(*(longlong *)((longlong)this + 8) + 0x48),
                      *(int *)((longlong)this + 0x10));
  if (pSVar1 != (SourceParameters *)0x0) {
    pSVar1->occlusion_intensity = *(float *)((longlong)this + 0x14);
  }
  return;
}

// _Do_call @ 14f08f770

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectSpread'::__l2::<lambda_1>,void>::
_Do_call(void *this)

{
  SourceParameters *pSVar1;
  
  pSVar1 = vraudio::SourceParametersManager::GetMutableParameters
                     ((SourceParametersManager *)(*(longlong *)((longlong)this + 8) + 0x48),
                      *(int *)((longlong)this + 0x10));
  if (pSVar1 != (SourceParameters *)0x0) {
    pSVar1->spread_deg = *(float *)((longlong)this + 0x14);
  }
  return;
}

// _Do_call @ 14f08f7a0

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceDistanceAttenuation'::__l2::<lambda_1>,void>
::_Do_call(void *this)

{
  SourceParameters *pSVar1;
  
  pSVar1 = vraudio::SourceParametersManager::GetMutableParameters
                     ((SourceParametersManager *)(*(longlong *)((longlong)this + 8) + 0x48),
                      *(int *)((longlong)this + 0x10));
  if (pSVar1 != (SourceParameters *)0x0) {
    if (pSVar1->distance_rolloff_model != kNone) {
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
                      ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false
                    );
          atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
          _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      operator<<<std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)
                 &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                  ::__l2::kNullStream,
                 "Implicit distance rolloff model is set. The value will be overwritten.");
    }
    pSVar1->distance_attenuation = *(float *)((longlong)this + 0x14);
  }
  return;
}

// _Do_call @ 14f08f860

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceDistanceModel'::__l2::<lambda_1>,void>
::_Do_call(void *this)

{
  SourceParameters *pSVar1;
  
  pSVar1 = vraudio::SourceParametersManager::GetMutableParameters
                     ((SourceParametersManager *)(*(longlong *)((longlong)this + 8) + 0x48),
                      *(int *)((longlong)this + 0x10));
  if (pSVar1 != (SourceParameters *)0x0) {
    pSVar1->distance_rolloff_model = *(DistanceRolloffModel *)((longlong)this + 0x14);
    pSVar1->minimum_distance = *(float *)((longlong)this + 0x18);
    pSVar1->maximum_distance = *(float *)((longlong)this + 0x1c);
  }
  return;
}

// _Do_call @ 14f08f8a0

void __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourcePosition'::__l2::<lambda_1>,void>
::_Do_call(void *this)

{
  SourceParameters *pSVar1;
  
  pSVar1 = vraudio::SourceParametersManager::GetMutableParameters
                     ((SourceParametersManager *)(*(longlong *)((longlong)this + 8) + 0x48),
                      *(int *)((longlong)this + 0x10));
  if (pSVar1 != (SourceParameters *)0x0) {
    *(undefined4 *)&(pSVar1->object_transform).position = *(undefined4 *)((longlong)this + 0x14);
    *(undefined4 *)&(pSVar1->object_transform).position.field_0x4 =
         *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)&(pSVar1->object_transform).position.field_0x8 =
         *(undefined4 *)((longlong)this + 0x1c);
  }
  return;
}

// _Do_call @ 14f08f8e0

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceRoomEffectsGain'::__l2::<lambda_1>,void>
::_Do_call(void *this)

{
  SourceParameters *pSVar1;
  
  pSVar1 = vraudio::SourceParametersManager::GetMutableParameters
                     ((SourceParametersManager *)(*(longlong *)((longlong)this + 8) + 0x48),
                      *(int *)((longlong)this + 0x10));
  if (pSVar1 != (SourceParameters *)0x0) {
    pSVar1->room_effects_gain = *(float *)((longlong)this + 0x14);
  }
  return;
}

// _Do_call @ 14f08f910

void __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceRotation'::__l2::<lambda_1>,void>
::_Do_call(void *this)

{
  undefined8 uVar1;
  SourceParameters *pSVar2;
  
  pSVar2 = vraudio::SourceParametersManager::GetMutableParameters
                     ((SourceParametersManager *)(*(longlong *)((longlong)this + 8) + 0x48),
                      *(int *)((longlong)this + 0x10));
  if (pSVar2 != (SourceParameters *)0x0) {
    uVar1 = *(undefined8 *)((longlong)this + 0x1c);
    *(undefined8 *)&(pSVar2->object_transform).rotation = *(undefined8 *)((longlong)this + 0x14);
    *(undefined8 *)&(pSVar2->object_transform).rotation.field_0x8 = uVar1;
  }
  return;
}

// _Do_call @ 14f08f950

void __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceVolume'::__l2::<lambda_1>,void>::
_Do_call(void *this)

{
  SourceParameters *pSVar1;
  
  pSVar1 = vraudio::SourceParametersManager::GetMutableParameters
                     ((SourceParametersManager *)(*(longlong *)((longlong)this + 8) + 0x48),
                      *(int *)((longlong)this + 0x10));
  if (pSVar1 != (SourceParameters *)0x0) {
    pSVar1->gain = *(float *)((longlong)this + 0x14);
  }
  return;
}

// _Do_call @ 14f08f980

void __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetStereoSpeakerMode'::__l2::<lambda_1>,void>::
_Do_call(void *this)

{
  *(undefined1 *)(*(longlong *)((longlong)this + 8) + 0xfc) = *(undefined1 *)((longlong)this + 0x10)
  ;
  return;
}

// _Get @ 14f08f9a0

void * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::CreateAmbisonicSource'::__l2::<lambda_1>,void>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14f08f9b0

void * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::CreateSoundObjectSource'::__l2::<lambda_1>,void>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14f08f9c0

void * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::CreateStereoSource'::__l2::<lambda_1>,void>::
_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14f08f9d0

void * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::DestroySource'::__l2::<lambda_1>,void>::
_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14f08f9e0

void * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::EnableRoomEffects'::__l2::<lambda_1>,void>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14f08f9f0

void * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::ProcessNextBuffer'::__l2::<lambda_1>,void,vraudio::SourceParameters_*>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14f08fa00

void * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetHeadPosition'::__l2::<lambda_1>,void>::
_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14f08fa10

void * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetHeadRotation'::__l2::<lambda_1>,void>::
_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14f08fa20

void * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetPrimaryVolume'::__l2::<lambda_1>,void>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14f08fa30

void * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetReflectionProperties'::__l2::<lambda_1>,void>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14f08fa40

void * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetReverbProperties'::__l2::<lambda_1>,void>::
_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14f08fa50

void * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectDirectivity'::__l2::<lambda_1>,void>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14f08fa60

void * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectListenerDirectivity'::__l2::<lambda_1>,void>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14f08fa70

void * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectNearFieldEffectGain'::__l2::<lambda_1>,void>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14f08fa80

void * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectOcclusionIntensity'::__l2::<lambda_1>,void>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14f08fa90

void * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectSpread'::__l2::<lambda_1>,void>::
_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14f08faa0

void * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceDistanceAttenuation'::__l2::<lambda_1>,void>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14f08fab0

void * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceDistanceModel'::__l2::<lambda_1>,void>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14f08fac0

void * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourcePosition'::__l2::<lambda_1>,void>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14f08fad0

void * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceRoomEffectsGain'::__l2::<lambda_1>,void>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14f08fae0

void * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceRotation'::__l2::<lambda_1>,void>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14f08faf0

void * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceVolume'::__l2::<lambda_1>,void>::
_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get @ 14f08fb00

void * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetStereoSpeakerMode'::__l2::<lambda_1>,void>::
_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Move @ 14f08fb10

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::CreateAmbisonicSource'::__l2::<lambda_1>,void>
::_Move(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::CreateAmbisonicSource'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)this + 0x18);
  return param_1;
}

// _Move @ 14f08fb40

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::CreateSoundObjectSource'::__l2::<lambda_1>,void>
::_Move(void *this,void *param_1)

{
  return (_Func_base<void> *)0x0;
}

// _Move @ 14f08fb50

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::CreateStereoSource'::__l2::<lambda_1>,void>::
_Move(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::CreateStereoSource'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  return param_1;
}

// _Move @ 14f08fb70

_Func_base<void> * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::DestroySource'::__l2::<lambda_1>,void>::
_Move(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::DestroySource'::`2'::<lambda_1>,void>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  return param_1;
}

// _Move @ 14f08fb90

_Func_base<void> * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::EnableRoomEffects'::__l2::<lambda_1>,void>
::_Move(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::EnableRoomEffects'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  return param_1;
}

// _Move @ 14f08fbb0

_Func_base<void,vraudio::SourceParameters_*> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::ProcessNextBuffer'::__l2::<lambda_1>,void,vraudio::SourceParameters_*>
::_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::ProcessNextBuffer'::`2'::<lambda_1>,void,vraudio::SourceParameters_*>
        ::_vftable_;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Move @ 14f08fbd0

_Func_base<void> * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetHeadPosition'::__l2::<lambda_1>,void>::
_Move(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetHeadPosition'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)this + 0x18);
  return param_1;
}

// _Move @ 14f08fc00

_Func_base<void> * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetHeadRotation'::__l2::<lambda_1>,void>::
_Move(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetHeadRotation'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)this + 0x18);
  return param_1;
}

// _Move @ 14f08fc30

_Func_base<void> * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetPrimaryVolume'::__l2::<lambda_1>,void>
::_Move(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetPrimaryVolume'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  return param_1;
}

// _Move @ 14f08fc50

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetReflectionProperties'::__l2::<lambda_1>,void>
::_Move(void *this,void *param_1)

{
  return (_Func_base<void> *)0x0;
}

// _Move @ 14f08fc60

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetReverbProperties'::__l2::<lambda_1>,void>::
_Move(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetReverbProperties'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)this + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)this + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  return param_1;
}

// _Move @ 14f08fc90

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectDirectivity'::__l2::<lambda_1>,void>
::_Move(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectDirectivity'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)this + 0x18);
  return param_1;
}

// _Move @ 14f08fcc0

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectListenerDirectivity'::__l2::<lambda_1>,void>
::_Move(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectListenerDirectivity'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)this + 0x18);
  return param_1;
}

// _Move @ 14f08fcf0

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectNearFieldEffectGain'::__l2::<lambda_1>,void>
::_Move(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectNearFieldEffectGain'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  return param_1;
}

// _Move @ 14f08fd10

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectOcclusionIntensity'::__l2::<lambda_1>,void>
::_Move(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectOcclusionIntensity'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  return param_1;
}

// _Move @ 14f08fd30

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectSpread'::__l2::<lambda_1>,void>::
_Move(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectSpread'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  return param_1;
}

// _Move @ 14f08fd50

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceDistanceAttenuation'::__l2::<lambda_1>,void>
::_Move(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceDistanceAttenuation'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  return param_1;
}

// _Move @ 14f08fd70

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceDistanceModel'::__l2::<lambda_1>,void>
::_Move(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceDistanceModel'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)this + 0x18);
  return param_1;
}

// _Move @ 14f08fda0

_Func_base<void> * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourcePosition'::__l2::<lambda_1>,void>
::_Move(void *this,void *param_1)

{
  return (_Func_base<void> *)0x0;
}

// _Move @ 14f08fdb0

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceRoomEffectsGain'::__l2::<lambda_1>,void>
::_Move(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceRoomEffectsGain'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  return param_1;
}

// _Move @ 14f08fdd0

_Func_base<void> * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceRotation'::__l2::<lambda_1>,void>
::_Move(void *this,void *param_1)

{
  return (_Func_base<void> *)0x0;
}

// _Move @ 14f08fde0

_Func_base<void> * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceVolume'::__l2::<lambda_1>,void>::
_Move(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceVolume'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  return param_1;
}

// _Move @ 14f08fe00

_Func_base<void> * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetStereoSpeakerMode'::__l2::<lambda_1>,void>::
_Move(void *this,void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetStereoSpeakerMode'::`2'::<lambda_1>,void>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  return param_1;
}

// _Target_type @ 14f08fe20

type_info * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::CreateAmbisonicSource'::__l2::<lambda_1>,void>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_virtual_int___cdecl_vraudio::ResonanceAudioApiImpl::CreateAmbisonicSource(unsigned___int64)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14f08fe30

type_info * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::CreateSoundObjectSource'::__l2::<lambda_1>,void>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_virtual_int___cdecl_vraudio::ResonanceAudioApiImpl::CreateSoundObjectSource(vraudio::RenderingMode)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14f08fe40

type_info * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::CreateStereoSource'::__l2::<lambda_1>,void>::
_Target_type(void *this)

{
  return (type_info *)
         &`public:_virtual_int___cdecl_vraudio::ResonanceAudioApiImpl::CreateStereoSource(unsigned___int64)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14f08fe50

type_info * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::DestroySource'::__l2::<lambda_1>,void>::
_Target_type(void *this)

{
  return (type_info *)
         &`public:_virtual_void___cdecl_vraudio::ResonanceAudioApiImpl::DestroySource(int)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14f08fe60

type_info * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::EnableRoomEffects'::__l2::<lambda_1>,void>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_virtual_void___cdecl_vraudio::ResonanceAudioApiImpl::EnableRoomEffects(bool)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14f08fe70

type_info * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::ProcessNextBuffer'::__l2::<lambda_1>,void,vraudio::SourceParameters_*>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_void___cdecl_vraudio::ResonanceAudioApiImpl::ProcessNextBuffer(void)___ptr64'::
          __l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14f08fe80

type_info * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetHeadPosition'::__l2::<lambda_1>,void>::
_Target_type(void *this)

{
  return (type_info *)
         &`public:_virtual_void___cdecl_vraudio::ResonanceAudioApiImpl::SetHeadPosition(float,float,float)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14f08fe90

type_info * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetHeadRotation'::__l2::<lambda_1>,void>::
_Target_type(void *this)

{
  return (type_info *)
         &`public:_virtual_void___cdecl_vraudio::ResonanceAudioApiImpl::SetHeadRotation(float,float,float,float)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14f08fea0

type_info * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetPrimaryVolume'::__l2::<lambda_1>,void>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_virtual_void___cdecl_vraudio::ResonanceAudioApiImpl::SetPrimaryVolume(float)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14f08feb0

type_info * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetReflectionProperties'::__l2::<lambda_1>,void>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_virtual_void___cdecl_vraudio::ResonanceAudioApiImpl::SetReflectionProperties(vraudio::ReflectionProperties_const&___ptr64)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14f08fec0

type_info * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetReverbProperties'::__l2::<lambda_1>,void>::
_Target_type(void *this)

{
  return (type_info *)
         &`public:_virtual_void___cdecl_vraudio::ResonanceAudioApiImpl::SetReverbProperties(vraudio::ReverbProperties_const&___ptr64)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14f08fed0

type_info * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectDirectivity'::__l2::<lambda_1>,void>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_virtual_void___cdecl_vraudio::ResonanceAudioApiImpl::SetSoundObjectDirectivity(int,float,float)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14f08fee0

type_info * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectListenerDirectivity'::__l2::<lambda_1>,void>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_virtual_void___cdecl_vraudio::ResonanceAudioApiImpl::SetSoundObjectListenerDirectivity(int,float,float)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14f08fef0

type_info * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectNearFieldEffectGain'::__l2::<lambda_1>,void>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_virtual_void___cdecl_vraudio::ResonanceAudioApiImpl::SetSoundObjectNearFieldEffectGain(int,float)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14f08ff00

type_info * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectOcclusionIntensity'::__l2::<lambda_1>,void>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_virtual_void___cdecl_vraudio::ResonanceAudioApiImpl::SetSoundObjectOcclusionIntensity(int,float)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14f08ff10

type_info * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSoundObjectSpread'::__l2::<lambda_1>,void>::
_Target_type(void *this)

{
  return (type_info *)
         &`public:_virtual_void___cdecl_vraudio::ResonanceAudioApiImpl::SetSoundObjectSpread(int,float)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14f08ff20

type_info * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceDistanceAttenuation'::__l2::<lambda_1>,void>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_virtual_void___cdecl_vraudio::ResonanceAudioApiImpl::SetSourceDistanceAttenuation(int,float)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14f08ff30

type_info * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceDistanceModel'::__l2::<lambda_1>,void>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_virtual_void___cdecl_vraudio::ResonanceAudioApiImpl::SetSourceDistanceModel(int,vraudio::DistanceRolloffModel,float,float)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14f08ff40

type_info * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourcePosition'::__l2::<lambda_1>,void>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_virtual_void___cdecl_vraudio::ResonanceAudioApiImpl::SetSourcePosition(int,float,float,float)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14f08ff50

type_info * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceRoomEffectsGain'::__l2::<lambda_1>,void>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_virtual_void___cdecl_vraudio::ResonanceAudioApiImpl::SetSourceRoomEffectsGain(int,float)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14f08ff60

type_info * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceRotation'::__l2::<lambda_1>,void>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_virtual_void___cdecl_vraudio::ResonanceAudioApiImpl::SetSourceRotation(int,float,float,float,float)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14f08ff70

type_info * __thiscall
std::_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetSourceVolume'::__l2::<lambda_1>,void>::
_Target_type(void *this)

{
  return (type_info *)
         &`public:_virtual_void___cdecl_vraudio::ResonanceAudioApiImpl::SetSourceVolume(int,float)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Target_type @ 14f08ff80

type_info * __thiscall
std::
_Func_impl_no_alloc<`vraudio::ResonanceAudioApiImpl::SetStereoSpeakerMode'::__l2::<lambda_1>,void>::
_Target_type(void *this)

{
  return (type_info *)
         &`public:_virtual_void___cdecl_vraudio::ResonanceAudioApiImpl::SetStereoSpeakerMode(bool)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// deallocate @ 14f08ff90

void __thiscall
std::
allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>_>
::deallocate(allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>_>
             *this,_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
                   *param_1,ulong64 param_2)

{
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
  _Var1;
  ulonglong uVar2;
  
  uVar2 = param_2 * 8;
  _Var1 = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<int_const_,vraudio::SourceParameters>_>_>_>
           )param_1;
  if (0xfff < uVar2) {
    _Var1 = param_1[-1];
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_1 + (-8 - (longlong)_Var1))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  ::operator_delete((void *)_Var1,uVar2);
  return;
}

