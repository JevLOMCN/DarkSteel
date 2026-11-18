// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 15

// GetObjectInfo @ 1442c2ab0

FObjectInfo * __thiscall UE::Net::FWorldLocations::GetObjectInfo(FWorldLocations *this,uint param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FObjectInfo *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = 0;
  if ((int)param_1 < (this->StorageIndexes).ArrayNum) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FObjectInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar1 = *(int *)((this->StorageIndexes).AllocatorInstance.Data + (longlong)(int)param_1 * 4);
  uVar6 = iVar1 >> 0x1f & 0x7ff;
  uVar4 = iVar1 + uVar6;
  uVar7 = (int)uVar4 >> 0xb;
  uVar8 = 0;
  if ((int)uVar7 < (int)(this->StoredObjectInfo)._padding_) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FObjectInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FObjectInfo *)
         ((longlong)(int)((uVar4 & 0x7ff) - uVar6) * 0x20 +
         *(longlong *)((this->StoredObjectInfo)._padding_ + (longlong)(int)uVar7 * 8));
}

// ~FWorldLocations @ 1442f94d0

void __thiscall UE::Net::FWorldLocations::~FWorldLocations(FWorldLocations *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  
  pvVar2 = (void *)0x0;
  pvVar3 = pvVar2;
  pvVar5 = pvVar2;
  if (0 < (this->StoredObjectInfo).NumPreAllocatedChunks) {
    do {
      if (pvVar2 == (void *)0x0) {
        pvVar2 = *(void **)((longlong)pvVar3 + (this->StoredObjectInfo)._padding_);
      }
      uVar4 = (int)pvVar5 + 1;
      *(undefined8 *)((longlong)pvVar3 + (this->StoredObjectInfo)._padding_) = 0;
      pvVar3 = (void *)((longlong)pvVar3 + 8);
      pvVar5 = (void *)(ulonglong)uVar4;
    } while ((int)uVar4 < (this->StoredObjectInfo).NumPreAllocatedChunks);
  }
  operator_delete__(pvVar2);
  (this->StoredObjectInfo).NumPreAllocatedChunks = 0;
  TIndirectArray<TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::
  ~TIndirectArray<TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
            ((TIndirectArray<TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
              *)&this->StoredObjectInfo);
  pFVar1 = (this->ReservedStorageSlot).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StorageIndexes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObjectsRequiringFrequentWorldLocationUpdate).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObjectsWithDirtyInfo).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ValidInfoIndexes).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ClearCullDistanceOverride @ 1442fc680

bool __thiscall
UE::Net::FWorldLocations::ClearCullDistanceOverride(FWorldLocations *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FObjectInfo *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  
  if ((this->bLockdownDirtyList != false) &&
     (bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5986202542445428586>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\WorldLocations.cpp"
                         ,0x96,"!bLockdownDirtyList"), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar1 = (this->ValidInfoIndexes).Storage.AllocatorInstance.Data;
  if (((this->ValidInfoIndexes).BitCount <= param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  uVar7 = (ulonglong)(param_1 >> 5);
  uVar8 = 1 << ((byte)param_1 & 0x1f);
  if ((*(uint *)(pFVar1 + uVar7 * 4) & uVar8) != 0) {
    iVar5 = GetStorageIndex(this,param_1);
    pFVar6 = TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>
             ::operator[]((TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>
                           *)&this->StoredObjectInfo,iVar5);
    if (__real_7f7fffff != pFVar6->CullDistanceOverride) {
      iVar5 = GetStorageIndex(this,param_1);
      pFVar6 = TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>
               ::operator[]((TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>
                             *)&this->StoredObjectInfo,iVar5);
      pFVar6->CullDistanceOverride = 3.4028235e+38;
      pFVar1 = (this->ObjectsWithDirtyInfo).Storage.AllocatorInstance.Data;
      if (((this->ObjectsWithDirtyInfo).BitCount <= param_1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2ac,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      *(uint *)(pFVar1 + uVar7 * 4) = ~uVar8 & *(uint *)(pFVar1 + uVar7 * 4) | uVar8;
      return true;
    }
  }
  return false;
}

// GetCullDistance @ 144303190

float __thiscall UE::Net::FWorldLocations::GetCullDistance(FWorldLocations *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  float fVar11;
  
  pFVar1 = (this->ValidInfoIndexes).Storage.AllocatorInstance.Data;
  if ((this->ValidInfoIndexes).BitCount <= param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar11 = (float)(*pcVar3)();
      return fVar11;
    }
  }
  if ((*(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) == 0) {
    fVar11 = 0.0;
  }
  else {
    iVar5 = GetStorageIndex(this,param_1);
    uVar8 = iVar5 >> 0x1f & 0x7ff;
    uVar6 = iVar5 + uVar8;
    uVar10 = (int)uVar6 >> 0xb;
    uVar7 = 0;
    if ((int)uVar10 < (int)(this->StoredObjectInfo)._padding_) {
      uVar7 = ~uVar10 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        fVar11 = (float)(*pcVar3)();
        return fVar11;
      }
    }
    lVar9 = (longlong)(int)((uVar6 & 0x7ff) - uVar8) * 0x20;
    lVar2 = *(longlong *)((this->StoredObjectInfo)._padding_ + (longlong)(int)uVar10 * 8);
    fVar11 = *(float *)(lVar2 + 0x1c + lVar9);
    if (fVar11 == __real_7f7fffff) {
      return *(float *)(lVar2 + 0x18 + lVar9);
    }
  }
  return fVar11;
}

// GetStorageIndex @ 144304900

int __thiscall UE::Net::FWorldLocations::GetStorageIndex(FWorldLocations *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if ((int)param_1 < (this->StorageIndexes).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->StorageIndexes).AllocatorInstance.Data + (longlong)(int)param_1 * 4);
}

// Init @ 144306c80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::FWorldLocations::Init(FWorldLocations *this,FWorldLocationsInitParams *param_1)

{
  TNetChunkedArray<UE::Net::FWorldLocations::FObjectInfo,2048,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined8 *puVar3;
  UObject *pUVar4;
  double dVar5;
  TNetChunkedArray<UE::Net::FWorldLocations::FObjectInfo,2048,TSizedDefaultAllocator<32>_> *pTVar6;
  void *pvVar7;
  UClass *pUVar8;
  void *pvVar9;
  uint uVar10;
  void *pvVar11;
  int iVar12;
  TNetChunkedArray<UE::Net::FWorldLocations::FObjectInfo,2048,TSizedDefaultAllocator<32>_> local_38;
  
  FNetBitArray::Init(&this->ValidInfoIndexes,param_1->MaxInternalNetRefIndex);
  FNetBitArray::Init(&this->ObjectsWithDirtyInfo,param_1->MaxInternalNetRefIndex);
  FNetBitArray::Init(&this->ObjectsRequiringFrequentWorldLocationUpdate,
                     param_1->MaxInternalNetRefIndex);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (&this->StorageIndexes,param_1->MaxInternalNetRefIndex,Default);
  FNetBitArray::Init(&this->ReservedStorageSlot,param_1->PreallocatedStorageCount);
  pTVar6 = TNetChunkedArray<UE::Net::FWorldLocations::FObjectInfo,2048,TSizedDefaultAllocator<32>_>
           ::
           TNetChunkedArray<UE::Net::FWorldLocations::FObjectInfo,2048,TSizedDefaultAllocator<32>_>
                     (&local_38,param_1->PreallocatedStorageCount,Constructor);
  pTVar1 = &this->StoredObjectInfo;
  pvVar7 = (void *)0x0;
  if (pTVar1 != pTVar6) {
    puVar3 = (undefined8 *)pTVar1->_padding_;
    for (iVar12 = (int)(this->StoredObjectInfo)._padding_; iVar12 != 0; iVar12 = iVar12 + -1) {
      ::operator_delete((void *)*puVar3,0x10000);
      puVar3 = puVar3 + 1;
    }
    piVar2 = (int *)((longlong)&(this->StoredObjectInfo)._padding_ + 4);
    *(undefined4 *)&(this->StoredObjectInfo)._padding_ = 0;
    if (*piVar2 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)pTVar1,0,piVar2);
    }
    if ((void *)pTVar1->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pTVar1->_padding_);
    }
    pTVar1->_padding_ = pTVar6->_padding_;
    pTVar6->_padding_ = 0;
    *(int *)&(this->StoredObjectInfo)._padding_ = (int)pTVar6->_padding_;
    *piVar2 = *(int *)((longlong)&pTVar6->_padding_ + 4);
    pTVar6->_padding_ = 0;
    *(int *)&(this->StoredObjectInfo)._padding_ = (int)pTVar6->_padding_;
    (this->StoredObjectInfo).NumPreAllocatedChunks = pTVar6->NumPreAllocatedChunks;
    *(undefined4 *)&pTVar6->_padding_ = 0;
    pTVar6->NumPreAllocatedChunks = 0;
  }
  pvVar9 = pvVar7;
  pvVar11 = pvVar7;
  if (0 < local_38.NumPreAllocatedChunks) {
    do {
      if (pvVar9 == (void *)0x0) {
        pvVar9 = *(void **)((longlong)pvVar7 + local_38._padding_);
      }
      *(undefined8 *)((longlong)pvVar7 + local_38._padding_) = 0;
      uVar10 = (int)pvVar11 + 1;
      pvVar7 = (void *)((longlong)pvVar7 + 8);
      pvVar11 = (void *)(ulonglong)uVar10;
    } while ((int)uVar10 < local_38.NumPreAllocatedChunks);
  }
  operator_delete__(pvVar9);
  local_38.NumPreAllocatedChunks = 0;
  TIndirectArray<TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::
  ~TIndirectArray<TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
            ((TIndirectArray<TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
              *)&local_38);
  pUVar8 = UWorldLocationsConfig::StaticClass();
  if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar8);
  }
  pUVar4 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
  dVar5 = *(double *)&pUVar4[1].field_0x8;
  (this->MinWorldPos).field0_0x0._s_0.X = *(double *)(pUVar4 + 1);
  (this->MinWorldPos).field0_0x0._s_0.Y = dVar5;
  (this->MinWorldPos).field0_0x0._s_0.Z = *(double *)&pUVar4[1].field_0x10;
  pUVar8 = UWorldLocationsConfig::StaticClass();
  if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar8);
  }
  pUVar4 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
  dVar5 = *(double *)&pUVar4[1].field_0x20;
  (this->MaxWorldPos).field0_0x0._s_0.X = *(double *)&pUVar4[1].field_0x18;
  (this->MaxWorldPos).field0_0x0._s_0.Y = dVar5;
  (this->MaxWorldPos).field0_0x0._s_0.Z = *(double *)(pUVar4 + 2);
  pUVar8 = UWorldLocationsConfig::StaticClass();
  if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar8);
  }
  this->MaxNetCullDistance =
       *(float *)&(pUVar8->ClassDefaultObject).field0_0x0.DebugPtr[2].field_0x8;
  this->NetRefHandleManager =
       &(((((param_1->ReplicationSystem).field0_0x0.DebugPtr)->Impl).Ptr)->ReplicationSystemInternal
        ).NetRefHandleManager;
  return;
}

// InitObjectInfoCache @ 1443076b0

void __thiscall UE::Net::FWorldLocations::InitObjectInfoCache(FWorldLocations *this,uint param_1)

{
  void **ppvVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  void *pvVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  void *local_58 [3];
  
  pFVar7 = (this->ValidInfoIndexes).Storage.AllocatorInstance.Data;
  if (((this->ValidInfoIndexes).BitCount <= param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar13 = (ulonglong)(param_1 >> 5);
  if ((*(uint *)(pFVar7 + uVar13 * 4) >> (param_1 & 0x1f) & 1) == 0) {
    pFVar7 = (this->ValidInfoIndexes).Storage.AllocatorInstance.Data;
    if (((this->ValidInfoIndexes).BitCount <= param_1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2a2,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(uint *)(pFVar7 + uVar13 * 4) = *(uint *)(pFVar7 + uVar13 * 4) | 1 << (param_1 & 0x1f);
    uVar11 = (this->ReservedStorageSlot).Storage.ArrayNum;
    pFVar7 = (this->ReservedStorageSlot).Storage.AllocatorInstance.Data;
    pvVar8 = (void *)0x0;
    uVar14 = 0;
    if (uVar11 != 0) {
LAB_144307760:
      if (*(uint *)pFVar7 == 0xffffffff) goto code_r0x000144307767;
      uVar11 = ~*(uint *)pFVar7;
      iVar6 = 0;
      if (uVar11 != 0) {
        for (; (uVar11 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
        }
      }
      iVar5 = 0x20;
      if (uVar11 != 0) {
        iVar5 = iVar6;
      }
      uVar11 = 0xffffffff;
      if (iVar5 + uVar14 < (this->ReservedStorageSlot).BitCount) {
        uVar11 = iVar5 + uVar14;
      }
      if (uVar11 == 0xffffffff) goto LAB_1443077a8;
      goto LAB_14430795e;
    }
LAB_1443077a8:
    FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_Iris.UniqueName,false,None,Default,true);
    local_res18 = LLMTagDeclaration_Iris.UniqueName;
    FMemScope::FMemScope(&local_res20,&local_res18,true);
    iVar6 = (int)(this->StoredObjectInfo)._padding_;
    uVar11 = (this->ReservedStorageSlot).BitCount;
    *(int *)&(this->StoredObjectInfo)._padding_ = iVar6 + 0x800;
    iVar6 = iVar6 + 0xfff;
    iVar5 = (int)(this->StoredObjectInfo)._padding_;
    iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 0x7ffU)) >> 0xb;
    if (iVar5 < iVar6) {
      uVar13 = (ulonglong)(uint)(iVar6 - iVar5);
      do {
        pvVar8 = ::operator_new(0x10000);
        local_58[0] = (void *)0x0;
        if (pvVar8 != (void *)0x0) {
          lVar12 = 0x800;
          puVar10 = (undefined4 *)((longlong)pvVar8 + 0x1c);
          do {
            uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            *(double *)(puVar10 + -7) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            *(undefined8 *)(puVar10 + -5) = uVar3;
            *(double *)(puVar10 + -3) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            puVar10[-1] = 0;
            *puVar10 = 0x7f7fffff;
            lVar12 = lVar12 + -1;
            local_58[0] = pvVar8;
            puVar10 = puVar10 + 8;
          } while (lVar12 != 0);
        }
        ppvVar1 = (void **)(this->StoredObjectInfo)._padding_;
        if (((ppvVar1 <= local_58) &&
            (local_58 < ppvVar1 + *(int *)((longlong)&(this->StoredObjectInfo)._padding_ + 4))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = (int)(this->StoredObjectInfo)._padding_;
        if (iVar6 == *(int *)((longlong)&(this->StoredObjectInfo)._padding_ + 4)) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)&this->StoredObjectInfo,
                             (int *)((longlong)&(this->StoredObjectInfo)._padding_ + 4));
        }
        *(int *)&(this->StoredObjectInfo)._padding_ = iVar6 + 1;
        *(void **)((this->StoredObjectInfo)._padding_ + (longlong)iVar6 * 8) = local_58[0];
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    FNetBitArray::SetNumBits(&this->ReservedStorageSlot,uVar11 + 0x800);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res10);
LAB_14430795e:
    pFVar7 = (this->ReservedStorageSlot).Storage.AllocatorInstance.Data;
    if (((this->ReservedStorageSlot).BitCount <= uVar11) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2a2,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(uint *)(pFVar7 + (ulonglong)(uVar11 >> 5) * 4) =
         *(uint *)(pFVar7 + (ulonglong)(uVar11 >> 5) * 4) | 1 << (uVar11 & 0x1f);
    uVar14 = 0;
    if ((int)param_1 < (this->StorageIndexes).ArrayNum) {
      uVar14 = ~param_1 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(uint *)((this->StorageIndexes).AllocatorInstance.Data + (longlong)(int)param_1 * 4) = uVar11;
  }
  return;
code_r0x000144307767:
  uVar9 = (int)pvVar8 + 1;
  pvVar8 = (void *)(ulonglong)uVar9;
  pFVar7 = pFVar7 + 4;
  uVar14 = uVar14 + 0x20;
  if (uVar11 <= uVar9) goto LAB_1443077a8;
  goto LAB_144307760;
}

// LockDirtyInfoList @ 1443091d0

void __thiscall UE::Net::FWorldLocations::LockDirtyInfoList(FWorldLocations *this,bool param_1)

{
  this->bLockdownDirtyList = param_1;
  return;
}

// OnMaxInternalNetRefIndexIncreased @ 14430a0a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::FWorldLocations::OnMaxInternalNetRefIndexIncreased(FWorldLocations *this,uint param_1)

{
  FNetBitArray::SetNumBits(&this->ValidInfoIndexes,param_1);
  FNetBitArray::SetNumBits(&this->ObjectsWithDirtyInfo,param_1);
  FNetBitArray::SetNumBits(&this->ObjectsRequiringFrequentWorldLocationUpdate,param_1);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->StorageIndexes,param_1,Default);
  return;
}

// PostSendUpdate @ 14430a9b0

void __thiscall UE::Net::FWorldLocations::PostSendUpdate(FWorldLocations *this)

{
  this->bLockdownDirtyList = false;
  memset((this->ObjectsWithDirtyInfo).Storage.AllocatorInstance.Data,0,
         (longlong)(this->ObjectsWithDirtyInfo).Storage.ArrayNum << 2);
  return;
}

// RemoveObjectInfoCache @ 14430ea80

void __thiscall UE::Net::FWorldLocations::RemoveObjectInfoCache(FWorldLocations *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  FObjectInfo *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  pFVar1 = (this->ValidInfoIndexes).Storage.AllocatorInstance.Data;
  if ((this->ValidInfoIndexes).BitCount <= param_1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar10 = (ulonglong)(param_1 >> 5);
  uVar9 = param_1 & 0x1f;
  if ((*(uint *)(pFVar1 + uVar10 * 4) >> uVar9 & 1) != 0) {
    pFVar1 = (this->ValidInfoIndexes).Storage.AllocatorInstance.Data;
    if ((this->ValidInfoIndexes).BitCount <= param_1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2b7,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(uint *)(pFVar1 + uVar10 * 4) = *(uint *)(pFVar1 + uVar10 * 4) & ~(1 << uVar9);
    pFVar1 = (this->ObjectsWithDirtyInfo).Storage.AllocatorInstance.Data;
    if ((this->ObjectsWithDirtyInfo).BitCount <= param_1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2b7,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(uint *)(pFVar1 + uVar10 * 4) = *(uint *)(pFVar1 + uVar10 * 4) & ~(1 << uVar9);
    pFVar1 = (this->ObjectsRequiringFrequentWorldLocationUpdate).Storage.AllocatorInstance.Data;
    if ((this->ObjectsRequiringFrequentWorldLocationUpdate).BitCount <= param_1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2b7,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(uint *)(pFVar1 + uVar10 * 4) = *(uint *)(pFVar1 + uVar10 * 4) & ~(1 << uVar9);
    uVar9 = 0;
    if ((int)param_1 < (this->StorageIndexes).ArrayNum) {
      uVar9 = ~param_1 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar9 = *(uint *)((this->StorageIndexes).AllocatorInstance.Data + (longlong)(int)param_1 * 4);
    uVar11 = 0;
    if ((int)param_1 < (this->StorageIndexes).ArrayNum) {
      uVar11 = ~param_1 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined4 *)((this->StorageIndexes).AllocatorInstance.Data + (longlong)(int)param_1 * 4) =
         0xffffffff;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    pFVar8 = TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>
             ::operator[]((TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>
                           *)&this->StoredObjectInfo,uVar9);
    (pFVar8->WorldLocation).field0_0x0._s_0.X = (double)uVar3;
    (pFVar8->WorldLocation).field0_0x0._s_0.Y = (double)uVar4;
    *(undefined4 *)((longlong)&(pFVar8->WorldLocation).field0_0x0 + 0x10) = uVar5;
    *(undefined4 *)((longlong)&(pFVar8->WorldLocation).field0_0x0 + 0x14) = uVar6;
    pFVar8->CullDistance = 0.0;
    pFVar8->CullDistanceOverride = 3.4028235e+38;
    pFVar1 = (this->ReservedStorageSlot).Storage.AllocatorInstance.Data;
    if ((this->ReservedStorageSlot).BitCount <= uVar9) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2b7,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(uint *)(pFVar1 + (ulonglong)(uVar9 >> 5) * 4) =
         *(uint *)(pFVar1 + (ulonglong)(uVar9 >> 5) * 4) & ~(1 << (uVar9 & 0x1f));
  }
  return;
}

// SetCullDistanceOverride @ 144312e20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::FWorldLocations::SetCullDistanceOverride(FWorldLocations *this,uint param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  float fVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FObjectInfo *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  uint local_res10 [2];
  float local_res18 [2];
  FString local_58;
  FWorldLocations *local_48;
  uint *local_40;
  float *local_38;
  
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  if ((this->bLockdownDirtyList != false) &&
     (bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5986202542445428611>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\WorldLocations.cpp"
                         ,0x7d,"!bLockdownDirtyList"), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  uVar3 = local_res10[0];
  pFVar1 = (this->ValidInfoIndexes).Storage.AllocatorInstance.Data;
  if (((this->ValidInfoIndexes).BitCount <= local_res10[0]) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  if ((*(uint *)(pFVar1 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) == 0) {
    bVar5 = false;
  }
  else {
    iVar7 = GetStorageIndex(this,local_res10[0]);
    pFVar8 = TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>
             ::operator[]((TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>
                           *)&this->StoredObjectInfo,iVar7);
    if (local_res18[0] != pFVar8->CullDistanceOverride) {
      if ((0.0 < this->MaxNetCullDistance) && (this->MaxNetCullDistance < local_res18[0])) {
        if (5 < (byte)LogIrisNetCull._0_1_) {
          Net::Private::FNetRefHandleManager::PrintObjectFromIndex
                    (this->NetRefHandleManager,&local_58,local_res10[0]);
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisNetCull);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        local_40 = local_res10;
        local_38 = local_res18;
        local_48 = this;
        `UE::Net::FWorldLocations::SetCullDistanceOverride'::__l11::<lambda_1>::operator()
                  (&local_48);
      }
      fVar4 = local_res18[0];
      iVar7 = GetStorageIndex(this,local_res10[0]);
      pFVar8 = TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>
               ::operator[]((TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>
                             *)&this->StoredObjectInfo,iVar7);
      uVar3 = local_res10[0];
      pFVar8->CullDistanceOverride = fVar4;
      pFVar1 = (this->ObjectsWithDirtyInfo).Storage.AllocatorInstance.Data;
      if (((this->ObjectsWithDirtyInfo).BitCount <= local_res10[0]) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2ac,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      uVar10 = 1 << ((byte)uVar3 & 0x1f);
      uVar9 = (ulonglong)(uVar3 >> 5);
      *(uint *)(pFVar1 + uVar9 * 4) = ~uVar10 & *(uint *)(pFVar1 + uVar9 * 4) | uVar10;
    }
    bVar5 = true;
  }
  return bVar5;
}

// SetObjectInfo @ 144313e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::FWorldLocations::SetObjectInfo
          (FWorldLocations *this,uint param_1,TVector<double> *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FObjectInfo *pFVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint local_res10 [4];
  float local_res20 [2];
  FString local_98;
  FWorldLocations *local_88;
  uint *local_80;
  float *local_78;
  double local_60;
  
  local_res10[0] = param_1;
  local_res20[0] = param_3;
  if ((this->bLockdownDirtyList != false) &&
     (bVar7 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5986202542445428637>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\WorldLocations.cpp"
                         ,99,"!bLockdownDirtyList"), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar9 = GetStorageIndex(this,local_res10[0]);
  pFVar10 = TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>::
            operator[]((TChunkedArray<UE::Net::FWorldLocations::FObjectInfo,65536,TSizedDefaultAllocator<32>_>
                        *)&this->StoredObjectInfo,iVar9);
  uVar6 = local_res10[0];
  dVar1 = *(double *)((longlong)&(this->MaxWorldPos).field0_0x0 + 0x10);
  uVar16 = SUB84(dVar1,0);
  uVar17 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar2 = *(double *)((longlong)&param_2->field0_0x0 + 0x10);
  if (dVar2 <= dVar1) {
    uVar16 = SUB84(dVar2,0);
    uVar17 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  dVar1 = *(double *)((longlong)&(this->MaxWorldPos).field0_0x0 + 8);
  uVar12 = SUB84(dVar1,0);
  uVar13 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar2 = *(double *)&(this->MaxWorldPos).field0_0x0;
  uVar14 = SUB84(dVar2,0);
  uVar15 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar3 = *(double *)((longlong)&param_2->field0_0x0 + 8);
  if (dVar3 <= dVar1) {
    uVar12 = SUB84(dVar3,0);
    uVar13 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  dVar1 = *(double *)&param_2->field0_0x0;
  if (dVar1 <= dVar2) {
    uVar14 = SUB84(dVar1,0);
    uVar15 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  dVar1 = *(double *)((longlong)&(this->MinWorldPos).field0_0x0 + 0x10);
  if ((double)CONCAT44(uVar17,uVar16) <= dVar1) {
    uVar16 = SUB84(dVar1,0);
    uVar17 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  bVar7 = local_res20[0] != pFVar10->CullDistance;
  dVar1 = *(double *)((longlong)&(this->MinWorldPos).field0_0x0 + 8);
  if ((double)CONCAT44(uVar13,uVar12) <= dVar1) {
    uVar12 = SUB84(dVar1,0);
    uVar13 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  dVar1 = *(double *)&(this->MinWorldPos).field0_0x0;
  if ((double)CONCAT44(uVar15,uVar14) <= dVar1) {
    uVar14 = SUB84(dVar1,0);
    uVar15 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  local_60 = (double)CONCAT44(uVar17,uVar16);
  pFVar4 = (this->ObjectsWithDirtyInfo).Storage.AllocatorInstance.Data;
  if (((this->ObjectsWithDirtyInfo).BitCount <= local_res10[0]) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar8 = false;
  if (((((*(uint *)(pFVar4 + (ulonglong)(uVar6 >> 5) * 4) >> (uVar6 & 0x1f) & 1) != 0) ||
       ((double)CONCAT44(uVar15,uVar14) != (pFVar10->WorldLocation).field0_0x0._s_0.X)) ||
      ((double)CONCAT44(uVar13,uVar12) != (pFVar10->WorldLocation).field0_0x0._s_0.Y)) ||
     (((double)CONCAT44(uVar17,uVar16) != (pFVar10->WorldLocation).field0_0x0._s_0.Z || (bVar7)))) {
    bVar8 = true;
    *(undefined4 *)&(pFVar10->WorldLocation).field0_0x0 = uVar14;
    *(undefined4 *)((longlong)&(pFVar10->WorldLocation).field0_0x0 + 4) = uVar15;
    *(undefined4 *)((longlong)&(pFVar10->WorldLocation).field0_0x0 + 8) = uVar12;
    *(undefined4 *)((longlong)&(pFVar10->WorldLocation).field0_0x0 + 0xc) = uVar13;
    (pFVar10->WorldLocation).field0_0x0._s_0.Z = local_60;
    if ((bVar7) && ((0.0 < this->MaxNetCullDistance && (this->MaxNetCullDistance < local_res20[0])))
       ) {
      if (5 < (byte)LogIrisNetCull._0_1_) {
        Net::Private::FNetRefHandleManager::PrintObjectFromIndex
                  (this->NetRefHandleManager,&local_98,local_res10[0]);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisNetCull);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      local_80 = local_res10;
      local_78 = local_res20;
      local_88 = this;
      `UE::Net::FWorldLocations::SetObjectInfo'::__l6::<lambda_1>::operator()(&local_88);
    }
  }
  else {
    *(undefined4 *)&(pFVar10->WorldLocation).field0_0x0 = uVar14;
    *(undefined4 *)((longlong)&(pFVar10->WorldLocation).field0_0x0 + 4) = uVar15;
    *(undefined4 *)((longlong)&(pFVar10->WorldLocation).field0_0x0 + 8) = uVar12;
    *(undefined4 *)((longlong)&(pFVar10->WorldLocation).field0_0x0 + 0xc) = uVar13;
    (pFVar10->WorldLocation).field0_0x0._s_0.Z = local_60;
  }
  uVar6 = local_res10[0];
  pFVar10->CullDistance = local_res20[0];
  pFVar4 = (this->ObjectsWithDirtyInfo).Storage.AllocatorInstance.Data;
  if (((this->ObjectsWithDirtyInfo).BitCount <= local_res10[0]) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2cb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar11 = 0;
  if (bVar8) {
    uVar11 = 1 << ((byte)uVar6 & 0x1f);
  }
  pFVar4 = pFVar4 + (ulonglong)(uVar6 >> 5) * 4;
  *(uint *)pFVar4 = *(uint *)pFVar4 | uVar11;
  return;
}

// operator() @ 1504ba480

bool __thiscall `UE::Net::FWorldLocations::SetObjectInfo'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_38 [3];
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5986202542445428621>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)(*(longlong *)this + 0x90),local_38,
               **(uint **)((longlong)this + 8));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5986202542445428621>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504ba535;
    }
  }
  bVar2 = false;
LAB_1504ba535:
  if ((bVar4) && (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504bb000

bool __thiscall
`UE::Net::FWorldLocations::SetCullDistanceOverride'::__l11::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_38 [3];
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5986202542445428600>);
  if (bVar2) {
    UE::Net::Private::FNetRefHandleManager::PrintObjectFromIndex
              (*(FNetRefHandleManager **)(*(longlong *)this + 0x90),local_38,
               **(uint **)((longlong)this + 8));
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5986202542445428600>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504bb0b5;
    }
  }
  bVar2 = false;
LAB_1504bb0b5:
  if ((bVar4) && (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

