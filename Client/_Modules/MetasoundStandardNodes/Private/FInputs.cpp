// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 2

// FInputs @ 14b1cddb0

FInputs * __thiscall
Metasound::FPlateReverbOperator::FInputs::FInputs(FInputs *this,FInputs *param_1)

{
  longlong lVar1;
  
  *(undefined ***)&this->Bypass = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->Bypass).field_0x8 = *(undefined8 *)&(param_1->Bypass).field_0x8;
  lVar1 = *(longlong *)&(param_1->Bypass).field_0x10;
  *(longlong *)&(this->Bypass).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Bypass = &___7__TDataReadReference__N_Metasound__6B_;
  *(undefined ***)&this->AudioLeft = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->AudioLeft).field_0x8 = *(undefined8 *)&(param_1->AudioLeft).field_0x8;
  lVar1 = *(longlong *)&(param_1->AudioLeft).field_0x10;
  *(longlong *)&(this->AudioLeft).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->AudioLeft =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined ***)&this->AudioRight = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->AudioRight).field_0x8 = *(undefined8 *)&(param_1->AudioRight).field_0x8;
  lVar1 = *(longlong *)&(param_1->AudioRight).field_0x10;
  *(longlong *)&(this->AudioRight).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->AudioRight =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined ***)&this->DryLevel = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->DryLevel).field_0x8 = *(undefined8 *)&(param_1->DryLevel).field_0x8;
  lVar1 = *(longlong *)&(param_1->DryLevel).field_0x10;
  *(longlong *)&(this->DryLevel).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->DryLevel = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->WetLevel = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->WetLevel).field_0x8 = *(undefined8 *)&(param_1->WetLevel).field_0x8;
  lVar1 = *(longlong *)&(param_1->WetLevel).field_0x10;
  *(longlong *)&(this->WetLevel).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->WetLevel = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->LateReflectionsDelay = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->LateReflectionsDelay).field_0x8 =
       *(undefined8 *)&(param_1->LateReflectionsDelay).field_0x8;
  lVar1 = *(longlong *)&(param_1->LateReflectionsDelay).field_0x10;
  *(longlong *)&(this->LateReflectionsDelay).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->LateReflectionsDelay = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->LateReflectionsGainDb = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->LateReflectionsGainDb).field_0x8 =
       *(undefined8 *)&(param_1->LateReflectionsGainDb).field_0x8;
  lVar1 = *(longlong *)&(param_1->LateReflectionsGainDb).field_0x10;
  *(longlong *)&(this->LateReflectionsGainDb).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->LateReflectionsGainDb = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->LateReflectionsBandwidth = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->LateReflectionsBandwidth).field_0x8 =
       *(undefined8 *)&(param_1->LateReflectionsBandwidth).field_0x8;
  lVar1 = *(longlong *)&(param_1->LateReflectionsBandwidth).field_0x10;
  *(longlong *)&(this->LateReflectionsBandwidth).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->LateReflectionsBandwidth = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->LateReflectionsDiffusion = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->LateReflectionsDiffusion).field_0x8 =
       *(undefined8 *)&(param_1->LateReflectionsDiffusion).field_0x8;
  lVar1 = *(longlong *)&(param_1->LateReflectionsDiffusion).field_0x10;
  *(longlong *)&(this->LateReflectionsDiffusion).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->LateReflectionsDiffusion = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->LateReflectionsDampening = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->LateReflectionsDampening).field_0x8 =
       *(undefined8 *)&(param_1->LateReflectionsDampening).field_0x8;
  lVar1 = *(longlong *)&(param_1->LateReflectionsDampening).field_0x10;
  *(longlong *)&(this->LateReflectionsDampening).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->LateReflectionsDampening = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->LateReflectionsDecay = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->LateReflectionsDecay).field_0x8 =
       *(undefined8 *)&(param_1->LateReflectionsDecay).field_0x8;
  lVar1 = *(longlong *)&(param_1->LateReflectionsDecay).field_0x10;
  *(longlong *)&(this->LateReflectionsDecay).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->LateReflectionsDecay = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->LateReflectionsDensity = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->LateReflectionsDensity).field_0x8 =
       *(undefined8 *)&(param_1->LateReflectionsDensity).field_0x8;
  lVar1 = *(longlong *)&(param_1->LateReflectionsDensity).field_0x10;
  *(longlong *)&(this->LateReflectionsDensity).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->LateReflectionsDensity = &___7__TDataReadReference_M_Metasound__6B_;
  return this;
}

// ~FInputs @ 14b1cfed0

void __thiscall Metasound::FPlateReverbOperator::FInputs::~FInputs(FInputs *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->LateReflectionsDensity).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->LateReflectionsDecay).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->LateReflectionsDampening).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->LateReflectionsDiffusion).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->LateReflectionsBandwidth).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->LateReflectionsGainDb).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->LateReflectionsDelay).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->WetLevel).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DryLevel).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioRight).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->AudioLeft).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->Bypass).field_0x10);
  return;
}

