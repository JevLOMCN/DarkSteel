// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FShaderBindingLayout @ 1452fed10

/* WARNING: Type propagation algorithm not settling */

FShaderBindingLayout * __thiscall
FShaderBindingLayout::FShaderBindingLayout(FShaderBindingLayout *this)

{
  TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295> *pTVar1;
  FRHIUniformBufferShaderBindingLayout *pFVar2;
  
  (this->RHILayout).Hash = 0;
  (this->RHILayout).Flags = None;
  (this->RHILayout).NumUniformBufferEntries = 0;
  *(undefined8 *)&(this->RHILayout).UniformBufferEntries.Elements[0].field1_0x10 = 0;
  *(undefined8 *)&(this->RHILayout).UniformBufferEntries.Elements[1].field1_0x10 = 0;
  *(undefined8 *)&(this->RHILayout).UniformBufferEntries.Elements[2].field1_0x10 = 0;
  *(undefined8 *)&(this->RHILayout).UniformBufferEntries.Elements[3].field1_0x10 = 0;
  *(undefined8 *)&(this->RHILayout).UniformBufferEntries.Elements[4].field1_0x10 = 0;
  *(undefined8 *)&(this->RHILayout).UniformBufferEntries.Elements[5].field1_0x10 = 0;
  *(undefined8 *)&(this->RHILayout).UniformBufferEntries.Elements[6].field1_0x10 = 0;
  *(undefined8 *)&(this->RHILayout).UniformBufferEntries.Elements[7].field1_0x10 = 0;
  (this->RHILayout).UniformBufferEntries.Elements[0].LayoutName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pTVar1 = &(this->RHILayout).UniformBufferEntries;
  pTVar1->Elements[0].LayoutName.Data.ArrayNum = 0;
  pTVar1->Elements[0].LayoutName.Data.ArrayMax = 0;
  (this->RHILayout).UniformBufferEntries.Elements[1].LayoutName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pFVar2 = (this->RHILayout).UniformBufferEntries.Elements;
  pFVar2[1].LayoutName.Data.ArrayNum = 0;
  pFVar2[1].LayoutName.Data.ArrayMax = 0;
  (this->RHILayout).UniformBufferEntries.Elements[2].LayoutName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pFVar2 = (this->RHILayout).UniformBufferEntries.Elements;
  pFVar2[2].LayoutName.Data.ArrayNum = 0;
  pFVar2[2].LayoutName.Data.ArrayMax = 0;
  (this->RHILayout).UniformBufferEntries.Elements[3].LayoutName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pFVar2 = (this->RHILayout).UniformBufferEntries.Elements;
  pFVar2[3].LayoutName.Data.ArrayNum = 0;
  pFVar2[3].LayoutName.Data.ArrayMax = 0;
  (this->RHILayout).UniformBufferEntries.Elements[4].LayoutName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pFVar2 = (this->RHILayout).UniformBufferEntries.Elements;
  pFVar2[4].LayoutName.Data.ArrayNum = 0;
  pFVar2[4].LayoutName.Data.ArrayMax = 0;
  (this->RHILayout).UniformBufferEntries.Elements[5].LayoutName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pFVar2 = (this->RHILayout).UniformBufferEntries.Elements;
  pFVar2[5].LayoutName.Data.ArrayNum = 0;
  pFVar2[5].LayoutName.Data.ArrayMax = 0;
  (this->RHILayout).UniformBufferEntries.Elements[6].LayoutName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pFVar2 = (this->RHILayout).UniformBufferEntries.Elements;
  pFVar2[6].LayoutName.Data.ArrayNum = 0;
  pFVar2[6].LayoutName.Data.ArrayMax = 0;
  (this->RHILayout).UniformBufferEntries.Elements[7].LayoutName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pFVar2 = (this->RHILayout).UniformBufferEntries.Elements;
  pFVar2[7].LayoutName.Data.ArrayNum = 0;
  pFVar2[7].LayoutName.Data.ArrayMax = 0;
  return this;
}

// ~FShaderBindingLayout @ 1452ffe70

void __thiscall FShaderBindingLayout::~FShaderBindingLayout(FShaderBindingLayout *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FRHIUniformBufferShaderBindingLayout *pFVar3;
  
  pFVar3 = (FRHIUniformBufferShaderBindingLayout *)(this + 1);
  lVar2 = 8;
  do {
    pFVar1 = pFVar3[-1].LayoutName.Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

