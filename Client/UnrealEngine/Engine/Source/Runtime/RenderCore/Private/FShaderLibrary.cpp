// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// FShaderLibrary @ 145e81650

FShaderLibrary * __thiscall
FRayTracingShaderLibrary::FShaderLibrary::FShaderLibrary
          (FShaderLibrary *this,FShaderLibrary *param_1)

{
  TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FShaderLibrary *pFVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar5 = 0x20;
  lVar7 = (longlong)param_1 - (longlong)this;
  lVar6 = 0x20;
  pFVar4 = this;
  do {
    pFVar4->UnusedIndicies[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar4->UnusedIndicies[0].AllocatorInstance.Data =
         *(FScriptContainerElement **)(lVar7 + (longlong)pFVar4);
    *(undefined8 *)(lVar7 + (longlong)pFVar4) = 0;
    pFVar4->UnusedIndicies[0].ArrayNum = *(int *)(lVar7 + 8 + (longlong)pFVar4);
    pFVar4->UnusedIndicies[0].ArrayMax = *(int *)(lVar7 + 0xc + (longlong)pFVar4);
    *(undefined8 *)(lVar7 + 8 + (longlong)pFVar4) = 0;
    pFVar4 = (FShaderLibrary *)(pFVar4->UnusedIndicies + 1);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  pTVar2 = this->Shaders;
  pTVar3 = param_1->Shaders;
  do {
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar1 = pTVar2 + 1;
    (pTVar2->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar2->ArrayNum = *(int *)(lVar7 + -8 + (longlong)pTVar1);
    pTVar2->ArrayMax = *(int *)(lVar7 + -4 + (longlong)pTVar1);
    *(undefined8 *)(lVar7 + -8 + (longlong)pTVar1) = 0;
    lVar5 = lVar5 + -1;
    pTVar2 = pTVar1;
    pTVar3 = pTVar3 + 1;
  } while (lVar5 != 0);
  return this;
}

// ~FShaderLibrary @ 145e84930

void __thiscall FRayTracingShaderLibrary::FShaderLibrary::~FShaderLibrary(FShaderLibrary *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FShaderLibrary *pFVar3;
  longlong lVar4;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar5;
  
  lVar2 = 0x20;
  pFVar3 = this + 1;
  lVar4 = 0x20;
  do {
    pFVar1 = pFVar3[-1].Shaders[0x1f].AllocatorInstance.Data;
    pFVar3 = (FShaderLibrary *)(pFVar3[-1].Shaders + 0x1f);
    lVar4 = lVar4 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar4 != 0);
  pTVar5 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)this->Shaders;
  do {
    pFVar1 = pTVar5[-1].AllocatorInstance.Data;
    pTVar5 = pTVar5 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

