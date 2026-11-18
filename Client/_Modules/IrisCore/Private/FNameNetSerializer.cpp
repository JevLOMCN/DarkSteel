// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 9

// CloneDynamicState @ 144328a50

void __cdecl
UE::Net::FNameNetSerializer::CloneDynamicState
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
  puVar3[2] = puVar2[2];
  if (*(ushort *)((longlong)puVar2 + 10) != 0) {
    _Dst = FMemory::Malloc((ulonglong)*(ushort *)((longlong)puVar2 + 10) + 3 & 0xfffffffffffffffc,4)
    ;
    memcpy(_Dst,(void *)puVar2[2],(ulonglong)*(ushort *)((longlong)puVar2 + 10));
  }
  *(undefined2 *)(puVar3 + 1) = *(undefined2 *)((longlong)puVar2 + 10);
  uVar1 = *(undefined2 *)((longlong)puVar2 + 10);
  puVar3[2] = _Dst;
  *(undefined2 *)((longlong)puVar3 + 10) = uVar1;
  return;
}

// Dequantize @ 14432a850

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::FNameNetSerializer::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  ushort uVar1;
  uint *puVar2;
  FName *pFVar3;
  bool bVar4;
  FNameEntryId FVar5;
  FName *pFVar6;
  undefined4 extraout_var;
  ForElementType<wchar_t> FVar7;
  undefined1 auStackY_1078 [32];
  FName local_1048 [2];
  ForElementType<wchar_t> local_1038;
  uint local_30 [2];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14432a863;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1078;
  puVar2 = (uint *)param_2->Source;
  pFVar3 = (FName *)param_2->Target;
  if ((*puVar2 & 1) == 0) {
    if (puVar2[1] == 0) {
      local_1048[0].ComparisonIndex.Value = 0;
    }
    else {
      FVar5 = FNameEntryId::FromValidEName((int)&stack0x00000018 - 0x1060);
      local_1048[0].ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar5.Value);
    }
    local_1048[0].Number = 0;
    *pFVar3 = local_1048[0];
    return;
  }
  if ((*puVar2 & 4) == 0) {
    pFVar6 = ::FName::FName(local_1048,*(ushort *)((longlong)puVar2 + 10) - 1,*(char **)(puVar2 + 4)
                            ,puVar2[1]);
    *pFVar3 = *pFVar6;
    return;
  }
  uVar1 = *(ushort *)((longlong)puVar2 + 10);
  local_30[1] = 0x800;
  local_1038.SecondaryData = (ForElementType<wchar_t>)0x0;
  local_30[0] = 0;
  Core::Private::
  ReallocGrow<2,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>_>
            (2,2,((uint)uVar1 * 4) / 3,&local_1038,(int *)local_30,(int *)(local_30 + 1));
  FVar7 = (ForElementType<wchar_t>)&local_1038;
  if (local_1038.SecondaryData != (ForElementType<wchar_t>)0x0) {
    FVar7 = local_1038.SecondaryData;
  }
  local_1048[0] = (FName)((ulonglong)local_1048[0].Number << 0x20);
  bVar4 = Net::Private::FStringNetSerializerUtils::TStringCodec<wchar_t>::DecodeImpl<wchar_t,2>
                    ((wchar_t *)FVar7,local_30[0],*(uchar **)(puVar2 + 4),(uint)uVar1,
                     (uint *)local_1048);
  if (bVar4) {
    if (local_1048[0].ComparisonIndex.Value != 0) {
      FVar7 = (ForElementType<wchar_t>)&local_1038;
      if (local_1038.SecondaryData != (ForElementType<wchar_t>)0x0) {
        FVar7 = local_1038.SecondaryData;
      }
      if (*(wchar_t *)((longlong)FVar7 + (ulonglong)(local_1048[0].ComparisonIndex.Value - 1) * 2)
          == L'\0') {
        FVar7 = (ForElementType<wchar_t>)&local_1038;
        if (local_1038.SecondaryData != (ForElementType<wchar_t>)0x0) {
          FVar7 = local_1038.SecondaryData;
        }
        pFVar6 = ::FName::FName(local_1048,local_1048[0].ComparisonIndex.Value - 1,(wchar_t *)FVar7,
                                puVar2[1]);
        *pFVar3 = *pFVar6;
        goto LAB_14432a958;
      }
    }
  }
  else {
    local_1048[0].ComparisonIndex.Value = 0;
    local_1048[0].Number = 0;
    pFVar3->ComparisonIndex = 0;
    pFVar3->Number = 0;
  }
  FNetSerializationContext::SetError(param_1,GNetError_CorruptString,true);
LAB_14432a958:
  if (local_1038.SecondaryData != (ForElementType<wchar_t>)0x0) {
    FMemory::Free((void *)local_1038.SecondaryData);
  }
  return;
}

// Deserialize @ 14432cf80

void __cdecl
UE::Net::FNameNetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FNetBitStreamReader *this;
  FQuantizedType *pFVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  EName EVar5;
  FNameEntryId FVar6;
  undefined4 extraout_var;
  FName FVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 local_res8 [8];
  FName local_res18;
  
  if (param_1->bIsInitializingDefaultState == 0) {
    this = param_1->BitStreamReader;
    pFVar1 = (FQuantizedType *)param_2->Target;
    uVar3 = FNetBitStreamReader::ReadBits(this,1);
    if ((uVar3 & 1) == 0) {
      EVar5 = FNetBitStreamReader::ReadBits(this,BitCountNeededForEName);
      local_res18.ComparisonIndex.Value = 0;
      if (EVar5 != None) {
        FVar6 = FNameEntryId::FromValidEName((EName)local_res8);
        local_res18.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar6.Value);
      }
      local_res18.Number = 0;
      bVar2 = ShouldReplicateAsInteger(EVar5,&local_res18);
      if (bVar2) {
        FMemory::Free(pFVar1->ElementStorage);
        *(undefined8 *)pFVar1 = 0;
        pFVar1->ElementCapacityCount = 0;
        pFVar1->ElementCount = 0;
        *(undefined4 *)&pFVar1->field_0xc = 0;
        pFVar1->ElementStorage = (void *)0x0;
        pFVar1->bIsString = 0;
        pFVar1->bIsEncoded = 0;
        pFVar1->bEncodeNumberFromIntMax = 0;
        pFVar1->ENameOrNumber = EVar5;
      }
      else {
        FNetSerializationContext::SetError(param_1,GNetError_BitStreamError,true);
      }
    }
    else {
      uVar4 = FNetBitStreamReader::ReadBits(this,1);
      uVar3 = FNetBitStreamReader::ReadBits(this,2);
      uVar3 = uVar3 * 8 + 8;
      uVar8 = 1 << ((char)uVar3 - 1U & 0x1f);
      uVar3 = FNetBitStreamReader::ReadBits(this,uVar3);
      iVar10 = (uVar3 ^ uVar8) - uVar8;
      if ((uVar4 & 1) != 0) {
        iVar10 = 0x7fffffff - iVar10;
      }
      uVar3 = FNetBitStreamReader::ReadBits(this,1);
      uVar8 = FNetBitStreamReader::ReadBits(this,2);
      uVar8 = FNetBitStreamReader::ReadBits(this,uVar8 * 8 + 8);
      uVar9 = uVar8 + 1;
      FVar7 = GNetError_ArraySizeTooLarge;
      if ((uVar9 != 0) && (uVar9 < 0xc04)) {
        pFVar1->ENameOrNumber = iVar10;
        pFVar1->bIsString = 1;
        pFVar1->bIsEncoded = uVar3;
        pFVar1->bEncodeNumberFromIntMax = uVar4;
        Net::Private::FStringNetSerializerUtils::
        AdjustArraySize<UE::Net::FNameNetSerializer::FQuantizedType,unsigned_char>
                  (param_1,pFVar1,(ushort)uVar9);
        FNetBitStreamReader::ReadBitStream(this,pFVar1->ElementStorage,uVar8 * 8);
        *(undefined1 *)((ulonglong)uVar8 + (longlong)pFVar1->ElementStorage) = 0;
        if ((uVar3 & 1) == 0) {
          return;
        }
        bVar2 = Net::Private::FStringNetSerializerUtils::TStringCodec<wchar_t>::IsValidEncoding
                          (pFVar1->ElementStorage,uVar8);
        FVar7 = GNetError_CorruptString;
        if (bVar2) {
          return;
        }
      }
      FNetSerializationContext::SetError(param_1,FVar7,true);
    }
  }
  return;
}

// FreeDynamicState @ 14432fee0

void __cdecl
UE::Net::FNameNetSerializer::FreeDynamicState
          (FNetSerializationContext *param_1,FNetFreeDynamicStateArgs *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_2->Source;
  FMemory::Free((void *)puVar1[2]);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}

// IsEqual @ 144333de0

bool __cdecl
UE::Net::FNameNetSerializer::IsEqual(FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  longlong local_res10;
  longlong local_res18 [2];
  FNetDequantizeArgs local_38;
  
  if (param_2->bStateIsQuantized == false) {
    return *(longlong *)param_2->Source0 == *(longlong *)param_2->Source1;
  }
  puVar2 = (uint *)param_2->Source1;
  local_38.Source = param_2->Source0;
  uVar1 = *(uint *)local_38.Source;
  if ((puVar2[1] != *(uint *)(local_38.Source + 4) ||
      *(ushort *)((longlong)puVar2 + 10) != *(ushort *)(local_38.Source + 10)) ||
      ((uVar1 ^ *puVar2) & 1) != 0) {
    return false;
  }
  if ((uVar1 & 1) == 0) {
    return true;
  }
  if ((uVar1 & 4) != 0) {
    local_res18[0] = 0;
    local_res10 = 0;
    local_38._padding_ = 0;
    local_38._padding_._0_4_ = 0;
    local_38._padding_ = param_2->_padding_;
    local_38.Target = (ulong64)local_res18;
    Dequantize(param_1,&local_38);
    local_38.Source = param_2->Source1;
    local_38.Target = (ulong64)&local_res10;
    Dequantize(param_1,&local_38);
    return local_res18[0] == local_res10;
  }
  iVar3 = FGenericPlatformStricmp::Strnicmp
                    (*(char **)(local_38.Source + 0x10),*(char **)(puVar2 + 4),
                     (ulonglong)*(ushort *)(local_38.Source + 10));
  return iVar3 == 0;
}

// Quantize @ 144336730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::FNameNetSerializer::Quantize(FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  ulonglong uVar1;
  undefined1 uVar2;
  FQuantizedType *pFVar3;
  uchar *puVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  EName *pEVar8;
  FNameEntry *pFVar9;
  uint uVar10;
  undefined1 auStackY_878 [32];
  FName local_848;
  undefined8 local_840;
  wchar_t local_818 [1024];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_878;
  pFVar3 = (FQuantizedType *)param_2->Target;
  local_848 = *(FName *)param_2->Source;
  if (((local_848.Number == 0) && (pEVar8 = ::FName::ToEName(&local_848), pEVar8 != (EName *)0x0))
     && (bVar7 = ShouldReplicateAsInteger(*pEVar8,&local_848), bVar7)) {
    FMemory::Free(pFVar3->ElementStorage);
    *(undefined8 *)pFVar3 = 0;
    pFVar3->ElementCapacityCount = 0;
    pFVar3->ElementCount = 0;
    *(undefined4 *)&pFVar3->field_0xc = 0;
    pFVar3->ElementStorage = (void *)0x0;
    pFVar3->bIsString = 0;
    pFVar3->bIsEncoded = 0;
    pFVar3->bEncodeNumberFromIntMax = 0;
    pFVar3->ENameOrNumber = *pEVar8;
    return;
  }
  pFVar9 = ::FName::GetDisplayNameEntry(&local_848);
  pFVar3->bIsString = 1;
  uVar2 = *(undefined1 *)&pFVar9->Header;
  uVar10 = ((uint)(byte)uVar2 * 4 ^ *(uint *)pFVar3) & 4 ^ *(uint *)pFVar3;
  *(uint *)pFVar3 = uVar10;
  pFVar3->ENameOrNumber = local_848.Number;
  uVar1 = (ulonglong)((int)(0x7fffffff - local_848.Number) >> 0x1f ^ 0x7fffffff - local_848.Number)
          * 2 + 1;
  lVar5 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
  }
  uVar1 = (ulonglong)((int)local_848.Number >> 0x1f ^ local_848.Number) * 2 + 1;
  lVar6 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
    }
  }
  *(uint *)pFVar3 = -(uint)((int)lVar5 + 1U < (int)lVar6 + 1U) & 2 | uVar10 & 0xfffffffd;
  if (((undefined1 *)&pFVar9->Header)->bIsWide == 0) {
    uVar10 = pFVar9.Len + 1;
    Net::Private::FStringNetSerializerUtils::
    AdjustArraySize<UE::Net::FNameNetSerializer::FQuantizedType,unsigned_char>
              (param_1,pFVar3,(ushort)uVar10);
    ::FName::GetPlainANSIString(&local_848,(char (*) [1024])local_818);
    memcpy(pFVar3->ElementStorage,local_818,(ulonglong)uVar10);
  }
  else {
    ::FName::GetPlainWIDEString(&local_848,&local_818);
    uVar10 = pFVar9.Len + 1;
    Net::Private::FStringNetSerializerUtils::
    AdjustArraySize<UE::Net::FNameNetSerializer::FQuantizedType,unsigned_char>
              (param_1,pFVar3,(short)uVar10 * 3);
    puVar4 = pFVar3->ElementStorage;
    local_840 = (wchar_t *)((ulonglong)local_840._4_4_ << 0x20);
    bVar7 = Net::Private::FStringNetSerializerUtils::TStringCodec<wchar_t>::EncodeImpl<wchar_t,2>
                      (puVar4,uVar10 * 3,local_818,uVar10,(uint *)&local_840);
    if (bVar7) {
      pFVar3->ElementCount = (ushort)local_840;
    }
    else {
      local_840 = local_818;
      `UE::Net::FNameNetSerializer::Quantize'::__l16::<lambda_1>::operator()(&local_840);
      pFVar3->ElementCount = 1;
      *puVar4 = '\0';
    }
  }
  return;
}

// Serialize @ 14433c3a0

void __cdecl
UE::Net::FNameNetSerializer::Serialize(FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  ulonglong uVar1;
  FNetBitStreamWriter *this;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  
  if (param_1->bIsInitializingDefaultState == 0) {
    this = param_1->BitStreamWriter;
    puVar2 = (uint *)param_2->Source;
    bVar5 = (byte)*puVar2 & 1;
    FNetBitStreamWriter::WriteBits(this,(uint)(bVar5 != 0),1);
    if (bVar5 != 0) {
      FNetBitStreamWriter::WriteBits(this,*puVar2 >> 1 & 1,1);
      uVar4 = 0x7fffffff - puVar2[1];
      if ((*puVar2 & 2) == 0) {
        uVar4 = puVar2[1];
      }
      uVar1 = (ulonglong)((int)uVar4 >> 0x1f ^ uVar4) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uVar6 = (int)lVar3 + 8U >> 3;
      FNetBitStreamWriter::WriteBits(this,uVar6 - 1,2);
      FNetBitStreamWriter::WriteBits(this,uVar4,uVar6 * 8);
      FNetBitStreamWriter::WriteBits(this,*puVar2 >> 2 & 1,1);
      WritePackedUint32(this,*(ushort *)((longlong)puVar2 + 10) - 1);
      FNetBitStreamWriter::WriteBitStream
                (this,*(uint **)(puVar2 + 4),0,(uint)*(ushort *)((longlong)puVar2 + 10) * 8 - 8);
      return;
    }
    FNetBitStreamWriter::WriteBits(this,puVar2[1],BitCountNeededForEName);
  }
  return;
}

// Validate @ 14433f600

bool __cdecl
UE::Net::FNameNetSerializer::Validate(FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  bool bVar1;
  
  bVar1 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)param_2->Source);
  return bVar1;
}

// operator() @ 1504bcad0

bool __thiscall `UE::Net::FNameNetSerializer::Quantize'::__l16::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7902531230963334934>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7902531230963334934>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

