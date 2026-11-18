// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 5

// DestroyObject @ 14f0d5420

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSynth2DSliderStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FSynth2DSliderStyle,1> *this)

{
  FSynth2DSliderStyle::~FSynth2DSliderStyle((FSynth2DSliderStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14f0d5430

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSynthKnobStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FSynthKnobStyle,1> *this)

{
  FSynthKnobStyle::~FSynthKnobStyle((FSynthKnobStyle *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14f0d5440

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FEffectConvolutionReverb,1>::
DestroyObject(TIntrusiveReferenceController<Audio::FEffectConvolutionReverb,1> *this)

{
  Audio::FEffectConvolutionReverb::~FEffectConvolutionReverb
            ((FEffectConvolutionReverb *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14f0d5450

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSynth2DSlider,1>::DestroyObject
          (TIntrusiveReferenceController<SSynth2DSlider,1> *this)

{
  SSynth2DSlider::~SSynth2DSlider((SSynth2DSlider *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14f0d5460

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSynthKnob,1>::DestroyObject
          (TIntrusiveReferenceController<SSynthKnob,1> *this)

{
  SSynthKnob::~SSynthKnob((SSynthKnob *)&this->ObjectStorage);
  return;
}

