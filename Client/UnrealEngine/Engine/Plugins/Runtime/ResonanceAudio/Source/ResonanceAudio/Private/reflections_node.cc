// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 7

// ReflectionsNode @ 14f08a5f0

ReflectionsNode * __thiscall
vraudio::ReflectionsNode::ReflectionsNode(ReflectionsNode *this,SystemSettings *param_1)

{
  ChannelView *pCVar1;
  ChannelView *pCVar2;
  
  ProcessingNode::ProcessingNode((ProcessingNode *)this);
  this->system_settings_ = param_1;
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
  ReflectionsProcessor::ReflectionsProcessor
            (&this->reflections_processor_,this->system_settings_->sample_rate_hz_,
             this->system_settings_->frames_per_buffer_);
  *(undefined8 *)((this->reflection_properties_).room_rotation + 3) = 0x3f800000;
  (this->reflection_properties_).room_position[0] = 0.0;
  (this->reflection_properties_).room_position[1] = 0.0;
  *(undefined8 *)((this->reflection_properties_).room_position + 2) = 0;
  (this->reflection_properties_).room_rotation[1] = 0.0;
  (this->reflection_properties_).room_rotation[2] = 0.0;
  (this->reflection_properties_).room_dimensions[1] = 0.0;
  (this->reflection_properties_).room_dimensions[2] = 0.0;
  (this->reflection_properties_).cutoff_frequency = 0.0;
  (this->reflection_properties_).coefficients[0] = 0.0;
  (this->reflection_properties_).coefficients[1] = 0.0;
  (this->reflection_properties_).coefficients[2] = 0.0;
  (this->reflection_properties_).coefficients[3] = 0.0;
  (this->reflection_properties_).coefficients[4] = 0.0;
  *(undefined8 *)((this->reflection_properties_).coefficients + 5) = 0;
  WorldPosition::WorldPosition(&this->listener_position_);
  this->num_frames_processed_on_empty_input_ = this->system_settings_->frames_per_buffer_;
  AudioBuffer::AudioBuffer(&this->output_buffer_,4,this->system_settings_->frames_per_buffer_);
  AudioBuffer::AudioBuffer(&this->silence_mono_buffer_,1,this->system_settings_->frames_per_buffer_)
  ;
  pCVar1 = (this->silence_mono_buffer_).channel_views_._Mypair._Myval2._Mylast;
  for (pCVar2 = (this->silence_mono_buffer_).channel_views_._Mypair._Myval2._Myfirst;
      pCVar2 != pCVar1; pCVar2 = pCVar2 + 1) {
    pCVar2->enabled_ = true;
    memset(pCVar2->begin_itr_,0,pCVar2->size_ << 2);
  }
  ProcessingNode::EnableProcessOnEmptyInput((ProcessingNode *)this,true);
  return this;
}

// ~ReflectionsProcessor @ 14f08a780

void __thiscall vraudio::ReflectionsProcessor::~ReflectionsProcessor(ReflectionsProcessor *this)

{
  GainProcessor GVar1;
  float *pfVar2;
  AudioBuffer *this_00;
  ulong64 *puVar3;
  Reflection RVar4;
  GainProcessor GVar5;
  float *pfVar6;
  ulong64 *puVar7;
  Reflection RVar8;
  ulong64 uVar9;
  
  GVar1 = (GainProcessor)(this->gain_processors_)._Mypair._Myval2._Myfirst;
  if (GVar1 != (GainProcessor)0x0) {
    uVar9 = (longlong)(this->gain_processors_)._Mypair._Myval2._Myend - (longlong)GVar1 &
            0xfffffffffffffff8;
    GVar5 = GVar1;
    if (0xfff < uVar9) {
      GVar5 = *(GainProcessor *)((longlong)GVar1 + -8);
      uVar9 = uVar9 + 0x27;
      if (0x1f < (ulonglong)((longlong)GVar1 + (-8 - (longlong)GVar5))) goto LAB_14f08a95a;
    }
    ::operator_delete((void *)GVar5,uVar9);
    (this->gain_processors_)._Mypair._Myval2._Myfirst = (GainProcessor *)0x0;
    (this->gain_processors_)._Mypair._Myval2._Mylast = (GainProcessor *)0x0;
    (this->gain_processors_)._Mypair._Myval2._Myend = (GainProcessor *)0x0;
  }
  pfVar2 = (this->gains_)._Mypair._Myval2._Myfirst;
  if (pfVar2 != (float *)0x0) {
    uVar9 = (longlong)(this->gains_)._Mypair._Myval2._Myend - (longlong)pfVar2 & 0xfffffffffffffffc;
    pfVar6 = pfVar2;
    if (0xfff < uVar9) {
      pfVar6 = *(float **)(pfVar2 + -2);
      uVar9 = uVar9 + 0x27;
      if (0x1f < (ulonglong)((longlong)pfVar2 + (-8 - (longlong)pfVar6))) goto LAB_14f08a95a;
    }
    ::operator_delete(pfVar6,uVar9);
    (this->gains_)._Mypair._Myval2._Myfirst = (float *)0x0;
    (this->gains_)._Mypair._Myval2._Mylast = (float *)0x0;
    (this->gains_)._Mypair._Myval2._Myend = (float *)0x0;
  }
  AudioBuffer::~AudioBuffer(&this->delay_buffer_);
  this_00 = (this->delay_filter_).delay_line_._Mypair._Myval2;
  if (this_00 != (AudioBuffer *)0x0) {
    AudioBuffer::~AudioBuffer(this_00);
    ::operator_delete(this_00,0x48);
  }
  puVar3 = (this->delays_)._Mypair._Myval2._Myfirst;
  if (puVar3 != (ulong64 *)0x0) {
    uVar9 = (longlong)(this->delays_)._Mypair._Myval2._Myend - (longlong)puVar3 & 0xfffffffffffffff8
    ;
    puVar7 = puVar3;
    if (0xfff < uVar9) {
      puVar7 = (ulong64 *)puVar3[-1];
      uVar9 = uVar9 + 0x27;
      if (0x1f < (ulonglong)((longlong)puVar3 + (-8 - (longlong)puVar7))) goto LAB_14f08a95a;
    }
    ::operator_delete(puVar7,uVar9);
    (this->delays_)._Mypair._Myval2._Myfirst = (ulong64 *)0x0;
    (this->delays_)._Mypair._Myval2._Mylast = (ulong64 *)0x0;
    (this->delays_)._Mypair._Myval2._Myend = (ulong64 *)0x0;
  }
  AudioBuffer::~AudioBuffer(&(this->crossfader_).crossfade_buffer_);
  RVar4 = (Reflection)(this->target_reflections_)._Mypair._Myval2._Myfirst;
  if (RVar4 != (Reflection)0x0) {
    uVar9 = (longlong)(this->target_reflections_)._Mypair._Myval2._Myend - (longlong)RVar4 &
            0xfffffffffffffff8;
    RVar8 = RVar4;
    if (0xfff < uVar9) {
      RVar8 = *(Reflection *)((longlong)RVar4 + -8);
      uVar9 = uVar9 + 0x27;
      if (0x1f < (ulonglong)((longlong)RVar4 + (-8 - (longlong)RVar8))) {
LAB_14f08a95a:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)RVar8,uVar9);
    (this->target_reflections_)._Mypair._Myval2._Myfirst = (Reflection *)0x0;
    (this->target_reflections_)._Mypair._Myval2._Mylast = (Reflection *)0x0;
    (this->target_reflections_)._Mypair._Myval2._Myend = (Reflection *)0x0;
  }
  AudioBuffer::~AudioBuffer(&this->target_reflection_buffer_);
  AudioBuffer::~AudioBuffer(&this->current_reflection_buffer_);
  AudioBuffer::~AudioBuffer(&this->temp_mono_buffer_);
  return;
}

// `vector_deleting_destructor'`adjustor{24}' @ 14f08a978

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::ReflectionsNode::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::ReflectionsNode::_vector_deleting_destructor__adjustor_24__
          (ReflectionsNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ReflectionsNode *)
                      &this[-1].silence_mono_buffer_.channel_views_._Mypair._Myval2._Mylast,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 14f08a988

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::ReflectionsNode::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::ReflectionsNode::_vector_deleting_destructor__adjustor_32__
          (ReflectionsNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ReflectionsNode *)&this[-1].silence_mono_buffer_.channel_views_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14f08a9a0

void * __thiscall
vraudio::ReflectionsNode::_scalar_deleting_destructor_(ReflectionsNode *this,uint param_1)

{
  AudioBuffer::~AudioBuffer(&this->silence_mono_buffer_);
  AudioBuffer::~AudioBuffer(&this->output_buffer_);
  ReflectionsProcessor::~ReflectionsProcessor(&this->reflections_processor_);
  ProcessingNode::~ProcessingNode((ProcessingNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// AudioProcess @ 14f08aa10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

AudioBuffer * __thiscall
vraudio::ReflectionsNode::AudioProcess(ReflectionsNode *this,NodeInput *param_1)

{
  AudioBuffer *pAVar1;
  ChannelView *pCVar2;
  SystemSettings *pSVar3;
  AudioBuffer *pAVar4;
  ulong64 uVar5;
  ChannelView *pCVar6;
  undefined1 auStack_78 [44];
  undefined4 uStack_4c;
  WorldRotation local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_78;
  pAVar4 = ProcessingNode::NodeInput::GetSingleInput(param_1);
  if (pAVar4 == (AudioBuffer *)0x0) {
    if ((this->reflections_processor_).num_frames_to_process_on_empty_input_ <=
        this->num_frames_processed_on_empty_input_) {
      return (AudioBuffer *)0x0;
    }
    pAVar4 = &this->silence_mono_buffer_;
    uVar5 = this->system_settings_->frames_per_buffer_ + this->num_frames_processed_on_empty_input_;
  }
  else {
    uVar5 = 0;
  }
  pAVar1 = &this->output_buffer_;
  this->num_frames_processed_on_empty_input_ = uVar5;
  pCVar2 = (this->output_buffer_).channel_views_._Mypair._Myval2._Mylast;
  for (pCVar6 = (this->output_buffer_).channel_views_._Mypair._Myval2._Myfirst; pCVar6 != pCVar2;
      pCVar6 = pCVar6 + 1) {
    pCVar6->enabled_ = true;
    memset(pCVar6->begin_itr_,0,pCVar6->size_ << 2);
  }
  ReflectionsProcessor::Process(&this->reflections_processor_,pAVar4,pAVar1);
  uStack_4c = 0;
  pSVar3 = this->system_settings_;
  local_48._12_4_ = *(undefined4 *)&(pSVar3->head_rotation_).field_0xc;
  local_48._8_4_ = *(uint *)&(pSVar3->head_rotation_).field_0x8 ^ 0x80000000;
  local_48._0_4_ = *(uint *)&pSVar3->head_rotation_ ^ 0x80000000;
  local_48._4_4_ = *(uint *)&(pSVar3->head_rotation_).field_0x4 ^ 0x80000000;
  FoaRotator::Process(&this->foa_rotator_,&local_48,pAVar1,pAVar1);
  return pAVar1;
}

// Update @ 14f08ab60

void __thiscall vraudio::ReflectionsNode::Update(ReflectionsNode *this)

{
  ReflectionProperties *pRVar1;
  WorldPosition *pWVar2;
  SystemSettings *pSVar3;
  bool bVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  ReflectionProperties *pRVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  ReflectionProperties *pRVar17;
  
  pSVar3 = this->system_settings_;
  pfVar10 = (this->reflection_properties_).room_rotation;
  bVar4 = true;
  pfVar16 = (pSVar3->reflection_properties_).room_rotation;
  pRVar13 = &pSVar3->reflection_properties_;
  pRVar1 = &this->reflection_properties_;
  for (pRVar17 = pRVar1; pRVar17 != (ReflectionProperties *)pfVar10;
      pRVar17 = (ReflectionProperties *)(pRVar17->room_position + 1)) {
    if ((pRVar13 == (ReflectionProperties *)pfVar16) ||
       (pRVar13->room_position[0] != pRVar17->room_position[0])) goto LAB_14f08abc6;
    pRVar13 = (ReflectionProperties *)(pRVar13->room_position + 1);
  }
  if (pRVar13 == (ReflectionProperties *)pfVar16) {
    bVar6 = false;
  }
  else {
LAB_14f08abc6:
    bVar6 = true;
  }
  pfVar15 = (this->reflection_properties_).room_dimensions;
  pfVar14 = (pSVar3->reflection_properties_).room_dimensions;
  for (; pfVar10 != pfVar15; pfVar10 = pfVar10 + 1) {
    if ((pfVar16 == pfVar14) || (*pfVar16 != *pfVar10)) goto LAB_14f08ac06;
    pfVar16 = pfVar16 + 1;
  }
  if (pfVar16 == pfVar14) {
    bVar7 = false;
  }
  else {
LAB_14f08ac06:
    bVar7 = true;
  }
  pfVar10 = &(pSVar3->reflection_properties_).cutoff_frequency;
  for (; pfVar15 != &(this->reflection_properties_).cutoff_frequency; pfVar15 = pfVar15 + 1) {
    if ((pfVar14 == pfVar10) || (*pfVar14 != *pfVar15)) goto LAB_14f08ac3b;
    pfVar14 = pfVar14 + 1;
  }
  if (pfVar14 == pfVar10) {
    bVar8 = false;
  }
  else {
LAB_14f08ac3b:
    bVar8 = true;
  }
  pfVar14 = (pSVar3->reflection_properties_).coefficients;
  pfVar10 = &(pSVar3->reflection_properties_).gain;
  for (pfVar16 = (this->reflection_properties_).coefficients;
      pfVar16 != &(this->reflection_properties_).gain; pfVar16 = pfVar16 + 1) {
    if ((pfVar14 == pfVar10) || (*pfVar14 != *pfVar16)) goto LAB_14f08ac97;
    pfVar14 = pfVar14 + 1;
  }
  if (pfVar14 == pfVar10) {
    bVar4 = false;
  }
LAB_14f08ac97:
  pWVar2 = &this->listener_position_;
  if (((__real_358637bd <
        (float)((uint)(*(float *)pWVar2 - *(float *)&pSVar3->head_position_) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
      (__real_358637bd <
       (float)((uint)(*(float *)&(this->listener_position_).field_0x4 -
                     *(float *)&(pSVar3->head_position_).field_0x4) &
              __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
     (__real_358637bd <
      (float)((uint)(*(float *)&(this->listener_position_).field_0x8 -
                    *(float *)&(pSVar3->head_position_).field_0x8) &
             __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  if ((((bVar6) || (bVar7)) ||
      ((bVar8 || (((pSVar3->reflection_properties_).cutoff_frequency !=
                   (this->reflection_properties_).cutoff_frequency || (bVar4)))))) || (bVar9)) {
    uVar5 = *(undefined8 *)((pSVar3->reflection_properties_).room_position + 2);
    *(undefined8 *)pRVar1->room_position =
         *(undefined8 *)(pSVar3->reflection_properties_).room_position;
    *(undefined8 *)((this->reflection_properties_).room_position + 2) = uVar5;
    uVar5 = *(undefined8 *)((pSVar3->reflection_properties_).room_rotation + 3);
    *(undefined8 *)((this->reflection_properties_).room_rotation + 1) =
         *(undefined8 *)((pSVar3->reflection_properties_).room_rotation + 1);
    *(undefined8 *)((this->reflection_properties_).room_rotation + 3) = uVar5;
    fVar11 = (pSVar3->reflection_properties_).cutoff_frequency;
    fVar12 = (pSVar3->reflection_properties_).coefficients[0];
    *(undefined8 *)((this->reflection_properties_).room_dimensions + 1) =
         *(undefined8 *)((pSVar3->reflection_properties_).room_dimensions + 1);
    (this->reflection_properties_).cutoff_frequency = fVar11;
    (this->reflection_properties_).coefficients[0] = fVar12;
    uVar5 = *(undefined8 *)((pSVar3->reflection_properties_).coefficients + 3);
    *(undefined8 *)((this->reflection_properties_).coefficients + 1) =
         *(undefined8 *)((pSVar3->reflection_properties_).coefficients + 1);
    *(undefined8 *)((this->reflection_properties_).coefficients + 3) = uVar5;
    *(undefined8 *)((this->reflection_properties_).coefficients + 5) =
         *(undefined8 *)((pSVar3->reflection_properties_).coefficients + 5);
    *(undefined4 *)pWVar2 = *(undefined4 *)&pSVar3->head_position_;
    *(undefined4 *)&(this->listener_position_).field_0x4 =
         *(undefined4 *)&(pSVar3->head_position_).field_0x4;
    *(undefined4 *)&(this->listener_position_).field_0x8 =
         *(undefined4 *)&(pSVar3->head_position_).field_0x8;
    ReflectionsProcessor::Update(&this->reflections_processor_,pRVar1,pWVar2);
  }
  return;
}

