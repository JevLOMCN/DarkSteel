// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 6

// BufferedSourceNode @ 14f082cc0

BufferedSourceNode * __thiscall
vraudio::BufferedSourceNode::BufferedSourceNode
          (BufferedSourceNode *this,int param_1,ulong64 param_2,ulong64 param_3)

{
  ChannelView *pCVar1;
  ChannelView *pCVar2;
  
  SourceNode::SourceNode((SourceNode *)this);
  this->source_id_ = param_1;
  this->_padding_ = (longlong)&_vftable__for__vraudio__Node__;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__PublisherNode<vraudio::AudioBuffer_const*___ptr64>__;
  AudioBuffer::AudioBuffer(&this->input_audio_buffer_,param_2,param_3);
  this->new_buffer_flag_ = false;
  pCVar1 = (this->input_audio_buffer_).channel_views_._Mypair._Myval2._Mylast;
  for (pCVar2 = (this->input_audio_buffer_).channel_views_._Mypair._Myval2._Myfirst;
      pCVar2 != pCVar1; pCVar2 = pCVar2 + 1) {
    pCVar2->enabled_ = true;
    memset(pCVar2->begin_itr_,0,pCVar2->size_ << 2);
  }
  return this;
}

// ~SourceNode @ 14f082d70

/* WARNING: Type propagation algorithm not settling */

void __thiscall vraudio::SourceNode::~SourceNode(SourceNode *this)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  AudioBuffer **ppAVar4;
  longlong *plVar5;
  longlong *plVar6;
  AudioBuffer **ppAVar7;
  ulong64 uVar8;
  
  ppAVar4 = (this->output_stream_).written_data_._Mypair._Myval2._Myfirst;
  if (ppAVar4 != (AudioBuffer **)0x0) {
    uVar8 = (longlong)(this->output_stream_).written_data_._Mypair._Myval2._Myend -
            (longlong)ppAVar4 & 0xfffffffffffffff8;
    ppAVar7 = ppAVar4;
    if (0xfff < uVar8) {
      ppAVar7 = (AudioBuffer **)ppAVar4[0xffffffffffffffff];
      uVar8 = uVar8 + 0x27;
      if (0x1f < (ulonglong)((longlong)ppAVar4 + (-8 - (longlong)ppAVar7))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(ppAVar7,uVar8);
    (this->output_stream_).written_data_._Mypair._Myval2._Myfirst = (AudioBuffer **)0x0;
    (this->output_stream_).written_data_._Mypair._Myval2._Mylast = (AudioBuffer **)0x0;
    (this->output_stream_).written_data_._Mypair._Myval2._Myend = (AudioBuffer **)0x0;
  }
  plVar5 = *(longlong **)(*(longlong *)&(this->output_stream_).inputs_ + 8);
  cVar3 = *(char *)((longlong)plVar5 + 0x19);
  while (cVar3 == '\0') {
    std::_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>::
    _Erase_tree<std::allocator<std::_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*>_>_>
              ((_Tree_val<std::_Tree_simple_types<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*>_>
                *)&this->output_stream_,
               (allocator<std::_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*>_>
                *)&this->output_stream_,
               (_Tree_node<vraudio::Node::Input<vraudio::AudioBuffer_const_*>_*,void_*> *)plVar5[2])
    ;
    plVar6 = (longlong *)*plVar5;
    ::operator_delete(plVar5,0x28);
    plVar5 = plVar6;
    cVar3 = *(char *)((longlong)plVar6 + 0x19);
  }
  ::operator_delete(*(void **)&(this->output_stream_).inputs_,0x28);
  this->_padding_ = (longlong)&___7__PublisherNode_PEBVAudioBuffer_vraudio___vraudio__6B_;
  this->_padding_ = (longlong)&___7Node_vraudio__6B_;
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  return;
}

// `vector_deleting_destructor'`adjustor{24}' @ 14f082e78

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::BufferedSourceNode::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::BufferedSourceNode::_vector_deleting_destructor__adjustor_24__
          (BufferedSourceNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((BufferedSourceNode *)
                      &this[-1].input_audio_buffer_.channel_views_._Mypair._Myval2._Myend,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14f082e90

void * __thiscall
vraudio::BufferedSourceNode::_scalar_deleting_destructor_(BufferedSourceNode *this,uint param_1)

{
  AudioBuffer::~AudioBuffer(&this->input_audio_buffer_);
  SourceNode::~SourceNode((SourceNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// AudioProcess @ 14f082ee0

AudioBuffer * __thiscall vraudio::BufferedSourceNode::AudioProcess(BufferedSourceNode *this)

{
  if (this->new_buffer_flag_ == false) {
    return (AudioBuffer *)0x0;
  }
  this->new_buffer_flag_ = false;
  (this->input_audio_buffer_).source_id_ = this->source_id_;
  return &this->input_audio_buffer_;
}

// GetMutableAudioBufferAndSetNewBufferFlag @ 14f082f10

AudioBuffer * __thiscall
vraudio::BufferedSourceNode::GetMutableAudioBufferAndSetNewBufferFlag(BufferedSourceNode *this)

{
  this->new_buffer_flag_ = true;
  return &this->input_audio_buffer_;
}

