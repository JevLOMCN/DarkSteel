// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 3

// FCaptureFrameArgs @ 14d7899f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FCaptureFrameArgs * __thiscall
UE::MediaCaptureData::FCaptureFrameArgs::FCaptureFrameArgs
          (FCaptureFrameArgs *this,FCaptureFrameArgs *param_1)

{
  UMediaCapture *pUVar1;
  FRHITexture *this_00;
  
  this->GraphBuilder = param_1->GraphBuilder;
  pUVar1 = (param_1->MediaCapture).field0_0x0.DebugPtr;
  (this->MediaCapture).field0_0x0.DebugPtr = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UMediaCapture *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->ResourceToCapture).Reference = (FRHITexture *)0x0;
  this_00 = (param_1->ResourceToCapture).Reference;
  (this->ResourceToCapture).Reference = this_00;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->RDGResourceToCapture = param_1->RDGResourceToCapture;
  (this->DesiredSize).field0_0x0 = (param_1->DesiredSize).field0_0x0;
  (this->SourceViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->SourceViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->SourceViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->SourceViewRect).field0_0x0._s_0.Max.field0_0x0;
  return this;
}

// GetSizeX @ 14d7adc80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

int __thiscall UE::MediaCaptureData::FCaptureFrameArgs::GetSizeX(FCaptureFrameArgs *this)

{
  FRHITexture *pFVar1;
  longlong lVar2;
  
  if (this->RDGResourceToCapture != (FRDGTexture *)0x0) {
    return *(int *)&(this->RDGResourceToCapture->Desc).field_0x24;
  }
  pFVar1 = (this->ResourceToCapture).Reference;
  (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1);
  lVar2 = (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1);
  return *(int *)(lVar2 + 0x24);
}

// GetSizeY @ 14d7adcd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

int __thiscall UE::MediaCaptureData::FCaptureFrameArgs::GetSizeY(FCaptureFrameArgs *this)

{
  int iVar1;
  FRHITexture *pFVar2;
  longlong lVar3;
  
  if (this->RDGResourceToCapture != (FRDGTexture *)0x0) {
    return *(int *)&(this->RDGResourceToCapture->Desc).field_0x28;
  }
  pFVar2 = (this->ResourceToCapture).Reference;
  lVar3 = (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2);
  iVar1 = *(int *)(lVar3 + 0x28);
  (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2);
  return iVar1;
}

