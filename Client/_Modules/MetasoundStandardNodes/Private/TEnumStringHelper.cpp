// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 19

// GetAllEntries @ 14b021a40

TArrayView<Metasound::TEnumEntry<Metasound::EBandSplitterFilterOrder>_const_,int> * __cdecl
Metasound::TEnumStringHelper<enum_Metasound::EBandSplitterFilterOrder>::GetAllEntries
          (TArrayView<Metasound::TEnumEntry<Metasound::EBandSplitterFilterOrder>_const_,int>
           *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Entries[0].Name,L"EBandSplitterFilterOrder::TwoPole");
      ::Entries[1].Value = FourPole;
      ::FName::FName(&::Entries[1].Name,L"EBandSplitterFilterOrder::FourPole");
      ::Entries[2].Value = SixPole;
      ::FName::FName(&::Entries[2].Name,L"EBandSplitterFilterOrder::SixPole");
      ::Entries[3].Value = EightPole;
      ::FName::FName(&::Entries[3].Name,L"EBandSplitterFilterOrder::EightPole");
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->ArrayNum = 4;
  __return_storage_ptr__->DataPtr = ::Entries;
  return __return_storage_ptr__;
}

// GetAllEntries @ 14b021b20

TArrayView<Metasound::TEnumEntry<Audio::EBiquadFilter::Type>_const_,int> * __cdecl
Metasound::TEnumStringHelper<enum_Audio::EBiquadFilter::Type>::GetAllEntries
          (TArrayView<Metasound::TEnumEntry<Audio::EBiquadFilter::Type>_const_,int>
           *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Entries[0].Name,L"Audio::EBiquadFilter::Lowpass");
      ::Entries[1].Value = Highpass;
      ::FName::FName(&::Entries[1].Name,L"Audio::EBiquadFilter::Highpass");
      ::Entries[2].Value = Bandpass;
      ::FName::FName(&::Entries[2].Name,L"Audio::EBiquadFilter::Bandpass");
      ::Entries[3].Value = Notch;
      ::FName::FName(&::Entries[3].Name,L"Audio::EBiquadFilter::Notch");
      ::Entries[4].Value = ParametricEQ;
      ::FName::FName(&::Entries[4].Name,L"Audio::EBiquadFilter::ParametricEQ");
      ::Entries[5].Value = LowShelf;
      ::FName::FName(&::Entries[5].Name,L"Audio::EBiquadFilter::LowShelf");
      ::Entries[6].Value = HighShelf;
      ::FName::FName(&::Entries[6].Name,L"Audio::EBiquadFilter::HighShelf");
      ::Entries[7].Value = AllPass;
      ::FName::FName(&::Entries[7].Name,L"Audio::EBiquadFilter::AllPass");
      ::Entries[8].Value = ButterworthLowPass;
      ::FName::FName(&::Entries[8].Name,L"Audio::EBiquadFilter::ButterworthLowPass");
      ::Entries[9].Value = ButterworthHighPass;
      ::FName::FName(&::Entries[9].Name,L"Audio::EBiquadFilter::ButterworthHighPass");
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->ArrayNum = 10;
  __return_storage_ptr__->DataPtr = ::Entries;
  return __return_storage_ptr__;
}

// GetAllEntries @ 14b06cfa0

TArrayView<Metasound::TEnumEntry<Audio::EDynamicFilterType>_const_,int> * __cdecl
Metasound::TEnumStringHelper<enum_Audio::EDynamicFilterType>::GetAllEntries
          (TArrayView<Metasound::TEnumEntry<Audio::EDynamicFilterType>_const_,int>
           *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Entries[0].Name,L"Audio::EDynamicFilterType::Bell");
      ::Entries[1].Value = LowShelf;
      ::FName::FName(&::Entries[1].Name,L"Audio::EDynamicFilterType::LowShelf");
      ::Entries[2].Value = HighShelf;
      ::FName::FName(&::Entries[2].Name,L"Audio::EDynamicFilterType::HighShelf");
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->ArrayNum = 3;
  __return_storage_ptr__->DataPtr = ::Entries;
  return __return_storage_ptr__;
}

// GetAllEntries @ 14b0d5b10

TArrayView<Metasound::TEnumEntry<Audio::Grain::EEnvelope>_const_,int> * __cdecl
Metasound::TEnumStringHelper<enum_Audio::Grain::EEnvelope>::GetAllEntries
          (TArrayView<Metasound::TEnumEntry<Audio::Grain::EEnvelope>_const_,int>
           *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Entries[0].Name,L"Audio::Grain::EEnvelope::Gaussian");
      ::Entries[1].Value = Triangle;
      ::FName::FName(&::Entries[1].Name,L"Audio::Grain::EEnvelope::Triangle");
      ::Entries[2].Value = DownwardTriangle;
      ::FName::FName(&::Entries[2].Name,L"Audio::Grain::EEnvelope::DownwardTriangle");
      ::Entries[3].Value = UpwardTriangle;
      ::FName::FName(&::Entries[3].Name,L"Audio::Grain::EEnvelope::UpwardTriangle");
      ::Entries[4].Value = ExponentialDecay;
      ::FName::FName(&::Entries[4].Name,L"Audio::Grain::EEnvelope::ExponentialDecay");
      ::Entries[5].Value = ExponentialAttack;
      ::FName::FName(&::Entries[5].Name,L"Audio::Grain::EEnvelope::ExponentialAttack");
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->ArrayNum = 6;
  __return_storage_ptr__->DataPtr = ::Entries;
  return __return_storage_ptr__;
}

// GetAllEntries @ 14b0d5c30

TArrayView<Metasound::TEnumEntry<Metasound::EEnvelopePeakMode>_const_,int> * __cdecl
Metasound::TEnumStringHelper<enum_Metasound::EEnvelopePeakMode>::GetAllEntries
          (TArrayView<Metasound::TEnumEntry<Metasound::EEnvelopePeakMode>_const_,int>
           *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Entries[0].Name,L"EEnvelopePeakMode::MeanSquared");
      ::Entries[1].Value = RootMeanSquared;
      ::FName::FName(&::Entries[1].Name,L"EEnvelopePeakMode::RootMeanSquared");
      ::Entries[2].Value = Peak;
      ::FName::FName(&::Entries[2].Name,L"EEnvelopePeakMode::Peak");
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->ArrayNum = 3;
  __return_storage_ptr__->DataPtr = ::Entries;
  return __return_storage_ptr__;
}

// GetAllEntries @ 14b0d5cf0

TArrayView<Metasound::TEnumEntry<Metasound::EKneeMode>_const_,int> * __cdecl
Metasound::TEnumStringHelper<enum_Metasound::EKneeMode>::GetAllEntries
          (TArrayView<Metasound::TEnumEntry<Metasound::EKneeMode>_const_,int>
           *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Entries[0].Name,L"EKneeMode::Hard");
      ::Entries[1].Value = Soft;
      ::FName::FName(&::Entries[1].Name,L"EKneeMode::Soft");
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->ArrayNum = 2;
  __return_storage_ptr__->DataPtr = ::Entries;
  return __return_storage_ptr__;
}

// GetAllEntries @ 14b0d5d90

TArrayView<Metasound::TEnumEntry<Metasound::ELowFrequencyNoiseInterpType>_const_,int> * __cdecl
Metasound::TEnumStringHelper<enum_Metasound::ELowFrequencyNoiseInterpType>::GetAllEntries
          (TArrayView<Metasound::TEnumEntry<Metasound::ELowFrequencyNoiseInterpType>_const_,int>
           *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Entries[0].Name,L"ELowFrequencyNoiseInterpType::None");
      ::Entries[1].Value = Linear;
      ::FName::FName(&::Entries[1].Name,L"ELowFrequencyNoiseInterpType::Linear");
      ::Entries[2].Value = Cubic;
      ::FName::FName(&::Entries[2].Name,L"ELowFrequencyNoiseInterpType::Cubic");
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->ArrayNum = 3;
  __return_storage_ptr__->DataPtr = ::Entries;
  return __return_storage_ptr__;
}

// GetAllEntries @ 14b18ec50

TArrayView<Metasound::TEnumEntry<Metasound::ELfoWaveshapeType>_const_,int> * __cdecl
Metasound::TEnumStringHelper<enum_Metasound::ELfoWaveshapeType>::GetAllEntries
          (TArrayView<Metasound::TEnumEntry<Metasound::ELfoWaveshapeType>_const_,int>
           *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Entries[0].Name,L"ELfoWaveshapeType::Sine");
      ::Entries[1].Value = Saw;
      ::FName::FName(&::Entries[1].Name,L"ELfoWaveshapeType::Saw");
      ::Entries[2].Value = Triangle;
      ::FName::FName(&::Entries[2].Name,L"ELfoWaveshapeType::Triangle");
      ::Entries[3].Value = Square;
      ::FName::FName(&::Entries[3].Name,L"ELfoWaveshapeType::Square");
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->ArrayNum = 4;
  __return_storage_ptr__->DataPtr = ::Entries;
  return __return_storage_ptr__;
}

// GetAllEntries @ 14b18ed30

TArrayView<Metasound::TEnumEntry<Metasound::ENoiseType>_const_,int> * __cdecl
Metasound::TEnumStringHelper<enum_Metasound::ENoiseType>::GetAllEntries
          (TArrayView<Metasound::TEnumEntry<Metasound::ENoiseType>_const_,int>
           *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Entries[0].Name,L"ENoiseType::Pink");
      ::Entries[1].Value = White;
      ::FName::FName(&::Entries[1].Name,L"ENoiseType::White");
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->ArrayNum = 2;
  __return_storage_ptr__->DataPtr = ::Entries;
  return __return_storage_ptr__;
}

// GetAllEntries @ 14b18edd0

TArrayView<Metasound::TEnumEntry<Metasound::ESawGenerationType>_const_,int> * __cdecl
Metasound::TEnumStringHelper<enum_Metasound::ESawGenerationType>::GetAllEntries
          (TArrayView<Metasound::TEnumEntry<Metasound::ESawGenerationType>_const_,int>
           *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Entries[0].Name,L"ESawGenerationType::PolySmooth");
      ::Entries[1].Value = Trivial;
      ::FName::FName(&::Entries[1].Name,L"ESawGenerationType::Trivial");
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->ArrayNum = 2;
  __return_storage_ptr__->DataPtr = ::Entries;
  return __return_storage_ptr__;
}

// GetAllEntries @ 14b18ee70

TArrayView<Metasound::TEnumEntry<Metasound::ESineGenerationType>_const_,int> * __cdecl
Metasound::TEnumStringHelper<enum_Metasound::ESineGenerationType>::GetAllEntries
          (TArrayView<Metasound::TEnumEntry<Metasound::ESineGenerationType>_const_,int>
           *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Entries[0].Name,L"ESineGenerationType::Rotation");
      ::Entries[1].Value = Sinf;
      ::FName::FName(&::Entries[1].Name,L"ESineGenerationType::Sinf");
      ::Entries[2].Value = Bhaskara;
      ::FName::FName(&::Entries[2].Name,L"ESineGenerationType::Bhaskara");
      ::Entries[3].Value = Wavetable;
      ::FName::FName(&::Entries[3].Name,L"ESineGenerationType::Wavetable");
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->ArrayNum = 4;
  __return_storage_ptr__->DataPtr = ::Entries;
  return __return_storage_ptr__;
}

// GetAllEntries @ 14b18ef50

TArrayView<Metasound::TEnumEntry<Metasound::ESquareGenerationType>_const_,int> * __cdecl
Metasound::TEnumStringHelper<enum_Metasound::ESquareGenerationType>::GetAllEntries
          (TArrayView<Metasound::TEnumEntry<Metasound::ESquareGenerationType>_const_,int>
           *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Entries[0].Name,L"ESquareGenerationType::PolySmooth");
      ::Entries[1].Value = Trivial;
      ::FName::FName(&::Entries[1].Name,L"ESquareGenerationType::Trivial");
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->ArrayNum = 2;
  __return_storage_ptr__->DataPtr = ::Entries;
  return __return_storage_ptr__;
}

// GetAllEntries @ 14b18eff0

TArrayView<Metasound::TEnumEntry<Metasound::ETriangleGenerationType>_const_,int> * __cdecl
Metasound::TEnumStringHelper<enum_Metasound::ETriangleGenerationType>::GetAllEntries
          (TArrayView<Metasound::TEnumEntry<Metasound::ETriangleGenerationType>_const_,int>
           *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Entries[0].Name,L"ETriangleGenerationType::PolySmooth");
      ::Entries[1].Value = Trivial;
      ::FName::FName(&::Entries[1].Name,L"ETriangleGenerationType::Trivial");
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->ArrayNum = 2;
  __return_storage_ptr__->DataPtr = ::Entries;
  return __return_storage_ptr__;
}

// GetAllEntries @ 14b18f090

TArrayView<Metasound::TEnumEntry<Audio::EMusicalScale::Scale>_const_,int> * __cdecl
Metasound::TEnumStringHelper<enum_Audio::EMusicalScale::Scale>::GetAllEntries
          (TArrayView<Metasound::TEnumEntry<Audio::EMusicalScale::Scale>_const_,int>
           *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Entries[0].Name,L"Audio::EMusicalScale::Scale::Major");
      ::Entries[1].Value = Minor_Dorian;
      ::FName::FName(&::Entries[1].Name,L"Audio::EMusicalScale::Scale::Minor_Dorian");
      ::Entries[2].Value = Phrygian;
      ::FName::FName(&::Entries[2].Name,L"Audio::EMusicalScale::Scale::Phrygian");
      ::Entries[3].Value = Lydian;
      ::FName::FName(&::Entries[3].Name,L"Audio::EMusicalScale::Scale::Lydian");
      ::Entries[4].Value = Dominant7th_Mixolydian;
      ::FName::FName(&::Entries[4].Name,L"Audio::EMusicalScale::Scale::Dominant7th_Mixolydian");
      ::Entries[5].Value = NaturalMinor_Aeolian;
      ::FName::FName(&::Entries[5].Name,L"Audio::EMusicalScale::Scale::NaturalMinor_Aeolian");
      ::Entries[6].Value = HalfDiminished_Locrian;
      ::FName::FName(&::Entries[6].Name,L"Audio::EMusicalScale::Scale::HalfDiminished_Locrian");
      ::Entries[7].Value = Chromatic;
      ::FName::FName(&::Entries[7].Name,L"Audio::EMusicalScale::Scale::Chromatic");
      ::Entries[8].Value = WholeTone;
      ::FName::FName(&::Entries[8].Name,L"Audio::EMusicalScale::Scale::WholeTone");
      ::Entries[9].Value = DiminishedWholeTone;
      ::FName::FName(&::Entries[9].Name,L"Audio::EMusicalScale::Scale::DiminishedWholeTone");
      ::Entries[10].Value = MajorPentatonic;
      ::FName::FName(&::Entries[10].Name,L"Audio::EMusicalScale::Scale::MajorPentatonic");
      ::Entries[0xb].Value = MinorPentatonic;
      ::FName::FName(&::Entries[0xb].Name,L"Audio::EMusicalScale::Scale::MinorPentatonic");
      ::Entries[0xc].Value = Blues;
      ::FName::FName(&::Entries[0xc].Name,L"Audio::EMusicalScale::Scale::Blues");
      ::Entries[0xd].Value = Bebop_Major;
      ::FName::FName(&::Entries[0xd].Name,L"Audio::EMusicalScale::Scale::Bebop_Major");
      ::Entries[0xe].Value = Bebop_Minor;
      ::FName::FName(&::Entries[0xe].Name,L"Audio::EMusicalScale::Scale::Bebop_Minor");
      ::Entries[0xf].Value = Bebop_MinorNumber2;
      ::FName::FName(&::Entries[0xf].Name,L"Audio::EMusicalScale::Scale::Bebop_MinorNumber2");
      ::Entries[0x10].Value = Bebop_Dominant;
      ::FName::FName(&::Entries[0x10].Name,L"Audio::EMusicalScale::Scale::Bebop_Dominant");
      ::Entries[0x11].Value = HarmonicMajor;
      ::FName::FName(&::Entries[0x11].Name,L"Audio::EMusicalScale::Scale::HarmonicMajor");
      ::Entries[0x12].Value = HarmonicMinor;
      ::FName::FName(&::Entries[0x12].Name,L"Audio::EMusicalScale::Scale::HarmonicMinor");
      ::Entries[0x13].Value = MelodicMinor;
      ::FName::FName(&::Entries[0x13].Name,L"Audio::EMusicalScale::Scale::MelodicMinor");
      ::Entries[0x14].Value = SixthModeOfHarmonicMinor;
      ::FName::FName(&::Entries[0x14].Name,L"Audio::EMusicalScale::Scale::SixthModeOfHarmonicMinor")
      ;
      ::Entries[0x15].Value = LydianAugmented;
      ::FName::FName(&::Entries[0x15].Name,L"Audio::EMusicalScale::Scale::LydianAugmented");
      ::Entries[0x16].Value = LydianDominant;
      ::FName::FName(&::Entries[0x16].Name,L"Audio::EMusicalScale::Scale::LydianDominant");
      ::Entries[0x17].Value = Augmented;
      ::FName::FName(&::Entries[0x17].Name,L"Audio::EMusicalScale::Scale::Augmented");
      ::Entries[0x18].Value = Diminished;
      ::FName::FName(&::Entries[0x18].Name,L"Audio::EMusicalScale::Scale::Diminished");
      ::Entries[0x19].Value = Diminished_BeginWithHalfStep;
      ::FName::FName(&::Entries[0x19].Name,
                     L"Audio::EMusicalScale::Scale::Diminished_BeginWithHalfStep");
      ::Entries[0x1a].Value = Diminished_BeginWithWholeStep;
      ::FName::FName(&::Entries[0x1a].Name,
                     L"Audio::EMusicalScale::Scale::Diminished_BeginWithWholeStep");
      ::Entries[0x1b].Value = HalfDiminished_LocrianNumber2;
      ::FName::FName(&::Entries[0x1b].Name,
                     L"Audio::EMusicalScale::Scale::HalfDiminished_LocrianNumber2");
      ::Entries[0x1c].Value = Spanish_or_Jewish;
      ::FName::FName(&::Entries[0x1c].Name,L"Audio::EMusicalScale::Scale::Spanish_or_Jewish");
      ::Entries[0x1d].Value = Hindu;
      ::FName::FName(&::Entries[0x1d].Name,L"Audio::EMusicalScale::Scale::Hindu");
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->ArrayNum = 0x1e;
  __return_storage_ptr__->DataPtr = ::Entries;
  return __return_storage_ptr__;
}

// GetAllEntries @ 14b1e10d0

TArrayView<Metasound::TEnumEntry<Metasound::EPanningLaw>_const_,int> * __cdecl
Metasound::TEnumStringHelper<enum_Metasound::EPanningLaw>::GetAllEntries
          (TArrayView<Metasound::TEnumEntry<Metasound::EPanningLaw>_const_,int>
           *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Entries[0].Name,L"EPanningLaw::EqualPower");
      ::Entries[1].Value = Linear;
      ::FName::FName(&::Entries[1].Name,L"EPanningLaw::Linear");
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->ArrayNum = 2;
  __return_storage_ptr__->DataPtr = ::Entries;
  return __return_storage_ptr__;
}

// GetAllEntries @ 14b1e1170

TArrayView<Metasound::TEnumEntry<Metasound::EStereoDelayMode>_const_,int> * __cdecl
Metasound::TEnumStringHelper<enum_Metasound::EStereoDelayMode>::GetAllEntries
          (TArrayView<Metasound::TEnumEntry<Metasound::EStereoDelayMode>_const_,int>
           *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Entries[0].Name,L"EStereoDelayMode::Normal");
      ::Entries[1].Value = Cross;
      ::FName::FName(&::Entries[1].Name,L"EStereoDelayMode::Cross");
      ::Entries[2].Value = PingPong;
      ::FName::FName(&::Entries[2].Name,L"EStereoDelayMode::PingPong");
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->ArrayNum = 3;
  __return_storage_ptr__->DataPtr = ::Entries;
  return __return_storage_ptr__;
}

// GetAllEntries @ 14b277430

TArrayView<Metasound::TEnumEntry<Metasound::EBufferTriggerType>_const_,int> * __cdecl
Metasound::TEnumStringHelper<enum_Metasound::EBufferTriggerType>::GetAllEntries
          (TArrayView<Metasound::TEnumEntry<Metasound::EBufferTriggerType>_const_,int>
           *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Entries[0].Name,L"EBufferTriggerType::RisingEdge");
      ::Entries[1].Value = FallingEdge;
      ::FName::FName(&::Entries[1].Name,L"EBufferTriggerType::FallingEdge");
      ::Entries[2].Value = AbsThreshold;
      ::FName::FName(&::Entries[2].Name,L"EBufferTriggerType::AbsThreshold");
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->ArrayNum = 3;
  __return_storage_ptr__->DataPtr = ::Entries;
  return __return_storage_ptr__;
}

// GetAllEntries @ 14b2774f0

TArrayView<Metasound::TEnumEntry<Metasound::ETriggerComparisonType>_const_,int> * __cdecl
Metasound::TEnumStringHelper<enum_Metasound::ETriggerComparisonType>::GetAllEntries
          (TArrayView<Metasound::TEnumEntry<Metasound::ETriggerComparisonType>_const_,int>
           *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Entries[0].Name,L"ETriggerComparisonType::Equals");
      ::Entries[1].Value = NotEquals;
      ::FName::FName(&::Entries[1].Name,L"ETriggerComparisonType::NotEquals");
      ::Entries[2].Value = LessThan;
      ::FName::FName(&::Entries[2].Name,L"ETriggerComparisonType::LessThan");
      ::Entries[3].Value = GreaterThan;
      ::FName::FName(&::Entries[3].Name,L"ETriggerComparisonType::GreaterThan");
      ::Entries[4].Value = LessThanOrEquals;
      ::FName::FName(&::Entries[4].Name,L"ETriggerComparisonType::LessThanOrEquals");
      ::Entries[5].Value = GreaterThanOrEquals;
      ::FName::FName(&::Entries[5].Name,L"ETriggerComparisonType::GreaterThanOrEquals");
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->ArrayNum = 6;
  __return_storage_ptr__->DataPtr = ::Entries;
  return __return_storage_ptr__;
}

// GetAllEntries @ 14b277610

TArrayView<Metasound::TEnumEntry<Audio::EWaveShaperType>_const_,int> * __cdecl
Metasound::TEnumStringHelper<enum_Audio::EWaveShaperType>::GetAllEntries
          (TArrayView<Metasound::TEnumEntry<Audio::EWaveShaperType>_const_,int>
           *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Entries[0].Name,L"Audio::EWaveShaperType::Sin");
      ::Entries[1].Value = ATan;
      ::FName::FName(&::Entries[1].Name,L"Audio::EWaveShaperType::ATan");
      ::Entries[2].Value = Tanh;
      ::FName::FName(&::Entries[2].Name,L"Audio::EWaveShaperType::Tanh");
      ::Entries[3].Value = Cubic;
      ::FName::FName(&::Entries[3].Name,L"Audio::EWaveShaperType::Cubic");
      ::Entries[4].Value = HardClip;
      ::FName::FName(&::Entries[4].Name,L"Audio::EWaveShaperType::HardClip");
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->ArrayNum = 5;
  __return_storage_ptr__->DataPtr = ::Entries;
  return __return_storage_ptr__;
}

