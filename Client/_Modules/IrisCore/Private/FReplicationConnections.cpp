// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 9

// GetConnection @ 14423bb60

FReplicationConnection * __thiscall
UE::Net::Private::FReplicationConnections::GetConnection(FReplicationConnections *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FReplicationConnection *pFVar5;
  
  pFVar1 = (this->ValidConnections).Storage.AllocatorInstance.Data;
  if ((this->ValidConnections).BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FReplicationConnection *)(*pcVar2)();
      return pFVar5;
    }
  }
  if ((*(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) != 0) {
    uVar4 = 0;
    if ((int)param_1 < (this->Connections).ArrayNum) {
      uVar4 = ~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FReplicationConnection *)(*pcVar2)();
        return pFVar5;
      }
    }
    return (FReplicationConnection *)
           ((this->Connections).AllocatorInstance.Data + (longlong)(int)param_1 * 0x28);
  }
  return (FReplicationConnection *)0x0;
}

// GetReplicationView @ 14423ef50

FReplicationView * __thiscall
UE::Net::Private::FReplicationConnections::GetReplicationView
          (FReplicationConnections *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FReplicationView *pFVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->ReplicationViews).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FReplicationView *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FReplicationView *)
         ((this->ReplicationViews).AllocatorInstance.Data + (longlong)(int)param_1 * 0x130);
}

// Deinit @ 1442bacc0

void __thiscall UE::Net::Private::FReplicationConnections::Deinit(FReplicationConnections *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  uVar1 = (this->ValidConnections).Storage.ArrayNum;
  pFVar7 = (this->ValidConnections).Storage.AllocatorInstance.Data;
  uVar6 = 0;
  uVar2 = (this->ValidConnections).BitCount;
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      uVar3 = 0xffffffff;
      if (uVar4 == uVar1 - 1) {
        uVar3 = 0xffffffff >> (-(char)uVar2 & 0x1fU);
      }
      uVar5 = uVar6;
      for (uVar3 = uVar3 & *(uint *)pFVar7; uVar3 != 0; uVar3 = uVar3 >> 1) {
        if ((uVar3 & 1) != 0) {
          RemoveConnection(this,uVar5);
        }
        uVar5 = uVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      pFVar7 = pFVar7 + 4;
      uVar6 = uVar6 + 0x20;
    } while (uVar4 < uVar1);
  }
  return;
}

// DeinitDataStreamManager @ 1442bb590

void __thiscall
UE::Net::Private::FReplicationConnections::DeinitDataStreamManager
          (FReplicationConnections *this,uint param_1)

{
  FReplicationReader *this_00;
  FReplicationWriter *this_01;
  FReplicationConnection *pFVar1;
  UObject *pUVar2;
  
  pFVar1 = GetConnection(this,param_1);
  if (pFVar1 != (FReplicationConnection *)0x0) {
    pUVar2 = FWeakObjectPtr::Get(&(pFVar1->DataStreamManager).WeakPtr);
    if (pUVar2 != (UObject *)0x0) {
      (**(code **)(*(longlong *)pUVar2 + 0x2b8))(pUVar2);
    }
    FReplicationReader::Deinit(pFVar1->ReplicationReader);
    FReplicationWriter::Deinit(pFVar1->ReplicationWriter);
    this_00 = pFVar1->ReplicationReader;
    if (this_00 != (FReplicationReader *)0x0) {
      FReplicationReader::~FReplicationReader(this_00);
      ::operator_delete(this_00,0x4e0);
    }
    this_01 = pFVar1->ReplicationWriter;
    pFVar1->ReplicationReader = (FReplicationReader *)0x0;
    if (this_01 != (FReplicationWriter *)0x0) {
      FReplicationWriter::~FReplicationWriter(this_01);
      ::operator_delete(this_01,0x428);
    }
    pFVar1->ReplicationWriter = (FReplicationWriter *)0x0;
  }
  return;
}

// GetConnection @ 1442c2540

FReplicationConnection * __thiscall
UE::Net::Private::FReplicationConnections::GetConnection(FReplicationConnections *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FReplicationConnection *pFVar5;
  
  pFVar1 = (this->ValidConnections).Storage.AllocatorInstance.Data;
  if ((this->ValidConnections).BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FReplicationConnection *)(*pcVar2)();
      return pFVar5;
    }
  }
  if ((*(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) != 0) {
    uVar4 = 0;
    if ((int)param_1 < (this->Connections).ArrayNum) {
      uVar4 = ~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FReplicationConnection *)(*pcVar2)();
        return pFVar5;
      }
    }
    return (FReplicationConnection *)
           ((this->Connections).AllocatorInstance.Data + (longlong)(int)param_1 * 0x28);
  }
  return (FReplicationConnection *)0x0;
}

// GetOpenConnections @ 1442c2bb0

FNetBitArray * __thiscall
UE::Net::Private::FReplicationConnections::GetOpenConnections
          (FReplicationConnections *this,FNetBitArray *__return_storage_ptr__)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FNetBitArray *pFVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar8 = 0;
  uVar9 = (this->ValidConnections).BitCount;
  (__return_storage_ptr__->Storage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Storage).ArrayNum = 0;
  (__return_storage_ptr__->Storage).ArrayMax = 0;
  __return_storage_ptr__->BitCount = uVar9;
  FNetBitArray::Init(__return_storage_ptr__,uVar9);
  if (0 < (this->Connections).ArrayNum) {
    uVar9 = 1;
    uVar10 = uVar8;
    do {
      pFVar2 = (this->ValidConnections).Storage.AllocatorInstance.Data;
      uVar7 = (uint)uVar8;
      if (((this->ValidConnections).BitCount <= uVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2c1,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FNetBitArray *)(*pcVar3)();
        return pFVar6;
      }
      lVar1 = (uVar8 >> 5) * 4;
      if ((*(uint *)(pFVar2 + (uVar8 >> 5) * 4) & uVar9) != 0) {
        uVar5 = 0;
        if ((int)uVar7 < (this->Connections).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FNetBitArray *)(*pcVar3)();
          return pFVar6;
        }
        if ((this->Connections).AllocatorInstance.Data[uVar10 + 0x20] ==
            (FScriptContainerElement)0x0) {
          pFVar2 = (__return_storage_ptr__->Storage).AllocatorInstance.Data;
          if ((__return_storage_ptr__->BitCount <= uVar7) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < BitCount",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                 ,0x2a2,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FNetBitArray *)(*pcVar3)();
            return pFVar6;
          }
          *(uint *)(pFVar2 + lVar1) = *(uint *)(pFVar2 + lVar1) | 1 << (uVar7 & 0x1f);
        }
      }
      uVar8 = (ulonglong)(uVar7 + 1);
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      uVar10 = uVar10 + 0x28;
    } while ((int)(uVar7 + 1) < (this->Connections).ArrayNum);
  }
  return __return_storage_ptr__;
}

// InitDataStreamManager @ 1442c4e60

void __thiscall
UE::Net::Private::FReplicationConnections::InitDataStreamManager
          (FReplicationConnections *this,uint param_1,uint param_2,UDataStreamManager *param_3)

{
  FReplicationConnection *pFVar1;
  UDataStreamManager *local_38;
  undefined8 local_30;
  undefined8 local_28;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  undefined8 local_10;
  
  pFVar1 = GetConnection(this,param_2);
  if (pFVar1 != (FReplicationConnection *)0x0) {
    local_30 = 0;
    local_28 = 0;
    local_10 = 0;
    local_18 = 0x100;
    local_20 = param_1;
    local_1c = param_2;
    (**(code **)(param_3->_padding_ + 0x2b0))(param_3,&local_30);
    local_38 = param_3;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_3);
    }
    FWeakObjectPtr::operator=(&(pFVar1->DataStreamManager).WeakPtr,(FObjectPtr)&local_38);
  }
  return;
}

// RemoveConnection @ 1442de720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001442de996) */

void __thiscall
UE::Net::Private::FReplicationConnections::RemoveConnection
          (FReplicationConnections *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FReplicationReader *this_00;
  FReplicationWriter *this_01;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FReplicationConnection *pFVar6;
  UObject *pUVar7;
  longlong lVar8;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined1 local_188;
  undefined4 local_187;
  undefined2 local_183;
  undefined1 local_181;
  longlong local_180;
  FReplicationView local_178;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  pFVar2 = (this->ValidConnections).Storage.AllocatorInstance.Data;
  lVar8 = (longlong)(int)param_1;
  if (((this->ValidConnections).BitCount <= param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_180 = (ulonglong)(param_1 >> 5) * 4;
  if (((*(uint *)(pFVar2 + local_180) >> (param_1 & 0x1f) & 1) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValidConnections.GetBit(ConnectionId)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationConnections.cpp"
                         ,0x2d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  memset(&local_178,0,0x120);
  iVar1 = (this->ReplicationViews).ArrayNum;
  local_178.Views.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FReplicationView::FView>)0x0;
  local_178.Views.ArrayNum = 0;
  local_178.Views.ArrayMax = 4;
  uVar5 = 0;
  if ((int)param_1 < iVar1) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (local_1b8 = lVar8, local_1b0 = (longlong)iVar1,
     bVar4 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar4
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FReplicationView::operator=
            ((FReplicationView *)((this->ReplicationViews).AllocatorInstance.Data + lVar8 * 0x130),
             &local_178);
  if (local_178.Views.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
    FMemory::Free((void *)local_178.Views.AllocatorInstance.SecondaryData);
  }
  pFVar6 = GetConnection(this,param_1);
  if (pFVar6 != (FReplicationConnection *)0x0) {
    pUVar7 = FWeakObjectPtr::Get(&(pFVar6->DataStreamManager).WeakPtr);
    if (pUVar7 != (UObject *)0x0) {
      (**(code **)(*(longlong *)pUVar7 + 0x2b8))(pUVar7);
    }
    FReplicationReader::Deinit(pFVar6->ReplicationReader);
    FReplicationWriter::Deinit(pFVar6->ReplicationWriter);
    this_00 = pFVar6->ReplicationReader;
    if (this_00 != (FReplicationReader *)0x0) {
      FReplicationReader::~FReplicationReader(this_00);
      ::operator_delete(this_00,0x4e0);
    }
    this_01 = pFVar6->ReplicationWriter;
    pFVar6->ReplicationReader = (FReplicationReader *)0x0;
    if (this_01 != (FReplicationWriter *)0x0) {
      FReplicationWriter::~FReplicationWriter(this_01);
      ::operator_delete(this_01,0x428);
    }
    pFVar6->ReplicationWriter = (FReplicationWriter *)0x0;
  }
  iVar1 = (this->Connections).ArrayNum;
  local_187 = 0;
  local_183 = 0;
  uVar5 = 0;
  if ((int)param_1 < iVar1) {
    uVar5 = ~param_1 >> 0x1f;
  }
  local_181 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  if ((uVar5 == 0) &&
     (local_1b8 = lVar8, local_1b0 = (longlong)iVar1,
     bVar4 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar4
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->Connections).AllocatorInstance.Data + lVar8 * 0x28;
  *(undefined8 *)pFVar2 = local_1a8;
  *(undefined8 *)(pFVar2 + 8) = uStack_1a0;
  *(undefined8 *)(pFVar2 + 0x10) = local_198;
  *(undefined8 *)(pFVar2 + 0x18) = 0;
  pFVar2[0x20] = (FScriptContainerElement)0x0;
  pFVar2 = (this->ValidConnections).Storage.AllocatorInstance.Data;
  if (((this->ValidConnections).BitCount <= param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2b7,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(uint *)(pFVar2 + local_180) = *(uint *)(pFVar2 + local_180) & ~(1 << (param_1 & 0x1f));
  return;
}

// SetReplicationView @ 1442e50d0

void __thiscall
UE::Net::Private::FReplicationConnections::SetReplicationView
          (FReplicationConnections *this,uint param_1,FReplicationView *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((int)param_1 < (this->ReplicationViews).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FReplicationView::operator=
            ((FReplicationView *)
             ((this->ReplicationViews).AllocatorInstance.Data + (longlong)(int)param_1 * 0x130),
             param_2);
  return;
}

