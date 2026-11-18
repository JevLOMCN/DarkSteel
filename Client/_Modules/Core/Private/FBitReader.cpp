// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 23

// FBitReader @ 1419cc780

FBitReader * __thiscall FBitReader::FBitReader(FBitReader *this,FBitReader *param_1)

{
  FArchiveState::FArchiveState((FArchiveState *)this,(FArchiveState *)param_1);
  this->_padding_ = (longlong)&___7FBitReader__6B_;
  (this->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffer).AllocatorInstance.Data = (param_1->Buffer).AllocatorInstance.Data;
  (param_1->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffer).ArrayNum = (param_1->Buffer).ArrayNum;
  (this->Buffer).ArrayMax = (param_1->Buffer).ArrayMax;
  (param_1->Buffer).ArrayNum = 0;
  (param_1->Buffer).ArrayMax = 0;
  this->Num = param_1->Num;
  this->Pos = param_1->Pos;
  return this;
}

// FBitReader @ 1419cc810

FBitReader * __thiscall FBitReader::FBitReader(FBitReader *this,FBitReader *param_1)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  FArchiveState::FArchiveState((FArchiveState *)this,(FArchiveState *)param_1);
  pTVar2 = &this->Buffer;
  this->_padding_ = (longlong)&___7FBitReader__6B_;
  piVar1 = &(this->Buffer).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Buffer).ArrayNum;
  _Src = (param_1->Buffer).AllocatorInstance.Data;
  (this->Buffer).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3);
  }
  this->Num = param_1->Num;
  this->Pos = param_1->Pos;
  return this;
}

// FBitReader @ 1419cc8e0

FBitReader * __thiscall FBitReader::FBitReader(FBitReader *this,uchar *param_1,long64 param_2)

{
  int *piVar1;
  int *piVar2;
  byte *pbVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  byte bVar6;
  ulonglong uVar7;
  code *pcVar8;
  TConsoleVariableData<int> *pTVar9;
  bool bVar10;
  longlong lVar11;
  FBitReader *pFVar12;
  size_t _Size;
  uint uVar13;
  uint uVar14;
  
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->_padding_ = (longlong)&___7FBitArchive__6B_;
  pTVar9 = CVarMaxNetStringSize.Ref;
  bVar10 = IsInParallelGameThread();
  if (!bVar10) {
    bVar10 = IsInGameThread();
    lVar11 = 4;
    if (!bVar10) goto LAB_1419cc933;
  }
  lVar11 = 0;
LAB_1419cc933:
  pTVar4 = &this->Buffer;
  this->_padding_ = (longlong)*(int *)((longlong)pTVar9->ShadowedValue + lVar11);
  this->Pos = 0;
  this->_padding_ = (longlong)&___7FBitReader__6B_;
  piVar1 = &(this->Buffer).ArrayNum;
  piVar2 = &(this->Buffer).ArrayMax;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar1 = 0;
  this->Num = param_2;
  _Size = param_2 + 7 >> 3;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,(int)_Size,&pTVar4->AllocatorInstance,piVar1,piVar2);
  (**(code **)(this->_padding_ + 200))(this,1);
  (**(code **)(this->_padding_ + 0x108))(this,1);
  pbVar3 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar3 = *pbVar3 | 0x80;
  if (param_1 != (uchar *)0x0) {
    memcpy((pTVar4->AllocatorInstance).Data,param_1,_Size);
    uVar7 = this->Num;
    if ((uVar7 & 7) != 0) {
      bVar6 = ""[(uint)uVar7 & 7];
      uVar14 = (uint)((longlong)uVar7 >> 3);
      uVar13 = 0;
      if ((int)uVar14 < *piVar1) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if (uVar13 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          pFVar12 = (FBitReader *)(*pcVar8)();
          return pFVar12;
        }
      }
      pFVar5 = (pTVar4->AllocatorInstance).Data + (int)uVar14;
      *pFVar5 = (FScriptContainerElement)((byte)*pFVar5 & bVar6);
    }
  }
  return this;
}

// ~FBitReader @ 1419d1f60

void __thiscall FBitReader::~FBitReader(FBitReader *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FBitReader__6B_;
  pFVar1 = (this->Buffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FArchive::~FArchive((FArchive *)this);
  return;
}

// operator= @ 1419d3dc0

FBitReader * __thiscall FBitReader::operator=(FBitReader *this,FBitReader *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  FArchiveState::operator=((FArchiveState *)this,(FArchiveState *)param_1);
  pTVar1 = &param_1->Buffer;
  pTVar2 = &this->Buffer;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Buffer).ArrayNum = (param_1->Buffer).ArrayNum;
    (this->Buffer).ArrayMax = (param_1->Buffer).ArrayMax;
    (param_1->Buffer).ArrayNum = 0;
    (param_1->Buffer).ArrayMax = 0;
  }
  this->Num = param_1->Num;
  this->Pos = param_1->Pos;
  return this;
}

// operator= @ 1419d3e60

FBitReader * __thiscall FBitReader::operator=(FBitReader *this,FBitReader *param_1)

{
  FArchiveState::operator=((FArchiveState *)this,(FArchiveState *)param_1);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=(&this->Buffer,&param_1->Buffer);
  this->Num = param_1->Num;
  this->Pos = param_1->Pos;
  return this;
}

// AppendDataFromChecked @ 1419e1050

void __thiscall FBitReader::AppendDataFromChecked(FBitReader *this,FBitReader *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)(this->Num >> 0x3f) & 7;
  if (((int)this->Num + uVar6 & 7) != uVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num % 8 == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\BitReader.cpp"
                       ,0xef,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar1 = &this->Buffer;
  if (pTVar1 == &param_1->Buffer) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = (param_1->Buffer).ArrayNum;
  if (iVar2 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar2,&pTVar1->AllocatorInstance,&(this->Buffer).ArrayNum,
                       &(this->Buffer).ArrayMax);
    memcpy((pTVar1->AllocatorInstance).Data + iVar5,(param_1->Buffer).AllocatorInstance.Data,
           (longlong)iVar2);
  }
  this->Num = this->Num + param_1->Num;
  return;
}

// AppendDataFromChecked @ 1419e1160

void __thiscall FBitReader::AppendDataFromChecked(FBitReader *this,uchar *param_1,uint param_2)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar7 = (uint)(this->Num >> 0x3f) & 7;
  if (((int)this->Num + uVar7 & 7) != uVar7) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num % 8 == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\BitReader.cpp"
                       ,0xf5,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar2 = &this->Buffer;
  uVar10 = param_2 + 7 >> 3;
  piVar1 = &(this->Buffer).ArrayNum;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,uVar10,&pTVar2->AllocatorInstance,piVar1,&(this->Buffer).ArrayMax);
  uVar8 = (uint)(this->Num >> 3);
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  memcpy((pTVar2->AllocatorInstance).Data + (int)uVar8,param_1,(ulonglong)uVar10);
  uVar9 = (ulonglong)param_2 + this->Num;
  this->Num = uVar9;
  if ((uVar9 & 7) != 0) {
    bVar4 = ""[(uint)uVar9 & 7];
    uVar8 = (uint)((longlong)uVar9 >> 3);
    uVar7 = 0;
    if ((int)uVar8 < *piVar1) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data + (int)uVar8;
    *pFVar3 = (FScriptContainerElement)((byte)*pFVar3 & bVar4);
  }
  return;
}

// AppendTo @ 1419e1a60

void __thiscall
FBitReader::AppendTo(FBitReader *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 == &this->Buffer) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (this->Buffer).ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar1,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax);
    memcpy((param_1->AllocatorInstance).Data + iVar4,(this->Buffer).AllocatorInstance.Data,
           (longlong)iVar1);
  }
  return;
}

// AtEnd @ 1419e30e0

bool __thiscall FBitReader::AtEnd(FBitReader *this)

{
  if (((this->_padding_ & 0x200) == 0) && (this->Pos < this->Num)) {
    return false;
  }
  return true;
}

// CountMemory @ 1419e75a0

void __thiscall FBitReader::CountMemory(FBitReader *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->Buffer).ArrayNum,(longlong)(this->Buffer).ArrayMax);
                    /* WARNING: Could not recover jumptable at 0x0001419e75d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0xb0,0xb0);
  return;
}

// ResetData @ 141a1a390

void __thiscall
FBitReader::ResetData(FBitReader *this,FBitReader *param_1,long64 param_2,long64 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  
  this->Num = param_2;
  this->Pos = 0;
  FArchiveState::ClearError((FArchiveState *)this);
  SetNetVersionsFromArchive(this,(FArchive *)param_1);
  uVar4 = param_3 + 7 >> 3;
  iVar3 = (int)uVar4;
  if (-1 < iVar3) {
    piVar1 = &(this->Buffer).ArrayMax;
    piVar2 = &(this->Buffer).ArrayNum;
    *piVar2 = 0;
    if (*piVar1 < iVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar3,&(this->Buffer).AllocatorInstance,0,piVar1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)(param_2 + 7 >> 3),&(this->Buffer).AllocatorInstance,piVar2,piVar1);
                    /* WARNING: Could not recover jumptable at 0x000141a1a473. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 400))(param_1,(this->Buffer).AllocatorInstance.Data,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar4 & 0xffffffff);
}

// Serialize @ 141a1dfc0

void __thiscall FBitReader::Serialize(FBitReader *this,void *param_1,long64 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000141a1dfcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 400))(this,param_1,param_2 * 8);
  return;
}

// SerializeBits @ 141a1e820

void __thiscall FBitReader::SerializeBits(FBitReader *this,void *param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  if ((this->_padding_ & 0x200) == 0) {
    if (this->Pos + param_2 <= this->Num) {
      if (param_2 != 1) {
        if (param_2 == 0) {
          return;
        }
        *(undefined1 *)((param_2 + 7 >> 3) + -1 + (longlong)param_1) = 0;
        appBitsCpy(param_1,0,(uchar *)(this->Buffer).AllocatorInstance.Data,(int)this->Pos,
                   (int)param_2);
        this->Pos = this->Pos + param_2;
        return;
      }
      *(undefined1 *)param_1 = 0;
      uVar4 = (uint)(this->Pos >> 3);
      uVar3 = 0;
      if ((int)uVar4 < (this->Buffer).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((byte)(this->Buffer).AllocatorInstance.Data[(int)uVar4] & '\x01' << ((byte)this->Pos & 7)
          ) != 0) {
        *(byte *)param_1 = *(byte *)param_1 | 1;
      }
      this->Pos = this->Pos + 1;
      return;
    }
    SetOverflowed(this,param_2);
  }
  memset(param_1,0,param_2 + 7 >> 3);
  return;
}

// SerializeBitsWithOffset @ 141a1eb30

void __thiscall
FBitReader::SerializeBitsWithOffset(FBitReader *this,void *param_1,int param_2,long64 param_3)

{
  if ((this->_padding_ & 0x200) == 0) {
    if (this->Num < this->Pos + param_3) {
      SetOverflowed(this,param_3);
    }
    else if (param_3 != 0) {
      appBitsCpy(param_1,param_2,(uchar *)(this->Buffer).AllocatorInstance.Data,(int)this->Pos,
                 (int)param_3);
      this->Pos = this->Pos + param_3;
      return;
    }
  }
  return;
}

// SerializeInt @ 141a1ec80

void __thiscall FBitReader::SerializeInt(FBitReader *this,uint *param_1,uint param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  long64 lVar6;
  uint uVar7;
  uint uVar8;
  
  if ((this->_padding_ & 0x200) == 0) {
    lVar1 = this->Num;
    lVar6 = this->Pos;
    uVar7 = 1;
    uVar8 = 0;
    if (1 < param_2) {
      do {
        if (uVar7 == 0) break;
        if (lVar1 <= lVar6) {
          SetOverflowed(this,lVar6 - this->Pos);
          break;
        }
        uVar5 = (uint)(lVar6 >> 3);
        uVar4 = 0;
        if ((int)uVar5 < (this->Buffer).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar4 = uVar7 | uVar8;
        if (('\x01' << ((byte)lVar6 & 7) & (byte)(this->Buffer).AllocatorInstance.Data[(int)uVar5])
            == 0) {
          uVar4 = uVar8;
        }
        uVar8 = uVar4;
        uVar7 = uVar7 * 2;
        lVar6 = lVar6 + 1;
      } while (uVar8 + uVar7 < param_2);
    }
    this->Pos = lVar6;
    *param_1 = uVar8;
  }
  return;
}

// SerializeIntPacked @ 141a1efe0

void __thiscall FBitReader::SerializeIntPacked(FBitReader *this,uint *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  ulonglong uVar12;
  
  if ((this->_padding_ & 0x200) != 0) {
    *param_1 = 0;
    return;
  }
  uVar12 = this->Pos;
  uVar9 = 0;
  bVar11 = (byte)uVar12;
  bVar10 = 0;
  uVar8 = 0;
  uVar3 = uVar12 & 7;
  bVar4 = bVar11 & 7;
  pFVar7 = (this->Buffer).AllocatorInstance.Data + ((longlong)uVar12 >> 3);
  bVar5 = 8 - bVar4;
  do {
    uVar12 = uVar12 + 8;
    if (this->Num < (longlong)uVar12) {
      SetOverflowed(this,8);
      break;
    }
    this->Pos = uVar12;
    pFVar1 = pFVar7 + (uVar3 != 0);
    FVar2 = *pFVar7;
    pFVar7 = pFVar7 + 1;
    bVar6 = ((byte)*pFVar1 & ('\x01' << bVar4) - 1U) << (bVar5 & 7) |
            (byte)FVar2 >> (bVar11 & 7) & ('\x01' << (bVar5 & 0x1f)) - 1U;
    uVar8 = uVar8 | (uint)(bVar6 >> 1) << (bVar10 & 0x1f);
    if ((bVar6 & 1) == 0) break;
    uVar9 = uVar9 + 1;
    bVar10 = bVar10 + 7;
  } while (uVar9 < 5);
  *param_1 = uVar8;
  return;
}

// SetData @ 141a1f5e0

void __thiscall
FBitReader::SetData(FBitReader *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
                   long64 param_2)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  byte bVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  
  this->Num = param_2;
  this->Pos = 0;
  FArchiveState::ClearError((FArchiveState *)this);
  pTVar1 = &this->Buffer;
  if (pTVar1 != param_1) {
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Buffer).ArrayNum = param_1->ArrayNum;
    (this->Buffer).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  uVar4 = this->Num;
  if ((uVar4 & 7) != 0) {
    bVar2 = ""[(uint)uVar4 & 7];
    uVar8 = (uint)((longlong)uVar4 >> 3);
    uVar7 = 0;
    if ((int)uVar8 < (this->Buffer).ArrayNum) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar3 = (pTVar1->AllocatorInstance).Data + (int)uVar8;
    *pFVar3 = (FScriptContainerElement)((byte)*pFVar3 & bVar2);
  }
  return;
}

// SetData @ 141a1f6d0

void __thiscall FBitReader::SetData(FBitReader *this,FBitReader *param_1,long64 param_2)

{
  int *piVar1;
  int *piVar2;
  
  this->Num = param_2;
  this->Pos = 0;
  FArchiveState::ClearError((FArchiveState *)this);
  SetNetVersionsFromArchive(this,(FArchive *)param_1);
  piVar1 = &(this->Buffer).ArrayMax;
  piVar2 = &(this->Buffer).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->Buffer).AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,(int)(param_2 + 7 >> 3),&(this->Buffer).AllocatorInstance,piVar2,piVar1);
                    /* WARNING: Could not recover jumptable at 0x000141a1f7a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 400))(param_1,(this->Buffer).AllocatorInstance.Data,param_2);
  return;
}

// SetData @ 141a1f7b0

void __thiscall FBitReader::SetData(FBitReader *this,uchar *param_1,long64 param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  byte bVar5;
  ulonglong uVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  
  this->Num = param_2;
  this->Pos = 0;
  FArchiveState::ClearError((FArchiveState *)this);
  pTVar3 = &this->Buffer;
  piVar1 = &(this->Buffer).ArrayMax;
  (this->Buffer).ArrayNum = 0;
  piVar2 = &(this->Buffer).ArrayNum;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,(int)(this->Num + 7 >> 3),&pTVar3->AllocatorInstance,piVar2,piVar1);
  if (param_1 != (uchar *)0x0) {
    memcpy((pTVar3->AllocatorInstance).Data,param_1,this->Num + 7 >> 3);
    uVar6 = this->Num;
    if ((uVar6 & 7) != 0) {
      bVar5 = ""[(uint)uVar6 & 7];
      uVar9 = (uint)((longlong)uVar6 >> 3);
      uVar10 = 0;
      if ((int)uVar9 < *piVar2) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar4 = (pTVar3->AllocatorInstance).Data + (int)uVar9;
      *pFVar4 = (FScriptContainerElement)((byte)*pFVar4 & bVar5);
    }
  }
  return;
}

// SetNetVersionsFromArchive @ 141a20a50

void __thiscall FBitReader::SetNetVersionsFromArchive(FBitReader *this,FArchive *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  pcVar1 = *(code **)(this->_padding_ + 0x128);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
  (*pcVar1)(this,uVar2);
  pcVar1 = *(code **)(this->_padding_ + 0x130);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x50))(param_1);
  (*pcVar1)(this,uVar2);
  (**(code **)(this->_padding_ + 0x110))(this,*(undefined8 *)&param_1->field_0x40);
  (**(code **)(this->_padding_ + 0x118))(this,*(undefined4 *)&param_1->field_0x48);
  local_10 = *(undefined4 *)&param_1->field_0x54;
  local_18 = *(undefined8 *)&param_1->field_0x4c;
  (**(code **)(this->_padding_ + 0x120))(this,&local_18);
  return;
}

// SetOverflowed @ 141a21070

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBitReader::SetOverflowed(FBitReader *this,long64 param_1)

{
  long64 local_res10 [3];
  long64 *local_18;
  FBitReader *local_10;
  
  local_res10[0] = param_1;
  if (UE::Net::GLogFatalOnOverflow) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogNetSerialization);
    FArchiveState::SetError((FArchiveState *)this);
    return;
  }
  if (UE::Net::GEnsureOnOverflow != 0) {
    local_18 = local_res10;
    local_10 = this;
    `FBitReader::SetOverflowed'::__l27::<lambda_1>::operator()(&local_18);
    FArchiveState::SetError((FArchiveState *)this);
    return;
  }
  if (1 < (byte)LogNetSerialization._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetSerialization);
  }
  FArchiveState::SetError((FArchiveState *)this);
  return;
}

// operator() @ 15047fd70

bool __thiscall `FBitReader::SetOverflowed'::__l27::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7162976882370019045>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7162976882370019045>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

