// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 13

// GetBufferTemplated<short_*> @ 14f095960

ulong64 __thiscall
vraudio::BufferUnpartitioner::GetBufferTemplated<short_*>
          (BufferUnpartitioner *this,short *param_1,ulong64 param_2,ulong64 param_3)

{
  longlong *plVar1;
  AudioBuffer *pAVar2;
  ulong64 extraout_RAX;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      pAVar2 = this->current_input_buffer_;
      if (pAVar2 == (AudioBuffer *)0x0) {
        plVar1 = *(longlong **)&(this->buffer_callback_).field_0x38;
        if (plVar1 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return extraout_RAX;
        }
        pAVar2 = (AudioBuffer *)(**(code **)(*plVar1 + 0x10))();
        this->current_input_buffer_ = pAVar2;
        if (pAVar2 == (AudioBuffer *)0x0) {
          return uVar3;
        }
        this->current_buffer_read_offset_frames_ = 0;
      }
      uVar4 = pAVar2->num_frames_ - this->current_buffer_read_offset_frames_;
      if (param_3 - uVar3 < uVar4) {
        uVar4 = param_3 - uVar3;
      }
      FillExternalBufferWithOffset
                (pAVar2,this->current_buffer_read_offset_frames_,param_1,param_3,param_2,uVar3,uVar4
                );
      this->current_buffer_read_offset_frames_ = this->current_buffer_read_offset_frames_ + uVar4;
      uVar3 = uVar3 + uVar4;
      if (this->current_buffer_read_offset_frames_ == this->current_input_buffer_->num_frames_) {
        this->current_input_buffer_ = (AudioBuffer *)0x0;
      }
    } while (uVar3 < param_3);
  }
  return uVar3;
}

// GetBufferTemplated<float_*> @ 14f095a40

ulong64 __thiscall
vraudio::BufferUnpartitioner::GetBufferTemplated<float_*>
          (BufferUnpartitioner *this,float *param_1,ulong64 param_2,ulong64 param_3)

{
  longlong *plVar1;
  AudioBuffer *pAVar2;
  ulong64 extraout_RAX;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      pAVar2 = this->current_input_buffer_;
      if (pAVar2 == (AudioBuffer *)0x0) {
        plVar1 = *(longlong **)&(this->buffer_callback_).field_0x38;
        if (plVar1 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return extraout_RAX;
        }
        pAVar2 = (AudioBuffer *)(**(code **)(*plVar1 + 0x10))();
        this->current_input_buffer_ = pAVar2;
        if (pAVar2 == (AudioBuffer *)0x0) {
          return uVar3;
        }
        this->current_buffer_read_offset_frames_ = 0;
      }
      uVar4 = pAVar2->num_frames_ - this->current_buffer_read_offset_frames_;
      if (param_3 - uVar3 < uVar4) {
        uVar4 = param_3 - uVar3;
      }
      FillExternalBufferWithOffset
                (pAVar2,this->current_buffer_read_offset_frames_,param_1,param_3,param_2,uVar3,uVar4
                );
      this->current_buffer_read_offset_frames_ = this->current_buffer_read_offset_frames_ + uVar4;
      uVar3 = uVar3 + uVar4;
      if (this->current_buffer_read_offset_frames_ == this->current_input_buffer_->num_frames_) {
        this->current_input_buffer_ = (AudioBuffer *)0x0;
      }
    } while (uVar3 < param_3);
  }
  return uVar3;
}

// GetBufferTemplated<short_*_*> @ 14f095b20

ulong64 __thiscall
vraudio::BufferUnpartitioner::GetBufferTemplated<short_*_*>
          (BufferUnpartitioner *this,short **param_1,ulong64 param_2,ulong64 param_3)

{
  longlong *plVar1;
  AudioBuffer *pAVar2;
  ulong64 extraout_RAX;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      pAVar2 = this->current_input_buffer_;
      if (pAVar2 == (AudioBuffer *)0x0) {
        plVar1 = *(longlong **)&(this->buffer_callback_).field_0x38;
        if (plVar1 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return extraout_RAX;
        }
        pAVar2 = (AudioBuffer *)(**(code **)(*plVar1 + 0x10))();
        this->current_input_buffer_ = pAVar2;
        if (pAVar2 == (AudioBuffer *)0x0) {
          return uVar3;
        }
        this->current_buffer_read_offset_frames_ = 0;
      }
      uVar4 = pAVar2->num_frames_ - this->current_buffer_read_offset_frames_;
      if (param_3 - uVar3 < uVar4) {
        uVar4 = param_3 - uVar3;
      }
      FillExternalBufferWithOffset
                (pAVar2,this->current_buffer_read_offset_frames_,param_1,param_3,param_2,uVar3,uVar4
                );
      this->current_buffer_read_offset_frames_ = this->current_buffer_read_offset_frames_ + uVar4;
      uVar3 = uVar3 + uVar4;
      if (this->current_buffer_read_offset_frames_ == this->current_input_buffer_->num_frames_) {
        this->current_input_buffer_ = (AudioBuffer *)0x0;
      }
    } while (uVar3 < param_3);
  }
  return uVar3;
}

// GetBufferTemplated<float_*_*> @ 14f095c00

ulong64 __thiscall
vraudio::BufferUnpartitioner::GetBufferTemplated<float_*_*>
          (BufferUnpartitioner *this,float **param_1,ulong64 param_2,ulong64 param_3)

{
  longlong *plVar1;
  AudioBuffer *pAVar2;
  ulong64 extraout_RAX;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      pAVar2 = this->current_input_buffer_;
      if (pAVar2 == (AudioBuffer *)0x0) {
        plVar1 = *(longlong **)&(this->buffer_callback_).field_0x38;
        if (plVar1 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return extraout_RAX;
        }
        pAVar2 = (AudioBuffer *)(**(code **)(*plVar1 + 0x10))();
        this->current_input_buffer_ = pAVar2;
        if (pAVar2 == (AudioBuffer *)0x0) {
          return uVar3;
        }
        this->current_buffer_read_offset_frames_ = 0;
      }
      uVar4 = pAVar2->num_frames_ - this->current_buffer_read_offset_frames_;
      if (param_3 - uVar3 < uVar4) {
        uVar4 = param_3 - uVar3;
      }
      FillExternalBufferWithOffset
                (pAVar2,this->current_buffer_read_offset_frames_,param_1,param_3,param_2,uVar3,uVar4
                );
      this->current_buffer_read_offset_frames_ = this->current_buffer_read_offset_frames_ + uVar4;
      uVar3 = uVar3 + uVar4;
      if (this->current_buffer_read_offset_frames_ == this->current_input_buffer_->num_frames_) {
        this->current_input_buffer_ = (AudioBuffer *)0x0;
      }
    } while (uVar3 < param_3);
  }
  return uVar3;
}

// BufferUnpartitioner @ 14f095ce0

BufferUnpartitioner * __thiscall
vraudio::BufferUnpartitioner::BufferUnpartitioner
          (BufferUnpartitioner *this,ulong64 param_1,ulong64 param_2,
          function<vraudio::AudioBuffer_const_*___cdecl(void)> *param_3)

{
  function<vraudio::AudioBuffer_const_*___cdecl(void)> *pfVar1;
  undefined8 uVar2;
  
  this->frames_per_buffer_ = param_2;
  *(undefined8 *)&(this->buffer_callback_).field_0x38 = 0;
  pfVar1 = *(function<vraudio::AudioBuffer_const_*___cdecl(void)> **)&param_3->field_0x38;
  if (pfVar1 != (function<vraudio::AudioBuffer_const_*___cdecl(void)> *)0x0) {
    if (pfVar1 == param_3) {
      uVar2 = (**(code **)(*(longlong *)pfVar1 + 8))(pfVar1,&this->buffer_callback_);
      *(undefined8 *)&(this->buffer_callback_).field_0x38 = uVar2;
      pfVar1 = *(function<vraudio::AudioBuffer_const_*___cdecl(void)> **)&param_3->field_0x38;
      if (pfVar1 != (function<vraudio::AudioBuffer_const_*___cdecl(void)> *)0x0) {
        (**(code **)(*(longlong *)pfVar1 + 0x20))(pfVar1,pfVar1 != param_3);
        *(undefined8 *)&param_3->field_0x38 = 0;
      }
    }
    else {
      *(function<vraudio::AudioBuffer_const_*___cdecl(void)> **)&(this->buffer_callback_).field_0x38
           = pfVar1;
      *(undefined8 *)&param_3->field_0x38 = 0;
    }
  }
  this->current_input_buffer_ = (AudioBuffer *)0x0;
  this->current_buffer_read_offset_frames_ = 0;
  pfVar1 = *(function<vraudio::AudioBuffer_const_*___cdecl(void)> **)&param_3->field_0x38;
  if (pfVar1 != (function<vraudio::AudioBuffer_const_*___cdecl(void)> *)0x0) {
    (**(code **)(*(longlong *)pfVar1 + 0x20))(pfVar1,pfVar1 != param_3);
    *(undefined8 *)&param_3->field_0x38 = 0;
  }
  return this;
}

// Clear @ 14f095d80

void __thiscall vraudio::BufferUnpartitioner::Clear(BufferUnpartitioner *this)

{
  this->current_input_buffer_ = (AudioBuffer *)0x0;
  this->current_buffer_read_offset_frames_ = 0;
  return;
}

// GetBuffer @ 14f095da0

ulong64 __thiscall
vraudio::BufferUnpartitioner::GetBuffer
          (BufferUnpartitioner *this,short *param_1,ulong64 param_2,ulong64 param_3)

{
  longlong *plVar1;
  AudioBuffer *pAVar2;
  ulong64 extraout_RAX;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      pAVar2 = this->current_input_buffer_;
      if (pAVar2 == (AudioBuffer *)0x0) {
        plVar1 = *(longlong **)&(this->buffer_callback_).field_0x38;
        if (plVar1 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return extraout_RAX;
        }
        pAVar2 = (AudioBuffer *)(**(code **)(*plVar1 + 0x10))();
        this->current_input_buffer_ = pAVar2;
        if (pAVar2 == (AudioBuffer *)0x0) {
          return uVar3;
        }
        this->current_buffer_read_offset_frames_ = 0;
      }
      uVar4 = pAVar2->num_frames_ - this->current_buffer_read_offset_frames_;
      if (param_3 - uVar3 < uVar4) {
        uVar4 = param_3 - uVar3;
      }
      FillExternalBufferWithOffset
                (pAVar2,this->current_buffer_read_offset_frames_,param_1,param_3,param_2,uVar3,uVar4
                );
      this->current_buffer_read_offset_frames_ = this->current_buffer_read_offset_frames_ + uVar4;
      uVar3 = uVar3 + uVar4;
      if (this->current_buffer_read_offset_frames_ == this->current_input_buffer_->num_frames_) {
        this->current_input_buffer_ = (AudioBuffer *)0x0;
      }
    } while (uVar3 < param_3);
  }
  return uVar3;
}

// GetBuffer @ 14f095e80

ulong64 __thiscall
vraudio::BufferUnpartitioner::GetBuffer
          (BufferUnpartitioner *this,float *param_1,ulong64 param_2,ulong64 param_3)

{
  longlong *plVar1;
  AudioBuffer *pAVar2;
  ulong64 extraout_RAX;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      pAVar2 = this->current_input_buffer_;
      if (pAVar2 == (AudioBuffer *)0x0) {
        plVar1 = *(longlong **)&(this->buffer_callback_).field_0x38;
        if (plVar1 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return extraout_RAX;
        }
        pAVar2 = (AudioBuffer *)(**(code **)(*plVar1 + 0x10))();
        this->current_input_buffer_ = pAVar2;
        if (pAVar2 == (AudioBuffer *)0x0) {
          return uVar3;
        }
        this->current_buffer_read_offset_frames_ = 0;
      }
      uVar4 = pAVar2->num_frames_ - this->current_buffer_read_offset_frames_;
      if (param_3 - uVar3 < uVar4) {
        uVar4 = param_3 - uVar3;
      }
      FillExternalBufferWithOffset
                (pAVar2,this->current_buffer_read_offset_frames_,param_1,param_3,param_2,uVar3,uVar4
                );
      this->current_buffer_read_offset_frames_ = this->current_buffer_read_offset_frames_ + uVar4;
      uVar3 = uVar3 + uVar4;
      if (this->current_buffer_read_offset_frames_ == this->current_input_buffer_->num_frames_) {
        this->current_input_buffer_ = (AudioBuffer *)0x0;
      }
    } while (uVar3 < param_3);
  }
  return uVar3;
}

// GetBuffer @ 14f095f60

ulong64 __thiscall
vraudio::BufferUnpartitioner::GetBuffer
          (BufferUnpartitioner *this,short **param_1,ulong64 param_2,ulong64 param_3)

{
  longlong *plVar1;
  AudioBuffer *pAVar2;
  ulong64 extraout_RAX;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      pAVar2 = this->current_input_buffer_;
      if (pAVar2 == (AudioBuffer *)0x0) {
        plVar1 = *(longlong **)&(this->buffer_callback_).field_0x38;
        if (plVar1 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return extraout_RAX;
        }
        pAVar2 = (AudioBuffer *)(**(code **)(*plVar1 + 0x10))();
        this->current_input_buffer_ = pAVar2;
        if (pAVar2 == (AudioBuffer *)0x0) {
          return uVar3;
        }
        this->current_buffer_read_offset_frames_ = 0;
      }
      uVar4 = pAVar2->num_frames_ - this->current_buffer_read_offset_frames_;
      if (param_3 - uVar3 < uVar4) {
        uVar4 = param_3 - uVar3;
      }
      FillExternalBufferWithOffset
                (pAVar2,this->current_buffer_read_offset_frames_,param_1,param_3,param_2,uVar3,uVar4
                );
      this->current_buffer_read_offset_frames_ = this->current_buffer_read_offset_frames_ + uVar4;
      uVar3 = uVar3 + uVar4;
      if (this->current_buffer_read_offset_frames_ == this->current_input_buffer_->num_frames_) {
        this->current_input_buffer_ = (AudioBuffer *)0x0;
      }
    } while (uVar3 < param_3);
  }
  return uVar3;
}

// GetBuffer @ 14f096040

ulong64 __thiscall
vraudio::BufferUnpartitioner::GetBuffer
          (BufferUnpartitioner *this,float **param_1,ulong64 param_2,ulong64 param_3)

{
  longlong *plVar1;
  AudioBuffer *pAVar2;
  ulong64 extraout_RAX;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      pAVar2 = this->current_input_buffer_;
      if (pAVar2 == (AudioBuffer *)0x0) {
        plVar1 = *(longlong **)&(this->buffer_callback_).field_0x38;
        if (plVar1 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return extraout_RAX;
        }
        pAVar2 = (AudioBuffer *)(**(code **)(*plVar1 + 0x10))();
        this->current_input_buffer_ = pAVar2;
        if (pAVar2 == (AudioBuffer *)0x0) {
          return uVar3;
        }
        this->current_buffer_read_offset_frames_ = 0;
      }
      uVar4 = pAVar2->num_frames_ - this->current_buffer_read_offset_frames_;
      if (param_3 - uVar3 < uVar4) {
        uVar4 = param_3 - uVar3;
      }
      FillExternalBufferWithOffset
                (pAVar2,this->current_buffer_read_offset_frames_,param_1,param_3,param_2,uVar3,uVar4
                );
      this->current_buffer_read_offset_frames_ = this->current_buffer_read_offset_frames_ + uVar4;
      uVar3 = uVar3 + uVar4;
      if (this->current_buffer_read_offset_frames_ == this->current_input_buffer_->num_frames_) {
        this->current_input_buffer_ = (AudioBuffer *)0x0;
      }
    } while (uVar3 < param_3);
  }
  return uVar3;
}

// GetNumBufferedFrames @ 14f096120

ulong64 __thiscall vraudio::BufferUnpartitioner::GetNumBufferedFrames(BufferUnpartitioner *this)

{
  return this->current_buffer_read_offset_frames_;
}

// GetNumBuffersRequestedForNumInputFrames @ 14f096130

ulong64 __thiscall
vraudio::BufferUnpartitioner::GetNumBuffersRequestedForNumInputFrames
          (BufferUnpartitioner *this,ulong64 param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if (this->current_input_buffer_ == (AudioBuffer *)0x0) {
    return ((this->frames_per_buffer_ - 1) + param_1) / this->frames_per_buffer_;
  }
  return ((this->frames_per_buffer_ -
          (this->current_input_buffer_->num_frames_ - this->current_buffer_read_offset_frames_)) +
          -1 + param_1) / this->frames_per_buffer_;
}

// GetNumFramesAvailableInBuffer @ 14f096180

ulong64 __thiscall
vraudio::BufferUnpartitioner::GetNumFramesAvailableInBuffer(BufferUnpartitioner *this)

{
  if (this->current_input_buffer_ == (AudioBuffer *)0x0) {
    return 0;
  }
  return this->current_input_buffer_->num_frames_ - this->current_buffer_read_offset_frames_;
}

