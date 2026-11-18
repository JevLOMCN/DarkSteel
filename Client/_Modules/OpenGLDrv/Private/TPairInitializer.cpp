// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 3

// operator<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_TTuple<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_> @ 145bd6450

TTuple<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_> * __thiscall
TPairInitializer<FOpenGLVertexDeclarationKey_const_&,TRefCountPtr<FRHIVertexDeclaration>_&&>::
operator<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_TTuple<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>
          (TPairInitializer<FOpenGLVertexDeclarationKey_const_&,TRefCountPtr<FRHIVertexDeclaration>_&&>
           *this,TTuple<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>
                 *__return_storage_ptr__)

{
  int iVar1;
  FOpenGLVertexDeclarationKey *_Src;
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
  *(int *)&__return_storage_ptr__->field_0x1dc = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x1e0 = 0x11;
  }
  else {
    UE::Core::Private::ReallocForCopy<0,TFixedAllocator<17>::ForElementType<FOpenGLVertexElement>_>
              (0x1c,4,iVar1,0,(ForElementType<FOpenGLVertexElement> *)__return_storage_ptr__,iVar1,
               (int *)&__return_storage_ptr__->field_0x1e0);
    memcpy(__return_storage_ptr__,_Src,(longlong)iVar1 * 0x1c);
  }
  *(uint *)&__return_storage_ptr__->field_0x1e4 = _Src->Hash;
  uVar3 = _Src->StreamStrides[1];
  uVar4 = _Src->StreamStrides[2];
  uVar5 = _Src->StreamStrides[3];
  uVar6 = _Src->StreamStrides[4];
  uVar7 = _Src->StreamStrides[5];
  uVar8 = _Src->StreamStrides[6];
  uVar9 = _Src->StreamStrides[7];
  *(ushort *)&__return_storage_ptr__->field_0x1e8 = _Src->StreamStrides[0];
  *(ushort *)&__return_storage_ptr__->field_0x1ea = uVar3;
  *(ushort *)&__return_storage_ptr__->field_0x1ec = uVar4;
  *(ushort *)&__return_storage_ptr__->field_0x1ee = uVar5;
  *(ushort *)&__return_storage_ptr__->field_0x1f0 = uVar6;
  *(ushort *)&__return_storage_ptr__->field_0x1f2 = uVar7;
  *(ushort *)&__return_storage_ptr__->field_0x1f4 = uVar8;
  *(ushort *)&__return_storage_ptr__->field_0x1f6 = uVar9;
  uVar3 = _Src->StreamStrides[9];
  uVar4 = _Src->StreamStrides[10];
  uVar5 = _Src->StreamStrides[0xb];
  uVar6 = _Src->StreamStrides[0xc];
  uVar7 = _Src->StreamStrides[0xd];
  uVar8 = _Src->StreamStrides[0xe];
  uVar9 = _Src->StreamStrides[0xf];
  *(ushort *)&__return_storage_ptr__->field_0x1f8 = _Src->StreamStrides[8];
  *(ushort *)&__return_storage_ptr__->field_0x1fa = uVar3;
  *(ushort *)&__return_storage_ptr__->field_0x1fc = uVar4;
  *(ushort *)&__return_storage_ptr__->field_0x1fe = uVar5;
  *(ushort *)&__return_storage_ptr__->field_0x200 = uVar6;
  *(ushort *)&__return_storage_ptr__->field_0x202 = uVar7;
  *(ushort *)&__return_storage_ptr__->field_0x204 = uVar8;
  *(ushort *)&__return_storage_ptr__->field_0x206 = uVar9;
  *(ushort *)&__return_storage_ptr__->field_0x208 = _Src->StreamStrides[0x10];
  *(undefined8 *)&__return_storage_ptr__->field_0x210 = 0;
  *(FRHIVertexDeclaration **)&__return_storage_ptr__->field_0x210 = pTVar2->Reference;
  pTVar2->Reference = (FRHIVertexDeclaration *)0x0;
  return __return_storage_ptr__;
}

// operator<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>_TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram> @ 145bd65b0

TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram> * __thiscall
TPairInitializer<FOpenGLProgramKey_const_&,FGLProgramCacheLRU::FEvictedGLProgram_&&>::
operator<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>_TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>
          (TPairInitializer<FOpenGLProgramKey_const_&,FGLProgramCacheLRU::FEvictedGLProgram_&&>
           *this,TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>
                 *__return_storage_ptr__)

{
  FOpenGLProgramKey *pFVar1;
  FEvictedGLProgram *pFVar2;
  undefined8 uVar3;
  FSHAHash *pFVar4;
  FSHAHash *pFVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  
  pFVar1 = this->Key;
  pFVar2 = this->Value;
  uVar6 = pFVar1->ShaderHashes[0].Hash[1];
  uVar7 = pFVar1->ShaderHashes[0].Hash[2];
  uVar8 = pFVar1->ShaderHashes[0].Hash[3];
  uVar9 = pFVar1->ShaderHashes[0].Hash[4];
  uVar10 = pFVar1->ShaderHashes[0].Hash[5];
  uVar11 = pFVar1->ShaderHashes[0].Hash[6];
  uVar12 = pFVar1->ShaderHashes[0].Hash[7];
  uVar13 = pFVar1->ShaderHashes[0].Hash[8];
  uVar14 = pFVar1->ShaderHashes[0].Hash[9];
  uVar15 = pFVar1->ShaderHashes[0].Hash[10];
  uVar16 = pFVar1->ShaderHashes[0].Hash[0xb];
  uVar17 = pFVar1->ShaderHashes[0].Hash[0xc];
  uVar18 = pFVar1->ShaderHashes[0].Hash[0xd];
  uVar19 = pFVar1->ShaderHashes[0].Hash[0xe];
  uVar20 = pFVar1->ShaderHashes[0].Hash[0xf];
  __return_storage_ptr__->field_0x0 = pFVar1->ShaderHashes[0].Hash[0];
  __return_storage_ptr__->field_0x1 = uVar6;
  __return_storage_ptr__->field_0x2 = uVar7;
  __return_storage_ptr__->field_0x3 = uVar8;
  __return_storage_ptr__->field_0x4 = uVar9;
  __return_storage_ptr__->field_0x5 = uVar10;
  __return_storage_ptr__->field_0x6 = uVar11;
  __return_storage_ptr__->field_0x7 = uVar12;
  __return_storage_ptr__->field_0x8 = uVar13;
  __return_storage_ptr__->field_0x9 = uVar14;
  __return_storage_ptr__->field_0xa = uVar15;
  __return_storage_ptr__->field_0xb = uVar16;
  __return_storage_ptr__->field_0xc = uVar17;
  __return_storage_ptr__->field_0xd = uVar18;
  __return_storage_ptr__->field_0xe = uVar19;
  __return_storage_ptr__->field_0xf = uVar20;
  pFVar4 = pFVar1->ShaderHashes;
  uVar6 = pFVar4[1].Hash[4];
  uVar7 = pFVar4[1].Hash[5];
  uVar8 = pFVar4[1].Hash[6];
  uVar9 = pFVar4[1].Hash[7];
  uVar10 = pFVar4[1].Hash[8];
  uVar11 = pFVar4[1].Hash[9];
  uVar12 = pFVar4[1].Hash[10];
  uVar13 = pFVar4[1].Hash[0xb];
  *(undefined8 *)&__return_storage_ptr__->field_0x10 =
       *(undefined8 *)(pFVar1->ShaderHashes[0].Hash + 0x10);
  __return_storage_ptr__->field_0x18 = uVar6;
  __return_storage_ptr__->field_0x19 = uVar7;
  __return_storage_ptr__->field_0x1a = uVar8;
  __return_storage_ptr__->field_0x1b = uVar9;
  __return_storage_ptr__->field_0x1c = uVar10;
  __return_storage_ptr__->field_0x1d = uVar11;
  __return_storage_ptr__->field_0x1e = uVar12;
  __return_storage_ptr__->field_0x1f = uVar13;
  pFVar4 = pFVar1->ShaderHashes;
  uVar6 = pFVar4[1].Hash[0xd];
  uVar7 = pFVar4[1].Hash[0xe];
  uVar8 = pFVar4[1].Hash[0xf];
  uVar9 = pFVar4[1].Hash[0x10];
  uVar10 = pFVar4[1].Hash[0x11];
  uVar11 = pFVar4[1].Hash[0x12];
  uVar12 = pFVar4[1].Hash[0x13];
  uVar13 = pFVar1->ShaderHashes[2].Hash[0];
  uVar14 = pFVar1->ShaderHashes[2].Hash[1];
  uVar15 = pFVar1->ShaderHashes[2].Hash[2];
  uVar16 = pFVar1->ShaderHashes[2].Hash[3];
  uVar17 = pFVar1->ShaderHashes[2].Hash[4];
  uVar18 = pFVar1->ShaderHashes[2].Hash[5];
  uVar19 = pFVar1->ShaderHashes[2].Hash[6];
  uVar20 = pFVar1->ShaderHashes[2].Hash[7];
  __return_storage_ptr__->field_0x20 = pFVar4[1].Hash[0xc];
  __return_storage_ptr__->field_0x21 = uVar6;
  __return_storage_ptr__->field_0x22 = uVar7;
  __return_storage_ptr__->field_0x23 = uVar8;
  __return_storage_ptr__->field_0x24 = uVar9;
  __return_storage_ptr__->field_0x25 = uVar10;
  __return_storage_ptr__->field_0x26 = uVar11;
  __return_storage_ptr__->field_0x27 = uVar12;
  __return_storage_ptr__->field_0x28 = uVar13;
  __return_storage_ptr__->field_0x29 = uVar14;
  __return_storage_ptr__->field_0x2a = uVar15;
  __return_storage_ptr__->field_0x2b = uVar16;
  __return_storage_ptr__->field_0x2c = uVar17;
  __return_storage_ptr__->field_0x2d = uVar18;
  __return_storage_ptr__->field_0x2e = uVar19;
  __return_storage_ptr__->field_0x2f = uVar20;
  pFVar4 = pFVar1->ShaderHashes;
  uVar6 = pFVar4[2].Hash[9];
  uVar7 = pFVar4[2].Hash[10];
  uVar8 = pFVar4[2].Hash[0xb];
  uVar9 = pFVar4[2].Hash[0xc];
  uVar10 = pFVar4[2].Hash[0xd];
  uVar11 = pFVar4[2].Hash[0xe];
  uVar12 = pFVar4[2].Hash[0xf];
  uVar3 = *(undefined8 *)(pFVar1->ShaderHashes[2].Hash + 0x10);
  __return_storage_ptr__->field_0x30 = pFVar4[2].Hash[8];
  __return_storage_ptr__->field_0x31 = uVar6;
  __return_storage_ptr__->field_0x32 = uVar7;
  __return_storage_ptr__->field_0x33 = uVar8;
  __return_storage_ptr__->field_0x34 = uVar9;
  __return_storage_ptr__->field_0x35 = uVar10;
  __return_storage_ptr__->field_0x36 = uVar11;
  __return_storage_ptr__->field_0x37 = uVar12;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = uVar3;
  pFVar4 = pFVar1->ShaderHashes;
  uVar6 = pFVar4[3].Hash[5];
  uVar7 = pFVar4[3].Hash[6];
  uVar8 = pFVar4[3].Hash[7];
  uVar9 = pFVar4[3].Hash[8];
  uVar10 = pFVar4[3].Hash[9];
  uVar11 = pFVar4[3].Hash[10];
  uVar12 = pFVar4[3].Hash[0xb];
  pFVar5 = pFVar1->ShaderHashes;
  uVar13 = pFVar5[3].Hash[0xc];
  uVar14 = pFVar5[3].Hash[0xd];
  uVar15 = pFVar5[3].Hash[0xe];
  uVar16 = pFVar5[3].Hash[0xf];
  uVar17 = pFVar5[3].Hash[0x10];
  uVar18 = pFVar5[3].Hash[0x11];
  uVar19 = pFVar5[3].Hash[0x12];
  uVar20 = pFVar5[3].Hash[0x13];
  __return_storage_ptr__->field_0x40 = pFVar4[3].Hash[4];
  __return_storage_ptr__->field_0x41 = uVar6;
  __return_storage_ptr__->field_0x42 = uVar7;
  __return_storage_ptr__->field_0x43 = uVar8;
  __return_storage_ptr__->field_0x44 = uVar9;
  __return_storage_ptr__->field_0x45 = uVar10;
  __return_storage_ptr__->field_0x46 = uVar11;
  __return_storage_ptr__->field_0x47 = uVar12;
  __return_storage_ptr__->field_0x48 = uVar13;
  __return_storage_ptr__->field_0x49 = uVar14;
  __return_storage_ptr__->field_0x4a = uVar15;
  __return_storage_ptr__->field_0x4b = uVar16;
  __return_storage_ptr__->field_0x4c = uVar17;
  __return_storage_ptr__->field_0x4d = uVar18;
  __return_storage_ptr__->field_0x4e = uVar19;
  __return_storage_ptr__->field_0x4f = uVar20;
  uVar6 = pFVar1->ShaderHashes[4].Hash[1];
  uVar7 = pFVar1->ShaderHashes[4].Hash[2];
  uVar8 = pFVar1->ShaderHashes[4].Hash[3];
  uVar9 = pFVar1->ShaderHashes[4].Hash[4];
  uVar10 = pFVar1->ShaderHashes[4].Hash[5];
  uVar11 = pFVar1->ShaderHashes[4].Hash[6];
  uVar12 = pFVar1->ShaderHashes[4].Hash[7];
  pFVar4 = pFVar1->ShaderHashes;
  uVar13 = pFVar4[4].Hash[8];
  uVar14 = pFVar4[4].Hash[9];
  uVar15 = pFVar4[4].Hash[10];
  uVar16 = pFVar4[4].Hash[0xb];
  uVar17 = pFVar4[4].Hash[0xc];
  uVar18 = pFVar4[4].Hash[0xd];
  uVar19 = pFVar4[4].Hash[0xe];
  uVar20 = pFVar4[4].Hash[0xf];
  __return_storage_ptr__->field_0x50 = pFVar1->ShaderHashes[4].Hash[0];
  __return_storage_ptr__->field_0x51 = uVar6;
  __return_storage_ptr__->field_0x52 = uVar7;
  __return_storage_ptr__->field_0x53 = uVar8;
  __return_storage_ptr__->field_0x54 = uVar9;
  __return_storage_ptr__->field_0x55 = uVar10;
  __return_storage_ptr__->field_0x56 = uVar11;
  __return_storage_ptr__->field_0x57 = uVar12;
  __return_storage_ptr__->field_0x58 = uVar13;
  __return_storage_ptr__->field_0x59 = uVar14;
  __return_storage_ptr__->field_0x5a = uVar15;
  __return_storage_ptr__->field_0x5b = uVar16;
  __return_storage_ptr__->field_0x5c = uVar17;
  __return_storage_ptr__->field_0x5d = uVar18;
  __return_storage_ptr__->field_0x5e = uVar19;
  __return_storage_ptr__->field_0x5f = uVar20;
  pFVar4 = pFVar1->ShaderHashes;
  uVar6 = pFVar4[5].Hash[4];
  uVar7 = pFVar4[5].Hash[5];
  uVar8 = pFVar4[5].Hash[6];
  uVar9 = pFVar4[5].Hash[7];
  uVar10 = pFVar4[5].Hash[8];
  uVar11 = pFVar4[5].Hash[9];
  uVar12 = pFVar4[5].Hash[10];
  uVar13 = pFVar4[5].Hash[0xb];
  *(undefined8 *)&__return_storage_ptr__->field_0x60 =
       *(undefined8 *)(pFVar1->ShaderHashes[4].Hash + 0x10);
  __return_storage_ptr__->field_0x68 = uVar6;
  __return_storage_ptr__->field_0x69 = uVar7;
  __return_storage_ptr__->field_0x6a = uVar8;
  __return_storage_ptr__->field_0x6b = uVar9;
  __return_storage_ptr__->field_0x6c = uVar10;
  __return_storage_ptr__->field_0x6d = uVar11;
  __return_storage_ptr__->field_0x6e = uVar12;
  __return_storage_ptr__->field_0x6f = uVar13;
  pFVar4 = pFVar1->ShaderHashes;
  uVar6 = pFVar4[5].Hash[0xd];
  uVar7 = pFVar4[5].Hash[0xe];
  uVar8 = pFVar4[5].Hash[0xf];
  uVar9 = pFVar4[5].Hash[0x10];
  uVar10 = pFVar4[5].Hash[0x11];
  uVar11 = pFVar4[5].Hash[0x12];
  uVar12 = pFVar4[5].Hash[0x13];
  __return_storage_ptr__->field_0x70 = pFVar4[5].Hash[0xc];
  __return_storage_ptr__->field_0x71 = uVar6;
  __return_storage_ptr__->field_0x72 = uVar7;
  __return_storage_ptr__->field_0x73 = uVar8;
  __return_storage_ptr__->field_0x74 = uVar9;
  __return_storage_ptr__->field_0x75 = uVar10;
  __return_storage_ptr__->field_0x76 = uVar11;
  __return_storage_ptr__->field_0x77 = uVar12;
  *(FOpenGLLinkedProgram **)&__return_storage_ptr__->field_0x78 = pFVar2->LinkedProgram;
  TUniqueObj<FOpenGLProgramBinary>::TUniqueObj<FOpenGLProgramBinary>
            ((TUniqueObj<FOpenGLProgramBinary> *)&__return_storage_ptr__->field_0x80,
             &pFVar2->CachedProgramBinary);
  return __return_storage_ptr__;
}

// operator<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>_TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram> @ 145bd6630

TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram> * __thiscall
TPairInitializer<FOpenGLProgramKey_const_&,FOpenGLLinkedProgram_*_&>::
operator<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>_TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>
          (TPairInitializer<FOpenGLProgramKey_const_&,FOpenGLLinkedProgram_*_&> *this,
          TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram> *__return_storage_ptr__)

{
  FOpenGLProgramKey *pFVar1;
  FOpenGLLinkedProgram **ppFVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  FSHAHash *pFVar6;
  FSHAHash *pFVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  uchar uVar21;
  uchar uVar22;
  TConsoleVariableData<int> *pTVar23;
  bool bVar24;
  undefined8 *puVar25;
  FOpenGLProgramBinary *pFVar26;
  undefined8 *puVar27;
  TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram> *pTVar28;
  undefined8 *puVar29;
  FOpenGLProgramBinary local_28;
  
  pFVar1 = this->Key;
  ppFVar2 = this->Value;
  uVar8 = pFVar1->ShaderHashes[0].Hash[1];
  uVar9 = pFVar1->ShaderHashes[0].Hash[2];
  uVar10 = pFVar1->ShaderHashes[0].Hash[3];
  uVar11 = pFVar1->ShaderHashes[0].Hash[4];
  uVar12 = pFVar1->ShaderHashes[0].Hash[5];
  uVar13 = pFVar1->ShaderHashes[0].Hash[6];
  uVar14 = pFVar1->ShaderHashes[0].Hash[7];
  uVar15 = pFVar1->ShaderHashes[0].Hash[8];
  uVar16 = pFVar1->ShaderHashes[0].Hash[9];
  uVar17 = pFVar1->ShaderHashes[0].Hash[10];
  uVar18 = pFVar1->ShaderHashes[0].Hash[0xb];
  uVar19 = pFVar1->ShaderHashes[0].Hash[0xc];
  uVar20 = pFVar1->ShaderHashes[0].Hash[0xd];
  uVar21 = pFVar1->ShaderHashes[0].Hash[0xe];
  uVar22 = pFVar1->ShaderHashes[0].Hash[0xf];
  __return_storage_ptr__->field_0x0 = pFVar1->ShaderHashes[0].Hash[0];
  __return_storage_ptr__->field_0x1 = uVar8;
  __return_storage_ptr__->field_0x2 = uVar9;
  __return_storage_ptr__->field_0x3 = uVar10;
  __return_storage_ptr__->field_0x4 = uVar11;
  __return_storage_ptr__->field_0x5 = uVar12;
  __return_storage_ptr__->field_0x6 = uVar13;
  __return_storage_ptr__->field_0x7 = uVar14;
  __return_storage_ptr__->field_0x8 = uVar15;
  __return_storage_ptr__->field_0x9 = uVar16;
  __return_storage_ptr__->field_0xa = uVar17;
  __return_storage_ptr__->field_0xb = uVar18;
  __return_storage_ptr__->field_0xc = uVar19;
  __return_storage_ptr__->field_0xd = uVar20;
  __return_storage_ptr__->field_0xe = uVar21;
  __return_storage_ptr__->field_0xf = uVar22;
  pFVar6 = pFVar1->ShaderHashes;
  uVar8 = pFVar6[1].Hash[4];
  uVar9 = pFVar6[1].Hash[5];
  uVar10 = pFVar6[1].Hash[6];
  uVar11 = pFVar6[1].Hash[7];
  uVar12 = pFVar6[1].Hash[8];
  uVar13 = pFVar6[1].Hash[9];
  uVar14 = pFVar6[1].Hash[10];
  uVar15 = pFVar6[1].Hash[0xb];
  *(undefined8 *)&__return_storage_ptr__->field_0x10 =
       *(undefined8 *)(pFVar1->ShaderHashes[0].Hash + 0x10);
  __return_storage_ptr__->field_0x18 = uVar8;
  __return_storage_ptr__->field_0x19 = uVar9;
  __return_storage_ptr__->field_0x1a = uVar10;
  __return_storage_ptr__->field_0x1b = uVar11;
  __return_storage_ptr__->field_0x1c = uVar12;
  __return_storage_ptr__->field_0x1d = uVar13;
  __return_storage_ptr__->field_0x1e = uVar14;
  __return_storage_ptr__->field_0x1f = uVar15;
  pFVar6 = pFVar1->ShaderHashes;
  uVar8 = pFVar6[1].Hash[0xd];
  uVar9 = pFVar6[1].Hash[0xe];
  uVar10 = pFVar6[1].Hash[0xf];
  uVar11 = pFVar6[1].Hash[0x10];
  uVar12 = pFVar6[1].Hash[0x11];
  uVar13 = pFVar6[1].Hash[0x12];
  uVar14 = pFVar6[1].Hash[0x13];
  uVar15 = pFVar1->ShaderHashes[2].Hash[0];
  uVar16 = pFVar1->ShaderHashes[2].Hash[1];
  uVar17 = pFVar1->ShaderHashes[2].Hash[2];
  uVar18 = pFVar1->ShaderHashes[2].Hash[3];
  uVar19 = pFVar1->ShaderHashes[2].Hash[4];
  uVar20 = pFVar1->ShaderHashes[2].Hash[5];
  uVar21 = pFVar1->ShaderHashes[2].Hash[6];
  uVar22 = pFVar1->ShaderHashes[2].Hash[7];
  __return_storage_ptr__->field_0x20 = pFVar6[1].Hash[0xc];
  __return_storage_ptr__->field_0x21 = uVar8;
  __return_storage_ptr__->field_0x22 = uVar9;
  __return_storage_ptr__->field_0x23 = uVar10;
  __return_storage_ptr__->field_0x24 = uVar11;
  __return_storage_ptr__->field_0x25 = uVar12;
  __return_storage_ptr__->field_0x26 = uVar13;
  __return_storage_ptr__->field_0x27 = uVar14;
  __return_storage_ptr__->field_0x28 = uVar15;
  __return_storage_ptr__->field_0x29 = uVar16;
  __return_storage_ptr__->field_0x2a = uVar17;
  __return_storage_ptr__->field_0x2b = uVar18;
  __return_storage_ptr__->field_0x2c = uVar19;
  __return_storage_ptr__->field_0x2d = uVar20;
  __return_storage_ptr__->field_0x2e = uVar21;
  __return_storage_ptr__->field_0x2f = uVar22;
  pFVar6 = pFVar1->ShaderHashes;
  uVar8 = pFVar6[2].Hash[9];
  uVar9 = pFVar6[2].Hash[10];
  uVar10 = pFVar6[2].Hash[0xb];
  uVar11 = pFVar6[2].Hash[0xc];
  uVar12 = pFVar6[2].Hash[0xd];
  uVar13 = pFVar6[2].Hash[0xe];
  uVar14 = pFVar6[2].Hash[0xf];
  uVar5 = *(undefined8 *)(pFVar1->ShaderHashes[2].Hash + 0x10);
  __return_storage_ptr__->field_0x30 = pFVar6[2].Hash[8];
  __return_storage_ptr__->field_0x31 = uVar8;
  __return_storage_ptr__->field_0x32 = uVar9;
  __return_storage_ptr__->field_0x33 = uVar10;
  __return_storage_ptr__->field_0x34 = uVar11;
  __return_storage_ptr__->field_0x35 = uVar12;
  __return_storage_ptr__->field_0x36 = uVar13;
  __return_storage_ptr__->field_0x37 = uVar14;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = uVar5;
  pFVar6 = pFVar1->ShaderHashes;
  uVar8 = pFVar6[3].Hash[5];
  uVar9 = pFVar6[3].Hash[6];
  uVar10 = pFVar6[3].Hash[7];
  uVar11 = pFVar6[3].Hash[8];
  uVar12 = pFVar6[3].Hash[9];
  uVar13 = pFVar6[3].Hash[10];
  uVar14 = pFVar6[3].Hash[0xb];
  pFVar7 = pFVar1->ShaderHashes;
  uVar15 = pFVar7[3].Hash[0xc];
  uVar16 = pFVar7[3].Hash[0xd];
  uVar17 = pFVar7[3].Hash[0xe];
  uVar18 = pFVar7[3].Hash[0xf];
  uVar19 = pFVar7[3].Hash[0x10];
  uVar20 = pFVar7[3].Hash[0x11];
  uVar21 = pFVar7[3].Hash[0x12];
  uVar22 = pFVar7[3].Hash[0x13];
  __return_storage_ptr__->field_0x40 = pFVar6[3].Hash[4];
  __return_storage_ptr__->field_0x41 = uVar8;
  __return_storage_ptr__->field_0x42 = uVar9;
  __return_storage_ptr__->field_0x43 = uVar10;
  __return_storage_ptr__->field_0x44 = uVar11;
  __return_storage_ptr__->field_0x45 = uVar12;
  __return_storage_ptr__->field_0x46 = uVar13;
  __return_storage_ptr__->field_0x47 = uVar14;
  __return_storage_ptr__->field_0x48 = uVar15;
  __return_storage_ptr__->field_0x49 = uVar16;
  __return_storage_ptr__->field_0x4a = uVar17;
  __return_storage_ptr__->field_0x4b = uVar18;
  __return_storage_ptr__->field_0x4c = uVar19;
  __return_storage_ptr__->field_0x4d = uVar20;
  __return_storage_ptr__->field_0x4e = uVar21;
  __return_storage_ptr__->field_0x4f = uVar22;
  uVar8 = pFVar1->ShaderHashes[4].Hash[1];
  uVar9 = pFVar1->ShaderHashes[4].Hash[2];
  uVar10 = pFVar1->ShaderHashes[4].Hash[3];
  uVar11 = pFVar1->ShaderHashes[4].Hash[4];
  uVar12 = pFVar1->ShaderHashes[4].Hash[5];
  uVar13 = pFVar1->ShaderHashes[4].Hash[6];
  uVar14 = pFVar1->ShaderHashes[4].Hash[7];
  pFVar6 = pFVar1->ShaderHashes;
  uVar15 = pFVar6[4].Hash[8];
  uVar16 = pFVar6[4].Hash[9];
  uVar17 = pFVar6[4].Hash[10];
  uVar18 = pFVar6[4].Hash[0xb];
  uVar19 = pFVar6[4].Hash[0xc];
  uVar20 = pFVar6[4].Hash[0xd];
  uVar21 = pFVar6[4].Hash[0xe];
  uVar22 = pFVar6[4].Hash[0xf];
  __return_storage_ptr__->field_0x50 = pFVar1->ShaderHashes[4].Hash[0];
  __return_storage_ptr__->field_0x51 = uVar8;
  __return_storage_ptr__->field_0x52 = uVar9;
  __return_storage_ptr__->field_0x53 = uVar10;
  __return_storage_ptr__->field_0x54 = uVar11;
  __return_storage_ptr__->field_0x55 = uVar12;
  __return_storage_ptr__->field_0x56 = uVar13;
  __return_storage_ptr__->field_0x57 = uVar14;
  __return_storage_ptr__->field_0x58 = uVar15;
  __return_storage_ptr__->field_0x59 = uVar16;
  __return_storage_ptr__->field_0x5a = uVar17;
  __return_storage_ptr__->field_0x5b = uVar18;
  __return_storage_ptr__->field_0x5c = uVar19;
  __return_storage_ptr__->field_0x5d = uVar20;
  __return_storage_ptr__->field_0x5e = uVar21;
  __return_storage_ptr__->field_0x5f = uVar22;
  pFVar6 = pFVar1->ShaderHashes;
  uVar8 = pFVar6[5].Hash[4];
  uVar9 = pFVar6[5].Hash[5];
  uVar10 = pFVar6[5].Hash[6];
  uVar11 = pFVar6[5].Hash[7];
  uVar12 = pFVar6[5].Hash[8];
  uVar13 = pFVar6[5].Hash[9];
  uVar14 = pFVar6[5].Hash[10];
  uVar15 = pFVar6[5].Hash[0xb];
  *(undefined8 *)&__return_storage_ptr__->field_0x60 =
       *(undefined8 *)(pFVar1->ShaderHashes[4].Hash + 0x10);
  __return_storage_ptr__->field_0x68 = uVar8;
  __return_storage_ptr__->field_0x69 = uVar9;
  __return_storage_ptr__->field_0x6a = uVar10;
  __return_storage_ptr__->field_0x6b = uVar11;
  __return_storage_ptr__->field_0x6c = uVar12;
  __return_storage_ptr__->field_0x6d = uVar13;
  __return_storage_ptr__->field_0x6e = uVar14;
  __return_storage_ptr__->field_0x6f = uVar15;
  pFVar6 = pFVar1->ShaderHashes;
  uVar8 = pFVar6[5].Hash[0xd];
  uVar9 = pFVar6[5].Hash[0xe];
  uVar10 = pFVar6[5].Hash[0xf];
  uVar11 = pFVar6[5].Hash[0x10];
  uVar12 = pFVar6[5].Hash[0x11];
  uVar13 = pFVar6[5].Hash[0x12];
  uVar14 = pFVar6[5].Hash[0x13];
  __return_storage_ptr__->field_0x70 = pFVar6[5].Hash[0xc];
  __return_storage_ptr__->field_0x71 = uVar8;
  __return_storage_ptr__->field_0x72 = uVar9;
  __return_storage_ptr__->field_0x73 = uVar10;
  __return_storage_ptr__->field_0x74 = uVar11;
  __return_storage_ptr__->field_0x75 = uVar12;
  __return_storage_ptr__->field_0x76 = uVar13;
  __return_storage_ptr__->field_0x77 = uVar14;
  *(FOpenGLLinkedProgram **)&__return_storage_ptr__->field_0x78 = *ppFVar2;
  puVar25 = ::operator_new(0x20);
  puVar29 = (undefined8 *)0x0;
  puVar27 = puVar29;
  if (puVar25 != (undefined8 *)0x0) {
    *puVar25 = 0;
    puVar25[1] = 0;
    puVar25[2] = 0;
    *(undefined4 *)(puVar25 + 3) = 0;
    puVar27 = puVar25;
  }
  *(undefined8 **)&__return_storage_ptr__->field_0x80 = puVar27;
  lVar3 = *(longlong *)&__return_storage_ptr__->field_0x78;
  if (*(int *)(*(longlong *)(lVar3 + 0x298) + 0x18) == 0) {
    pFVar26 = UE::OpenGL::GetProgramBinaryFromGLProgram(&local_28,*(uint *)(lVar3 + 0xc0));
    puVar27 = ::operator_new(0x20);
    if (puVar27 != (undefined8 *)0x0) {
      *puVar27 = 0;
      *puVar27 = (pFVar26->OwnedData).AllocatorInstance.Data;
      (pFVar26->OwnedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar27 + 1) = (pFVar26->OwnedData).ArrayNum;
      *(int *)((longlong)puVar27 + 0xc) = (pFVar26->OwnedData).ArrayMax;
      (pFVar26->OwnedData).ArrayNum = 0;
      (pFVar26->OwnedData).ArrayMax = 0;
      uVar5 = *(undefined8 *)&(pFVar26->DataView).ArrayNum;
      puVar27[2] = (pFVar26->DataView).DataPtr;
      puVar27[3] = uVar5;
      puVar29 = puVar27;
    }
    pFVar26 = *(FOpenGLProgramBinary **)&__return_storage_ptr__->field_0x80;
    *(undefined8 **)&__return_storage_ptr__->field_0x80 = puVar29;
    if (pFVar26 != (FOpenGLProgramBinary *)0x0) {
      FOpenGLProgramBinary::~FOpenGLProgramBinary(pFVar26);
      ::operator_delete(pFVar26,0x20);
    }
    FOpenGLProgramBinary::~FOpenGLProgramBinary(&local_28);
  }
  else {
    *(longlong *)&__return_storage_ptr__->field_0x80 = *(longlong *)(lVar3 + 0x298);
    *(undefined8 **)(lVar3 + 0x298) = puVar27;
    pTVar23 = CVarLRUKeepProgramBinaryResident.Ref;
    bVar24 = IsInParallelGameThread();
    if ((!bVar24) && (bVar24 = IsInGameThread(), !bVar24)) {
      puVar29 = (undefined8 *)&DAT_00000004;
    }
    if (((*(int *)((longlong)pTVar23->ShadowedValue + (longlong)puVar29) != 1) &&
        (0 < *(int *)(*(longlong *)&__return_storage_ptr__->field_0x80 + 8))) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("CVarLRUKeepProgramBinaryResident.GetValueOnAnyThread() == 1 || !CachedProgramBinary->IsOwned()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                            ,0x5e0,L""), bVar24)) {
      pcVar4 = (code *)swi(3);
      pTVar28 = (TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram> *)(*pcVar4)();
      return pTVar28;
    }
  }
  FOpenGLLinkedProgram::DeleteGLResources
            (*(FOpenGLLinkedProgram **)&__return_storage_ptr__->field_0x78);
  return __return_storage_ptr__;
}

