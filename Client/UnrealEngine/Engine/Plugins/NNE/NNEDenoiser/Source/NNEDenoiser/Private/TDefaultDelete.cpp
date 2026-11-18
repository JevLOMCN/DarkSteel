// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 1

// operator() @ 14eaeab50

void __thiscall
TDefaultDelete<UE::NNEDenoiser::Private::FPathTracingSpatialTemporalDenoiser>::operator()
          (TDefaultDelete<UE::NNEDenoiser::Private::FPathTracingSpatialTemporalDenoiser> *this,
          FPathTracingSpatialTemporalDenoiser *param_1)

{
  FGenericDenoiser *pFVar1;
  FScriptContainerElement *pFVar2;
  IAutoExposure *pIVar3;
  IOutputProcess *pIVar4;
  IInputProcess *pIVar5;
  IModelInstance *pIVar6;
  
  if (param_1 != (FPathTracingSpatialTemporalDenoiser *)0x0) {
    pFVar1 = (param_1->Denoiser).Ptr;
    if (pFVar1 != (FGenericDenoiser *)0x0) {
      pFVar2 = (pFVar1->Tiling).Tiles.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar1->TransferFunction).SharedReferenceCount.ReferenceController);
      pIVar3 = (pFVar1->AutoExposure).Ptr;
      if (pIVar3 != (IAutoExposure *)0x0) {
        (**(code **)*pIVar3)(pIVar3,1);
      }
      pIVar4 = (pFVar1->OutputProcess).Ptr;
      if (pIVar4 != (IOutputProcess *)0x0) {
        (**(code **)*pIVar4)(pIVar4,1);
      }
      pIVar5 = (pFVar1->InputProcess).Ptr;
      if (pIVar5 != (IInputProcess *)0x0) {
        (**(code **)*pIVar5)(pIVar5,1);
      }
      pIVar6 = (pFVar1->ModelInstance).Ptr;
      if (pIVar6 != (IModelInstance *)0x0) {
        (**(code **)*pIVar6)(pIVar6,1);
      }
      ::operator_delete(pFVar1,0x68);
    }
    param_1->_padding_ = (longlong)&___7IPathTracingSpatialTemporalDenoiser_Private_Renderer_UE__6B_
    ;
    ::operator_delete(param_1,0x10);
  }
  return;
}

