// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 8

// _Emplace_reallocate<unsigned___int64_const_&,unsigned___int64_const_&> @ 14f079490

AudioBuffer * __thiscall
std::vector<vraudio::AudioBuffer,std::allocator<vraudio::AudioBuffer>_>::
_Emplace_reallocate<unsigned___int64_const_&,unsigned___int64_const_&>
          (vector<vraudio::AudioBuffer,std::allocator<vraudio::AudioBuffer>_> *this,
          AudioBuffer *param_1,ulong64 *param_2,ulong64 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  AudioBuffer *pAVar3;
  longlong lVar4;
  AudioBuffer *pAVar5;
  AudioBuffer *pAVar6;
  longlong lVar7;
  ulong64 uVar8;
  AudioBuffer *pAVar9;
  ulonglong uVar10;
  AudioBuffer *pAVar11;
  
  pAVar3 = (this->_Mypair)._Myval2._Myfirst;
  uVar10 = 0x38e38e38e38e38e;
  lVar7 = ((longlong)param_1 - (longlong)pAVar3) / 0x12 +
          ((longlong)param_1 - (longlong)pAVar3 >> 0x3f);
  lVar4 = ((longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pAVar3) / 0x48;
  if (lVar4 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar1 = lVar4 + 1;
  uVar2 = ((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pAVar3) / 0x48;
  if (uVar2 <= 0x38e38e38e38e38e - (uVar2 >> 1)) {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar10 = uVar1;
    if (uVar1 <= uVar2) {
      uVar10 = uVar2;
    }
    if (0x38e38e38e38e38e < uVar10) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  pAVar6 = _Allocate<16,std::_Default_allocate_traits>(uVar10 * 0x48);
  pAVar3 = pAVar6 + ((lVar7 >> 2) - (lVar7 >> 0x3f));
  vraudio::AudioBuffer::AudioBuffer(pAVar3,*param_2,*param_3);
  pAVar9 = (this->_Mypair)._Myval2._Mylast;
  pAVar11 = (this->_Mypair)._Myval2._Myfirst;
  pAVar5 = pAVar6;
  if (param_1 == pAVar9) {
    for (; pAVar11 != pAVar9; pAVar11 = pAVar11 + 1) {
      vraudio::AudioBuffer::AudioBuffer(pAVar5,pAVar11);
      pAVar5 = pAVar5 + 1;
    }
  }
  else {
    for (; pAVar11 != param_1; pAVar11 = pAVar11 + 1) {
      vraudio::AudioBuffer::AudioBuffer(pAVar5,pAVar11);
      pAVar5 = pAVar5 + 1;
    }
    pAVar9 = (this->_Mypair)._Myval2._Mylast;
    pAVar11 = pAVar3;
    for (; param_1 != pAVar9; param_1 = param_1 + 1) {
      pAVar11 = pAVar11 + 1;
      vraudio::AudioBuffer::AudioBuffer(pAVar11,param_1);
    }
  }
  pAVar9 = (this->_Mypair)._Myval2._Myfirst;
  if (pAVar9 != (AudioBuffer *)0x0) {
    pAVar11 = (this->_Mypair)._Myval2._Mylast;
    for (; pAVar9 != pAVar11; pAVar9 = pAVar9 + 1) {
      vraudio::AudioBuffer::~AudioBuffer(pAVar9);
    }
    pAVar9 = (this->_Mypair)._Myval2._Myfirst;
    uVar8 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pAVar9) / 0x48) * 0x48;
    pAVar11 = pAVar9;
    if (0xfff < uVar8) {
      pAVar11 = *(AudioBuffer **)&pAVar9[-1].source_id_;
      uVar8 = uVar8 + 0x27;
      if (0x1f < (ulonglong)((longlong)pAVar9 + (-8 - (longlong)pAVar11))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pAVar11,uVar8);
  }
  (this->_Mypair)._Myval2._Myfirst = pAVar6;
  (this->_Mypair)._Myval2._Mylast = pAVar6 + uVar1;
  (this->_Mypair)._Myval2._Myend = pAVar6 + uVar10;
  return pAVar3;
}

// _Minmax_element_vectorized<float> @ 14f0796f0

pair<float_*,float_*> * __cdecl
std::_Minmax_element_vectorized<float>
          (pair<float_*,float_*> *__return_storage_ptr__,float *param_1,float *param_2)

{
  float *pfVar1;
  _Min_max_element_t *p_Var2;
  _Min_max_element_t local_18;
  
  p_Var2 = __std_minmax_element_f(&local_18,param_1,param_2,false);
  pfVar1 = p_Var2->_Max;
  __return_storage_ptr__->first = p_Var2->_Min;
  __return_storage_ptr__->second = pfVar1;
  return __return_storage_ptr__;
}

// ReverbOnsetCompensator @ 14f079730

/* WARNING: Type propagation algorithm not settling */

ReverbOnsetCompensator * __thiscall
vraudio::ReverbOnsetCompensator::ReverbOnsetCompensator
          (ReverbOnsetCompensator *this,int param_1,ulong64 param_2,FftManager *param_3)

{
  ulong64 *puVar1;
  ulong64 uVar2;
  FftManager *pFVar3;
  ChannelView *pCVar4;
  _List_node<std::unique_ptr<vraudio::ReverbOnsetUpdateProcessor,std::default_delete<vraudio::ReverbOnsetUpdateProcessor>_>,void_*>
  *p_Var5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulong64 uVar17;
  _List_node<std::unique_ptr<vraudio::ReverbOnsetUpdateProcessor,std::default_delete<vraudio::ReverbOnsetUpdateProcessor>_>,void_*>
  *p_Var18;
  basic_ostream<char,std::char_traits<char>_> *pbVar19;
  ReverbOnsetUpdateProcessor *this_00;
  ReverbOnsetUpdateProcessor *pRVar20;
  _List_node<std::unique_ptr<vraudio::ReverbOnsetUpdateProcessor,std::default_delete<vraudio::ReverbOnsetUpdateProcessor>_>,void_*>
  *p_Var21;
  ReverbOnsetCompensator *extraout_RAX;
  ChannelView *pCVar22;
  ReverbOnsetUpdateProcessor *pRVar23;
  ReverbOnsetUpdateProcessor *pRVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int iStack_1bc;
  undefined1 local_1b8 [112];
  char *local_148;
  int local_140;
  basic_ios<char,std::char_traits<char>_> local_130 [2];
  
  pRVar24 = (ReverbOnsetUpdateProcessor *)0x0;
  this->sampling_rate_ = param_1;
  this->frames_per_buffer_ = param_2;
  this->fft_manager_ = param_3;
  (this->bandpassed_noise_left_)._Mypair._Myval2._Myfirst = (AudioBuffer *)0x0;
  (this->bandpassed_noise_left_)._Mypair._Myval2._Mylast = (AudioBuffer *)0x0;
  (this->bandpassed_noise_left_)._Mypair._Myval2._Myend = (AudioBuffer *)0x0;
  (this->bandpassed_noise_right_)._Mypair._Myval2._Myfirst = (AudioBuffer *)0x0;
  (this->bandpassed_noise_right_)._Mypair._Myval2._Mylast = (AudioBuffer *)0x0;
  (this->bandpassed_noise_right_)._Mypair._Myval2._Myend = (AudioBuffer *)0x0;
  AudioBuffer::AudioBuffer(&this->base_curves_,2,0x1800);
  AudioBuffer::AudioBuffer(&this->adder_curves_,2,0x1800);
  uVar2 = this->frames_per_buffer_;
  pFVar3 = this->fft_manager_;
  uVar17 = CeilToMultipleOfFramesPerBuffer(0x1800,uVar2);
  PartitionedFftFilter::PartitionedFftFilter(&this->left_filter_,uVar17,uVar2,pFVar3);
  uVar2 = this->frames_per_buffer_;
  pFVar3 = this->fft_manager_;
  uVar17 = CeilToMultipleOfFramesPerBuffer(0x1800,uVar2);
  PartitionedFftFilter::PartitionedFftFilter(&this->right_filter_,uVar17,uVar2,pFVar3);
  uVar2 = this->frames_per_buffer_;
  uVar17 = CeilToMultipleOfFramesPerBuffer(0x1800,uVar2);
  DelayFilter::DelayFilter(&this->delay_filter_,uVar17,uVar2);
  this->num_active_processors_ = 0;
  (this->update_processors_)._Mypair._Myval2._Myhead =
       (_List_node<std::unique_ptr<vraudio::ReverbOnsetUpdateProcessor,std::default_delete<vraudio::ReverbOnsetUpdateProcessor>_>,void_*>
        *)0x0;
  (this->update_processors_)._Mypair._Myval2._Mysize = 0;
  p_Var18 = ::operator_new(0x18);
  p_Var18->_Next = p_Var18;
  p_Var18->_Prev = p_Var18;
  (this->update_processors_)._Mypair._Myval2._Myhead = p_Var18;
  AudioBuffer::AudioBuffer(&this->temp_kernel_buffer_,2,this->frames_per_buffer_);
  AudioBuffer::AudioBuffer(&this->temp_freq_buffer_,1,this->fft_manager_->fft_size_);
  if (this->fft_manager_ == (FftManager *)0x0) {
    local_1b8._0_8_ =
         &std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::_vbtable_;
    std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_130)
    ;
    std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)local_1b8,
               (basic_streambuf<char,std::char_traits<char>_> *)(local_1b8 + 8),false);
    *(undefined ***)(local_1b8 + *(int *)(local_1b8._0_8_ + 4)) =
         std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)&iStack_1bc + (longlong)*(int *)(local_1b8._0_8_ + 4)) =
         *(int *)(local_1b8._0_8_ + 4) + -0x88;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)(local_1b8 + 8));
    local_148 = (char *)0x0;
    local_1b8._8_8_ =
         std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_140 = 4;
    pbVar19 = std::operator<<<std::char_traits<char>_>
                        ((basic_ostream<char,std::char_traits<char>_> *)local_1b8,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\dsp\\reverb_onset_compensator.cc"
                        );
    pbVar19 = std::operator<<<std::char_traits<char>_>(pbVar19,":");
    pbVar19 = (basic_ostream<char,std::char_traits<char>_> *)
              std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar19,0x39);
    std::operator<<<std::char_traits<char>_>(pbVar19,": ");
    pRVar20 = (ReverbOnsetUpdateProcessor *)&DAT_00000003;
  }
  else {
    pRVar20 = pRVar24;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       pRVar20 = (ReverbOnsetUpdateProcessor *)0x0,
       `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)
                 &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                  ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false);
      atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
      _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (((ulonglong)pRVar20 & 1) != 0) {
    FatalLogger::~FatalLogger((FatalLogger *)local_1b8);
  }
  pCVar4 = (this->temp_kernel_buffer_).channel_views_._Mypair._Myval2._Mylast;
  for (pCVar22 = (this->temp_kernel_buffer_).channel_views_._Mypair._Myval2._Myfirst;
      pCVar22 != pCVar4; pCVar22 = pCVar22 + 1) {
    pCVar22->enabled_ = true;
    memset(pCVar22->begin_itr_,0,pCVar22->size_ << 2);
  }
  pCVar4 = (this->temp_freq_buffer_).channel_views_._Mypair._Myval2._Mylast;
  for (pCVar22 = (this->temp_freq_buffer_).channel_views_._Mypair._Myval2._Myfirst;
      pCVar22 != pCVar4; pCVar22 = pCVar22 + 1) {
    pCVar22->enabled_ = true;
    memset(pCVar22->begin_itr_,0,pCVar22->size_ << 2);
  }
  GenerateNoiseVectors(this);
  memmove(((this->adder_curves_).channel_views_._Mypair._Myval2._Myfirst)->begin_itr_,
          kLowCorrectionCurve,0x6000);
  memmove((this->adder_curves_).channel_views_._Mypair._Myval2._Myfirst[1].begin_itr_,
          kHighCorrectionCurve,0x6000);
  fVar16 = __real_45600800;
  fVar15 = __real_3ea45b7d;
  fVar14 = __real_3dff328c;
  fVar13 = __real_3d9f5f39;
  fVar12 = __real_3d54a0a4;
  fVar11 = __real_3d218e21;
  fVar10 = __real_3d0c9560;
  fVar9 = __real_3c43fc9f;
  fVar8 = __real_3c19bf97;
  fVar7 = __real_399243eb;
  fVar6 = __real_33a72314;
  pCVar4 = (this->base_curves_).channel_views_._Mypair._Myval2._Myfirst;
  pRVar20 = pRVar24;
  do {
    fVar26 = (float)pRVar20 - fVar16;
    pCVar4->begin_itr_[(longlong)pRVar20] = 0.02770402;
    fVar25 = fVar26 * fVar7;
    pCVar4[1].begin_itr_[(longlong)pRVar20] = 0.20789129;
    fVar26 = fVar26 * fVar26 * fVar6;
    pCVar4->begin_itr_[(longlong)pRVar20] = pCVar4->begin_itr_[(longlong)pRVar20] - fVar25 * fVar11;
    pCVar4[1].begin_itr_[(longlong)pRVar20] =
         pCVar4[1].begin_itr_[(longlong)pRVar20] - fVar25 * fVar15;
    pCVar4->begin_itr_[(longlong)pRVar20] = fVar26 * fVar12 + pCVar4->begin_itr_[(longlong)pRVar20];
    fVar27 = fVar26 * fVar25;
    pCVar4[1].begin_itr_[(longlong)pRVar20] =
         fVar26 * fVar14 + pCVar4[1].begin_itr_[(longlong)pRVar20];
    pCVar4->begin_itr_[(longlong)pRVar20] = pCVar4->begin_itr_[(longlong)pRVar20] - fVar27 * fVar13;
    pCVar4[1].begin_itr_[(longlong)pRVar20] =
         fVar27 * fVar9 + pCVar4[1].begin_itr_[(longlong)pRVar20];
    pCVar4->begin_itr_[(longlong)pRVar20] =
         fVar27 * fVar25 * fVar10 + pCVar4->begin_itr_[(longlong)pRVar20];
    pCVar4[1].begin_itr_[(longlong)pRVar20] =
         pCVar4[1].begin_itr_[(longlong)pRVar20] - fVar27 * fVar25 * fVar8;
    fVar25 = pCVar4->begin_itr_[(longlong)pRVar20];
    if (fVar25 <= 0.0) {
      fVar25 = 0.0;
    }
    pCVar4->begin_itr_[(longlong)pRVar20] = fVar25;
    fVar25 = pCVar4[1].begin_itr_[(longlong)pRVar20];
    if (fVar25 <= 0.0) {
      fVar25 = 0.0;
    }
    pCVar4[1].begin_itr_[(longlong)pRVar20] = fVar25;
    pRVar20 = (ReverbOnsetUpdateProcessor *)((longlong)&pRVar20->sampling_rate_ + 1);
    pRVar23 = pRVar24;
  } while (pRVar20 < (ReverbOnsetUpdateProcessor *)0x1800);
  while( true ) {
    this_00 = ::operator_new(0x108);
    pRVar20 = pRVar24;
    if (this_00 != (ReverbOnsetUpdateProcessor *)0x0) {
      pRVar20 = ReverbOnsetUpdateProcessor::ReverbOnsetUpdateProcessor
                          (this_00,this->frames_per_buffer_,this->sampling_rate_,&this->base_curves_
                           ,&this->adder_curves_);
    }
    p_Var18 = ((this->update_processors_)._Mypair._Myval2._Myhead)->_Next;
    if ((this->update_processors_)._Mypair._Myval2._Mysize == 0xaaaaaaaaaaaaaaa) break;
    p_Var21 = ::operator_new(0x18);
    pRVar23 = (ReverbOnsetUpdateProcessor *)((longlong)&pRVar23->sampling_rate_ + 1);
    (p_Var21->_Myval)._Mypair._Myval2 = pRVar20;
    puVar1 = &(this->update_processors_)._Mypair._Myval2._Mysize;
    *puVar1 = *puVar1 + 1;
    p_Var5 = p_Var18->_Prev;
    p_Var21->_Next = p_Var18;
    p_Var21->_Prev = p_Var5;
    p_Var18->_Prev = p_Var21;
    p_Var5->_Next = p_Var21;
    if ((ReverbOnsetUpdateProcessor *)0xb < pRVar23) {
      return this;
    }
  }
  std::_Xlength_error("list too long");
  return extraout_RAX;
}

// GenerateCorrectionCurves @ 14f079d70

void __thiscall
vraudio::ReverbOnsetCompensator::GenerateCorrectionCurves(ReverbOnsetCompensator *this)

{
  ChannelView *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  memmove(((this->adder_curves_).channel_views_._Mypair._Myval2._Myfirst)->begin_itr_,
          kLowCorrectionCurve,0x6000);
  memmove((this->adder_curves_).channel_views_._Mypair._Myval2._Myfirst[1].begin_itr_,
          kHighCorrectionCurve,0x6000);
  fVar12 = __real_45600800;
  fVar11 = __real_3ea45b7d;
  fVar10 = __real_3dff328c;
  fVar9 = __real_3d9f5f39;
  fVar8 = __real_3d54a0a4;
  fVar7 = __real_3d218e21;
  fVar6 = __real_3d0c9560;
  fVar5 = __real_3c43fc9f;
  fVar4 = __real_3c19bf97;
  fVar3 = __real_399243eb;
  fVar2 = __real_33a72314;
  pCVar1 = (this->base_curves_).channel_views_._Mypair._Myval2._Myfirst;
  uVar13 = 0;
  do {
    fVar15 = (float)uVar13 - fVar12;
    pCVar1->begin_itr_[uVar13] = 0.02770402;
    fVar14 = fVar15 * fVar3;
    pCVar1[1].begin_itr_[uVar13] = 0.20789129;
    fVar15 = fVar15 * fVar15 * fVar2;
    pCVar1->begin_itr_[uVar13] = pCVar1->begin_itr_[uVar13] - fVar14 * fVar7;
    pCVar1[1].begin_itr_[uVar13] = pCVar1[1].begin_itr_[uVar13] - fVar14 * fVar11;
    pCVar1->begin_itr_[uVar13] = fVar15 * fVar8 + pCVar1->begin_itr_[uVar13];
    fVar16 = fVar15 * fVar14;
    pCVar1[1].begin_itr_[uVar13] = fVar15 * fVar10 + pCVar1[1].begin_itr_[uVar13];
    pCVar1->begin_itr_[uVar13] = pCVar1->begin_itr_[uVar13] - fVar16 * fVar9;
    pCVar1[1].begin_itr_[uVar13] = fVar16 * fVar5 + pCVar1[1].begin_itr_[uVar13];
    pCVar1->begin_itr_[uVar13] = fVar16 * fVar14 * fVar6 + pCVar1->begin_itr_[uVar13];
    pCVar1[1].begin_itr_[uVar13] = pCVar1[1].begin_itr_[uVar13] - fVar16 * fVar14 * fVar4;
    fVar14 = pCVar1->begin_itr_[uVar13];
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    pCVar1->begin_itr_[uVar13] = fVar14;
    fVar14 = pCVar1[1].begin_itr_[uVar13];
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    pCVar1[1].begin_itr_[uVar13] = fVar14;
    uVar13 = uVar13 + 1;
  } while (uVar13 < 0x1800);
  return;
}

// GenerateNoiseVectors @ 14f079fe0

/* WARNING: Type propagation algorithm not settling */

void __thiscall vraudio::ReverbOnsetCompensator::GenerateNoiseVectors(ReverbOnsetCompensator *this)

{
  AudioBuffer **ppAVar1;
  AudioBuffer *pAVar2;
  undefined8 *puVar3;
  void *pvVar4;
  float *pfVar5;
  uint uVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  _Min_max_element_t *p_Var9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulong64 local_res8;
  _Min_max_element_t local_78;
  _Min_max_element_t local_68 [4];
  
  uVar7 = GetNumReverbOctaveBands(this->sampling_rate_);
  uVar8 = CeilToMultipleOfFramesPerBuffer(0x1800,this->frames_per_buffer_);
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar10 = 0;
  uVar11 = uVar10;
  local_res8 = uVar8;
  if (uVar7 != 0) {
    do {
      pAVar2 = (this->bandpassed_noise_left_)._Mypair._Myval2._Mylast;
      if (pAVar2 == (this->bandpassed_noise_left_)._Mypair._Myval2._Myend) {
        std::vector<vraudio::AudioBuffer,std::allocator<vraudio::AudioBuffer>_>::
        _Emplace_reallocate<unsigned___int64_const_&,unsigned___int64_const_&>
                  (&this->bandpassed_noise_left_,pAVar2,&kNumMonoChannels,&local_res8);
      }
      else {
        AudioBuffer::AudioBuffer(pAVar2,1,uVar8);
        ppAVar1 = &(this->bandpassed_noise_left_)._Mypair._Myval2._Mylast;
        *ppAVar1 = *ppAVar1 + 1;
      }
      GenerateBandLimitedGaussianNoise
                (kOctaveBandCentres[uVar10],this->sampling_rate_,1,
                 (AudioBuffer *)
                 ((longlong)&((this->bandpassed_noise_left_)._Mypair._Myval2._Myfirst)->num_frames_
                 + uVar11));
      pAVar2 = (this->bandpassed_noise_right_)._Mypair._Myval2._Mylast;
      if (pAVar2 == (this->bandpassed_noise_right_)._Mypair._Myval2._Myend) {
        std::vector<vraudio::AudioBuffer,std::allocator<vraudio::AudioBuffer>_>::
        _Emplace_reallocate<unsigned___int64_const_&,unsigned___int64_const_&>
                  (&this->bandpassed_noise_right_,pAVar2,&kNumMonoChannels,&local_res8);
      }
      else {
        AudioBuffer::AudioBuffer(pAVar2,1,uVar8);
        ppAVar1 = &(this->bandpassed_noise_right_)._Mypair._Myval2._Mylast;
        *ppAVar1 = *ppAVar1 + 1;
      }
      GenerateBandLimitedGaussianNoise
                (kOctaveBandCentres[uVar10],this->sampling_rate_,2,
                 (AudioBuffer *)
                 ((longlong)&((this->bandpassed_noise_right_)._Mypair._Myval2._Myfirst)->num_frames_
                 + uVar11));
      puVar3 = *(undefined8 **)
                ((longlong)
                 &(((this->bandpassed_noise_left_)._Mypair._Myval2._Myfirst)->channel_views_).
                  _Mypair._Myval2._Myfirst + uVar11);
      pvVar4 = (void *)*puVar3;
      p_Var9 = __std_minmax_element_f
                         (&local_78,pvVar4,(void *)((longlong)pvVar4 + puVar3[1] * 4),false);
      fVar14 = (float)(*(uint *)p_Var9->_Min & uVar6);
      puVar3 = *(undefined8 **)
                ((longlong)
                 &(((this->bandpassed_noise_right_)._Mypair._Myval2._Myfirst)->channel_views_).
                  _Mypair._Myval2._Myfirst + uVar11);
      fVar12 = (float)(*(uint *)p_Var9->_Max & uVar6);
      if (fVar14 <= fVar12) {
        fVar14 = fVar12;
      }
      pvVar4 = (void *)*puVar3;
      p_Var9 = __std_minmax_element_f
                         (local_68,pvVar4,(void *)((longlong)pvVar4 + puVar3[1] * 4),false);
      fVar12 = (float)(*(uint *)p_Var9->_Min & uVar6);
      fVar13 = (float)(*(uint *)p_Var9->_Max & uVar6);
      if (fVar12 <= fVar13) {
        fVar12 = fVar13;
      }
      pfVar5 = (float *)**(undefined8 **)
                          ((longlong)
                           &(((this->bandpassed_noise_left_)._Mypair._Myval2._Myfirst)->
                            channel_views_)._Mypair._Myval2._Myfirst + uVar11);
      if (fVar12 <= fVar14) {
        fVar12 = fVar14;
      }
      ScalarMultiply(uVar8,fVar12,pfVar5,pfVar5);
      pfVar5 = (float *)**(undefined8 **)
                          ((longlong)
                           &(((this->bandpassed_noise_right_)._Mypair._Myval2._Myfirst)->
                            channel_views_)._Mypair._Myval2._Myfirst + uVar11);
      ScalarMultiply(uVar8,fVar12,pfVar5,pfVar5);
      uVar10 = uVar10 + 1;
      uVar11 = uVar11 + 0x48;
    } while (uVar10 < uVar7);
  }
  return;
}

// Process @ 14f07a210

void __thiscall
vraudio::ReverbOnsetCompensator::Process
          (ReverbOnsetCompensator *this,AudioBuffer *param_1,AudioBuffer *param_2)

{
  PartitionedFftFilter *this_00;
  PartitionedFftFilter *this_01;
  ChannelView *pCVar1;
  _List_node<std::unique_ptr<vraudio::ReverbOnsetUpdateProcessor,std::default_delete<vraudio::ReverbOnsetUpdateProcessor>_>,void_*>
  *p_Var2;
  ReverbOnsetUpdateProcessor *this_02;
  _List_node<std::unique_ptr<vraudio::ReverbOnsetUpdateProcessor,std::default_delete<vraudio::ReverbOnsetUpdateProcessor>_>,void_*>
  *p_Var3;
  _List_node<std::unique_ptr<vraudio::ReverbOnsetUpdateProcessor,std::default_delete<vraudio::ReverbOnsetUpdateProcessor>_>,void_*>
  *p_Var4;
  _List_node<std::unique_ptr<vraudio::ReverbOnsetUpdateProcessor,std::default_delete<vraudio::ReverbOnsetUpdateProcessor>_>,void_*>
  *p_Var5;
  _List_node<std::unique_ptr<vraudio::ReverbOnsetUpdateProcessor,std::default_delete<vraudio::ReverbOnsetUpdateProcessor>_>,void_*>
  *p_Var6;
  _List_node<std::unique_ptr<vraudio::ReverbOnsetUpdateProcessor,std::default_delete<vraudio::ReverbOnsetUpdateProcessor>_>,void_*>
  *p_Var7;
  bool bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  DelayFilter::InsertData(&this->delay_filter_,(param_1->channel_views_)._Mypair._Myval2._Myfirst);
  DelayFilter::GetDelayedData
            (&this->delay_filter_,0x400,(param_2->channel_views_)._Mypair._Myval2._Myfirst);
  pCVar1 = (this->temp_kernel_buffer_).channel_views_._Mypair._Myval2._Myfirst;
  this_00 = &this->left_filter_;
  uVar10 = 0;
  this_01 = &this->right_filter_;
  if (this->num_active_processors_ != 0) {
    do {
      p_Var2 = ((this->update_processors_)._Mypair._Myval2._Myhead)->_Next;
      for (uVar9 = uVar10; uVar9 != 0; uVar9 = uVar9 - 1) {
        p_Var2 = p_Var2->_Next;
      }
      this_02 = (p_Var2->_Myval)._Mypair._Myval2;
      uVar9 = this_02->tail_update_cursor_ / (this_02->band_buffer_).num_frames_;
      bVar8 = ReverbOnsetUpdateProcessor::Process
                        (this_02,&this->bandpassed_noise_left_,&this->bandpassed_noise_right_,pCVar1
                         ,pCVar1 + 1);
      if (bVar8) {
        PartitionedFftFilter::ReplacePartition(this_00,uVar9,pCVar1);
        PartitionedFftFilter::ReplacePartition(this_01,uVar9,pCVar1 + 1);
        uVar10 = uVar10 + 1;
      }
      else {
        p_Var3 = (this->update_processors_)._Mypair._Myval2._Myhead;
        p_Var4 = p_Var2->_Next;
        if ((p_Var3 != p_Var2) && (p_Var3 != p_Var4)) {
          p_Var5 = p_Var2->_Prev;
          p_Var5->_Next = p_Var4;
          p_Var6 = p_Var4->_Prev;
          p_Var6->_Next = p_Var3;
          p_Var7 = p_Var3->_Prev;
          p_Var7->_Next = p_Var2;
          p_Var3->_Prev = p_Var6;
          p_Var4->_Prev = p_Var5;
          p_Var2->_Prev = p_Var7;
        }
        this->num_active_processors_ = this->num_active_processors_ - 1;
      }
    } while (uVar10 < this->num_active_processors_);
  }
  FftManager::FreqFromTimeDomain
            (this->fft_manager_,(param_2->channel_views_)._Mypair._Myval2._Myfirst,
             (this->temp_freq_buffer_).channel_views_._Mypair._Myval2._Myfirst);
  PartitionedFftFilter::Filter
            (this_00,(this->temp_freq_buffer_).channel_views_._Mypair._Myval2._Myfirst);
  PartitionedFftFilter::Filter
            (this_01,(this->temp_freq_buffer_).channel_views_._Mypair._Myval2._Myfirst);
  PartitionedFftFilter::GetFilteredSignal
            (this_00,(param_2->channel_views_)._Mypair._Myval2._Myfirst);
  PartitionedFftFilter::GetFilteredSignal
            (this_01,(param_2->channel_views_)._Mypair._Myval2._Myfirst + 1);
  return;
}

// Update @ 14f07a3b0

void __thiscall
vraudio::ReverbOnsetCompensator::Update(ReverbOnsetCompensator *this,float *param_1,float param_2)

{
  ReverbOnsetUpdateProcessor *pRVar1;
  _List_node<std::unique_ptr<vraudio::ReverbOnsetUpdateProcessor,std::default_delete<vraudio::ReverbOnsetUpdateProcessor>_>,void_*>
  **pp_Var2;
  _List_node<std::unique_ptr<vraudio::ReverbOnsetUpdateProcessor,std::default_delete<vraudio::ReverbOnsetUpdateProcessor>_>,void_*>
  *p_Var3;
  ulong64 uVar4;
  _List_node<std::unique_ptr<vraudio::ReverbOnsetUpdateProcessor,std::default_delete<vraudio::ReverbOnsetUpdateProcessor>_>,void_*>
  *p_Var5;
  _List_node<std::unique_ptr<vraudio::ReverbOnsetUpdateProcessor,std::default_delete<vraudio::ReverbOnsetUpdateProcessor>_>,void_*>
  *p_Var6;
  _List_node<std::unique_ptr<vraudio::ReverbOnsetUpdateProcessor,std::default_delete<vraudio::ReverbOnsetUpdateProcessor>_>,void_*>
  *p_Var7;
  _List_node<std::unique_ptr<vraudio::ReverbOnsetUpdateProcessor,std::default_delete<vraudio::ReverbOnsetUpdateProcessor>_>,void_*>
  *p_Var8;
  _List_node<std::unique_ptr<vraudio::ReverbOnsetUpdateProcessor,std::default_delete<vraudio::ReverbOnsetUpdateProcessor>_>,void_*>
  *p_Var9;
  _List_node<std::unique_ptr<vraudio::ReverbOnsetUpdateProcessor,std::default_delete<vraudio::ReverbOnsetUpdateProcessor>_>,void_*>
  *p_Var10;
  
  p_Var8 = (this->update_processors_)._Mypair._Myval2._Myhead;
  if (this->num_active_processors_ < 0xc) {
    p_Var8 = p_Var8->_Prev;
  }
  else {
    p_Var8 = p_Var8->_Next;
  }
  ReverbOnsetUpdateProcessor::SetReverbTimes((p_Var8->_Myval)._Mypair._Myval2,param_1);
  ((p_Var8->_Myval)._Mypair._Myval2)->gain_ = param_2;
  p_Var5 = (this->update_processors_)._Mypair._Myval2._Myhead;
  p_Var3 = p_Var5->_Next;
  if (p_Var8 != p_Var3) {
    for (uVar4 = this->num_active_processors_; uVar4 != 0; uVar4 = uVar4 - 1) {
      p_Var3 = p_Var3->_Next;
    }
    if (((p_Var3 != p_Var8) && (p_Var5 = p_Var8->_Next, p_Var8 != p_Var5)) && (p_Var3 != p_Var5)) {
      p_Var9 = p_Var8->_Prev;
      p_Var9->_Next = p_Var5;
      p_Var6 = p_Var5->_Prev;
      p_Var6->_Next = p_Var3;
      p_Var10 = p_Var3->_Prev;
      p_Var10->_Next = p_Var8;
      p_Var3->_Prev = p_Var6;
      p_Var5->_Prev = p_Var9;
      p_Var8->_Prev = p_Var10;
    }
    this->num_active_processors_ = this->num_active_processors_ + 1;
    return;
  }
  p_Var8 = p_Var3->_Next;
  if ((p_Var3 != p_Var8) && (p_Var6 = p_Var3, p_Var9 = p_Var8, p_Var8 != p_Var5)) {
    do {
      p_Var9 = p_Var9->_Prev;
      p_Var7 = p_Var8;
      p_Var10 = p_Var5;
      if (p_Var6 == p_Var9) break;
      pRVar1 = (p_Var6->_Myval)._Mypair._Myval2;
      (p_Var6->_Myval)._Mypair._Myval2 = (p_Var9->_Myval)._Mypair._Myval2;
      (p_Var9->_Myval)._Mypair._Myval2 = pRVar1;
      pp_Var2 = &p_Var6->_Next;
      p_Var6 = *pp_Var2;
    } while (*pp_Var2 != p_Var9);
    do {
      p_Var10 = p_Var10->_Prev;
      if (p_Var7 == p_Var10) break;
      pRVar1 = (p_Var7->_Myval)._Mypair._Myval2;
      (p_Var7->_Myval)._Mypair._Myval2 = (p_Var10->_Myval)._Mypair._Myval2;
      (p_Var10->_Myval)._Mypair._Myval2 = pRVar1;
      pp_Var2 = &p_Var7->_Next;
      p_Var7 = *pp_Var2;
    } while (*pp_Var2 != p_Var10);
    do {
      if (p_Var5 == p_Var8) break;
      p_Var5 = p_Var5->_Prev;
      pRVar1 = (p_Var3->_Myval)._Mypair._Myval2;
      (p_Var3->_Myval)._Mypair._Myval2 = (p_Var5->_Myval)._Mypair._Myval2;
      (p_Var5->_Myval)._Mypair._Myval2 = pRVar1;
      p_Var3 = p_Var3->_Next;
    } while (p_Var3 != p_Var8);
    if (p_Var3 != p_Var5) {
      do {
        p_Var5 = p_Var5->_Prev;
        if (p_Var3 == p_Var5) {
          return;
        }
        pRVar1 = (p_Var3->_Myval)._Mypair._Myval2;
        (p_Var3->_Myval)._Mypair._Myval2 = (p_Var5->_Myval)._Mypair._Myval2;
        (p_Var5->_Myval)._Mypair._Myval2 = pRVar1;
        p_Var3 = p_Var3->_Next;
      } while (p_Var3 != p_Var5);
    }
  }
  return;
}

// _Xlength @ 14f07a540

void __cdecl std::vector<vraudio::AudioBuffer,std::allocator<vraudio::AudioBuffer>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

