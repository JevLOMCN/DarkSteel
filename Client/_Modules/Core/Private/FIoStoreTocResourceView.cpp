// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FIoStoreTocResourceView @ 1417a2ca0

FIoStoreTocResourceView * __thiscall
FIoStoreTocResourceView::FIoStoreTocResourceView(FIoStoreTocResourceView *this)

{
  (this->Header).Reserved0 = '\0';
  (this->Header).Reserved1 = 0;
  (this->Header).PartitionCount = 0;
  (this->Header).EncryptionKeyGuid.A = 0;
  (this->Header).EncryptionKeyGuid.B = 0;
  (this->Header).EncryptionKeyGuid.C = 0;
  (this->Header).EncryptionKeyGuid.D = 0;
  (this->Header).Reserved3 = '\0';
  (this->Header).Reserved4 = 0;
  (this->Header).TocChunkPerfectHashSeedsCount = 0;
  (this->Header).PartitionSize = 0;
  (this->Header).TocChunksWithoutPerfectHashCount = 0;
  (this->Header).Reserved7 = 0;
  (this->Header).ContainerId.Id = 0xffffffffffffffff;
  (this->Header).Reserved8[0] = 0;
  (this->Header).Reserved8[1] = 0;
  (this->Header).Reserved8[2] = 0;
  (this->Header).Reserved8[3] = 0;
  (this->Header).Reserved8[4] = 0;
  (this->ChunkIds).DataPtr = (FIoChunkId *)0x0;
  (this->ChunkIds).ArrayNum = 0;
  (this->ChunkOffsetLengths).DataPtr = (FIoOffsetAndLength *)0x0;
  (this->ChunkOffsetLengths).ArrayNum = 0;
  (this->ChunkPerfectHashSeeds).DataPtr = (int *)0x0;
  (this->ChunkPerfectHashSeeds).ArrayNum = 0;
  (this->ChunkIndicesWithoutPerfectHash).DataPtr = (int *)0x0;
  (this->ChunkIndicesWithoutPerfectHash).ArrayNum = 0;
  (this->CompressionBlocks).DataPtr = (FIoStoreTocCompressedBlockEntry *)0x0;
  (this->CompressionBlocks).ArrayNum = 0;
  (this->CompressionMethods).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompressionMethods).ArrayNum = 0;
  (this->CompressionMethods).ArrayMax = 0;
  (this->SignatureHash).Hash[0] = '\0';
  (this->SignatureHash).Hash[1] = '\0';
  (this->SignatureHash).Hash[2] = '\0';
  (this->SignatureHash).Hash[3] = '\0';
  (this->SignatureHash).Hash[4] = '\0';
  (this->SignatureHash).Hash[5] = '\0';
  (this->SignatureHash).Hash[6] = '\0';
  (this->SignatureHash).Hash[7] = '\0';
  (this->SignatureHash).Hash[8] = '\0';
  (this->SignatureHash).Hash[9] = '\0';
  (this->SignatureHash).Hash[10] = '\0';
  (this->SignatureHash).Hash[0xb] = '\0';
  (this->SignatureHash).Hash[0xc] = '\0';
  (this->SignatureHash).Hash[0xd] = '\0';
  (this->SignatureHash).Hash[0xe] = '\0';
  (this->SignatureHash).Hash[0xf] = '\0';
  (this->SignatureHash).Hash[0x10] = '\0';
  (this->SignatureHash).Hash[0x11] = '\0';
  (this->SignatureHash).Hash[0x12] = '\0';
  (this->SignatureHash).Hash[0x13] = '\0';
  (this->ChunkBlockSignatures).DataPtr = (FSHAHash *)0x0;
  (this->ChunkBlockSignatures).ArrayNum = 0;
  (this->DirectoryIndexBuffer).DataPtr = (uchar *)0x0;
  (this->DirectoryIndexBuffer).ArrayNum = 0;
  (this->ChunkMetas).DataPtr = (FIoStoreTocEntryMeta *)0x0;
  (this->ChunkMetas).ArrayNum = 0;
  (this->LegacyChunkMetas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LegacyChunkMetas).ArrayNum = 0;
  (this->LegacyChunkMetas).ArrayMax = 0;
  return this;
}

// GetTocChunkInfo @ 1417d8410

FIoStoreTocChunkInfo * __thiscall
FIoStoreTocResourceView::GetTocChunkInfo
          (FIoStoreTocResourceView *this,FIoStoreTocChunkInfo *__return_storage_ptr__,int param_1)

{
  GetTocChunkInfoInternal<FIoStoreTocResourceView>(__return_storage_ptr__,this,param_1);
  return __return_storage_ptr__;
}

// Read @ 1417f0c70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIoStatus * __cdecl
FIoStoreTocResourceView::Read
          (FIoStatus *__return_storage_ptr__,wchar_t *param_1,EIoStoreTocReadOptions param_2,
          FIoStoreTocResourceView *param_3,FIoStoreTocResourceStorage *param_4)

{
  int *piVar1;
  wchar_t *pwVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FIoStoreTocEntryMeta,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  byte bVar6;
  uint uVar7;
  FName *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  TSharedString<wchar_t> TVar18;
  EIoStoreTocReadOptions EVar19;
  longlong *plVar20;
  bool bVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  FIoStatus *pFVar25;
  size_t sVar26;
  TArrayView<int_const_,int> *pTVar27;
  FName *pFVar28;
  TArrayView<unsigned_char_const_,int> *pTVar29;
  longlong *plVar30;
  TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
  *pTVar31;
  longlong *plVar32;
  TStringBuilderBase<wchar_t> *this;
  ulonglong uVar33;
  longlong *plVar34;
  longlong lVar35;
  TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
  *pTVar36;
  ForAnyElementType FVar37;
  uint uVar38;
  longlong lVar39;
  longlong lVar40;
  uint uVar41;
  FScriptContainerElement *pFVar42;
  undefined1 auStackY_15a8 [32];
  undefined1 local_1558;
  undefined1 local_1557;
  undefined1 local_1556 [2];
  undefined1 local_1554;
  undefined1 local_1553;
  undefined1 local_1552;
  undefined1 local_1551;
  undefined1 local_1550 [8];
  ForAnyElementType local_1548;
  int local_1540 [2];
  ForAnyElementType local_1538;
  uint local_1530;
  int local_152c;
  ForAnyElementType local_1528;
  int local_1520;
  int local_151c;
  ForAnyElementType local_1518;
  int local_1510;
  int local_150c;
  undefined8 local_1508;
  ForAnyElementType local_1500;
  int local_14f8;
  int local_14f4;
  int *local_14f0;
  uint uStack_14e8;
  undefined4 uStack_14e4;
  TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
  *local_14e0;
  uint uStack_14d8;
  undefined4 uStack_14d4;
  ForAnyElementType local_14d0;
  int local_14c8;
  int local_14c4;
  EIoStoreTocReadOptions local_14c0;
  ForAnyElementType local_14b8;
  int local_14b0;
  int local_14ac;
  FIoStatus *local_14a8;
  TArrayView<unsigned_char_const_,int> local_14a0;
  TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
  *local_1490;
  undefined4 local_1488;
  TArrayView<unsigned_char_const_,int> local_1480;
  TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
  *local_1470;
  int local_1468;
  TArrayView<unsigned_char_const_,int> local_1460;
  TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
  *local_1450;
  int local_1448;
  TArrayView<unsigned_char_const_,int> local_1440;
  TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
  *local_1430;
  int local_1428;
  TArrayView<unsigned_char_const_,int> local_1420;
  TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
  *local_1410;
  int local_1408;
  TArrayView<unsigned_char_const_,int> local_1400;
  TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
  *local_13f0;
  undefined4 local_13e8;
  TArrayView<unsigned_char_const_,int> local_13e0;
  TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
  *local_13d0;
  int local_13c8;
  TArrayView<unsigned_char_const_,int> local_13c0;
  TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
  *local_13b0;
  int local_13a8;
  TArrayView<unsigned_char_const_,int> local_13a0;
  TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
  *local_1390;
  int local_1388;
  TArrayView<unsigned_char_const_,int> local_1380;
  TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
  *local_1370;
  int local_1368;
  TArrayView<unsigned_char_const_,int> local_1360;
  TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
  *local_1350;
  int local_1348;
  FName local_1340;
  TArrayView<int_const_,int> local_1338;
  TArrayView<int_const_,int> local_1328;
  TArrayView<unsigned_char_const_,int> local_1318;
  longlong local_1308 [37];
  TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
  local_11e0;
  undefined1 local_10b8 [16];
  wchar_t *local_10a8;
  wchar_t *local_10a0;
  undefined2 local_1098;
  wchar_t local_1090 [256];
  wchar_t local_e90 [4];
  undefined1 local_e88 [16];
  wchar_t *local_e78;
  wchar_t *local_e70;
  undefined2 local_e68;
  wchar_t local_e60 [256];
  wchar_t local_c60 [4];
  undefined1 local_c58 [16];
  wchar_t *local_c48;
  wchar_t *local_c40;
  undefined2 local_c38;
  wchar_t local_c30 [256];
  wchar_t local_a30 [4];
  undefined1 local_a28 [16];
  wchar_t *local_a18;
  wchar_t *local_a10;
  undefined2 local_a08;
  wchar_t local_a00 [256];
  wchar_t local_800 [4];
  undefined1 local_7f8 [16];
  wchar_t *local_7e8;
  wchar_t *local_7e0;
  undefined2 local_7d8;
  wchar_t local_7d0 [256];
  wchar_t local_5d0 [4];
  undefined1 local_5c8 [16];
  wchar_t *local_5b8;
  wchar_t *local_5b0;
  undefined2 local_5a8;
  wchar_t local_5a0 [256];
  wchar_t local_3a0 [4];
  undefined1 local_398 [16];
  wchar_t *local_388;
  wchar_t *local_380;
  undefined2 local_378;
  wchar_t local_370 [256];
  wchar_t local_170 [4];
  longlong local_168 [36];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_15a8;
  local_14e0 = &param_4->Data;
  local_14c0 = param_2;
  local_14a8 = __return_storage_ptr__;
  if ((param_1 == (wchar_t *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("TocFilePath != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoStore.cpp"
                          ,0x4e1,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    pFVar25 = (FIoStatus *)(*pcVar10)();
    return pFVar25;
  }
  FIoStoreTocResourceStorage::FIoStoreTocResourceStorage
            ((FIoStoreTocResourceStorage *)&local_11e0,param_1);
  uVar33 = (ulonglong)local_11e0.TypeIndex;
  if ((2 < uVar33) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    pFVar25 = (FIoStatus *)(*pcVar10)();
    return pFVar25;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar33) != '\0') {
    local_10b8._8_8_ = local_1090;
    local_10b8._0_4_ = FileOpenFailed;
    local_10b8._4_4_ = 0;
    local_10a8 = local_1090;
    iVar23 = 0;
    local_10a0 = local_e90;
    local_1098 = 0;
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)(local_10b8 + 8),L"Failed to open IoStore TOC file \'"
               ,0x21);
    if (param_1 != (wchar_t *)0x0) {
      sVar26 = wcslen(param_1);
      iVar23 = (int)sVar26;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)(local_10b8 + 8),param_1,iVar23);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)(local_10b8 + 8),L"\'",1);
    FIoStatusBuilder::operator_FIoStatus((FIoStatusBuilder *)local_10b8,__return_storage_ptr__);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)(local_10b8 + 8));
    if ((2 < local_11e0.TypeIndex) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar21)) {
      pcVar10 = (code *)swi(3);
      pFVar25 = (FIoStatus *)(*pcVar10)();
      return pFVar25;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_11e0.TypeIndex])(&local_11e0);
    return __return_storage_ptr__;
  }
  local_1490 = &local_11e0;
  local_1488 = 0x90;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>,0,1,2,0,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64>(unsigned___int64,`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64)'
    ::__l2::Invokers[local_11e0.TypeIndex])(&local_1480,(<lambda_1> *)&local_1490,&local_11e0);
  if ((local_1480.ArrayNum != 0x90) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("RequestedSize == Bytes.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoStore.h"
                          ,0xc0,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    pFVar25 = (FIoStatus *)(*pcVar10)();
    return pFVar25;
  }
  local_14c8 = 1;
  uVar41 = 0;
  iVar23 = 0;
  local_14d0.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x90,8,1,0,&local_14d0,1,&local_14c4);
  uVar14 = *(undefined8 *)(local_1480.DataPtr + 8);
  *(undefined8 *)local_14d0.Data = *(undefined8 *)local_1480.DataPtr;
  *(undefined8 *)(local_14d0.Data + 8) = uVar14;
  uVar14 = *(undefined8 *)(local_1480.DataPtr + 0x18);
  *(undefined8 *)(local_14d0.Data + 0x10) = *(undefined8 *)(local_1480.DataPtr + 0x10);
  *(undefined8 *)(local_14d0.Data + 0x18) = uVar14;
  uVar14 = *(undefined8 *)(local_1480.DataPtr + 0x28);
  *(undefined8 *)(local_14d0.Data + 0x20) = *(undefined8 *)(local_1480.DataPtr + 0x20);
  *(undefined8 *)(local_14d0.Data + 0x28) = uVar14;
  uVar14 = *(undefined8 *)(local_1480.DataPtr + 0x38);
  *(undefined8 *)(local_14d0.Data + 0x30) = *(undefined8 *)(local_1480.DataPtr + 0x30);
  *(undefined8 *)(local_14d0.Data + 0x38) = uVar14;
  uVar14 = *(undefined8 *)(local_1480.DataPtr + 0x48);
  *(undefined8 *)(local_14d0.Data + 0x40) = *(undefined8 *)(local_1480.DataPtr + 0x40);
  *(undefined8 *)(local_14d0.Data + 0x48) = uVar14;
  uVar14 = *(undefined8 *)(local_1480.DataPtr + 0x58);
  *(undefined8 *)(local_14d0.Data + 0x50) = *(undefined8 *)(local_1480.DataPtr + 0x50);
  *(undefined8 *)(local_14d0.Data + 0x58) = uVar14;
  uVar14 = *(undefined8 *)(local_1480.DataPtr + 0x68);
  *(undefined8 *)(local_14d0.Data + 0x60) = *(undefined8 *)(local_1480.DataPtr + 0x60);
  *(undefined8 *)(local_14d0.Data + 0x68) = uVar14;
  uVar11 = *(undefined4 *)(local_1480.DataPtr + 0x74);
  uVar12 = *(undefined4 *)(local_1480.DataPtr + 0x78);
  uVar13 = *(undefined4 *)(local_1480.DataPtr + 0x7c);
  *(undefined4 *)(local_14d0.Data + 0x70) = *(undefined4 *)(local_1480.DataPtr + 0x70);
  *(undefined4 *)(local_14d0.Data + 0x74) = uVar11;
  *(undefined4 *)(local_14d0.Data + 0x78) = uVar12;
  *(undefined4 *)(local_14d0.Data + 0x7c) = uVar13;
  uVar11 = *(undefined4 *)(local_1480.DataPtr + 0x84);
  uVar12 = *(undefined4 *)(local_1480.DataPtr + 0x88);
  uVar13 = *(undefined4 *)(local_1480.DataPtr + 0x8c);
  *(undefined4 *)(local_14d0.Data + 0x80) = *(undefined4 *)(local_1480.DataPtr + 0x80);
  *(undefined4 *)(local_14d0.Data + 0x84) = uVar11;
  *(undefined4 *)(local_14d0.Data + 0x88) = uVar12;
  *(undefined4 *)(local_14d0.Data + 0x8c) = uVar13;
  uVar38 = 0;
  if (local_14c8 == 0) {
LAB_1417f2491:
    local_398._8_8_ = local_370;
    local_398._0_4_ = CorruptToc;
    local_398._4_4_ = 0;
    local_388 = local_370;
    local_378 = 0;
    local_380 = local_170;
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)(local_398 + 8),L"Failed to read IoStore TOC file \'",
               0x21);
    if (param_1 != (wchar_t *)0x0) {
      sVar26 = wcslen(param_1);
      iVar23 = (int)sVar26;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)(local_398 + 8),param_1,iVar23);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)(local_398 + 8),L"\'",1);
    FIoStatusBuilder::operator_FIoStatus((FIoStatusBuilder *)local_398,__return_storage_ptr__);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)(local_398 + 8));
    if (local_14d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_14d0.Data);
    }
    if ((2 < local_11e0.TypeIndex) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar21)) {
      pcVar10 = (code *)swi(3);
      pFVar25 = (FIoStatus *)(*pcVar10)();
      return pFVar25;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_11e0.TypeIndex])(&local_11e0);
    return __return_storage_ptr__;
  }
  (*(code *)(&
            PTR_VisitApplyEncoded<0,0,_FIoStoreTocResourceStorage::ReleaseOwnershipOfLastBlock_::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&>_150680a68
            )[local_11e0.TypeIndex])(&local_1557,&local_11e0);
  FVar37.Data = local_14d0.Data;
  if (local_14c8 == 0) goto LAB_1417f2491;
  memcpy(param_3,local_14d0.Data,(longlong)local_14c8 * 0x90);
  if (FVar37.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar37.Data);
  }
  iVar22 = memcmp(param_3,"-==--==--==--==-",0x10);
  if (iVar22 != 0) {
    local_e88._8_8_ = local_e60;
    local_e88._0_4_ = CorruptToc;
    local_e88._4_4_ = 0;
    local_e78 = local_e60;
    local_e68 = 0;
    local_e70 = local_c60;
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)(local_e88 + 8),
               L"TOC header magic mismatch while reading \'",0x29);
    if (param_1 != (wchar_t *)0x0) {
      sVar26 = wcslen(param_1);
      iVar23 = (int)sVar26;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)(local_e88 + 8),param_1,iVar23);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)(local_e88 + 8),L"\'",1);
    FIoStatusBuilder::operator_FIoStatus((FIoStatusBuilder *)local_e88,__return_storage_ptr__);
    this = (TStringBuilderBase<wchar_t> *)(local_e88 + 8);
LAB_1417f1323:
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(this);
    if ((2 < local_11e0.TypeIndex) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar21)) {
      pcVar10 = (code *)swi(3);
      pFVar25 = (FIoStatus *)(*pcVar10)();
      return pFVar25;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_11e0.TypeIndex])(&local_11e0);
    return __return_storage_ptr__;
  }
  if ((param_3->Header).TocHeaderSize != 0x90) {
    local_c58._8_8_ = local_c30;
    local_c58._0_4_ = CorruptToc;
    local_c58._4_4_ = 0;
    local_c48 = local_c30;
    local_c38 = 0;
    local_c40 = local_a30;
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)(local_c58 + 8),
               L"TOC header size mismatch while reading \'",0x28);
    if (param_1 != (wchar_t *)0x0) {
      sVar26 = wcslen(param_1);
      iVar23 = (int)sVar26;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)(local_c58 + 8),param_1,iVar23);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)(local_c58 + 8),L"\'",1);
    FIoStatusBuilder::operator_FIoStatus((FIoStatusBuilder *)local_c58,__return_storage_ptr__);
    this = (TStringBuilderBase<wchar_t> *)(local_c58 + 8);
    goto LAB_1417f1323;
  }
  if ((param_3->Header).TocCompressedBlockEntrySize != 0xc) {
    local_a28._8_8_ = local_a00;
    local_a28._0_4_ = CorruptToc;
    local_a28._4_4_ = 0;
    local_a18 = local_a00;
    local_a08 = 0;
    local_a10 = local_800;
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)(local_a28 + 8),
               L"TOC compressed block entry size mismatch while reading \'",0x38);
    if (param_1 != (wchar_t *)0x0) {
      sVar26 = wcslen(param_1);
      iVar23 = (int)sVar26;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)(local_a28 + 8),param_1,iVar23);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)(local_a28 + 8),L"\'",1);
    FIoStatusBuilder::operator_FIoStatus((FIoStatusBuilder *)local_a28,__return_storage_ptr__);
    this = (TStringBuilderBase<wchar_t> *)(local_a28 + 8);
    goto LAB_1417f1323;
  }
  bVar6 = (param_3->Header).Version;
  if (bVar6 < 2) {
    local_7f8._8_8_ = local_7d0;
    local_7f8._0_4_ = CorruptToc;
    local_7f8._4_4_ = 0;
    local_7e8 = local_7d0;
    local_7d8 = 0;
    local_7e0 = local_5d0;
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)(local_7f8 + 8),
               L"Outdated TOC header version while reading \'",0x2b);
    if (param_1 != (wchar_t *)0x0) {
      sVar26 = wcslen(param_1);
      iVar23 = (int)sVar26;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)(local_7f8 + 8),param_1,iVar23);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)(local_7f8 + 8),L"\'",1);
    FIoStatusBuilder::operator_FIoStatus((FIoStatusBuilder *)local_7f8,__return_storage_ptr__);
    this = (TStringBuilderBase<wchar_t> *)(local_7f8 + 8);
    goto LAB_1417f1323;
  }
  if (8 < bVar6) {
    local_5c8._8_8_ = local_5a0;
    local_5c8._0_4_ = CorruptToc;
    local_5c8._4_4_ = 0;
    local_5b8 = local_5a0;
    local_5a8 = 0;
    local_5b0 = local_3a0;
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)(local_5c8 + 8),
               L"Too new TOC header version while reading \'",0x2a);
    if (param_1 != (wchar_t *)0x0) {
      sVar26 = wcslen(param_1);
      iVar23 = (int)sVar26;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)(local_5c8 + 8),param_1,iVar23);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)(local_5c8 + 8),L"\'",1);
    FIoStatusBuilder::operator_FIoStatus((FIoStatusBuilder *)local_5c8,__return_storage_ptr__);
    this = (TStringBuilderBase<wchar_t> *)(local_5c8 + 8);
    goto LAB_1417f1323;
  }
  uVar7 = (param_3->Header).TocEntryCount;
  local_1470 = &local_11e0;
  local_1468 = uVar7 * 0xc;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>,0,1,2,0,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64>(unsigned___int64,`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64)'
    ::__l2::Invokers[local_11e0.TypeIndex])(&local_1460,(<lambda_1> *)&local_1470,&local_11e0);
  if ((uVar7 * 0xc != local_1460.ArrayNum) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("RequestedSize == Bytes.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoStore.h"
                          ,0xc0,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    pFVar25 = (FIoStatus *)(*pcVar10)();
    return pFVar25;
  }
  local_14f0 = (int *)local_1460.DataPtr;
  uStack_14e8 = uVar7;
  if (((int)uVar7 < 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    pFVar25 = (FIoStatus *)(*pcVar10)();
    return pFVar25;
  }
  local_1450 = &local_11e0;
  (param_3->ChunkIds).DataPtr = (FIoChunkId *)local_14f0;
  *(ulonglong *)&(param_3->ChunkIds).ArrayNum = CONCAT44(uStack_14e4,uStack_14e8);
  uVar7 = (param_3->Header).TocEntryCount;
  local_1448 = uVar7 * 10;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>,0,1,2,0,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64>(unsigned___int64,`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64)'
    ::__l2::Invokers[local_11e0.TypeIndex])(&local_1440,(<lambda_1> *)&local_1450,&local_11e0);
  if ((uVar7 * 10 != local_1440.ArrayNum) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("RequestedSize == Bytes.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoStore.h"
                          ,0xc0,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    pFVar25 = (FIoStatus *)(*pcVar10)();
    return pFVar25;
  }
  local_14f0 = (int *)local_1440.DataPtr;
  uStack_14e8 = uVar7;
  if (((int)uVar7 < 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    pFVar25 = (FIoStatus *)(*pcVar10)();
    return pFVar25;
  }
  (param_3->ChunkOffsetLengths).DataPtr = (FIoOffsetAndLength *)local_14f0;
  *(ulonglong *)&(param_3->ChunkOffsetLengths).ArrayNum = CONCAT44(uStack_14e4,uStack_14e8);
  bVar6 = (param_3->Header).Version;
  if (bVar6 < 5) {
    if (bVar6 < 4) goto LAB_1417f154f;
  }
  else {
    uVar38 = (param_3->Header).TocChunksWithoutPerfectHashCount;
  }
  uVar7 = (param_3->Header).TocChunkPerfectHashSeedsCount;
  if (uVar7 != 0) {
    pTVar27 = FIoStoreTocResourceStorage::ChopView<int>
                        ((FIoStoreTocResourceStorage *)&local_11e0,&local_1338,uVar7);
    iVar23 = pTVar27->ArrayNum;
    uVar11 = *(undefined4 *)&pTVar27->field_0xc;
    (param_3->ChunkPerfectHashSeeds).DataPtr = pTVar27->DataPtr;
    (param_3->ChunkPerfectHashSeeds).ArrayNum = iVar23;
    *(undefined4 *)&(param_3->ChunkPerfectHashSeeds).field_0xc = uVar11;
  }
  if (uVar38 != 0) {
    pTVar27 = FIoStoreTocResourceStorage::ChopView<int>
                        ((FIoStoreTocResourceStorage *)&local_11e0,&local_1328,uVar38);
    iVar23 = pTVar27->ArrayNum;
    uVar11 = *(undefined4 *)&pTVar27->field_0xc;
    (param_3->ChunkIndicesWithoutPerfectHash).DataPtr = pTVar27->DataPtr;
    (param_3->ChunkIndicesWithoutPerfectHash).ArrayNum = iVar23;
    *(undefined4 *)&(param_3->ChunkIndicesWithoutPerfectHash).field_0xc = uVar11;
  }
LAB_1417f154f:
  uVar38 = (param_3->Header).TocCompressedBlockEntryCount;
  local_1430 = &local_11e0;
  local_1428 = uVar38 * 0xc;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>,0,1,2,0,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64>(unsigned___int64,`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64)'
    ::__l2::Invokers[local_11e0.TypeIndex])(&local_1420,(<lambda_1> *)&local_1430,&local_11e0);
  if ((uVar38 * 0xc != local_1420.ArrayNum) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("RequestedSize == Bytes.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoStore.h"
                          ,0xc0,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    pFVar25 = (FIoStatus *)(*pcVar10)();
    return pFVar25;
  }
  local_14f0 = (int *)local_1420.DataPtr;
  uStack_14e8 = uVar38;
  if (((int)uVar38 < 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    pFVar25 = (FIoStatus *)(*pcVar10)();
    return pFVar25;
  }
  pTVar3 = &param_3->CompressionMethods;
  (param_3->CompressionBlocks).DataPtr = (FIoStoreTocCompressedBlockEntry *)local_14f0;
  *(ulonglong *)&(param_3->CompressionBlocks).ArrayNum = CONCAT44(uStack_14e4,uStack_14e8);
  uVar38 = (param_3->Header).CompressionMethodNameCount + 1;
  if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar38);
  }
  iVar23 = (param_3->CompressionMethods).ArrayMax;
  piVar1 = &(param_3->CompressionMethods).ArrayMax;
  local_14f0 = piVar1;
  if (iVar23 < (int)uVar38) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar38,&pTVar3->AllocatorInstance,(param_3->CompressionMethods).ArrayNum,piVar1);
    iVar23 = *piVar1;
  }
  pFVar42 = (pTVar3->AllocatorInstance).Data;
  local_1508 = 0;
  if (((pFVar42 <= (FScriptContainerElement *)&local_1508) &&
      ((FScriptContainerElement *)&local_1508 < pFVar42 + (longlong)iVar23 * 8)) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar21)) {
    pcVar10 = (code *)swi(3);
    pFVar25 = (FIoStatus *)(*pcVar10)();
    return pFVar25;
  }
  iVar23 = (param_3->CompressionMethods).ArrayNum;
  if (iVar23 == (param_3->CompressionMethods).ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&pTVar3->AllocatorInstance,piVar1);
  }
  (param_3->CompressionMethods).ArrayNum = iVar23 + 1;
  *(undefined8 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar23 * 8) = local_1508;
  local_1410 = &local_11e0;
  iVar23 = (param_3->Header).CompressionMethodNameLength *
           (param_3->Header).CompressionMethodNameCount;
  local_1408 = iVar23;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>,0,1,2,0,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64>(unsigned___int64,`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64)'
    ::__l2::Invokers[local_11e0.TypeIndex])(&local_1400,(<lambda_1> *)&local_1410,&local_11e0);
  if ((iVar23 != local_1400.ArrayNum) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("RequestedSize == Bytes.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoStore.h"
                          ,0xc0,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    pFVar25 = (FIoStatus *)(*pcVar10)();
    return pFVar25;
  }
  if ((iVar23 < 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    pFVar25 = (FIoStatus *)(*pcVar10)();
    return pFVar25;
  }
  local_1500.Data = (FScriptContainerElement *)0x0;
  local_14f8 = iVar23;
  if (iVar23 == 0) {
    local_14f4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar23,0,&local_1500,iVar23,&local_14f4);
    memcpy(local_1500.Data,local_1400.DataPtr,(longlong)iVar23);
  }
  if (local_14f8 != 0) {
    (*(code *)(&
              PTR_VisitApplyEncoded<0,0,_FIoStoreTocResourceStorage::ReleaseOwnershipOfLastBlock_::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&>_150680a68
              )[local_11e0.TypeIndex])(local_1556,&local_11e0);
  }
  piVar1 = local_14f0;
  FVar37.Data = local_1500.Data;
  if ((param_3->Header).CompressionMethodNameCount != 0) {
    pTVar3 = &param_3->CompressionMethods;
    do {
      pFVar28 = ::FName::FName(&local_1340,
                               (char *)(FVar37.Data +
                                       uVar41 * (param_3->Header).CompressionMethodNameLength));
      pFVar8 = (FName *)(pTVar3->AllocatorInstance).Data;
      if (((pFVar8 <= pFVar28) && (pFVar28 < pFVar8 + (param_3->CompressionMethods).ArrayMax)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar21)) {
        pcVar10 = (code *)swi(3);
        pFVar25 = (FIoStatus *)(*pcVar10)();
        return pFVar25;
      }
      iVar23 = (param_3->CompressionMethods).ArrayNum;
      if (iVar23 == (param_3->CompressionMethods).ArrayMax) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&pTVar3->AllocatorInstance,piVar1);
      }
      (param_3->CompressionMethods).ArrayNum = iVar23 + 1;
      uVar41 = uVar41 + 1;
      *(FName *)((pTVar3->AllocatorInstance).Data + (longlong)iVar23 * 8) = *pFVar28;
      param_4 = (FIoStoreTocResourceStorage *)local_14e0;
    } while (uVar41 < (param_3->Header).CompressionMethodNameCount);
  }
  if (local_1500.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1500.Data);
  }
  if (((param_3->Header).ContainerFlags & Signed) != None) {
    local_13f0 = &local_11e0;
    local_13e8 = 4;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>,0,1,2,0,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64>(unsigned___int64,`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64)'
      ::__l2::Invokers[local_11e0.TypeIndex])(&local_13e0,(<lambda_1> *)&local_13f0,&local_11e0);
    if ((local_13e0.ArrayNum != 4) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("RequestedSize == Bytes.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoStore.h"
                            ,0xc0,L""), bVar21)) {
      pcVar10 = (code *)swi(3);
      pFVar25 = (FIoStatus *)(*pcVar10)();
      return pFVar25;
    }
    local_14b8.Data = (FScriptContainerElement *)0x0;
    local_14b0 = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,1,0,&local_14b8,1,&local_14ac);
    *(int *)local_14b8.Data = *(int *)local_13e0.DataPtr;
    if (((local_14b0 == 0) ||
        ((*(code *)(&
                   PTR_VisitApplyEncoded<0,0,_FIoStoreTocResourceStorage::ReleaseOwnershipOfLastBlock_::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&>_150680a68
                   )[local_11e0.TypeIndex])(&local_1554,&local_11e0), local_14b0 < 1)) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar10 = (code *)swi(3);
      pFVar25 = (FIoStatus *)(*pcVar10)();
      return pFVar25;
    }
    iVar23 = *(int *)local_14b8.Data;
    if (local_14b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_14b8.Data);
    }
    uVar38 = iVar23 * 2;
    local_1548.Data = (FScriptContainerElement *)0x0;
    local_1540[0] = 0;
    local_1540[1] = 0;
    if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar38);
    }
    if (0 < (int)uVar38) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar38,&local_1548,0,local_1540 + 1);
    }
    local_13d0 = &local_11e0;
    local_13c8 = iVar23;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>,0,1,2,0,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64>(unsigned___int64,`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64)'
      ::__l2::Invokers[local_11e0.TypeIndex])(&local_13c0,(<lambda_1> *)&local_13d0,&local_11e0);
    if ((iVar23 != local_13c0.ArrayNum) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("RequestedSize == Bytes.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoStore.h"
                            ,0xc0,L""), bVar21)) {
      pcVar10 = (code *)swi(3);
      pFVar25 = (FIoStatus *)(*pcVar10)();
      return pFVar25;
    }
    if ((iVar23 < 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar21)) {
      pcVar10 = (code *)swi(3);
      pFVar25 = (FIoStatus *)(*pcVar10)();
      return pFVar25;
    }
    local_1528.Data = (FScriptContainerElement *)0x0;
    local_1520 = iVar23;
    if (iVar23 == 0) {
      local_151c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar23,0,&local_1528,iVar23,&local_151c);
      memcpy(local_1528.Data,local_13c0.DataPtr,(longlong)iVar23);
    }
    if ((local_1520 != 0) &&
       ((*(code *)(&
                  PTR_VisitApplyEncoded<0,0,_FIoStoreTocResourceStorage::ReleaseOwnershipOfLastBlock_::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&>_150680a68
                  )[local_11e0.TypeIndex])(&local_1553,&local_11e0), iVar22 = local_1520,
       local_1520 != 0)) {
      iVar24 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,local_1520,&local_1548,local_1540,local_1540 + 1);
      memmove(local_1548.Data + iVar24,local_1528.Data,(longlong)iVar22);
      local_1520 = 0;
    }
    if (local_1528.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1528.Data);
    }
    local_13b0 = &local_11e0;
    local_13a8 = iVar23;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>,0,1,2,0,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64>(unsigned___int64,`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64)'
      ::__l2::Invokers[local_11e0.TypeIndex])(&local_13a0,(<lambda_1> *)&local_13b0,&local_11e0);
    if ((iVar23 != local_13a0.ArrayNum) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("RequestedSize == Bytes.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoStore.h"
                            ,0xc0,L""), bVar21)) {
      pcVar10 = (code *)swi(3);
      pFVar25 = (FIoStatus *)(*pcVar10)();
      return pFVar25;
    }
    if ((iVar23 < 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar21)) {
      pcVar10 = (code *)swi(3);
      pFVar25 = (FIoStatus *)(*pcVar10)();
      return pFVar25;
    }
    local_1518.Data = (FScriptContainerElement *)0x0;
    local_1510 = iVar23;
    if (iVar23 == 0) {
      local_150c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar23,0,&local_1518,iVar23,&local_150c);
      memcpy(local_1518.Data,local_13a0.DataPtr,(longlong)iVar23);
    }
    if ((local_1510 != 0) &&
       ((*(code *)(&
                  PTR_VisitApplyEncoded<0,0,_FIoStoreTocResourceStorage::ReleaseOwnershipOfLastBlock_::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&>_150680a68
                  )[local_11e0.TypeIndex])(&local_1552,&local_11e0), iVar22 = local_1510,
       local_1510 != 0)) {
      iVar24 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,local_1510,&local_1548,local_1540,local_1540 + 1);
      memmove(local_1548.Data + iVar24,local_1518.Data,(longlong)iVar22);
      local_1510 = 0;
    }
    if (local_1518.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1518.Data);
    }
    FSHA1::HashBuffer(local_1548.Data,(longlong)local_1540[0],(param_3->SignatureHash).Hash);
    if (iVar23 < 0) {
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar21) {
        pcVar10 = (code *)swi(3);
        pFVar25 = (FIoStatus *)(*pcVar10)();
        return pFVar25;
      }
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar21) {
        pcVar10 = (code *)swi(3);
        pFVar25 = (FIoStatus *)(*pcVar10)();
        return pFVar25;
      }
    }
    uVar38 = (param_3->Header).TocCompressedBlockEntryCount;
    local_1390 = &local_11e0;
    local_1388 = uVar38 * 0x14;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>,0,1,2,0,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64>(unsigned___int64,`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64)'
      ::__l2::Invokers[local_11e0.TypeIndex])(&local_1380,(<lambda_1> *)&local_1390,&local_11e0);
    if ((uVar38 * 0x14 != local_1380.ArrayNum) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("RequestedSize == Bytes.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoStore.h"
                            ,0xc0,L""), bVar21)) {
      pcVar10 = (code *)swi(3);
      pFVar25 = (FIoStatus *)(*pcVar10)();
      return pFVar25;
    }
    local_14e0 = (TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
                  *)local_1380.DataPtr;
    uStack_14d8 = uVar38;
    if (((int)uVar38 < 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar21)) {
      pcVar10 = (code *)swi(3);
      pFVar25 = (FIoStatus *)(*pcVar10)();
      return pFVar25;
    }
    (param_3->ChunkBlockSignatures).DataPtr = (FSHAHash *)local_14e0;
    *(ulonglong *)&(param_3->ChunkBlockSignatures).ArrayNum = CONCAT44(uStack_14d4,uStack_14d8);
    if (local_1548.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1548.Data);
    }
  }
  EVar19 = local_14c0;
  if ((((local_14c0 & ReadDirectoryIndex) != Default) &&
      (((param_3->Header).ContainerFlags & Indexed) != None)) &&
     (uVar38 = (param_3->Header).DirectoryIndexSize, uVar38 != 0)) {
    pTVar29 = FIoStoreTocResourceStorage::ChopView<unsigned_char>
                        ((FIoStoreTocResourceStorage *)&local_11e0,&local_1318,uVar38);
    iVar23 = pTVar29->ArrayNum;
    uVar11 = *(undefined4 *)&pTVar29->field_0xc;
    (param_3->DirectoryIndexBuffer).DataPtr = pTVar29->DataPtr;
    (param_3->DirectoryIndexBuffer).ArrayNum = iVar23;
    *(undefined4 *)&(param_3->DirectoryIndexBuffer).field_0xc = uVar11;
  }
  if ((EVar19 & ReadTocMeta) != Default) {
    uVar38 = (param_3->Header).TocEntryCount;
    if ((param_3->Header).Version < 8) {
      local_1350 = &local_11e0;
      local_1348 = uVar38 * 0x21;
      (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>,0,1,2,0,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64>(unsigned___int64,`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64)'
        ::__l2::Invokers[local_11e0.TypeIndex])(&local_14a0,(<lambda_1> *)&local_1350,&local_11e0);
      if ((uVar38 * 0x21 != local_14a0.ArrayNum) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("RequestedSize == Bytes.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoStore.h"
                              ,0xc0,L""), bVar21)) {
        pcVar10 = (code *)swi(3);
        pFVar25 = (FIoStatus *)(*pcVar10)();
        return pFVar25;
      }
      if (((int)uVar38 < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar21)) {
        pcVar10 = (code *)swi(3);
        pFVar25 = (FIoStatus *)(*pcVar10)();
        return pFVar25;
      }
      local_1538.Data = (FScriptContainerElement *)0x0;
      local_1530 = uVar38;
      if (uVar38 == 0) {
        local_152c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x21,1,uVar38,0,&local_1538,uVar38,&local_152c);
        memcpy(local_1538.Data,local_14a0.DataPtr,(longlong)(int)uVar38 * 0x21);
      }
      if (local_1530 != 0) {
        (*(code *)(&
                  PTR_VisitApplyEncoded<0,0,_FIoStoreTocResourceStorage::ReleaseOwnershipOfLastBlock_::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&>_150680a68
                  )[local_11e0.TypeIndex])(&local_1551,&local_11e0);
      }
      uVar33 = (ulonglong)local_1530;
      pTVar4 = &param_3->LegacyChunkMetas;
      if ((int)local_1530 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar33);
      }
      if ((param_3->LegacyChunkMetas).ArrayMax < (int)local_1530) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,local_1530,&pTVar4->AllocatorInstance,(param_3->LegacyChunkMetas).ArrayNum
                   ,&(param_3->LegacyChunkMetas).ArrayMax);
        uVar33 = (ulonglong)local_1530;
      }
      iVar23 = (int)uVar33;
      pFVar42 = local_1538.Data + (longlong)iVar23 * 0x21;
      FVar37.Data = local_1538.Data;
      while( true ) {
        if ((int)uVar33 != iVar23) {
          local_1558 = 0;
          `TCheckedPointerIterator<`FIoStoreTocResourceView::Read'::__l71::FIoStoreTocEntryMetaOld,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_1558);
        }
        if (FVar37.Data == pFVar42) break;
        iVar22 = (param_3->LegacyChunkMetas).ArrayNum;
        if (iVar22 == (param_3->LegacyChunkMetas).ArrayMax) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x418,&pTVar4->AllocatorInstance,&(param_3->LegacyChunkMetas).ArrayMax
                             );
        }
        (param_3->LegacyChunkMetas).ArrayNum = iVar22 + 1;
        pFVar9 = (pTVar4->AllocatorInstance).Data;
        pFVar5 = pFVar9 + (longlong)iVar22 * 0x18;
        *(undefined8 *)pFVar5 = 0;
        *(undefined8 *)(pFVar5 + 8) = 0;
        pFVar9 = pFVar9 + (longlong)iVar22 * 0x18;
        *(undefined4 *)(pFVar9 + 0x10) = 0;
        pFVar9[0x14] = (FScriptContainerElement)0x0;
        *(undefined2 *)(pFVar9 + 0x15) = 0;
        pFVar9[0x17] = (FScriptContainerElement)0x0;
        uVar14 = *(undefined8 *)(FVar37.Data + 8);
        *(undefined8 *)pFVar9 = *(undefined8 *)FVar37.Data;
        *(undefined8 *)(pFVar9 + 8) = uVar14;
        *(undefined4 *)(pFVar9 + 0x10) = *(undefined4 *)(FVar37.Data + 0x10);
        pFVar5 = FVar37.Data + 0x20;
        FVar37.Data = FVar37.Data + 0x21;
        pFVar9[0x14] = *pFVar5;
        uVar33 = (ulonglong)local_1530;
      }
      local_14e0 = (TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
                    *)(pTVar4->AllocatorInstance).Data;
      uVar38 = (param_3->LegacyChunkMetas).ArrayNum;
      if (((int)uVar38 < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar21)) {
        pcVar10 = (code *)swi(3);
        pFVar25 = (FIoStatus *)(*pcVar10)();
        return pFVar25;
      }
      (param_3->ChunkMetas).DataPtr = (FIoStoreTocEntryMeta *)local_14e0;
      *(ulonglong *)&(param_3->ChunkMetas).ArrayNum = CONCAT44(uStack_14d4,uVar38);
      uStack_14d8 = uVar38;
      if (local_1538.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1538.Data);
      }
    }
    else {
      local_1370 = &local_11e0;
      local_1368 = uVar38 * 0x18;
      (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>,0,1,2,0,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64>(unsigned___int64,`private:_class_TArrayView<unsigned_char_const_,int>___cdecl_FIoStoreTocResourceStorage::ChopBytes(int)___ptr64'::`2'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>&___ptr64)'
        ::__l2::Invokers[local_11e0.TypeIndex])(&local_1360,(<lambda_1> *)&local_1370,&local_11e0);
      if ((uVar38 * 0x18 != local_1360.ArrayNum) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("RequestedSize == Bytes.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoStore.h"
                              ,0xc0,L""), bVar21)) {
        pcVar10 = (code *)swi(3);
        pFVar25 = (FIoStatus *)(*pcVar10)();
        return pFVar25;
      }
      local_14e0 = (TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
                    *)local_1360.DataPtr;
      uStack_14d8 = uVar38;
      if (((int)uVar38 < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar21)) {
        pcVar10 = (code *)swi(3);
        pFVar25 = (FIoStatus *)(*pcVar10)();
        return pFVar25;
      }
      (param_3->ChunkMetas).DataPtr = (FIoStoreTocEntryMeta *)local_14e0;
      *(ulonglong *)&(param_3->ChunkMetas).ArrayNum = CONCAT44(uStack_14d4,uStack_14d8);
    }
  }
  if ((param_3->Header).Version < 3) {
    (param_3->Header).PartitionCount = 1;
    (param_3->Header).PartitionSize = 0xffffffffffffffff;
  }
  (*(code *)(&
            PTR_VisitApplyEncoded<0,0,_FIoStoreTocResourceStorage::FinalizeRead_::__l2::<lambda_1>_&,TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>_&>_150680a80
            )[local_11e0.TypeIndex])(local_1550,&local_11e0);
  if (&local_11e0 != &param_4->Data) {
    uVar33 = (ulonglong)local_11e0.TypeIndex;
    local_48 = local_11e0.TypeIndex;
    if ((2 < uVar33) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0x105,L""), bVar21)) {
      pcVar10 = (code *)swi(3);
      pFVar25 = (FIoStatus *)(*pcVar10)();
      return pFVar25;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[uVar33])(local_168,&local_11e0);
    lVar35 = 2;
    lVar39 = 2;
    plVar20 = local_168;
    plVar32 = local_1308;
    do {
      plVar34 = plVar32;
      plVar30 = plVar20;
      lVar15 = plVar30[1];
      lVar16 = plVar30[2];
      lVar17 = plVar30[3];
      *plVar34 = *plVar30;
      plVar34[1] = lVar15;
      lVar15 = plVar30[4];
      lVar40 = plVar30[5];
      plVar34[2] = lVar16;
      plVar34[3] = lVar17;
      lVar16 = plVar30[6];
      lVar17 = plVar30[7];
      plVar34[4] = lVar15;
      plVar34[5] = lVar40;
      lVar15 = plVar30[8];
      lVar40 = plVar30[9];
      plVar34[6] = lVar16;
      plVar34[7] = lVar17;
      lVar16 = plVar30[10];
      lVar17 = plVar30[0xb];
      plVar34[8] = lVar15;
      plVar34[9] = lVar40;
      lVar15 = plVar30[0xc];
      lVar40 = plVar30[0xd];
      plVar34[10] = lVar16;
      plVar34[0xb] = lVar17;
      lVar16 = plVar30[0xe];
      lVar17 = plVar30[0xf];
      plVar34[0xc] = lVar15;
      plVar34[0xd] = lVar40;
      plVar34[0xe] = lVar16;
      plVar34[0xf] = lVar17;
      lVar39 = lVar39 + -1;
      plVar20 = plVar30 + 0x10;
      plVar32 = plVar34 + 0x10;
    } while (lVar39 != 0);
    lVar15 = plVar30[0x11];
    lVar40 = 2;
    lVar16 = plVar30[0x12];
    lVar17 = plVar30[0x13];
    lVar39 = plVar30[0x14];
    plVar34[0x10] = plVar30[0x10];
    plVar34[0x11] = lVar15;
    plVar34[0x12] = lVar16;
    plVar34[0x13] = lVar17;
    plVar34[0x14] = lVar39;
    pTVar36 = &param_4->Data;
    plVar20 = local_168;
    do {
      plVar32 = plVar20;
      pTVar31 = pTVar36;
      lVar39 = pTVar31->_padding_;
      lVar15 = pTVar31->_padding_;
      lVar16 = pTVar31->_padding_;
      *plVar32 = pTVar31->_padding_;
      plVar32[1] = lVar39;
      lVar39 = pTVar31->_padding_;
      lVar17 = pTVar31->_padding_;
      plVar32[2] = lVar15;
      plVar32[3] = lVar16;
      lVar15 = pTVar31->_padding_;
      lVar16 = pTVar31->_padding_;
      plVar32[4] = lVar39;
      plVar32[5] = lVar17;
      lVar39 = pTVar31->_padding_;
      lVar17 = pTVar31->_padding_;
      plVar32[6] = lVar15;
      plVar32[7] = lVar16;
      lVar15 = pTVar31->_padding_;
      lVar16 = pTVar31->_padding_;
      plVar32[8] = lVar39;
      plVar32[9] = lVar17;
      lVar39 = pTVar31->_padding_;
      lVar17 = pTVar31->_padding_;
      plVar32[10] = lVar15;
      plVar32[0xb] = lVar16;
      lVar15 = pTVar31->_padding_;
      lVar16 = pTVar31->_padding_;
      plVar32[0xc] = lVar39;
      plVar32[0xd] = lVar17;
      plVar32[0xe] = lVar15;
      plVar32[0xf] = lVar16;
      lVar40 = lVar40 + -1;
      pTVar36 = (TVariant<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>
                 *)&pTVar31->_padding_;
      plVar20 = plVar32 + 0x10;
    } while (lVar40 != 0);
    lVar15 = pTVar31->_padding_;
    lVar16 = pTVar31->_padding_;
    lVar17 = pTVar31->_padding_;
    lVar39 = pTVar31->_padding_;
    plVar32[0x10] = pTVar31->_padding_;
    plVar32[0x11] = lVar15;
    plVar32[0x12] = lVar16;
    plVar32[0x13] = lVar17;
    plVar32[0x14] = lVar39;
    plVar20 = local_1308;
    do {
      pTVar36 = &param_4->Data;
      plVar32 = plVar20;
      lVar39 = plVar32[1];
      lVar15 = plVar32[2];
      lVar16 = plVar32[3];
      pTVar36->_padding_ = *plVar32;
      pTVar36->_padding_ = lVar39;
      lVar39 = plVar32[4];
      lVar17 = plVar32[5];
      pTVar36->_padding_ = lVar15;
      pTVar36->_padding_ = lVar16;
      lVar15 = plVar32[6];
      lVar16 = plVar32[7];
      pTVar36->_padding_ = lVar39;
      pTVar36->_padding_ = lVar17;
      lVar39 = plVar32[8];
      lVar17 = plVar32[9];
      pTVar36->_padding_ = lVar15;
      pTVar36->_padding_ = lVar16;
      lVar15 = plVar32[10];
      lVar16 = plVar32[0xb];
      pTVar36->_padding_ = lVar39;
      pTVar36->_padding_ = lVar17;
      lVar39 = plVar32[0xc];
      lVar17 = plVar32[0xd];
      pTVar36->_padding_ = lVar15;
      pTVar36->_padding_ = lVar16;
      lVar15 = plVar32[0xe];
      lVar16 = plVar32[0xf];
      pTVar36->_padding_ = lVar39;
      pTVar36->_padding_ = lVar17;
      pTVar36->_padding_ = lVar15;
      pTVar36->_padding_ = lVar16;
      lVar35 = lVar35 + -1;
      plVar20 = plVar32 + 0x10;
      param_4 = (FIoStoreTocResourceStorage *)&pTVar36->_padding_;
    } while (lVar35 != 0);
    lVar39 = plVar32[0x11];
    uVar33 = (ulonglong)local_48;
    lVar15 = plVar32[0x12];
    lVar16 = plVar32[0x13];
    lVar35 = plVar32[0x14];
    pTVar36->_padding_ = plVar32[0x10];
    pTVar36->_padding_ = lVar39;
    pTVar36->_padding_ = lVar15;
    pTVar36->_padding_ = lVar16;
    pTVar36->_padding_ = lVar35;
    if ((2 < uVar33) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar21)) {
      pcVar10 = (code *)swi(3);
      pFVar25 = (FIoStatus *)(*pcVar10)();
      return pFVar25;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar33])(local_168);
  }
  pFVar25 = local_14a8;
  TVar18.Chars = FIoStatus::Ok.ErrorMessage.Chars;
  (local_14a8->ErrorMessage).Chars = FIoStatus::Ok.ErrorMessage.Chars;
  if (TVar18.Chars != (wchar_t *)0x0) {
    LOCK();
    pwVar2 = TVar18.Chars + -4;
    *(int *)pwVar2 = *(int *)pwVar2 + 1;
    UNLOCK();
  }
  local_14a8->ErrorCode = FIoStatus::Ok.ErrorCode;
  local_14a8->SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
  if ((2 < local_11e0.TypeIndex) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    pFVar25 = (FIoStatus *)(*pcVar10)();
    return pFVar25;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_11e0.TypeIndex])(&local_11e0);
  return pFVar25;
}

