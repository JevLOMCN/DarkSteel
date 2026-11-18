// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 21

// CreateOperator @ 14afccfd0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 == (void *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator
                       (this_00,&local_res10,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14afcf920

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::
TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 == (void *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator
                       (this_00,&local_res10,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14afcfda0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::FStereoAudioFormat>::CreateOperator
          (TLiteralOperatorLiteralFactory<Metasound::FStereoAudioFormat> *this,
          FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar2 = ::operator_new(0x28);
  if (pFVar2 == (FLiteralOperator *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator(pFVar2,&local_res10,pFVar1,&this->InitParam);
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14afd07f0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::FMonoAudioFormat>::CreateOperator
          (TLiteralOperatorLiteralFactory<Metasound::FMonoAudioFormat> *this,
          FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pFVar2 = ::operator_new(0x28);
  if (pFVar2 == (FLiteralOperator *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator(pFVar2,&local_res10,pFVar1,&this->InitParam);
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b035320

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 == (void *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator
                       (this_00,&local_res10,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b07cff0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::
TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 == (void *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator
                       (this_00,&local_res10,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b080c20

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 == (void *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator
                       (this_00,&local_res10,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b085040

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 == (void *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator
                       (this_00,&local_res10,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b087ea0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 == (void *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator
                       (this_00,&local_res10,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0ef230

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 == (void *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator
                       (this_00,&local_res10,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0f0d10

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::
TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 == (void *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator
                       (this_00,&local_res10,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0f3870

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::
TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 == (void *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator
                       (this_00,&local_res10,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0f6090

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 == (void *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator
                       (this_00,&local_res10,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0f8ac0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
::CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 == (void *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator
                       (this_00,&local_res10,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b0fa7b0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 == (void *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator
                       (this_00,&local_res10,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b112030

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 == (void *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator
                       (this_00,&local_res10,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b1b7070

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 == (void *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator
                       (this_00,&local_res10,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b1b9d60

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 == (void *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator
                       (this_00,&local_res10,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b1ff5a0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 == (void *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator
                       (this_00,&local_res10,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b208e70

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::
TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 == (void *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator
                       (this_00,&local_res10,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b215820

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TLiteralOperatorLiteralFactory<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
CreateOperator(void *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  void *this_00;
  FLiteralOperator *pFVar2;
  FName local_res10;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x28);
  if (this_00 == (void *)0x0) {
    param_1->Node = (INode *)0x0;
  }
  else {
    FLazyName::Resolve(&LiteralNodeNames::OutputValueName);
    pFVar2 = FLiteralOperator::FLiteralOperator
                       (this_00,&local_res10,pFVar1,(FLiteral *)((longlong)this + 8));
    param_1->Node = (INode *)pFVar2;
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

