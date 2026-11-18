// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 5

// GainNode @ 14f0835e0

GainNode * __thiscall
vraudio::GainNode::GainNode
          (GainNode *this,int param_1,ulong64 param_2,AttenuationType *param_3,
          SystemSettings *param_4)

{
  GainProcessor *pGVar1;
  ulong64 uVar2;
  
  ProcessingNode::ProcessingNode((ProcessingNode *)this);
  this->num_channels_ = param_2;
  this->_padding_ = (longlong)&_vftable__for__vraudio__Node__;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__SubscriberNode<vraudio::AudioBuffer_const*___ptr64>__;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__PublisherNode<vraudio::AudioBuffer_const*___ptr64>__;
  this->attenuation_type_ = *param_3;
  (this->gain_processors_)._Mypair._Myval2._Myfirst = (GainProcessor *)0x0;
  (this->gain_processors_)._Mypair._Myval2._Mylast = (GainProcessor *)0x0;
  (this->gain_processors_)._Mypair._Myval2._Myend = (GainProcessor *)0x0;
  if (param_2 != 0) {
    if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      std::vector<vraudio::GainProcessor,std::allocator<vraudio::GainProcessor>_>::_Xlength();
    }
    pGVar1 = std::_Allocate<16,std::_Default_allocate_traits>(param_2 * 8);
    (this->gain_processors_)._Mypair._Myval2._Myfirst = pGVar1;
    (this->gain_processors_)._Mypair._Myval2._Mylast = pGVar1;
    (this->gain_processors_)._Mypair._Myval2._Myend = pGVar1 + param_2;
    pGVar1 = (this->gain_processors_)._Mypair._Myval2._Myfirst;
    uVar2 = param_2;
    do {
      GainProcessor::GainProcessor(pGVar1);
      pGVar1 = pGVar1 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    (this->gain_processors_)._Mypair._Myval2._Mylast = pGVar1;
  }
  this->system_settings_ = param_4;
  AudioBuffer::AudioBuffer(&this->output_buffer_,param_2,param_4->frames_per_buffer_);
  (this->output_buffer_).source_id_ = param_1;
  return this;
}

// `vector_deleting_destructor'`adjustor{24}' @ 14f08370c

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::GainNode::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::GainNode::_vector_deleting_destructor__adjustor_24__(GainNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((GainNode *)&this[-1].output_buffer_.channel_views_._Mypair._Myval2._Mylast,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 14f08371c

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::GainNode::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::GainNode::_vector_deleting_destructor__adjustor_32__(GainNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((GainNode *)&this[-1].output_buffer_.channel_views_,param_1)
  ;
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14f083730

void * __thiscall vraudio::GainNode::_scalar_deleting_destructor_(GainNode *this,uint param_1)

{
  AudioBuffer::~AudioBuffer(&this->output_buffer_);
  std::vector<vraudio::GainProcessor,std::allocator<vraudio::GainProcessor>_>::_Tidy
            (&this->gain_processors_);
  ProcessingNode::~ProcessingNode((ProcessingNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// AudioProcess @ 14f083790

AudioBuffer * __thiscall vraudio::GainNode::AudioProcess(GainNode *this,NodeInput *param_1)

{
  float fVar1;
  bool bVar2;
  AudioBuffer *pAVar3;
  SourceParameters *pSVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar7;
  
  pAVar3 = ProcessingNode::NodeInput::GetSingleInput(param_1);
  pSVar4 = SourceParametersManager::GetParameters
                     (&this->system_settings_->source_parameters_manager_,pAVar3->source_id_);
  if (pSVar4 != (SourceParameters *)0x0) {
    fVar7 = GainProcessor::GetGain((this->gain_processors_)._Mypair._Myval2._Myfirst);
    fVar1 = pSVar4->attenuations[(int)this->attenuation_type_];
    bVar2 = IsGainNearZero(fVar1);
    if ((bVar2) && (bVar2 = IsGainNearZero(fVar7), bVar2)) {
      uVar5 = 0;
      if (this->num_channels_ != 0) {
        do {
          GainProcessor::Reset((this->gain_processors_)._Mypair._Myval2._Myfirst + uVar5,0.0);
          uVar5 = uVar5 + 1;
        } while (uVar5 < this->num_channels_);
      }
      pAVar3 = (AudioBuffer *)0x0;
    }
    else {
      bVar2 = IsGainNearUnity(fVar1);
      if ((bVar2) && (bVar2 = IsGainNearUnity(fVar7), fVar7 = __real_3f800000, bVar2)) {
        uVar5 = 0;
        if (this->num_channels_ != 0) {
          do {
            GainProcessor::Reset((this->gain_processors_)._Mypair._Myval2._Myfirst + uVar5,fVar7);
            uVar5 = uVar5 + 1;
          } while (uVar5 < this->num_channels_);
        }
      }
      else {
        uVar6 = 0;
        uVar5 = uVar6;
        if (this->num_channels_ != 0) {
          do {
            GainProcessor::ApplyGain
                      ((this->gain_processors_)._Mypair._Myval2._Myfirst + uVar6,fVar1,
                       (ChannelView *)
                       ((longlong)&((pAVar3->channel_views_)._Mypair._Myval2._Myfirst)->begin_itr_ +
                       uVar5),(ChannelView *)
                              ((longlong)
                               &((this->output_buffer_).channel_views_._Mypair._Myval2._Myfirst)->
                                begin_itr_ + uVar5),false);
            uVar6 = uVar6 + 1;
            uVar5 = uVar5 + 0x18;
          } while (uVar6 < this->num_channels_);
        }
        pAVar3 = &this->output_buffer_;
      }
    }
    return pAVar3;
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
              ::__l2::kNullStream,"Could not find source parameters");
  return (AudioBuffer *)0x0;
}

