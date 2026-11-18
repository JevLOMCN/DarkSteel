// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 6

// OcclusionNode @ 14f08a0e0

OcclusionNode * __thiscall
vraudio::OcclusionNode::OcclusionNode(OcclusionNode *this,int param_1,SystemSettings *param_2)

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
  MonoPoleFilter::MonoPoleFilter(&this->low_pass_filter_,0.0);
  this->current_occlusion_ = 0.0;
  AudioBuffer::AudioBuffer(&this->output_buffer_,1,param_2->frames_per_buffer_);
  pCVar1 = (this->output_buffer_).channel_views_._Mypair._Myval2._Mylast;
  for (pCVar2 = (this->output_buffer_).channel_views_._Mypair._Myval2._Myfirst; pCVar2 != pCVar1;
      pCVar2 = pCVar2 + 1) {
    pCVar2->enabled_ = true;
    memset(pCVar2->begin_itr_,0,pCVar2->size_ << 2);
  }
  (this->output_buffer_).source_id_ = param_1;
  return this;
}

// `vector_deleting_destructor'`adjustor{24}' @ 14f08a1b4

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::OcclusionNode::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::OcclusionNode::_vector_deleting_destructor__adjustor_24__(OcclusionNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((OcclusionNode *)
                      &this[-1].output_buffer_.channel_views_._Mypair._Myval2._Mylast,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 14f08a1c4

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::OcclusionNode::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::OcclusionNode::_vector_deleting_destructor__adjustor_32__(OcclusionNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((OcclusionNode *)&this[-1].output_buffer_.channel_views_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14f08a1e0

void * __thiscall
vraudio::OcclusionNode::_scalar_deleting_destructor_(OcclusionNode *this,uint param_1)

{
  AudioBuffer::~AudioBuffer(&this->output_buffer_);
  ProcessingNode::~ProcessingNode((ProcessingNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x118);
  }
  return this;
}

// AudioProcess @ 14f08a230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

AudioBuffer * __thiscall
vraudio::OcclusionNode::AudioProcess(OcclusionNode *this,NodeInput *param_1)

{
  SystemSettings *pSVar1;
  bool bVar2;
  AudioBuffer *pAVar3;
  SourceParameters *pSVar4;
  AudioBuffer *pAVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined1 local_50 [24];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_78;
  pAVar3 = ProcessingNode::NodeInput::GetSingleInput(param_1);
  pSVar4 = SourceParametersManager::GetParameters
                     (&this->system_settings_->source_parameters_manager_,pAVar3->source_id_);
  if (pSVar4 == (SourceParameters *)0x0) {
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
    pAVar5 = (AudioBuffer *)0x0;
  }
  else {
    pSVar1 = this->system_settings_;
    WorldPosition::WorldPosition((WorldPosition *)(local_50 + 8));
    GetRelativeDirection
              (&pSVar1->head_position_,&pSVar1->head_rotation_,(WorldPosition *)pSVar4,
               (WorldPosition *)(local_50 + 8));
    SphericalAngle::FromWorldPosition((WorldPosition *)local_58);
    GetRelativeDirection
              ((WorldPosition *)pSVar4,&(pSVar4->object_transform).rotation,&pSVar1->head_position_,
               (WorldPosition *)(local_50 + 8));
    SphericalAngle::FromWorldPosition((WorldPosition *)local_50);
    fVar6 = CalculateDirectivity
                      (pSVar4->listener_directivity_alpha,pSVar4->listener_directivity_order,
                       (SphericalAngle *)local_58);
    fVar7 = CalculateDirectivity
                      (pSVar4->directivity_alpha,pSVar4->directivity_order,
                       (SphericalAngle *)local_50);
    fVar8 = (this->current_occlusion_ - pSVar4->occlusion_intensity) * __real_3f400000 +
            pSVar4->occlusion_intensity;
    this->current_occlusion_ = fVar8;
    fVar6 = CalculateOcclusionFilterCoefficient(fVar7 * fVar6,fVar8);
    MonoPoleFilter::SetCoefficient(&this->low_pass_filter_,fVar6);
    bVar2 = MonoPoleFilter::Filter
                      (&this->low_pass_filter_,(pAVar3->channel_views_)._Mypair._Myval2._Myfirst,
                       (this->output_buffer_).channel_views_._Mypair._Myval2._Myfirst);
    pAVar5 = &this->output_buffer_;
    if (!bVar2) {
      pAVar5 = pAVar3;
    }
  }
  return pAVar5;
}

// GetRelativeDirection @ 14f08a430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
vraudio::GetRelativeDirection
          (WorldPosition *param_1,WorldRotation *param_2,WorldPosition *param_3,
          WorldPosition *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = *(float *)&param_2->field_0xc;
  fVar8 = -*(float *)param_2;
  fVar9 = -*(float *)&param_2->field_0x4;
  fVar10 = -*(float *)&param_2->field_0x8;
  fVar3 = *(float *)param_3 - *(float *)param_1;
  fVar5 = *(float *)&param_3->field_0x4 - *(float *)&param_1->field_0x4;
  fVar7 = *(float *)&param_3->field_0x8 - *(float *)&param_1->field_0x8;
  fVar6 = fVar8 * fVar5 - fVar9 * fVar3;
  fVar6 = fVar6 + fVar6;
  fVar2 = fVar9 * fVar7 - fVar10 * fVar5;
  fVar4 = fVar10 * fVar3 - fVar8 * fVar7;
  fVar2 = fVar2 + fVar2;
  fVar4 = fVar4 + fVar4;
  *(ulonglong *)param_4 =
       CONCAT44((fVar10 * fVar2 - fVar6 * fVar8) + fVar4 * fVar1 + fVar5,
                (fVar9 * fVar6 - fVar10 * fVar4) + fVar2 * fVar1 + fVar3);
  *(float *)&param_4->field_0x8 = (fVar4 * fVar8 - fVar9 * fVar2) + fVar6 * fVar1 + fVar7;
  return;
}

