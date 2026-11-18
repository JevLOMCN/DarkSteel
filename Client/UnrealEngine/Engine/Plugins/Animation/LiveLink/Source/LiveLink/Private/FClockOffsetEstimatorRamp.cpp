// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 6

// GetEstimatedOffset @ 14d04b860

double __thiscall FClockOffsetEstimatorRamp::GetEstimatedOffset(FClockOffsetEstimatorRamp *this)

{
  return this->EstimatedOffset;
}

// Reset @ 14d07a950

void __thiscall FClockOffsetEstimatorRamp::Reset(FClockOffsetEstimatorRamp *this)

{
  this->ConsecutiveBigErrorCount = this->ConsecutiveTooBigErrorRequired;
  this->EstimatedOffset = 0.0;
  return;
}

// SetCorrectionStep @ 14d07e340

void __thiscall
FClockOffsetEstimatorRamp::SetCorrectionStep(FClockOffsetEstimatorRamp *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (0.0 < param_1) {
    this->CorrectionStep = param_1;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5399497721910394955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\ClockOffsetEstimatorRamp.cpp"
                       ,0x4b,"NewValue > 0.0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetMaxAllowedEstimationError @ 14d07ec80

void __thiscall
FClockOffsetEstimatorRamp::SetMaxAllowedEstimationError
          (FClockOffsetEstimatorRamp *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (0.0 < param_1) {
    this->MaxAllowedEstimationError = param_1;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5399497721910394944>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\ClockOffsetEstimatorRamp.cpp"
                       ,0x40,"NewValue > 0.0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetRequiredConsecutiveBigError @ 14d07ecd0

void __thiscall
FClockOffsetEstimatorRamp::SetRequiredConsecutiveBigError
          (FClockOffsetEstimatorRamp *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 < 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5399497721910394933>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\ClockOffsetEstimatorRamp.cpp"
                       ,0x35,"NewCount >= 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->ConsecutiveTooBigErrorRequired = param_1;
  }
  return;
}

// UpdateEstimation @ 14d087930

void __thiscall
FClockOffsetEstimatorRamp::UpdateEstimation
          (FClockOffsetEstimatorRamp *this,double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = param_2 - param_1;
  dVar1 = this->EstimatedOffset;
  dVar5 = (double)CONCAT44((uint)((ulonglong)(dVar1 - dVar4) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar1 - dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (dVar5 < this->MaxAllowedEstimationError || dVar5 == this->MaxAllowedEstimationError) {
    this->ConsecutiveBigErrorCount = 0;
  }
  else {
    iVar3 = this->ConsecutiveBigErrorCount + 1;
    this->ConsecutiveBigErrorCount = iVar3;
    if (this->ConsecutiveTooBigErrorRequired < iVar3) goto LAB_14d08795a;
  }
  dVar2 = this->CorrectionStep;
  if (dVar2 <= dVar5) {
    if (dVar1 < dVar4) {
      this->EstimatedOffset = dVar2 + dVar1;
      return;
    }
    this->EstimatedOffset = dVar1 - dVar2;
    return;
  }
LAB_14d08795a:
  this->EstimatedOffset = dVar4;
  return;
}

