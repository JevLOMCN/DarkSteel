// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// FPipelineCacheFileData @ 145c45820

FPipelineCacheFileData * __thiscall
FPipelineCacheFileData::FPipelineCacheFileData(FPipelineCacheFileData *this)

{
  (this->Header).Guid.A = 0;
  (this->Header).Guid.B = 0;
  (this->Header).Guid.C = 0;
  (this->Header).Guid.D = 0;
  *(undefined8 *)&this->PSOs = 0;
  *(undefined8 *)&(this->PSOs).field_0x8 = 0;
  *(undefined8 *)&(this->PSOs).field_0x20 = 0;
  *(undefined4 *)&(this->PSOs).field_0x28 = 0;
  *(undefined4 *)&(this->PSOs).field_0x2c = 0x80;
  *(undefined4 *)&(this->PSOs).field_0x34 = 0;
  *(undefined4 *)&(this->PSOs).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PSOs).field_0x40 = 0;
  *(undefined4 *)&(this->PSOs).field_0x48 = 0;
  *(undefined8 *)&(this->TOC).MetaData = 0;
  *(undefined8 *)&(this->TOC).MetaData.field_0x8 = 0;
  *(undefined8 *)&(this->TOC).MetaData.field_0x20 = 0;
  (this->TOC).SortedOrder = MostToLeastUsed;
  *(undefined4 *)&(this->TOC).MetaData.field_0x28 = 0;
  *(undefined4 *)&(this->TOC).MetaData.field_0x2c = 0x80;
  *(undefined4 *)&(this->TOC).MetaData.field_0x34 = 0;
  *(undefined4 *)&(this->TOC).MetaData.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TOC).MetaData.field_0x40 = 0;
  *(undefined4 *)&(this->TOC).MetaData.field_0x48 = 0;
  return this;
}

// Open @ 145c63de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FPipelineCacheFileData * __cdecl
FPipelineCacheFileData::Open(FPipelineCacheFileData *__return_storage_ptr__,FString *param_1)

{
  TMap<unsigned_int,FPipelineCacheFileFormatPSO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>_>
  *this;
  TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
  *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  DescriptorType DVar4;
  undefined1 *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
  *pTVar8;
  void *pvVar9;
  bool bVar10;
  uint uVar11;
  IFileManager *pIVar12;
  FArchive *pFVar13;
  FPipelineCacheFileData *pFVar14;
  longlong lVar15;
  FPipelineCacheFileFormatPSO *pFVar16;
  byte bVar17;
  undefined1 *puVar18;
  wchar_t *pwVar19;
  FSHAHash *pFVar20;
  int iVar21;
  uint *puVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  FPipelineFileCacheRayTracingDesc *pFVar27;
  uint uVar28;
  TBitArray<FDefaultBitArrayAllocator> *pTVar29;
  undefined1 auStackY_5f8 [32];
  undefined1 local_5c8;
  undefined1 local_5c7;
  undefined1 local_5c6 [6];
  TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
  *local_5c0;
  int local_5b8 [2];
  TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
  *local_5b0;
  undefined8 uStack_5a8;
  undefined1 *puStack_5a0;
  uint uStack_598;
  int iStack_594;
  int iStack_590;
  undefined4 uStack_58c;
  int local_588;
  undefined4 uStack_584;
  uint local_580 [2];
  FArchive *local_578;
  int local_570;
  uint uStack_56c;
  undefined1 *puStack_568;
  undefined4 local_560;
  int iStack_55c;
  int iStack_558;
  undefined4 uStack_554;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_550;
  undefined1 local_530 [8];
  undefined1 local_528 [8];
  undefined1 local_520 [8];
  int local_518;
  int local_514;
  int local_50c;
  FPipelineCacheFileData *local_508;
  int local_500;
  int local_4fc;
  undefined1 local_4f8 [16];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4e8;
  undefined8 uStack_4c8;
  TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
  *local_4c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4b8;
  undefined8 uStack_498;
  TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
  *local_490;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_488;
  undefined8 uStack_468;
  FSparseArrayAllocationInfo local_460;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined4 local_440;
  undefined8 local_43c;
  undefined8 uStack_434;
  undefined4 local_42c;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined4 local_418;
  undefined8 local_414;
  undefined8 uStack_40c;
  undefined4 local_404;
  undefined4 local_3e4;
  undefined4 local_3c4;
  undefined1 local_3b8 [40];
  int local_390;
  int local_38c;
  int local_388;
  int local_384;
  ForElementType<FSetElementId> local_378;
  int local_370;
  TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
  local_368;
  FPipelineCacheFileFormatPSO local_318;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_5f8;
  (__return_storage_ptr__->Header).Guid.A = 0;
  (__return_storage_ptr__->Header).Guid.B = 0;
  (__return_storage_ptr__->Header).Guid.C = 0;
  (__return_storage_ptr__->Header).Guid.D = 0;
  *(undefined8 *)&__return_storage_ptr__->PSOs = 0;
  *(undefined8 *)&(__return_storage_ptr__->PSOs).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->PSOs).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->PSOs).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->PSOs).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->PSOs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->PSOs).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->PSOs).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->PSOs).field_0x48 = 0;
  (__return_storage_ptr__->TOC).SortedOrder = MostToLeastUsed;
  *(undefined8 *)&(__return_storage_ptr__->TOC).MetaData = 0;
  *(undefined8 *)&(__return_storage_ptr__->TOC).MetaData.field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->TOC).MetaData.field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->TOC).MetaData.field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->TOC).MetaData.field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->TOC).MetaData.field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->TOC).MetaData.field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->TOC).MetaData.field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->TOC).MetaData.field_0x48 = 0;
  (__return_storage_ptr__->Header).Magic = 0;
  local_5c0 = (TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
               *)param_1;
  local_508 = __return_storage_ptr__;
  pIVar12 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar19 = L"";
  }
  else {
    pwVar19 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar13 = (FArchive *)(**(code **)((longlong)*pIVar12 + 0x18))(pIVar12,pwVar19);
  local_578 = pFVar13;
  if (pFVar13 == (FArchive *)0x0) {
    if ((byte)LogRHI._0_1_ < 2) {
      return __return_storage_ptr__;
    }
    UE::Logging::Private::BasicLog<2>
              (&`public:_static_struct_FPipelineCacheFileData___cdecl_FPipelineCacheFileData::Open(FString_const&___ptr64)'
                ::__l93::LOG_Static,(FLogCategoryBase *)&LogRHI);
    return __return_storage_ptr__;
  }
  ::operator<<(pFVar13,&__return_storage_ptr__->Header);
  if (((__return_storage_ptr__->Header).Magic == 0x5049504543414348) &&
     (6 < (__return_storage_ptr__->Header).Version)) {
    (**(code **)(*(longlong *)pFVar13 + 0x130))(pFVar13);
    if (((__return_storage_ptr__->Header).TableOffset == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Data.Header.TableOffset > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                            ,0xf65,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FPipelineCacheFileData *)(*pcVar6)();
      return pFVar14;
    }
    (**(code **)(*(longlong *)pFVar13 + 0x1b8))
              (pFVar13,(__return_storage_ptr__->Header).TableOffset);
    ::operator<<(pFVar13,&__return_storage_ptr__->TOC);
    if ((pFVar13->field_0x29 & 2) == 0) {
      uStack_56c = 1;
      pTVar29 = (TBitArray<FDefaultBitArrayAllocator> *)
                &(__return_storage_ptr__->TOC).MetaData.field_0x10;
      local_570 = 0;
      iVar21 = *(int *)&(__return_storage_ptr__->TOC).MetaData.field_0x28;
      pTVar1 = &(__return_storage_ptr__->TOC).MetaData;
      iStack_55c = 0;
      iStack_558 = 0;
      if (iVar21 != 0) {
        puVar22 = *(uint **)&(__return_storage_ptr__->TOC).MetaData.field_0x20;
        if (puVar22 == (uint *)0x0) {
          puVar22 = (uint *)pTVar29;
        }
        uVar11 = *puVar22;
        local_570 = 0;
        while (uVar11 == 0) {
          iStack_558 = iStack_558 + 0x20;
          lVar15 = (longlong)local_570;
          local_570 = local_570 + 1;
          if ((int)((iVar21 + -1 >> 0x1f & 0x1fU) + iVar21 + -1) >> 5 < local_570)
          goto LAB_145c63ff9;
          uVar11 = puVar22[lVar15 + 1];
        }
        uStack_56c = -uVar11 & uVar11;
        uVar3 = (ulonglong)uStack_56c * 2 + 1;
        lVar15 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_50c = (int)lVar15;
        iStack_55c = local_50c + -1 + iStack_558;
        if (iVar21 < iStack_55c) {
LAB_145c63ff9:
          iStack_55c = iVar21;
        }
      }
      local_560 = 0xffffffff;
      uVar11 = *(uint *)&(__return_storage_ptr__->TOC).MetaData.field_0x28;
      uStack_5a8 = CONCAT44(uStack_56c,local_570);
      bVar17 = (byte)uVar11 & 0x1f;
      local_588 = *(int *)&(__return_storage_ptr__->TOC).MetaData.field_0x8 -
                  *(int *)&(__return_storage_ptr__->TOC).MetaData.field_0x34;
      iStack_594 = iStack_55c;
      uStack_598 = 0xffffffff;
      uStack_58c = uStack_554;
      iStack_590 = iStack_558;
      local_550._padding_._0_4_ = (int)uVar11 >> 5;
      local_550._padding_._4_4_ = 1 << bVar17;
      local_550.UnvisitedBitMask = -1 << bVar17;
      local_550.BaseBitIndex = uVar11 & 0xffffffe0;
      uStack_4c8 = CONCAT44(uStack_584,local_588);
      local_5b0 = pTVar1;
      puStack_5a0 = (undefined1 *)pTVar29;
      puStack_568 = (undefined1 *)pTVar29;
      local_550.Array = pTVar29;
      local_550.CurrentBitIndex = uVar11;
      local_4f8._8_8_ = pTVar1;
      TStack_4e8._padding_ = uStack_5a8;
      TStack_4e8.Array = pTVar29;
      TStack_4e8._16_8_ = _uStack_598;
      TStack_4e8._24_8_ = _iStack_590;
      if ((((int)uVar11 < 0) || (iVar21 < (int)uVar11)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FPipelineCacheFileData *)(*pcVar6)();
        return pFVar14;
      }
      pFVar13 = local_578;
      if (uVar11 != *(uint *)&(__return_storage_ptr__->TOC).MetaData.field_0x28) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_550);
        pFVar13 = local_578;
        uVar11 = local_550.CurrentBitIndex;
        pTVar29 = local_550.Array;
      }
      while( true ) {
        uVar7 = local_4f8._8_8_;
        if (*(int *)(local_4f8._8_8_ + 8) - *(int *)(local_4f8._8_8_ + 0x34) != (int)uStack_4c8) {
          local_5c8 = 0;
          `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5c8);
        }
        if (((TStack_4e8.CurrentBitIndex == uVar11) && (TStack_4e8.Array == pTVar29)) &&
           ((TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
             *)uVar7 == pTVar1)) break;
        puVar22 = (uint *)(*(longlong *)uVar7 + (longlong)TStack_4e8.CurrentBitIndex * 0xc0);
        if ((((puVar22[0x2c] & 1) == 0) &&
            ((((__return_storage_ptr__->Header).Guid.D == puVar22[9] &&
              (__return_storage_ptr__->Header).Guid.C == puVar22[8]) &&
             (__return_storage_ptr__->Header).Guid.B == puVar22[7]) &&
             puVar22[6] == (__return_storage_ptr__->Header).Guid.A)) &&
           (4 < *(ulonglong *)(puVar22 + 4))) {
          local_318.ComputeDesc.ComputeShader.Hash[0] = '\0';
          local_318.ComputeDesc.ComputeShader.Hash[1] = '\0';
          local_318.ComputeDesc.ComputeShader.Hash[2] = '\0';
          local_318.ComputeDesc.ComputeShader.Hash[3] = '\0';
          local_318.ComputeDesc.ComputeShader.Hash[4] = '\0';
          local_318.ComputeDesc.ComputeShader.Hash[5] = '\0';
          local_318.ComputeDesc.ComputeShader.Hash[6] = '\0';
          local_318.ComputeDesc.ComputeShader.Hash[7] = '\0';
          local_318.ComputeDesc.ComputeShader.Hash[8] = '\0';
          local_318.ComputeDesc.ComputeShader.Hash[9] = '\0';
          local_318.ComputeDesc.ComputeShader.Hash[10] = '\0';
          local_318.ComputeDesc.ComputeShader.Hash[0xb] = '\0';
          local_318.ComputeDesc.ComputeShader.Hash[0xc] = '\0';
          local_318.ComputeDesc.ComputeShader.Hash[0xd] = '\0';
          local_318.ComputeDesc.ComputeShader.Hash[0xe] = '\0';
          local_318.ComputeDesc.ComputeShader.Hash[0xf] = '\0';
          local_318.ComputeDesc.ComputeShader.Hash[0x10] = '\0';
          local_318.ComputeDesc.ComputeShader.Hash[0x11] = '\0';
          local_318.ComputeDesc.ComputeShader.Hash[0x12] = '\0';
          local_318.ComputeDesc.ComputeShader.Hash[0x13] = '\0';
          FPipelineCacheFileFormatPSO::GraphicsDescriptor::GraphicsDescriptor
                    (&local_318.GraphicsDesc);
          FPipelineCacheFileFormatPSO::FPipelineFileCacheRayTracingDesc::
          FPipelineFileCacheRayTracingDesc(&local_318.RayTracingDesc);
          (**(code **)(*(longlong *)pFVar13 + 0x1b8))(pFVar13,*(undefined8 *)(puVar22 + 2));
          ::operator<<(pFVar13,&local_318);
          TMapBase<unsigned_int,FPipelineCacheFileFormatPSO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>_>
          ::Emplace<unsigned_int_const_&,FPipelineCacheFileFormatPSO_const_&>
                    ((TMapBase<unsigned_int,FPipelineCacheFileFormatPSO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>_>
                      *)&__return_storage_ptr__->PSOs,puVar22,&local_318);
          FPipelineCacheFileFormatPSO::FPipelineFileCacheRayTracingDesc::
          ~FPipelineFileCacheRayTracingDesc(&local_318.RayTracingDesc);
        }
        TStack_4e8.UnvisitedBitMask = TStack_4e8.UnvisitedBitMask & ~TStack_4e8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4e8);
      }
      pFVar13 = local_578;
      if ((local_578->field_0x29 & 2) == 0) {
        if ((__return_storage_ptr__->Header).Version < 10) {
          puStack_5a0 = &(__return_storage_ptr__->TOC).MetaData.field_0x10;
          iVar26 = 0;
          iVar21 = *(int *)&(__return_storage_ptr__->TOC).MetaData.field_0x28;
          local_5c0 = &(__return_storage_ptr__->TOC).MetaData;
          iStack_590 = 0;
          uVar11 = 1;
          iStack_594 = 0;
          if (iVar21 != 0) {
            puVar22 = *(uint **)&(__return_storage_ptr__->TOC).MetaData.field_0x20;
            if (puVar22 == (uint *)0x0) {
              puVar22 = (uint *)puStack_5a0;
            }
            uVar24 = *puVar22;
            while (uVar24 == 0) {
              lVar15 = (longlong)iVar26;
              iStack_590 = iStack_590 + 0x20;
              iVar26 = iVar26 + 1;
              iStack_594 = iVar21;
              if ((int)((iVar21 + -1 >> 0x1f & 0x1fU) + iVar21 + -1) >> 5 < iVar26)
              goto LAB_145c642b0;
              uVar24 = puVar22[lVar15 + 1];
            }
            uVar11 = -uVar24 & uVar24;
            uVar3 = (ulonglong)uVar11 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            local_500 = (int)lVar15;
            iStack_594 = local_500 + -1 + iStack_590;
            if (iVar21 < iStack_594) {
              iStack_594 = iVar21;
            }
          }
LAB_145c642b0:
          puVar2 = &(__return_storage_ptr__->TOC).MetaData.field_0x10;
          local_588 = *(int *)&(__return_storage_ptr__->TOC).MetaData.field_0x8 -
                      *(int *)&(__return_storage_ptr__->TOC).MetaData.field_0x34;
          uStack_598 = 0xffffffff;
          uVar24 = *(uint *)&(__return_storage_ptr__->TOC).MetaData.field_0x28;
          uStack_5a8 = CONCAT44(uVar11,iVar26);
          uVar11 = uVar24 & 0xffffffe0;
          uStack_58c = local_3e4;
          TStack_4b8._padding_ = uStack_5a8;
          iVar21 = (int)uVar24 >> 5;
          uStack_498 = CONCAT44(uStack_584,local_588);
          TStack_4b8.UnvisitedBitMask = 0xffffffff;
          TStack_4b8.CurrentBitIndex = iStack_594;
          TStack_4b8.BaseBitIndex = iStack_590;
          TStack_4b8._28_4_ = local_3e4;
          local_5b0 = local_5c0;
          local_4c0 = local_5c0;
          TStack_4b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_5a0;
          if (((int)uVar24 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            pFVar14 = (FPipelineCacheFileData *)(*pcVar6)();
            return pFVar14;
          }
          pTVar1 = local_5c0;
          uVar28 = *(uint *)&(__return_storage_ptr__->TOC).MetaData.field_0x28;
          if (uVar24 != uVar28) {
            puVar5 = *(undefined1 **)&(__return_storage_ptr__->TOC).MetaData.field_0x20;
            puVar18 = puVar2;
            if (puVar5 != (undefined1 *)0x0) {
              puVar18 = puVar5;
            }
            uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar21 * 4);
            while (uVar24 == 0) {
              lVar15 = (longlong)iVar21;
              uVar11 = uVar11 + 0x20;
              iVar21 = iVar21 + 1;
              uVar24 = uVar28;
              if ((int)(((int)(uVar28 - 1) >> 0x1f & 0x1fU) + (uVar28 - 1)) >> 5 < iVar21)
              goto LAB_145c643ce;
              uVar24 = *(uint *)(puVar18 + lVar15 * 4 + 4);
            }
            uVar3 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
            lVar15 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            local_4fc = (int)lVar15;
            uVar24 = local_4fc + -1 + uVar11;
            if ((int)uVar28 < (int)uVar24) {
              uVar24 = uVar28;
            }
          }
LAB_145c643ce:
          this = &__return_storage_ptr__->PSOs;
          while( true ) {
            pTVar8 = local_4c0;
            if (*(int *)&local_4c0->field_0x8 - *(int *)&local_4c0->field_0x34 != (int)uStack_498) {
              local_5c7 = 0;
              `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5c7);
            }
            if (((TStack_4b8.CurrentBitIndex == uVar24) &&
                (TStack_4b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
               (__return_storage_ptr__ = local_508, pTVar8 == pTVar1)) break;
            puVar22 = (uint *)((longlong)TStack_4b8.CurrentBitIndex * 0xc0 + *(longlong *)pTVar8);
            pFVar16 = TMapBase<unsigned_int,FPipelineCacheFileFormatPSO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>_>
                      ::FindChecked((TMapBase<unsigned_int,FPipelineCacheFileFormatPSO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>_>
                                     *)this,*puVar22);
            DVar4 = pFVar16->Type;
            if (DVar4 == Compute) {
              pFVar27 = (FPipelineFileCacheRayTracingDesc *)&pFVar16->ComputeDesc;
              pFVar20 = (FSHAHash *)(local_520 + 4);
LAB_145c645ab:
              TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::
              Emplace<FSHAHash_const_&>
                        ((TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)
                         (puVar22 + 0x14),pFVar20,(bool *)pFVar27);
            }
            else if (DVar4 == Graphics) {
              TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::
              Emplace<FSHAHash_const_&>
                        ((TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)
                         (puVar22 + 0x14),(FSHAHash *)local_530,(bool *)&pFVar16->GraphicsDesc);
              pFVar20 = &(pFVar16->GraphicsDesc).FragmentShader;
              local_428 = 0;
              uStack_420 = 0;
              local_418 = 0;
              if (((*(longlong *)pFVar20->Hash != 0) ||
                  (*(longlong *)((pFVar16->GraphicsDesc).FragmentShader.Hash + 8) != 0)) ||
                 (*(int *)((pFVar16->GraphicsDesc).FragmentShader.Hash + 0x10) != 0)) {
                TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::
                Emplace<FSHAHash_const_&>
                          ((TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)
                           (puVar22 + 0x14),(FSHAHash *)(local_530 + 4),(bool *)pFVar20);
              }
              pFVar20 = &(pFVar16->GraphicsDesc).GeometryShader;
              local_414 = 0;
              uStack_40c = 0;
              local_404 = 0;
              if (((*(longlong *)pFVar20->Hash != 0) ||
                  (*(longlong *)((pFVar16->GraphicsDesc).GeometryShader.Hash + 8) != 0)) ||
                 (*(int *)((pFVar16->GraphicsDesc).GeometryShader.Hash + 0x10) != 0)) {
                TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::
                Emplace<FSHAHash_const_&>
                          ((TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)
                           (puVar22 + 0x14),(FSHAHash *)local_528,(bool *)pFVar20);
              }
              pFVar20 = &(pFVar16->GraphicsDesc).MeshShader;
              local_450 = 0;
              uStack_448 = 0;
              local_440 = 0;
              if (((*(longlong *)pFVar20->Hash != 0) ||
                  (*(longlong *)((pFVar16->GraphicsDesc).MeshShader.Hash + 8) != 0)) ||
                 (*(int *)((pFVar16->GraphicsDesc).MeshShader.Hash + 0x10) != 0)) {
                TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::
                Emplace<FSHAHash_const_&>
                          ((TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator> *)
                           (puVar22 + 0x14),(FSHAHash *)(local_528 + 4),(bool *)pFVar20);
              }
              pFVar27 = (FPipelineFileCacheRayTracingDesc *)
                        &(pFVar16->GraphicsDesc).AmplificationShader;
              local_43c = 0;
              uStack_434 = 0;
              local_42c = 0;
              if (((*(longlong *)((FSHAHash *)pFVar27)->Hash != 0) ||
                  (*(longlong *)((pFVar16->GraphicsDesc).AmplificationShader.Hash + 8) != 0)) ||
                 (*(int *)((pFVar16->GraphicsDesc).AmplificationShader.Hash + 0x10) != 0)) {
                pFVar20 = (FSHAHash *)local_520;
                goto LAB_145c645ab;
              }
            }
            else {
              if (DVar4 == RayTracing) {
                pFVar27 = &pFVar16->RayTracingDesc;
                pFVar20 = (FSHAHash *)local_4f8;
                goto LAB_145c645ab;
              }
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("false",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                                  ,0xfb1,L"");
              if (bVar10) {
                pcVar6 = (code *)swi(3);
                pFVar14 = (FPipelineCacheFileData *)(*pcVar6)();
                return pFVar14;
              }
            }
            TStack_4b8.UnvisitedBitMask = TStack_4b8.UnvisitedBitMask & ~TStack_4b8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4b8);
          }
        }
        if ((__return_storage_ptr__->Header).Version < 0xb) {
          local_38c = 0x80;
          puStack_5a0 = &(__return_storage_ptr__->TOC).MetaData.field_0x10;
          local_3b8._0_8_ = (FScriptContainerElement *)0x0;
          local_3b8._8_8_ = 0;
          pTVar1 = &(__return_storage_ptr__->TOC).MetaData;
          local_3b8._32_8_ = (ForElementType<unsigned_int>)0x0;
          iVar26 = 0;
          local_390 = 0;
          uVar11 = 1;
          local_384 = 0;
          local_378 = (ForElementType<FSetElementId>)0x0;
          iStack_590 = 0;
          local_370 = 0;
          local_368.Elements._0_8_ = 0;
          local_368.Elements._8_8_ = 0;
          local_368.Elements._32_8_ = 0;
          local_368.Elements._40_4_ = 0;
          local_368.Elements._52_4_ = 0;
          local_368.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_368.HashSize = 0;
          local_388 = -1;
          local_368.Elements._44_4_ = 0x80;
          local_368.Elements._48_4_ = 0xffffffff;
          iVar21 = *(int *)&(__return_storage_ptr__->TOC).MetaData.field_0x28;
          iStack_594 = iVar26;
          if (iVar21 != 0) {
            puVar22 = *(uint **)&(__return_storage_ptr__->TOC).MetaData.field_0x20;
            if (puVar22 == (uint *)0x0) {
              puVar22 = (uint *)puStack_5a0;
            }
            uVar24 = *puVar22;
            iStack_590 = 0;
            iVar26 = 0;
            while (uVar24 == 0) {
              lVar15 = (longlong)iVar26;
              iStack_590 = iStack_590 + 0x20;
              iVar26 = iVar26 + 1;
              iStack_594 = iVar21;
              if ((int)((iVar21 + -1 >> 0x1f & 0x1fU) + iVar21 + -1) >> 5 < iVar26)
              goto LAB_145c646ef;
              uVar24 = puVar22[lVar15 + 1];
            }
            uVar11 = -uVar24 & uVar24;
            uVar3 = (ulonglong)uVar11 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            local_518 = (int)lVar15;
            iStack_594 = iStack_590 + -1 + local_518;
            if (iVar21 < iStack_594) {
              iStack_594 = iVar21;
            }
          }
LAB_145c646ef:
          uVar24 = *(uint *)&(__return_storage_ptr__->TOC).MetaData.field_0x28;
          puVar2 = &(__return_storage_ptr__->TOC).MetaData.field_0x10;
          local_588 = *(int *)&(__return_storage_ptr__->TOC).MetaData.field_0x8 -
                      *(int *)&(__return_storage_ptr__->TOC).MetaData.field_0x34;
          uVar25 = uVar24 & 0xffffffe0;
          uStack_598 = 0xffffffff;
          uVar28 = -1 << ((byte)uVar24 & 0x1f);
          uStack_5a8 = CONCAT44(uVar11,iVar26);
          uStack_58c = local_3c4;
          TStack_488._padding_ = uStack_5a8;
          iVar21 = (int)uVar24 >> 5;
          local_5c0 = (TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
                       *)CONCAT44(local_5c0._4_4_,uVar28);
          uStack_468 = CONCAT44(uStack_584,local_588);
          TStack_488.UnvisitedBitMask = 0xffffffff;
          TStack_488.CurrentBitIndex = iStack_594;
          TStack_488.BaseBitIndex = iStack_590;
          TStack_488._28_4_ = local_3c4;
          local_5b0 = pTVar1;
          local_490 = pTVar1;
          TStack_488.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_5a0;
          if ((int)uVar24 < 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L"");
            if (bVar10) {
              pcVar6 = (code *)swi(3);
              pFVar14 = (FPipelineCacheFileData *)(*pcVar6)();
              return pFVar14;
            }
            uVar28 = (uint)local_5c0;
          }
          uVar11 = *(uint *)&(__return_storage_ptr__->TOC).MetaData.field_0x28;
          if (uVar24 != uVar11) {
            puVar5 = *(undefined1 **)&(__return_storage_ptr__->TOC).MetaData.field_0x20;
            puVar18 = puVar2;
            if (puVar5 != (undefined1 *)0x0) {
              puVar18 = puVar5;
            }
            uVar28 = uVar28 & *(uint *)(puVar18 + (longlong)iVar21 * 4);
            while (uVar28 == 0) {
              lVar15 = (longlong)iVar21;
              uVar25 = uVar25 + 0x20;
              iVar21 = iVar21 + 1;
              uVar24 = uVar11;
              if ((int)(((int)(uVar11 - 1) >> 0x1f & 0x1fU) + (uVar11 - 1)) >> 5 < iVar21)
              goto LAB_145c64820;
              uVar28 = *(uint *)(puVar18 + lVar15 * 4 + 4);
            }
            uVar3 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
            lVar15 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            local_514 = (int)lVar15;
            uVar24 = local_514 + -1 + uVar25;
            if ((int)uVar11 < (int)uVar24) {
              uVar24 = uVar11;
            }
          }
LAB_145c64820:
          while( true ) {
            pTVar8 = local_490;
            if (*(int *)&local_490->field_0x8 - *(int *)&local_490->field_0x34 != (int)uStack_468) {
              local_5c6[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_5c6);
            }
            if (((TStack_488.CurrentBitIndex == uVar24) &&
                (TStack_488.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
               (pTVar8 == pTVar1)) break;
            puVar22 = (uint *)((longlong)TStack_488.CurrentBitIndex * 0xc0 + *(longlong *)pTVar8);
            if (*(int *)&(__return_storage_ptr__->PSOs).field_0x8 !=
                *(int *)&(__return_storage_ptr__->PSOs).field_0x34) {
              puVar5 = *(undefined1 **)&(__return_storage_ptr__->PSOs).field_0x40;
              puVar18 = &(__return_storage_ptr__->PSOs).field_0x38;
              if (puVar5 != (undefined1 *)0x0) {
                puVar18 = puVar5;
              }
              uVar11 = *(uint *)(puVar18 +
                                (ulonglong)
                                (*(int *)&(__return_storage_ptr__->PSOs).field_0x48 - 1U & *puVar22)
                                * 4);
              if (uVar11 != 0xffffffff) {
                do {
                  puVar23 = (uint *)((longlong)(int)uVar11 * 0x2d8 +
                                    *(longlong *)&__return_storage_ptr__->PSOs);
                  if (*puVar23 == *puVar22) {
                    if (puVar23 == (uint *)0x0) goto LAB_145c648c2;
                    goto LAB_145c648e4;
                  }
                  uVar11 = puVar23[0xb4];
                } while (uVar11 != 0xffffffff);
              }
            }
            puVar23 = (uint *)0x0;
LAB_145c648c2:
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L"");
            if (bVar10) {
              pcVar6 = (code *)swi(3);
              pFVar14 = (FPipelineCacheFileData *)(*pcVar6)();
              return pFVar14;
            }
LAB_145c648e4:
            pFVar16 = (FPipelineCacheFileFormatPSO *)(puVar23 + 2);
            local_580[0] = ::GetTypeHash(pFVar16);
            TMapBase<unsigned_int,FPipelineCacheFileFormatPSO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>_>
            ::Emplace<unsigned_int,FPipelineCacheFileFormatPSO_const_&>
                      ((TMapBase<unsigned_int,FPipelineCacheFileFormatPSO,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>_>
                        *)&local_368,local_580,pFVar16);
            if ((((puVar22[9] == 0 && puVar22[8] == 0) && puVar22[7] == 0) && puVar22[6] == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Entry.Value.FileGuid != FGuid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                                    ,0xfbf,L""), bVar10)) {
              pcVar6 = (code *)swi(3);
              pFVar14 = (FPipelineCacheFileData *)(*pcVar6)();
              return pFVar14;
            }
            uVar11 = ::GetTypeHash(pFVar16);
            TSparseArrayBase<192,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::AddUninitialized((TSparseArrayBase<192,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                *)local_3b8,&local_460);
            pvVar9 = local_460.Pointer;
            if (local_460.Pointer !=
                (TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_> *)0x0)
            {
              *(uint *)local_460.Pointer = uVar11;
              FPipelineCacheFileFormatPSOMetaData::FPipelineCacheFileFormatPSOMetaData
                        ((FPipelineCacheFileFormatPSOMetaData *)((longlong)local_460.Pointer + 8),
                         (FPipelineCacheFileFormatPSOMetaData *)(puVar22 + 2));
              *(undefined4 *)((longlong)pvVar9 + 0xb8) = 0xffffffff;
            }
            uVar11 = *(uint *)pvVar9;
            local_5b8[0] = local_460.Index;
            bVar10 = TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                     ::TryReplaceExisting
                               ((TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                                 *)local_3b8,uVar11,pvVar9,local_5b8,(bool *)0x0);
            if (!bVar10) {
              TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
              ::RehashOrLink((TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                              *)local_3b8,uVar11,pvVar9,local_5b8[0]);
            }
            TStack_488.UnvisitedBitMask = TStack_488.UnvisitedBitMask & ~TStack_488._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_488);
          }
          TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
          ::operator=((TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                       *)&(__return_storage_ptr__->TOC).MetaData,
                      (TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
                       *)local_3b8);
          TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
          ::operator=((TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
                       *)&__return_storage_ptr__->PSOs,&local_368);
          local_368.HashSize = 0;
          if (local_368.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_368.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSO>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_368.Elements);
          local_370 = 0;
          if (local_378 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_378);
          }
          TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_3b8);
        }
        (__return_storage_ptr__->Header).Version = 0x1d;
        pFVar13 = local_578;
        goto LAB_145c64a6d;
      }
    }
    if (1 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_static_struct_FPipelineCacheFileData___cdecl_FPipelineCacheFileData::Open(FString_const&___ptr64)'
                  ::__l29::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    (__return_storage_ptr__->Header).Magic = 0;
  }
LAB_145c64a6d:
  (**(code **)(*(longlong *)pFVar13 + 0x210))(pFVar13);
  (*(code *)**(undefined8 **)pFVar13)(pFVar13,1);
  return __return_storage_ptr__;
}

