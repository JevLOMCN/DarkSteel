// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 10

// FNetBitStreamReader @ 144326c40

FNetBitStreamReader * __thiscall
UE::Net::FNetBitStreamReader::FNetBitStreamReader(FNetBitStreamReader *this)

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

// ~FNetBitStreamReader @ 144327010

void __thiscall UE::Net::FNetBitStreamReader::~FNetBitStreamReader(FNetBitStreamReader *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bHasSubstream != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bHasSubstream",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetBitStreamReader.cpp"
                       ,0x23,L"FNetBitStreamReader is destroyed with active substream. ");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// CommitSubstream @ 144329000

void __thiscall
UE::Net::FNetBitStreamReader::CommitSubstream
          (FNetBitStreamReader *this,FNetBitStreamReader *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *(uint *)&this->field_0x1c;
  if ((uVar1 & (uint)(this->BufferBitPosition == param_1->BufferBitStartOffset) &
               ~((uVar1 | *(uint *)&param_1->field_0x1c) >> 2 | param_1->bHasSubstream) &
               (uint)(this->Buffer == param_1->Buffer)) == 0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6900214945024048914>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetBitStreamReader.cpp"
                       ,0xee,
                       "bHasSubstream & (!Substream.bHasSubstream) & (!bIsInvalid) & (!Substream.bIsInvalid) & (Buffer == Substream.Buffer) & (BufferBitPosition == Substream.BufferBitStartOffset)"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (param_1->OverflowBitCount == 0) {
      this->BufferBitPosition = param_1->BufferBitPosition;
      if ((param_1->BufferBitPosition & 0xffffffe0) < this->BufferBitCapacity) {
        this->PendingWord = this->Buffer[param_1->BufferBitPosition >> 5];
      }
    }
    *(uint *)&this->field_0x1c = uVar1 & 0xfffffffe;
    param_1->bIsInvalid = 1;
  }
  return;
}

// CreateSubstream @ 144329580

FNetBitStreamReader * __thiscall
UE::Net::FNetBitStreamReader::CreateSubstream
          (FNetBitStreamReader *this,FNetBitStreamReader *__return_storage_ptr__,uint param_1)

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
  FNetBitStreamReader *pFVar11;
  
  if ((~(this->bIsInvalid | this->bHasSubstream) & 1) == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(!bIsInvalid) & (!bHasSubstream)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetBitStreamReader.cpp"
                       ,0xcf,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FNetBitStreamReader *)(*pcVar2)();
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

// DiscardSubstream @ 14432f450

void __thiscall
UE::Net::FNetBitStreamReader::DiscardSubstream
          (FNetBitStreamReader *this,FNetBitStreamReader *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *(uint *)&this->field_0x1c;
  if ((uVar1 & (uint)(this->BufferBitPosition == param_1->BufferBitStartOffset) &
               ~((uVar1 | *(uint *)&param_1->field_0x1c) >> 2 | param_1->bHasSubstream) &
               (uint)(this->Buffer == param_1->Buffer)) == 0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6900214945024048893>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetBitStreamReader.cpp"
                       ,0x103,
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

// DoOverflow @ 14432f570

void __thiscall UE::Net::FNetBitStreamReader::DoOverflow(FNetBitStreamReader *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  if (this->OverflowBitCount == 0) {
    uVar5 = this->BufferBitCapacity + 1;
    if ((~(this->bIsInvalid | this->bHasSubstream) & 1) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(!bIsInvalid) & (!bHasSubstream)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetBitStreamReader.cpp"
                         ,0xb2,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar1 = this->BufferBitCapacity;
    uVar4 = this->BufferBitStartOffset + uVar5;
    if (uVar1 < uVar4 || uVar4 < uVar5) {
      uVar5 = uVar1 + 1;
      if (uVar1 + 1 < uVar4) {
        uVar5 = uVar4;
      }
      this->OverflowBitCount = uVar5 - uVar1;
      return;
    }
    this->OverflowBitCount = 0;
    this->BufferBitPosition = uVar4;
    if ((uVar4 & 0xffffffe0) < uVar1) {
      this->PendingWord = this->Buffer[uVar4 >> 5];
    }
  }
  return;
}

// InitBits @ 144331ac0

void __thiscall
UE::Net::FNetBitStreamReader::InitBits(FNetBitStreamReader *this,void *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InBuffer != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetBitStreamReader.cpp"
                       ,0x28,L"");
    if (bVar2) {
code_r0x000144331b2e:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if ((((ulonglong)param_1 & 3) != 0) &&
          (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("(UPTRINT(InBuffer) & 3) == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetBitStreamReader.cpp"
                              ,0x29,L"Buffer needs to be 4-byte aligned."), bVar2))
  goto code_r0x000144331b2e;
  if ((this->bHasSubstream != 0 || this->bIsSubstream != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bHasSubstream && !bIsSubstream",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetBitStreamReader.cpp"
                         ,0x2b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->Buffer = param_1;
  this->BufferBitCapacity = param_2;
  this->BufferBitPosition = 0;
  if (param_2 != 0) {
    this->PendingWord = *(uint *)param_1;
  }
  return;
}

// ReadBitStream @ 1443376f0

void __thiscall
UE::Net::FNetBitStreamReader::ReadBitStream(FNetBitStreamReader *this,uint *param_1,uint param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  if (((~(this->bIsInvalid | this->bHasSubstream) & 1) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(!bIsInvalid) & (!bHasSubstream)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetBitStreamReader.cpp"
                         ,0x68,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (this->OverflowBitCount == 0) {
    uVar6 = this->BufferBitCapacity;
    uVar7 = this->BufferBitPosition;
    if (uVar6 - uVar7 < param_2) {
      this->OverflowBitCount = (uVar7 - uVar6) + param_2;
      return;
    }
    uVar4 = uVar7 + param_2;
    puVar1 = this->Buffer;
    uVar9 = 0;
    this->BufferBitPosition = uVar4;
    if (uVar4 < uVar6) {
      this->PendingWord = puVar1[uVar4 >> 5];
    }
    if (0x1f < param_2) {
      uVar6 = param_2 >> 5;
      if ((uVar7 & 7) == 0) {
        memcpy(param_1,(void *)((ulonglong)(uVar7 >> 3) + (longlong)puVar1),(ulonglong)uVar6 << 2);
        uVar9 = (ulonglong)uVar6;
      }
      else {
        uVar5 = uVar7 >> 5;
        uVar4 = puVar1[uVar5];
        if (uVar6 != 0) {
          do {
            uVar5 = uVar5 + 1;
            uVar8 = uVar4 >> ((byte)uVar7 & 0x1f);
            uVar4 = puVar1[uVar5];
            param_1[uVar9] = puVar1[uVar5] << (-(byte)uVar7 & 0x1f) | uVar8;
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
          } while (uVar8 != uVar6);
        }
      }
      uVar7 = uVar7 + (param_2 & 0xffffffe0);
      param_2 = param_2 & 0x1f;
    }
    if (param_2 != 0) {
      uVar6 = (uVar7 - 1) + param_2 >> 5;
      uVar4 = (1 << ((byte)param_2 & 0x1f)) - 1;
      param_1[uVar9] =
           (puVar1[uVar6] << (-(byte)uVar7 & 0x1f) & (uVar7 >> 5) - uVar6 |
           puVar1[uVar7 >> 5] >> ((byte)uVar7 & 0x1f)) & uVar4 | ~uVar4 & param_1[uVar9];
    }
  }
  return;
}

// ReadBits @ 1443378a0

uint __thiscall UE::Net::FNetBitStreamReader::ReadBits(FNetBitStreamReader *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if ((~(this->bIsInvalid | this->bHasSubstream) & 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(!bIsInvalid) & (!bHasSubstream)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetBitStreamReader.cpp"
                       ,0x39,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
  if (this->OverflowBitCount == 0) {
    uVar5 = this->BufferBitCapacity;
    uVar6 = this->BufferBitPosition;
    if (param_1 <= uVar5 - uVar6) {
      uVar1 = uVar6 + param_1;
      this->BufferBitPosition = uVar1;
      uVar7 = 0x20 - (uVar6 & 0x1f);
      uVar6 = this->PendingWord >> (sbyte)(uVar6 & 0x1f);
      if (param_1 < uVar7) {
        return (1 << ((byte)param_1 & 0x1f)) - 1U & uVar6;
      }
      if ((uVar1 & 0xffffffe0) < uVar5) {
        bVar3 = (byte)uVar7;
        uVar5 = this->Buffer[uVar1 >> 5];
        this->PendingWord = uVar5;
        uVar6 = uVar6 | ((1 << ((byte)param_1 - bVar3 & 0x1f)) - 1U & uVar5) << (bVar3 & 0x1f);
      }
      return uVar6;
    }
    this->OverflowBitCount = (uVar6 - uVar5) + param_1;
  }
  return 0;
}

// Seek @ 14433a6f0

void __thiscall UE::Net::FNetBitStreamReader::Seek(FNetBitStreamReader *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  if ((~(this->bIsInvalid | this->bHasSubstream) & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(!bIsInvalid) & (!bHasSubstream)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetBitStreamReader.cpp"
                       ,0xb2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = this->BufferBitCapacity;
  uVar5 = this->BufferBitStartOffset + param_1;
  if (uVar1 < uVar5 || uVar5 < param_1) {
    uVar4 = uVar1 + 1;
    if (uVar1 + 1 < uVar5) {
      uVar4 = uVar5;
    }
    this->OverflowBitCount = uVar4 - uVar1;
    return;
  }
  this->OverflowBitCount = 0;
  this->BufferBitPosition = uVar5;
  if ((uVar5 & 0xffffffe0) < uVar1) {
    this->PendingWord = this->Buffer[uVar5 >> 5];
  }
  return;
}

