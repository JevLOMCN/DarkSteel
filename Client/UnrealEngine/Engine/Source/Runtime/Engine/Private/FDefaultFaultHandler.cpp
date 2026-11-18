// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// HandleNetResult @ 14803c160

EHandleNetResult __thiscall
UE::Net::FDefaultFaultHandler::HandleNetResult(FDefaultFaultHandler *this,FNetResult *param_1)

{
  UEnum *pUVar1;
  EHandleNetResult EVar2;
  UEnum *pUVar3;
  FEscalationCounter *pFVar4;
  
  if ((param_1 != (FNetResult *)0x0) &&
     (pUVar1 = param_1->RawResultEnumObj, pUVar3 = StaticEnum<enum_ENetCloseResult>(),
     pUVar1 == pUVar3)) {
    switch((int)param_1->Result) {
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x22:
    case 0x24:
    case 0x25:
      pFVar4 = FNetConnectionFaultRecoveryBase::GetFrameCounter(this->FaultRecovery,1);
      pFVar4->Counter = pFVar4->Counter + 1;
      EVar2 = FNetConnectionFaultRecoveryBase::NotifyHandledFault(this->FaultRecovery,param_1);
      return EVar2;
    }
  }
  return NotHandled;
}

// InitFaultRecovery @ 14803eb30

void __thiscall
UE::Net::FDefaultFaultHandler::InitFaultRecovery
          (FDefaultFaultHandler *this,FNetConnectionFaultRecoveryBase *param_1)

{
  if ((this->FaultRecovery == (FNetConnectionFaultRecoveryBase *)0x0) &&
     (this->FaultRecovery = param_1, param_1 != (FNetConnectionFaultRecoveryBase *)0x0)) {
    FNetResultManager::AddResultHandlerPtr(&param_1->FaultManager,(FNetResultHandler *)this,Last);
    FNetConnectionFaultRecoveryBase::RegisterCounterCategory
              (this->FaultRecovery,NetworkCorruption,1);
    return;
  }
  return;
}

