// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 5

// CircularBuffer @ 14f0725a0

CircularBuffer * __thiscall
vraudio::CircularBuffer::CircularBuffer
          (CircularBuffer *this,ulong64 param_1,ulong64 param_2,ulong64 param_3)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  bool bVar2;
  int iStack_10c;
  undefined1 local_108 [112];
  char *local_98;
  int local_90;
  basic_ios<char,std::char_traits<char>_> local_80;
  
  this->num_output_frames_ = param_3;
  this->num_input_frames_ = param_2;
  bVar2 = false;
  AudioBuffer::AudioBuffer(&this->buffer_,1,param_1);
  this->write_cursor_ = 0;
  this->read_cursor_ = 0;
  this->num_valid_frames_ = 0;
  if (param_1 < param_2 + param_3) {
    local_108._0_8_ =
         &std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::_vbtable_;
    std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(&local_80)
    ;
    std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)local_108,
               (basic_streambuf<char,std::char_traits<char>_> *)(local_108 + 8),false);
    *(undefined ***)(local_108 + *(int *)(local_108._0_8_ + 4)) =
         std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)&iStack_10c + (longlong)*(int *)(local_108._0_8_ + 4)) =
         *(int *)(local_108._0_8_ + 4) + -0x88;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)(local_108 + 8));
    local_98 = (char *)0x0;
    local_108._8_8_ =
         std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_90 = 4;
    pbVar1 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)local_108,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\dsp\\circular_buffer.cc"
                       );
    pbVar1 = std::operator<<<std::char_traits<char>_>(pbVar1,":");
    pbVar1 = (basic_ostream<char,std::char_traits<char>_> *)
             std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,0x21);
    std::operator<<<std::char_traits<char>_>(pbVar1,": ");
    bVar2 = true;
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
  if (bVar2) {
    FatalLogger::~FatalLogger((FatalLogger *)local_108);
  }
  return this;
}

// Clear @ 14f072760

void __thiscall vraudio::CircularBuffer::Clear(CircularBuffer *this)

{
  this->read_cursor_ = 0;
  this->write_cursor_ = 0;
  this->num_valid_frames_ = 0;
  return;
}

// InsertBuffer @ 14f072780

bool __thiscall vraudio::CircularBuffer::InsertBuffer(CircularBuffer *this,ChannelView *param_1)

{
  ulonglong uVar1;
  ChannelView *pCVar2;
  float *_Dst;
  float *_Src;
  ulonglong uVar3;
  size_t _Size;
  
  uVar3 = (this->buffer_).num_frames_;
  if (uVar3 < this->num_valid_frames_ + this->num_input_frames_) {
    return false;
  }
  uVar1 = this->write_cursor_;
  pCVar2 = (this->buffer_).channel_views_._Mypair._Myval2._Myfirst;
  uVar3 = uVar3 - uVar1;
  if (uVar1 < this->read_cursor_) {
    uVar3 = this->read_cursor_ - uVar1;
  }
  _Dst = pCVar2->begin_itr_ + uVar1;
  _Src = param_1->begin_itr_;
  if (uVar3 < this->num_input_frames_) {
    memmove(_Dst,_Src,uVar3 * 4);
    _Dst = pCVar2->begin_itr_;
    _Src = param_1->begin_itr_ + uVar3;
    _Size = (param_1->size_ * 4 - (longlong)_Src) + (longlong)param_1->begin_itr_;
  }
  else {
    _Size = param_1->size_ << 2;
  }
  memmove(_Dst,_Src,_Size);
  uVar3 = (this->buffer_).num_frames_;
  this->num_valid_frames_ = this->num_valid_frames_ + this->num_input_frames_;
  this->write_cursor_ = (this->write_cursor_ + this->num_input_frames_) % uVar3;
  return true;
}

// RetrieveBuffer @ 14f072860

bool __thiscall vraudio::CircularBuffer::RetrieveBuffer(CircularBuffer *this,ChannelView *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ChannelView *pCVar3;
  float *pfVar4;
  float *_Dst;
  float *_Src;
  ulonglong uVar5;
  size_t _Size;
  
  uVar1 = this->num_output_frames_;
  if (this->num_valid_frames_ < uVar1) {
    return false;
  }
  uVar2 = this->read_cursor_;
  uVar5 = this->write_cursor_;
  if (uVar5 <= uVar2) {
    uVar5 = (this->buffer_).num_frames_;
  }
  pCVar3 = (this->buffer_).channel_views_._Mypair._Myval2._Myfirst;
  uVar5 = uVar5 - uVar2;
  _Dst = param_1->begin_itr_;
  pfVar4 = pCVar3->begin_itr_;
  _Src = pfVar4 + uVar2;
  if (uVar5 < uVar1) {
    memmove(_Dst,_Src,((uVar2 + uVar5) * 4 - (longlong)_Src) + (longlong)pfVar4);
    _Src = pCVar3->begin_itr_;
    _Size = (this->num_output_frames_ - uVar5) * 4;
    _Dst = param_1->begin_itr_ + uVar5;
  }
  else {
    _Size = ((uVar1 + uVar2) * 4 - (longlong)_Src) + (longlong)pfVar4;
  }
  memmove(_Dst,_Src,_Size);
  uVar1 = (this->buffer_).num_frames_;
  this->num_valid_frames_ = this->num_valid_frames_ - this->num_output_frames_;
  this->read_cursor_ = (this->read_cursor_ + this->num_output_frames_) % uVar1;
  return true;
}

// RetrieveBufferWithOffset @ 14f072940

bool __thiscall
vraudio::CircularBuffer::RetrieveBufferWithOffset
          (CircularBuffer *this,ulong64 param_1,ChannelView *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ChannelView *pCVar3;
  float *pfVar4;
  float *_Dst;
  float *_Src;
  ulonglong uVar5;
  size_t _Size;
  
  uVar1 = this->num_output_frames_;
  if (this->num_valid_frames_ < uVar1) {
    return false;
  }
  uVar5 = this->write_cursor_;
  uVar2 = this->read_cursor_;
  if (uVar5 <= uVar2) {
    uVar5 = (this->buffer_).num_frames_;
  }
  pCVar3 = (this->buffer_).channel_views_._Mypair._Myval2._Myfirst;
  uVar5 = uVar5 - uVar2;
  pfVar4 = pCVar3->begin_itr_;
  _Dst = param_2->begin_itr_ + param_1;
  _Src = pfVar4 + uVar2;
  if (uVar5 < uVar1) {
    memmove(_Dst,_Src,((uVar2 + uVar5) * 4 - (longlong)_Src) + (longlong)pfVar4);
    _Src = pCVar3->begin_itr_;
    _Size = (this->num_output_frames_ - uVar5) * 4;
    _Dst = param_2->begin_itr_ + uVar5 + param_1;
  }
  else {
    _Size = ((uVar1 + uVar2) * 4 - (longlong)_Src) + (longlong)pfVar4;
  }
  memmove(_Dst,_Src,_Size);
  uVar1 = (this->buffer_).num_frames_;
  this->num_valid_frames_ = this->num_valid_frames_ - this->num_output_frames_;
  this->read_cursor_ = (this->read_cursor_ + this->num_output_frames_) % uVar1;
  return true;
}

