// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 8

// MixerNode @ 14f089680

MixerNode * __thiscall
vraudio::MixerNode::MixerNode(MixerNode *this,SystemSettings *param_1,ulong64 param_2)

{
  ProcessingNode::ProcessingNode((ProcessingNode *)this);
  this->num_channels_ = param_2;
  this->_padding_ = (longlong)&_vftable__for__vraudio__Node__;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__SubscriberNode<vraudio::AudioBuffer_const*___ptr64>__;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__PublisherNode<vraudio::AudioBuffer_const*___ptr64>__;
  Mixer::Mixer(&this->mixer_,param_2,param_1->frames_per_buffer_);
  ProcessingNode::EnableProcessOnEmptyInput((ProcessingNode *)this,true);
  return this;
}

// ~Mixer @ 14f089700

void __thiscall vraudio::Mixer::~Mixer(Mixer *this)

{
  ChannelView *pCVar1;
  float *pfVar2;
  ChannelView *pCVar3;
  ulong64 uVar4;
  
  pCVar1 = (this->output_).channel_views_._Mypair._Myval2._Myfirst;
  if (pCVar1 != (ChannelView *)0x0) {
    uVar4 = (((longlong)(this->output_).channel_views_._Mypair._Myval2._Myend - (longlong)pCVar1) /
            0x18) * 0x18;
    pCVar3 = pCVar1;
    if (0xfff < uVar4) {
      pCVar3 = *(ChannelView **)&pCVar1[-1].enabled_;
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)pCVar1 + (-8 - (longlong)pCVar3))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pCVar3,uVar4);
    (this->output_).channel_views_._Mypair._Myval2._Myfirst = (ChannelView *)0x0;
    (this->output_).channel_views_._Mypair._Myval2._Mylast = (ChannelView *)0x0;
    (this->output_).channel_views_._Mypair._Myval2._Myend = (ChannelView *)0x0;
  }
  pfVar2 = (this->output_).data_._Mypair._Myval2._Myfirst;
  if (pfVar2 != (float *)0x0) {
    free(*(void **)(pfVar2 + -2));
    (this->output_).data_._Mypair._Myval2._Myfirst = (float *)0x0;
    (this->output_).data_._Mypair._Myval2._Mylast = (float *)0x0;
    (this->output_).data_._Mypair._Myval2._Myend = (float *)0x0;
  }
  return;
}

// `vector_deleting_destructor'`adjustor{24}' @ 14f0897bc

/* WARNING: Type propagation algorithm not settling */
/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::MixerNode::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::MixerNode::_vector_deleting_destructor__adjustor_24__(MixerNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((MixerNode *)&this[-1].mixer_.output_.channel_views_._Mypair._Myval2._Myend,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 14f0897cc

/* WARNING: Type propagation algorithm not settling */
/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::MixerNode::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::MixerNode::_vector_deleting_destructor__adjustor_32__(MixerNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((MixerNode *)&this[-1].mixer_.output_.channel_views_._Mypair._Myval2._Mylast,
                      param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14f0897e0

void * __thiscall vraudio::MixerNode::_scalar_deleting_destructor_(MixerNode *this,uint param_1)

{
  Mixer::~Mixer(&this->mixer_);
  ProcessingNode::~ProcessingNode((ProcessingNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// AudioProcess @ 14f089830

AudioBuffer * __thiscall vraudio::MixerNode::AudioProcess(MixerNode *this,NodeInput *param_1)

{
  Mixer *this_00;
  AudioBuffer **ppAVar1;
  vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_> *pvVar2;
  AudioBuffer *pAVar3;
  AudioBuffer **ppAVar4;
  
  this_00 = &this->mixer_;
  Mixer::Reset(this_00);
  pvVar2 = ProcessingNode::NodeInput::GetInputBuffers(param_1);
  ppAVar1 = (pvVar2->_Mypair)._Myval2._Mylast;
  ppAVar4 = (pvVar2->_Mypair)._Myval2._Myfirst;
  if (ppAVar4 == ppAVar1) {
    return (AudioBuffer *)0x0;
  }
  do {
    Mixer::AddInput(this_00,*ppAVar4);
    ppAVar4 = ppAVar4 + 1;
  } while (ppAVar4 != ppAVar1);
  pAVar3 = Mixer::GetOutput(this_00);
  return pAVar3;
}

// CleanUp @ 14f0898c0

bool __thiscall vraudio::MixerNode::CleanUp(MixerNode *this)

{
  ProcessingNode::CallCleanUpOnInputNodes((ProcessingNode *)this);
  return false;
}

// GetOutputBuffer @ 14f0898e0

AudioBuffer * __thiscall vraudio::MixerNode::GetOutputBuffer(MixerNode *this)

{
  AudioBuffer *pAVar1;
  
  pAVar1 = Mixer::GetOutput(&this->mixer_);
  return pAVar1;
}

