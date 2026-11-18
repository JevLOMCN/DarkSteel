// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// FArchiveHasReferences @ 141ed1a00

FArchiveHasReferences * __thiscall
FArchiveHasReferences::FArchiveHasReferences
          (FArchiveHasReferences *this,UObject *param_1,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_2)

{
  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  FArchiveHasReferences *pFVar4;
  FReferenceCollector local_28;
  FArchiveHasReferences *local_18;
  
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->Target = param_1;
  this->_padding_ = (longlong)&___7FArchiveHasReferences__6B_;
  this->PotentiallyReferencedObjects = param_2;
  this->Result = false;
  if (param_1 == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTarget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\ArchiveHasReferences.cpp"
                       ,0xc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FArchiveHasReferences *)(*pcVar2)();
      return pFVar4;
    }
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 1;
  (**(code **)(*(longlong *)param_1 + 200))(param_1,this);
  local_28._padding_ =
       (longlong)
       &`FArchiveHasReferences::FArchiveHasReferences'::`2'::FArchiveProxyCollector::_vftable_;
  local_28.DefaultReferenceCollectorArchive.Ptr = (FReferenceCollectorArchive *)0x0;
  local_18 = this;
  if (this->Result == false) {
    UClass::CallAddReferencedObjects(*(UClass **)&param_1->field_0x10,param_1,&local_28);
  }
  FReferenceCollector::~FReferenceCollector(&local_28);
  return this;
}

// operator<< @ 141ed6bb0

FArchive * __thiscall
FArchiveHasReferences::operator<<(FArchiveHasReferences *this,UObject **param_1)

{
  UObject *pUVar1;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar2;
  int iVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  
  pUVar1 = *param_1;
  if ((pUVar1 != (UObject *)0x0) && (pUVar1 != this->Target)) {
    pTVar2 = this->PotentiallyReferencedObjects;
    uVar4 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    if (*(int *)&(pTVar2->Elements).field_0x8 != *(int *)&(pTVar2->Elements).field_0x34) {
      FVar5 = (pTVar2->Hash).SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)&pTVar2->Hash;
      }
      iVar3 = *(int *)((longlong)FVar5 +
                      (ulonglong)(pTVar2->HashSize - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
      if (iVar3 != -1) {
        while (*(UObject **)(*(longlong *)&pTVar2->Elements + (longlong)iVar3 * 0x10) != pUVar1) {
          iVar3 = *(int *)(*(longlong *)&pTVar2->Elements + 8 + (longlong)iVar3 * 0x10);
          if (iVar3 == -1) {
            return (FArchive *)this;
          }
        }
        this->Result = true;
      }
    }
  }
  return (FArchive *)this;
}

// GetAllReferencers @ 141ef86b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __cdecl
FArchiveHasReferences::GetAllReferencers
          (TArray<UObject_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar6;
  ulonglong uVar7;
  int iVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  ForElementType<unsigned_int> FVar17;
  undefined1 auStackY_108 [32];
  uint local_d8;
  uint uStack_d4;
  uint uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  UObject *local_b8;
  longlong *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a8;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  uint local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  uVar2 = param_1->ArrayNum;
  pFVar11 = (param_1->AllocatorInstance).Data;
  if (((int)uVar2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar6;
  }
  uVar10 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if (uVar2 == 0) goto LAB_141ef8981;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar2);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88,uVar2);
  uVar12 = 1;
  if (3 < uVar2) {
    uVar14 = (ulonglong)((uVar2 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((local_40 != 0) && ((int)uVar12 <= (int)local_40)) goto LAB_141ef8981;
  local_40 = uVar12;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar12 != 0) {
    uVar13 = uVar12;
    if (uVar12 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar13 = 0;
        goto LAB_141ef87c4;
      }
    }
    else {
LAB_141ef87c4:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar13,4);
    }
    if (0 < (int)uVar12) {
      uVar15 = (ulonglong)uVar12;
      uVar14 = uVar10;
      do {
        FVar9.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_48.Data;
        }
        uVar7 = uVar14 & (longlong)(int)uVar12 - 1U;
        uVar14 = uVar14 + 1;
        *(undefined4 *)(FVar9.Data + uVar7 * 4) = 0xffffffff;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  if (local_40 != 0) {
    local_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    local_d8 = 0;
    uStack_d4 = 1;
    uStack_c4 = 0;
    uStack_c0 = 0;
    if (local_60 != 0) {
      FVar17 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = local_68;
      }
      uVar12 = *(uint *)FVar17;
      uVar14 = uVar10;
      while (uVar12 == 0) {
        uStack_c0 = (int)uVar14 + 0x20;
        uVar14 = (ulonglong)uStack_c0;
        iVar8 = (int)uVar10;
        local_d8 = iVar8 + 1;
        uVar10 = (ulonglong)local_d8;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_d8)
        goto LAB_141ef88c9;
        uVar12 = ((uint *)((longlong)FVar17 + 4))[iVar8];
      }
      uStack_d4 = -uVar12 & uVar12;
      uVar10 = (ulonglong)uStack_d4 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_c4 = (int)lVar3 + -1 + uStack_c0;
      uVar10 = (ulonglong)uStack_c4;
      if ((int)local_60 < (int)uStack_c4) {
LAB_141ef88c9:
        uVar10 = (ulonglong)local_60;
        uStack_c4 = local_60;
      }
    }
    local_b0 = (longlong *)local_88;
    local_a8._padding_ = CONCAT44(uStack_d4,local_d8);
    local_a8.CurrentBitIndex = uStack_c4;
    local_a8.UnvisitedBitMask = 0xffffffff;
    local_a8._28_4_ = uStack_bc;
    local_a8.BaseBitIndex = uStack_c0;
    if ((int)uVar10 < (int)local_60) {
      do {
        puVar16 = (ulonglong *)((longlong)(int)uVar10 * 0x10 + *local_b0);
        uVar12 = ((uint)(*puVar16 >> 0x14) & 0xffff ^ (uint)(*puVar16 >> 4)) * -0x7a143595;
        uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
        uVar12 = (uVar12 >> 0x10 ^ uVar12) & local_40 - 1;
        *(uint *)((longlong)puVar16 + 0xc) = uVar12;
        FVar9.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_48.Data;
        }
        uVar14 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(FVar9.Data + uVar14 * 4);
        *(int *)(FVar9.Data + uVar14 * 4) = (int)uVar10;
        local_a8.UnvisitedBitMask = local_a8.UnvisitedBitMask & ~local_a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a8);
        uVar10 = (ulonglong)(uint)local_a8.CurrentBitIndex;
      } while (local_a8.CurrentBitIndex < (local_a8.Array)->NumBits);
    }
  }
LAB_141ef8981:
  pFVar1 = pFVar11 + (longlong)(int)uVar2 * 8;
  for (; pFVar11 != pFVar1; pFVar11 = pFVar11 + 8) {
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*_const_&>
              ((TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)local_88,
               &local_b8,(bool *)pFVar11);
  }
  GetAllReferencers(__return_storage_ptr__,
                    (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)local_88,
                    param_2);
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  iVar8 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = -1;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return __return_storage_ptr__;
}

// GetAllReferencers @ 141ef8a80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __cdecl
FArchiveHasReferences::GetAllReferencers
          (TArray<UObject_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_2)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FUObjectItem *pFVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FUObjectItem *pFVar10;
  UClass *pUVar11;
  ForElementType<FSetElementId> FVar12;
  UObjectBase *pUVar13;
  UObjectBase *local_128;
  TIterator local_120;
  UClass *local_108;
  EObjectFlags local_100;
  EInternalObjectFlags local_fc;
  FReferenceCollector local_f8;
  FArchiveState *local_e8;
  FArchiveState local_d8;
  UObjectBase *local_48;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_40;
  char local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (0 < *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34) {
    pUVar8 = Z_Construct_UClass_UObject_NoRegister();
    local_120.Index = -1;
    local_120.CurrentObject = (FUObjectItem *)0x0;
    local_120.Array = &GUObjectArray;
    FUObjectArray::TIterator::Advance(&local_120);
    local_100 = RF_NoFlags;
    local_108 = pUVar8;
    local_fc = UE::GetAsyncLoadingInternalFlagsExclusion();
    local_fc = local_fc | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted);
    if ((pUVar8 == (UClass *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Class",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectIterator.h"
                           ,0x70,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar9;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&(local_120.Array)->ObjObjectsCritical);
    do {
      pFVar4 = local_120.CurrentObject;
      if (local_120.CurrentObject == (FUObjectItem *)0x0) {
        pUVar13 = (UObjectBase *)0x0;
      }
      else {
        pUVar13 = ((local_120.CurrentObject)->field1_0x8).Object;
      }
      if (((local_100 & pUVar13->ObjectFlags) == RF_NoFlags) &&
         (pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar13->InternalIndex),
         (local_fc &
         (EInternalObjectFlags)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x20)) ==
         Borrowed)) {
        pUVar11 = Z_Construct_UClass_UObject_NoRegister();
        if (pUVar8 == pUVar11) break;
        pUVar11 = (pUVar13->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
        iVar7 = (int)pUVar8->_padding_;
        if ((iVar7 <= (int)pUVar11->_padding_) &&
           ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar7 * 8) ==
            &pUVar8->_padding_)) break;
      }
      bVar5 = FUObjectArray::TIterator::Advance(&local_120);
      pUVar8 = local_108;
      pFVar4 = local_120.CurrentObject;
    } while (bVar5);
joined_r0x000141ef8bcb:
    if (pFVar4 != (FUObjectItem *)0x0) {
      pUVar13 = (pFVar4->field1_0x8).Object;
      local_128 = pUVar13;
      if ((param_2 != (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)0x0) &&
         (uVar6 = ((uint)((ulonglong)pUVar13 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar13 >> 4)) *
                  -0x7a143595, uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb,
         *(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34)) {
        FVar1 = (param_2->Hash).SecondaryData;
        FVar12 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar12 = FVar1;
        }
        iVar7 = *(int *)((longlong)FVar12 +
                        (ulonglong)(param_2->HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
        if (iVar7 != -1) {
          do {
            if (*(UObjectBase **)(*(longlong *)&param_2->Elements + (longlong)iVar7 * 0x10) ==
                pUVar13) goto LAB_141ef8e34;
            iVar7 = *(int *)(*(longlong *)&param_2->Elements + 8 + (longlong)iVar7 * 0x10);
          } while (iVar7 != -1);
        }
      }
      uVar6 = ((uint)((ulonglong)pUVar13 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar13 >> 4)) *
              -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
        FVar1 = (param_1->Hash).SecondaryData;
        FVar12 = (ForElementType<FSetElementId>)&param_1->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar12 = FVar1;
        }
        iVar7 = *(int *)((longlong)FVar12 +
                        (ulonglong)(param_1->HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
        if (iVar7 != -1) {
          do {
            if (*(UObjectBase **)(*(longlong *)&param_1->Elements + (longlong)iVar7 * 0x10) ==
                pUVar13) {
              if (iVar7 != -1) goto LAB_141ef8e34;
              break;
            }
            iVar7 = *(int *)(*(longlong *)&param_1->Elements + 8 + (longlong)iVar7 * 0x10);
          } while (iVar7 != -1);
        }
      }
      FArchiveState::FArchiveState(&local_d8);
      local_d8._padding_ = (longlong)&___7FArchiveHasReferences__6B_;
      local_38 = '\0';
      local_48 = pUVar13;
      local_40 = param_1;
      if ((pUVar13 == (UObjectBase *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InTarget",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\ArchiveHasReferences.cpp"
                             ,0xc,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      local_d8.ArIsObjectReferenceCollector = '\x01';
      (**(code **)(pUVar13->_padding_ + 200))(pUVar13,&local_d8);
      local_f8._padding_ =
           (longlong)
           &`FArchiveHasReferences::FArchiveHasReferences'::`2'::FArchiveProxyCollector::_vftable_;
      local_e8 = &local_d8;
      local_f8.DefaultReferenceCollectorArchive.Ptr = (FReferenceCollectorArchive *)0x0;
      if (local_38 == '\0') {
        UClass::CallAddReferencedObjects
                  ((pUVar13->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr,(UObject *)pUVar13,
                   &local_f8);
      }
      FReferenceCollector::~FReferenceCollector(&local_f8);
      if (local_38 != '\0') {
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_128) &&
            ((FScriptContainerElement *)&local_128 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar9;
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        *(UObjectBase **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
             local_128;
      }
      FArchive::~FArchive((FArchive *)&local_d8);
LAB_141ef8e34:
      do {
        do {
          bVar5 = FUObjectArray::TIterator::Advance(&local_120);
          pFVar4 = local_120.CurrentObject;
          if (!bVar5) goto joined_r0x000141ef8bcb;
          if (local_120.CurrentObject == (FUObjectItem *)0x0) {
            pUVar13 = (UObjectBase *)0x0;
          }
          else {
            pUVar13 = ((local_120.CurrentObject)->field1_0x8).Object;
          }
        } while ((local_100 & pUVar13->ObjectFlags) != RF_NoFlags);
        pUVar8 = Z_Construct_UClass_UObject_NoRegister();
        if (local_108 != pUVar8) {
          pUVar8 = (pUVar13->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
          iVar7 = (int)local_108->_padding_;
          if (((int)pUVar8->_padding_ < iVar7) ||
             ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar7 * 8) !=
              &local_108->_padding_)) goto LAB_141ef8e34;
        }
        pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar13->InternalIndex);
      } while ((local_fc &
               (EInternalObjectFlags)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x20)) !=
               Borrowed);
      goto joined_r0x000141ef8bcb;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&(local_120.Array)->ObjObjectsCritical);
  }
  return __return_storage_ptr__;
}

