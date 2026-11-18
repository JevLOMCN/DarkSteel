// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ~FPathTracingState @ 1450b12c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FPathTracingState::~FPathTracingState(FPathTracingState *this)

{
  undefined1 *puVar1;
  longlong *plVar2;
  int iVar3;
  IHistory *pIVar4;
  FRDGPooledBuffer *pFVar5;
  IPooledRenderTarget *pIVar6;
  longlong lVar7;
  
  pIVar4 = (this->SpatialTemporalDenoiserHistory).Reference;
  if (pIVar4 != (IHistory *)0x0) {
    puVar1 = &pIVar4->field_0x8;
    LOCK();
    iVar3 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (puVar1 != (undefined1 *)0x0)) {
      (*(code *)**(undefined8 **)pIVar4)(pIVar4,1);
    }
  }
  pFVar5 = (this->StartingMediumData).Reference;
  if (pFVar5 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar5->_padding_;
    LOCK();
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  pIVar6 = (this->AtmosphereOpticalDepthLUT).Reference;
  if (pIVar6 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar6->_padding_ + 0x38))();
  }
  FAdaptiveFrustumGridParameterCache::~FAdaptiveFrustumGridParameterCache
            (&this->AdaptiveFrustumGridParameterCache);
  FAdaptiveOrthoGridParameterCache::~FAdaptiveOrthoGridParameterCache
            (&this->AdaptiveOrthoGridParameterCache);
  pFVar5 = (this->LastVarianceBuffer).Reference;
  if (pFVar5 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar5->_padding_;
    LOCK();
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  pIVar6 = (this->LastDepthRT).Reference;
  if (pIVar6 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar6->_padding_ + 0x38))();
  }
  pIVar6 = (this->LastNormalRT).Reference;
  if (pIVar6 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar6->_padding_ + 0x38))();
  }
  pIVar6 = (this->LastAlbedoRT).Reference;
  if (pIVar6 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar6->_padding_ + 0x38))();
  }
  pIVar6 = (this->LastRadianceRT).Reference;
  if (pIVar6 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar6->_padding_ + 0x38))();
  }
  pIVar6 = (this->LastDenoisedRadianceRT).Reference;
  if (pIVar6 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar6->_padding_ + 0x38))();
  }
  pFVar5 = (this->MarkovChainStateGrid).Reference;
  if (pFVar5 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar5->_padding_;
    LOCK();
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  pIVar6 = (this->CloudAccelerationMap).Reference;
  if (pIVar6 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar6->_padding_ + 0x38))();
  }
  pFVar5 = (this->VarianceBuffer).Reference;
  if (pFVar5 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar5->_padding_;
    LOCK();
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  pIVar6 = (this->DepthRT).Reference;
  if (pIVar6 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar6->_padding_ + 0x38))();
  }
  pIVar6 = (this->NormalRT).Reference;
  if (pIVar6 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar6->_padding_ + 0x38))();
  }
  pIVar6 = (this->AlbedoRT).Reference;
  if (pIVar6 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar6->_padding_ + 0x38))();
  }
  pIVar6 = (this->VarianceRT).Reference;
  if (pIVar6 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar6->_padding_ + 0x38))();
  }
  pIVar6 = (this->RadianceRT).Reference;
  if (pIVar6 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar6->_padding_ + 0x38))();
  }
  return;
}

