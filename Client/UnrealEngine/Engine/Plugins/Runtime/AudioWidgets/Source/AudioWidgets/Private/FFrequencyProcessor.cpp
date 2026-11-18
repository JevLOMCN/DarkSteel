// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 4

// GetDefaultOutputRange @ 14d92d430

TVector2<double> * __thiscall
FFrequencyProcessor::GetDefaultOutputRange
          (FFrequencyProcessor *this,TVector2<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 20.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 20000.0;
  return __return_storage_ptr__;
}

// GetOutputValue @ 14d932270

float __thiscall
FFrequencyProcessor::GetOutputValue
          (FFrequencyProcessor *this,TVector2<double> *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = Audio::GetLogFrequencyClamped
                    (param_2,&FAudioUnitProcessor::NormalizedLinearSliderRange,param_1);
  return fVar1;
}

// GetSliderValue @ 14d935b00

float __thiscall
FFrequencyProcessor::GetSliderValue
          (FFrequencyProcessor *this,TVector2<double> *param_1,float param_2)

{
  float fVar1;
  double dVar2;
  
  dVar2 = (double)param_2 - (param_1->field0_0x0)._s_0.X;
  if ((double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e45798ee2308c3a) {
    return (float)FAudioUnitProcessor::NormalizedLinearSliderRange.field0_0x0._s_0.X;
  }
  dVar2 = (double)param_2 - (param_1->field0_0x0)._s_0.Y;
  if ((double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e45798ee2308c3a) {
    return (float)FAudioUnitProcessor::NormalizedLinearSliderRange.field0_0x0._s_0.Y;
  }
  fVar1 = Audio::GetLinearFrequencyClamped
                    (param_2,&FAudioUnitProcessor::NormalizedLinearSliderRange,param_1);
  return fVar1;
}

// GetUnitsText @ 14d938100

FText * __thiscall
FFrequencyProcessor::GetUnitsText(FFrequencyProcessor *this,FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,"Hz");
  return __return_storage_ptr__;
}

