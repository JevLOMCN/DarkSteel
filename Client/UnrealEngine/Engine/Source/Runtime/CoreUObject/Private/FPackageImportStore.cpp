// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// FindOrGetImportCell @ 142322f20

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

VCell * __thiscall
FPackageImportStore::FindOrGetImportCell
          (FPackageImportStore *this,FAsyncPackageHeaderData *param_1,FPackageObjectIndex param_2)

{
  FPlatformRWLock *SRWLock;
  longlong lVar1;
  FGlobalImportStore *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  VCell *pVVar6;
  FPublicExportKey *pFVar7;
  char *pcVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  TArrayView<FPackageId_const_,int> local_28;
  FPublicExportKey local_18;
  
  uVar10 = param_2.TypeAndId >> 0x3e;
  if (uVar10 == 1) {
    pFVar2 = this->GlobalImportStore;
    SRWLock = &pFVar2->ScriptObjectsLock;
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    if (*(int *)&(pFVar2->ScriptCells).field_0x8 != *(int *)&(pFVar2->ScriptCells).field_0x34) {
      puVar9 = *(undefined1 **)&(pFVar2->ScriptCells).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(pFVar2->ScriptCells).field_0x38;
      }
      iVar5 = *(int *)(puVar9 + ((ulonglong)(*(int *)&(pFVar2->ScriptCells).field_0x48 - 1) &
                                param_2.TypeAndId & 0xffffffff) * 4);
      if (iVar5 != -1) {
        do {
          lVar1 = *(longlong *)&pFVar2->ScriptCells + (longlong)iVar5 * 0x18;
          if (*(ulong64 *)(*(longlong *)&pFVar2->ScriptCells + (longlong)iVar5 * 0x18) ==
              param_2.TypeAndId) {
            if (lVar1 != 0) {
              pVVar6 = *(VCell **)(lVar1 + 8);
              ReleaseSRWLockShared((PSRWLOCK)SRWLock);
              if (pVVar6 != (VCell *)0x0) {
                return pVVar6;
              }
              goto LAB_142323073;
            }
            break;
          }
          iVar5 = *(int *)(lVar1 + 0x10);
        } while (iVar5 != -1);
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
LAB_142323073:
    iVar5 = 0x976;
  }
  else {
    if ((uVar10 != 2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("GlobalIndex.IsImport()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                           ,0x971,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pVVar6 = (VCell *)(*pcVar3)();
      return pVVar6;
    }
    if (uVar10 != 2) {
      if (param_2.TypeAndId == 0xffffffffffffffff) {
        return (VCell *)0x0;
      }
      iVar5 = 0x97f;
      pcVar8 = "GlobalIndex.IsNull()";
      goto LAB_142323080;
    }
    local_28.DataPtr = (param_1->ImportedPackageIds).DataPtr;
    pFVar2 = this->GlobalImportStore;
    local_28.ArrayNum = (param_1->ImportedPackageIds).ArrayNum;
    pFVar7 = FPublicExportKey::FromPackageImport
                       (&local_18,param_2,&local_28,
                        (TArrayView<unsigned___int64_const_,int> *)&param_1->_padding_);
    pVVar6 = FGlobalImportStore::FindPublicExportCell(pFVar2,pFVar7);
    if (pVVar6 != (VCell *)0x0) {
      return pVVar6;
    }
    iVar5 = 0x97b;
  }
  pcVar8 = "Cell";
LAB_142323080:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar8,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                     ,iVar5,L"");
  if (!bVar4) {
    return (VCell *)0x0;
  }
  pcVar3 = (code *)swi(3);
  pVVar6 = (VCell *)(*pcVar3)();
  return pVVar6;
}

// GetImportName @ 1423269b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FString * __thiscall
FPackageImportStore::GetImportName
          (FPackageImportStore *this,FString *__return_storage_ptr__,
          FAsyncPackageHeaderData *param_1,FPackageObjectIndex param_2)

{
  UObject *pUVar1;
  FName local_res20;
  
  if ((param_2.TypeAndId >> 0x3e != 2) ||
     ((int)((uint)(param_2.TypeAndId >> 0x20) & 0x3fffffff) < (param_1->ImportedPackageIds).ArrayNum
     )) {
    pUVar1 = GetImportObject(this,param_1,param_2);
    if (pUVar1 != (UObject *)0x0) {
      local_res20.ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
      local_res20.Number = *(uint *)&pUVar1->field_0x1c;
      ::FName::ToString(&local_res20,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    if (param_2.TypeAndId >> 0x3e == 1) {
      FCookedScriptObjectsDebug::GetPathName
                (&this->GlobalImportStore->CookedScriptObjectsDebug,__return_storage_ptr__,param_2);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetImportObject @ 142326a60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

UObject * __thiscall
FPackageImportStore::GetImportObject
          (FPackageImportStore *this,FAsyncPackageHeaderData *param_1,FPackageObjectIndex param_2)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  FGlobalImportStore *this_00;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  FPublicExportKey *pFVar5;
  FUObjectItem *pFVar6;
  ulonglong uVar7;
  TArrayView<FPackageId_const_,int> local_48;
  FString local_38;
  FPublicExportKey local_28;
  
  pFVar6 = (FUObjectItem *)0x0;
  uVar7 = param_2.TypeAndId >> 0x3e;
  if (uVar7 == 1) {
    pUVar4 = FGlobalImportStore::FindScriptImportObject(this->GlobalImportStore,param_2);
  }
  else {
    if (uVar7 != 2) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GlobalIndex.IsImport()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x919,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (UObject *)(*pcVar2)();
        return pUVar4;
      }
      if (uVar7 != 2) {
        if ((param_2.TypeAndId != 0xffffffffffffffff) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("GlobalIndex.IsNull()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                               ,0x92d,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pUVar4 = (UObject *)(*pcVar2)();
          return pUVar4;
        }
        return (UObject *)0x0;
      }
    }
    local_48.DataPtr = (param_1->ImportedPackageIds).DataPtr;
    this_00 = this->GlobalImportStore;
    local_48.ArrayNum = (param_1->ImportedPackageIds).ArrayNum;
    pFVar5 = FPublicExportKey::FromPackageImport
                       (&local_28,param_2,&local_48,
                        (TArrayView<unsigned___int64_const_,int> *)&param_1->_padding_);
    SRWLock = &this_00->PackagesLock;
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    pUVar4 = FGlobalImportStore::FindPublicExportObjectUncheckedNoLock(this_00,pFVar5);
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    if (pUVar4 != (UObject *)0x0) {
      iVar1 = *(int *)&pUVar4->field_0xc;
      if ((iVar1 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x443,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (UObject *)(*pcVar2)();
        return pUVar4;
      }
      if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
        pFVar6 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
      }
      if (((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar4,&local_38,(UObject *)0x0,None);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Object || !Object->IsUnreachable()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                           ,0x85e,L"%s");
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pUVar4 = (UObject *)(*pcVar2)();
          return pUVar4;
        }
      }
    }
  }
  return pUVar4;
}

// GetUnresolvedCDOs @ 142327660

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPackageImportStore::GetUnresolvedCDOs
          (FPackageImportStore *this,FAsyncPackageHeaderData *param_1,
          TArray<UClass_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  FGlobalImportStore *pFVar3;
  undefined1 *puVar4;
  longlong lVar5;
  UClass *this_00;
  UObject *pUVar6;
  int iVar7;
  UClass *pUVar8;
  undefined1 *puVar9;
  ulonglong *puVar10;
  UClass *local_res10;
  FString local_48;
  FString local_38;
  
  puVar10 = (ulonglong *)param_1->_padding_;
  puVar1 = puVar10 + (int)param_1->_padding_;
  do {
    if (puVar10 == puVar1) {
      return;
    }
    uVar2 = *puVar10;
    if ((byte)(uVar2 >> 0x3e) == 1) {
      pFVar3 = this->GlobalImportStore;
      AcquireSRWLockShared((PSRWLOCK)&pFVar3->ScriptObjectsLock);
      if (*(int *)&(pFVar3->ScriptObjects).field_0x8 != *(int *)&(pFVar3->ScriptObjects).field_0x34)
      {
        puVar4 = *(undefined1 **)&(pFVar3->ScriptObjects).field_0x40;
        puVar9 = &(pFVar3->ScriptObjects).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar9 = puVar4;
        }
        iVar7 = *(int *)(puVar9 + ((ulonglong)(*(int *)&(pFVar3->ScriptObjects).field_0x48 - 1) &
                                  uVar2 & 0xffffffff) * 4);
        if (iVar7 != -1) {
          lVar5 = *(longlong *)&pFVar3->ScriptObjects;
          do {
            if (*(ulonglong *)(lVar5 + (longlong)iVar7 * 0x18) == uVar2) {
              if ((iVar7 != -1) && (lVar5 = lVar5 + (longlong)iVar7 * 0x18, lVar5 != 0)) {
                this_00 = *(UClass **)(lVar5 + 8);
                ReleaseSRWLockShared((PSRWLOCK)&pFVar3->ScriptObjectsLock);
                if (this_00 != (UClass *)0x0) {
                  pUVar8 = Z_Construct_UClass_UClass_NoRegister();
                  iVar7 = (int)pUVar8->_padding_;
                  if ((*(int *)(this_00->_padding_ + 0x38) < iVar7) ||
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
                      &pUVar8->_padding_)) {
                    local_res10 = (UClass *)0x0;
                  }
                  else {
                    local_res10 = this_00;
                    if ((((uint)this_00->_padding_ >> 4 & 1) == 0) &&
                       ((pUVar6 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr,
                        pUVar6 == (UObject *)0x0 || ((*(uint *)&pUVar6->field_0x8 >> 9 & 1) != 0))))
                    {
                      if (4 < (byte)LogStreaming._0_1_) {
                        UObjectBaseUtility::GetFullName
                                  ((UObjectBaseUtility *)this_00,&local_38,(UObject *)0x0,None);
                        ::FName::ToString((FName *)&param_1->_padding_,&local_48);
                        UE::Logging::Private::BasicLog<5>
                                  (&`public:_void___cdecl_FPackageImportStore::GetUnresolvedCDOs(FAsyncPackageHeaderData_const&___ptr64,TArray<UClass*___ptr64,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>&___ptr64)___ptr64'
                                    ::__l22::LOG_Static,(FLogCategoryBase *)&LogStreaming);
                        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_48.Data.AllocatorInstance.Data);
                        }
                        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_38.Data.AllocatorInstance.Data);
                        }
                      }
                      TArray<UClass_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
                      AddUniqueImpl<UClass_*_const_&>(param_2,&local_res10);
                    }
                  }
                }
                goto LAB_142327724;
              }
              break;
            }
            iVar7 = *(int *)(lVar5 + 0x10 + (longlong)iVar7 * 0x18);
          } while (iVar7 != -1);
        }
      }
      ReleaseSRWLockShared((PSRWLOCK)&pFVar3->ScriptObjectsLock);
    }
LAB_142327724:
    puVar10 = puVar10 + 1;
  } while( true );
}

// ReleaseImportedPackageReferences @ 142338ae0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FPackageImportStore::ReleaseImportedPackageReferences
          (FPackageImportStore *this,FAsyncPackageDesc2 *param_1,
          TArrayView<FPackageId_const_,int> *param_2)

{
  FPackageId *pFVar1;
  FGlobalImportStore *this_00;
  code *pcVar2;
  bool bVar3;
  FLoadedPackageRef *this_01;
  ulonglong *puVar4;
  undefined1 *puVar5;
  int iVar6;
  ulonglong *puVar7;
  FPackageId *pFVar8;
  undefined1 *puVar9;
  ulong64 local_res18;
  ulong64 local_res20;
  ulong64 *local_58;
  FLoadedPackageRef *local_50;
  ulong64 *local_48;
  
  pFVar8 = param_2->DataPtr;
  pFVar1 = pFVar8 + param_2->ArrayNum;
  if (pFVar8 != pFVar1) {
    do {
      this_00 = this->GlobalImportStore;
      local_res20 = (param_1->UPackageId).Id;
      local_res18 = pFVar8->Id;
      this_01 = FGlobalImportStore::FindPackageRefChecked
                          (this_00,(FPackageId)local_res18,(FName)0x0);
      if ((this_01->RefCount < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("PackageRef.RefCount > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                             ,0x73d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_01->RefCount = this_01->RefCount + -1;
      if (this_01->bHasBeenLoadedDebug == false) {
LAB_142338bb8:
        if (this_01->bAreAllPublicExportsLoaded != false) goto LAB_142338bbe;
LAB_142338bea:
        if (((this_01->bIsMissing != false) && (this_01->bAreAllPublicExportsLoaded != false)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("!PackageRef.bAreAllPublicExportsLoaded",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                               ,0x753,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        if (this_01->bAreAllPublicExportsLoaded == false) {
          if ((this_01->bIsMissing == false) && (this_01->bHasFailed == false)) {
            local_58 = &local_res20;
            local_48 = &local_res18;
            local_50 = this_01;
            `FGlobalImportStore::ReleasePackageRef'::__l2::<lambda_1>::operator()(&local_58);
          }
          goto LAB_142338bb8;
        }
LAB_142338bbe:
        if (this_01->bIsMissing != false) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!PackageRef.bIsMissing",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                             ,0x74f,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          goto LAB_142338bea;
        }
      }
      if (((this_01->RefCount == 0) && (-1 < this_01->PackageObjectIndex)) &&
         (FLoadedPackageRef::UnpinPublicExportsForGC(this_01),
         *(int *)&(this_00->PackageCells).field_0x8 != *(int *)&(this_00->PackageCells).field_0x34))
      {
        puVar5 = *(undefined1 **)&(this_00->PackageCells).field_0x40;
        puVar9 = &(this_00->PackageCells).field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar9 = puVar5;
        }
        iVar6 = *(int *)(puVar9 + ((ulonglong)(*(int *)&(this_00->PackageCells).field_0x48 - 1) &
                                  local_res18 & 0xffffffff) * 4);
        if (iVar6 != -1) {
          do {
            puVar7 = (ulonglong *)((longlong)iVar6 * 0x68 + *(longlong *)&this_00->PackageCells);
            if (*puVar7 == local_res18) {
              puVar4 = puVar7 + 1;
              if (puVar7 == (ulonglong *)0x0) {
                puVar4 = (ulonglong *)0x0;
              }
              if (puVar4 != (ulonglong *)0x0) {
                puVar5 = (undefined1 *)((longlong)puVar7 + 9);
                if (puVar7 == (ulonglong *)0x0) {
                  puVar5 = &DAT_00000001;
                }
                *puVar5 = 0;
              }
              break;
            }
            iVar6 = (int)puVar7[0xc];
          } while (iVar6 != -1);
        }
      }
      pFVar8 = pFVar8 + 1;
    } while (pFVar8 != pFVar1);
  }
  return;
}

