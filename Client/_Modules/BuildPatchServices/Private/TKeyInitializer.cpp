// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 10

// operator<int,BuildPatchServices::TBlockData<unsigned_char>_>_TTuple<int,BuildPatchServices::TBlockData<unsigned_char>_> @ 1431a91c0

TTuple<int,BuildPatchServices::TBlockData<unsigned_char>_> * __thiscall
TKeyInitializer<int_&&>::
operator<int,BuildPatchServices::TBlockData<unsigned_char>_>_TTuple<int,BuildPatchServices::TBlockData<unsigned_char>_>
          (TKeyInitializer<int_&&> *this,
          TTuple<int,BuildPatchServices::TBlockData<unsigned_char>_> *__return_storage_ptr__)

{
  FBlockStructure local_28;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_28.Head = (FBlockEntry *)0x0;
  local_28.Tail = (FBlockEntry *)0x0;
  local_18 = 0;
  uStack_10 = 0;
  BuildPatchServices::FBlockStructure::FBlockStructure(&local_28);
  local_18 = 0;
  uStack_10 = 0;
  *(int *)__return_storage_ptr__ = *this->Key;
  BuildPatchServices::FBlockStructure::FBlockStructure
            ((FBlockStructure *)&__return_storage_ptr__->field_0x8,&local_28);
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = local_18;
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = (undefined4)uStack_10;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = uStack_10._4_4_;
  uStack_10 = 0;
  local_18 = 0;
  BuildPatchServices::FBlockStructure::~FBlockStructure(&local_28);
  return __return_storage_ptr__;
}

// operator<int,BuildPatchServices::TBlockData<unsigned_char>_>_TTuple<int,BuildPatchServices::TBlockData<unsigned_char>_> @ 1431a9260

TTuple<int,BuildPatchServices::TBlockData<unsigned_char>_> * __thiscall
TKeyInitializer<int_const_&>::
operator<int,BuildPatchServices::TBlockData<unsigned_char>_>_TTuple<int,BuildPatchServices::TBlockData<unsigned_char>_>
          (TKeyInitializer<int_const_&> *this,
          TTuple<int,BuildPatchServices::TBlockData<unsigned_char>_> *__return_storage_ptr__)

{
  FBlockStructure local_28;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_28.Head = (FBlockEntry *)0x0;
  local_28.Tail = (FBlockEntry *)0x0;
  local_18 = 0;
  uStack_10 = 0;
  BuildPatchServices::FBlockStructure::FBlockStructure(&local_28);
  local_18 = 0;
  uStack_10 = 0;
  *(int *)__return_storage_ptr__ = *this->Key;
  BuildPatchServices::FBlockStructure::FBlockStructure
            ((FBlockStructure *)&__return_storage_ptr__->field_0x8,&local_28);
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = local_18;
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = (undefined4)uStack_10;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = uStack_10._4_4_;
  uStack_10 = 0;
  local_18 = 0;
  BuildPatchServices::FBlockStructure::~FBlockStructure(&local_28);
  return __return_storage_ptr__;
}

// operator<FGuid,BuildPatchServices::FChunkInfo>_TTuple<FGuid,BuildPatchServices::FChunkInfo> @ 1431a9300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FGuid,BuildPatchServices::FChunkInfo> * __thiscall
TKeyInitializer<FGuid_const_&>::
operator<FGuid,BuildPatchServices::FChunkInfo>_TTuple<FGuid,BuildPatchServices::FChunkInfo>
          (TKeyInitializer<FGuid_const_&> *this,
          TTuple<FGuid,BuildPatchServices::FChunkInfo> *__return_storage_ptr__)

{
  FGuid *pFVar1;
  undefined8 uVar2;
  long64 lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  undefined4 uVar15;
  FChunkInfo *pFVar16;
  undefined1 auStack_78 [32];
  FChunkInfo local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pFVar16 = BuildPatchServices::FChunkInfo::FChunkInfo(&local_58);
  pFVar1 = this->Key;
  uVar4 = pFVar1->B;
  uVar5 = pFVar1->C;
  uVar6 = pFVar1->D;
  *(uint *)&__return_storage_ptr__->field_0x0 = pFVar1->A;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar4;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar5;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar6;
  uVar4 = (pFVar16->Guid).B;
  uVar5 = (pFVar16->Guid).C;
  uVar6 = (pFVar16->Guid).D;
  *(uint *)&__return_storage_ptr__->field_0x10 = (pFVar16->Guid).A;
  *(uint *)&__return_storage_ptr__->field_0x14 = uVar4;
  *(uint *)&__return_storage_ptr__->field_0x18 = uVar5;
  *(uint *)&__return_storage_ptr__->field_0x1c = uVar6;
  uVar7 = (pFVar16->ShaHash).Hash[0];
  uVar8 = (pFVar16->ShaHash).Hash[1];
  uVar9 = (pFVar16->ShaHash).Hash[2];
  uVar10 = (pFVar16->ShaHash).Hash[3];
  uVar11 = (pFVar16->ShaHash).Hash[4];
  uVar12 = (pFVar16->ShaHash).Hash[5];
  uVar13 = (pFVar16->ShaHash).Hash[6];
  uVar14 = (pFVar16->ShaHash).Hash[7];
  *(ulong64 *)&__return_storage_ptr__->field_0x20 = pFVar16->Hash;
  __return_storage_ptr__->field_0x28 = uVar7;
  __return_storage_ptr__->field_0x29 = uVar8;
  __return_storage_ptr__->field_0x2a = uVar9;
  __return_storage_ptr__->field_0x2b = uVar10;
  __return_storage_ptr__->field_0x2c = uVar11;
  __return_storage_ptr__->field_0x2d = uVar12;
  __return_storage_ptr__->field_0x2e = uVar13;
  __return_storage_ptr__->field_0x2f = uVar14;
  uVar7 = (pFVar16->ShaHash).Hash[9];
  uVar8 = (pFVar16->ShaHash).Hash[10];
  uVar9 = (pFVar16->ShaHash).Hash[0xb];
  uVar10 = (pFVar16->ShaHash).Hash[0xc];
  uVar11 = (pFVar16->ShaHash).Hash[0xd];
  uVar12 = (pFVar16->ShaHash).Hash[0xe];
  uVar13 = (pFVar16->ShaHash).Hash[0xf];
  uVar2 = *(undefined8 *)((pFVar16->ShaHash).Hash + 0x10);
  __return_storage_ptr__->field_0x30 = (pFVar16->ShaHash).Hash[8];
  __return_storage_ptr__->field_0x31 = uVar7;
  __return_storage_ptr__->field_0x32 = uVar8;
  __return_storage_ptr__->field_0x33 = uVar9;
  __return_storage_ptr__->field_0x34 = uVar10;
  __return_storage_ptr__->field_0x35 = uVar11;
  __return_storage_ptr__->field_0x36 = uVar12;
  __return_storage_ptr__->field_0x37 = uVar13;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = uVar2;
  uVar15 = *(undefined4 *)&pFVar16->field_0x34;
  lVar3 = pFVar16->FileSize;
  *(uint *)&__return_storage_ptr__->field_0x40 = pFVar16->WindowSize;
  *(undefined4 *)&__return_storage_ptr__->field_0x44 = uVar15;
  *(long64 *)&__return_storage_ptr__->field_0x48 = lVar3;
  return __return_storage_ptr__;
}

// operator<FGuid,FRequestInfo>_TTuple<FGuid,FRequestInfo> @ 1431a9380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FGuid,FRequestInfo> * __thiscall
TKeyInitializer<FGuid_const_&>::operator<FGuid,FRequestInfo>_TTuple<FGuid,FRequestInfo>
          (TKeyInitializer<FGuid_const_&> *this,TTuple<FGuid,FRequestInfo> *__return_storage_ptr__)

{
  FGuid *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_a8 [32];
  FRequestInfo local_88;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFVar1 = this->Key;
  local_88.Splats.AllocatorInstance.InlineData[0xc] = '\0';
  local_88.Splats.AllocatorInstance.InlineData[0xd] = '\0';
  local_88.Splats.AllocatorInstance.InlineData[0xe] = '\0';
  local_88.Splats.AllocatorInstance.InlineData[0xf] = '\0';
  local_88._padding_ = 0;
  local_88.Splats.AllocatorInstance.InlineData[0] = '\0';
  local_88.Splats.AllocatorInstance.InlineData[1] = '\0';
  local_88.Splats.AllocatorInstance.InlineData[2] = '\0';
  local_88.Splats.AllocatorInstance.InlineData[3] = '\0';
  local_88.Splats.AllocatorInstance.InlineData[4] = '\0';
  local_88.Splats.AllocatorInstance.InlineData[5] = '\0';
  local_88.Splats.AllocatorInstance.InlineData[6] = '\0';
  local_88.Splats.AllocatorInstance.InlineData[7] = '\0';
  local_88.Splats.AllocatorInstance.InlineData[8] = '\0';
  local_88.Splats.AllocatorInstance.InlineData[9] = '\0';
  local_88.Splats.AllocatorInstance.InlineData[10] = '\0';
  local_88.Splats.AllocatorInstance.InlineData[0xb] = '\0';
  local_88._109_4_ = 0;
  local_88.ReadBuffer.Data = (void *)0x0;
  local_88.ReadBuffer.Size = 0;
  local_88.ChunkIndexInFile._1_2_ = 0;
  local_88.DestinationBuffer.Size = 0;
  local_88.File = (FFileConstructionState *)0x0;
  local_88.ChunkIndexInFile._3_1_ = 0;
  uVar2 = pFVar1->B;
  uVar3 = pFVar1->C;
  uVar4 = pFVar1->D;
  local_88.Guid.A = 0;
  local_88.Guid.B = 0;
  local_88.Guid.C = 0;
  local_88.Guid.D = 0;
  *(uint *)&__return_storage_ptr__->field_0x0 = pFVar1->A;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar3;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar4;
  local_88.ChunkSize = 0;
  local_88.Splats.AllocatorInstance.SecondaryData = (ForElementType<FRequestInfo::FRequestSplat>)0x0
  ;
  local_88.Splats.ArrayNum = 0;
  local_88.Splats.ArrayMax = 1;
  local_88.Batch = (FBatchState *)0x0;
  local_88.DestinationBuffer.Data = (void *)0x0;
  local_88.bReadIntoMemoryStore = false;
  local_88.bSourceIsMemoryStore = false;
  local_88.bAborted = false;
  local_88.bFailedToRead = false;
  local_88.bLaunchedFallback = false;
  local_88.ChunkUnavailableAt = 0x7fffffff;
  FRequestInfo::FRequestInfo((FRequestInfo *)&__return_storage_ptr__->field_0x10,&local_88);
  if (local_88.Splats.AllocatorInstance.SecondaryData !=
      (ForElementType<FRequestInfo::FRequestSplat>)0x0) {
    FMemory::Free((void *)local_88.Splats.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_TTuple<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_> @ 1431a9440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_TTuple<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = 0;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::
  Move<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>
            ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<unsigned_int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_TTuple<unsigned_int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_> @ 143200380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<unsigned_int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_> * __thiscall
TKeyInitializer<unsigned_int_const_&>::
operator<unsigned_int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_TTuple<unsigned_int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<unsigned_int_const_&> *this,
          TTuple<unsigned_int,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(uint *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = 0;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::
  Move<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>
            ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>_TTuple<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_> @ 1432004d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>
* __thiscall
TKeyInitializer<FGuid_const_&>::
operator<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>_TTuple<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>
          (TKeyInitializer<FGuid_const_&> *this,
          TTuple<FGuid,TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>_>
          *__return_storage_ptr__)

{
  FGuid *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStackY_b8 [32];
  void *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [24];
  undefined8 uStack_58;
  void *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  void *local_30;
  ulonglong uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_88 = (void *)0x0;
  pFVar1 = this->Key;
  local_80 = 0;
  uStack_38 = 0;
  local_78 = 0xffffffff;
  local_70._16_8_ = 0;
  uStack_58 = 0;
  local_70._0_8_ = (FScriptContainerElement *)0x0;
  local_70._8_8_ = 0;
  local_50 = (void *)0x0;
  uStack_48 = ___xmm_00000000ffffffff0000008000000000;
  local_40 = _UNK_150631d98;
  local_30 = (void *)0x0;
  uStack_28 = 0;
  local_20 = 0;
  uVar3 = pFVar1->B;
  uVar4 = pFVar1->C;
  uVar5 = pFVar1->D;
  *(uint *)&__return_storage_ptr__->field_0x0 = pFVar1->A;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar3;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar4;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar5;
  TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>
  ::
  TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>
            ((TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>
              *)&__return_storage_ptr__->field_0x10,
             (TTuple<TArray<BuildPatchServices::FChunkPart,TSizedDefaultAllocator<32>_>,FSetElementId,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,unsigned___int64>
              *)&local_88);
  uStack_28 = uStack_28 & 0xffffffff00000000;
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_70,0,local_70._8_4_);
  iVar2 = SUB84(local_70._8_8_,4);
  local_70._8_8_ = local_70._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_70,0,(int *)(local_70 + 0xc));
  }
  uVar3 = uStack_48._4_4_;
  local_40 = 0xffffffff;
  uStack_48 = (ulonglong)uStack_48._4_4_ << 0x20;
  if (0x80 < uVar3) {
    uStack_48 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_70 + 0x10),0);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  if ((FScriptContainerElement *)local_70._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_70._0_8_);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  return __return_storage_ptr__;
}

// operator<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_TTuple<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_> @ 143200720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_> * __thiscall
TKeyInitializer<FSHAHash_const_&>::
operator<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_TTuple<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<FSHAHash_const_&> *this,
          TTuple<FSHAHash,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  FSHAHash *pFVar1;
  int iVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
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
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  pFVar1 = this->Key;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_20 = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uVar3 = pFVar1->Hash[1];
  uVar4 = pFVar1->Hash[2];
  uVar5 = pFVar1->Hash[3];
  uVar6 = pFVar1->Hash[4];
  uVar7 = pFVar1->Hash[5];
  uVar8 = pFVar1->Hash[6];
  uVar9 = pFVar1->Hash[7];
  uVar10 = pFVar1->Hash[8];
  uVar11 = pFVar1->Hash[9];
  uVar12 = pFVar1->Hash[10];
  uVar13 = pFVar1->Hash[0xb];
  uVar14 = pFVar1->Hash[0xc];
  uVar15 = pFVar1->Hash[0xd];
  uVar16 = pFVar1->Hash[0xe];
  uVar17 = pFVar1->Hash[0xf];
  __return_storage_ptr__->field_0x0 = pFVar1->Hash[0];
  __return_storage_ptr__->field_0x1 = uVar3;
  __return_storage_ptr__->field_0x2 = uVar4;
  __return_storage_ptr__->field_0x3 = uVar5;
  __return_storage_ptr__->field_0x4 = uVar6;
  __return_storage_ptr__->field_0x5 = uVar7;
  __return_storage_ptr__->field_0x6 = uVar8;
  __return_storage_ptr__->field_0x7 = uVar9;
  __return_storage_ptr__->field_0x8 = uVar10;
  __return_storage_ptr__->field_0x9 = uVar11;
  __return_storage_ptr__->field_0xa = uVar12;
  __return_storage_ptr__->field_0xb = uVar13;
  __return_storage_ptr__->field_0xc = uVar14;
  __return_storage_ptr__->field_0xd = uVar15;
  __return_storage_ptr__->field_0xe = uVar16;
  __return_storage_ptr__->field_0xf = uVar17;
  uVar3 = pFVar1->Hash[0x11];
  uVar4 = pFVar1->Hash[0x12];
  uVar5 = pFVar1->Hash[0x13];
  __return_storage_ptr__->field_0x10 = pFVar1->Hash[0x10];
  __return_storage_ptr__->field_0x11 = uVar3;
  __return_storage_ptr__->field_0x12 = uVar4;
  __return_storage_ptr__->field_0x13 = uVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x44 = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x4c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x60 = 0;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::
  Move<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>
            ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x18,
             (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar2 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_TTuple<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_> @ 143200870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_> * __thiscall
TKeyInitializer<FSetElementId_const_&>::
operator<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_TTuple<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<FSetElementId_const_&> *this,
          TTuple<FSetElementId,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(int *)__return_storage_ptr__ = this->Key->Index;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = 0;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::
  Move<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>
            ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FString,BuildPatchServices::FFileAttributes>_TTuple<FString,BuildPatchServices::FFileAttributes> @ 1432009c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<FString,BuildPatchServices::FFileAttributes> * __thiscall
TKeyInitializer<FString_const_&>::
operator<FString,BuildPatchServices::FFileAttributes>_TTuple<FString,BuildPatchServices::FFileAttributes>
          (TKeyInitializer<FString_const_&> *this,
          TTuple<FString,BuildPatchServices::FFileAttributes> *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
  undefined1 auStackY_a8 [32];
  undefined1 local_70 [32];
  void *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ForElementType<FSetElementId> local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_70._0_8_ = (FScriptContainerElement *)0x0;
  local_70._8_8_ = 0;
  local_50 = (void *)0x0;
  local_48 = ___xmm_00000000ffffffff0000008000000000;
  uStack_40 = _UNK_150631d98;
  local_30 = (ForElementType<FSetElementId>)0x0;
  local_28 = 0;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  __return_storage_ptr__->field_0x10 = 0;
  __return_storage_ptr__->field_0x11 = 0;
  __return_storage_ptr__->field_0x12 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x44 = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x4c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x60 = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
  Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x18,
             (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_70);
  local_28 = 0;
  if (local_30 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_70,0,local_70._8_4_);
  iVar1 = SUB84(local_70._8_8_,4);
  local_70._8_8_ = local_70._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_70,0,(int *)(local_70 + 0xc));
  }
  uVar2 = local_48._4_4_;
  uStack_40 = 0xffffffff;
  local_48 = (ulonglong)local_48._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_48 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_70 + 0x10),0);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  if ((FScriptContainerElement *)local_70._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_70._0_8_);
  }
  return __return_storage_ptr__;
}

