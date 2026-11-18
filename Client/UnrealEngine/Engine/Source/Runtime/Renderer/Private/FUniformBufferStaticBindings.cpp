// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FUniformBufferStaticBindings @ 14472eac0

FUniformBufferStaticBindings * __thiscall
FUniformBufferStaticBindings::FUniformBufferStaticBindings
          (FUniformBufferStaticBindings *this,FUniformBufferStaticBindings *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<unsigned_char> FVar3;
  ForElementType<unsigned_char> _Dst;
  ForElementType<FRHIUniformBuffer_*> _Dst_00;
  ForElementType<unsigned_char> _Src;
  ForElementType<FRHIUniformBuffer_*> _Src_00;
  
  (this->Slots).AllocatorInstance.SecondaryData = (ForElementType<unsigned_char>)0x0;
  FVar3 = (param_1->Slots).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->Slots).ArrayNum;
  (this->Slots).ArrayNum = iVar2;
  _Src = (ForElementType<unsigned_char>)param_1;
  if (FVar3 != (ForElementType<unsigned_char>)0x0) {
    _Src = FVar3;
  }
  piVar1 = &(this->Slots).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 8;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
              (1,1,iVar2,0,(ForElementType<unsigned_char> *)this,iVar2,piVar1);
    FVar3 = (this->Slots).AllocatorInstance.SecondaryData;
    _Dst = (ForElementType<unsigned_char>)this;
    if (FVar3 != (ForElementType<unsigned_char>)0x0) {
      _Dst = FVar3;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2);
  }
  (this->UniformBuffers).AllocatorInstance.SecondaryData = (ForElementType<FRHIUniformBuffer_*>)0x0;
  _Src_00 = (param_1->UniformBuffers).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->UniformBuffers).ArrayNum;
  (this->UniformBuffers).ArrayNum = iVar2;
  if (_Src_00 == (ForElementType<FRHIUniformBuffer_*>)0x0) {
    _Src_00 = (ForElementType<FRHIUniformBuffer_*>)&param_1->UniformBuffers;
  }
  piVar1 = &(this->UniformBuffers).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 8;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIUniformBuffer_*>_>
              (8,8,iVar2,0,&(this->UniformBuffers).AllocatorInstance,iVar2,piVar1);
    _Dst_00 = (this->UniformBuffers).AllocatorInstance.SecondaryData;
    if (_Dst_00 == (ForElementType<FRHIUniformBuffer_*>)0x0) {
      _Dst_00 = (ForElementType<FRHIUniformBuffer_*>)&this->UniformBuffers;
    }
    memcpy((void *)_Dst_00,(void *)_Src_00,(longlong)iVar2 << 3);
  }
  this->SlotCount = param_1->SlotCount;
  this->ShaderBindingLayout = param_1->ShaderBindingLayout;
  return this;
}

