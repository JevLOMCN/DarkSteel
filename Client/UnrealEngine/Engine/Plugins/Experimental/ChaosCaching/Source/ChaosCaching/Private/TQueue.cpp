// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 3

// Dequeue @ 14daeea00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TQueue<FPendingFrameWrite,1>::Dequeue
          (TQueue<FPendingFrameWrite,1> *this,FPendingFrameWrite *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [40];
  undefined1 local_130 [24];
  undefined8 uStack_118;
  void *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  void *local_f0;
  ulonglong local_e8;
  ForAnyElementType local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  undefined8 uStack_b8;
  void *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  void *local_90;
  ulonglong local_88;
  ForAnyElementType local_80;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> local_70;
  undefined8 uStack_50;
  undefined8 local_48;
  void *local_40;
  ulonglong local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar1 = this->Tail->NextNode;
  if (pTVar1 == (TNode *)0x0) {
    bVar6 = false;
  }
  else {
    FPendingFrameWrite::operator=(param_1,&pTVar1->Item);
    pTVar2 = this->Tail;
    this->Tail = pTVar1;
    local_158._0_8_ = 0;
    local_f8 = 0;
    local_130._16_8_ = 0;
    uStack_118 = 0;
    local_e8 = 0;
    local_d0._16_8_ = 0;
    uStack_b8 = 0;
    local_98 = 0;
    local_70.AllocatorInstance.InlineData[0] = '\0';
    local_70.AllocatorInstance.InlineData[1] = '\0';
    local_70.AllocatorInstance.InlineData[2] = '\0';
    local_70.AllocatorInstance.InlineData[3] = '\0';
    local_70.AllocatorInstance.InlineData[4] = '\0';
    local_70.AllocatorInstance.InlineData[5] = '\0';
    local_70.AllocatorInstance.InlineData[6] = '\0';
    local_70.AllocatorInstance.InlineData[7] = '\0';
    local_70.AllocatorInstance.InlineData[8] = '\0';
    local_70.AllocatorInstance.InlineData[9] = '\0';
    local_70.AllocatorInstance.InlineData[10] = '\0';
    local_70.AllocatorInstance.InlineData[0xb] = '\0';
    local_70.AllocatorInstance.InlineData[0xc] = '\0';
    local_70.AllocatorInstance.InlineData[0xd] = '\0';
    local_70.AllocatorInstance.InlineData[0xe] = '\0';
    local_70.AllocatorInstance.InlineData[0xf] = '\0';
    local_88 = 0;
    local_108._0_4_ = ___xmm_00000000ffffffff0000008000000000;
    local_108._4_4_ = _UNK_150631d94;
    uStack_100 = _UNK_150631d98;
    local_a8._0_4_ = ___xmm_00000000ffffffff0000008000000000;
    local_a8._4_4_ = _UNK_150631d94;
    uStack_a0 = _UNK_150631d98;
    local_70.NumBits = ___xmm_00000000ffffffff0000008000000000;
    local_70.MaxBits = _UNK_150631d94;
    uStack_50 = _UNK_150631d98;
    local_48 = 0;
    local_38 = 0;
    local_158._8_8_ = (FPendingParticleWrite *)0x0;
    local_158._16_4_ = 0;
    local_158._20_4_ = 0;
    local_158._24_8_ = (FScriptContainerElement *)0x0;
    local_158._32_4_ = 0;
    local_158._36_4_ = 0;
    local_130._0_8_ = (FScriptContainerElement *)0x0;
    local_130._8_8_ = 0;
    local_110 = (void *)0x0;
    local_f0 = (void *)0x0;
    local_e0.Data = (FScriptContainerElement *)0x0;
    local_d8._0_4_ = 0;
    local_d8._4_4_ = 0;
    local_d0._0_8_ = (FScriptContainerElement *)0x0;
    local_d0._8_8_ = 0;
    local_b0 = (void *)0x0;
    local_90 = (void *)0x0;
    local_80.Data = (FScriptContainerElement *)0x0;
    local_78 = 0;
    local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_40 = (void *)0x0;
    FPendingFrameWrite::operator=(&pTVar1->Item,(FPendingFrameWrite *)local_158);
    local_38 = local_38 & 0xffffffff00000000;
    if (local_40 != (void *)0x0) {
      FMemory::Free(local_40);
    }
    uVar4 = local_78 >> 0x20;
    local_78 = local_78 & 0xffffffff00000000;
    if ((int)uVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,0,&local_80,0,(int *)((longlong)&local_78 + 4));
    }
    iVar3 = local_70.MaxBits;
    uStack_50 = 0xffffffff;
    local_70._24_8_ = (ulonglong)(uint)local_70.MaxBits << 0x20;
    if (0x80 < (uint)iVar3) {
      local_70.NumBits = 0;
      local_70.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_70,0);
    }
    if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
    }
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
    local_88 = local_88 & 0xffffffff00000000;
    if (local_90 != (void *)0x0) {
      FMemory::Free(local_90);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_d0,0,local_d0._8_4_);
    iVar3 = SUB84(local_d0._8_8_,4);
    local_d0._8_8_ = local_d0._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_d0,0,(int *)(local_d0 + 0xc));
    }
    uVar5 = local_a8._4_4_;
    uStack_a0 = 0xffffffff;
    local_a8 = (ulonglong)local_a8._4_4_ << 0x20;
    if (0x80 < uVar5) {
      local_a8 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_d0 + 0x10),0);
    }
    if (local_b0 != (void *)0x0) {
      FMemory::Free(local_b0);
    }
    if ((FScriptContainerElement *)local_d0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_d0._0_8_);
    }
    if (local_e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data);
    }
    local_e8 = local_e8 & 0xffffffff00000000;
    if (local_f0 != (void *)0x0) {
      FMemory::Free(local_f0);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FCacheEventTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FCacheEventTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_130,0,local_130._8_4_);
    iVar3 = SUB84(local_130._8_8_,4);
    local_130._8_8_ = local_130._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,(ForAnyElementType *)local_130,0,(int *)(local_130 + 0xc));
    }
    uVar5 = local_108._4_4_;
    uStack_100 = 0xffffffff;
    local_108 = (ulonglong)local_108._4_4_ << 0x20;
    if (0x80 < uVar5) {
      local_108 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_130 + 0x10),0);
    }
    if (local_110 != (void *)0x0) {
      FMemory::Free(local_110);
    }
    if ((FScriptContainerElement *)local_130._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_130._0_8_);
    }
    if ((FScriptContainerElement *)local_158._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_158._24_8_);
    }
    DestructItems<FPendingParticleWrite,int>
              ((FPendingParticleWrite *)local_158._8_8_,local_158._16_4_);
    if ((FPendingParticleWrite *)local_158._8_8_ != (FPendingParticleWrite *)0x0) {
      FMemory::Free((void *)local_158._8_8_);
    }
    if (pTVar2 != (TNode *)0x0) {
      FPendingFrameWrite::~FPendingFrameWrite(&pTVar2->Item);
      ::operator_delete(pTVar2,0x130);
    }
    bVar6 = true;
  }
  return bVar6;
}

// Dequeue @ 14daeed30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TQueue<FPendingFrameWrite,0>::Dequeue
          (TQueue<FPendingFrameWrite,0> *this,FPendingFrameWrite *param_1)

{
  TNode *pTVar1;
  TNode *pTVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [40];
  undefined1 local_130 [24];
  undefined8 uStack_118;
  void *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  void *local_f0;
  ulonglong local_e8;
  ForAnyElementType local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  undefined8 uStack_b8;
  void *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  void *local_90;
  ulonglong local_88;
  ForAnyElementType local_80;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> local_70;
  undefined8 uStack_50;
  undefined8 local_48;
  void *local_40;
  ulonglong local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar1 = this->Tail->NextNode;
  if (pTVar1 == (TNode *)0x0) {
    bVar6 = false;
  }
  else {
    FPendingFrameWrite::operator=(param_1,&pTVar1->Item);
    pTVar2 = this->Tail;
    this->Tail = pTVar1;
    local_158._0_8_ = 0;
    local_f8 = 0;
    local_130._16_8_ = 0;
    uStack_118 = 0;
    local_e8 = 0;
    local_d0._16_8_ = 0;
    uStack_b8 = 0;
    local_98 = 0;
    local_70.AllocatorInstance.InlineData[0] = '\0';
    local_70.AllocatorInstance.InlineData[1] = '\0';
    local_70.AllocatorInstance.InlineData[2] = '\0';
    local_70.AllocatorInstance.InlineData[3] = '\0';
    local_70.AllocatorInstance.InlineData[4] = '\0';
    local_70.AllocatorInstance.InlineData[5] = '\0';
    local_70.AllocatorInstance.InlineData[6] = '\0';
    local_70.AllocatorInstance.InlineData[7] = '\0';
    local_70.AllocatorInstance.InlineData[8] = '\0';
    local_70.AllocatorInstance.InlineData[9] = '\0';
    local_70.AllocatorInstance.InlineData[10] = '\0';
    local_70.AllocatorInstance.InlineData[0xb] = '\0';
    local_70.AllocatorInstance.InlineData[0xc] = '\0';
    local_70.AllocatorInstance.InlineData[0xd] = '\0';
    local_70.AllocatorInstance.InlineData[0xe] = '\0';
    local_70.AllocatorInstance.InlineData[0xf] = '\0';
    local_88 = 0;
    local_108._0_4_ = ___xmm_00000000ffffffff0000008000000000;
    local_108._4_4_ = _UNK_150631d94;
    uStack_100 = _UNK_150631d98;
    local_a8._0_4_ = ___xmm_00000000ffffffff0000008000000000;
    local_a8._4_4_ = _UNK_150631d94;
    uStack_a0 = _UNK_150631d98;
    local_70.NumBits = ___xmm_00000000ffffffff0000008000000000;
    local_70.MaxBits = _UNK_150631d94;
    uStack_50 = _UNK_150631d98;
    local_48 = 0;
    local_38 = 0;
    local_158._8_8_ = (FPendingParticleWrite *)0x0;
    local_158._16_4_ = 0;
    local_158._20_4_ = 0;
    local_158._24_8_ = (FScriptContainerElement *)0x0;
    local_158._32_4_ = 0;
    local_158._36_4_ = 0;
    local_130._0_8_ = (FScriptContainerElement *)0x0;
    local_130._8_8_ = 0;
    local_110 = (void *)0x0;
    local_f0 = (void *)0x0;
    local_e0.Data = (FScriptContainerElement *)0x0;
    local_d8._0_4_ = 0;
    local_d8._4_4_ = 0;
    local_d0._0_8_ = (FScriptContainerElement *)0x0;
    local_d0._8_8_ = 0;
    local_b0 = (void *)0x0;
    local_90 = (void *)0x0;
    local_80.Data = (FScriptContainerElement *)0x0;
    local_78 = 0;
    local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_40 = (void *)0x0;
    FPendingFrameWrite::operator=(&pTVar1->Item,(FPendingFrameWrite *)local_158);
    local_38 = local_38 & 0xffffffff00000000;
    if (local_40 != (void *)0x0) {
      FMemory::Free(local_40);
    }
    uVar4 = local_78 >> 0x20;
    local_78 = local_78 & 0xffffffff00000000;
    if ((int)uVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,0,&local_80,0,(int *)((longlong)&local_78 + 4));
    }
    iVar3 = local_70.MaxBits;
    uStack_50 = 0xffffffff;
    local_70._24_8_ = (ulonglong)(uint)local_70.MaxBits << 0x20;
    if (0x80 < (uint)iVar3) {
      local_70.NumBits = 0;
      local_70.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_70,0);
    }
    if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
    }
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
    local_88 = local_88 & 0xffffffff00000000;
    if (local_90 != (void *)0x0) {
      FMemory::Free(local_90);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_d0,0,local_d0._8_4_);
    iVar3 = SUB84(local_d0._8_8_,4);
    local_d0._8_8_ = local_d0._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_d0,0,(int *)(local_d0 + 0xc));
    }
    uVar5 = local_a8._4_4_;
    uStack_a0 = 0xffffffff;
    local_a8 = (ulonglong)local_a8._4_4_ << 0x20;
    if (0x80 < uVar5) {
      local_a8 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_d0 + 0x10),0);
    }
    if (local_b0 != (void *)0x0) {
      FMemory::Free(local_b0);
    }
    if ((FScriptContainerElement *)local_d0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_d0._0_8_);
    }
    if (local_e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data);
    }
    local_e8 = local_e8 & 0xffffffff00000000;
    if (local_f0 != (void *)0x0) {
      FMemory::Free(local_f0);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FCacheEventTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FCacheEventTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_130,0,local_130._8_4_);
    iVar3 = SUB84(local_130._8_8_,4);
    local_130._8_8_ = local_130._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,(ForAnyElementType *)local_130,0,(int *)(local_130 + 0xc));
    }
    uVar5 = local_108._4_4_;
    uStack_100 = 0xffffffff;
    local_108 = (ulonglong)local_108._4_4_ << 0x20;
    if (0x80 < uVar5) {
      local_108 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_130 + 0x10),0);
    }
    if (local_110 != (void *)0x0) {
      FMemory::Free(local_110);
    }
    if ((FScriptContainerElement *)local_130._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_130._0_8_);
    }
    if ((FScriptContainerElement *)local_158._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_158._24_8_);
    }
    DestructItems<FPendingParticleWrite,int>
              ((FPendingParticleWrite *)local_158._8_8_,local_158._16_4_);
    if ((FPendingParticleWrite *)local_158._8_8_ != (FPendingParticleWrite *)0x0) {
      FMemory::Free((void *)local_158._8_8_);
    }
    if (pTVar2 != (TNode *)0x0) {
      FPendingFrameWrite::~FPendingFrameWrite(&pTVar2->Item);
      ::operator_delete(pTVar2,0x130);
    }
    bVar6 = true;
  }
  return bVar6;
}

// Empty @ 14daefc20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall TQueue<FPendingFrameWrite,0>::Empty(TQueue<FPendingFrameWrite,0> *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [40];
  undefined1 local_130 [24];
  undefined8 uStack_118;
  void *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  void *local_f0;
  ulonglong local_e8;
  ForAnyElementType local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  undefined8 uStack_b8;
  void *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  void *local_90;
  ulonglong local_88;
  ForAnyElementType local_80;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> local_70;
  undefined8 uStack_50;
  undefined8 local_48;
  void *local_40;
  ulonglong local_38;
  ulonglong local_28;
  
  uVar6 = _UNK_150631d98;
  uVar5 = ___xmm_00000000ffffffff0000008000000000;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  while (pTVar1 = this->Tail->NextNode, pTVar1 != (TNode *)0x0) {
    pTVar2 = this->Tail;
    this->Tail = pTVar1;
    local_158._0_8_ = 0;
    local_f8 = 0;
    local_130._16_8_ = 0;
    uStack_118 = 0;
    local_e8 = 0;
    local_d0._16_8_ = 0;
    uStack_b8 = 0;
    local_98 = 0;
    local_88 = 0;
    local_70.AllocatorInstance.InlineData[0] = '\0';
    local_70.AllocatorInstance.InlineData[1] = '\0';
    local_70.AllocatorInstance.InlineData[2] = '\0';
    local_70.AllocatorInstance.InlineData[3] = '\0';
    local_70.AllocatorInstance.InlineData[4] = '\0';
    local_70.AllocatorInstance.InlineData[5] = '\0';
    local_70.AllocatorInstance.InlineData[6] = '\0';
    local_70.AllocatorInstance.InlineData[7] = '\0';
    local_70.AllocatorInstance.InlineData[8] = '\0';
    local_70.AllocatorInstance.InlineData[9] = '\0';
    local_70.AllocatorInstance.InlineData[10] = '\0';
    local_70.AllocatorInstance.InlineData[0xb] = '\0';
    local_70.AllocatorInstance.InlineData[0xc] = '\0';
    local_70.AllocatorInstance.InlineData[0xd] = '\0';
    local_70.AllocatorInstance.InlineData[0xe] = '\0';
    local_70.AllocatorInstance.InlineData[0xf] = '\0';
    local_48 = 0;
    local_38 = 0;
    local_158._8_8_ = (FPendingParticleWrite *)0x0;
    local_158._16_4_ = 0;
    local_158._20_4_ = 0;
    local_158._24_8_ = (FScriptContainerElement *)0x0;
    local_158._32_4_ = 0;
    local_158._36_4_ = 0;
    local_130._0_8_ = (FScriptContainerElement *)0x0;
    local_130._8_8_ = 0;
    local_110 = (void *)0x0;
    local_108 = uVar5;
    uStack_100 = uVar6;
    local_f0 = (void *)0x0;
    local_e0.Data = (FScriptContainerElement *)0x0;
    local_d8._0_4_ = 0;
    local_d8._4_4_ = 0;
    local_d0._0_8_ = (FScriptContainerElement *)0x0;
    local_d0._8_8_ = 0;
    local_b0 = (void *)0x0;
    local_a8 = uVar5;
    uStack_a0 = uVar6;
    local_90 = (void *)0x0;
    local_80.Data = (FScriptContainerElement *)0x0;
    local_78 = 0;
    local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_70._24_8_ = uVar5;
    uStack_50 = uVar6;
    local_40 = (void *)0x0;
    FPendingFrameWrite::operator=(&pTVar1->Item,(FPendingFrameWrite *)local_158);
    local_38 = local_38 & 0xffffffff00000000;
    if (local_40 != (void *)0x0) {
      FMemory::Free(local_40);
    }
    uVar4 = local_78 >> 0x20;
    local_78 = local_78 & 0xffffffff00000000;
    if ((int)uVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,0,&local_80,0,(int *)((longlong)&local_78 + 4));
    }
    iVar3 = local_70.MaxBits;
    uStack_50 = 0xffffffff;
    local_70._24_8_ = (ulonglong)(uint)local_70.MaxBits << 0x20;
    if (0x80 < (uint)iVar3) {
      local_70.NumBits = 0;
      local_70.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_70,0);
    }
    if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
    }
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
    local_88 = local_88 & 0xffffffff00000000;
    if (local_90 != (void *)0x0) {
      FMemory::Free(local_90);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_d0,0,local_d0._8_4_);
    iVar3 = SUB84(local_d0._8_8_,4);
    local_d0._8_8_ = local_d0._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_d0,0,(int *)(local_d0 + 0xc));
    }
    uVar7 = local_a8._4_4_;
    uStack_a0 = 0xffffffff;
    local_a8 = (ulonglong)local_a8._4_4_ << 0x20;
    if (0x80 < uVar7) {
      local_a8 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_d0 + 0x10),0);
    }
    if (local_b0 != (void *)0x0) {
      FMemory::Free(local_b0);
    }
    if ((FScriptContainerElement *)local_d0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_d0._0_8_);
    }
    if (local_e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data);
    }
    local_e8 = local_e8 & 0xffffffff00000000;
    if (local_f0 != (void *)0x0) {
      FMemory::Free(local_f0);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FCacheEventTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FCacheEventTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_130,0,local_130._8_4_);
    iVar3 = SUB84(local_130._8_8_,4);
    local_130._8_8_ = local_130._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,(ForAnyElementType *)local_130,0,(int *)(local_130 + 0xc));
    }
    uVar7 = local_108._4_4_;
    uStack_100 = 0xffffffff;
    local_108 = (ulonglong)local_108._4_4_ << 0x20;
    if (0x80 < uVar7) {
      local_108 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_130 + 0x10),0);
    }
    if (local_110 != (void *)0x0) {
      FMemory::Free(local_110);
    }
    if ((FScriptContainerElement *)local_130._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_130._0_8_);
    }
    if ((FScriptContainerElement *)local_158._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_158._24_8_);
    }
    DestructItems<FPendingParticleWrite,int>
              ((FPendingParticleWrite *)local_158._8_8_,local_158._16_4_);
    if ((FPendingParticleWrite *)local_158._8_8_ != (FPendingParticleWrite *)0x0) {
      FMemory::Free((void *)local_158._8_8_);
    }
    if (pTVar2 != (TNode *)0x0) {
      FPendingFrameWrite::~FPendingFrameWrite(&pTVar2->Item);
      ::operator_delete(pTVar2,0x130);
    }
  }
  return;
}

