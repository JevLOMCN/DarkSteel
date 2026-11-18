// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 71

// AddInputBufferTemplated<short_const_*> @ 14f07f270

ulong64 __thiscall
vraudio::BinauralSurroundRendererImpl::AddInputBufferTemplated<short_const_*>
          (BinauralSurroundRendererImpl *this,short *param_1,ulong64 param_2,ulong64 param_3)

{
  ulonglong uVar1;
  
  if (param_2 != this->num_input_channels_) {
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
                ::__l2::kNullStream,"Invalid number of input channels");
    return 0;
  }
  if (this->num_zero_padded_frames_ != 0) {
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
                ::__l2::kNullStream,
               "Zero padded output buffers must be consumed prior to |AddInterleavedBuffer| calls");
    return 0;
  }
  uVar1 = (**(code **)(this->_padding_ + 0x10))();
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  BufferPartitioner::AddBuffer
            ((this->buffer_partitioner_)._Mypair._Myval2,param_1,this->num_input_channels_,param_3);
  this->total_frames_buffered_ = this->total_frames_buffered_ + param_3;
  return param_3;
}

// AddInputBufferTemplated<float_const_*> @ 14f07f410

ulong64 __thiscall
vraudio::BinauralSurroundRendererImpl::AddInputBufferTemplated<float_const_*>
          (BinauralSurroundRendererImpl *this,float *param_1,ulong64 param_2,ulong64 param_3)

{
  ulonglong uVar1;
  
  if (param_2 != this->num_input_channels_) {
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
                ::__l2::kNullStream,"Invalid number of input channels");
    return 0;
  }
  if (this->num_zero_padded_frames_ != 0) {
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
                ::__l2::kNullStream,
               "Zero padded output buffers must be consumed prior to |AddInterleavedBuffer| calls");
    return 0;
  }
  uVar1 = (**(code **)(this->_padding_ + 0x10))();
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  BufferPartitioner::AddBuffer
            ((this->buffer_partitioner_)._Mypair._Myval2,param_1,this->num_input_channels_,param_3);
  this->total_frames_buffered_ = this->total_frames_buffered_ + param_3;
  return param_3;
}

// AddInputBufferTemplated<short_const_*_const_*> @ 14f07f5b0

ulong64 __thiscall
vraudio::BinauralSurroundRendererImpl::AddInputBufferTemplated<short_const_*_const_*>
          (BinauralSurroundRendererImpl *this,short **param_1,ulong64 param_2,ulong64 param_3)

{
  ulonglong uVar1;
  
  if (param_2 != this->num_input_channels_) {
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
                ::__l2::kNullStream,"Invalid number of input channels");
    return 0;
  }
  if (this->num_zero_padded_frames_ != 0) {
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
                ::__l2::kNullStream,
               "Zero padded output buffers must be consumed prior to |AddInterleavedBuffer| calls");
    return 0;
  }
  uVar1 = (**(code **)(this->_padding_ + 0x10))();
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  BufferPartitioner::AddBuffer
            ((this->buffer_partitioner_)._Mypair._Myval2,param_1,this->num_input_channels_,param_3);
  this->total_frames_buffered_ = this->total_frames_buffered_ + param_3;
  return param_3;
}

// AddInputBufferTemplated<float_const_*_const_*> @ 14f07f750

ulong64 __thiscall
vraudio::BinauralSurroundRendererImpl::AddInputBufferTemplated<float_const_*_const_*>
          (BinauralSurroundRendererImpl *this,float **param_1,ulong64 param_2,ulong64 param_3)

{
  ulonglong uVar1;
  
  if (param_2 != this->num_input_channels_) {
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
                ::__l2::kNullStream,"Invalid number of input channels");
    return 0;
  }
  if (this->num_zero_padded_frames_ != 0) {
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
                ::__l2::kNullStream,
               "Zero padded output buffers must be consumed prior to |AddInterleavedBuffer| calls");
    return 0;
  }
  uVar1 = (**(code **)(this->_padding_ + 0x10))();
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  BufferPartitioner::AddBuffer
            ((this->buffer_partitioner_)._Mypair._Myval2,param_1,this->num_input_channels_,param_3);
  this->total_frames_buffered_ = this->total_frames_buffered_ + param_3;
  return param_3;
}

// GetStereoOutputBufferTemplated<short_*> @ 14f07f8f0

ulong64 __thiscall
vraudio::BinauralSurroundRendererImpl::GetStereoOutputBufferTemplated<short_*>
          (BinauralSurroundRendererImpl *this,short *param_1,ulong64 param_2)

{
  ulong64 *puVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar2 = (**(code **)(this->_padding_ + 0x38))();
  if (param_2 < uVar2) {
    uVar2 = param_2;
  }
  uVar4 = this->total_frames_buffered_;
  if (uVar2 <= this->total_frames_buffered_) {
    uVar4 = uVar2;
  }
  uVar3 = BufferUnpartitioner::GetBuffer
                    ((this->buffer_unpartitioner_)._Mypair._Myval2,param_1,2,uVar4);
  puVar1 = &this->total_frames_buffered_;
  *puVar1 = *puVar1 - uVar3;
  if (*puVar1 == 0) {
    BufferUnpartitioner::Clear((this->buffer_unpartitioner_)._Mypair._Myval2);
    this->num_zero_padded_frames_ = 0;
  }
  return uVar3;
}

// GetStereoOutputBufferTemplated<float_*> @ 14f07f980

ulong64 __thiscall
vraudio::BinauralSurroundRendererImpl::GetStereoOutputBufferTemplated<float_*>
          (BinauralSurroundRendererImpl *this,float *param_1,ulong64 param_2)

{
  ulong64 *puVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar2 = (**(code **)(this->_padding_ + 0x38))();
  if (param_2 < uVar2) {
    uVar2 = param_2;
  }
  uVar4 = this->total_frames_buffered_;
  if (uVar2 <= this->total_frames_buffered_) {
    uVar4 = uVar2;
  }
  uVar3 = BufferUnpartitioner::GetBuffer
                    ((this->buffer_unpartitioner_)._Mypair._Myval2,param_1,2,uVar4);
  puVar1 = &this->total_frames_buffered_;
  *puVar1 = *puVar1 - uVar3;
  if (*puVar1 == 0) {
    BufferUnpartitioner::Clear((this->buffer_unpartitioner_)._Mypair._Myval2);
    this->num_zero_padded_frames_ = 0;
  }
  return uVar3;
}

// GetStereoOutputBufferTemplated<short_*_*> @ 14f07fa10

ulong64 __thiscall
vraudio::BinauralSurroundRendererImpl::GetStereoOutputBufferTemplated<short_*_*>
          (BinauralSurroundRendererImpl *this,short **param_1,ulong64 param_2)

{
  ulong64 *puVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar2 = (**(code **)(this->_padding_ + 0x38))();
  if (param_2 < uVar2) {
    uVar2 = param_2;
  }
  uVar4 = this->total_frames_buffered_;
  if (uVar2 <= this->total_frames_buffered_) {
    uVar4 = uVar2;
  }
  uVar3 = BufferUnpartitioner::GetBuffer
                    ((this->buffer_unpartitioner_)._Mypair._Myval2,param_1,2,uVar4);
  puVar1 = &this->total_frames_buffered_;
  *puVar1 = *puVar1 - uVar3;
  if (*puVar1 == 0) {
    BufferUnpartitioner::Clear((this->buffer_unpartitioner_)._Mypair._Myval2);
    this->num_zero_padded_frames_ = 0;
  }
  return uVar3;
}

// GetStereoOutputBufferTemplated<float_*_*> @ 14f07faa0

ulong64 __thiscall
vraudio::BinauralSurroundRendererImpl::GetStereoOutputBufferTemplated<float_*_*>
          (BinauralSurroundRendererImpl *this,float **param_1,ulong64 param_2)

{
  ulong64 *puVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar2 = (**(code **)(this->_padding_ + 0x38))();
  if (param_2 < uVar2) {
    uVar2 = param_2;
  }
  uVar4 = this->total_frames_buffered_;
  if (uVar2 <= this->total_frames_buffered_) {
    uVar4 = uVar2;
  }
  uVar3 = BufferUnpartitioner::GetBuffer
                    ((this->buffer_unpartitioner_)._Mypair._Myval2,param_1,2,uVar4);
  puVar1 = &this->total_frames_buffered_;
  *puVar1 = *puVar1 - uVar3;
  if (*puVar1 == 0) {
    BufferUnpartitioner::Clear((this->buffer_unpartitioner_)._Mypair._Myval2);
    this->num_zero_padded_frames_ = 0;
  }
  return uVar3;
}

// _Copy_memmove<float_const_*_*,float_const_*_*> @ 14f07fb30

float ** __cdecl
std::_Copy_memmove<float_const_*_*,float_const_*_*>(float **param_1,float **param_2,float **param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (float **)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove_tail<float_const_*_*> @ 14f07fb70

float ** __cdecl
std::_Copy_memmove_tail<float_const_*_*>
          (char *param_1,float **param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (float **)((longlong)param_2 + param_3);
}

// _Resize<std::_Value_init_tag> @ 14f07fba0

void __thiscall
std::vector<float_const_*,std::allocator<float_const_*>_>::_Resize<std::_Value_init_tag>
          (vector<float_const_*,std::allocator<float_const_*>_> *this,ulong64 param_1,
          _Value_init_tag *param_2)

{
  float **ppfVar1;
  ulonglong uVar2;
  float **ppfVar3;
  ulonglong uVar4;
  float **ppfVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  
  ppfVar1 = (this->_Mypair)._Myval2._Mylast;
  ppfVar3 = (this->_Mypair)._Myval2._Myfirst;
  uVar7 = (longlong)ppfVar1 - (longlong)ppfVar3 >> 3;
  if (param_1 < uVar7) {
    (this->_Mypair)._Myval2._Mylast = ppfVar3 + param_1;
    return;
  }
  if (uVar7 < param_1) {
    uVar4 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)ppfVar3 >> 3;
    if (param_1 <= uVar4) {
      memset(ppfVar1,0,(param_1 - uVar7) * 8);
      (this->_Mypair)._Myval2._Mylast = ppfVar1 + (param_1 - uVar7);
      return;
    }
    if (0x1fffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    if (0x1fffffffffffffff - (uVar4 >> 1) < uVar4) {
      uVar2 = 0x1fffffffffffffff;
    }
    else {
      uVar4 = uVar4 + (uVar4 >> 1);
      uVar2 = param_1;
      if ((param_1 <= uVar4) && (uVar2 = uVar4, 0x1fffffffffffffff < uVar4)) {
                    /* WARNING: Subroutine does not return */
        _Throw_bad_array_new_length();
      }
    }
    ppfVar3 = _Allocate<16,std::_Default_allocate_traits>(uVar2 * 8);
    memset(ppfVar3 + uVar7,0,(param_1 - uVar7) * 8);
    ppfVar1 = (this->_Mypair)._Myval2._Myfirst;
    memmove(ppfVar3,ppfVar1,(longlong)(this->_Mypair)._Myval2._Mylast - (longlong)ppfVar1);
    ppfVar1 = (this->_Mypair)._Myval2._Myfirst;
    if (ppfVar1 != (float **)0x0) {
      uVar6 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)ppfVar1 & 0xfffffffffffffff8;
      ppfVar5 = ppfVar1;
      if (0xfff < uVar6) {
        ppfVar5 = (float **)ppfVar1[-1];
        uVar6 = uVar6 + 0x27;
        if (0x1f < (ulonglong)((longlong)ppfVar1 + (-8 - (longlong)ppfVar5))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(ppfVar5,uVar6);
    }
    (this->_Mypair)._Myval2._Myfirst = ppfVar3;
    (this->_Mypair)._Myval2._Mylast = ppfVar3 + param_1;
    (this->_Mypair)._Myval2._Myend = ppfVar3 + uVar2;
  }
  return;
}

// _Test_callable<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(vraudio::AudioBuffer_*),vraudio::BinauralSurroundRendererImpl_*,std::_Ph<1>_const_&>_> @ 14f07fd40

bool __cdecl
std::
_Test_callable<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(vraudio::AudioBuffer_*),vraudio::BinauralSurroundRendererImpl_*,std::_Ph<1>_const_&>_>
          (_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(vraudio::AudioBuffer_*),vraudio::BinauralSurroundRendererImpl_*,std::_Ph<1>_const_&>
           *param_1)

{
  return true;
}

// _Test_callable<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(void),vraudio::BinauralSurroundRendererImpl_*>_> @ 14f07fd50

bool __cdecl
std::
_Test_callable<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(void),vraudio::BinauralSurroundRendererImpl_*>_>
          (_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(void),vraudio::BinauralSurroundRendererImpl_*>
           *param_1)

{
  return true;
}

// _Zero_range<float_const_*_*> @ 14f07fd60

float ** __cdecl std::_Zero_range<float_const_*_*>(float **param_1,float **param_2)

{
  memset(param_1,0,(longlong)param_2 - (longlong)param_1);
  return param_2;
}

// ThreadsafeFifo<vraudio::AudioBuffer> @ 14f07fd90

ThreadsafeFifo<vraudio::AudioBuffer> * __thiscall
vraudio::ThreadsafeFifo<vraudio::AudioBuffer>::ThreadsafeFifo<vraudio::AudioBuffer>
          (ThreadsafeFifo<vraudio::AudioBuffer> *this,ulong64 param_1)

{
  AudioBuffer *pAVar1;
  bool bVar2;
  ulong64 uVar3;
  FatalLogger local_108;
  
  bVar2 = false;
  *(undefined8 *)&(this->fifo_empty_mutex_).field_0x18 = 0;
  *(undefined8 *)&(this->fifo_empty_mutex_).field_0x20 = 0;
  *(undefined8 *)&(this->fifo_empty_mutex_).field_0x28 = 0;
  *(undefined8 *)&(this->fifo_empty_mutex_).field_0x30 = 0;
  *(undefined8 *)&(this->fifo_empty_mutex_).field_0x38 = 0;
  *(undefined8 *)&(this->fifo_empty_mutex_).field_0x40 = 0;
  *(undefined8 *)&(this->fifo_empty_mutex_).field_0x8 = 0;
  *(undefined8 *)&(this->fifo_empty_mutex_).field_0x10 = 0;
  *(undefined4 *)&(this->fifo_empty_mutex_).field_0x48 = 0xffffffff;
  *(undefined4 *)&this->fifo_empty_mutex_ = 2;
  *(undefined4 *)&(this->fifo_empty_mutex_).field_0x4c = 0;
  (this->fifo_empty_conditional_)._Cnd_storage.field0_0x0._Stl_cv._Unused = (void *)0x0;
  (this->fifo_empty_conditional_)._Cnd_storage.field0_0x0._Stl_cv._Win_cv = (void *)0x0;
  *(undefined8 *)((longlong)&(this->fifo_empty_conditional_)._Cnd_storage.field0_0x0 + 0x10) = 0;
  *(undefined8 *)((longlong)&(this->fifo_empty_conditional_)._Cnd_storage.field0_0x0 + 0x18) = 0;
  *(undefined8 *)((longlong)&(this->fifo_empty_conditional_)._Cnd_storage.field0_0x0 + 0x20) = 0;
  *(undefined8 *)((longlong)&(this->fifo_empty_conditional_)._Cnd_storage.field0_0x0 + 0x28) = 0;
  *(undefined8 *)((longlong)&(this->fifo_empty_conditional_)._Cnd_storage.field0_0x0 + 0x30) = 0;
  *(undefined8 *)((longlong)&(this->fifo_empty_conditional_)._Cnd_storage.field0_0x0 + 0x38) = 0;
  *(undefined8 *)((longlong)&(this->fifo_empty_conditional_)._Cnd_storage.field0_0x0 + 0x40) = 0;
  *(undefined8 *)&(this->fifo_full_mutex_).field_0x18 = 0;
  *(undefined8 *)&(this->fifo_full_mutex_).field_0x20 = 0;
  *(undefined8 *)&(this->fifo_full_mutex_).field_0x28 = 0;
  *(undefined8 *)&(this->fifo_full_mutex_).field_0x30 = 0;
  *(undefined8 *)&(this->fifo_full_mutex_).field_0x38 = 0;
  *(undefined8 *)&(this->fifo_full_mutex_).field_0x40 = 0;
  *(undefined8 *)&(this->fifo_full_mutex_).field_0x8 = 0;
  *(undefined8 *)&(this->fifo_full_mutex_).field_0x10 = 0;
  *(undefined4 *)&(this->fifo_full_mutex_).field_0x48 = 0xffffffff;
  *(undefined4 *)&this->fifo_full_mutex_ = 2;
  *(undefined4 *)&(this->fifo_full_mutex_).field_0x4c = 0;
  (this->fifo_full_conditional_)._Cnd_storage.field0_0x0._Stl_cv._Unused = (void *)0x0;
  (this->fifo_full_conditional_)._Cnd_storage.field0_0x0._Stl_cv._Win_cv = (void *)0x0;
  *(undefined8 *)((longlong)&(this->fifo_full_conditional_)._Cnd_storage.field0_0x0 + 0x10) = 0;
  *(undefined8 *)((longlong)&(this->fifo_full_conditional_)._Cnd_storage.field0_0x0 + 0x18) = 0;
  *(undefined8 *)((longlong)&(this->fifo_full_conditional_)._Cnd_storage.field0_0x0 + 0x20) = 0;
  *(undefined8 *)((longlong)&(this->fifo_full_conditional_)._Cnd_storage.field0_0x0 + 0x28) = 0;
  *(undefined8 *)((longlong)&(this->fifo_full_conditional_)._Cnd_storage.field0_0x0 + 0x30) = 0;
  *(undefined8 *)((longlong)&(this->fifo_full_conditional_)._Cnd_storage.field0_0x0 + 0x38) = 0;
  *(undefined8 *)((longlong)&(this->fifo_full_conditional_)._Cnd_storage.field0_0x0 + 0x40) = 0;
  (this->fifo_)._Mypair._Myval2._Myfirst = (AudioBuffer *)0x0;
  (this->fifo_)._Mypair._Myval2._Mylast = (AudioBuffer *)0x0;
  (this->fifo_)._Mypair._Myval2._Myend = (AudioBuffer *)0x0;
  if (param_1 != 0) {
    if (0x38e38e38e38e38e < param_1) {
                    /* WARNING: Subroutine does not return */
      std::vector<vraudio::AudioBuffer,std::allocator<vraudio::AudioBuffer>_>::_Xlength();
    }
    pAVar1 = std::_Allocate<16,std::_Default_allocate_traits>(param_1 * 0x48);
    (this->fifo_)._Mypair._Myval2._Myfirst = pAVar1;
    (this->fifo_)._Mypair._Myval2._Mylast = pAVar1;
    (this->fifo_)._Mypair._Myval2._Myend = pAVar1 + param_1;
    pAVar1 = (this->fifo_)._Mypair._Myval2._Myfirst;
    uVar3 = param_1;
    do {
      AudioBuffer::AudioBuffer(pAVar1);
      pAVar1 = pAVar1 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    (this->fifo_)._Mypair._Myval2._Mylast = pAVar1;
  }
  this->read_pos_ = 0;
  this->write_pos_ = 0;
  this->fifo_size_ = (atomic<unsigned___int64>)0x0;
  this->enable_sleeping_ = (atomic<bool>)0x1;
  if (param_1 == 0) {
    FatalLogger::FatalLogger
              (&local_108,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\utils\\threadsafe_fifo.h"
               ,0x82);
    bVar2 = true;
  }
  else {
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
                ::__l2::kNullStream,"FIFO size must be greater than zero");
  }
  if (bVar2) {
    FatalLogger::~FatalLogger(&local_108);
  }
  return this;
}

// ThreadsafeFifo<vraudio::AudioBuffer> @ 14f07ffe0

ThreadsafeFifo<vraudio::AudioBuffer> * __thiscall
vraudio::ThreadsafeFifo<vraudio::AudioBuffer>::ThreadsafeFifo<vraudio::AudioBuffer>
          (ThreadsafeFifo<vraudio::AudioBuffer> *this,ulong64 param_1,AudioBuffer *param_2)

{
  AudioBuffer *pAVar1;
  AudioBuffer *this_00;
  
  ThreadsafeFifo<vraudio::AudioBuffer>(this,param_1);
  pAVar1 = (this->fifo_)._Mypair._Myval2._Mylast;
  for (this_00 = (this->fifo_)._Mypair._Myval2._Myfirst; this_00 != pAVar1; this_00 = this_00 + 1) {
    AudioBuffer::operator=(this_00,param_2);
  }
  return this;
}

// BinauralSurroundRendererImpl @ 14f080050

BinauralSurroundRendererImpl * __thiscall
vraudio::BinauralSurroundRendererImpl::BinauralSurroundRendererImpl
          (BinauralSurroundRendererImpl *this)

{
  this->_padding_ = (longlong)&___7BinauralSurroundRendererImpl_vraudio__6B_;
  (this->resonance_audio_api_)._Mypair._Myval2 = (ResonanceAudioApi *)0x0;
  this->frames_per_buffer_ = 0;
  this->sample_rate_hz_ = 0;
  this->surround_format_ = kInvalid;
  this->num_input_channels_ = 0;
  (this->buffer_partitioner_)._Mypair._Myval2 = (BufferPartitioner *)0x0;
  (this->input_audio_buffer_queue_)._Mypair._Myval2 = (ThreadsafeFifo<vraudio::AudioBuffer> *)0x0;
  AudioBuffer::AudioBuffer(&this->output_buffer_);
  (this->buffer_unpartitioner_)._Mypair._Myval2 = (BufferUnpartitioner *)0x0;
  (this->source_ids_)._Mypair._Myval2._Myfirst = (int *)0x0;
  (this->source_ids_)._Mypair._Myval2._Mylast = (int *)0x0;
  (this->source_ids_)._Mypair._Myval2._Myend = (int *)0x0;
  this->total_frames_buffered_ = 0;
  this->num_zero_padded_frames_ = 0;
  (this->temp_planar_buffer_ptrs_)._Mypair._Myval2._Myfirst = (float **)0x0;
  (this->temp_planar_buffer_ptrs_)._Mypair._Myval2._Mylast = (float **)0x0;
  (this->temp_planar_buffer_ptrs_)._Mypair._Myval2._Myend = (float **)0x0;
  this->output_gain_ = 0.0;
  return this;
}

// BinauralSurroundRendererImpl @ 14f0800f0

BinauralSurroundRendererImpl * __thiscall
vraudio::BinauralSurroundRendererImpl::BinauralSurroundRendererImpl
          (BinauralSurroundRendererImpl *this,ulong64 param_1,int param_2)

{
  this->sample_rate_hz_ = param_2;
  this->frames_per_buffer_ = param_1;
  this->_padding_ = (longlong)&___7BinauralSurroundRendererImpl_vraudio__6B_;
  (this->resonance_audio_api_)._Mypair._Myval2 = (ResonanceAudioApi *)0x0;
  this->surround_format_ = kInvalid;
  this->num_input_channels_ = 0;
  (this->buffer_partitioner_)._Mypair._Myval2 = (BufferPartitioner *)0x0;
  (this->input_audio_buffer_queue_)._Mypair._Myval2 = (ThreadsafeFifo<vraudio::AudioBuffer> *)0x0;
  AudioBuffer::AudioBuffer(&this->output_buffer_,2,param_1);
  (this->buffer_unpartitioner_)._Mypair._Myval2 = (BufferUnpartitioner *)0x0;
  (this->source_ids_)._Mypair._Myval2._Myfirst = (int *)0x0;
  (this->source_ids_)._Mypair._Myval2._Mylast = (int *)0x0;
  (this->source_ids_)._Mypair._Myval2._Myend = (int *)0x0;
  this->total_frames_buffered_ = 0;
  this->num_zero_padded_frames_ = 0;
  (this->temp_planar_buffer_ptrs_)._Mypair._Myval2._Myfirst = (float **)0x0;
  (this->temp_planar_buffer_ptrs_)._Mypair._Myval2._Mylast = (float **)0x0;
  (this->temp_planar_buffer_ptrs_)._Mypair._Myval2._Myend = (float **)0x0;
  this->output_gain_ = 1.0;
  return this;
}

// ~vector<float_const_*,std::allocator<float_const_*>_> @ 14f0801a0

void __thiscall
std::vector<float_const_*,std::allocator<float_const_*>_>::
~vector<float_const_*,std::allocator<float_const_*>_>
          (vector<float_const_*,std::allocator<float_const_*>_> *this)

{
  float **ppfVar1;
  float **ppfVar2;
  ulong64 uVar3;
  
  ppfVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (ppfVar1 != (float **)0x0) {
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)ppfVar1 & 0xfffffffffffffff8;
    ppfVar2 = ppfVar1;
    if (0xfff < uVar3) {
      ppfVar2 = (float **)ppfVar1[-1];
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)ppfVar1 + (-8 - (longlong)ppfVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(ppfVar2,uVar3);
    (this->_Mypair)._Myval2._Myfirst = (float **)0x0;
    (this->_Mypair)._Myval2._Mylast = (float **)0x0;
    (this->_Mypair)._Myval2._Myend = (float **)0x0;
  }
  return;
}

// ~BinauralSurroundRenderer @ 14f080220

void __thiscall
vraudio::BinauralSurroundRenderer::~BinauralSurroundRenderer(BinauralSurroundRenderer *this)

{
  *this = (BinauralSurroundRenderer)&___7BinauralSurroundRenderer_vraudio__6B_;
  return;
}

// ~BinauralSurroundRendererImpl @ 14f080240

void __thiscall
vraudio::BinauralSurroundRendererImpl::~BinauralSurroundRendererImpl
          (BinauralSurroundRendererImpl *this)

{
  BufferUnpartitioner *pBVar1;
  longlong *plVar2;
  ThreadsafeFifo<vraudio::AudioBuffer> *pTVar3;
  BufferPartitioner *pBVar4;
  ResonanceAudioApi *pRVar5;
  
  this->_padding_ = (longlong)&___7BinauralSurroundRendererImpl_vraudio__6B_;
  std::vector<float_const_*,std::allocator<float_const_*>_>::
  ~vector<float_const_*,std::allocator<float_const_*>_>(&this->temp_planar_buffer_ptrs_);
  std::vector<int,std::allocator<int>_>::~vector<int,std::allocator<int>_>(&this->source_ids_);
  pBVar1 = (this->buffer_unpartitioner_)._Mypair._Myval2;
  if (pBVar1 != (BufferUnpartitioner *)0x0) {
    plVar2 = *(longlong **)&(pBVar1->buffer_callback_).field_0x38;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))
                (plVar2,(function<vraudio::AudioBuffer_const_*___cdecl(void)> *)plVar2 !=
                        &pBVar1->buffer_callback_);
      *(undefined8 *)&(pBVar1->buffer_callback_).field_0x38 = 0;
    }
    ::operator_delete(pBVar1,0x58);
  }
  AudioBuffer::~AudioBuffer(&this->output_buffer_);
  pTVar3 = (this->input_audio_buffer_queue_)._Mypair._Myval2;
  if (pTVar3 != (ThreadsafeFifo<vraudio::AudioBuffer> *)0x0) {
    std::vector<vraudio::AudioBuffer,std::allocator<vraudio::AudioBuffer>_>::_Tidy(&pTVar3->fifo_);
    ::operator_delete(pTVar3,0x168);
  }
  pBVar4 = (this->buffer_partitioner_)._Mypair._Myval2;
  if (pBVar4 != (BufferPartitioner *)0x0) {
    std::vector<float_const_*,std::allocator<float_const_*>_>::
    ~vector<float_const_*,std::allocator<float_const_*>_>(&pBVar4->planar_channel_ptrs_);
    plVar2 = *(longlong **)&(pBVar4->buffer_callback_).field_0x38;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))
                (plVar2,(function<vraudio::AudioBuffer_*___cdecl(vraudio::AudioBuffer_*)> *)plVar2
                        != &pBVar4->buffer_callback_);
      *(undefined8 *)&(pBVar4->buffer_callback_).field_0x38 = 0;
    }
    ::operator_delete(pBVar4,0x78);
  }
  pRVar5 = (this->resonance_audio_api_)._Mypair._Myval2;
  if (pRVar5 != (ResonanceAudioApi *)0x0) {
    (**(code **)*pRVar5)(pRVar5,1);
  }
  this->_padding_ = (longlong)&___7BinauralSurroundRenderer_vraudio__6B_;
  return;
}

// `scalar_deleting_destructor' @ 14f080350

void * __thiscall
vraudio::BinauralSurroundRenderer::_scalar_deleting_destructor_
          (BinauralSurroundRenderer *this,uint param_1)

{
  *this = (BinauralSurroundRenderer)&___7BinauralSurroundRenderer_vraudio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f080390

void * __thiscall
vraudio::BinauralSurroundRendererImpl::_scalar_deleting_destructor_
          (BinauralSurroundRendererImpl *this,uint param_1)

{
  BufferUnpartitioner *pBVar1;
  longlong *plVar2;
  ThreadsafeFifo<vraudio::AudioBuffer> *pTVar3;
  BufferPartitioner *pBVar4;
  ResonanceAudioApi *pRVar5;
  
  this->_padding_ = (longlong)&___7BinauralSurroundRendererImpl_vraudio__6B_;
  std::vector<float_const_*,std::allocator<float_const_*>_>::
  ~vector<float_const_*,std::allocator<float_const_*>_>(&this->temp_planar_buffer_ptrs_);
  std::vector<int,std::allocator<int>_>::~vector<int,std::allocator<int>_>(&this->source_ids_);
  pBVar1 = (this->buffer_unpartitioner_)._Mypair._Myval2;
  if (pBVar1 != (BufferUnpartitioner *)0x0) {
    plVar2 = *(longlong **)&(pBVar1->buffer_callback_).field_0x38;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))
                (plVar2,(function<vraudio::AudioBuffer_const_*___cdecl(void)> *)plVar2 !=
                        &pBVar1->buffer_callback_);
      *(undefined8 *)&(pBVar1->buffer_callback_).field_0x38 = 0;
    }
    ::operator_delete(pBVar1,0x58);
  }
  AudioBuffer::~AudioBuffer(&this->output_buffer_);
  pTVar3 = (this->input_audio_buffer_queue_)._Mypair._Myval2;
  if (pTVar3 != (ThreadsafeFifo<vraudio::AudioBuffer> *)0x0) {
    std::vector<vraudio::AudioBuffer,std::allocator<vraudio::AudioBuffer>_>::_Tidy(&pTVar3->fifo_);
    ::operator_delete(pTVar3,0x168);
  }
  pBVar4 = (this->buffer_partitioner_)._Mypair._Myval2;
  if (pBVar4 != (BufferPartitioner *)0x0) {
    std::vector<float_const_*,std::allocator<float_const_*>_>::
    ~vector<float_const_*,std::allocator<float_const_*>_>(&pBVar4->planar_channel_ptrs_);
    plVar2 = *(longlong **)&(pBVar4->buffer_callback_).field_0x38;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))
                (plVar2,(function<vraudio::AudioBuffer_*___cdecl(vraudio::AudioBuffer_*)> *)plVar2
                        != &pBVar4->buffer_callback_);
      *(undefined8 *)&(pBVar4->buffer_callback_).field_0x38 = 0;
    }
    ::operator_delete(pBVar4,0x78);
  }
  pRVar5 = (this->resonance_audio_api_)._Mypair._Myval2;
  if (pRVar5 != (ResonanceAudioApi *)0x0) {
    (**(code **)*pRVar5)(pRVar5,1);
  }
  this->_padding_ = (longlong)&___7BinauralSurroundRenderer_vraudio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// AcquireInputObject @ 14f0804c0

AudioBuffer * __thiscall
vraudio::ThreadsafeFifo<vraudio::AudioBuffer>::AcquireInputObject
          (ThreadsafeFifo<vraudio::AudioBuffer> *this)

{
  bool bVar1;
  FatalLogger local_f8;
  
  if (this->fifo_size_ ==
      (atomic<unsigned___int64>)
      (((longlong)(this->fifo_)._Mypair._Myval2._Mylast -
       (longlong)(this->fifo_)._Mypair._Myval2._Myfirst) / 0x48)) {
    return (AudioBuffer *)0x0;
  }
  if ((ulonglong)this->fifo_size_ <
      (ulonglong)
      (((longlong)(this->fifo_)._Mypair._Myval2._Mylast -
       (longlong)(this->fifo_)._Mypair._Myval2._Myfirst) / 0x48)) {
    bVar1 = false;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      bVar1 = false;
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
  }
  else {
    FatalLogger::FatalLogger
              (&local_f8,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\utils\\threadsafe_fifo.h"
               ,0x92);
    bVar1 = true;
  }
  if (bVar1) {
    FatalLogger::~FatalLogger(&local_f8);
  }
  return (this->fifo_)._Mypair._Myval2._Myfirst + this->write_pos_;
}

// AcquireOutputObject @ 14f080620

AudioBuffer * __thiscall
vraudio::ThreadsafeFifo<vraudio::AudioBuffer>::AcquireOutputObject
          (ThreadsafeFifo<vraudio::AudioBuffer> *this)

{
  bool bVar1;
  FatalLogger local_f8;
  
  if (this->fifo_size_ == (atomic<unsigned___int64>)0x0) {
    return (AudioBuffer *)0x0;
  }
  if (this->fifo_size_ == (atomic<unsigned___int64>)0x0) {
    FatalLogger::FatalLogger
              (&local_f8,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\utils\\threadsafe_fifo.h"
               ,0xaf);
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      bVar1 = false;
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
  }
  if (bVar1) {
    FatalLogger::~FatalLogger(&local_f8);
  }
  return (this->fifo_)._Mypair._Myval2._Myfirst + this->read_pos_;
}

// AddInterleavedInput @ 14f080730

ulong64 __thiscall
vraudio::BinauralSurroundRendererImpl::AddInterleavedInput
          (BinauralSurroundRendererImpl *this,short *param_1,ulong64 param_2,ulong64 param_3)

{
  ulonglong uVar1;
  
  if (param_2 != this->num_input_channels_) {
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
                ::__l2::kNullStream,"Invalid number of input channels");
    return 0;
  }
  if (this->num_zero_padded_frames_ != 0) {
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
                ::__l2::kNullStream,
               "Zero padded output buffers must be consumed prior to |AddInterleavedBuffer| calls");
    return 0;
  }
  uVar1 = (**(code **)(this->_padding_ + 0x10))();
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  BufferPartitioner::AddBuffer
            ((this->buffer_partitioner_)._Mypair._Myval2,param_1,this->num_input_channels_,param_3);
  this->total_frames_buffered_ = this->total_frames_buffered_ + param_3;
  return param_3;
}

// AddInterleavedInput @ 14f0808d0

ulong64 __thiscall
vraudio::BinauralSurroundRendererImpl::AddInterleavedInput
          (BinauralSurroundRendererImpl *this,float *param_1,ulong64 param_2,ulong64 param_3)

{
  ulonglong uVar1;
  
  if (param_2 != this->num_input_channels_) {
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
                ::__l2::kNullStream,"Invalid number of input channels");
    return 0;
  }
  if (this->num_zero_padded_frames_ != 0) {
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
                ::__l2::kNullStream,
               "Zero padded output buffers must be consumed prior to |AddInterleavedBuffer| calls");
    return 0;
  }
  uVar1 = (**(code **)(this->_padding_ + 0x10))();
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  BufferPartitioner::AddBuffer
            ((this->buffer_partitioner_)._Mypair._Myval2,param_1,this->num_input_channels_,param_3);
  this->total_frames_buffered_ = this->total_frames_buffered_ + param_3;
  return param_3;
}

// AddPlanarInput @ 14f080a70

ulong64 __thiscall
vraudio::BinauralSurroundRendererImpl::AddPlanarInput
          (BinauralSurroundRendererImpl *this,short **param_1,ulong64 param_2,ulong64 param_3)

{
  ulonglong uVar1;
  
  if (param_2 != this->num_input_channels_) {
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
                ::__l2::kNullStream,"Invalid number of input channels");
    return 0;
  }
  if (this->num_zero_padded_frames_ != 0) {
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
                ::__l2::kNullStream,
               "Zero padded output buffers must be consumed prior to |AddInterleavedBuffer| calls");
    return 0;
  }
  uVar1 = (**(code **)(this->_padding_ + 0x10))();
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  BufferPartitioner::AddBuffer
            ((this->buffer_partitioner_)._Mypair._Myval2,param_1,this->num_input_channels_,param_3);
  this->total_frames_buffered_ = this->total_frames_buffered_ + param_3;
  return param_3;
}

// AddPlanarInput @ 14f080c10

ulong64 __thiscall
vraudio::BinauralSurroundRendererImpl::AddPlanarInput
          (BinauralSurroundRendererImpl *this,float **param_1,ulong64 param_2,ulong64 param_3)

{
  ulonglong uVar1;
  
  if (param_2 != this->num_input_channels_) {
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
                ::__l2::kNullStream,"Invalid number of input channels");
    return 0;
  }
  if (this->num_zero_padded_frames_ != 0) {
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
                ::__l2::kNullStream,
               "Zero padded output buffers must be consumed prior to |AddInterleavedBuffer| calls");
    return 0;
  }
  uVar1 = (**(code **)(this->_padding_ + 0x10))();
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  BufferPartitioner::AddBuffer
            ((this->buffer_partitioner_)._Mypair._Myval2,param_1,this->num_input_channels_,param_3);
  this->total_frames_buffered_ = this->total_frames_buffered_ + param_3;
  return param_3;
}

// BufferPartitionerCallback @ 14f080db0

AudioBuffer * __thiscall
vraudio::BinauralSurroundRendererImpl::BufferPartitionerCallback
          (BinauralSurroundRendererImpl *this,AudioBuffer *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  ThreadsafeFifo<vraudio::AudioBuffer> *pTVar3;
  int iVar4;
  AudioBuffer *extraout_RAX;
  AudioBuffer *extraout_RAX_00;
  longlong lVar5;
  AudioBuffer *pAVar6;
  FatalLogger local_f8;
  
  pAVar6 = (AudioBuffer *)0x0;
  if (param_1 != (AudioBuffer *)0x0) {
    pTVar3 = (this->input_audio_buffer_queue_)._Mypair._Myval2;
    pTVar3->write_pos_ = pTVar3->write_pos_ + 1;
    lVar5 = (longlong)(pTVar3->fifo_)._Mypair._Myval2._Mylast -
            (longlong)(pTVar3->fifo_)._Mypair._Myval2._Myfirst;
    lVar5 = lVar5 / 0x12 + (lVar5 >> 0x3f);
    pTVar3->write_pos_ = pTVar3->write_pos_ % (ulonglong)((lVar5 >> 2) - (lVar5 >> 0x3f));
    LOCK();
    paVar1 = &pTVar3->fifo_size_;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned___int64>)0x0) {
      iVar4 = _Mtx_lock(pTVar3);
      if (iVar4 != 0) {
        std::_Throw_Cpp_error(5);
        return extraout_RAX;
      }
      if (*(int *)&(pTVar3->fifo_empty_mutex_).field_0x4c == 0x7fffffff) {
        *(undefined4 *)&(pTVar3->fifo_empty_mutex_).field_0x4c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
        return extraout_RAX_00;
      }
      _Mtx_unlock(pTVar3);
      _Cnd_signal(&pTVar3->fifo_empty_conditional_);
    }
  }
  pTVar3 = (this->input_audio_buffer_queue_)._Mypair._Myval2;
  if (pTVar3->fifo_size_ !=
      (atomic<unsigned___int64>)
      (((longlong)(pTVar3->fifo_)._Mypair._Myval2._Mylast -
       (longlong)(pTVar3->fifo_)._Mypair._Myval2._Myfirst) / 0x48)) {
    if ((ulonglong)pTVar3->fifo_size_ <
        (ulonglong)
        (((longlong)(pTVar3->fifo_)._Mypair._Myval2._Mylast -
         (longlong)(pTVar3->fifo_)._Mypair._Myval2._Myfirst) / 0x48)) {
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
    }
    else {
      FatalLogger::FatalLogger
                (&local_f8,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\utils\\threadsafe_fifo.h"
                 ,0x92);
      pAVar6 = (AudioBuffer *)&DAT_00000001;
    }
    if (pAVar6 != (AudioBuffer *)0x0) {
      FatalLogger::~FatalLogger(&local_f8);
    }
    pAVar6 = (pTVar3->fifo_)._Mypair._Myval2._Myfirst + pTVar3->write_pos_;
  }
  return pAVar6;
}

// Clear @ 14f080fc0

void __thiscall
vraudio::ThreadsafeFifo<vraudio::AudioBuffer>::Clear(ThreadsafeFifo<vraudio::AudioBuffer> *this)

{
  atomic<unsigned___int64> aVar1;
  AudioBuffer *pAVar2;
  
  aVar1 = this->fifo_size_;
  while (aVar1 != (atomic<unsigned___int64>)0x0) {
    pAVar2 = AcquireOutputObject(this);
    if (pAVar2 != (AudioBuffer *)0x0) {
      ReleaseOutputObject(this,pAVar2);
    }
    aVar1 = this->fifo_size_;
  }
  return;
}

// Clear @ 14f081010

void __thiscall vraudio::BinauralSurroundRendererImpl::Clear(BinauralSurroundRendererImpl *this)

{
  ThreadsafeFifo<vraudio::AudioBuffer> *this_00;
  atomic<unsigned___int64> aVar1;
  AudioBuffer *pAVar2;
  
  this_00 = (this->input_audio_buffer_queue_)._Mypair._Myval2;
  aVar1 = this_00->fifo_size_;
  while (aVar1 != (atomic<unsigned___int64>)0x0) {
    pAVar2 = ThreadsafeFifo<vraudio::AudioBuffer>::AcquireOutputObject(this_00);
    if (pAVar2 != (AudioBuffer *)0x0) {
      ThreadsafeFifo<vraudio::AudioBuffer>::ReleaseOutputObject(this_00,pAVar2);
    }
    aVar1 = this_00->fifo_size_;
  }
  BufferPartitioner::Clear((this->buffer_partitioner_)._Mypair._Myval2);
  BufferUnpartitioner::Clear((this->buffer_unpartitioner_)._Mypair._Myval2);
  this->total_frames_buffered_ = 0;
  this->num_zero_padded_frames_ = 0;
  return;
}

// CreateSoundObject @ 14f081090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
vraudio::BinauralSurroundRendererImpl::CreateSoundObject
          (BinauralSurroundRendererImpl *this,float param_1)

{
  ResonanceAudioApi *pRVar1;
  int iVar2;
  SphericalAngle this_00;
  float in_XMM0_Da;
  undefined1 auStack_58 [56];
  WorldPosition local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  this_00 = SphericalAngle::FromDegrees(in_XMM0_Da,param_1);
  SphericalAngle::GetWorldPositionOnUnitSphere((SphericalAngle *)this_00,&local_20);
  pRVar1 = (this->resonance_audio_api_)._Mypair._Myval2;
  iVar2 = (**(code **)((longlong)*pRVar1 + 0x58))(pRVar1,3);
  pRVar1 = (this->resonance_audio_api_)._Mypair._Myval2;
  auStack_58._32_4_ = local_20._8_4_;
  (**(code **)((longlong)*pRVar1 + 0x98))(pRVar1,iVar2,local_20._0_4_,local_20._4_4_);
  return iVar2;
}

// Empty @ 14f081130

bool __thiscall
vraudio::ThreadsafeFifo<vraudio::AudioBuffer>::Empty(ThreadsafeFifo<vraudio::AudioBuffer> *this)

{
  return this->fifo_size_ == (atomic<unsigned___int64>)0x0;
}

// Full @ 14f081150

bool __thiscall
vraudio::ThreadsafeFifo<vraudio::AudioBuffer>::Full(ThreadsafeFifo<vraudio::AudioBuffer> *this)

{
  return this->fifo_size_ ==
         (atomic<unsigned___int64>)
         (((longlong)(this->fifo_)._Mypair._Myval2._Mylast -
          (longlong)(this->fifo_)._Mypair._Myval2._Myfirst) / 0x48);
}

// GetAvailableFramesInStereoOutputBuffer @ 14f0811a0

ulong64 __thiscall
vraudio::BinauralSurroundRendererImpl::GetAvailableFramesInStereoOutputBuffer
          (BinauralSurroundRendererImpl *this)

{
  ulonglong uVar1;
  atomic<unsigned___int64> aVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  
  aVar2 = ((this->input_audio_buffer_queue_)._Mypair._Myval2)->fifo_size_;
  uVar3 = this->frames_per_buffer_;
  uVar4 = BufferUnpartitioner::GetNumBufferedFrames((this->buffer_unpartitioner_)._Mypair._Myval2);
  uVar1 = uVar4 + (longlong)aVar2 * uVar3;
  uVar5 = this->total_frames_buffered_;
  if (uVar1 < this->total_frames_buffered_) {
    uVar5 = uVar1;
  }
  return uVar5;
}

// GetExpectedNumChannelsFromSurroundFormat @ 14f0811f0

ulong64 __cdecl
vraudio::BinauralSurroundRendererImpl::GetExpectedNumChannelsFromSurroundFormat
          (SurroundFormat param_1)

{
  switch(param_1) {
  case kSurroundMono:
    return 1;
  case kSurroundStereo:
    return 2;
  case kSurroundFiveDotOne:
  case kFirstOrderAmbisonicsWithNonDiegeticStereo:
    return 6;
  case kFirstOrderAmbisonics:
    return 4;
  case kSecondOrderAmbisonics:
    return 9;
  case kThirdOrderAmbisonics:
    return 0x10;
  case kSecondOrderAmbisonicsWithNonDiegeticStereo:
    return 0xb;
  case kThirdOrderAmbisonicsWithNonDiegeticStereo:
    return 0x12;
  case kSurroundSevenDotOne:
    return 8;
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
              ::__l2::kNullStream,"Undefined surround format mode");
  return 0;
}

// GetInterleavedStereoOutput @ 14f081320

ulong64 __thiscall
vraudio::BinauralSurroundRendererImpl::GetInterleavedStereoOutput
          (BinauralSurroundRendererImpl *this,short *param_1,ulong64 param_2)

{
  ulong64 *puVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar2 = (**(code **)(this->_padding_ + 0x38))();
  if (param_2 < uVar2) {
    uVar2 = param_2;
  }
  uVar4 = this->total_frames_buffered_;
  if (uVar2 <= this->total_frames_buffered_) {
    uVar4 = uVar2;
  }
  uVar3 = BufferUnpartitioner::GetBuffer
                    ((this->buffer_unpartitioner_)._Mypair._Myval2,param_1,2,uVar4);
  puVar1 = &this->total_frames_buffered_;
  *puVar1 = *puVar1 - uVar3;
  if (*puVar1 == 0) {
    BufferUnpartitioner::Clear((this->buffer_unpartitioner_)._Mypair._Myval2);
    this->num_zero_padded_frames_ = 0;
  }
  return uVar3;
}

// GetInterleavedStereoOutput @ 14f0813b0

ulong64 __thiscall
vraudio::BinauralSurroundRendererImpl::GetInterleavedStereoOutput
          (BinauralSurroundRendererImpl *this,float *param_1,ulong64 param_2)

{
  ulong64 *puVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar2 = (**(code **)(this->_padding_ + 0x38))();
  if (param_2 < uVar2) {
    uVar2 = param_2;
  }
  uVar4 = this->total_frames_buffered_;
  if (uVar2 <= this->total_frames_buffered_) {
    uVar4 = uVar2;
  }
  uVar3 = BufferUnpartitioner::GetBuffer
                    ((this->buffer_unpartitioner_)._Mypair._Myval2,param_1,2,uVar4);
  puVar1 = &this->total_frames_buffered_;
  *puVar1 = *puVar1 - uVar3;
  if (*puVar1 == 0) {
    BufferUnpartitioner::Clear((this->buffer_unpartitioner_)._Mypair._Myval2);
    this->num_zero_padded_frames_ = 0;
  }
  return uVar3;
}

// GetNumAvailableFramesInInputBuffer @ 14f081440

ulong64 __thiscall
vraudio::BinauralSurroundRendererImpl::GetNumAvailableFramesInInputBuffer
          (BinauralSurroundRendererImpl *this)

{
  ThreadsafeFifo<vraudio::AudioBuffer> *pTVar1;
  atomic<unsigned___int64> aVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  
  if (this->num_zero_padded_frames_ == 0) {
    pTVar1 = (this->input_audio_buffer_queue_)._Mypair._Myval2;
    if (pTVar1->fifo_size_ !=
        (atomic<unsigned___int64>)
        (((longlong)(pTVar1->fifo_)._Mypair._Myval2._Mylast -
         (longlong)(pTVar1->fifo_)._Mypair._Myval2._Myfirst) / 0x48)) {
      aVar2 = ((this->input_audio_buffer_queue_)._Mypair._Myval2)->fifo_size_;
      uVar3 = this->frames_per_buffer_;
      uVar4 = BufferPartitioner::GetNumBufferedFrames((this->buffer_partitioner_)._Mypair._Myval2);
      return (0x3f - (longlong)aVar2) * uVar3 - uVar4;
    }
  }
  return 0;
}

// GetPlanarStereoOutput @ 14f0814e0

ulong64 __thiscall
vraudio::BinauralSurroundRendererImpl::GetPlanarStereoOutput
          (BinauralSurroundRendererImpl *this,short **param_1,ulong64 param_2)

{
  ulong64 *puVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar2 = (**(code **)(this->_padding_ + 0x38))();
  if (param_2 < uVar2) {
    uVar2 = param_2;
  }
  uVar4 = this->total_frames_buffered_;
  if (uVar2 <= this->total_frames_buffered_) {
    uVar4 = uVar2;
  }
  uVar3 = BufferUnpartitioner::GetBuffer
                    ((this->buffer_unpartitioner_)._Mypair._Myval2,param_1,2,uVar4);
  puVar1 = &this->total_frames_buffered_;
  *puVar1 = *puVar1 - uVar3;
  if (*puVar1 == 0) {
    BufferUnpartitioner::Clear((this->buffer_unpartitioner_)._Mypair._Myval2);
    this->num_zero_padded_frames_ = 0;
  }
  return uVar3;
}

// GetPlanarStereoOutput @ 14f081570

ulong64 __thiscall
vraudio::BinauralSurroundRendererImpl::GetPlanarStereoOutput
          (BinauralSurroundRendererImpl *this,float **param_1,ulong64 param_2)

{
  ulong64 *puVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar2 = (**(code **)(this->_padding_ + 0x38))();
  if (param_2 < uVar2) {
    uVar2 = param_2;
  }
  uVar4 = this->total_frames_buffered_;
  if (uVar2 <= this->total_frames_buffered_) {
    uVar4 = uVar2;
  }
  uVar3 = BufferUnpartitioner::GetBuffer
                    ((this->buffer_unpartitioner_)._Mypair._Myval2,param_1,2,uVar4);
  puVar1 = &this->total_frames_buffered_;
  *puVar1 = *puVar1 - uVar3;
  if (*puVar1 == 0) {
    BufferUnpartitioner::Clear((this->buffer_unpartitioner_)._Mypair._Myval2);
    this->num_zero_padded_frames_ = 0;
  }
  return uVar3;
}

// Init @ 14f081600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
vraudio::BinauralSurroundRendererImpl::Init
          (BinauralSurroundRendererImpl *this,SurroundFormat param_1)

{
  vector<int,std::allocator<int>_> *pvVar1;
  AudioBuffer *pAVar2;
  ThreadsafeFifo<vraudio::AudioBuffer> *pTVar3;
  longlong *plVar4;
  ResonanceAudioApi *pRVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  ThreadsafeFifo<vraudio::AudioBuffer> *this_00;
  AudioBuffer *pAVar10;
  BufferPartitioner *pBVar11;
  BufferPartitioner *pBVar12;
  BufferUnpartitioner *pBVar13;
  BufferUnpartitioner *pBVar14;
  ResonanceAudioApi *pRVar15;
  ReflectionProperties *pRVar16;
  ReverbProperties *pRVar17;
  ulong64 uVar18;
  AudioBuffer *this_01;
  ulonglong uVar19;
  undefined1 auStack_1e8 [32];
  _Value_init_tag local_1c8 [4];
  undefined4 local_1c4;
  FatalLogger local_1c0;
  undefined1 local_d8 [16];
  BinauralSurroundRendererImpl *local_c8;
  BinauralSurroundRendererImpl *local_c0;
  ChannelView *local_a0;
  RoomProperties local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  uVar19 = (ulonglong)_tls_index;
  bVar8 = false;
  this->surround_format_ = param_1;
  local_1c4 = 0;
  switch(param_1 - kSurroundMono) {
  case kInvalid:
    uVar18 = 1;
    break;
  case kSurroundMono:
    uVar18 = 2;
    break;
  case kSurroundStereo:
  case kThirdOrderAmbisonics:
    uVar18 = 6;
    break;
  case kSurroundFiveDotOne:
    uVar18 = 4;
    break;
  case kFirstOrderAmbisonics:
    uVar18 = 9;
    break;
  case kSecondOrderAmbisonics:
    uVar18 = 0x10;
    break;
  case kFirstOrderAmbisonicsWithNonDiegeticStereo:
    uVar18 = 0xb;
    break;
  case kSecondOrderAmbisonicsWithNonDiegeticStereo:
    uVar18 = 0x12;
    break;
  case kThirdOrderAmbisonicsWithNonDiegeticStereo:
    uVar18 = 8;
    break;
  default:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar19 * 8) + 0x9d4c) <
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
                ::__l2::kNullStream,"Undefined surround format mode");
    uVar18 = 0;
  }
  this->num_input_channels_ = uVar18;
  std::vector<float_const_*,std::allocator<float_const_*>_>::_Resize<std::_Value_init_tag>
            (&this->temp_planar_buffer_ptrs_,uVar18,local_1c8);
  this_00 = ::operator_new(0x168);
  if (this_00 == (ThreadsafeFifo<vraudio::AudioBuffer> *)0x0) {
    this_00 = (ThreadsafeFifo<vraudio::AudioBuffer> *)0x0;
  }
  else {
    pAVar10 = AudioBuffer::AudioBuffer
                        ((AudioBuffer *)local_d8,this->num_input_channels_,this->frames_per_buffer_)
    ;
    ThreadsafeFifo<vraudio::AudioBuffer>::ThreadsafeFifo<vraudio::AudioBuffer>(this_00,0x40);
    pAVar2 = (this_00->fifo_)._Mypair._Myval2._Mylast;
    for (this_01 = (this_00->fifo_)._Mypair._Myval2._Myfirst; this_01 != pAVar2;
        this_01 = this_01 + 1) {
      AudioBuffer::operator=(this_01,pAVar10);
    }
    uVar19 = (ulonglong)_tls_index;
    bVar8 = true;
  }
  pTVar3 = (this->input_audio_buffer_queue_)._Mypair._Myval2;
  (this->input_audio_buffer_queue_)._Mypair._Myval2 = this_00;
  if (pTVar3 != (ThreadsafeFifo<vraudio::AudioBuffer> *)0x0) {
    std::vector<vraudio::AudioBuffer,std::allocator<vraudio::AudioBuffer>_>::_Tidy(&pTVar3->fifo_);
    ::operator_delete(pTVar3,0x168);
  }
  if (bVar8) {
    AudioBuffer::~AudioBuffer((AudioBuffer *)local_d8);
  }
  bVar8 = false;
  pBVar11 = ::operator_new(0x78);
  pBVar12 = (BufferPartitioner *)0x0;
  if (pBVar11 != (BufferPartitioner *)0x0) {
    local_d8._0_8_ =
         &
         ___7___Func_impl_no_alloc_V___Binder_U_Unforced_std__P8BinauralSurroundRendererImpl_vraudio__EAAPEAVAudioBuffer_4_PEAV54__ZPEAV34_AEBU___Ph__00_2__std__PEAVAudioBuffer_vraudio__PEAV34__std__6B_
    ;
    local_d8._8_8_ = BufferPartitionerCallback;
    local_c8 = (BinauralSurroundRendererImpl *)CONCAT71(local_c8._1_7_,local_1c8[0]);
    local_a0 = (ChannelView *)local_d8;
    local_c0 = this;
    pBVar12 = BufferPartitioner::BufferPartitioner
                        (pBVar11,this->num_input_channels_,this->frames_per_buffer_,
                         (function<vraudio::AudioBuffer_*___cdecl(vraudio::AudioBuffer_*)> *)
                         local_d8);
  }
  pBVar11 = (this->buffer_partitioner_)._Mypair._Myval2;
  (this->buffer_partitioner_)._Mypair._Myval2 = pBVar12;
  if (pBVar11 != (BufferPartitioner *)0x0) {
    std::vector<float_const_*,std::allocator<float_const_*>_>::
    ~vector<float_const_*,std::allocator<float_const_*>_>(&pBVar11->planar_channel_ptrs_);
    plVar4 = *(longlong **)&(pBVar11->buffer_callback_).field_0x38;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x20))
                (plVar4,(function<vraudio::AudioBuffer_*___cdecl(vraudio::AudioBuffer_*)> *)plVar4
                        != &pBVar11->buffer_callback_);
      *(undefined8 *)&(pBVar11->buffer_callback_).field_0x38 = 0;
    }
    ::operator_delete(pBVar11,0x78);
  }
  pBVar13 = ::operator_new(0x58);
  pBVar14 = (BufferUnpartitioner *)0x0;
  if (pBVar13 != (BufferUnpartitioner *)0x0) {
    local_d8._0_8_ =
         &
         ___7___Func_impl_no_alloc_V___Binder_U_Unforced_std__P8BinauralSurroundRendererImpl_vraudio__EAAPEAVAudioBuffer_4_XZPEAV34__std__PEBVAudioBuffer_vraudio____V_std__6B_
    ;
    local_d8._8_8_ = ProcessBuffer;
    local_a0 = (ChannelView *)local_d8;
    local_c8 = this;
    pBVar14 = BufferUnpartitioner::BufferUnpartitioner
                        (pBVar13,2,this->frames_per_buffer_,
                         (function<vraudio::AudioBuffer_const_*___cdecl(void)> *)local_d8);
  }
  pBVar13 = (this->buffer_unpartitioner_)._Mypair._Myval2;
  (this->buffer_unpartitioner_)._Mypair._Myval2 = pBVar14;
  if (pBVar13 != (BufferUnpartitioner *)0x0) {
    plVar4 = *(longlong **)&(pBVar13->buffer_callback_).field_0x38;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x20))
                (plVar4,(function<vraudio::AudioBuffer_const_*___cdecl(void)> *)plVar4 !=
                        &pBVar13->buffer_callback_);
      *(undefined8 *)&(pBVar13->buffer_callback_).field_0x38 = 0;
    }
    ::operator_delete(pBVar13,0x58);
  }
  pRVar15 = CreateResonanceAudioApi(2,this->frames_per_buffer_,this->sample_rate_hz_);
  pRVar5 = (this->resonance_audio_api_)._Mypair._Myval2;
  (this->resonance_audio_api_)._Mypair._Myval2 = pRVar15;
  if (pRVar5 != (ResonanceAudioApi *)0x0) {
    (**(code **)*pRVar5)(pRVar5,1);
  }
  if ((param_1 - kSurroundMono < 3) || (param_1 == kSurroundSevenDotOne)) {
    pRVar5 = (this->resonance_audio_api_)._Mypair._Myval2;
    local_88.rotation[1] = 0.0;
    local_88.rotation[2] = 0.0;
    local_88.position[0] = 0.0;
    local_88.position[1] = 0.0;
    local_88.position[2] = 0.0;
    local_88.rotation[0] = 0.0;
    local_88.reverb_gain = this->output_gain_;
    local_88.material_names[2] = ___xmm_00000017000000170000001700000017;
    local_88.material_names[3] = _UNK_153103d34;
    local_88.material_names[4] = _UNK_153103d38;
    local_88.material_names[5] = _UNK_153103d3c;
    local_88.rotation[3] = 1.0;
    local_88.reverb_time = 1.0;
    local_88.reverb_brightness = 0.0;
    local_88.dimensions[0] = 9.54;
    local_88.dimensions[1] = 6.0;
    local_88.dimensions[2] = 15.12;
    local_88.reflection_scalar = 1.0;
    local_88.material_names[0] = kUniform;
    local_88.material_names[1] = kUniform;
    pcVar6 = *(code **)((longlong)*pRVar5 + 0xe8);
    pRVar16 = ComputeReflectionProperties((ReflectionProperties *)local_d8,&local_88);
    (*pcVar6)(pRVar5,pRVar16);
    pRVar5 = (this->resonance_audio_api_)._Mypair._Myval2;
    pcVar6 = *(code **)((longlong)*pRVar5 + 0xf0);
    pRVar17 = ComputeReverbProperties((ReverbProperties *)local_d8,&local_88);
    (*pcVar6)(pRVar5,pRVar17);
    pRVar5 = (this->resonance_audio_api_)._Mypair._Myval2;
    (**(code **)((longlong)*pRVar5 + 0xe0))(pRVar5,1);
  }
  switch(param_1 - kSurroundMono) {
  case kInvalid:
    std::vector<int,std::allocator<int>_>::_Resize<std::_Value_init_tag>
              (&this->source_ids_,1,local_1c8);
    iVar9 = CreateSoundObject(this,0.0);
    *(this->source_ids_)._Mypair._Myval2._Myfirst = iVar9;
    bVar8 = true;
    this->output_gain_ = 0.5;
    break;
  case kSurroundMono:
    std::vector<int,std::allocator<int>_>::_Resize<std::_Value_init_tag>
              (&this->source_ids_,2,local_1c8);
    iVar9 = CreateSoundObject(this,__real_41f00000);
    fVar7 = __real_c1f00000;
    *(this->source_ids_)._Mypair._Myval2._Myfirst = iVar9;
    iVar9 = CreateSoundObject(this,fVar7);
    (this->source_ids_)._Mypair._Myval2._Myfirst[1] = iVar9;
    bVar8 = true;
    this->output_gain_ = 0.5;
    break;
  case kSurroundStereo:
    pvVar1 = &this->source_ids_;
    std::vector<int,std::allocator<int>_>::_Resize<std::_Value_init_tag>(pvVar1,6,local_1c8);
    iVar9 = CreateSoundObject(this,__real_41f00000);
    fVar7 = __real_c1f00000;
    *(pvVar1->_Mypair)._Myval2._Myfirst = iVar9;
    iVar9 = CreateSoundObject(this,fVar7);
    (pvVar1->_Mypair)._Myval2._Myfirst[1] = iVar9;
    iVar9 = CreateSoundObject(this,0.0);
    (pvVar1->_Mypair)._Myval2._Myfirst[2] = iVar9;
    iVar9 = CreateSoundObject(this,0.0);
    fVar7 = __real_42dc0000;
    (pvVar1->_Mypair)._Myval2._Myfirst[3] = iVar9;
    iVar9 = CreateSoundObject(this,fVar7);
    fVar7 = __real_c2dc0000;
    (pvVar1->_Mypair)._Myval2._Myfirst[4] = iVar9;
    iVar9 = CreateSoundObject(this,fVar7);
    (pvVar1->_Mypair)._Myval2._Myfirst[5] = iVar9;
    bVar8 = true;
    this->output_gain_ = 0.5;
    break;
  case kSurroundFiveDotOne:
  case kFirstOrderAmbisonics:
  case kSecondOrderAmbisonics:
    std::vector<int,std::allocator<int>_>::_Resize<std::_Value_init_tag>
              (&this->source_ids_,1,local_1c8);
    pRVar5 = (this->resonance_audio_api_)._Mypair._Myval2;
    iVar9 = (**(code **)((longlong)*pRVar5 + 0x48))(pRVar5,this->num_input_channels_);
    *(this->source_ids_)._Mypair._Myval2._Myfirst = iVar9;
    bVar8 = true;
    break;
  case kThirdOrderAmbisonics:
  case kFirstOrderAmbisonicsWithNonDiegeticStereo:
  case kSecondOrderAmbisonicsWithNonDiegeticStereo:
    std::vector<int,std::allocator<int>_>::_Resize<std::_Value_init_tag>
              (&this->source_ids_,2,local_1c8);
    if (this->num_input_channels_ < 3) {
      bVar8 = true;
      FatalLogger::FatalLogger
                (&local_1c0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\graph\\binaural_surround_renderer_impl.cc"
                 ,0xe9);
    }
    else if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar19 * 8) + 0x9d4c) <
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
    if (bVar8) {
      FatalLogger::~FatalLogger(&local_1c0);
    }
    pRVar5 = (this->resonance_audio_api_)._Mypair._Myval2;
    iVar9 = (**(code **)((longlong)*pRVar5 + 0x48))(pRVar5,this->num_input_channels_ - 2);
    *(this->source_ids_)._Mypair._Myval2._Myfirst = iVar9;
    pRVar5 = (this->resonance_audio_api_)._Mypair._Myval2;
    iVar9 = (**(code **)((longlong)*pRVar5 + 0x50))(pRVar5,2);
    (this->source_ids_)._Mypair._Myval2._Myfirst[1] = iVar9;
    bVar8 = true;
    break;
  case kThirdOrderAmbisonicsWithNonDiegeticStereo:
    pvVar1 = &this->source_ids_;
    std::vector<int,std::allocator<int>_>::_Resize<std::_Value_init_tag>(pvVar1,8,local_1c8);
    iVar9 = CreateSoundObject(this,__real_41f00000);
    fVar7 = __real_c1f00000;
    *(pvVar1->_Mypair)._Myval2._Myfirst = iVar9;
    iVar9 = CreateSoundObject(this,fVar7);
    (pvVar1->_Mypair)._Myval2._Myfirst[1] = iVar9;
    iVar9 = CreateSoundObject(this,0.0);
    (pvVar1->_Mypair)._Myval2._Myfirst[2] = iVar9;
    iVar9 = CreateSoundObject(this,0.0);
    fVar7 = __real_42b40000;
    (pvVar1->_Mypair)._Myval2._Myfirst[3] = iVar9;
    iVar9 = CreateSoundObject(this,fVar7);
    fVar7 = __real_c2b40000;
    (pvVar1->_Mypair)._Myval2._Myfirst[4] = iVar9;
    iVar9 = CreateSoundObject(this,fVar7);
    fVar7 = __real_43160000;
    (pvVar1->_Mypair)._Myval2._Myfirst[5] = iVar9;
    iVar9 = CreateSoundObject(this,fVar7);
    fVar7 = __real_c3160000;
    (pvVar1->_Mypair)._Myval2._Myfirst[6] = iVar9;
    iVar9 = CreateSoundObject(this,fVar7);
    (pvVar1->_Mypair)._Myval2._Myfirst[7] = iVar9;
    bVar8 = true;
    this->output_gain_ = 0.5;
    break;
  default:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar19 * 8) + 0x9d4c) <
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
                ::__l2::kNullStream,"Undefined rendering mode");
    bVar8 = false;
  }
  return bVar8;
}

// InitializeAmbisonics @ 14f081e70

void __thiscall
vraudio::BinauralSurroundRendererImpl::InitializeAmbisonics(BinauralSurroundRendererImpl *this)

{
  ResonanceAudioApi *pRVar1;
  int iVar2;
  _Value_init_tag local_res8 [8];
  
  std::vector<int,std::allocator<int>_>::_Resize<std::_Value_init_tag>
            (&this->source_ids_,1,local_res8);
  pRVar1 = (this->resonance_audio_api_)._Mypair._Myval2;
  iVar2 = (**(code **)((longlong)*pRVar1 + 0x48))(pRVar1,this->num_input_channels_);
  *(this->source_ids_)._Mypair._Myval2._Myfirst = iVar2;
  return;
}

// InitializeAmbisonicsWithNonDiegeticStereo @ 14f081ec0

void __thiscall
vraudio::BinauralSurroundRendererImpl::InitializeAmbisonicsWithNonDiegeticStereo
          (BinauralSurroundRendererImpl *this)

{
  ResonanceAudioApi *pRVar1;
  int iVar2;
  bool bVar3;
  undefined4 local_res8 [2];
  FatalLogger local_f8;
  
  local_res8[0] = 0;
  std::vector<int,std::allocator<int>_>::_Resize<std::_Value_init_tag>
            (&this->source_ids_,2,(_Value_init_tag *)local_res8);
  if (this->num_input_channels_ < 3) {
    FatalLogger::FatalLogger
              (&local_f8,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\graph\\binaural_surround_renderer_impl.cc"
               ,0xe9);
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      bVar3 = false;
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
  }
  if (bVar3) {
    FatalLogger::~FatalLogger(&local_f8);
  }
  pRVar1 = (this->resonance_audio_api_)._Mypair._Myval2;
  iVar2 = (**(code **)((longlong)*pRVar1 + 0x48))(pRVar1,this->num_input_channels_ - 2);
  *(this->source_ids_)._Mypair._Myval2._Myfirst = iVar2;
  pRVar1 = (this->resonance_audio_api_)._Mypair._Myval2;
  iVar2 = (**(code **)((longlong)*pRVar1 + 0x50))(pRVar1,2);
  (this->source_ids_)._Mypair._Myval2._Myfirst[1] = iVar2;
  return;
}

// InitializeBinauralMono @ 14f081ff0

void __thiscall
vraudio::BinauralSurroundRendererImpl::InitializeBinauralMono(BinauralSurroundRendererImpl *this)

{
  int iVar1;
  _Value_init_tag local_res8 [8];
  
  std::vector<int,std::allocator<int>_>::_Resize<std::_Value_init_tag>
            (&this->source_ids_,1,local_res8);
  iVar1 = CreateSoundObject(this,0.0);
  *(this->source_ids_)._Mypair._Myval2._Myfirst = iVar1;
  this->output_gain_ = 0.5;
  return;
}

// InitializeBinauralStereo @ 14f082050

void __thiscall
vraudio::BinauralSurroundRendererImpl::InitializeBinauralStereo(BinauralSurroundRendererImpl *this)

{
  float fVar1;
  int iVar2;
  _Value_init_tag local_res8 [8];
  
  std::vector<int,std::allocator<int>_>::_Resize<std::_Value_init_tag>
            (&this->source_ids_,2,local_res8);
  iVar2 = CreateSoundObject(this,__real_41f00000);
  fVar1 = __real_c1f00000;
  *(this->source_ids_)._Mypair._Myval2._Myfirst = iVar2;
  iVar2 = CreateSoundObject(this,fVar1);
  (this->source_ids_)._Mypair._Myval2._Myfirst[1] = iVar2;
  this->output_gain_ = 0.5;
  return;
}

// InitializeBinauralSurround5dot1 @ 14f0820d0

void __thiscall
vraudio::BinauralSurroundRendererImpl::InitializeBinauralSurround5dot1
          (BinauralSurroundRendererImpl *this)

{
  vector<int,std::allocator<int>_> *this_00;
  float fVar1;
  int iVar2;
  _Value_init_tag local_res8 [8];
  
  this_00 = &this->source_ids_;
  std::vector<int,std::allocator<int>_>::_Resize<std::_Value_init_tag>(this_00,6,local_res8);
  iVar2 = CreateSoundObject(this,__real_41f00000);
  fVar1 = __real_c1f00000;
  *(this_00->_Mypair)._Myval2._Myfirst = iVar2;
  iVar2 = CreateSoundObject(this,fVar1);
  (this_00->_Mypair)._Myval2._Myfirst[1] = iVar2;
  iVar2 = CreateSoundObject(this,0.0);
  (this_00->_Mypair)._Myval2._Myfirst[2] = iVar2;
  iVar2 = CreateSoundObject(this,0.0);
  fVar1 = __real_42dc0000;
  (this_00->_Mypair)._Myval2._Myfirst[3] = iVar2;
  iVar2 = CreateSoundObject(this,fVar1);
  fVar1 = __real_c2dc0000;
  (this_00->_Mypair)._Myval2._Myfirst[4] = iVar2;
  iVar2 = CreateSoundObject(this,fVar1);
  (this_00->_Mypair)._Myval2._Myfirst[5] = iVar2;
  this->output_gain_ = 0.5;
  return;
}

// InitializeBinauralSurround7dot1 @ 14f082190

void __thiscall
vraudio::BinauralSurroundRendererImpl::InitializeBinauralSurround7dot1
          (BinauralSurroundRendererImpl *this)

{
  vector<int,std::allocator<int>_> *this_00;
  float fVar1;
  int iVar2;
  _Value_init_tag local_res8 [8];
  
  this_00 = &this->source_ids_;
  std::vector<int,std::allocator<int>_>::_Resize<std::_Value_init_tag>(this_00,8,local_res8);
  iVar2 = CreateSoundObject(this,__real_41f00000);
  fVar1 = __real_c1f00000;
  *(this_00->_Mypair)._Myval2._Myfirst = iVar2;
  iVar2 = CreateSoundObject(this,fVar1);
  (this_00->_Mypair)._Myval2._Myfirst[1] = iVar2;
  iVar2 = CreateSoundObject(this,0.0);
  (this_00->_Mypair)._Myval2._Myfirst[2] = iVar2;
  iVar2 = CreateSoundObject(this,0.0);
  fVar1 = __real_42b40000;
  (this_00->_Mypair)._Myval2._Myfirst[3] = iVar2;
  iVar2 = CreateSoundObject(this,fVar1);
  fVar1 = __real_c2b40000;
  (this_00->_Mypair)._Myval2._Myfirst[4] = iVar2;
  iVar2 = CreateSoundObject(this,fVar1);
  fVar1 = __real_43160000;
  (this_00->_Mypair)._Myval2._Myfirst[5] = iVar2;
  iVar2 = CreateSoundObject(this,fVar1);
  fVar1 = __real_c3160000;
  (this_00->_Mypair)._Myval2._Myfirst[6] = iVar2;
  iVar2 = CreateSoundObject(this,fVar1);
  (this_00->_Mypair)._Myval2._Myfirst[7] = iVar2;
  this->output_gain_ = 0.5;
  return;
}

// InitializeRoomReverb @ 14f082280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
vraudio::BinauralSurroundRendererImpl::InitializeRoomReverb(BinauralSurroundRendererImpl *this)

{
  ResonanceAudioApi *pRVar1;
  code *pcVar2;
  ReflectionProperties *pRVar3;
  ReverbProperties *pRVar4;
  undefined1 auStack_d8 [32];
  RoomProperties local_b8;
  ReflectionProperties local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pRVar1 = (this->resonance_audio_api_)._Mypair._Myval2;
  local_b8.rotation[1] = 0.0;
  local_b8.rotation[2] = 0.0;
  local_b8.position[0] = 0.0;
  local_b8.position[1] = 0.0;
  local_b8.position[2] = 0.0;
  local_b8.rotation[0] = 0.0;
  local_b8.reverb_gain = this->output_gain_;
  local_b8.material_names._8_8_ = ___xmm_00000017000000170000001700000017;
  local_b8.material_names._16_8_ = _UNK_153103d38;
  local_b8.rotation[3] = 1.0;
  local_b8.reverb_time = 1.0;
  local_b8.reverb_brightness = 0.0;
  local_b8.dimensions[0] = 9.54;
  local_b8.dimensions[1] = 6.0;
  local_b8.dimensions[2] = 15.12;
  local_b8.reflection_scalar = 1.0;
  local_b8.material_names[0] = kUniform;
  local_b8.material_names[1] = kUniform;
  pcVar2 = *(code **)((longlong)*pRVar1 + 0xe8);
  pRVar3 = ComputeReflectionProperties(&local_68,&local_b8);
  (*pcVar2)(pRVar1,pRVar3);
  pRVar1 = (this->resonance_audio_api_)._Mypair._Myval2;
  pcVar2 = *(code **)((longlong)*pRVar1 + 0xf0);
  pRVar4 = ComputeReverbProperties((ReverbProperties *)&local_68,&local_b8);
  (*pcVar2)(pRVar1,pRVar4);
  pRVar1 = (this->resonance_audio_api_)._Mypair._Myval2;
  (**(code **)((longlong)*pRVar1 + 0xe0))(pRVar1,1);
  return;
}

// ProcessBuffer @ 14f0823a0

AudioBuffer * __thiscall
vraudio::BinauralSurroundRendererImpl::ProcessBuffer(BinauralSurroundRendererImpl *this)

{
  ResonanceAudioApi *pRVar1;
  ResonanceAudioApiImpl *this_00;
  ChannelView *pCVar2;
  AudioBuffer *pAVar3;
  AudioBuffer *pAVar4;
  longlong lVar5;
  int *piVar6;
  ulonglong uVar7;
  ChannelView *pCVar8;
  ulonglong uVar9;
  undefined8 local_res8;
  
  if (((this->input_audio_buffer_queue_)._Mypair._Myval2)->fifo_size_ ==
      (atomic<unsigned___int64>)0x0) {
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
                ::__l2::kNullStream,"Buffer underflow detected");
    return (AudioBuffer *)0x0;
  }
  pAVar3 = ThreadsafeFifo<vraudio::AudioBuffer>::AcquireOutputObject
                     ((this->input_audio_buffer_queue_)._Mypair._Myval2);
  GetRawChannelDataPointersFromAudioBuffer(pAVar3,&this->temp_planar_buffer_ptrs_);
  switch(this->surround_format_) {
  case kSurroundMono:
  case kSurroundStereo:
  case kSurroundFiveDotOne:
  case kSurroundSevenDotOne:
    piVar6 = (this->source_ids_)._Mypair._Myval2._Myfirst;
    uVar7 = 0;
    uVar9 = uVar7;
    if ((longlong)(this->source_ids_)._Mypair._Myval2._Mylast - (longlong)piVar6 >> 2 != 0) {
      do {
        local_res8 = *(undefined8 *)
                      ((longlong)&((pAVar3->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_ +
                      uVar9);
        pRVar1 = (this->resonance_audio_api_)._Mypair._Myval2;
        (**(code **)((longlong)*pRVar1 + 0x80))
                  (pRVar1,piVar6[uVar7],&local_res8,1,pAVar3->num_frames_);
        piVar6 = (this->source_ids_)._Mypair._Myval2._Myfirst;
        uVar7 = uVar7 + 1;
        uVar9 = uVar9 + 0x18;
      } while (uVar7 < (ulonglong)
                       ((longlong)(this->source_ids_)._Mypair._Myval2._Mylast - (longlong)piVar6 >>
                       2));
    }
    break;
  case kFirstOrderAmbisonics:
  case kSecondOrderAmbisonics:
  case kThirdOrderAmbisonics:
    pRVar1 = (this->resonance_audio_api_)._Mypair._Myval2;
    lVar5 = (longlong)(pAVar3->channel_views_)._Mypair._Myval2._Mylast -
            (longlong)(pAVar3->channel_views_)._Mypair._Myval2._Myfirst;
    lVar5 = lVar5 / 6 + (lVar5 >> 0x3f);
    (**(code **)((longlong)*pRVar1 + 0x80))
              (pRVar1,*(this->source_ids_)._Mypair._Myval2._Myfirst,
               (this->temp_planar_buffer_ptrs_)._Mypair._Myval2._Myfirst,
               (lVar5 >> 2) - (lVar5 >> 0x3f),pAVar3->num_frames_);
    break;
  case kFirstOrderAmbisonicsWithNonDiegeticStereo:
  case kSecondOrderAmbisonicsWithNonDiegeticStereo:
  case kThirdOrderAmbisonicsWithNonDiegeticStereo:
    pRVar1 = (this->resonance_audio_api_)._Mypair._Myval2;
    (**(code **)((longlong)*pRVar1 + 0x80))
              (pRVar1,*(this->source_ids_)._Mypair._Myval2._Myfirst,
               (this->temp_planar_buffer_ptrs_)._Mypair._Myval2._Myfirst,
               ((longlong)(pAVar3->channel_views_)._Mypair._Myval2._Mylast -
               (longlong)(pAVar3->channel_views_)._Mypair._Myval2._Myfirst) / 0x18 + -2,
               pAVar3->num_frames_);
    pRVar1 = (this->resonance_audio_api_)._Mypair._Myval2;
    (**(code **)((longlong)*pRVar1 + 0x80))
              (pRVar1,(this->source_ids_)._Mypair._Myval2._Myfirst[1],
               (this->temp_planar_buffer_ptrs_)._Mypair._Myval2._Myfirst +
               ((longlong)(pAVar3->channel_views_)._Mypair._Myval2._Mylast -
               (longlong)(pAVar3->channel_views_)._Mypair._Myval2._Myfirst) / 0x18 + -2,2,
               pAVar3->num_frames_);
    break;
  default:
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
                ::__l2::kNullStream,"Undefined surround format");
  }
  this_00 = (ResonanceAudioApiImpl *)(this->resonance_audio_api_)._Mypair._Myval2;
  ResonanceAudioApiImpl::ProcessNextBuffer(this_00);
  pAVar4 = ResonanceAudioApiImpl::GetStereoOutputBuffer(this_00);
  AudioBuffer::operator=(&this->output_buffer_,pAVar4);
  if (__real_3f800000 != this->output_gain_) {
    pCVar2 = (this->output_buffer_).channel_views_._Mypair._Myval2._Mylast;
    for (pCVar8 = (this->output_buffer_).channel_views_._Mypair._Myval2._Myfirst; pCVar8 != pCVar2;
        pCVar8 = pCVar8 + 1) {
      ScalarMultiply((this->output_buffer_).num_frames_,this->output_gain_,pCVar8->begin_itr_,
                     pCVar8->begin_itr_);
    }
  }
  ThreadsafeFifo<vraudio::AudioBuffer>::ReleaseOutputObject
            ((this->input_audio_buffer_queue_)._Mypair._Myval2,pAVar3);
  return &this->output_buffer_;
}

// ReleaseInputObject @ 14f082770

void __thiscall
vraudio::ThreadsafeFifo<vraudio::AudioBuffer>::ReleaseInputObject
          (ThreadsafeFifo<vraudio::AudioBuffer> *this,AudioBuffer *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  int iVar3;
  longlong lVar4;
  
  this->write_pos_ = this->write_pos_ + 1;
  lVar4 = (longlong)(this->fifo_)._Mypair._Myval2._Mylast -
          (longlong)(this->fifo_)._Mypair._Myval2._Myfirst;
  lVar4 = lVar4 / 0x12 + (lVar4 >> 0x3f);
  this->write_pos_ = this->write_pos_ % (ulonglong)((lVar4 >> 2) - (lVar4 >> 0x3f));
  LOCK();
  paVar1 = &this->fifo_size_;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  if (aVar2 != (atomic<unsigned___int64>)0x0) {
    return;
  }
  iVar3 = _Mtx_lock();
  if (iVar3 == 0) {
    if (*(int *)&(this->fifo_empty_mutex_).field_0x4c != 0x7fffffff) {
      _Mtx_unlock(this);
      _Cnd_signal(&this->fifo_empty_conditional_);
      return;
    }
    *(undefined4 *)&(this->fifo_empty_mutex_).field_0x4c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
    return;
  }
  std::_Throw_Cpp_error(5);
  return;
}

// ReleaseOutputObject @ 14f082830

void __thiscall
vraudio::ThreadsafeFifo<vraudio::AudioBuffer>::ReleaseOutputObject
          (ThreadsafeFifo<vraudio::AudioBuffer> *this,AudioBuffer *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  int iVar3;
  longlong lVar4;
  
  this->read_pos_ = this->read_pos_ + 1;
  lVar4 = (longlong)(this->fifo_)._Mypair._Myval2._Mylast -
          (longlong)(this->fifo_)._Mypair._Myval2._Myfirst;
  lVar4 = lVar4 / 0x12 + (lVar4 >> 0x3f);
  this->read_pos_ = this->read_pos_ % (ulonglong)((lVar4 >> 2) - (lVar4 >> 0x3f));
  LOCK();
  paVar1 = &this->fifo_size_;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<unsigned___int64>)
               (((longlong)(this->fifo_)._Mypair._Myval2._Mylast -
                (longlong)(this->fifo_)._Mypair._Myval2._Myfirst) / 0x48)) {
    iVar3 = _Mtx_lock(&this->fifo_full_mutex_);
    if (iVar3 != 0) {
      std::_Throw_Cpp_error(5);
      return;
    }
    if (*(int *)&(this->fifo_full_mutex_).field_0x4c == 0x7fffffff) {
      *(undefined4 *)&(this->fifo_full_mutex_).field_0x4c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
      return;
    }
    _Mtx_unlock(&this->fifo_full_mutex_);
    _Cnd_signal(&this->fifo_full_conditional_);
  }
  return;
}

// SetHeadRotation @ 14f082930

void __thiscall
vraudio::BinauralSurroundRendererImpl::SetHeadRotation
          (BinauralSurroundRendererImpl *this,float param_1,float param_2,float param_3,
          float param_4)

{
  ResonanceAudioApi *pRVar1;
  
  pRVar1 = (this->resonance_audio_api_)._Mypair._Myval2;
                    /* WARNING: Could not recover jumptable at 0x00014f08294f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pRVar1 + 0x30))(pRVar1,param_2,param_3,param_4);
  return;
}

// SetStereoSpeakerMode @ 14f082960

void __thiscall
vraudio::BinauralSurroundRendererImpl::SetStereoSpeakerMode
          (BinauralSurroundRendererImpl *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f082967. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->resonance_audio_api_)._Mypair._Myval2 + 0x40))();
  return;
}

// Size @ 14f082980

ulong64 __thiscall
vraudio::ThreadsafeFifo<vraudio::AudioBuffer>::Size(ThreadsafeFifo<vraudio::AudioBuffer> *this)

{
  return (ulong64)this->fifo_size_;
}

// TriggerProcessing @ 14f082990

bool __thiscall
vraudio::BinauralSurroundRendererImpl::TriggerProcessing(BinauralSurroundRendererImpl *this)

{
  ulong64 uVar1;
  
  if (this->num_zero_padded_frames_ != 0) {
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
                ::__l2::kNullStream,
               "Zero padded output buffers must be consumed prior to |TriggerProcessing| calls");
    return false;
  }
  uVar1 = BufferPartitioner::Flush((this->buffer_partitioner_)._Mypair._Myval2);
  this->num_zero_padded_frames_ = uVar1;
  return uVar1 != 0;
}

// _Copy @ 14f082a50

_Func_base<vraudio::AudioBuffer_*,vraudio::AudioBuffer_*> * __thiscall
std::
_Func_impl_no_alloc<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(vraudio::AudioBuffer_*),vraudio::BinauralSurroundRendererImpl_*,std::_Ph<1>_const_&>,vraudio::AudioBuffer_*,vraudio::AudioBuffer_*>
::_Copy(_Func_impl_no_alloc<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(vraudio::AudioBuffer_*),vraudio::BinauralSurroundRendererImpl_*,std::_Ph<1>_const_&>,vraudio::AudioBuffer_*,vraudio::AudioBuffer_*>
        *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V___Binder_U_Unforced_std__P8BinauralSurroundRendererImpl_vraudio__EAAPEAVAudioBuffer_4_PEAV54__ZPEAV34_AEBU___Ph__00_2__std__PEAVAudioBuffer_vraudio__PEAV34__std__6B_
  ;
  *(pmf_09417ca0 *)((longlong)param_1 + 8) = (this->_Callee)._Mypair._Myval1;
  *(char *)((longlong)param_1 + 0x10) = (char)(this->_Callee)._Mypair._Myval2._padding_;
  *(BinauralSurroundRendererImpl **)((longlong)param_1 + 0x18) =
       (this->_Callee)._Mypair._Myval2._Myfirst._Val;
  return param_1;
}

// _Copy @ 14f082a80

_Func_base<vraudio::AudioBuffer_const_*> * __thiscall
std::
_Func_impl_no_alloc<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(void),vraudio::BinauralSurroundRendererImpl_*>,vraudio::AudioBuffer_const_*>
::_Copy(_Func_impl_no_alloc<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(void),vraudio::BinauralSurroundRendererImpl_*>,vraudio::AudioBuffer_const_*>
        *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V___Binder_U_Unforced_std__P8BinauralSurroundRendererImpl_vraudio__EAAPEAVAudioBuffer_4_XZPEAV34__std__PEBVAudioBuffer_vraudio____V_std__6B_
  ;
  *(pmf_453ac5e6 *)((longlong)param_1 + 8) = (this->_Callee)._Mypair._Myval1;
  *(BinauralSurroundRendererImpl **)((longlong)param_1 + 0x10) =
       (this->_Callee)._Mypair._Myval2._Myfirst._Val;
  return param_1;
}

// _Delete_this @ 14f082ab0

void __thiscall
std::
_Func_impl_no_alloc<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(vraudio::AudioBuffer_*),vraudio::BinauralSurroundRendererImpl_*,std::_Ph<1>_const_&>,vraudio::AudioBuffer_*,vraudio::AudioBuffer_*>
::_Delete_this(_Func_impl_no_alloc<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(vraudio::AudioBuffer_*),vraudio::BinauralSurroundRendererImpl_*,std::_Ph<1>_const_&>,vraudio::AudioBuffer_*,vraudio::AudioBuffer_*>
               *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x20);
    return;
  }
  return;
}

// _Delete_this @ 14f082ad0

void __thiscall
std::
_Func_impl_no_alloc<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(void),vraudio::BinauralSurroundRendererImpl_*>,vraudio::AudioBuffer_const_*>
::_Delete_this(_Func_impl_no_alloc<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(void),vraudio::BinauralSurroundRendererImpl_*>,vraudio::AudioBuffer_const_*>
               *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x18);
    return;
  }
  return;
}

// _Do_call @ 14f082af0

AudioBuffer * __thiscall
std::
_Func_impl_no_alloc<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(vraudio::AudioBuffer_*),vraudio::BinauralSurroundRendererImpl_*,std::_Ph<1>_const_&>,vraudio::AudioBuffer_*,vraudio::AudioBuffer_*>
::_Do_call(_Func_impl_no_alloc<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(vraudio::AudioBuffer_*),vraudio::BinauralSurroundRendererImpl_*,std::_Ph<1>_const_&>,vraudio::AudioBuffer_*,vraudio::AudioBuffer_*>
           *this,AudioBuffer **param_1)

{
  AudioBuffer *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014f082afb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = (AudioBuffer *)
           (*(code *)(this->_Callee)._Mypair._Myval1)
                     ((this->_Callee)._Mypair._Myval2._Myfirst._Val,*param_1);
  return pAVar1;
}

// _Do_call @ 14f082b10

AudioBuffer * __thiscall
std::
_Func_impl_no_alloc<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(void),vraudio::BinauralSurroundRendererImpl_*>,vraudio::AudioBuffer_const_*>
::_Do_call(_Func_impl_no_alloc<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(void),vraudio::BinauralSurroundRendererImpl_*>,vraudio::AudioBuffer_const_*>
           *this)

{
  AudioBuffer *pAVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014f082b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar1 = (AudioBuffer *)
           (*(code *)(this->_Callee)._Mypair._Myval1)((this->_Callee)._Mypair._Myval2._Myfirst._Val)
  ;
  return pAVar1;
}

// _Get @ 14f082b30

void * __thiscall
std::
_Func_impl_no_alloc<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(vraudio::AudioBuffer_*),vraudio::BinauralSurroundRendererImpl_*,std::_Ph<1>_const_&>,vraudio::AudioBuffer_*,vraudio::AudioBuffer_*>
::_Get(_Func_impl_no_alloc<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(vraudio::AudioBuffer_*),vraudio::BinauralSurroundRendererImpl_*,std::_Ph<1>_const_&>,vraudio::AudioBuffer_*,vraudio::AudioBuffer_*>
       *this)

{
  return &this->_Callee;
}

// _Get @ 14f082b40

void * __thiscall
std::
_Func_impl_no_alloc<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(void),vraudio::BinauralSurroundRendererImpl_*>,vraudio::AudioBuffer_const_*>
::_Get(_Func_impl_no_alloc<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(void),vraudio::BinauralSurroundRendererImpl_*>,vraudio::AudioBuffer_const_*>
       *this)

{
  return &this->_Callee;
}

// _Move @ 14f082b50

_Func_base<vraudio::AudioBuffer_*,vraudio::AudioBuffer_*> * __thiscall
std::
_Func_impl_no_alloc<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(vraudio::AudioBuffer_*),vraudio::BinauralSurroundRendererImpl_*,std::_Ph<1>_const_&>,vraudio::AudioBuffer_*,vraudio::AudioBuffer_*>
::_Move(_Func_impl_no_alloc<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(vraudio::AudioBuffer_*),vraudio::BinauralSurroundRendererImpl_*,std::_Ph<1>_const_&>,vraudio::AudioBuffer_*,vraudio::AudioBuffer_*>
        *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V___Binder_U_Unforced_std__P8BinauralSurroundRendererImpl_vraudio__EAAPEAVAudioBuffer_4_PEAV54__ZPEAV34_AEBU___Ph__00_2__std__PEAVAudioBuffer_vraudio__PEAV34__std__6B_
  ;
  *(pmf_09417ca0 *)((longlong)param_1 + 8) = (this->_Callee)._Mypair._Myval1;
  *(char *)((longlong)param_1 + 0x10) = (char)(this->_Callee)._Mypair._Myval2._padding_;
  *(BinauralSurroundRendererImpl **)((longlong)param_1 + 0x18) =
       (this->_Callee)._Mypair._Myval2._Myfirst._Val;
  return param_1;
}

// _Move @ 14f082b80

_Func_base<vraudio::AudioBuffer_const_*> * __thiscall
std::
_Func_impl_no_alloc<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(void),vraudio::BinauralSurroundRendererImpl_*>,vraudio::AudioBuffer_const_*>
::_Move(_Func_impl_no_alloc<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(void),vraudio::BinauralSurroundRendererImpl_*>,vraudio::AudioBuffer_const_*>
        *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V___Binder_U_Unforced_std__P8BinauralSurroundRendererImpl_vraudio__EAAPEAVAudioBuffer_4_XZPEAV34__std__PEBVAudioBuffer_vraudio____V_std__6B_
  ;
  *(pmf_453ac5e6 *)((longlong)param_1 + 8) = (this->_Callee)._Mypair._Myval1;
  *(BinauralSurroundRendererImpl **)((longlong)param_1 + 0x10) =
       (this->_Callee)._Mypair._Myval2._Myfirst._Val;
  return param_1;
}

// _Target_type @ 14f082bb0

type_info * __thiscall
std::
_Func_impl_no_alloc<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(vraudio::AudioBuffer_*),vraudio::BinauralSurroundRendererImpl_*,std::_Ph<1>_const_&>,vraudio::AudioBuffer_*,vraudio::AudioBuffer_*>
::_Target_type(_Func_impl_no_alloc<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(vraudio::AudioBuffer_*),vraudio::BinauralSurroundRendererImpl_*,std::_Ph<1>_const_&>,vraudio::AudioBuffer_*,vraudio::AudioBuffer_*>
               *this)

{
  return (type_info *)
         &_Binder<std::_Unforced,class_vraudio::AudioBuffer*___ptr64_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(vraudio::AudioBuffer*___ptr64)___ptr64,vraudio::BinauralSurroundRendererImpl*___ptr64,std::_Ph<1>_const&___ptr64>
          ::RTTI_Type_Descriptor;
}

// _Target_type @ 14f082bc0

type_info * __thiscall
std::
_Func_impl_no_alloc<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(void),vraudio::BinauralSurroundRendererImpl_*>,vraudio::AudioBuffer_const_*>
::_Target_type(_Func_impl_no_alloc<std::_Binder<std::_Unforced,vraudio::AudioBuffer_*_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(void),vraudio::BinauralSurroundRendererImpl_*>,vraudio::AudioBuffer_const_*>
               *this)

{
  return (type_info *)
         &_Binder<std::_Unforced,class_vraudio::AudioBuffer*___ptr64_(__cdecl_vraudio::BinauralSurroundRendererImpl::*)(void)___ptr64,vraudio::BinauralSurroundRendererImpl*___ptr64>
          ::RTTI_Type_Descriptor;
}

// _Tidy @ 14f082bd0

void __thiscall
std::vector<vraudio::AudioBuffer,std::allocator<vraudio::AudioBuffer>_>::_Tidy
          (vector<vraudio::AudioBuffer,std::allocator<vraudio::AudioBuffer>_> *this)

{
  ulong64 uVar1;
  AudioBuffer *pAVar2;
  AudioBuffer *pAVar3;
  
  pAVar2 = (this->_Mypair)._Myval2._Myfirst;
  if (pAVar2 != (AudioBuffer *)0x0) {
    pAVar3 = (this->_Mypair)._Myval2._Mylast;
    for (; pAVar2 != pAVar3; pAVar2 = pAVar2 + 1) {
      vraudio::AudioBuffer::~AudioBuffer(pAVar2);
    }
    pAVar2 = (this->_Mypair)._Myval2._Myfirst;
    uVar1 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pAVar2) / 0x48) * 0x48;
    pAVar3 = pAVar2;
    if (0xfff < uVar1) {
      pAVar3 = *(AudioBuffer **)&pAVar2[-1].source_id_;
      uVar1 = uVar1 + 0x27;
      if (0x1f < (ulonglong)((longlong)pAVar2 + (-8 - (longlong)pAVar3))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pAVar3,uVar1);
    (this->_Mypair)._Myval2._Myfirst = (AudioBuffer *)0x0;
    (this->_Mypair)._Myval2._Mylast = (AudioBuffer *)0x0;
    (this->_Mypair)._Myval2._Myend = (AudioBuffer *)0x0;
  }
  return;
}

// _Xlength @ 14f082ca0

void __cdecl std::vector<float_const_*,std::allocator<float_const_*>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

