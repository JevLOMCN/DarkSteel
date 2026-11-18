// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 8

// CloneDynamicState @ 144328bf0

void __cdecl
UE::Net::Private::FStringNetSerializerBase::CloneDynamicState
          (FNetSerializationContext *param_1,FNetCloneDynamicStateArgs *param_2)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  void *_Dst;
  
  puVar2 = (undefined8 *)param_2->Source;
  _Dst = (void *)0x0;
  puVar3 = (undefined8 *)param_2->Target;
  uVar4 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar4;
  if (*(ushort *)((longlong)puVar2 + 6) != 0) {
    _Dst = FMemory::Malloc((ulonglong)*(ushort *)((longlong)puVar2 + 6) + 3 & 0xfffffffffffffffc,4);
    memcpy(_Dst,(void *)puVar2[1],(ulonglong)*(ushort *)((longlong)puVar2 + 6));
  }
  *(undefined2 *)((longlong)puVar3 + 4) = *(undefined2 *)((longlong)puVar2 + 6);
  uVar1 = *(undefined2 *)((longlong)puVar2 + 6);
  puVar3[1] = _Dst;
  *(undefined2 *)((longlong)puVar3 + 6) = uVar1;
  return;
}

// Dequantize @ 14432b120

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::Private::FStringNetSerializerBase::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2,FString *param_3)

{
  ushort uVar1;
  byte *pbVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  FString *pFVar5;
  ForElementType<wchar_t> FVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStackY_1098 [32];
  uint local_1068 [2];
  FString local_1060;
  ForElementType<wchar_t> local_1048;
  uint local_40 [2];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14432b131;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1098;
  pbVar2 = (byte *)param_2->Source;
  uVar1 = *(ushort *)(pbVar2 + 6);
  if ((*pbVar2 & 1) == 0) {
    iVar9 = uVar1 - 1;
    if (uVar1 == 0) {
      iVar9 = 0;
    }
    pFVar5 = ::FString::ConstructFromPtrSize(&local_1060,*(char **)(pbVar2 + 8),iVar9);
    FVar7.Data = local_1060.Data.AllocatorInstance.Data;
    if (param_3 != pFVar5) {
      pFVar3 = (param_3->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (param_3->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_3->Data).ArrayNum = (pFVar5->Data).ArrayNum;
      (param_3->Data).ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
      FVar7.Data = local_1060.Data.AllocatorInstance.Data;
    }
    goto LAB_14432b2f2;
  }
  local_1048.SecondaryData = (ForElementType<wchar_t>)0x0;
  local_40[0] = 0;
  local_40[1] = 0x800;
  Core::Private::
  ReallocGrow<2,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>_>
            (2,2,((uint)uVar1 * 4) / 3,&local_1048,(int *)local_40,(int *)(local_40 + 1));
  FVar6 = (ForElementType<wchar_t>)&local_1048;
  if (local_1048.SecondaryData != (ForElementType<wchar_t>)0x0) {
    FVar6 = local_1048.SecondaryData;
  }
  local_1068[0] = 0;
  bVar4 = FStringNetSerializerUtils::TStringCodec<wchar_t>::DecodeImpl<wchar_t,2>
                    ((wchar_t *)FVar6,local_40[0],*(uchar **)(pbVar2 + 8),(uint)uVar1,local_1068);
  if (!bVar4) {
    ::FString::Empty(param_3);
    FNetSerializationContext::SetError(param_1,GNetError_CorruptString,true);
    FVar7.Data = (FScriptContainerElement *)local_1048.SecondaryData;
    goto LAB_14432b2f2;
  }
  if (local_1068[0] == 0) {
LAB_14432b242:
    uVar8 = local_1068[0] + 1;
  }
  else {
    FVar6 = (ForElementType<wchar_t>)&local_1048;
    if (local_1048.SecondaryData != (ForElementType<wchar_t>)0x0) {
      FVar6 = local_1048.SecondaryData;
    }
    uVar8 = local_1068[0];
    if (*(wchar_t *)((longlong)FVar6 + (ulonglong)(local_1068[0] - 1) * 2) != L'\0')
    goto LAB_14432b242;
  }
  FVar6 = (ForElementType<wchar_t>)&local_1048;
  if (local_1048.SecondaryData != (ForElementType<wchar_t>)0x0) {
    FVar6 = local_1048.SecondaryData;
  }
  pFVar5 = ::FString::ConstructFromPtrSize(&local_1060,(wchar_t *)FVar6,uVar8 - 1);
  if (param_3 != pFVar5) {
    pFVar3 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (param_3->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_3->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (param_3->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  FVar7.Data = (FScriptContainerElement *)local_1048.SecondaryData;
  if ((ForElementType<wchar_t>)local_1060.Data.AllocatorInstance.Data !=
      (ForElementType<wchar_t>)0x0) {
    FMemory::Free(local_1060.Data.AllocatorInstance.Data);
    FVar7.Data = (FScriptContainerElement *)local_1048.SecondaryData;
  }
LAB_14432b2f2:
  if ((ForElementType<wchar_t>)FVar7.Data != (ForElementType<wchar_t>)0x0) {
    FMemory::Free(FVar7.Data);
  }
  return;
}

// Deserialize @ 14432d930

void __cdecl
UE::Net::Private::FStringNetSerializerBase::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FNetBitStreamReader *this;
  FQuantizedType *pFVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FName FVar6;
  ushort uVar7;
  
  this = param_1->BitStreamReader;
  pFVar1 = (FQuantizedType *)param_2->Target;
  uVar4 = FNetBitStreamReader::ReadBits(this,1);
  bVar2 = (byte)uVar4 & 1;
  uVar5 = FNetBitStreamReader::ReadBits(this,2);
  uVar5 = FNetBitStreamReader::ReadBits(this,uVar5 * 8 + 8);
  FVar6 = GNetError_ArraySizeTooLarge;
  if ((uVar5 == 0 & bVar2) == 0 && uVar5 < 0x10000) {
    uVar7 = (short)uVar5 + 1;
    *(uint *)pFVar1 = *(uint *)pFVar1 ^ (pFVar1->bIsEncoded ^ (uint)bVar2) & 1;
    if (uVar5 == 0) {
      uVar7 = 0;
    }
    FStringNetSerializerUtils::
    AdjustArraySize<UE::Net::Private::FStringNetSerializerBase::FQuantizedType,unsigned_char>
              (param_1,pFVar1,uVar7);
    if (uVar5 == 0) {
      return;
    }
    FNetBitStreamReader::ReadBitStream(this,pFVar1->ElementStorage,uVar5 * 8);
    *(undefined1 *)((ulonglong)uVar5 + (longlong)pFVar1->ElementStorage) = 0;
    if ((uVar4 & 1) == 0) {
      return;
    }
    bVar3 = FStringNetSerializerUtils::TStringCodec<wchar_t>::IsValidEncoding
                      (pFVar1->ElementStorage,uVar5);
    FVar6 = GNetError_CorruptString;
    if (bVar3) {
      return;
    }
  }
  FNetSerializationContext::SetError(param_1,FVar6,true);
  return;
}

// FreeDynamicState @ 14432ffa0

void __cdecl
UE::Net::Private::FStringNetSerializerBase::FreeDynamicState
          (FNetSerializationContext *param_1,FNetFreeDynamicStateArgs *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_2->Source;
  FMemory::Free((void *)puVar1[1]);
  *puVar1 = 0;
  puVar1[1] = 0;
  return;
}

// IsQuantizedEqual @ 1443348c0

bool __cdecl
UE::Net::Private::FStringNetSerializerBase::IsQuantizedEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = (uint *)param_2->Source0;
  puVar2 = (uint *)param_2->Source1;
  uVar3 = (*puVar1 ^ *puVar2) & 1;
  if (*(ushort *)((longlong)puVar1 + 6) != *(ushort *)((longlong)puVar2 + 6)) {
    uVar3 = 1;
  }
  if (uVar3 != 0) {
    return false;
  }
  iVar4 = memcmp(*(void **)(puVar1 + 2),*(void **)(puVar2 + 2),
                 (ulonglong)*(ushort *)((longlong)puVar1 + 6));
  return iVar4 == 0;
}

// Quantize @ 144337310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Net::Private::FStringNetSerializerBase::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  FQuantizedType *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  uint uVar13;
  wchar_t *pwVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  ushort uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint local_res10 [2];
  
  uVar22 = (param_3->Data).ArrayNum;
  uVar19 = 0;
  pFVar2 = (FQuantizedType *)param_2->Target;
  uVar20 = (ulonglong)(uVar22 - 1);
  if (uVar22 == 0) {
    uVar20 = uVar19;
  }
  iVar21 = (int)uVar20;
  if (uVar22 == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  uVar15 = uVar19;
  if (iVar21 != 0) {
    do {
      if (0x7f < (ushort)*pwVar14) {
        if (uVar22 == 0) {
          uVar22 = 1;
        }
        if (0x5555 < uVar22) {
          FNetSerializationContext::SetError(param_1,GNetError_ArraySizeTooLarge,true);
          return;
        }
        FStringNetSerializerUtils::
        AdjustArraySize<UE::Net::Private::FStringNetSerializerBase::FQuantizedType,unsigned_char>
                  (param_1,pFVar2,(short)uVar22 * 3);
        pFVar2->bIsEncoded = 1;
        local_res10[0] = 0;
        FStringNetSerializerUtils::TStringCodec<wchar_t>::EncodeImpl<wchar_t,2>
                  (pFVar2->ElementStorage,uVar22 * 3,
                   (wchar_t *)(param_3->Data).AllocatorInstance.Data,uVar22,local_res10);
        pFVar2->ElementCount = (ushort)local_res10[0];
        return;
      }
      uVar15 = uVar15 + 1;
      pwVar14 = (wchar_t *)((longlong)pwVar14 + 2);
    } while (uVar15 < (ulonglong)(longlong)iVar21);
  }
  uVar22 = iVar21 + 1;
  if (0xffff < uVar22) {
    FNetSerializationContext::SetError(param_1,GNetError_ArraySizeTooLarge,true);
    return;
  }
  uVar23 = (ushort)uVar22;
  if (iVar21 == 0) {
    uVar23 = 0;
  }
  FStringNetSerializerUtils::
  AdjustArraySize<UE::Net::Private::FStringNetSerializerBase::FQuantizedType,unsigned_char>
            (param_1,pFVar2,uVar23);
  pFVar2->bIsEncoded = 0;
  uVar26 = _UNK_1506e9cec;
  uVar17 = _UNK_1506e9ce8;
  uVar13 = _UNK_1506e9ce4;
  uVar18 = ___xmm_00ff00ff00ff00ff00ff00ff00ff00ff;
  if (iVar21 == 0) {
    return;
  }
  pFVar3 = (param_3->Data).AllocatorInstance.Data;
  pFVar4 = pFVar2->ElementStorage;
  if (uVar22 == 0) {
    return;
  }
  if ((uVar22 < 4) || ((pFVar4 <= pFVar3 + uVar20 * 2 && (pFVar3 <= pFVar4 + uVar20))))
  goto LAB_144337500;
  if (uVar22 < 0x20) {
LAB_1443374d7:
    uVar20 = uVar19;
    do {
      uVar17 = (int)uVar20 + 4;
      uVar19 = (ulonglong)uVar17;
      uVar26 = (uint)*(undefined8 *)(pFVar3 + uVar20 * 2) & uVar18;
      uVar24 = (uint)((ulonglong)*(undefined8 *)(pFVar3 + uVar20 * 2) >> 0x20) & uVar13;
      sVar5 = (short)uVar26;
      sVar6 = (short)(uVar26 >> 0x10);
      sVar7 = (short)uVar24;
      sVar8 = (short)(uVar24 >> 0x10);
      *(uint *)(pFVar4 + uVar20) =
           CONCAT13((0 < sVar8) * (sVar8 < 0x100) * (char)(uVar24 >> 0x10) - (0xff < sVar8),
                    CONCAT12((0 < sVar7) * (sVar7 < 0x100) * (char)uVar24 - (0xff < sVar7),
                             CONCAT11((0 < sVar6) * (sVar6 < 0x100) * (char)(uVar26 >> 0x10) -
                                      (0xff < sVar6),
                                      (0 < sVar5) * (sVar5 < 0x100) * (char)uVar26 - (0xff < sVar5))
                            ));
      uVar20 = uVar19;
    } while (uVar17 != (uVar22 & 0xfffffffc));
  }
  else {
    uVar24 = 0x10;
    uVar20 = uVar19;
    do {
      uVar16 = (int)uVar20 + 0x20;
      uVar19 = (ulonglong)uVar16;
      pFVar1 = pFVar3 + uVar20 * 2;
      uVar25 = *(uint *)pFVar1 & uVar18;
      uVar27 = *(uint *)(pFVar1 + 4) & uVar13;
      uVar28 = *(uint *)(pFVar1 + 8) & uVar17;
      uVar29 = *(uint *)(pFVar1 + 0xc) & uVar26;
      sVar5 = (short)uVar25;
      sVar6 = (short)(uVar25 >> 0x10);
      sVar7 = (short)uVar27;
      sVar8 = (short)(uVar27 >> 0x10);
      sVar9 = (short)uVar28;
      sVar10 = (short)(uVar28 >> 0x10);
      sVar11 = (short)uVar29;
      sVar12 = (short)(uVar29 >> 0x10);
      *(ulonglong *)(pFVar4 + uVar20) =
           CONCAT17((0 < sVar12) * (sVar12 < 0x100) * (char)(uVar29 >> 0x10) - (0xff < sVar12),
                    CONCAT16((0 < sVar11) * (sVar11 < 0x100) * (char)uVar29 - (0xff < sVar11),
                             CONCAT15((0 < sVar10) * (sVar10 < 0x100) * (char)(uVar28 >> 0x10) -
                                      (0xff < sVar10),
                                      CONCAT14((0 < sVar9) * (sVar9 < 0x100) * (char)uVar28 -
                                               (0xff < sVar9),
                                               CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                        (char)(uVar27 >> 0x10) - (0xff < sVar8),
                                                        CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                 (char)uVar27 - (0xff < sVar7),
                                                                 CONCAT11((0 < sVar6) *
                                                                          (sVar6 < 0x100) *
                                                                          (char)(uVar25 >> 0x10) -
                                                                          (0xff < sVar6),
                                                                          (0 < sVar5) *
                                                                          (sVar5 < 0x100) *
                                                                          (char)uVar25 -
                                                                          (0xff < sVar5))))))));
      pFVar1 = pFVar3 + (ulonglong)(uVar24 - 8) * 2;
      uVar25 = *(uint *)pFVar1 & uVar18;
      uVar27 = *(uint *)(pFVar1 + 4) & uVar13;
      uVar28 = *(uint *)(pFVar1 + 8) & uVar17;
      uVar29 = *(uint *)(pFVar1 + 0xc) & uVar26;
      sVar5 = (short)uVar25;
      sVar6 = (short)(uVar25 >> 0x10);
      sVar7 = (short)uVar27;
      sVar8 = (short)(uVar27 >> 0x10);
      sVar9 = (short)uVar28;
      sVar10 = (short)(uVar28 >> 0x10);
      sVar11 = (short)uVar29;
      sVar12 = (short)(uVar29 >> 0x10);
      *(ulonglong *)(pFVar4 + (uVar24 - 8)) =
           CONCAT17((0 < sVar12) * (sVar12 < 0x100) * (char)(uVar29 >> 0x10) - (0xff < sVar12),
                    CONCAT16((0 < sVar11) * (sVar11 < 0x100) * (char)uVar29 - (0xff < sVar11),
                             CONCAT15((0 < sVar10) * (sVar10 < 0x100) * (char)(uVar28 >> 0x10) -
                                      (0xff < sVar10),
                                      CONCAT14((0 < sVar9) * (sVar9 < 0x100) * (char)uVar28 -
                                               (0xff < sVar9),
                                               CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                        (char)(uVar27 >> 0x10) - (0xff < sVar8),
                                                        CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                 (char)uVar27 - (0xff < sVar7),
                                                                 CONCAT11((0 < sVar6) *
                                                                          (sVar6 < 0x100) *
                                                                          (char)(uVar25 >> 0x10) -
                                                                          (0xff < sVar6),
                                                                          (0 < sVar5) *
                                                                          (sVar5 < 0x100) *
                                                                          (char)uVar25 -
                                                                          (0xff < sVar5))))))));
      pFVar1 = pFVar3 + (ulonglong)uVar24 * 2;
      uVar25 = *(uint *)pFVar1 & uVar18;
      uVar27 = *(uint *)(pFVar1 + 4) & uVar13;
      uVar28 = *(uint *)(pFVar1 + 8) & uVar17;
      uVar29 = *(uint *)(pFVar1 + 0xc) & uVar26;
      sVar5 = (short)uVar25;
      sVar6 = (short)(uVar25 >> 0x10);
      sVar7 = (short)uVar27;
      sVar8 = (short)(uVar27 >> 0x10);
      sVar9 = (short)uVar28;
      sVar10 = (short)(uVar28 >> 0x10);
      sVar11 = (short)uVar29;
      sVar12 = (short)(uVar29 >> 0x10);
      *(ulonglong *)(pFVar4 + uVar24) =
           CONCAT17((0 < sVar12) * (sVar12 < 0x100) * (char)(uVar29 >> 0x10) - (0xff < sVar12),
                    CONCAT16((0 < sVar11) * (sVar11 < 0x100) * (char)uVar29 - (0xff < sVar11),
                             CONCAT15((0 < sVar10) * (sVar10 < 0x100) * (char)(uVar28 >> 0x10) -
                                      (0xff < sVar10),
                                      CONCAT14((0 < sVar9) * (sVar9 < 0x100) * (char)uVar28 -
                                               (0xff < sVar9),
                                               CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                        (char)(uVar27 >> 0x10) - (0xff < sVar8),
                                                        CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                 (char)uVar27 - (0xff < sVar7),
                                                                 CONCAT11((0 < sVar6) *
                                                                          (sVar6 < 0x100) *
                                                                          (char)(uVar25 >> 0x10) -
                                                                          (0xff < sVar6),
                                                                          (0 < sVar5) *
                                                                          (sVar5 < 0x100) *
                                                                          (char)uVar25 -
                                                                          (0xff < sVar5))))))));
      uVar25 = uVar24 + 8;
      pFVar1 = pFVar3 + (ulonglong)uVar25 * 2;
      uVar24 = uVar24 + 0x20;
      uVar27 = *(uint *)pFVar1 & uVar18;
      uVar28 = *(uint *)(pFVar1 + 4) & uVar13;
      uVar29 = *(uint *)(pFVar1 + 8) & uVar17;
      uVar30 = *(uint *)(pFVar1 + 0xc) & uVar26;
      sVar5 = (short)uVar27;
      sVar6 = (short)(uVar27 >> 0x10);
      sVar7 = (short)uVar28;
      sVar8 = (short)(uVar28 >> 0x10);
      sVar9 = (short)uVar29;
      sVar10 = (short)(uVar29 >> 0x10);
      sVar11 = (short)uVar30;
      sVar12 = (short)(uVar30 >> 0x10);
      *(ulonglong *)(pFVar4 + uVar25) =
           CONCAT17((0 < sVar12) * (sVar12 < 0x100) * (char)(uVar30 >> 0x10) - (0xff < sVar12),
                    CONCAT16((0 < sVar11) * (sVar11 < 0x100) * (char)uVar30 - (0xff < sVar11),
                             CONCAT15((0 < sVar10) * (sVar10 < 0x100) * (char)(uVar29 >> 0x10) -
                                      (0xff < sVar10),
                                      CONCAT14((0 < sVar9) * (sVar9 < 0x100) * (char)uVar29 -
                                               (0xff < sVar9),
                                               CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                        (char)(uVar28 >> 0x10) - (0xff < sVar8),
                                                        CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                 (char)uVar28 - (0xff < sVar7),
                                                                 CONCAT11((0 < sVar6) *
                                                                          (sVar6 < 0x100) *
                                                                          (char)(uVar27 >> 0x10) -
                                                                          (0xff < sVar6),
                                                                          (0 < sVar5) *
                                                                          (sVar5 < 0x100) *
                                                                          (char)uVar27 -
                                                                          (0xff < sVar5))))))));
      uVar20 = uVar19;
    } while (uVar16 != uVar22 - (uVar22 & 0x1f));
    if (3 < (uVar22 & 0x1f)) goto LAB_1443374d7;
  }
  if ((uint)uVar19 == uVar22) {
    return;
  }
LAB_144337500:
  do {
    uVar18 = (int)uVar19 + 1;
    pFVar4[uVar19] = pFVar3[uVar19 * 2];
    uVar19 = (ulonglong)uVar18;
  } while (uVar18 != uVar22);
  return;
}

// Serialize @ 14433ca90

void __cdecl
UE::Net::Private::FStringNetSerializerBase::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  ulonglong uVar1;
  uint *puVar2;
  FNetBitStreamWriter *this;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  
  puVar2 = (uint *)param_2->Source;
  this = param_1->BitStreamWriter;
  FNetBitStreamWriter::WriteBits(this,*puVar2 & 1,1);
  if (*(ushort *)((longlong)puVar2 + 6) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(ushort *)((longlong)puVar2 + 6) - 1;
  }
  uVar1 = ((ulonglong)uVar5 | 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar4 = (int)lVar3 + 7U >> 3;
  FNetBitStreamWriter::WriteBits(this,uVar4 - 1,2);
  FNetBitStreamWriter::WriteBits(this,uVar5,uVar4 * 8);
  if (*(ushort *)((longlong)puVar2 + 6) != 0) {
    FNetBitStreamWriter::WriteBitStream
              (this,*(uint **)(puVar2 + 2),0,(uint)*(ushort *)((longlong)puVar2 + 6) * 8 - 8);
  }
  return;
}

// Validate @ 14433f960

bool __cdecl
UE::Net::Private::FStringNetSerializerBase::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2,FString *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_3->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  return (uint)((iVar2 + 1) * 3) < 0x10000;
}

