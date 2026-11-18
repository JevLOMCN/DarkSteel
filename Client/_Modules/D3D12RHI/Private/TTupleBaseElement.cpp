// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// TTupleBaseElement<FD3D12VertexDeclarationKey,0,2><FD3D12VertexDeclarationKey_const_&> @ 145a844e0

TTupleBaseElement<FD3D12VertexDeclarationKey,0,2> * __thiscall
UE::Core::Private::Tuple::TTupleBaseElement<FD3D12VertexDeclarationKey,0,2>::
TTupleBaseElement<FD3D12VertexDeclarationKey,0,2><FD3D12VertexDeclarationKey_const_&>
          (TTupleBaseElement<FD3D12VertexDeclarationKey,0,2> *this,EForwardingConstructor param_1,
          FD3D12VertexDeclarationKey *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = (param_2->VertexElements).ArrayNum;
  piVar1 = &(this->Key).VertexElements.ArrayMax;
  (this->Key).VertexElements.ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0x11;
  }
  else {
    ReallocForCopy<0,TFixedAllocator<17>::ForElementType<D3D12_INPUT_ELEMENT_DESC>_>
              (0x20,8,iVar2,0,(ForElementType<D3D12_INPUT_ELEMENT_DESC> *)this,iVar2,piVar1);
    memcpy(this,param_2,(longlong)iVar2 << 5);
  }
  (this->Key).Hash = param_2->Hash;
  (this->Key).HashNoStrides = param_2->HashNoStrides;
  uVar3 = *(undefined8 *)(param_2->StreamStrides + 4);
  *(undefined8 *)(this->Key).StreamStrides = *(undefined8 *)param_2->StreamStrides;
  *(undefined8 *)((this->Key).StreamStrides + 4) = uVar3;
  uVar3 = *(undefined8 *)(param_2->StreamStrides + 0xc);
  *(undefined8 *)((this->Key).StreamStrides + 8) = *(undefined8 *)(param_2->StreamStrides + 8);
  *(undefined8 *)((this->Key).StreamStrides + 0xc) = uVar3;
  (this->Key).StreamStrides[0x10] = param_2->StreamStrides[0x10];
  return this;
}

