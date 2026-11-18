// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 84

// TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_><> @ 14afdeff0

TInputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>_> *
__thiscall
Metasound::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_><>
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
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_><> @ 14afdf070

TInputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>_> *
__thiscall
Metasound::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_><>
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
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_><> @ 14afdf0f0

TInputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_>::
TInputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_><>
          (TInputDataVertex<Metasound::TVariable<Metasound::FMonoAudioFormat>_> *this,
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
  this->field_0x30 = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_U__TVariable_VFMonoAudioFormat_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_><> @ 14afdf170

TInputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_>::
TInputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_><>
          (TInputDataVertex<Metasound::TVariable<Metasound::FStereoAudioFormat>_> *this,
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
  this->field_0x30 = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_VFStereoAudioFormat_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><> @ 14afdf1f0

TInputDataVertex<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><>
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
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><> @ 14afdf270

TInputDataVertex<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><>
          (void *this,FName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>()
  ;
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(FName *)((longlong)this + 8) = *param_1;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><> @ 14afdf2d0

TInputDataVertex<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><> @ 14afdf350

TInputDataVertex<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><>
          (void *this,FName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(FName *)((longlong)this + 8) = *param_1;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::FMonoAudioFormat><> @ 14afdf3b0

TInputDataVertex<Metasound::FMonoAudioFormat> * __thiscall
Metasound::TInputDataVertex<Metasound::FMonoAudioFormat>::
TInputDataVertex<Metasound::FMonoAudioFormat><>
          (TInputDataVertex<Metasound::FMonoAudioFormat> *this,FLazyName *param_1,
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
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_VFMonoAudioFormat_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::FMonoAudioFormat><> @ 14afdf430

TInputDataVertex<Metasound::FMonoAudioFormat> * __thiscall
Metasound::TInputDataVertex<Metasound::FMonoAudioFormat>::
TInputDataVertex<Metasound::FMonoAudioFormat><>
          (TInputDataVertex<Metasound::FMonoAudioFormat> *this,FName *param_1,
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
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_VFMonoAudioFormat_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::FStereoAudioFormat><> @ 14afdf490

TInputDataVertex<Metasound::FStereoAudioFormat> * __thiscall
Metasound::TInputDataVertex<Metasound::FStereoAudioFormat>::
TInputDataVertex<Metasound::FStereoAudioFormat><>
          (TInputDataVertex<Metasound::FStereoAudioFormat> *this,FLazyName *param_1,
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
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_VFStereoAudioFormat_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<Metasound::FStereoAudioFormat><> @ 14afdf510

TInputDataVertex<Metasound::FStereoAudioFormat> * __thiscall
Metasound::TInputDataVertex<Metasound::FStereoAudioFormat>::
TInputDataVertex<Metasound::FStereoAudioFormat><>
          (TInputDataVertex<Metasound::FStereoAudioFormat> *this,FName *param_1,
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
  this->field_0x30 = 0;
  *(undefined ***)this = &___7__TInputDataVertex_VFStereoAudioFormat_Metasound___Metasound__6B_;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

// TInputDataVertex<float><float> @ 14afe0750

TInputDataVertex<float> * __thiscall
Metasound::TInputDataVertex<float>::TInputDataVertex<float><float>
          (TInputDataVertex<float> *this,FLazyName *param_1,FDataVertexMetadata *param_2,
          float *param_3)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<float>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  this->field_0x30 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(float *)&this->field_0x20 = *param_3;
  this->field_0x30 = 3;
  *(undefined ***)this = &___7__TInputDataVertex_M_Metasound__6B_;
  return this;
}

// TInputDataVertex<float><float> @ 14afe07f0

TInputDataVertex<float> * __thiscall
Metasound::TInputDataVertex<float>::TInputDataVertex<float><float>
          (TInputDataVertex<float> *this,FName *param_1,FDataVertexMetadata *param_2,float *param_3)

{
  uint uVar1;
  FName *pFVar2;
  
  pFVar2 = GetMetasoundDataTypeName<float>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  uVar1 = param_1->Number;
  *(uint *)&this->field_0x8 = (param_1->ComparisonIndex).Value;
  *(uint *)&this->field_0xc = uVar1;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  this->field_0x30 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(float *)&this->field_0x20 = *param_3;
  this->field_0x30 = 3;
  *(undefined ***)this = &___7__TInputDataVertex_M_Metasound__6B_;
  return this;
}

// TInputDataVertex<Metasound::FTime><float> @ 14afe0870

TInputDataVertex<Metasound::FTime> * __thiscall
Metasound::TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
          (TInputDataVertex<Metasound::FTime> *this,FLazyName *param_1,FDataVertexMetadata *param_2,
          float *param_3)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::FTime>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  this->field_0x30 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(float *)&this->field_0x20 = *param_3;
  this->field_0x30 = 3;
  *(undefined ***)this = &___7__TInputDataVertex_VFTime_Metasound___Metasound__6B_;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_><> @ 14b044d60

TInputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::EDynamicFilterType,0>_>_> * __thiscall
Metasound::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_><>
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
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><> @ 14b044de0

TInputDataVertex<Metasound::TEnum<Audio::EDynamicFilterType,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><> @ 14b044e60

TInputDataVertex<Metasound::TEnum<Audio::EDynamicFilterType,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_><>
          (void *this,FName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(FName *)((longlong)this + 8) = *param_1;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><int> @ 14b045300

TInputDataVertex<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><int>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2,int *param_3)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  *(int *)((longlong)this + 0x20) = *param_3;
  *(undefined1 *)((longlong)this + 0x30) = 2;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// TInputDataVertex<Metasound::FAudioBuffer><float> @ 14b0453a0

TInputDataVertex<Metasound::FAudioBuffer> * __thiscall
Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
TInputDataVertex<Metasound::FAudioBuffer><float>
          (TInputDataVertex<Metasound::FAudioBuffer> *this,FLazyName *param_1,
          FDataVertexMetadata *param_2,float *param_3)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  this->field_0x30 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(float *)&this->field_0x20 = *param_3;
  this->field_0x30 = 3;
  *(undefined ***)this = &___7__TInputDataVertex_VFAudioBuffer_Metasound___Metasound__6B_;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_><> @ 14b099d50

TInputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>_> * __thiscall
Metasound::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_><>
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
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_><> @ 14b099dd0

TInputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>_> *
__thiscall
Metasound::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_><>
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
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_><> @ 14b099e50

TInputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EKneeMode,0>_>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_><>
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
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_><> @ 14b099ed0

TInputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>_>
* __thiscall
Metasound::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_><>
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
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><> @ 14b099f50

TInputDataVertex<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><> @ 14b099fd0

TInputDataVertex<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><>
          (void *this,FName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(FName *)((longlong)this + 8) = *param_1;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><> @ 14b09a030

TInputDataVertex<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><> @ 14b09a0b0

TInputDataVertex<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><>
          (void *this,FName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(FName *)((longlong)this + 8) = *param_1;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><> @ 14b09a110

TInputDataVertex<Metasound::TEnum<Metasound::EKneeMode,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><> @ 14b09a190

TInputDataVertex<Metasound::TEnum<Metasound::EKneeMode,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><>
          (void *this,FName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(FName *)((longlong)this + 8) = *param_1;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><> @ 14b09a1f0

TInputDataVertex<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><>
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
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><> @ 14b09a270

TInputDataVertex<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><>
          (void *this,FName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                     ();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(FName *)((longlong)this + 8) = *param_1;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><int> @ 14b09b3d0

TInputDataVertex<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_><int>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2,int *param_3)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  *(int *)((longlong)this + 0x20) = *param_3;
  *(undefined1 *)((longlong)this + 0x30) = 2;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><int> @ 14b09b470

TInputDataVertex<Metasound::TEnum<Metasound::EKneeMode,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::EKneeMode,0>_><int>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2,int *param_3)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  *(int *)((longlong)this + 0x20) = *param_3;
  *(undefined1 *)((longlong)this + 0x30) = 2;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><int> @ 14b09b510

TInputDataVertex<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><int>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2,int *param_3)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                     ();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  *(int *)((longlong)this + 0x20) = *param_3;
  *(undefined1 *)((longlong)this + 0x30) = 2;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_><> @ 14b114a10

TInputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>_> *
__thiscall
Metasound::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_><>
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
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_><> @ 14b114a90

TInputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ENoiseType,0>_>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
::TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_><>
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
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_><> @ 14b114b10

TInputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ESawGenerationType,0>_>_> *
__thiscall
Metasound::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_><>
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
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_><> @ 14b114b90

TInputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ESineGenerationType,3>_>_> *
__thiscall
Metasound::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_><>
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
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_><> @ 14b114c10

TInputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>_> *
__thiscall
Metasound::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_><>
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
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_><> @ 14b114c90

TInputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>_> *
__thiscall
Metasound::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_><>
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
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_><> @ 14b114d10

TInputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>_> *
__thiscall
Metasound::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_><>
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
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><> @ 14b114d90

TInputDataVertex<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><> @ 14b114e10

TInputDataVertex<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><>
          (void *this,FName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(FName *)((longlong)this + 8) = *param_1;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><> @ 14b114e70

TInputDataVertex<Metasound::TEnum<Metasound::ENoiseType,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><> @ 14b114ef0

TInputDataVertex<Metasound::TEnum<Metasound::ENoiseType,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><>
          (void *this,FName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(FName *)((longlong)this + 8) = *param_1;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><> @ 14b114f50

TInputDataVertex<Metasound::TEnum<Metasound::ESawGenerationType,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><> @ 14b114fd0

TInputDataVertex<Metasound::TEnum<Metasound::ESawGenerationType,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_><>
          (void *this,FName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(FName *)((longlong)this + 8) = *param_1;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><> @ 14b115030

TInputDataVertex<Metasound::TEnum<Metasound::ESineGenerationType,3>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><> @ 14b1150b0

TInputDataVertex<Metasound::TEnum<Metasound::ESineGenerationType,3>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><>
          (void *this,FName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(FName *)((longlong)this + 8) = *param_1;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><> @ 14b115110

TInputDataVertex<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><> @ 14b115190

TInputDataVertex<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_><>
          (void *this,FName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(FName *)((longlong)this + 8) = *param_1;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><> @ 14b1151f0

TInputDataVertex<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><> @ 14b115270

TInputDataVertex<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_><>
          (void *this,FName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(FName *)((longlong)this + 8) = *param_1;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><> @ 14b1152d0

TInputDataVertex<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><> @ 14b115350

TInputDataVertex<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><>
          (void *this,FName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(FName *)((longlong)this + 8) = *param_1;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<int><int_const_&> @ 14b115f80

TInputDataVertex<int> * __thiscall
Metasound::TInputDataVertex<int>::TInputDataVertex<int><int_const_&>
          (TInputDataVertex<int> *this,FLazyName *param_1,FDataVertexMetadata *param_2,int *param_3)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<int>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  this->field_0x30 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(int *)&this->field_0x20 = *param_3;
  this->field_0x30 = 2;
  *(undefined ***)this = &___7__TInputDataVertex_H_Metasound__6B_;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><int> @ 14b117210

TInputDataVertex<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><int>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2,int *param_3)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  *(int *)((longlong)this + 0x20) = *param_3;
  *(undefined1 *)((longlong)this + 0x30) = 2;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><int> @ 14b1172b0

TInputDataVertex<Metasound::TEnum<Metasound::ENoiseType,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::ENoiseType,0>_><int>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2,int *param_3)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  *(int *)((longlong)this + 0x20) = *param_3;
  *(undefined1 *)((longlong)this + 0x30) = 2;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><int> @ 14b117350

TInputDataVertex<Metasound::TEnum<Metasound::ESineGenerationType,3>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_><int>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2,int *param_3)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  *(int *)((longlong)this + 0x20) = *param_3;
  *(undefined1 *)((longlong)this + 0x30) = 2;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_
  ;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><int> @ 14b1173f0

TInputDataVertex<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_><int>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2,int *param_3)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  *(int *)((longlong)this + 0x20) = *param_3;
  *(undefined1 *)((longlong)this + 0x30) = 2;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_><> @ 14b1bbcc0

TInputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EPanningLaw,0>_>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
::TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_><>
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
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_><> @ 14b1bbd40

TInputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>_> *
__thiscall
Metasound::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_><>
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
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><> @ 14b1bbdc0

TInputDataVertex<Metasound::TEnum<Metasound::EPanningLaw,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><> @ 14b1bbe40

TInputDataVertex<Metasound::TEnum<Metasound::EPanningLaw,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><>
          (void *this,FName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(FName *)((longlong)this + 8) = *param_1;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><> @ 14b1bbea0

TInputDataVertex<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><> @ 14b1bbf20

TInputDataVertex<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><>
          (void *this,FName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(FName *)((longlong)this + 8) = *param_1;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<float><float_const_&> @ 14b1bc480

TInputDataVertex<float> * __thiscall
Metasound::TInputDataVertex<float>::TInputDataVertex<float><float_const_&>
          (TInputDataVertex<float> *this,FLazyName *param_1,FDataVertexMetadata *param_2,
          float *param_3)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<float>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  this->field_0x30 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(float *)&this->field_0x20 = *param_3;
  this->field_0x30 = 3;
  *(undefined ***)this = &___7__TInputDataVertex_M_Metasound__6B_;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><int> @ 14b1bc8a0

TInputDataVertex<Metasound::TEnum<Metasound::EPanningLaw,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><int>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2,int *param_3)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  *(int *)((longlong)this + 0x20) = *param_3;
  *(undefined1 *)((longlong)this + 0x30) = 2;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><int> @ 14b1bc940

TInputDataVertex<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><int>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2,int *param_3)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  *(int *)((longlong)this + 0x20) = *param_3;
  *(undefined1 *)((longlong)this + 0x30) = 2;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_><> @ 14b216be0

TInputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>_> *
__thiscall
Metasound::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_><>
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
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_><> @ 14b216c60

TInputDataVertex<Metasound::TVariable<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>_> *
__thiscall
Metasound::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
::
TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_><>
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
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_><> @ 14b216ce0

TInputDataVertex<Metasound::TVariable<Metasound::TEnum<Audio::EWaveShaperType,1>_>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
::TInputDataVertex<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_><>
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
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_U__TVariable_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><> @ 14b216d60

TInputDataVertex<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><> @ 14b216de0

TInputDataVertex<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><>
          (void *this,FName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(FName *)((longlong)this + 8) = *param_1;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><> @ 14b216e40

TInputDataVertex<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><> @ 14b216ec0

TInputDataVertex<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><>
          (void *this,FName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(FName *)((longlong)this + 8) = *param_1;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><> @ 14b216f20

TInputDataVertex<Metasound::TEnum<Audio::EWaveShaperType,1>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
TInputDataVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><> @ 14b216fa0

TInputDataVertex<Metasound::TEnum<Audio::EWaveShaperType,1>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
TInputDataVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><>
          (void *this,FName *param_1,FDataVertexMetadata *param_2)

{
  FName *pFVar1;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(FName *)((longlong)this + 8) = *param_1;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  return this;
}

// TInputDataVertex<int><float_const_&> @ 14b2177e0

TInputDataVertex<int> * __thiscall
Metasound::TInputDataVertex<int>::TInputDataVertex<int><float_const_&>
          (TInputDataVertex<int> *this,FLazyName *param_1,FDataVertexMetadata *param_2,
          float *param_3)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<int>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  this->field_0x30 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(float *)&this->field_0x20 = *param_3;
  this->field_0x30 = 3;
  *(undefined ***)this = &___7__TInputDataVertex_H_Metasound__6B_;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><int> @ 14b217dc0

TInputDataVertex<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_><int>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2,int *param_3)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  *(int *)((longlong)this + 0x20) = *param_3;
  *(undefined1 *)((longlong)this + 0x30) = 2;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><int> @ 14b217e60

TInputDataVertex<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
TInputDataVertex<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_><int>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2,int *param_3)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  *(int *)((longlong)this + 0x20) = *param_3;
  *(undefined1 *)((longlong)this + 0x30) = 2;
  *(undefined ***)this =
       &
       ___7__TInputDataVertex_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_
  ;
  return this;
}

// TInputDataVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><int> @ 14b217f00

TInputDataVertex<Metasound::TEnum<Audio::EWaveShaperType,1>_> * __thiscall
Metasound::TInputDataVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
TInputDataVertex<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_><int>
          (void *this,FLazyName *param_1,FDataVertexMetadata *param_2,int *param_3)

{
  FName *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)((longlong)this + 8) = local_res8;
  *(FName *)((longlong)this + 0x10) = *pFVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  *(undefined1 *)((longlong)this + 0x30) = 0;
  *(undefined4 *)((longlong)this + 0x18) = 0;
  *(int *)((longlong)this + 0x20) = *param_3;
  *(undefined1 *)((longlong)this + 0x30) = 2;
  *(undefined ***)this =
       &___7__TInputDataVertex_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  return this;
}

// TInputDataVertex<FString><FString_const_> @ 14b2948f0

TInputDataVertex<FString> * __thiscall
Metasound::TInputDataVertex<FString>::TInputDataVertex<FString><FString_const_>
          (TInputDataVertex<FString> *this,FLazyName *param_1,FDataVertexMetadata *param_2,
          FString *param_3)

{
  uint uVar1;
  FName *pFVar2;
  undefined8 local_res8;
  
  pFVar2 = GetMetasoundDataTypeName<FString>();
  FLazyName::Resolve(param_1);
  *(undefined ***)this = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)&this->field_0x8 = local_res8;
  uVar1 = pFVar2->Number;
  *(uint *)&this->field_0x10 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&this->field_0x14 = uVar1;
  *(undefined ***)this = &___7FInputDataVertex_Metasound__6B_;
  this->field_0x30 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  ::FString::FString((FString *)&this->field_0x20,param_3);
  this->field_0x30 = 4;
  *(undefined ***)this = &___7__TInputDataVertex_VFString___Metasound__6B_;
  return this;
}

