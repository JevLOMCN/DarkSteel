// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 4

// SAudioFrequencyRadialSlider @ 14d8b6f70

/* WARNING: Enum "Type": Some values do not have unique names */

SAudioFrequencyRadialSlider * __thiscall
SAudioFrequencyRadialSlider::SAudioFrequencyRadialSlider(SAudioFrequencyRadialSlider *this)

{
  SAudioRadialSlider::SAudioRadialSlider((SAudioRadialSlider *)this);
  *(undefined ***)this = &___7SAudioFrequencyRadialSlider__6B_;
  return this;
}

// Construct @ 14d8e8e60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioFrequencyRadialSlider::Construct(SAudioFrequencyRadialSlider *this,FArguments *param_1)

{
  SAudioTextBox *this_00;
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  TVector2<double>_u_0 local_28;
  FText local_18;
  
  SAudioRadialSlider::Construct((SAudioRadialSlider *)this,param_1);
  local_28._s_0.X = ___xmm_40d38800000000004034000000000000;
  local_28._s_0.Y = _UNK_152c28aa8;
  SAudioRadialSlider::SetOutputRange((SAudioRadialSlider *)this,(TVector2<double> *)&local_28._s_0);
  if (*(longlong *)&this->field_0x518 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = *(SAudioTextBox **)&this->field_0x518;
  pFVar3 = FText::FromString(&local_18,"Hz");
  SAudioTextBox::SetUnitsText(this_00,pFVar3);
  return;
}

// GetOutputValue @ 14d9323c0

float __thiscall
SAudioFrequencyRadialSlider::GetOutputValue(SAudioFrequencyRadialSlider *this,float param_1)

{
  float fVar1;
  
  fVar1 = Audio::GetLogFrequencyClamped
                    (param_1,&SAudioRadialSlider::NormalizedLinearSliderRange,
                     (TVector2<double> *)&this->field_0x538);
  return fVar1;
}

// GetSliderValue @ 14d935ca0

float __thiscall
SAudioFrequencyRadialSlider::GetSliderValue(SAudioFrequencyRadialSlider *this,float param_1)

{
  float fVar1;
  double dVar2;
  
  dVar2 = (double)param_1 - *(double *)&this->field_0x538;
  if ((double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e45798ee2308c3a) {
    return (float)SAudioRadialSlider::NormalizedLinearSliderRange.field0_0x0._s_0.X;
  }
  dVar2 = (double)param_1 - *(double *)&this->field_0x540;
  if ((double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e45798ee2308c3a) {
    return (float)SAudioRadialSlider::NormalizedLinearSliderRange.field0_0x0._s_0.Y;
  }
  fVar1 = Audio::GetLinearFrequencyClamped
                    (param_1,&SAudioRadialSlider::NormalizedLinearSliderRange,
                     (TVector2<double> *)&this->field_0x538);
  return fVar1;
}

