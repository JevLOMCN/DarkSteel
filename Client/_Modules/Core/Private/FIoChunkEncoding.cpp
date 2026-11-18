// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// operator() @ 14173be10

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall `FIoChunkEncoding::Encode'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  BufCore *this_00;
  void *_Dst;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong _Size;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  void *pvVar15;
  uint local_res10 [2];
  longlong local_58;
  void *local_50;
  ulonglong uStack_48;
  
  plVar12 = *(longlong **)((longlong)this + 8);
  uVar8 = *(uint *)this;
  uVar10 = (ulonglong)(uVar8 * param_1);
  uVar11 = (ulonglong)uVar8;
  if (plVar12[1] - uVar10 < (ulonglong)uVar8) {
    uVar11 = plVar12[1] - uVar10;
  }
  uVar2 = plVar12[1];
  if (uVar2 < uVar10) {
    uVar10 = uVar2;
  }
  pvVar15 = (void *)(*plVar12 + uVar10);
  _Size = (ulonglong)uVar8;
  if (uVar2 - uVar10 < (ulonglong)uVar8) {
    _Size = uVar2 - uVar10;
  }
  local_50 = pvVar15;
  uStack_48 = _Size;
  iVar6 = FCompression::CompressMemoryBound
                    (**(FName **)((longlong)this + 0x10),uVar8,COMPRESS_NoFlags,0);
  plVar12 = *(longlong **)((longlong)this + 0x20);
  uVar7 = iVar6 + 0xfU & 0xfffffff0;
  puVar13 = (undefined8 *)0x0;
  uVar8 = 0;
  if (param_1 < (int)plVar12[1]) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar12 = (longlong *)((longlong)param_1 * 0x10 + *plVar12);
  puVar9 = ::operator_new(0x20);
  puVar14 = puVar13;
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *(undefined2 *)(puVar9 + 3) = 0;
    pvVar15 = FMemory::Malloc((longlong)(int)uVar7,0);
    *puVar9 = pvVar15;
    *(uint *)(puVar9 + 1) = uVar7;
                    /* WARNING: Store size is inaccurate */
    *(int *)(puVar9 + 3) = (int)(iVar6 + 0xfU) >> 0x1f;
    *(byte *)((longlong)puVar9 + 0x19) = *(byte *)((longlong)puVar9 + 0x19) | 1;
    LOCK();
    *(int *)((longlong)puVar9 + 0xc) = *(int *)((longlong)puVar9 + 0xc) + 1;
    UNLOCK();
    _Size = uStack_48;
    puVar14 = puVar9;
    pvVar15 = local_50;
  }
  if (plVar12 == &local_58) {
    if (puVar14 != (undefined8 *)0x0) {
      if ((*(int *)((longlong)puVar14 + 0xc) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumRefs != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoBuffer.cpp"
                             ,0x38,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      LOCK();
      piVar1 = (int *)((longlong)puVar14 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        if ((*(byte *)((longlong)puVar14 + 0x19) & 1) != 0) {
          FMemory::Free((void *)*puVar14);
        }
        TRefCountPtr<FIoBuffer::BufCore_const_>::~TRefCountPtr<FIoBuffer::BufCore_const_>
                  ((TRefCountPtr<FIoBuffer::BufCore_const_> *)(puVar14 + 2));
        ::operator_delete(puVar14,0x20);
      }
    }
  }
  else {
    this_00 = (BufCore *)*plVar12;
    *plVar12 = (longlong)puVar14;
    if (this_00 != (BufCore *)0x0) {
      FIoBuffer::BufCore::Release(this_00);
    }
  }
  local_res10[0] = *(uint *)(*plVar12 + 8);
  bVar5 = FCompression::CompressMemory
                    (**(FName **)((longlong)this + 0x10),*(void **)*plVar12,(int *)local_res10,
                     pvVar15,(int)_Size,COMPRESS_ForPackaging,0);
  if (bVar5) {
    *(uint *)(plVar12 + 1) = local_res10[0];
    uVar8 = local_res10[0];
    if (uVar11 <= (ulonglong)(longlong)(int)local_res10[0]) {
      puVar14 = (undefined8 *)*plVar12;
      _Dst = (void *)*puVar14;
      if ((CONCAT14(*(undefined1 *)(puVar14 + 3),*(undefined4 *)(puVar14 + 1)) < _Size) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InView.Size <= Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                             ,0xdb,
                             L"Failed to copy from a view of %llu bytes to a view of %llu bytes."),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (_Size != 0) {
        memcpy(_Dst,pvVar15,_Size);
      }
      uVar8 = (uint)uVar11;
      *(uint *)(plVar12 + 1) = uVar8;
    }
    lVar3 = *(longlong *)*plVar12;
    uVar11 = (ulonglong)(uVar8 + 0xf) & 0xfffffff0;
    for (uVar10 = (ulonglong)uVar8; uVar10 < uVar11; uVar10 = uVar10 + 1) {
      if ((CONCAT14(*(undefined1 *)(*plVar12 + 0x18),*(undefined4 *)(*plVar12 + 8)) <= uVar10) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("FillIndex < Block.Buffer.GetSize()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoChunkEncoding.cpp"
                             ,0x93,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined1 *)(lVar3 + uVar10) =
           *(undefined1 *)
            ((uVar10 - *(uint *)(plVar12 + 1)) % (ulonglong)*(uint *)(plVar12 + 1) + lVar3);
    }
    do {
      if (*(int *)((*(FAESKey **)((longlong)this + 0x18))->Key + (longlong)puVar13 * 4) != 0) {
        FAES::EncryptData(*(uchar **)*plVar12,uVar11,*(FAESKey **)((longlong)this + 0x18));
        break;
      }
      puVar13 = (undefined8 *)((longlong)puVar13 + 1);
    } while ((longlong)puVar13 < 8);
    LOCK();
    **(longlong **)((longlong)this + 0x28) = **(longlong **)((longlong)this + 0x28) + uVar11;
    UNLOCK();
  }
  else {
    *(undefined4 *)(plVar12 + 1) = 0;
  }
  return;
}

// Decode @ 14174f270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FIoChunkEncoding::Decode
          (FIoChunkDecodingParams *param_1,TMemoryView<void_const_> *param_2,
          TMemoryView<void> *param_3,EIoDecodeFlags param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  code *pcVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  uchar *_Dst;
  FBlake3Hash *pFVar15;
  longlong *plVar16;
  void *pvVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  int *piVar27;
  ulonglong uVar28;
  uchar *_Src;
  bool bVar29;
  undefined1 auStackY_1a8 [32];
  ulonglong local_160;
  ulonglong local_148;
  ulonglong local_f8;
  uint local_e0;
  TMemoryView<void_const_> local_c8;
  FString local_b8;
  FString local_a8;
  FAESKey local_98;
  FBlake3Hash local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar29 = -1 < CpuChannel->Enabled;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId235,"FIoChunkEncoding::Decode",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoChunkEncoding.cpp"
               ,0xeb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId235);
  }
  uVar5 = param_3->Size;
  if (param_1->TotalRawSize < param_1->RawOffset + uVar5) {
    bVar11 = false;
LAB_14174fc72:
    if (bVar29) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return bVar11;
  }
  if (((param_1->_padding_ != 0) && (param_1->_padding_ != 0x20)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Params.EncryptionKey.IsEmpty() || Params.EncryptionKey.GetSize() == FAES::FAESKey::KeySize"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoChunkEncoding.cpp"
                          ,0xf2,L"Encryption key must be %d bytes (AES)"), bVar11)) {
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return (bool)uVar12;
  }
  local_98.Key[0] = '\0';
  local_98.Key[1] = '\0';
  local_98.Key[2] = '\0';
  local_98.Key[3] = '\0';
  local_98.Key[4] = '\0';
  local_98.Key[5] = '\0';
  local_98.Key[6] = '\0';
  local_98.Key[7] = '\0';
  local_98.Key[8] = '\0';
  local_98.Key[9] = '\0';
  local_98.Key[10] = '\0';
  local_98.Key[0xb] = '\0';
  local_98.Key[0xc] = '\0';
  local_98.Key[0xd] = '\0';
  local_98.Key[0xe] = '\0';
  local_98.Key[0xf] = '\0';
  local_98.Key[0x10] = '\0';
  local_98.Key[0x11] = '\0';
  local_98.Key[0x12] = '\0';
  local_98.Key[0x13] = '\0';
  local_98.Key[0x14] = '\0';
  local_98.Key[0x15] = '\0';
  local_98.Key[0x16] = '\0';
  local_98.Key[0x17] = '\0';
  local_98.Key[0x18] = '\0';
  local_98.Key[0x19] = '\0';
  local_98.Key[0x1a] = '\0';
  local_98.Key[0x1b] = '\0';
  local_98.Key[0x1c] = '\0';
  local_98.Key[0x1d] = '\0';
  local_98.Key[0x1e] = '\0';
  local_98.Key[0x1f] = '\0';
  if (param_1->_padding_ != 0) {
    uVar19 = param_1->_padding_;
    pvVar17 = (void *)param_1->_padding_;
    if ((0x20 < uVar19) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InView.Size <= Size",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                            ,0xdb,
                            L"Failed to copy from a view of %llu bytes to a view of %llu bytes."),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      uVar12 = (*pcVar9)();
      return (bool)uVar12;
    }
    if (uVar19 != 0) {
      memcpy(&local_98,pvVar17,uVar19);
    }
  }
  uVar2 = (uint)param_1->_padding_;
  uVar26 = CONCAT44(0,uVar2);
  iVar3 = (param_1->EncodedBlockSize).ArrayNum;
  uVar19 = param_1->RawOffset;
  lVar22 = 0;
  uVar6 = param_1->TotalRawSize;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar26;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar19;
  local_160 = SUB168(auVar8 / auVar7,0);
  local_148 = uVar19 % uVar26;
  uVar21 = 0;
  uVar25 = SUB164(auVar8 / auVar7,0);
  if (uVar25 != 0) {
    do {
      uVar14 = 0;
      if ((int)uVar21 < (param_1->EncodedBlockSize).ArrayNum) {
        uVar14 = ~uVar21 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        uVar12 = (*pcVar9)();
        return (bool)uVar12;
      }
      lVar18 = (longlong)(int)uVar21;
      uVar21 = uVar21 + 1;
      lVar22 = lVar22 + ((ulonglong)((param_1->EncodedBlockSize).DataPtr[lVar18] + 0xf) & 0xfffffff0
                        );
    } while (uVar21 < uVar25);
  }
  uVar23 = lVar22 - param_1->EncodedOffset;
  uVar20 = param_2->Size;
  if (uVar20 < uVar23) {
    uVar23 = uVar20;
  }
  _Dst = (uchar *)0x0;
  param_2->Data = (void *)((longlong)param_2->Data + uVar23);
  param_2->Size = uVar20 - uVar23;
  local_f8 = 0;
  lVar22 = 0;
  while (uVar21 = (uint)(((uVar19 - 1) + uVar5) / uVar26), *(int *)(local_98.Key + lVar22 * 4) == 0)
  {
    lVar22 = lVar22 + 1;
    if (7 < lVar22) goto LAB_14174f5d8;
  }
  uVar19 = local_160 & 0xffffffff;
  local_f8 = 0;
  uVar14 = uVar25;
  while (uVar14 <= uVar21) {
    uVar14 = (uint)uVar19;
    uVar13 = 0;
    if ((int)uVar14 < (param_1->EncodedBlockSize).ArrayNum) {
      uVar13 = ~uVar14 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      uVar12 = (*pcVar9)();
      return (bool)uVar12;
    }
    uVar19 = (ulonglong)((param_1->EncodedBlockSize).DataPtr[(int)uVar14] + 0xf) & 0xfffffff0;
    if (local_f8 < uVar19) {
      local_f8 = uVar19;
    }
    uVar14 = uVar14 + 1;
    uVar19 = (ulonglong)uVar14;
  }
  _Dst = operator_new__(local_f8);
  if (_Dst == (uchar *)0x0) {
    _Dst = (uchar *)0x0;
  }
  else {
    memset(_Dst,0,local_f8);
  }
  operator_delete__((void *)0x0);
  operator_delete__((void *)0x0);
LAB_14174f5d8:
  iVar4 = (param_1->BlockHash).ArrayNum;
  if (uVar21 < uVar25) {
LAB_14174fc26:
    if ((param_3->Size != 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("OutRawData.GetSize() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoChunkEncoding.cpp"
                            ,0x15e,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      uVar12 = (*pcVar9)();
      return (bool)uVar12;
    }
    bVar11 = true;
  }
  else {
    while( true ) {
      uVar25 = (uint)local_160;
      uVar19 = uVar26;
      if (uVar25 == iVar3 - 1U) {
        uVar19 = (uVar6 - iVar3 * uVar2) + uVar26;
      }
      uVar20 = uVar19 - local_148;
      if (param_3->Size < uVar19 - local_148) {
        uVar20 = param_3->Size;
      }
      uVar14 = 0;
      if ((int)uVar25 < (param_1->EncodedBlockSize).ArrayNum) {
        uVar14 = ~uVar25 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        uVar12 = (*pcVar9)();
        return (bool)uVar12;
      }
      _Src = param_2->Data;
      uVar14 = (param_1->EncodedBlockSize).DataPtr[(int)uVar25];
      uVar24 = (ulonglong)uVar14;
      uVar14 = uVar14 + 0xf & 0xfffffff0;
      uVar23 = (ulonglong)uVar14;
      uVar28 = (ulonglong)uVar14;
      if (param_2->Size < uVar23) {
        uVar28 = param_2->Size;
      }
      if (iVar4 != 0) break;
LAB_14174f795:
      lVar22 = 0;
      do {
        if (*(int *)(local_98.Key + lVar22 * 4) != 0) {
          if ((local_f8 < uVar28) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("BlockView.GetSize() <= DecryptedScratchBufferSize",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoChunkEncoding.cpp"
                                  ,0x135,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            uVar12 = (*pcVar9)();
            return (bool)uVar12;
          }
          memcpy(_Dst,_Src,uVar28);
          FAES::DecryptData(_Dst,uVar28,&local_98);
          _Src = _Dst;
          break;
        }
        lVar22 = lVar22 + 1;
      } while (lVar22 < 8);
      if (uVar24 < uVar19) {
        if ((uVar20 == uVar19) && ((param_4 & WriteOnly) == None)) {
          bVar11 = FCompression::UncompressMemory
                             ((FName)param_1->_padding_,param_3->Data,(longlong)(int)uVar20,_Src,
                              uVar24,COMPRESS_NoFlags,0);
          if (!bVar11) {
            if (2 < (byte)LogIoDispatcher._0_1_) {
              ::FName::ToString((FName *)param_1,&local_b8);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoDispatcher);
              if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data.AllocatorInstance.Data);
                bVar11 = false;
                goto LAB_14174fc52;
              }
            }
LAB_14174fc21:
            bVar11 = false;
            goto LAB_14174fc52;
          }
        }
        else {
          plVar16 = ::operator_new(0x20);
          if (plVar16 == (longlong *)0x0) {
            plVar16 = (longlong *)0x0;
            piVar27 = (int *)&DAT_0000000c;
          }
          else {
            *plVar16 = 0;
            plVar16[1] = 0;
            plVar16[2] = 0;
            *(undefined2 *)(plVar16 + 3) = 0;
            pvVar17 = FMemory::Malloc(uVar19,0);
            *plVar16 = (longlong)pvVar17;
            piVar27 = (int *)((longlong)plVar16 + 0xc);
            *(int *)(plVar16 + 1) = (int)uVar19;
            *(byte *)((longlong)plVar16 + 0x19) = *(byte *)((longlong)plVar16 + 0x19) | 1;
            *(char *)(plVar16 + 3) = (char)(uVar19 >> 0x20);
            LOCK();
            *piVar27 = *piVar27 + 1;
            UNLOCK();
          }
          bVar11 = FCompression::UncompressMemory
                             ((FName)param_1->_padding_,(void *)*plVar16,(longlong)(int)uVar19,_Src,
                              uVar24,COMPRESS_NoFlags,0);
          if (!bVar11) {
            if (2 < (byte)LogIoDispatcher._0_1_) {
              ::FName::ToString((FName *)param_1,&local_a8);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoDispatcher);
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
            }
            if ((*piVar27 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("NumRefs != 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoBuffer.cpp"
                                    ,0x38,L""), bVar11)) {
              pcVar9 = (code *)swi(3);
              uVar12 = (*pcVar9)();
              return (bool)uVar12;
            }
            LOCK();
            iVar3 = *piVar27;
            *piVar27 = *piVar27 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              if ((*(byte *)((longlong)plVar16 + 0x19) & 1) != 0) {
                FMemory::Free((void *)*plVar16);
              }
              TRefCountPtr<FIoBuffer::BufCore_const_>::~TRefCountPtr<FIoBuffer::BufCore_const_>
                        ((TRefCountPtr<FIoBuffer::BufCore_const_> *)(plVar16 + 2));
              ::operator_delete(plVar16,0x20);
            }
            goto LAB_14174fc21;
          }
          lVar22 = *plVar16;
          uVar19 = (ulonglong)CONCAT14((char)plVar16[3],(int)plVar16[1]);
          if (uVar19 < local_148) {
            local_148 = uVar19;
          }
          uVar28 = uVar20;
          if (uVar19 - local_148 < uVar20) {
            uVar28 = uVar19 - local_148;
          }
          if ((param_3->Size < uVar28) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InView.Size <= Size",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                                  ,0xdb,
                                  L"Failed to copy from a view of %llu bytes to a view of %llu bytes."
                                 ), bVar11)) {
            pcVar9 = (code *)swi(3);
            uVar12 = (*pcVar9)();
            return (bool)uVar12;
          }
          if (uVar28 != 0) {
            memcpy(param_3->Data,(void *)(lVar22 + local_148),uVar28);
          }
          if ((*(int *)((longlong)plVar16 + 0xc) == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NumRefs != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoBuffer.cpp"
                                  ,0x38,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            uVar12 = (*pcVar9)();
            return (bool)uVar12;
          }
          LOCK();
          piVar27 = (int *)((longlong)plVar16 + 0xc);
          iVar1 = *piVar27;
          *piVar27 = *piVar27 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            if ((*(byte *)((longlong)plVar16 + 0x19) & 1) != 0) {
              FMemory::Free((void *)*plVar16);
            }
            TRefCountPtr<FIoBuffer::BufCore_const_>::~TRefCountPtr<FIoBuffer::BufCore_const_>
                      ((TRefCountPtr<FIoBuffer::BufCore_const_> *)(plVar16 + 2));
            ::operator_delete(plVar16,0x20);
          }
        }
      }
      else {
        if (uVar28 < local_148) {
          local_148 = uVar28;
        }
        uVar19 = uVar20;
        if (uVar28 - local_148 < uVar20) {
          uVar19 = uVar28 - local_148;
        }
        if ((param_3->Size < uVar19) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InView.Size <= Size",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                                ,0xdb,
                                L"Failed to copy from a view of %llu bytes to a view of %llu bytes."
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        if (uVar19 != 0) {
          memcpy(param_3->Data,_Src + local_148,uVar19);
        }
      }
      uVar19 = param_3->Size;
      local_148 = 0;
      if (uVar19 < uVar20) {
        uVar20 = uVar19;
      }
      param_3->Data = (void *)((longlong)param_3->Data + uVar20);
      uVar28 = param_2->Size;
      param_3->Size = uVar19 - uVar20;
      if (uVar28 < uVar23) {
        uVar23 = uVar28;
      }
      local_160 = (ulonglong)(uVar25 + 1);
      param_2->Data = (void *)((longlong)param_2->Data + uVar23);
      param_2->Size = uVar28 - uVar23;
      if (uVar21 < uVar25 + 1) goto LAB_14174fc26;
    }
    if (((param_1->BlockHash).ArrayNum == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("BlockHash.IsEmpty() == false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoChunkEncoding.cpp"
                            ,0x129,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      uVar12 = (*pcVar9)();
      return (bool)uVar12;
    }
    local_c8.Data = _Src;
    local_c8.Size = uVar28;
    pFVar15 = FBlake3::HashBuffer(&local_78,&local_c8);
    uVar10 = *(undefined8 *)pFVar15->Hash;
    uVar14 = 0;
    if ((int)uVar25 < (param_1->BlockHash).ArrayNum) {
      uVar14 = ~uVar25 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      uVar12 = (*pcVar9)();
      return (bool)uVar12;
    }
    local_e0 = (uint)uVar10;
    if (local_e0 == (param_1->BlockHash).DataPtr[(int)uVar25]) goto LAB_14174f795;
    if ((byte)LogIoDispatcher._0_1_ < 3) goto LAB_14174fc21;
    TArrayView<unsigned_int_const_,int>::operator[](&param_1->BlockHash,uVar25);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoDispatcher);
    bVar11 = false;
  }
LAB_14174fc52:
  operator_delete__(_Dst);
  goto LAB_14174fc72;
}

// Decode @ 14174fcc0

bool __cdecl
FIoChunkEncoding::Decode
          (TMemoryView<void_const_> *param_1,FName param_2,TMemoryView<void_const_> *param_3,
          TMemoryView<void> *param_4,ulong64 param_5)

{
  ulonglong *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uStack_9c;
  TMemoryView<void_const_> local_98;
  FIoChunkDecodingParams local_88;
  TMemoryView<void> local_28;
  
  puVar1 = param_1->Data;
  if (((param_1->Size < 0x10) || ((*puVar1 & 0xffffff) != 0x2e696f)) ||
     (uVar6 = (ulonglong)(uint)(1 << (*(byte *)((longlong)puVar1 + 0xd) & 0x1f)),
     param_1->Size < ((((*puVar1 >> 0x18) - 1) + uVar6) / uVar6 & 0xffffffff) * 4 + 0x10)) {
    bVar3 = false;
  }
  else {
    uVar7 = (ulonglong)(uint)(1 << (*(byte *)((longlong)puVar1 + 0xd) & 0x1f));
    uVar6 = *puVar1;
    ::FName::FName((FName *)&local_88,L"Oodle");
    local_88._padding_ = (longlong)param_3->Data;
    local_88._padding_ = param_3->Size;
    local_88.EncodedOffset = 0;
    local_88.EncodedBlockSize.DataPtr = (uint *)0x0;
    local_88.EncodedBlockSize._8_8_ = (ulonglong)(uint)local_88.EncodedBlockSize._12_4_ << 0x20;
    local_88.BlockHash.DataPtr = (uint *)0x0;
    local_88.BlockHash.ArrayNum = 0;
    local_88.RawOffset = param_5;
    local_88._padding_._0_4_ = 1 << (*(byte *)((longlong)puVar1 + 0xd) & 0x1f);
    local_88.TotalRawSize = *puVar1 >> 0x18;
    local_88._padding_ = (longlong)param_2;
    if ((*puVar1 & 0xffffff) != 0x2e696f) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoChunkEncoding.cpp"
                         ,0x22,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if ((*puVar1 & 0xffffff) != 0x2e696f) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoChunkEncoding.cpp"
                         ,0x1c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    uVar8 = (ulonglong)(uint)(1 << (*(byte *)((longlong)puVar1 + 0xd) & 0x1f));
    iVar5 = (int)((((*puVar1 >> 0x18) - 1) + uVar8) / uVar8);
    if (iVar5 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    uVar8 = param_1->Size;
    local_88.EncodedBlockSize._12_4_ = uStack_9c;
    local_88.EncodedBlockSize.ArrayNum = iVar5;
    local_28.Data = param_4->Data;
    local_28.Size = param_4->Size;
    uVar6 = ((((uVar6 >> 0x18) - 1) + uVar7) / uVar7 & 0xffffffff) * 4 + 0x10;
    if (uVar8 < uVar6) {
      uVar6 = uVar8;
    }
    local_98.Data = (void *)((longlong)param_1->Data + uVar6);
    local_98.Size = uVar8 - uVar6;
    local_88.EncodedBlockSize.DataPtr = (uint *)(puVar1 + 2);
    bVar3 = Decode(&local_88,&local_98,&local_28,None);
  }
  return bVar3;
}

// DecodeBlock @ 14174ff10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

FIoChunkBlockDecodeResult * __cdecl
FIoChunkEncoding::DecodeBlock
          (FIoChunkBlockDecodeResult *__return_storage_ptr__,FIoChunkBlockDecodingParams *param_1,
          TMemoryView<void> *param_2,TMemoryView<void> *param_3)

{
  uchar *_Buf1;
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FIoChunkBlockDecodeResult *pFVar8;
  uint uVar9;
  size_t _Size;
  undefined1 auStackY_b8 [32];
  uchar local_78 [24];
  FAESKey local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  uVar9 = (int)param_2->Size + 0xfU & 0xfffffff0;
  if ((param_1->BlockHash).Size == 0) {
LAB_14174fffc:
    if ((param_1->EncryptionKey).Size != 0) {
      uVar1 = (param_1->EncryptionKey).Size;
      pvVar2 = (param_1->EncryptionKey).Data;
      local_60.Key[0] = '\0';
      local_60.Key[1] = '\0';
      local_60.Key[2] = '\0';
      local_60.Key[3] = '\0';
      local_60.Key[4] = '\0';
      local_60.Key[5] = '\0';
      local_60.Key[6] = '\0';
      local_60.Key[7] = '\0';
      local_60.Key[8] = '\0';
      local_60.Key[9] = '\0';
      local_60.Key[10] = '\0';
      local_60.Key[0xb] = '\0';
      local_60.Key[0xc] = '\0';
      local_60.Key[0xd] = '\0';
      local_60.Key[0xe] = '\0';
      local_60.Key[0xf] = '\0';
      local_60.Key[0x10] = '\0';
      local_60.Key[0x11] = '\0';
      local_60.Key[0x12] = '\0';
      local_60.Key[0x13] = '\0';
      local_60.Key[0x14] = '\0';
      local_60.Key[0x15] = '\0';
      local_60.Key[0x16] = '\0';
      local_60.Key[0x17] = '\0';
      local_60.Key[0x18] = '\0';
      local_60.Key[0x19] = '\0';
      local_60.Key[0x1a] = '\0';
      local_60.Key[0x1b] = '\0';
      local_60.Key[0x1c] = '\0';
      local_60.Key[0x1d] = '\0';
      local_60.Key[0x1e] = '\0';
      local_60.Key[0x1f] = '\0';
      if ((0x20 < uVar1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InView.Size <= Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                             ,0xdb,
                             L"Failed to copy from a view of %llu bytes to a view of %llu bytes."),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FIoChunkBlockDecodeResult *)(*pcVar4)();
        return pFVar8;
      }
      if (uVar1 != 0) {
        memcpy(&local_60,pvVar2,uVar1);
      }
      FAES::DecryptData(param_2->Data,(ulonglong)uVar9,&local_60);
    }
    if (param_1->CompressionFormat == (FName)0x0) {
      (__return_storage_ptr__->DecodedBlock).Data = param_2->Data;
      (__return_storage_ptr__->DecodedBlock).Size = param_3->Size;
      __return_storage_ptr__->ErrorCode = Ok;
    }
    else {
      iVar6 = (int)param_2->Size;
      if (((param_2->Size != (longlong)iVar6) || (iVar6 < 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar5
         )) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FIoChunkBlockDecodeResult *)(*pcVar4)();
        return pFVar8;
      }
      pvVar2 = param_2->Data;
      iVar7 = (int)param_3->Size;
      if (((param_3->Size != (longlong)iVar7) || (iVar7 < 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar5
         )) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FIoChunkBlockDecodeResult *)(*pcVar4)();
        return pFVar8;
      }
      pvVar3 = param_3->Data;
      bVar5 = FCompression::UncompressMemory
                        (param_1->CompressionFormat,pvVar3,(longlong)iVar7,pvVar2,(longlong)iVar6,
                         COMPRESS_NoFlags,0);
      if (bVar5) {
        (__return_storage_ptr__->DecodedBlock).Size = param_3->Size;
        (__return_storage_ptr__->DecodedBlock).Data = pvVar3;
        __return_storage_ptr__->ErrorCode = Ok;
      }
      else {
        (__return_storage_ptr__->DecodedBlock).Data = (void *)0x0;
        (__return_storage_ptr__->DecodedBlock).Size = 0;
        __return_storage_ptr__->ErrorCode = CompressionError;
      }
    }
  }
  else {
    if ((param_1->HashFunction != Sha1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Params.HashFunction == EIoSignatureHashFunction::Sha1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoChunkEncoding.cpp"
                           ,0x16a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FIoChunkBlockDecodeResult *)(*pcVar4)();
      return pFVar8;
    }
    local_78[0] = '\0';
    local_78[1] = '\0';
    local_78[2] = '\0';
    local_78[3] = '\0';
    local_78[4] = '\0';
    local_78[5] = '\0';
    local_78[6] = '\0';
    local_78[7] = '\0';
    local_78[8] = '\0';
    local_78[9] = '\0';
    local_78[10] = '\0';
    local_78[0xb] = '\0';
    local_78[0xc] = '\0';
    local_78[0xd] = '\0';
    local_78[0xe] = '\0';
    local_78[0xf] = '\0';
    local_78[0x10] = '\0';
    local_78[0x11] = '\0';
    local_78[0x12] = '\0';
    local_78[0x13] = '\0';
    FSHA1::HashBuffer(param_2->Data,(ulonglong)uVar9,local_78);
    _Buf1 = (param_1->BlockHash).Data;
    if (_Buf1 == local_78) {
LAB_14174ffcf:
      iVar6 = 0;
      uVar1 = (param_1->BlockHash).Size;
      if ((uVar1 != 0x14) && (iVar6 = 1, uVar1 < 0x14)) {
        iVar6 = -1;
      }
      if (iVar6 == 0) goto LAB_14174fffc;
    }
    else {
      _Size = 0x14;
      if ((param_1->BlockHash).Size < 0x14) {
        _Size = (param_1->BlockHash).Size;
      }
      iVar6 = memcmp(_Buf1,local_78,_Size);
      if (iVar6 == 0) goto LAB_14174ffcf;
    }
    (__return_storage_ptr__->DecodedBlock).Data = (void *)0x0;
    (__return_storage_ptr__->DecodedBlock).Size = 0;
    __return_storage_ptr__->ErrorCode = SignatureError;
  }
  return __return_storage_ptr__;
}

// Encode @ 141752f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FIoChunkEncoding::Encode
          (FIoChunkEncodingParams *param_1,TMemoryView<void_const_> *param_2,FIoBuffer *param_3,
          FIoBuffer *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulong64 uVar3;
  void *pvVar4;
  BufCore *pBVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  code *pcVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  BufCore *pBVar17;
  uchar *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong _Size;
  int iVar24;
  undefined1 auStackY_158 [32];
  <lambda_1> local_118;
  ForAnyElementType local_108;
  int local_100 [2];
  uchar *local_f8;
  int local_f0;
  ulonglong local_e8;
  longlong local_e0;
  uchar *local_d8;
  TArrayView<std::nullptr_t,int> local_d0;
  code *local_c0;
  uint *local_b8;
  uint local_b0 [2];
  TMemoryView<void_const_> *local_a8;
  FIoChunkEncodingParams *local_a0;
  int *local_98;
  ForAnyElementType *local_90;
  ulonglong *local_88;
  FIoBuffer local_80;
  FIoBuffer local_78;
  int local_70 [8];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_158;
  uVar22 = param_1->BlockSize;
  if (((uVar22 & 0xf) != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsAligned(BlockSize, FAES::AESBlockSize)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoChunkEncoding.cpp"
                          ,0x4b,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    uVar13 = (*pcVar10)();
    return (bool)uVar13;
  }
  if (((uVar22 & uVar22 - 1) != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("FMath::IsPowerOfTwo(BlockSize) && BlockSize <= ((uint32) 0xffffffff)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoChunkEncoding.cpp"
                          ,0x4d,L"BlockSize must be a 32-bit power of two but was %llu."), bVar12))
  {
    pcVar10 = (code *)swi(3);
    uVar13 = (*pcVar10)();
    return (bool)uVar13;
  }
  uVar3 = (param_1->EncryptionKey).Size;
  if (((uVar3 != 0) && (uVar3 != 0x20)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Params.EncryptionKey.IsEmpty() || Params.EncryptionKey.GetSize() == FAES::FAESKey::KeySize"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoChunkEncoding.cpp"
                          ,0x4e,L"Encryption key must be zero or %d bytes (AES)"), bVar12)) {
    pcVar10 = (code *)swi(3);
    uVar13 = (*pcVar10)();
    return (bool)uVar13;
  }
  if (param_2->Size == 0) {
    bVar12 = false;
  }
  else {
    local_70[0] = 0;
    local_70[1] = 0;
    local_70[2] = 0;
    local_70[3] = 0;
    local_70[4] = 0;
    local_70[5] = 0;
    local_70[6] = 0;
    local_70[7] = 0;
    if ((param_1->EncryptionKey).Size != 0) {
      uVar16 = (param_1->EncryptionKey).Size;
      pvVar4 = (param_1->EncryptionKey).Data;
      if ((0x20 < uVar16) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InView.Size <= Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                              ,0xdb,
                              L"Failed to copy from a view of %llu bytes to a view of %llu bytes."),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        uVar13 = (*pcVar10)();
        return (bool)uVar13;
      }
      if (uVar16 != 0) {
        memcpy(local_70,pvVar4,uVar16);
      }
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = CONCAT44(0,uVar22);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (param_2->Size - 1) + CONCAT44(0,uVar22);
    uVar16 = SUB168(auVar9 / auVar8,0);
    if ((longlong)uVar16 < 1) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("BlockCount > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoChunkEncoding.cpp"
                          ,0x5c,L"");
      if (bVar12) {
code_r0x000141753140:
        pcVar10 = (code *)swi(3);
        uVar13 = (*pcVar10)();
        return (bool)uVar13;
      }
    }
    else if ((0x1000000 < (longlong)uVar16) &&
            (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("BlockCount <= FIoChunkEncoding::MaxBlockCount",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoChunkEncoding.cpp"
                                 ,0x5e,
                                 L"Raw data of size %llu with block size %llu requires %llu blocks, but the limit is %d."
                                ), bVar12)) goto code_r0x000141753140;
    local_e8 = 0;
    local_108.Data = (FScriptContainerElement *)0x0;
    local_100[0] = 0;
    local_100[1] = 0;
    iVar24 = SUB164(auVar9 / auVar8,0);
    if (iVar24 < 1) {
      if (iVar24 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar16 & 0xffffffff);
      }
    }
    else {
      iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,iVar24,&local_108,local_100,local_100 + 1);
      DefaultConstructItems<_FIoChunkEncoding::Encode_::__l2::FBlock,int>
                (local_108.Data + (longlong)iVar14 * 0x10,iVar24);
    }
    local_98 = local_70;
    local_90 = &local_108;
    local_88 = &local_e8;
    local_d0.DataPtr = (void **)0x0;
    local_c0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FIoChunkEncoding::Encode'::__l2::<lambda_1>,void,int>::Call;
    local_b8 = local_b0;
    local_d0.ArrayNum = 0;
    local_b0[0] = uVar22;
    local_a8 = param_2;
    local_a0 = param_1;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar24,1,(TFunctionRef<void___cdecl(int)> *)&local_c0,local_118,
               None,&local_d0);
    uVar3 = uVar16 * 4 + 0x10;
    pBVar17 = (param_3->CorePtr).Reference;
    if (CONCAT14(pBVar17->DataSizeHigh,pBVar17->DataSizeLow) != uVar3) {
      pBVar17 = ::operator_new(0x20);
      if (pBVar17 == (BufCore *)0x0) {
        pBVar17 = (BufCore *)0x0;
      }
      else {
        pBVar17->DataPtr = (uchar *)0x0;
        pBVar17->DataSizeLow = 0;
        pBVar17->NumRefs = 0;
        (pBVar17->OuterCore).Reference = (BufCore *)0x0;
        pBVar17->DataSizeHigh = '\0';
        pBVar17->Flags = '\0';
        puVar18 = FMemory::Malloc(uVar3,0);
        pBVar17->DataSizeLow = (uint)uVar3;
        pBVar17->DataSizeHigh = (uchar)(uVar3 >> 0x20);
        pBVar17->DataPtr = puVar18;
        pBVar17->Flags = pBVar17->Flags | 1;
        LOCK();
        pBVar17->NumRefs = pBVar17->NumRefs + 1;
        UNLOCK();
      }
      if (param_3 == &local_80) {
        if (pBVar17 != (BufCore *)0x0) {
          if ((pBVar17->NumRefs == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NumRefs != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoBuffer.cpp"
                                  ,0x38,L""), bVar12)) {
            pcVar10 = (code *)swi(3);
            uVar13 = (*pcVar10)();
            return (bool)uVar13;
          }
          LOCK();
          piVar1 = &pBVar17->NumRefs;
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            if ((pBVar17->Flags & 1) != 0) {
              FMemory::Free(pBVar17->DataPtr);
            }
            TRefCountPtr<FIoBuffer::BufCore_const_>::~TRefCountPtr<FIoBuffer::BufCore_const_>
                      (&pBVar17->OuterCore);
            ::operator_delete(pBVar17,0x20);
          }
        }
      }
      else {
        pBVar5 = (param_3->CorePtr).Reference;
        (param_3->CorePtr).Reference = pBVar17;
        if (pBVar5 != (BufCore *)0x0) {
          FIoBuffer::BufCore::Release(pBVar5);
        }
      }
    }
    lVar19 = 0;
    do {
      if (local_70[lVar19] != 0) {
        uVar13 = 1;
        goto LAB_14175333a;
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < 8);
    uVar13 = 0;
LAB_14175333a:
    puVar6 = (ulonglong *)((param_3->CorePtr).Reference)->DataPtr;
    uVar20 = *puVar6 & 0xffffffffff2e696f | 0x2e696f;
    *puVar6 = uVar20;
    *puVar6 = param_2->Size << 0x18 | (ulonglong)((uint)uVar20 & 0xffffff);
    puVar6[1] = (local_e8 ^ puVar6[1]) & 0xffffff0000000000 ^ local_e8;
    local_f0 = 0x1f;
    if (uVar22 != 0) {
      for (; uVar22 >> local_f0 == 0; local_f0 = local_f0 + -1) {
      }
    }
    *(undefined1 *)((longlong)puVar6 + 0xe) = uVar13;
    *(undefined1 *)((longlong)puVar6 + 0xf) = 0;
    uVar13 = 0;
    if (uVar22 != 0) {
      uVar13 = (char)local_f0;
    }
    *(undefined1 *)((longlong)puVar6 + 0xd) = uVar13;
    pBVar17 = (param_3->CorePtr).Reference;
    uVar21 = (ulonglong)CONCAT14(pBVar17->DataSizeHigh,pBVar17->DataSizeLow);
    uVar20 = 0x10;
    if (uVar21 < 0x10) {
      uVar20 = uVar21;
    }
    local_d8 = pBVar17->DataPtr + uVar20;
    if ((iVar24 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      uVar13 = (*pcVar10)();
      return (bool)uVar13;
    }
    uVar20 = local_e8;
    pBVar17 = ::operator_new(0x20);
    if (pBVar17 == (BufCore *)0x0) {
      pBVar17 = (BufCore *)0x0;
    }
    else {
      pBVar17->DataPtr = (uchar *)0x0;
      pBVar17->DataSizeLow = 0;
      pBVar17->NumRefs = 0;
      (pBVar17->OuterCore).Reference = (BufCore *)0x0;
      pBVar17->DataSizeHigh = '\0';
      pBVar17->Flags = '\0';
      puVar18 = FMemory::Malloc(uVar20,0);
      pBVar17->DataSizeLow = (uint)uVar20;
      pBVar17->DataSizeHigh = (uchar)(uVar20 >> 0x20);
      pBVar17->DataPtr = puVar18;
      pBVar17->Flags = pBVar17->Flags | 1;
      LOCK();
      pBVar17->NumRefs = pBVar17->NumRefs + 1;
      UNLOCK();
    }
    if (param_4 == &local_78) {
      if (pBVar17 != (BufCore *)0x0) {
        if ((pBVar17->NumRefs == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumRefs != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoBuffer.cpp"
                                ,0x38,L""), bVar12)) {
          pcVar10 = (code *)swi(3);
          uVar13 = (*pcVar10)();
          return (bool)uVar13;
        }
        LOCK();
        piVar1 = &pBVar17->NumRefs;
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          if ((pBVar17->Flags & 1) != 0) {
            FMemory::Free(pBVar17->DataPtr);
          }
          TRefCountPtr<FIoBuffer::BufCore_const_>::~TRefCountPtr<FIoBuffer::BufCore_const_>
                    (&pBVar17->OuterCore);
          ::operator_delete(pBVar17,0x20);
        }
      }
    }
    else {
      pBVar5 = (param_4->CorePtr).Reference;
      (param_4->CorePtr).Reference = pBVar17;
      if (pBVar5 != (BufCore *)0x0) {
        FIoBuffer::BufCore::Release(pBVar5);
      }
    }
    pBVar17 = (param_4->CorePtr).Reference;
    uVar22 = 0;
    local_f8 = pBVar17->DataPtr;
    uVar20 = (ulonglong)CONCAT14(pBVar17->DataSizeHigh,pBVar17->DataSizeLow);
    if (0 < (longlong)uVar16) {
      lVar19 = 0;
      local_e0 = 0;
      do {
        lVar11 = local_e0;
        uVar15 = 0;
        if ((int)uVar22 < local_100[0]) {
          uVar15 = ~uVar22 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          uVar13 = (*pcVar10)();
          return (bool)uVar13;
        }
        pFVar2 = local_108.Data + lVar11;
        if (*(int *)(local_108.Data + lVar11 + 8) == 0) {
          bVar12 = false;
          goto LAB_141753701;
        }
        uVar23 = *(int *)(local_108.Data + lVar11 + 8) + 0xfU & 0xfffffff0;
        uVar21 = (ulonglong)uVar23;
        uVar15 = 0;
        if ((int)uVar22 < iVar24) {
          uVar15 = ~uVar22 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          uVar13 = (*pcVar10)();
          return (bool)uVar13;
        }
        *(uint *)(local_d8 + lVar19 * 4) = uVar23;
        puVar7 = *(undefined8 **)pFVar2;
        pvVar4 = (void *)*puVar7;
        _Size = uVar21;
        if (CONCAT14(*(undefined1 *)(puVar7 + 3),*(undefined4 *)(puVar7 + 1)) < uVar21) {
          _Size = (ulonglong)CONCAT14(*(undefined1 *)(puVar7 + 3),*(undefined4 *)(puVar7 + 1));
        }
        if ((uVar20 < _Size) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InView.Size <= Size",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                                ,0xdb,
                                L"Failed to copy from a view of %llu bytes to a view of %llu bytes."
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          uVar13 = (*pcVar10)();
          return (bool)uVar13;
        }
        if (_Size != 0) {
          memcpy(local_f8,pvVar4,_Size);
        }
        if (uVar20 < uVar21) {
          uVar21 = uVar20;
        }
        uVar22 = uVar22 + 1;
        local_f8 = local_f8 + uVar21;
        local_e0 = local_e0 + 0x10;
        uVar20 = uVar20 - uVar21;
        lVar19 = lVar19 + 1;
      } while ((longlong)(int)uVar22 < (longlong)uVar16);
    }
    if ((uVar20 != 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("EncodedBlocks.GetSize() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoChunkEncoding.cpp"
                            ,0xc5,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      uVar13 = (*pcVar10)();
      return (bool)uVar13;
    }
    pBVar17 = (param_3->CorePtr).Reference;
    puVar6 = (ulonglong *)pBVar17->DataPtr;
    uVar16 = (ulonglong)CONCAT14(pBVar17->DataSizeHigh,pBVar17->DataSizeLow);
    if ((((uVar16 < 0x10) || ((*puVar6 & 0xffffff) != 0x2e696f)) ||
        (uVar20 = (ulonglong)(uint)(1 << (*(byte *)((longlong)puVar6 + 0xd) & 0x1f)),
        uVar16 < ((((*puVar6 >> 0x18) - 1) + uVar20) / uVar20 & 0xffffffff) * 4 + 0x10)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("FHeader::Decode(OutHeader.GetView()) != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoChunkEncoding.cpp"
                            ,0xc6,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      uVar13 = (*pcVar10)();
      return (bool)uVar13;
    }
    bVar12 = true;
LAB_141753701:
    DestructItems<_FIoChunkEncoding::Encode_::__l2::FBlock,int>
              ((FBlock *)local_108.Data,local_100[0]);
    if ((FBlock *)local_108.Data != (FBlock *)0x0) {
      FMemory::Free(local_108.Data);
    }
  }
  return bVar12;
}

// Encode @ 141753770

bool __cdecl
FIoChunkEncoding::Encode
          (FIoChunkEncodingParams *param_1,TMemoryView<void_const_> *param_2,FIoBuffer *param_3)

{
  int *piVar1;
  int iVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  BufCore *pBVar8;
  uchar *puVar9;
  BufCore *pBVar10;
  ulonglong uVar11;
  ulonglong _Size;
  ulong64 uVar12;
  FIoBuffer FVar13;
  FIoBuffer FVar14;
  ulonglong uVar15;
  FIoBuffer local_res20;
  FIoBuffer local_48;
  FIoBuffer local_40;
  TMemoryView<void_const_> local_38;
  
  local_res20.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)::operator_new(0x20);
  pBVar10 = (BufCore *)0x0;
  if (local_res20.CorePtr.Reference == (BufCore *)0x0) {
    local_res20.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(BufCore *)0x0;
  }
  else {
    ((BufCore *)local_res20.CorePtr.Reference)->DataPtr = (uchar *)0x0;
    ((BufCore *)local_res20.CorePtr.Reference)->DataSizeLow = 0;
    ((BufCore *)local_res20.CorePtr.Reference)->NumRefs = 0;
    (((BufCore *)local_res20.CorePtr.Reference)->OuterCore).Reference = (BufCore *)0x0;
    ((BufCore *)local_res20.CorePtr.Reference)->DataSizeHigh = '\0';
    ((BufCore *)local_res20.CorePtr.Reference)->Flags = '\0';
    LOCK();
    ((BufCore *)local_res20.CorePtr.Reference)->NumRefs =
         ((BufCore *)local_res20.CorePtr.Reference)->NumRefs + 1;
    UNLOCK();
  }
  local_48.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)::operator_new(0x20);
  if (local_48.CorePtr.Reference == (BufCore *)0x0) {
    local_48.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(BufCore *)0x0;
  }
  else {
    ((BufCore *)local_48.CorePtr.Reference)->DataPtr = (uchar *)0x0;
    ((BufCore *)local_48.CorePtr.Reference)->DataSizeLow = 0;
    ((BufCore *)local_48.CorePtr.Reference)->NumRefs = 0;
    (((BufCore *)local_48.CorePtr.Reference)->OuterCore).Reference = (BufCore *)0x0;
    ((BufCore *)local_48.CorePtr.Reference)->DataSizeHigh = '\0';
    ((BufCore *)local_48.CorePtr.Reference)->Flags = '\0';
    LOCK();
    ((BufCore *)local_48.CorePtr.Reference)->NumRefs =
         ((BufCore *)local_48.CorePtr.Reference)->NumRefs + 1;
    UNLOCK();
  }
  local_38.Data = param_2->Data;
  local_38.Size = param_2->Size;
  bVar5 = Encode(param_1,&local_38,&local_res20,&local_48);
  FVar13.CorePtr.Reference = local_48.CorePtr.Reference;
  FVar14.CorePtr.Reference = local_res20.CorePtr.Reference;
  if (bVar5) {
    uVar12 = (ulonglong)
             CONCAT14(*(uchar *)((longlong)local_48.CorePtr.Reference + 0x18),
                      *(uint *)((longlong)local_48.CorePtr.Reference + 8)) +
             (ulonglong)
             CONCAT14(*(uchar *)((longlong)local_res20.CorePtr.Reference + 0x18),
                      *(uint *)((longlong)local_res20.CorePtr.Reference + 8));
    pBVar8 = ::operator_new(0x20);
    if (pBVar8 != (BufCore *)0x0) {
      pBVar8->DataPtr = (uchar *)0x0;
      pBVar8->DataSizeLow = 0;
      pBVar8->NumRefs = 0;
      (pBVar8->OuterCore).Reference = (BufCore *)0x0;
      pBVar8->DataSizeHigh = '\0';
      pBVar8->Flags = '\0';
      puVar9 = FMemory::Malloc(uVar12,0);
      pBVar8->DataSizeLow = (uint)uVar12;
      pBVar8->DataSizeHigh = (uchar)(uVar12 >> 0x20);
      pBVar8->DataPtr = puVar9;
      pBVar8->Flags = pBVar8->Flags | 1;
      LOCK();
      pBVar8->NumRefs = pBVar8->NumRefs + 1;
      UNLOCK();
      FVar13.CorePtr.Reference = local_48.CorePtr.Reference;
      FVar14.CorePtr.Reference = local_res20.CorePtr.Reference;
      pBVar10 = pBVar8;
    }
    if (param_3 == &local_40) {
      if (pBVar10 != (BufCore *)0x0) {
        if ((pBVar10->NumRefs == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumRefs != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoBuffer.cpp"
                               ,0x38,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        LOCK();
        piVar1 = &pBVar10->NumRefs;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          if ((pBVar10->Flags & 1) != 0) {
            FMemory::Free(pBVar10->DataPtr);
          }
          TRefCountPtr<FIoBuffer::BufCore_const_>::~TRefCountPtr<FIoBuffer::BufCore_const_>
                    (&pBVar10->OuterCore);
          ::operator_delete(pBVar10,0x20);
        }
      }
    }
    else {
      pBVar8 = (param_3->CorePtr).Reference;
      (param_3->CorePtr).Reference = pBVar10;
      if (pBVar8 != (BufCore *)0x0) {
        FIoBuffer::BufCore::Release(pBVar8);
      }
    }
    pBVar10 = (param_3->CorePtr).Reference;
    puVar9 = ((BufCore *)FVar14.CorePtr.Reference)->DataPtr;
    puVar3 = pBVar10->DataPtr;
    uVar11 = (ulonglong)
             CONCAT14(((BufCore *)FVar14.CorePtr.Reference)->DataSizeHigh,
                      ((BufCore *)FVar14.CorePtr.Reference)->DataSizeLow);
    if ((CONCAT14(pBVar10->DataSizeHigh,pBVar10->DataSizeLow) < uVar11) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InView.Size <= Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                           ,0xdb,
                           L"Failed to copy from a view of %llu bytes to a view of %llu bytes."),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if (uVar11 != 0) {
      memcpy(puVar3,puVar9,uVar11);
    }
    pBVar10 = (param_3->CorePtr).Reference;
    puVar9 = ((BufCore *)FVar13.CorePtr.Reference)->DataPtr;
    puVar3 = pBVar10->DataPtr;
    uVar15 = (ulonglong)CONCAT14(pBVar10->DataSizeHigh,pBVar10->DataSizeLow);
    uVar11 = (ulonglong)
             CONCAT14(((BufCore *)FVar14.CorePtr.Reference)->DataSizeHigh,
                      ((BufCore *)FVar14.CorePtr.Reference)->DataSizeLow);
    if (uVar15 < uVar11) {
      uVar11 = uVar15;
    }
    _Size = (ulonglong)
            CONCAT14(((BufCore *)FVar13.CorePtr.Reference)->DataSizeHigh,
                     ((BufCore *)FVar13.CorePtr.Reference)->DataSizeLow);
    if ((uVar15 - uVar11 < _Size) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InView.Size <= Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                           ,0xdb,
                           L"Failed to copy from a view of %llu bytes to a view of %llu bytes."),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if (_Size != 0) {
      memcpy(puVar3 + uVar11,puVar9,_Size);
    }
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (FVar13.CorePtr.Reference != (BufCore *)0x0) {
    if ((((BufCore *)FVar13.CorePtr.Reference)->NumRefs == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumRefs != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoBuffer.cpp"
                           ,0x38,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    LOCK();
    piVar1 = &((BufCore *)FVar13.CorePtr.Reference)->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((((BufCore *)FVar13.CorePtr.Reference)->Flags & 1) != 0) {
        FMemory::Free(((BufCore *)FVar13.CorePtr.Reference)->DataPtr);
      }
      TRefCountPtr<FIoBuffer::BufCore_const_>::~TRefCountPtr<FIoBuffer::BufCore_const_>
                (&((BufCore *)FVar13.CorePtr.Reference)->OuterCore);
      ::operator_delete((void *)FVar13.CorePtr.Reference,0x20);
    }
  }
  if (FVar14.CorePtr.Reference != (BufCore *)0x0) {
    if ((((BufCore *)FVar14.CorePtr.Reference)->NumRefs == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumRefs != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoBuffer.cpp"
                           ,0x38,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    LOCK();
    piVar1 = &((BufCore *)FVar14.CorePtr.Reference)->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((((BufCore *)FVar14.CorePtr.Reference)->Flags & 1) != 0) {
        FMemory::Free(((BufCore *)FVar14.CorePtr.Reference)->DataPtr);
      }
      TRefCountPtr<FIoBuffer::BufCore_const_>::~TRefCountPtr<FIoBuffer::BufCore_const_>
                (&((BufCore *)FVar14.CorePtr.Reference)->OuterCore);
      ::operator_delete((void *)FVar14.CorePtr.Reference,0x20);
    }
  }
  return bVar5;
}

// GetChunkRange @ 14175bb80

TIoStatusOr<FIoOffsetAndLength> * __cdecl
FIoChunkEncoding::GetChunkRange
          (TIoStatusOr<FIoOffsetAndLength> *__return_storage_ptr__,FIoChunkDecodingParams *param_1,
          ulong64 param_2)

{
  TArrayView<unsigned_int_const_,int> local_18;
  
  local_18.DataPtr = (param_1->EncodedBlockSize).DataPtr;
  local_18.ArrayNum = (param_1->EncodedBlockSize).ArrayNum;
  local_18._12_4_ = *(undefined4 *)&(param_1->EncodedBlockSize).field_0xc;
  GetChunkRange(__return_storage_ptr__,param_1->TotalRawSize,(uint)param_1->_padding_,&local_18,
                param_1->RawOffset,param_2);
  return __return_storage_ptr__;
}

// GetChunkRange @ 14175bbd0

TIoStatusOr<FIoOffsetAndLength> * __cdecl
FIoChunkEncoding::GetChunkRange
          (TIoStatusOr<FIoOffsetAndLength> *__return_storage_ptr__,ulong64 param_1,uint param_2,
          TArrayView<unsigned_int_const_,int> *param_3,ulong64 param_4,ulong64 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  ulonglong uVar6;
  bool bVar7;
  uint uVar8;
  TIoStatusOr<FIoOffsetAndLength> *pTVar9;
  FIoStatus *pFVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  FIoStatus local_48;
  FIoStatus local_38;
  
  uVar6 = CONCAT44(0,param_2);
  if ((param_2 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawBlockSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoChunkEncoding.cpp"
                         ,0x19f,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TIoStatusOr<FIoOffsetAndLength> *)(*pcVar5)();
    return pTVar9;
  }
  if ((param_3->ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("EncodedBlockSize.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoChunkEncoding.cpp"
                         ,0x1a0,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TIoStatusOr<FIoOffsetAndLength> *)(*pcVar5)();
    return pTVar9;
  }
  if (param_1 < param_5 + param_4) {
    pFVar10 = FIoStatus::FIoStatus(&local_48,InvalidParameter);
    TIoStatusOr<FIoOffsetAndLength>::TIoStatusOr<FIoOffsetAndLength>(__return_storage_ptr__,pFVar10)
    ;
    return __return_storage_ptr__;
  }
  uVar11 = ((param_1 - 1) + uVar6) / uVar6;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar6;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_4;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar6;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (param_5 + param_4) - 1;
  uVar15 = SUB164(auVar3 / auVar1,0);
  if ((uVar11 < (SUB168(auVar3 / auVar1,0) & 0xffffffff)) ||
     (uVar11 < (SUB168(auVar4 / auVar2,0) & 0xffffffff))) {
    pFVar10 = FIoStatus::FIoStatus(&local_38,InvalidParameter);
    TIoStatusOr<FIoOffsetAndLength>::TIoStatusOr<FIoOffsetAndLength>(__return_storage_ptr__,pFVar10)
    ;
  }
  else {
    uVar12 = 0;
    lVar13 = 0;
    if (uVar15 != 0) {
      do {
        lVar14 = (longlong)(int)uVar12;
        uVar8 = 0;
        if ((int)uVar12 < param_3->ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TIoStatusOr<FIoOffsetAndLength> *)(*pcVar5)();
          return pTVar9;
        }
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + ((ulonglong)(param_3->DataPtr[lVar14] + 0xf) & 0xfffffff0);
      } while (uVar12 < uVar15);
    }
    lVar14 = 0;
    for (; uVar12 <= SUB164(auVar4 / auVar2,0); uVar12 = uVar12 + 1) {
      uVar15 = 0;
      if ((int)uVar12 < param_3->ArrayNum) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TIoStatusOr<FIoOffsetAndLength> *)(*pcVar5)();
        return pTVar9;
      }
      lVar14 = lVar14 + ((ulonglong)(param_3->DataPtr[(int)uVar12] + 0xf) & 0xfffffff0);
    }
    FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
    FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
    (__return_storage_ptr__->Value).Pad[0] = (uchar)((ulonglong)lVar13 >> 0x20);
    (__return_storage_ptr__->Value).Pad[1] = (uchar)((ulonglong)lVar13 >> 0x18);
    (__return_storage_ptr__->Value).Pad[2] = (uchar)((ulonglong)lVar13 >> 0x10);
    (__return_storage_ptr__->Value).Pad[3] = (uchar)((ulonglong)lVar13 >> 8);
    (__return_storage_ptr__->Value).Pad[4] = (uchar)lVar13;
    (__return_storage_ptr__->Value).Pad[5] = (uchar)((ulonglong)lVar14 >> 0x20);
    (__return_storage_ptr__->Value).Pad[6] = (uchar)((ulonglong)lVar14 >> 0x18);
    (__return_storage_ptr__->Value).Pad[7] = (uchar)((ulonglong)lVar14 >> 0x10);
    (__return_storage_ptr__->Value).Pad[8] = (uchar)((ulonglong)lVar14 >> 8);
    (__return_storage_ptr__->Value).Pad[9] = (uchar)lVar14;
  }
  return __return_storage_ptr__;
}

// GetTotalEncodedSize @ 141761a00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong64 __cdecl FIoChunkEncoding::GetTotalEncodedSize(TArrayView<unsigned_int_const_,int> *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar12;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong lVar13;
  longlong lVar14;
  
  puVar7 = (ulonglong *)param_1->DataPtr;
  uVar8 = 0;
  puVar2 = (ulonglong *)((longlong)param_1->ArrayNum * 4 + (longlong)puVar7);
  uVar6 = (longlong)param_1->ArrayNum & 0x3fffffffffffffff;
  if (puVar2 < puVar7) {
    uVar6 = uVar8;
  }
  if ((uVar6 != 0) && (3 < uVar6)) {
    lVar13 = 0;
    lVar14 = 0;
    lVar4 = 0;
    lVar5 = 0;
    do {
      uVar8 = uVar8 + 4;
      lVar9 = (*puVar7 & 0xffffffff) + ___xmm_000000000000000f000000000000000f;
      lVar12 = (*puVar7 >> 0x20) + _UNK_150676968;
      auVar10._0_8_ =
           CONCAT44((uint)((ulonglong)lVar9 >> 0x20) & _UNK_150676984,
                    (uint)lVar9 & ___xmm_fffffffffffffff0fffffffffffffff0);
      auVar10._8_4_ = (uint)lVar12 & _UNK_150676988;
      auVar10._12_4_ = (uint)((ulonglong)lVar12 >> 0x20) & _UNK_15067698c;
      lVar13 = lVar13 + auVar10._0_8_;
      lVar14 = lVar14 + auVar10._8_8_;
      puVar1 = puVar7 + 1;
      puVar7 = puVar7 + 2;
      lVar9 = (*puVar1 & 0xffffffff) + ___xmm_000000000000000f000000000000000f;
      lVar12 = (*puVar1 >> 0x20) + _UNK_150676968;
      auVar11._0_8_ =
           CONCAT44((uint)((ulonglong)lVar9 >> 0x20) & _UNK_150676984,
                    (uint)lVar9 & ___xmm_fffffffffffffff0fffffffffffffff0);
      auVar11._8_4_ = (uint)lVar12 & _UNK_150676988;
      auVar11._12_4_ = (uint)((ulonglong)lVar12 >> 0x20) & _UNK_15067698c;
      lVar4 = lVar4 + auVar11._0_8_;
      lVar5 = lVar5 + auVar11._8_8_;
    } while (uVar8 != (uVar6 & 0xfffffffffffffffc));
    auVar3._8_4_ = (int)(lVar5 + lVar14);
    auVar3._0_8_ = lVar4 + lVar13;
    auVar3._12_4_ = (int)((ulonglong)(lVar5 + lVar14) >> 0x20);
    uVar8 = lVar4 + lVar13 + auVar3._8_8_;
  }
  for (; puVar7 != puVar2; puVar7 = (ulonglong *)((longlong)puVar7 + 4)) {
    uVar8 = uVar8 + ((ulonglong)(uint)*puVar7 + 0xf & 0xfffffffffffffff0);
  }
  return uVar8;
}

// HashBlock @ 141762b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl FIoChunkEncoding::HashBlock(TMemoryView<void_const_> *param_1)

{
  FBlake3Hash *pFVar1;
  undefined1 auStack_78 [32];
  TMemoryView<void_const_> local_58 [2];
  FBlake3Hash local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58[0].Data = param_1->Data;
  local_58[0].Size = param_1->Size;
  pFVar1 = FBlake3::HashBuffer(&local_38,local_58);
  return *(uint *)pFVar1->Hash;
}

