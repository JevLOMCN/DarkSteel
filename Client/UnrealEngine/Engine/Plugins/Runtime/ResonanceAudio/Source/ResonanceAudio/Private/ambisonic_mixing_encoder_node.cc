// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 7

// AmbisonicMixingEncoderNode @ 14f07ec20

AmbisonicMixingEncoderNode * __thiscall
vraudio::AmbisonicMixingEncoderNode::AmbisonicMixingEncoderNode
          (AmbisonicMixingEncoderNode *this,SystemSettings *param_1,AmbisonicLookupTable *param_2,
          int param_3)

{
  float *pfVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  ProcessingNode::ProcessingNode((ProcessingNode *)this);
  this->system_settings_ = param_1;
  this->_padding_ = (longlong)&_vftable__for__vraudio__Node__;
  this->lookup_table_ = param_2;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__SubscriberNode<vraudio::AudioBuffer_const*___ptr64>__;
  this->ambisonic_order_ = param_3;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__PublisherNode<vraudio::AudioBuffer_const*___ptr64>__;
  GainMixer::GainMixer
            (&this->gain_mixer_,((longlong)param_3 + 1) * ((longlong)param_3 + 1),
             param_1->frames_per_buffer_);
  lVar2 = (longlong)this->ambisonic_order_ + 1;
  (this->coefficients_)._Mypair._Myval2._Myfirst = (float *)0x0;
  uVar3 = lVar2 * lVar2;
  (this->coefficients_)._Mypair._Myval2._Mylast = (float *)0x0;
  (this->coefficients_)._Mypair._Myval2._Myend = (float *)0x0;
  if (uVar3 != 0) {
    if (0x3fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::vector<float,std::allocator<float>_>::_Xlength();
    }
    pfVar1 = std::_Allocate<16,std::_Default_allocate_traits>(uVar3 * 4);
    (this->coefficients_)._Mypair._Myval2._Myfirst = pfVar1;
    (this->coefficients_)._Mypair._Myval2._Myend = pfVar1 + uVar3;
    pfVar1 = (this->coefficients_)._Mypair._Myval2._Myfirst;
    memset(pfVar1,0,uVar3 * 4);
    (this->coefficients_)._Mypair._Myval2._Mylast = pfVar1 + uVar3;
  }
  return this;
}

// ~GainMixer @ 14f07ed40

void __thiscall vraudio::GainMixer::~GainMixer(GainMixer *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ChannelView *pCVar4;
  float *pfVar5;
  void *pvVar6;
  ulong64 uVar7;
  ChannelView *pCVar8;
  
  pvVar1 = *(void **)&(this->source_gain_processors_).field_0x18;
  if (pvVar1 != (void *)0x0) {
    uVar7 = *(longlong *)&(this->source_gain_processors_).field_0x28 - (longlong)pvVar1 &
            0xfffffffffffffff8;
    pvVar6 = pvVar1;
    if (0xfff < uVar7) {
      pvVar6 = *(void **)((longlong)pvVar1 + -8);
      uVar7 = uVar7 + 0x27;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar6))) goto LAB_14f07eecc;
    }
    ::operator_delete(pvVar6,uVar7);
    *(undefined8 *)&(this->source_gain_processors_).field_0x18 = 0;
    *(undefined8 *)&(this->source_gain_processors_).field_0x20 = 0;
    *(undefined8 *)&(this->source_gain_processors_).field_0x28 = 0;
  }
  puVar2 = *(undefined8 **)&(this->source_gain_processors_).field_0x8;
  *(undefined8 *)puVar2[1] = 0;
  puVar2 = (undefined8 *)*puVar2;
  while (puVar2 != (undefined8 *)0x0) {
    pvVar1 = (void *)puVar2[4];
    puVar3 = (undefined8 *)*puVar2;
    if (pvVar1 != (void *)0x0) {
      uVar7 = puVar2[6] - (longlong)pvVar1 & 0xfffffffffffffff8;
      pvVar6 = pvVar1;
      if (0xfff < uVar7) {
        pvVar6 = *(void **)((longlong)pvVar1 + -8);
        uVar7 = uVar7 + 0x27;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar6))) goto LAB_14f07eecc;
      }
      ::operator_delete(pvVar6,uVar7);
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
    }
    ::operator_delete(puVar2,0x38);
    puVar2 = puVar3;
  }
  ::operator_delete(*(void **)&(this->source_gain_processors_).field_0x8,0x38);
  pCVar4 = (this->output_).channel_views_._Mypair._Myval2._Myfirst;
  if (pCVar4 != (ChannelView *)0x0) {
    uVar7 = (((longlong)(this->output_).channel_views_._Mypair._Myval2._Myend - (longlong)pCVar4) /
            0x18) * 0x18;
    pCVar8 = pCVar4;
    if (0xfff < uVar7) {
      pCVar8 = *(ChannelView **)&pCVar4[-1].enabled_;
      uVar7 = uVar7 + 0x27;
      if (0x1f < (ulonglong)((longlong)pCVar4 + (-8 - (longlong)pCVar8))) {
LAB_14f07eecc:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pCVar8,uVar7);
    (this->output_).channel_views_._Mypair._Myval2._Myfirst = (ChannelView *)0x0;
    (this->output_).channel_views_._Mypair._Myval2._Mylast = (ChannelView *)0x0;
    (this->output_).channel_views_._Mypair._Myval2._Myend = (ChannelView *)0x0;
  }
  pfVar5 = (this->output_).data_._Mypair._Myval2._Myfirst;
  if (pfVar5 != (float *)0x0) {
    free(*(void **)(pfVar5 + -2));
    (this->output_).data_._Mypair._Myval2._Myfirst = (float *)0x0;
    (this->output_).data_._Mypair._Myval2._Mylast = (float *)0x0;
    (this->output_).data_._Mypair._Myval2._Myend = (float *)0x0;
  }
  return;
}

// `vector_deleting_destructor'`adjustor{24}' @ 14f07eee8

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::AmbisonicMixingEncoderNode::`vector
   deleting destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::AmbisonicMixingEncoderNode::_vector_deleting_destructor__adjustor_24__
          (AmbisonicMixingEncoderNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((AmbisonicMixingEncoderNode *)&this[-1].coefficients_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 14f07eef8

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::AmbisonicMixingEncoderNode::`vector
   deleting destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::AmbisonicMixingEncoderNode::_vector_deleting_destructor__adjustor_32__
          (AmbisonicMixingEncoderNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((AmbisonicMixingEncoderNode *)
                      &this[-1].gain_mixer_.source_gain_processors_.field_0x38,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14f07ef10

void * __thiscall
vraudio::AmbisonicMixingEncoderNode::_scalar_deleting_destructor_
          (AmbisonicMixingEncoderNode *this,uint param_1)

{
  std::vector<float,std::allocator<float>_>::_Tidy(&this->coefficients_);
  GainMixer::~GainMixer(&this->gain_mixer_);
  ProcessingNode::~ProcessingNode((ProcessingNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x180);
  }
  return this;
}

// AudioProcess @ 14f07ef70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

AudioBuffer * __thiscall
vraudio::AmbisonicMixingEncoderNode::AudioProcess
          (AmbisonicMixingEncoderNode *this,NodeInput *param_1)

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
  undefined1 auStackY_128 [32];
  WorldPosition local_f8;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 local_e0 [40];
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pSVar2 = this->system_settings_;
  GainMixer::Reset(&this->gain_mixer_);
  pvVar5 = ProcessingNode::NodeInput::GetInputBuffers(param_1);
  ppAVar3 = (pvVar5->_Mypair)._Myval2._Mylast;
  ppAVar9 = (pvVar5->_Mypair)._Myval2._Myfirst;
  if (ppAVar9 != ppAVar3) {
    local_f8._8_4_ = 0x80000000;
    uStack_ec = 0x80000000;
    uStack_e8 = 0x80000000;
    uStack_e4 = 0;
    do {
      iVar1 = (*ppAVar9)->source_id_;
      pSVar6 = SourceParametersManager::GetParameters
                         (&this->system_settings_->source_parameters_manager_,iVar1);
      WorldPosition::WorldPosition((WorldPosition *)local_e0);
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
      fVar12 = fVar15 * fVar17 - fVar13 * fVar18;
      fVar11 = fVar10 * fVar18 - fVar15 * fVar16;
      fVar12 = fVar12 + fVar12;
      fVar11 = fVar11 + fVar11;
      local_e0._8_4_ = (fVar16 * fVar11 - fVar17 * fVar12) + fVar14 * fVar4 + fVar15;
      local_e0._4_4_ = (fVar18 * fVar12 - fVar14 * fVar16) + fVar4 * fVar11 + fVar13;
      local_e0._0_4_ = (fVar14 * fVar17 - fVar18 * fVar11) + fVar4 * fVar12 + fVar10;
      SphericalAngle::FromWorldPosition(&local_f8);
      AmbisonicLookupTable::GetEncodingCoeffs
                (this->lookup_table_,this->ambisonic_order_,(SphericalAngle *)&local_f8,
                 pSVar6->spread_deg,&this->coefficients_);
      pCVar7 = AudioBuffer::operator[](*ppAVar9,0);
      GainMixer::AddInputChannel(&this->gain_mixer_,pCVar7,iVar1,&this->coefficients_);
      ppAVar9 = ppAVar9 + 1;
    } while (ppAVar9 != ppAVar3);
  }
  pAVar8 = GainMixer::GetOutput(&this->gain_mixer_);
  return pAVar8;
}

// CleanUp @ 14f07f250

bool __thiscall vraudio::AmbisonicMixingEncoderNode::CleanUp(AmbisonicMixingEncoderNode *this)

{
  ProcessingNode::CallCleanUpOnInputNodes((ProcessingNode *)this);
  return false;
}

