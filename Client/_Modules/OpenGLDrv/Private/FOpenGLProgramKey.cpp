// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 3

// FOpenGLProgramKey @ 145be3320

FOpenGLProgramKey * __thiscall
FOpenGLProgramKey::FOpenGLProgramKey(FOpenGLProgramKey *this,FRHIComputeShader *param_1)

{
  longlong lVar1;
  FSHAHash *pFVar2;
  
  this->ShaderHashes[0].Hash[0] = '\0';
  this->ShaderHashes[0].Hash[1] = '\0';
  this->ShaderHashes[0].Hash[2] = '\0';
  this->ShaderHashes[0].Hash[3] = '\0';
  this->ShaderHashes[0].Hash[4] = '\0';
  this->ShaderHashes[0].Hash[5] = '\0';
  this->ShaderHashes[0].Hash[6] = '\0';
  this->ShaderHashes[0].Hash[7] = '\0';
  this->ShaderHashes[0].Hash[8] = '\0';
  this->ShaderHashes[0].Hash[9] = '\0';
  this->ShaderHashes[0].Hash[10] = '\0';
  this->ShaderHashes[0].Hash[0xb] = '\0';
  this->ShaderHashes[0].Hash[0xc] = '\0';
  this->ShaderHashes[0].Hash[0xd] = '\0';
  this->ShaderHashes[0].Hash[0xe] = '\0';
  this->ShaderHashes[0].Hash[0xf] = '\0';
  this->ShaderHashes[0].Hash[0x10] = '\0';
  this->ShaderHashes[0].Hash[0x11] = '\0';
  this->ShaderHashes[0].Hash[0x12] = '\0';
  this->ShaderHashes[0].Hash[0x13] = '\0';
  this->ShaderHashes[1].Hash[0] = '\0';
  this->ShaderHashes[1].Hash[1] = '\0';
  this->ShaderHashes[1].Hash[2] = '\0';
  this->ShaderHashes[1].Hash[3] = '\0';
  this->ShaderHashes[1].Hash[4] = '\0';
  this->ShaderHashes[1].Hash[5] = '\0';
  this->ShaderHashes[1].Hash[6] = '\0';
  this->ShaderHashes[1].Hash[7] = '\0';
  pFVar2 = this->ShaderHashes;
  pFVar2[1].Hash[8] = '\0';
  pFVar2[1].Hash[9] = '\0';
  pFVar2[1].Hash[10] = '\0';
  pFVar2[1].Hash[0xb] = '\0';
  pFVar2[1].Hash[0xc] = '\0';
  pFVar2[1].Hash[0xd] = '\0';
  pFVar2[1].Hash[0xe] = '\0';
  pFVar2[1].Hash[0xf] = '\0';
  pFVar2 = this->ShaderHashes;
  pFVar2[1].Hash[0x10] = '\0';
  pFVar2[1].Hash[0x11] = '\0';
  pFVar2[1].Hash[0x12] = '\0';
  pFVar2[1].Hash[0x13] = '\0';
  this->ShaderHashes[2].Hash[0] = '\0';
  this->ShaderHashes[2].Hash[1] = '\0';
  this->ShaderHashes[2].Hash[2] = '\0';
  this->ShaderHashes[2].Hash[3] = '\0';
  this->ShaderHashes[2].Hash[4] = '\0';
  this->ShaderHashes[2].Hash[5] = '\0';
  this->ShaderHashes[2].Hash[6] = '\0';
  this->ShaderHashes[2].Hash[7] = '\0';
  pFVar2 = this->ShaderHashes;
  pFVar2[2].Hash[8] = '\0';
  pFVar2[2].Hash[9] = '\0';
  pFVar2[2].Hash[10] = '\0';
  pFVar2[2].Hash[0xb] = '\0';
  pFVar2[2].Hash[0xc] = '\0';
  pFVar2[2].Hash[0xd] = '\0';
  pFVar2[2].Hash[0xe] = '\0';
  pFVar2[2].Hash[0xf] = '\0';
  pFVar2 = this->ShaderHashes;
  pFVar2[2].Hash[0x10] = '\0';
  pFVar2[2].Hash[0x11] = '\0';
  pFVar2[2].Hash[0x12] = '\0';
  pFVar2[2].Hash[0x13] = '\0';
  this->ShaderHashes[3].Hash[0] = '\0';
  this->ShaderHashes[3].Hash[1] = '\0';
  this->ShaderHashes[3].Hash[2] = '\0';
  this->ShaderHashes[3].Hash[3] = '\0';
  this->ShaderHashes[3].Hash[4] = '\0';
  this->ShaderHashes[3].Hash[5] = '\0';
  this->ShaderHashes[3].Hash[6] = '\0';
  this->ShaderHashes[3].Hash[7] = '\0';
  pFVar2 = this->ShaderHashes;
  pFVar2[3].Hash[8] = '\0';
  pFVar2[3].Hash[9] = '\0';
  pFVar2[3].Hash[10] = '\0';
  pFVar2[3].Hash[0xb] = '\0';
  pFVar2[3].Hash[0xc] = '\0';
  pFVar2[3].Hash[0xd] = '\0';
  pFVar2[3].Hash[0xe] = '\0';
  pFVar2[3].Hash[0xf] = '\0';
  pFVar2 = this->ShaderHashes;
  pFVar2[3].Hash[0x10] = '\0';
  pFVar2[3].Hash[0x11] = '\0';
  pFVar2[3].Hash[0x12] = '\0';
  pFVar2[3].Hash[0x13] = '\0';
  this->ShaderHashes[4].Hash[0] = '\0';
  this->ShaderHashes[4].Hash[1] = '\0';
  this->ShaderHashes[4].Hash[2] = '\0';
  this->ShaderHashes[4].Hash[3] = '\0';
  this->ShaderHashes[4].Hash[4] = '\0';
  this->ShaderHashes[4].Hash[5] = '\0';
  this->ShaderHashes[4].Hash[6] = '\0';
  this->ShaderHashes[4].Hash[7] = '\0';
  pFVar2 = this->ShaderHashes;
  pFVar2[4].Hash[8] = '\0';
  pFVar2[4].Hash[9] = '\0';
  pFVar2[4].Hash[10] = '\0';
  pFVar2[4].Hash[0xb] = '\0';
  pFVar2[4].Hash[0xc] = '\0';
  pFVar2[4].Hash[0xd] = '\0';
  pFVar2[4].Hash[0xe] = '\0';
  pFVar2[4].Hash[0xf] = '\0';
  pFVar2 = this->ShaderHashes;
  pFVar2[4].Hash[0x10] = '\0';
  pFVar2[4].Hash[0x11] = '\0';
  pFVar2[4].Hash[0x12] = '\0';
  pFVar2[4].Hash[0x13] = '\0';
  this->ShaderHashes[5].Hash[0] = '\0';
  this->ShaderHashes[5].Hash[1] = '\0';
  this->ShaderHashes[5].Hash[2] = '\0';
  this->ShaderHashes[5].Hash[3] = '\0';
  this->ShaderHashes[5].Hash[4] = '\0';
  this->ShaderHashes[5].Hash[5] = '\0';
  this->ShaderHashes[5].Hash[6] = '\0';
  this->ShaderHashes[5].Hash[7] = '\0';
  pFVar2 = this->ShaderHashes;
  pFVar2[5].Hash[8] = '\0';
  pFVar2[5].Hash[9] = '\0';
  pFVar2[5].Hash[10] = '\0';
  pFVar2[5].Hash[0xb] = '\0';
  pFVar2[5].Hash[0xc] = '\0';
  pFVar2[5].Hash[0xd] = '\0';
  pFVar2[5].Hash[0xe] = '\0';
  pFVar2[5].Hash[0xf] = '\0';
  pFVar2 = this->ShaderHashes;
  pFVar2[5].Hash[0x10] = '\0';
  pFVar2[5].Hash[0x11] = '\0';
  pFVar2[5].Hash[0x12] = '\0';
  pFVar2[5].Hash[0x13] = '\0';
  lVar1 = param_1->_padding_;
  *(longlong *)this->ShaderHashes[5].Hash = param_1->_padding_;
  *(longlong *)(this->ShaderHashes[5].Hash + 8) = lVar1;
  *(int *)(this->ShaderHashes[5].Hash + 0x10) = (int)param_1->_padding_;
  return this;
}

// FOpenGLProgramKey @ 145be3370

FOpenGLProgramKey * __thiscall
FOpenGLProgramKey::FOpenGLProgramKey
          (FOpenGLProgramKey *this,FRHIVertexShader *param_1,FRHIPixelShader *param_2,
          FRHIGeometryShader *param_3)

{
  FSHAHash *pFVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  
  this->ShaderHashes[0].Hash[0] = '\0';
  this->ShaderHashes[0].Hash[1] = '\0';
  this->ShaderHashes[0].Hash[2] = '\0';
  this->ShaderHashes[0].Hash[3] = '\0';
  this->ShaderHashes[0].Hash[4] = '\0';
  this->ShaderHashes[0].Hash[5] = '\0';
  this->ShaderHashes[0].Hash[6] = '\0';
  this->ShaderHashes[0].Hash[7] = '\0';
  this->ShaderHashes[0].Hash[8] = '\0';
  this->ShaderHashes[0].Hash[9] = '\0';
  this->ShaderHashes[0].Hash[10] = '\0';
  this->ShaderHashes[0].Hash[0xb] = '\0';
  this->ShaderHashes[0].Hash[0xc] = '\0';
  this->ShaderHashes[0].Hash[0xd] = '\0';
  this->ShaderHashes[0].Hash[0xe] = '\0';
  this->ShaderHashes[0].Hash[0xf] = '\0';
  this->ShaderHashes[0].Hash[0x10] = '\0';
  this->ShaderHashes[0].Hash[0x11] = '\0';
  this->ShaderHashes[0].Hash[0x12] = '\0';
  this->ShaderHashes[0].Hash[0x13] = '\0';
  this->ShaderHashes[1].Hash[0] = '\0';
  this->ShaderHashes[1].Hash[1] = '\0';
  this->ShaderHashes[1].Hash[2] = '\0';
  this->ShaderHashes[1].Hash[3] = '\0';
  this->ShaderHashes[1].Hash[4] = '\0';
  this->ShaderHashes[1].Hash[5] = '\0';
  this->ShaderHashes[1].Hash[6] = '\0';
  this->ShaderHashes[1].Hash[7] = '\0';
  pFVar1 = this->ShaderHashes;
  pFVar1[1].Hash[8] = '\0';
  pFVar1[1].Hash[9] = '\0';
  pFVar1[1].Hash[10] = '\0';
  pFVar1[1].Hash[0xb] = '\0';
  pFVar1[1].Hash[0xc] = '\0';
  pFVar1[1].Hash[0xd] = '\0';
  pFVar1[1].Hash[0xe] = '\0';
  pFVar1[1].Hash[0xf] = '\0';
  pFVar1 = this->ShaderHashes;
  pFVar1[1].Hash[0x10] = '\0';
  pFVar1[1].Hash[0x11] = '\0';
  pFVar1[1].Hash[0x12] = '\0';
  pFVar1[1].Hash[0x13] = '\0';
  this->ShaderHashes[2].Hash[0] = '\0';
  this->ShaderHashes[2].Hash[1] = '\0';
  this->ShaderHashes[2].Hash[2] = '\0';
  this->ShaderHashes[2].Hash[3] = '\0';
  this->ShaderHashes[2].Hash[4] = '\0';
  this->ShaderHashes[2].Hash[5] = '\0';
  this->ShaderHashes[2].Hash[6] = '\0';
  this->ShaderHashes[2].Hash[7] = '\0';
  pFVar1 = this->ShaderHashes;
  pFVar1[2].Hash[8] = '\0';
  pFVar1[2].Hash[9] = '\0';
  pFVar1[2].Hash[10] = '\0';
  pFVar1[2].Hash[0xb] = '\0';
  pFVar1[2].Hash[0xc] = '\0';
  pFVar1[2].Hash[0xd] = '\0';
  pFVar1[2].Hash[0xe] = '\0';
  pFVar1[2].Hash[0xf] = '\0';
  pFVar1 = this->ShaderHashes;
  pFVar1[2].Hash[0x10] = '\0';
  pFVar1[2].Hash[0x11] = '\0';
  pFVar1[2].Hash[0x12] = '\0';
  pFVar1[2].Hash[0x13] = '\0';
  this->ShaderHashes[3].Hash[0] = '\0';
  this->ShaderHashes[3].Hash[1] = '\0';
  this->ShaderHashes[3].Hash[2] = '\0';
  this->ShaderHashes[3].Hash[3] = '\0';
  this->ShaderHashes[3].Hash[4] = '\0';
  this->ShaderHashes[3].Hash[5] = '\0';
  this->ShaderHashes[3].Hash[6] = '\0';
  this->ShaderHashes[3].Hash[7] = '\0';
  pFVar1 = this->ShaderHashes;
  pFVar1[3].Hash[8] = '\0';
  pFVar1[3].Hash[9] = '\0';
  pFVar1[3].Hash[10] = '\0';
  pFVar1[3].Hash[0xb] = '\0';
  pFVar1[3].Hash[0xc] = '\0';
  pFVar1[3].Hash[0xd] = '\0';
  pFVar1[3].Hash[0xe] = '\0';
  pFVar1[3].Hash[0xf] = '\0';
  pFVar1 = this->ShaderHashes;
  pFVar1[3].Hash[0x10] = '\0';
  pFVar1[3].Hash[0x11] = '\0';
  pFVar1[3].Hash[0x12] = '\0';
  pFVar1[3].Hash[0x13] = '\0';
  this->ShaderHashes[4].Hash[0] = '\0';
  this->ShaderHashes[4].Hash[1] = '\0';
  this->ShaderHashes[4].Hash[2] = '\0';
  this->ShaderHashes[4].Hash[3] = '\0';
  this->ShaderHashes[4].Hash[4] = '\0';
  this->ShaderHashes[4].Hash[5] = '\0';
  this->ShaderHashes[4].Hash[6] = '\0';
  this->ShaderHashes[4].Hash[7] = '\0';
  pFVar1 = this->ShaderHashes;
  pFVar1[4].Hash[8] = '\0';
  pFVar1[4].Hash[9] = '\0';
  pFVar1[4].Hash[10] = '\0';
  pFVar1[4].Hash[0xb] = '\0';
  pFVar1[4].Hash[0xc] = '\0';
  pFVar1[4].Hash[0xd] = '\0';
  pFVar1[4].Hash[0xe] = '\0';
  pFVar1[4].Hash[0xf] = '\0';
  pFVar1 = this->ShaderHashes;
  pFVar1[4].Hash[0x10] = '\0';
  pFVar1[4].Hash[0x11] = '\0';
  pFVar1[4].Hash[0x12] = '\0';
  pFVar1[4].Hash[0x13] = '\0';
  this->ShaderHashes[5].Hash[0] = '\0';
  this->ShaderHashes[5].Hash[1] = '\0';
  this->ShaderHashes[5].Hash[2] = '\0';
  this->ShaderHashes[5].Hash[3] = '\0';
  this->ShaderHashes[5].Hash[4] = '\0';
  this->ShaderHashes[5].Hash[5] = '\0';
  this->ShaderHashes[5].Hash[6] = '\0';
  this->ShaderHashes[5].Hash[7] = '\0';
  pFVar1 = this->ShaderHashes;
  pFVar1[5].Hash[8] = '\0';
  pFVar1[5].Hash[9] = '\0';
  pFVar1[5].Hash[10] = '\0';
  pFVar1[5].Hash[0xb] = '\0';
  pFVar1[5].Hash[0xc] = '\0';
  pFVar1[5].Hash[0xd] = '\0';
  pFVar1[5].Hash[0xe] = '\0';
  pFVar1[5].Hash[0xf] = '\0';
  pFVar1 = this->ShaderHashes;
  pFVar1[5].Hash[0x10] = '\0';
  pFVar1[5].Hash[0x11] = '\0';
  pFVar1[5].Hash[0x12] = '\0';
  pFVar1[5].Hash[0x13] = '\0';
  uVar2 = param_1->field_0xf1;
  uVar3 = param_1->field_0xf2;
  uVar4 = param_1->field_0xf3;
  uVar5 = param_1->field_0xf4;
  uVar6 = param_1->field_0xf5;
  uVar7 = param_1->field_0xf6;
  uVar8 = param_1->field_0xf7;
  uVar9 = param_1->field_0xf8;
  uVar10 = param_1->field_0xf9;
  uVar11 = param_1->field_0xfa;
  uVar12 = param_1->field_0xfb;
  uVar13 = param_1->field_0xfc;
  uVar14 = param_1->field_0xfd;
  uVar15 = param_1->field_0xfe;
  uVar16 = param_1->field_0xff;
  this->ShaderHashes[0].Hash[0] = param_1->field_0xf0;
  this->ShaderHashes[0].Hash[1] = uVar2;
  this->ShaderHashes[0].Hash[2] = uVar3;
  this->ShaderHashes[0].Hash[3] = uVar4;
  this->ShaderHashes[0].Hash[4] = uVar5;
  this->ShaderHashes[0].Hash[5] = uVar6;
  this->ShaderHashes[0].Hash[6] = uVar7;
  this->ShaderHashes[0].Hash[7] = uVar8;
  this->ShaderHashes[0].Hash[8] = uVar9;
  this->ShaderHashes[0].Hash[9] = uVar10;
  this->ShaderHashes[0].Hash[10] = uVar11;
  this->ShaderHashes[0].Hash[0xb] = uVar12;
  this->ShaderHashes[0].Hash[0xc] = uVar13;
  this->ShaderHashes[0].Hash[0xd] = uVar14;
  this->ShaderHashes[0].Hash[0xe] = uVar15;
  this->ShaderHashes[0].Hash[0xf] = uVar16;
  uVar2 = param_1->field_0x101;
  uVar3 = param_1->field_0x102;
  uVar4 = param_1->field_0x103;
  this->ShaderHashes[0].Hash[0x10] = param_1->field_0x100;
  this->ShaderHashes[0].Hash[0x11] = uVar2;
  this->ShaderHashes[0].Hash[0x12] = uVar3;
  this->ShaderHashes[0].Hash[0x13] = uVar4;
  uVar2 = param_2->field_0xf1;
  uVar3 = param_2->field_0xf2;
  uVar4 = param_2->field_0xf3;
  uVar5 = param_2->field_0xf4;
  uVar6 = param_2->field_0xf5;
  uVar7 = param_2->field_0xf6;
  uVar8 = param_2->field_0xf7;
  uVar9 = param_2->field_0xf8;
  uVar10 = param_2->field_0xf9;
  uVar11 = param_2->field_0xfa;
  uVar12 = param_2->field_0xfb;
  uVar13 = param_2->field_0xfc;
  uVar14 = param_2->field_0xfd;
  uVar15 = param_2->field_0xfe;
  uVar16 = param_2->field_0xff;
  this->ShaderHashes[1].Hash[0] = param_2->field_0xf0;
  this->ShaderHashes[1].Hash[1] = uVar2;
  this->ShaderHashes[1].Hash[2] = uVar3;
  this->ShaderHashes[1].Hash[3] = uVar4;
  this->ShaderHashes[1].Hash[4] = uVar5;
  this->ShaderHashes[1].Hash[5] = uVar6;
  this->ShaderHashes[1].Hash[6] = uVar7;
  this->ShaderHashes[1].Hash[7] = uVar8;
  pFVar1 = this->ShaderHashes;
  pFVar1[1].Hash[8] = uVar9;
  pFVar1[1].Hash[9] = uVar10;
  pFVar1[1].Hash[10] = uVar11;
  pFVar1[1].Hash[0xb] = uVar12;
  pFVar1[1].Hash[0xc] = uVar13;
  pFVar1[1].Hash[0xd] = uVar14;
  pFVar1[1].Hash[0xe] = uVar15;
  pFVar1[1].Hash[0xf] = uVar16;
  uVar2 = param_2->field_0x101;
  uVar3 = param_2->field_0x102;
  uVar4 = param_2->field_0x103;
  pFVar1 = this->ShaderHashes;
  pFVar1[1].Hash[0x10] = param_2->field_0x100;
  pFVar1[1].Hash[0x11] = uVar2;
  pFVar1[1].Hash[0x12] = uVar3;
  pFVar1[1].Hash[0x13] = uVar4;
  if (param_3 != (FRHIGeometryShader *)0x0) {
    uVar2 = param_3->field_0xf1;
    uVar3 = param_3->field_0xf2;
    uVar4 = param_3->field_0xf3;
    uVar5 = param_3->field_0xf4;
    uVar6 = param_3->field_0xf5;
    uVar7 = param_3->field_0xf6;
    uVar8 = param_3->field_0xf7;
    uVar9 = param_3->field_0xf8;
    uVar10 = param_3->field_0xf9;
    uVar11 = param_3->field_0xfa;
    uVar12 = param_3->field_0xfb;
    uVar13 = param_3->field_0xfc;
    uVar14 = param_3->field_0xfd;
    uVar15 = param_3->field_0xfe;
    uVar16 = param_3->field_0xff;
    this->ShaderHashes[2].Hash[0] = param_3->field_0xf0;
    this->ShaderHashes[2].Hash[1] = uVar2;
    this->ShaderHashes[2].Hash[2] = uVar3;
    this->ShaderHashes[2].Hash[3] = uVar4;
    this->ShaderHashes[2].Hash[4] = uVar5;
    this->ShaderHashes[2].Hash[5] = uVar6;
    this->ShaderHashes[2].Hash[6] = uVar7;
    this->ShaderHashes[2].Hash[7] = uVar8;
    pFVar1 = this->ShaderHashes;
    pFVar1[2].Hash[8] = uVar9;
    pFVar1[2].Hash[9] = uVar10;
    pFVar1[2].Hash[10] = uVar11;
    pFVar1[2].Hash[0xb] = uVar12;
    pFVar1[2].Hash[0xc] = uVar13;
    pFVar1[2].Hash[0xd] = uVar14;
    pFVar1[2].Hash[0xe] = uVar15;
    pFVar1[2].Hash[0xf] = uVar16;
    uVar2 = param_3->field_0x101;
    uVar3 = param_3->field_0x102;
    uVar4 = param_3->field_0x103;
    pFVar1 = this->ShaderHashes;
    pFVar1[2].Hash[0x10] = param_3->field_0x100;
    pFVar1[2].Hash[0x11] = uVar2;
    pFVar1[2].Hash[0x12] = uVar3;
    pFVar1[2].Hash[0x13] = uVar4;
  }
  return this;
}

// ToString @ 145c32270

FString * __thiscall
FOpenGLProgramKey::ToString(FOpenGLProgramKey *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_30;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (((*(longlong *)this->ShaderHashes[0].Hash == 0) &&
      (*(longlong *)(this->ShaderHashes[0].Hash + 8) == 0)) &&
     (*(int *)(this->ShaderHashes[0].Hash + 0x10) == 0)) {
    if (((*(longlong *)this->ShaderHashes[5].Hash == 0) &&
        (*(longlong *)(this->ShaderHashes[5].Hash + 8) == 0)) &&
       (*(int *)(this->ShaderHashes[5].Hash + 0x10) == 0)) {
      ::FString::operator=(__return_storage_ptr__,L"Program with unset key");
      return __return_storage_ptr__;
    }
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    BytesToHex(this->ShaderHashes[5].Hash,0x14,&local_68);
    ::FString::ConcatCF(&local_58,L"Program C_",&local_68);
    local_30.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != &local_58) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_58.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_30.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    }
  }
  else {
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    BytesToHex((uchar *)this,0x14,&local_68);
    ::FString::ConcatCF(&local_48,L"Program V_",&local_68);
    if (__return_storage_ptr__ != &local_48) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_48.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    BytesToHex(this->ShaderHashes[1].Hash,0x14,&local_68);
    ::FString::ConcatCF(&local_30,L"_P_",&local_68);
    iVar2 = local_30.Data.ArrayNum + -1;
    if (local_30.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_30.Data.AllocatorInstance.Data,iVar2);
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

