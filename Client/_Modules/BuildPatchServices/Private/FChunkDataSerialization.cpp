// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 12

// DecompressValidatedRead @ 143248e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FChunkDataSerialization::DecompressValidatedRead
          (FChunkDataSerialization *this,FChunkHeader *param_1,TMemoryView<void> *param_2,
          FUniqueBuffer *param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  FBufferOwner *pFVar4;
  bool bVar5;
  FNameEntryId FVar6;
  FUniqueBuffer FVar7;
  undefined4 extraout_var;
  ulong64 uVar8;
  longlong lVar9;
  longlong *plVar10;
  FName FVar11;
  void *pvVar12;
  ulong64 uVar13;
  bool bVar14;
  undefined1 auStackY_a8 [32];
  FName local_60;
  ulong64 uStack_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  FVar11 = (FName)param_2->Data;
  uVar8 = param_2->Size;
  plVar10 = (longlong *)0x0;
  local_60 = FVar11;
  uStack_58 = uVar8;
  if ((ulonglong)param_1->DataSizeUncompressed != param_2->Size) {
    FVar7 = FUniqueBuffer::Alloc((ulong64)&local_60);
    plVar10 = *(longlong **)FVar7.Owner.Owner;
    *(undefined8 *)FVar7.Owner.Owner = 0;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_60);
    if (plVar10 == (longlong *)0x0) {
      uVar8 = 0;
      FVar11.ComparisonIndex.Value = 0;
      FVar11.Number = 0;
    }
    else {
      if (((ulonglong)plVar10[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
      uVar8 = plVar10[2];
      if (((ulonglong)plVar10[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
      FVar11 = *(FName *)(plVar10 + 1);
    }
  }
  if ((param_1->StoredAs & Compressed) == None) {
LAB_143248ff2:
    if ((param_1->HashType & Sha1) == None) {
      if ((param_1->HashType & RollingPoly64) == None) goto LAB_1432490f6;
      uVar8 = FRollingHash::GetHashForDataSet((uchar *)FVar11,(uint)uVar8);
      bVar5 = param_1->RollingHash == uVar8;
    }
    else {
      local_50 = 0;
      local_60.ComparisonIndex.Value = 0;
      local_60.Number = 0;
      uStack_58 = 0;
      bVar14 = -1 < CpuChannel->Enabled;
      if (bVar14) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`public:_static_bool___cdecl_BuildPatchServices::FChunkDataSerialization::CheckChunkHash(BuildPatchServices::FChunkHeader_const&___ptr64,void_const*___ptr64,unsigned___int64)'
                    ::__l5::__CpuProfilerEventSpecId508,"Chunk_ShaHash",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Data\\ChunkData.cpp"
                   ,0x1fc);
        FCpuProfilerTrace::OutputBeginEvent
                  (`public:_static_bool___cdecl_BuildPatchServices::FChunkDataSerialization::CheckChunkHash(BuildPatchServices::FChunkHeader_const&___ptr64,void_const*___ptr64,unsigned___int64)'
                   ::__l5::__CpuProfilerEventSpecId508);
      }
      FSHA1::HashBuffer((void *)FVar11,uVar8,(uchar *)&local_60);
      lVar9 = (longlong)local_60 - *(longlong *)(param_1->SHAHash).Hash;
      if ((lVar9 == 0) &&
         (lVar9 = uStack_58 - *(longlong *)((param_1->SHAHash).Hash + 8), lVar9 == 0)) {
        lVar9 = (ulonglong)local_50 - (ulonglong)*(uint *)((param_1->SHAHash).Hash + 0x10);
      }
      bVar5 = lVar9 == 0;
      if (bVar14) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    if ((bVar5 != false) && ((ulonglong)param_1->DataSizeUncompressed != param_2->Size)) {
      if (plVar10 == (longlong *)0x0) {
        memcpy(param_2->Data,(void *)0x0,param_2->Size);
      }
      else {
        if (((ulonglong)plVar10[3] >> 0x3c & 4) == 0) {
          (**(code **)(*plVar10 + 8))(plVar10);
        }
        memcpy(param_2->Data,(void *)plVar10[1],param_2->Size);
      }
    }
  }
  else {
    pFVar4 = (param_3->Owner).Owner;
    if (pFVar4 == (FBufferOwner *)0x0) {
      uVar13 = 0;
    }
    else {
      if (((ulonglong)pFVar4->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
        (**(code **)(pFVar4->_padding_ + 8))(pFVar4);
      }
      uVar13 = pFVar4->Size;
    }
    pFVar4 = (param_3->Owner).Owner;
    pvVar12 = (void *)0x0;
    if (pFVar4 != (FBufferOwner *)0x0) {
      if (((ulonglong)pFVar4->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
        (**(code **)(pFVar4->_padding_ + 8))(pFVar4);
      }
      pvVar12 = pFVar4->Data;
    }
    FVar6 = FNameEntryId::FromValidEName((EName)&local_60);
    local_60.Number = 0;
    local_60.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar6.Value);
    bVar5 = FCompression::UncompressMemory
                      (local_60,(void *)FVar11,uVar8,pvVar12,uVar13,COMPRESS_NoFlags,0);
    if (bVar5) goto LAB_143248ff2;
LAB_1432490f6:
    bVar5 = false;
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 3;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar9 & 0x3fffffff) == 1) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      plVar10[1] = 0;
      plVar10[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar10 + 3);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar3 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar10)(plVar10,1);
      }
    }
  }
  return bVar5;
}

// InjectShaToChunkData @ 143258010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FChunkDataSerialization::InjectShaToChunkData
          (FChunkDataSerialization *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          FSHAHash *param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined1 auStackY_218 [32];
  FArchiveState local_1d8;
  undefined8 local_148;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_140;
  undefined8 local_138;
  FArchiveState local_128;
  undefined8 local_98;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_90;
  undefined8 local_88;
  FChunkHeader local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_128._padding_ = 0;
  local_128.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_128.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_128.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_128.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_128._40_8_ = 0;
  local_128.ArSerializingDefaults = 0;
  local_128.ArPortFlags = 0;
  local_128.ArMaxSerializeSize = 0;
  local_128.ArUEVer.FileVersionUE4 = 0;
  local_128.ArUEVer.FileVersionUE5 = 0;
  local_128.ArLicenseeUEVer = 0;
  local_128.ArEngineVer.Major = 0;
  local_128.ArEngineVer.Minor = 0;
  local_128.ArEngineVer.Patch = 0;
  local_128.ArEngineVer._6_2_ = 0;
  local_128.ArEngineVer.Changelist = 0;
  local_128.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_128.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_128.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_128.SerializedProperty = (FProperty *)0x0;
  local_128.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_128.bCustomVersionsAreReset = false;
  local_128._129_7_ = 0;
  local_128.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_128);
  local_128._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_98 = 0;
  local_88 = 0x7fffffffffffffff;
  local_90 = param_1;
  FArchiveState::SetIsLoading(&local_128,true);
  (**(code **)(local_128._padding_ + 0x108))(&local_128,0);
  local_1d8._padding_ = 0;
  local_1d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_1d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_1d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_1d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_1d8._40_8_ = 0;
  local_1d8.ArSerializingDefaults = 0;
  local_1d8.ArPortFlags = 0;
  local_1d8.ArMaxSerializeSize = 0;
  local_1d8.ArUEVer.FileVersionUE4 = 0;
  local_1d8.ArUEVer.FileVersionUE5 = 0;
  local_1d8.ArLicenseeUEVer = 0;
  local_1d8.ArEngineVer.Major = 0;
  local_1d8.ArEngineVer.Minor = 0;
  local_1d8.ArEngineVer.Patch = 0;
  local_1d8.ArEngineVer._6_2_ = 0;
  local_1d8.ArEngineVer.Changelist = 0;
  local_1d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_1d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_1d8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_1d8.SerializedProperty = (FProperty *)0x0;
  local_1d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_1d8.bCustomVersionsAreReset = false;
  local_1d8._129_7_ = 0;
  local_1d8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_1d8);
  local_148 = 0;
  local_1d8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_138 = 0;
  local_140 = param_1;
  FArchiveState::SetIsSaving(&local_1d8,true);
  (**(code **)(local_1d8._padding_ + 0x108))(&local_1d8,0);
  local_78.Version = 3;
  local_1d8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  local_78.HeaderSize = 0x42;
  local_78.Guid.A = 0;
  local_78.SHAHash.Hash[0x10] = '\0';
  local_78.SHAHash.Hash[0x11] = '\0';
  local_78.SHAHash.Hash[0x12] = '\0';
  local_78.SHAHash.Hash[0x13] = '\0';
  local_78.Guid.B = 0;
  local_78.Guid.C = 0;
  local_78.Guid.D = 0;
  local_78.DataSizeCompressed = 0;
  local_78.DataSizeUncompressed = 0x100000;
  local_78.StoredAs = None;
  local_78.HashType = RollingPoly64;
  local_78.RollingHash = 0;
  local_78.SHAHash.Hash[0] = '\0';
  local_78.SHAHash.Hash[1] = '\0';
  local_78.SHAHash.Hash[2] = '\0';
  local_78.SHAHash.Hash[3] = '\0';
  local_78.SHAHash.Hash[4] = '\0';
  local_78.SHAHash.Hash[5] = '\0';
  local_78.SHAHash.Hash[6] = '\0';
  local_78.SHAHash.Hash[7] = '\0';
  local_78.SHAHash.Hash[8] = '\0';
  local_78.SHAHash.Hash[9] = '\0';
  local_78.SHAHash.Hash[10] = '\0';
  local_78.SHAHash.Hash[0xb] = '\0';
  local_78.SHAHash.Hash[0xc] = '\0';
  local_78.SHAHash.Hash[0xd] = '\0';
  local_78.SHAHash.Hash[0xe] = '\0';
  local_78.SHAHash.Hash[0xf] = '\0';
  BuildPatchServices::operator<<((FArchive *)&local_128,&local_78);
  local_78.SHAHash.Hash._0_8_ = *(undefined8 *)param_2->Hash;
  local_78.SHAHash.Hash._8_8_ = *(undefined8 *)(param_2->Hash + 8);
  local_78._32_2_ = local_78._32_2_ | 0x200;
  local_78.SHAHash.Hash._16_4_ = *(undefined4 *)(param_2->Hash + 0x10);
  if (local_78.Version < 2) {
    if (0x3e < local_78.HeaderSize) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Header.HeaderSize <= StoresShaAndHashTypeHeaderSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Data\\ChunkData.cpp"
                         ,0x2b3,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_78.Version = 2;
    iVar4 = 0x3e - local_78.HeaderSize;
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar4,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax);
    _Src = (param_1->AllocatorInstance).Data;
    memmove(_Src + iVar4,_Src,(longlong)iVar3);
    memset((param_1->AllocatorInstance).Data,0,(longlong)iVar4);
  }
  BuildPatchServices::operator<<((FArchive *)&local_1d8,&local_78);
  FArchive::~FArchive((FArchive *)&local_1d8);
  FArchive::~FArchive((FArchive *)&local_128);
  return;
}

// Load @ 143258e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

IChunkDataAccess * __thiscall
BuildPatchServices::FChunkDataSerialization::Load
          (FChunkDataSerialization *this,FArchive *param_1,EChunkLoadResult *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulong64 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  FName FVar10;
  uchar *puVar11;
  uchar *puVar12;
  FNameEntryId FVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  IChunkDataAccess *pIVar17;
  IChunkDataAccess *pIVar18;
  undefined4 extraout_var;
  ulong64 uVar19;
  bool bVar20;
  undefined1 auStackY_118 [32];
  undefined8 *local_d8;
  uchar *local_d0;
  undefined8 *local_c8;
  uint local_c0 [2];
  uchar *local_b8 [2];
  FChunkHeader local_a8;
  uchar local_58 [24];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_118;
  lVar15 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  lVar16 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
  local_a8.Version = 3;
  local_a8.HeaderSize = 0x42;
  local_a8.Guid.A = 0;
  local_a8.SHAHash.Hash[0x10] = '\0';
  local_a8.SHAHash.Hash[0x11] = '\0';
  local_a8.SHAHash.Hash[0x12] = '\0';
  local_a8.SHAHash.Hash[0x13] = '\0';
  local_a8.Guid.B = 0;
  local_a8.Guid.C = 0;
  local_a8.Guid.D = 0;
  local_a8.DataSizeCompressed = 0;
  local_a8.DataSizeUncompressed = 0x100000;
  local_a8.StoredAs = None;
  local_a8.HashType = RollingPoly64;
  local_a8.RollingHash = 0;
  local_a8.SHAHash.Hash[0] = '\0';
  local_a8.SHAHash.Hash[1] = '\0';
  local_a8.SHAHash.Hash[2] = '\0';
  local_a8.SHAHash.Hash[3] = '\0';
  local_a8.SHAHash.Hash[4] = '\0';
  local_a8.SHAHash.Hash[5] = '\0';
  local_a8.SHAHash.Hash[6] = '\0';
  local_a8.SHAHash.Hash[7] = '\0';
  local_a8.SHAHash.Hash[8] = '\0';
  local_a8.SHAHash.Hash[9] = '\0';
  local_a8.SHAHash.Hash[10] = '\0';
  local_a8.SHAHash.Hash[0xb] = '\0';
  local_a8.SHAHash.Hash[0xc] = '\0';
  local_a8.SHAHash.Hash[0xd] = '\0';
  local_a8.SHAHash.Hash[0xe] = '\0';
  local_a8.SHAHash.Hash[0xf] = '\0';
  BuildPatchServices::operator<<(param_1,&local_a8);
  uVar1 = (ulonglong)local_a8.HeaderSize + (ulonglong)local_a8.DataSizeCompressed;
  if (uVar1 == (uVar1 & 0xffffffff)) {
    if (((local_a8.Guid.D == 0 && local_a8.Guid.C == 0) && local_a8.Guid.A == 0) &&
        local_a8.Guid.B == 0) {
      *param_2 = CorruptHeader;
      pIVar17 = (IChunkDataAccess *)0x0;
    }
    else if (local_a8.HashType == None) {
      *param_2 = MissingHashInfo;
      pIVar17 = (IChunkDataAccess *)0x0;
    }
    else {
      pIVar17 = (IChunkDataAccess *)0x0;
      if (lVar16 - lVar15 < (longlong)(ulonglong)(local_a8.DataSizeCompressed + local_a8.HeaderSize)
         ) {
        *param_2 = IncorrectFileSize;
      }
      else if ((local_a8.StoredAs & Encrypted) == None) {
        pIVar17 = FChunkDataAccessFactory::Create((uint)uVar1);
        (**(code **)((longlong)*pIVar17 + 8))(pIVar17,&local_d0,&local_d8);
        *local_d8 = CONCAT44(local_a8.HeaderSize,local_a8.Version);
        local_d8[1] = CONCAT44(local_a8.Guid.B,local_a8.Guid.A);
        local_d8[2] = CONCAT44(local_a8.Guid.D,local_a8.Guid.C);
        local_d8[3] = CONCAT44(local_a8.DataSizeUncompressed,local_a8.DataSizeCompressed);
        local_d8[4] = CONCAT62(local_a8._34_6_,CONCAT11(local_a8.HashType,local_a8.StoredAs));
        local_d8[5] = local_a8.RollingHash;
        local_d8[6] = local_a8.SHAHash.Hash._0_8_;
        local_d8[7] = local_a8.SHAHash.Hash._8_8_;
        local_d8[8] = CONCAT44(local_a8._68_4_,local_a8.SHAHash.Hash._16_4_);
        bVar20 = -1 < CpuChannel->Enabled;
        if (bVar20) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&`private:_class_BuildPatchServices::IChunkDataAccess*___ptr64___cdecl_BuildPatchServices::FChunkDataSerialization::Load(FArchive&___ptr64,BuildPatchServices::EChunkLoadResult&___ptr64)const___ptr64'
                      ::__l18::__CpuProfilerEventSpecId740,"Chunk_Serialize",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Data\\ChunkData.cpp"
                     ,0x2e4);
          FCpuProfilerTrace::OutputBeginEvent
                    (`private:_class_BuildPatchServices::IChunkDataAccess*___ptr64___cdecl_BuildPatchServices::FChunkDataSerialization::Load(FArchive&___ptr64,BuildPatchServices::EChunkLoadResult&___ptr64)const___ptr64'
                     ::__l18::__CpuProfilerEventSpecId740);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_d0,*(undefined4 *)(local_d8 + 3));
        if (bVar20) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((param_1->field_0x29 & 2) == 0) {
          *param_2 = Success;
          if ((*(byte *)(local_d8 + 4) & 1) != 0) {
            pIVar18 = FChunkDataAccessFactory::Create(*(uint *)((longlong)local_d8 + 0x1c));
            (**(code **)((longlong)*pIVar18 + 8))(pIVar18,local_b8,&local_c8);
            puVar12 = local_b8[0];
            puVar11 = local_d0;
            uVar3 = *(uint *)(local_d8 + 3);
            uVar4 = *(uint *)((longlong)local_d8 + 0x1c);
            FVar13 = FNameEntryId::FromValidEName((EName)local_c0);
            local_c0[0] = *(uint *)CONCAT44(extraout_var,FVar13.Value);
            local_c0[1] = 0;
            FVar10.Number = 0;
            FVar10.ComparisonIndex.Value = local_c0[0];
            bVar20 = FCompression::UncompressMemory
                               (FVar10,puVar12,(ulonglong)uVar4,puVar11,(ulonglong)uVar3,
                                COMPRESS_NoFlags,0);
            if (bVar20) {
              uVar9 = local_d8[1];
              *local_c8 = *local_d8;
              local_c8[1] = uVar9;
              uVar9 = local_d8[3];
              local_c8[2] = local_d8[2];
              local_c8[3] = uVar9;
              uVar9 = local_d8[5];
              local_c8[4] = local_d8[4];
              local_c8[5] = uVar9;
              uVar6 = *(undefined4 *)((longlong)local_d8 + 0x34);
              uVar7 = *(undefined4 *)(local_d8 + 7);
              uVar8 = *(undefined4 *)((longlong)local_d8 + 0x3c);
              *(undefined4 *)(local_c8 + 6) = *(undefined4 *)(local_d8 + 6);
              *(undefined4 *)((longlong)local_c8 + 0x34) = uVar6;
              *(undefined4 *)(local_c8 + 7) = uVar7;
              *(undefined4 *)((longlong)local_c8 + 0x3c) = uVar8;
              local_c8[8] = local_d8[8];
              *(undefined1 *)(local_c8 + 4) = 0;
              *(undefined4 *)(local_c8 + 3) = *(undefined4 *)((longlong)local_d8 + 0x1c);
              (**(code **)((longlong)*pIVar17 + 0x18))(pIVar17);
              (**(code **)*pIVar17)(pIVar17,1);
              local_d0 = local_b8[0];
              local_d8 = local_c8;
              pIVar17 = pIVar18;
            }
            else {
              *param_2 = DecompressFailure;
              (**(code **)((longlong)*pIVar18 + 0x18))(pIVar18);
              (**(code **)*pIVar18)(pIVar18,1);
            }
          }
          bVar2 = *(byte *)((longlong)local_d8 + 0x21);
          if (((*param_2 == Success) && ((bVar2 & 3) == 1)) &&
             ((*(uint *)(local_d8 + 3) != *(uint *)((longlong)local_d8 + 0x1c) ||
              (uVar5 = local_d8[5],
              uVar19 = FRollingHash::GetHashForDataSet
                                 (local_d0,*(uint *)((longlong)local_d8 + 0x1c)), uVar5 != uVar19)))
             ) {
            *param_2 = HashCheckFailed;
          }
          local_58[0] = '\0';
          local_58[1] = '\0';
          local_58[2] = '\0';
          local_58[3] = '\0';
          local_58[4] = '\0';
          local_58[5] = '\0';
          local_58[6] = '\0';
          local_58[7] = '\0';
          local_58[8] = '\0';
          local_58[9] = '\0';
          local_58[10] = '\0';
          local_58[0xb] = '\0';
          local_58[0xc] = '\0';
          local_58[0xd] = '\0';
          local_58[0xe] = '\0';
          local_58[0xf] = '\0';
          local_58[0x10] = '\0';
          local_58[0x11] = '\0';
          local_58[0x12] = '\0';
          local_58[0x13] = '\0';
          if ((*param_2 == Success) && ((bVar2 & 2) != 0)) {
            bVar20 = -1 < CpuChannel->Enabled;
            if (bVar20) {
              FCpuProfilerTrace::GetOrCreateSpecId
                        (&`private:_class_BuildPatchServices::IChunkDataAccess*___ptr64___cdecl_BuildPatchServices::FChunkDataSerialization::Load(FArchive&___ptr64,BuildPatchServices::EChunkLoadResult&___ptr64)const___ptr64'
                          ::__l38::__CpuProfilerEventSpecId799,"Chunk_ShaHash",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Data\\ChunkData.cpp"
                         ,799);
              FCpuProfilerTrace::OutputBeginEvent
                        (`private:_class_BuildPatchServices::IChunkDataAccess*___ptr64___cdecl_BuildPatchServices::FChunkDataSerialization::Load(FArchive&___ptr64,BuildPatchServices::EChunkLoadResult&___ptr64)const___ptr64'
                         ::__l38::__CpuProfilerEventSpecId799);
            }
            FSHA1::HashBuffer(local_d0,(ulonglong)*(uint *)((longlong)local_d8 + 0x1c),local_58);
            iVar14 = memcmp(local_58,local_d8 + 6,0x14);
            if (iVar14 != 0) {
              *param_2 = HashCheckFailed;
            }
            if (bVar20) {
              FCpuProfilerTrace::OutputEndEvent();
            }
          }
        }
        else {
          *param_2 = SerializationError;
        }
        if ((pIVar17 != (IChunkDataAccess *)0x0) &&
           ((**(code **)((longlong)*pIVar17 + 0x18))(pIVar17), *param_2 != Success)) {
          (**(code **)*pIVar17)(pIVar17,1);
          pIVar17 = (IChunkDataAccess *)0x0;
        }
      }
      else {
        *param_2 = UnsupportedStorage;
      }
    }
  }
  else {
    *param_2 = FileSizeTooBig;
    pIVar17 = (IChunkDataAccess *)0x0;
  }
  return pIVar17;
}

// LoadFromArchive @ 143259250

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

IChunkDataAccess * __thiscall
BuildPatchServices::FChunkDataSerialization::LoadFromArchive
          (FChunkDataSerialization *this,FArchive *param_1,EChunkLoadResult *param_2)

{
  IChunkDataAccess *pIVar1;
  bool bVar2;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_class_BuildPatchServices::IChunkDataAccess*___ptr64___cdecl_BuildPatchServices::FChunkDataSerialization::LoadFromArchive(FArchive&___ptr64,BuildPatchServices::EChunkLoadResult&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId621,"Chunk_LoadFromArchive",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Data\\ChunkData.cpp"
               ,0x26d);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_class_BuildPatchServices::IChunkDataAccess*___ptr64___cdecl_BuildPatchServices::FChunkDataSerialization::LoadFromArchive(FArchive&___ptr64,BuildPatchServices::EChunkLoadResult&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId621);
  }
  if ((param_1->field_0x28 & 1) == 0) {
    *param_2 = BadArchive;
    pIVar1 = (IChunkDataAccess *)0x0;
  }
  else {
    pIVar1 = Load(this,param_1,param_2);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pIVar1;
}

// LoadFromFile @ 143259300

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

IChunkDataAccess * __thiscall
BuildPatchServices::FChunkDataSerialization::LoadFromFile
          (FChunkDataSerialization *this,FString *param_1,EChunkLoadResult *param_2)

{
  IChunkDataAccess *pIVar1;
  wchar_t *pwVar2;
  FArchive *local_res8;
  
  pIVar1 = (IChunkDataAccess *)0x0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  (**(code **)((longlong)*this->FileSystem + 0x48))(this->FileSystem,&local_res8,pwVar2,0);
  if (local_res8 == (FArchive *)0x0) {
    *param_2 = OpenFileFail;
  }
  else {
    pIVar1 = Load(this,local_res8,param_2);
    (**(code **)(*(longlong *)local_res8 + 0x210))();
  }
  if (local_res8 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)local_res8)(local_res8,1);
  }
  return pIVar1;
}

// LoadFromMemory @ 1432593a0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

IChunkDataAccess * __thiscall
BuildPatchServices::FChunkDataSerialization::LoadFromMemory
          (FChunkDataSerialization *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          EChunkLoadResult *param_2)

{
  IChunkDataAccess *pIVar1;
  FArchiveState local_b8;
  undefined8 local_28;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_20;
  undefined8 local_18;
  
  local_b8._padding_ = 0;
  local_b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_b8._40_8_ = 0;
  local_b8.ArSerializingDefaults = 0;
  local_b8.ArPortFlags = 0;
  local_b8.ArMaxSerializeSize = 0;
  local_b8.ArUEVer.FileVersionUE4 = 0;
  local_b8.ArUEVer.FileVersionUE5 = 0;
  local_b8.ArLicenseeUEVer = 0;
  local_b8.ArEngineVer.Major = 0;
  local_b8.ArEngineVer.Minor = 0;
  local_b8.ArEngineVer.Patch = 0;
  local_b8.ArEngineVer._6_2_ = 0;
  local_b8.ArEngineVer.Changelist = 0;
  local_b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_b8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_b8.SerializedProperty = (FProperty *)0x0;
  local_b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_b8.bCustomVersionsAreReset = false;
  local_b8._129_7_ = 0;
  local_b8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_b8);
  local_28 = 0;
  local_b8._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_18 = 0x7fffffffffffffff;
  local_20 = param_1;
  FArchiveState::SetIsLoading(&local_b8,true);
  (**(code **)(local_b8._padding_ + 0x108))(&local_b8,0);
  pIVar1 = Load(this,(FArchive *)&local_b8,param_2);
  FArchive::~FArchive((FArchive *)&local_b8);
  return pIVar1;
}

// Save @ 143264fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

EChunkSaveResult __thiscall
BuildPatchServices::FChunkDataSerialization::Save
          (FChunkDataSerialization *this,FArchive *param_1,IChunkDataAccess *param_2,bool param_3)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  FName FVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  bool bVar8;
  EChunkSaveResult EVar9;
  FNameEntryId FVar10;
  int iVar11;
  undefined4 extraout_var;
  undefined8 uVar12;
  EChunkHashFlags EVar13;
  uint uVar14;
  undefined1 auStackY_118 [32];
  uint local_d8 [2];
  undefined8 *local_d0;
  ForAnyElementType local_c8;
  int local_c0 [4];
  FScriptContainerElement *local_b0;
  uint local_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [8];
  FChunkHeader local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  (**(code **)((longlong)*param_2 + 0x10))(param_2,&local_b0,&local_d0);
  uVar14 = 0;
  local_c0[2] = this->FeatureLevel;
  bVar7 = false;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0[0] = 0;
  local_c0[1] = 0;
  local_d8[0] = *(uint *)((longlong)local_d0 + 0x1c);
  if ((5 < local_c0[2]) && (param_3)) {
    uVar2 = *(uint *)((longlong)local_d0 + 0x1c);
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if (uVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar2,&local_c8,0,local_c0 + 1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,*(int *)((longlong)local_d0 + 0x1c),&local_c8,local_c0,local_c0 + 1);
    pFVar6 = local_b0;
    FVar5.Data = local_c8.Data;
    iVar11 = *(int *)((longlong)local_d0 + 0x1c);
    FVar10 = FNameEntryId::FromValidEName((EName)local_a0);
    uStack_a4 = 0;
    local_a8 = *(uint *)CONCAT44(extraout_var,FVar10.Value);
    FVar4.Number = 0;
    FVar4.ComparisonIndex.Value = local_a8;
    bVar7 = FCompression::CompressMemory
                      (FVar4,FVar5.Data,(int *)local_d8,pFVar6,iVar11,COMPRESS_BiasMemory,0);
    local_c0[2] = this->FeatureLevel;
    if (bVar7) {
      local_b0 = local_c8.Data;
      goto LAB_1432650f8;
    }
  }
  local_d8[0] = *(uint *)((longlong)local_d0 + 0x1c);
LAB_1432650f8:
  local_98.Version = (uint)*local_d0;
  local_98.HeaderSize = (uint)((ulonglong)*local_d0 >> 0x20);
  local_98.Guid.A = (uint)local_d0[1];
  local_98.Guid.B = (uint)((ulonglong)local_d0[1] >> 0x20);
  local_98.Guid.C = (uint)local_d0[2];
  local_98.Guid.D = (uint)((ulonglong)local_d0[2] >> 0x20);
  local_98.DataSizeCompressed = (uint)local_d0[3];
  local_98.DataSizeUncompressed = (uint)((ulonglong)local_d0[3] >> 0x20);
  local_98._32_8_ = local_d0[4];
  local_98.RollingHash = local_d0[5];
  local_98.SHAHash.Hash._0_8_ = local_d0[6];
  local_98.SHAHash.Hash._8_8_ = local_d0[7];
  local_98._64_8_ = local_d0[8];
  switch(local_c0[2]) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
    uVar14 = 1;
    break;
  case 0xc:
  case 0xd:
    uVar14 = 2;
    break;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
    uVar14 = 3;
    break;
  default:
    FeatureLevelToString((EFeatureLevel *)(local_c0 + 2));
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Data\\ChunkData.cpp"
                       ,0x8e,L"Unhandled FeatureLevel %s");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      EVar9 = (*pcVar3)();
      return EVar9;
    }
  }
  local_98.Version = uVar14;
  uVar12 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  BuildPatchServices::operator<<(param_1,&local_98);
  iVar11 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  local_98.HeaderSize = iVar11 - (int)uVar12;
  local_98.DataSizeCompressed = local_d8[0];
  local_98.DataSizeUncompressed = *(uint *)((longlong)local_d0 + 0x1c);
  EVar13 = local_98.HashType;
  if ((local_98._32_8_ & 0x100) == 0) {
    EVar13 = RollingPoly64;
  }
  local_98.HashType = EVar13;
  local_98.StoredAs = bVar7;
  (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar12);
  BuildPatchServices::operator<<(param_1,&local_98);
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_b0,(longlong)(int)local_d8[0]);
  bVar1 = param_1->field_0x29;
  (**(code **)((longlong)*param_2 + 0x18))(param_2);
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  return -((bVar1 & 2) != 0) & SerializationError;
}

// SaveToArchive @ 143265c80

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

EChunkSaveResult __thiscall
BuildPatchServices::FChunkDataSerialization::SaveToArchive
          (FChunkDataSerialization *this,FArchive *param_1,IChunkDataAccess *param_2)

{
  EChunkSaveResult EVar1;
  
  if ((param_1->field_0x28 & 4) != 0) {
    EVar1 = Save(this,param_1,param_2,true);
    return EVar1;
  }
  return BadArchive;
}

// SaveToArchiveUncompressed @ 143265fc0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

EChunkSaveResult __thiscall
BuildPatchServices::FChunkDataSerialization::SaveToArchiveUncompressed
          (FChunkDataSerialization *this,FArchive *param_1,IChunkDataAccess *param_2)

{
  EChunkSaveResult EVar1;
  
  if ((param_1->field_0x28 & 4) != 0) {
    EVar1 = Save(this,param_1,param_2,false);
    return EVar1;
  }
  return BadArchive;
}

// SaveToFile @ 143265ff0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

EChunkSaveResult __thiscall
BuildPatchServices::FChunkDataSerialization::SaveToFile
          (FChunkDataSerialization *this,FString *param_1,IChunkDataAccess *param_2)

{
  EChunkSaveResult EVar1;
  wchar_t *pwVar2;
  undefined8 *local_res8;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  (**(code **)((longlong)*this->FileSystem + 0x50))(this->FileSystem,&local_res8,pwVar2,0);
  if (local_res8 == (undefined8 *)0x0) {
    EVar1 = FileCreateFail;
  }
  else {
    EVar1 = (**(code **)(this->_padding_ + 0x30))(this,local_res8,param_2);
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return EVar1;
}

// SaveToMemory @ 143266150

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

EChunkSaveResult __thiscall
BuildPatchServices::FChunkDataSerialization::SaveToMemory
          (FChunkDataSerialization *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          IChunkDataAccess *param_2)

{
  EChunkSaveResult EVar1;
  FArchiveState local_b8;
  undefined8 local_28;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_20;
  undefined8 local_18;
  
  local_b8._padding_ = 0;
  local_b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_b8._40_8_ = 0;
  local_b8.ArSerializingDefaults = 0;
  local_b8.ArPortFlags = 0;
  local_b8.ArMaxSerializeSize = 0;
  local_b8.ArUEVer.FileVersionUE4 = 0;
  local_b8.ArUEVer.FileVersionUE5 = 0;
  local_b8.ArLicenseeUEVer = 0;
  local_b8.ArEngineVer.Major = 0;
  local_b8.ArEngineVer.Minor = 0;
  local_b8.ArEngineVer.Patch = 0;
  local_b8.ArEngineVer._6_2_ = 0;
  local_b8.ArEngineVer.Changelist = 0;
  local_b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_b8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_b8.SerializedProperty = (FProperty *)0x0;
  local_b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_b8.bCustomVersionsAreReset = false;
  local_b8._129_7_ = 0;
  local_b8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_b8);
  local_28 = 0;
  local_b8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_18 = 0;
  local_20 = param_1;
  FArchiveState::SetIsSaving(&local_b8,true);
  (**(code **)(local_b8._padding_ + 0x108))(&local_b8,0);
  local_b8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  EVar1 = Save(this,(FArchive *)&local_b8,param_2,true);
  FArchive::~FArchive((FArchive *)&local_b8);
  return EVar1;
}

// ValidateAndRead @ 14326c7a0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FChunkDataSerialization::ValidateAndRead
          (FChunkDataSerialization *this,FArchive *param_1,TMemoryView<void> *param_2,
          FChunkHeader *param_3,FUniqueBuffer *param_4)

{
  code *pcVar1;
  FUniqueBuffer FVar2;
  ulong64 uVar3;
  void *pvVar4;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res20;
  
  BuildPatchServices::operator<<(param_1,param_3);
  if (((((param_3->Guid).D != 0 || (param_3->Guid).C != 0) || (param_3->Guid).B != 0) ||
       (param_3->Guid).A != 0) &&
     ((((param_3->HashType & RollingPoly64) != None || ((param_3->HashType & Sha1) != None)) &&
      ((param_3->StoredAs & Encrypted) == None)))) {
    if (param_2->Size <= (ulonglong)param_3->DataSizeUncompressed) {
      if (((param_3->StoredAs & Compressed) == None) &&
         (param_2->Size == (ulonglong)param_3->DataSizeUncompressed)) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2->Data);
      }
      else {
        FVar2 = FUniqueBuffer::Alloc((ulong64)&local_res20);
        FUniqueBuffer::operator=(param_4,(FUniqueBuffer *)FVar2.Owner.Owner);
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res20);
        pcVar1 = *(code **)(*(longlong *)param_1 + 0x188);
        uVar3 = FUniqueBuffer::GetSize(param_4);
        pvVar4 = FUniqueBuffer::GetData(param_4);
        (*pcVar1)(param_1,pvVar4,uVar3);
      }
      if ((param_1->field_0x29 & 2) == 0) {
        return true;
      }
    }
  }
  return false;
}

