// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// SafeRelease @ 144b45dc0

void __thiscall FReSTIRGatherTemporalState::SafeRelease(FReSTIRGatherTemporalState *this)

{
  IPooledRenderTarget *pIVar1;
  
  pIVar1 = (this->TemporalResamplingState).TemporalReservoirRayDirectionRT.Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->TemporalResamplingState).TemporalReservoirRayDirectionRT.Reference =
         (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->TemporalResamplingState).TemporalReservoirTraceRadianceRT.Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->TemporalResamplingState).TemporalReservoirTraceRadianceRT.Reference =
         (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->TemporalResamplingState).TemporalReservoirTraceHitDistanceRT.Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->TemporalResamplingState).TemporalReservoirTraceHitDistanceRT.Reference =
         (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->TemporalResamplingState).TemporalReservoirTraceHitNormalRT.Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->TemporalResamplingState).TemporalReservoirTraceHitNormalRT.Reference =
         (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->TemporalResamplingState).TemporalReservoirWeightsRT.Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->TemporalResamplingState).TemporalReservoirWeightsRT.Reference =
         (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->TemporalResamplingState).DownsampledDepthHistoryRT.Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->TemporalResamplingState).DownsampledDepthHistoryRT.Reference = (IPooledRenderTarget *)0x0
    ;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->TemporalResamplingState).DownsampledNormalHistoryRT.Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->TemporalResamplingState).DownsampledNormalHistoryRT.Reference =
         (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->TemporalAccumulationState).DiffuseIndirectHistoryRT.Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->TemporalAccumulationState).DiffuseIndirectHistoryRT.Reference =
         (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->TemporalAccumulationState).RoughSpecularIndirectHistoryRT.Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->TemporalAccumulationState).RoughSpecularIndirectHistoryRT.Reference =
         (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->TemporalAccumulationState).ResolveVarianceHistoryRT.Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->TemporalAccumulationState).ResolveVarianceHistoryRT.Reference =
         (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->TemporalAccumulationState).NumFramesAccumulatedRT.Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->TemporalAccumulationState).NumFramesAccumulatedRT.Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  return;
}

