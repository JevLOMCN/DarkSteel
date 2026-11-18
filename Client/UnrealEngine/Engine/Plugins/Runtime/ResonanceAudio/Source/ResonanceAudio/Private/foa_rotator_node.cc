// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 5

// FoaRotatorNode @ 14f082f30

FoaRotatorNode * __thiscall
vraudio::FoaRotatorNode::FoaRotatorNode(FoaRotatorNode *this,int param_1,SystemSettings *param_2)

{
  ChannelView *pCVar1;
  ChannelView *pCVar2;
  
  ProcessingNode::ProcessingNode((ProcessingNode *)this);
  this->system_settings_ = param_2;
  this->_padding_ = (longlong)&_vftable__for__vraudio__Node__;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__SubscriberNode<vraudio::AudioBuffer_const*___ptr64>__;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__PublisherNode<vraudio::AudioBuffer_const*___ptr64>__;
  WorldRotation::WorldRotation(&(this->foa_rotator_).current_rotation_);
  WorldPosition::WorldPosition(&(this->foa_rotator_).temp_audio_position_);
  WorldPosition::WorldPosition(&(this->foa_rotator_).temp_world_position_);
  WorldPosition::WorldPosition(&(this->foa_rotator_).temp_rotated_audio_position_);
  WorldPosition::WorldPosition(&(this->foa_rotator_).temp_rotated_world_position_);
  AudioBuffer::AudioBuffer(&this->output_buffer_,4,param_2->frames_per_buffer_);
  pCVar1 = (this->output_buffer_).channel_views_._Mypair._Myval2._Mylast;
  for (pCVar2 = (this->output_buffer_).channel_views_._Mypair._Myval2._Myfirst; pCVar2 != pCVar1;
      pCVar2 = pCVar2 + 1) {
    pCVar2->enabled_ = true;
    memset(pCVar2->begin_itr_,0,pCVar2->size_ << 2);
  }
  (this->output_buffer_).source_id_ = param_1;
  return this;
}

// `vector_deleting_destructor'`adjustor{24}' @ 14f083024

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::FoaRotatorNode::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::FoaRotatorNode::_vector_deleting_destructor__adjustor_24__
          (FoaRotatorNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FoaRotatorNode *)
                      &this[-1].output_buffer_.channel_views_._Mypair._Myval2._Mylast,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 14f083034

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::FoaRotatorNode::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::FoaRotatorNode::_vector_deleting_destructor__adjustor_32__
          (FoaRotatorNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FoaRotatorNode *)&this[-1].output_buffer_.channel_views_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14f083050

void * __thiscall
vraudio::FoaRotatorNode::_scalar_deleting_destructor_(FoaRotatorNode *this,uint param_1)

{
  AudioBuffer::~AudioBuffer(&this->output_buffer_);
  ProcessingNode::~ProcessingNode((ProcessingNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x148);
  }
  return this;
}

// AudioProcess @ 14f0830a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

AudioBuffer * __thiscall
vraudio::FoaRotatorNode::AudioProcess(FoaRotatorNode *this,NodeInput *param_1)

{
  SystemSettings *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  AudioBuffer *pAVar8;
  SourceParameters *pSVar9;
  AudioBuffer *pAVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  pAVar8 = ProcessingNode::NodeInput::GetSingleInput(param_1);
  pSVar9 = SourceParametersManager::GetParameters
                     (&this->system_settings_->source_parameters_manager_,pAVar8->source_id_);
  if (pSVar9 == (SourceParameters *)0x0) {
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
    pAVar10 = (AudioBuffer *)0x0;
  }
  else {
    fVar2 = *(float *)&(pSVar9->object_transform).rotation;
    fVar3 = *(float *)&(pSVar9->object_transform).rotation.field_0x4;
    fVar4 = *(float *)&(pSVar9->object_transform).rotation.field_0x8;
    fVar5 = *(float *)&(pSVar9->object_transform).rotation.field_0xc;
    pSVar1 = this->system_settings_;
    fVar6 = *(float *)&(pSVar1->head_rotation_).field_0xc;
    uStack_2c = 0;
    local_38 = 0;
    fVar11 = -*(float *)&pSVar1->head_rotation_;
    fVar12 = -*(float *)&(pSVar1->head_rotation_).field_0x4;
    fVar13 = -*(float *)&(pSVar1->head_rotation_).field_0x8;
    uStack_30 = 0;
    local_28 = fVar4 * fVar12 + fVar2 * fVar6 + (fVar5 * fVar11 - fVar3 * fVar13);
    fStack_24 = fVar2 * fVar13 + fVar3 * fVar6 + (fVar5 * fVar12 - fVar4 * fVar11);
    fStack_20 = fVar3 * fVar11 + fVar4 * fVar6 + (fVar5 * fVar13 - fVar2 * fVar12);
    fStack_1c = -(fVar4 * fVar13 + fVar3 * fVar12) + (fVar5 * fVar6 - fVar2 * fVar11);
    bVar7 = FoaRotator::Process(&this->foa_rotator_,(WorldRotation *)&local_28,pAVar8,
                                &this->output_buffer_);
    pAVar10 = &this->output_buffer_;
    if (!bVar7) {
      pAVar10 = pAVar8;
    }
  }
  return pAVar10;
}

