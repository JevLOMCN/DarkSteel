// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ~FReSTIRTemporalResamplingState @ 145405bf0

void __thiscall
FReSTIRTemporalResamplingState::~FReSTIRTemporalResamplingState
          (FReSTIRTemporalResamplingState *this)

{
  IPooledRenderTarget *pIVar1;
  
  pIVar1 = (this->DownsampledNormalHistoryRT).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->DownsampledDepthHistoryRT).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->TemporalReservoirWeightsRT).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->TemporalReservoirTraceHitNormalRT).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->TemporalReservoirTraceHitDistanceRT).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->TemporalReservoirTraceRadianceRT).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->TemporalReservoirRayDirectionRT).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145405c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pIVar1->_padding_ + 0x38))();
    return;
  }
  return;
}

