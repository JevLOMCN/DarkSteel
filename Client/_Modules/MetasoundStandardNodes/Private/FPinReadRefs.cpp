// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 2

// FPinReadRefs @ 14b0b4c00

FPinReadRefs * __thiscall
Metasound::FLowFrequencyNoiseOperator::FPinReadRefs::FPinReadRefs
          (FPinReadRefs *this,FPinReadRefs *param_1)

{
  longlong lVar1;
  
  *(undefined ***)&this->Rate = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->Rate).field_0x8 = *(undefined8 *)&(param_1->Rate).field_0x8;
  lVar1 = *(longlong *)&(param_1->Rate).field_0x10;
  *(longlong *)&(this->Rate).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Rate = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->RateJitter = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->RateJitter).field_0x8 = *(undefined8 *)&(param_1->RateJitter).field_0x8;
  lVar1 = *(longlong *)&(param_1->RateJitter).field_0x10;
  *(longlong *)&(this->RateJitter).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->RateJitter = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->StepLimit = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->StepLimit).field_0x8 = *(undefined8 *)&(param_1->StepLimit).field_0x8;
  lVar1 = *(longlong *)&(param_1->StepLimit).field_0x10;
  *(longlong *)&(this->StepLimit).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->StepLimit = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->Seed = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&(this->Seed).field_0x8 = *(undefined8 *)&(param_1->Seed).field_0x8;
  lVar1 = *(longlong *)&(param_1->Seed).field_0x10;
  *(longlong *)&(this->Seed).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Seed = &___7__TDataReadReference_H_Metasound__6B_;
  *(undefined ***)&this->InterpType =
       &
       ___7__TDataReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->InterpType).field_0x8 = *(undefined8 *)&(param_1->InterpType).field_0x8;
  lVar1 = *(longlong *)&(param_1->InterpType).field_0x10;
  *(longlong *)&(this->InterpType).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InterpType =
       &
       ___7__TDataReadReference_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->ResetSeed = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->ResetSeed).field_0x8 = *(undefined8 *)&(param_1->ResetSeed).field_0x8;
  lVar1 = *(longlong *)&(param_1->ResetSeed).field_0x10;
  *(longlong *)&(this->ResetSeed).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ResetSeed = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->Sync = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->Sync).field_0x8 = *(undefined8 *)&(param_1->Sync).field_0x8;
  lVar1 = *(longlong *)&(param_1->Sync).field_0x10;
  *(longlong *)&(this->Sync).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Sync = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined ***)&this->MinOutput = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->MinOutput).field_0x8 = *(undefined8 *)&(param_1->MinOutput).field_0x8;
  lVar1 = *(longlong *)&(param_1->MinOutput).field_0x10;
  *(longlong *)&(this->MinOutput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->MinOutput = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->MaxOutput = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->MaxOutput).field_0x8 = *(undefined8 *)&(param_1->MaxOutput).field_0x8;
  lVar1 = *(longlong *)&(param_1->MaxOutput).field_0x10;
  *(longlong *)&(this->MaxOutput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->MaxOutput = &___7__TDataReadReference_M_Metasound__6B_;
  return this;
}

// ~FPinReadRefs @ 14b0b63d0

void __thiscall
Metasound::FLowFrequencyNoiseOperator::FPinReadRefs::~FPinReadRefs(FPinReadRefs *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MaxOutput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->MinOutput).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Sync).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ResetSeed).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InterpType).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Seed).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->StepLimit).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->RateJitter).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Rate).field_0x10);
  return;
}

