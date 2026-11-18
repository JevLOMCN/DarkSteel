// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 10

// _Max_element_vectorized<float> @ 14f08fff0

float * __cdecl std::_Max_element_vectorized<float>(float *param_1,float *param_2)

{
  float *pfVar1;
  
  pfVar1 = __std_max_element_f(param_1,param_2,false);
  return pfVar1;
}

// ReverbNode @ 14f090000

ReverbNode * __thiscall
vraudio::ReverbNode::ReverbNode(ReverbNode *this,SystemSettings *param_1,FftManager *param_2)

{
  float *pfVar1;
  ReverbProperties *pRVar2;
  ReverbProperties *pRVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  SystemSettings *pSVar7;
  ChannelView *pCVar8;
  float *pfVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  float *pfVar13;
  ReverbProperties *pRVar14;
  longlong lVar15;
  longlong lVar16;
  ReverbProperties *pRVar17;
  ChannelView *pCVar18;
  longlong lVar19;
  undefined4 local_38;
  undefined4 local_34 [3];
  
  ProcessingNode::ProcessingNode((ProcessingNode *)this);
  lVar19 = 0;
  this->system_settings_ = param_1;
  pRVar2 = &this->reverb_properties_;
  uVar12 = 0;
  local_38 = 0;
  pRVar3 = &this->new_reverb_properties_;
  this->_padding_ = (longlong)&_vftable__for__vraudio__Node__;
  pfVar9 = &(this->reverb_properties_).gain;
  pRVar2->rt60_values[0] = 0.0;
  pRVar2->rt60_values[1] = 0.0;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__SubscriberNode<vraudio::AudioBuffer_const*___ptr64>__;
  pfVar1 = &(this->new_reverb_properties_).gain;
  (this->reverb_properties_).rt60_values[2] = 0.0;
  (this->reverb_properties_).rt60_values[3] = 0.0;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__PublisherNode<vraudio::AudioBuffer_const*___ptr64>__;
  (this->reverb_properties_).rt60_values[4] = 0.0;
  (this->reverb_properties_).rt60_values[5] = 0.0;
  (this->reverb_properties_).rt60_values[6] = 0.0;
  (this->reverb_properties_).rt60_values[7] = 0.0;
  (this->reverb_properties_).rt60_values[8] = 0.0;
  *pfVar9 = 0.0;
  pRVar3->rt60_values[0] = 0.0;
  pRVar3->rt60_values[1] = 0.0;
  (this->new_reverb_properties_).rt60_values[2] = 0.0;
  (this->new_reverb_properties_).rt60_values[3] = 0.0;
  (this->new_reverb_properties_).rt60_values[4] = 0.0;
  (this->new_reverb_properties_).rt60_values[5] = 0.0;
  (this->new_reverb_properties_).rt60_values[6] = 0.0;
  (this->new_reverb_properties_).rt60_values[7] = 0.0;
  (this->new_reverb_properties_).rt60_values[8] = 0.0;
  *pfVar1 = 0.0;
  (this->rt60_band_update_steps_)._Mypair._Myval2._Myfirst = (float *)0x0;
  (this->rt60_band_update_steps_)._Mypair._Myval2._Mylast = (float *)0x0;
  (this->rt60_band_update_steps_)._Mypair._Myval2._Myend = (float *)0x0;
  pfVar13 = ::operator_new(0x24);
  (this->rt60_band_update_steps_)._Mypair._Myval2._Myfirst = pfVar13;
  local_34[0] = 0;
  (this->rt60_band_update_steps_)._Mypair._Myval2._Myend = pfVar13 + 9;
  pfVar13 = (this->rt60_band_update_steps_)._Mypair._Myval2._Myfirst;
  lVar15 = lVar19;
  do {
    bVar6 = *(byte *)((longlong)local_34 + lVar15 + -4);
    lVar16 = lVar15 + 1;
    if (bVar6 != *(byte *)((longlong)local_34 + lVar15)) {
      uVar12 = -(uint)(bVar6 < *(byte *)((longlong)local_34 + lVar15)) | 1;
      break;
    }
    lVar15 = lVar16;
  } while (lVar16 != 4);
  if (uVar12 == 0) {
    pfVar13[0] = 0.0;
    pfVar13[1] = 0.0;
    pfVar13[2] = 0.0;
    pfVar13[3] = 0.0;
    pfVar13[4] = 0.0;
    pfVar13[5] = 0.0;
    pfVar13[6] = 0.0;
    pfVar13[7] = 0.0;
    pfVar13[8] = 0.0;
  }
  else {
    pfVar13[0] = 0.0;
    pfVar13[1] = 0.0;
    pfVar13[2] = 0.0;
    pfVar13[3] = 0.0;
    pfVar13[4] = 0.0;
    pfVar13[5] = 0.0;
    pfVar13[6] = 0.0;
    pfVar13[7] = 0.0;
    pfVar13[8] = 0.0;
  }
  (this->rt60_band_update_steps_)._Mypair._Myval2._Mylast = pfVar13 + 9;
  pSVar7 = this->system_settings_;
  this->gain_update_step_ = 0.0;
  this->rt60_updating_ = false;
  this->gain_updating_ = false;
  this->buffers_to_update_ = (float)pSVar7->sample_rate_hz_ / (float)pSVar7->frames_per_buffer_;
  SpectralReverb::SpectralReverb
            (&this->spectral_reverb_,pSVar7->sample_rate_hz_,pSVar7->frames_per_buffer_);
  ReverbOnsetCompensator::ReverbOnsetCompensator
            (&this->onset_compensator_,this->system_settings_->sample_rate_hz_,
             this->system_settings_->frames_per_buffer_,param_2);
  this->num_frames_processed_on_empty_input_ = 0;
  this->reverb_length_frames_ = 0;
  AudioBuffer::AudioBuffer(&this->output_buffer_,2,this->system_settings_->frames_per_buffer_);
  AudioBuffer::AudioBuffer
            (&this->compensator_output_buffer_,2,this->system_settings_->frames_per_buffer_);
  AudioBuffer::AudioBuffer(&this->silence_mono_buffer_,1,this->system_settings_->frames_per_buffer_)
  ;
  ProcessingNode::EnableProcessOnEmptyInput((ProcessingNode *)this,true);
  pCVar8 = (this->output_buffer_).channel_views_._Mypair._Myval2._Mylast;
  for (pCVar18 = (this->output_buffer_).channel_views_._Mypair._Myval2._Myfirst; pCVar18 != pCVar8;
      pCVar18 = pCVar18 + 1) {
    pCVar18->enabled_ = true;
    memset(pCVar18->begin_itr_,0,pCVar18->size_ << 2);
  }
  pCVar8 = (this->silence_mono_buffer_).channel_views_._Mypair._Myval2._Mylast;
  for (pCVar18 = (this->silence_mono_buffer_).channel_views_._Mypair._Myval2._Myfirst;
      pCVar18 != pCVar8; pCVar18 = pCVar18 + 1) {
    pCVar18->enabled_ = true;
    memset(pCVar18->begin_itr_,0,pCVar18->size_ << 2);
  }
  pSVar7 = this->system_settings_;
  uVar10 = *(undefined8 *)((pSVar7->reverb_properties_).rt60_values + 2);
  *(undefined8 *)pRVar3->rt60_values = *(undefined8 *)(pSVar7->reverb_properties_).rt60_values;
  *(undefined8 *)((this->new_reverb_properties_).rt60_values + 2) = uVar10;
  uVar10 = *(undefined8 *)((pSVar7->reverb_properties_).rt60_values + 6);
  *(undefined8 *)((this->new_reverb_properties_).rt60_values + 4) =
       *(undefined8 *)((pSVar7->reverb_properties_).rt60_values + 4);
  *(undefined8 *)((this->new_reverb_properties_).rt60_values + 6) = uVar10;
  *(undefined8 *)((this->new_reverb_properties_).rt60_values + 8) =
       *(undefined8 *)((pSVar7->reverb_properties_).rt60_values + 8);
  pRVar17 = pRVar2;
  pRVar14 = pRVar3;
  do {
    if (pRVar17 == (ReverbProperties *)pfVar9) {
      if (pRVar14 != (ReverbProperties *)pfVar1) {
LAB_14f0902ec:
        lVar19 = 1;
      }
      bVar11 = SUB81(lVar19,0);
LAB_14f0902f3:
      this->rt60_updating_ = bVar11;
      if (bVar11 != false) {
        pfVar9 = (this->rt60_band_update_steps_)._Mypair._Myval2._Myfirst;
        *pfVar9 = (pRVar3->rt60_values[0] - pRVar2->rt60_values[0]) / this->buffers_to_update_;
        pfVar9[1] = ((this->new_reverb_properties_).rt60_values[1] -
                    (this->reverb_properties_).rt60_values[1]) / this->buffers_to_update_;
        pfVar9[2] = ((this->new_reverb_properties_).rt60_values[2] -
                    (this->reverb_properties_).rt60_values[2]) / this->buffers_to_update_;
        pfVar9[3] = ((this->new_reverb_properties_).rt60_values[3] -
                    (this->reverb_properties_).rt60_values[3]) / this->buffers_to_update_;
        pfVar9[4] = ((this->new_reverb_properties_).rt60_values[4] -
                    (this->reverb_properties_).rt60_values[4]) / this->buffers_to_update_;
        pfVar9[5] = ((this->new_reverb_properties_).rt60_values[5] -
                    (this->reverb_properties_).rt60_values[5]) / this->buffers_to_update_;
        pfVar9[6] = ((this->new_reverb_properties_).rt60_values[6] -
                    (this->reverb_properties_).rt60_values[6]) / this->buffers_to_update_;
        pfVar9[7] = ((this->new_reverb_properties_).rt60_values[7] -
                    (this->reverb_properties_).rt60_values[7]) / this->buffers_to_update_;
        pfVar9[8] = ((this->new_reverb_properties_).rt60_values[8] -
                    (this->reverb_properties_).rt60_values[8]) / this->buffers_to_update_;
      }
      fVar4 = (this->new_reverb_properties_).gain;
      fVar5 = (this->reverb_properties_).gain;
      if (fVar5 == fVar4) {
        this->gain_updating_ = false;
      }
      else {
        this->gain_updating_ = true;
        this->gain_update_step_ = (fVar4 - fVar5) / this->buffers_to_update_;
      }
      return this;
    }
    if (pRVar14 == (ReverbProperties *)pfVar1) goto LAB_14f0902ec;
    if (pRVar14->rt60_values[0] != pRVar17->rt60_values[0]) {
      bVar11 = true;
      goto LAB_14f0902f3;
    }
    pRVar17 = (ReverbProperties *)(pRVar17->rt60_values + 1);
    pRVar14 = (ReverbProperties *)(pRVar14->rt60_values + 1);
  } while( true );
}

// ~vector<vraudio::AudioBuffer,std::allocator<vraudio::AudioBuffer>_> @ 14f090470

void __thiscall
std::vector<vraudio::AudioBuffer,std::allocator<vraudio::AudioBuffer>_>::
~vector<vraudio::AudioBuffer,std::allocator<vraudio::AudioBuffer>_>
          (vector<vraudio::AudioBuffer,std::allocator<vraudio::AudioBuffer>_> *this)

{
  ulong64 uVar1;
  AudioBuffer *pAVar2;
  AudioBuffer *pAVar3;
  
  pAVar2 = (this->_Mypair)._Myval2._Myfirst;
  if (pAVar2 != (AudioBuffer *)0x0) {
    pAVar3 = (this->_Mypair)._Myval2._Mylast;
    for (; pAVar2 != pAVar3; pAVar2 = pAVar2 + 1) {
      vraudio::AudioBuffer::~AudioBuffer(pAVar2);
    }
    pAVar2 = (this->_Mypair)._Myval2._Myfirst;
    uVar1 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pAVar2) / 0x48) * 0x48;
    pAVar3 = pAVar2;
    if (0xfff < uVar1) {
      pAVar3 = *(AudioBuffer **)&pAVar2[-1].source_id_;
      uVar1 = uVar1 + 0x27;
      if (0x1f < (ulonglong)((longlong)pAVar2 + (-8 - (longlong)pAVar3))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pAVar3,uVar1);
    (this->_Mypair)._Myval2._Myfirst = (AudioBuffer *)0x0;
    (this->_Mypair)._Myval2._Mylast = (AudioBuffer *)0x0;
    (this->_Mypair)._Myval2._Myend = (AudioBuffer *)0x0;
  }
  return;
}

// ~ReverbOnsetCompensator @ 14f090540

/* WARNING: Type propagation algorithm not settling */

void __thiscall
vraudio::ReverbOnsetCompensator::~ReverbOnsetCompensator(ReverbOnsetCompensator *this)

{
  _List_node<std::unique_ptr<vraudio::ReverbOnsetUpdateProcessor,std::default_delete<vraudio::ReverbOnsetUpdateProcessor>_>,void_*>
  *p_Var1;
  ReverbOnsetUpdateProcessor *pRVar2;
  _List_node<std::unique_ptr<vraudio::ReverbOnsetUpdateProcessor,std::default_delete<vraudio::ReverbOnsetUpdateProcessor>_>,void_*>
  *p_Var3;
  void *pvVar4;
  AudioBuffer *this_00;
  void *pvVar5;
  ulong64 uVar6;
  
  AudioBuffer::~AudioBuffer(&this->temp_freq_buffer_);
  AudioBuffer::~AudioBuffer(&this->temp_kernel_buffer_);
  p_Var1 = (this->update_processors_)._Mypair._Myval2._Myhead;
  p_Var1->_Prev->_Next =
       (_List_node<std::unique_ptr<vraudio::ReverbOnsetUpdateProcessor,std::default_delete<vraudio::ReverbOnsetUpdateProcessor>_>,void_*>
        *)0x0;
  p_Var1 = p_Var1->_Next;
  do {
    if (p_Var1 == (_List_node<std::unique_ptr<vraudio::ReverbOnsetUpdateProcessor,std::default_delete<vraudio::ReverbOnsetUpdateProcessor>_>,void_*>
                   *)0x0) {
      ::operator_delete((this->update_processors_)._Mypair._Myval2._Myhead,0x18);
      this_00 = (this->delay_filter_).delay_line_._Mypair._Myval2;
      if (this_00 != (AudioBuffer *)0x0) {
        AudioBuffer::~AudioBuffer(this_00);
        ::operator_delete(this_00,0x48);
      }
      AudioBuffer::~AudioBuffer(&(this->right_filter_).temp_kernel_chunk_buffer_);
      AudioBuffer::~AudioBuffer(&(this->right_filter_).temp_zeropad_buffer_);
      AudioBuffer::~AudioBuffer(&(this->right_filter_).freq_domain_accumulator_);
      AudioBuffer::~AudioBuffer(&(this->right_filter_).filtered_time_domain_buffers_);
      AudioBuffer::~AudioBuffer(&(this->right_filter_).freq_domain_buffer_);
      AudioBuffer::~AudioBuffer(&(this->right_filter_).kernel_freq_domain_buffer_);
      AudioBuffer::~AudioBuffer(&(this->left_filter_).temp_kernel_chunk_buffer_);
      AudioBuffer::~AudioBuffer(&(this->left_filter_).temp_zeropad_buffer_);
      AudioBuffer::~AudioBuffer(&(this->left_filter_).freq_domain_accumulator_);
      AudioBuffer::~AudioBuffer(&(this->left_filter_).filtered_time_domain_buffers_);
      AudioBuffer::~AudioBuffer(&(this->left_filter_).freq_domain_buffer_);
      AudioBuffer::~AudioBuffer(&(this->left_filter_).kernel_freq_domain_buffer_);
      AudioBuffer::~AudioBuffer(&this->adder_curves_);
      AudioBuffer::~AudioBuffer(&this->base_curves_);
      std::vector<vraudio::AudioBuffer,std::allocator<vraudio::AudioBuffer>_>::
      ~vector<vraudio::AudioBuffer,std::allocator<vraudio::AudioBuffer>_>
                (&this->bandpassed_noise_right_);
      std::vector<vraudio::AudioBuffer,std::allocator<vraudio::AudioBuffer>_>::
      ~vector<vraudio::AudioBuffer,std::allocator<vraudio::AudioBuffer>_>
                (&this->bandpassed_noise_left_);
      return;
    }
    pRVar2 = (p_Var1->_Myval)._Mypair._Myval2;
    p_Var3 = p_Var1->_Next;
    if (pRVar2 != (ReverbOnsetUpdateProcessor *)0x0) {
      AudioBuffer::~AudioBuffer(&pRVar2->envelope_buffer_);
      AudioBuffer::~AudioBuffer(&pRVar2->band_buffer_);
      std::vector<float,std::allocator<float>_>::_Tidy(&pRVar2->pure_decay_exponents_);
      std::vector<float,std::allocator<float>_>::_Tidy(&pRVar2->pure_decay_coefficients_);
      pvVar4 = (pRVar2->curve_indices_)._Mypair._Myval2._Myfirst;
      if (pvVar4 != (void *)0x0) {
        uVar6 = (longlong)(pRVar2->curve_indices_)._Mypair._Myval2._Myend - (longlong)pvVar4 &
                0xfffffffffffffffc;
        pvVar5 = pvVar4;
        if (0xfff < uVar6) {
          pvVar5 = *(void **)((longlong)pvVar4 + -8);
          uVar6 = uVar6 + 0x27;
          if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar5))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(pvVar5,uVar6);
        (pRVar2->curve_indices_)._Mypair._Myval2._Myfirst = 0;
        (pRVar2->curve_indices_)._Mypair._Myval2._Mylast = (int *)0x0;
        (pRVar2->curve_indices_)._Mypair._Myval2._Myend = (int *)0x0;
      }
      ::operator_delete(pRVar2,0x108);
    }
    ::operator_delete(p_Var1,0x18);
    p_Var1 = p_Var3;
  } while( true );
}

// ~SpectralReverb @ 14f090760

/* WARNING: Type propagation algorithm not settling */

void __thiscall vraudio::SpectralReverb::~SpectralReverb(SpectralReverb *this)

{
  CircularBuffer *pCVar1;
  unique_ptr<vraudio::CircularBuffer,std::default_delete<vraudio::CircularBuffer>_> *puVar2;
  ulong64 uVar3;
  unique_ptr<vraudio::CircularBuffer,std::default_delete<vraudio::CircularBuffer>_> *puVar4;
  
  std::vector<vraudio::AudioBuffer,std::allocator<vraudio::AudioBuffer>_>::
  ~vector<vraudio::AudioBuffer,std::allocator<vraudio::AudioBuffer>_>(&this->output_accumulator_);
  AudioBuffer::~AudioBuffer(&this->temp_phase_buffer_);
  AudioBuffer::~AudioBuffer(&this->temp_magnitude_buffer_);
  AudioBuffer::~AudioBuffer(&this->scaled_magnitude_buffer_);
  AudioBuffer::~AudioBuffer(&this->temp_freq_buffer_);
  AudioBuffer::~AudioBuffer(&this->out_time_buffer_);
  puVar4 = (this->output_circular_buffers_)._Mypair._Myval2._Myfirst;
  if (puVar4 != (unique_ptr<vraudio::CircularBuffer,std::default_delete<vraudio::CircularBuffer>_> *
                )0x0) {
    puVar2 = (this->output_circular_buffers_)._Mypair._Myval2._Mylast;
    for (; puVar4 != puVar2; puVar4 = puVar4 + 1) {
      pCVar1 = (puVar4->_Mypair)._Myval2;
      if (pCVar1 != (CircularBuffer *)0x0) {
        AudioBuffer::~AudioBuffer(&pCVar1->buffer_);
        ::operator_delete(pCVar1,0x70);
      }
    }
    puVar4 = (this->output_circular_buffers_)._Mypair._Myval2._Myfirst;
    uVar3 = (longlong)(this->output_circular_buffers_)._Mypair._Myval2._Myend - (longlong)puVar4 &
            0xfffffffffffffff8;
    puVar2 = puVar4;
    if (0xfff < uVar3) {
      puVar2 = *(unique_ptr<vraudio::CircularBuffer,std::default_delete<vraudio::CircularBuffer>_>
                 **)(puVar4 + 0xffffffffffffffff);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)puVar4 + (-8 - (longlong)puVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(puVar2,uVar3);
    (this->output_circular_buffers_)._Mypair._Myval2._Myfirst =
         (unique_ptr<vraudio::CircularBuffer,std::default_delete<vraudio::CircularBuffer>_> *)0x0;
    (this->output_circular_buffers_)._Mypair._Myval2._Mylast =
         (unique_ptr<vraudio::CircularBuffer,std::default_delete<vraudio::CircularBuffer>_> *)0x0;
    (this->output_circular_buffers_)._Mypair._Myval2._Myend =
         (unique_ptr<vraudio::CircularBuffer,std::default_delete<vraudio::CircularBuffer>_> *)0x0;
  }
  AudioBuffer::~AudioBuffer(&(this->input_circular_buffer_).buffer_);
  AudioBuffer::~AudioBuffer(&this->fft_size_input_);
  AudioBuffer::~AudioBuffer(&this->magnitude_delay_);
  AudioBuffer::~AudioBuffer(&this->magnitude_compensation_);
  AudioBuffer::~AudioBuffer(&this->feedback_);
  AudioBuffer::~AudioBuffer(&this->window_);
  AudioBuffer::~AudioBuffer(&this->unscaled_window_);
  AudioBuffer::~AudioBuffer(&this->sin_cos_random_phase_buffer_);
  FftManager::~FftManager(&this->fft_manager_);
  return;
}

// `vector_deleting_destructor'`adjustor{24}' @ 14f0908f8

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::ReverbNode::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::ReverbNode::_vector_deleting_destructor__adjustor_24__(ReverbNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ReverbNode *)
                      &this[-1].silence_mono_buffer_.channel_views_._Mypair._Myval2._Mylast,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 14f090908

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::ReverbNode::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::ReverbNode::_vector_deleting_destructor__adjustor_32__(ReverbNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ReverbNode *)&this[-1].silence_mono_buffer_.channel_views_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14f090920

void * __thiscall vraudio::ReverbNode::_scalar_deleting_destructor_(ReverbNode *this,uint param_1)

{
  AudioBuffer::~AudioBuffer(&this->silence_mono_buffer_);
  AudioBuffer::~AudioBuffer(&this->compensator_output_buffer_);
  AudioBuffer::~AudioBuffer(&this->output_buffer_);
  ReverbOnsetCompensator::~ReverbOnsetCompensator(&this->onset_compensator_);
  SpectralReverb::~SpectralReverb(&this->spectral_reverb_);
  std::vector<float,std::allocator<float>_>::_Tidy(&this->rt60_band_update_steps_);
  ProcessingNode::~ProcessingNode((ProcessingNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xca0);
  }
  return this;
}

// AudioProcess @ 14f0909b0

AudioBuffer * __thiscall vraudio::ReverbNode::AudioProcess(ReverbNode *this,NodeInput *param_1)

{
  ReverbProperties *pRVar1;
  float fVar2;
  ChannelView *pCVar3;
  uint uVar4;
  float *pfVar5;
  ReverbProperties *pRVar6;
  AudioBuffer *pAVar7;
  longlong lVar8;
  ReverbProperties *pRVar9;
  float *pfVar10;
  SpectralReverb *this_00;
  float fVar11;
  
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  pRVar1 = &this->reverb_properties_;
  if (this->rt60_updating_ != false) {
    pfVar10 = (this->rt60_band_update_steps_)._Mypair._Myval2._Myfirst;
    pRVar9 = &this->new_reverb_properties_;
    fVar11 = pRVar9->rt60_values[0];
    if ((float)((uint)*pfVar10 & __xmm_7fffffff7fffffff7fffffff7fffffff) <
        (float)((uint)(fVar11 - pRVar1->rt60_values[0]) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar11 = pRVar1->rt60_values[0] + *pfVar10;
    }
    pRVar1->rt60_values[0] = fVar11;
    fVar11 = (this->new_reverb_properties_).rt60_values[1];
    fVar2 = (this->reverb_properties_).rt60_values[1];
    if ((float)((uint)pfVar10[1] & uVar4) < (float)((uint)(fVar11 - fVar2) & uVar4)) {
      fVar11 = fVar2 + pfVar10[1];
    }
    (this->reverb_properties_).rt60_values[1] = fVar11;
    fVar11 = (this->new_reverb_properties_).rt60_values[2];
    fVar2 = (this->reverb_properties_).rt60_values[2];
    if ((float)((uint)pfVar10[2] & uVar4) < (float)((uint)(fVar11 - fVar2) & uVar4)) {
      fVar11 = fVar2 + pfVar10[2];
    }
    (this->reverb_properties_).rt60_values[2] = fVar11;
    fVar11 = (this->new_reverb_properties_).rt60_values[3];
    fVar2 = (this->reverb_properties_).rt60_values[3];
    if ((float)((uint)pfVar10[3] & uVar4) < (float)((uint)(fVar11 - fVar2) & uVar4)) {
      fVar11 = fVar2 + pfVar10[3];
    }
    (this->reverb_properties_).rt60_values[3] = fVar11;
    fVar11 = (this->new_reverb_properties_).rt60_values[4];
    fVar2 = (this->reverb_properties_).rt60_values[4];
    if ((float)((uint)pfVar10[4] & uVar4) < (float)((uint)(fVar11 - fVar2) & uVar4)) {
      fVar11 = fVar2 + pfVar10[4];
    }
    (this->reverb_properties_).rt60_values[4] = fVar11;
    fVar11 = (this->new_reverb_properties_).rt60_values[5];
    fVar2 = (this->reverb_properties_).rt60_values[5];
    if ((float)((uint)pfVar10[5] & uVar4) < (float)((uint)(fVar11 - fVar2) & uVar4)) {
      fVar11 = fVar2 + pfVar10[5];
    }
    (this->reverb_properties_).rt60_values[5] = fVar11;
    fVar11 = (this->new_reverb_properties_).rt60_values[6];
    fVar2 = (this->reverb_properties_).rt60_values[6];
    if ((float)((uint)pfVar10[6] & uVar4) < (float)((uint)(fVar11 - fVar2) & uVar4)) {
      fVar11 = fVar2 + pfVar10[6];
    }
    (this->reverb_properties_).rt60_values[6] = fVar11;
    fVar11 = (this->new_reverb_properties_).rt60_values[7];
    fVar2 = (this->reverb_properties_).rt60_values[7];
    if ((float)((uint)pfVar10[7] & uVar4) < (float)((uint)(fVar11 - fVar2) & uVar4)) {
      fVar11 = fVar2 + pfVar10[7];
    }
    (this->reverb_properties_).rt60_values[7] = fVar11;
    fVar11 = (this->new_reverb_properties_).rt60_values[8];
    fVar2 = (this->reverb_properties_).rt60_values[8];
    if ((float)((uint)pfVar10[8] & uVar4) < (float)((uint)(fVar11 - fVar2) & uVar4)) {
      fVar11 = fVar2 + pfVar10[8];
    }
    (this->reverb_properties_).rt60_values[8] = fVar11;
    SpectralReverb::SetRt60PerOctaveBand(&this->spectral_reverb_,pRVar1->rt60_values);
    pfVar10 = &(this->reverb_properties_).gain;
    pfVar5 = __std_max_element_f(pRVar1,pfVar10,false);
    lVar8 = 0;
    fVar11 = (float)this->system_settings_->sample_rate_hz_ * *pfVar5;
    if ((__real_5f000000 <= fVar11) && (fVar11 = fVar11 - __real_5f000000, fVar11 < __real_5f000000)
       ) {
      lVar8 = -0x8000000000000000;
    }
    fVar2 = (this->reverb_properties_).gain;
    this->reverb_length_frames_ = (longlong)fVar11 + lVar8;
    ReverbOnsetCompensator::Update(&this->onset_compensator_,pRVar1->rt60_values,fVar2);
    pfVar5 = &(this->new_reverb_properties_).gain;
    for (pRVar6 = pRVar1; pRVar6 != (ReverbProperties *)pfVar10;
        pRVar6 = (ReverbProperties *)(pRVar6->rt60_values + 1)) {
      if ((pRVar9 == (ReverbProperties *)pfVar5) ||
         (pRVar9->rt60_values[0] != pRVar6->rt60_values[0])) goto LAB_14f090cba;
      pRVar9 = (ReverbProperties *)(pRVar9->rt60_values + 1);
    }
    if (pRVar9 == (ReverbProperties *)pfVar5) {
      this->rt60_updating_ = false;
    }
    else {
LAB_14f090cba:
      this->rt60_updating_ = true;
    }
  }
  this_00 = &this->spectral_reverb_;
  pfVar10 = &(this->reverb_properties_).gain;
  if (this->gain_updating_ != false) {
    fVar11 = (this->new_reverb_properties_).gain;
    fVar2 = (this->reverb_properties_).gain;
    if ((float)((uint)this->gain_update_step_ & uVar4) < (float)((uint)(fVar11 - fVar2) & uVar4)) {
      fVar11 = fVar2 + this->gain_update_step_;
    }
    (this->reverb_properties_).gain = fVar11;
    SpectralReverb::SetGain(this_00,fVar11);
    ReverbOnsetCompensator::Update(&this->onset_compensator_,pRVar1->rt60_values,*pfVar10);
    this->gain_updating_ = (this->new_reverb_properties_).gain != *pfVar10;
  }
  pAVar7 = ProcessingNode::NodeInput::GetSingleInput(param_1);
  if (pAVar7 == (AudioBuffer *)0x0) {
    if (this->reverb_length_frames_ <= this->num_frames_processed_on_empty_input_) {
      return (AudioBuffer *)0x0;
    }
    this->num_frames_processed_on_empty_input_ =
         this->system_settings_->frames_per_buffer_ + this->num_frames_processed_on_empty_input_;
    pCVar3 = (this->output_buffer_).channel_views_._Mypair._Myval2._Myfirst;
    SpectralReverb::Process
              (this_00,(this->silence_mono_buffer_).channel_views_._Mypair._Myval2._Myfirst,pCVar3,
               pCVar3 + 1);
  }
  else {
    this->num_frames_processed_on_empty_input_ = 0;
    pCVar3 = (this->output_buffer_).channel_views_._Mypair._Myval2._Myfirst;
    SpectralReverb::Process
              (this_00,(pAVar7->channel_views_)._Mypair._Myval2._Myfirst,pCVar3,pCVar3 + 1);
    ReverbOnsetCompensator::Process
              (&this->onset_compensator_,pAVar7,&this->compensator_output_buffer_);
    ChannelView::operator+=
              ((this->output_buffer_).channel_views_._Mypair._Myval2._Myfirst,
               (this->compensator_output_buffer_).channel_views_._Mypair._Myval2._Myfirst);
    ChannelView::operator+=
              ((this->output_buffer_).channel_views_._Mypair._Myval2._Myfirst + 1,
               (this->compensator_output_buffer_).channel_views_._Mypair._Myval2._Myfirst + 1);
  }
  return &this->output_buffer_;
}

// Update @ 14f090e40

void __thiscall vraudio::ReverbNode::Update(ReverbNode *this)

{
  ReverbProperties *pRVar1;
  float fVar2;
  float fVar3;
  SystemSettings *pSVar4;
  float *pfVar5;
  undefined8 uVar6;
  bool bVar7;
  ReverbProperties *pRVar8;
  ReverbProperties *pRVar9;
  
  pSVar4 = this->system_settings_;
  pRVar1 = &this->new_reverb_properties_;
  pfVar5 = &(this->new_reverb_properties_).gain;
  uVar6 = *(undefined8 *)((pSVar4->reverb_properties_).rt60_values + 2);
  *(undefined8 *)pRVar1->rt60_values = *(undefined8 *)(pSVar4->reverb_properties_).rt60_values;
  *(undefined8 *)((this->new_reverb_properties_).rt60_values + 2) = uVar6;
  uVar6 = *(undefined8 *)((pSVar4->reverb_properties_).rt60_values + 6);
  *(undefined8 *)((this->new_reverb_properties_).rt60_values + 4) =
       *(undefined8 *)((pSVar4->reverb_properties_).rt60_values + 4);
  *(undefined8 *)((this->new_reverb_properties_).rt60_values + 6) = uVar6;
  *(undefined8 *)((this->new_reverb_properties_).rt60_values + 8) =
       *(undefined8 *)((pSVar4->reverb_properties_).rt60_values + 8);
  pRVar8 = pRVar1;
  for (pRVar9 = &this->reverb_properties_;
      pRVar9 != (ReverbProperties *)&(this->reverb_properties_).gain;
      pRVar9 = (ReverbProperties *)(pRVar9->rt60_values + 1)) {
    if ((pRVar8 == (ReverbProperties *)pfVar5) || (pRVar8->rt60_values[0] != pRVar9->rt60_values[0])
       ) goto LAB_14f090eb4;
    pRVar8 = (ReverbProperties *)(pRVar8->rt60_values + 1);
  }
  if (pRVar8 == (ReverbProperties *)pfVar5) {
    bVar7 = false;
  }
  else {
LAB_14f090eb4:
    bVar7 = true;
  }
  this->rt60_updating_ = bVar7;
  if (bVar7 != false) {
    pfVar5 = (this->rt60_band_update_steps_)._Mypair._Myval2._Myfirst;
    *pfVar5 = (pRVar1->rt60_values[0] - (this->reverb_properties_).rt60_values[0]) /
              this->buffers_to_update_;
    pfVar5[1] = ((this->new_reverb_properties_).rt60_values[1] -
                (this->reverb_properties_).rt60_values[1]) / this->buffers_to_update_;
    pfVar5[2] = ((this->new_reverb_properties_).rt60_values[2] -
                (this->reverb_properties_).rt60_values[2]) / this->buffers_to_update_;
    pfVar5[3] = ((this->new_reverb_properties_).rt60_values[3] -
                (this->reverb_properties_).rt60_values[3]) / this->buffers_to_update_;
    pfVar5[4] = ((this->new_reverb_properties_).rt60_values[4] -
                (this->reverb_properties_).rt60_values[4]) / this->buffers_to_update_;
    pfVar5[5] = ((this->new_reverb_properties_).rt60_values[5] -
                (this->reverb_properties_).rt60_values[5]) / this->buffers_to_update_;
    pfVar5[6] = ((this->new_reverb_properties_).rt60_values[6] -
                (this->reverb_properties_).rt60_values[6]) / this->buffers_to_update_;
    pfVar5[7] = ((this->new_reverb_properties_).rt60_values[7] -
                (this->reverb_properties_).rt60_values[7]) / this->buffers_to_update_;
    pfVar5[8] = ((this->new_reverb_properties_).rt60_values[8] -
                (this->reverb_properties_).rt60_values[8]) / this->buffers_to_update_;
  }
  fVar2 = (this->new_reverb_properties_).gain;
  fVar3 = (this->reverb_properties_).gain;
  if (fVar3 == fVar2) {
    this->gain_updating_ = false;
    return;
  }
  this->gain_updating_ = true;
  this->gain_update_step_ = (fVar2 - fVar3) / this->buffers_to_update_;
  return;
}

