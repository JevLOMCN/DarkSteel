// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 9

// SpectralReverb @ 14f07b620

SpectralReverb * __thiscall
vraudio::SpectralReverb::SpectralReverb(SpectralReverb *this,int param_1,ulong64 param_2)

{
  ChannelView *pCVar1;
  float *pfVar2;
  unique_ptr<vraudio::CircularBuffer,std::default_delete<vraudio::CircularBuffer>_> *puVar3;
  AudioBuffer *pAVar4;
  ChannelView *pCVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  float *pfVar9;
  float fVar10;
  
  this->sample_rate_ = param_1;
  uVar6 = 0;
  this->magnitude_delay_index_ = 0;
  this->overlap_add_index_ = 0;
  this->frames_per_buffer_ = param_2;
  FftManager::FftManager(&this->fft_manager_,0x800);
  lVar7 = 2;
  AudioBuffer::AudioBuffer(&this->sin_cos_random_phase_buffer_,2,0x4000);
  AudioBuffer::AudioBuffer(&this->unscaled_window_,1,0x1000);
  AudioBuffer::AudioBuffer(&this->window_,1,0x1000);
  AudioBuffer::AudioBuffer(&this->feedback_,1,0x801);
  AudioBuffer::AudioBuffer(&this->magnitude_compensation_,1,0x801);
  AudioBuffer::AudioBuffer(&this->magnitude_delay_,3,0x801);
  AudioBuffer::AudioBuffer(&this->fft_size_input_,1,0x1000);
  CircularBuffer::CircularBuffer
            (&this->input_circular_buffer_,this->frames_per_buffer_ + 0x1000,
             this->frames_per_buffer_,0x400);
  (this->output_circular_buffers_)._Mypair._Myval2._Myfirst =
       (unique_ptr<vraudio::CircularBuffer,std::default_delete<vraudio::CircularBuffer>_> *)0x0;
  (this->output_circular_buffers_)._Mypair._Myval2._Mylast =
       (unique_ptr<vraudio::CircularBuffer,std::default_delete<vraudio::CircularBuffer>_> *)0x0;
  (this->output_circular_buffers_)._Mypair._Myval2._Myend =
       (unique_ptr<vraudio::CircularBuffer,std::default_delete<vraudio::CircularBuffer>_> *)0x0;
  puVar3 = ::operator_new(0x10);
  (this->output_circular_buffers_)._Mypair._Myval2._Myfirst = puVar3;
  (this->output_circular_buffers_)._Mypair._Myval2._Myend = puVar3 + 2;
  puVar3 = (this->output_circular_buffers_)._Mypair._Myval2._Myfirst;
  (puVar3->_Mypair)._Myval2 = (CircularBuffer *)0x0;
  puVar3[1]._Mypair._Myval2 = (CircularBuffer *)0x0;
  (this->output_circular_buffers_)._Mypair._Myval2._Mylast = puVar3 + 2;
  AudioBuffer::AudioBuffer(&this->out_time_buffer_,4,0x1000);
  AudioBuffer::AudioBuffer(&this->temp_freq_buffer_,2,0x1000);
  AudioBuffer::AudioBuffer(&this->scaled_magnitude_buffer_,1,0x801);
  AudioBuffer::AudioBuffer(&this->temp_magnitude_buffer_,1,0x801);
  AudioBuffer::AudioBuffer(&this->temp_phase_buffer_,2,0x801);
  (this->output_accumulator_)._Mypair._Myval2._Myfirst = (AudioBuffer *)0x0;
  (this->output_accumulator_)._Mypair._Myval2._Mylast = (AudioBuffer *)0x0;
  (this->output_accumulator_)._Mypair._Myval2._Myend = (AudioBuffer *)0x0;
  pAVar4 = ::operator_new(0x90);
  (this->output_accumulator_)._Mypair._Myval2._Myfirst = pAVar4;
  (this->output_accumulator_)._Mypair._Myval2._Mylast = pAVar4;
  (this->output_accumulator_)._Mypair._Myval2._Myend = pAVar4 + 2;
  pAVar4 = (this->output_accumulator_)._Mypair._Myval2._Myfirst;
  do {
    AudioBuffer::AudioBuffer(pAVar4);
    fVar10 = __real_40490fdb;
    pAVar4 = pAVar4 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  (this->output_accumulator_)._Mypair._Myval2._Mylast = pAVar4;
  this->is_gain_near_zero_ = false;
  this->is_feedback_near_zero_ = false;
  pCVar1 = (this->sin_cos_random_phase_buffer_).channel_views_._Mypair._Myval2._Myfirst;
  GenerateUniformNoise(0.0,fVar10,1,pCVar1);
  uVar8 = uVar6;
  if ((this->sin_cos_random_phase_buffer_).num_frames_ != 0) {
    do {
      fVar10 = cosf(pCVar1->begin_itr_[uVar8]);
      pCVar1[1].begin_itr_[uVar8] = fVar10;
      pfVar2 = pCVar1->begin_itr_;
      fVar10 = sinf(pfVar2[uVar8]);
      pfVar2[uVar8] = fVar10;
      uVar8 = uVar8 + 1;
    } while (uVar8 < (this->sin_cos_random_phase_buffer_).num_frames_);
  }
  pCVar1 = (this->window_).channel_views_._Mypair._Myval2._Myfirst;
  GenerateHannWindow(true,0x801,(this->unscaled_window_).channel_views_._Mypair._Myval2._Myfirst);
  pfVar2 = ((this->unscaled_window_).channel_views_._Mypair._Myval2._Myfirst)->begin_itr_;
  ScalarMultiply(0x801,__real_3f400000,pfVar2,pfVar2);
  do {
    pfVar9 = (float *)((longlong)pCVar1->begin_itr_ + uVar6);
    AddPointwise(0x801,pfVar2,pfVar9,pfVar9);
    uVar6 = uVar6 + 0x1000;
  } while (uVar6 < 0x3000);
  FftManager::ApplyReverseFftScaling(&this->fft_manager_,pCVar1);
  pCVar5 = (this->unscaled_window_).channel_views_._Mypair._Myval2._Myfirst;
  if (pCVar5 != pCVar1) {
    memcpy(pCVar5->begin_itr_,pCVar1->begin_itr_,pCVar5->size_ << 2);
  }
  InitializeCircularBuffersAndAccumulators(this);
  pCVar1 = (this->fft_size_input_).channel_views_._Mypair._Myval2._Mylast;
  for (pCVar5 = (this->fft_size_input_).channel_views_._Mypair._Myval2._Myfirst; pCVar5 != pCVar1;
      pCVar5 = pCVar5 + 1) {
    pCVar5->enabled_ = true;
    memset(pCVar5->begin_itr_,0,pCVar5->size_ << 2);
  }
  pCVar1 = (this->magnitude_compensation_).channel_views_._Mypair._Myval2._Mylast;
  for (pCVar5 = (this->magnitude_compensation_).channel_views_._Mypair._Myval2._Myfirst;
      pCVar5 != pCVar1; pCVar5 = pCVar5 + 1) {
    pCVar5->enabled_ = true;
    memset(pCVar5->begin_itr_,0,pCVar5->size_ << 2);
  }
  return this;
}

// AccumulateOverlap @ 14f07b9d0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
vraudio::SpectralReverb::AccumulateOverlap
          (SpectralReverb *this,ulong64 param_1,ChannelView *param_2)

{
  ulong64 uVar1;
  float *pfVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar1 = this->overlap_add_index_;
  pfVar2 = *(float **)
            ((longlong)
             (this->output_accumulator_)._Mypair._Myval2._Myfirst[param_1].channel_views_._Mypair.
             _Myval2._Myfirst + uVar1 * 0x18);
  AddPointwise(0x400,param_2->begin_itr_,pfVar2,pfVar2);
  uVar4 = (int)uVar1 + 1U & 3;
  pfVar2 = *(float **)
            ((longlong)
             (this->output_accumulator_)._Mypair._Myval2._Myfirst[param_1].channel_views_._Mypair.
             _Myval2._Myfirst + (ulonglong)uVar4 * 0x18);
  AddPointwise(0x400,param_2->begin_itr_ + 0x400,pfVar2,pfVar2);
  uVar4 = uVar4 + 1 & 3;
  pfVar2 = *(float **)
            ((longlong)
             (this->output_accumulator_)._Mypair._Myval2._Myfirst[param_1].channel_views_._Mypair.
             _Myval2._Myfirst + (ulonglong)uVar4 * 0x18);
  AddPointwise(0x400,param_2->begin_itr_ + 0x800,pfVar2,pfVar2);
  pfVar2 = *(float **)
            ((longlong)
             (this->output_accumulator_)._Mypair._Myval2._Myfirst[param_1].channel_views_._Mypair.
             _Myval2._Myfirst + (ulonglong)(uVar4 + 1 & 3) * 0x18);
  AddPointwise(0x400,param_2->begin_itr_ + 0xc00,pfVar2,pfVar2);
  CircularBuffer::InsertBuffer
            ((this->output_circular_buffers_)._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2,
             (ChannelView *)
             ((longlong)
              (this->output_accumulator_)._Mypair._Myval2._Myfirst[param_1].channel_views_._Mypair.
              _Myval2._Myfirst + this->overlap_add_index_ * 0x18));
  lVar3 = (longlong)
          (this->output_accumulator_)._Mypair._Myval2._Myfirst[param_1].channel_views_._Mypair.
          _Myval2._Myfirst;
  memset(*(void **)(lVar3 + this->overlap_add_index_ * 0x18),0,
         *(longlong *)(lVar3 + 8 + this->overlap_add_index_ * 0x18) << 2);
  return;
}

// GenerateAnalysisWindow @ 14f07bb30

void __thiscall vraudio::SpectralReverb::GenerateAnalysisWindow(SpectralReverb *this)

{
  ChannelView *pCVar1;
  float *pfVar2;
  ChannelView *pCVar3;
  ulonglong uVar4;
  float *pfVar5;
  
  pCVar1 = (this->window_).channel_views_._Mypair._Myval2._Myfirst;
  GenerateHannWindow(true,0x801,(this->unscaled_window_).channel_views_._Mypair._Myval2._Myfirst);
  pfVar2 = ((this->unscaled_window_).channel_views_._Mypair._Myval2._Myfirst)->begin_itr_;
  ScalarMultiply(0x801,__real_3f400000,pfVar2,pfVar2);
  uVar4 = 0;
  do {
    pfVar5 = (float *)((longlong)pCVar1->begin_itr_ + uVar4);
    AddPointwise(0x801,pfVar2,pfVar5,pfVar5);
    uVar4 = uVar4 + 0x1000;
  } while (uVar4 < 0x3000);
  FftManager::ApplyReverseFftScaling(&this->fft_manager_,pCVar1);
  pCVar3 = (this->unscaled_window_).channel_views_._Mypair._Myval2._Myfirst;
  if (pCVar3 != pCVar1) {
    memcpy(pCVar3->begin_itr_,pCVar1->begin_itr_,pCVar3->size_ << 2);
  }
  return;
}

// GenerateRandomPhaseBuffer @ 14f07bc00

void __thiscall vraudio::SpectralReverb::GenerateRandomPhaseBuffer(SpectralReverb *this)

{
  ChannelView *pCVar1;
  float *pfVar2;
  ulonglong uVar3;
  float fVar4;
  
  pCVar1 = (this->sin_cos_random_phase_buffer_).channel_views_._Mypair._Myval2._Myfirst;
  GenerateUniformNoise(0.0,__real_40490fdb,1,pCVar1);
  uVar3 = 0;
  if ((this->sin_cos_random_phase_buffer_).num_frames_ != 0) {
    do {
      fVar4 = cosf(pCVar1->begin_itr_[uVar3]);
      pCVar1[1].begin_itr_[uVar3] = fVar4;
      pfVar2 = pCVar1->begin_itr_;
      fVar4 = sinf(pfVar2[uVar3]);
      pfVar2[uVar3] = fVar4;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (this->sin_cos_random_phase_buffer_).num_frames_);
  }
  return;
}

// GetNextReverbBlock @ 14f07bca0

void __thiscall
vraudio::SpectralReverb::GetNextReverbBlock
          (SpectralReverb *this,ulong64 param_1,ChannelView *param_2,ChannelView *param_3)

{
  ChannelView *pCVar1;
  int iVar2;
  ulong64 uVar3;
  ChannelView *pCVar4;
  
  pCVar1 = (this->temp_magnitude_buffer_).channel_views_._Mypair._Myval2._Myfirst;
  pCVar4 = (this->scaled_magnitude_buffer_).channel_views_._Mypair._Myval2._Myfirst;
  if (pCVar1 != pCVar4) {
    memcpy(pCVar1->begin_itr_,pCVar4->begin_itr_,pCVar1->size_ << 2);
  }
  MultiplyAndAccumulatePointwise
            (0x801,(this->magnitude_delay_).channel_views_._Mypair._Myval2._Myfirst[param_1].
                   begin_itr_,
             ((this->feedback_).channel_views_._Mypair._Myval2._Myfirst)->begin_itr_,
             pCVar1->begin_itr_);
  pCVar4 = (this->magnitude_delay_).channel_views_._Mypair._Myval2._Myfirst + param_1;
  if (pCVar4 != pCVar1) {
    memcpy(pCVar4->begin_itr_,pCVar1->begin_itr_,pCVar4->size_ << 2);
  }
  iVar2 = rand();
  uVar3 = FindNextAlignedArrayIndex((ulonglong)(longlong)iVar2 % 0x37ff,4,0x40);
  pCVar4 = (this->sin_cos_random_phase_buffer_).channel_views_._Mypair._Myval2._Myfirst;
  FftManager::CanonicalFreqBufferFromMagnitudeAndSinCosPhase
            (&this->fft_manager_,uVar3,pCVar1,pCVar4,pCVar4 + 1,
             (this->temp_freq_buffer_).channel_views_._Mypair._Myval2._Myfirst);
  pCVar4 = (this->temp_freq_buffer_).channel_views_._Mypair._Myval2._Myfirst;
  FftManager::GetPffftFormatFreqBuffer(&this->fft_manager_,pCVar4,pCVar4 + 1);
  FftManager::TimeFromFreqDomain
            (&this->fft_manager_,
             (this->temp_freq_buffer_).channel_views_._Mypair._Myval2._Myfirst + 1,param_2);
  iVar2 = rand();
  uVar3 = FindNextAlignedArrayIndex((ulonglong)(longlong)iVar2 % 0x37ff,4,0x40);
  pCVar4 = (this->sin_cos_random_phase_buffer_).channel_views_._Mypair._Myval2._Myfirst;
  FftManager::CanonicalFreqBufferFromMagnitudeAndSinCosPhase
            (&this->fft_manager_,uVar3,pCVar1,pCVar4,pCVar4 + 1,
             (this->temp_freq_buffer_).channel_views_._Mypair._Myval2._Myfirst);
  pCVar1 = (this->temp_freq_buffer_).channel_views_._Mypair._Myval2._Myfirst;
  FftManager::GetPffftFormatFreqBuffer(&this->fft_manager_,pCVar1,pCVar1 + 1);
  FftManager::TimeFromFreqDomain
            (&this->fft_manager_,
             (this->temp_freq_buffer_).channel_views_._Mypair._Myval2._Myfirst + 1,param_3);
  return;
}

// InitializeCircularBuffersAndAccumulators @ 14f07be70

void __thiscall
vraudio::SpectralReverb::InitializeCircularBuffersAndAccumulators(SpectralReverb *this)

{
  unique_ptr<vraudio::CircularBuffer,std::default_delete<vraudio::CircularBuffer>_> *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  CircularBuffer *this_00;
  CircularBuffer *pCVar5;
  longlong lVar6;
  AudioBuffer *pAVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  CircularBuffer *pCVar10;
  ChannelView *pCVar11;
  CircularBuffer *pCVar12;
  CircularBuffer *pCVar13;
  AudioBuffer local_c8;
  AudioBuffer local_78;
  
  AudioBuffer::AudioBuffer(&local_78,1,0x400);
  for (pCVar11 = local_78.channel_views_._Mypair._Myval2._Myfirst;
      pCVar11 != local_78.channel_views_._Mypair._Myval2._Mylast; pCVar11 = pCVar11 + 1) {
    pCVar11->enabled_ = true;
    memset(pCVar11->begin_itr_,0,pCVar11->size_ << 2);
  }
  pCVar12 = (CircularBuffer *)0x0;
  pCVar10 = pCVar12;
  pCVar13 = pCVar12;
  do {
    puVar1 = (this->output_circular_buffers_)._Mypair._Myval2._Myfirst;
    this_00 = ::operator_new(0x70);
    pCVar5 = pCVar12;
    if (this_00 != (CircularBuffer *)0x0) {
      pCVar5 = CircularBuffer::CircularBuffer
                         (this_00,this->frames_per_buffer_ + 0x400,0x400,this->frames_per_buffer_);
    }
    pvVar2 = *(void **)((longlong)&pCVar10->num_input_frames_ + (longlong)puVar1);
    *(CircularBuffer **)((longlong)&pCVar10->num_input_frames_ + (longlong)puVar1) = pCVar5;
    if (pvVar2 != (void *)0x0) {
      AudioBuffer::~AudioBuffer((AudioBuffer *)((longlong)pvVar2 + 0x10));
      ::operator_delete(pvVar2,0x70);
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = this->frames_per_buffer_;
    for (lVar6 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x400)) / auVar4,0); lVar6 != 0;
        lVar6 = lVar6 + -1) {
      CircularBuffer::InsertBuffer
                (*(CircularBuffer **)
                  ((longlong)&pCVar10->num_input_frames_ +
                  (longlong)(this->output_circular_buffers_)._Mypair._Myval2._Myfirst),
                 local_78.channel_views_._Mypair._Myval2._Myfirst);
    }
    pAVar7 = AudioBuffer::AudioBuffer(&local_c8,4,0x400);
    AudioBuffer::operator=
              ((AudioBuffer *)
               ((longlong)&pCVar13->num_input_frames_ +
               (longlong)(this->output_accumulator_)._Mypair._Myval2._Myfirst),pAVar7);
    if (local_c8.channel_views_._Mypair._Myval2._Myfirst != (ChannelView *)0x0) {
      uVar8 = (((longlong)local_c8.channel_views_._Mypair._Myval2._Myend -
               (longlong)local_c8.channel_views_._Mypair._Myval2._Myfirst) / 0x18) * 0x18;
      pCVar11 = local_c8.channel_views_._Mypair._Myval2._Myfirst;
      if (0xfff < uVar8) {
        pCVar11 = *(ChannelView **)&local_c8.channel_views_._Mypair._Myval2._Myfirst[-1].enabled_;
        uVar8 = uVar8 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_c8.channel_views_._Mypair._Myval2._Myfirst +
                   (-8 - (longlong)pCVar11))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pCVar11,uVar8);
      local_c8.channel_views_._Mypair._Myval2._Myend = (ChannelView *)0x0;
      local_c8.channel_views_._Mypair._Myval2._Myfirst = (ChannelView *)0x0;
      local_c8.channel_views_._Mypair._Myval2._Mylast = (ChannelView *)0x0;
    }
    if (local_c8.data_._Mypair._Myval2._Myfirst != (float *)0x0) {
      free(*(void **)(local_c8.data_._Mypair._Myval2._Myfirst + -2));
    }
    pAVar7 = (this->output_accumulator_)._Mypair._Myval2._Myfirst;
    puVar3 = *(undefined8 **)((longlong)&(pCVar13->buffer_).data_size_ + (longlong)pAVar7);
    for (puVar9 = *(undefined8 **)
                   ((longlong)&(pCVar13->buffer_).data_._Mypair._Myval2._Myend + (longlong)pAVar7);
        puVar9 != puVar3; puVar9 = puVar9 + 3) {
      *(undefined1 *)(puVar9 + 2) = 1;
      memset((void *)*puVar9,0,puVar9[1] << 2);
    }
    pCVar10 = (CircularBuffer *)&pCVar10->num_output_frames_;
    pCVar13 = (CircularBuffer *)&(pCVar13->buffer_).channel_views_._Mypair._Myval2._Myend;
  } while (pCVar10 < &DAT_00000010);
  AudioBuffer::~AudioBuffer(&local_78);
  return;
}

// Process @ 14f07c0d0

void __thiscall
vraudio::SpectralReverb::Process
          (SpectralReverb *this,ChannelView *param_1,ChannelView *param_2,ChannelView *param_3)

{
  float *pfVar1;
  ChannelView *pCVar2;
  ulonglong uVar3;
  
  if ((this->is_gain_near_zero_ == false) && (this->is_feedback_near_zero_ == false)) {
    CircularBuffer::InsertBuffer(&this->input_circular_buffer_,param_1);
    uVar3 = (this->input_circular_buffer_).num_valid_frames_;
    while (0x3ff < uVar3) {
      pfVar1 = ((this->fft_size_input_).channel_views_._Mypair._Myval2._Myfirst)->begin_itr_;
      memmove(pfVar1,pfVar1 + 0x400,0x3000);
      CircularBuffer::RetrieveBufferWithOffset
                (&this->input_circular_buffer_,0xc00,
                 (this->fft_size_input_).channel_views_._Mypair._Myval2._Myfirst);
      FftManager::FreqFromTimeDomain
                (&this->fft_manager_,(this->fft_size_input_).channel_views_._Mypair._Myval2._Myfirst
                 ,(this->temp_freq_buffer_).channel_views_._Mypair._Myval2._Myfirst);
      pCVar2 = (this->temp_freq_buffer_).channel_views_._Mypair._Myval2._Myfirst;
      FftManager::GetCanonicalFormatFreqBuffer(&this->fft_manager_,pCVar2,pCVar2 + 1);
      FftManager::MagnitudeFromCanonicalFreqBuffer
                (&this->fft_manager_,
                 (this->temp_freq_buffer_).channel_views_._Mypair._Myval2._Myfirst + 1,
                 (this->scaled_magnitude_buffer_).channel_views_._Mypair._Myval2._Myfirst);
      pfVar1 = ((this->scaled_magnitude_buffer_).channel_views_._Mypair._Myval2._Myfirst)->
               begin_itr_;
      MultiplyPointwise(0x801,((this->magnitude_compensation_).channel_views_._Mypair._Myval2.
                              _Myfirst)->begin_itr_,pfVar1,pfVar1);
      pCVar2 = (this->out_time_buffer_).channel_views_._Mypair._Myval2._Myfirst;
      GetNextReverbBlock(this,this->magnitude_delay_index_,pCVar2,pCVar2 + 1);
      uVar3 = (this->magnitude_delay_index_ + 1) % 3;
      this->magnitude_delay_index_ = uVar3;
      pCVar2 = (this->out_time_buffer_).channel_views_._Mypair._Myval2._Myfirst;
      GetNextReverbBlock(this,uVar3,pCVar2 + 2,pCVar2 + 3);
      pCVar2 = (this->out_time_buffer_).channel_views_._Mypair._Myval2._Myfirst;
      pfVar1 = pCVar2->begin_itr_;
      AddPointwise(0x1000,pfVar1,pCVar2[2].begin_itr_,pfVar1);
      pCVar2 = (this->out_time_buffer_).channel_views_._Mypair._Myval2._Myfirst;
      pfVar1 = pCVar2[1].begin_itr_;
      AddPointwise(0x1000,pfVar1,pCVar2[3].begin_itr_,pfVar1);
      pfVar1 = ((this->out_time_buffer_).channel_views_._Mypair._Myval2._Myfirst)->begin_itr_;
      MultiplyPointwise(0x1000,pfVar1,
                        ((this->window_).channel_views_._Mypair._Myval2._Myfirst)->begin_itr_,pfVar1
                       );
      pfVar1 = (this->out_time_buffer_).channel_views_._Mypair._Myval2._Myfirst[1].begin_itr_;
      MultiplyPointwise(0x1000,pfVar1,
                        ((this->window_).channel_views_._Mypair._Myval2._Myfirst)->begin_itr_,pfVar1
                       );
      AccumulateOverlap(this,0,(this->out_time_buffer_).channel_views_._Mypair._Myval2._Myfirst);
      AccumulateOverlap(this,1,(this->out_time_buffer_).channel_views_._Mypair._Myval2._Myfirst + 1)
      ;
      this->overlap_add_index_ = (ulonglong)((int)this->overlap_add_index_ + 1U & 3);
      uVar3 = (this->input_circular_buffer_).num_valid_frames_;
    }
    CircularBuffer::RetrieveBuffer
              ((((this->output_circular_buffers_)._Mypair._Myval2._Myfirst)->_Mypair)._Myval2,
               param_2);
    CircularBuffer::RetrieveBuffer
              ((this->output_circular_buffers_)._Mypair._Myval2._Myfirst[1]._Mypair._Myval2,param_3)
    ;
    return;
  }
  memset(param_2->begin_itr_,0,param_2->size_ << 2);
  memset(param_3->begin_itr_,0,param_3->size_ << 2);
  return;
}

// SetGain @ 14f07c360

void __thiscall vraudio::SpectralReverb::SetGain(SpectralReverb *this,float param_1)

{
  bool bVar1;
  float fVar2;
  
  ScalarMultiply((this->window_).num_frames_,param_1,
                 ((this->unscaled_window_).channel_views_._Mypair._Myval2._Myfirst)->begin_itr_,
                 ((this->window_).channel_views_._Mypair._Myval2._Myfirst)->begin_itr_);
  fVar2 = __real_3a83126f;
  bVar1 = param_1 <= __real_3a83126f;
  this->is_gain_near_zero_ = bVar1;
  if ((param_1 <= fVar2) || (this->is_feedback_near_zero_ != bVar1)) {
    CircularBuffer::Clear(&this->input_circular_buffer_);
  }
  return;
}

// SetRt60PerOctaveBand @ 14f07c3d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall vraudio::SpectralReverb::SetRt60PerOctaveBand(SpectralReverb *this,float *param_1)

{
  float *pfVar1;
  ChannelView *pCVar2;
  ChannelView *pCVar3;
  bool bVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  float *pfVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float *pfVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  pCVar2 = (this->feedback_).channel_views_._Mypair._Myval2._Myfirst;
  iVar9 = this->sample_rate_;
  memset(pCVar2->begin_itr_,0,pCVar2->size_ << 2);
  pCVar3 = (this->magnitude_compensation_).channel_views_._Mypair._Myval2._Myfirst;
  memset(pCVar3->begin_itr_,0,pCVar3->size_ << 2);
  fVar23 = __real_5f000000;
  fVar22 = __real_3e19999a;
  fVar21 = __real_42c80000;
  fVar27 = (float)iVar9 * ___real_37aec33e;
  fVar20 = 0.0;
  fVar26 = (float)iVar9 * __real_39800000;
  if (__real_3e19999a <= fVar27 * *param_1) {
    fVar17 = fVar27 * *param_1 * __real_42c80000;
    lVar10 = 0;
    if ((__real_5f000000 <= fVar17) && (fVar17 = fVar17 - __real_5f000000, fVar17 < __real_5f000000)
       ) {
      lVar10 = -0x8000000000000000;
    }
    uVar8 = (longlong)fVar17 + -0xf + lVar10;
    iVar9 = 0x9b4;
    if (uVar8 < 0x9b4) {
      iVar9 = (int)uVar8;
    }
    if (iVar9 != -1) {
      fVar17 = kSpectralReverbFeedback[iVar9];
      fVar24 = kMagnitudeCompensation[iVar9];
      goto LAB_14f07c4f3;
    }
  }
  fVar17 = 0.0;
  fVar24 = 0.0;
LAB_14f07c4f3:
  lVar10 = 0;
  fVar18 = (kSqrtTwo * ___real_45fa0000) / fVar26;
  if ((__real_5f000000 <= fVar18) && (fVar18 = fVar18 - __real_5f000000, fVar18 < __real_5f000000))
  {
    lVar10 = -0x8000000000000000;
  }
  fVar25 = kSqrtTwo * ___real_41fa0000;
  uVar8 = (longlong)fVar18 + lVar10;
  if (pCVar2->size_ < (ulonglong)((longlong)fVar18 + lVar10)) {
    uVar8 = pCVar2->size_;
  }
  uVar13 = 0;
  fVar18 = 0.0;
  uVar12 = uVar13;
  uVar14 = uVar13;
  if (3 < uVar8) {
    uVar16 = 2;
    do {
      if (fVar25 < (float)uVar12 * fVar26) {
        uVar14 = uVar14 + 1;
        fVar25 = kSqrtTwo * kOctaveBandCentres[uVar14];
        if (fVar22 <= fVar27 * param_1[uVar14]) {
          fVar17 = fVar27 * param_1[uVar14] * fVar21;
          lVar10 = 0;
          if ((fVar23 <= fVar17) && (fVar17 = fVar17 - fVar23, fVar17 < fVar23)) {
            lVar10 = -0x8000000000000000;
          }
          iVar9 = 0x9b4;
          if (((longlong)fVar17 + lVar10) - 0xfU < 0x9b4) {
            iVar9 = (int)((longlong)fVar17 + lVar10) + -0xf;
          }
          if (iVar9 != -1) {
            fVar24 = kMagnitudeCompensation[iVar9];
            fVar17 = kSpectralReverbFeedback[iVar9];
            goto LAB_14f07c615;
          }
        }
        fVar24 = 0.0;
        fVar17 = 0.0;
      }
LAB_14f07c615:
      pCVar2->begin_itr_[uVar12] = fVar17;
      pCVar3->begin_itr_[uVar12] = fVar24;
      if (fVar25 < (float)(uVar16 - 1) * fVar26) {
        uVar14 = uVar14 + 1;
        fVar25 = kSqrtTwo * kOctaveBandCentres[uVar14];
        fVar17 = fVar18;
        fVar24 = fVar18;
        if (fVar22 <= fVar27 * param_1[uVar14]) {
          fVar17 = fVar27 * param_1[uVar14] * fVar21;
          lVar10 = 0;
          if ((fVar23 <= fVar17) && (fVar17 = fVar17 - fVar23, fVar17 < fVar23)) {
            lVar10 = -0x8000000000000000;
          }
          iVar9 = 0x9b4;
          if (((longlong)fVar17 + lVar10) - 0xfU < 0x9b4) {
            iVar9 = (int)((longlong)fVar17 + lVar10) + -0xf;
          }
          fVar17 = fVar18;
          if (iVar9 != -1) {
            fVar17 = kSpectralReverbFeedback[iVar9];
            fVar24 = kMagnitudeCompensation[iVar9];
          }
        }
      }
      pCVar2->begin_itr_[uVar12 + 1] = fVar17;
      pCVar3->begin_itr_[uVar12 + 1] = fVar24;
      if ((longlong)uVar16 < 0) {
        fVar19 = (float)(uVar16 >> 1) + (float)(uVar16 >> 1);
      }
      else {
        fVar19 = (float)(longlong)uVar16;
      }
      if (fVar25 < fVar19 * fVar26) {
        uVar14 = uVar14 + 1;
        fVar25 = kSqrtTwo * kOctaveBandCentres[uVar14];
        fVar17 = fVar18;
        fVar24 = fVar18;
        if (fVar22 <= fVar27 * param_1[uVar14]) {
          fVar17 = fVar27 * param_1[uVar14] * fVar21;
          lVar10 = 0;
          if ((fVar23 <= fVar17) && (fVar17 = fVar17 - fVar23, fVar17 < fVar23)) {
            lVar10 = -0x8000000000000000;
          }
          iVar9 = 0x9b4;
          if (((longlong)fVar17 + lVar10) - 0xfU < 0x9b4) {
            iVar9 = (int)((longlong)fVar17 + lVar10) + -0xf;
          }
          fVar17 = fVar18;
          if (iVar9 != -1) {
            fVar17 = kSpectralReverbFeedback[iVar9];
            fVar24 = kMagnitudeCompensation[iVar9];
          }
        }
      }
      pCVar2->begin_itr_[uVar12 + 2] = fVar17;
      pCVar3->begin_itr_[uVar12 + 2] = fVar24;
      if (fVar25 < (float)(uVar16 + 1) * fVar26) {
        uVar14 = uVar14 + 1;
        fVar25 = kSqrtTwo * kOctaveBandCentres[uVar14];
        fVar17 = fVar18;
        fVar24 = fVar18;
        if (fVar22 <= fVar27 * param_1[uVar14]) {
          fVar17 = fVar27 * param_1[uVar14] * fVar21;
          lVar10 = 0;
          if ((fVar23 <= fVar17) && (fVar17 = fVar17 - fVar23, fVar17 < fVar23)) {
            lVar10 = -0x8000000000000000;
          }
          iVar9 = 0x9b4;
          if (((longlong)fVar17 + lVar10) - 0xfU < 0x9b4) {
            iVar9 = (int)((longlong)fVar17 + lVar10) + -0xf;
          }
          fVar17 = fVar18;
          if (iVar9 != -1) {
            fVar17 = kSpectralReverbFeedback[iVar9];
            fVar24 = kMagnitudeCompensation[iVar9];
          }
        }
      }
      uVar16 = uVar16 + 4;
      pCVar2->begin_itr_[uVar12 + 3] = fVar17;
      pCVar3->begin_itr_[uVar12 + 3] = fVar24;
      uVar12 = uVar12 + 4;
    } while (uVar12 < uVar8 - 3);
  }
  if (uVar12 < uVar8) {
    pfVar15 = param_1 + uVar14;
    do {
      if (fVar25 < (float)uVar12 * fVar26) {
        pfVar15 = pfVar15 + 1;
        fVar25 = kSqrtTwo *
                 *(float *)((longlong)pfVar15 + ((longlong)kOctaveBandCentres - (longlong)param_1));
        fVar17 = fVar18;
        fVar24 = fVar18;
        if (fVar22 <= fVar27 * *pfVar15) {
          fVar17 = fVar27 * *pfVar15 * fVar21;
          lVar10 = 0;
          if ((fVar23 <= fVar17) && (fVar17 = fVar17 - fVar23, fVar17 < fVar23)) {
            lVar10 = -0x8000000000000000;
          }
          iVar9 = 0x9b4;
          if (((longlong)fVar17 + lVar10) - 0xfU < 0x9b4) {
            iVar9 = (int)((longlong)fVar17 + lVar10) + -0xf;
          }
          fVar17 = fVar18;
          if (iVar9 != -1) {
            fVar17 = kSpectralReverbFeedback[iVar9];
            fVar24 = kMagnitudeCompensation[iVar9];
          }
        }
      }
      pCVar2->begin_itr_[uVar12] = fVar17;
      pCVar3->begin_itr_[uVar12] = fVar24;
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar8);
  }
  pfVar11 = pCVar2->begin_itr_;
  pfVar15 = pfVar11 + pCVar2->size_;
  uVar8 = pCVar2->size_ & 0x3fffffffffffffff;
  if (pfVar15 < pfVar11) {
    uVar8 = uVar13;
  }
  if ((uVar8 != 0) && (7 < uVar8)) {
    fVar26 = 0.0;
    fVar27 = 0.0;
    fVar17 = 0.0;
    fVar24 = 0.0;
    fVar20 = 0.0;
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar23 = 0.0;
    do {
      uVar13 = uVar13 + 8;
      fVar26 = fVar26 + *pfVar11;
      fVar27 = fVar27 + pfVar11[1];
      fVar17 = fVar17 + pfVar11[2];
      fVar24 = fVar24 + pfVar11[3];
      pfVar1 = pfVar11 + 4;
      pfVar5 = pfVar11 + 5;
      pfVar6 = pfVar11 + 6;
      pfVar7 = pfVar11 + 7;
      pfVar11 = pfVar11 + 8;
      fVar20 = fVar20 + *pfVar1;
      fVar21 = fVar21 + *pfVar5;
      fVar22 = fVar22 + *pfVar6;
      fVar23 = fVar23 + *pfVar7;
    } while (uVar13 != (uVar8 & 0xfffffffffffffff8));
    fVar20 = fVar22 + fVar17 + fVar20 + fVar26 + fVar23 + fVar24 + fVar21 + fVar27;
  }
  for (; pfVar11 != pfVar15; pfVar11 = pfVar11 + 1) {
    fVar20 = fVar20 + *pfVar11;
  }
  bVar4 = fVar20 < ___real_3e6d2f7c;
  this->is_feedback_near_zero_ = bVar4;
  if ((this->is_gain_near_zero_ != false) || (bVar4)) {
    CircularBuffer::Clear(&this->input_circular_buffer_);
  }
  return;
}

