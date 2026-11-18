// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FTranscodeTask @ 1489b3d00

FTranscodeTask * __thiscall
FTranscodeTask::FTranscodeTask
          (FTranscodeTask *this,FVTUploadTileBuffer *param_1,FVTTranscodeParams *param_2)

{
  IMemoryReadStream *pIVar1;
  FVirtualTextureCodec *pFVar2;
  uint uVar3;
  uint uVar4;
  
  this->StagingBuffer[0].Memory = (void *)0x0;
  this->StagingBuffer[0].MemorySize = 0;
  this->StagingBuffer[0].Stride = 0;
  this->StagingBuffer[1].Memory = (void *)0x0;
  this->StagingBuffer[1].MemorySize = 0;
  this->StagingBuffer[1].Stride = 0;
  this->StagingBuffer[2].Memory = (void *)0x0;
  this->StagingBuffer[2].MemorySize = 0;
  this->StagingBuffer[2].Stride = 0;
  this->StagingBuffer[3].Memory = (void *)0x0;
  this->StagingBuffer[3].MemorySize = 0;
  this->StagingBuffer[3].Stride = 0;
  this->StagingBuffer[4].Memory = (void *)0x0;
  this->StagingBuffer[4].MemorySize = 0;
  this->StagingBuffer[4].Stride = 0;
  this->StagingBuffer[5].Memory = (void *)0x0;
  this->StagingBuffer[5].MemorySize = 0;
  this->StagingBuffer[5].Stride = 0;
  this->StagingBuffer[6].Memory = (void *)0x0;
  this->StagingBuffer[6].MemorySize = 0;
  this->StagingBuffer[6].Stride = 0;
  this->StagingBuffer[7].Memory = (void *)0x0;
  this->StagingBuffer[7].MemorySize = 0;
  this->StagingBuffer[7].Stride = 0;
  (this->Params).Data.Reference = (IMemoryReadStream *)0x0;
  pIVar1 = (param_2->Data).Reference;
  (this->Params).Data.Reference = pIVar1;
  if (pIVar1 != (IMemoryReadStream *)0x0) {
    LOCK();
    (pIVar1->NumRefs).Counter = (pIVar1->NumRefs).Counter + 1;
    UNLOCK();
  }
  pFVar2 = param_2->Codec;
  (this->Params).Codec = pFVar2;
  (this->Params).VTData = param_2->VTData;
  (this->Params).Name = param_2->Name;
  (this->Params).ChunkIndex = param_2->ChunkIndex;
  (this->Params).vAddress = param_2->vAddress;
  (this->Params).vLevel = param_2->vLevel;
  (this->Params).LayerMask = param_2->LayerMask;
  if (pFVar2 != (FVirtualTextureCodec *)0x0) {
    LOCK();
    pFVar2->TaskRefs = (atomic<unsigned_int>)((int)pFVar2->TaskRefs + 1);
    UNLOCK();
  }
  uVar3 = param_1->MemorySize;
  uVar4 = param_1->Stride;
  this->StagingBuffer[0].Memory = param_1->Memory;
  this->StagingBuffer[0].MemorySize = uVar3;
  this->StagingBuffer[0].Stride = uVar4;
  uVar3 = param_1[1].MemorySize;
  uVar4 = param_1[1].Stride;
  this->StagingBuffer[1].Memory = param_1[1].Memory;
  this->StagingBuffer[1].MemorySize = uVar3;
  this->StagingBuffer[1].Stride = uVar4;
  uVar3 = param_1[2].MemorySize;
  uVar4 = param_1[2].Stride;
  this->StagingBuffer[2].Memory = param_1[2].Memory;
  this->StagingBuffer[2].MemorySize = uVar3;
  this->StagingBuffer[2].Stride = uVar4;
  uVar3 = param_1[3].MemorySize;
  uVar4 = param_1[3].Stride;
  this->StagingBuffer[3].Memory = param_1[3].Memory;
  this->StagingBuffer[3].MemorySize = uVar3;
  this->StagingBuffer[3].Stride = uVar4;
  uVar3 = param_1[4].MemorySize;
  uVar4 = param_1[4].Stride;
  this->StagingBuffer[4].Memory = param_1[4].Memory;
  this->StagingBuffer[4].MemorySize = uVar3;
  this->StagingBuffer[4].Stride = uVar4;
  uVar3 = param_1[5].MemorySize;
  uVar4 = param_1[5].Stride;
  this->StagingBuffer[5].Memory = param_1[5].Memory;
  this->StagingBuffer[5].MemorySize = uVar3;
  this->StagingBuffer[5].Stride = uVar4;
  uVar3 = param_1[6].MemorySize;
  uVar4 = param_1[6].Stride;
  this->StagingBuffer[6].Memory = param_1[6].Memory;
  this->StagingBuffer[6].MemorySize = uVar3;
  this->StagingBuffer[6].Stride = uVar4;
  uVar3 = param_1[7].MemorySize;
  uVar4 = param_1[7].Stride;
  this->StagingBuffer[7].Memory = param_1[7].Memory;
  this->StagingBuffer[7].MemorySize = uVar3;
  this->StagingBuffer[7].Stride = uVar4;
  return this;
}

// DoTask @ 1489d6ae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FTranscodeTask::DoTask(FTranscodeTask *this,bool param_1)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FVirtualTextureBuiltData *pFVar8;
  FVirtualTextureBuiltData *pFVar9;
  FVirtualTextureCodec *pFVar10;
  FBaseGraphTask *pFVar11;
  void *pvVar12;
  IMemoryReadStream *pIVar13;
  code *pcVar14;
  FName FVar15;
  FName FVar16;
  TConsoleVariableData<int> *pTVar17;
  TConsoleVariableData<int> *pTVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  FNameEntryId FVar23;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  uchar **ppuVar24;
  longlong lVar25;
  ForElementType<unsigned_char> FVar26;
  FScriptContainerElement *pFVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  uint uVar31;
  uint uVar32;
  EPixelFormat EVar33;
  FTranscodeTask *pFVar34;
  uint uVar35;
  uint uVar36;
  bool bVar37;
  undefined1 auStackY_40f8 [32];
  uint local_40ac;
  undefined1 local_408c [4];
  ulonglong local_4088;
  uint local_4080;
  undefined4 uStack_407c;
  ulonglong local_4078;
  uint local_4070;
  undefined4 uStack_406c;
  undefined1 local_4068 [8];
  FString local_4060;
  TArray<unsigned_char,TSizedInlineAllocator<16384,32,TSizedDefaultAllocator<32>_>_> local_4048;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x1489d6b02;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_40f8;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Cyan,"VirtualTextureTranscodeTask_DoTask");
  bVar37 = -1 < CpuChannel->Enabled;
  if (bVar37) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FTranscodeTask::DoTask(bool)___ptr64'::__l2::
                __CpuProfilerEventSpecId94,"VirtualTextureTranscodeTask_DoTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.cpp"
               ,0x5e);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FTranscodeTask::DoTask(bool)___ptr64'::__l2::
               __CpuProfilerEventSpecId94);
  }
  uVar29 = (this->Params).ChunkIndex;
  uVar30 = 0;
  pFVar8 = (this->Params).VTData;
  uVar20 = 0;
  if ((int)uVar29 < (pFVar8->Chunks).ArrayNum) {
    uVar20 = ~uVar29 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar9 = (this->Params).VTData;
  bVar3 = (this->Params).vLevel;
  uVar20 = (this->Params).vAddress;
  uVar4 = pFVar9->TileBorderSize;
  pFVar27 = (pFVar8->Chunks).AllocatorInstance.Data;
  uVar5 = pFVar9->NumLayers;
  iVar2 = pFVar9->TileSize + uVar4 * 2;
  pFVar10 = (this->Params).Codec;
  if ((((pFVar10 != (FVirtualTextureCodec *)0x0) &&
       (pFVar11 = (pFVar10->CompletedEvent).Reference, pFVar11 != (FBaseGraphTask *)0x0)) &&
      (pFVar11->field_0xd0 == '\0')) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Params.Codec || Params.Codec->IsCreationComplete()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.cpp"
                          ,0x6f,L""), bVar19)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  local_4048.AllocatorInstance.SecondaryData = (ForElementType<unsigned_char>)0x0;
  uVar35 = 0xffffffff;
  local_4048.ArrayNum = 0;
  local_4048.ArrayMax = 0x4000;
  if (uVar5 != 0) {
    pFVar27 = pFVar27 + (longlong)(int)uVar29 * 0x90 + 0x84;
    local_40ac = 1;
    pFVar34 = this;
    do {
      uVar29 = (uint)uVar30;
      if (((this->Params).LayerMask & (byte)local_40ac) == 0) goto LAB_1489d72d6;
      uVar31 = (uint)bVar3;
      uVar21 = FVirtualTextureBuiltData::GetTileOffset((this->Params).VTData,uVar31,uVar20,uVar29);
      uVar22 = FVirtualTextureBuiltData::GetTileOffset
                         ((this->Params).VTData,uVar31,uVar20,uVar29 + 1);
      if (uVar35 == 0xffffffff) {
        uVar35 = uVar21;
      }
      uVar22 = uVar22 - uVar21;
      EVar33 = ((this->Params).VTData)->LayerTypes[uVar30].Value;
      local_4088 = (ulonglong)EVar33;
      uVar21 = uVar21 - uVar35;
      uVar36 = ((GPixelFormats[local_4088].BlockSizeY - 1U) + iVar2) /
               (uint)GPixelFormats[local_4088].BlockSizeY;
      uVar32 = (((GPixelFormats[local_4088].BlockSizeX - 1U) + iVar2) /
               (uint)GPixelFormats[local_4088].BlockSizeX) * GPixelFormats[local_4088].BlockBytes;
      uVar28 = uVar32 * uVar36;
      local_4078 = (ulonglong)uVar28;
      switch(*pFVar27) {
      case (FScriptContainerElement)0x0:
        ppuVar24 = &`public:_void___cdecl_FTranscodeTask::DoTask(bool)___ptr64'::__l2::Black;
        break;
      case (FScriptContainerElement)0x1:
        ppuVar24 = &`public:_void___cdecl_FTranscodeTask::DoTask(bool)___ptr64'::__l2::OpaqueBlack;
        break;
      case (FScriptContainerElement)0x2:
        ppuVar24 = (uchar **)
                   ((longlong)
                    &`public:_void___cdecl_FTranscodeTask::DoTask(bool)___ptr64'::__l2::OpaqueBlack
                   + 4);
        break;
      case (FScriptContainerElement)0x3:
        ppuVar24 = &`public:_void___cdecl_FTranscodeTask::DoTask(bool)___ptr64'::__l2::Flat;
        break;
      case (FScriptContainerElement)0x4:
        uVar6 = pFVar34->StagingBuffer[0].Stride;
        if (uVar6 == uVar32) {
          if (uVar22 <= pFVar34->StagingBuffer[0].MemorySize) {
            pIVar13 = (this->Params).Data.Reference;
            (**(code **)(pIVar13->_padding_ + 0x10))
                      (pIVar13,pFVar34->StagingBuffer[0].Memory,uVar21,uVar22);
            goto LAB_1489d7239;
          }
          bVar19 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_809890438134628186>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.cpp"
                              ,0xa6,"TileLayerSize <= StagingBufferForLayer.MemorySize");
          if (bVar19) goto code_r0x0001489d7094;
        }
        else if (uVar6 < uVar32) {
          bVar19 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_809890438134628178>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.cpp"
                              ,0xae,"PackedStride <= StagingBufferForLayer.Stride");
          if (bVar19) {
code_r0x0001489d7094:
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
        }
        else if (uVar28 < uVar22) {
          bVar19 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_809890438134628177>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.cpp"
                              ,0xaf,"TileLayerSize <= PackedOutputSize");
          if (bVar19) goto code_r0x0001489d7094;
        }
        else {
          if (uVar6 * uVar36 <= pFVar34->StagingBuffer[0].MemorySize) {
            TArray<unsigned_char,TSizedInlineAllocator<16384,32,TSizedDefaultAllocator<32>_>_>::
            SetNumUninitialized(&local_4048,uVar28,No);
            pIVar13 = (this->Params).Data.Reference;
            FVar26 = (ForElementType<unsigned_char>)&local_4048;
            if (local_4048.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
              FVar26 = local_4048.AllocatorInstance.SecondaryData;
            }
            (**(code **)(pIVar13->_padding_ + 0x10))(pIVar13,FVar26,uVar21,uVar22);
            uVar21 = 0;
            if (uVar36 != 0) {
              do {
                FVar26 = (ForElementType<unsigned_char>)&local_4048;
                if (local_4048.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0
                   ) {
                  FVar26 = local_4048.AllocatorInstance.SecondaryData;
                }
                memcpy((void *)((ulonglong)(uVar21 * pFVar34->StagingBuffer[0].Stride) +
                               (longlong)pFVar34->StagingBuffer[0].Memory),
                       (void *)((ulonglong)(uVar21 * uVar32) + (longlong)FVar26),(ulonglong)uVar32);
                uVar21 = uVar21 + 1;
              } while (uVar21 < uVar36);
            }
            goto LAB_1489d7239;
          }
          bVar19 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_809890438134628176>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.cpp"
                              ,0xb0,
                              "TileHeightInBlocks * StagingBufferForLayer.Stride <= StagingBufferForLayer.MemorySize"
                             );
          if (bVar19) goto code_r0x0001489d7094;
        }
        goto switchD_1489d6d9c_caseD_6;
      case (FScriptContainerElement)0x5:
        uVar6 = pFVar34->StagingBuffer[0].Stride;
        if (uVar6 == uVar32) {
          if (pFVar34->StagingBuffer[0].MemorySize < local_4078) {
            bVar19 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_809890438134628155>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.cpp"
                                ,0xc5,"PackedOutputSize <= StagingBufferForLayer.MemorySize");
            if (bVar19) goto code_r0x0001489d7094;
          }
          else {
            pIVar13 = (this->Params).Data.Reference;
            pvVar12 = pFVar34->StagingBuffer[0].Memory;
            FVar23 = FNameEntryId::FromValidEName((EName)local_4068);
            local_4080 = *(uint *)CONCAT44(extraout_var,FVar23.Value);
            uStack_407c = 0;
            FVar15.Number = 0;
            FVar15.ComparisonIndex.Value = local_4080;
            bVar19 = FCompression::UncompressMemoryStream
                               (FVar15,pvVar12,local_4078,pIVar13,(ulonglong)uVar21,
                                (ulonglong)uVar22,COMPRESS_NoFlags,0);
            if (bVar19) goto LAB_1489d7239;
LAB_1489d701d:
            EVar33 = (EPixelFormat)local_4088;
          }
          goto switchD_1489d6d9c_caseD_6;
        }
        if (uVar6 < uVar32) {
          bVar19 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_809890438134628149>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.cpp"
                              ,0xcb,"PackedStride <= StagingBufferForLayer.Stride");
          if (bVar19) goto code_r0x0001489d7094;
          goto switchD_1489d6d9c_caseD_6;
        }
        TArray<unsigned_char,TSizedInlineAllocator<16384,32,TSizedDefaultAllocator<32>_>_>::
        SetNumUninitialized(&local_4048,uVar28,No);
        pIVar13 = (this->Params).Data.Reference;
        FVar26 = (ForElementType<unsigned_char>)&local_4048;
        if (local_4048.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
          FVar26 = local_4048.AllocatorInstance.SecondaryData;
        }
        FVar23 = FNameEntryId::FromValidEName((EName)local_408c);
        local_4070 = *(uint *)CONCAT44(extraout_var_00,FVar23.Value);
        uStack_406c = 0;
        FVar16.Number = 0;
        FVar16.ComparisonIndex.Value = local_4070;
        bVar19 = FCompression::UncompressMemoryStream
                           (FVar16,(void *)FVar26,local_4078,pIVar13,(ulonglong)uVar21,
                            (ulonglong)uVar22,COMPRESS_NoFlags,0);
        if (!bVar19) goto LAB_1489d701d;
        if ((pFVar34->StagingBuffer[0].MemorySize < uVar36 * pFVar34->StagingBuffer[0].Stride) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("TileHeightInBlocks * StagingBufferForLayer.Stride <= StagingBufferForLayer.MemorySize"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.cpp"
                                ,0xd2,L""), bVar19)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        uVar21 = 0;
        if (uVar36 != 0) {
          do {
            FVar26 = (ForElementType<unsigned_char>)&local_4048;
            if (local_4048.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
              FVar26 = local_4048.AllocatorInstance.SecondaryData;
            }
            memcpy((void *)((ulonglong)(uVar21 * pFVar34->StagingBuffer[0].Stride) +
                           (longlong)pFVar34->StagingBuffer[0].Memory),
                   (void *)((ulonglong)(uVar21 * uVar32) + (longlong)FVar26),(ulonglong)uVar32);
            uVar21 = uVar21 + 1;
          } while (uVar21 < uVar36);
        }
        goto LAB_1489d7239;
      case (FScriptContainerElement)0x6:
        goto switchD_1489d6d9c_caseD_6;
      default:
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureTranscodeCache.cpp"
                            ,0xdd,L"");
        if (bVar19) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
switchD_1489d6d9c_caseD_6:
        if (GShowDecodeErrors != false) {
          if (1 < (byte)LogVirtualTexturing._0_1_) {
            ::FName::ToString(&(this->Params).Name,&local_4060);
            UE::Logging::Private::BasicLog<2>
                      (&`public:_void___cdecl_FTranscodeTask::DoTask(bool)___ptr64'::__l64::
                        LOG_Static,(FLogCategoryBase *)&LogVirtualTexturing);
            if (local_4060.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4060.Data.AllocatorInstance.Data);
            }
          }
          ppuVar24 = (uchar **)
                     ((longlong)
                      &`public:_void___cdecl_FTranscodeTask::DoTask(bool)___ptr64'::__l2::Flat + 4);
          break;
        }
        goto LAB_1489d7239;
      }
      UniformColorPixels(pFVar34->StagingBuffer,iVar2,iVar2,EVar33,(uchar *)ppuVar24);
LAB_1489d7239:
      pTVar17 = CVarVirtualTextureBorders.Ref;
      bVar19 = IsInParallelGameThread();
      if ((bVar19) || (bVar19 = IsInGameThread(), bVar19)) {
        lVar25 = 0;
      }
      else {
        lVar25 = 4;
      }
      pTVar18 = CVarVirtualTextureBordersMip.Ref;
      iVar7 = *(int *)((longlong)pTVar17->ShadowedValue + lVar25);
      if (0 < iVar7) {
        bVar19 = IsInParallelGameThread();
        if ((bVar19) || (bVar19 = IsInGameThread(), bVar19)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 4;
        }
        uVar21 = *(uint *)((longlong)pTVar18->ShadowedValue + lVar25);
        if (((int)uVar21 < 0) || (uVar21 == uVar31)) {
          BakeDebugInfo(pFVar34->StagingBuffer,iVar2,iVar2,uVar4 + iVar7,(EPixelFormat)local_4088,
                        uVar31);
        }
      }
LAB_1489d72d6:
      pFVar27 = pFVar27 + 1;
      local_40ac = local_40ac << 1 | (uint)((int)local_40ac < 0);
      uVar30 = (ulonglong)(uVar29 + 1);
      pFVar34 = (FTranscodeTask *)(pFVar34->StagingBuffer + 1);
    } while (uVar29 + 1 < uVar5);
  }
  pIVar13 = (this->Params).Data.Reference;
  if (pIVar13 != (IMemoryReadStream *)0x0) {
    (this->Params).Data.Reference = (IMemoryReadStream *)0x0;
    LOCK();
    pFVar1 = &pIVar13->NumRefs;
    iVar2 = pFVar1->Counter;
    pFVar1->Counter = pFVar1->Counter + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(pIVar13->_padding_ + 0x20))(pIVar13,1);
    }
  }
  if (local_4048.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_4048.AllocatorInstance.SecondaryData);
  }
  if (bVar37) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

