// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 10

// FOperatorSettings @ 14ad3bb50

FOperatorSettings * __thiscall
Metasound::FOperatorSettings::FOperatorSettings(FOperatorSettings *this,int param_1,float param_2)

{
  float fVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float *local_res8;
  float local_res10 [2];
  
  this->SampleRate = 1;
  this->TargetBlockRate = 1.0;
  this->ActualBlockRate = 1.0;
  this->NumFramesPerBlock = 0;
  if (param_1 < 1) {
    local_res8 = local_res10;
    local_res10[0] = (float)param_1;
    bVar2 = `Metasound::FOperatorSettings::SetSampleRate'::__l3::<lambda_1>::operator()(&local_res8)
    ;
    param_1 = 48000;
    if (bVar2) {
      param_1 = (int)local_res10[0];
    }
  }
  fVar1 = __real_3f800000;
  fVar7 = this->TargetBlockRate;
  if (this->TargetBlockRate <= __real_3f800000) {
    fVar7 = __real_3f800000;
  }
  this->SampleRate = param_1;
  uVar5 = ((int)ROUND(((float)param_1 + (float)param_1) / fVar7 + __real_3f000000) >> 1) + 2;
  uVar3 = uVar5 & 0x80000003;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
  }
  iVar6 = uVar5 - uVar3;
  iVar4 = 0x4000;
  if (iVar6 < 0x4000) {
    iVar4 = iVar6;
  }
  iVar6 = 4;
  if (4 < iVar4) {
    iVar6 = iVar4;
  }
  this->NumFramesPerBlock = iVar6;
  this->ActualBlockRate = (float)param_1 / (float)iVar6;
  if (param_2 < fVar1) {
    local_res8 = local_res10;
    local_res10[0] = param_2;
    bVar2 = `Metasound::FOperatorSettings::SetTargetBlockRate'::__l3::<lambda_1>::operator()
                      (&local_res8);
    param_2 = local_res10[0];
    if (!bVar2) {
      this->TargetBlockRate = 1.0;
      param_2 = fVar1;
      goto LAB_14ad3bc79;
    }
  }
  this->TargetBlockRate = param_2;
LAB_14ad3bc79:
  if (param_2 <= fVar1) {
    param_2 = fVar1;
  }
  fVar7 = (float)this->SampleRate;
  uVar5 = ((int)ROUND((fVar7 + fVar7) / param_2 + __real_3f000000) >> 1) + 2;
  uVar3 = uVar5 & 0x80000003;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
  }
  iVar6 = uVar5 - uVar3;
  iVar4 = 0x4000;
  if (iVar6 < 0x4000) {
    iVar4 = iVar6;
  }
  iVar6 = 4;
  if (4 < iVar4) {
    iVar6 = iVar4;
  }
  this->NumFramesPerBlock = iVar6;
  this->ActualBlockRate = fVar7 / (float)iVar6;
  return this;
}

// GetActualBlockRate @ 14ad54ec0

float __thiscall Metasound::FOperatorSettings::GetActualBlockRate(FOperatorSettings *this)

{
  return this->ActualBlockRate;
}

// GetTargetBlockRate @ 14ad568c0

float __thiscall Metasound::FOperatorSettings::GetTargetBlockRate(FOperatorSettings *this)

{
  return this->TargetBlockRate;
}

// RoundToAligned @ 14ad62c60

int __thiscall
Metasound::FOperatorSettings::RoundToAligned(FOperatorSettings *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Alignment > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundOperatorSettings.cpp"
                       ,0x61,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = param_1 / 2 + param_2;
  return iVar3 - iVar3 % param_1;
}

// SetSampleRate @ 14ad64410

void __thiscall Metasound::FOperatorSettings::SetSampleRate(FOperatorSettings *this,int param_1)

{
  float fVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *local_res8;
  int local_res10 [6];
  
  if (param_1 < 1) {
    local_res8 = local_res10;
    local_res10[0] = param_1;
    bVar2 = `Metasound::FOperatorSettings::SetSampleRate'::__l3::<lambda_1>::operator()(&local_res8)
    ;
    param_1 = 48000;
    if (bVar2) {
      param_1 = local_res10[0];
    }
  }
  fVar1 = this->TargetBlockRate;
  if (this->TargetBlockRate <= __real_3f800000) {
    fVar1 = __real_3f800000;
  }
  this->SampleRate = param_1;
  uVar5 = ((int)ROUND(((float)param_1 + (float)param_1) / fVar1 + __real_3f000000) >> 1) + 2;
  uVar3 = uVar5 & 0x80000003;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
  }
  iVar6 = uVar5 - uVar3;
  iVar4 = 0x4000;
  if (iVar6 < 0x4000) {
    iVar4 = iVar6;
  }
  iVar6 = 4;
  if (4 < iVar4) {
    iVar6 = iVar4;
  }
  this->NumFramesPerBlock = iVar6;
  this->ActualBlockRate = (float)param_1 / (float)iVar6;
  return;
}

// SetTargetBlockRate @ 14ad644c0

void __thiscall
Metasound::FOperatorSettings::SetTargetBlockRate(FOperatorSettings *this,float param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  float *local_res8;
  float local_res10 [6];
  
  if (param_1 < __real_3f800000) {
    local_res8 = local_res10;
    local_res10[0] = param_1;
    bVar1 = `Metasound::FOperatorSettings::SetTargetBlockRate'::__l3::<lambda_1>::operator()
                      (&local_res8);
    fVar6 = __real_3f800000;
    param_1 = local_res10[0];
    if (!bVar1) {
      this->TargetBlockRate = 1.0;
      param_1 = fVar6;
      goto LAB_14ad6450e;
    }
  }
  this->TargetBlockRate = param_1;
LAB_14ad6450e:
  if (param_1 <= __real_3f800000) {
    param_1 = __real_3f800000;
  }
  fVar6 = (float)this->SampleRate;
  uVar4 = ((int)ROUND((fVar6 + fVar6) / param_1 + __real_3f000000) >> 1) + 2;
  uVar2 = uVar4 & 0x80000003;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
  }
  iVar5 = uVar4 - uVar2;
  iVar3 = 0x4000;
  if (iVar5 < 0x4000) {
    iVar3 = iVar5;
  }
  iVar5 = 4;
  if (4 < iVar3) {
    iVar5 = iVar3;
  }
  this->NumFramesPerBlock = iVar5;
  this->ActualBlockRate = fVar6 / (float)iVar5;
  return;
}

// ToString @ 14ad66640

FString * __thiscall
Metasound::FOperatorSettings::ToString(FOperatorSettings *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"SampleRate:%d BlockSize:%d");
  return __return_storage_ptr__;
}

// Update @ 14ad694f0

void __thiscall Metasound::FOperatorSettings::Update(FOperatorSettings *this)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  
  fVar1 = this->TargetBlockRate;
  if (this->TargetBlockRate <= __real_3f800000) {
    fVar1 = __real_3f800000;
  }
  fVar6 = (float)this->SampleRate;
  uVar4 = ((int)ROUND((fVar6 + fVar6) / fVar1 + __real_3f000000) >> 1) + 2;
  uVar2 = uVar4 & 0x80000003;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
  }
  iVar5 = uVar4 - uVar2;
  iVar3 = 0x4000;
  if (iVar5 < 0x4000) {
    iVar3 = iVar5;
  }
  iVar5 = 4;
  if (4 < iVar3) {
    iVar5 = iVar3;
  }
  this->NumFramesPerBlock = iVar5;
  this->ActualBlockRate = fVar6 / (float)iVar5;
  return;
}

// operator() @ 15055bb00

bool __thiscall
`Metasound::FOperatorSettings::SetSampleRate'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6683262239798984671>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6683262239798984671>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15055bb60

bool __thiscall
`Metasound::FOperatorSettings::SetTargetBlockRate'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6683262239798984654>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6683262239798984654>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

