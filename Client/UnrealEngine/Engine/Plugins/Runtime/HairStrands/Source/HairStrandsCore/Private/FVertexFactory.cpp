// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// AccessStreamComponent @ 14e082480

FVertexElement __thiscall
FVertexFactory::AccessStreamComponent
          (FVertexFactory *this,FVertexStreamComponent *param_1,uchar param_2)

{
  EVertexStreamUsage EVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined7 in_register_00000081;
  undefined1 in_R9B;
  FVertexStream local_18;
  
  local_18.VertexBuffer = *(FVertexBuffer **)CONCAT71(in_register_00000081,param_2);
  EVar1 = *(EVertexStreamUsage *)(CONCAT71(in_register_00000081,param_2) + 0xf);
  uVar2 = *(undefined1 *)(CONCAT71(in_register_00000081,param_2) + 0xe);
  uVar3 = *(undefined1 *)(CONCAT71(in_register_00000081,param_2) + 0xc);
  local_18.Stride = (ushort)*(byte *)(CONCAT71(in_register_00000081,param_2) + 0xd);
  local_18.Offset = *(uint *)(CONCAT71(in_register_00000081,param_2) + 8);
  local_18.Padding = '\0';
  local_18.VertexStreamUsage = EVar1;
  iVar4 = TArray<FVertexFactory::FVertexStream,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::AddUniqueImpl<FVertexFactory::FVertexStream_const_&>(&this->Streams,&local_18);
  *(char *)&param_1->VertexBuffer = (char)iVar4;
  *(ushort *)((longlong)&param_1->VertexBuffer + 4) = local_18.Stride;
  *(ushort *)((longlong)&param_1->VertexBuffer + 6) = (ushort)(EVar1 & Instancing);
  *(undefined1 *)((longlong)&param_1->VertexBuffer + 1) = uVar3;
  *(undefined1 *)((longlong)&param_1->VertexBuffer + 2) = uVar2;
  *(undefined1 *)((longlong)&param_1->VertexBuffer + 3) = in_R9B;
  return (FVertexElement)param_1;
}

