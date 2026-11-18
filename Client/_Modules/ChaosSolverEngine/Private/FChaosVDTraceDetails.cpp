// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 3

// FChaosVDTraceDetails @ 1463096b0

FChaosVDTraceDetails * __thiscall
FChaosVDTraceDetails::FChaosVDTraceDetails(FChaosVDTraceDetails *this,FChaosVDTraceDetails *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (param_1->TraceGuid).B;
  uVar5 = (param_1->TraceGuid).C;
  uVar6 = (param_1->TraceGuid).D;
  (this->TraceGuid).A = (param_1->TraceGuid).A;
  (this->TraceGuid).B = uVar4;
  (this->TraceGuid).C = uVar5;
  (this->TraceGuid).D = uVar6;
  uVar4 = (param_1->SessionGuid).B;
  uVar5 = (param_1->SessionGuid).C;
  uVar6 = (param_1->SessionGuid).D;
  (this->SessionGuid).A = (param_1->SessionGuid).A;
  (this->SessionGuid).B = uVar4;
  (this->SessionGuid).C = uVar5;
  (this->SessionGuid).D = uVar6;
  ::FString::FString(&this->TraceTarget,&param_1->TraceTarget);
  pTVar1 = &this->CertAuth;
  this->Port = param_1->Port;
  this->bIsConnected = param_1->bIsConnected;
  this->Mode = param_1->Mode;
  this->TransportMode = param_1->TransportMode;
  piVar2 = &(this->CertAuth).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->CertAuth).ArrayNum;
  _Src = (param_1->CertAuth).AllocatorInstance.Data;
  (this->CertAuth).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3);
  }
  this->bIsValid = param_1->bIsValid;
  return this;
}

// operator= @ 14630b7b0

FChaosVDTraceDetails * __thiscall
FChaosVDTraceDetails::operator=(FChaosVDTraceDetails *this,FChaosVDTraceDetails *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = (param_1->TraceGuid).B;
  uVar7 = (param_1->TraceGuid).C;
  uVar8 = (param_1->TraceGuid).D;
  pFVar1 = &param_1->TraceTarget;
  pFVar2 = &this->TraceTarget;
  (this->TraceGuid).A = (param_1->TraceGuid).A;
  (this->TraceGuid).B = uVar6;
  (this->TraceGuid).C = uVar7;
  (this->TraceGuid).D = uVar8;
  uVar6 = (param_1->SessionGuid).B;
  uVar7 = (param_1->SessionGuid).C;
  uVar8 = (param_1->SessionGuid).D;
  (this->SessionGuid).A = (param_1->SessionGuid).A;
  (this->SessionGuid).B = uVar6;
  (this->SessionGuid).C = uVar7;
  (this->SessionGuid).D = uVar8;
  if (pFVar2 != pFVar1) {
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TraceTarget).Data.ArrayNum = (param_1->TraceTarget).Data.ArrayNum;
    (this->TraceTarget).Data.ArrayMax = (param_1->TraceTarget).Data.ArrayMax;
    (param_1->TraceTarget).Data.ArrayNum = 0;
    (param_1->TraceTarget).Data.ArrayMax = 0;
  }
  pTVar3 = &param_1->CertAuth;
  this->Port = param_1->Port;
  pTVar4 = &this->CertAuth;
  this->bIsConnected = param_1->bIsConnected;
  this->Mode = param_1->Mode;
  this->TransportMode = param_1->TransportMode;
  if (pTVar4 != pTVar3) {
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CertAuth).ArrayNum = (param_1->CertAuth).ArrayNum;
    (this->CertAuth).ArrayMax = (param_1->CertAuth).ArrayMax;
    (param_1->CertAuth).ArrayNum = 0;
    (param_1->CertAuth).ArrayMax = 0;
  }
  this->bIsValid = param_1->bIsValid;
  return this;
}

// operator= @ 14630b8a0

FChaosVDTraceDetails * __thiscall
FChaosVDTraceDetails::operator=(FChaosVDTraceDetails *this,FChaosVDTraceDetails *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (param_1->TraceGuid).B;
  uVar2 = (param_1->TraceGuid).C;
  uVar3 = (param_1->TraceGuid).D;
  (this->TraceGuid).A = (param_1->TraceGuid).A;
  (this->TraceGuid).B = uVar1;
  (this->TraceGuid).C = uVar2;
  (this->TraceGuid).D = uVar3;
  uVar1 = (param_1->SessionGuid).B;
  uVar2 = (param_1->SessionGuid).C;
  uVar3 = (param_1->SessionGuid).D;
  (this->SessionGuid).A = (param_1->SessionGuid).A;
  (this->SessionGuid).B = uVar1;
  (this->SessionGuid).C = uVar2;
  (this->SessionGuid).D = uVar3;
  ::FString::operator=(&this->TraceTarget,&param_1->TraceTarget);
  this->Port = param_1->Port;
  this->bIsConnected = param_1->bIsConnected;
  this->Mode = param_1->Mode;
  this->TransportMode = param_1->TransportMode;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=(&this->CertAuth,&param_1->CertAuth);
  this->bIsValid = param_1->bIsValid;
  return this;
}

