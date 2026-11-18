// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 7

// GainMixerNode @ 14f083270

GainMixerNode * __thiscall
vraudio::GainMixerNode::GainMixerNode
          (GainMixerNode *this,AttenuationType *param_1,SystemSettings *param_2,ulong64 param_3)

{
  ProcessingNode::ProcessingNode((ProcessingNode *)this);
  this->mute_enabled_ = false;
  this->_padding_ = (longlong)&_vftable__for__vraudio__Node__;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__SubscriberNode<vraudio::AudioBuffer_const*___ptr64>__;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__PublisherNode<vraudio::AudioBuffer_const*___ptr64>__;
  this->attenuation_type_ = *param_1;
  GainMixer::GainMixer(&this->gain_mixer_,param_3,param_2->frames_per_buffer_);
  this->system_settings_ = param_2;
  return this;
}

// `vector_deleting_destructor'`adjustor{24}' @ 14f0832fc

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::GainMixerNode::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::GainMixerNode::_vector_deleting_destructor__adjustor_24__(GainMixerNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((GainMixerNode *)&this[-1].gain_mixer_.source_gain_processors_.field_0x30,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 14f08330c

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::GainMixerNode::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::GainMixerNode::_vector_deleting_destructor__adjustor_32__(GainMixerNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((GainMixerNode *)&this[-1].gain_mixer_.source_gain_processors_.field_0x28,
                      param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14f083320

void * __thiscall
vraudio::GainMixerNode::_scalar_deleting_destructor_(GainMixerNode *this,uint param_1)

{
  GainMixer::~GainMixer(&this->gain_mixer_);
  ProcessingNode::~ProcessingNode((ProcessingNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// AudioProcess @ 14f083370

AudioBuffer * __thiscall
vraudio::GainMixerNode::AudioProcess(GainMixerNode *this,NodeInput *param_1)

{
  float fVar1;
  AudioBuffer **ppAVar2;
  vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_> *pvVar3;
  SourceParameters *pSVar4;
  AudioBuffer *pAVar5;
  longlong lVar6;
  float *pfVar7;
  ulong64 uVar8;
  AudioBuffer **ppAVar9;
  ulonglong uVar10;
  float *pfVar11;
  vector<float,std::allocator<float>_> local_68 [2];
  
  if (this->mute_enabled_ != false) {
    return (AudioBuffer *)0x0;
  }
  GainMixer::Reset(&this->gain_mixer_);
  pvVar3 = ProcessingNode::NodeInput::GetInputBuffers(param_1);
  ppAVar2 = (pvVar3->_Mypair)._Myval2._Mylast;
  ppAVar9 = (pvVar3->_Mypair)._Myval2._Myfirst;
  do {
    if (ppAVar9 == ppAVar2) {
      pAVar5 = GainMixer::GetOutput(&this->gain_mixer_);
      return pAVar5;
    }
    pAVar5 = *ppAVar9;
    pSVar4 = SourceParametersManager::GetParameters
                       (&this->system_settings_->source_parameters_manager_,pAVar5->source_id_);
    if (pSVar4 != (SourceParameters *)0x0) {
      local_68[0]._Mypair._Myval2._Myfirst = (float *)0x0;
      local_68[0]._Mypair._Myval2._Mylast = (float *)0x0;
      local_68[0]._Mypair._Myval2._Myend = (float *)0x0;
      fVar1 = pSVar4->attenuations[(int)this->attenuation_type_];
      lVar6 = (longlong)(pAVar5->channel_views_)._Mypair._Myval2._Mylast -
              (longlong)(pAVar5->channel_views_)._Mypair._Myval2._Myfirst;
      lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
      uVar10 = (lVar6 >> 2) - (lVar6 >> 0x3f);
      if (uVar10 != 0) {
        if (0x3fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
          std::vector<float,std::allocator<float>_>::_Xlength();
        }
        local_68[0]._Mypair._Myval2._Myfirst =
             std::_Allocate<16,std::_Default_allocate_traits>(uVar10 * 4);
        pfVar7 = local_68[0]._Mypair._Myval2._Myfirst + uVar10;
        pfVar11 = local_68[0]._Mypair._Myval2._Myfirst;
        local_68[0]._Mypair._Myval2._Myend = pfVar7;
        if (fVar1 == 0.0) {
          memset(local_68[0]._Mypair._Myval2._Myfirst,0,uVar10 * 4);
          local_68[0]._Mypair._Myval2._Mylast = pfVar7;
        }
        else {
          for (; local_68[0]._Mypair._Myval2._Mylast = pfVar7, uVar10 != 0; uVar10 = uVar10 - 1) {
            *pfVar11 = fVar1;
            pfVar11 = pfVar11 + 1;
          }
        }
      }
      GainMixer::AddInput(&this->gain_mixer_,pAVar5,local_68);
      if (local_68[0]._Mypair._Myval2._Myfirst != (float *)0x0) {
        uVar8 = (longlong)local_68[0]._Mypair._Myval2._Myend -
                (longlong)local_68[0]._Mypair._Myval2._Myfirst & 0xfffffffffffffffc;
        pfVar7 = local_68[0]._Mypair._Myval2._Myfirst;
        if (0xfff < uVar8) {
          pfVar7 = *(float **)(local_68[0]._Mypair._Myval2._Myfirst + -2);
          uVar8 = uVar8 + 0x27;
          if (0x1f < (ulonglong)
                     ((longlong)local_68[0]._Mypair._Myval2._Myfirst + (-8 - (longlong)pfVar7))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(pfVar7,uVar8);
      }
    }
    ppAVar9 = ppAVar9 + 1;
  } while( true );
}

// CleanUp @ 14f0835b0

bool __thiscall vraudio::GainMixerNode::CleanUp(GainMixerNode *this)

{
  ProcessingNode::CallCleanUpOnInputNodes((ProcessingNode *)this);
  return false;
}

// SetMute @ 14f0835d0

void __thiscall vraudio::GainMixerNode::SetMute(GainMixerNode *this,bool param_1)

{
  this->mute_enabled_ = param_1;
  return;
}

