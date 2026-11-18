// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// ~FRPCDoSState @ 147fa9270

void __thiscall FRPCDoSState::~FRPCDoSState(FRPCDoSState *this)

{
  this->_padding_ = (longlong)&___7FRPCDoSState__6B_;
  return;
}

// StaticStruct @ 148076dc0

UScriptStruct * __cdecl FRPCDoSState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRPCDoSState.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRPCDoSState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRPCDoSState,(UObject *)pUVar1,L"RPCDoSState");
  }
  return Z_Registration_Info_UScriptStruct_FRPCDoSState.OuterSingleton;
}

// ApplyImpliedValues @ 148095cc0

void __thiscall FRPCDoSState::ApplyImpliedValues(FRPCDoSState *this)

{
  double dVar1;
  schar sVar2;
  bool bVar3;
  char cVar4;
  double dVar5;
  double dVar6;
  
  if ((this->EscalateQuotaRPCsPerPeriod != -1) ||
     (sVar2 = -1, this->EscalateTimeQuotaMSPerPeriod != -1)) {
    sVar2 = this->EscalateQuotaTimePeriod;
  }
  this->EscalateQuotaTimePeriod = sVar2;
  if ((this->RPCRepeatLimitPerPeriod != -1) || (cVar4 = -1, this->RPCRepeatLimitMSPerPeriod != -1))
  {
    cVar4 = this->RPCRepeatLimitTimePeriod;
  }
  this->RPCRepeatLimitTimePeriod = cVar4;
  dVar1 = __real_3f50624dd2f1a9fc;
  if ((this->bTrackRecentRPCs == false) && ((this->RPCRepeatLimitPerPeriod == -1 || (cVar4 == -1))))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  dVar5 = 0.0;
  this->bTrackRecentRPCs = bVar3;
  if (this->EscalateTimeQuotaMSPerFrame == -1) {
    dVar6 = 0.0;
  }
  else {
    dVar6 = (double)(int)this->EscalateTimeQuotaMSPerFrame * dVar1;
  }
  this->EscalateTimeQuotaSecsPerFrame = dVar6;
  if (this->EscalateTimeQuotaMSPerPeriod == -1) {
    dVar6 = 0.0;
  }
  else {
    dVar6 = (double)(int)this->EscalateTimeQuotaMSPerPeriod * dVar1;
  }
  this->EscalateTimeQuotaSecsPerPeriod = dVar6;
  if (this->RPCRepeatLimitMSPerPeriod == -1) {
    dVar6 = 0.0;
  }
  else {
    dVar6 = (double)(int)this->RPCRepeatLimitMSPerPeriod * dVar1;
  }
  this->RPCRepeatLimitSecsPerPeriod = dVar6;
  if (this->EscalationTimeToleranceMS != -1) {
    dVar5 = (double)(int)this->EscalationTimeToleranceMS * dVar1;
  }
  this->EscalationTimeToleranceSeconds = dVar5;
  return;
}

// HasHitQuota_Count @ 1480ac4d0

bool __thiscall
FRPCDoSState::HasHitQuota_Count
          (FRPCDoSState *this,FRPCDoSCounters (*param_1) [16],FRPCDoSCounters *param_2)

{
  bool bVar1;
  
  if ((this->EscalateQuotaRPCsPerFrame < 1) ||
     (param_2->RPCCounter < (int)this->EscalateQuotaRPCsPerFrame)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((0 < this->EscalateQuotaRPCsPerPeriod) && (bVar1 == false)) {
    bVar1 = (int)this->EscalateQuotaRPCsPerPeriod <=
            param_1[-1][(longlong)this->EscalateQuotaTimePeriod + 0xf].RPCCounter +
            param_2->RPCCounter;
  }
  return bVar1;
}

// HasHitQuota_Time @ 1480ac510

bool __thiscall
FRPCDoSState::HasHitQuota_Time
          (FRPCDoSState *this,FRPCDoSCounters (*param_1) [16],FRPCDoSCounters *param_2)

{
  bool bVar1;
  
  if ((this->EscalateTimeQuotaMSPerFrame < 1) ||
     (param_2->AccumRPCTime <= this->EscalateTimeQuotaSecsPerFrame &&
      this->EscalateTimeQuotaSecsPerFrame != param_2->AccumRPCTime)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((0 < this->EscalateTimeQuotaMSPerPeriod) && (bVar1 == false)) {
    bVar1 = this->EscalateTimeQuotaSecsPerPeriod <=
            param_1[-1][(longlong)this->EscalateQuotaTimePeriod + 0xf].AccumRPCTime +
            param_2->AccumRPCTime;
  }
  return bVar1;
}

