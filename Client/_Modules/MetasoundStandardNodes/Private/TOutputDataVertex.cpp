// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 46

// TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_><> @ 14afdf570

TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_> *
__thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_><> @ 14afdf5e0

TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_> *
__thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_><> @ 14afdf650

TOutputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_>::
TOutputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_><>
          (TOutputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *this,
          FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FMonoAudioFormat>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_VFMonoAudioFormat_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_><> @ 14afdf6c0

TOutputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_>::
TOutputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_><>
          (TOutputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *this,
          FLazyName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::FStereoAudioFormat>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_VFStereoAudioFormat_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><> @ 14afdf730

TOutputDataVertex<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
TOutputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>()
  ;
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><> @ 14afdf7a0

TOutputDataVertex<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
TOutputDataVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &___7__TOutputDataVertex_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::FAudioBuffer><> @ 14afdf810

TOutputDataVertex<Metasound::FAudioBuffer> * __thiscall
Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::TOutputDataVertex<Metasound::FAudioBuffer><>
          (TOutputDataVertex<Metasound::FAudioBuffer> *this,FName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  *(undefined ***)this = &___7__TOutputDataVertex_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::FMonoAudioFormat><> @ 14afdf870

TOutputDataVertex<Metasound::FMonoAudioFormat> * __thiscall
Metasound::TOutputDataVertex<Metasound::FMonoAudioFormat>::
TOutputDataVertex<Metasound::FMonoAudioFormat><>
          (TOutputDataVertex<Metasound::FMonoAudioFormat> *this,FLazyName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  *(undefined ***)this = &___7__TOutputDataVertex_VFMonoAudioFormat_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::FMonoAudioFormat><> @ 14afdf8e0

TOutputDataVertex<Metasound::FMonoAudioFormat> * __thiscall
Metasound::TOutputDataVertex<Metasound::FMonoAudioFormat>::
TOutputDataVertex<Metasound::FMonoAudioFormat><>
          (TOutputDataVertex<Metasound::FMonoAudioFormat> *this,FName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  *(undefined ***)this = &___7__TOutputDataVertex_VFMonoAudioFormat_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::FStereoAudioFormat><> @ 14afdf940

TOutputDataVertex<Metasound::FStereoAudioFormat> * __thiscall
Metasound::TOutputDataVertex<Metasound::FStereoAudioFormat>::
TOutputDataVertex<Metasound::FStereoAudioFormat><>
          (TOutputDataVertex<Metasound::FStereoAudioFormat> *this,FLazyName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  *(undefined ***)this = &___7__TOutputDataVertex_VFStereoAudioFormat_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::FStereoAudioFormat><> @ 14afdf9b0

TOutputDataVertex<Metasound::FStereoAudioFormat> * __thiscall
Metasound::TOutputDataVertex<Metasound::FStereoAudioFormat>::
TOutputDataVertex<Metasound::FStereoAudioFormat><>
          (TOutputDataVertex<Metasound::FStereoAudioFormat> *this,FName *param_1,
          FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  *(undefined ***)this = &___7__TOutputDataVertex_VFStereoAudioFormat_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_><> @ 14b044ec0

TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_> *
__thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><> @ 14b044f30

TOutputDataVertex<Metasound::TEnum<Audio::EDynamicFilterType,0>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
TOutputDataVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &___7__TOutputDataVertex_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_><> @ 14b09a2d0

TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_> * __thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_><> @ 14b09a340

TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_> *
__thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_><> @ 14b09a3b0

TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
::TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_><> @ 14b09a420

TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>
* __thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><> @ 14b09a490

TOutputDataVertex<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
TOutputDataVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &___7__TOutputDataVertex_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><> @ 14b09a500

TOutputDataVertex<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
TOutputDataVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><> @ 14b09a570

TOutputDataVertex<Metasound::TEnum<Metasound::EKneeMode,0>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
TOutputDataVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &___7__TOutputDataVertex_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><> @ 14b09a5e0

TOutputDataVertex<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
TOutputDataVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_><> @ 14b1153b0

TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_> *
__thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_><> @ 14b115420

TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
::TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_><> @ 14b115490

TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_> *
__thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_><> @ 14b115500

TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_> *
__thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_><> @ 14b115570

TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_> *
__thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_><> @ 14b1155e0

TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_> *
__thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_><> @ 14b115650

TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_> *
__thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><> @ 14b1156c0

TOutputDataVertex<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
TOutputDataVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><> @ 14b115730

TOutputDataVertex<Metasound::TEnum<Metasound::ENoiseType,0>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
TOutputDataVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &___7__TOutputDataVertex_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><> @ 14b1157a0

TOutputDataVertex<Metasound::TEnum<Metasound::ESawGenerationType,0>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><> @ 14b115810

TOutputDataVertex<Metasound::TEnum<Metasound::ESineGenerationType,3>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><> @ 14b115880

TOutputDataVertex<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
TOutputDataVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><> @ 14b1158f0

TOutputDataVertex<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
TOutputDataVertex<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><> @ 14b115960

TOutputDataVertex<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
TOutputDataVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_><> @ 14b1bbf80

TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_> * __thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_><> @ 14b1bbff0

TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_> *
__thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><> @ 14b1bc060

TOutputDataVertex<Metasound::TEnum<Metasound::EPanningLaw,0>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
TOutputDataVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &___7__TOutputDataVertex_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><> @ 14b1bc0d0

TOutputDataVertex<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
TOutputDataVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_><> @ 14b217000

TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_> *
__thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_><> @ 14b217070

TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_> *
__thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_><> @ 14b2170e0

TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_> * __thiscall
Metasound::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>::
TOutputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_U__TVariable_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><> @ 14b217150

TOutputDataVertex<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
TOutputDataVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><> @ 14b2171c0

TOutputDataVertex<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
TOutputDataVertex<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &
       ___7__TOutputDataVertex_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><> @ 14b217230

TOutputDataVertex<Metasound::TEnum<Audio::EWaveShaperType,1>_> * __thiscall
Metasound::TOutputDataVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
TOutputDataVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this =
       &___7__TOutputDataVertex_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TOutputDataVertex<Metasound::FTrigger><> @ 14b2172a0

TOutputDataVertex<Metasound::FTrigger> * __thiscall
Metasound::TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
          (TOutputDataVertex<Metasound::FTrigger> *this,FName *param_1,FDataVertexMetadata *param_2)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::FTrigger>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  *(undefined ***)this = &___7__TOutputDataVertex_VFTrigger_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

