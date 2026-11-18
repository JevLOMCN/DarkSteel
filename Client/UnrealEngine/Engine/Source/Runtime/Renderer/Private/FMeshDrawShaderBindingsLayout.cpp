// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// GetDataSizeBytes @ 14475ccd0

uint __thiscall FMeshDrawShaderBindingsLayout::GetDataSizeBytes(FMeshDrawShaderBindingsLayout *this)

{
  ForAnyElementType FVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FShaderParameterMapInfo *pFVar6;
  int iVar7;
  ForAnyElementType FVar8;
  int iVar9;
  undefined1 local_res8 [8];
  
  pFVar6 = this->ParameterMapInfo;
  iVar9 = 0;
  iVar2 = (pFVar6->LooseParameterBuffers).ArrayNum;
  iVar3 = (pFVar6->SRVs).ArrayNum;
  iVar4 = (pFVar6->TextureSamplers).ArrayNum;
  iVar5 = (pFVar6->UniformBuffers).ArrayNum;
  iVar7 = iVar3 + 7;
  FVar8 = (pFVar6->LooseParameterBuffers).AllocatorInstance;
  if (((ulonglong)FVar8 & 1) != 0) {
    FVar8 = (ForAnyElementType)
            ((longlong)&(pFVar6->LooseParameterBuffers).AllocatorInstance.field_0x0 +
            ((longlong)FVar8 >> 0x18));
  }
  FVar1 = (ForAnyElementType)((longlong)FVar8 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((pFVar6->LooseParameterBuffers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FShaderLooseParameterBufferInfo_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar8 == FVar1) break;
    iVar9 = iVar9 + (uint)*(ushort *)((longlong)FVar8 + 2);
    FVar8 = (ForAnyElementType)((longlong)FVar8 + 0x18);
  }
  return ((int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3) + (iVar4 + iVar5 + iVar3) * 8 + 7 + iVar9 &
         0xfffffff8;
}

// GetLooseDataSizeBytes @ 144f12600

uint __thiscall
FMeshDrawShaderBindingsLayout::GetLooseDataSizeBytes(FMeshDrawShaderBindingsLayout *this)

{
  ForAnyElementType FVar1;
  int iVar2;
  FShaderParameterMapInfo *pFVar3;
  ForAnyElementType FVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  
  pFVar3 = this->ParameterMapInfo;
  uVar5 = 0;
  iVar2 = (pFVar3->LooseParameterBuffers).ArrayNum;
  FVar4 = (pFVar3->LooseParameterBuffers).AllocatorInstance;
  if (((ulonglong)FVar4 & 1) != 0) {
    FVar4 = (ForAnyElementType)
            ((longlong)&(pFVar3->LooseParameterBuffers).AllocatorInstance.field_0x0 +
            ((longlong)FVar4 >> 0x18));
  }
  FVar1 = (ForAnyElementType)((longlong)FVar4 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((pFVar3->LooseParameterBuffers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FShaderLooseParameterBufferInfo_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar4 == FVar1) break;
    uVar5 = uVar5 + *(ushort *)((longlong)FVar4 + 2);
    FVar4 = (ForAnyElementType)((longlong)FVar4 + 0x18);
  }
  return uVar5;
}

