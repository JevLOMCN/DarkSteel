// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// FD3D12TimingArray @ 145a467d0

FD3D12TimingArray * __thiscall
FD3D12DynamicRHI::FD3D12TimingArray::FD3D12TimingArray
          (FD3D12TimingArray *this,FD3D12TimingArray *param_1)

{
  *(undefined8 *)&this->field_0xc0 = 0;
  if (*(longlong *)&param_1->field_0xc0 == 0) {
    memmove(this,param_1,0xc0);
  }
  if (*(void **)&this->field_0xc0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc0);
  }
  *(undefined8 *)&this->field_0xc0 = *(undefined8 *)&param_1->field_0xc0;
  *(undefined8 *)&param_1->field_0xc0 = 0;
  *(undefined4 *)&this->field_0xc8 = *(undefined4 *)&param_1->field_0xc8;
  *(undefined4 *)&this->field_0xcc = *(undefined4 *)&param_1->field_0xcc;
  *(undefined4 *)&param_1->field_0xc8 = 0;
  *(undefined4 *)&param_1->field_0xcc = 0x18;
  return this;
}

// CreateNew @ 145a5d900

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12Timing * __thiscall
FD3D12DynamicRHI::FD3D12TimingArray::CreateNew(FD3D12TimingArray *this,FD3D12Queue *param_1)

{
  int iVar1;
  FD3D12Timing *pFVar2;
  
  pFVar2 = ::operator_new(0x98);
  if (pFVar2 == (FD3D12Timing *)0x0) {
    pFVar2 = (FD3D12Timing *)0x0;
  }
  else {
    pFVar2 = FD3D12Timing::FD3D12Timing(pFVar2,param_1);
  }
  iVar1 = *(int *)&this->field_0xc8;
  if (iVar1 == *(int *)&this->field_0xcc) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<FD3D12Timing,TDefaultDelete<FD3D12Timing>_>_>_>
                      (0x808,(ForElementType<TUniquePtr<FD3D12Timing,TDefaultDelete<FD3D12Timing>_>_>
                              *)this,(int *)&this->field_0xcc);
  }
  *(int *)&this->field_0xc8 = iVar1 + 1;
  if (*(FD3D12TimingArray **)&this->field_0xc0 != (FD3D12TimingArray *)0x0) {
    this = *(FD3D12TimingArray **)&this->field_0xc0;
  }
  *(FD3D12Timing **)(&this->field_0x0 + (longlong)iVar1 * 8) = pFVar2;
  return pFVar2;
}

