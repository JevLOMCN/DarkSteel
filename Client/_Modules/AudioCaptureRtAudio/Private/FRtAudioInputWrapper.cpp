// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCaptureRtAudio
// Functions: 9

// FRtAudioInputWrapper @ 14d0c3040

FRtAudioInputWrapper * __thiscall
Audio::FRtAudioInputWrapper::FRtAudioInputWrapper(FRtAudioInputWrapper *this)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = UE::Core::Private::PimplPtr::DeleterFunc<RtAudio>;
    puVar1[1] = 0;
    RtAudio::RtAudio((RtAudio *)(puVar1 + 2),UNSPECIFIED);
  }
  (this->Impl).Ptr = (RtAudio *)(puVar1 + 2);
  return this;
}

// AbortStream @ 14d0c3e80

void __thiscall Audio::FRtAudioInputWrapper::AbortStream(FRtAudioInputWrapper *this)

{
  (**(code **)(((this->Impl).Ptr)->rtapi_->_padding_ + 0x48))();
  return;
}

// CloseStream @ 14d0c3ed0

void __thiscall Audio::FRtAudioInputWrapper::CloseStream(FRtAudioInputWrapper *this)

{
  (**(code **)(((this->Impl).Ptr)->rtapi_->_padding_ + 0x30))();
  return;
}

// GetDefaultInputDevice @ 14d0c4420

uint __thiscall Audio::FRtAudioInputWrapper::GetDefaultInputDevice(FRtAudioInputWrapper *this)

{
  uint uVar1;
  
  uVar1 = (**(code **)(((this->Impl).Ptr)->rtapi_->_padding_ + 0x20))();
  return uVar1;
}

// GetDeviceInfo @ 14d0c4450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDeviceInfo __thiscall
Audio::FRtAudioInputWrapper::GetDeviceInfo(FRtAudioInputWrapper *this,uint param_1)

{
  RtApi *pRVar1;
  uint in_register_00000014;
  FDeviceInfo FVar2;
  undefined1 auStack_e8 [40];
  FDeviceInfo local_c0;
  undefined1 local_98 [8];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_90;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_70;
  undefined4 local_4c;
  vector<unsigned_int,std::allocator<unsigned_int>_> local_40;
  uint local_28;
  ulonglong local_18;
  
  FVar2.NumChannels = in_register_00000014;
  FVar2.PreferredSampleRate = (float)param_1;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pRVar1 = ((this->Impl).Ptr)->rtapi_;
  local_c0 = FVar2;
  (**(code **)(pRVar1->_padding_ + 0x18))(pRVar1,local_98);
  *(float *)FVar2 = (float)local_28;
  *(undefined4 *)((longlong)FVar2 + 4) = local_4c;
  std::vector<unsigned_int,std::allocator<unsigned_int>_>::
  ~vector<unsigned_int,std::allocator<unsigned_int>_>(&local_40);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(&local_70);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(&local_90);
  return FVar2;
}

// IsStreamOpen @ 14d0c4890

bool __thiscall Audio::FRtAudioInputWrapper::IsStreamOpen(FRtAudioInputWrapper *this)

{
  return (((this->Impl).Ptr)->rtapi_->stream_).state != STREAM_CLOSED;
}

// OpenStream @ 14d0c4d70

bool __thiscall
Audio::FRtAudioInputWrapper::OpenStream
          (FRtAudioInputWrapper *this,FStreamParameters *param_1,float param_2,uint *param_3,
          _func___cdecl_int_void_ptr_void_ptr_uint_double_uint_void_ptr *param_4,void *param_5)

{
  StreamParameters local_20 [2];
  
  local_20[0].deviceId = param_1->DeviceID;
  local_20[0].nChannels = param_1->NumChannels;
  local_20[0].firstChannel = 0;
  RtApi::openStream(((this->Impl).Ptr)->rtapi_,(StreamParameters *)0x0,local_20,2,
                    (uint)(longlong)param_2,param_3,param_4,param_5,(StreamOptions *)0x0,
                    (_func___cdecl_void_Type_basic_string<char,std::char_traits<char>,std::allocator<char>_>_ptr
                     *)0x0);
  return true;
}

// StartStream @ 14d0c4e10

void __thiscall Audio::FRtAudioInputWrapper::StartStream(FRtAudioInputWrapper *this)

{
  (**(code **)(((this->Impl).Ptr)->rtapi_->_padding_ + 0x38))();
  return;
}

// StopStream @ 14d0c4e60

void __thiscall Audio::FRtAudioInputWrapper::StopStream(FRtAudioInputWrapper *this)

{
  (**(code **)(((this->Impl).Ptr)->rtapi_->_padding_ + 0x40))();
  return;
}

