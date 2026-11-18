// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 1

// operator<FD3D11VertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_TTuple<FD3D11VertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_> @ 14595a460

TTuple<FD3D11VertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_> * __thiscall
TPairInitializer<FD3D11VertexDeclarationKey_const_&,TRefCountPtr<FRHIVertexDeclaration>_&&>::
operator<FD3D11VertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_TTuple<FD3D11VertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>
          (TPairInitializer<FD3D11VertexDeclarationKey_const_&,TRefCountPtr<FRHIVertexDeclaration>_&&>
           *this,TTuple<FD3D11VertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>
                 *__return_storage_ptr__)

{
  int iVar1;
  FD3D11VertexDeclarationKey *_Src;
  TRefCountPtr<FRHIVertexDeclaration> *pTVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  
  _Src = this->Key;
  pTVar2 = this->Value;
  iVar1 = (_Src->VertexElements).ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x220 = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x224 = 0x11;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<0,TFixedAllocator<17>::ForElementType<D3D11_INPUT_ELEMENT_DESC>_>
              (0x20,8,iVar1,0,(ForElementType<D3D11_INPUT_ELEMENT_DESC> *)__return_storage_ptr__,
               iVar1,(int *)&__return_storage_ptr__->field_0x224);
    memcpy(__return_storage_ptr__,_Src,(longlong)iVar1 << 5);
  }
  *(uint *)&__return_storage_ptr__->field_0x228 = _Src->Hash;
  uVar3 = _Src->StreamStrides[1];
  uVar4 = _Src->StreamStrides[2];
  uVar5 = _Src->StreamStrides[3];
  uVar6 = _Src->StreamStrides[4];
  uVar7 = _Src->StreamStrides[5];
  uVar8 = _Src->StreamStrides[6];
  uVar9 = _Src->StreamStrides[7];
  *(ushort *)&__return_storage_ptr__->field_0x22c = _Src->StreamStrides[0];
  *(ushort *)&__return_storage_ptr__->field_0x22e = uVar3;
  *(ushort *)&__return_storage_ptr__->field_0x230 = uVar4;
  *(ushort *)&__return_storage_ptr__->field_0x232 = uVar5;
  *(ushort *)&__return_storage_ptr__->field_0x234 = uVar6;
  *(ushort *)&__return_storage_ptr__->field_0x236 = uVar7;
  *(ushort *)&__return_storage_ptr__->field_0x238 = uVar8;
  *(ushort *)&__return_storage_ptr__->field_0x23a = uVar9;
  uVar3 = _Src->StreamStrides[9];
  uVar4 = _Src->StreamStrides[10];
  uVar5 = _Src->StreamStrides[0xb];
  uVar6 = _Src->StreamStrides[0xc];
  uVar7 = _Src->StreamStrides[0xd];
  uVar8 = _Src->StreamStrides[0xe];
  uVar9 = _Src->StreamStrides[0xf];
  *(ushort *)&__return_storage_ptr__->field_0x23c = _Src->StreamStrides[8];
  *(ushort *)&__return_storage_ptr__->field_0x23e = uVar3;
  *(ushort *)&__return_storage_ptr__->field_0x240 = uVar4;
  *(ushort *)&__return_storage_ptr__->field_0x242 = uVar5;
  *(ushort *)&__return_storage_ptr__->field_0x244 = uVar6;
  *(ushort *)&__return_storage_ptr__->field_0x246 = uVar7;
  *(ushort *)&__return_storage_ptr__->field_0x248 = uVar8;
  *(ushort *)&__return_storage_ptr__->field_0x24a = uVar9;
  *(ushort *)&__return_storage_ptr__->field_0x24c = _Src->StreamStrides[0x10];
  *(undefined8 *)&__return_storage_ptr__->field_0x250 = 0;
  *(FRHIVertexDeclaration **)&__return_storage_ptr__->field_0x250 = pTVar2->Reference;
  pTVar2->Reference = (FRHIVertexDeclaration *)0x0;
  return __return_storage_ptr__;
}

