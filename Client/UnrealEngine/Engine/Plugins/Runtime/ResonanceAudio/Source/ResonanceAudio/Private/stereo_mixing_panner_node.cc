// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 6

// StereoMixingPannerNode @ 14f091bc0

StereoMixingPannerNode * __thiscall
vraudio::StereoMixingPannerNode::StereoMixingPannerNode
          (StereoMixingPannerNode *this,SystemSettings *param_1)

{
  float *pfVar1;
  
  ProcessingNode::ProcessingNode((ProcessingNode *)this);
  this->system_settings_ = param_1;
  this->_padding_ = (longlong)&_vftable__for__vraudio__Node__;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__SubscriberNode<vraudio::AudioBuffer_const*___ptr64>__;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__PublisherNode<vraudio::AudioBuffer_const*___ptr64>__;
  GainMixer::GainMixer(&this->gain_mixer_,2,param_1->frames_per_buffer_);
  (this->coefficients_)._Mypair._Myval2._Myfirst = (float *)0x0;
  (this->coefficients_)._Mypair._Myval2._Mylast = (float *)0x0;
  (this->coefficients_)._Mypair._Myval2._Myend = (float *)0x0;
  pfVar1 = ::operator_new(8);
  (this->coefficients_)._Mypair._Myval2._Myfirst = pfVar1;
  (this->coefficients_)._Mypair._Myval2._Myend = pfVar1 + 2;
  pfVar1 = (this->coefficients_)._Mypair._Myval2._Myfirst;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  (this->coefficients_)._Mypair._Myval2._Mylast = pfVar1 + 2;
  return this;
}

// `vector_deleting_destructor'`adjustor{24}' @ 14f091c70

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::StereoMixingPannerNode::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::StereoMixingPannerNode::_vector_deleting_destructor__adjustor_24__
          (StereoMixingPannerNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((StereoMixingPannerNode *)&this[-1].coefficients_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 14f091c80

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::StereoMixingPannerNode::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::StereoMixingPannerNode::_vector_deleting_destructor__adjustor_32__
          (StereoMixingPannerNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((StereoMixingPannerNode *)
                      &this[-1].gain_mixer_.source_gain_processors_.field_0x38,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14f091c90

void * __thiscall
vraudio::StereoMixingPannerNode::_scalar_deleting_destructor_
          (StereoMixingPannerNode *this,uint param_1)

{
  std::vector<float,std::allocator<float>_>::_Tidy(&this->coefficients_);
  GainMixer::~GainMixer(&this->gain_mixer_);
  ProcessingNode::~ProcessingNode((ProcessingNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// AudioProcess @ 14f091cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

AudioBuffer * __thiscall
vraudio::StereoMixingPannerNode::AudioProcess(StereoMixingPannerNode *this,NodeInput *param_1)

{
  int iVar1;
  SystemSettings *pSVar2;
  AudioBuffer **ppAVar3;
  float fVar4;
  vector<vraudio::AudioBuffer_const_*,std::allocator<vraudio::AudioBuffer_const_*>_> *pvVar5;
  SourceParameters *pSVar6;
  ChannelView *pCVar7;
  AudioBuffer *pAVar8;
  AudioBuffer **ppAVar9;
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
  WorldPosition local_108;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 local_f0 [40];
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_128;
  pSVar2 = this->system_settings_;
  GainMixer::Reset(&this->gain_mixer_);
  pvVar5 = ProcessingNode::NodeInput::GetInputBuffers(param_1);
  ppAVar3 = (pvVar5->_Mypair)._Myval2._Mylast;
  ppAVar9 = (pvVar5->_Mypair)._Myval2._Myfirst;
  if (ppAVar9 != ppAVar3) {
    local_108._8_4_ = 0x80000000;
    uStack_fc = 0x80000000;
    uStack_f8 = 0x80000000;
    uStack_f4 = 0;
    do {
      iVar1 = (*ppAVar9)->source_id_;
      pSVar6 = SourceParametersManager::GetParameters
                         (&this->system_settings_->source_parameters_manager_,iVar1);
      WorldPosition::WorldPosition((WorldPosition *)local_f0);
      fVar10 = *(float *)&(pSVar6->object_transform).position - *(float *)&pSVar2->head_position_;
      fVar13 = *(float *)&(pSVar6->object_transform).position.field_0x4 -
               *(float *)&(pSVar2->head_position_).field_0x4;
      fVar15 = *(float *)&(pSVar6->object_transform).position.field_0x8 -
               *(float *)&(pSVar2->head_position_).field_0x8;
      fVar4 = *(float *)&(pSVar2->head_rotation_).field_0xc;
      fVar16 = -*(float *)&pSVar2->head_rotation_;
      fVar17 = -*(float *)&(pSVar2->head_rotation_).field_0x4;
      fVar18 = -*(float *)&(pSVar2->head_rotation_).field_0x8;
      fVar14 = fVar13 * fVar16 - fVar10 * fVar17;
      fVar14 = fVar14 + fVar14;
      fVar11 = fVar15 * fVar17 - fVar13 * fVar18;
      fVar12 = fVar10 * fVar18 - fVar15 * fVar16;
      fVar11 = fVar11 + fVar11;
      fVar12 = fVar12 + fVar12;
      local_f0._8_4_ = (fVar12 * fVar16 - fVar11 * fVar17) + fVar14 * fVar4 + fVar15;
      local_f0._4_4_ = (fVar11 * fVar18 - fVar14 * fVar16) + fVar12 * fVar4 + fVar13;
      local_f0._0_4_ = (fVar14 * fVar17 - fVar12 * fVar18) + fVar11 * fVar4 + fVar10;
      SphericalAngle::FromWorldPosition(&local_108);
      CalculateStereoPanGains((SphericalAngle *)&local_108,&this->coefficients_);
      pCVar7 = AudioBuffer::operator[](*ppAVar9,0);
      GainMixer::AddInputChannel(&this->gain_mixer_,pCVar7,iVar1,&this->coefficients_);
      ppAVar9 = ppAVar9 + 1;
    } while (ppAVar9 != ppAVar3);
  }
  pAVar8 = GainMixer::GetOutput(&this->gain_mixer_);
  return pAVar8;
}

// CleanUp @ 14f091fd0

bool __thiscall vraudio::StereoMixingPannerNode::CleanUp(StereoMixingPannerNode *this)

{
  ProcessingNode::CallCleanUpOnInputNodes((ProcessingNode *)this);
  return false;
}

