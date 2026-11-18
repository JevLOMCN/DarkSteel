// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 18

// ~TRingBuffer<unsigned_short,TSizedDefaultAllocator<32>_> @ 14422a9a0

void __thiscall
TRingBuffer<unsigned_short,TSizedDefaultAllocator<32>_>::
~TRingBuffer<unsigned_short,TSizedDefaultAllocator<32>_>
          (TRingBuffer<unsigned_short,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->IndexMask + 1 < this->AfterBack - this->Front) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x37f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->Front = 0;
  this->AfterBack = 0;
  Reallocate(this,0);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator[] @ 14422b9a0

FDataChunk * __thiscall
TRingBuffer<UE::Net::Private::FChunkedDataReader::FDataChunk,TSizedDefaultAllocator<32>_>::
operator[](TRingBuffer<UE::Net::Private::FChunkedDataReader::FDataChunk,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FDataChunk *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (int)(this->AfterBack - this->Front)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FDataChunk *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FDataChunk *)
         ((this->AllocatorInstance).Data +
         (ulonglong)(this->Front + param_1 & this->IndexMask) * 0x18);
}

// operator[] @ 14422ba20

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FRecvQueueEntry * __thiscall
TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>::
operator[](TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRecvQueueEntry *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (int)(this->AfterBack - this->Front)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRecvQueueEntry *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FRecvQueueEntry *)
         ((this->AllocatorInstance).Data +
         (ulonglong)(this->Front + param_1 & this->IndexMask) * 0x20);
}

// operator[] @ 14422baa0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FRecvQueueEntry * __thiscall
TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>::
operator[](TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRecvQueueEntry *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (int)(this->AfterBack - this->Front)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRecvQueueEntry *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FRecvQueueEntry *)
         ((this->AllocatorInstance).Data +
         (ulonglong)(this->Front + param_1 & this->IndexMask) * 0x20);
}

// DestructRange @ 1442372e0

void __thiscall
TRingBuffer<UE::Net::Private::FChunkedDataReader::FDataChunk,TSizedDefaultAllocator<32>_>::
DestructRange(TRingBuffer<UE::Net::Private::FChunkedDataReader::FDataChunk,TSizedDefaultAllocator<32>_>
              *this,uint param_1,uint param_2)

{
  uint uVar1;
  FDataChunk *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FDataChunk *pFVar6;
  uint uVar7;
  
  uVar1 = this->IndexMask;
  uVar7 = param_2 - param_1;
  if (uVar1 + 1 < uVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x37f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar7 != 0) {
    pFVar2 = (FDataChunk *)(this->AllocatorInstance).Data;
    uVar5 = uVar1 & param_1;
    pFVar6 = pFVar2 + uVar5;
    if ((uVar1 & param_2) <= uVar5) {
      DestructItems<UE::Net::Private::FChunkedDataReader::FDataChunk,unsigned_int>
                (pFVar6,(uVar1 + 1) - uVar5);
      pFVar6 = pFVar2;
      uVar7 = uVar1 & param_2;
    }
    DestructItems<UE::Net::Private::FChunkedDataReader::FDataChunk,unsigned_int>(pFVar6,uVar7);
  }
  return;
}

// DestructRange @ 144237380

void __thiscall
TRingBuffer<UE::Net::Private::FChunkedDataWriter::FDataChunk,TSizedDefaultAllocator<32>_>::
DestructRange(TRingBuffer<UE::Net::Private::FChunkedDataWriter::FDataChunk,TSizedDefaultAllocator<32>_>
              *this,uint param_1,uint param_2)

{
  uint uVar1;
  FDataChunk *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FDataChunk *pFVar6;
  uint uVar7;
  
  uVar1 = this->IndexMask;
  uVar7 = param_2 - param_1;
  if (uVar1 + 1 < uVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x37f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar7 != 0) {
    pFVar2 = (FDataChunk *)(this->AllocatorInstance).Data;
    uVar5 = uVar1 & param_1;
    pFVar6 = pFVar2 + uVar5;
    if ((uVar1 & param_2) <= uVar5) {
      DestructItems<UE::Net::Private::FChunkedDataWriter::FDataChunk,unsigned_int>
                (pFVar6,(uVar1 + 1) - uVar5);
      pFVar6 = pFVar2;
      uVar7 = uVar1 & param_2;
    }
    DestructItems<UE::Net::Private::FChunkedDataWriter::FDataChunk,unsigned_int>(pFVar6,uVar7);
  }
  return;
}

// DestructRange @ 144237420

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>::
DestructRange(TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>
              *this,uint param_1,uint param_2)

{
  uint uVar1;
  FRecvQueueEntry *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FRecvQueueEntry *pFVar6;
  uint uVar7;
  
  uVar1 = this->IndexMask;
  uVar7 = param_2 - param_1;
  if (uVar1 + 1 < uVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x37f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar7 != 0) {
    pFVar2 = (FRecvQueueEntry *)(this->AllocatorInstance).Data;
    uVar5 = uVar1 & param_1;
    pFVar6 = pFVar2 + uVar5;
    if ((uVar1 & param_2) <= uVar5) {
      DestructItems<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,unsigned_int>
                (pFVar6,(uVar1 + 1) - uVar5);
      pFVar6 = pFVar2;
      uVar7 = uVar1 & param_2;
    }
    DestructItems<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,unsigned_int>(pFVar6,uVar7);
  }
  return;
}

// NormalizeCapacity @ 144244c00

uint __thiscall
TRingBuffer<unsigned_short,TSizedDefaultAllocator<32>_>::NormalizeCapacity
          (TRingBuffer<unsigned_short,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar5 = 1;
  if (param_1 != 0) {
    uVar5 = param_1;
  }
  uVar1 = (ulonglong)(uVar5 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar5 = (uint)(param_1 != 0) << ((byte)lVar2 & 0x1f);
  if (0x7fffffff < uVar5 || uVar5 < param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x39f,L"Integer overflow in TRingBuffer capacity");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  return uVar5;
}

// NormalizeCapacity @ 144244c80

uint __thiscall
TRingBuffer<UE::Net::Private::FChunkedDataReader::FDataChunk,TSizedDefaultAllocator<32>_>::
NormalizeCapacity(TRingBuffer<UE::Net::Private::FChunkedDataReader::FDataChunk,TSizedDefaultAllocator<32>_>
                  *this,uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar5 = 1;
  if (param_1 != 0) {
    uVar5 = param_1;
  }
  uVar1 = (ulonglong)(uVar5 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar5 = (uint)(param_1 != 0) << ((byte)lVar2 & 0x1f);
  if (0x7fffffff < uVar5 || uVar5 < param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x39f,L"Integer overflow in TRingBuffer capacity");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  return uVar5;
}

// NormalizeCapacity @ 144244d00

uint __thiscall
TRingBuffer<UE::Net::Private::FChunkedDataWriter::FDataChunk,TSizedDefaultAllocator<32>_>::
NormalizeCapacity(TRingBuffer<UE::Net::Private::FChunkedDataWriter::FDataChunk,TSizedDefaultAllocator<32>_>
                  *this,uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar5 = 1;
  if (param_1 != 0) {
    uVar5 = param_1;
  }
  uVar1 = (ulonglong)(uVar5 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar5 = (uint)(param_1 != 0) << ((byte)lVar2 & 0x1f);
  if (0x7fffffff < uVar5 || uVar5 < param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x39f,L"Integer overflow in TRingBuffer capacity");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  return uVar5;
}

// NormalizeCapacity @ 144244d80

uint __thiscall
TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>::
NormalizeCapacity(TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>
                  *this,uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar5 = 1;
  if (param_1 != 0) {
    uVar5 = param_1;
  }
  uVar1 = (ulonglong)(uVar5 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar5 = (uint)(param_1 != 0) << ((byte)lVar2 & 0x1f);
  if (0x7fffffff < uVar5 || uVar5 < param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x39f,L"Integer overflow in TRingBuffer capacity");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  return uVar5;
}

// Reallocate @ 14424a580

void __thiscall
TRingBuffer<unsigned_short,TSizedDefaultAllocator<32>_>::Reallocate
          (TRingBuffer<unsigned_short,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  undefined2 uVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ForAnyElementType local_res8;
  uint local_res10;
  
  pFVar8 = (this->AllocatorInstance).Data;
  local_res10 = this->AfterBack - this->Front;
  uVar12 = this->IndexMask + 1;
  uVar5 = NormalizeCapacity(this,param_1);
  if ((uVar5 != param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NormalizeCapacity(NewCapacity) == NewCapacity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x327,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1 < local_res10) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewCapacity >= SrcNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x328,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1 == 0) || (local_res10 == 0)) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&this->AllocatorInstance,0,param_1,2,2);
  }
  else {
    local_res8.Data = (FScriptContainerElement *)0x0;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_res8,0,param_1,2,2);
    FVar3.Data = local_res8.Data;
    uVar10 = this->IndexMask & this->Front;
    uVar5 = this->IndexMask & this->AfterBack;
    if (uVar10 < uVar5) {
      pFVar8 = pFVar8 + (ulonglong)uVar10 * 2;
      uVar11 = (ulonglong)(uVar5 - uVar10);
      uVar7 = 0;
      do {
        uVar1 = *(undefined2 *)pFVar8;
        pFVar8 = pFVar8 + 2;
        *(undefined2 *)(local_res8.Data + uVar7 * 2) = uVar1;
        uVar11 = uVar11 - 1;
        uVar7 = (ulonglong)((int)uVar7 + 1);
      } while (uVar11 != 0);
      if ((this->IndexMask + 1 < uVar5 - uVar10) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar4)) goto code_r0x00014424a789;
    }
    else {
      uVar7 = 0;
      if (uVar10 < uVar12) {
        pFVar6 = pFVar8 + (ulonglong)uVar10 * 2;
        uVar9 = (ulonglong)(uVar12 - uVar10);
        uVar11 = uVar7;
        do {
          uVar1 = *(undefined2 *)pFVar6;
          pFVar6 = pFVar6 + 2;
          uVar7 = (ulonglong)((int)uVar11 + 1);
          *(undefined2 *)(local_res8.Data + uVar11 * 2) = uVar1;
          uVar9 = uVar9 - 1;
          uVar11 = uVar7;
        } while (uVar9 != 0);
      }
      if ((this->IndexMask + 1 < uVar12 - uVar10) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        uVar11 = (ulonglong)uVar5;
        do {
          uVar1 = *(undefined2 *)pFVar8;
          pFVar8 = pFVar8 + 2;
          *(undefined2 *)(FVar3.Data + uVar7 * 2) = uVar1;
          uVar11 = uVar11 - 1;
          uVar7 = (ulonglong)((int)uVar7 + 1);
        } while (uVar11 != 0);
      }
      if ((this->IndexMask + 1 < uVar5) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar4)) {
code_r0x00014424a789:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar8 = (this->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (this->AllocatorInstance).Data = local_res8.Data;
  }
  this->Front = 0;
  this->IndexMask = param_1 - 1;
  this->AfterBack = local_res10;
  return;
}

// Reallocate @ 14424a800

void __thiscall
TRingBuffer<UE::Net::Private::FChunkedDataReader::FDataChunk,TSizedDefaultAllocator<32>_>::
Reallocate(TRingBuffer<UE::Net::Private::FChunkedDataReader::FDataChunk,TSizedDefaultAllocator<32>_>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  ushort uVar6;
  ulonglong uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ForAnyElementType local_res20;
  
  uVar13 = this->AfterBack - this->Front;
  pFVar9 = (this->AllocatorInstance).Data;
  uVar14 = this->IndexMask + 1;
  uVar5 = NormalizeCapacity(this,param_1);
  if ((uVar5 != param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NormalizeCapacity(NewCapacity) == NewCapacity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x327,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1 < uVar13) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewCapacity >= SrcNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x328,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1 == 0) || (uVar13 == 0)) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&this->AllocatorInstance,0,param_1,0x18,8);
  }
  else {
    local_res20.Data = (FScriptContainerElement *)0x0;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&local_res20,0,param_1,0x18,8);
    FVar3.Data = local_res20.Data;
    uVar8 = this->IndexMask & this->Front;
    uVar5 = this->IndexMask & this->AfterBack;
    if (uVar8 < uVar5) {
      uVar12 = (ulonglong)(uVar5 - uVar8);
      uVar7 = 0;
      pFVar9 = pFVar9 + (ulonglong)uVar8 * 0x18 + 0xc;
      do {
        *(undefined8 *)(local_res20.Data + uVar7 * 0x18) = 0;
        pFVar10 = local_res20.Data + uVar7 * 0x18;
        *(undefined8 *)pFVar10 = *(undefined8 *)(pFVar9 + -0xc);
        *(undefined8 *)(pFVar9 + -0xc) = 0;
        *(undefined4 *)(pFVar10 + 8) = *(undefined4 *)(pFVar9 + -4);
        *(undefined4 *)(pFVar10 + 0xc) = *(undefined4 *)pFVar9;
        *(undefined8 *)(pFVar9 + -4) = 0;
        *(undefined4 *)(pFVar10 + 0x10) = *(undefined4 *)(pFVar9 + 4);
        *(undefined2 *)(pFVar10 + 0x14) = *(undefined2 *)(pFVar9 + 8);
        uVar6 = (*(ushort *)(pFVar10 + 0x16) ^ *(ushort *)(pFVar9 + 10)) & 0x3fff ^
                *(ushort *)(pFVar10 + 0x16);
        *(ushort *)(pFVar10 + 0x16) = uVar6;
        uVar6 = (uVar6 ^ *(ushort *)(pFVar9 + 10)) & 0x4000 ^ uVar6;
        *(ushort *)(pFVar10 + 0x16) = uVar6;
        *(ushort *)(pFVar10 + 0x16) =
             (uVar6 ^ *(ushort *)(pFVar9 + 10)) & 0x7fff ^ *(ushort *)(pFVar9 + 10);
        uVar12 = uVar12 - 1;
        uVar7 = (ulonglong)((int)uVar7 + 1);
        pFVar9 = pFVar9 + 0x18;
      } while (uVar12 != 0);
    }
    else {
      uVar7 = 0;
      if (uVar8 < uVar14) {
        uVar11 = (ulonglong)(uVar14 - uVar8);
        pFVar10 = pFVar9 + (ulonglong)uVar8 * 0x18 + 0xc;
        uVar12 = uVar7;
        do {
          uVar7 = (ulonglong)((int)uVar12 + 1);
          *(undefined8 *)(local_res20.Data + uVar12 * 0x18) = 0;
          pFVar1 = local_res20.Data + uVar12 * 0x18;
          *(undefined8 *)pFVar1 = *(undefined8 *)(pFVar10 + -0xc);
          *(undefined8 *)(pFVar10 + -0xc) = 0;
          *(undefined4 *)(pFVar1 + 8) = *(undefined4 *)(pFVar10 + -4);
          *(undefined4 *)(pFVar1 + 0xc) = *(undefined4 *)pFVar10;
          *(undefined8 *)(pFVar10 + -4) = 0;
          *(undefined4 *)(pFVar1 + 0x10) = *(undefined4 *)(pFVar10 + 4);
          *(undefined2 *)(pFVar1 + 0x14) = *(undefined2 *)(pFVar10 + 8);
          uVar6 = (*(ushort *)(pFVar1 + 0x16) ^ *(ushort *)(pFVar10 + 10)) & 0x3fff ^
                  *(ushort *)(pFVar1 + 0x16);
          *(ushort *)(pFVar1 + 0x16) = uVar6;
          uVar6 = (uVar6 ^ *(ushort *)(pFVar10 + 10)) & 0x4000 ^ uVar6;
          *(ushort *)(pFVar1 + 0x16) = uVar6;
          *(ushort *)(pFVar1 + 0x16) =
               (uVar6 ^ *(ushort *)(pFVar10 + 10)) & 0x7fff ^ *(ushort *)(pFVar10 + 10);
          uVar11 = uVar11 - 1;
          pFVar10 = pFVar10 + 0x18;
          uVar12 = uVar7;
        } while (uVar11 != 0);
      }
      DestructRange(this,uVar8,uVar14);
      if (uVar5 != 0) {
        uVar12 = (ulonglong)uVar5;
        pFVar9 = pFVar9 + 0xc;
        do {
          pFVar10 = FVar3.Data + uVar7 * 0x18;
          *(undefined8 *)pFVar10 = 0;
          *(undefined8 *)pFVar10 = *(undefined8 *)(pFVar9 + -0xc);
          *(undefined8 *)(pFVar9 + -0xc) = 0;
          *(undefined4 *)(pFVar10 + 8) = *(undefined4 *)(pFVar9 + -4);
          *(undefined4 *)(pFVar10 + 0xc) = *(undefined4 *)pFVar9;
          *(undefined8 *)(pFVar9 + -4) = 0;
          *(undefined4 *)(pFVar10 + 0x10) = *(undefined4 *)(pFVar9 + 4);
          *(undefined2 *)(pFVar10 + 0x14) = *(undefined2 *)(pFVar9 + 8);
          uVar6 = (*(ushort *)(pFVar10 + 0x16) ^ *(ushort *)(pFVar9 + 10)) & 0x3fff ^
                  *(ushort *)(pFVar10 + 0x16);
          *(ushort *)(pFVar10 + 0x16) = uVar6;
          uVar6 = (uVar6 ^ *(ushort *)(pFVar9 + 10)) & 0x4000 ^ uVar6;
          *(ushort *)(pFVar10 + 0x16) = uVar6;
          *(ushort *)(pFVar10 + 0x16) =
               (uVar6 ^ *(ushort *)(pFVar9 + 10)) & 0x7fff ^ *(ushort *)(pFVar9 + 10);
          uVar12 = uVar12 - 1;
          pFVar9 = pFVar9 + 0x18;
          uVar7 = (ulonglong)((int)uVar7 + 1);
        } while (uVar12 != 0);
      }
      uVar8 = 0;
    }
    DestructRange(this,uVar8,uVar5);
    pFVar9 = (this->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (this->AllocatorInstance).Data = local_res20.Data;
  }
  this->Front = 0;
  this->IndexMask = param_1 - 1;
  this->AfterBack = uVar13;
  return;
}

// Reallocate @ 14424ac00

void __thiscall
TRingBuffer<UE::Net::Private::FChunkedDataWriter::FDataChunk,TSizedDefaultAllocator<32>_>::
Reallocate(TRingBuffer<UE::Net::Private::FChunkedDataWriter::FDataChunk,TSizedDefaultAllocator<32>_>
           *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  ushort uVar6;
  ulonglong uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ForAnyElementType local_res20;
  
  uVar8 = this->AfterBack - this->Front;
  pFVar9 = (this->AllocatorInstance).Data;
  uVar14 = this->IndexMask + 1;
  uVar5 = NormalizeCapacity(this,param_1);
  if ((uVar5 != param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NormalizeCapacity(NewCapacity) == NewCapacity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x327,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1 < uVar8) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewCapacity >= SrcNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x328,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1 == 0) || (uVar8 == 0)) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&this->AllocatorInstance,0,param_1,0x18,8);
  }
  else {
    local_res20.Data = (FScriptContainerElement *)0x0;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&local_res20,0,param_1,0x18,8);
    FVar3.Data = local_res20.Data;
    uVar5 = this->IndexMask & this->Front;
    uVar13 = this->IndexMask & this->AfterBack;
    if (uVar5 < uVar13) {
      uVar12 = (ulonglong)(uVar13 - uVar5);
      uVar7 = 0;
      pFVar9 = pFVar9 + (ulonglong)uVar5 * 0x18 + 0x12;
      do {
        *(undefined8 *)(local_res20.Data + uVar7 * 0x18) = 0;
        pFVar10 = local_res20.Data + uVar7 * 0x18;
        *(undefined8 *)pFVar10 = *(undefined8 *)(pFVar9 + -0x12);
        *(undefined8 *)(pFVar9 + -0x12) = 0;
        *(undefined4 *)(pFVar10 + 8) = *(undefined4 *)(pFVar9 + -10);
        *(undefined4 *)(pFVar10 + 0xc) = *(undefined4 *)(pFVar9 + -6);
        *(ushort *)(pFVar10 + 0x10) = *(ushort *)(pFVar9 + -2);
        uVar6 = (*(ushort *)(pFVar10 + 0x12) ^ *(ushort *)pFVar9) & 0x3fff ^
                *(ushort *)(pFVar10 + 0x12);
        *(ushort *)(pFVar10 + 0x12) = uVar6;
        uVar6 = (uVar6 ^ *(ushort *)pFVar9) & 0x4000 ^ uVar6;
        *(ushort *)(pFVar10 + 0x12) = uVar6;
        *(ushort *)(pFVar10 + 0x12) = (uVar6 ^ *(ushort *)pFVar9) & 0x7fff ^ *(ushort *)pFVar9;
        uVar12 = uVar12 - 1;
        uVar7 = (ulonglong)((int)uVar7 + 1);
        pFVar9 = pFVar9 + 0x18;
      } while (uVar12 != 0);
    }
    else {
      uVar7 = 0;
      if (uVar5 < uVar14) {
        uVar11 = (ulonglong)(uVar14 - uVar5);
        uVar12 = uVar7;
        pFVar10 = pFVar9 + (ulonglong)uVar5 * 0x18 + 0x12;
        do {
          uVar7 = (ulonglong)((int)uVar12 + 1);
          *(undefined8 *)(local_res20.Data + uVar12 * 0x18) = 0;
          pFVar1 = local_res20.Data + uVar12 * 0x18;
          *(undefined8 *)pFVar1 = *(undefined8 *)(pFVar10 + -0x12);
          *(undefined8 *)(pFVar10 + -0x12) = 0;
          *(undefined4 *)(pFVar1 + 8) = *(undefined4 *)(pFVar10 + -10);
          *(undefined4 *)(pFVar1 + 0xc) = *(undefined4 *)(pFVar10 + -6);
          *(ushort *)(pFVar1 + 0x10) = *(ushort *)(pFVar10 + -2);
          uVar6 = (*(ushort *)(pFVar1 + 0x12) ^ *(ushort *)pFVar10) & 0x3fff ^
                  *(ushort *)(pFVar1 + 0x12);
          *(ushort *)(pFVar1 + 0x12) = uVar6;
          uVar6 = (uVar6 ^ *(ushort *)pFVar10) & 0x4000 ^ uVar6;
          *(ushort *)(pFVar1 + 0x12) = uVar6;
          *(ushort *)(pFVar1 + 0x12) = (uVar6 ^ *(ushort *)pFVar10) & 0x7fff ^ *(ushort *)pFVar10;
          uVar11 = uVar11 - 1;
          uVar12 = uVar7;
          pFVar10 = pFVar10 + 0x18;
        } while (uVar11 != 0);
      }
      DestructRange(this,uVar5,uVar14);
      if (uVar13 != 0) {
        uVar12 = (ulonglong)uVar13;
        pFVar9 = pFVar9 + 0x12;
        do {
          pFVar10 = FVar3.Data + uVar7 * 0x18;
          *(undefined8 *)pFVar10 = 0;
          *(undefined8 *)pFVar10 = *(undefined8 *)(pFVar9 + -0x12);
          *(undefined8 *)(pFVar9 + -0x12) = 0;
          *(undefined4 *)(pFVar10 + 8) = *(undefined4 *)(pFVar9 + -10);
          *(undefined4 *)(pFVar10 + 0xc) = *(undefined4 *)(pFVar9 + -6);
          *(ushort *)(pFVar10 + 0x10) = *(ushort *)(pFVar9 + -2);
          uVar6 = (*(ushort *)(pFVar10 + 0x12) ^ *(ushort *)pFVar9) & 0x3fff ^
                  *(ushort *)(pFVar10 + 0x12);
          *(ushort *)(pFVar10 + 0x12) = uVar6;
          uVar6 = (uVar6 ^ *(ushort *)pFVar9) & 0x4000 ^ uVar6;
          *(ushort *)(pFVar10 + 0x12) = uVar6;
          *(ushort *)(pFVar10 + 0x12) = (uVar6 ^ *(ushort *)pFVar9) & 0x7fff ^ *(ushort *)pFVar9;
          uVar12 = uVar12 - 1;
          uVar7 = (ulonglong)((int)uVar7 + 1);
          pFVar9 = pFVar9 + 0x18;
        } while (uVar12 != 0);
      }
      uVar5 = 0;
    }
    DestructRange(this,uVar5,uVar13);
    pFVar9 = (this->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (this->AllocatorInstance).Data = local_res20.Data;
  }
  this->Front = 0;
  this->IndexMask = param_1 - 1;
  this->AfterBack = uVar8;
  return;
}

// Reallocate @ 14424afd0

void __thiscall
TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>::
Reallocate(TRingBuffer<UE::Net::Private::FChunkedDataReader::FRecvQueueEntry,TSizedDefaultAllocator<32>_>
           *this,uint param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ForAnyElementType local_res8;
  
  uVar13 = this->IndexMask + 1;
  uVar11 = this->AfterBack - this->Front;
  pFVar8 = (this->AllocatorInstance).Data;
  uVar4 = NormalizeCapacity(this,param_1);
  if ((uVar4 != param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NormalizeCapacity(NewCapacity) == NewCapacity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x327,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_1 < uVar11) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewCapacity >= SrcNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x328,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_1 == 0) || (uVar11 == 0)) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&this->AllocatorInstance,0,param_1,0x20,8);
  }
  else {
    local_res8.Data = (FScriptContainerElement *)0x0;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&local_res8,0,param_1,0x20,8);
    FVar2.Data = local_res8.Data;
    uVar4 = this->IndexMask & this->Front;
    uVar12 = this->IndexMask & this->AfterBack;
    if (uVar4 < uVar12) {
      uVar9 = 0;
      uVar10 = (ulonglong)(uVar12 - uVar4);
      pFVar8 = pFVar8 + (ulonglong)uVar4 * 0x20 + 0xc;
      do {
        lVar5 = uVar9 * 0x20;
        uVar9 = (ulonglong)((int)uVar9 + 1);
        pFVar7 = local_res8.Data + lVar5;
        *(undefined8 *)pFVar7 = 0;
        *(undefined8 *)pFVar7 = *(undefined8 *)(pFVar8 + -0xc);
        *(undefined8 *)(pFVar8 + -0xc) = 0;
        *(undefined4 *)(pFVar7 + 8) = *(undefined4 *)(pFVar8 + -4);
        *(undefined4 *)(pFVar7 + 0xc) = *(undefined4 *)pFVar8;
        *(undefined8 *)(pFVar8 + -4) = 0;
        *(undefined8 *)(pFVar7 + 0x10) = *(undefined8 *)(pFVar8 + 4);
        *(undefined8 *)(pFVar8 + 4) = 0;
        *(undefined4 *)(pFVar7 + 0x18) = *(undefined4 *)(pFVar8 + 0xc);
        pFVar7[0x1c] = pFVar8[0x10];
        uVar10 = uVar10 - 1;
        pFVar8 = pFVar8 + 0x20;
      } while (uVar10 != 0);
    }
    else {
      uVar9 = 0;
      if (uVar4 < uVar13) {
        uVar10 = (ulonglong)(uVar13 - uVar4);
        pFVar7 = pFVar8 + (ulonglong)uVar4 * 0x20 + 0xc;
        do {
          lVar5 = uVar9 * 0x20;
          uVar9 = (ulonglong)((int)uVar9 + 1);
          pFVar6 = local_res8.Data + lVar5;
          *(undefined8 *)pFVar6 = 0;
          *(undefined8 *)pFVar6 = *(undefined8 *)(pFVar7 + -0xc);
          *(undefined8 *)(pFVar7 + -0xc) = 0;
          *(undefined4 *)(pFVar6 + 8) = *(undefined4 *)(pFVar7 + -4);
          *(undefined4 *)(pFVar6 + 0xc) = *(undefined4 *)pFVar7;
          *(undefined8 *)(pFVar7 + -4) = 0;
          *(undefined8 *)(pFVar6 + 0x10) = *(undefined8 *)(pFVar7 + 4);
          *(undefined8 *)(pFVar7 + 4) = 0;
          *(undefined4 *)(pFVar6 + 0x18) = *(undefined4 *)(pFVar7 + 0xc);
          pFVar6[0x1c] = pFVar7[0x10];
          uVar10 = uVar10 - 1;
          pFVar7 = pFVar7 + 0x20;
        } while (uVar10 != 0);
      }
      DestructRange(this,uVar4,uVar13);
      uVar4 = 0;
      if (uVar12 != 0) {
        uVar10 = (ulonglong)uVar12;
        pFVar8 = pFVar8 + 0xc;
        do {
          lVar5 = uVar9 * 0x20;
          uVar9 = (ulonglong)((int)uVar9 + 1);
          pFVar7 = FVar2.Data + lVar5;
          *(undefined8 *)pFVar7 = 0;
          *(undefined8 *)pFVar7 = *(undefined8 *)(pFVar8 + -0xc);
          *(undefined8 *)(pFVar8 + -0xc) = 0;
          *(undefined4 *)(pFVar7 + 8) = *(undefined4 *)(pFVar8 + -4);
          *(undefined4 *)(pFVar7 + 0xc) = *(undefined4 *)pFVar8;
          *(undefined8 *)(pFVar8 + -4) = 0;
          *(undefined8 *)(pFVar7 + 0x10) = *(undefined8 *)(pFVar8 + 4);
          *(undefined8 *)(pFVar8 + 4) = 0;
          *(undefined4 *)(pFVar7 + 0x18) = *(undefined4 *)(pFVar8 + 0xc);
          pFVar7[0x1c] = pFVar8[0x10];
          uVar10 = uVar10 - 1;
          pFVar8 = pFVar8 + 0x20;
        } while (uVar10 != 0);
      }
    }
    DestructRange(this,uVar4,uVar12);
    pFVar8 = (this->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (this->AllocatorInstance).Data = local_res8.Data;
  }
  this->Front = 0;
  this->IndexMask = param_1 - 1;
  this->AfterBack = uVar11;
  return;
}

// ~TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_> @ 144268c60

void __thiscall
TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>::
~TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>
          (TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->IndexMask + 1 < this->AfterBack - this->Front) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x37f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->Front = 0;
  this->AfterBack = 0;
  Reallocate(this,0);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// NormalizeCapacity @ 144284650

uint __thiscall
TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>::NormalizeCapacity
          (TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar5 = 1;
  if (param_1 != 0) {
    uVar5 = param_1;
  }
  uVar1 = (ulonglong)(uVar5 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar5 = (uint)(param_1 != 0) << ((byte)lVar2 & 0x1f);
  if (0x7fffffff < uVar5 || uVar5 < param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x39f,L"Integer overflow in TRingBuffer capacity");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  return uVar5;
}

// Reallocate @ 14428a9b0

void __thiscall
TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>::Reallocate
          (TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ForAnyElementType local_res8;
  uint local_res10;
  
  pFVar8 = (this->AllocatorInstance).Data;
  local_res10 = this->AfterBack - this->Front;
  uVar12 = this->IndexMask + 1;
  uVar5 = NormalizeCapacity(this,param_1);
  if ((uVar5 != param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NormalizeCapacity(NewCapacity) == NewCapacity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x327,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1 < local_res10) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewCapacity >= SrcNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x328,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1 == 0) || (local_res10 == 0)) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&this->AllocatorInstance,0,param_1,4,4);
  }
  else {
    local_res8.Data = (FScriptContainerElement *)0x0;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_res8,0,param_1,4,4);
    FVar3.Data = local_res8.Data;
    uVar10 = this->IndexMask & this->Front;
    uVar5 = this->IndexMask & this->AfterBack;
    if (uVar10 < uVar5) {
      pFVar8 = pFVar8 + (ulonglong)uVar10 * 4;
      uVar11 = (ulonglong)(uVar5 - uVar10);
      uVar7 = 0;
      do {
        uVar1 = *(undefined4 *)pFVar8;
        pFVar8 = pFVar8 + 4;
        *(undefined4 *)(local_res8.Data + uVar7 * 4) = uVar1;
        uVar11 = uVar11 - 1;
        uVar7 = (ulonglong)((int)uVar7 + 1);
      } while (uVar11 != 0);
      if ((this->IndexMask + 1 < uVar5 - uVar10) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar4)) goto code_r0x00014428abb6;
    }
    else {
      uVar7 = 0;
      if (uVar10 < uVar12) {
        pFVar6 = pFVar8 + (ulonglong)uVar10 * 4;
        uVar9 = (ulonglong)(uVar12 - uVar10);
        uVar11 = uVar7;
        do {
          uVar1 = *(undefined4 *)pFVar6;
          pFVar6 = pFVar6 + 4;
          uVar7 = (ulonglong)((int)uVar11 + 1);
          *(undefined4 *)(local_res8.Data + uVar11 * 4) = uVar1;
          uVar9 = uVar9 - 1;
          uVar11 = uVar7;
        } while (uVar9 != 0);
      }
      if ((this->IndexMask + 1 < uVar12 - uVar10) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        uVar11 = (ulonglong)uVar5;
        do {
          uVar1 = *(undefined4 *)pFVar8;
          pFVar8 = pFVar8 + 4;
          *(undefined4 *)(FVar3.Data + uVar7 * 4) = uVar1;
          uVar11 = uVar11 - 1;
          uVar7 = (ulonglong)((int)uVar7 + 1);
        } while (uVar11 != 0);
      }
      if ((this->IndexMask + 1 < uVar5) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar4)) {
code_r0x00014428abb6:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar8 = (this->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (this->AllocatorInstance).Data = local_res8.Data;
  }
  this->Front = 0;
  this->IndexMask = param_1 - 1;
  this->AfterBack = local_res10;
  return;
}

