// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// ~FLandscapeRayTracingState @ 145f7d800

void __thiscall
FLandscapeRayTracingState::~FLandscapeRayTracingState(FLandscapeRayTracingState *this)

{
  int iVar1;
  FRHIResource *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Sections).ArrayNum;
  pFVar3 = (this->Sections).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x138;
  while( true ) {
    if ((this->Sections).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FLandscapeSectionRayTracingState,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    (**(code **)(*(longlong *)pFVar3 + 0x20))(pFVar3);
    *(undefined4 *)(pFVar3 + 0x118) = 0;
    pFVar2 = *(FRHIResource **)(pFVar3 + 0x100);
    if (pFVar2 != (FRHIResource *)0x0) {
      *(longlong *)(pFVar3 + 0x100) = 0;
      FRHIResource::Release(pFVar2);
    }
    pFVar2 = *(FRHIResource **)(pFVar3 + 0x108);
    if (pFVar2 != (FRHIResource *)0x0) {
      *(longlong *)(pFVar3 + 0x108) = 0;
      FRHIResource::Release(pFVar2);
    }
    pFVar2 = *(FRHIResource **)(pFVar3 + 0x110);
    if (pFVar2 != (FRHIResource *)0x0) {
      *(longlong *)(pFVar3 + 0x110) = 0;
      FRHIResource::Release(pFVar2);
    }
    pFVar3 = pFVar3 + 0x138;
  }
  DestructItems<FLandscapeSectionRayTracingState,int>
            ((FLandscapeSectionRayTracingState *)(this->Sections).AllocatorInstance.Data,
             (this->Sections).ArrayNum);
  pFVar3 = (this->Sections).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

