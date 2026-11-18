// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// FRHIShaderBindingLayout @ 1459f53e0

FRHIShaderBindingLayout * __thiscall
FRHIShaderBindingLayout::FRHIShaderBindingLayout(FRHIShaderBindingLayout *this)

{
  FRHIUniformBufferShaderBindingLayout *pFVar1;
  
  this->Hash = 0;
  this->Flags = None;
  this->NumUniformBufferEntries = 0;
  *(undefined8 *)&(this->UniformBufferEntries).Elements[0].field1_0x10 = 0;
  *(undefined8 *)&(this->UniformBufferEntries).Elements[1].field1_0x10 = 0;
  *(undefined8 *)&(this->UniformBufferEntries).Elements[2].field1_0x10 = 0;
  *(undefined8 *)&(this->UniformBufferEntries).Elements[3].field1_0x10 = 0;
  *(undefined8 *)&(this->UniformBufferEntries).Elements[4].field1_0x10 = 0;
  *(undefined8 *)&(this->UniformBufferEntries).Elements[5].field1_0x10 = 0;
  *(undefined8 *)&(this->UniformBufferEntries).Elements[6].field1_0x10 = 0;
  *(undefined8 *)&(this->UniformBufferEntries).Elements[7].field1_0x10 = 0;
  (this->UniformBufferEntries).Elements[0].LayoutName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UniformBufferEntries).Elements[0].LayoutName.Data.ArrayNum = 0;
  (this->UniformBufferEntries).Elements[0].LayoutName.Data.ArrayMax = 0;
  (this->UniformBufferEntries).Elements[1].LayoutName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pFVar1 = (this->UniformBufferEntries).Elements;
  pFVar1[1].LayoutName.Data.ArrayNum = 0;
  pFVar1[1].LayoutName.Data.ArrayMax = 0;
  (this->UniformBufferEntries).Elements[2].LayoutName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pFVar1 = (this->UniformBufferEntries).Elements;
  pFVar1[2].LayoutName.Data.ArrayNum = 0;
  pFVar1[2].LayoutName.Data.ArrayMax = 0;
  (this->UniformBufferEntries).Elements[3].LayoutName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pFVar1 = (this->UniformBufferEntries).Elements;
  pFVar1[3].LayoutName.Data.ArrayNum = 0;
  pFVar1[3].LayoutName.Data.ArrayMax = 0;
  (this->UniformBufferEntries).Elements[4].LayoutName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pFVar1 = (this->UniformBufferEntries).Elements;
  pFVar1[4].LayoutName.Data.ArrayNum = 0;
  pFVar1[4].LayoutName.Data.ArrayMax = 0;
  (this->UniformBufferEntries).Elements[5].LayoutName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pFVar1 = (this->UniformBufferEntries).Elements;
  pFVar1[5].LayoutName.Data.ArrayNum = 0;
  pFVar1[5].LayoutName.Data.ArrayMax = 0;
  (this->UniformBufferEntries).Elements[6].LayoutName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pFVar1 = (this->UniformBufferEntries).Elements;
  pFVar1[6].LayoutName.Data.ArrayNum = 0;
  pFVar1[6].LayoutName.Data.ArrayMax = 0;
  (this->UniformBufferEntries).Elements[7].LayoutName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  pFVar1 = (this->UniformBufferEntries).Elements;
  pFVar1[7].LayoutName.Data.ArrayNum = 0;
  pFVar1[7].LayoutName.Data.ArrayMax = 0;
  return this;
}

// operator= @ 145a95a50

FRHIShaderBindingLayout * __thiscall
FRHIShaderBindingLayout::operator=(FRHIShaderBindingLayout *this,FRHIShaderBindingLayout *param_1)

{
  FRHIUniformBufferShaderBindingLayout *pFVar1;
  int *piVar2;
  FScriptContainerElement *_Src;
  longlong lVar3;
  uint uVar4;
  FRHIUniformBufferShaderBindingLayout_u_16 *pFVar5;
  longlong local_res10;
  
  pFVar5 = &(param_1->UniformBufferEntries).Elements[0].field1_0x10;
  this->Hash = param_1->Hash;
  this->Flags = param_1->Flags;
  this->NumUniformBufferEntries = param_1->NumUniformBufferEntries;
  lVar3 = (longlong)this - (longlong)param_1;
  local_res10 = 8;
  do {
    pFVar1 = (FRHIUniformBufferShaderBindingLayout *)(lVar3 + -0x10 + (longlong)pFVar5);
    if (pFVar1 != (FRHIUniformBufferShaderBindingLayout *)(pFVar5 + -4)) {
      uVar4 = pFVar5[-2].Flags;
      piVar2 = (int *)((longlong)pFVar5 + lVar3 + -4);
      _Src = (((FRHIUniformBufferShaderBindingLayout *)(pFVar5 + -4))->LayoutName).Data.
             AllocatorInstance.Data;
      *(uint *)(lVar3 + -8 + (longlong)pFVar5) = uVar4;
      if ((uVar4 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar4,*piVar2,(ForAnyElementType *)pFVar1,uVar4,piVar2);
        if (uVar4 != 0) {
          memcpy((pFVar1->LayoutName).Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar4 * 2);
        }
      }
    }
    uVar4 = (*(uint *)(lVar3 + (longlong)pFVar5) ^ pFVar5->Flags) & 0xf ^
            *(uint *)(lVar3 + (longlong)pFVar5);
    *(uint *)(lVar3 + (longlong)pFVar5) = uVar4;
    uVar4 = (uVar4 ^ pFVar5->Flags) & 0x3f0 ^ uVar4;
    *(uint *)(lVar3 + (longlong)pFVar5) = uVar4;
    uVar4 = (uVar4 ^ pFVar5->Flags) & 0x3fc00 ^ uVar4;
    *(uint *)(lVar3 + (longlong)pFVar5) = uVar4;
    uVar4 = (uVar4 ^ pFVar5->Flags) & 0x3fc0000 ^ uVar4;
    *(uint *)(lVar3 + (longlong)pFVar5) = uVar4;
    *(uint *)(lVar3 + (longlong)pFVar5) = (uVar4 ^ pFVar5->Flags) & 0x3ffffff ^ pFVar5->Flags;
    ((FRHIUniformBufferShaderBindingLayout_u_16 *)(lVar3 + (longlong)pFVar5))->Flags =
         *(uint *)pFVar5;
    pFVar5 = pFVar5 + 6;
    local_res10 = local_res10 + -1;
  } while (local_res10 != 0);
  return this;
}

