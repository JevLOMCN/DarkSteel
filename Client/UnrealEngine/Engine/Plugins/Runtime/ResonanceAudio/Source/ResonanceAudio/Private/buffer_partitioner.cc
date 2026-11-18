// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 15

// AddBufferTemplated<short_const_*> @ 14f094f40

void __thiscall
vraudio::BufferPartitioner::AddBufferTemplated<short_const_*>
          (BufferPartitioner *this,short *param_1,ulong64 param_2,ulong64 param_3)

{
  longlong *plVar1;
  AudioBuffer *pAVar2;
  ulong64 uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  AudioBuffer *local_res20;
  
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      puVar4 = &(this->buffer_callback_).field_0x38;
      pAVar2 = this->current_buffer_ptr_;
      if (pAVar2 == (AudioBuffer *)0x0) {
        plVar1 = *(longlong **)puVar4;
        local_res20 = (AudioBuffer *)0x0;
        if (plVar1 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        pAVar2 = (AudioBuffer *)(**(code **)(*plVar1 + 0x10))(plVar1,&local_res20);
        this->current_buffer_ptr_ = pAVar2;
        if (pAVar2 == (AudioBuffer *)0x0) goto LAB_14f095025;
        this->current_buffer_write_position_frames_ = 0;
      }
      uVar5 = this->frames_per_buffer_ - this->current_buffer_write_position_frames_;
      if (param_3 - uVar3 < uVar5) {
        uVar5 = param_3 - uVar3;
      }
      FillAudioBufferWithOffset
                (param_1,param_3,this->num_channels_,uVar3,
                 this->current_buffer_write_position_frames_,uVar5,pAVar2);
      this->current_buffer_write_position_frames_ =
           this->current_buffer_write_position_frames_ + uVar5;
      uVar3 = uVar3 + uVar5;
      if (this->current_buffer_write_position_frames_ == this->frames_per_buffer_) {
        plVar1 = *(longlong **)puVar4;
        local_res20 = this->current_buffer_ptr_;
        if (plVar1 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        pAVar2 = (AudioBuffer *)(**(code **)(*plVar1 + 0x10))(plVar1,&local_res20);
        this->current_buffer_ptr_ = pAVar2;
        this->current_buffer_write_position_frames_ = 0;
        if (pAVar2 == (AudioBuffer *)0x0) {
LAB_14f095025:
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            std::basic_ostream<char,std::char_traits<char>_>::
            basic_ostream<char,std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)
                       &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                        ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,
                       false);
            atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
            _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          std::operator<<<std::char_traits<char>_>
                    ((basic_ostream<char,std::char_traits<char>_> *)
                     &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                      ::__l2::kNullStream,"No input buffer received");
          return;
        }
      }
    } while (uVar3 < param_3);
  }
  return;
}

// AddBufferTemplated<float_const_*> @ 14f0950e0

void __thiscall
vraudio::BufferPartitioner::AddBufferTemplated<float_const_*>
          (BufferPartitioner *this,float *param_1,ulong64 param_2,ulong64 param_3)

{
  longlong *plVar1;
  AudioBuffer *pAVar2;
  ulong64 uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  AudioBuffer *local_res20;
  
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      puVar4 = &(this->buffer_callback_).field_0x38;
      pAVar2 = this->current_buffer_ptr_;
      if (pAVar2 == (AudioBuffer *)0x0) {
        plVar1 = *(longlong **)puVar4;
        local_res20 = (AudioBuffer *)0x0;
        if (plVar1 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        pAVar2 = (AudioBuffer *)(**(code **)(*plVar1 + 0x10))(plVar1,&local_res20);
        this->current_buffer_ptr_ = pAVar2;
        if (pAVar2 == (AudioBuffer *)0x0) goto LAB_14f0951c5;
        this->current_buffer_write_position_frames_ = 0;
      }
      uVar5 = this->frames_per_buffer_ - this->current_buffer_write_position_frames_;
      if (param_3 - uVar3 < uVar5) {
        uVar5 = param_3 - uVar3;
      }
      FillAudioBufferWithOffset
                (param_1,param_3,this->num_channels_,uVar3,
                 this->current_buffer_write_position_frames_,uVar5,pAVar2);
      this->current_buffer_write_position_frames_ =
           this->current_buffer_write_position_frames_ + uVar5;
      uVar3 = uVar3 + uVar5;
      if (this->current_buffer_write_position_frames_ == this->frames_per_buffer_) {
        plVar1 = *(longlong **)puVar4;
        local_res20 = this->current_buffer_ptr_;
        if (plVar1 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        pAVar2 = (AudioBuffer *)(**(code **)(*plVar1 + 0x10))(plVar1,&local_res20);
        this->current_buffer_ptr_ = pAVar2;
        this->current_buffer_write_position_frames_ = 0;
        if (pAVar2 == (AudioBuffer *)0x0) {
LAB_14f0951c5:
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            std::basic_ostream<char,std::char_traits<char>_>::
            basic_ostream<char,std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)
                       &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                        ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,
                       false);
            atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
            _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          std::operator<<<std::char_traits<char>_>
                    ((basic_ostream<char,std::char_traits<char>_> *)
                     &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                      ::__l2::kNullStream,"No input buffer received");
          return;
        }
      }
    } while (uVar3 < param_3);
  }
  return;
}

// AddBufferTemplated<short_const_*_const_*> @ 14f095280

void __thiscall
vraudio::BufferPartitioner::AddBufferTemplated<short_const_*_const_*>
          (BufferPartitioner *this,short **param_1,ulong64 param_2,ulong64 param_3)

{
  longlong *plVar1;
  AudioBuffer *pAVar2;
  ulong64 uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  AudioBuffer *local_res20;
  
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      puVar4 = &(this->buffer_callback_).field_0x38;
      pAVar2 = this->current_buffer_ptr_;
      if (pAVar2 == (AudioBuffer *)0x0) {
        plVar1 = *(longlong **)puVar4;
        local_res20 = (AudioBuffer *)0x0;
        if (plVar1 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        pAVar2 = (AudioBuffer *)(**(code **)(*plVar1 + 0x10))(plVar1,&local_res20);
        this->current_buffer_ptr_ = pAVar2;
        if (pAVar2 == (AudioBuffer *)0x0) goto LAB_14f095365;
        this->current_buffer_write_position_frames_ = 0;
      }
      uVar5 = this->frames_per_buffer_ - this->current_buffer_write_position_frames_;
      if (param_3 - uVar3 < uVar5) {
        uVar5 = param_3 - uVar3;
      }
      FillAudioBufferWithOffset
                (param_1,param_3,this->num_channels_,uVar3,
                 this->current_buffer_write_position_frames_,uVar5,pAVar2);
      this->current_buffer_write_position_frames_ =
           this->current_buffer_write_position_frames_ + uVar5;
      uVar3 = uVar3 + uVar5;
      if (this->current_buffer_write_position_frames_ == this->frames_per_buffer_) {
        plVar1 = *(longlong **)puVar4;
        local_res20 = this->current_buffer_ptr_;
        if (plVar1 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        pAVar2 = (AudioBuffer *)(**(code **)(*plVar1 + 0x10))(plVar1,&local_res20);
        this->current_buffer_ptr_ = pAVar2;
        this->current_buffer_write_position_frames_ = 0;
        if (pAVar2 == (AudioBuffer *)0x0) {
LAB_14f095365:
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            std::basic_ostream<char,std::char_traits<char>_>::
            basic_ostream<char,std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)
                       &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                        ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,
                       false);
            atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
            _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          std::operator<<<std::char_traits<char>_>
                    ((basic_ostream<char,std::char_traits<char>_> *)
                     &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                      ::__l2::kNullStream,"No input buffer received");
          return;
        }
      }
    } while (uVar3 < param_3);
  }
  return;
}

// AddBufferTemplated<float_const_*_const_*> @ 14f095420

void __thiscall
vraudio::BufferPartitioner::AddBufferTemplated<float_const_*_const_*>
          (BufferPartitioner *this,float **param_1,ulong64 param_2,ulong64 param_3)

{
  longlong *plVar1;
  AudioBuffer *pAVar2;
  ulong64 uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  AudioBuffer *local_res20;
  
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      puVar4 = &(this->buffer_callback_).field_0x38;
      pAVar2 = this->current_buffer_ptr_;
      if (pAVar2 == (AudioBuffer *)0x0) {
        plVar1 = *(longlong **)puVar4;
        local_res20 = (AudioBuffer *)0x0;
        if (plVar1 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        pAVar2 = (AudioBuffer *)(**(code **)(*plVar1 + 0x10))(plVar1,&local_res20);
        this->current_buffer_ptr_ = pAVar2;
        if (pAVar2 == (AudioBuffer *)0x0) goto LAB_14f095505;
        this->current_buffer_write_position_frames_ = 0;
      }
      uVar5 = this->frames_per_buffer_ - this->current_buffer_write_position_frames_;
      if (param_3 - uVar3 < uVar5) {
        uVar5 = param_3 - uVar3;
      }
      FillAudioBufferWithOffset
                (param_1,param_3,this->num_channels_,uVar3,
                 this->current_buffer_write_position_frames_,uVar5,pAVar2);
      this->current_buffer_write_position_frames_ =
           this->current_buffer_write_position_frames_ + uVar5;
      uVar3 = uVar3 + uVar5;
      if (this->current_buffer_write_position_frames_ == this->frames_per_buffer_) {
        plVar1 = *(longlong **)puVar4;
        local_res20 = this->current_buffer_ptr_;
        if (plVar1 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        pAVar2 = (AudioBuffer *)(**(code **)(*plVar1 + 0x10))(plVar1,&local_res20);
        this->current_buffer_ptr_ = pAVar2;
        this->current_buffer_write_position_frames_ = 0;
        if (pAVar2 == (AudioBuffer *)0x0) {
LAB_14f095505:
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            std::basic_ostream<char,std::char_traits<char>_>::
            basic_ostream<char,std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)
                       &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                        ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,
                       false);
            atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
            _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          std::operator<<<std::char_traits<char>_>
                    ((basic_ostream<char,std::char_traits<char>_> *)
                     &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                      ::__l2::kNullStream,"No input buffer received");
          return;
        }
      }
    } while (uVar3 < param_3);
  }
  return;
}

// BufferPartitioner @ 14f0955c0

BufferPartitioner * __thiscall
vraudio::BufferPartitioner::BufferPartitioner
          (BufferPartitioner *this,ulong64 param_1,ulong64 param_2,
          function<vraudio::AudioBuffer_*___cdecl(vraudio::AudioBuffer_*)> *param_3)

{
  function<vraudio::AudioBuffer_*___cdecl(vraudio::AudioBuffer_*)> *pfVar1;
  undefined8 uVar2;
  float **ppfVar3;
  
  this->num_channels_ = param_1;
  this->frames_per_buffer_ = param_2;
  *(undefined8 *)&(this->buffer_callback_).field_0x38 = 0;
  pfVar1 = *(function<vraudio::AudioBuffer_*___cdecl(vraudio::AudioBuffer_*)> **)
            &param_3->field_0x38;
  if (pfVar1 != (function<vraudio::AudioBuffer_*___cdecl(vraudio::AudioBuffer_*)> *)0x0) {
    if (pfVar1 == param_3) {
      uVar2 = (**(code **)(*(longlong *)pfVar1 + 8))();
      *(undefined8 *)&(this->buffer_callback_).field_0x38 = uVar2;
      if (*(longlong **)&param_3->field_0x38 != (longlong *)0x0) {
        (**(code **)(**(longlong **)&param_3->field_0x38 + 0x20))();
        *(undefined8 *)&param_3->field_0x38 = 0;
      }
    }
    else {
      *(function<vraudio::AudioBuffer_*___cdecl(vraudio::AudioBuffer_*)> **)
       &(this->buffer_callback_).field_0x38 = pfVar1;
      *(undefined8 *)&param_3->field_0x38 = 0;
    }
  }
  this->current_buffer_ptr_ = (AudioBuffer *)0x0;
  this->current_buffer_write_position_frames_ = 0;
  (this->planar_channel_ptrs_)._Mypair._Myval2._Myfirst = (float **)0x0;
  (this->planar_channel_ptrs_)._Mypair._Myval2._Mylast = (float **)0x0;
  (this->planar_channel_ptrs_)._Mypair._Myval2._Myend = (float **)0x0;
  if (param_1 != 0) {
    if (0x1fffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
      std::vector<float_const_*,std::allocator<float_const_*>_>::_Xlength();
    }
    ppfVar3 = std::_Allocate<16,std::_Default_allocate_traits>(param_1 * 8);
    (this->planar_channel_ptrs_)._Mypair._Myval2._Myfirst = ppfVar3;
    (this->planar_channel_ptrs_)._Mypair._Myval2._Myend = ppfVar3 + param_1;
    ppfVar3 = (this->planar_channel_ptrs_)._Mypair._Myval2._Myfirst;
    memset(ppfVar3,0,param_1 * 8);
    (this->planar_channel_ptrs_)._Mypair._Myval2._Mylast = ppfVar3 + param_1;
  }
  pfVar1 = *(function<vraudio::AudioBuffer_*___cdecl(vraudio::AudioBuffer_*)> **)
            &param_3->field_0x38;
  if (pfVar1 != (function<vraudio::AudioBuffer_*___cdecl(vraudio::AudioBuffer_*)> *)0x0) {
    (**(code **)(*(longlong *)pfVar1 + 0x20))(pfVar1,pfVar1 != param_3);
    *(undefined8 *)&param_3->field_0x38 = 0;
  }
  return this;
}

// AddBuffer @ 14f0956c0

void __thiscall vraudio::BufferPartitioner::AddBuffer(BufferPartitioner *this,AudioBuffer *param_1)

{
  ulong64 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = param_1->num_frames_;
  uVar2 = 0;
  uVar3 = uVar2;
  if (this->num_channels_ != 0) {
    do {
      (this->planar_channel_ptrs_)._Mypair._Myval2._Myfirst[uVar2] =
           *(float **)
            ((longlong)&((param_1->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_ + uVar3);
      uVar2 = uVar2 + 1;
      uVar3 = uVar3 + 0x18;
    } while (uVar2 < this->num_channels_);
  }
  AddBufferTemplated<float_const_*_const_*>
            (this,(this->planar_channel_ptrs_)._Mypair._Myval2._Myfirst,
             ((longlong)(param_1->channel_views_)._Mypair._Myval2._Mylast -
             (longlong)(param_1->channel_views_)._Mypair._Myval2._Myfirst) / 0x18,uVar1);
  return;
}

// AddBuffer @ 14f095740

void __thiscall
vraudio::BufferPartitioner::AddBuffer
          (BufferPartitioner *this,short *param_1,ulong64 param_2,ulong64 param_3)

{
  longlong *plVar1;
  AudioBuffer *pAVar2;
  ulong64 uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  AudioBuffer *pAStackX_20;
  
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      puVar4 = &(this->buffer_callback_).field_0x38;
      pAVar2 = this->current_buffer_ptr_;
      if (pAVar2 == (AudioBuffer *)0x0) {
        plVar1 = *(longlong **)puVar4;
        pAStackX_20 = (AudioBuffer *)0x0;
        if (plVar1 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        pAVar2 = (AudioBuffer *)(**(code **)(*plVar1 + 0x10))(plVar1,&pAStackX_20);
        this->current_buffer_ptr_ = pAVar2;
        if (pAVar2 == (AudioBuffer *)0x0) goto LAB_14f095025;
        this->current_buffer_write_position_frames_ = 0;
      }
      uVar5 = this->frames_per_buffer_ - this->current_buffer_write_position_frames_;
      if (param_3 - uVar3 < uVar5) {
        uVar5 = param_3 - uVar3;
      }
      FillAudioBufferWithOffset
                (param_1,param_3,this->num_channels_,uVar3,
                 this->current_buffer_write_position_frames_,uVar5,pAVar2);
      this->current_buffer_write_position_frames_ =
           this->current_buffer_write_position_frames_ + uVar5;
      uVar3 = uVar3 + uVar5;
      if (this->current_buffer_write_position_frames_ == this->frames_per_buffer_) {
        plVar1 = *(longlong **)puVar4;
        pAStackX_20 = this->current_buffer_ptr_;
        if (plVar1 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        pAVar2 = (AudioBuffer *)(**(code **)(*plVar1 + 0x10))(plVar1,&pAStackX_20);
        this->current_buffer_ptr_ = pAVar2;
        this->current_buffer_write_position_frames_ = 0;
        if (pAVar2 == (AudioBuffer *)0x0) {
LAB_14f095025:
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            std::basic_ostream<char,std::char_traits<char>_>::
            basic_ostream<char,std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)
                       &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                        ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,
                       false);
            atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
            _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          std::operator<<<std::char_traits<char>_>
                    ((basic_ostream<char,std::char_traits<char>_> *)
                     &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                      ::__l2::kNullStream,"No input buffer received");
          return;
        }
      }
    } while (uVar3 < param_3);
  }
  return;
}

// AddBuffer @ 14f095750

void __thiscall
vraudio::BufferPartitioner::AddBuffer
          (BufferPartitioner *this,float *param_1,ulong64 param_2,ulong64 param_3)

{
  longlong *plVar1;
  AudioBuffer *pAVar2;
  ulong64 uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  AudioBuffer *pAStackX_20;
  
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      puVar4 = &(this->buffer_callback_).field_0x38;
      pAVar2 = this->current_buffer_ptr_;
      if (pAVar2 == (AudioBuffer *)0x0) {
        plVar1 = *(longlong **)puVar4;
        pAStackX_20 = (AudioBuffer *)0x0;
        if (plVar1 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        pAVar2 = (AudioBuffer *)(**(code **)(*plVar1 + 0x10))(plVar1,&pAStackX_20);
        this->current_buffer_ptr_ = pAVar2;
        if (pAVar2 == (AudioBuffer *)0x0) goto LAB_14f0951c5;
        this->current_buffer_write_position_frames_ = 0;
      }
      uVar5 = this->frames_per_buffer_ - this->current_buffer_write_position_frames_;
      if (param_3 - uVar3 < uVar5) {
        uVar5 = param_3 - uVar3;
      }
      FillAudioBufferWithOffset
                (param_1,param_3,this->num_channels_,uVar3,
                 this->current_buffer_write_position_frames_,uVar5,pAVar2);
      this->current_buffer_write_position_frames_ =
           this->current_buffer_write_position_frames_ + uVar5;
      uVar3 = uVar3 + uVar5;
      if (this->current_buffer_write_position_frames_ == this->frames_per_buffer_) {
        plVar1 = *(longlong **)puVar4;
        pAStackX_20 = this->current_buffer_ptr_;
        if (plVar1 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        pAVar2 = (AudioBuffer *)(**(code **)(*plVar1 + 0x10))(plVar1,&pAStackX_20);
        this->current_buffer_ptr_ = pAVar2;
        this->current_buffer_write_position_frames_ = 0;
        if (pAVar2 == (AudioBuffer *)0x0) {
LAB_14f0951c5:
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            std::basic_ostream<char,std::char_traits<char>_>::
            basic_ostream<char,std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)
                       &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                        ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,
                       false);
            atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
            _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          std::operator<<<std::char_traits<char>_>
                    ((basic_ostream<char,std::char_traits<char>_> *)
                     &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                      ::__l2::kNullStream,"No input buffer received");
          return;
        }
      }
    } while (uVar3 < param_3);
  }
  return;
}

// AddBuffer @ 14f095760

void __thiscall
vraudio::BufferPartitioner::AddBuffer
          (BufferPartitioner *this,short **param_1,ulong64 param_2,ulong64 param_3)

{
  longlong *plVar1;
  AudioBuffer *pAVar2;
  ulong64 uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  AudioBuffer *pAStackX_20;
  
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      puVar4 = &(this->buffer_callback_).field_0x38;
      pAVar2 = this->current_buffer_ptr_;
      if (pAVar2 == (AudioBuffer *)0x0) {
        plVar1 = *(longlong **)puVar4;
        pAStackX_20 = (AudioBuffer *)0x0;
        if (plVar1 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        pAVar2 = (AudioBuffer *)(**(code **)(*plVar1 + 0x10))(plVar1,&pAStackX_20);
        this->current_buffer_ptr_ = pAVar2;
        if (pAVar2 == (AudioBuffer *)0x0) goto LAB_14f095365;
        this->current_buffer_write_position_frames_ = 0;
      }
      uVar5 = this->frames_per_buffer_ - this->current_buffer_write_position_frames_;
      if (param_3 - uVar3 < uVar5) {
        uVar5 = param_3 - uVar3;
      }
      FillAudioBufferWithOffset
                (param_1,param_3,this->num_channels_,uVar3,
                 this->current_buffer_write_position_frames_,uVar5,pAVar2);
      this->current_buffer_write_position_frames_ =
           this->current_buffer_write_position_frames_ + uVar5;
      uVar3 = uVar3 + uVar5;
      if (this->current_buffer_write_position_frames_ == this->frames_per_buffer_) {
        plVar1 = *(longlong **)puVar4;
        pAStackX_20 = this->current_buffer_ptr_;
        if (plVar1 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        pAVar2 = (AudioBuffer *)(**(code **)(*plVar1 + 0x10))(plVar1,&pAStackX_20);
        this->current_buffer_ptr_ = pAVar2;
        this->current_buffer_write_position_frames_ = 0;
        if (pAVar2 == (AudioBuffer *)0x0) {
LAB_14f095365:
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            std::basic_ostream<char,std::char_traits<char>_>::
            basic_ostream<char,std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)
                       &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                        ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,
                       false);
            atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
            _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          std::operator<<<std::char_traits<char>_>
                    ((basic_ostream<char,std::char_traits<char>_> *)
                     &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                      ::__l2::kNullStream,"No input buffer received");
          return;
        }
      }
    } while (uVar3 < param_3);
  }
  return;
}

// AddBuffer @ 14f095770

void __thiscall
vraudio::BufferPartitioner::AddBuffer
          (BufferPartitioner *this,float **param_1,ulong64 param_2,ulong64 param_3)

{
  longlong *plVar1;
  AudioBuffer *pAVar2;
  ulong64 uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  AudioBuffer *pAStackX_20;
  
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      puVar4 = &(this->buffer_callback_).field_0x38;
      pAVar2 = this->current_buffer_ptr_;
      if (pAVar2 == (AudioBuffer *)0x0) {
        plVar1 = *(longlong **)puVar4;
        pAStackX_20 = (AudioBuffer *)0x0;
        if (plVar1 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        pAVar2 = (AudioBuffer *)(**(code **)(*plVar1 + 0x10))(plVar1,&pAStackX_20);
        this->current_buffer_ptr_ = pAVar2;
        if (pAVar2 == (AudioBuffer *)0x0) goto LAB_14f095505;
        this->current_buffer_write_position_frames_ = 0;
      }
      uVar5 = this->frames_per_buffer_ - this->current_buffer_write_position_frames_;
      if (param_3 - uVar3 < uVar5) {
        uVar5 = param_3 - uVar3;
      }
      FillAudioBufferWithOffset
                (param_1,param_3,this->num_channels_,uVar3,
                 this->current_buffer_write_position_frames_,uVar5,pAVar2);
      this->current_buffer_write_position_frames_ =
           this->current_buffer_write_position_frames_ + uVar5;
      uVar3 = uVar3 + uVar5;
      if (this->current_buffer_write_position_frames_ == this->frames_per_buffer_) {
        plVar1 = *(longlong **)puVar4;
        pAStackX_20 = this->current_buffer_ptr_;
        if (plVar1 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        pAVar2 = (AudioBuffer *)(**(code **)(*plVar1 + 0x10))(plVar1,&pAStackX_20);
        this->current_buffer_ptr_ = pAVar2;
        this->current_buffer_write_position_frames_ = 0;
        if (pAVar2 == (AudioBuffer *)0x0) {
LAB_14f095505:
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            std::basic_ostream<char,std::char_traits<char>_>::
            basic_ostream<char,std::char_traits<char>_>
                      ((basic_ostream<char,std::char_traits<char>_> *)
                       &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                        ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,
                       false);
            atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
            _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          std::operator<<<std::char_traits<char>_>
                    ((basic_ostream<char,std::char_traits<char>_> *)
                     &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                      ::__l2::kNullStream,"No input buffer received");
          return;
        }
      }
    } while (uVar3 < param_3);
  }
  return;
}

// AddBuffer @ 14f095780

void __thiscall
vraudio::BufferPartitioner::AddBuffer(BufferPartitioner *this,ulong64 param_1,AudioBuffer *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  uVar2 = uVar1;
  if (this->num_channels_ != 0) {
    do {
      (this->planar_channel_ptrs_)._Mypair._Myval2._Myfirst[uVar1] =
           *(float **)
            ((longlong)&((param_2->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_ + uVar2);
      uVar1 = uVar1 + 1;
      uVar2 = uVar2 + 0x18;
    } while (uVar1 < this->num_channels_);
  }
  AddBufferTemplated<float_const_*_const_*>
            (this,(this->planar_channel_ptrs_)._Mypair._Myval2._Myfirst,
             ((longlong)(param_2->channel_views_)._Mypair._Myval2._Mylast -
             (longlong)(param_2->channel_views_)._Mypair._Myval2._Myfirst) / 0x18,param_1);
  return;
}

// Clear @ 14f095800

void __thiscall vraudio::BufferPartitioner::Clear(BufferPartitioner *this)

{
  this->current_buffer_ptr_ = (AudioBuffer *)0x0;
  this->current_buffer_write_position_frames_ = 0;
  return;
}

// Flush @ 14f095820

/* WARNING: Removing unreachable block (ram,0x00014f0958a6) */
/* WARNING: Removing unreachable block (ram,0x00014f0958b1) */
/* WARNING: Removing unreachable block (ram,0x00014f0958b5) */
/* WARNING: Removing unreachable block (ram,0x00014f0958ba) */

ulong64 __thiscall vraudio::BufferPartitioner::Flush(BufferPartitioner *this)

{
  float *_Dst;
  ulong64 uVar1;
  ulong64 uVar2;
  ChannelView *pCVar3;
  longlong *plVar4;
  AudioBuffer *pAVar5;
  ulong64 extraout_RAX;
  ChannelView *pCVar6;
  AudioBuffer *local_res8;
  
  uVar1 = this->current_buffer_write_position_frames_;
  if ((uVar1 == 0) || (pAVar5 = this->current_buffer_ptr_, pAVar5 == (AudioBuffer *)0x0)) {
    return 0;
  }
  uVar2 = pAVar5->num_frames_;
  pCVar3 = (pAVar5->channel_views_)._Mypair._Myval2._Mylast;
  for (pCVar6 = (pAVar5->channel_views_)._Mypair._Myval2._Myfirst; pCVar6 != pCVar3;
      pCVar6 = pCVar6 + 1) {
    _Dst = pCVar6->begin_itr_ + this->current_buffer_write_position_frames_;
    memset(_Dst,0,(longlong)pCVar6->begin_itr_ + (pCVar6->size_ * 4 - (longlong)_Dst) &
                  0xfffffffffffffffc);
  }
  plVar4 = *(longlong **)&(this->buffer_callback_).field_0x38;
  local_res8 = this->current_buffer_ptr_;
  if (plVar4 == (longlong *)0x0) {
    std::_Xbad_function_call();
    return extraout_RAX;
  }
  pAVar5 = (AudioBuffer *)(**(code **)(*plVar4 + 0x10))(plVar4,&local_res8);
  this->current_buffer_ptr_ = pAVar5;
  this->current_buffer_write_position_frames_ = 0;
  return uVar2 - uVar1;
}

// GetNumBufferedFrames @ 14f095930

ulong64 __thiscall vraudio::BufferPartitioner::GetNumBufferedFrames(BufferPartitioner *this)

{
  return this->current_buffer_write_position_frames_;
}

// GetNumGeneratedBuffersForNumInputFrames @ 14f095940

ulong64 __thiscall
vraudio::BufferPartitioner::GetNumGeneratedBuffersForNumInputFrames
          (BufferPartitioner *this,ulong64 param_1)

{
  return (this->current_buffer_write_position_frames_ + param_1) / this->frames_per_buffer_;
}

