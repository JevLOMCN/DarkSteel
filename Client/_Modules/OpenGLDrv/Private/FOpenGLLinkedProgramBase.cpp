// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 2

// FOpenGLLinkedProgramBase @ 145be2360

FOpenGLLinkedProgramBase * __thiscall
FOpenGLLinkedProgramBase::FOpenGLLinkedProgramBase
          (FOpenGLLinkedProgramBase *this,FOpenGLProgramKey *param_1,uint param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FOpenGLLinkedProgramBase *pFVar8;
  ForElementType<unsigned_int> FVar9;
  uint uVar10;
  
  uVar4 = *(undefined8 *)(param_1->ShaderHashes[0].Hash + 8);
  pTVar1 = &this->TextureStageNeeds;
  *(undefined8 *)(this->ProgramKey).ShaderHashes[0].Hash =
       *(undefined8 *)param_1->ShaderHashes[0].Hash;
  *(undefined8 *)((this->ProgramKey).ShaderHashes[0].Hash + 8) = uVar4;
  uVar4 = *(undefined8 *)(param_1->ShaderHashes[1].Hash + 4);
  *(undefined8 *)((this->ProgramKey).ShaderHashes[0].Hash + 0x10) =
       *(undefined8 *)(param_1->ShaderHashes[0].Hash + 0x10);
  *(undefined8 *)((this->ProgramKey).ShaderHashes[1].Hash + 4) = uVar4;
  uVar4 = *(undefined8 *)param_1->ShaderHashes[2].Hash;
  *(undefined8 *)((this->ProgramKey).ShaderHashes[1].Hash + 0xc) =
       *(undefined8 *)(param_1->ShaderHashes[1].Hash + 0xc);
  *(undefined8 *)(this->ProgramKey).ShaderHashes[2].Hash = uVar4;
  uVar4 = *(undefined8 *)(param_1->ShaderHashes[2].Hash + 0x10);
  *(undefined8 *)((this->ProgramKey).ShaderHashes[2].Hash + 8) =
       *(undefined8 *)(param_1->ShaderHashes[2].Hash + 8);
  *(undefined8 *)((this->ProgramKey).ShaderHashes[2].Hash + 0x10) = uVar4;
  uVar4 = *(undefined8 *)(param_1->ShaderHashes[3].Hash + 0xc);
  *(undefined8 *)((this->ProgramKey).ShaderHashes[3].Hash + 4) =
       *(undefined8 *)(param_1->ShaderHashes[3].Hash + 4);
  *(undefined8 *)((this->ProgramKey).ShaderHashes[3].Hash + 0xc) = uVar4;
  uVar4 = *(undefined8 *)(param_1->ShaderHashes[4].Hash + 8);
  *(undefined8 *)(this->ProgramKey).ShaderHashes[4].Hash =
       *(undefined8 *)param_1->ShaderHashes[4].Hash;
  *(undefined8 *)((this->ProgramKey).ShaderHashes[4].Hash + 8) = uVar4;
  uVar4 = *(undefined8 *)(param_1->ShaderHashes[5].Hash + 4);
  *(undefined8 *)((this->ProgramKey).ShaderHashes[4].Hash + 0x10) =
       *(undefined8 *)(param_1->ShaderHashes[4].Hash + 0x10);
  *(undefined8 *)((this->ProgramKey).ShaderHashes[5].Hash + 4) = uVar4;
  *(undefined8 *)((this->ProgramKey).ShaderHashes[5].Hash + 0xc) =
       *(undefined8 *)(param_1->ShaderHashes[5].Hash + 0xc);
  if ((FOpenGLBase::MaxCombinedTextureImageUnits == -1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxCombinedTextureImageUnits != -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                         ,0x7c,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FOpenGLLinkedProgramBase *)(*pcVar3)();
    return pFVar8;
  }
  iVar7 = FOpenGLBase::MaxCombinedTextureImageUnits;
  (this->TextureStageNeeds).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->TextureStageNeeds).MaxBits = 0x80;
  (this->TextureStageNeeds).NumBits = iVar7;
  uVar6 = iVar7 + 0x1f;
  uVar10 = uVar6 >> 5;
  if (uVar6 >> 5 != 0) {
    if (4 < uVar10) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&pTVar1->AllocatorInstance,0,uVar10,4);
      (this->TextureStageNeeds).MaxBits = uVar10 << 5;
    }
    FVar9 = (this->TextureStageNeeds).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<unsigned_int>)0x0) {
      FVar9 = (ForElementType<unsigned_int>)pTVar1;
    }
    memset((void *)FVar9,0,(ulonglong)uVar10 << 2);
    iVar7 = (this->TextureStageNeeds).NumBits;
    uVar10 = iVar7 >> 0x1f & 0x1f;
    uVar6 = iVar7 + uVar10;
    iVar7 = (uVar6 & 0x1f) - uVar10;
    if (iVar7 != 0) {
      FVar9 = (this->TextureStageNeeds).AllocatorInstance.SecondaryData;
      if (FVar9 == (ForElementType<unsigned_int>)0x0) {
        FVar9 = (ForElementType<unsigned_int>)pTVar1;
      }
      puVar2 = (uint *)((longlong)FVar9 + (longlong)((int)uVar6 >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (-(char)iVar7 & 0x1fU);
    }
  }
  iVar7 = FOpenGL4::MaxCombinedUAVUnits;
  pTVar1 = &this->UAVStageNeeds;
  (this->UAVStageNeeds).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->UAVStageNeeds).MaxBits = 0x80;
  (this->UAVStageNeeds).NumBits = iVar7;
  uVar6 = iVar7 + 0x1f;
  uVar10 = uVar6 >> 5;
  if (uVar6 >> 5 != 0) {
    if (4 < uVar10) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&pTVar1->AllocatorInstance,0,uVar10,4);
      (this->UAVStageNeeds).MaxBits = uVar10 << 5;
    }
    FVar9 = (this->UAVStageNeeds).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<unsigned_int>)0x0) {
      FVar9 = (ForElementType<unsigned_int>)pTVar1;
    }
    memset((void *)FVar9,0,(ulonglong)uVar10 << 2);
    iVar7 = (this->UAVStageNeeds).NumBits;
    uVar10 = iVar7 >> 0x1f & 0x1f;
    uVar6 = iVar7 + uVar10;
    iVar7 = (uVar6 & 0x1f) - uVar10;
    if (iVar7 != 0) {
      FVar9 = (this->UAVStageNeeds).AllocatorInstance.SecondaryData;
      if (FVar9 == (ForElementType<unsigned_int>)0x0) {
        FVar9 = (ForElementType<unsigned_int>)pTVar1;
      }
      puVar2 = (uint *)((longlong)FVar9 + (longlong)((int)uVar6 >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
    }
  }
  this->MaxTextureStage = -1;
  this->MaxUAVUnitUsed = -1;
  this->Program = param_2;
  this->bDrawn = false;
  return this;
}

// GetProgramBinarySize @ 145c04360

int __thiscall FOpenGLLinkedProgramBase::GetProgramBinarySize(FOpenGLLinkedProgramBase *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int local_res8 [8];
  
  if ((this->Program == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Program",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                         ,0x4dd,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  local_res8[0] = -1;
  (*glGetProgramiv)(this->Program,0x8741,local_res8);
  if ((local_res8[0] < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("BinaryLength > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                         ,0x4e1,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return local_res8[0];
}

