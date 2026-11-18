// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 30

// ~TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerAudioBuffer> @ 14b350590

void __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerAudioBuffer>::
~TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerAudioBuffer>
          (TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerAudioBuffer> *this)

{
  return;
}

// ~TVertexAnalyzerFactory<Metasound::Engine::FVertexAnalyzerAudioBusWriter> @ 14b3505a0

void __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Engine::FVertexAnalyzerAudioBusWriter>::
~TVertexAnalyzerFactory<Metasound::Engine::FVertexAnalyzerAudioBusWriter>
          (TVertexAnalyzerFactory<Metasound::Engine::FVertexAnalyzerAudioBusWriter> *this)

{
  return;
}

// ~TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerEnvelopeFollower> @ 14b3505b0

void __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerEnvelopeFollower>::
~TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerEnvelopeFollower>
          (TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerEnvelopeFollower> *this)

{
  return;
}

// ~TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardBool> @ 14b3505c0

void __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardBool>::
~TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardBool>
          (TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardBool> *this)

{
  return;
}

// ~TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardFloat> @ 14b3505d0

void __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardFloat>::
~TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardFloat>
          (TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardFloat> *this)

{
  return;
}

// ~TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardInt> @ 14b3505e0

void __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardInt>::
~TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardInt>
          (TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardInt> *this)

{
  return;
}

// ~TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardString> @ 14b3505f0

void __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardString>::
~TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardString>
          (TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardString> *this)

{
  return;
}

// ~TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardTime> @ 14b350600

void __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardTime>::
~TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardTime>
          (TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardTime> *this)

{
  return;
}

// ~TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerTriggerDensity> @ 14b350610

void __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerTriggerDensity>::
~TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerTriggerDensity>
          (TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerTriggerDensity> *this)

{
  return;
}

// ~TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerTriggerToTime> @ 14b350620

void __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerTriggerToTime>::
~TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerTriggerToTime>
          (TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerTriggerToTime> *this)

{
  return;
}

// CreateAnalyzer @ 14b36aca0

TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
 __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerAudioBuffer>::
CreateAnalyzer(TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerAudioBuffer> *this,
              FCreateAnalyzerParams *param_1)

{
  FVertexAnalyzerAudioBuffer *pFVar1;
  FCreateAnalyzerParams *in_R8;
  
  pFVar1 = ::operator_new(0x100);
  if (pFVar1 != (FVertexAnalyzerAudioBuffer *)0x0) {
    pFVar1 = FVertexAnalyzerAudioBuffer::FVertexAnalyzerAudioBuffer(pFVar1,in_R8);
    param_1->AnalyzerAddress = (FAnalyzerAddress *)pFVar1;
    return (TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
            )(IVertexAnalyzer *)param_1;
  }
  param_1->AnalyzerAddress = (FAnalyzerAddress *)0x0;
  return (TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
          )(IVertexAnalyzer *)param_1;
}

// CreateAnalyzer @ 14b36ad00

TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
 __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Engine::FVertexAnalyzerAudioBusWriter>::
CreateAnalyzer(TVertexAnalyzerFactory<Metasound::Engine::FVertexAnalyzerAudioBusWriter> *this,
              FCreateAnalyzerParams *param_1)

{
  FVertexAnalyzerAudioBusWriter *pFVar1;
  FCreateAnalyzerParams *in_R8;
  
  pFVar1 = ::operator_new(0xf8);
  if (pFVar1 != (FVertexAnalyzerAudioBusWriter *)0x0) {
    pFVar1 = Engine::FVertexAnalyzerAudioBusWriter::FVertexAnalyzerAudioBusWriter(pFVar1,in_R8);
    param_1->AnalyzerAddress = (FAnalyzerAddress *)pFVar1;
    return (TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
            )(IVertexAnalyzer *)param_1;
  }
  param_1->AnalyzerAddress = (FAnalyzerAddress *)0x0;
  return (TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
          )(IVertexAnalyzer *)param_1;
}

// CreateAnalyzer @ 14b36ad60

TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
 __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerEnvelopeFollower>::
CreateAnalyzer(TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerEnvelopeFollower> *this,
              FCreateAnalyzerParams *param_1)

{
  FVertexAnalyzerEnvelopeFollower *pFVar1;
  FCreateAnalyzerParams *in_R8;
  
  pFVar1 = ::operator_new(0x168);
  if (pFVar1 != (FVertexAnalyzerEnvelopeFollower *)0x0) {
    pFVar1 = FVertexAnalyzerEnvelopeFollower::FVertexAnalyzerEnvelopeFollower(pFVar1,in_R8);
    param_1->AnalyzerAddress = (FAnalyzerAddress *)pFVar1;
    return (TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
            )(IVertexAnalyzer *)param_1;
  }
  param_1->AnalyzerAddress = (FAnalyzerAddress *)0x0;
  return (TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
          )(IVertexAnalyzer *)param_1;
}

// CreateAnalyzer @ 14b36adc0

TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
 __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardBool>::
CreateAnalyzer(TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardBool> *this,
              FCreateAnalyzerParams *param_1)

{
  FOperatorSettings *pFVar1;
  FVertexAnalyzerBase *this_00;
  FAnalyzerOutput *pFVar2;
  FName *pFVar3;
  TBoundAnalyzerOutput<bool> *pTVar4;
  undefined8 *in_R8;
  FName local_res20;
  undefined1 local_a8 [16];
  TReferenceControllerBase<0> *local_98;
  TBoundAnalyzerOutput<bool> *local_88;
  TReferenceControllerBase<1> *local_80;
  FAnalyzerAddress local_78;
  
  this_00 = ::operator_new(0xe8);
  if (this_00 == (FVertexAnalyzerBase *)0x0) {
    param_1->AnalyzerAddress = (FAnalyzerAddress *)0x0;
  }
  else {
    FVertexAnalyzerBase::FVertexAnalyzerBase
              (this_00,(FAnalyzerAddress *)*in_R8,(FAnyDataReference *)in_R8[2]);
    *(undefined1 *)((longlong)&this_00[1]._padding_ + 1) = 0;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TVertexAnalyzerForwardValue_VFVertexAnalyzerForwardBool_Frontend_Metasound___N_Frontend_Metasound__6B_
    ;
    FAnyDataReference::GetAs<Metasound::TDataReadReference<bool>_>
              ((FAnyDataReference *)in_R8[2],(TDataReadReference<bool> *)local_a8);
    if (local_98 != (TReferenceControllerBase<0> *)0x0) {
      local_98->SharedReferenceCount = local_98->SharedReferenceCount + 1;
    }
    pFVar1 = (FOperatorSettings *)in_R8[1];
    pFVar2 = TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardBool,bool>::
             FOutputs::GetValue();
    local_78.NodeID.A = (this_00->AnalyzerAddress).NodeID.A;
    local_78.NodeID.B = (this_00->AnalyzerAddress).NodeID.B;
    local_78.NodeID.C = (this_00->AnalyzerAddress).NodeID.C;
    local_78.NodeID.D = (this_00->AnalyzerAddress).NodeID.D;
    local_78._padding_ = (longlong)&___7FAnalyzerAddress_Frontend_Metasound__6B_;
    local_78.InstanceID = (this_00->AnalyzerAddress).InstanceID;
    local_res20 = pFVar2->Name;
    local_78.OutputName = (this_00->AnalyzerAddress).OutputName;
    local_78.AnalyzerName = (this_00->AnalyzerAddress).AnalyzerName;
    local_78.AnalyzerInstanceID.A = (this_00->AnalyzerAddress).AnalyzerInstanceID.A;
    local_78.AnalyzerInstanceID.B = (this_00->AnalyzerAddress).AnalyzerInstanceID.B;
    local_78.AnalyzerInstanceID.C = (this_00->AnalyzerAddress).AnalyzerInstanceID.C;
    local_78.AnalyzerInstanceID.D = (this_00->AnalyzerAddress).AnalyzerInstanceID.D;
    local_78.UseDataTransmissionCenter = (this_00->AnalyzerAddress).UseDataTransmissionCenter;
    local_78.AnalyzerMemberName = local_res20;
    pFVar3 = GetMetasoundDataTypeName<bool>();
    local_78.DataType = *pFVar3;
    pTVar4 = ::operator_new(0x88);
    if (pTVar4 == (TBoundAnalyzerOutput<bool> *)0x0) {
      pTVar4 = (TBoundAnalyzerOutput<bool> *)0x0;
    }
    else {
      if (local_98 != (TReferenceControllerBase<0> *)0x0) {
        local_98->SharedReferenceCount = local_98->SharedReferenceCount + 1;
      }
      local_a8._0_8_ = &___7__TDataReadReference__N_Metasound__6B_;
      pTVar4 = TBoundAnalyzerOutput<bool>::TBoundAnalyzerOutput<bool>
                         (pTVar4,&local_78,pFVar1,(TDataReadReference<bool> *)local_a8);
    }
    local_88 = pTVar4;
    local_80 = ::operator_new(0x18);
    if (local_80 != (TReferenceControllerBase<1> *)0x0) {
      local_80->SharedReferenceCount = (atomic<int>)0x1;
      local_80->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_V__TBoundAnalyzerOutput__N_Frontend_Metasound__U__DefaultDeleter_V__TBoundAnalyzerOutput__N_Frontend_Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      local_80->WeakReferenceCount = (atomic<int>)0x1;
      local_80[1]._padding_ = (longlong)pTVar4;
    }
    local_a8._0_8_ = &local_res20;
    local_a8._8_8_ = &local_88;
    TSet<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_&,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_&&>_>
              ((TSet<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>,0>,FDefaultSetAllocator>
                *)&this_00->BoundOutputData,
               (TPairInitializer<FName_&,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_&&>
                *)&stack0x00000010,(bool *)local_a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_98);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_98);
    this_00->_padding_ = (longlong)&___7FVertexAnalyzerForwardBool_Frontend_Metasound__6B_;
    param_1->AnalyzerAddress = (FAnalyzerAddress *)this_00;
  }
  return (TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
          )(IVertexAnalyzer *)param_1;
}

// CreateAnalyzer @ 14b36af80

TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
 __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardFloat>::
CreateAnalyzer(TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardFloat> *this,
              FCreateAnalyzerParams *param_1)

{
  FOperatorSettings *pFVar1;
  FVertexAnalyzerBase *this_00;
  FAnalyzerOutput *pFVar2;
  FName *pFVar3;
  TBoundAnalyzerOutput<float> *pTVar4;
  undefined8 *in_R8;
  FName local_res20;
  undefined1 local_a8 [16];
  TReferenceControllerBase<0> *local_98;
  TBoundAnalyzerOutput<float> *local_88;
  TReferenceControllerBase<1> *local_80;
  FAnalyzerAddress local_78;
  
  this_00 = ::operator_new(0xe8);
  if (this_00 == (FVertexAnalyzerBase *)0x0) {
    param_1->AnalyzerAddress = (FAnalyzerAddress *)0x0;
  }
  else {
    FVertexAnalyzerBase::FVertexAnalyzerBase
              (this_00,(FAnalyzerAddress *)*in_R8,(FAnyDataReference *)in_R8[2]);
    *(undefined1 *)((longlong)&this_00[1]._padding_ + 4) = 0;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TVertexAnalyzerForwardValue_VFVertexAnalyzerForwardFloat_Frontend_Metasound__M_Frontend_Metasound__6B_
    ;
    FAnyDataReference::GetAs<Metasound::TDataReadReference<float>_>
              ((FAnyDataReference *)in_R8[2],(TDataReadReference<float> *)local_a8);
    if (local_98 != (TReferenceControllerBase<0> *)0x0) {
      local_98->SharedReferenceCount = local_98->SharedReferenceCount + 1;
    }
    pFVar1 = (FOperatorSettings *)in_R8[1];
    pFVar2 = TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardFloat,float>::
             FOutputs::GetValue();
    local_78.NodeID.A = (this_00->AnalyzerAddress).NodeID.A;
    local_78.NodeID.B = (this_00->AnalyzerAddress).NodeID.B;
    local_78.NodeID.C = (this_00->AnalyzerAddress).NodeID.C;
    local_78.NodeID.D = (this_00->AnalyzerAddress).NodeID.D;
    local_78._padding_ = (longlong)&___7FAnalyzerAddress_Frontend_Metasound__6B_;
    local_78.InstanceID = (this_00->AnalyzerAddress).InstanceID;
    local_res20 = pFVar2->Name;
    local_78.OutputName = (this_00->AnalyzerAddress).OutputName;
    local_78.AnalyzerName = (this_00->AnalyzerAddress).AnalyzerName;
    local_78.AnalyzerInstanceID.A = (this_00->AnalyzerAddress).AnalyzerInstanceID.A;
    local_78.AnalyzerInstanceID.B = (this_00->AnalyzerAddress).AnalyzerInstanceID.B;
    local_78.AnalyzerInstanceID.C = (this_00->AnalyzerAddress).AnalyzerInstanceID.C;
    local_78.AnalyzerInstanceID.D = (this_00->AnalyzerAddress).AnalyzerInstanceID.D;
    local_78.UseDataTransmissionCenter = (this_00->AnalyzerAddress).UseDataTransmissionCenter;
    local_78.AnalyzerMemberName = local_res20;
    pFVar3 = GetMetasoundDataTypeName<float>();
    local_78.DataType = *pFVar3;
    pTVar4 = ::operator_new(0x88);
    if (pTVar4 == (TBoundAnalyzerOutput<float> *)0x0) {
      pTVar4 = (TBoundAnalyzerOutput<float> *)0x0;
    }
    else {
      if (local_98 != (TReferenceControllerBase<0> *)0x0) {
        local_98->SharedReferenceCount = local_98->SharedReferenceCount + 1;
      }
      local_a8._0_8_ = &___7__TDataReadReference_M_Metasound__6B_;
      pTVar4 = TBoundAnalyzerOutput<float>::TBoundAnalyzerOutput<float>
                         (pTVar4,&local_78,pFVar1,(TDataReadReference<float> *)local_a8);
    }
    local_88 = pTVar4;
    local_80 = ::operator_new(0x18);
    if (local_80 != (TReferenceControllerBase<1> *)0x0) {
      local_80->SharedReferenceCount = (atomic<int>)0x1;
      local_80->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_V__TBoundAnalyzerOutput_M_Frontend_Metasound__U__DefaultDeleter_V__TBoundAnalyzerOutput_M_Frontend_Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      local_80->WeakReferenceCount = (atomic<int>)0x1;
      local_80[1]._padding_ = (longlong)pTVar4;
    }
    local_a8._0_8_ = &local_res20;
    local_a8._8_8_ = &local_88;
    TSet<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_&,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_&&>_>
              ((TSet<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>,0>,FDefaultSetAllocator>
                *)&this_00->BoundOutputData,
               (TPairInitializer<FName_&,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_&&>
                *)&stack0x00000010,(bool *)local_a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_98);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_98);
    this_00->_padding_ = (longlong)&___7FVertexAnalyzerForwardFloat_Frontend_Metasound__6B_;
    param_1->AnalyzerAddress = (FAnalyzerAddress *)this_00;
  }
  return (TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
          )(IVertexAnalyzer *)param_1;
}

// CreateAnalyzer @ 14b36b140

TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
 __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardInt>::
CreateAnalyzer(TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardInt> *this,
              FCreateAnalyzerParams *param_1)

{
  FOperatorSettings *pFVar1;
  FVertexAnalyzerBase *this_00;
  FAnalyzerOutput *pFVar2;
  FName *pFVar3;
  TBoundAnalyzerOutput<int> *pTVar4;
  undefined8 *in_R8;
  FName local_res20;
  undefined1 local_a8 [16];
  TReferenceControllerBase<0> *local_98;
  TBoundAnalyzerOutput<int> *local_88;
  TReferenceControllerBase<1> *local_80;
  FAnalyzerAddress local_78;
  
  this_00 = ::operator_new(0xe8);
  if (this_00 == (FVertexAnalyzerBase *)0x0) {
    param_1->AnalyzerAddress = (FAnalyzerAddress *)0x0;
  }
  else {
    FVertexAnalyzerBase::FVertexAnalyzerBase
              (this_00,(FAnalyzerAddress *)*in_R8,(FAnyDataReference *)in_R8[2]);
    *(undefined1 *)((longlong)&this_00[1]._padding_ + 4) = 0;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TVertexAnalyzerForwardValue_VFVertexAnalyzerForwardInt_Frontend_Metasound__H_Frontend_Metasound__6B_
    ;
    FAnyDataReference::GetAs<Metasound::TDataReadReference<int>_>
              ((FAnyDataReference *)in_R8[2],(TDataReadReference<int> *)local_a8);
    if (local_98 != (TReferenceControllerBase<0> *)0x0) {
      local_98->SharedReferenceCount = local_98->SharedReferenceCount + 1;
    }
    pFVar1 = (FOperatorSettings *)in_R8[1];
    pFVar2 = TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardInt,int>::
             FOutputs::GetValue();
    local_78.NodeID.A = (this_00->AnalyzerAddress).NodeID.A;
    local_78.NodeID.B = (this_00->AnalyzerAddress).NodeID.B;
    local_78.NodeID.C = (this_00->AnalyzerAddress).NodeID.C;
    local_78.NodeID.D = (this_00->AnalyzerAddress).NodeID.D;
    local_78._padding_ = (longlong)&___7FAnalyzerAddress_Frontend_Metasound__6B_;
    local_78.InstanceID = (this_00->AnalyzerAddress).InstanceID;
    local_res20 = pFVar2->Name;
    local_78.OutputName = (this_00->AnalyzerAddress).OutputName;
    local_78.AnalyzerName = (this_00->AnalyzerAddress).AnalyzerName;
    local_78.AnalyzerInstanceID.A = (this_00->AnalyzerAddress).AnalyzerInstanceID.A;
    local_78.AnalyzerInstanceID.B = (this_00->AnalyzerAddress).AnalyzerInstanceID.B;
    local_78.AnalyzerInstanceID.C = (this_00->AnalyzerAddress).AnalyzerInstanceID.C;
    local_78.AnalyzerInstanceID.D = (this_00->AnalyzerAddress).AnalyzerInstanceID.D;
    local_78.UseDataTransmissionCenter = (this_00->AnalyzerAddress).UseDataTransmissionCenter;
    local_78.AnalyzerMemberName = local_res20;
    pFVar3 = GetMetasoundDataTypeName<int>();
    local_78.DataType = *pFVar3;
    pTVar4 = ::operator_new(0x88);
    if (pTVar4 == (TBoundAnalyzerOutput<int> *)0x0) {
      pTVar4 = (TBoundAnalyzerOutput<int> *)0x0;
    }
    else {
      if (local_98 != (TReferenceControllerBase<0> *)0x0) {
        local_98->SharedReferenceCount = local_98->SharedReferenceCount + 1;
      }
      local_a8._0_8_ = &___7__TDataReadReference_H_Metasound__6B_;
      pTVar4 = TBoundAnalyzerOutput<int>::TBoundAnalyzerOutput<int>
                         (pTVar4,&local_78,pFVar1,(TDataReadReference<int> *)local_a8);
    }
    local_88 = pTVar4;
    local_80 = ::operator_new(0x18);
    if (local_80 != (TReferenceControllerBase<1> *)0x0) {
      local_80->SharedReferenceCount = (atomic<int>)0x1;
      local_80->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_V__TBoundAnalyzerOutput_H_Frontend_Metasound__U__DefaultDeleter_V__TBoundAnalyzerOutput_H_Frontend_Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      local_80->WeakReferenceCount = (atomic<int>)0x1;
      local_80[1]._padding_ = (longlong)pTVar4;
    }
    local_a8._0_8_ = &local_res20;
    local_a8._8_8_ = &local_88;
    TSet<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_&,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_&&>_>
              ((TSet<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>,0>,FDefaultSetAllocator>
                *)&this_00->BoundOutputData,
               (TPairInitializer<FName_&,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_&&>
                *)&stack0x00000010,(bool *)local_a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_98);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_98);
    this_00->_padding_ = (longlong)&___7FVertexAnalyzerForwardInt_Frontend_Metasound__6B_;
    param_1->AnalyzerAddress = (FAnalyzerAddress *)this_00;
  }
  return (TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
          )(IVertexAnalyzer *)param_1;
}

// CreateAnalyzer @ 14b36b300

TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
 __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardString>::
CreateAnalyzer(TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardString> *this,
              FCreateAnalyzerParams *param_1)

{
  FOperatorSettings *pFVar1;
  FVertexAnalyzerBase *this_00;
  FAnalyzerOutput *pFVar2;
  FName *pFVar3;
  TBoundAnalyzerOutput<FString> *pTVar4;
  undefined8 *in_R8;
  FName local_res20;
  undefined1 local_a8 [16];
  TReferenceControllerBase<0> *local_98;
  TBoundAnalyzerOutput<FString> *local_88;
  TReferenceControllerBase<1> *local_80;
  FAnalyzerAddress local_78;
  
  this_00 = ::operator_new(0xf8);
  if (this_00 == (FVertexAnalyzerBase *)0x0) {
    param_1->AnalyzerAddress = (FAnalyzerAddress *)0x0;
  }
  else {
    FVertexAnalyzerBase::FVertexAnalyzerBase
              (this_00,(FAnalyzerAddress *)*in_R8,(FAnyDataReference *)in_R8[2]);
    *(undefined1 *)&this_00[1]._padding_ = 0;
    this_00->_padding_ =
         (longlong)
         &
         ___7__TVertexAnalyzerForwardValue_VFVertexAnalyzerForwardString_Frontend_Metasound__VFString___Frontend_Metasound__6B_
    ;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    FAnyDataReference::GetDataReadReference<FString>
              ((FAnyDataReference *)in_R8[2],(TDataReadReference<FString> *)local_a8);
    if (local_98 != (TReferenceControllerBase<0> *)0x0) {
      local_98->SharedReferenceCount = local_98->SharedReferenceCount + 1;
    }
    pFVar1 = (FOperatorSettings *)in_R8[1];
    pFVar2 = TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardString,FString>
             ::FOutputs::GetValue();
    local_78.NodeID.A = (this_00->AnalyzerAddress).NodeID.A;
    local_78.NodeID.B = (this_00->AnalyzerAddress).NodeID.B;
    local_78.NodeID.C = (this_00->AnalyzerAddress).NodeID.C;
    local_78.NodeID.D = (this_00->AnalyzerAddress).NodeID.D;
    local_78._padding_ = (longlong)&___7FAnalyzerAddress_Frontend_Metasound__6B_;
    local_78.InstanceID = (this_00->AnalyzerAddress).InstanceID;
    local_res20 = pFVar2->Name;
    local_78.OutputName = (this_00->AnalyzerAddress).OutputName;
    local_78.AnalyzerName = (this_00->AnalyzerAddress).AnalyzerName;
    local_78.AnalyzerInstanceID.A = (this_00->AnalyzerAddress).AnalyzerInstanceID.A;
    local_78.AnalyzerInstanceID.B = (this_00->AnalyzerAddress).AnalyzerInstanceID.B;
    local_78.AnalyzerInstanceID.C = (this_00->AnalyzerAddress).AnalyzerInstanceID.C;
    local_78.AnalyzerInstanceID.D = (this_00->AnalyzerAddress).AnalyzerInstanceID.D;
    local_78.UseDataTransmissionCenter = (this_00->AnalyzerAddress).UseDataTransmissionCenter;
    local_78.AnalyzerMemberName = local_res20;
    pFVar3 = GetMetasoundDataTypeName<FString>();
    local_78.DataType = *pFVar3;
    pTVar4 = ::operator_new(0x88);
    if (pTVar4 == (TBoundAnalyzerOutput<FString> *)0x0) {
      pTVar4 = (TBoundAnalyzerOutput<FString> *)0x0;
    }
    else {
      if (local_98 != (TReferenceControllerBase<0> *)0x0) {
        local_98->SharedReferenceCount = local_98->SharedReferenceCount + 1;
      }
      local_a8._0_8_ = &___7__TDataReadReference_VFString___Metasound__6B_;
      pTVar4 = TBoundAnalyzerOutput<FString>::TBoundAnalyzerOutput<FString>
                         (pTVar4,&local_78,pFVar1,(TDataReadReference<FString> *)local_a8);
    }
    local_88 = pTVar4;
    local_80 = ::operator_new(0x18);
    if (local_80 != (TReferenceControllerBase<1> *)0x0) {
      local_80->SharedReferenceCount = (atomic<int>)0x1;
      local_80->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_V__TBoundAnalyzerOutput_VFString___Frontend_Metasound__U__DefaultDeleter_V__TBoundAnalyzerOutput_VFString___Frontend_Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      local_80->WeakReferenceCount = (atomic<int>)0x1;
      local_80[1]._padding_ = (longlong)pTVar4;
    }
    local_a8._0_8_ = &local_res20;
    local_a8._8_8_ = &local_88;
    TSet<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_&,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_&&>_>
              ((TSet<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>,0>,FDefaultSetAllocator>
                *)&this_00->BoundOutputData,
               (TPairInitializer<FName_&,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_&&>
                *)&stack0x00000010,(bool *)local_a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_98);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_98);
    this_00->_padding_ = (longlong)&___7FVertexAnalyzerForwardString_Frontend_Metasound__6B_;
    param_1->AnalyzerAddress = (FAnalyzerAddress *)this_00;
  }
  return (TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
          )(IVertexAnalyzer *)param_1;
}

// CreateAnalyzer @ 14b36b4e0

TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
 __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardTime>::
CreateAnalyzer(TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardTime> *this,
              FCreateAnalyzerParams *param_1)

{
  FAnyDataReference *this_00;
  FOperatorSettings *pFVar1;
  FVertexAnalyzerBase *this_01;
  FAnalyzerOutput *pFVar2;
  FName *pFVar3;
  TBoundAnalyzerOutput<Metasound::FTime> *pTVar4;
  undefined8 *in_R8;
  FName local_res20;
  undefined1 local_a8 [16];
  TReferenceControllerBase<0> *local_98;
  TBoundAnalyzerOutput<Metasound::FTime> *local_88;
  TReferenceControllerBase<1> *local_80;
  FAnalyzerAddress local_78;
  
  this_01 = ::operator_new(0xf0);
  if (this_01 == (FVertexAnalyzerBase *)0x0) {
    param_1->AnalyzerAddress = (FAnalyzerAddress *)0x0;
  }
  else {
    FVertexAnalyzerBase::FVertexAnalyzerBase
              (this_01,(FAnalyzerAddress *)*in_R8,(FAnyDataReference *)in_R8[2]);
    *(undefined1 *)&this_01[1]._padding_ = 0;
    this_01->_padding_ =
         (longlong)
         &
         ___7__TVertexAnalyzerForwardValue_VFVertexAnalyzerForwardTime_Frontend_Metasound__VFTime_3__Frontend_Metasound__6B_
    ;
    this_00 = (FAnyDataReference *)in_R8[2];
    this_01[1]._padding_ = 0;
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FTime>_>
              (this_00,(TDataReadReference<Metasound::FTime> *)local_a8);
    if (local_98 != (TReferenceControllerBase<0> *)0x0) {
      local_98->SharedReferenceCount = local_98->SharedReferenceCount + 1;
    }
    pFVar1 = (FOperatorSettings *)in_R8[1];
    pFVar2 = TVertexAnalyzerForwardValue<Metasound::Frontend::FVertexAnalyzerForwardTime,Metasound::FTime>
             ::FOutputs::GetValue();
    local_78.NodeID.A = (this_01->AnalyzerAddress).NodeID.A;
    local_78.NodeID.B = (this_01->AnalyzerAddress).NodeID.B;
    local_78.NodeID.C = (this_01->AnalyzerAddress).NodeID.C;
    local_78.NodeID.D = (this_01->AnalyzerAddress).NodeID.D;
    local_78._padding_ = (longlong)&___7FAnalyzerAddress_Frontend_Metasound__6B_;
    local_78.InstanceID = (this_01->AnalyzerAddress).InstanceID;
    local_res20 = pFVar2->Name;
    local_78.OutputName = (this_01->AnalyzerAddress).OutputName;
    local_78.AnalyzerName = (this_01->AnalyzerAddress).AnalyzerName;
    local_78.AnalyzerInstanceID.A = (this_01->AnalyzerAddress).AnalyzerInstanceID.A;
    local_78.AnalyzerInstanceID.B = (this_01->AnalyzerAddress).AnalyzerInstanceID.B;
    local_78.AnalyzerInstanceID.C = (this_01->AnalyzerAddress).AnalyzerInstanceID.C;
    local_78.AnalyzerInstanceID.D = (this_01->AnalyzerAddress).AnalyzerInstanceID.D;
    local_78.UseDataTransmissionCenter = (this_01->AnalyzerAddress).UseDataTransmissionCenter;
    local_78.AnalyzerMemberName = local_res20;
    pFVar3 = GetMetasoundDataTypeName<Metasound::FTime>();
    local_78.DataType = *pFVar3;
    pTVar4 = ::operator_new(0x88);
    if (pTVar4 == (TBoundAnalyzerOutput<Metasound::FTime> *)0x0) {
      pTVar4 = (TBoundAnalyzerOutput<Metasound::FTime> *)0x0;
    }
    else {
      if (local_98 != (TReferenceControllerBase<0> *)0x0) {
        local_98->SharedReferenceCount = local_98->SharedReferenceCount + 1;
      }
      local_a8._0_8_ = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
      pTVar4 = TBoundAnalyzerOutput<Metasound::FTime>::TBoundAnalyzerOutput<Metasound::FTime>
                         (pTVar4,&local_78,pFVar1,(TDataReadReference<Metasound::FTime> *)local_a8);
    }
    local_88 = pTVar4;
    local_80 = ::operator_new(0x18);
    if (local_80 != (TReferenceControllerBase<1> *)0x0) {
      local_80->SharedReferenceCount = (atomic<int>)0x1;
      local_80->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_V__TBoundAnalyzerOutput_VFTime_Metasound___Frontend_Metasound__U__DefaultDeleter_V__TBoundAnalyzerOutput_VFTime_Metasound___Frontend_Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      local_80->WeakReferenceCount = (atomic<int>)0x1;
      local_80[1]._padding_ = (longlong)pTVar4;
    }
    local_a8._0_8_ = &local_res20;
    local_a8._8_8_ = &local_88;
    TSet<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_&,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_&&>_>
              ((TSet<TTuple<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>,0>,FDefaultSetAllocator>
                *)&this_01->BoundOutputData,
               (TPairInitializer<FName_&,TSharedPtr<Metasound::Frontend::IBoundAnalyzerOutput,1>_&&>
                *)&stack0x00000010,(bool *)local_a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_98);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_98);
    this_01->_padding_ = (longlong)&___7FVertexAnalyzerForwardTime_Frontend_Metasound__6B_;
    param_1->AnalyzerAddress = (FAnalyzerAddress *)this_01;
  }
  return (TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
          )(IVertexAnalyzer *)param_1;
}

// CreateAnalyzer @ 14b36b6b0

TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
 __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerTriggerDensity>::
CreateAnalyzer(TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerTriggerDensity> *this,
              FCreateAnalyzerParams *param_1)

{
  FVertexAnalyzerTriggerDensity *pFVar1;
  FCreateAnalyzerParams *in_R8;
  
  pFVar1 = ::operator_new(0x180);
  if (pFVar1 != (FVertexAnalyzerTriggerDensity *)0x0) {
    pFVar1 = FVertexAnalyzerTriggerDensity::FVertexAnalyzerTriggerDensity(pFVar1,in_R8);
    param_1->AnalyzerAddress = (FAnalyzerAddress *)pFVar1;
    return (TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
            )(IVertexAnalyzer *)param_1;
  }
  param_1->AnalyzerAddress = (FAnalyzerAddress *)0x0;
  return (TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
          )(IVertexAnalyzer *)param_1;
}

// CreateAnalyzer @ 14b36b710

TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
 __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerTriggerToTime>::
CreateAnalyzer(TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerTriggerToTime> *this,
              FCreateAnalyzerParams *param_1)

{
  FVertexAnalyzerTriggerToTime *pFVar1;
  FCreateAnalyzerParams *in_R8;
  
  pFVar1 = ::operator_new(0x118);
  if (pFVar1 != (FVertexAnalyzerTriggerToTime *)0x0) {
    pFVar1 = FVertexAnalyzerTriggerToTime::FVertexAnalyzerTriggerToTime(pFVar1,in_R8);
    param_1->AnalyzerAddress = (FAnalyzerAddress *)pFVar1;
    return (TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
            )(IVertexAnalyzer *)param_1;
  }
  param_1->AnalyzerAddress = (FAnalyzerAddress *)0x0;
  return (TUniquePtr<Metasound::Frontend::IVertexAnalyzer,TDefaultDelete<Metasound::Frontend::IVertexAnalyzer>_>
          )(IVertexAnalyzer *)param_1;
}

// GetDataType @ 14b3aea70

FName __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerAudioBuffer>::
GetDataType(TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerAudioBuffer> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = FVertexAnalyzerAudioBuffer::GetDataType();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// GetDataType @ 14b3aeaa0

FName __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Engine::FVertexAnalyzerAudioBusWriter>::
GetDataType(TVertexAnalyzerFactory<Metasound::Engine::FVertexAnalyzerAudioBusWriter> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// GetDataType @ 14b3aead0

FName __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerEnvelopeFollower>::
GetDataType(TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerEnvelopeFollower> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = FVertexAnalyzerEnvelopeFollower::GetDataType();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// GetDataType @ 14b3aeb00

FName __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardBool>::
GetDataType(TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardBool> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<bool>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// GetDataType @ 14b3aeb30

FName __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardFloat>::
GetDataType(TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardFloat> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<float>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// GetDataType @ 14b3aeb60

FName __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardInt>::
GetDataType(TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardInt> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<int>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// GetDataType @ 14b3aeb90

FName __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardString>::
GetDataType(TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardString> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<FString>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// GetDataType @ 14b3aebc0

FName __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardTime>::
GetDataType(TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerForwardTime> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = GetMetasoundDataTypeName<Metasound::FTime>();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// GetDataType @ 14b3aebf0

FName __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerTriggerDensity>::
GetDataType(TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerTriggerDensity> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = FVertexAnalyzerTriggerDensity::GetDataType();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

// GetDataType @ 14b3aec20

FName __thiscall
Metasound::Frontend::TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerTriggerToTime>::
GetDataType(TVertexAnalyzerFactory<Metasound::Frontend::FVertexAnalyzerTriggerToTime> *this)

{
  FName *pFVar1;
  FName in_RDX;
  
  pFVar1 = FVertexAnalyzerTriggerToTime::GetDataType();
  *(FName *)in_RDX = *pFVar1;
  return in_RDX;
}

