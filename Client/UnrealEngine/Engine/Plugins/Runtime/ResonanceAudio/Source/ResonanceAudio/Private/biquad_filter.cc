// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 8

// BiquadFilter @ 14f071eb0

BiquadFilter * __thiscall
vraudio::BiquadFilter::BiquadFilter(BiquadFilter *this,BiquadCoefficients *param_1,ulong64 param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  bool bVar5;
  float fVar6;
  int iStack_10c;
  undefined1 local_108 [112];
  char *local_98;
  int local_90;
  basic_ios<char,std::char_traits<char>_> local_80;
  
  bVar5 = false;
  *(undefined8 *)(this->biquad_delay_line_)._Elems = 0;
  this->interpolate_flag_ = false;
  if (0x100 < param_2) {
    param_2 = 0x100;
  }
  this->interpolate_counter_ = 0;
  *(undefined8 *)(this->old_delay_line_)._Elems = 0;
  this->samples_to_iterate_over_ = param_2;
  fVar6 = __real_3f800000;
  this->fade_scale_ = __real_3f800000 / (float)param_2;
  (this->old_coefficients_).a._Elems[0] = 1.0;
  (this->old_coefficients_).a._Elems[1] = 0.0;
  (this->old_coefficients_).a._Elems[2] = 0.0;
  (this->old_coefficients_).b._Elems[0] = 1.0;
  (this->old_coefficients_).b._Elems[1] = 0.0;
  (this->old_coefficients_).b._Elems[2] = 0.0;
  (this->coefficients_).a._Elems[0] = 1.0;
  (this->coefficients_).a._Elems[1] = 0.0;
  (this->coefficients_).a._Elems[2] = 0.0;
  (this->coefficients_).b._Elems[0] = 1.0;
  (this->coefficients_).b._Elems[1] = 0.0;
  (this->coefficients_).b._Elems[2] = 0.0;
  if (__real_358637bd < (this->coefficients_).a._Elems[0]) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
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
  else {
    local_108._0_8_ =
         &std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::_vbtable_;
    std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(&local_80)
    ;
    std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)local_108,
               (basic_streambuf<char,std::char_traits<char>_> *)(local_108 + 8),false);
    *(undefined ***)(local_108 + *(int *)(local_108._0_8_ + 4)) =
         std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)&iStack_10c + (longlong)*(int *)(local_108._0_8_ + 4)) =
         *(int *)(local_108._0_8_ + 4) + -0x88;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)(local_108 + 8));
    local_98 = (char *)0x0;
    local_108._8_8_ =
         std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_90 = 4;
    pbVar4 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)local_108,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\dsp\\biquad_filter.cc"
                       );
    pbVar4 = std::operator<<<std::char_traits<char>_>(pbVar4,":");
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
             std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,0x2e);
    std::operator<<<std::char_traits<char>_>(pbVar4,": ");
    bVar5 = true;
  }
  if (bVar5) {
    FatalLogger::~FatalLogger((FatalLogger *)local_108);
  }
  uVar3 = *(undefined8 *)((param_1->a)._Elems + 2);
  *(undefined8 *)(this->coefficients_).a._Elems = *(undefined8 *)(param_1->a)._Elems;
  *(undefined8 *)((this->coefficients_).a._Elems + 2) = uVar3;
  *(undefined8 *)((this->coefficients_).b._Elems + 1) = *(undefined8 *)((param_1->b)._Elems + 1);
  fVar6 = fVar6 / (this->coefficients_).a._Elems[0];
  fVar1 = (this->coefficients_).a._Elems[2];
  (this->coefficients_).a._Elems[1] = fVar6 * (this->coefficients_).a._Elems[1];
  fVar2 = (this->coefficients_).b._Elems[0];
  (this->coefficients_).a._Elems[2] = fVar6 * fVar1;
  fVar1 = (this->coefficients_).b._Elems[1];
  (this->coefficients_).b._Elems[2] = fVar6 * (this->coefficients_).b._Elems[2];
  (this->coefficients_).b._Elems[0] = fVar6 * fVar2;
  (this->coefficients_).b._Elems[1] = fVar6 * fVar1;
  return this;
}

// Clear @ 14f072140

void __thiscall vraudio::BiquadFilter::Clear(BiquadFilter *this)

{
  *(undefined8 *)(this->biquad_delay_line_)._Elems = 0;
  this->interpolate_flag_ = false;
  this->interpolate_counter_ = 0;
  *(undefined8 *)(this->old_delay_line_)._Elems = 0;
  return;
}

// Filter @ 14f072160

void __thiscall
vraudio::BiquadFilter::Filter(BiquadFilter *this,ChannelView *param_1,ChannelView *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar4 = 0;
  if (this->interpolate_flag_ == false) {
    if (param_1->size_ != 0) {
      do {
        fVar8 = (this->biquad_delay_line_)._Elems[0];
        fVar7 = (this->biquad_delay_line_)._Elems[1];
        fVar1 = (this->coefficients_).b._Elems[2];
        fVar2 = (this->coefficients_).b._Elems[1];
        fVar6 = (param_1->begin_itr_[uVar4] - fVar8 * (this->coefficients_).a._Elems[1]) -
                fVar7 * (this->coefficients_).a._Elems[2];
        fVar3 = (this->coefficients_).b._Elems[0];
        (this->biquad_delay_line_)._Elems[1] = fVar8;
        (this->biquad_delay_line_)._Elems[0] = fVar6;
        param_2->begin_itr_[uVar4] = fVar6 * fVar3 + fVar8 * fVar2 + fVar7 * fVar1;
        uVar4 = uVar4 + 1;
      } while (uVar4 < param_1->size_);
    }
  }
  else if (param_1->size_ != 0) {
    do {
      this->interpolate_counter_ = this->interpolate_counter_ + 1;
      if (this->samples_to_iterate_over_ < this->interpolate_counter_) {
        this->interpolate_flag_ = false;
      }
      fVar8 = (this->biquad_delay_line_)._Elems[0];
      fVar7 = (this->biquad_delay_line_)._Elems[1];
      fVar1 = (this->coefficients_).b._Elems[1];
      fVar2 = param_1->begin_itr_[uVar4];
      fVar3 = (this->coefficients_).b._Elems[2];
      fVar5 = (fVar2 - fVar8 * (this->coefficients_).a._Elems[1]) -
              fVar7 * (this->coefficients_).a._Elems[2];
      fVar6 = (this->coefficients_).b._Elems[0];
      (this->biquad_delay_line_)._Elems[1] = fVar8;
      (this->biquad_delay_line_)._Elems[0] = fVar5;
      fVar8 = fVar8 * fVar1 + fVar5 * fVar6 + fVar7 * fVar3;
      if (this->interpolate_flag_ != false) {
        fVar7 = (this->old_delay_line_)._Elems[0];
        fVar1 = (this->old_delay_line_)._Elems[1];
        fVar3 = (this->old_coefficients_).b._Elems[2];
        fVar6 = (this->old_coefficients_).b._Elems[1];
        fVar5 = (fVar2 - fVar7 * (this->old_coefficients_).a._Elems[1]) -
                fVar1 * (this->old_coefficients_).a._Elems[2];
        fVar2 = (this->old_coefficients_).b._Elems[0];
        (this->old_delay_line_)._Elems[1] = fVar7;
        (this->old_delay_line_)._Elems[0] = fVar5;
        fVar7 = fVar5 * fVar2 + fVar7 * fVar6 + fVar1 * fVar3;
        fVar8 = (float)this->interpolate_counter_ * this->fade_scale_ * (fVar8 - fVar7) + fVar7;
      }
      param_2->begin_itr_[uVar4] = fVar8;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_1->size_);
    return;
  }
  return;
}

// FilterSample @ 14f072320

float __thiscall
vraudio::BiquadFilter::FilterSample
          (BiquadFilter *this,float param_1,array<float,2> *param_2,BiquadCoefficients *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_2->_Elems[0];
  fVar2 = param_2->_Elems[1];
  fVar3 = (param_3->b)._Elems[1];
  fVar4 = (param_3->b)._Elems[2];
  fVar6 = (param_1 - fVar1 * (param_3->a)._Elems[1]) - fVar2 * (param_3->a)._Elems[2];
  fVar5 = (param_3->b)._Elems[0];
  param_2->_Elems[1] = fVar1;
  param_2->_Elems[0] = fVar6;
  return fVar6 * fVar5 + fVar1 * fVar3 + fVar2 * fVar4;
}

// InterpolateFilterSample @ 14f072380

float __thiscall vraudio::BiquadFilter::InterpolateFilterSample(BiquadFilter *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = (this->biquad_delay_line_)._Elems[0];
  fVar5 = (this->biquad_delay_line_)._Elems[1];
  fVar1 = (this->coefficients_).b._Elems[2];
  fVar2 = (this->coefficients_).b._Elems[1];
  fVar4 = (param_1 - fVar6 * (this->coefficients_).a._Elems[1]) -
          fVar5 * (this->coefficients_).a._Elems[2];
  fVar3 = (this->coefficients_).b._Elems[0];
  (this->biquad_delay_line_)._Elems[1] = fVar6;
  (this->biquad_delay_line_)._Elems[0] = fVar4;
  fVar6 = fVar4 * fVar3 + fVar6 * fVar2 + fVar5 * fVar1;
  if (this->interpolate_flag_ == false) {
    return fVar6;
  }
  fVar5 = (this->old_delay_line_)._Elems[0];
  fVar1 = (this->old_delay_line_)._Elems[1];
  fVar2 = (this->old_coefficients_).b._Elems[2];
  fVar3 = (this->old_coefficients_).b._Elems[1];
  fVar7 = (param_1 - fVar5 * (this->old_coefficients_).a._Elems[1]) -
          fVar1 * (this->old_coefficients_).a._Elems[2];
  fVar4 = (this->old_coefficients_).b._Elems[0];
  (this->old_delay_line_)._Elems[1] = fVar5;
  (this->old_delay_line_)._Elems[0] = fVar7;
  fVar5 = fVar7 * fVar4 + fVar5 * fVar3 + fVar1 * fVar2;
  return (float)this->interpolate_counter_ * this->fade_scale_ * (fVar6 - fVar5) + fVar5;
}

// InterpolateToCoefficients @ 14f072490

void __thiscall
vraudio::BiquadFilter::InterpolateToCoefficients(BiquadFilter *this,BiquadCoefficients *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(this->coefficients_).a._Elems;
  uVar3 = *(undefined8 *)((this->coefficients_).a._Elems + 2);
  this->interpolate_flag_ = true;
  uVar1 = *(undefined8 *)((this->coefficients_).b._Elems + 1);
  *(undefined8 *)(this->old_coefficients_).a._Elems = uVar2;
  *(undefined8 *)((this->old_coefficients_).a._Elems + 2) = uVar3;
  this->interpolate_counter_ = 0;
  *(undefined8 *)((this->old_coefficients_).b._Elems + 1) = uVar1;
  uVar1 = *(undefined8 *)((param_1->a)._Elems + 2);
  *(undefined8 *)(this->coefficients_).a._Elems = *(undefined8 *)(param_1->a)._Elems;
  *(undefined8 *)((this->coefficients_).a._Elems + 2) = uVar1;
  uVar1 = *(undefined8 *)(this->biquad_delay_line_)._Elems;
  *(undefined8 *)((this->coefficients_).b._Elems + 1) = *(undefined8 *)((param_1->b)._Elems + 1);
  *(undefined8 *)(this->old_delay_line_)._Elems = uVar1;
  return;
}

// SetCoefficients @ 14f0724d0

void __thiscall
vraudio::BiquadFilter::SetCoefficients(BiquadFilter *this,BiquadCoefficients *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  
  fVar5 = __real_3f800000;
  uVar4 = *(undefined8 *)((param_1->a)._Elems + 2);
  *(undefined8 *)(this->coefficients_).a._Elems = *(undefined8 *)(param_1->a)._Elems;
  *(undefined8 *)((this->coefficients_).a._Elems + 2) = uVar4;
  *(undefined8 *)((this->coefficients_).b._Elems + 1) = *(undefined8 *)((param_1->b)._Elems + 1);
  fVar5 = fVar5 / (this->coefficients_).a._Elems[0];
  fVar1 = (this->coefficients_).a._Elems[2];
  (this->coefficients_).a._Elems[1] = fVar5 * (this->coefficients_).a._Elems[1];
  fVar2 = (this->coefficients_).b._Elems[0];
  (this->coefficients_).a._Elems[2] = fVar5 * fVar1;
  fVar1 = (this->coefficients_).b._Elems[1];
  fVar3 = (this->coefficients_).b._Elems[2];
  (this->coefficients_).b._Elems[0] = fVar5 * fVar2;
  (this->coefficients_).b._Elems[1] = fVar5 * fVar1;
  (this->coefficients_).b._Elems[2] = fVar5 * fVar3;
  return;
}

// UpdateInterpolate @ 14f072540

void __thiscall vraudio::BiquadFilter::UpdateInterpolate(BiquadFilter *this)

{
  this->interpolate_counter_ = this->interpolate_counter_ + 1;
  if (this->samples_to_iterate_over_ < this->interpolate_counter_) {
    this->interpolate_flag_ = false;
  }
  return;
}

