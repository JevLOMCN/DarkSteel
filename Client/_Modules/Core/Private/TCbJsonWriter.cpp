// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// AppendBase64String @ 1419e0bd0

void __thiscall
TCbJsonWriter<char8_t>::AppendBase64String
          (TCbJsonWriter<char8_t> *this,TMemoryView<void_const_> *param_1)

{
  uint uVar1;
  TStringBuilderBase<char8_t> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong64 uVar7;
  int iVar8;
  
  if (0x20000000 < param_1->Size) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value.GetSize() <= 512 * 1024 * 1024",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinarySerialization.cpp"
                       ,0x28c,L"Encoding 512 MiB or larger is not supported. Size: llu");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar1 = (uint)param_1->Size;
  pTVar2 = this->Builder;
  iVar6 = ((uVar1 + 2) / 3) * 4;
  iVar5 = *(int *)&pTVar2->End - *(int *)&pTVar2->Base;
  iVar8 = (*(int *)&pTVar2->CurPos - *(int *)&pTVar2->Base) + 2 + iVar6;
  if (iVar5 < iVar8) {
    TStringBuilderBase<char8_t>::Extend(pTVar2,(longlong)(iVar8 - iVar5));
  }
  pTVar2 = this->Builder;
  if (pTVar2->End < pTVar2->CurPos + 1) {
    TStringBuilderBase<char8_t>::Extend(pTVar2,1);
  }
  uVar7 = (ulong64)iVar6;
  *pTVar2->CurPos = '\"';
  pTVar2->CurPos = pTVar2->CurPos + 1;
  pTVar2 = this->Builder;
  if (pTVar2->End < pTVar2->CurPos + uVar7) {
    TStringBuilderBase<char8_t>::Extend(pTVar2,uVar7);
  }
  iVar5 = *(int *)&pTVar2->CurPos;
  pTVar2->CurPos = pTVar2->CurPos + uVar7;
  FBase64::Encode<char8_t>
            (param_1->Data,uVar1,this->Builder->Base + (iVar5 - *(int *)&pTVar2->Base),Standard);
  pTVar2 = this->Builder;
  if (pTVar2->End < pTVar2->CurPos + 1) {
    TStringBuilderBase<char8_t>::Extend(pTVar2,1);
  }
  *pTVar2->CurPos = '\"';
  pTVar2->CurPos = pTVar2->CurPos + 1;
  return;
}

// AppendBase64String @ 1419e0d20

void __thiscall
TCbJsonWriter<wchar_t>::AppendBase64String
          (TCbJsonWriter<wchar_t> *this,TMemoryView<void_const_> *param_1)

{
  uint uVar1;
  TStringBuilderBase<wchar_t> *pTVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulong64 uVar7;
  int iVar8;
  int iVar9;
  
  if (0x20000000 < param_1->Size) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value.GetSize() <= 512 * 1024 * 1024",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinarySerialization.cpp"
                       ,0x28c,L"Encoding 512 MiB or larger is not supported. Size: llu");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar1 = (uint)param_1->Size;
  pTVar2 = this->Builder;
  iVar8 = ((uVar1 + 2) / 3) * 4;
  iVar9 = (int)((longlong)pTVar2->CurPos - (longlong)pTVar2->Base >> 1) + 2 + iVar8;
  iVar6 = (int)((longlong)pTVar2->End - (longlong)pTVar2->Base >> 1);
  if (iVar6 < iVar9) {
    TStringBuilderBase<wchar_t>::Extend(pTVar2,(longlong)(iVar9 - iVar6));
  }
  pTVar2 = this->Builder;
  if (pTVar2->End < pTVar2->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar2,1);
  }
  uVar7 = (ulong64)iVar8;
  *pTVar2->CurPos = L'\"';
  pTVar2->CurPos = pTVar2->CurPos + 1;
  pTVar2 = this->Builder;
  if (pTVar2->End < pTVar2->CurPos + uVar7) {
    TStringBuilderBase<wchar_t>::Extend(pTVar2,uVar7);
  }
  pwVar3 = pTVar2->CurPos;
  pTVar2->CurPos = pwVar3 + uVar7;
  FBase64::Encode<wchar_t>
            (param_1->Data,uVar1,
             this->Builder->Base + (int)((longlong)pwVar3 - (longlong)pTVar2->Base >> 1),Standard);
  pTVar2 = this->Builder;
  if (pTVar2->End < pTVar2->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar2,1);
  }
  *pTVar2->CurPos = L'\"';
  pTVar2->CurPos = pTVar2->CurPos + 1;
  return;
}

// WriteField @ 141a30970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TCbJsonWriter<char8_t>::WriteField(TCbJsonWriter<char8_t> *this,FCbFieldView *param_1)

{
  byte bVar1;
  ulonglong *puVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ECbFieldType EVar8;
  void *pvVar9;
  bool bVar10;
  ulong64 uVar11;
  FString *pFVar12;
  TStringBuilderBase<char8_t> *pTVar13;
  FIoHash *pFVar14;
  byte *pbVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  uint uStack_1f0;
  uint uStack_1ec;
  FTimespan local_1e8;
  undefined1 local_1e0 [16];
  ulonglong local_1d0;
  undefined1 local_1c8 [16];
  ulonglong local_1b8;
  FDateTime local_1b0;
  TMemoryView<void_const_> local_1a8;
  byte *local_198;
  uint uStack_190;
  undefined4 uStack_18c;
  ulonglong *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  byte *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  TStringView<char8_t> local_168;
  FCbFieldView local_158;
  FCbFieldView local_148;
  TStringView<char8_t> local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  TArrayView<unsigned_char_const_,int> local_f8;
  TMemoryView<void_const_> local_e8;
  TStringView<char8_t> local_d8;
  TMemoryView<void_const_> local_c8;
  byte *local_b0;
  ulong64 uStack_a8;
  byte *local_90;
  ulong64 uStack_88;
  ulonglong local_80;
  undefined4 local_78;
  FIoHash local_74;
  FIoHash local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_218;
  if (this->bNeedsComma != false) {
    pTVar13 = this->Builder;
    this->bNeedsComma = false;
    if (pTVar13->End < pTVar13->CurPos + 1) {
      TStringBuilderBase<char8_t>::Extend(pTVar13,1);
    }
    *pTVar13->CurPos = ',';
    pTVar13->CurPos = pTVar13->CurPos + 1;
  }
  WriteOptionalNewLine(this);
  uStack_1f0 = param_1->NameLen;
  puVar2 = param_1->Value;
  local_1f8 = (uchar *)((longlong)puVar2 - (ulonglong)uStack_1f0);
  if (uStack_1f0 != 0) {
    local_168.Size = uStack_1f0;
    local_168._12_4_ = uStack_1ec;
    local_168.DataPtr = local_1f8;
    UE::Serialization::Private::AppendQuotedJsonString<char8_t>(this->Builder,&local_168);
    pTVar13 = this->Builder;
    if (pTVar13->End < pTVar13->CurPos + 1) {
      TStringBuilderBase<char8_t>::Extend(pTVar13,1);
    }
    *pTVar13->CurPos = ':';
    pTVar13->CurPos = pTVar13->CurPos + 1;
    operator<<<char8_t,TStringView<char8_t>_&>(pTVar13,&this->Space);
  }
  switch(param_1->TypeWithFlags & CustomByName) {
  case Null:
    operator<<<char8_t,TStringView<char>_const_&>
              (this->Builder,&UE::Serialization::Private::TCbJsonWriterConstants<char>::Null);
    break;
  case Object:
  case UniformObject:
    ::operator<<(this->Builder,'{');
    operator<<<char8_t,TStringView<char8_t>_&>
              ((TStringBuilderBase<char8_t> *)&this->NewLineAndIndent,&this->Indent);
    this->bNeedsNewLine = true;
    FCbFieldView::CreateViewIterator(param_1,(FCbFieldViewIterator *)local_1e0);
    EVar8 = local_1e0[0];
    pvVar9 = (void *)local_1e0._8_8_;
    uVar17 = local_1d0;
    while (local_1d0 = uVar17, (EVar8 & CustomByName) != None) {
      local_1e0[0] = EVar8;
      local_1e0._8_8_ = pvVar9;
      WriteField(this,&local_158);
      uVar11 = FCbFieldView::GetValueSize((FCbFieldView *)local_1e0);
      uVar16 = -(ulonglong)((longlong)pvVar9 + uVar11 != uVar17);
      uVar17 = uVar17 & uVar16;
      FCbFieldView::FCbFieldView
                ((FCbFieldView *)local_1e0,(void *)(uVar16 & (longlong)pvVar9 + uVar11),
                 (ECbFieldType)uVar16 & EVar8);
      EVar8 = local_1e0[0];
      pvVar9 = (void *)local_1e0._8_8_;
    }
    TStringBuilderBase<char8_t>::RemoveSuffix
              ((TStringBuilderBase<char8_t> *)&this->NewLineAndIndent,(this->Indent).Size);
    if (this->bNeedsComma != false) {
      WriteOptionalNewLine(this);
    }
    pTVar13 = this->Builder;
    if (pTVar13->End < pTVar13->CurPos + 1) {
      TStringBuilderBase<char8_t>::Extend(pTVar13,1);
    }
    *pTVar13->CurPos = '}';
    pTVar13->CurPos = pTVar13->CurPos + 1;
    break;
  case Array:
  case UniformArray:
    ::operator<<(this->Builder,'[');
    operator<<<char8_t,TStringView<char8_t>_&>
              ((TStringBuilderBase<char8_t> *)&this->NewLineAndIndent,&this->Indent);
    this->bNeedsNewLine = true;
    FCbFieldView::CreateViewIterator(param_1,(FCbFieldViewIterator *)local_1c8);
    EVar8 = local_1c8[0];
    pvVar9 = (void *)local_1c8._8_8_;
    uVar17 = local_1b8;
    while (local_1b8 = uVar17, (EVar8 & CustomByName) != None) {
      local_1c8[0] = EVar8;
      local_1c8._8_8_ = pvVar9;
      WriteField(this,&local_148);
      uVar11 = FCbFieldView::GetValueSize((FCbFieldView *)local_1c8);
      uVar16 = -(ulonglong)((longlong)pvVar9 + uVar11 != uVar17);
      uVar17 = uVar17 & uVar16;
      FCbFieldView::FCbFieldView
                ((FCbFieldView *)local_1c8,(void *)(uVar16 & (longlong)pvVar9 + uVar11),
                 (ECbFieldType)uVar16 & EVar8);
      EVar8 = local_1c8[0];
      pvVar9 = (void *)local_1c8._8_8_;
    }
    TStringBuilderBase<char8_t>::RemoveSuffix
              ((TStringBuilderBase<char8_t> *)&this->NewLineAndIndent,(this->Indent).Size);
    if (this->bNeedsComma != false) {
      WriteOptionalNewLine(this);
    }
    pTVar13 = this->Builder;
    if (pTVar13->End < pTVar13->CurPos + 1) {
      TStringBuilderBase<char8_t>::Extend(pTVar13,1);
    }
    *pTVar13->CurPos = ']';
    pTVar13->CurPos = pTVar13->CurPos + 1;
    break;
  case Binary:
    pbVar15 = (byte *)((longlong)puVar2 + 1);
    uVar17 = (ulonglong)(byte)~(byte)*puVar2 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar18 = -(int)lVar3 + 9;
    local_1a8.Size = (ulonglong)(0xff >> ((byte)uVar18 & 0x1f) & 0xff) & (ulonglong)(byte)*puVar2;
    switch(-(int)lVar3) {
    case 0:
      local_1a8.Size = (ulong64)*pbVar15;
      pbVar15 = (byte *)((longlong)puVar2 + 2);
    case -1:
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      local_1a8.Size = local_1a8.Size << 8 | (ulonglong)bVar1;
    case -2:
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      local_1a8.Size = local_1a8.Size << 8 | (ulonglong)bVar1;
    case -3:
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      local_1a8.Size = local_1a8.Size << 8 | (ulonglong)bVar1;
    case -4:
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      local_1a8.Size = local_1a8.Size << 8 | (ulonglong)bVar1;
    case -5:
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      local_1a8.Size = local_1a8.Size << 8 | (ulonglong)bVar1;
    case -6:
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      local_1a8.Size = local_1a8.Size << 8 | (ulonglong)bVar1;
    case -7:
      local_1a8.Size = local_1a8.Size << 8 | (ulonglong)*pbVar15;
    default:
      local_1a8.Data = (void *)((ulonglong)uVar18 + (longlong)puVar2);
      AppendBase64String(this,&local_1a8);
    }
    break;
  case String:
    pbVar15 = (byte *)((longlong)puVar2 + 1);
    uVar17 = (ulonglong)(byte)~(byte)*puVar2 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar18 = -(int)lVar3 + 9;
    uStack_190 = 0xff >> ((byte)uVar18 & 0x1f) & 0xffU & (uint)(byte)*puVar2;
    switch(-(int)lVar3) {
    case 0:
      pbVar15 = (byte *)((longlong)puVar2 + 2);
    case -1:
      pbVar15 = pbVar15 + 1;
    case -2:
      pbVar15 = pbVar15 + 1;
    case -3:
      pbVar15 = pbVar15 + 1;
    case -4:
      uStack_190 = (uint)*pbVar15;
      pbVar15 = pbVar15 + 1;
    case -5:
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      uStack_190 = uStack_190 << 8 | (uint)bVar1;
    case -6:
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      uStack_190 = uStack_190 << 8 | (uint)bVar1;
    case -7:
      uStack_190 = uStack_190 << 8 | (uint)*pbVar15;
    default:
      local_198 = (byte *)((ulonglong)uVar18 + (longlong)puVar2);
      local_138._12_4_ = uStack_18c;
      local_138.Size = uStack_190;
      local_138.DataPtr = local_198;
      UE::Serialization::Private::AppendQuotedJsonString<char8_t>(this->Builder,&local_138);
    }
    break;
  case IntegerPositive:
    uVar17 = (ulonglong)(byte)~(byte)*puVar2 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    switch(-(int)lVar3) {
    case 0:
    case -1:
    case -2:
    case -3:
    case -4:
    case -5:
    case -6:
    case -7:
    default:
      TStringBuilderBase<char8_t>::AppendfImpl(this->Builder,(uchar *)"%llu");
    }
    break;
  case IntegerNegative:
    uVar17 = (ulonglong)(byte)~(byte)*puVar2 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    switch(-(int)lVar3) {
    case 0:
    case -1:
    case -2:
    case -3:
    case -4:
    case -5:
    case -6:
    case -7:
    default:
      TStringBuilderBase<char8_t>::AppendfImpl(this->Builder,(uchar *)"%lld");
    }
    break;
  case Float32:
    TStringBuilderBase<char8_t>::AppendfImpl
              (this->Builder,
               (uchar *)UE::Serialization::Private::TCbJsonWriterConstants<char>::FormatFloat32);
    break;
  case Float64:
    TStringBuilderBase<char8_t>::AppendfImpl
              (this->Builder,
               (uchar *)UE::Serialization::Private::TCbJsonWriterConstants<char>::FormatFloat64);
    break;
  case BoolFalse:
    operator<<<char8_t,TStringView<char>_const_&>
              (this->Builder,&UE::Serialization::Private::TCbJsonWriterConstants<char>::False);
    break;
  case BoolTrue:
    operator<<<char8_t,TStringView<char>_const_&>
              (this->Builder,&UE::Serialization::Private::TCbJsonWriterConstants<char>::True);
    break;
  case ObjectAttachment:
  case BinaryAttachment:
    pTVar13 = ::operator<<(this->Builder,'\"');
    pFVar14 = &local_74;
    local_74.Hash._0_8_ = *puVar2;
    local_74.Hash._8_8_ = puVar2[1];
    local_74.Hash._16_4_ = *(undefined4 *)(puVar2 + 2);
    goto LAB_141a31043;
  case Hash:
    pTVar13 = ::operator<<(this->Builder,'\"');
    pFVar14 = &local_60;
    local_60.Hash._0_8_ = *puVar2;
    local_60.Hash._8_8_ = puVar2[1];
    local_60.Hash._16_4_ = *(undefined4 *)(puVar2 + 2);
LAB_141a31043:
    pTVar13 = operator<<<char8_t>(pTVar13,pFVar14);
    ::operator<<(pTVar13,'\"');
    break;
  case Uuid:
    pTVar13 = ::operator<<(this->Builder,'\"');
    uVar18 = (uint)*puVar2;
    uVar5 = *(uint *)((longlong)puVar2 + 4);
    uVar6 = (uint)puVar2[1];
    uVar7 = *(uint *)((longlong)puVar2 + 0xc);
    local_1f8._4_4_ =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    local_1f8._0_4_ =
         uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
    uStack_1ec = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    uStack_1f0 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    FGuid::AppendString((FGuid *)&local_1f8,pTVar13,DigitsWithHyphensLower);
    ::operator<<(pTVar13,'\"');
    break;
  case DateTime:
    pTVar13 = ::operator<<(this->Builder,'\"');
    uVar17 = *puVar2;
    local_1b0.Ticks =
         uVar17 >> 0x38 | (uVar17 & 0xff000000000000) >> 0x28 | (uVar17 & 0xff0000000000) >> 0x18 |
         (uVar17 & 0xff00000000) >> 8 | (uVar17 & 0xff000000) << 8 | (uVar17 & 0xff0000) << 0x18 |
         (uVar17 & 0xff00) << 0x28 | uVar17 << 0x38;
    pFVar12 = FDateTime::ToIso8601(&local_1b0,&local_128);
    pTVar13 = operator<<<char8_t,FString>(pTVar13,pFVar12);
    ::operator<<(pTVar13,'\"');
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    break;
  case TimeSpan:
    uVar17 = *puVar2;
    local_1e8.Ticks =
         uVar17 >> 0x38 | (uVar17 & 0xff000000000000) >> 0x28 | (uVar17 & 0xff0000000000) >> 0x18 |
         (uVar17 & 0xff00000000) >> 8 | (uVar17 & 0xff000000) << 8 | (uVar17 & 0xff0000) << 0x18 |
         (uVar17 & 0xff00) << 0x28 | uVar17 << 0x38;
    if ((int)(local_1e8.Ticks / 864000000000) == 0) {
      pTVar13 = ::operator<<(this->Builder,'\"');
      pFVar12 = FTimespan::ToString(&local_1e8,&local_118,L"%h:%m:%s.%n");
      pTVar13 = operator<<<char8_t,FString>(pTVar13,pFVar12);
      ::operator<<(pTVar13,'\"');
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
    }
    else {
      pTVar13 = ::operator<<(this->Builder,'\"');
      pFVar12 = FTimespan::ToString(&local_1e8,&local_108,L"%d.%h:%m:%s.%n");
      pTVar13 = operator<<<char8_t,FString>(pTVar13,pFVar12);
      ::operator<<(pTVar13,'\"');
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
    }
    break;
  case ObjectId:
    pTVar13 = ::operator<<(this->Builder,'\"');
    uStack_180 = 0xc;
    local_188 = &local_80;
    local_80 = *puVar2;
    local_78 = (undefined4)puVar2[1];
    local_f8._12_4_ = uStack_17c;
    local_f8.ArrayNum = 0xc;
    local_f8.DataPtr = (uchar *)local_188;
    UE::String::BytesToHexLower(&local_f8,pTVar13);
    ::operator<<(pTVar13,'\"');
    break;
  default:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinarySerialization.cpp"
                        ,0x269,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    break;
  case CustomById:
    pbVar15 = (byte *)((longlong)puVar2 + 1);
    uVar17 = (ulonglong)(byte)~(byte)*puVar2 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar18 = -(int)lVar3 + 9;
    uVar17 = (ulonglong)(0xff >> ((byte)uVar18 & 0x1f) & 0xff) & (ulonglong)(byte)*puVar2;
    switch(-(int)lVar3) {
    case 0:
      uVar17 = (ulonglong)*pbVar15;
      pbVar15 = (byte *)((longlong)puVar2 + 2);
    case -1:
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      uVar17 = uVar17 << 8 | (ulonglong)bVar1;
    case -2:
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      uVar17 = uVar17 << 8 | (ulonglong)bVar1;
    case -3:
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      uVar17 = uVar17 << 8 | (ulonglong)bVar1;
    case -4:
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      uVar17 = uVar17 << 8 | (ulonglong)bVar1;
    case -5:
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      uVar17 = uVar17 << 8 | (ulonglong)bVar1;
    case -6:
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      uVar17 = uVar17 << 8 | (ulonglong)bVar1;
    case -7:
      uVar17 = uVar17 << 8 | (ulonglong)*pbVar15;
    default:
      local_b0 = (byte *)((ulonglong)uVar18 + (longlong)puVar2);
      uVar16 = (ulonglong)(byte)~*local_b0 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
    }
    uVar16 = (ulonglong)(-(int)lVar3 + 9);
    switch(-(int)lVar3) {
    case 0:
    case -1:
    case -2:
    case -3:
    case -4:
    case -5:
    case -6:
    case -7:
    default:
      local_b0 = local_b0 + uVar16;
      uStack_a8 = uVar17 - uVar16;
      pTVar13 = ::operator<<(this->Builder,'{');
      pTVar13 = operator<<<char8_t,TStringView<char8_t>_&>(pTVar13,&this->Space);
      pTVar13 = operator<<<char8_t,TStringView<char>_const_&>
                          (pTVar13,&UE::Serialization::Private::TCbJsonWriterConstants<char>::
                                    FieldId);
      operator<<<char8_t,TStringView<char8_t>_&>(pTVar13,&this->Space);
      TStringBuilderBase<char8_t>::AppendfImpl(this->Builder,(uchar *)"%llu");
      pTVar13 = ::operator<<(this->Builder,',');
      pTVar13 = operator<<<char8_t,TStringView<char8_t>_&>(pTVar13,&this->Space);
      pTVar13 = operator<<<char8_t,TStringView<char>_const_&>
                          (pTVar13,&UE::Serialization::Private::TCbJsonWriterConstants<char>::
                                    FieldData);
      operator<<<char8_t,TStringView<char8_t>_&>(pTVar13,&this->Space);
      local_e8.Data = local_b0;
      local_e8.Size = uStack_a8;
      AppendBase64String(this,&local_e8);
      pTVar13 = operator<<<char8_t,TStringView<char8_t>_&>(this->Builder,&this->Space);
      ::operator<<(pTVar13,'}');
    }
    break;
  case CustomByName:
    pbVar15 = (byte *)((longlong)puVar2 + 1);
    uVar17 = (ulonglong)(byte)~(byte)*puVar2 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar18 = -(int)lVar3 + 9;
    uVar17 = (ulonglong)(0xff >> ((byte)uVar18 & 0x1f) & 0xff) & (ulonglong)(byte)*puVar2;
    switch(-(int)lVar3) {
    case 0:
      uVar17 = (ulonglong)*pbVar15;
      pbVar15 = (byte *)((longlong)puVar2 + 2);
    case -1:
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      uVar17 = uVar17 << 8 | (ulonglong)bVar1;
    case -2:
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      uVar17 = uVar17 << 8 | (ulonglong)bVar1;
    case -3:
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      uVar17 = uVar17 << 8 | (ulonglong)bVar1;
    case -4:
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      uVar17 = uVar17 << 8 | (ulonglong)bVar1;
    case -5:
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      uVar17 = uVar17 << 8 | (ulonglong)bVar1;
    case -6:
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      uVar17 = uVar17 << 8 | (ulonglong)bVar1;
    case -7:
      uVar17 = uVar17 << 8 | (ulonglong)*pbVar15;
    default:
      local_178 = (byte *)((longlong)puVar2 + (ulonglong)uVar18);
      pbVar15 = local_178 + 1;
      uVar16 = (ulonglong)(byte)~*local_178 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
    }
    uVar18 = -(int)lVar3 + 9;
    uVar16 = (ulonglong)(0xff >> ((byte)uVar18 & 0x1f) & 0xff) & (ulonglong)*local_178;
    switch(-(int)lVar3) {
    case 0:
      uVar16 = (ulonglong)*pbVar15;
      pbVar15 = local_178 + 2;
    case -1:
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      uVar16 = uVar16 << 8 | (ulonglong)bVar1;
    case -2:
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      uVar16 = uVar16 << 8 | (ulonglong)bVar1;
    case -3:
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      uVar16 = uVar16 << 8 | (ulonglong)bVar1;
    case -4:
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      uVar16 = uVar16 << 8 | (ulonglong)bVar1;
    case -5:
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      uVar16 = uVar16 << 8 | (ulonglong)bVar1;
    case -6:
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      uVar16 = uVar16 << 8 | (ulonglong)bVar1;
    case -7:
      uVar16 = uVar16 << 8 | (ulonglong)*pbVar15;
    default:
      local_178 = local_178 + uVar18;
      uStack_88 = (uVar17 - uVar16) - (ulonglong)uVar18;
      iStack_170 = (int)uVar16;
      local_90 = local_178 + uVar16;
      pTVar13 = ::operator<<(this->Builder,'{');
      pTVar13 = operator<<<char8_t,TStringView<char8_t>_&>(pTVar13,&this->Space);
      pTVar13 = operator<<<char8_t,TStringView<char>_const_&>
                          (pTVar13,&UE::Serialization::Private::TCbJsonWriterConstants<char>::
                                    FieldName);
      operator<<<char8_t,TStringView<char8_t>_&>(pTVar13,&this->Space);
      local_d8._12_4_ = uStack_16c;
      local_d8.Size = iStack_170;
      local_d8.DataPtr = local_178;
      UE::Serialization::Private::AppendQuotedJsonString<char8_t>(this->Builder,&local_d8);
      pTVar13 = ::operator<<(this->Builder,',');
      pTVar13 = operator<<<char8_t,TStringView<char8_t>_&>(pTVar13,&this->Space);
      pTVar13 = operator<<<char8_t,TStringView<char>_const_&>
                          (pTVar13,&UE::Serialization::Private::TCbJsonWriterConstants<char>::
                                    FieldData);
      operator<<<char8_t,TStringView<char8_t>_&>(pTVar13,&this->Space);
      local_c8.Data = local_90;
      local_c8.Size = uStack_88;
      AppendBase64String(this,&local_c8);
      pTVar13 = operator<<<char8_t,TStringView<char8_t>_&>(this->Builder,&this->Space);
      ::operator<<(pTVar13,'}');
    }
  }
  this->bNeedsComma = true;
  this->bNeedsNewLine = true;
  return;
}

// WriteField @ 141a318b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TCbJsonWriter<wchar_t>::WriteField(TCbJsonWriter<wchar_t> *this,FCbFieldView *param_1)

{
  byte bVar1;
  int iVar2;
  wchar_t *pwVar3;
  ulonglong *puVar4;
  longlong lVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ECbFieldType EVar10;
  void *pvVar11;
  bool bVar12;
  ulong64 uVar13;
  FString *pFVar14;
  TStringBuilderBase<wchar_t> *pTVar15;
  FIoHash *pFVar16;
  TMemoryView<void_const_> *pTVar17;
  byte *pbVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int iVar24;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  uint uStack_200;
  uint uStack_1fc;
  FTimespan local_1f8;
  undefined1 local_1f0 [16];
  ulonglong local_1e0;
  undefined1 local_1d8 [16];
  ulonglong local_1c8;
  FDateTime local_1c0;
  TMemoryView<void_const_> local_1b8;
  byte *local_1a8;
  uint uStack_1a0;
  undefined4 uStack_19c;
  ulonglong *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  byte *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  TStringView<char8_t> local_178;
  FCbFieldView local_168;
  FCbFieldView local_158;
  TStringView<char8_t> local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  TArrayView<unsigned_char_const_,int> local_108;
  TMemoryView<void_const_> local_f8;
  TStringView<char8_t> local_e8;
  TMemoryView<void_const_> local_d8;
  byte *local_c0;
  ulong64 uStack_b8;
  byte *local_a0;
  ulong64 uStack_98;
  wchar_t *local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  undefined4 local_78;
  FIoHash local_74;
  FIoHash local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_228;
  if (this->bNeedsComma != false) {
    pTVar15 = this->Builder;
    this->bNeedsComma = false;
    if (pTVar15->End < pTVar15->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(pTVar15,1);
    }
    *pTVar15->CurPos = L',';
    pTVar15->CurPos = pTVar15->CurPos + 1;
  }
  if (this->bNeedsNewLine != false) {
    this->bNeedsNewLine = false;
    pwVar3 = (wchar_t *)(this->NewLineAndIndent)._padding_;
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (this->Builder,pwVar3,
               (int)((this->NewLineAndIndent)._padding_ - (longlong)pwVar3 >> 1));
  }
  uStack_200 = param_1->NameLen;
  puVar4 = param_1->Value;
  local_208 = (uchar *)((longlong)puVar4 - (ulonglong)uStack_200);
  if (uStack_200 != 0) {
    local_178.Size = uStack_200;
    local_178._12_4_ = uStack_1fc;
    local_178.DataPtr = local_208;
    UE::Serialization::Private::AppendQuotedJsonString<wchar_t>(this->Builder,&local_178);
    pTVar15 = this->Builder;
    if (pTVar15->End < pTVar15->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(pTVar15,1);
    }
    *pTVar15->CurPos = L':';
    pTVar15->CurPos = pTVar15->CurPos + 1;
    local_90 = (this->Space).DataPtr;
    uStack_88 = *(undefined8 *)&(this->Space).Size;
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (pTVar15,local_90,(int)*(undefined8 *)&(this->Space).Size);
  }
  switch(param_1->TypeWithFlags & CustomByName) {
  case Null:
    uVar22 = UE::Serialization::Private::TCbJsonWriterConstants<wchar_t>::Null.DataPtr._0_4_;
    uVar23 = UE::Serialization::Private::TCbJsonWriterConstants<wchar_t>::Null.DataPtr._4_4_;
    iVar24 = UE::Serialization::Private::TCbJsonWriterConstants<wchar_t>::Null.Size;
    goto LAB_141a319fa;
  case Object:
  case UniformObject:
    ::operator<<(this->Builder,'{');
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)&this->NewLineAndIndent,(this->Indent).DataPtr,
               (int)*(undefined8 *)&(this->Indent).Size);
    this->bNeedsNewLine = true;
    FCbFieldView::CreateViewIterator(param_1,(FCbFieldViewIterator *)local_1f0);
    EVar10 = local_1f0[0];
    pvVar11 = (void *)local_1f0._8_8_;
    uVar20 = local_1e0;
    while (local_1e0 = uVar20, (EVar10 & CustomByName) != None) {
      local_1f0[0] = EVar10;
      local_1f0._8_8_ = pvVar11;
      WriteField(this,&local_168);
      uVar13 = FCbFieldView::GetValueSize((FCbFieldView *)local_1f0);
      uVar19 = -(ulonglong)((longlong)pvVar11 + uVar13 != uVar20);
      uVar20 = uVar20 & uVar19;
      FCbFieldView::FCbFieldView
                ((FCbFieldView *)local_1f0,(void *)(uVar19 & (longlong)pvVar11 + uVar13),
                 (ECbFieldType)uVar19 & EVar10);
      EVar10 = local_1f0[0];
      pvVar11 = (void *)local_1f0._8_8_;
    }
    TStringBuilderBase<wchar_t>::RemoveSuffix
              ((TStringBuilderBase<wchar_t> *)&this->NewLineAndIndent,(this->Indent).Size);
    if ((this->bNeedsComma != false) && (this->bNeedsNewLine != false)) {
      this->bNeedsNewLine = false;
      pwVar3 = (wchar_t *)(this->NewLineAndIndent)._padding_;
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (this->Builder,pwVar3,
                 (int)((this->NewLineAndIndent)._padding_ - (longlong)pwVar3 >> 1));
    }
    pTVar15 = this->Builder;
    if (pTVar15->End < pTVar15->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(pTVar15,1);
    }
    *pTVar15->CurPos = L'}';
    pTVar15->CurPos = pTVar15->CurPos + 1;
    break;
  case Array:
  case UniformArray:
    ::operator<<(this->Builder,'[');
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              ((TStringBuilderBase<wchar_t> *)&this->NewLineAndIndent,(this->Indent).DataPtr,
               (int)*(undefined8 *)&(this->Indent).Size);
    this->bNeedsNewLine = true;
    FCbFieldView::CreateViewIterator(param_1,(FCbFieldViewIterator *)local_1d8);
    EVar10 = local_1d8[0];
    pvVar11 = (void *)local_1d8._8_8_;
    uVar20 = local_1c8;
    while (local_1c8 = uVar20, (EVar10 & CustomByName) != None) {
      local_1d8[0] = EVar10;
      local_1d8._8_8_ = pvVar11;
      WriteField(this,&local_158);
      uVar13 = FCbFieldView::GetValueSize((FCbFieldView *)local_1d8);
      uVar19 = -(ulonglong)((longlong)pvVar11 + uVar13 != uVar20);
      uVar20 = uVar20 & uVar19;
      FCbFieldView::FCbFieldView
                ((FCbFieldView *)local_1d8,(void *)(uVar19 & (longlong)pvVar11 + uVar13),
                 (ECbFieldType)uVar19 & EVar10);
      EVar10 = local_1d8[0];
      pvVar11 = (void *)local_1d8._8_8_;
    }
    TStringBuilderBase<wchar_t>::RemoveSuffix
              ((TStringBuilderBase<wchar_t> *)&this->NewLineAndIndent,(this->Indent).Size);
    if ((this->bNeedsComma != false) && (this->bNeedsNewLine != false)) {
      this->bNeedsNewLine = false;
      pwVar3 = (wchar_t *)(this->NewLineAndIndent)._padding_;
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (this->Builder,pwVar3,
                 (int)((this->NewLineAndIndent)._padding_ - (longlong)pwVar3 >> 1));
    }
    pTVar15 = this->Builder;
    if (pTVar15->End < pTVar15->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(pTVar15,1);
    }
    *pTVar15->CurPos = L']';
    pTVar15->CurPos = pTVar15->CurPos + 1;
    break;
  case Binary:
    pbVar18 = (byte *)((longlong)puVar4 + 1);
    uVar20 = (ulonglong)(byte)~(byte)*puVar4 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar21 = -(int)lVar5 + 9;
    local_1b8.Size = (ulonglong)(0xff >> ((byte)uVar21 & 0x1f) & 0xff) & (ulonglong)(byte)*puVar4;
    switch(-(int)lVar5) {
    case 0:
      local_1b8.Size = (ulong64)*pbVar18;
      pbVar18 = (byte *)((longlong)puVar4 + 2);
    case -1:
      bVar1 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      local_1b8.Size = local_1b8.Size << 8 | (ulonglong)bVar1;
    case -2:
      bVar1 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      local_1b8.Size = local_1b8.Size << 8 | (ulonglong)bVar1;
    case -3:
      bVar1 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      local_1b8.Size = local_1b8.Size << 8 | (ulonglong)bVar1;
    case -4:
      bVar1 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      local_1b8.Size = local_1b8.Size << 8 | (ulonglong)bVar1;
    case -5:
      bVar1 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      local_1b8.Size = local_1b8.Size << 8 | (ulonglong)bVar1;
    case -6:
      bVar1 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      local_1b8.Size = local_1b8.Size << 8 | (ulonglong)bVar1;
    case -7:
      local_1b8.Size = local_1b8.Size << 8 | (ulonglong)*pbVar18;
    default:
      local_1b8.Data = (void *)((ulonglong)uVar21 + (longlong)puVar4);
      AppendBase64String(this,&local_1b8);
    }
    break;
  case String:
    pbVar18 = (byte *)((longlong)puVar4 + 1);
    uVar20 = (ulonglong)(byte)~(byte)*puVar4 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar21 = -(int)lVar5 + 9;
    uStack_1a0 = 0xff >> ((byte)uVar21 & 0x1f) & 0xffU & (uint)(byte)*puVar4;
    switch(-(int)lVar5) {
    case 0:
      pbVar18 = (byte *)((longlong)puVar4 + 2);
    case -1:
      pbVar18 = pbVar18 + 1;
    case -2:
      pbVar18 = pbVar18 + 1;
    case -3:
      pbVar18 = pbVar18 + 1;
    case -4:
      uStack_1a0 = (uint)*pbVar18;
      pbVar18 = pbVar18 + 1;
    case -5:
      bVar1 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      uStack_1a0 = uStack_1a0 << 8 | (uint)bVar1;
    case -6:
      bVar1 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      uStack_1a0 = uStack_1a0 << 8 | (uint)bVar1;
    case -7:
      uStack_1a0 = uStack_1a0 << 8 | (uint)*pbVar18;
    default:
      local_1a8 = (byte *)((ulonglong)uVar21 + (longlong)puVar4);
      local_148._12_4_ = uStack_19c;
      local_148.Size = uStack_1a0;
      local_148.DataPtr = local_1a8;
      UE::Serialization::Private::AppendQuotedJsonString<wchar_t>(this->Builder,&local_148);
    }
    break;
  case IntegerPositive:
    uVar20 = (ulonglong)(byte)~(byte)*puVar4 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    switch(-(int)lVar5) {
    case 0:
    case -1:
    case -2:
    case -3:
    case -4:
    case -5:
    case -6:
    case -7:
    default:
      TStringBuilderBase<wchar_t>::AppendfImpl(this->Builder,L"%llu");
    }
    break;
  case IntegerNegative:
    uVar20 = (ulonglong)(byte)~(byte)*puVar4 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    switch(-(int)lVar5) {
    case 0:
    case -1:
    case -2:
    case -3:
    case -4:
    case -5:
    case -6:
    case -7:
    default:
      TStringBuilderBase<wchar_t>::AppendfImpl(this->Builder,L"%lld");
    }
    break;
  case Float32:
    TStringBuilderBase<wchar_t>::AppendfImpl
              (this->Builder,
               *UE::Serialization::Private::TCbJsonWriterConstants<wchar_t>::FormatFloat32);
    break;
  case Float64:
    TStringBuilderBase<wchar_t>::AppendfImpl
              (this->Builder,
               *UE::Serialization::Private::TCbJsonWriterConstants<wchar_t>::FormatFloat64);
    break;
  case BoolFalse:
    uVar22 = UE::Serialization::Private::TCbJsonWriterConstants<wchar_t>::False.DataPtr._0_4_;
    uVar23 = UE::Serialization::Private::TCbJsonWriterConstants<wchar_t>::False.DataPtr._4_4_;
    iVar24 = UE::Serialization::Private::TCbJsonWriterConstants<wchar_t>::False.Size;
    goto LAB_141a319fa;
  case BoolTrue:
    uVar22 = UE::Serialization::Private::TCbJsonWriterConstants<wchar_t>::True.DataPtr._0_4_;
    uVar23 = UE::Serialization::Private::TCbJsonWriterConstants<wchar_t>::True.DataPtr._4_4_;
    iVar24 = UE::Serialization::Private::TCbJsonWriterConstants<wchar_t>::True.Size;
LAB_141a319fa:
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (this->Builder,(wchar_t *)CONCAT44(uVar23,uVar22),iVar24);
    break;
  case ObjectAttachment:
  case BinaryAttachment:
    pTVar15 = ::operator<<(this->Builder,'\"');
    pFVar16 = &local_74;
    local_74.Hash._0_8_ = *puVar4;
    local_74.Hash._8_8_ = puVar4[1];
    local_74.Hash._16_4_ = *(undefined4 *)(puVar4 + 2);
    goto LAB_141a32016;
  case Hash:
    pTVar15 = ::operator<<(this->Builder,'\"');
    pFVar16 = &local_60;
    local_60.Hash._0_8_ = *puVar4;
    local_60.Hash._8_8_ = puVar4[1];
    local_60.Hash._16_4_ = *(undefined4 *)(puVar4 + 2);
LAB_141a32016:
    pTVar15 = operator<<<wchar_t>(pTVar15,pFVar16);
    ::operator<<(pTVar15,'\"');
    break;
  case Uuid:
    pTVar15 = ::operator<<(this->Builder,'\"');
    uVar21 = (uint)*puVar4;
    uVar7 = *(uint *)((longlong)puVar4 + 4);
    uVar8 = (uint)puVar4[1];
    uVar9 = *(uint *)((longlong)puVar4 + 0xc);
    local_208._4_4_ =
         uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    local_208._0_4_ =
         uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 << 0x18;
    uStack_1fc = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    uStack_200 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
    FGuid::AppendString((FGuid *)&local_208,pTVar15,DigitsWithHyphensLower);
    ::operator<<(pTVar15,'\"');
    break;
  case DateTime:
    pTVar15 = ::operator<<(this->Builder,'\"');
    uVar20 = *puVar4;
    local_1c0.Ticks =
         uVar20 >> 0x38 | (uVar20 & 0xff000000000000) >> 0x28 | (uVar20 & 0xff0000000000) >> 0x18 |
         (uVar20 & 0xff00000000) >> 8 | (uVar20 & 0xff000000) << 8 | (uVar20 & 0xff0000) << 0x18 |
         (uVar20 & 0xff00) << 0x28 | uVar20 << 0x38;
    pFVar14 = FDateTime::ToIso8601(&local_1c0,&local_138);
    iVar2 = (pFVar14->Data).ArrayNum;
    iVar24 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar24 = 0;
    }
    pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                        (pTVar15,(wchar_t *)(pFVar14->Data).AllocatorInstance.Data,iVar24);
    ::operator<<(pTVar15,'\"');
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    break;
  case TimeSpan:
    uVar20 = *puVar4;
    local_1f8.Ticks =
         uVar20 >> 0x38 | (uVar20 & 0xff000000000000) >> 0x28 | (uVar20 & 0xff0000000000) >> 0x18 |
         (uVar20 & 0xff00000000) >> 8 | (uVar20 & 0xff000000) << 8 | (uVar20 & 0xff0000) << 0x18 |
         (uVar20 & 0xff00) << 0x28 | uVar20 << 0x38;
    if ((int)(local_1f8.Ticks / 864000000000) == 0) {
      pTVar15 = ::operator<<(this->Builder,'\"');
      pFVar14 = FTimespan::ToString(&local_1f8,&local_128,L"%h:%m:%s.%n");
      iVar2 = (pFVar14->Data).ArrayNum;
      iVar24 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar24 = 0;
      }
      pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                          (pTVar15,(wchar_t *)(pFVar14->Data).AllocatorInstance.Data,iVar24);
      ::operator<<(pTVar15,'\"');
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
    }
    else {
      pTVar15 = ::operator<<(this->Builder,'\"');
      pFVar14 = FTimespan::ToString(&local_1f8,&local_118,L"%d.%h:%m:%s.%n");
      iVar2 = (pFVar14->Data).ArrayNum;
      iVar24 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar24 = 0;
      }
      pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                          (pTVar15,(wchar_t *)(pFVar14->Data).AllocatorInstance.Data,iVar24);
      ::operator<<(pTVar15,'\"');
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
    }
    break;
  case ObjectId:
    pTVar15 = ::operator<<(this->Builder,'\"');
    uStack_190 = 0xc;
    local_198 = &local_80;
    local_80 = *puVar4;
    local_78 = (undefined4)puVar4[1];
    local_108._12_4_ = uStack_18c;
    local_108.ArrayNum = 0xc;
    local_108.DataPtr = (uchar *)local_198;
    UE::String::BytesToHexLower(&local_108,pTVar15);
    ::operator<<(pTVar15,'\"');
    break;
  default:
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinarySerialization.cpp"
                        ,0x269,L"");
    if (bVar12) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    break;
  case CustomById:
    pbVar18 = (byte *)((longlong)puVar4 + 1);
    uVar20 = (ulonglong)(byte)~(byte)*puVar4 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar21 = -(int)lVar5 + 9;
    uVar20 = (ulonglong)(0xff >> ((byte)uVar21 & 0x1f) & 0xff) & (ulonglong)(byte)*puVar4;
    switch(-(int)lVar5) {
    case 0:
      uVar20 = (ulonglong)*pbVar18;
      pbVar18 = (byte *)((longlong)puVar4 + 2);
    case -1:
      bVar1 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      uVar20 = uVar20 << 8 | (ulonglong)bVar1;
    case -2:
      bVar1 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      uVar20 = uVar20 << 8 | (ulonglong)bVar1;
    case -3:
      bVar1 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      uVar20 = uVar20 << 8 | (ulonglong)bVar1;
    case -4:
      bVar1 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      uVar20 = uVar20 << 8 | (ulonglong)bVar1;
    case -5:
      bVar1 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      uVar20 = uVar20 << 8 | (ulonglong)bVar1;
    case -6:
      bVar1 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      uVar20 = uVar20 << 8 | (ulonglong)bVar1;
    case -7:
      uVar20 = uVar20 << 8 | (ulonglong)*pbVar18;
    default:
      local_c0 = (byte *)((ulonglong)uVar21 + (longlong)puVar4);
      uVar19 = (ulonglong)(byte)~*local_c0 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
    }
    uVar19 = (ulonglong)(-(int)lVar5 + 9);
    switch(-(int)lVar5) {
    case 0:
    case -1:
    case -2:
    case -3:
    case -4:
    case -5:
    case -6:
    case -7:
    default:
      local_c0 = local_c0 + uVar19;
      uStack_b8 = uVar20 - uVar19;
      pTVar15 = ::operator<<(this->Builder,'{');
      pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                          (pTVar15,(this->Space).DataPtr,(int)*(undefined8 *)&(this->Space).Size);
      pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                          (pTVar15,UE::Serialization::Private::TCbJsonWriterConstants<wchar_t>::
                                   FieldId.DataPtr,
                           UE::Serialization::Private::TCbJsonWriterConstants<wchar_t>::FieldId.Size
                          );
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (pTVar15,(this->Space).DataPtr,(int)*(undefined8 *)&(this->Space).Size);
      TStringBuilderBase<wchar_t>::AppendfImpl(this->Builder,L"%llu");
      pTVar15 = ::operator<<(this->Builder,',');
      pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                          (pTVar15,(this->Space).DataPtr,(int)*(undefined8 *)&(this->Space).Size);
      pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                          (pTVar15,UE::Serialization::Private::TCbJsonWriterConstants<wchar_t>::
                                   FieldData.DataPtr,
                           UE::Serialization::Private::TCbJsonWriterConstants<wchar_t>::FieldData.
                           Size);
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (pTVar15,(this->Space).DataPtr,(int)*(undefined8 *)&(this->Space).Size);
      pTVar17 = &local_f8;
      local_f8.Data = local_c0;
      local_f8.Size = uStack_b8;
    }
    goto LAB_141a324ac;
  case CustomByName:
    pbVar18 = (byte *)((longlong)puVar4 + 1);
    uVar20 = (ulonglong)(byte)~(byte)*puVar4 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar21 = -(int)lVar5 + 9;
    uVar20 = (ulonglong)(0xff >> ((byte)uVar21 & 0x1f) & 0xff) & (ulonglong)(byte)*puVar4;
    switch(-(int)lVar5) {
    case 0:
      uVar20 = (ulonglong)*pbVar18;
      pbVar18 = (byte *)((longlong)puVar4 + 2);
    case -1:
      bVar1 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      uVar20 = uVar20 << 8 | (ulonglong)bVar1;
    case -2:
      bVar1 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      uVar20 = uVar20 << 8 | (ulonglong)bVar1;
    case -3:
      bVar1 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      uVar20 = uVar20 << 8 | (ulonglong)bVar1;
    case -4:
      bVar1 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      uVar20 = uVar20 << 8 | (ulonglong)bVar1;
    case -5:
      bVar1 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      uVar20 = uVar20 << 8 | (ulonglong)bVar1;
    case -6:
      bVar1 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      uVar20 = uVar20 << 8 | (ulonglong)bVar1;
    case -7:
      uVar20 = uVar20 << 8 | (ulonglong)*pbVar18;
    default:
      local_188 = (byte *)((longlong)puVar4 + (ulonglong)uVar21);
      pbVar18 = local_188 + 1;
      uVar19 = (ulonglong)(byte)~*local_188 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
    }
    uVar21 = -(int)lVar5 + 9;
    uVar19 = (ulonglong)(0xff >> ((byte)uVar21 & 0x1f) & 0xff) & (ulonglong)*local_188;
    switch(-(int)lVar5) {
    case 0:
      uVar19 = (ulonglong)*pbVar18;
      pbVar18 = local_188 + 2;
    case -1:
      bVar1 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      uVar19 = uVar19 << 8 | (ulonglong)bVar1;
    case -2:
      bVar1 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      uVar19 = uVar19 << 8 | (ulonglong)bVar1;
    case -3:
      bVar1 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      uVar19 = uVar19 << 8 | (ulonglong)bVar1;
    case -4:
      bVar1 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      uVar19 = uVar19 << 8 | (ulonglong)bVar1;
    case -5:
      bVar1 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      uVar19 = uVar19 << 8 | (ulonglong)bVar1;
    case -6:
      bVar1 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      uVar19 = uVar19 << 8 | (ulonglong)bVar1;
    case -7:
      uVar19 = uVar19 << 8 | (ulonglong)*pbVar18;
    default:
      local_188 = local_188 + uVar21;
      uStack_98 = (uVar20 - uVar21) - uVar19;
      local_a0 = local_188 + uVar19;
      iStack_180 = (int)uVar19;
      pTVar15 = ::operator<<(this->Builder,'{');
      pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                          (pTVar15,(this->Space).DataPtr,(int)*(undefined8 *)&(this->Space).Size);
      pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                          (pTVar15,UE::Serialization::Private::TCbJsonWriterConstants<wchar_t>::
                                   FieldName.DataPtr,
                           UE::Serialization::Private::TCbJsonWriterConstants<wchar_t>::FieldName.
                           Size);
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (pTVar15,(this->Space).DataPtr,(int)*(undefined8 *)&(this->Space).Size);
      local_e8._12_4_ = uStack_17c;
      local_e8.Size = iStack_180;
      local_e8.DataPtr = local_188;
      UE::Serialization::Private::AppendQuotedJsonString<wchar_t>(this->Builder,&local_e8);
      pTVar15 = ::operator<<(this->Builder,',');
      pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                          (pTVar15,(this->Space).DataPtr,(int)*(undefined8 *)&(this->Space).Size);
      pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                          (pTVar15,UE::Serialization::Private::TCbJsonWriterConstants<wchar_t>::
                                   FieldData.DataPtr,
                           UE::Serialization::Private::TCbJsonWriterConstants<wchar_t>::FieldData.
                           Size);
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (pTVar15,(this->Space).DataPtr,(int)*(undefined8 *)&(this->Space).Size);
      local_d8.Data = local_a0;
      local_d8.Size = uStack_98;
      pTVar17 = &local_d8;
    }
LAB_141a324ac:
    AppendBase64String(this,pTVar17);
    pTVar15 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                        (this->Builder,(this->Space).DataPtr,(int)*(undefined8 *)&(this->Space).Size
                        );
    ::operator<<(pTVar15,'}');
  }
  this->bNeedsComma = true;
  this->bNeedsNewLine = true;
  return;
}

// WriteOptionalNewLine @ 141a335c0

void __thiscall TCbJsonWriter<char8_t>::WriteOptionalNewLine(TCbJsonWriter<char8_t> *this)

{
  TStringBuilderBase<char8_t> *this_00;
  void *pvVar1;
  int iVar2;
  ulong64 uVar3;
  
  if (this->bNeedsNewLine != false) {
    this->bNeedsNewLine = false;
    this_00 = this->Builder;
    pvVar1 = (void *)(this->NewLineAndIndent)._padding_;
    iVar2 = (int)(this->NewLineAndIndent)._padding_ - (int)pvVar1;
    uVar3 = (ulong64)iVar2;
    if (this_00->End < this_00->CurPos + uVar3) {
      TStringBuilderBase<char8_t>::Extend(this_00,uVar3);
    }
    if (iVar2 != 0) {
      pvVar1 = FGenericPlatformString::Memcpy(this_00->CurPos,pvVar1,uVar3);
      this_00->CurPos = (uchar *)((longlong)pvVar1 + uVar3);
    }
  }
  return;
}

