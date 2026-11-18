// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FQuartzOffset @ 14733f900

FQuartzOffset * __thiscall Audio::FQuartzOffset::FQuartzOffset(FQuartzOffset *this,double param_1)

{
  (this->OffsetInMilliseconds).TypedValue = param_1;
  (this->OffsetInMilliseconds).bIsSet = true;
  (this->OffsetAsDuration).bIsSet = false;
  return this;
}

// FQuartzOffset @ 14733f920

FQuartzOffset * __thiscall
Audio::FQuartzOffset::FQuartzOffset
          (FQuartzOffset *this,EQuartzCommandQuantization param_1,double param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  
  (this->OffsetInMilliseconds).bIsSet = false;
  local_18 = CONCAT31(local_18._1_3_,param_1);
  (this->OffsetAsDuration).bIsSet = true;
  *(undefined4 *)&(this->OffsetAsDuration).TypedValue = local_18;
  *(undefined4 *)&(this->OffsetAsDuration).TypedValue.field_0x4 = uStack_14;
  *(double *)&(this->OffsetAsDuration).TypedValue.field_0x8 = param_2;
  return this;
}

// operator== @ 147342a70

bool __thiscall Audio::FQuartzOffset::operator==(FQuartzOffset *this,FQuartzOffset *param_1)

{
  bool bVar1;
  
  bVar1 = (this->OffsetInMilliseconds).bIsSet;
  if (((bVar1 == (param_1->OffsetInMilliseconds).bIsSet) &&
      (((bVar1 == false ||
        ((param_1->OffsetInMilliseconds).TypedValue == (this->OffsetInMilliseconds).TypedValue)) &&
       (bVar1 = (this->OffsetAsDuration).bIsSet, bVar1 == (param_1->OffsetAsDuration).bIsSet)))) &&
     ((bVar1 == false ||
      ((*(char *)&(this->OffsetAsDuration).TypedValue ==
        *(char *)&(param_1->OffsetAsDuration).TypedValue &&
       (*(double *)&(param_1->OffsetAsDuration).TypedValue.field_0x8 ==
        *(double *)&(this->OffsetAsDuration).TypedValue.field_0x8)))))) {
    return true;
  }
  return false;
}

// GetOffsetInAudioFrames @ 14734f990

int __thiscall
Audio::FQuartzOffset::GetOffsetInAudioFrames(FQuartzOffset *this,FQuartzClockTickRate *param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  EQuartzCommandQuantization EVar5;
  double dVar6;
  
  if (((this->OffsetInMilliseconds).bIsSet != false) && ((this->OffsetAsDuration).bIsSet != false))
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!(OffsetInMilliseconds.IsSet() && OffsetAsDuration.IsSet())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzSubscription.cpp"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  if ((this->OffsetInMilliseconds).bIsSet != false) {
    return (int)((this->OffsetInMilliseconds).TypedValue * __real_408f400000000000 *
                param_1->SampleRate);
  }
  if ((this->OffsetAsDuration).bIsSet == false) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2677017514612883689>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzSubscription.cpp"
                       ,0xe9,"false");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  else {
    dVar2 = *(double *)&(this->OffsetAsDuration).TypedValue.field_0x8;
    EVar5 = (EQuartzCommandQuantization)*(undefined8 *)&(this->OffsetAsDuration).TypedValue;
    if (EVar5 != None) {
      dVar6 = FQuartzClockTickRate::GetFramesPerDuration(param_1,EVar5);
      return (int)(dVar6 * dVar2);
    }
  }
  return 0;
}

// IsSetAsMilliseconds @ 1473519a0

bool __thiscall Audio::FQuartzOffset::IsSetAsMilliseconds(FQuartzOffset *this)

{
  return (this->OffsetInMilliseconds).bIsSet;
}

// IsSetAsMusicalDuration @ 1473519b0

bool __thiscall Audio::FQuartzOffset::IsSetAsMusicalDuration(FQuartzOffset *this)

{
  return (this->OffsetAsDuration).bIsSet;
}

// SetOffsetInMilliseconds @ 147357c60

void __thiscall Audio::FQuartzOffset::SetOffsetInMilliseconds(FQuartzOffset *this,double param_1)

{
  if ((this->OffsetAsDuration).bIsSet != false) {
    (this->OffsetAsDuration).bIsSet = false;
  }
  (this->OffsetInMilliseconds).TypedValue = param_1;
  (this->OffsetInMilliseconds).bIsSet = true;
  return;
}

// SetOffsetMusical @ 147357c80

void __thiscall
Audio::FQuartzOffset::SetOffsetMusical
          (FQuartzOffset *this,EQuartzCommandQuantization param_1,double param_2)

{
  if ((this->OffsetInMilliseconds).bIsSet != false) {
    (this->OffsetInMilliseconds).bIsSet = false;
  }
  *(EQuartzCommandQuantization *)&(this->OffsetAsDuration).TypedValue = param_1;
  (this->OffsetAsDuration).bIsSet = true;
  *(double *)&(this->OffsetAsDuration).TypedValue.field_0x8 = (double)(float)param_2;
  return;
}

