// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OodleNetworkPlugin
// Functions: 2

// HandleNetResult @ 14e2964b0

EHandleNetResult __thiscall
FOodleNetworkFaultHandler::HandleNetResult(FOodleNetworkFaultHandler *this,FNetResult *param_1)

{
  char cVar1;
  EHandleNetResult EVar2;
  UPackage *pUVar3;
  FEscalationCounter *pFVar4;
  
  if (param_1 != (FNetResult *)0x0) {
    if (Z_Registration_Info_UEnum_EOodleNetResult.OuterSingleton == (UEnum *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_OodleNetworkHandlerComponent();
      Z_Registration_Info_UEnum_EOodleNetResult.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetResult,
                         (UObject *)pUVar3,L"EOodleNetResult");
    }
    if (param_1->RawResultEnumObj == Z_Registration_Info_UEnum_EOodleNetResult.OuterSingleton) {
      cVar1 = (char)param_1->Result;
      goto LAB_14e296500;
    }
  }
  cVar1 = '\0';
LAB_14e296500:
  if (((cVar1 != '\x02') && (cVar1 != '\x03')) && (cVar1 != '\x04')) {
    return NotHandled;
  }
  if (this->CounterIndex != -1) {
    pFVar4 = UE::Net::FNetConnectionFaultRecoveryBase::GetFrameCounter
                       (this->FaultRecovery,this->CounterIndex);
    pFVar4->Counter = pFVar4->Counter + 1;
    EVar2 = UE::Net::FNetConnectionFaultRecoveryBase::NotifyHandledFault
                      (this->FaultRecovery,param_1);
    return EVar2;
  }
  return Handled;
}

// InitFaultRecovery @ 14e297120

void __thiscall
FOodleNetworkFaultHandler::InitFaultRecovery
          (FOodleNetworkFaultHandler *this,FNetConnectionFaultRecoveryBase *param_1)

{
  int iVar1;
  
  if (((this->FaultRecovery == (FNetConnectionFaultRecoveryBase *)0x0) &&
      (this->FaultRecovery = param_1, param_1 != (FNetConnectionFaultRecoveryBase *)0x0)) &&
     (this->CounterIndex == -1)) {
    UE::Net::FNetResultManager::AddResultHandlerPtr
              (&param_1->FaultManager,(FNetResultHandler *)this,Last);
    iVar1 = UE::Net::FNetConnectionFaultRecoveryBase::AddNewCounter(this->FaultRecovery,1);
    this->CounterIndex = iVar1;
    UE::Net::FNetConnectionFaultRecoveryBase::RegisterCounterCategory
              (this->FaultRecovery,NetworkCorruption,iVar1);
    return;
  }
  return;
}

