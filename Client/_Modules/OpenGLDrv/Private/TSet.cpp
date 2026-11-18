// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 69

// Emplace<TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FCacheEntry_*_const_&> @ 145bd8200

FSetElementId __thiscall
TSet<TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FCacheEntry_*,TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FKeyFuncs,FDefaultSetAllocator>
::Emplace<TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FCacheEntry_*_const_&>
          (TSet<TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FCacheEntry_*,TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FKeyFuncs,FDefaultSetAllocator>
           *this,FCacheEntry **param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  char *in_R9;
  undefined1 *puVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0x10);
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  puVar10 = &(this->Elements).field_0x8;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (undefined8 *)0x0) {
    *(undefined8 *)local_48.Pointer = *(undefined8 *)param_2;
    *(undefined4 *)((longlong)local_48.Pointer + 8) = 0xffffffff;
  }
  bVar11 = false;
  uVar5 = **(ulonglong **)local_48.Pointer;
  uVar4 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar9 = *(int *)puVar10;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  if ((iVar9 - iVar3 != 1) && (iVar9 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (**(ulonglong **)(lVar2 + (longlong)iVar9 * 0x10) == uVar5) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            *(ulonglong **)(lVar2 + (longlong)iVar9 * 0x10) = *(ulonglong **)local_48.Pointer;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(lVar2 + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)puVar10 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0xc) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 8) = *(undefined4 *)((longlong)FVar7 + uVar5 * 4)
      ;
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)param_1 = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*_const_&> @ 145bd8430

FSetElementId __thiscall
TSet<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*,TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FKeyFuncs,FDefaultSetAllocator>
::Emplace<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*_const_&>
          (TSet<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*,TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FKeyFuncs,FDefaultSetAllocator>
           *this,FCacheEntry **param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  FOpenGLProgramKey *pFVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  char *in_R9;
  undefined1 *puVar12;
  bool bVar13;
  FSparseArrayAllocationInfo local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar7 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x10);
    iVar7 = iVar7 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  puVar12 = &(this->Elements).field_0x8;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_c8,iVar5);
  if (local_c8.Pointer != (longlong *)0x0) {
    *(longlong *)local_c8.Pointer = *(longlong *)param_2;
    *(undefined4 *)((longlong)local_c8.Pointer + 8) = 0xffffffff;
  }
  puVar3 = *(undefined8 **)local_c8.Pointer;
  local_b8 = *puVar3;
  uStack_b0 = puVar3[1];
  local_a8 = puVar3[2];
  uStack_a0 = puVar3[3];
  local_98 = puVar3[4];
  uStack_90 = puVar3[5];
  local_88 = puVar3[6];
  uStack_80 = puVar3[7];
  local_78 = puVar3[8];
  uStack_70 = puVar3[9];
  local_68 = puVar3[10];
  uStack_60 = puVar3[0xb];
  local_58 = *(undefined4 *)(puVar3 + 0xc);
  uStack_54 = *(undefined4 *)((longlong)puVar3 + 100);
  uStack_50 = *(undefined4 *)(puVar3 + 0xd);
  uStack_4c = *(undefined4 *)((longlong)puVar3 + 0x6c);
  local_48 = puVar3[0xe];
  uVar6 = (*FCrc::MemCrc32Func)(&local_b8,0x78,0);
  bVar13 = false;
  if (*(int *)puVar12 - *(int *)&(this->Elements).field_0x34 != 1) {
    pFVar4 = *(FOpenGLProgramKey **)local_c8.Pointer;
    iVar7 = FindIndexByHash<FOpenGLProgramKey>(this,uVar6,pFVar4);
    bVar13 = iVar7 != -1;
    if (bVar13) {
      *(FOpenGLProgramKey **)(*(longlong *)&this->Elements + (longlong)iVar7 * 0x10) = pFVar4;
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_c8.Index,1);
      local_c8.Index = iVar7;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar9 = *(int *)puVar12 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)local_c8.Pointer + 0xc) = uVar6;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_c8.Pointer + 8) =
           *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
      *(int *)((longlong)FVar10 + uVar8 * 4) = local_c8.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)param_1 = local_c8.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<FOpenGLProgramKey_const_&> @ 145bd8680

FSetElementId __thiscall
TSet<FOpenGLProgramKey,DefaultKeyFuncs<FOpenGLProgramKey,0>,FDefaultSetAllocator>::
Emplace<FOpenGLProgramKey_const_&>
          (TSet<FOpenGLProgramKey,DefaultKeyFuncs<FOpenGLProgramKey,0>,FDefaultSetAllocator> *this,
          FOpenGLProgramKey *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ForElementType<FSetElementId> FVar13;
  int iVar14;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar14 = 1;
  if (iVar1 == 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x80,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar9 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar9 * 0x80 + 4 + lVar3);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x80 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<128,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<128,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar9);
  if (local_38.Pointer != (TSparseSetElement<FOpenGLProgramKey> *)0x0) {
    uVar7 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)local_38.Pointer = *(undefined8 *)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)((longlong)local_38.Pointer + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)((longlong)local_38.Pointer + 0x28) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)((longlong)local_38.Pointer + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)((longlong)local_38.Pointer + 0x38) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)((longlong)local_38.Pointer + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)((longlong)local_38.Pointer + 0x48) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)((longlong)local_38.Pointer + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)((longlong)local_38.Pointer + 0x58) = uVar7;
    uVar4 = *(undefined4 *)(param_2 + 100);
    uVar5 = *(undefined4 *)(param_2 + 0x68);
    uVar6 = *(undefined4 *)(param_2 + 0x6c);
    *(undefined4 *)((longlong)local_38.Pointer + 0x60) = *(undefined4 *)(param_2 + 0x60);
    *(undefined4 *)((longlong)local_38.Pointer + 100) = uVar4;
    *(undefined4 *)((longlong)local_38.Pointer + 0x68) = uVar5;
    *(undefined4 *)((longlong)local_38.Pointer + 0x6c) = uVar6;
    *(undefined8 *)((longlong)local_38.Pointer + 0x70) = *(undefined8 *)(param_2 + 0x70);
    *(undefined4 *)((longlong)local_38.Pointer + 0x78) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  uVar10 = (*FCrc::MemCrc32Func)(local_38.Pointer,0x78,0);
  bVar8 = TryReplaceExisting(this,uVar10,local_38.Pointer,local_res8,in_R9);
  if (!bVar8) {
    uVar12 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar12) {
      uVar11 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar12 < 1) || (iVar14 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & uVar10;
      *(uint *)((longlong)local_38.Pointer + 0x7c) = uVar10;
      FVar13 = (this->Hash).SecondaryData;
      if (FVar13 == (ForElementType<FSetElementId>)0x0) {
        FVar13 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar11 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      *(undefined4 *)((longlong)local_38.Pointer + 0x78) =
           *(undefined4 *)((longlong)FVar13 + uVar11 * 4);
      *(int *)((longlong)FVar13 + uVar11 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar14;
      Rehash(this);
    }
  }
  *(int *)param_1->ShaderHashes[0].Hash = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FOpenGLFramebufferKey_&&,unsigned_int_&&>_> @ 145bd8f80

FSetElementId __thiscall
TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FOpenGLFramebufferKey_&&,unsigned_int_&&>_>
          (TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FOpenGLFramebufferKey_&&,unsigned_int_&&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  FOpenGLTexture *pFVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ForElementType<FSetElementId> FVar13;
  int iVar14;
  char *in_R9;
  undefined1 *puVar15;
  bool bVar16;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar14 = 1;
  if (iVar10 == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xe0,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar8 * 0xe0 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0xe0 + lVar2) = 0xffffffff;
    }
  }
  puVar15 = &(this->Elements).field_0x8;
  TSparseArrayBase<224,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<224,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar8);
  if (local_48.Pointer != (FOpenGLFramebufferKey *)0x0) {
    puVar3 = *(undefined8 **)param_2;
    puVar4 = *(undefined4 **)(param_2 + 8);
    uVar5 = puVar3[1];
    (local_48.Pointer)->Texture = (FOpenGLTexture *)*puVar3;
    (local_48.Pointer)->Resource = (int)uVar5;
    (local_48.Pointer)->MipmapLevel = (int)((ulonglong)uVar5 >> 0x20);
    pFVar6 = (FOpenGLTexture *)puVar3[3];
    *(undefined8 *)&(local_48.Pointer)->ArrayIndex = puVar3[2];
    local_48.Pointer[1].Texture = pFVar6;
    uVar5 = puVar3[4];
    uVar7 = puVar3[5];
    local_48.Pointer[1].Resource = (int)uVar5;
    local_48.Pointer[1].MipmapLevel = (int)((ulonglong)uVar5 >> 0x20);
    *(undefined8 *)&local_48.Pointer[1].ArrayIndex = uVar7;
    uVar5 = puVar3[7];
    local_48.Pointer[2].Texture = (FOpenGLTexture *)puVar3[6];
    local_48.Pointer[2].Resource = (int)uVar5;
    local_48.Pointer[2].MipmapLevel = (int)((ulonglong)uVar5 >> 0x20);
    pFVar6 = (FOpenGLTexture *)puVar3[9];
    *(undefined8 *)&local_48.Pointer[2].ArrayIndex = puVar3[8];
    local_48.Pointer[3].Texture = pFVar6;
    uVar5 = puVar3[10];
    uVar7 = puVar3[0xb];
    local_48.Pointer[3].Resource = (int)uVar5;
    local_48.Pointer[3].MipmapLevel = (int)((ulonglong)uVar5 >> 0x20);
    *(undefined8 *)&local_48.Pointer[3].ArrayIndex = uVar7;
    uVar5 = puVar3[0xd];
    local_48.Pointer[4].Texture = (FOpenGLTexture *)puVar3[0xc];
    local_48.Pointer[4].Resource = (int)uVar5;
    local_48.Pointer[4].MipmapLevel = (int)((ulonglong)uVar5 >> 0x20);
    pFVar6 = (FOpenGLTexture *)puVar3[0xf];
    *(undefined8 *)&local_48.Pointer[4].ArrayIndex = puVar3[0xe];
    local_48.Pointer[5].Texture = pFVar6;
    uVar5 = puVar3[0x10];
    uVar7 = puVar3[0x11];
    local_48.Pointer[5].Resource = (int)uVar5;
    local_48.Pointer[5].MipmapLevel = (int)((ulonglong)uVar5 >> 0x20);
    *(undefined8 *)&local_48.Pointer[5].ArrayIndex = uVar7;
    uVar5 = puVar3[0x13];
    local_48.Pointer[6].Texture = (FOpenGLTexture *)puVar3[0x12];
    local_48.Pointer[6].Resource = (int)uVar5;
    local_48.Pointer[6].MipmapLevel = (int)((ulonglong)uVar5 >> 0x20);
    pFVar6 = (FOpenGLTexture *)puVar3[0x15];
    *(undefined8 *)&local_48.Pointer[6].ArrayIndex = puVar3[0x14];
    local_48.Pointer[7].Texture = pFVar6;
    uVar5 = puVar3[0x16];
    uVar7 = puVar3[0x17];
    local_48.Pointer[7].Resource = (int)uVar5;
    local_48.Pointer[7].MipmapLevel = (int)((ulonglong)uVar5 >> 0x20);
    *(undefined8 *)&local_48.Pointer[7].ArrayIndex = uVar7;
    uVar5 = puVar3[0x19];
    *(FOpenGLTexture **)((longlong)local_48.Pointer + 0xc0) = (FOpenGLTexture *)puVar3[0x18];
    *(undefined8 *)((longlong)local_48.Pointer + 200) = uVar5;
    *(undefined4 *)
     &((FOpenGLFramebufferKey *)((longlong)local_48.Pointer + 0xd0))->RenderTargets[0].Texture =
         *puVar4;
    ((FOpenGLFramebufferKey *)((longlong)local_48.Pointer + 0xd0))->RenderTargets[0].Resource =
         0xffffffff;
  }
  uVar9 = FCrc::MemCrc_DEPRECATED(local_48.Pointer,0xc0,0);
  bVar16 = false;
  uVar12 = ((uint)((ulonglong)*(FOpenGLTexture **)((longlong)local_48.Pointer + 0xc0) >> 0x14) &
            0xffff ^ (uint)((ulonglong)*(FOpenGLTexture **)((longlong)local_48.Pointer + 0xc0) >> 4)
           ) * -0x7a143595;
  uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
  uVar9 = uVar12 >> 0x10 ^ *(int *)((longlong)local_48.Pointer + 0xcc) ^
          *(uint *)((longlong)local_48.Pointer + 200) ^ uVar12 ^ uVar9;
  if (*(int *)puVar15 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar10 = FindIndexByHash<FOpenGLFramebufferKey>(this,uVar9,local_48.Pointer);
    bVar16 = iVar10 != -1;
    if (bVar16) {
      memmove((void *)((longlong)iVar10 * 0xe0 + *(longlong *)&this->Elements),local_48.Pointer,0xd8
             );
      TSparseArrayBase<224,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<224,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar10;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar16;
  }
  if (bVar16 == false) {
    uVar12 = *(int *)puVar15 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar12) {
      uVar11 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar12 < 1) || (iVar14 <= this->HashSize)) {
      uVar9 = this->HashSize - 1U & uVar9;
      ((FOpenGLFramebufferKey *)((longlong)local_48.Pointer + 0xd0))->RenderTargets[0].MipmapLevel =
           uVar9;
      FVar13 = (this->Hash).SecondaryData;
      if (FVar13 == (ForElementType<FSetElementId>)0x0) {
        FVar13 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar11 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      ((FOpenGLFramebufferKey *)((longlong)local_48.Pointer + 0xd0))->RenderTargets[0].Resource =
           *(uint *)((longlong)FVar13 + uVar11 * 4);
      *(int *)((longlong)FVar13 + uVar11 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar14;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FOpenGLProgramKey_&,TUniqueObj<FOpenGLProgramBinary>_&&>_> @ 145bd9230

FSetElementId __thiscall
TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FOpenGLProgramKey_&,TUniqueObj<FOpenGLProgramBinary>_&&>_>
          (TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FOpenGLProgramKey_&,TUniqueObj<FOpenGLProgramBinary>_&&> *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  TUniqueObj<FOpenGLProgramBinary> *pTVar4;
  FOpenGLProgramBinary *this_00;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  void *_Dst;
  char *in_R9;
  bool bVar9;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  if (iVar8 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x88,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar6 * 0x88 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x88 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar6);
  if (local_48.Pointer !=
      (TSparseSetElement<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>_> *)0x0) {
    puVar3 = *(undefined8 **)param_2;
    pTVar4 = *(TUniqueObj<FOpenGLProgramBinary> **)(param_2 + 8);
    uVar5 = puVar3[1];
    *(undefined8 *)local_48.Pointer = *puVar3;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = uVar5;
    uVar5 = puVar3[3];
    *(undefined8 *)((longlong)local_48.Pointer + 0x10) = puVar3[2];
    *(undefined8 *)((longlong)local_48.Pointer + 0x18) = uVar5;
    uVar5 = puVar3[5];
    *(undefined8 *)((longlong)local_48.Pointer + 0x20) = puVar3[4];
    *(undefined8 *)((longlong)local_48.Pointer + 0x28) = uVar5;
    uVar5 = puVar3[7];
    *(undefined8 *)((longlong)local_48.Pointer + 0x30) = puVar3[6];
    *(undefined8 *)((longlong)local_48.Pointer + 0x38) = uVar5;
    uVar5 = puVar3[9];
    *(undefined8 *)((longlong)local_48.Pointer + 0x40) = puVar3[8];
    *(undefined8 *)((longlong)local_48.Pointer + 0x48) = uVar5;
    uVar5 = puVar3[0xb];
    *(undefined8 *)((longlong)local_48.Pointer + 0x50) = puVar3[10];
    *(undefined8 *)((longlong)local_48.Pointer + 0x58) = uVar5;
    uVar5 = puVar3[0xd];
    *(undefined8 *)((longlong)local_48.Pointer + 0x60) = puVar3[0xc];
    *(undefined8 *)((longlong)local_48.Pointer + 0x68) = uVar5;
    *(undefined8 *)((longlong)local_48.Pointer + 0x70) = puVar3[0xe];
    TUniqueObj<FOpenGLProgramBinary>::TUniqueObj<FOpenGLProgramBinary>
              ((TUniqueObj<FOpenGLProgramBinary> *)((longlong)local_48.Pointer + 0x78),pTVar4);
    *(undefined4 *)((longlong)local_48.Pointer + 0x80) = 0xffffffff;
  }
  uVar7 = (*FCrc::MemCrc32Func)(local_48.Pointer,0x78,0);
  bVar9 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar8 = FindIndexByHash<FOpenGLProgramKey>(this,uVar7,local_48.Pointer);
    bVar9 = iVar8 != -1;
    if (bVar9) {
      _Dst = (void *)((longlong)iVar8 * 0x88 + *(longlong *)&this->Elements);
      this_00 = *(FOpenGLProgramBinary **)((longlong)_Dst + 0x78);
      if (this_00 != (FOpenGLProgramBinary *)0x0) {
        FOpenGLProgramBinary::~FOpenGLProgramBinary(this_00);
        ::operator_delete(this_00,0x20);
      }
      memmove(_Dst,local_48.Pointer,0x80);
      TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar8;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar9;
  }
  if (bVar9 == false) {
    RehashOrLink(this,uVar7,local_48.Pointer,local_48.Index);
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<unsigned_int_const_&,TTuple<unsigned_int,unsigned_int>_&&>_> @ 145bd9430

FSetElementId __thiscall
TSet<TTuple<unsigned_int,TTuple<unsigned_int,unsigned_int>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<unsigned_int,unsigned_int>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<unsigned_int_const_&,TTuple<unsigned_int,unsigned_int>_&&>_>
          (TSet<TTuple<unsigned_int,TTuple<unsigned_int,unsigned_int>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<unsigned_int,unsigned_int>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<unsigned_int_const_&,TTuple<unsigned_int,unsigned_int>_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *in_R9;
  bool bVar11;
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar9 = iVar9 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x14);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x14) = 0xffffffff;
    }
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (uint *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    *(uint *)local_38.Pointer = **(uint **)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 4) = *puVar3;
    *(uint *)((longlong)local_38.Pointer + 0xc) = 0xffffffff;
  }
  iVar9 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar10 = *(uint *)local_38.Pointer;
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar10) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar9 * 0x14) == uVar10) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            memmove((void *)(lVar2 + (longlong)iVar9 * 0x14),local_38.Pointer,0xc);
            TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(lVar2 + 0xc + (longlong)iVar9 * 0x14);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & uVar10;
      *(uint *)((longlong)local_38.Pointer + 0x10) = uVar10;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      *(uint *)((longlong)local_38.Pointer + 0xc) = *(uint *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<unsigned_int_const_&,TRefCountPtr<FOpenGLEUniformBufferData>_const_&>_> @ 145bd9640

FSetElementId __thiscall
TSet<TTuple<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<unsigned_int_const_&,TRefCountPtr<FOpenGLEUniformBufferData>_const_&>_>
          (TSet<TTuple<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<unsigned_int_const_&,TRefCountPtr<FOpenGLEUniformBufferData>_const_&>
                 *param_1,bool *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  char *in_R9;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar11 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar11 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar11 = iVar11 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar6);
  if (local_48.Pointer != (uint *)0x0) {
    plVar4 = *(longlong **)(param_2 + 8);
    *(uint *)local_48.Pointer = **(uint **)param_2;
    ((uint *)((longlong)local_48.Pointer + 8))[0] = 0;
    ((uint *)((longlong)local_48.Pointer + 8))[1] = 0;
    lVar3 = *plVar4;
    *(longlong *)((longlong)local_48.Pointer + 8) = lVar3;
    if (lVar3 != 0) {
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    }
    *(uint *)((longlong)local_48.Pointer + 0x10) = 0xffffffff;
  }
  iVar11 = *(int *)&(this->Elements).field_0x8;
  bVar13 = false;
  iVar6 = *(int *)&(this->Elements).field_0x34;
  uVar12 = *(uint *)local_48.Pointer;
  if ((iVar11 - iVar6 != 1) && (iVar11 != iVar6)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar11 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & uVar12) * 4);
    if (iVar11 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar11 * 0x18) == uVar12) {
          bVar13 = iVar11 != -1;
          if (bVar13) {
            puVar5 = *(undefined8 **)(lVar3 + 8 + (longlong)iVar11 * 0x18);
            if (puVar5 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar5 + 1);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                (**(code **)*puVar5)(puVar5,1);
              }
            }
            memmove((void *)(lVar3 + (longlong)iVar11 * 0x18),local_48.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar11;
          }
          break;
        }
        iVar11 = *(int *)(lVar3 + 0x10 + (longlong)iVar11 * 0x18);
      } while (iVar11 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= this->HashSize)) {
      uVar12 = this->HashSize - 1U & uVar12;
      *(uint *)((longlong)local_48.Pointer + 0x14) = uVar12;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar12;
      *(uint *)((longlong)local_48.Pointer + 0x10) = *(uint *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<void_*_const_&,PoolAllocation_*_const_&>_> @ 145bd9880

FSetElementId __thiscall
TSet<TTuple<void_*,PoolAllocation_*>,TDefaultMapHashableKeyFuncs<void_*,PoolAllocation_*,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<void_*_const_&,PoolAllocation_*_const_&>_>
          (TSet<TTuple<void_*,PoolAllocation_*>,TDefaultMapHashableKeyFuncs<void_*,PoolAllocation_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<void_*_const_&,PoolAllocation_*_const_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int iVar10;
  char *in_R9;
  undefined1 *puVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  puVar11 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (ulonglong *)0x0) {
    puVar3 = *(ulonglong **)(param_2 + 8);
    *(ulonglong *)local_48.Pointer = **(ulonglong **)param_2;
    *(ulonglong *)((longlong)local_48.Pointer + 8) = *puVar3;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = 0xffffffff;
  }
  uVar6 = *(ulonglong *)local_48.Pointer;
  bVar12 = false;
  uVar5 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar10 = *(int *)puVar11;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((iVar10 - iVar4 != 1) && (iVar10 != iVar4)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar10 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(ulonglong *)(lVar2 + (longlong)iVar10 * 0x18) == uVar6) {
          bVar12 = iVar10 != -1;
          if (bVar12) {
            memmove((void *)(lVar2 + (longlong)iVar10 * 0x18),local_48.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)(lVar2 + 0x10 + (longlong)iVar10 * 0x18);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar7 = *(int *)puVar11 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)local_48.Pointer + 0x14) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FGuid_const_&,TRefCountPtr<FOpenGLProgramBinaryMapping>_const_&>_> @ 145bd9ac0

FSetElementId __thiscall
TSet<TTuple<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FGuid_const_&,TRefCountPtr<FOpenGLProgramBinaryMapping>_const_&>_>
          (TSet<TTuple<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FGuid_const_&,TRefCountPtr<FOpenGLProgramBinaryMapping>_const_&>
                 *param_1,bool *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  ulong64 uVar9;
  void *_Dst;
  ulonglong uVar10;
  uint uVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  char *in_R9;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar13 = 1;
  if (iVar8 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar7 * 0x20 + 4 + lVar3);
    iVar8 = iVar8 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar7);
  if (local_48.Pointer != (FGuid *)0x0) {
    plVar4 = *(longlong **)(param_2 + 8);
    uVar6 = (*(undefined8 **)param_2)[1];
    *(undefined8 *)local_48.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = uVar6;
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->A = 0;
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->B = 0;
    lVar3 = *plVar4;
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->A = (int)lVar3;
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->B = (int)((ulonglong)lVar3 >> 0x20);
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->C = 0xffffffff;
  }
  uVar9 = CityHash64(local_48.Pointer,0x10);
  bVar14 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar8 = FindIndexByHash<FGuid>(this,(uint)uVar9,local_48.Pointer);
    bVar14 = iVar8 != -1;
    if (bVar14) {
      _Dst = (void *)(*(longlong *)&this->Elements + (longlong)iVar8 * 0x20);
      puVar5 = *(undefined8 **)((longlong)_Dst + 0x10);
      if (puVar5 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar5 + 1);
        LOCK();
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar7 == 1) && (piVar1 != (int *)0x0)) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
      memmove(_Dst,local_48.Pointer,0x18);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar8;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar11 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar11) {
      uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar13 <= this->HashSize)) {
      uVar11 = this->HashSize - 1U & (uint)uVar9;
      ((FGuid *)((longlong)local_48.Pointer + 0x10))->D = uVar11;
      FVar12 = (this->Hash).SecondaryData;
      if (FVar12 == (ForElementType<FSetElementId>)0x0) {
        FVar12 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar10 = (longlong)this->HashSize - 1U & (longlong)(int)uVar11;
      ((FGuid *)((longlong)local_48.Pointer + 0x10))->C = *(uint *)((longlong)FVar12 + uVar10 * 4);
      *(int *)((longlong)FVar12 + uVar10 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar13;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FOpenGLVertexDeclarationKey_const_&,TRefCountPtr<FRHIVertexDeclaration>_&&>_> @ 145bd9d00

FSetElementId __thiscall
TSet<TTuple<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>,TDefaultMapHashableKeyFuncs<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FOpenGLVertexDeclarationKey_const_&,TRefCountPtr<FRHIVertexDeclaration>_&&>_>
          (TSet<TTuple<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>,TDefaultMapHashableKeyFuncs<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FOpenGLVertexDeclarationKey_const_&,TRefCountPtr<FRHIVertexDeclaration>_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  uint uVar10;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x220,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x220 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x220 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<544,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<544,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_>
       *)0x0) {
    TPairInitializer<FOpenGLVertexDeclarationKey_const_&,TRefCountPtr<FRHIVertexDeclaration>_&&>::
    operator<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_TTuple<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>
              ((TPairInitializer<FOpenGLVertexDeclarationKey_const_&,TRefCountPtr<FRHIVertexDeclaration>_&&>
                *)param_2,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x218) = 0xffffffff;
  }
  uVar10 = *(uint *)((longlong)local_38.Pointer + 0x1e4);
  local_res8[0] = local_38.Index;
  bVar4 = TryReplaceExisting(this,uVar10,local_38.Pointer,local_res8,in_R9);
  if (!bVar4) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & uVar10;
      *(uint *)((longlong)local_38.Pointer + 0x21c) = uVar10;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      *(undefined4 *)((longlong)local_38.Pointer + 0x218) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FSamplerStateInitializerRHI_const_&,FOpenGLSamplerState_*_const_&>_> @ 145bd9e90

FSetElementId __thiscall
TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FSamplerStateInitializerRHI_const_&,FOpenGLSamplerState_*_const_&>_>
          (TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FSamplerStateInitializerRHI_const_&,FOpenGLSamplerState_*_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar13 = 1;
  if (iVar1 == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar8 * 0x30);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar8);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>_> *)0x0) {
    puVar4 = *(undefined8 **)param_2;
    puVar5 = *(undefined8 **)(param_2 + 8);
    uVar6 = puVar4[1];
    *(undefined8 *)local_38.Pointer = *puVar4;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = uVar6;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = puVar4[2];
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = *(undefined4 *)(puVar4 + 3);
    *(undefined8 *)((longlong)local_38.Pointer + 0x20) = *puVar5;
    *(undefined4 *)((longlong)local_38.Pointer + 0x28) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  uVar9 = ::GetTypeHash(local_38.Pointer);
  bVar7 = TryReplaceExisting(this,uVar9,local_38.Pointer,local_res8,in_R9);
  if (!bVar7) {
    uVar11 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar11) {
      uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar13 <= this->HashSize)) {
      uVar9 = this->HashSize - 1U & uVar9;
      *(uint *)((longlong)local_38.Pointer + 0x2c) = uVar9;
      FVar12 = (this->Hash).SecondaryData;
      if (FVar12 == (ForElementType<FSetElementId>)0x0) {
        FVar12 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar10 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      *(undefined4 *)((longlong)local_38.Pointer + 0x28) =
           *(undefined4 *)((longlong)FVar12 + uVar10 * 4);
      *(int *)((longlong)FVar12 + uVar10 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar13;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FOpenGLProgramKey_const_&,TUniqueObj<FOpenGLProgramBinary>_&&>_> @ 145bda040

FSetElementId __thiscall
TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FOpenGLProgramKey_const_&,TUniqueObj<FOpenGLProgramBinary>_&&>_>
          (TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FOpenGLProgramKey_const_&,TUniqueObj<FOpenGLProgramBinary>_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  TUniqueObj<FOpenGLProgramBinary> *pTVar4;
  FOpenGLProgramBinary *this_00;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  void *_Dst;
  char *in_R9;
  bool bVar9;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  if (iVar8 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x88,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar6 * 0x88 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x88 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar6);
  if (local_48.Pointer !=
      (TSparseSetElement<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>_> *)0x0) {
    puVar3 = *(undefined8 **)param_2;
    pTVar4 = *(TUniqueObj<FOpenGLProgramBinary> **)(param_2 + 8);
    uVar5 = puVar3[1];
    *(undefined8 *)local_48.Pointer = *puVar3;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = uVar5;
    uVar5 = puVar3[3];
    *(undefined8 *)((longlong)local_48.Pointer + 0x10) = puVar3[2];
    *(undefined8 *)((longlong)local_48.Pointer + 0x18) = uVar5;
    uVar5 = puVar3[5];
    *(undefined8 *)((longlong)local_48.Pointer + 0x20) = puVar3[4];
    *(undefined8 *)((longlong)local_48.Pointer + 0x28) = uVar5;
    uVar5 = puVar3[7];
    *(undefined8 *)((longlong)local_48.Pointer + 0x30) = puVar3[6];
    *(undefined8 *)((longlong)local_48.Pointer + 0x38) = uVar5;
    uVar5 = puVar3[9];
    *(undefined8 *)((longlong)local_48.Pointer + 0x40) = puVar3[8];
    *(undefined8 *)((longlong)local_48.Pointer + 0x48) = uVar5;
    uVar5 = puVar3[0xb];
    *(undefined8 *)((longlong)local_48.Pointer + 0x50) = puVar3[10];
    *(undefined8 *)((longlong)local_48.Pointer + 0x58) = uVar5;
    uVar5 = puVar3[0xd];
    *(undefined8 *)((longlong)local_48.Pointer + 0x60) = puVar3[0xc];
    *(undefined8 *)((longlong)local_48.Pointer + 0x68) = uVar5;
    *(undefined8 *)((longlong)local_48.Pointer + 0x70) = puVar3[0xe];
    TUniqueObj<FOpenGLProgramBinary>::TUniqueObj<FOpenGLProgramBinary>
              ((TUniqueObj<FOpenGLProgramBinary> *)((longlong)local_48.Pointer + 0x78),pTVar4);
    *(undefined4 *)((longlong)local_48.Pointer + 0x80) = 0xffffffff;
  }
  uVar7 = (*FCrc::MemCrc32Func)(local_48.Pointer,0x78,0);
  bVar9 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar8 = FindIndexByHash<FOpenGLProgramKey>(this,uVar7,local_48.Pointer);
    bVar9 = iVar8 != -1;
    if (bVar9) {
      _Dst = (void *)((longlong)iVar8 * 0x88 + *(longlong *)&this->Elements);
      this_00 = *(FOpenGLProgramBinary **)((longlong)_Dst + 0x78);
      if (this_00 != (FOpenGLProgramBinary *)0x0) {
        FOpenGLProgramBinary::~FOpenGLProgramBinary(this_00);
        ::operator_delete(this_00,0x20);
      }
      memmove(_Dst,local_48.Pointer,0x80);
      TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar8;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar9;
  }
  if (bVar9 == false) {
    RehashOrLink(this,uVar7,local_48.Pointer,local_48.Index);
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FOpenGLProgramKey_const_&,FGLProgramCacheLRU::FEvictedGLProgram_&&>_> @ 145bda240

FSetElementId __thiscall
TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FOpenGLProgramKey_const_&,FGLProgramCacheLRU::FEvictedGLProgram_&&>_>
          (TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FOpenGLProgramKey_const_&,FGLProgramCacheLRU::FEvictedGLProgram_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  FOpenGLProgramBinary *this_00;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *_Dst;
  char *in_R9;
  bool bVar6;
  FSparseArrayAllocationInfo local_48;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x90,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar5 = iVar5 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0x90);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x90) = 0xffffffff;
    }
  }
  TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer !=
      (TSparseSetElement<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>_> *)0x0) {
    TPairInitializer<FOpenGLProgramKey_const_&,FGLProgramCacheLRU::FEvictedGLProgram_&&>::
    operator<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>_TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>
              ((TPairInitializer<FOpenGLProgramKey_const_&,FGLProgramCacheLRU::FEvictedGLProgram_&&>
                *)param_2,local_48.Pointer);
    *(undefined4 *)((longlong)local_48.Pointer + 0x88) = 0xffffffff;
  }
  uVar4 = (*FCrc::MemCrc32Func)(local_48.Pointer,0x78,0);
  bVar6 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar5 = FindIndexByHash<FOpenGLProgramKey>(this,uVar4,local_48.Pointer);
    bVar6 = iVar5 != -1;
    if (bVar6) {
      _Dst = (void *)((longlong)iVar5 * 0x90 + *(longlong *)&this->Elements);
      this_00 = *(FOpenGLProgramBinary **)((longlong)_Dst + 0x80);
      if (this_00 != (FOpenGLProgramBinary *)0x0) {
        FOpenGLProgramBinary::~FOpenGLProgramBinary(this_00);
        ::operator_delete(this_00,0x20);
      }
      memmove(_Dst,local_48.Pointer,0x88);
      TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar5;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar6;
  }
  if (bVar6 == false) {
    RehashOrLink(this,uVar4,local_48.Pointer,local_48.Index);
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FOpenGLProgramKey_const_&,FOpenGLLinkedProgram_*_&>_> @ 145bda400

FSetElementId __thiscall
TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FOpenGLProgramKey_const_&,FOpenGLLinkedProgram_*_&>_>
          (TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FOpenGLProgramKey_const_&,FOpenGLLinkedProgram_*_&> *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  FOpenGLProgramBinary *this_00;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *_Dst;
  char *in_R9;
  bool bVar6;
  FSparseArrayAllocationInfo local_48;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x90,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar5 = iVar5 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0x90);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x90) = 0xffffffff;
    }
  }
  TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer !=
      (TSparseSetElement<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>_> *)0x0) {
    TPairInitializer<FOpenGLProgramKey_const_&,FOpenGLLinkedProgram_*_&>::
    operator<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>_TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>
              ((TPairInitializer<FOpenGLProgramKey_const_&,FOpenGLLinkedProgram_*_&> *)param_2,
               local_48.Pointer);
    *(undefined4 *)((longlong)local_48.Pointer + 0x88) = 0xffffffff;
  }
  uVar4 = (*FCrc::MemCrc32Func)(local_48.Pointer,0x78,0);
  bVar6 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar5 = FindIndexByHash<FOpenGLProgramKey>(this,uVar4,local_48.Pointer);
    bVar6 = iVar5 != -1;
    if (bVar6) {
      _Dst = (void *)((longlong)iVar5 * 0x90 + *(longlong *)&this->Elements);
      this_00 = *(FOpenGLProgramBinary **)((longlong)_Dst + 0x80);
      if (this_00 != (FOpenGLProgramBinary *)0x0) {
        FOpenGLProgramBinary::~FOpenGLProgramBinary(this_00);
        ::operator_delete(this_00,0x20);
      }
      memmove(_Dst,local_48.Pointer,0x88);
      TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar5;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar6;
  }
  if (bVar6 == false) {
    RehashOrLink(this,uVar4,local_48.Pointer,local_48.Index);
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FOpenGLProgramKey_const_&,FOpenGLLinkedProgram_*_const_&>_> @ 145bda5c0

FSetElementId __thiscall
TSet<TTuple<FOpenGLProgramKey,FOpenGLLinkedProgram_*>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLLinkedProgram_*,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FOpenGLProgramKey_const_&,FOpenGLLinkedProgram_*_const_&>_>
          (TSet<TTuple<FOpenGLProgramKey,FOpenGLLinkedProgram_*>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLLinkedProgram_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FOpenGLProgramKey_const_&,FOpenGLLinkedProgram_*_const_&> *param_1
          ,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  FOpenGLProgramKey *pFVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  ForElementType<FSetElementId> FVar15;
  int iVar16;
  char *in_R9;
  undefined1 *puVar17;
  bool bVar18;
  FSparseArrayAllocationInfo local_48;
  
  iVar12 = *(int *)&(this->Elements).field_0x34;
  iVar16 = 1;
  if (iVar12 == 0) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x88,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                        (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar10 = *(int *)&(this->Elements).field_0x30;
    iVar12 = iVar12 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar10 * 0x88 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x88 + lVar2) = 0xffffffff;
    }
  }
  puVar17 = &(this->Elements).field_0x8;
  TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar10);
  if (local_48.Pointer != (FOpenGLProgramKey *)0x0) {
    puVar3 = *(undefined8 **)param_2;
    puVar4 = *(undefined8 **)(param_2 + 8);
    uVar8 = puVar3[1];
    *(undefined8 *)(local_48.Pointer)->Hash = *puVar3;
    *(undefined8 *)((local_48.Pointer)->Hash + 8) = uVar8;
    uVar8 = puVar3[3];
    *(undefined8 *)((local_48.Pointer)->Hash + 0x10) = puVar3[2];
    *(undefined8 *)(local_48.Pointer[1].Hash + 4) = uVar8;
    uVar8 = puVar3[5];
    *(undefined8 *)(local_48.Pointer[1].Hash + 0xc) = puVar3[4];
    *(undefined8 *)local_48.Pointer[2].Hash = uVar8;
    uVar8 = puVar3[7];
    *(undefined8 *)(local_48.Pointer[2].Hash + 8) = puVar3[6];
    *(undefined8 *)(local_48.Pointer[2].Hash + 0x10) = uVar8;
    uVar8 = puVar3[9];
    *(undefined8 *)(local_48.Pointer[3].Hash + 4) = puVar3[8];
    *(undefined8 *)(local_48.Pointer[3].Hash + 0xc) = uVar8;
    uVar8 = puVar3[0xb];
    *(undefined8 *)local_48.Pointer[4].Hash = puVar3[10];
    *(undefined8 *)(local_48.Pointer[4].Hash + 8) = uVar8;
    uVar5 = *(undefined4 *)((longlong)puVar3 + 100);
    uVar6 = *(undefined4 *)(puVar3 + 0xd);
    uVar7 = *(undefined4 *)((longlong)puVar3 + 0x6c);
    *(undefined4 *)(local_48.Pointer[4].Hash + 0x10) = *(undefined4 *)(puVar3 + 0xc);
    *(undefined4 *)local_48.Pointer[5].Hash = uVar5;
    *(undefined4 *)(local_48.Pointer[5].Hash + 4) = uVar6;
    *(undefined4 *)(local_48.Pointer[5].Hash + 8) = uVar7;
    *(undefined8 *)(local_48.Pointer[5].Hash + 0xc) = puVar3[0xe];
    *(undefined8 *)((FOpenGLProgramKey *)((longlong)local_48.Pointer + 0x78))->ShaderHashes[0].Hash
         = *puVar4;
    pFVar9 = (FOpenGLProgramKey *)((longlong)local_48.Pointer + 0x78);
    pFVar9->ShaderHashes[0].Hash[8] = 0xff;
    pFVar9->ShaderHashes[0].Hash[9] = 0xff;
    pFVar9->ShaderHashes[0].Hash[10] = 0xff;
    pFVar9->ShaderHashes[0].Hash[0xb] = 0xff;
  }
  uVar11 = (*FCrc::MemCrc32Func)(local_48.Pointer,0x78,0);
  bVar18 = false;
  if (*(int *)puVar17 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar12 = FindIndexByHash<FOpenGLProgramKey>(this,uVar11,local_48.Pointer);
    bVar18 = iVar12 != -1;
    if (bVar18) {
      memmove((void *)((longlong)iVar12 * 0x88 + *(longlong *)&this->Elements),local_48.Pointer,0x80
             );
      TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar12;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar18;
  }
  if (bVar18 == false) {
    uVar14 = *(int *)puVar17 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar14) {
      uVar13 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar16 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar14 < 1) || (iVar16 <= this->HashSize)) {
      uVar11 = this->HashSize - 1U & uVar11;
      *(uint *)(((FOpenGLProgramKey *)((longlong)local_48.Pointer + 0x78))->ShaderHashes[0].Hash +
               0xc) = uVar11;
      FVar15 = (this->Hash).SecondaryData;
      if (FVar15 == (ForElementType<FSetElementId>)0x0) {
        FVar15 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar13 = (longlong)this->HashSize - 1U & (longlong)(int)uVar11;
      *(undefined4 *)
       (((FOpenGLProgramKey *)((longlong)local_48.Pointer + 0x78))->ShaderHashes[0].Hash + 8) =
           *(undefined4 *)((longlong)FVar15 + uVar13 * 4);
      *(int *)((longlong)FVar15 + uVar13 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar16;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_> @ 145bda800

FSetElementId __thiscall
TSet<TTuple<unsigned_int,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
          (TSet<TTuple<unsigned_int,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<unsigned_int_const_&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  void *_Dst;
  int *_Src;
  bool bVar10;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar2);
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer == (int *)0x0) {
    _Src = (int *)0x0;
  }
  else {
    iVar9 = **(int **)param_3;
    ((int *)((longlong)local_38.Pointer + 8))[0] = 0;
    ((int *)((longlong)local_38.Pointer + 8))[1] = 0;
    *(int *)local_38.Pointer = iVar9;
    ((int *)((longlong)local_38.Pointer + 0x10))[0] = 0;
    ((int *)((longlong)local_38.Pointer + 0x10))[1] = 0;
    *(int *)((longlong)local_38.Pointer + 0x18) = -1;
    _Src = local_38.Pointer;
  }
  iVar9 = *(int *)&(this->Elements).field_0x8;
  bVar10 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(int *)((longlong)iVar9 * 0x20 + lVar2) == *_Src) {
          bVar10 = iVar9 != -1;
          if (bVar10) {
            _Dst = (void *)((longlong)iVar9 * 0x20 + lVar2);
            pvVar3 = *(void **)((longlong)_Dst + 8);
            if (pvVar3 != (void *)0x0) {
              FMemory::Free(pvVar3);
            }
            memmove(_Dst,_Src,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + lVar2);
      } while (iVar9 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar10;
  }
  if (bVar10 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & (uint)param_2;
      _Src[7] = uVar6;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      _Src[6] = *(int *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<FOpenGLCompiledShaderKey_const_&>_> @ 145bdaa50

FSetElementId __thiscall
TSet<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FOpenGLCompiledShaderKey_const_&>_>
          (TSet<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FOpenGLCompiledShaderKey_const_&> *param_2,
          bool *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int local_res8 [2];
  bool *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x40 + 4 + lVar3);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>_> *)0x0) {
    TKeyInitializer<FOpenGLCompiledShaderKey_const_&>::
    operator<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>_TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>
              ((TKeyInitializer<FOpenGLCompiledShaderKey_const_&> *)param_3,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x38) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  bVar4 = TryReplaceExisting(this,(uint)param_2,local_38.Pointer,local_res8,in_stack_00000028);
  if (!bVar4) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 0x3c) = uVar7;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)((longlong)local_38.Pointer + 0x38) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_res8[0];
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<FOpenGLProgramKey_const_&>_> @ 145bdabe0

FSetElementId __thiscall
TSet<TTuple<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FOpenGLProgramKey_const_&>_>
          (TSet<TTuple<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FOpenGLProgramKey_const_&> *param_2,bool *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 in_register_00000014;
  TSparseSetElement<TTuple<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes>_> *pTVar10;
  int iVar11;
  ForElementType<FSetElementId> FVar12;
  int local_res8 [2];
  bool *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar1 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x98,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar7 * 0x98 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x98 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar7);
  if (local_38.Pointer ==
      (TSparseSetElement<TTuple<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes>_> *)0x0
     ) {
    pTVar10 = (TSparseSetElement<TTuple<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes>_>
               *)0x0;
  }
  else {
    puVar4 = *(undefined8 **)param_3;
    uVar5 = puVar4[1];
    *(undefined8 *)local_38.Pointer = *puVar4;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = uVar5;
    uVar5 = puVar4[3];
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = puVar4[2];
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = uVar5;
    uVar5 = puVar4[5];
    *(undefined8 *)((longlong)local_38.Pointer + 0x20) = puVar4[4];
    *(undefined8 *)((longlong)local_38.Pointer + 0x28) = uVar5;
    uVar5 = puVar4[7];
    *(undefined8 *)((longlong)local_38.Pointer + 0x30) = puVar4[6];
    *(undefined8 *)((longlong)local_38.Pointer + 0x38) = uVar5;
    uVar5 = puVar4[9];
    *(undefined8 *)((longlong)local_38.Pointer + 0x40) = puVar4[8];
    *(undefined8 *)((longlong)local_38.Pointer + 0x48) = uVar5;
    uVar5 = puVar4[0xb];
    *(undefined8 *)((longlong)local_38.Pointer + 0x50) = puVar4[10];
    *(undefined8 *)((longlong)local_38.Pointer + 0x58) = uVar5;
    uVar5 = puVar4[0xd];
    *(undefined8 *)((longlong)local_38.Pointer + 0x60) = puVar4[0xc];
    *(undefined8 *)((longlong)local_38.Pointer + 0x68) = uVar5;
    *(undefined8 *)((longlong)local_38.Pointer + 0x70) = puVar4[0xe];
    *(undefined8 *)((longlong)local_38.Pointer + 0x78) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x80) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x88) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x90) = 0xffffffff;
    pTVar10 = local_38.Pointer;
  }
  local_res8[0] = local_38.Index;
  bVar6 = TryReplaceExisting(this,(uint)param_2,pTVar10,local_res8,in_stack_00000028);
  if (!bVar6) {
    uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= this->HashSize)) {
      uVar9 = this->HashSize - 1U & (uint)param_2;
      *(uint *)&pTVar10->field_0x94 = uVar9;
      FVar12 = (this->Hash).SecondaryData;
      if (FVar12 == (ForElementType<FSetElementId>)0x0) {
        FVar12 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      *(undefined4 *)&pTVar10->field_0x90 = *(undefined4 *)((longlong)FVar12 + uVar8 * 4);
      *(int *)((longlong)FVar12 + uVar8 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_res8[0];
  return (FSetElementId)param_1;
}

// FindIndexByHash<FGuid> @ 145bdb9d0

int __thiscall
TSet<TTuple<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>,0>,FDefaultSetAllocator>
::FindIndexByHash<FGuid>
          (TSet<TTuple<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>,0>,FDefaultSetAllocator>
           *this,uint param_1,FGuid *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&this->Elements);
        if (((param_2->D == puVar2[3] && param_2->C == puVar2[2]) && param_2->B == puVar2[1]) &&
            param_2->A == *puVar2) {
          return uVar1;
        }
        uVar1 = puVar2[6];
      } while (uVar1 != 0xffffffff);
    }
  }
  return -1;
}

// FindIndexByHash<FOpenGLVertexDeclarationKey> @ 145bdba80

int __thiscall
TSet<TTuple<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>,TDefaultMapHashableKeyFuncs<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>,FDefaultSetAllocator>
::FindIndexByHash<FOpenGLVertexDeclarationKey>
          (TSet<TTuple<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>,TDefaultMapHashableKeyFuncs<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>,FDefaultSetAllocator>
           *this,uint param_1,FOpenGLVertexDeclarationKey *param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  FOpenGLVertexElement *pFVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar4 = *(uint *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (uVar4 != 0xffffffff) {
      lVar2 = *(longlong *)&this->Elements;
      uVar1 = (param_2->VertexElements).ArrayNum;
      do {
        pFVar5 = (FOpenGLVertexElement *)((longlong)(int)uVar4 * 0x220 + lVar2);
        if ((pFVar5[0x11].Type == uVar1) &&
           (bVar3 = CompareItems<FOpenGLVertexElement,int>
                              (pFVar5,(FOpenGLVertexElement *)param_2,pFVar5[0x11].Type), bVar3)) {
          return uVar4;
        }
        uVar4 = pFVar5[0x13].StreamIndex;
      } while (uVar4 != 0xffffffff);
    }
  }
  return -1;
}

// FindIndexByHash<FSamplerStateInitializerRHI> @ 145bdbb40

int __thiscall
TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
::FindIndexByHash<FSamplerStateInitializerRHI>
          (TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
           *this,uint param_1,FSamplerStateInitializerRHI *param_2)

{
  int iVar1;
  bool bVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x30 + 0x28 + *(longlong *)&this->Elements))
    {
      bVar2 = ::operator==((FSamplerStateInitializerRHI *)
                           (*(longlong *)&this->Elements + (longlong)iVar1 * 0x30),param_2);
      if (bVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<FOpenGLCompiledShaderKey> @ 145bdbbe0

int __thiscall
TSet<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>,FDefaultSetAllocator>
::FindIndexByHash<FOpenGLCompiledShaderKey>
          (TSet<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>,FDefaultSetAllocator>
           *this,uint param_1,FOpenGLCompiledShaderKey *param_2)

{
  uint *puVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar2 = *(uint *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar1 = (uint *)((longlong)(int)uVar2 * 0x40 + *(longlong *)&this->Elements);
        if (((*puVar1 == param_2->TypeEnum) && (puVar1[1] == param_2->CodeSize)) &&
           (puVar1[2] == param_2->CodeCRC)) {
          return uVar2;
        }
        uVar2 = puVar1[0xe];
      } while (uVar2 != 0xffffffff);
    }
  }
  return -1;
}

// FindIndexByHash<FOpenGLFramebufferKey> @ 145bdbc60

int __thiscall
TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
::FindIndexByHash<FOpenGLFramebufferKey>
          (TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
           *this,uint param_1,FOpenGLFramebufferKey *param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Buf1;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        _Buf1 = (void *)((longlong)iVar3 * 0xe0 + lVar1);
        iVar2 = memcmp(_Buf1,param_2,0xc0);
        if ((((iVar2 == 0) &&
             (*(FOpenGLTexture **)((longlong)_Buf1 + 0xc0) == param_2->DepthStencilTarget)) &&
            (*(uint *)((longlong)_Buf1 + 200) == param_2->DepthStencilAccessIndex)) &&
           (*(int *)((longlong)_Buf1 + 0xcc) == param_2->NumRenderingSamples)) {
          return iVar3;
        }
        iVar3 = *(int *)((longlong)_Buf1 + 0xd8);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FOpenGLProgramKey> @ 145bdbd30

int __thiscall
TSet<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*,TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FKeyFuncs,FDefaultSetAllocator>
::FindIndexByHash<FOpenGLProgramKey>
          (TSet<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*,TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FKeyFuncs,FDefaultSetAllocator>
           *this,uint param_1,FOpenGLProgramKey *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong local_108 [2];
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong local_88 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar5 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        local_88[0] = *(longlong *)param_2->ShaderHashes[0].Hash;
        local_88[1] = *(undefined8 *)(param_2->ShaderHashes[0].Hash + 8);
        uVar4 = 0;
        plVar1 = *(longlong **)(*(longlong *)&this->Elements + (longlong)iVar5 * 0x10);
        local_78 = *(undefined8 *)(param_2->ShaderHashes[0].Hash + 0x10);
        uStack_70 = *(undefined8 *)(param_2->ShaderHashes[1].Hash + 4);
        local_68 = *(undefined8 *)(param_2->ShaderHashes[1].Hash + 0xc);
        uStack_60 = *(undefined8 *)param_2->ShaderHashes[2].Hash;
        local_58 = *(undefined8 *)(param_2->ShaderHashes[2].Hash + 8);
        uStack_50 = *(undefined8 *)(param_2->ShaderHashes[2].Hash + 0x10);
        local_48 = *(undefined8 *)(param_2->ShaderHashes[3].Hash + 4);
        uStack_40 = *(undefined8 *)(param_2->ShaderHashes[3].Hash + 0xc);
        local_38 = *(undefined8 *)param_2->ShaderHashes[4].Hash;
        uStack_30 = *(undefined8 *)(param_2->ShaderHashes[4].Hash + 8);
        local_28 = *(undefined8 *)(param_2->ShaderHashes[4].Hash + 0x10);
        uStack_20 = *(undefined8 *)(param_2->ShaderHashes[5].Hash + 4);
        local_18 = *(undefined8 *)(param_2->ShaderHashes[5].Hash + 0xc);
        local_108[0] = *plVar1;
        local_108[1] = plVar1[1];
        local_f8 = plVar1[2];
        lStack_f0 = plVar1[3];
        local_e8 = plVar1[4];
        lStack_e0 = plVar1[5];
        local_d8 = plVar1[6];
        lStack_d0 = plVar1[7];
        local_c8 = plVar1[8];
        lStack_c0 = plVar1[9];
        local_b8 = plVar1[10];
        lStack_b0 = plVar1[0xb];
        bVar7 = true;
        local_a8 = plVar1[0xc];
        lStack_a0 = plVar1[0xd];
        local_98 = plVar1[0xe];
        do {
          if (!bVar7) goto LAB_145bdbe84;
          lVar2 = *(longlong *)((longlong)local_108 + uVar4 * 0x14) -
                  *(longlong *)((longlong)local_88 + uVar4 * 0x14);
          if ((lVar2 == 0) &&
             (lVar2 = *(longlong *)((longlong)local_108 + uVar4 * 0x14 + 8) -
                      *(longlong *)((longlong)local_88 + uVar4 * 0x14 + 8), lVar2 == 0)) {
            lVar2 = (ulonglong)*(uint *)((longlong)&local_f8 + uVar4 * 0x14) -
                    (ulonglong)*(uint *)((longlong)&local_78 + uVar4 * 0x14);
          }
          bVar7 = lVar2 == 0;
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
        } while (uVar3 < 6);
        if (bVar7) {
          return iVar5;
        }
LAB_145bdbe84:
        iVar5 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FOpenGLProgramKey> @ 145bdbec0

int __thiscall
TSet<TTuple<FOpenGLProgramKey,FOpenGLLinkedProgram_*>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLLinkedProgram_*,0>,FDefaultSetAllocator>
::FindIndexByHash<FOpenGLProgramKey>
          (TSet<TTuple<FOpenGLProgramKey,FOpenGLLinkedProgram_*>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLLinkedProgram_*,0>,FDefaultSetAllocator>
           *this,uint param_1,FOpenGLProgramKey *param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  bool bVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar6 != -1) {
      do {
        bVar7 = true;
        lVar4 = (longlong)iVar6 * 0x88 + *(longlong *)&this->Elements;
        uVar3 = 0;
        do {
          if (!bVar7) goto LAB_145bdbf4c;
          lVar1 = *(longlong *)(lVar4 + uVar3 * 0x14) -
                  *(longlong *)param_2->ShaderHashes[uVar3].Hash;
          if ((lVar1 == 0) &&
             (lVar1 = *(longlong *)(lVar4 + 8 + uVar3 * 0x14) -
                      *(longlong *)(param_2->ShaderHashes[uVar3].Hash + 8), lVar1 == 0)) {
            lVar1 = (ulonglong)*(uint *)(lVar4 + 0x10 + uVar3 * 0x14) -
                    (ulonglong)*(uint *)(param_2->ShaderHashes[uVar3].Hash + 0x10);
          }
          bVar7 = lVar1 == 0;
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
        } while (uVar2 < 6);
        if (bVar7) {
          return iVar6;
        }
LAB_145bdbf4c:
        iVar6 = *(int *)(lVar4 + 0x80);
      } while (iVar6 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FOpenGLProgramKey> @ 145bdbf80

int __thiscall
TSet<TTuple<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes,0>,FDefaultSetAllocator>
::FindIndexByHash<FOpenGLProgramKey>
          (TSet<TTuple<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes,0>,FDefaultSetAllocator>
           *this,uint param_1,FOpenGLProgramKey *param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  bool bVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar6 != -1) {
      do {
        bVar7 = true;
        lVar4 = (longlong)iVar6 * 0x98 + *(longlong *)&this->Elements;
        uVar3 = 0;
        do {
          if (!bVar7) goto LAB_145bdc00c;
          lVar1 = *(longlong *)(lVar4 + uVar3 * 0x14) -
                  *(longlong *)param_2->ShaderHashes[uVar3].Hash;
          if ((lVar1 == 0) &&
             (lVar1 = *(longlong *)(lVar4 + 8 + uVar3 * 0x14) -
                      *(longlong *)(param_2->ShaderHashes[uVar3].Hash + 8), lVar1 == 0)) {
            lVar1 = (ulonglong)*(uint *)(lVar4 + 0x10 + uVar3 * 0x14) -
                    (ulonglong)*(uint *)(param_2->ShaderHashes[uVar3].Hash + 0x10);
          }
          bVar7 = lVar1 == 0;
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
        } while (uVar2 < 6);
        if (bVar7) {
          return iVar6;
        }
LAB_145bdc00c:
        iVar6 = *(int *)(lVar4 + 0x90);
      } while (iVar6 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FOpenGLProgramKey> @ 145bdc040

int __thiscall
TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
::FindIndexByHash<FOpenGLProgramKey>
          (TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
           *this,uint param_1,FOpenGLProgramKey *param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  bool bVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar6 != -1) {
      do {
        bVar7 = true;
        lVar4 = (longlong)iVar6 * 0x88 + *(longlong *)&this->Elements;
        uVar3 = 0;
        do {
          if (!bVar7) goto LAB_145bdc0cc;
          lVar1 = *(longlong *)(lVar4 + uVar3 * 0x14) -
                  *(longlong *)param_2->ShaderHashes[uVar3].Hash;
          if ((lVar1 == 0) &&
             (lVar1 = *(longlong *)(lVar4 + 8 + uVar3 * 0x14) -
                      *(longlong *)(param_2->ShaderHashes[uVar3].Hash + 8), lVar1 == 0)) {
            lVar1 = (ulonglong)*(uint *)(lVar4 + 0x10 + uVar3 * 0x14) -
                    (ulonglong)*(uint *)(param_2->ShaderHashes[uVar3].Hash + 0x10);
          }
          bVar7 = lVar1 == 0;
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
        } while (uVar2 < 6);
        if (bVar7) {
          return iVar6;
        }
LAB_145bdc0cc:
        iVar6 = *(int *)(lVar4 + 0x80);
      } while (iVar6 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FOpenGLProgramKey> @ 145bdc100

int __thiscall
TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
::FindIndexByHash<FOpenGLProgramKey>
          (TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
           *this,uint param_1,FOpenGLProgramKey *param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  bool bVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar6 != -1) {
      do {
        bVar7 = true;
        lVar4 = (longlong)iVar6 * 0x90 + *(longlong *)&this->Elements;
        uVar3 = 0;
        do {
          if (!bVar7) goto LAB_145bdc18d;
          lVar1 = *(longlong *)(lVar4 + uVar3 * 0x14) -
                  *(longlong *)param_2->ShaderHashes[uVar3].Hash;
          if ((lVar1 == 0) &&
             (lVar1 = *(longlong *)(lVar4 + 8 + uVar3 * 0x14) -
                      *(longlong *)(param_2->ShaderHashes[uVar3].Hash + 8), lVar1 == 0)) {
            lVar1 = (ulonglong)*(uint *)(lVar4 + 0x10 + uVar3 * 0x14) -
                    (ulonglong)*(uint *)(param_2->ShaderHashes[uVar3].Hash + 0x10);
          }
          bVar7 = lVar1 == 0;
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
        } while (uVar2 < 6);
        if (bVar7) {
          return iVar6;
        }
LAB_145bdc18d:
        iVar6 = *(int *)(lVar4 + 0x88);
      } while (iVar6 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FOpenGLProgramKey> @ 145bdc1c0

int __thiscall
TSet<FOpenGLProgramKey,DefaultKeyFuncs<FOpenGLProgramKey,0>,FDefaultSetAllocator>::
FindIndexByHash<FOpenGLProgramKey>
          (TSet<FOpenGLProgramKey,DefaultKeyFuncs<FOpenGLProgramKey,0>,FDefaultSetAllocator> *this,
          uint param_1,FOpenGLProgramKey *param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  bool bVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar6 != -1) {
      do {
        bVar7 = true;
        lVar4 = (longlong)iVar6 * 0x80 + *(longlong *)&this->Elements;
        uVar3 = 0;
        do {
          if (!bVar7) goto LAB_145bdc24b;
          lVar1 = *(longlong *)(lVar4 + uVar3 * 0x14) -
                  *(longlong *)param_2->ShaderHashes[uVar3].Hash;
          if ((lVar1 == 0) &&
             (lVar1 = *(longlong *)(lVar4 + 8 + uVar3 * 0x14) -
                      *(longlong *)(param_2->ShaderHashes[uVar3].Hash + 8), lVar1 == 0)) {
            lVar1 = (ulonglong)*(uint *)(lVar4 + 0x10 + uVar3 * 0x14) -
                    (ulonglong)*(uint *)(param_2->ShaderHashes[uVar3].Hash + 0x10);
          }
          bVar7 = lVar1 == 0;
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
        } while (uVar2 < 6);
        if (bVar7) {
          return iVar6;
        }
LAB_145bdc24b:
        iVar6 = *(int *)(lVar4 + 0x78);
      } while (iVar6 != -1);
    }
  }
  return -1;
}

// RemoveImpl<unsigned_int> @ 145bdd060

int __thiscall
TSet<TTuple<unsigned_int,TTuple<unsigned_int,unsigned_int>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<unsigned_int,unsigned_int>,0>,FDefaultSetAllocator>
::RemoveImpl<unsigned_int>
          (TSet<TTuple<unsigned_int,TTuple<unsigned_int,unsigned_int>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<unsigned_int,unsigned_int>,0>,FDefaultSetAllocator>
           *this,uint param_1,uint *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  undefined1 *puVar9;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while (lVar7 = (longlong)(int)uVar6 * 0x14,
        *(uint *)(lVar7 + *(longlong *)&this->Elements) != *param_2) {
    uVar6 = *(uint *)(lVar7 + 0xc + *(longlong *)&this->Elements);
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->Elements).field_0x28)) {
    puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar9 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_145bdd147;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
LAB_145bdd147:
  FVar5 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + lVar7;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar7 + 0x10) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar8 = *(uint *)(lVar7 + 0xc);
      TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + ((longlong)(int)uVar1 * 5 + 3) * 4);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<unsigned_int> @ 145bdd1f0

int __thiscall
TSet<TTuple<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>,0>,FDefaultSetAllocator>
::RemoveImpl<unsigned_int>
          (TSet<TTuple<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>,0>,FDefaultSetAllocator>
           *this,uint param_1,uint *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  undefined1 *puVar9;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while (lVar7 = (longlong)(int)uVar6 * 0x18,
        *(uint *)(lVar7 + *(longlong *)&this->Elements) != *param_2) {
    uVar6 = *(uint *)(lVar7 + 0x10 + *(longlong *)&this->Elements);
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->Elements).field_0x28)) {
    puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar9 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_145bdd2d7;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
LAB_145bdd2d7:
  FVar5 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + lVar7;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar7 + 0x14) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar8 = *(uint *)(lVar7 + 0x10);
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar1 * 0x18 + 0x10);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<FOpenGLProgramKey> @ 145bdd380

int __thiscall
TSet<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*,TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FKeyFuncs,FDefaultSetAllocator>
::RemoveImpl<FOpenGLProgramKey>
          (TSet<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*,TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FKeyFuncs,FDefaultSetAllocator>
           *this,uint param_1,FOpenGLProgramKey *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  bool bVar12;
  longlong local_108 [2];
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong local_88 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar10 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4)
  ;
  if (uVar10 != 0xffffffff) {
    do {
      lVar8 = (longlong)(int)uVar10 * 0x10;
      local_88[0] = *(longlong *)param_2->ShaderHashes[0].Hash;
      local_88[1] = *(undefined8 *)(param_2->ShaderHashes[0].Hash + 8);
      uVar7 = 0;
      plVar1 = *(longlong **)(lVar8 + *(longlong *)&this->Elements);
      local_78 = *(undefined8 *)(param_2->ShaderHashes[0].Hash + 0x10);
      uStack_70 = *(undefined8 *)(param_2->ShaderHashes[1].Hash + 4);
      local_68 = *(undefined8 *)(param_2->ShaderHashes[1].Hash + 0xc);
      uStack_60 = *(undefined8 *)param_2->ShaderHashes[2].Hash;
      local_58 = *(undefined8 *)(param_2->ShaderHashes[2].Hash + 8);
      uStack_50 = *(undefined8 *)(param_2->ShaderHashes[2].Hash + 0x10);
      local_48 = *(undefined8 *)(param_2->ShaderHashes[3].Hash + 4);
      uStack_40 = *(undefined8 *)(param_2->ShaderHashes[3].Hash + 0xc);
      local_38 = *(undefined8 *)param_2->ShaderHashes[4].Hash;
      uStack_30 = *(undefined8 *)(param_2->ShaderHashes[4].Hash + 8);
      local_28 = *(undefined8 *)(param_2->ShaderHashes[4].Hash + 0x10);
      uStack_20 = *(undefined8 *)(param_2->ShaderHashes[5].Hash + 4);
      local_18 = *(undefined8 *)(param_2->ShaderHashes[5].Hash + 0xc);
      local_108[0] = *plVar1;
      local_108[1] = plVar1[1];
      local_f8 = plVar1[2];
      lStack_f0 = plVar1[3];
      local_e8 = plVar1[4];
      lStack_e0 = plVar1[5];
      local_d8 = plVar1[6];
      lStack_d0 = plVar1[7];
      local_c8 = plVar1[8];
      lStack_c0 = plVar1[9];
      local_b8 = plVar1[10];
      lStack_b0 = plVar1[0xb];
      bVar12 = true;
      local_a8 = plVar1[0xc];
      lStack_a0 = plVar1[0xd];
      local_98 = plVar1[0xe];
      do {
        if (!bVar12) goto LAB_145bdd4dc;
        lVar4 = *(longlong *)((longlong)local_108 + uVar7 * 0x14) -
                *(longlong *)((longlong)local_88 + uVar7 * 0x14);
        if ((lVar4 == 0) &&
           (lVar4 = *(longlong *)((longlong)local_108 + uVar7 * 0x14 + 8) -
                    *(longlong *)((longlong)local_88 + uVar7 * 0x14 + 8), lVar4 == 0)) {
          lVar4 = (ulonglong)*(uint *)((longlong)&local_f8 + uVar7 * 0x14) -
                  (ulonglong)*(uint *)((longlong)&local_78 + uVar7 * 0x14);
        }
        bVar12 = lVar4 == 0;
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < 6);
      if (bVar12) {
        if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)&(this->Elements).field_0x28)) {
          puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
          if (puVar11 == (undefined1 *)0x0) {
            puVar11 = &(this->Elements).field_0x10;
          }
          if ((*(uint *)(puVar11 +
                        (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4) >>
               (uVar10 & 0x1f) & 1) != 0) goto LAB_145bdd56d;
        }
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Elements.IsValidIndex(ElementIndex)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                            ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
        if (bVar12) {
          pcVar2 = (code *)swi(3);
          iVar3 = (*pcVar2)();
          return iVar3;
        }
LAB_145bdd56d:
        FVar5 = (this->Hash).SecondaryData;
        lVar8 = *(longlong *)&this->Elements + lVar8;
        if (FVar5 == (ForElementType<FSetElementId>)0x0) {
          FVar5 = (ForElementType<FSetElementId>)&this->Hash;
        }
        puVar9 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar8 + 0xc) * 4);
        while( true ) {
          uVar6 = *puVar9;
          if ((uVar6 == 0xffffffff) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NextElementIndex != INDEX_NONE",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                  ,0x2b5,L"Corrupt hash"), bVar12)) break;
          if (uVar6 == uVar10) {
            *puVar9 = *(uint *)(lVar8 + 8);
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,uVar10,1);
            return 1;
          }
          puVar9 = (uint *)(*(longlong *)&this->Elements + 8 + (longlong)(int)uVar6 * 0x10);
        }
        pcVar2 = (code *)swi(3);
        iVar3 = (*pcVar2)();
        return iVar3;
      }
LAB_145bdd4dc:
      uVar10 = *(uint *)(lVar8 + 8 + *(longlong *)&this->Elements);
    } while (uVar10 != 0xffffffff);
  }
  return 0;
}

// Find @ 145bff8c0

FCacheEntry ** __thiscall
TSet<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*,TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FKeyFuncs,FDefaultSetAllocator>
::Find(TSet<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*,TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FKeyFuncs,FDefaultSetAllocator>
       *this,FOpenGLProgramKey *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_88 = *(undefined8 *)param_1->ShaderHashes[0].Hash;
  uStack_80 = *(undefined8 *)(param_1->ShaderHashes[0].Hash + 8);
  local_78 = *(undefined8 *)(param_1->ShaderHashes[0].Hash + 0x10);
  uStack_70 = *(undefined8 *)(param_1->ShaderHashes[1].Hash + 4);
  local_68 = *(undefined8 *)(param_1->ShaderHashes[1].Hash + 0xc);
  uStack_60 = *(undefined8 *)param_1->ShaderHashes[2].Hash;
  local_58 = *(undefined8 *)(param_1->ShaderHashes[2].Hash + 8);
  uStack_50 = *(undefined8 *)(param_1->ShaderHashes[2].Hash + 0x10);
  local_48 = *(undefined8 *)(param_1->ShaderHashes[3].Hash + 4);
  uStack_40 = *(undefined8 *)(param_1->ShaderHashes[3].Hash + 0xc);
  local_38 = *(undefined8 *)param_1->ShaderHashes[4].Hash;
  uStack_30 = *(undefined8 *)(param_1->ShaderHashes[4].Hash + 8);
  local_28 = *(undefined4 *)(param_1->ShaderHashes[4].Hash + 0x10);
  uStack_24 = *(undefined4 *)param_1->ShaderHashes[5].Hash;
  uStack_20 = *(undefined4 *)(param_1->ShaderHashes[5].Hash + 4);
  uStack_1c = *(undefined4 *)(param_1->ShaderHashes[5].Hash + 8);
  local_18 = *(undefined8 *)(param_1->ShaderHashes[5].Hash + 0xc);
  uVar1 = (*FCrc::MemCrc32Func)(&local_88,0x78,0);
  iVar2 = FindIndexByHash<FOpenGLProgramKey>(this,uVar1,param_1);
  if (iVar2 != -1) {
    return (FCacheEntry **)((longlong)iVar2 * 0x10 + *(longlong *)&this->Elements);
  }
  return (FCacheEntry **)0x0;
}

// Find @ 145bff980

TTuple<FOpenGLFramebufferKey,unsigned_int> * __thiscall
TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
::Find(TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
       *this,FOpenGLFramebufferKey *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(param_1,0xc0,0);
  uVar3 = ((uint)((ulonglong)param_1->DepthStencilTarget >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->DepthStencilTarget >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  iVar2 = FindIndexByHash<FOpenGLFramebufferKey>
                    (this,uVar3 >> 0x10 ^ param_1->NumRenderingSamples ^
                          param_1->DepthStencilAccessIndex ^ uVar3 ^ uVar1,param_1);
  if (iVar2 != -1) {
    return (TTuple<FOpenGLFramebufferKey,unsigned_int> *)
           ((longlong)iVar2 * 0xe0 + *(longlong *)&this->Elements);
  }
  return (TTuple<FOpenGLFramebufferKey,unsigned_int> *)0x0;
}

// Rehash @ 145c26800

void __thiscall
TSet<TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FCacheEntry_*,TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FKeyFuncs,FDefaultSetAllocator>
::Rehash(TSet<TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FCacheEntry_*,TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FKeyFuncs,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  undefined8 *puVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_145c268dc;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_145c268dc:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (undefined8 *)
                 ((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*(ulonglong *)*puVar8 >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)*puVar8 >> 4)
                ) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0xc) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 145c269c0

void __thiscall
TSet<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*,TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FKeyFuncs,FDefaultSetAllocator>
::Rehash(TSet<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*,TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FKeyFuncs,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  longlong *plVar9;
  uint *puVar10;
  int local_d8;
  uint uStack_d4;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b0;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_d8 = 0;
    uStack_d4 = 1;
    iStack_c4 = 0;
    iStack_c0 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_b0.Array;
      }
      uVar5 = *puVar10;
      iStack_c0 = 0;
      local_d8 = 0;
      while (uVar5 == 0) {
        iStack_c0 = iStack_c0 + 0x20;
        lVar6 = (longlong)local_d8;
        local_d8 = local_d8 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_d8) goto LAB_145c26a97;
        uVar5 = puVar10[lVar6 + 1];
      }
      uStack_d4 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_d4 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_c4 = (int)lVar6 + -1 + iStack_c0;
      if (iVar2 < iStack_c4) {
LAB_145c26a97:
        iStack_c4 = iVar2;
      }
    }
    local_b0._padding_._0_4_ = local_d8;
    local_b0._padding_._4_4_ = uStack_d4;
    local_b0.UnvisitedBitMask = 0xffffffff;
    local_b0.CurrentBitIndex = iStack_c4;
    local_b0._28_4_ = uStack_bc;
    local_b0.BaseBitIndex = iStack_c0;
    if (iStack_c4 < iVar2) {
      do {
        iVar2 = local_b0.CurrentBitIndex;
        plVar9 = (longlong *)
                 (*(longlong *)&this->Elements + (longlong)local_b0.CurrentBitIndex * 0x10);
        puVar3 = (undefined8 *)*plVar9;
        local_88 = *puVar3;
        uStack_80 = puVar3[1];
        local_78 = puVar3[2];
        uStack_70 = puVar3[3];
        local_68 = puVar3[4];
        uStack_60 = puVar3[5];
        local_58 = puVar3[6];
        uStack_50 = puVar3[7];
        local_48 = puVar3[8];
        uStack_40 = puVar3[9];
        local_38 = puVar3[10];
        uStack_30 = puVar3[0xb];
        local_28 = *(undefined4 *)(puVar3 + 0xc);
        uStack_24 = *(undefined4 *)((longlong)puVar3 + 100);
        uStack_20 = *(undefined4 *)(puVar3 + 0xd);
        uStack_1c = *(undefined4 *)((longlong)puVar3 + 0x6c);
        local_18 = puVar3[0xe];
        uVar5 = (*FCrc::MemCrc32Func)(&local_88,0x78,0);
        uVar5 = *piVar1 - 1U & uVar5;
        *(uint *)((longlong)plVar9 + 0xc) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(plVar9 + 1) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_b0.UnvisitedBitMask = local_b0.UnvisitedBitMask & ~local_b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b0);
      } while (local_b0.CurrentBitIndex < (local_b0.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 145c26bb0

void __thiscall
TSet<TTuple<unsigned_int,TTuple<unsigned_int,unsigned_int>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<unsigned_int,unsigned_int>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<unsigned_int,TTuple<unsigned_int,unsigned_int>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<unsigned_int,unsigned_int>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_145c26c8c;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_145c26c8c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        uVar7 = *piVar1 - 1U &
                *(uint *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x14);
        lVar4 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x14;
        *(uint *)(lVar4 + 0x10) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 145c26d50

void __thiscall
TSet<TTuple<unsigned_int,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<unsigned_int,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_145c26e2c;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_145c26e2c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar7 = *piVar1 - 1U & *puVar8;
        puVar8[7] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[6] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 145c26ee0

void __thiscall
TSet<TTuple<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_145c26fbc;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_145c26fbc:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        uVar7 = *piVar1 - 1U &
                *(uint *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18);
        lVar4 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18;
        *(uint *)(lVar4 + 0x14) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 145c27080

void __thiscall
TSet<TTuple<void_*,PoolAllocation_*>,TDefaultMapHashableKeyFuncs<void_*,PoolAllocation_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<void_*,PoolAllocation_*>,TDefaultMapHashableKeyFuncs<void_*,PoolAllocation_*,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar4 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_145c2715c;
        uVar4 = puVar8[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_145c2715c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        lVar5 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18;
        uVar6 = *(ulonglong *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18);
        uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)(lVar5 + 0x14) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 145c27240

void __thiscall
TSet<TTuple<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FOpenGLProgramBinaryMapping>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  ulong64 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_30.Array;
      }
      uVar9 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_145c27317;
        uVar9 = puVar10[lVar5 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_145c27317:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        iVar2 = local_30.CurrentBitIndex;
        pcVar8 = (char *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x20);
        uVar4 = CityHash64(pcVar8,0x10);
        uVar9 = *piVar1 - 1U & (uint)uVar4;
        *(uint *)(pcVar8 + 0x1c) = uVar9;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(pcVar8 + 0x18) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 145c273e0

void __thiscall
TSet<TTuple<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>,TDefaultMapHashableKeyFuncs<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>,TDefaultMapHashableKeyFuncs<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_145c274bc;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_145c274bc:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        lVar4 = (longlong)local_30.CurrentBitIndex * 0x220 + *(longlong *)&this->Elements;
        uVar7 = *piVar1 - 1U & *(uint *)(lVar4 + 0x1e4);
        *(uint *)(lVar4 + 0x21c) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar4 + 0x218) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 145c27570

void __thiscall
TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FSamplerStateInitializerRHI *pFVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_145c27647;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_145c27647:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        iVar2 = local_30.CurrentBitIndex;
        pFVar8 = (FSamplerStateInitializerRHI *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x30);
        uVar4 = ::GetTypeHash(pFVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        pFVar8[1].MaxAnisotropy = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        pFVar8[1].MaxMipLevel = *(float *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 145c27700

void __thiscall
TSet<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_145c277dc;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_145c277dc:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0x40 + *(longlong *)&this->Elements);
        uVar7 = (puVar8[2] ^ puVar8[1] ^ *puVar8) & *piVar1 - 1U;
        puVar8[0xf] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[0xe] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 145c278a0

void __thiscall
TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  void *pvVar9;
  uint *puVar10;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_30.Array;
      }
      uVar4 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_145c27977;
        uVar4 = puVar10[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_145c27977:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        iVar2 = local_30.CurrentBitIndex;
        pvVar9 = (void *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0xe0);
        uVar4 = FCrc::MemCrc_DEPRECATED(pvVar9,0xc0,0);
        uVar7 = ((uint)(*(ulonglong *)((longlong)pvVar9 + 0xc0) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)((longlong)pvVar9 + 0xc0) >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar4 = (uVar7 >> 0x10 ^ *(uint *)((longlong)pvVar9 + 0xcc) ^
                 *(uint *)((longlong)pvVar9 + 200) ^ uVar7 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)pvVar9 + 0xdc) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)((longlong)pvVar9 + 0xd8) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
        *(int *)((longlong)FVar8 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 145c27a80

void __thiscall
TSet<TTuple<FOpenGLProgramKey,FOpenGLLinkedProgram_*>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLLinkedProgram_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FOpenGLProgramKey,FOpenGLLinkedProgram_*>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLLinkedProgram_*,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  void *pvVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_145c27b57;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_145c27b57:
        iStack_44 = iVar2;
      }
    }
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    if (iStack_44 < iVar2) {
      do {
        iVar2 = local_30.CurrentBitIndex;
        pvVar8 = (void *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x88);
        uVar4 = (*FCrc::MemCrc32Func)(pvVar8,0x78,0);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)pvVar8 + 0x84) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)((longlong)pvVar8 + 0x80) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 145c27c30

void __thiscall
TSet<TTuple<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  void *pvVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_145c27d07;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_145c27d07:
        iStack_44 = iVar2;
      }
    }
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    if (iStack_44 < iVar2) {
      do {
        iVar2 = local_30.CurrentBitIndex;
        pvVar8 = (void *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x98);
        uVar4 = (*FCrc::MemCrc32Func)(pvVar8,0x78,0);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)pvVar8 + 0x94) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)((longlong)pvVar8 + 0x90) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 145c27de0

void __thiscall
TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  void *pvVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_145c27eb7;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_145c27eb7:
        iStack_44 = iVar2;
      }
    }
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    if (iStack_44 < iVar2) {
      do {
        iVar2 = local_30.CurrentBitIndex;
        pvVar8 = (void *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x88);
        uVar4 = (*FCrc::MemCrc32Func)(pvVar8,0x78,0);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)pvVar8 + 0x84) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)((longlong)pvVar8 + 0x80) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 145c27f90

void __thiscall
TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  void *pvVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_145c28067;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_145c28067:
        iStack_44 = iVar2;
      }
    }
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    if (iStack_44 < iVar2) {
      do {
        iVar2 = local_30.CurrentBitIndex;
        pvVar8 = (void *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x90);
        uVar4 = (*FCrc::MemCrc32Func)(pvVar8,0x78,0);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)pvVar8 + 0x8c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)((longlong)pvVar8 + 0x88) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 145c28140

void __thiscall
TSet<FOpenGLProgramKey,DefaultKeyFuncs<FOpenGLProgramKey,0>,FDefaultSetAllocator>::Rehash
          (TSet<FOpenGLProgramKey,DefaultKeyFuncs<FOpenGLProgramKey,0>,FDefaultSetAllocator> *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  void *pvVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_145c28217;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_145c28217:
        iStack_44 = iVar2;
      }
    }
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    if (iStack_44 < iVar2) {
      do {
        iVar2 = local_30.CurrentBitIndex;
        pvVar8 = (void *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x80);
        uVar4 = (*FCrc::MemCrc32Func)(pvVar8,0x78,0);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)pvVar8 + 0x7c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)((longlong)pvVar8 + 0x78) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// RehashOrLink @ 145c282e0

void __thiscall
TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>_>
              *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar5 < 4) {
    iVar2 = 1;
  }
  else {
    uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)uVar5) && (this->HashSize < iVar2)) {
    this->HashSize = iVar2;
    Rehash(this);
    return;
  }
  uVar5 = this->HashSize - 1U & param_1;
  *(uint *)&param_2->field_0x84 = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x80 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RehashOrLink @ 145c28380

void __thiscall
TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>_>
              *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar5 < 4) {
    iVar2 = 1;
  }
  else {
    uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)uVar5) && (this->HashSize < iVar2)) {
    this->HashSize = iVar2;
    Rehash(this);
    return;
  }
  uVar5 = this->HashSize - 1U & param_1;
  *(uint *)&param_2->field_0x8c = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x88 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// Remove @ 145c29130

int __thiscall
TSet<TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FCacheEntry_*,TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FKeyFuncs,FDefaultSetAllocator>
::Remove(TSet<TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FCacheEntry_*,TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FKeyFuncs,FDefaultSetAllocator>
         *this,FOpenGLTexture *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  longlong lVar7;
  undefined1 *puVar8;
  uint *puVar9;
  
  if (*(int *)&(this->Elements).field_0x8 == *(int *)&(this->Elements).field_0x34) {
    return 0;
  }
  FVar6 = (this->Hash).SecondaryData;
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar5 = *(uint *)((longlong)FVar6 +
                   (((ulonglong)(uVar5 >> 0x10) ^ (longlong)(int)uVar5) &
                   (longlong)this->HashSize - 1U) * 4);
  if (uVar5 != 0xffffffff) {
    do {
      lVar7 = (longlong)(int)uVar5 * 0x10;
      if ((FOpenGLTexture *)**(longlong **)(lVar7 + *(longlong *)&this->Elements) == param_1) {
        if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)&(this->Elements).field_0x28)) {
          puVar8 = *(undefined1 **)&(this->Elements).field_0x20;
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = &(this->Elements).field_0x10;
          }
          if ((*(uint *)(puVar8 + (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4)
               >> (uVar5 & 0x1f) & 1) != 0) goto LAB_145c2923b;
        }
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Elements.IsValidIndex(ElementIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
LAB_145c2923b:
        FVar6 = (this->Hash).SecondaryData;
        lVar7 = *(longlong *)&this->Elements + lVar7;
        if (FVar6 == (ForElementType<FSetElementId>)0x0) {
          FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        }
        puVar9 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar7 + 0xc) * 4);
        while( true ) {
          uVar1 = *puVar9;
          if ((uVar1 == 0xffffffff) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash"), bVar3)) break;
          if (uVar1 == uVar5) {
            *puVar9 = *(uint *)(lVar7 + 8);
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,uVar5,1);
            return 1;
          }
          puVar9 = (uint *)(*(longlong *)&this->Elements + 8 + (longlong)(int)uVar1 * 0x10);
        }
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      uVar5 = *(uint *)(lVar7 + *(longlong *)&this->Elements + 8);
    } while (uVar5 != 0xffffffff);
  }
  return 0;
}

// RemoveByIndex @ 145c29bc0

void __thiscall
TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
::RemoveByIndex(TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
                *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  undefined1 *puVar6;
  int *piVar7;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->Elements).field_0x28)) {
    puVar6 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_145c29c32;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_145c29c32:
  FVar4 = (this->Hash).SecondaryData;
  lVar5 = (longlong)param_1 * 0xe0 + *(longlong *)&this->Elements;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  piVar7 = (int *)((longlong)FVar4 + (longlong)*(int *)(lVar5 + 0xdc) * 4);
  while( true ) {
    iVar1 = *piVar7;
    if (iVar1 == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iVar1 == param_1) break;
    piVar7 = (int *)(*(longlong *)&this->Elements + 0xd8 + (longlong)iVar1 * 0xe0);
  }
  *piVar7 = *(int *)(lVar5 + 0xd8);
  TSparseArrayBase<224,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<224,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,param_1,1);
  return;
}

// RemoveByIndex @ 145c29ce0

void __thiscall
TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
::RemoveByIndex(TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
                *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  undefined1 *puVar6;
  int *piVar7;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->Elements).field_0x28)) {
    puVar6 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_145c29d52;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_145c29d52:
  FVar4 = (this->Hash).SecondaryData;
  lVar5 = (longlong)param_1 * 0x88 + *(longlong *)&this->Elements;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  piVar7 = (int *)((longlong)FVar4 + (longlong)*(int *)(lVar5 + 0x84) * 4);
  while( true ) {
    iVar1 = *piVar7;
    if (iVar1 == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iVar1 == param_1) break;
    piVar7 = (int *)(*(longlong *)&this->Elements + 0x80 + (longlong)iVar1 * 0x88);
  }
  *piVar7 = *(int *)(lVar5 + 0x80);
  TSparseArray<TSparseSetElement<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this->Elements,param_1,1);
  TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,param_1,1);
  return;
}

// Reserve @ 145c2a1c0

void __thiscall
TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
::Reserve(TSet<TTuple<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>_>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,TUniqueObj<FOpenGLProgramBinary>,0>,FDefaultSetAllocator>
          *this,int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  if ((uint)(*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) <
      (uint)param_1) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)param_1);
    }
    TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,param_1);
    if ((uint)param_1 < 4) {
      iVar3 = 1;
    }
    else {
      uVar1 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar3 = 1 << ((byte)lVar2 & 0x1f);
    }
    if ((this->HashSize == 0) || (this->HashSize < iVar3)) {
      this->HashSize = iVar3;
      Rehash(this);
    }
  }
  return;
}

// Reserve @ 145c2a240

void __thiscall
TSet<FOpenGLProgramKey,DefaultKeyFuncs<FOpenGLProgramKey,0>,FDefaultSetAllocator>::Reserve
          (TSet<FOpenGLProgramKey,DefaultKeyFuncs<FOpenGLProgramKey,0>,FDefaultSetAllocator> *this,
          int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  if ((uint)(*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) <
      (uint)param_1) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)param_1);
    }
    TSparseArrayBase<128,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<128,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,param_1);
    if ((uint)param_1 < 4) {
      iVar3 = 1;
    }
    else {
      uVar1 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar3 = 1 << ((byte)lVar2 & 0x1f);
    }
    if ((this->HashSize == 0) || (this->HashSize < iVar3)) {
      this->HashSize = iVar3;
      Rehash(this);
    }
  }
  return;
}

// TryReplaceExisting @ 145c32f60

bool __thiscall
TSet<TTuple<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>,TDefaultMapHashableKeyFuncs<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>,TDefaultMapHashableKeyFuncs<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  FRHIResource *this_00;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  void *_Dst;
  uint uVar13;
  bool bVar14;
  
  bVar14 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar9 = FindIndexByHash<FOpenGLVertexDeclarationKey>
                      (this,param_1,(FOpenGLVertexDeclarationKey *)param_2);
    bVar14 = iVar9 != -1;
    if (bVar14) {
      _Dst = (void *)((longlong)iVar9 * 0x220 + *(longlong *)&this->Elements);
      this_00 = *(FRHIResource **)((longlong)_Dst + 0x210);
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_00);
      }
      memmove(_Dst,param_2,0x218);
      iVar3 = *param_3;
      puVar1 = &(this->Elements).field_0x10;
      lVar4 = *(longlong *)&this->Elements;
      bVar6 = (byte)iVar3 & 0x1f;
      uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
      lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      if (((*(uint *)(puVar12 + lVar2) & uVar13) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if (*(int *)&(this->Elements).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x220 + lVar4) = iVar3;
      }
      uVar10 = 0xffffffff;
      puVar11 = (undefined4 *)((longlong)iVar3 * 0x220 + lVar4);
      *puVar11 = 0xffffffff;
      if (0 < *(int *)&(this->Elements).field_0x34) {
        uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
      }
      puVar11[1] = uVar10;
      puVar12 = &(this->Elements).field_0x34;
      *(int *)puVar12 = *(int *)puVar12 + 1;
      *(int *)&(this->Elements).field_0x30 = iVar3;
      if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      *(uint *)(puVar12 + lVar2) = *(uint *)(puVar12 + lVar2) & ~uVar13;
      *param_3 = iVar9;
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// TryReplaceExisting @ 145c33140

bool __thiscall
TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>_> *param_2,
          int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  ForElementType<FSetElementId> FVar14;
  uint uVar15;
  
  iVar3 = *(int *)&(this->Elements).field_0x8;
  bVar8 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar3 - iVar4 != 1) && (iVar3 != iVar4)) {
    FVar14 = (this->Hash).SecondaryData;
    if (FVar14 == (ForElementType<FSetElementId>)0x0) {
      FVar14 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar3 = *(int *)((longlong)FVar14 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar3 != -1; iVar3 = *(int *)((longlong)iVar3 * 0x30 + 0x28 + *(longlong *)&this->Elements))
    {
      bVar8 = ::operator==((FSamplerStateInitializerRHI *)
                           (*(longlong *)&this->Elements + (longlong)iVar3 * 0x30),
                           (FSamplerStateInitializerRHI *)param_2);
      if (bVar8) {
        bVar8 = iVar3 != -1;
        if (bVar8) {
          memmove((void *)((longlong)iVar3 * 0x30 + *(longlong *)&this->Elements),param_2,0x28);
          iVar4 = *param_3;
          lVar5 = *(longlong *)&this->Elements;
          puVar1 = &(this->Elements).field_0x10;
          bVar7 = (byte)iVar4 & 0x1f;
          uVar15 = 1 << bVar7 | 1U >> 0x20 - bVar7;
          if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
          lVar2 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
          if (puVar12 == (undefined1 *)0x0) {
            puVar12 = puVar1;
          }
          if (((*(uint *)(puVar12 + lVar2) & uVar15) == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("AllocationFlags[Index]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                 ,0xc5,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          if (*(int *)&(this->Elements).field_0x34 != 0) {
            *(int *)(lVar5 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x30) = iVar4;
          }
          uVar11 = 0xffffffff;
          puVar13 = (undefined4 *)((longlong)iVar4 * 0x30 + lVar5);
          *puVar13 = 0xffffffff;
          if (0 < *(int *)&(this->Elements).field_0x34) {
            uVar11 = *(undefined4 *)&(this->Elements).field_0x30;
          }
          puVar13[1] = uVar11;
          puVar12 = &(this->Elements).field_0x34;
          *(int *)puVar12 = *(int *)puVar12 + 1;
          *(int *)&(this->Elements).field_0x30 = iVar4;
          if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
          if (puVar12 == (undefined1 *)0x0) {
            puVar12 = puVar1;
          }
          *(uint *)(puVar12 + lVar2) = *(uint *)(puVar12 + lVar2) & ~uVar15;
          *param_3 = iVar3;
        }
        goto LAB_145c331d0;
      }
    }
    bVar8 = false;
  }
LAB_145c331d0:
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar8;
  }
  return bVar8;
}

// TryReplaceExisting @ 145c33370

bool __thiscall
TSet<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>_> *param_2,
          int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  int *piVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  void *_Dst;
  uint uVar14;
  bool bVar15;
  
  iVar13 = *(int *)&(this->Elements).field_0x8;
  bVar15 = false;
  iVar8 = *(int *)&(this->Elements).field_0x34;
  if ((iVar13 - iVar8 != 1) && (iVar13 != iVar8)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar13 != -1) {
      do {
        piVar11 = (int *)((longlong)iVar13 * 0x40 + *(longlong *)&this->Elements);
        if (((*piVar11 == *(int *)param_2) && (piVar11[1] == *(int *)&param_2->field_0x4)) &&
           (piVar11[2] == *(int *)&param_2->field_0x8)) {
          bVar15 = iVar13 != -1;
          if (bVar15) {
            _Dst = (void *)((longlong)iVar13 * 0x40 + *(longlong *)&this->Elements);
            LOCK();
            FOpenGLCompiledShaderValue::StatTotalStoredSize =
                 (TAtomic<unsigned_int>)
                 ((int)FOpenGLCompiledShaderValue::StatTotalStoredSize -
                 *(int *)((longlong)_Dst + 0x28));
            UNLOCK();
            iVar8 = *(int *)((longlong)_Dst + 0x30);
            if (iVar8 == -1) {
              iVar8 = *(int *)((longlong)_Dst + 0x28);
            }
            LOCK();
            FOpenGLCompiledShaderValue::StatTotalUncompressedSize =
                 (TAtomic<unsigned_int>)
                 ((int)FOpenGLCompiledShaderValue::StatTotalUncompressedSize - iVar8);
            UNLOCK();
            if (*(void **)((longlong)_Dst + 0x20) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x20));
            }
            memmove(_Dst,param_2,0x38);
            iVar8 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar3 = *(longlong *)&this->Elements;
            bVar5 = (byte)iVar8 & 0x1f;
            uVar14 = 1 << bVar5 | 1U >> 0x20 - bVar5;
            if (((iVar8 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar8)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar2 = (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            if (((*(uint *)(puVar10 + lVar2) & uVar14) == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x40 + lVar3) = iVar8;
            }
            uVar9 = 0xffffffff;
            *(undefined4 *)((longlong)iVar8 * 0x40 + lVar3) = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar9 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            *(undefined4 *)((longlong)iVar8 * 0x40 + 4 + lVar3) = uVar9;
            puVar10 = &(this->Elements).field_0x34;
            *(int *)puVar10 = *(int *)puVar10 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar8;
            if (((iVar8 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar8)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar14;
            *param_3 = iVar13;
          }
          break;
        }
        iVar13 = piVar11[0xe];
      } while (iVar13 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// TryReplaceExisting @ 145c335e0

bool __thiscall
TSet<TTuple<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  bool bVar14;
  
  bVar14 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar9 = FindIndexByHash<FOpenGLProgramKey>(this,param_1,(FOpenGLProgramKey *)param_2);
    bVar14 = iVar9 != -1;
    if (bVar14) {
      memmove((void *)((longlong)iVar9 * 0x98 + *(longlong *)&this->Elements),param_2,0x90);
      iVar3 = *param_3;
      puVar1 = &(this->Elements).field_0x10;
      lVar4 = *(longlong *)&this->Elements;
      bVar6 = (byte)iVar3 & 0x1f;
      uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
      lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      if (((*(uint *)(puVar12 + lVar2) & uVar13) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if (*(int *)&(this->Elements).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x98 + lVar4) = iVar3;
      }
      uVar10 = 0xffffffff;
      puVar11 = (undefined4 *)((longlong)iVar3 * 0x98 + lVar4);
      *puVar11 = 0xffffffff;
      if (0 < *(int *)&(this->Elements).field_0x34) {
        uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
      }
      puVar11[1] = uVar10;
      puVar12 = &(this->Elements).field_0x34;
      *(int *)puVar12 = *(int *)puVar12 + 1;
      *(int *)&(this->Elements).field_0x30 = iVar3;
      if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      *(uint *)(puVar12 + lVar2) = *(uint *)(puVar12 + lVar2) & ~uVar13;
      *param_3 = iVar9;
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// TryReplaceExisting @ 145c337b0

bool __thiscall
TSet<FOpenGLProgramKey,DefaultKeyFuncs<FOpenGLProgramKey,0>,FDefaultSetAllocator>::
TryReplaceExisting(TSet<FOpenGLProgramKey,DefaultKeyFuncs<FOpenGLProgramKey,0>,FDefaultSetAllocator>
                   *this,uint param_1,TSparseSetElement<FOpenGLProgramKey> *param_2,int *param_3,
                  bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  uint uVar12;
  bool bVar13;
  
  bVar13 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar9 = FindIndexByHash<FOpenGLProgramKey>(this,param_1,(FOpenGLProgramKey *)param_2);
    bVar13 = iVar9 != -1;
    if (bVar13) {
      memmove((void *)((longlong)iVar9 * 0x80 + *(longlong *)&this->Elements),param_2,0x78);
      iVar3 = *param_3;
      puVar1 = &(this->Elements).field_0x10;
      lVar4 = *(longlong *)&this->Elements;
      bVar6 = (byte)iVar3 & 0x1f;
      uVar12 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
      lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = puVar1;
      }
      if (((*(uint *)(puVar11 + lVar2) & uVar12) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if (*(int *)&(this->Elements).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x80 + lVar4) = iVar3;
      }
      uVar10 = 0xffffffff;
      *(undefined4 *)((longlong)iVar3 * 0x80 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(this->Elements).field_0x34) {
        uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
      }
      *(undefined4 *)((longlong)iVar3 * 0x80 + 4 + lVar4) = uVar10;
      puVar11 = &(this->Elements).field_0x34;
      *(int *)puVar11 = *(int *)puVar11 + 1;
      *(int *)&(this->Elements).field_0x30 = iVar3;
      if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = puVar1;
      }
      *(uint *)(puVar11 + lVar2) = *(uint *)(puVar11 + lVar2) & ~uVar12;
      *param_3 = iVar9;
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar13;
  }
  return bVar13;
}

// UnhashElements @ 145c33bf0

void __thiscall
TSet<TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FCacheEntry_*,TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FKeyFuncs,FDefaultSetAllocator>
::UnhashElements(TSet<TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FCacheEntry_*,TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FKeyFuncs,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_145c33ceb;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_145c33ceb:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_145c33de0;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_145c33de0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0xc + (longlong)local_60.CurrentBitIndex * 0x10) * 4) =
         0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 145c33e80

void __thiscall
TSet<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*,TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FKeyFuncs,FDefaultSetAllocator>
::UnhashElements(TSet<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*,TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FKeyFuncs,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_145c33f7b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_145c33f7b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_145c34070;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_145c34070:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TPsoLruCache<FOpenGLProgramKey,FOpenGLLinkedProgram_*>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0xc + (longlong)local_60.CurrentBitIndex * 0x10) * 4) =
         0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 145c34110

void __thiscall
TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_145c3420b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_145c3420b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_145c34300;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_145c34300:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x2c + (longlong)local_60.CurrentBitIndex * 0x30) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 145c343a0

void __thiscall
TSet<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_145c3449b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_145c3449b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_145c34590;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_145c34590:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x40 + 0x3c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 145c34630

void __thiscall
TSet<TTuple<FOpenGLProgramKey,FOpenGLLinkedProgram_*>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLLinkedProgram_*,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FOpenGLProgramKey,FOpenGLLinkedProgram_*>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLLinkedProgram_*,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_145c3472b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_145c3472b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_145c34820;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_145c34820:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FOpenGLProgramKey,FOpenGLLinkedProgram_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x88 + 0x84 + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 145c348c0

void __thiscall
TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_145c349bb;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_145c349bb:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_145c34ab0;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_145c34ab0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FOpenGLProgramKey,FGLProgramCacheLRU::FEvictedGLProgram>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x8c + (longlong)local_60.CurrentBitIndex * 0x90) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 145c34b50

void __thiscall
TSet<FOpenGLProgramKey,DefaultKeyFuncs<FOpenGLProgramKey,0>,FDefaultSetAllocator>::UnhashElements
          (TSet<FOpenGLProgramKey,DefaultKeyFuncs<FOpenGLProgramKey,0>,FDefaultSetAllocator> *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_145c34c4b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_145c34c4b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_145c34d40;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_145c34d40:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<FOpenGLProgramKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x80 + 0x7c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

