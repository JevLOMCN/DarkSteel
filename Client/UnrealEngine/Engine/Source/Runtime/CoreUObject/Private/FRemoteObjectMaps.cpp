// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// ~FRemoteObjectMaps @ 1421b6550

void __thiscall
UE::RemoteObject::Private::FRemoteObjectMaps::~FRemoteObjectMaps(FRemoteObjectMaps *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar13 = 0;
  puVar1 = &(this->AssetPaths).field_0x10;
  this->_padding_ = (longlong)&___7FRemoteObjectMaps_Private_RemoteObject_UE__6B_;
  iVar3 = *(int *)&(this->AssetPaths).field_0x28;
  iVar15 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->AssetPaths).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_1421b65fd;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar9 = local_res10 + -1 + iVar15;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_1421b65fd:
  uVar12 = *(uint *)&(this->AssetPaths).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar13);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->AssetPaths).field_0x8 -
                       *(int *)&(this->AssetPaths).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->AssetPaths).field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&(this->AssetPaths).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_1421b6700;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_1421b6700:
  while( true ) {
    if (*(int *)&(this->AssetPaths).field_0x8 - *(int *)&(this->AssetPaths).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FRemoteObjectId,FRemoteObjectPathName_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    puVar4 = *(undefined8 **)
              (*(longlong *)&this->AssetPaths + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if (puVar4 != (undefined8 *)0x0) {
      if ((void *)puVar4[2] != (void *)0x0) {
        FMemory::Free((void *)puVar4[2]);
      }
      if ((void *)*puVar4 != (void *)0x0) {
        FMemory::Free((void *)*puVar4);
      }
      ::operator_delete(puVar4,0x20);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  *(undefined4 *)&(this->AssetPaths).field_0x48 = 0;
  pvVar5 = *(void **)&(this->AssetPaths).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FRemoteObjectId,FRemoteObjectPathName_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRemoteObjectId,FRemoteObjectPathName_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRemoteObjectId,FRemoteObjectPathName_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AssetPaths);
  FRemoteObjectStubMap::~FRemoteObjectStubMap(&this->RemoteObjects);
                    /* WARNING: Could not recover jumptable at 0x0001421b67bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ObjectMapCritical);
  return;
}

// FindOrAddRemoteObjectStub @ 1421cbc60

FRemoteObjectStub * __thiscall
UE::RemoteObject::Private::FRemoteObjectMaps::FindOrAddRemoteObjectStub
          (FRemoteObjectMaps *this,UObject *param_1,FRemoteServerId param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  FRemoteObjectStub *pFVar7;
  FRemoteObjectStub **ppFVar8;
  FUObjectItem *pFVar9;
  FRemoteObjectPathName *pFVar10;
  FUObjectItem *pFVar11;
  UObject *pUVar12;
  
  lpCriticalSection = &this->ObjectMapCritical;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FRemoteObjectStub *)(*pcVar2)();
    return pFVar7;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar11 = (FUObjectItem *)0x0;
  ppFVar8 = FRemoteObjectStubMap::FindOrAdd(&this->RemoteObjects,(FRemoteObjectId)0x0);
  if (*ppFVar8 == (FRemoteObjectStub *)0x0) {
    pFVar7 = ::operator_new(0x38);
    if (pFVar7 == (FRemoteObjectStub *)0x0) {
      pFVar7 = (FRemoteObjectStub *)0x0;
    }
    else {
      (pFVar7->Id).field0_0x0.Id = 0;
      (pFVar7->OuterId).field0_0x0.Id = 0;
      (pFVar7->Name).ComparisonIndex = 0;
      (pFVar7->Name).Number = 0;
      (pFVar7->Class).PathNameOrClass = 0;
      pFVar7->SerialNumber = 0;
      pFVar7->ResidentServerId = 0;
      pFVar7->OwningServerId = 0;
      (pFVar7->PhysicsIslandId).PhysicsServerId = 0;
      (pFVar7->PhysicsIslandId).PhysicsLocalIslandId = 0;
      if (param_1 != (UObject *)0x0) {
        pUVar12 = *(UObject **)&param_1->field_0x10;
        if ((pUVar12 == (UObject *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InClass",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObject.cpp"
                               ,0x1e7,L"FRemoteClassStub requires a valid class"), bVar5)) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FRemoteObjectStub *)(*pcVar2)();
          return pFVar7;
        }
        iVar1 = *(int *)&pUVar12->field_0xc;
        if ((iVar1 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x443,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FRemoteObjectStub *)(*pcVar2)();
          return pFVar7;
        }
        pFVar9 = pFVar11;
        if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
          pFVar9 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
        }
        if (((uint)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x39) & 1) == 0) {
          pFVar10 = StoreAssetPath(ObjectMaps,pUVar12);
          pUVar12 = (UObject *)((ulonglong)pFVar10 | 1);
        }
        (pFVar7->Class).PathNameOrClass = (ulong64)pUVar12;
        if (*(longlong *)&param_1->field_0x20 != 0) {
          (pFVar7->OuterId).field0_0x0.Id = 0;
        }
      }
    }
    *ppFVar8 = pFVar7;
    uVar3 = (uint)((pFVar7->Id).field0_0x0.Id >> 0x20);
    uVar6 = 0x3fd;
    if (uVar3 >> 0x16 != 0) {
      uVar6 = uVar3 >> 0x16;
    }
    (pFVar7->OwningServerId).Id = uVar6;
  }
  else if (((*ppFVar8)->Class).PathNameOrClass == 0) {
    pUVar12 = *(UObject **)&param_1->field_0x10;
    if ((pUVar12 == (UObject *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InClass",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObject.cpp"
                           ,0x1e7,L"FRemoteClassStub requires a valid class"), bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FRemoteObjectStub *)(*pcVar2)();
      return pFVar7;
    }
    iVar1 = *(int *)&pUVar12->field_0xc;
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x443,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FRemoteObjectStub *)(*pcVar2)();
      return pFVar7;
    }
    pFVar9 = pFVar11;
    if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
      pFVar9 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
    }
    if (((uint)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x39) & 1) == 0) {
      pFVar10 = StoreAssetPath(ObjectMaps,pUVar12);
      pUVar12 = (UObject *)((ulonglong)pFVar10 | 1);
    }
    ((*ppFVar8)->Class).PathNameOrClass = (ulong64)pUVar12;
  }
  iVar1 = *(int *)&param_1->field_0xc;
  if ((iVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x443,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FRemoteObjectStub *)(*pcVar2)();
    return pFVar7;
  }
  if (((GUObjectArray.ObjObjects.NumElements <= iVar1) ||
      (pFVar11 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1),
      pFVar11 == (FUObjectItem *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObjectItem",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObject.cpp"
                         ,0xb7,
                         L"Attempting to get a serial number for an object that does not exist in the global UObject array (it\'s possible GUObjectArray is not initialized yet, ObjectIndex=%d)"
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FRemoteObjectStub *)(*pcVar2)();
    return pFVar7;
  }
  (*ppFVar8)->SerialNumber = pFVar11->SerialNumber;
  uVar4 = *(undefined4 *)&param_1->field_0x1c;
  pFVar7 = *ppFVar8;
  (pFVar7->Name).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->field_0x18;
  (pFVar7->Name).Number = uVar4;
  ((*ppFVar8)->ResidentServerId).Id = param_2.Id;
  pFVar7 = *ppFVar8;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return pFVar7;
}

// FindRemoteObjectStub @ 1421cbf70

/* WARNING: Type propagation algorithm not settling */

FRemoteObjectStub * __thiscall
UE::RemoteObject::Private::FRemoteObjectMaps::FindRemoteObjectStub
          (FRemoteObjectMaps *this,FRemoteObjectId param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  FRemoteObjectId FVar4;
  uint uVar5;
  bool bVar6;
  FRemoteObjectStub *pFVar7;
  long64 lVar8;
  longlong lVar9;
  FRemoteObjectStub *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  
  lpCriticalSection = &this->ObjectMapCritical;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FRemoteObjectStub *)(*pcVar3)();
    return pFVar7;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar14 = (ulonglong)param_1.field0_0x0 >> 0x36;
  if (param_1.field0_0x0._4_4_ >> 0x16 == FRemoteServerId::GlobalServerId.Id) {
    uVar14 = 0x3fd;
  }
  uVar12 = (ulonglong)param_1.field0_0x0 >> 1 & 0x1fffffffffffff;
  FVar4.field0_0x0 = (FRemoteObjectId_u_0)((uVar14 << 0x35 | uVar12) * 2);
  uVar5 = FVar4.field0_0x0._4_4_;
  uVar11 = uVar5 >> 0x16;
  if (uVar5 >> 0x16 == FRemoteServerId::GlobalServerId.Id) {
    uVar11 = 0x3fd;
  }
  pFVar7 = (FRemoteObjectStub *)0x0;
  uVar12 = (ulonglong)uVar11 << 0x35 | uVar12;
  if (*(int *)&(this->RemoteObjects).field_0x10 != *(int *)&(this->RemoteObjects).field_0x3c) {
    puVar13 = *(undefined1 **)&(this->RemoteObjects).field_0x48;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->RemoteObjects).field_0x40;
    }
    iVar2 = *(int *)(puVar13 +
                    ((ulonglong)(*(int *)&(this->RemoteObjects).field_0x50 - 1) &
                    (uVar12 >> 0x1f) * 0x17 + uVar12 * 2) * 4);
    while (iVar2 != -1) {
      lVar1 = (longlong)iVar2 * 0x18;
      lVar8 = FRemoteObjectId::Compare
                        ((FRemoteObjectId *)(*(longlong *)&(this->RemoteObjects).field_0x8 + lVar1),
                         FVar4);
      lVar9 = *(longlong *)&(this->RemoteObjects).field_0x8;
      if (lVar8 == 0) {
        lVar9 = lVar9 + lVar1;
        pFVar10 = (FRemoteObjectStub *)(lVar9 + 8);
        if (lVar9 == 0) {
          pFVar10 = pFVar7;
        }
        pFVar7 = (FRemoteObjectStub *)0x0;
        if (pFVar10 != (FRemoteObjectStub *)0x0) {
          pFVar7 = *(FRemoteObjectStub **)&pFVar10->Id;
        }
        break;
      }
      iVar2 = *(int *)(lVar9 + 0x10 + lVar1);
    }
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return pFVar7;
}

// StoreAssetPath @ 1421e8c40

FRemoteObjectPathName * __thiscall
UE::RemoteObject::Private::FRemoteObjectMaps::StoreAssetPath
          (FRemoteObjectMaps *this,UObject *param_1)

{
  TMap<FRemoteObjectId,FRemoteObjectPathName_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRemoteObjectId,FRemoteObjectPathName_*,0>_>
  *this_00;
  int iVar1;
  long64 lVar2;
  FRemoteObjectPathName *pFVar3;
  FRemoteObjectPathName *pFVar4;
  longlong lVar5;
  undefined1 *puVar6;
  int local_res8 [4];
  FRemoteObjectId_u_0 local_res18;
  FRemoteObjectId_u_0 *local_res20;
  
  this_00 = &this->AssetPaths;
  pFVar4 = (FRemoteObjectPathName *)0x0;
  if (FRemoteServerId::GlobalServerId.Id == 0) {
    pFVar4 = (FRemoteObjectPathName *)0xeec00000;
  }
  local_res18.Id = 0;
  if (*(int *)&(this->AssetPaths).field_0x8 != *(int *)&(this->AssetPaths).field_0x34) {
    puVar6 = *(undefined1 **)&(this->AssetPaths).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->AssetPaths).field_0x38;
    }
    iVar1 = *(int *)(puVar6 + ((ulonglong)(*(int *)&(this->AssetPaths).field_0x48 - 1) &
                              (ulonglong)pFVar4) * 4);
    while (iVar1 != -1) {
      lVar5 = (longlong)iVar1 * 0x18;
      lVar2 = FRemoteObjectId::Compare
                        ((FRemoteObjectId *)(*(longlong *)&this_00->field_0x0 + lVar5),
                         (FRemoteObjectId)local_res18._s_0);
      if (lVar2 == 0) {
        lVar5 = lVar5 + *(longlong *)&this_00->field_0x0;
        if (lVar5 != 0) goto LAB_1421e8d0a;
        break;
      }
      iVar1 = *(int *)(lVar5 + 0x10 + *(longlong *)&this_00->field_0x0);
    }
  }
  local_res20 = &local_res18;
  TSet<TTuple<FRemoteObjectId,FRemoteObjectPathName_*>,TDefaultMapHashableKeyFuncs<FRemoteObjectId,FRemoteObjectPathName_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FRemoteObjectId_const_&>_>
            ((TSet<TTuple<FRemoteObjectId,FRemoteObjectPathName_*>,TDefaultMapHashableKeyFuncs<FRemoteObjectId,FRemoteObjectPathName_*,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_res8,(TKeyInitializer<FRemoteObjectId_const_&> *)pFVar4,
             (bool *)&local_res20);
  lVar5 = *(longlong *)&this_00->field_0x0 + (longlong)local_res8[0] * 0x18;
LAB_1421e8d0a:
  pFVar4 = *(FRemoteObjectPathName **)(lVar5 + 8);
  if (pFVar4 == (FRemoteObjectPathName *)0x0) {
    pFVar3 = ::operator_new(0x20);
    pFVar4 = (FRemoteObjectPathName *)0x0;
    if (pFVar3 != (FRemoteObjectPathName *)0x0) {
      *(undefined8 *)pFVar3 = 0;
      *(undefined8 *)&pFVar3->field_0x8 = 0;
      *(undefined8 *)&pFVar3->field_0x10 = 0;
      *(undefined8 *)&pFVar3->field_0x18 = 0;
      AppendObjectToPathName(param_1,pFVar3);
      pFVar4 = pFVar3;
    }
    *(FRemoteObjectPathName **)(lVar5 + 8) = pFVar4;
  }
  return pFVar4;
}

