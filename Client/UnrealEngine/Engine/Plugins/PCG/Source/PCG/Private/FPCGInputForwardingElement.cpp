// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// IsCacheable @ 149c2d420

bool __thiscall
FPCGInputForwardingElement::IsCacheable(FPCGInputForwardingElement *this,UPCGSettings *param_1)

{
  return false;
}

// IsPassthrough @ 149c2d4e0

bool __thiscall
FPCGInputForwardingElement::IsPassthrough(FPCGInputForwardingElement *this,UPCGSettings *param_1)

{
  return true;
}

// ShouldVerifyIfOutputsAreUsedMultipleTimes @ 149c343d0

bool __thiscall
FPCGInputForwardingElement::ShouldVerifyIfOutputsAreUsedMultipleTimes
          (FPCGInputForwardingElement *this,UPCGSettings *param_1)

{
  return false;
}

// SupportsBasePointDataInputs @ 149c35760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGInputForwardingElement::SupportsBasePointDataInputs
          (FPCGInputForwardingElement *this,FPCGContext *param_1)

{
  return true;
}

// SupportsGPUResidentData @ 149c35960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGInputForwardingElement::SupportsGPUResidentData
          (FPCGInputForwardingElement *this,FPCGContext *param_1)

{
  return true;
}

// FPCGInputForwardingElement @ 149f31160

FPCGInputForwardingElement * __thiscall
FPCGInputForwardingElement::FPCGInputForwardingElement
          (FPCGInputForwardingElement *this,FPCGDataCollection *param_1)

{
  FPCGDataCollection *pFVar1;
  int *piVar2;
  TArray<FPCGCrc,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FPCGTaggedData *pFVar5;
  FScriptContainerElement *_Src;
  
  pFVar1 = &this->Input;
  (pFVar1->TaggedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FPCGInputForwardingElement__6B_;
  iVar4 = (param_1->TaggedData).ArrayNum;
  piVar2 = &(this->Input).TaggedData.ArrayMax;
  pFVar5 = (FPCGTaggedData *)(param_1->TaggedData).AllocatorInstance.Data;
  (this->Input).TaggedData.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,iVar4,0,(ForAnyElementType *)pFVar1,iVar4,piVar2);
    ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
              ((pFVar1->TaggedData).AllocatorInstance.Data,pFVar5,iVar4);
  }
  pTVar3 = &(this->Input).DataCrcs;
  (this->Input).bCancelExecutionOnEmpty = param_1->bCancelExecutionOnEmpty;
  (this->Input).bCancelExecution = param_1->bCancelExecution;
  piVar2 = &(this->Input).DataCrcs.ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->DataCrcs).ArrayNum;
  _Src = (param_1->DataCrcs).AllocatorInstance.Data;
  (this->Input).DataCrcs.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar4 << 3);
  }
  (this->Input).InactiveOutputPinBitmask = param_1->InactiveOutputPinBitmask;
  return this;
}

// ExecuteInternal @ 149f42860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGInputForwardingElement::ExecuteInternal(FPCGInputForwardingElement *this,FPCGContext *param_1)

{
  FPCGDataCollection::operator=(&param_1->OutputData,&this->Input);
  return true;
}

