// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// FRDGViewableResource @ 145d8de80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRDGViewableResource * __thiscall
FRDGViewableResource::FRDGViewableResource
          (FRDGViewableResource *this,wchar_t *param_1,ERDGViewableResourceType param_2,bool param_3
          ,bool param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  FRDGViewableResource *pFVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)param_1;
  (this->AccessModeState).Pipelines = None;
  (this->AccessModeState).bQueued = '\0';
  (this->AccessModeState).bLocked = '\0';
  (this->AccessModeState).Mode = Internal;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&___7FRDGViewableResource__6B_;
  (this->AccessModeState).Access = None;
  (this->AccessModeState).ActiveMode = Internal;
  this->AcquirePass = 0xffffffff;
  this->DiscardPass = 0xffffffff;
  *(undefined8 *)&this->FirstPass = 0xffffffffffffffff;
  this->field_0x21 = param_4 << 6;
  this->_padding_ = 0;
  this->Type = param_2;
  puVar2 = &this->field_0x22;
  this->bCollectForAllocate = '\x01';
  this->bClobbered = '\0';
  this->bHeapAllocatedDebugName = '\0';
  this->TransientExtractionHint = None;
  *(undefined4 *)&(this->LastPasses).field_0x4 = 0xffffffff;
  bVar5 = GRDGImmediateMode != 0;
  (this->AliasingOverlaps).DataPtr = (FRHITransientAliasingOverlap *)0x0;
  (this->AliasingOverlaps).ArrayNum = 0;
  this->EpilogueAccess = SRVMask;
  (this->OwnerName).ComparisonIndex = 0;
  this->ReferenceCount = (uint)bVar5;
  this->PassStateIndex = 0;
  (this->OwnerName).Number = 0;
  (this->TracePasses).AllocatorInstance.Data = (TRDGHandle<FRDGPass,unsigned_int> *)0x0;
  (this->TracePasses).ArrayNum = 0;
  (this->TracePasses).ArrayMax = 0;
  this->TraceOrder = 0;
  if (param_3) {
    if ((this->AccessModeState).bLocked != '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AccessModeState.bLocked",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                         ,0x1d1,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar4 = (FRDGViewableResource *)(*pcVar3)();
        return pFVar4;
      }
    }
    (this->AccessModeState).Pipelines = All;
    (this->AccessModeState).bLocked = '\x01';
    (this->AccessModeState).Mode = External;
    (this->AccessModeState).Access = Mask;
    this->EpilogueAccess = Mask;
    (this->AccessModeState).ActiveMode = External;
  }
  return this;
}

// SetExternalAccessMode @ 145dcbfc0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRDGViewableResource::SetExternalAccessMode
          (FRDGViewableResource *this,ERHIAccess param_1,ERHIPipeline param_2)

{
  code *pcVar1;
  bool bVar2;
  ERHIPipeline EVar3;
  
  if ((this->AccessModeState).bLocked != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AccessModeState.bLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                       ,0x1d1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EVar3 = (this->AccessModeState).field_0x4 | 4;
  (this->AccessModeState).Access = param_1;
  this->EpilogueAccess = param_1;
  (this->AccessModeState).field_0x4 = (EVar3 ^ param_2) & All ^ EVar3;
  return;
}

