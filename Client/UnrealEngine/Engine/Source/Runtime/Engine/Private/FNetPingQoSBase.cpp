// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FNetPingQoSBase @ 148089310

/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNetPingQoSBase * __thiscall
UE::Net::Private::FNetPingQoSBase::FNetPingQoSBase
          (FNetPingQoSBase *this,EPingType param_1,FNetPing *param_2)

{
  this->PingType = param_1;
  this->Owner = param_2;
  this->bDiscardNextPing = false;
  this->bPingInProgress = false;
  this->PingTimestamp = 0.0;
  return this;
}

// PingResult @ 1480bc2c0

/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Net::Private::FNetPingQoSBase::PingResult(FNetPingQoSBase *this,FIcmpEchoResult *param_1)

{
  FNetPing *this_00;
  FScriptContainerElement *pFVar1;
  
  this->bPingInProgress = false;
  if ((this->bDiscardNextPing == false) && (this_00 = this->Owner, this_00 != (FNetPing *)0x0)) {
    if (param_1->Status == Success) {
      FNetPing::UpdatePing
                (this_00,this->PingType,(double)param_1->Time + this->PingTimestamp,
                 (double)param_1->Time);
    }
    else {
      FNetPing::UpdatePingTimeout(this_00,this->PingType);
    }
  }
  this->bDiscardNextPing = false;
  pFVar1 = (param_1->ReplyFrom).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->ResolvedAddress).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// Release @ 1480c8da0

/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UE::Net::Private::FNetPingQoSBase::Release(FNetPingQoSBase *this)

{
  this->Owner = (FNetPing *)0x0;
  return;
}

// Reset @ 1480cc020

/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UE::Net::Private::FNetPingQoSBase::Reset(FNetPingQoSBase *this)

{
  this->PingTimestamp = 0.0;
  if (this->bPingInProgress != false) {
    this->bDiscardNextPing = true;
  }
  return;
}

