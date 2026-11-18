// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 8

// SourceNode @ 14f094a80

SourceNode * __thiscall vraudio::SourceNode::SourceNode(SourceNode *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__vraudio__Node__;
  this->_padding_ = 0;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__PublisherNode<vraudio::AudioBuffer_const*___ptr64>__;
  this->_padding_ = 0;
  *(undefined8 *)&(this->output_stream_).inputs_ = 0;
  *(undefined8 *)&(this->output_stream_).inputs_.field_0x8 = 0;
  pvVar1 = ::operator_new(0x28);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  *(void **)&(this->output_stream_).inputs_ = pvVar1;
  (this->output_stream_).written_data_._Mypair._Myval2._Myfirst = (AudioBuffer **)0x0;
  (this->output_stream_).written_data_._Mypair._Myval2._Mylast = (AudioBuffer **)0x0;
  (this->output_stream_).written_data_._Mypair._Myval2._Myend = (AudioBuffer **)0x0;
  (this->output_stream_).parent_ = (Node *)this;
  this->end_of_stream_ = (atomic<bool>)0x0;
  return this;
}

// `vector_deleting_destructor'`adjustor{24}' @ 14f094afc

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::SourceNode::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::SourceNode::_vector_deleting_destructor__adjustor_24__(SourceNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SourceNode *)&this[-1].output_stream_.written_data_._Mypair._Myval2._Myend,
                      param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14f094b10

void * __thiscall vraudio::SourceNode::_scalar_deleting_destructor_(SourceNode *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  vraudio::Node::Output<vraudio::AudioBuffer_const_*>::~Output<vraudio::AudioBuffer_const_*>
            (&this->output_stream_);
  this->_padding_ = (longlong)&___7__PublisherNode_PEBVAudioBuffer_vraudio___vraudio__6B_;
  this->_padding_ = (longlong)&___7Node_vraudio__6B_;
  plVar3 = (longlong *)this->_padding_;
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
    ::operator_delete(this,0x58);
  }
  return this;
}

// CleanUp @ 14f094b90

bool __thiscall vraudio::SourceNode::CleanUp(SourceNode *this)

{
  return (bool)this->end_of_stream_;
}

// GetOutput @ 14f094ba0

Output<vraudio::AudioBuffer_const_*> * __thiscall vraudio::SourceNode::GetOutput(SourceNode *this)

{
  return (Output<vraudio::AudioBuffer_const_*> *)&this->_padding_;
}

// GetSharedNodePtr @ 14f094bb0

shared_ptr<vraudio::Node> * __thiscall
vraudio::SourceNode::GetSharedNodePtr
          (SourceNode *this,shared_ptr<vraudio::Node> *__return_storage_ptr__)

{
  longlong lVar1;
  int iVar2;
  undefined7 uVar3;
  int iVar4;
  bool bVar5;
  
  lVar1 = *(longlong *)&this[-1].end_of_stream_;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  if (lVar1 != 0) {
    iVar2 = *(int *)(lVar1 + 8);
    while (iVar2 != 0) {
      LOCK();
      iVar4 = *(int *)(lVar1 + 8);
      bVar5 = iVar2 == iVar4;
      if (bVar5) {
        *(int *)(lVar1 + 8) = iVar2 + 1;
        iVar4 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar4;
      if (bVar5) {
        *(Node **)__return_storage_ptr__ = this[-1].output_stream_.parent_;
        uVar3 = *(undefined7 *)&this[-1].field_0x51;
        __return_storage_ptr__->field_0x8 = this[-1].end_of_stream_;
        *(undefined7 *)&__return_storage_ptr__->field_0x9 = uVar3;
        return __return_storage_ptr__;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::_Throw_bad_weak_ptr();
}

// MarkEndOfStream @ 14f094c10

void __thiscall vraudio::SourceNode::MarkEndOfStream(SourceNode *this)

{
  LOCK();
  this->end_of_stream_ = (atomic<bool>)0x1;
  UNLOCK();
  return;
}

// Process @ 14f094c20

void __thiscall vraudio::SourceNode::Process(SourceNode *this)

{
  AudioBuffer *pAVar1;
  
  pAVar1 = (AudioBuffer *)(**(code **)(this->_padding_ + 0x18))();
  vraudio::Node::Output<vraudio::AudioBuffer_const_*>::Write(&this->output_stream_,pAVar1);
  return;
}

