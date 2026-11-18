// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSS
// Functions: 7

// FDLSSUpscalerHistory @ 14de219d0

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

FDLSSUpscalerHistory * __thiscall
FDLSSUpscalerHistory::FDLSSUpscalerHistory
          (FDLSSUpscalerHistory *this,TSharedPtr<FDLSSState,1> *param_1,ENGXDLSSDenoiserMode param_2
          )

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UE__Renderer__Private__ITemporalUpscaler__IHistory__;
  this->_padding_ = (longlong)&_vftable__for__FRefCountBase__;
  (this->DLSSState).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->DLSSState).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->DenoiserMode = param_2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FDLSSUpscalerHistory @ 14de21f60

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

void __thiscall FDLSSUpscalerHistory::~FDLSSUpscalerHistory(FDLSSUpscalerHistory *this)

{
  this->_padding_ = (longlong)&_vftable__for__UE__Renderer__Private__ITemporalUpscaler__IHistory__;
  this->_padding_ = (longlong)&_vftable__for__FRefCountBase__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DLSSState).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IRefCountedObject__6B_;
  return;
}

// AddRef @ 14de249f0

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

FReturnedRefCountValue __thiscall FDLSSUpscalerHistory::AddRef(FDLSSUpscalerHistory *this)

{
  longlong *plVar1;
  longlong lVar2;
  int *in_RDX;
  
  LOCK();
  plVar1 = &this->_padding_;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + 1;
  UNLOCK();
  *in_RDX = (int)lVar2 + 1;
  return (FReturnedRefCountValue)(uint)in_RDX;
}

// GetDebugName @ 14de26c70

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

wchar_t * __thiscall FDLSSUpscalerHistory::GetDebugName(FDLSSUpscalerHistory *this)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"FDLSSSceneViewFamilyUpscaler";
  if (this->DenoiserMode == DLSSRR) {
    pwVar1 = L"FDLSSSceneViewFamilyUpscaler(DLSS-RR)";
  }
  return pwVar1;
}

// GetGPUSizeBytes @ 14de26d20

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

ulong64 __thiscall FDLSSUpscalerHistory::GetGPUSizeBytes(FDLSSUpscalerHistory *this)

{
  return 0;
}

// GetRefCount @ 14de27870

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

uint __thiscall FDLSSUpscalerHistory::GetRefCount(FDLSSUpscalerHistory *this)

{
  return (uint)this->_padding_;
}

// Release @ 14de29050

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

uint __thiscall FDLSSUpscalerHistory::Release(FDLSSUpscalerHistory *this)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar1 = &this->_padding_;
  LOCK();
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    plVar3 = &this->_padding_;
    if (plVar1 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)*plVar3)(plVar3,1);
    }
  }
  return (int)lVar2 - 1;
}

