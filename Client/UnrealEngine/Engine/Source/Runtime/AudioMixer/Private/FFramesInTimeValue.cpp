// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 5

// operator[] @ 146542540

double * __thiscall
Audio::FQuartzMetronome::FFramesInTimeValue::operator[](FFramesInTimeValue *this,int param_1)

{
  return this->FramesInTimeValueInternal + param_1;
}

// operator[] @ 146542550

double * __thiscall
Audio::FQuartzMetronome::FFramesInTimeValue::operator[]
          (FFramesInTimeValue *this,EQuartzCommandQuantization param_1)

{
  return this->FramesInTimeValueInternal + param_1;
}

// operator[] @ 146542560

double * __thiscall
Audio::FQuartzMetronome::FFramesInTimeValue::operator[](FFramesInTimeValue *this,int param_1)

{
  return this->FramesInTimeValueInternal + param_1;
}

// operator[] @ 146542570

double * __thiscall
Audio::FQuartzMetronome::FFramesInTimeValue::operator[]
          (FFramesInTimeValue *this,EQuartzCommandQuantization param_1)

{
  return this->FramesInTimeValueInternal + param_1;
}

// Reset @ 14656f2e0

void __thiscall Audio::FQuartzMetronome::FFramesInTimeValue::Reset(FFramesInTimeValue *this)

{
  if (this <= this + 1) {
    memset(this,0,0x90);
    return;
  }
  return;
}

