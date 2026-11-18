// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 8

// _Reallocate_grow_by<`std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back'::__l2::<lambda_1>,char> @ 14f09aae0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
_Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back_::__l2::<lambda_1>,char>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,ulonglong param_1,
          undefined8 param_3,char param_4)

{
  ulonglong uVar1;
  size_t _Size;
  ulonglong uVar2;
  char *_Src;
  void *pvVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char *pcVar6;
  char *_Dst;
  
  _Size = (this->_Mypair)._Myval2._Mysize;
  uVar5 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff - _Size < param_1) {
                    /* WARNING: Subroutine does not return */
    _Xlen_string();
  }
  uVar2 = (this->_Mypair)._Myval2._Myres;
  uVar4 = _Size + param_1 | 0xf;
  if ((uVar4 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) {
    uVar1 = uVar2 + (uVar2 >> 1);
    uVar5 = uVar4;
    if (uVar4 < uVar1) {
      uVar5 = uVar1;
    }
    uVar1 = uVar5 + 1;
    if (uVar1 == 0) {
      _Dst = (char *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar4 = uVar5 + 0x28;
        if (uVar4 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          _Throw_bad_array_new_length();
        }
        goto LAB_14f09ab86;
      }
      _Dst = ::operator_new(uVar1);
    }
  }
  else {
    uVar4 = 0x8000000000000027;
LAB_14f09ab86:
    pvVar3 = ::operator_new(uVar4);
    if (pvVar3 == (void *)0x0) goto LAB_14f09ac01;
    _Dst = (char *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
    *(void **)(_Dst + -8) = pvVar3;
  }
  (this->_Mypair)._Myval2._Mysize = _Size + param_1;
  (this->_Mypair)._Myval2._Myres = uVar5;
  if (uVar2 < 0x10) {
    memcpy(_Dst,this,_Size);
    _Dst[_Size] = param_4;
    _Dst[_Size + 1] = '\0';
  }
  else {
    _Src = (this->_Mypair)._Myval2._Bx._Ptr;
    memcpy(_Dst,_Src,_Size);
    uVar5 = uVar2 + 1;
    _Dst[_Size] = param_4;
    _Dst[_Size + 1] = '\0';
    pcVar6 = _Src;
    if (0xfff < uVar5) {
      pcVar6 = *(char **)(_Src + -8);
      uVar5 = uVar2 + 0x28;
      if ((char *)0x1f < _Src + (-8 - (longlong)pcVar6)) {
LAB_14f09ac01:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pcVar6,uVar5);
  }
  (this->_Mypair)._Myval2._Bx._Ptr = _Dst;
  return this;
}

// VorbisStreamEncoder @ 14f09ac70

VorbisStreamEncoder * __thiscall
vraudio::VorbisStreamEncoder::VorbisStreamEncoder(VorbisStreamEncoder *this)

{
  int iVar1;
  
  this->init_ = false;
  *(undefined **)&this->output_file_stream_ =
       &std::basic_ofstream<char,std::char_traits<char>_>::_vbtable_;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)&(this->output_file_stream_).field_0xa8);
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)&this->output_file_stream_,
             (basic_streambuf<char,std::char_traits<char>_> *)
             &(this->output_file_stream_)._Filebuffer,false);
  *(undefined ***)
   (&(this->output_file_stream_).field_0x0 + *(int *)(*(longlong *)&this->output_file_stream_ + 4))
       = std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  iVar1 = *(int *)(*(longlong *)&this->output_file_stream_ + 4);
  *(int *)(&this->field_0x4 + iVar1) = iVar1 + -0xa8;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)
             &(this->output_file_stream_)._Filebuffer);
  (this->output_file_stream_)._Filebuffer._Closef = false;
  (this->output_file_stream_)._Filebuffer._padding_ =
       (longlong)std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  (this->output_file_stream_)._Filebuffer._Wrotesome = false;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init
            ((basic_streambuf<char,std::char_traits<char>_> *)
             &(this->output_file_stream_)._Filebuffer);
  (this->output_file_stream_)._Filebuffer._Myfile = (_iobuf *)0x0;
  (this->output_file_stream_)._Filebuffer._State =
       `protected:_void___cdecl_std::basic_filebuf<char,std::char_traits<char>_>::_Init(_iobuf*___ptr64,std::basic_filebuf<char,struct_std::char_traits<char>_>::_Initfl)___ptr64'
       ::__l2::_Stinit;
  (this->output_file_stream_)._Filebuffer._Pcvt = (codecvt<char,char,_Mbstatet> *)0x0;
  return this;
}

// AddPlanarBuffer @ 14f09ad40

bool __thiscall
vraudio::VorbisStreamEncoder::AddPlanarBuffer
          (VorbisStreamEncoder *this,float **param_1,ulong64 param_2,ulong64 param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  FatalLogger local_108;
  
  if (this->init_ == false) {
    FatalLogger::FatalLogger
              (&local_108,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\utils\\vorbis_stream_encoder.cc"
               ,100);
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
    FatalLogger::~FatalLogger(&local_108);
  }
  puVar2 = (undefined8 *)vorbis_analysis_buffer(&this->vorbis_state_,(int)param_3 * (int)param_2);
  if (param_2 != 0) {
    lVar3 = (longlong)param_1 - (longlong)puVar2;
    do {
      if (param_3 != 0) {
        memmove((void *)*puVar2,*(void **)(lVar3 + (longlong)puVar2),param_3 * 4);
      }
      puVar2 = puVar2 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  vorbis_analysis_wrote(&this->vorbis_state_,param_3 & 0xffffffff);
  bVar1 = PerformEncoding(this);
  return bVar1;
}

// FlushAndClose @ 14f09ae90

bool __thiscall vraudio::VorbisStreamEncoder::FlushAndClose(VorbisStreamEncoder *this)

{
  bool bVar1;
  basic_filebuf<char,std::char_traits<char>_> *pbVar2;
  
  vorbis_analysis_wrote(&this->vorbis_state_,0);
  bVar1 = PerformEncoding(this);
  if (!bVar1) {
    return false;
  }
  pbVar2 = std::basic_filebuf<char,std::char_traits<char>_>::close
                     (&(this->output_file_stream_)._Filebuffer);
  if (pbVar2 == (basic_filebuf<char,std::char_traits<char>_> *)0x0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               (&(this->output_file_stream_).field_0x0 +
               *(int *)(*(longlong *)&this->output_file_stream_ + 4)),2,false);
  }
  vorbis_comment_clear(&this->vorbis_comment_);
  vorbis_dsp_clear(&this->vorbis_state_);
  vorbis_block_clear(&this->vorbis_block_);
  ogg_stream_clear(&this->stream_state_);
  vorbis_info_clear(&this->vorbis_info_);
  this->init_ = false;
  return true;
}

// InitializeForFile @ 14f09af50

bool __thiscall
vraudio::VorbisStreamEncoder::InitializeForFile
          (VorbisStreamEncoder *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,ulong64 param_2,
          int param_3,EncodingMode param_4,int param_5,float param_6)

{
  basic_ofstream<char,std::char_traits<char>_> *pbVar1;
  basic_filebuf<char,std::char_traits<char>_> *this_00;
  ogg_stream_state *poVar2;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var3;
  bool bVar4;
  int iVar5;
  _iobuf *p_Var6;
  locale *plVar7;
  codecvt<char,char,_Mbstatet> *this_01;
  undefined8 *puVar8;
  basic_ostream<char,std::char_traits<char>_> *pbVar9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  int *local_res8;
  char **local_res10;
  undefined8 in_stack_ffffffffffffff18;
  char **ppcVar11;
  undefined4 uVar12;
  undefined8 in_stack_ffffffffffffff20;
  char **ppcVar13;
  undefined4 uVar14;
  locale local_c8;
  undefined1 local_b8 [40];
  undefined1 local_90 [40];
  undefined1 local_68 [48];
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
  pbVar1 = &this->output_file_stream_;
  pbVar10 = param_1;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  this_00 = &(this->output_file_stream_)._Filebuffer;
  if (((this->output_file_stream_)._Filebuffer._Myfile == (_iobuf *)0x0) &&
     (p_Var6 = std::_Fiopen((char *)pbVar10,0x32,0x40), p_Var6 != (_iobuf *)0x0)) {
    (this->output_file_stream_)._Filebuffer._Closef = true;
    (this->output_file_stream_)._Filebuffer._Wrotesome = false;
    std::basic_streambuf<char,std::char_traits<char>_>::_Init
              ((basic_streambuf<char,std::char_traits<char>_> *)this_00);
    local_c8._padding_ = 0;
    local_res10 = (char **)0x0;
    local_res8 = (int *)0x0;
    _get_stream_buffer_pointers(p_Var6,&local_c8,&local_res10,&local_res8);
    ppcVar11 = (char **)local_c8._padding_;
    ppcVar13 = local_res10;
    std::basic_streambuf<char,std::char_traits<char>_>::_Init
              ((basic_streambuf<char,std::char_traits<char>_> *)this_00,(char **)local_c8._padding_,
               local_res10,local_res8,(char **)local_c8._padding_,local_res10,local_res8);
    uVar12 = (undefined4)((ulonglong)ppcVar11 >> 0x20);
    uVar14 = (undefined4)((ulonglong)ppcVar13 >> 0x20);
    (this->output_file_stream_)._Filebuffer._Myfile = (_iobuf *)p_Var6;
    (this->output_file_stream_)._Filebuffer._State =
         `protected:_void___cdecl_std::basic_filebuf<char,std::char_traits<char>_>::_Init(_iobuf*___ptr64,std::basic_filebuf<char,struct_std::char_traits<char>_>::_Initfl)___ptr64'
         ::__l2::_Stinit;
    (this->output_file_stream_)._Filebuffer._Pcvt = (codecvt<char,char,_Mbstatet> *)0x0;
    plVar7 = std::basic_streambuf<char,std::char_traits<char>_>::getloc
                       ((basic_streambuf<char,std::char_traits<char>_> *)this_00,&local_c8);
    this_01 = std::use_facet<std::codecvt<char,char,_Mbstatet>_>(plVar7);
    bVar4 = std::codecvt_base::always_noconv((codecvt_base *)this_01);
    if (bVar4) {
      (this->output_file_stream_)._Filebuffer._Pcvt = (codecvt<char,char,_Mbstatet> *)0x0;
    }
    else {
      (this->output_file_stream_)._Filebuffer._Pcvt = this_01;
      std::basic_streambuf<char,std::char_traits<char>_>::_Init
                ((basic_streambuf<char,std::char_traits<char>_> *)this_00);
    }
    if ((local_c8._Ptr != (_Locimp *)0x0) &&
       (puVar8 = (undefined8 *)(**(code **)((local_c8._Ptr)->_padding_ + 0x10))(),
       puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)(puVar8);
    }
    iVar5 = *(int *)(*(longlong *)pbVar1 + 4);
    if (this_00 != (basic_filebuf<char,std::char_traits<char>_> *)0x0) {
      std::basic_ios<char,std::char_traits<char>_>::clear
                ((basic_ios<char,std::char_traits<char>_> *)(&pbVar1->field_0x0 + iVar5),0,false);
      goto LAB_14f09b0e2;
    }
  }
  else {
    iVar5 = *(int *)(*(longlong *)pbVar1 + 4);
  }
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)(&pbVar1->field_0x0 + iVar5),2,false);
LAB_14f09b0e2:
  if (*(int *)((longlong)&(this->output_file_stream_)._Filebuffer._padding_ +
              (longlong)*(int *)(*(longlong *)pbVar1 + 4)) == 0) {
    vorbis_info_init(&this->vorbis_info_);
    if (param_4 == kVariableBitRate) {
      iVar5 = vorbis_encode_init_vbr(&this->vorbis_info_,param_2 & 0xffffffff,param_3,param_6);
    }
    else {
      if (param_4 != kAverageBitRate) {
        return false;
      }
      iVar5 = vorbis_encode_init(&this->vorbis_info_,param_2 & 0xffffffff,param_3,0xffffffff,
                                 CONCAT44(uVar12,param_5),CONCAT44(uVar14,0xffffffff));
    }
    if (iVar5 == 0) {
      vorbis_comment_init(&this->vorbis_comment_);
      vorbis_comment_add_tag(&this->vorbis_comment_,"ENCODER","VrAudio");
      vorbis_analysis_init(&this->vorbis_state_,&this->vorbis_info_);
      vorbis_block_init(&this->vorbis_state_,&this->vorbis_block_);
      poVar2 = &this->stream_state_;
      ogg_stream_init(poVar2,1);
      vorbis_analysis_headerout
                (&this->vorbis_state_,&this->vorbis_comment_,local_b8,local_90,local_68);
      ogg_stream_packetin(poVar2,local_b8);
      ogg_stream_packetin(poVar2,local_90);
      ogg_stream_packetin(poVar2,local_68);
      iVar5 = ogg_stream_flush(poVar2,&this->ogg_page_);
      while( true ) {
        if (iVar5 == 0) {
          this->init_ = true;
          return true;
        }
        std::basic_ostream<char,std::char_traits<char>_>::write
                  ((basic_ostream<char,std::char_traits<char>_> *)&this->output_file_stream_,
                   (char *)(this->ogg_page_).header,(longlong)(this->ogg_page_).header_len);
        std::basic_ostream<char,std::char_traits<char>_>::write
                  ((basic_ostream<char,std::char_traits<char>_> *)&this->output_file_stream_,
                   (char *)(this->ogg_page_).body,(longlong)(this->ogg_page_).body_len);
        if (*(int *)((longlong)&(this->output_file_stream_)._Filebuffer._padding_ +
                    (longlong)*(int *)(*(longlong *)&this->output_file_stream_ + 4)) != 0) break;
        iVar5 = ogg_stream_flush(poVar2,&this->ogg_page_);
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
    pbVar9 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)
                        &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                         ::__l2::kNullStream,"Could not open output file: ");
    p_Var3 = &param_1->_Mypair;
    if (0xf < (param_1->_Mypair)._Myval2._Myres) {
      param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_1->_Mypair)._Myval2._Bx._Ptr;
    }
    std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
              (pbVar9,(char *)param_1,(p_Var3->_Myval2)._Mysize);
  }
  return false;
}

// PerformEncoding @ 14f09b350

bool __thiscall vraudio::VorbisStreamEncoder::PerformEncoding(VorbisStreamEncoder *this)

{
  int iVar1;
  bool bVar2;
  FatalLogger local_118;
  
  if (this->init_ == false) {
    FatalLogger::FatalLogger
              (&local_118,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\utils\\vorbis_stream_encoder.cc"
               ,0x89);
    bVar2 = true;
  }
  else {
    bVar2 = false;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__), bVar2 = false,
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
  if (bVar2) {
    FatalLogger::~FatalLogger(&local_118);
  }
  iVar1 = vorbis_analysis_blockout(&this->vorbis_state_,&this->vorbis_block_);
  do {
    if (iVar1 != 1) {
      return true;
    }
    vorbis_analysis(&this->vorbis_block_,0);
    vorbis_bitrate_addblock(&this->vorbis_block_);
    iVar1 = vorbis_bitrate_flushpacket(&this->vorbis_state_,&this->ogg_packet_);
    while (iVar1 != 0) {
      ogg_stream_packetin(&this->stream_state_,&this->ogg_packet_);
      do {
        iVar1 = ogg_stream_pageout(&this->stream_state_,&this->ogg_page_);
        if (iVar1 == 0) break;
        std::basic_ostream<char,std::char_traits<char>_>::write
                  ((basic_ostream<char,std::char_traits<char>_> *)&this->output_file_stream_,
                   (char *)(this->ogg_page_).header,(longlong)(this->ogg_page_).header_len);
        std::basic_ostream<char,std::char_traits<char>_>::write
                  ((basic_ostream<char,std::char_traits<char>_> *)&this->output_file_stream_,
                   (char *)(this->ogg_page_).body,(longlong)(this->ogg_page_).body_len);
        if (*(int *)((longlong)&(this->output_file_stream_)._Filebuffer._padding_ +
                    (longlong)*(int *)(*(longlong *)&this->output_file_stream_ + 4)) != 0) {
          return false;
        }
        iVar1 = ogg_page_eos(&this->ogg_page_);
      } while (iVar1 == 0);
      iVar1 = vorbis_bitrate_flushpacket(&this->vorbis_state_,&this->ogg_packet_);
    }
    iVar1 = vorbis_analysis_blockout(&this->vorbis_state_);
  } while( true );
}

// PrepareVorbisBuffer @ 14f09b580

void __thiscall
vraudio::VorbisStreamEncoder::PrepareVorbisBuffer
          (VorbisStreamEncoder *this,float **param_1,ulong64 param_2,ulong64 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)vorbis_analysis_buffer(&this->vorbis_state_,(int)param_3 * (int)param_2);
  if (param_2 != 0) {
    lVar2 = (longlong)param_1 - (longlong)puVar1;
    do {
      if (param_3 != 0) {
        memmove((void *)*puVar1,*(void **)(lVar2 + (longlong)puVar1),param_3 * 4);
      }
      puVar1 = puVar1 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  vorbis_analysis_wrote(&this->vorbis_state_,param_3 & 0xffffffff);
  return;
}

// WriteOggPage @ 14f09b620

bool __thiscall vraudio::VorbisStreamEncoder::WriteOggPage(VorbisStreamEncoder *this)

{
  std::basic_ostream<char,std::char_traits<char>_>::write
            ((basic_ostream<char,std::char_traits<char>_> *)&this->output_file_stream_,
             (char *)(this->ogg_page_).header,(longlong)(this->ogg_page_).header_len);
  std::basic_ostream<char,std::char_traits<char>_>::write
            ((basic_ostream<char,std::char_traits<char>_> *)&this->output_file_stream_,
             (char *)(this->ogg_page_).body,(longlong)(this->ogg_page_).body_len);
  return *(int *)((longlong)&(this->output_file_stream_)._Filebuffer._padding_ +
                 (longlong)*(int *)(*(longlong *)&this->output_file_stream_ + 4)) == 0;
}

