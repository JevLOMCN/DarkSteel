// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 21

// _Erase_tree<std::allocator<std::_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*>_>_> @ 14f07d7e0

void __thiscall
std::_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>::
_Erase_tree<std::allocator<std::_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*>_>_>
          (_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>
           *this,allocator<std::_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*>_>
                 *param_1,
          _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *param_2)

{
  char cVar1;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var2;
  
  cVar1 = param_2->_Isnil;
  while (cVar1 == '\0') {
    _Erase_tree<std::allocator<std::_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*>_>_>
              (this,param_1,param_2->_Right);
    p_Var2 = param_2->_Left;
    ::operator_delete(param_2,0x28);
    param_2 = p_Var2;
    cVar1 = p_Var2->_Isnil;
  }
  return;
}

// AmbisonicBinauralDecoderNode @ 14f07d840

/* WARNING: Type propagation algorithm not settling */

AmbisonicBinauralDecoderNode * __thiscall
vraudio::AmbisonicBinauralDecoderNode::AmbisonicBinauralDecoderNode
          (AmbisonicBinauralDecoderNode *this,SystemSettings *param_1,int param_2,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3,
          FftManager *param_4,Resampler *param_5)

{
  ChannelView *pCVar1;
  unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
  *puVar2;
  PartitionedFftFilter *pPVar3;
  AmbisonicBinauralDecoder *pAVar4;
  AmbisonicBinauralDecoder *pAVar5;
  unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
  uVar6;
  ulong64 uVar7;
  ChannelView *pCVar8;
  unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
  *puVar9;
  undefined8 local_res8;
  FatalLogger local_118;
  
  pAVar5 = (AmbisonicBinauralDecoder *)0x0;
  ProcessingNode::ProcessingNode((ProcessingNode *)this);
  this->system_settings_ = param_1;
  this->_padding_ = (longlong)&_vftable__for__vraudio__Node__;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__SubscriberNode<vraudio::AudioBuffer_const*___ptr64>__;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__PublisherNode<vraudio::AudioBuffer_const*___ptr64>__;
  this->num_ambisonic_channels_ = ((longlong)param_2 + 1) * ((longlong)param_2 + 1);
  this->is_stereo_speaker_mode_ = param_1->stereo_speaker_mode_;
  (this->ambisonic_binaural_decoder_)._Mypair._Myval2 = (AmbisonicBinauralDecoder *)0x0;
  this->num_frames_processed_on_empty_input_ = param_1->frames_per_buffer_;
  AudioBuffer::AudioBuffer(&this->stereo_output_buffer_,2,param_1->frames_per_buffer_);
  AudioBuffer::AudioBuffer
            (&this->silence_input_buffer_,this->num_ambisonic_channels_,param_1->frames_per_buffer_)
  ;
  BufferCrossfader::BufferCrossfader(&this->crossfader_,this->system_settings_->frames_per_buffer_);
  AudioBuffer::AudioBuffer(&this->crossfaded_output_buffer_,2,param_1->frames_per_buffer_);
  AudioBuffer::AudioBuffer(&this->temp_crossfade_buffer_,2,param_1->frames_per_buffer_);
  pCVar1 = (this->silence_input_buffer_).channel_views_._Mypair._Myval2._Mylast;
  for (pCVar8 = (this->silence_input_buffer_).channel_views_._Mypair._Myval2._Myfirst;
      pCVar8 != pCVar1; pCVar8 = pCVar8 + 1) {
    pCVar8->enabled_ = true;
    memset(pCVar8->begin_itr_,0,pCVar8->size_ << 2);
  }
  ProcessingNode::EnableProcessOnEmptyInput((ProcessingNode *)this,true);
  CreateShHrirsFromAssets
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000008,
             (int)param_3,(Resampler *)(ulonglong)(uint)this->system_settings_->sample_rate_hz_);
  if (((longlong)*(ChannelView **)(local_res8 + 0x30) -
      (longlong)
      (((vector<vraudio::ChannelView,std::allocator<vraudio::ChannelView>_> *)(local_res8 + 0x28))->
      _Mypair)._Myval2._Myfirst) / 0x18 == this->num_ambisonic_channels_) {
    pAVar4 = pAVar5;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       pAVar4 = (AmbisonicBinauralDecoder *)0x0,
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
    FatalLogger::FatalLogger
              (&local_118,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\graph\\ambisonic_binaural_decoder_node.cc"
               ,0x31);
    pAVar4 = (AmbisonicBinauralDecoder *)&DAT_00000001;
  }
  if (pAVar4 != (AmbisonicBinauralDecoder *)0x0) {
    FatalLogger::~FatalLogger(&local_118);
  }
  pAVar4 = ::operator_new(0xb0);
  if (pAVar4 != (AmbisonicBinauralDecoder *)0x0) {
    pAVar5 = AmbisonicBinauralDecoder::AmbisonicBinauralDecoder
                       (pAVar4,(AudioBuffer *)local_res8,this->system_settings_->frames_per_buffer_,
                        param_4);
  }
  pAVar4 = (this->ambisonic_binaural_decoder_)._Mypair._Myval2;
  (this->ambisonic_binaural_decoder_)._Mypair._Myval2 = pAVar5;
  if (pAVar4 != (AmbisonicBinauralDecoder *)0x0) {
    AudioBuffer::~AudioBuffer(&pAVar4->filtered_input_);
    AudioBuffer::~AudioBuffer(&pAVar4->freq_input_);
    puVar9 = (pAVar4->sh_hrir_filters_)._Mypair._Myval2._Myfirst;
    if (puVar9 != (unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
                   *)0x0) {
      puVar2 = (pAVar4->sh_hrir_filters_)._Mypair._Myval2._Mylast;
      for (; puVar9 != puVar2; puVar9 = puVar9 + 1) {
        pPVar3 = (puVar9->_Mypair)._Myval2;
        if (pPVar3 != (PartitionedFftFilter *)0x0) {
          AudioBuffer::~AudioBuffer(&pPVar3->temp_kernel_chunk_buffer_);
          AudioBuffer::~AudioBuffer(&pPVar3->temp_zeropad_buffer_);
          AudioBuffer::~AudioBuffer(&pPVar3->freq_domain_accumulator_);
          AudioBuffer::~AudioBuffer(&pPVar3->filtered_time_domain_buffers_);
          AudioBuffer::~AudioBuffer(&pPVar3->freq_domain_buffer_);
          AudioBuffer::~AudioBuffer(&pPVar3->kernel_freq_domain_buffer_);
          ::operator_delete(pPVar3,0x200);
        }
      }
      pPVar3 = (PartitionedFftFilter *)(pAVar4->sh_hrir_filters_)._Mypair._Myval2._Myfirst;
      uVar7 = (longlong)(pAVar4->sh_hrir_filters_)._Mypair._Myval2._Myend - (longlong)pPVar3 &
              0xfffffffffffffff8;
      uVar6._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<vraudio::PartitionedFftFilter>,vraudio::PartitionedFftFilter_*,1>
            )(_Compressed_pair<std::default_delete<vraudio::PartitionedFftFilter>,vraudio::PartitionedFftFilter_*,1>
              )pPVar3;
      if (0xfff < uVar7) {
        uVar6._Mypair._Myval2 =
             ((unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
               *)&pPVar3[0xffffffffffffffff].temp_kernel_chunk_buffer_.source_id_)->_Mypair;
        uVar7 = uVar7 + 0x27;
        if (0x1f < (ulonglong)((longlong)pPVar3 + (-8 - (longlong)uVar6._Mypair._Myval2))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar6._Mypair._Myval2,uVar7);
      (pAVar4->sh_hrir_filters_)._Mypair._Myval2._Myfirst =
           (unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
            *)0x0;
      (pAVar4->sh_hrir_filters_)._Mypair._Myval2._Mylast =
           (unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
            *)0x0;
      (pAVar4->sh_hrir_filters_)._Mypair._Myval2._Myend =
           (unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
            *)0x0;
    }
    ::operator_delete(pAVar4,0xb0);
  }
  if ((AudioBuffer *)local_res8 != (AudioBuffer *)0x0) {
    AudioBuffer::~AudioBuffer((AudioBuffer *)local_res8);
    ::operator_delete((void *)local_res8,0x48);
  }
  return this;
}

// ~Input<vraudio::AudioBuffer_const_*> @ 14f07dc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
vraudio::Node::Input<vraudio::AudioBuffer_const_*>::~Input<vraudio::AudioBuffer_const_*>
          (Input<vraudio::AudioBuffer_const_*> *this)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>,std::_Iterator_base0>
  _Var7;
  longlong lVar8;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var9;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var10;
  char *****pppppcVar11;
  basic_ostream<char,std::char_traits<char>_> *pbVar12;
  void *pvVar13;
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>,std::_Iterator_base0>
  _Var14;
  ulong64 uVar15;
  longlong *plVar16;
  bool bVar17;
  void *pvVar18;
  char *pcVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined1 auStackY_178 [32];
  undefined8 local_140;
  undefined1 local_138 [32];
  longlong *local_118;
  longlong *local_110;
  longlong *local_f8;
  ulonglong *local_f0;
  int *local_e0;
  char *local_c8;
  uint local_c0;
  basic_ios<char,std::char_traits<char>_> local_b0;
  char ****local_50;
  undefined8 uStack_48;
  char *local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_178;
  plVar4 = *(longlong **)&(this->outputs_).field_0x8;
  bVar17 = false;
  plVar16 = (longlong *)*plVar4;
  if (plVar16 != plVar4) {
    plVar20 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_140 = plVar20;
    do {
      p_Var10 = ((_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>
                  *)plVar16[2])->_Myhead;
      p_Var9 = p_Var10->_Parent;
      cVar3 = p_Var9->_Isnil;
      _Var7._Ptr = p_Var10;
      while (cVar3 == '\0') {
        _Var14._Ptr = p_Var9;
        if (p_Var9->_Myval < this) {
          p_Var9 = (_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *)
                   &p_Var9->_Right;
          _Var14._Ptr = _Var7._Ptr;
        }
        p_Var9 = p_Var9->_Left;
        _Var7._Ptr = _Var14._Ptr;
        cVar3 = p_Var9->_Isnil;
      }
      if ((((_Var7._Ptr)->_Isnil == '\0') && ((_Var7._Ptr)->_Myval <= this)) &&
         (_Var7._Ptr != p_Var10)) {
        p_Var10 = std::
                  _Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>
                  ::_Extract((_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>
                              *)plVar16[2],_Var7);
        ::operator_delete(p_Var10,0x28);
        if ((*(int *)(*plVar20 + 0x9d4c) <
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
      }
      else {
        local_138._0_8_ =
             &std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::_vbtable_
        ;
        std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
                  (&local_b0);
        bVar17 = true;
        std::basic_ostream<char,std::char_traits<char>_>::
        basic_ostream<char,std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)local_138,
                   (basic_streambuf<char,std::char_traits<char>_> *)(local_138 + 8),false);
        *(undefined ***)(local_138 + *(int *)(local_138._0_8_ + 4)) =
             std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        *(int *)((longlong)&local_140 + (longlong)*(int *)(local_138._0_8_ + 4) + 4) =
             *(int *)(local_138._0_8_ + 4) + -0x88;
        std::basic_streambuf<char,std::char_traits<char>_>::
        basic_streambuf<char,std::char_traits<char>_>
                  ((basic_streambuf<char,std::char_traits<char>_> *)(local_138 + 8));
        local_c8 = (char *)0x0;
        local_138._8_8_ =
             std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        local_c0 = 4;
        pbVar12 = std::operator<<<std::char_traits<char>_>
                            ((basic_ostream<char,std::char_traits<char>_> *)local_138,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\node\\node.h"
                            );
        pbVar12 = std::operator<<<std::char_traits<char>_>(pbVar12,":");
        pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
                  std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar12,0x9b);
        std::operator<<<std::char_traits<char>_>(pbVar12,": ");
      }
      if (bVar17) {
        local_40 = (char *)0x0;
        local_38 = 0xf;
        uStack_48 = 0;
        local_50 = (char ****)0x0;
        if ((((byte)local_c0 & 0x22) == 2) || (pcVar19 = (char *)*local_f0, pcVar19 == (char *)0x0))
        {
          if (((local_c0 & 4) == 0) && (*local_f8 != 0)) {
            pvVar18 = (void *)*local_118;
            pcVar19 = (char *)(*local_f8 + ((longlong)*local_e0 - (longlong)pvVar18));
            goto LAB_14f07de1a;
          }
        }
        else {
          if (pcVar19 < local_c8) {
            pcVar19 = local_c8;
          }
          pvVar18 = (void *)*local_110;
          pcVar19 = pcVar19 + -(longlong)pvVar18;
LAB_14f07de1a:
          if (pvVar18 != (void *)0x0) {
            if (&DAT_0000000f < pcVar19) {
              if ((char *)0x7fffffffffffffff < pcVar19) {
                    /* WARNING: Subroutine does not return */
                std::_Xlen_string();
              }
              uVar21 = (ulonglong)pcVar19 | 0xf;
              if (uVar21 < 0x8000000000000000) {
                if (uVar21 < 0x16) {
                  uVar21 = 0x16;
                }
              }
              else {
                uVar21 = 0x7fffffffffffffff;
              }
              pppppcVar11 = std::_Allocate<16,std::_Default_allocate_traits>(uVar21 + 1);
              local_40 = pcVar19;
              local_38 = uVar21;
              memcpy(pppppcVar11,pvVar18,(size_t)pcVar19);
              *(char *)((longlong)pppppcVar11 + (longlong)pcVar19) = '\0';
              local_50 = (char ****)pppppcVar11;
            }
            else {
              local_40 = pcVar19;
              memmove(&local_50,pvVar18,(size_t)pcVar19);
              *(char *)((longlong)&local_50 + (longlong)pcVar19) = '\0';
            }
          }
        }
        bVar17 = false;
        pppppcVar11 = &local_50;
        if (0xf < local_38) {
          pppppcVar11 = (char *****)local_50;
        }
        pbVar12 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                            ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                             (char *)pppppcVar11,(ulong64)local_40);
        std::basic_ostream<char,std::char_traits<char>_>::operator<<
                  (pbVar12,std::endl<char,std::char_traits<char>_>);
        if (0xf < local_38) {
          uVar15 = local_38 + 1;
          pppppcVar11 = (char *****)local_50;
          if (0xfff < uVar15) {
            pppppcVar11 = (char *****)local_50[-1];
            uVar15 = local_38 + 0x28;
            if ((char *)0x1f < (char *)((longlong)local_50 + (-8 - (longlong)pppppcVar11))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete(pppppcVar11,uVar15);
        }
        std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::
        _vbase_destructor_((basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_> *
                           )local_138);
        plVar20 = local_140;
      }
      plVar16 = (longlong *)*plVar16;
    } while (plVar16 != plVar4);
  }
  std::vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_>::
  ~vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_>
            (&this->read_data_);
  pvVar18 = *(void **)&(this->outputs_).field_0x18;
  if (pvVar18 != (void *)0x0) {
    uVar15 = *(longlong *)&(this->outputs_).field_0x28 - (longlong)pvVar18 & 0xfffffffffffffff8;
    pvVar13 = pvVar18;
    if (0xfff < uVar15) {
      pvVar13 = *(void **)((longlong)pvVar18 + -8);
      uVar15 = uVar15 + 0x27;
      if (0x1f < (ulonglong)((longlong)pvVar18 + (-8 - (longlong)pvVar13))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar13,uVar15);
    *(undefined8 *)&(this->outputs_).field_0x18 = 0;
    *(undefined8 *)&(this->outputs_).field_0x20 = 0;
    *(undefined8 *)&(this->outputs_).field_0x28 = 0;
  }
  puVar5 = *(undefined8 **)&(this->outputs_).field_0x8;
  *(undefined8 *)puVar5[1] = 0;
  puVar5 = (undefined8 *)*puVar5;
  while (puVar5 != (undefined8 *)0x0) {
    plVar4 = (longlong *)puVar5[4];
    puVar6 = (undefined8 *)*puVar5;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar4 + 1;
      lVar8 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
    ::operator_delete(puVar5,0x28);
    puVar5 = puVar6;
  }
  ::operator_delete(*(void **)&(this->outputs_).field_0x8,0x28);
  return;
}

// ~PublisherNode<vraudio::AudioBuffer_const_*> @ 14f07e0c0

void __thiscall
vraudio::PublisherNode<vraudio::AudioBuffer_const_*>::~PublisherNode<vraudio::AudioBuffer_const_*>
          (PublisherNode<vraudio::AudioBuffer_const_*> *this)

{
  *this = (PublisherNode<vraudio::AudioBuffer_const_*>)
          &___7__PublisherNode_PEBVAudioBuffer_vraudio___vraudio__6B_;
  return;
}

// ~SubscriberNode<vraudio::AudioBuffer_const_*> @ 14f07e0e0

void __thiscall
vraudio::SubscriberNode<vraudio::AudioBuffer_const_*>::~SubscriberNode<vraudio::AudioBuffer_const_*>
          (SubscriberNode<vraudio::AudioBuffer_const_*> *this)

{
  *this = (SubscriberNode<vraudio::AudioBuffer_const_*>)
          &___7__SubscriberNode_PEBVAudioBuffer_vraudio___vraudio__6B_;
  return;
}

// ~vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_> @ 14f07e100

/* WARNING: Type propagation algorithm not settling */

void __thiscall
std::vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_>::
~vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_>
          (vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_> *this)

{
  AudioBuffer **ppAVar1;
  AudioBuffer **ppAVar2;
  ulong64 uVar3;
  
  ppAVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (ppAVar1 != (AudioBuffer **)0x0) {
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)ppAVar1 & 0xfffffffffffffff8;
    ppAVar2 = ppAVar1;
    if (0xfff < uVar3) {
      ppAVar2 = (AudioBuffer **)ppAVar1[0xffffffffffffffff];
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)ppAVar1 + (-8 - (longlong)ppAVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(ppAVar2,uVar3);
    (this->_Mypair)._Myval2._Myfirst = (AudioBuffer **)0x0;
    (this->_Mypair)._Myval2._Mylast = (AudioBuffer **)0x0;
    (this->_Mypair)._Myval2._Myend = (AudioBuffer **)0x0;
  }
  return;
}

// ~AmbisonicBinauralDecoderNode @ 14f07e180

void __thiscall
vraudio::AmbisonicBinauralDecoderNode::~AmbisonicBinauralDecoderNode
          (AmbisonicBinauralDecoderNode *this)

{
  AmbisonicBinauralDecoder *pAVar1;
  
  this->_padding_ = (longlong)&_vftable__for__vraudio__Node__;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__SubscriberNode<vraudio::AudioBuffer_const*___ptr64>__;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__PublisherNode<vraudio::AudioBuffer_const*___ptr64>__;
  AudioBuffer::~AudioBuffer(&this->temp_crossfade_buffer_);
  AudioBuffer::~AudioBuffer(&this->crossfaded_output_buffer_);
  AudioBuffer::~AudioBuffer(&(this->crossfader_).crossfade_buffer_);
  AudioBuffer::~AudioBuffer(&this->silence_input_buffer_);
  AudioBuffer::~AudioBuffer(&this->stereo_output_buffer_);
  pAVar1 = (this->ambisonic_binaural_decoder_)._Mypair._Myval2;
  if (pAVar1 != (AmbisonicBinauralDecoder *)0x0) {
    std::default_delete<vraudio::AmbisonicBinauralDecoder>::operator()
              ((default_delete<vraudio::AmbisonicBinauralDecoder> *)
               &this->ambisonic_binaural_decoder_,pAVar1);
  }
  ProcessingNode::~ProcessingNode((ProcessingNode *)this);
  return;
}

// ~Node @ 14f07e210

void __thiscall vraudio::Node::~Node(Node *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7Node_vraudio__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014f07e235. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))();
      return;
    }
  }
  return;
}

// ~ProcessingNode @ 14f07e240

void __thiscall vraudio::ProcessingNode::~ProcessingNode(ProcessingNode *this)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  std::vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_>::
  ~vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_>
            (&(this->output_stream_).written_data_);
  plVar4 = *(longlong **)(*(longlong *)&(this->output_stream_).inputs_ + 8);
  cVar3 = *(char *)((longlong)plVar4 + 0x19);
  while (cVar3 == '\0') {
    std::_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>::
    _Erase_tree<std::allocator<std::_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*>_>_>
              ((_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>
                *)&this->output_stream_,
               (allocator<std::_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*>_>
                *)&this->output_stream_,
               (_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *)plVar4[2])
    ;
    plVar5 = (longlong *)*plVar4;
    ::operator_delete(plVar4,0x28);
    plVar4 = plVar5;
    cVar3 = *(char *)((longlong)plVar5 + 0x19);
  }
  ::operator_delete(*(void **)&(this->output_stream_).inputs_,0x28);
  vraudio::Node::Input<vraudio::AudioBuffer_const_*>::~Input<vraudio::AudioBuffer_const_*>
            (&this->input_stream_);
  this->_padding_ = (longlong)&___7__PublisherNode_PEBVAudioBuffer_vraudio___vraudio__6B_;
  this->_padding_ = (longlong)&___7__SubscriberNode_PEBVAudioBuffer_vraudio___vraudio__6B_;
  this->_padding_ = (longlong)&___7Node_vraudio__6B_;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  return;
}

// operator() @ 14f07e310

/* WARNING: Type propagation algorithm not settling */

void __thiscall
std::default_delete<vraudio::AmbisonicBinauralDecoder>::operator()
          (default_delete<vraudio::AmbisonicBinauralDecoder> *this,AmbisonicBinauralDecoder *param_1
          )

{
  PartitionedFftFilter *pPVar1;
  unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
  *puVar2;
  ulong64 uVar3;
  unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
  *puVar4;
  
  if (param_1 != (AmbisonicBinauralDecoder *)0x0) {
    vraudio::AudioBuffer::~AudioBuffer(&param_1->filtered_input_);
    vraudio::AudioBuffer::~AudioBuffer(&param_1->freq_input_);
    puVar4 = (param_1->sh_hrir_filters_)._Mypair._Myval2._Myfirst;
    if (puVar4 != (unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
                   *)0x0) {
      puVar2 = (param_1->sh_hrir_filters_)._Mypair._Myval2._Mylast;
      for (; puVar4 != puVar2; puVar4 = puVar4 + 1) {
        pPVar1 = (puVar4->_Mypair)._Myval2;
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
      puVar4 = (param_1->sh_hrir_filters_)._Mypair._Myval2._Myfirst;
      uVar3 = (longlong)(param_1->sh_hrir_filters_)._Mypair._Myval2._Myend - (longlong)puVar4 &
              0xfffffffffffffff8;
      puVar2 = puVar4;
      if (0xfff < uVar3) {
        puVar2 = *(unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
                   **)(puVar4 + 0xffffffffffffffff);
        uVar3 = uVar3 + 0x27;
        if (0x1f < (ulonglong)((longlong)puVar4 + (-8 - (longlong)puVar2))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(puVar2,uVar3);
      (param_1->sh_hrir_filters_)._Mypair._Myval2._Myfirst =
           (unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
            *)0x0;
      (param_1->sh_hrir_filters_)._Mypair._Myval2._Mylast =
           (unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
            *)0x0;
      (param_1->sh_hrir_filters_)._Mypair._Myval2._Myend =
           (unique_ptr<vraudio::PartitionedFftFilter,std::default_delete<vraudio::PartitionedFftFilter>_>
            *)0x0;
    }
    ::operator_delete(param_1,0xb0);
  }
  return;
}

// `vector_deleting_destructor'`adjustor{24}' @ 14f07e440

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::AmbisonicBinauralDecoderNode::`vector
   deleting destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::AmbisonicBinauralDecoderNode::_vector_deleting_destructor__adjustor_24__
          (AmbisonicBinauralDecoderNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((AmbisonicBinauralDecoderNode *)
                      &this[-1].temp_crossfade_buffer_.channel_views_._Mypair._Myval2._Mylast,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 14f07e450

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::AmbisonicBinauralDecoderNode::`vector
   deleting destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::AmbisonicBinauralDecoderNode::_vector_deleting_destructor__adjustor_32__
          (AmbisonicBinauralDecoderNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((AmbisonicBinauralDecoderNode *)
                      &this[-1].temp_crossfade_buffer_.channel_views_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14f07e460

void * __thiscall
vraudio::PublisherNode<vraudio::AudioBuffer_const_*>::_scalar_deleting_destructor_
          (PublisherNode<vraudio::AudioBuffer_const_*> *this,uint param_1)

{
  *this = (PublisherNode<vraudio::AudioBuffer_const_*>)
          &___7__PublisherNode_PEBVAudioBuffer_vraudio___vraudio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f07e4a0

void * __thiscall
vraudio::SubscriberNode<vraudio::AudioBuffer_const_*>::_scalar_deleting_destructor_
          (SubscriberNode<vraudio::AudioBuffer_const_*> *this,uint param_1)

{
  *this = (SubscriberNode<vraudio::AudioBuffer_const_*>)
          &___7__SubscriberNode_PEBVAudioBuffer_vraudio___vraudio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f07e4e0

void * __thiscall
vraudio::AmbisonicBinauralDecoderNode::_scalar_deleting_destructor_
          (AmbisonicBinauralDecoderNode *this,uint param_1)

{
  AmbisonicBinauralDecoder *pAVar1;
  
  this->_padding_ = (longlong)&_vftable__for__vraudio__Node__;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__SubscriberNode<vraudio::AudioBuffer_const*___ptr64>__;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__PublisherNode<vraudio::AudioBuffer_const*___ptr64>__;
  AudioBuffer::~AudioBuffer(&this->temp_crossfade_buffer_);
  AudioBuffer::~AudioBuffer(&this->crossfaded_output_buffer_);
  AudioBuffer::~AudioBuffer(&(this->crossfader_).crossfade_buffer_);
  AudioBuffer::~AudioBuffer(&this->silence_input_buffer_);
  AudioBuffer::~AudioBuffer(&this->stereo_output_buffer_);
  pAVar1 = (this->ambisonic_binaural_decoder_)._Mypair._Myval2;
  if (pAVar1 != (AmbisonicBinauralDecoder *)0x0) {
    std::default_delete<vraudio::AmbisonicBinauralDecoder>::operator()
              ((default_delete<vraudio::AmbisonicBinauralDecoder> *)
               &this->ambisonic_binaural_decoder_,pAVar1);
  }
  ProcessingNode::~ProcessingNode((ProcessingNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x248);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f07e590

void * __thiscall vraudio::Node::_scalar_deleting_destructor_(Node *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7Node_vraudio__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// AudioProcess @ 14f07e5f0

AudioBuffer * __thiscall
vraudio::AmbisonicBinauralDecoderNode::AudioProcess
          (AmbisonicBinauralDecoderNode *this,NodeInput *param_1)

{
  bool bVar1;
  ulonglong uVar2;
  AmbisonicBinauralDecoder *this_00;
  AudioBuffer *pAVar3;
  
  bVar1 = this->is_stereo_speaker_mode_;
  this->is_stereo_speaker_mode_ = this->system_settings_->stereo_speaker_mode_;
  uVar2 = this->system_settings_->frames_per_buffer_;
  pAVar3 = ProcessingNode::NodeInput::GetSingleInput(param_1);
  if (pAVar3 == (AudioBuffer *)0x0) {
    if ((uVar2 <= this->num_frames_processed_on_empty_input_) || (bVar1 != false)) {
      return (AudioBuffer *)0x0;
    }
    this_00 = (this->ambisonic_binaural_decoder_)._Mypair._Myval2;
    this->num_frames_processed_on_empty_input_ = this->num_frames_processed_on_empty_input_ + uVar2;
    AmbisonicBinauralDecoder::Process
              (this_00,&this->silence_input_buffer_,&this->stereo_output_buffer_);
  }
  else {
    this->num_frames_processed_on_empty_input_ = 0;
    if (this->is_stereo_speaker_mode_ == false) {
      AmbisonicBinauralDecoder::Process
                ((this->ambisonic_binaural_decoder_)._Mypair._Myval2,pAVar3,
                 &this->stereo_output_buffer_);
    }
    else {
      StereoFromSoundfield(pAVar3,&this->stereo_output_buffer_);
    }
    if (this->is_stereo_speaker_mode_ != bVar1) {
      if (bVar1 == false) {
        AmbisonicBinauralDecoder::Process
                  ((this->ambisonic_binaural_decoder_)._Mypair._Myval2,pAVar3,
                   &this->temp_crossfade_buffer_);
      }
      else {
        StereoFromSoundfield(pAVar3,&this->temp_crossfade_buffer_);
      }
      BufferCrossfader::ApplyLinearCrossfade
                (&this->crossfader_,&this->stereo_output_buffer_,&this->temp_crossfade_buffer_,
                 &this->crossfaded_output_buffer_);
      return &this->crossfaded_output_buffer_;
    }
  }
  return &this->stereo_output_buffer_;
}

// RemoveInput @ 14f07e740

bool __thiscall
vraudio::Node::Output<vraudio::AudioBuffer_const_*>::RemoveInput
          (Output<vraudio::AudioBuffer_const_*> *this,Input<vraudio::AudioBuffer_const_*> *param_1)

{
  char cVar1;
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>,std::_Iterator_base0>
  _Var2;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var3;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var4;
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>,std::_Iterator_base0>
  _Var5;
  
  p_Var4 = *(_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> **)
            &this->inputs_;
  p_Var3 = p_Var4->_Parent;
  cVar1 = p_Var3->_Isnil;
  _Var2._Ptr = p_Var4;
  while (cVar1 == '\0') {
    _Var5._Ptr = p_Var3;
    if (p_Var3->_Myval < param_1) {
      p_Var3 = (_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *)
               &p_Var3->_Right;
      _Var5._Ptr = _Var2._Ptr;
    }
    p_Var3 = p_Var3->_Left;
    _Var2._Ptr = _Var5._Ptr;
    cVar1 = p_Var3->_Isnil;
  }
  if ((((_Var2._Ptr)->_Isnil == '\0') && ((_Var2._Ptr)->_Myval <= param_1)) &&
     (_Var2._Ptr != p_Var4)) {
    p_Var4 = std::
             _Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>
             ::_Extract((_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>
                         *)this,_Var2);
    ::operator_delete(p_Var4,0x28);
    return true;
  }
  return false;
}

// _Extract @ 14f07e7b0

_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> * __thiscall
std::_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>::
_Extract(_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>
         *this,_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>,std::_Iterator_base0>
               param_1)

{
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> **pp_Var1;
  char cVar2;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var3;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var4;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var5;
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>,std::_Iterator_base0>
  _Var6;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var7;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var8;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var9;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> **pp_Var10;
  
  pp_Var1 = &(param_1._Ptr)->_Right;
  p_Var8 = *pp_Var1;
  if (p_Var8->_Isnil == '\0') {
    cVar2 = p_Var8->_Left->_Isnil;
    p_Var7 = p_Var8;
    p_Var3 = p_Var8->_Left;
    while (cVar2 == '\0') {
      cVar2 = p_Var3->_Left->_Isnil;
      p_Var7 = p_Var3;
      p_Var3 = p_Var3->_Left;
    }
  }
  else {
    cVar2 = (param_1._Ptr)->_Parent->_Isnil;
    p_Var3 = (param_1._Ptr)->_Parent;
    _Var6._Ptr = param_1._Ptr;
    while ((p_Var7 = p_Var3, cVar2 == '\0' && (_Var6._Ptr == p_Var7->_Right))) {
      cVar2 = p_Var7->_Parent->_Isnil;
      p_Var3 = p_Var7->_Parent;
      _Var6._Ptr = p_Var7;
    }
  }
  pp_Var10 = &(param_1._Ptr)->_Parent;
  p_Var3 = (param_1._Ptr)->_Left;
  p_Var9 = p_Var8;
  if (((p_Var3->_Isnil == '\0') && (p_Var9 = p_Var3, p_Var8->_Isnil == '\0')) &&
     (p_Var9 = p_Var7->_Right, p_Var7 != param_1._Ptr)) {
    p_Var3->_Parent = p_Var7;
    p_Var7->_Left = (param_1._Ptr)->_Left;
    p_Var8 = p_Var7;
    if (p_Var7 != *pp_Var1) {
      p_Var8 = p_Var7->_Parent;
      if (p_Var9->_Isnil == '\0') {
        p_Var9->_Parent = p_Var8;
      }
      p_Var8->_Left = p_Var9;
      p_Var7->_Right = *pp_Var1;
      (*pp_Var1)->_Parent = p_Var7;
    }
    if (this->_Myhead->_Parent == param_1._Ptr) {
      this->_Myhead->_Parent = p_Var7;
    }
    else {
      p_Var3 = *pp_Var10;
      if (p_Var3->_Left == param_1._Ptr) {
        p_Var3->_Left = p_Var7;
      }
      else {
        p_Var3->_Right = p_Var7;
      }
    }
    cVar2 = p_Var7->_Color;
    p_Var7->_Parent = *pp_Var10;
    p_Var7->_Color = (param_1._Ptr)->_Color;
    (param_1._Ptr)->_Color = cVar2;
  }
  else {
    p_Var8 = *pp_Var10;
    if (p_Var9->_Isnil == '\0') {
      p_Var9->_Parent = p_Var8;
    }
    if (this->_Myhead->_Parent == param_1._Ptr) {
      this->_Myhead->_Parent = p_Var9;
    }
    else if (p_Var8->_Left == param_1._Ptr) {
      p_Var8->_Left = p_Var9;
    }
    else {
      p_Var8->_Right = p_Var9;
    }
    if (this->_Myhead->_Left == param_1._Ptr) {
      p_Var7 = p_Var8;
      if (p_Var9->_Isnil == '\0') {
        cVar2 = p_Var9->_Left->_Isnil;
        p_Var3 = p_Var9->_Left;
        p_Var7 = p_Var9;
        while (p_Var5 = p_Var3, cVar2 == '\0') {
          p_Var3 = p_Var5->_Left;
          cVar2 = p_Var3->_Isnil;
          p_Var7 = p_Var5;
        }
      }
      this->_Myhead->_Left = p_Var7;
    }
    p_Var7 = this->_Myhead;
    if (p_Var7->_Right == param_1._Ptr) {
      if (p_Var9->_Isnil == '\0') {
        cVar2 = p_Var9->_Right->_Isnil;
        p_Var3 = p_Var9->_Right;
        p_Var5 = p_Var9;
        while (p_Var4 = p_Var3, cVar2 == '\0') {
          p_Var3 = p_Var4->_Right;
          cVar2 = p_Var3->_Isnil;
          p_Var5 = p_Var4;
        }
        p_Var7->_Right = p_Var5;
      }
      else {
        p_Var7->_Right = p_Var8;
      }
    }
  }
  if ((param_1._Ptr)->_Color == '\x01') {
    if (p_Var9 != this->_Myhead->_Parent) {
      do {
        p_Var7 = p_Var8;
        if (p_Var9->_Color != '\x01') break;
        p_Var8 = p_Var7->_Left;
        if (p_Var9 == p_Var8) {
          p_Var8 = p_Var7->_Right;
          if (p_Var8->_Color == '\0') {
            p_Var8->_Color = '\x01';
            p_Var8 = p_Var7->_Right;
            p_Var7->_Color = '\0';
            p_Var7->_Right = p_Var8->_Left;
            if (p_Var8->_Left->_Isnil == '\0') {
              p_Var8->_Left->_Parent = p_Var7;
            }
            p_Var8->_Parent = p_Var7->_Parent;
            if (p_Var7 == this->_Myhead->_Parent) {
              this->_Myhead->_Parent = p_Var8;
            }
            else {
              p_Var3 = p_Var7->_Parent;
              if (p_Var7 == p_Var3->_Left) {
                p_Var3->_Left = p_Var8;
              }
              else {
                p_Var3->_Right = p_Var8;
              }
            }
            p_Var8->_Left = p_Var7;
            p_Var7->_Parent = p_Var8;
            p_Var8 = p_Var7->_Right;
          }
          if (p_Var8->_Isnil == '\0') {
            if ((p_Var8->_Left->_Color != '\x01') || (p_Var8->_Right->_Color != '\x01')) {
              if (p_Var8->_Right->_Color == '\x01') {
                p_Var8->_Left->_Color = '\x01';
                p_Var8->_Color = '\0';
                _Rrotate(this,p_Var8);
                p_Var8 = p_Var7->_Right;
              }
              p_Var8->_Color = p_Var7->_Color;
              p_Var7->_Color = '\x01';
              p_Var8->_Right->_Color = '\x01';
              _Lrotate(this,p_Var7);
              break;
            }
LAB_14f07ead2:
            p_Var8->_Color = '\0';
          }
        }
        else {
          if (p_Var8->_Color == '\0') {
            p_Var8->_Color = '\x01';
            p_Var8 = p_Var7->_Left;
            p_Var7->_Color = '\0';
            p_Var7->_Left = p_Var8->_Right;
            if (p_Var8->_Right->_Isnil == '\0') {
              p_Var8->_Right->_Parent = p_Var7;
            }
            p_Var8->_Parent = p_Var7->_Parent;
            if (p_Var7 == this->_Myhead->_Parent) {
              this->_Myhead->_Parent = p_Var8;
            }
            else {
              p_Var3 = p_Var7->_Parent;
              if (p_Var7 == p_Var3->_Right) {
                p_Var3->_Right = p_Var8;
              }
              else {
                p_Var3->_Left = p_Var8;
              }
            }
            p_Var8->_Right = p_Var7;
            p_Var7->_Parent = p_Var8;
            p_Var8 = p_Var7->_Left;
          }
          if (p_Var8->_Isnil == '\0') {
            if ((p_Var8->_Right->_Color == '\x01') && (p_Var8->_Left->_Color == '\x01'))
            goto LAB_14f07ead2;
            if (p_Var8->_Left->_Color == '\x01') {
              p_Var8->_Right->_Color = '\x01';
              p_Var8->_Color = '\0';
              _Lrotate(this,p_Var8);
              p_Var8 = p_Var7->_Left;
            }
            p_Var8->_Color = p_Var7->_Color;
            p_Var7->_Color = '\x01';
            p_Var8->_Left->_Color = '\x01';
            _Rrotate(this,p_Var7);
            break;
          }
        }
        p_Var8 = p_Var7->_Parent;
        p_Var9 = p_Var7;
      } while (p_Var7 != this->_Myhead->_Parent);
    }
    p_Var9->_Color = '\x01';
  }
  if (this->_Mysize != 0) {
    this->_Mysize = this->_Mysize - 1;
  }
  return param_1._Ptr;
}

// _Lrotate @ 14f07eb60

void __thiscall
std::_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>::
_Lrotate(_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>
         *this,_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *param_1)

{
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var1;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var2;
  
  p_Var1 = param_1->_Right;
  param_1->_Right = p_Var1->_Left;
  if (p_Var1->_Left->_Isnil == '\0') {
    p_Var1->_Left->_Parent = param_1;
  }
  p_Var1->_Parent = param_1->_Parent;
  if (param_1 == this->_Myhead->_Parent) {
    this->_Myhead->_Parent = p_Var1;
    p_Var1->_Left = param_1;
    param_1->_Parent = p_Var1;
    return;
  }
  p_Var2 = param_1->_Parent;
  if (param_1 == p_Var2->_Left) {
    p_Var2->_Left = p_Var1;
    p_Var1->_Left = param_1;
    param_1->_Parent = p_Var1;
    return;
  }
  p_Var2->_Right = p_Var1;
  p_Var1->_Left = param_1;
  param_1->_Parent = p_Var1;
  return;
}

// _Rrotate @ 14f07ebc0

void __thiscall
std::_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>::
_Rrotate(_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>
         *this,_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *param_1)

{
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var1;
  _Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *p_Var2;
  
  p_Var1 = param_1->_Left;
  param_1->_Left = p_Var1->_Right;
  if (p_Var1->_Right->_Isnil == '\0') {
    p_Var1->_Right->_Parent = param_1;
  }
  p_Var1->_Parent = param_1->_Parent;
  if (param_1 == this->_Myhead->_Parent) {
    this->_Myhead->_Parent = p_Var1;
    p_Var1->_Right = param_1;
    param_1->_Parent = p_Var1;
    return;
  }
  p_Var2 = param_1->_Parent;
  if (param_1 == p_Var2->_Right) {
    p_Var2->_Right = p_Var1;
    p_Var1->_Right = param_1;
    param_1->_Parent = p_Var1;
    return;
  }
  p_Var2->_Left = p_Var1;
  p_Var1->_Right = param_1;
  param_1->_Parent = p_Var1;
  return;
}

