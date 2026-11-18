// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementRuntime
// Functions: 6

// GetAllReferencedAssetDatas @ 1445435c0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FAssetData,TSizedDefaultAllocator<32>_> * __thiscall
ITypedElementAssetDataInterface::GetAllReferencedAssetDatas
          (ITypedElementAssetDataInterface *this,
          TArray<FAssetData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FScriptTypedElementHandle *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  bool bVar8;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined1 *puVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  FTypedElementInternalData *local_48;
  int local_40;
  
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar13 = 0xffffffff;
  local_48 = (FTypedElementInternalData *)0x0;
  local_40 = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_48 = this_00;
    local_40 = FTypedElementInternalData::AddRef(this_00,true);
    if (local_48 != (FTypedElementInternalData *)0x0) {
      local_res18[0] = 0;
      (**(code **)((longlong)*this + 0x18))(this,__return_storage_ptr__,&local_48,local_res18);
      goto LAB_144543656;
    }
  }
  local_res20 = 0;
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
LAB_144543656:
  iVar7 = local_40;
  if (local_48 != (FTypedElementInternalData *)0x0) {
    lVar12 = (longlong)local_40;
    LOCK();
    local_48->RefCount = local_48->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (local_48->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_40 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar4 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar6 = (byte)iVar7 & 0x1f;
      uVar11 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<FAssetData,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar9;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      if ((*(uint *)(puVar10 + lVar2) & uVar11) == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<FAssetData,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar9;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar4) =
             iVar7;
      }
      *(undefined4 *)(lVar12 * 0x108 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar13 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar12 * 0x108 + 4 + lVar4) = uVar13;
      puVar10 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar10 = *(int *)puVar10 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<FAssetData,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar9;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar11;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return __return_storage_ptr__;
}

// GetAllReferencedAssetDatas @ 1445437c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FAssetData,TSizedDefaultAllocator<32>_> * __thiscall
ITypedElementAssetDataInterface::GetAllReferencedAssetDatas
          (ITypedElementAssetDataInterface *this,
          TArray<FAssetData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FTypedElementHandle *param_1,FTypedElementAssetDataReferencedOptions *param_2)

{
  int iVar1;
  undefined1 auStack_98 [32];
  FAssetData local_78;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_98;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  (**(code **)((longlong)*this + 0x28))(this,&local_78);
  if ((local_78.PackageName != (FName)0x0) && (local_78.AssetName != (FName)0x0)) {
    iVar1 = __return_storage_ptr__->ArrayNum;
    if (iVar1 == __return_storage_ptr__->ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x868,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar1 + 1;
    FAssetData::FAssetData
              ((FAssetData *)
               ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar1 * 0x68),&local_78
              );
  }
  if (local_78.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_78.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_78.TagsAndValues);
  return __return_storage_ptr__;
}

// GetAssetData @ 144543890

/* WARNING: Enum "Type": Some values do not have unique names */

FAssetData * __thiscall
ITypedElementAssetDataInterface::GetAssetData
          (ITypedElementAssetDataInterface *this,FAssetData *__return_storage_ptr__,
          FScriptTypedElementHandle *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  bool bVar8;
  FAssetData *pFVar9;
  undefined1 *puVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 uVar13;
  FTypedElementInternalData *local_38;
  int local_30;
  
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar13 = 0xffffffff;
  local_38 = (FTypedElementInternalData *)0x0;
  local_30 = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_38 = this_00;
    local_30 = FTypedElementInternalData::AddRef(this_00,true);
    if (local_38 != (FTypedElementInternalData *)0x0) {
      (**(code **)((longlong)*this + 0x28))(this,__return_storage_ptr__,&local_38);
      goto LAB_14454394c;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
  (__return_storage_ptr__->PackageName).ComparisonIndex = 0;
  (__return_storage_ptr__->PackageName).Number = 0;
  (__return_storage_ptr__->PackagePath).ComparisonIndex = 0;
  (__return_storage_ptr__->PackagePath).Number = 0;
  (__return_storage_ptr__->AssetName).ComparisonIndex = 0;
  (__return_storage_ptr__->AssetName).Number = 0;
  (__return_storage_ptr__->AssetClass).ComparisonIndex = 0;
  (__return_storage_ptr__->AssetClass).Number = 0;
  (__return_storage_ptr__->AssetClassPath).PackageName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetClassPath).PackageName.Number = 0;
  (__return_storage_ptr__->AssetClassPath).AssetName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetClassPath).AssetName.Number = 0;
  (__return_storage_ptr__->ChunkArrayRegistryHandle).Index = -1;
  __return_storage_ptr__->PackageFlags = 0;
  (__return_storage_ptr__->TagsAndValues).field0_0x0.Loose = (FAssetDataTagMap *)0x0;
  (__return_storage_ptr__->TaggedAssetBundles).Object = (FAssetBundleData *)0x0;
  (__return_storage_ptr__->TaggedAssetBundles).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->ChunkIDs).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (__return_storage_ptr__->ChunkIDs).ArrayNum = 0;
  (__return_storage_ptr__->ChunkIDs).ArrayMax = 2;
LAB_14454394c:
  iVar7 = local_30;
  if (local_38 != (FTypedElementInternalData *)0x0) {
    lVar12 = (longlong)local_30;
    LOCK();
    local_38->RefCount = local_38->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (local_38->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_30 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar4 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar6 = (byte)iVar7 & 0x1f;
      uVar11 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FAssetData *)(*pcVar5)();
          return pFVar9;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      if ((*(uint *)(puVar10 + lVar2) & uVar11) == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FAssetData *)(*pcVar5)();
          return pFVar9;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar4) =
             iVar7;
      }
      *(undefined4 *)(lVar12 * 0x108 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar13 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar12 * 0x108 + 4 + lVar4) = uVar13;
      puVar10 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar10 = *(int *)puVar10 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FAssetData *)(*pcVar5)();
          return pFVar9;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar11;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return __return_storage_ptr__;
}

// GetAssetData @ 144543ac0

FAssetData * __thiscall
ITypedElementAssetDataInterface::GetAssetData
          (ITypedElementAssetDataInterface *this,FAssetData *__return_storage_ptr__,
          FTypedElementHandle *param_1)

{
  (__return_storage_ptr__->ChunkArrayRegistryHandle).Index = -1;
  (__return_storage_ptr__->PackageName).ComparisonIndex = 0;
  (__return_storage_ptr__->PackageName).Number = 0;
  (__return_storage_ptr__->PackagePath).ComparisonIndex = 0;
  (__return_storage_ptr__->PackagePath).Number = 0;
  (__return_storage_ptr__->AssetName).ComparisonIndex = 0;
  (__return_storage_ptr__->AssetName).Number = 0;
  (__return_storage_ptr__->AssetClass).ComparisonIndex = 0;
  (__return_storage_ptr__->AssetClass).Number = 0;
  (__return_storage_ptr__->AssetClassPath).PackageName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetClassPath).PackageName.Number = 0;
  (__return_storage_ptr__->AssetClassPath).AssetName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetClassPath).AssetName.Number = 0;
  __return_storage_ptr__->PackageFlags = 0;
  (__return_storage_ptr__->TagsAndValues).field0_0x0.Loose = (FAssetDataTagMap *)0x0;
  (__return_storage_ptr__->TaggedAssetBundles).Object = (FAssetBundleData *)0x0;
  (__return_storage_ptr__->TaggedAssetBundles).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->ChunkIDs).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (__return_storage_ptr__->ChunkIDs).ArrayNum = 0;
  (__return_storage_ptr__->ChunkIDs).ArrayMax = 2;
  return __return_storage_ptr__;
}

// execGetAllReferencedAssetDatas @ 14454be80

void __cdecl
ITypedElementAssetDataInterface::execGetAllReferencedAssetDatas
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  void **ppvVar3;
  void *local_res8;
  FAssetData *local_18;
  int local_10;
  
  local_res8 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  ppvVar3 = &local_res8;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x10))(param_1,&local_18,ppvVar3);
  if (param_3 != puVar2) {
    DestructItems<FAssetData,int>(*(FAssetData **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar2;
    *puVar2 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar2 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
    puVar2[1] = 0;
  }
  DestructItems<FAssetData,int>(local_18,local_10);
  if (local_18 != (FAssetData *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_res8 != (void *)0x0) {
    *(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1;
    if (*(int *)((longlong)local_res8 + 8) == 0) {
      ::operator_delete(local_res8,0x10);
    }
  }
  return;
}

// execGetAssetData @ 14454bfb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ITypedElementAssetDataInterface::execGetAssetData(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  void **ppvVar5;
  undefined1 auStack_b8 [32];
  void *local_98;
  undefined1 local_90 [56];
  FAssetDataTagMapSharedView local_58 [2];
  TReferenceControllerBase<1> *local_48;
  void *local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  ppvVar5 = &local_98;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar5 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar4 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x20))(param_1,local_90,ppvVar5);
  *(undefined8 *)param_3 = *puVar4;
  *(undefined8 *)((longlong)param_3 + 8) = puVar4[1];
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar4[2];
  *(undefined8 *)((longlong)param_3 + 0x18) = puVar4[3];
  uVar3 = puVar4[5];
  *(undefined8 *)((longlong)param_3 + 0x20) = puVar4[4];
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar3;
  *(undefined4 *)((longlong)param_3 + 0x30) = *(undefined4 *)(puVar4 + 6);
  *(undefined4 *)((longlong)param_3 + 0x34) = *(undefined4 *)((longlong)puVar4 + 0x34);
  FAssetDataTagMapSharedView::operator=
            ((FAssetDataTagMapSharedView *)((longlong)param_3 + 0x38),
             (FAssetDataTagMapSharedView *)(puVar4 + 7));
  puVar1 = puVar4 + 8;
  if ((undefined8 *)((longlong)param_3 + 0x40) != puVar1) {
    *(undefined8 *)((longlong)param_3 + 0x40) = *puVar1;
    *puVar1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 0x48),
               (FSharedReferencer<1> *)(puVar4 + 9));
  }
  if ((undefined8 *)((longlong)param_3 + 0x50) != puVar4 + 10) {
    if (puVar4[0xb] == 0) {
      *(undefined8 *)((longlong)param_3 + 0x50) = puVar4[10];
    }
    if (*(void **)((longlong)param_3 + 0x58) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_3 + 0x58));
    }
    *(undefined8 *)((longlong)param_3 + 0x58) = puVar4[0xb];
    puVar4[0xb] = 0;
    *(undefined4 *)((longlong)param_3 + 0x60) = *(undefined4 *)(puVar4 + 0xc);
    *(undefined4 *)((longlong)param_3 + 100) = *(undefined4 *)((longlong)puVar4 + 100);
    *(undefined4 *)(puVar4 + 0xc) = 0;
    *(undefined4 *)((longlong)puVar4 + 100) = 2;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(local_58);
  if (local_98 != (void *)0x0) {
    *(int *)((longlong)local_98 + 8) = *(int *)((longlong)local_98 + 8) + -1;
    if (*(int *)((longlong)local_98 + 8) == 0) {
      ::operator_delete(local_98,0x10);
    }
  }
  return;
}

