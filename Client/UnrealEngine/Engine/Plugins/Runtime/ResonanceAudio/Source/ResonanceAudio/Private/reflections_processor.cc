// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 10

// _Zero_range<unsigned___int64_*> @ 14f0779f0

ulong64 * __cdecl std::_Zero_range<unsigned___int64_*>(ulong64 *param_1,ulong64 *param_2)

{
  memset(param_1,0,(longlong)param_2 - (longlong)param_1);
  return param_2;
}

// _set_noalias<Eigen::Map<Eigen::Matrix<float,3,1,2,3,1>_const_,0,Eigen::Stride<0,0>_>_> @ 14f077a20

Matrix<float,3,1,2,3,1> * __thiscall
Eigen::PlainObjectBase<Eigen::Matrix<float,3,1,2,3,1>_>::
_set_noalias<Eigen::Map<Eigen::Matrix<float,3,1,2,3,1>_const_,0,Eigen::Stride<0,0>_>_>
          (PlainObjectBase<Eigen::Matrix<float,3,1,2,3,1>_> *this,
          DenseBase<Eigen::Map<Eigen::Matrix<float,3,1,2,3,1>_const_,0,Eigen::Stride<0,0>_>_>
          *param_1)

{
  float *pfVar1;
  
  pfVar1 = *(float **)param_1;
  (this->m_storage).m_data.array[0] = *pfVar1;
  (this->m_storage).m_data.array[1] = pfVar1[1];
  (this->m_storage).m_data.array[2] = pfVar1[2];
  return (Matrix<float,3,1,2,3,1> *)this;
}

// generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,3,1,2,3,1>_>,Eigen::internal::evaluator<Eigen::Matrix<float,3,1,0,3,1>_>,Eigen::internal::assign_op<float,float>,0> @ 14f077a40

generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,3,1,2,3,1>_>,Eigen::internal::evaluator<Eigen::Matrix<float,3,1,0,3,1>_>,Eigen::internal::assign_op<float,float>,0>
* __thiscall
Eigen::internal::
generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,3,1,2,3,1>_>,Eigen::internal::evaluator<Eigen::Matrix<float,3,1,0,3,1>_>,Eigen::internal::assign_op<float,float>,0>
::
generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,3,1,2,3,1>_>,Eigen::internal::evaluator<Eigen::Matrix<float,3,1,0,3,1>_>,Eigen::internal::assign_op<float,float>,0>
          (generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,3,1,2,3,1>_>,Eigen::internal::evaluator<Eigen::Matrix<float,3,1,0,3,1>_>,Eigen::internal::assign_op<float,float>,0>
           *this,evaluator<Eigen::Matrix<float,3,1,2,3,1>_> *param_1,
          evaluator<Eigen::Matrix<float,3,1,0,3,1>_> *param_2,assign_op<float,float> *param_3,
          Matrix<float,3,1,2,3,1> *param_4)

{
  this->m_dstExpr = param_4;
  this->m_dst = param_1;
  this->m_src = param_2;
  this->m_functor = param_3;
  return this;
}

// ReflectionsProcessor @ 14f077a60

ReflectionsProcessor * __thiscall
vraudio::ReflectionsProcessor::ReflectionsProcessor
          (ReflectionsProcessor *this,int param_1,ulong64 param_2)

{
  Reflection *pRVar1;
  ulong64 *puVar2;
  float *pfVar3;
  GainProcessor *pGVar4;
  longlong lVar5;
  
  this->sample_rate_ = param_1;
  this->max_delay_samples_ = (longlong)param_1 * 2;
  this->frames_per_buffer_ = param_2;
  MonoPoleFilter::MonoPoleFilter(&this->low_pass_filter_,0.0);
  AudioBuffer::AudioBuffer(&this->temp_mono_buffer_,1,this->frames_per_buffer_);
  AudioBuffer::AudioBuffer(&this->current_reflection_buffer_,4,param_2);
  AudioBuffer::AudioBuffer(&this->target_reflection_buffer_,4,param_2);
  (this->target_reflections_)._Mypair._Myval2._Myfirst = (Reflection *)0x0;
  (this->target_reflections_)._Mypair._Myval2._Mylast = (Reflection *)0x0;
  (this->target_reflections_)._Mypair._Myval2._Myend = (Reflection *)0x0;
  pRVar1 = ::operator_new(0x30);
  (this->target_reflections_)._Mypair._Myval2._Myfirst = pRVar1;
  (this->target_reflections_)._Mypair._Myval2._Myend = pRVar1 + 6;
  pRVar1 = (this->target_reflections_)._Mypair._Myval2._Myfirst;
  pRVar1->delay_time_seconds = 0.0;
  pRVar1->magnitude = 0.0;
  pRVar1[1].delay_time_seconds = 0.0;
  pRVar1[1].magnitude = 0.0;
  pRVar1[2].delay_time_seconds = 0.0;
  pRVar1[2].magnitude = 0.0;
  pRVar1[3].delay_time_seconds = 0.0;
  pRVar1[3].magnitude = 0.0;
  pRVar1[4].delay_time_seconds = 0.0;
  pRVar1[4].magnitude = 0.0;
  pRVar1[5].delay_time_seconds = 0.0;
  pRVar1[5].magnitude = 0.0;
  (this->target_reflections_)._Mypair._Myval2._Mylast = pRVar1 + 6;
  this->crossfade_ = false;
  BufferCrossfader::BufferCrossfader(&this->crossfader_,this->frames_per_buffer_);
  this->num_frames_to_process_on_empty_input_ = 0;
  (this->delays_)._Mypair._Myval2._Myfirst = (ulong64 *)0x0;
  (this->delays_)._Mypair._Myval2._Mylast = (ulong64 *)0x0;
  (this->delays_)._Mypair._Myval2._Myend = (ulong64 *)0x0;
  puVar2 = ::operator_new(0x30);
  (this->delays_)._Mypair._Myval2._Myfirst = puVar2;
  (this->delays_)._Mypair._Myval2._Myend = puVar2 + 6;
  puVar2 = (this->delays_)._Mypair._Myval2._Myfirst;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  (this->delays_)._Mypair._Myval2._Mylast = puVar2 + 6;
  DelayFilter::DelayFilter(&this->delay_filter_,this->max_delay_samples_,param_2);
  lVar5 = 6;
  AudioBuffer::AudioBuffer(&this->delay_buffer_,6,param_2);
  (this->gains_)._Mypair._Myval2._Myfirst = (float *)0x0;
  (this->gains_)._Mypair._Myval2._Mylast = (float *)0x0;
  (this->gains_)._Mypair._Myval2._Myend = (float *)0x0;
  pfVar3 = ::operator_new(0x18);
  (this->gains_)._Mypair._Myval2._Myfirst = pfVar3;
  (this->gains_)._Mypair._Myval2._Myend = pfVar3 + 6;
  pfVar3 = (this->gains_)._Mypair._Myval2._Myfirst;
  pfVar3[0] = 0.0;
  pfVar3[1] = 0.0;
  pfVar3[2] = 0.0;
  pfVar3[3] = 0.0;
  pfVar3[4] = 0.0;
  pfVar3[5] = 0.0;
  (this->gains_)._Mypair._Myval2._Mylast = pfVar3 + 6;
  (this->gain_processors_)._Mypair._Myval2._Myfirst = (GainProcessor *)0x0;
  (this->gain_processors_)._Mypair._Myval2._Mylast = (GainProcessor *)0x0;
  (this->gain_processors_)._Mypair._Myval2._Myend = (GainProcessor *)0x0;
  pGVar4 = ::operator_new(0x30);
  (this->gain_processors_)._Mypair._Myval2._Myfirst = pGVar4;
  (this->gain_processors_)._Mypair._Myval2._Mylast = pGVar4;
  (this->gain_processors_)._Mypair._Myval2._Myend = pGVar4 + 6;
  pGVar4 = (this->gain_processors_)._Mypair._Myval2._Myfirst;
  do {
    GainProcessor::GainProcessor(pGVar4);
    pGVar4 = pGVar4 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  (this->gain_processors_)._Mypair._Myval2._Mylast = pGVar4;
  return this;
}

// ApplyReflections @ 14f077c90

void __thiscall
vraudio::ReflectionsProcessor::ApplyReflections(ReflectionsProcessor *this,AudioBuffer *param_1)

{
  ChannelView *pCVar1;
  bool bVar2;
  ChannelView *pCVar3;
  ulonglong uVar4;
  float fVar5;
  
  pCVar1 = (param_1->channel_views_)._Mypair._Myval2._Mylast;
  for (pCVar3 = (param_1->channel_views_)._Mypair._Myval2._Myfirst; pCVar3 != pCVar1;
      pCVar3 = pCVar3 + 1) {
    pCVar3->enabled_ = true;
    memset(pCVar3->begin_itr_,0,pCVar3->size_ << 2);
  }
  uVar4 = 0;
  do {
    while( true ) {
      pCVar1 = (this->delay_buffer_).channel_views_._Mypair._Myval2._Myfirst + uVar4;
      DelayFilter::GetDelayedData
                (&this->delay_filter_,(this->delays_)._Mypair._Myval2._Myfirst[uVar4],pCVar1);
      bVar2 = IsGainNearZero((this->gains_)._Mypair._Myval2._Myfirst[uVar4]);
      if (bVar2) break;
LAB_14f077d68:
      GainProcessor::ApplyGain
                ((this->gain_processors_)._Mypair._Myval2._Myfirst + uVar4,
                 (this->gains_)._Mypair._Myval2._Myfirst[uVar4],pCVar1,pCVar1,false);
      ChannelView::operator+=((param_1->channel_views_)._Mypair._Myval2._Myfirst,pCVar1);
      switch(switchD_1501dbc7b::caseD_1.e_magic + (&switchD_14f077da7::switchdataD_14f077e4c)[uVar4]
            ) {
      case (char *)0x14f077da9:
        ChannelView::operator+=((param_1->channel_views_)._Mypair._Myval2._Myfirst + 1,pCVar1);
        uVar4 = uVar4 + 1;
        break;
      case (char *)0x14f077dc1:
        ChannelView::operator-=((param_1->channel_views_)._Mypair._Myval2._Myfirst + 1,pCVar1);
        uVar4 = uVar4 + 1;
        break;
      case (char *)0x14f077dd9:
        ChannelView::operator-=((param_1->channel_views_)._Mypair._Myval2._Myfirst + 2,pCVar1);
        uVar4 = uVar4 + 1;
        break;
      case (char *)0x14f077df1:
        ChannelView::operator+=((param_1->channel_views_)._Mypair._Myval2._Myfirst + 2,pCVar1);
        uVar4 = uVar4 + 1;
        break;
      case (char *)0x14f077e09:
        ChannelView::operator+=((param_1->channel_views_)._Mypair._Myval2._Myfirst + 3,pCVar1);
        uVar4 = uVar4 + 1;
        break;
      case (char *)0x14f077e21:
        ChannelView::operator-=((param_1->channel_views_)._Mypair._Myval2._Myfirst + 3,pCVar1);
        return;
      }
    }
    fVar5 = GainProcessor::GetGain((this->gain_processors_)._Mypair._Myval2._Myfirst + uVar4);
    bVar2 = IsGainNearZero(fVar5);
    if (!bVar2) goto LAB_14f077d68;
    GainProcessor::Reset((this->gain_processors_)._Mypair._Myval2._Myfirst + uVar4,0.0);
    uVar4 = uVar4 + 1;
    if (5 < uVar4) {
      return;
    }
  } while( true );
}

// FindMaxReflectionDelayTime @ 14f077e70

float __cdecl
vraudio::`anonymous_namespace'::FindMaxReflectionDelayTime
          (vector<vraudio::Reflection,std::allocator<vraudio::Reflection>_> *param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  Reflection *pRVar4;
  
  pRVar4 = (param_1->_Mypair)._Myval2._Myfirst;
  fVar3 = 0.0;
  while (fVar1 = fVar3, pRVar4 != (param_1->_Mypair)._Myval2._Mylast) {
    pfVar2 = &pRVar4->delay_time_seconds;
    pRVar4 = pRVar4 + 1;
    fVar3 = *pfVar2;
    if (*pfVar2 <= fVar1) {
      fVar3 = fVar1;
    }
  }
  return fVar1;
}

// Process @ 14f077ea0

void __thiscall
vraudio::ReflectionsProcessor::Process
          (ReflectionsProcessor *this,AudioBuffer *param_1,AudioBuffer *param_2)

{
  ChannelView *pCVar1;
  Reflection *pRVar2;
  float fVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  ChannelView *pCVar7;
  float fVar8;
  
  pCVar1 = (this->temp_mono_buffer_).channel_views_._Mypair._Myval2._Myfirst;
  pCVar7 = (param_1->channel_views_)._Mypair._Myval2._Myfirst;
  bVar4 = MonoPoleFilter::Filter(&this->low_pass_filter_,pCVar7,pCVar1);
  if (bVar4) {
    pCVar7 = pCVar1;
  }
  DelayFilter::InsertData(&this->delay_filter_,pCVar7);
  if (this->crossfade_ == false) {
    ApplyReflections(this,param_2);
  }
  else {
    ApplyReflections(this,&this->current_reflection_buffer_);
    fVar3 = __real_5f000000;
    lVar5 = 0;
    fVar8 = (float)this->sample_rate_ *
            ((this->target_reflections_)._Mypair._Myval2._Myfirst)->delay_time_seconds;
    if ((__real_5f000000 <= fVar8) && (fVar8 = fVar8 - __real_5f000000, fVar8 < __real_5f000000)) {
      lVar5 = -0x8000000000000000;
    }
    uVar6 = this->max_delay_samples_;
    if ((ulonglong)((longlong)fVar8 + lVar5) < this->max_delay_samples_) {
      uVar6 = (longlong)fVar8 + lVar5;
    }
    *(this->delays_)._Mypair._Myval2._Myfirst = uVar6;
    pRVar2 = (this->target_reflections_)._Mypair._Myval2._Myfirst;
    *(this->gains_)._Mypair._Myval2._Myfirst = pRVar2->magnitude;
    lVar5 = 0;
    fVar8 = (float)this->sample_rate_ * pRVar2[1].delay_time_seconds;
    if ((fVar3 <= fVar8) && (fVar8 = fVar8 - fVar3, fVar8 < fVar3)) {
      lVar5 = -0x8000000000000000;
    }
    uVar6 = this->max_delay_samples_;
    if ((ulonglong)((longlong)fVar8 + lVar5) < this->max_delay_samples_) {
      uVar6 = (longlong)fVar8 + lVar5;
    }
    (this->delays_)._Mypair._Myval2._Myfirst[1] = uVar6;
    pRVar2 = (this->target_reflections_)._Mypair._Myval2._Myfirst;
    (this->gains_)._Mypair._Myval2._Myfirst[1] = pRVar2[1].magnitude;
    lVar5 = 0;
    fVar8 = (float)this->sample_rate_ * pRVar2[2].delay_time_seconds;
    if ((fVar3 <= fVar8) && (fVar8 = fVar8 - fVar3, fVar8 < fVar3)) {
      lVar5 = -0x8000000000000000;
    }
    uVar6 = this->max_delay_samples_;
    if ((ulonglong)((longlong)fVar8 + lVar5) < this->max_delay_samples_) {
      uVar6 = (longlong)fVar8 + lVar5;
    }
    (this->delays_)._Mypair._Myval2._Myfirst[2] = uVar6;
    pRVar2 = (this->target_reflections_)._Mypair._Myval2._Myfirst;
    (this->gains_)._Mypair._Myval2._Myfirst[2] = pRVar2[2].magnitude;
    lVar5 = 0;
    fVar8 = (float)this->sample_rate_ * pRVar2[3].delay_time_seconds;
    if ((fVar3 <= fVar8) && (fVar8 = fVar8 - fVar3, fVar8 < fVar3)) {
      lVar5 = -0x8000000000000000;
    }
    uVar6 = this->max_delay_samples_;
    if ((ulonglong)((longlong)fVar8 + lVar5) < this->max_delay_samples_) {
      uVar6 = (longlong)fVar8 + lVar5;
    }
    (this->delays_)._Mypair._Myval2._Myfirst[3] = uVar6;
    pRVar2 = (this->target_reflections_)._Mypair._Myval2._Myfirst;
    (this->gains_)._Mypair._Myval2._Myfirst[3] = pRVar2[3].magnitude;
    lVar5 = 0;
    fVar8 = (float)this->sample_rate_ * pRVar2[4].delay_time_seconds;
    if ((fVar3 <= fVar8) && (fVar8 = fVar8 - fVar3, fVar8 < fVar3)) {
      lVar5 = -0x8000000000000000;
    }
    uVar6 = this->max_delay_samples_;
    if ((ulonglong)((longlong)fVar8 + lVar5) < this->max_delay_samples_) {
      uVar6 = (longlong)fVar8 + lVar5;
    }
    (this->delays_)._Mypair._Myval2._Myfirst[4] = uVar6;
    pRVar2 = (this->target_reflections_)._Mypair._Myval2._Myfirst;
    (this->gains_)._Mypair._Myval2._Myfirst[4] = pRVar2[4].magnitude;
    lVar5 = 0;
    fVar8 = (float)this->sample_rate_ * pRVar2[5].delay_time_seconds;
    if ((fVar3 <= fVar8) && (fVar8 = fVar8 - fVar3, fVar8 < fVar3)) {
      lVar5 = -0x8000000000000000;
    }
    uVar6 = this->max_delay_samples_;
    if ((ulonglong)((longlong)fVar8 + lVar5) < this->max_delay_samples_) {
      uVar6 = (longlong)fVar8 + lVar5;
    }
    (this->delays_)._Mypair._Myval2._Myfirst[5] = uVar6;
    (this->gains_)._Mypair._Myval2._Myfirst[5] =
         (this->target_reflections_)._Mypair._Myval2._Myfirst[5].magnitude;
    ApplyReflections(this,&this->target_reflection_buffer_);
    BufferCrossfader::ApplyLinearCrossfade
              (&this->crossfader_,&this->target_reflection_buffer_,&this->current_reflection_buffer_
               ,param_2);
    this->crossfade_ = false;
  }
  return;
}

// Update @ 14f078150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
vraudio::ReflectionsProcessor::Update
          (ReflectionsProcessor *this,ReflectionProperties *param_1,WorldPosition *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStackY_148 [32];
  assign_op<float,float> local_118 [8];
  evaluator<Eigen::Matrix<float,3,1,0,3,1>_> local_110;
  evaluator<Eigen::Matrix<float,3,1,2,3,1>_> local_108;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,3,1,2,3,1>_>,Eigen::internal::evaluator<Eigen::Matrix<float,3,1,0,3,1>_>,Eigen::internal::assign_op<float,float>,0>
  local_100;
  PlainObjectBase<Eigen::Matrix<float,3,1,2,3,1>_> local_e0;
  undefined4 uStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  undefined1 local_c0 [24];
  float *local_a8;
  float fStack_a0;
  float fStack_9c;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_148;
  fVar2 = ComputeLowPassMonoPoleCoefficient(param_1->cutoff_frequency,this->sample_rate_);
  MonoPoleFilter::SetCoefficient(&this->low_pass_filter_,fVar2);
  WorldPosition::WorldPosition((WorldPosition *)local_c0);
  local_a8 = *(float **)param_1->room_rotation;
  fStack_9c = param_1->room_rotation[3];
  local_e0.m_storage.m_data.array[0] = -0.0;
  local_e0.m_storage.m_data.array[1] = -0.0;
  local_e0.m_storage.m_data.array[2] = -0.0;
  uStack_d4 = 0;
  fVar8 = --param_1->room_rotation[0];
  fVar9 = --param_1->room_rotation[1];
  fStack_a0 = --param_1->room_rotation[2];
  uStack_c4 = 0;
  fVar4 = *(float *)param_2 - param_1->room_position[0];
  fVar6 = *(float *)&param_2->field_0x4 - param_1->room_position[1];
  fVar7 = *(float *)&param_2->field_0x8 - param_1->room_position[2];
  fVar5 = fVar8 * fVar6 - fVar4 * fVar9;
  fVar5 = fVar5 + fVar5;
  fVar3 = fVar7 * fVar9 - fStack_a0 * fVar6;
  fVar2 = fStack_a0 * fVar4 - fVar8 * fVar7;
  fVar3 = fVar3 + fVar3;
  fVar2 = fVar2 + fVar2;
  local_d0 = (fVar5 * fVar9 - fStack_a0 * fVar2) + fStack_9c * fVar3 + fVar4;
  local_110 = (evaluator<Eigen::Matrix<float,3,1,0,3,1>_>)&local_d0;
  local_108 = (evaluator<Eigen::Matrix<float,3,1,2,3,1>_>)&local_e0;
  fStack_cc = (fStack_a0 * fVar3 - fVar8 * fVar5) + fStack_9c * fVar2 + fVar6;
  fStack_c8 = (fVar8 * fVar2 - fVar3 * fVar9) + fStack_9c * fVar5 + fVar7;
  Eigen::internal::
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,3,1,2,3,1>_>,Eigen::internal::evaluator<Eigen::Matrix<float,3,1,0,3,1>_>,Eigen::internal::assign_op<float,float>,0>
  ::
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,3,1,2,3,1>_>,Eigen::internal::evaluator<Eigen::Matrix<float,3,1,0,3,1>_>,Eigen::internal::assign_op<float,float>,0>
            (&local_100,&local_108,&local_110,local_118,(Matrix<float,3,1,2,3,1> *)&local_e0);
  Eigen::internal::
  dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,3,1,2,3,1>_>,Eigen::internal::evaluator<Eigen::Matrix<float,3,1,0,3,1>_>,Eigen::internal::assign_op<float,float>,0>,3,2>
  ::run(&local_100);
  local_c0._4_4_ = local_e0.m_storage.m_data.array[1];
  local_c0._0_4_ = local_e0.m_storage.m_data.array[0];
  local_c0._8_4_ = local_e0.m_storage.m_data.array[2];
  local_a8 = param_1->room_dimensions;
  Eigen::PlainObjectBase<Eigen::Matrix<float,3,1,2,3,1>_>::
  _set_noalias<Eigen::Map<Eigen::Matrix<float,3,1,2,3,1>_const_,0,Eigen::Stride<0,0>_>_>
            (&local_e0,
             (DenseBase<Eigen::Map<Eigen::Matrix<float,3,1,2,3,1>_const_,0,Eigen::Stride<0,0>_>_> *)
             &local_a8);
  ComputeReflections((WorldPosition *)local_c0,(WorldPosition *)&local_e0,param_1->coefficients,
                     &this->target_reflections_);
  fVar2 = vraudio::`anonymous_namespace'::FindMaxReflectionDelayTime(&this->target_reflections_);
  lVar1 = 0;
  fVar2 = fVar2 * (float)this->sample_rate_;
  if ((__real_5f000000 <= fVar2) && (fVar2 = fVar2 - __real_5f000000, fVar2 < __real_5f000000)) {
    lVar1 = -0x8000000000000000;
  }
  this->crossfade_ = true;
  this->num_frames_to_process_on_empty_input_ = (longlong)fVar2 + lVar1 + this->frames_per_buffer_;
  return;
}

// UpdateGainsAndDelays @ 14f078440

void __thiscall vraudio::ReflectionsProcessor::UpdateGainsAndDelays(ReflectionsProcessor *this)

{
  Reflection *pRVar1;
  float fVar2;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;
  
  fVar2 = __real_5f000000;
  lVar3 = 0;
  fVar5 = (float)this->sample_rate_ *
          ((this->target_reflections_)._Mypair._Myval2._Myfirst)->delay_time_seconds;
  if ((__real_5f000000 <= fVar5) && (fVar5 = fVar5 - __real_5f000000, fVar5 < __real_5f000000)) {
    lVar3 = -0x8000000000000000;
  }
  uVar4 = this->max_delay_samples_;
  if ((ulonglong)((longlong)fVar5 + lVar3) < this->max_delay_samples_) {
    uVar4 = (longlong)fVar5 + lVar3;
  }
  *(this->delays_)._Mypair._Myval2._Myfirst = uVar4;
  pRVar1 = (this->target_reflections_)._Mypair._Myval2._Myfirst;
  *(this->gains_)._Mypair._Myval2._Myfirst = pRVar1->magnitude;
  lVar3 = 0;
  fVar5 = (float)this->sample_rate_ * pRVar1[1].delay_time_seconds;
  if ((fVar2 <= fVar5) && (fVar5 = fVar5 - fVar2, fVar5 < fVar2)) {
    lVar3 = -0x8000000000000000;
  }
  uVar4 = this->max_delay_samples_;
  if ((ulonglong)((longlong)fVar5 + lVar3) < this->max_delay_samples_) {
    uVar4 = (longlong)fVar5 + lVar3;
  }
  (this->delays_)._Mypair._Myval2._Myfirst[1] = uVar4;
  pRVar1 = (this->target_reflections_)._Mypair._Myval2._Myfirst;
  (this->gains_)._Mypair._Myval2._Myfirst[1] = pRVar1[1].magnitude;
  lVar3 = 0;
  fVar5 = (float)this->sample_rate_ * pRVar1[2].delay_time_seconds;
  if ((fVar2 <= fVar5) && (fVar5 = fVar5 - fVar2, fVar5 < fVar2)) {
    lVar3 = -0x8000000000000000;
  }
  uVar4 = this->max_delay_samples_;
  if ((ulonglong)((longlong)fVar5 + lVar3) < this->max_delay_samples_) {
    uVar4 = (longlong)fVar5 + lVar3;
  }
  (this->delays_)._Mypair._Myval2._Myfirst[2] = uVar4;
  pRVar1 = (this->target_reflections_)._Mypair._Myval2._Myfirst;
  (this->gains_)._Mypair._Myval2._Myfirst[2] = pRVar1[2].magnitude;
  lVar3 = 0;
  fVar5 = (float)this->sample_rate_ * pRVar1[3].delay_time_seconds;
  if ((fVar2 <= fVar5) && (fVar5 = fVar5 - fVar2, fVar5 < fVar2)) {
    lVar3 = -0x8000000000000000;
  }
  uVar4 = this->max_delay_samples_;
  if ((ulonglong)((longlong)fVar5 + lVar3) < this->max_delay_samples_) {
    uVar4 = (longlong)fVar5 + lVar3;
  }
  (this->delays_)._Mypair._Myval2._Myfirst[3] = uVar4;
  pRVar1 = (this->target_reflections_)._Mypair._Myval2._Myfirst;
  (this->gains_)._Mypair._Myval2._Myfirst[3] = pRVar1[3].magnitude;
  lVar3 = 0;
  fVar5 = (float)this->sample_rate_ * pRVar1[4].delay_time_seconds;
  if ((fVar2 <= fVar5) && (fVar5 = fVar5 - fVar2, fVar5 < fVar2)) {
    lVar3 = -0x8000000000000000;
  }
  uVar4 = this->max_delay_samples_;
  if ((ulonglong)((longlong)fVar5 + lVar3) < this->max_delay_samples_) {
    uVar4 = (longlong)fVar5 + lVar3;
  }
  (this->delays_)._Mypair._Myval2._Myfirst[4] = uVar4;
  pRVar1 = (this->target_reflections_)._Mypair._Myval2._Myfirst;
  (this->gains_)._Mypair._Myval2._Myfirst[4] = pRVar1[4].magnitude;
  lVar3 = 0;
  fVar5 = (float)this->sample_rate_ * pRVar1[5].delay_time_seconds;
  if ((fVar2 <= fVar5) && (fVar5 = fVar5 - fVar2, fVar5 < fVar2)) {
    lVar3 = -0x8000000000000000;
  }
  uVar4 = this->max_delay_samples_;
  if ((ulonglong)((longlong)fVar5 + lVar3) < this->max_delay_samples_) {
    uVar4 = (longlong)fVar5 + lVar3;
  }
  (this->delays_)._Mypair._Myval2._Myfirst[5] = uVar4;
  (this->gains_)._Mypair._Myval2._Myfirst[5] =
       (this->target_reflections_)._Mypair._Myval2._Myfirst[5].magnitude;
  return;
}

// run @ 14f078650

void __cdecl
Eigen::internal::
dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,3,1,2,3,1>_>,Eigen::internal::evaluator<Eigen::Matrix<float,3,1,0,3,1>_>,Eigen::internal::assign_op<float,float>,0>,3,2>
::run(generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float,3,1,2,3,1>_>,Eigen::internal::evaluator<Eigen::Matrix<float,3,1,0,3,1>_>,Eigen::internal::assign_op<float,float>,0>
      *param_1)

{
  evaluator<Eigen::Matrix<float,3,1,0,3,1>_> *peVar1;
  evaluator<Eigen::Matrix<float,3,1,2,3,1>_> *peVar2;
  
  peVar1 = param_1->m_src;
  peVar2 = param_1->m_dst;
  *(undefined4 *)*peVar2 = *(undefined4 *)*peVar1;
  *(undefined4 *)((longlong)*peVar2 + 4) = *(undefined4 *)((longlong)*peVar1 + 4);
  *(undefined4 *)((longlong)*peVar2 + 8) = *(undefined4 *)((longlong)*peVar1 + 8);
  return;
}

