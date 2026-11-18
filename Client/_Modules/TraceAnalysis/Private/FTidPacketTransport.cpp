// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 12

// FTidPacketTransport @ 14d38fd70

FTidPacketTransport * __thiscall
UE::Trace::FTidPacketTransport::FTidPacketTransport(FTidPacketTransport *this)

{
  TArray<UE::Trace::FTidPacketTransport::FThreadStream,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 *puVar4;
  FThreadStream local_58;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  
  pTVar1 = &this->Threads;
  local_58.Buffer._padding_ = 0;
  local_58.Buffer.BufferSize = 0;
  local_58.Buffer._28_4_ = 0;
  lVar3 = 2;
  local_58.Buffer._padding_ = 0;
  local_58.Buffer._padding_ = 0;
  local_58.ThreadId = 0;
  this->_padding_ = (longlong)&___7FTidPacketTransport_Trace_UE__6B_;
  this->_padding_ = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  this->Synced = 0x7fffffff;
  this->NumPackets = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  local_10 = 1;
  (this->Threads).ArrayNum = 2;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x28,8,2,0,&pTVar1->AllocatorInstance,2,&(this->Threads).ArrayMax);
  ConstructItems<UE::Trace::FTidPacketTransport::FThreadStream,UE::Trace::FTidPacketTransport::FThreadStream,int>
            ((pTVar1->AllocatorInstance).Data,&local_58,2);
  puVar4 = &stack0xfffffffffffffff8;
  do {
    puVar2 = (undefined8 *)(puVar4 + -0x28);
    puVar4 = puVar4 + -0x28;
    FMemory::Free((void *)*puVar2);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return this;
}

// ~FTidPacketTransport @ 14d392850

void __thiscall UE::Trace::FTidPacketTransport::~FTidPacketTransport(FTidPacketTransport *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FTidPacketTransport_Trace_UE__6B_;
  DestructItems<UE::Trace::FTidPacketTransport::FThreadStream,int>
            ((FThreadStream *)(this->Threads).AllocatorInstance.Data,(this->Threads).ArrayNum);
  pFVar1 = (this->Threads).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTransport_Trace_UE__6B_;
  return;
}

// DebugBegin @ 14d39a290

void __thiscall UE::Trace::FTidPacketTransport::DebugBegin(FTidPacketTransport *this)

{
  return;
}

// DebugEnd @ 14d39a2c0

void __thiscall UE::Trace::FTidPacketTransport::DebugEnd(FTidPacketTransport *this)

{
  return;
}

// DebugUpdate @ 14d39a2e0

void __thiscall UE::Trace::FTidPacketTransport::DebugUpdate(FTidPacketTransport *this)

{
  return;
}

// FindOrAddThread @ 14d39c160

FThreadStream * __thiscall
UE::Trace::FTidPacketTransport::FindOrAddThread(FTidPacketTransport *this,uint param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FThreadStream *pFVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  void *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined4 uStack_34;
  
  uVar10 = (this->Threads).ArrayNum;
  uVar9 = 0;
  if (uVar10 != 0) {
    do {
      uVar5 = 0;
      if ((int)uVar9 < (this->Threads).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FThreadStream *)(*pcVar3)();
        return pFVar7;
      }
      if (*(uint *)((this->Threads).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x28 + 0x20) ==
          param_1) {
        uVar10 = 0;
        if ((int)uVar9 < (this->Threads).ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FThreadStream *)(*pcVar3)();
          return pFVar7;
        }
        return (FThreadStream *)
               ((this->Threads).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x28);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar10);
  }
  if (param_2) {
    pFVar2 = (this->Threads).AllocatorInstance.Data;
    local_58 = (void *)0x0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = param_1;
    if (((pFVar2 <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 < pFVar2 + (longlong)(this->Threads).ArrayMax * 0x28))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FThreadStream *)(*pcVar3)();
      return pFVar7;
    }
    iVar6 = (this->Threads).ArrayNum;
    piVar1 = &(this->Threads).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&(this->Threads).AllocatorInstance,piVar1);
      (this->Threads).ArrayNum = iVar6;
    }
    lVar8 = (longlong)iVar6;
    (this->Threads).ArrayNum = iVar6 + 1;
    pFVar2 = (this->Threads).AllocatorInstance.Data;
    *(void **)(pFVar2 + lVar8 * 0x28) = local_58;
    *(undefined8 *)(pFVar2 + lVar8 * 0x28 + 8) = uStack_50;
    *(ulonglong *)(pFVar2 + lVar8 * 0x28 + 0x10) = CONCAT44(uStack_44,local_48);
    *(ulonglong *)(pFVar2 + lVar8 * 0x28 + 0x10 + 8) = CONCAT44(uStack_3c,uStack_40);
    *(ulonglong *)(pFVar2 + lVar8 * 0x28 + 0x20) = CONCAT44(uStack_34,local_38);
    uVar9 = 0;
    if ((int)uVar10 < (this->Threads).ArrayNum) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FThreadStream *)(*pcVar3)();
      return pFVar7;
    }
    pFVar7 = (FThreadStream *)
             ((this->Threads).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x28);
    FMemory::Free(local_58);
  }
  else {
    pFVar7 = (FThreadStream *)0x0;
  }
  return pFVar7;
}

// GetThreadCount @ 14d39f510

uint __thiscall UE::Trace::FTidPacketTransport::GetThreadCount(FTidPacketTransport *this)

{
  return (this->Threads).ArrayNum;
}

// GetThreadId @ 14d39f520

uint __thiscall UE::Trace::FTidPacketTransport::GetThreadId(FTidPacketTransport *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((int)param_1 < (this->Threads).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(uint *)((this->Threads).AllocatorInstance.Data + (longlong)(int)param_1 * 0x28 + 0x20);
}

// GetThreadStream @ 14d39f5a0

FStreamReader * __thiscall
UE::Trace::FTidPacketTransport::GetThreadStream(FTidPacketTransport *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FStreamReader *pFVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->Threads).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FStreamReader *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FStreamReader *)((this->Threads).AllocatorInstance.Data + (longlong)(int)param_1 * 0x28);
}

// IsEmpty @ 14d3a0640

bool __thiscall UE::Trace::FTidPacketTransport::IsEmpty(FTidPacketTransport *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Threads).ArrayNum;
  if (iVar2 < 1) {
LAB_14d3a0696:
    bVar3 = true;
  }
  else {
    pFVar4 = (this->Threads).AllocatorInstance.Data;
    pFVar1 = pFVar4 + (longlong)iVar2 * 0x28;
    while( true ) {
      if ((this->Threads).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::Trace::FTidPacketTransport::FThreadStream_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar1) goto LAB_14d3a0696;
      if (*(uint *)(pFVar4 + 0xc) < *(uint *)(pFVar4 + 0x10)) break;
      pFVar4 = pFVar4 + 0x28;
    }
    bVar3 = false;
  }
  return bVar3;
}

// ReadPacket @ 14d3a6020

/* WARNING: Enum "Type": Some values do not have unique names */

EReadPacketResult __thiscall UE::Trace::FTidPacketTransport::ReadPacket(FTidPacketTransport *this)

{
  int *piVar1;
  ushort *puVar2;
  longlong lVar3;
  FThreadStream *this_00;
  uchar *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  puVar2 = (ushort *)(**(code **)(this->_padding_ + 0x28))(this,4);
  if (puVar2 == (ushort *)0x0) {
    return NeedMoreData;
  }
  lVar3 = (**(code **)(this->_padding_ + 0x28))(this,*puVar2);
  if (lVar3 != 0) {
    piVar1 = (int *)(this->_padding_ + 0xc);
    *piVar1 = *piVar1 + (uint)*puVar2;
    uVar7 = puVar2[1] & 0x3fff;
    if (uVar7 == 0x3fff) {
      this->Synced = this->Synced + 1;
      return NeedMoreData;
    }
    this_00 = FindOrAddThread(this,uVar7,(bool)(~(byte)(puVar2[1] >> 0xe) & 1));
    if (this_00 != (FThreadStream *)0x0) {
      uVar7 = *puVar2 - 4;
      if ((short)puVar2[1] < 0) {
        iVar6 = *puVar2 - 6;
        if (iVar6 == 0) {
          if (2 < (byte)LogCore._0_1_) {
            Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
            return Continue;
          }
        }
        else {
          uVar5 = (uint)puVar2[2];
          puVar4 = FStreamBuffer::Append(&this_00->Buffer,uVar5);
          uVar7 = Trace::Private::Decode(puVar2 + 3,iVar6,puVar4,uVar5);
          if (uVar5 != uVar7) {
            if (1 < (byte)LogCore._0_1_) {
              Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
            }
            return ReadError;
          }
        }
      }
      else {
        puVar4 = FStreamBuffer::Append(&this_00->Buffer,uVar7);
        memcpy(puVar4,puVar2 + 2,(ulonglong)uVar7);
      }
    }
    return Continue;
  }
  return NeedMoreData;
}

// Update @ 14d3a89d0

ETransportResult __thiscall UE::Trace::FTidPacketTransport::Update(FTidPacketTransport *this)

{
  FScriptContainerElement *pFVar1;
  EReadPacketResult EVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  bool bVar11;
  
  do {
    EVar2 = ReadPacket(this);
  } while (EVar2 == Continue);
  iVar10 = (this->Threads).ArrayNum;
  lVar4 = (longlong)iVar10;
  if (iVar10 != 0) {
    pFVar1 = (this->Threads).AllocatorInstance.Data;
    iVar10 = 0;
    if (*(uint *)(pFVar1 + 0x20) < 2) {
      bVar9 = true;
    }
    else {
      bVar9 = *(uint *)(pFVar1 + 0xc) < *(uint *)(pFVar1 + 0x10);
    }
    lVar5 = 0;
    iVar7 = 0;
    do {
      lVar5 = lVar5 + 1;
      iVar8 = iVar7 + 1;
      if (lVar5 < lVar4) {
        pFVar3 = pFVar1 + (lVar5 * 5 + 2) * 8;
        do {
          if (*(uint *)(pFVar3 + 0x10) < 2) {
            bVar11 = true;
          }
          else {
            bVar11 = *(uint *)(pFVar3 + -4) < *(uint *)pFVar3;
          }
          if (bVar9 != bVar11) break;
          iVar8 = iVar8 + 1;
          lVar5 = lVar5 + 1;
          pFVar3 = pFVar3 + 0x28;
        } while (lVar5 < lVar4);
      }
      iVar6 = iVar8 - iVar7;
      if (bVar9 == false) {
        DestructItems<UE::Trace::FTidPacketTransport::FThreadStream,int>
                  ((FThreadStream *)(pFVar1 + (longlong)iVar7 * 0x28),iVar6);
      }
      else {
        if (iVar10 != iVar7) {
          memmove(pFVar1 + (longlong)iVar10 * 0x28,pFVar1 + (longlong)iVar7 * 0x28,
                  (longlong)iVar6 * 0x28);
        }
        iVar10 = iVar10 + iVar6;
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar7 = iVar8;
    } while (lVar5 < lVar4);
    (this->Threads).ArrayNum = iVar10;
  }
  return EVar2 == ReadError;
}

