// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 16

// FDeltaCompressionBaselineStorage @ 144228d50

FDeltaCompressionBaselineStorage * __thiscall
UE::Net::Private::FDeltaCompressionBaselineStorage::FDeltaCompressionBaselineStorage
          (FDeltaCompressionBaselineStorage *this)

{
  (this->UsedBaselineStateInfos).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedBaselineStateInfos).Storage.ArrayNum = 0;
  (this->UsedBaselineStateInfos).Storage.ArrayMax = 0;
  (this->UsedBaselineStateInfos).BitCount = 0;
  (this->BaselineStateInfos).Chunks.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->BaselineStateInfos).Chunks.Array.ArrayMax = 0;
  (this->BaselineStateInfos).Chunks.Array.ArrayNum = 0;
  this->ReplicationStateStorage = (FReplicationStateStorage *)0x0;
  return this;
}

// ~FDeltaCompressionBaselineStorage @ 14422af60

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineStorage::~FDeltaCompressionBaselineStorage
          (FDeltaCompressionBaselineStorage *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  
  uVar1 = (this->UsedBaselineStateInfos).Storage.ArrayNum;
  uVar5 = 0;
  pFVar4 = (this->UsedBaselineStateInfos).Storage.AllocatorInstance.Data;
  if (uVar1 != 0) {
    do {
      if (*(int *)pFVar4 != 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("UsedBaselineStateInfos.IsAnyBitSet() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineStorage.cpp"
                           ,0x19,L"Leak in FDeltaCompressionBaselineStorage");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      pFVar4 = pFVar4 + 4;
    } while (uVar5 < uVar1);
  }
  TIndirectArray<TChunkedArray<UE::Net::Private::FDeltaCompressionBaselineStorage::FInternalBaselineStateInfo,4096,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::
  ~TIndirectArray<TChunkedArray<UE::Net::Private::FDeltaCompressionBaselineStorage::FInternalBaselineStateInfo,4096,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
            (&(this->BaselineStateInfos).Chunks);
  pFVar4 = (this->UsedBaselineStateInfos).Storage.AllocatorInstance.Data;
  if (pFVar4 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar4);
  return;
}

// AddRefBaseline @ 14422eda0

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineStorage::AddRefBaseline
          (FDeltaCompressionBaselineStorage *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FInternalBaselineStateInfo *pFVar4;
  
  pFVar1 = (this->UsedBaselineStateInfos).Storage.AllocatorInstance.Data;
  if ((this->UsedBaselineStateInfos).BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((*(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UsedBaselineStateInfos.GetBit(StateInfoIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineStorage.cpp"
                       ,0x49,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar4 = TChunkedArray<UE::Net::Private::FDeltaCompressionBaselineStorage::FInternalBaselineStateInfo,4096,TSizedDefaultAllocator<32>_>
           ::operator[](&this->BaselineStateInfos,param_1);
  pFVar4->RefCount = pFVar4->RefCount + 1;
  return;
}

// AllocBaselineStateInfo @ 14422f6d0

uint __thiscall
UE::Net::Private::FDeltaCompressionBaselineStorage::AllocBaselineStateInfo
          (FDeltaCompressionBaselineStorage *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  FInternalBaselineStateInfo *pFVar8;
  uint uVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  void *pvVar12;
  ulonglong uVar13;
  void *pvVar14;
  void *local_28 [2];
  
  uVar9 = (this->UsedBaselineStateInfos).Storage.ArrayNum;
  pvVar14 = (void *)0x0;
  pFVar11 = (this->UsedBaselineStateInfos).Storage.AllocatorInstance.Data;
  pvVar6 = pvVar14;
  pvVar12 = pvVar14;
  if (uVar9 != 0) {
    do {
      if (*(uint *)pFVar11 != 0xffffffff) {
        uVar9 = ~*(uint *)pFVar11;
        iVar5 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
          }
        }
        iVar4 = 0x20;
        if (uVar9 != 0) {
          iVar4 = iVar5;
        }
        uVar3 = iVar4 + (int)pvVar12;
        uVar9 = 0xffffffff;
        if (uVar3 < (this->UsedBaselineStateInfos).BitCount) {
          uVar9 = uVar3;
        }
        if (uVar9 == 0xffffffff) {
          return 0;
        }
        uVar3 = (this->BaselineStateInfos).NumElements;
        if (uVar3 <= uVar9) {
          (this->BaselineStateInfos).NumElements = uVar3 + 0x100;
          iVar5 = (this->BaselineStateInfos).Chunks.Array.ArrayNum;
          iVar4 = (int)(uVar3 + 0x1ff + ((int)(uVar3 + 0x1ff) >> 0x1f & 0xffU)) >> 8;
          if (iVar5 < iVar4) {
            uVar13 = (ulonglong)(uint)(iVar4 - iVar5);
            do {
              pvVar6 = ::operator_new(0x1000);
              local_28[0] = pvVar14;
              if (pvVar6 != (void *)0x0) {
                lVar10 = 0x100;
                puVar7 = (undefined4 *)((longlong)pvVar6 + 0xc);
                do {
                  *(undefined8 *)(puVar7 + -3) = 0;
                  puVar7[-1] = 0;
                  *puVar7 = 1;
                  puVar7 = puVar7 + 4;
                  lVar10 = lVar10 + -1;
                  local_28[0] = pvVar6;
                } while (lVar10 != 0);
              }
              pFVar11 = (this->BaselineStateInfos).Chunks.Array.AllocatorInstance.Data;
              if (((pFVar11 <= (FScriptContainerElement *)local_28) &&
                  ((FScriptContainerElement *)local_28 <
                   pFVar11 + (longlong)(this->BaselineStateInfos).Chunks.Array.ArrayMax * 8)) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar9 = (*pcVar1)();
                return uVar9;
              }
              iVar5 = (this->BaselineStateInfos).Chunks.Array.ArrayNum;
              if (iVar5 == (this->BaselineStateInfos).Chunks.Array.ArrayMax) {
                iVar5 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,(ForAnyElementType *)&this->BaselineStateInfos,
                                   &(this->BaselineStateInfos).Chunks.Array.ArrayMax);
              }
              pFVar11 = (this->BaselineStateInfos).Chunks.Array.AllocatorInstance.Data;
              (this->BaselineStateInfos).Chunks.Array.ArrayNum = iVar5 + 1;
              *(void **)(pFVar11 + (longlong)iVar5 * 8) = local_28[0];
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          if (((uint)(this->BaselineStateInfos).NumElements <= uVar9) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("StateInfoIndex < uint32(BaselineStateInfos.Num())",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineStorage.cpp"
                                 ,0xbd,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar9 = (*pcVar1)();
            return uVar9;
          }
        }
        pFVar8 = TChunkedArray<UE::Net::Private::FDeltaCompressionBaselineStorage::FInternalBaselineStateInfo,4096,TSizedDefaultAllocator<32>_>
                 ::operator[](&this->BaselineStateInfos,uVar9);
        pFVar8->StateBuffer = (uchar *)0x0;
        pFVar8->ObjectIndex = 0;
        pFVar8->RefCount = 1;
        pFVar11 = (this->UsedBaselineStateInfos).Storage.AllocatorInstance.Data;
        if (((this->UsedBaselineStateInfos).BitCount <= uVar9) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < BitCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x2a2,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar9 = (*pcVar1)();
          return uVar9;
        }
        pFVar11 = pFVar11 + (ulonglong)(uVar9 >> 5) * 4;
        *(uint *)pFVar11 = *(uint *)pFVar11 | 1 << (uVar9 & 0x1f);
        return uVar9;
      }
      uVar3 = (int)pvVar6 + 1;
      pvVar6 = (void *)(ulonglong)uVar3;
      pFVar11 = pFVar11 + 4;
      pvVar12 = (void *)(ulonglong)((int)pvVar12 + 0x20);
    } while (uVar3 < uVar9);
  }
  return 0;
}

// ConstructBaselineStateInfo @ 144233e80

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineStorage::ConstructBaselineStateInfo
          (FDeltaCompressionBaselineStorage *this,FInternalBaselineStateInfo *param_1)

{
  param_1->StateBuffer = (uchar *)0x0;
  param_1->ObjectIndex = 0;
  param_1->RefCount = 1;
  return;
}

// CreateBaselineFromCurrentState @ 1442346f0

FDeltaCompressionBaselineStateInfo * __thiscall
UE::Net::Private::FDeltaCompressionBaselineStorage::CreateBaselineFromCurrentState
          (FDeltaCompressionBaselineStorage *this,
          FDeltaCompressionBaselineStateInfo *__return_storage_ptr__,uint param_1)

{
  uint uVar1;
  uchar *puVar2;
  FInternalBaselineStateInfo *pFVar3;
  
  __return_storage_ptr__->StateBuffer = (uchar *)0x0;
  __return_storage_ptr__->StateInfoIndex = 0;
  uVar1 = AllocBaselineStateInfo(this);
  if (uVar1 != 0) {
    puVar2 = FReplicationStateStorage::AllocBaseline
                       (this->ReplicationStateStorage,param_1,CurrentSendState);
    if (puVar2 == (uchar *)0x0) {
      FreeBaselineStateInfo(this,uVar1);
    }
    else {
      pFVar3 = TChunkedArray<UE::Net::Private::FDeltaCompressionBaselineStorage::FInternalBaselineStateInfo,4096,TSizedDefaultAllocator<32>_>
               ::operator[](&this->BaselineStateInfos,uVar1);
      __return_storage_ptr__->StateBuffer = puVar2;
      __return_storage_ptr__->StateInfoIndex = uVar1;
      pFVar3->StateBuffer = puVar2;
      pFVar3->ObjectIndex = param_1;
    }
  }
  return __return_storage_ptr__;
}

// Deinit @ 144235b10

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineStorage::Deinit(FDeltaCompressionBaselineStorage *this)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FInternalBaselineStateInfo *pFVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  
  pFVar10 = (this->UsedBaselineStateInfos).Storage.AllocatorInstance.Data;
  if (((this->UsedBaselineStateInfos).BitCount == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2b7,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(uint *)pFVar10 = *(uint *)pFVar10 & 0xfffffffe;
  iVar9 = 0;
  uVar1 = (this->UsedBaselineStateInfos).Storage.ArrayNum;
  uVar2 = (this->UsedBaselineStateInfos).BitCount;
  uVar7 = 0;
  pFVar10 = (this->UsedBaselineStateInfos).Storage.AllocatorInstance.Data;
  if (uVar1 != 0) {
    do {
      uVar6 = 0xffffffff;
      if (uVar7 == uVar1 - 1) {
        uVar6 = 0xffffffff >> (-(char)uVar2 & 0x1fU);
      }
      iVar8 = iVar9;
      for (uVar6 = uVar6 & *(uint *)pFVar10; uVar6 != 0; uVar6 = uVar6 >> 1) {
        if ((uVar6 & 1) != 0) {
          pFVar5 = TChunkedArray<UE::Net::Private::FDeltaCompressionBaselineStorage::FInternalBaselineStateInfo,4096,TSizedDefaultAllocator<32>_>
                   ::operator[](&this->BaselineStateInfos,iVar8);
          if (pFVar5->StateBuffer != (uchar *)0x0) {
            FReplicationStateStorage::FreeBaseline
                      (this->ReplicationStateStorage,pFVar5->ObjectIndex,pFVar5->StateBuffer);
          }
        }
        iVar8 = iVar8 + 1;
      }
      uVar7 = uVar7 + 1;
      pFVar10 = pFVar10 + 4;
      iVar9 = iVar9 + 0x20;
    } while (uVar7 < uVar1);
  }
  memset((this->UsedBaselineStateInfos).Storage.AllocatorInstance.Data,0,
         (longlong)(this->UsedBaselineStateInfos).Storage.ArrayNum << 2);
  return;
}

// DestructBaselineStateInfo @ 1442372a0

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineStorage::DestructBaselineStateInfo
          (FDeltaCompressionBaselineStorage *this,FInternalBaselineStateInfo *param_1)

{
  if (param_1->StateBuffer != (uchar *)0x0) {
    FReplicationStateStorage::FreeBaseline
              (this->ReplicationStateStorage,param_1->ObjectIndex,param_1->StateBuffer);
    return;
  }
  return;
}

// FreeAllBaselineStateInfos @ 14423a790

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineStorage::FreeAllBaselineStateInfos
          (FDeltaCompressionBaselineStorage *this)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FInternalBaselineStateInfo *pFVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  
  pFVar10 = (this->UsedBaselineStateInfos).Storage.AllocatorInstance.Data;
  if (((this->UsedBaselineStateInfos).BitCount == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2b7,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(uint *)pFVar10 = *(uint *)pFVar10 & 0xfffffffe;
  iVar9 = 0;
  uVar1 = (this->UsedBaselineStateInfos).Storage.ArrayNum;
  uVar2 = (this->UsedBaselineStateInfos).BitCount;
  uVar7 = 0;
  pFVar10 = (this->UsedBaselineStateInfos).Storage.AllocatorInstance.Data;
  if (uVar1 != 0) {
    do {
      uVar6 = 0xffffffff;
      if (uVar7 == uVar1 - 1) {
        uVar6 = 0xffffffff >> (-(char)uVar2 & 0x1fU);
      }
      iVar8 = iVar9;
      for (uVar6 = uVar6 & *(uint *)pFVar10; uVar6 != 0; uVar6 = uVar6 >> 1) {
        if ((uVar6 & 1) != 0) {
          pFVar5 = TChunkedArray<UE::Net::Private::FDeltaCompressionBaselineStorage::FInternalBaselineStateInfo,4096,TSizedDefaultAllocator<32>_>
                   ::operator[](&this->BaselineStateInfos,iVar8);
          if (pFVar5->StateBuffer != (uchar *)0x0) {
            FReplicationStateStorage::FreeBaseline
                      (this->ReplicationStateStorage,pFVar5->ObjectIndex,pFVar5->StateBuffer);
          }
        }
        iVar8 = iVar8 + 1;
      }
      uVar7 = uVar7 + 1;
      pFVar10 = pFVar10 + 4;
      iVar9 = iVar9 + 0x20;
    } while (uVar7 < uVar1);
  }
  memset((this->UsedBaselineStateInfos).Storage.AllocatorInstance.Data,0,
         (longlong)(this->UsedBaselineStateInfos).Storage.ArrayNum << 2);
  return;
}

// FreeBaselineStateInfo @ 14423a990

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineStorage::FreeBaselineStateInfo
          (FDeltaCompressionBaselineStorage *this,uint param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FInternalBaselineStateInfo *pFVar5;
  
  pFVar2 = (this->UsedBaselineStateInfos).Storage.AllocatorInstance.Data;
  if ((this->UsedBaselineStateInfos).BitCount <= param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar1 = (ulonglong)(param_1 >> 5) * 4;
  if ((*(uint *)(pFVar2 + lVar1) >> (param_1 & 0x1f) & 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("UsedBaselineStateInfos.GetBit(StateInfoIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineStorage.cpp"
                       ,0xcd,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->UsedBaselineStateInfos).Storage.AllocatorInstance.Data;
  if ((this->UsedBaselineStateInfos).BitCount <= param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(uint *)(pFVar2 + lVar1) = *(uint *)(pFVar2 + lVar1) & ~(1 << (param_1 & 0x1f));
  pFVar5 = TChunkedArray<UE::Net::Private::FDeltaCompressionBaselineStorage::FInternalBaselineStateInfo,4096,TSizedDefaultAllocator<32>_>
           ::operator[](&this->BaselineStateInfos,param_1);
  if (pFVar5->StateBuffer != (uchar *)0x0) {
    FReplicationStateStorage::FreeBaseline
              (this->ReplicationStateStorage,pFVar5->ObjectIndex,pFVar5->StateBuffer);
  }
  return;
}

// GetBaseline @ 14423b160

FDeltaCompressionBaselineStateInfo * __thiscall
UE::Net::Private::FDeltaCompressionBaselineStorage::GetBaseline
          (FDeltaCompressionBaselineStorage *this,
          FDeltaCompressionBaselineStateInfo *__return_storage_ptr__,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FDeltaCompressionBaselineStateInfo *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  pFVar1 = (this->UsedBaselineStateInfos).Storage.AllocatorInstance.Data;
  if ((this->UsedBaselineStateInfos).BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDeltaCompressionBaselineStateInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  if ((*(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UsedBaselineStateInfos.GetBit(StateInfoIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineStorage.cpp"
                       ,0x5d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDeltaCompressionBaselineStateInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  uVar7 = (int)param_1 >> 0x1f & 0xff;
  uVar4 = param_1 + uVar7;
  uVar8 = (int)uVar4 >> 8;
  uVar6 = 0;
  if ((int)uVar8 < (this->BaselineStateInfos).Chunks.Array.ArrayNum) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDeltaCompressionBaselineStateInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar1 = (this->BaselineStateInfos).Chunks.Array.AllocatorInstance.Data;
  __return_storage_ptr__->StateInfoIndex = param_1;
  __return_storage_ptr__->StateBuffer =
       *(uchar **)
        (*(longlong *)(pFVar1 + (longlong)(int)uVar8 * 8) +
        (longlong)(int)((uVar4 & 0xff) - uVar7) * 0x10);
  return __return_storage_ptr__;
}

// GetBaselineReservationForCurrentState @ 14423b290

FDeltaCompressionBaselineStateInfo * __thiscall
UE::Net::Private::FDeltaCompressionBaselineStorage::GetBaselineReservationForCurrentState
          (FDeltaCompressionBaselineStorage *this,
          FDeltaCompressionBaselineStateInfo *__return_storage_ptr__,uint param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  FReplicationStateStorage *this_00;
  code *pcVar3;
  bool bVar4;
  FDeltaCompressionBaselineStateInfo *pFVar5;
  FInternalBaselineStateInfo *pFVar6;
  uchar *puVar7;
  
  pFVar2 = (this->UsedBaselineStateInfos).Storage.AllocatorInstance.Data;
  if ((this->UsedBaselineStateInfos).BitCount <= param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDeltaCompressionBaselineStateInfo *)(*pcVar3)();
      return pFVar5;
    }
  }
  if ((*(uint *)(pFVar2 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("UsedBaselineStateInfos.GetBit(StateInfoIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineStorage.cpp"
                       ,0x9c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDeltaCompressionBaselineStateInfo *)(*pcVar3)();
      return pFVar5;
    }
  }
  pFVar6 = TChunkedArray<UE::Net::Private::FDeltaCompressionBaselineStorage::FInternalBaselineStateInfo,4096,TSizedDefaultAllocator<32>_>
           ::operator[](&this->BaselineStateInfos,param_1);
  if (pFVar6->RefCount == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InternalBaselineInfo->RefCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineStorage.cpp"
                       ,0x9f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FDeltaCompressionBaselineStateInfo *)(*pcVar3)();
      return pFVar5;
    }
  }
  uVar1 = pFVar6->ObjectIndex;
  this_00 = this->ReplicationStateStorage;
  __return_storage_ptr__->StateBuffer = (uchar *)0x0;
  __return_storage_ptr__->StateInfoIndex = 0;
  puVar7 = FReplicationStateStorage::GetState(this_00,uVar1,CurrentSendState);
  __return_storage_ptr__->StateBuffer = puVar7;
  __return_storage_ptr__->StateInfoIndex = param_1;
  return __return_storage_ptr__;
}

// Init @ 14423ff50

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineStorage::Init
          (FDeltaCompressionBaselineStorage *this,
          FDeltaCompressionBaselineStorageInitParams *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  FNetBitArray::Init(&this->UsedBaselineStateInfos,param_1->MaxBaselineCount + 1);
  pFVar1 = (this->UsedBaselineStateInfos).Storage.AllocatorInstance.Data;
  if ((this->UsedBaselineStateInfos).BitCount == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2a2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(uint *)pFVar1 = *(uint *)pFVar1 | 1;
  this->ReplicationStateStorage = param_1->ReplicationStateStorage;
  return;
}

// OptionallyCommitAndDoReleaseBaseline @ 144246c40

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineStorage::OptionallyCommitAndDoReleaseBaseline
          (FDeltaCompressionBaselineStorage *this,uint param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FInternalBaselineStateInfo *pFVar5;
  
  pFVar2 = (this->UsedBaselineStateInfos).Storage.AllocatorInstance.Data;
  if ((this->UsedBaselineStateInfos).BitCount <= param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((*(uint *)(pFVar2 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("UsedBaselineStateInfos.GetBit(StateInfoIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineStorage.cpp"
                       ,0x89,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar5 = TChunkedArray<UE::Net::Private::FDeltaCompressionBaselineStorage::FInternalBaselineStateInfo,4096,TSizedDefaultAllocator<32>_>
           ::operator[](&this->BaselineStateInfos,param_1);
  if (pFVar5->RefCount == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InternalBaselineInfo->RefCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineStorage.cpp"
                       ,0x8c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar1 = &pFVar5->RefCount;
  *puVar1 = *puVar1 - 1;
  if (*puVar1 == 0) {
    FReplicationStateStorage::CancelBaselineReservation
              (this->ReplicationStateStorage,pFVar5->ObjectIndex,pFVar5->StateBuffer);
    pFVar5->StateBuffer = (uchar *)0x0;
    FreeBaselineStateInfo(this,param_1);
    return;
  }
  FReplicationStateStorage::CommitBaselineReservation
            (this->ReplicationStateStorage,pFVar5->ObjectIndex,pFVar5->StateBuffer,CurrentSendState)
  ;
  return;
}

// ReleaseBaseline @ 14424cd20

void __thiscall
UE::Net::Private::FDeltaCompressionBaselineStorage::ReleaseBaseline
          (FDeltaCompressionBaselineStorage *this,uint param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FInternalBaselineStateInfo *pFVar5;
  
  pFVar2 = (this->UsedBaselineStateInfos).Storage.AllocatorInstance.Data;
  if ((this->UsedBaselineStateInfos).BitCount <= param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((*(uint *)(pFVar2 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("UsedBaselineStateInfos.GetBit(StateInfoIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineStorage.cpp"
                       ,0x51,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar5 = TChunkedArray<UE::Net::Private::FDeltaCompressionBaselineStorage::FInternalBaselineStateInfo,4096,TSizedDefaultAllocator<32>_>
           ::operator[](&this->BaselineStateInfos,param_1);
  if (pFVar5->RefCount == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InternalBaselineInfo->RefCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\DeltaCompression\\DeltaCompressionBaselineStorage.cpp"
                       ,0x54,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar1 = &pFVar5->RefCount;
  *puVar1 = *puVar1 - 1;
  if (*puVar1 == 0) {
    FreeBaselineStateInfo(this,param_1);
  }
  return;
}

// ReserveBaselineForCurrentState @ 14424f900

FDeltaCompressionBaselineStateInfo * __thiscall
UE::Net::Private::FDeltaCompressionBaselineStorage::ReserveBaselineForCurrentState
          (FDeltaCompressionBaselineStorage *this,
          FDeltaCompressionBaselineStateInfo *__return_storage_ptr__,uint param_1)

{
  uint uVar1;
  FInternalBaselineStateInfo *pFVar2;
  FBaselineReservation local_18;
  
  __return_storage_ptr__->StateBuffer = (uchar *)0x0;
  __return_storage_ptr__->StateInfoIndex = 0;
  uVar1 = AllocBaselineStateInfo(this);
  if (uVar1 != 0) {
    FReplicationStateStorage::ReserveBaseline
              (this->ReplicationStateStorage,&local_18,param_1,CurrentSendState);
    if (local_18.ReservedStorage == (uchar *)0x0) {
      FreeBaselineStateInfo(this,uVar1);
    }
    else {
      pFVar2 = TChunkedArray<UE::Net::Private::FDeltaCompressionBaselineStorage::FInternalBaselineStateInfo,4096,TSizedDefaultAllocator<32>_>
               ::operator[](&this->BaselineStateInfos,uVar1);
      __return_storage_ptr__->StateInfoIndex = uVar1;
      pFVar2->StateBuffer = local_18.ReservedStorage;
      pFVar2->ObjectIndex = param_1;
      __return_storage_ptr__->StateBuffer = local_18.BaselineBaseStorage;
    }
  }
  return __return_storage_ptr__;
}

