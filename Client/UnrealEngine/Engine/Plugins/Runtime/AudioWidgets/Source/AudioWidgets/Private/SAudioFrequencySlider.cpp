// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 4

// SAudioFrequencySlider @ 14d8b6fa0

/* WARNING: Enum "Type": Some values do not have unique names */

SAudioFrequencySlider * __thiscall
SAudioFrequencySlider::SAudioFrequencySlider(SAudioFrequencySlider *this)

{
  SAudioSliderBase::SAudioSliderBase((SAudioSliderBase *)this);
  *(undefined ***)this = &___7SAudioFrequencySlider__6B_;
  return this;
}

// Construct @ 14d8e8ef0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioFrequencySlider::Construct(SAudioFrequencySlider *this,FArguments *param_1)

{
  SAudioTextBox *this_00;
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  undefined8 local_28;
  undefined8 uStack_20;
  FText local_18;
  
  SAudioSliderBase::Construct((SAudioSliderBase *)this,param_1);
  local_28 = ___xmm_40d38800000000004034000000000000;
  uStack_20 = _UNK_152c28aa8;
  (**(code **)(*(longlong *)this + 0x260))(this,&local_28);
  if (*(longlong *)&this->field_0x458 == 0) {
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
  this_00 = *(SAudioTextBox **)&this->field_0x458;
  pFVar3 = FText::FromString(&local_18,"Hz");
  SAudioTextBox::SetUnitsText(this_00,pFVar3);
  return;
}

// GetOutputValue @ 14d9323e0

float __thiscall SAudioFrequencySlider::GetOutputValue(SAudioFrequencySlider *this,float param_1)

{
  float fVar1;
  
  fVar1 = Audio::GetLogFrequencyClamped
                    (param_1,&SAudioSliderBase::NormalizedLinearSliderRange,
                     (TVector2<double> *)&this->field_0x488);
  return fVar1;
}

// GetSliderValue @ 14d935d10

float __thiscall SAudioFrequencySlider::GetSliderValue(SAudioFrequencySlider *this,float param_1)

{
  float fVar1;
  double dVar2;
  
  dVar2 = (double)param_1 - *(double *)&this->field_0x488;
  if ((double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e45798ee2308c3a) {
    return (float)SAudioSliderBase::NormalizedLinearSliderRange.field0_0x0._s_0.X;
  }
  dVar2 = (double)param_1 - *(double *)&this->field_0x490;
  if ((double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e45798ee2308c3a) {
    return (float)SAudioSliderBase::NormalizedLinearSliderRange.field0_0x0._s_0.Y;
  }
  fVar1 = Audio::GetLinearFrequencyClamped
                    (param_1,&SAudioSliderBase::NormalizedLinearSliderRange,
                     (TVector2<double> *)&this->field_0x488);
  return fVar1;
}

