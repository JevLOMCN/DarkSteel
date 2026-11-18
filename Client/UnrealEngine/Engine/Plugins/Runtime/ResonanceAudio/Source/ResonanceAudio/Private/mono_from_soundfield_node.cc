// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 5

// MonoFromSoundfieldNode @ 14f089900

MonoFromSoundfieldNode * __thiscall
vraudio::MonoFromSoundfieldNode::MonoFromSoundfieldNode
          (MonoFromSoundfieldNode *this,int param_1,SystemSettings *param_2)

{
  ChannelView *pCVar1;
  ChannelView *pCVar2;
  
  ProcessingNode::ProcessingNode((ProcessingNode *)this);
  this->_padding_ = (longlong)&_vftable__for__vraudio__Node__;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__SubscriberNode<vraudio::AudioBuffer_const*___ptr64>__;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__PublisherNode<vraudio::AudioBuffer_const*___ptr64>__;
  AudioBuffer::AudioBuffer(&this->output_buffer_,1,param_2->frames_per_buffer_);
  (this->output_buffer_).source_id_ = param_1;
  pCVar1 = (this->output_buffer_).channel_views_._Mypair._Myval2._Mylast;
  for (pCVar2 = (this->output_buffer_).channel_views_._Mypair._Myval2._Myfirst; pCVar2 != pCVar1;
      pCVar2 = pCVar2 + 1) {
    pCVar2->enabled_ = true;
    memset(pCVar2->begin_itr_,0,pCVar2->size_ << 2);
  }
  return this;
}

// `vector_deleting_destructor'`adjustor{24}' @ 14f0899a8

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::MonoFromSoundfieldNode::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::MonoFromSoundfieldNode::_vector_deleting_destructor__adjustor_24__
          (MonoFromSoundfieldNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((MonoFromSoundfieldNode *)
                      &this[-1].output_buffer_.channel_views_._Mypair._Myval2._Mylast,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 14f0899b8

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::MonoFromSoundfieldNode::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::MonoFromSoundfieldNode::_vector_deleting_destructor__adjustor_32__
          (MonoFromSoundfieldNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((MonoFromSoundfieldNode *)&this[-1].output_buffer_.channel_views_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14f0899d0

void * __thiscall
vraudio::MonoFromSoundfieldNode::_scalar_deleting_destructor_
          (MonoFromSoundfieldNode *this,uint param_1)

{
  AudioBuffer::~AudioBuffer(&this->output_buffer_);
  ProcessingNode::~ProcessingNode((ProcessingNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// AudioProcess @ 14f089a20

AudioBuffer * __thiscall
vraudio::MonoFromSoundfieldNode::AudioProcess(MonoFromSoundfieldNode *this,NodeInput *param_1)

{
  ChannelView *pCVar1;
  ChannelView *pCVar2;
  AudioBuffer *pAVar3;
  
  pAVar3 = ProcessingNode::NodeInput::GetSingleInput(param_1);
  pCVar1 = (this->output_buffer_).channel_views_._Mypair._Myval2._Myfirst;
  pCVar2 = (pAVar3->channel_views_)._Mypair._Myval2._Myfirst;
  if (pCVar1 != pCVar2) {
    memcpy(pCVar1->begin_itr_,pCVar2->begin_itr_,pCVar1->size_ << 2);
  }
  return &this->output_buffer_;
}

