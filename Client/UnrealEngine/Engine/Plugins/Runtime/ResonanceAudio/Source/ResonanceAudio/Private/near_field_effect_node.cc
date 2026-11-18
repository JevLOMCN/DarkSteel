// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 5

// NearFieldEffectNode @ 14f089a70

NearFieldEffectNode * __thiscall
vraudio::NearFieldEffectNode::NearFieldEffectNode
          (NearFieldEffectNode *this,int param_1,SystemSettings *param_2)

{
  float *pfVar1;
  
  ProcessingNode::ProcessingNode((ProcessingNode *)this);
  this->_padding_ = (longlong)&_vftable__for__vraudio__Node__;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__SubscriberNode<vraudio::AudioBuffer_const*___ptr64>__;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__PublisherNode<vraudio::AudioBuffer_const*___ptr64>__;
  GainProcessor::GainProcessor(&this->left_panner_);
  GainProcessor::GainProcessor(&this->right_panner_);
  (this->pan_gains_)._Mypair._Myval2._Myfirst = (float *)0x0;
  (this->pan_gains_)._Mypair._Myval2._Mylast = (float *)0x0;
  (this->pan_gains_)._Mypair._Myval2._Myend = (float *)0x0;
  pfVar1 = std::_Allocate<16,std::_Default_allocate_traits>(8);
  (this->pan_gains_)._Mypair._Myval2._Myfirst = pfVar1;
  (this->pan_gains_)._Mypair._Myval2._Myend = pfVar1 + 2;
  pfVar1 = (this->pan_gains_)._Mypair._Myval2._Myfirst;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  (this->pan_gains_)._Mypair._Myval2._Mylast = pfVar1 + 2;
  NearFieldProcessor::NearFieldProcessor
            (&this->near_field_processor_,param_2->sample_rate_hz_,param_2->frames_per_buffer_);
  this->system_settings_ = param_2;
  AudioBuffer::AudioBuffer(&this->output_buffer_,2,param_2->frames_per_buffer_);
  (this->output_buffer_).source_id_ = param_1;
  return this;
}

// `vector_deleting_destructor'`adjustor{24}' @ 14f089b68

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::NearFieldEffectNode::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::NearFieldEffectNode::_vector_deleting_destructor__adjustor_24__
          (NearFieldEffectNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((NearFieldEffectNode *)
                      &this[-1].output_buffer_.channel_views_._Mypair._Myval2._Mylast,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 14f089b78

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::NearFieldEffectNode::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::NearFieldEffectNode::_vector_deleting_destructor__adjustor_32__
          (NearFieldEffectNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((NearFieldEffectNode *)&this[-1].output_buffer_.channel_views_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14f089b90

void * __thiscall
vraudio::NearFieldEffectNode::_scalar_deleting_destructor_(NearFieldEffectNode *this,uint param_1)

{
  AudioBuffer *this_00;
  
  AudioBuffer::~AudioBuffer(&this->output_buffer_);
  this_00 = (this->near_field_processor_).delay_filter_.delay_line_._Mypair._Myval2;
  if (this_00 != (AudioBuffer *)0x0) {
    AudioBuffer::~AudioBuffer(this_00);
    ::operator_delete(this_00,0x48);
  }
  AudioBuffer::~AudioBuffer(&(this->near_field_processor_).low_passed_buffer_);
  std::vector<float,std::allocator<float>_>::_Tidy(&this->pan_gains_);
  ProcessingNode::~ProcessingNode((ProcessingNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x268);
  }
  return this;
}

// AudioProcess @ 14f089c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AudioBuffer * __thiscall
vraudio::NearFieldEffectNode::AudioProcess(NearFieldEffectNode *this,NodeInput *param_1)

{
  vector<float,std::allocator<float>_> *pvVar1;
  SystemSettings *pSVar2;
  float *pfVar3;
  ChannelView *pCVar4;
  bool bVar5;
  bool bVar6;
  AudioBuffer *pAVar7;
  SourceParameters *pSVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_128 [32];
  WorldPosition local_f8;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [16];
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_128;
  pAVar7 = ProcessingNode::NodeInput::GetSingleInput(param_1);
  pSVar8 = SourceParametersManager::GetParameters
                     (&this->system_settings_->source_parameters_manager_,pAVar7->source_id_);
  if (pSVar8 == (SourceParameters *)0x0) {
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
                ::__l2::kNullStream,"Could not find source parameters");
    pAVar7 = (AudioBuffer *)0x0;
  }
  else {
    fVar11 = pSVar8->near_field_gain;
    if (fVar11 <= 0.0) {
      local_f8._0_4_ = 0;
      std::fill<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<float>_>_>,float>
                ((_Vector_iterator<std::_Vector_val<std::_Simple_types<float>_>_>)
                 (this->pan_gains_)._Mypair._Myval2._Myfirst,
                 (_Vector_iterator<std::_Vector_val<std::_Simple_types<float>_>_>)
                 (this->pan_gains_)._Mypair._Myval2._Mylast,(float *)&local_f8);
    }
    else {
      pSVar2 = this->system_settings_;
      WorldPosition::WorldPosition((WorldPosition *)local_d8);
      fStack_e4 = *(float *)&(pSVar2->head_rotation_).field_0x4;
      fStack_dc = *(float *)&(pSVar2->head_rotation_).field_0xc;
      fVar17 = -*(float *)&pSVar2->head_rotation_;
      fVar18 = -fStack_e4;
      fStack_e0 = -*(float *)&(pSVar2->head_rotation_).field_0x8;
      local_e8 = -*(float *)&pSVar2->head_rotation_;
      fStack_e4 = -fStack_e4;
      fVar10 = *(float *)&(pSVar8->object_transform).position - *(float *)&pSVar2->head_position_;
      fVar15 = *(float *)&(pSVar8->object_transform).position.field_0x4 -
               *(float *)&(pSVar2->head_position_).field_0x4;
      fVar16 = *(float *)&(pSVar8->object_transform).position.field_0x8 -
               *(float *)&(pSVar2->head_position_).field_0x8;
      fVar14 = fVar17 * fVar15 - fVar18 * fVar10;
      fVar13 = fVar18 * fVar16 - fStack_e0 * fVar15;
      fVar14 = fVar14 + fVar14;
      fVar12 = fStack_e0 * fVar10 - fVar17 * fVar16;
      fVar13 = fVar13 + fVar13;
      fVar12 = fVar12 + fVar12;
      local_d8._8_4_ = (fVar17 * fVar12 - fVar18 * fVar13) + fStack_dc * fVar14 + fVar16;
      local_d8._4_4_ = (fStack_e0 * fVar13 - fVar17 * fVar14) + fStack_dc * fVar12 + fVar15;
      local_d8._0_4_ = (fVar18 * fVar14 - fStack_e0 * fVar12) + fStack_dc * fVar13 + fVar10;
      SphericalAngle::FromWorldPosition(&local_f8);
      pvVar1 = &this->pan_gains_;
      CalculateStereoPanGains((SphericalAngle *)&local_f8,pvVar1);
      fVar10 = ComputeNearFieldEffectGain(&pSVar2->head_position_,(WorldPosition *)pSVar8);
      pfVar3 = (pvVar1->_Mypair)._Myval2._Myfirst;
      uVar9 = 0;
      fVar11 = fVar10 * fVar11 * ___real_3de38e39;
      if ((longlong)(this->pan_gains_)._Mypair._Myval2._Mylast - (longlong)pfVar3 >> 2 != 0) {
        do {
          pfVar3[uVar9] = fVar11 * pfVar3[uVar9];
          uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)
                         ((longlong)(this->pan_gains_)._Mypair._Myval2._Mylast -
                          (longlong)(pvVar1->_Mypair)._Myval2._Myfirst >> 2));
      }
    }
    fVar12 = GainProcessor::GetGain(&this->left_panner_);
    fVar13 = GainProcessor::GetGain(&this->right_panner_);
    pfVar3 = (this->pan_gains_)._Mypair._Myval2._Myfirst;
    fVar11 = *pfVar3;
    fVar10 = pfVar3[1];
    bVar5 = IsGainNearZero(fVar12);
    if ((bVar5) && (bVar5 = IsGainNearZero(fVar11), bVar5)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    bVar6 = IsGainNearZero(fVar13);
    if ((bVar6) && (bVar6 = IsGainNearZero(fVar10), bVar6)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if ((bVar5) && (bVar6)) {
      GainProcessor::Reset(&this->left_panner_,0.0);
      GainProcessor::Reset(&this->right_panner_,0.0);
      pAVar7 = (AudioBuffer *)0x0;
    }
    else {
      pCVar4 = (this->output_buffer_).channel_views_._Mypair._Myval2._Myfirst;
      NearFieldProcessor::Process
                (&this->near_field_processor_,(pAVar7->channel_views_)._Mypair._Myval2._Myfirst,
                 pCVar4 + 1,pSVar8->enable_hrtf);
      GainProcessor::ApplyGain(&this->left_panner_,fVar11,pCVar4 + 1,pCVar4,false);
      GainProcessor::ApplyGain(&this->right_panner_,fVar10,pCVar4 + 1,pCVar4 + 1,false);
      pAVar7 = &this->output_buffer_;
    }
  }
  return pAVar7;
}

