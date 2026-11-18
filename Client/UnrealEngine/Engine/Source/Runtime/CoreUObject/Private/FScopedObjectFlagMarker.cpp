// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// RestoreObjectFlags @ 142284270

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FScopedObjectFlagMarker::RestoreObjectFlags(FScopedObjectFlagMarker *this)

{
  longlong lVar1;
  EObjectFlags EVar2;
  EInternalObjectFlags EVar3;
  UObjectBase *this_00;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FUObjectItem *pFVar8;
  EInternalObjectFlags EVar9;
  ulonglong uVar10;
  uint uVar11;
  FUObjectItem *pFVar12;
  FString local_b8;
  FString local_a8;
  longlong *local_98;
  undefined1 auStack_90 [16];
  uint uStack_80;
  uint uStack_7c;
  longlong local_78;
  TSet<TTuple<UObject_*,FScopedObjectFlagMarker::FStoredObjectFlags>,TDefaultMapHashableKeyFuncs<UObject_*,FScopedObjectFlagMarker::FStoredObjectFlags,0>,FDefaultSetAllocator>
  *pTStack_70;
  TSet<TTuple<UObject_*,FScopedObjectFlagMarker::FStoredObjectFlags>,TDefaultMapHashableKeyFuncs<UObject_*,FScopedObjectFlagMarker::FStoredObjectFlags,0>,FDefaultSetAllocator>
  *local_68;
  undefined2 local_60;
  undefined1 local_58 [32];
  longlong local_38;
  TSet<TTuple<UObject_*,FScopedObjectFlagMarker::FStoredObjectFlags>,TDefaultMapHashableKeyFuncs<UObject_*,FScopedObjectFlagMarker::FStoredObjectFlags,0>,FDefaultSetAllocator>
  *pTStack_30;
  
  TSet<TTuple<UObject_*,FScopedObjectFlagMarker::FStoredObjectFlags>,TDefaultMapHashableKeyFuncs<UObject_*,FScopedObjectFlagMarker::FStoredObjectFlags,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_58,
             (TSet<TTuple<UObject_*,FScopedObjectFlagMarker::FStoredObjectFlags>,TDefaultMapHashableKeyFuncs<UObject_*,FScopedObjectFlagMarker::FStoredObjectFlags,0>,FDefaultSetAllocator>
              *)this);
  local_60 = 0;
  stack0xffffffffffffff78 = local_58._16_16_;
  local_98 = (longlong *)local_58._0_8_;
  auStack_90._0_8_ = local_58._8_8_;
  local_78 = local_38;
  pTStack_70 = pTStack_30;
  uVar10 = local_58._24_8_ >> 0x20;
  if ((int)local_58._28_4_ < *(int *)(local_58._16_8_ + 0x18)) {
    pFVar12 = (FUObjectItem *)0x0;
    uVar11 = local_58._28_4_;
    local_68 = (TSet<TTuple<UObject_*,FScopedObjectFlagMarker::FStoredObjectFlags>,TDefaultMapHashableKeyFuncs<UObject_*,FScopedObjectFlagMarker::FStoredObjectFlags,0>,FDefaultSetAllocator>
                *)this;
    do {
      this_00 = *(UObjectBase **)(*local_98 + (longlong)(int)uVar10 * 0x18);
      lVar1 = *local_98 + (longlong)(int)uVar11 * 0x18;
      UObjectBase::AtomicallyClearFlags(this_00,RF_MirroredGarbage);
      iVar7 = this_00->InternalIndex;
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x443,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar8 = pFVar12;
      if (iVar7 < GUObjectArray.ObjObjects.NumElements) {
        pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar7);
      }
      do {
        lVar4 = (pFVar8->field0_0x0).FlagsAndRefCount;
        uVar11 = (uint)((ulonglong)lVar4 >> 0x20);
        if ((uVar11 >> 0x15 & 1) == 0) break;
        if (((ulonglong)pFVar8 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar6 = lVar4 == (pFVar8->field0_0x0).FlagsAndRefCount;
        if (bVar6) {
          (pFVar8->field0_0x0).FlagsAndRefCount =
               ((longlong)(int)uVar11 & 0xffffffffffdfffffU) << 0x20 | (longlong)(int)lVar4;
        }
        UNLOCK();
      } while (!bVar6);
      if (((this_00->ObjectFlags >> 0x1e & 1) != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!(FlagsToClear & RF_MirroredGarbage) || (GetFlags() & (FlagsToClear & RF_MirroredGarbage)) == RF_NoFlags"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                             ,0x53,
                             L"RF_MirroredGarbage can not be cleared through ClearFlags function. Use ClearGarbage() instead"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UObjectBase::AtomicallyClearFlags
                (this_00,RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                         RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                         RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                         RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                         RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                         RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                         RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                         RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                         RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|
                         RF_Public);
      iVar7 = this_00->InternalIndex;
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x443,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar8 = pFVar12;
      if (iVar7 < GUObjectArray.ObjObjects.NumElements) {
        pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar7);
      }
      if ((((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x35) & 1) != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!(FlagsToClear & EInternalObjectFlags::Garbage) || (ObjectItem->GetFlags() & (FlagsToClear & EInternalObjectFlags::Garbage)) == EInternalObjectFlags::None"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                             ,0x12f,
                             L"ClearInternalFlags should not clear Garbage flag. Use ClearGarbage() instead"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FUObjectItem::ThisThreadAtomicallyClearedFlag
                (pFVar8,PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                        ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                        AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                        ReachabilityFlag0);
      if ((*(uint *)(lVar1 + 0xc) & 0x200000) == 0) {
        if ((*(uint *)(lVar1 + 8) & 0x40000000) != 0) goto LAB_142284525;
      }
      else {
        if ((*(uint *)(lVar1 + 8) & 0x40000000) == 0) {
          local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b8.Data.ArrayNum = 0;
          local_b8.Data.ArrayMax = 0;
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)this_00,(UObject *)0x0,&local_b8,None);
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!!(PreviousObjectFlags.Flags & RF_MirroredGarbage)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                             ,0x13be,
                             L"%s had internal mirrored flag set but it was not matched in object flags"
                            );
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
LAB_142284525:
        if ((*(uint *)(lVar1 + 0xc) & 0x200000) == 0) {
          local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a8.Data.ArrayNum = 0;
          local_a8.Data.ArrayMax = 0;
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)this_00,(UObject *)0x0,&local_a8,None);
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!!(PreviousObjectFlags.InternalFlags & EInternalObjectFlags::Garbage)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                             ,0x13bf,
                             L"%s had object mirrored flag set but it was not matched in internal flags"
                            );
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar7 = this_00->InternalIndex;
        if ((iVar7 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x443,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar8 = pFVar12;
        if (iVar7 < GUObjectArray.ObjObjects.NumElements) {
          pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar7);
        }
        if ((((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsRooted()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                               ,0xb8,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        UObjectBase::AtomicallySetFlags(this_00,RF_MirroredGarbage);
        iVar7 = this_00->InternalIndex;
        if ((iVar7 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x443,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar8 = pFVar12;
        if (iVar7 < GUObjectArray.ObjObjects.NumElements) {
          pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar7);
        }
        do {
          lVar4 = (pFVar8->field0_0x0).FlagsAndRefCount;
          uVar11 = (uint)((ulonglong)lVar4 >> 0x20);
          if ((uVar11 >> 0x15 & 1) != 0) break;
          if (((ulonglong)pFVar8 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (
                      L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          bVar6 = lVar4 == (pFVar8->field0_0x0).FlagsAndRefCount;
          if (bVar6) {
            (pFVar8->field0_0x0).FlagsAndRefCount =
                 (longlong)(int)uVar11 << 0x20 | (longlong)(int)lVar4 | 0x20000000000000;
          }
          UNLOCK();
        } while (!bVar6);
        iVar7 = this_00->InternalIndex;
        if ((iVar7 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x443,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar8 = pFVar12;
        if (iVar7 < GUObjectArray.ObjObjects.NumElements) {
          pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar7);
        }
        FUObjectItem::ClearRootFlags(pFVar8,Async);
      }
      EVar2 = *(EObjectFlags *)(lVar1 + 8);
      if ((((EVar2 & RF_MirroredGarbage) != RF_NoFlags) &&
          ((this_00->ObjectFlags & EVar2 & RF_MirroredGarbage) != (EVar2 & RF_MirroredGarbage))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!(NewFlags & RF_MirroredGarbage) || (GetFlags() & (NewFlags & RF_MirroredGarbage)) == (NewFlags & RF_MirroredGarbage)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                             ,0x4b,
                             L"RF_MirroredGarbage can not be set through SetFlags function. Use MarkAsGarbage() instead"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UObjectBase::AtomicallySetFlags(this_00,EVar2);
      iVar7 = this_00->InternalIndex;
      EVar3 = *(EInternalObjectFlags *)(lVar1 + 0xc);
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x443,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar8 = pFVar12;
      if (iVar7 < GUObjectArray.ObjObjects.NumElements) {
        pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar7);
      }
      EVar9 = EVar3 & Garbage;
      if (((EVar9 != Borrowed) &&
          (EVar9 != ((EInternalObjectFlags)
                     ((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20) & Garbage))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!(FlagsToSet & EInternalObjectFlags::Garbage) || (FlagsToSet & EInternalObjectFlags::Garbage) == (ObjectItem->GetFlags() & EInternalObjectFlags::Garbage)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                             ,0x10b,
                             L"SetInternalFlags should not set the Garbage flag. Use MarkAsGarbage instead"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FUObjectItem::ThisThreadAtomicallySetFlag(pFVar8,EVar3);
      uStack_80 = uStack_80 & ~auStack_90._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_90);
      uVar10 = (ulonglong)uStack_7c;
      uVar11 = uStack_7c;
    } while ((int)uStack_7c < *(int *)(auStack_90._8_8_ + 0x18));
    if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
      uVar11 = *(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34;
      if (uVar11 < 4) {
        iVar7 = 1;
      }
      else {
        uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar11) && (local_68->HashSize < iVar7)) || (iVar7 < local_68->HashSize)) {
        local_68->HashSize = iVar7;
        TSet<TTuple<UObject_*,FScopedObjectFlagMarker::FStoredObjectFlags>,TDefaultMapHashableKeyFuncs<UObject_*,FScopedObjectFlagMarker::FStoredObjectFlags,0>,FDefaultSetAllocator>
        ::Rehash(local_68);
      }
    }
  }
  return;
}

// SaveObjectFlags @ 1422849c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FScopedObjectFlagMarker::SaveObjectFlags(FScopedObjectFlagMarker *this)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  EInternalObjectFlags EVar6;
  bool bVar7;
  UClass *pUVar8;
  FUObjectItem_u_8 FVar9;
  FUObjectItem_u_8 FVar10;
  TPairInitializer<UObject_*_&&,FScopedObjectFlagMarker::FStoredObjectFlags_&&> local_res8;
  FUObjectItem_u_8 local_res18 [2];
  FUObjectItem_u_8 *local_68;
  FStoredObjectFlags **local_60;
  TObjectIteratorBase<1> local_58;
  
  bVar7 = 1 < *(int *)&(this->StoredObjectFlags).field_0x48;
  if (!bVar7) {
    TSet<TTuple<UObject_*,FScopedObjectFlagMarker::FStoredObjectFlags>,TDefaultMapHashableKeyFuncs<UObject_*,FScopedObjectFlagMarker::FStoredObjectFlags,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UObject_*,FScopedObjectFlagMarker::FStoredObjectFlags>,TDefaultMapHashableKeyFuncs<UObject_*,FScopedObjectFlagMarker::FStoredObjectFlags,0>,FDefaultSetAllocator>
                      *)this);
  }
  FVar10.Object = (UObjectBase *)0x0;
  puVar1 = &(this->StoredObjectFlags).field_0xc;
  *(undefined4 *)&(this->StoredObjectFlags).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->StoredObjectFlags).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StoredObjectFlags).field_0x34 = 0;
  iVar2 = *(int *)&(this->StoredObjectFlags).field_0x2c;
  *(undefined4 *)&(this->StoredObjectFlags).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->StoredObjectFlags).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->StoredObjectFlags).field_0x10,0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->StoredObjectFlags).field_0x48 = 1;
    TSet<TTuple<UObject_*,FScopedObjectFlagMarker::FStoredObjectFlags>,TDefaultMapHashableKeyFuncs<UObject_*,FScopedObjectFlagMarker::FStoredObjectFlags,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UObject_*,FScopedObjectFlagMarker::FStoredObjectFlags>,TDefaultMapHashableKeyFuncs<UObject_*,FScopedObjectFlagMarker::FStoredObjectFlags,0>,FDefaultSetAllocator>
              *)this);
  }
  pUVar8 = Z_Construct_UClass_UObject_NoRegister();
  TObjectIteratorBase<1>::TObjectIteratorBase<1>(&local_58,pUVar8,false,RF_NoFlags,Borrowed);
  lVar5 = local_58._padding_;
joined_r0x000142284a74:
  do {
    if (lVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142284c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)(local_58._padding_ + 0x30));
      return;
    }
    lVar3 = *(longlong *)(lVar5 + 8);
    iVar2 = *(int *)(lVar3 + 0xc);
    if ((iVar2 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x443,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar9.Object = FVar10.Object;
    if (iVar2 < GUObjectArray.ObjObjects.NumElements) {
      FVar9.Object = (UObjectBase *)
                     FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar2);
    }
    local_res8.Value._0_4_ = *(undefined4 *)(lVar3 + 8);
    local_res8.Value._4_4_ =
         (undefined4)
         ((ulonglong)((FUObjectItem_u_0 *)&(FVar9.Object)->_padding_)->FlagsAndRefCount >> 0x20);
    local_res18[0].Object = FVar10.Object;
    if (lVar5 != 0) {
      local_res18[0] = *(FUObjectItem_u_8 *)(lVar5 + 8);
    }
    local_68 = local_res18;
    local_60 = &local_res8.Value;
    TSet<TTuple<UObject_*,FScopedObjectFlagMarker::FStoredObjectFlags>,TDefaultMapHashableKeyFuncs<UObject_*,FScopedObjectFlagMarker::FStoredObjectFlags,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UObject_*_&&,FScopedObjectFlagMarker::FStoredObjectFlags_&&>_>
              ((TSet<TTuple<UObject_*,FScopedObjectFlagMarker::FStoredObjectFlags>,TDefaultMapHashableKeyFuncs<UObject_*,FScopedObjectFlagMarker::FStoredObjectFlags,0>,FDefaultSetAllocator>
                *)this,&local_res8,(bool *)&local_68);
LAB_142284b30:
    do {
      do {
        bVar7 = FUObjectArray::TIterator::Advance((TIterator *)&local_58);
        lVar5 = local_58._padding_;
        if (!bVar7) goto joined_r0x000142284a74;
        FVar9.Object = FVar10.Object;
        if (local_58._padding_ != 0) {
          FVar9.Object = *(FUObjectItem_u_8 *)(local_58._padding_ + 8);
        }
      } while ((local_58.ExclusionFlags &
               ((FUObjectItem_u_8 *)&(FVar9.Object)->ObjectFlags)->ObjectPtrLow) != RF_NoFlags);
      pUVar8 = Z_Construct_UClass_UObject_NoRegister();
      EVar6 = local_58.InternalExclusionFlags;
      if (local_58.Class != pUVar8) {
        pUVar8 = ((FVar9.Object)->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
        iVar2 = (int)(local_58.Class)->_padding_;
        if (((int)pUVar8->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar2 * 8) !=
            &(local_58.Class)->_padding_)) goto LAB_142284b30;
      }
      iVar2 = (FVar9.Object)->InternalIndex;
      if ((iVar2 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x443,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar9.Object = FVar10.Object;
      if (iVar2 < GUObjectArray.ObjObjects.NumElements) {
        FVar9.Object = (UObjectBase *)
                       FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar2);
      }
    } while ((EVar6 & (EInternalObjectFlags)
                      ((ulonglong)((FUObjectItem_u_0 *)&(FVar9.Object)->_padding_)->FlagsAndRefCount
                      >> 0x20)) != Borrowed);
  } while( true );
}

