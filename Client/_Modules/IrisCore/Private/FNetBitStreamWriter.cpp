// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 12

// WriteBool @ 144318ac0

bool __thiscall UE::Net::FNetBitStreamWriter::WriteBool(FNetBitStreamWriter *this,bool param_1)

{
  WriteBits(this,(uint)param_1,1);
  return param_1;
}

// FNetBitStreamWriter @ 144326c60

FNetBitStreamWriter * __thiscall
UE::Net::FNetBitStreamWriter::FNetBitStreamWriter(FNetBitStreamWriter *this)

{
  undefined1 *puVar1;
  
  this->bHasSubstream = 0;
  this->bIsInvalid = 0;
  this->bIsSubstream = 0;
  this->Buffer = (uint *)0x0;
  this->BufferBitCapacity = 0;
  this->BufferBitStartOffset = 0;
  this->BufferBitPosition = 0;
  this->PendingWord = 0;
  this->OverflowBitCount = 0;
  return this;
}

// ~FNetBitStreamWriter @ 144327050

void __thiscall UE::Net::FNetBitStreamWriter::~FNetBitStreamWriter(FNetBitStreamWriter *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bHasSubstream != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bHasSubstream",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetBitStreamWriter.cpp"
                       ,0x25,L"%s");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((~this->bIsInvalid &
      (uint)(this->BufferBitPosition < (this->BufferBitCapacity + 0x1f & 0xffffffe0))) != 0) {
    this->Buffer[this->BufferBitPosition >> 5] = this->PendingWord;
  }
  return;
}

// CommitSubstream @ 1443290b0

void __thiscall
UE::Net::FNetBitStreamWriter::CommitSubstream
          (FNetBitStreamWriter *this,FNetBitStreamWriter *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)&this->field_0x1c;
  uVar4 = ~param_1->bIsInvalid & 1;
  if ((uVar3 & (uint)(this->BufferBitPosition == param_1->BufferBitStartOffset) &
               ~(ZPULL(uVar3,2,1) | param_1->bHasSubstream) &
               (uint)(this->Buffer == param_1->Buffer) & uVar4) == 0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3425399992389467872>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetBitStreamWriter.cpp"
                       ,0x120,
                       "bHasSubstream & (!Substream.bHasSubstream) & (!bIsInvalid) & (!Substream.bIsInvalid) & (Buffer == Substream.Buffer) & (BufferBitPosition == Substream.BufferBitStartOffset)"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if (param_1->OverflowBitCount == 0) {
      if ((uVar4 & param_1->BufferBitPosition < (param_1->BufferBitCapacity + 0x1f & 0xffffffe0)) !=
          0) {
        param_1->Buffer[param_1->BufferBitPosition >> 5] = param_1->PendingWord;
        uVar3 = *(uint *)&this->field_0x1c;
      }
      this->BufferBitPosition = param_1->BufferBitPosition;
      if (param_1->BufferBitPosition < (this->BufferBitCapacity + 0x1f & 0xffffffe0)) {
        this->PendingWord = this->Buffer[param_1->BufferBitPosition >> 5];
      }
    }
    *(uint *)&this->field_0x1c = uVar3 & 0xfffffffe;
    param_1->bIsInvalid = 1;
  }
  return;
}

// CommitWrites @ 1443291b0

void __thiscall UE::Net::FNetBitStreamWriter::CommitWrites(FNetBitStreamWriter *this)

{
  if ((~this->bIsInvalid &
      (uint)(this->BufferBitPosition < (this->BufferBitCapacity + 0x1f & 0xffffffe0))) != 0) {
    this->Buffer[this->BufferBitPosition >> 5] = this->PendingWord;
  }
  return;
}

// CreateSubstream @ 144329640

FNetBitStreamWriter * __thiscall
UE::Net::FNetBitStreamWriter::CreateSubstream
          (FNetBitStreamWriter *this,FNetBitStreamWriter *__return_storage_ptr__,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  FNetBitStreamWriter *pFVar11;
  
  if ((~(this->bIsInvalid | this->bHasSubstream) & 1) == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(!bIsInvalid) & (!bHasSubstream)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetBitStreamWriter.cpp"
                       ,0xff,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FNetBitStreamWriter *)(*pcVar2)();
      return pFVar11;
    }
  }
  uVar3 = this->BufferBitCapacity;
  uVar4 = this->BufferBitStartOffset;
  uVar10 = this->OverflowBitCount;
  uVar5 = this->BufferBitPosition;
  uVar6 = this->PendingWord;
  uVar7 = this->OverflowBitCount;
  uVar8 = *(undefined4 *)&this->field_0x1c;
  this->bHasSubstream = 1;
  uVar1 = this->BufferBitPosition;
  __return_storage_ptr__->Buffer = this->Buffer;
  __return_storage_ptr__->BufferBitCapacity = uVar3;
  __return_storage_ptr__->BufferBitStartOffset = uVar4;
  __return_storage_ptr__->BufferBitPosition = uVar5;
  __return_storage_ptr__->PendingWord = uVar6;
  __return_storage_ptr__->OverflowBitCount = uVar7;
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = uVar8;
  __return_storage_ptr__->bHasSubstream = 0;
  __return_storage_ptr__->bIsSubstream = 1;
  __return_storage_ptr__->BufferBitStartOffset = uVar1;
  if (uVar10 != 0) {
    __return_storage_ptr__->OverflowBitCount = uVar10;
    __return_storage_ptr__->BufferBitCapacity = uVar1;
    return __return_storage_ptr__;
  }
  uVar10 = this->BufferBitCapacity - uVar1;
  if (param_1 < uVar10) {
    uVar10 = param_1;
  }
  __return_storage_ptr__->BufferBitCapacity = uVar10 + uVar1;
  return __return_storage_ptr__;
}

// DiscardSubstream @ 14432f4e0

void __thiscall
UE::Net::FNetBitStreamWriter::DiscardSubstream
          (FNetBitStreamWriter *this,FNetBitStreamWriter *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *(uint *)&this->field_0x1c;
  if ((uVar1 & (uint)(this->BufferBitPosition == param_1->BufferBitStartOffset) &
               ~((uVar1 | *(uint *)&param_1->field_0x1c) >> 2 | param_1->bHasSubstream) &
               (uint)(this->Buffer == param_1->Buffer)) == 0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3425399992389467848>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetBitStreamWriter.cpp"
                       ,0x138,
                       "bHasSubstream & (!Substream.bHasSubstream) & (!bIsInvalid) & (!Substream.bIsInvalid) & (Buffer == Substream.Buffer) & (BufferBitPosition == Substream.BufferBitStartOffset)"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    *(uint *)&this->field_0x1c = uVar1 & 0xfffffffe;
    param_1->bIsInvalid = 1;
  }
  return;
}

// DoOverflow @ 14432f630

void __thiscall UE::Net::FNetBitStreamWriter::DoOverflow(FNetBitStreamWriter *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  if (this->OverflowBitCount == 0) {
    uVar4 = this->BufferBitCapacity + 1;
    if ((~(this->bIsInvalid | this->bHasSubstream) & 1) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(!bIsInvalid) & (!bHasSubstream)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetBitStreamWriter.cpp"
                         ,0xd9,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar1 = this->BufferBitCapacity;
    uVar5 = this->BufferBitStartOffset + uVar4;
    if (uVar1 < uVar5 || uVar5 < uVar4) {
      uVar4 = uVar1 + 1;
      if (uVar1 + 1 < uVar5) {
        uVar4 = uVar5;
      }
      this->OverflowBitCount = uVar4 - uVar1;
      return;
    }
    uVar4 = uVar1 + 0x1f & 0xffffffe0;
    this->OverflowBitCount = 0;
    if (this->BufferBitPosition < uVar4) {
      this->Buffer[this->BufferBitPosition >> 5] = this->PendingWord;
    }
    this->BufferBitPosition = uVar5;
    if (uVar5 < uVar4) {
      this->PendingWord = this->Buffer[uVar5 >> 5];
    }
  }
  return;
}

// InitBytes @ 144331b90

void __thiscall
UE::Net::FNetBitStreamWriter::InitBytes(FNetBitStreamWriter *this,void *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InBuffer != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetBitStreamWriter.cpp"
                       ,0x2b,L"");
    if (bVar2) {
code_r0x000144331bfe:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if ((((ulonglong)param_1 & 3) != 0) &&
          (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uintptr_t(InBuffer) & 3) == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetBitStreamWriter.cpp"
                              ,0x2c,L"Buffer needs to be 4-byte aligned."), bVar2))
  goto code_r0x000144331bfe;
  if (((param_2 & 3) != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ByteCount & 3) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetBitStreamWriter.cpp"
                         ,0x2d,L"Buffer capacity needs to be a multiple of 4."), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->bHasSubstream != 0 || this->bIsSubstream != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bHasSubstream && !bIsSubstream",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetBitStreamWriter.cpp"
                         ,0x2e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->Buffer = param_1;
  this->BufferBitCapacity = param_2 * 8;
  this->BufferBitPosition = 0;
  this->OverflowBitCount = 0;
  if (3 < param_2) {
    this->PendingWord = *(uint *)param_1;
  }
  return;
}

// Seek @ 14433a7b0

void __thiscall UE::Net::FNetBitStreamWriter::Seek(FNetBitStreamWriter *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((~(this->bIsInvalid | this->bHasSubstream) & 1) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(!bIsInvalid) & (!bHasSubstream)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetBitStreamWriter.cpp"
                       ,0xd9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar5 = this->BufferBitCapacity;
  uVar4 = this->BufferBitStartOffset + param_1;
  if (uVar5 < uVar4 || uVar4 < param_1) {
    uVar3 = uVar5 + 1;
    if (uVar5 + 1 < uVar4) {
      uVar3 = uVar4;
    }
    this->OverflowBitCount = uVar3 - uVar5;
    return;
  }
  uVar5 = uVar5 + 0x1f & 0xffffffe0;
  this->OverflowBitCount = 0;
  if (this->BufferBitPosition < uVar5) {
    this->Buffer[this->BufferBitPosition >> 5] = this->PendingWord;
  }
  this->BufferBitPosition = uVar4;
  if (uVar4 < uVar5) {
    this->PendingWord = this->Buffer[uVar4 >> 5];
  }
  return;
}

// WriteBitStream @ 14433faf0

void __thiscall
UE::Net::FNetBitStreamWriter::WriteBitStream
          (FNetBitStreamWriter *this,uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  if (((~(this->bIsInvalid | this->bHasSubstream) & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(!bIsInvalid) & (!bHasSubstream)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetBitStreamWriter.cpp"
                         ,0x74,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this->OverflowBitCount == 0) && (param_3 != 0)) {
    uVar8 = this->BufferBitCapacity;
    uVar14 = this->BufferBitPosition;
    if (uVar8 - uVar14 < param_3) {
      this->OverflowBitCount = (uVar14 - uVar8) + param_3;
      return;
    }
    puVar1 = this->Buffer;
    uVar9 = uVar14 & 0x1f;
    this->BufferBitPosition = uVar14 + param_3;
    uVar10 = uVar14;
    if (uVar9 != 0) {
      uVar7 = param_3;
      if (0x20 - uVar9 < param_3) {
        uVar7 = 0x20 - uVar9;
      }
      uVar12 = param_2 >> 5;
      uVar13 = (1 << ((byte)uVar7 & 0x1f)) - 1;
      bVar4 = (byte)param_2;
      param_2 = uVar7 + param_2;
      uVar6 = param_2 - 1 >> 5;
      uVar10 = uVar14 + uVar7;
      puVar1[uVar14 >> 5] =
           ((param_1[uVar6] << (-bVar4 & 0x1f) & uVar12 - uVar6 | param_1[uVar12] >> (bVar4 & 0x1f))
           & uVar13) << (sbyte)uVar9 | ~(uVar13 << (sbyte)uVar9) & this->PendingWord;
      param_3 = param_3 - uVar7;
    }
    if (0x1f < param_3) {
      if ((param_2 & 7) == 0) {
        memcpy(puVar1 + (uVar10 >> 5),(void *)((ulonglong)(param_2 >> 3) + (longlong)param_1),
               (ulonglong)(param_3 >> 5) << 2);
      }
      else {
        uVar9 = uVar10 >> 5;
        uVar7 = param_2 >> 5;
        uVar14 = param_1[uVar7];
        uVar11 = (ulonglong)(param_3 >> 5);
        if (param_3 >> 5 != 0) {
          puVar2 = this->Buffer;
          do {
            uVar7 = uVar7 + 1;
            uVar6 = uVar14 >> ((byte)param_2 & 0x1f);
            uVar14 = param_1[uVar7];
            puVar2[uVar9] = param_1[uVar7] << (-(byte)param_2 & 0x1f) | uVar6;
            uVar9 = uVar9 + 1;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
      param_2 = param_2 + (param_3 & 0xffffffe0);
      uVar10 = uVar10 + (param_3 & 0xffffffe0);
      param_3 = param_3 & 0x1f;
    }
    if (param_3 == 0) {
      if (uVar10 < (uVar8 + 0x1f & 0xffffffe0)) {
        this->PendingWord = puVar1[uVar10 >> 5];
      }
    }
    else {
      uVar8 = (param_2 - 1) + param_3 >> 5;
      uVar14 = (1 << ((byte)param_3 & 0x1f)) - 1;
      this->PendingWord =
           (param_1[uVar8] << (-(byte)param_2 & 0x1f) & (param_2 >> 5) - uVar8 |
           param_1[param_2 >> 5] >> ((byte)param_2 & 0x1f)) & uVar14 | puVar1[uVar10 >> 5] & ~uVar14
      ;
    }
  }
  return;
}

// WriteBits @ 14433fdb0

void __thiscall
UE::Net::FNetBitStreamWriter::WriteBits(FNetBitStreamWriter *this,uint param_1,uint param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  sbyte sVar4;
  uint uVar5;
  uint uVar6;
  
  if ((~(this->bIsInvalid | this->bHasSubstream) & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(!bIsInvalid) & (!bHasSubstream)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetBitStreamWriter.cpp"
                       ,0x3d,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->OverflowBitCount == 0) {
    uVar5 = this->BufferBitPosition;
    if (this->BufferBitCapacity - uVar5 < param_2) {
      this->OverflowBitCount = (uVar5 - this->BufferBitCapacity) + param_2;
      return;
    }
    this->BufferBitPosition = uVar5 + param_2;
    uVar6 = 0x20 - (uVar5 & 0x1f);
    sVar4 = (sbyte)(uVar5 & 0x1f);
    if (param_2 < uVar6) {
      uVar5 = (1 << ((byte)param_2 & 0x1f)) - 1;
      this->PendingWord = ~(uVar5 << sVar4) & this->PendingWord | (uVar5 & param_1) << sVar4;
      return;
    }
    this->Buffer[uVar5 >> 5] = (1 << sVar4) - 1U & this->PendingWord | param_1 << sVar4;
    if (this->BufferBitPosition < (this->BufferBitCapacity + 0x1f & 0xffffffe0)) {
      bVar2 = (byte)uVar6;
      uVar5 = (1 << ((byte)param_2 - bVar2 & 0x1f)) - 1;
      this->PendingWord =
           param_1 >> (bVar2 & 0x1f) & uVar5 | this->Buffer[this->BufferBitPosition >> 5] & ~uVar5;
    }
  }
  return;
}

