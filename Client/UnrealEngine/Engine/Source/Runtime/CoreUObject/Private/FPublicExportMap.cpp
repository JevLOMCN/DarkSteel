// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// Find @ 142322860

int __thiscall FLoadedPackageRef::FPublicExportMap::Find(FPublicExportMap *this,ulong64 param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  FPublicExportMap *pFVar9;
  
  uVar6 = this->Capacity;
  if (uVar6 == 1) {
    uVar5 = 0;
    pFVar9 = this;
    uVar6 = 1;
    uVar8 = 1;
  }
  else {
    pFVar9 = (FPublicExportMap *)(this->field0_0x0).SingleItemKey;
    if (((int)uVar6 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    uVar5 = 0;
    uVar8 = uVar6;
    if ((int)uVar6 < 1) goto LAB_142322903;
  }
  do {
    iVar4 = (uVar8 >> 1) + uVar5;
    if ((&pFVar9->field0_0x0)[iVar4].Allocation < param_1) {
      uVar5 = iVar4 + (uVar8 & 1);
    }
    uVar2 = uVar8 >> 1;
    uVar8 = uVar8 >> 1;
  } while (uVar2 != 0);
LAB_142322903:
  if ((int)uVar5 < this->Capacity) {
    uVar8 = 0;
    if ((int)uVar5 < (int)uVar6) {
      uVar8 = ~uVar5 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    if ((&pFVar9->field0_0x0)[(int)uVar5].Allocation == (uchar *)param_1) {
      iVar4 = this->Capacity;
      if (iVar4 == 1) {
        piVar7 = &this->SingleItemValue;
        iVar4 = 1;
      }
      else {
        piVar7 = (int *)((this->field0_0x0).Allocation + (longlong)iVar4 * 8);
        if ((iVar4 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      uVar6 = 0;
      if ((int)uVar5 < iVar4) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      return piVar7[(int)uVar5];
    }
  }
  return -1;
}

// PinForGC @ 14232e440

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
FLoadedPackageRef::FPublicExportMap::PinForGC
          (FPublicExportMap *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  UObjectBase *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  FUObjectItem *this_01;
  FScriptContainerElement *pFVar11;
  int local_res10;
  FString local_58;
  FString local_48;
  
  piVar1 = &param_1->ArrayMax;
  bVar6 = false;
  bVar7 = false;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar10 = this->Capacity;
  if (iVar10 == 1) {
    pFVar11 = (FScriptContainerElement *)&this->SingleItemValue;
  }
  else {
    pFVar11 = (FScriptContainerElement *)((this->field0_0x0).Allocation + (longlong)iVar10 * 8);
    if ((iVar10 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  local_res10 = 0;
  pFVar2 = pFVar11 + (longlong)iVar10 * 4;
  do {
    if (pFVar11 == pFVar2) {
      if ((local_res10 != this->Count) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ValidExportCount == Count",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                             ,0x4aa,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      return param_1->ArrayNum == 0;
    }
    iVar10 = *(int *)pFVar11;
    if (-1 < iVar10) {
      if (iVar10 < GUObjectArray.ObjObjects.NumElements) {
        this_01 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar10);
      }
      else {
        this_01 = (FUObjectItem *)0x0;
      }
      if (((uint)((ulonglong)(this_01->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
        this_00 = (this_01->field1_0x8).Object;
        if (((uint)((ulonglong)(this_01->field0_0x0).FlagsAndRefCount >> 0x34) & 1) != 0) {
          if (this_00 != (UObjectBase *)0x0) {
            iVar10 = this_00->InternalIndex;
            if ((iVar10 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                   ,0x443,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            if (iVar10 < GUObjectArray.ObjObjects.NumElements) {
              FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar10);
            }
            ::LexToString(&local_48,this_00->ObjectFlags);
            bVar6 = true;
            bVar7 = true;
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this_00,&local_58,(UObject *)0x0,None);
          }
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ObjectItem->HasAnyFlags(EInternalObjectFlags::LoaderImport)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                             ,0x49d,L"Object=\'%s\' (%p), Flags=%s, InternalFlags=0x%08X");
          if ((bVar7) &&
             (bVar7 = false, local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if ((bVar6) &&
             (bVar6 = false, local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
        }
        FUObjectItem::SetRootFlags(this_01,LoaderImport);
        local_res10 = local_res10 + 1;
      }
      else {
        uVar3 = this->Capacity;
        if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
        }
        iVar10 = *piVar1;
        if (iVar10 < (int)uVar3) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar3,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
          iVar10 = *piVar1;
        }
        pFVar4 = (param_1->AllocatorInstance).Data;
        if (((pFVar4 <= pFVar11) && (pFVar11 < pFVar4 + (longlong)iVar10 * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        iVar10 = param_1->ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar10 + 1;
        *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 4) = *(int *)pFVar11;
        *(int *)pFVar11 = -1;
        this->Count = this->Count + -1;
      }
    }
    pFVar11 = pFVar11 + 4;
  } while( true );
}

// PreInsertPublicExports @ 14232f0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLoadedPackageRef::FPublicExportMap::PreInsertPublicExports
          (FPublicExportMap *this,
          TArrayView<TArrayView<FExportMapEntry_const_,int>_const_,int> *param_1)

{
  FExportMapEntry *pFVar1;
  undefined8 uVar2;
  ulong64 uVar3;
  code *pcVar4;
  FExportMapEntry *pFVar5;
  bool bVar6;
  ulong64 *puVar7;
  ForElementType<unsigned___int64> FVar8;
  uchar *puVar9;
  ForElementType<unsigned___int64> FVar10;
  TArrayView<FExportMapEntry_const_,int> *pTVar11;
  int iVar12;
  ulong64 *puVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  FPublicExportMap_u_0 FVar21;
  longlong lVar22;
  TArrayView<FExportMapEntry_const_,int> *pTVar23;
  undefined1 auStackY_928 [32];
  FIdentityFunctor local_8d8;
  int local_8d4;
  uint local_8cc;
  TArrayView<FExportMapEntry_const_,int> *local_8c8;
  int *local_8c0;
  int *local_8b8;
  FPublicExportMap *local_8a8;
  ForElementType<unsigned___int64> local_850;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_928;
  if (this->Capacity < 2) {
    pTVar11 = param_1->DataPtr;
    iVar19 = 0;
    FVar21.Allocation = (uchar *)0x0;
    pTVar23 = pTVar11 + param_1->ArrayNum;
    local_8d4 = 0;
    if (pTVar11 != pTVar23) {
      do {
        pFVar5 = pTVar11->DataPtr;
        uVar2 = *(undefined8 *)&pTVar11->ArrayNum;
        if (pFVar5 != pFVar5 + (int)uVar2) {
          puVar7 = &pFVar5->PublicExportHash;
          do {
            if ((*puVar7 != 0) &&
               (bVar6 = AsyncLoading2_ShouldSkipLoadingExport
                                  (*(EExportFilterFlags *)((longlong)puVar7 + 0xc)), !bVar6)) {
              FVar21.Allocation = (uchar *)*puVar7;
              iVar19 = iVar19 + 1;
            }
            pFVar1 = (FExportMapEntry *)(puVar7 + 2);
            puVar7 = puVar7 + 9;
            local_8d4 = iVar19;
          } while (pFVar1 != pFVar5 + (int)uVar2);
        }
        pTVar11 = pTVar11 + 1;
      } while (pTVar11 != pTVar23);
      if (iVar19 != 0) {
        if (this->Capacity == 1) {
          local_8c8 = (TArrayView<FExportMapEntry_const_,int> *)(this->field0_0x0).SingleItemKey;
          local_8cc = this->SingleItemValue;
        }
        else {
          local_8c8 = (TArrayView<FExportMapEntry_const_,int> *)0x0;
          local_8cc = -1;
        }
        this->Count = 0;
        if (iVar19 == 1) {
          this->field0_0x0 = FVar21;
          this->SingleItemValue = -1;
          local_8d4 = iVar19;
        }
        else {
          lVar22 = (longlong)iVar19;
          puVar7 = FMemory::Malloc(lVar22 * 0xc,0);
          if (local_8d4 < 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L"");
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if ((local_8d4 < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ArrayNum >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xfe,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          pTVar11 = param_1->DataPtr;
          uVar15 = 0;
          pTVar23 = pTVar11 + param_1->ArrayNum;
          if (pTVar11 != pTVar23) {
            lVar14 = 0;
            do {
              pFVar5 = pTVar11->DataPtr;
              uVar2 = *(undefined8 *)&pTVar11->ArrayNum;
              if (pFVar5 != pFVar5 + (int)uVar2) {
                puVar13 = &pFVar5->PublicExportHash;
                do {
                  if ((*puVar13 != 0) &&
                     (bVar6 = AsyncLoading2_ShouldSkipLoadingExport
                                        (*(EExportFilterFlags *)((longlong)puVar13 + 0xc)), !bVar6))
                  {
                    uVar3 = *puVar13;
                    uVar17 = 0;
                    if ((int)uVar15 < local_8d4) {
                      uVar17 = ~uVar15 >> 0x1f;
                    }
                    if ((uVar17 == 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                           ,0x14f,
                                           L"Array index out of bounds: %lld from an array of size %lld"
                                          ), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    uVar15 = uVar15 + 1;
                    puVar7[lVar14] = uVar3;
                    lVar14 = lVar14 + 1;
                  }
                  pFVar1 = (FExportMapEntry *)(puVar13 + 2);
                  puVar13 = puVar13 + 9;
                } while (pFVar1 != pFVar5 + (int)uVar2);
              }
              pTVar11 = pTVar11 + 1;
            } while (pTVar11 != pTVar23);
          }
          AlgoImpl::IntroSortInternal<unsigned___int64,int,FIdentityFunctor,TLess<void>_>
                    (puVar7,local_8d4,local_8d8,(TLess<void>)local_8d8);
          memset(puVar7 + lVar22,0xff,lVar22 * 4);
          (this->field0_0x0).Allocation = (uchar *)puVar7;
        }
        this->Capacity = local_8d4;
        if (local_8cc != -1) {
          Store(this,(ulong64)local_8c8,local_8cc);
        }
      }
    }
  }
  else {
    if (((this->field0_0x0).Allocation == (uchar *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Allocation",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                           ,0x403,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar15 = this->Capacity;
    local_8d4 = 1;
    if (uVar15 == 1) {
      local_8cc = 1;
      local_8a8 = this;
    }
    else {
      local_8a8 = (FPublicExportMap *)(this->field0_0x0).SingleItemKey;
      local_8cc = uVar15;
      if (((int)uVar15 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar19 = this->Capacity;
    if (iVar19 == 1) {
      local_8b8 = &this->SingleItemValue;
    }
    else {
      local_8b8 = (int *)((this->field0_0x0).Allocation + (longlong)iVar19 * 8);
      local_8d4 = iVar19;
      if ((iVar19 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_8c8 = param_1->DataPtr;
    uVar20 = 0;
    pTVar23 = local_8c8 + param_1->ArrayNum;
    local_850.SecondaryData = (ForElementType<unsigned___int64>)0x0;
    local_48 = 0;
    local_44 = 0x100;
    pTVar11 = local_8c8;
    uVar17 = uVar20;
    if (local_8c8 != pTVar23) {
      do {
        uVar17 = uVar17 + (int)*(undefined8 *)&pTVar11->ArrayNum;
        pTVar11 = pTVar11 + 1;
      } while (pTVar11 != pTVar23);
      if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
      }
      if (0x100 < (int)uVar17) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
                  (8,8,uVar17,&local_850,0,&local_44);
        goto LAB_14232f520;
      }
    }
    for (; local_8c8 != pTVar23; local_8c8 = local_8c8 + 1) {
LAB_14232f520:
      pFVar5 = local_8c8->DataPtr;
      uVar2 = *(undefined8 *)&local_8c8->ArrayNum;
      if (pFVar5 != pFVar5 + (int)uVar2) {
        FVar10 = (ForElementType<unsigned___int64>)&pFVar5->PublicExportHash;
        do {
          if ((*(ulonglong *)FVar10 != 0) &&
             (bVar6 = AsyncLoading2_ShouldSkipLoadingExport
                                (*(EExportFilterFlags *)((longlong)FVar10 + 0xc)), !bVar6)) {
            uVar17 = 0;
            if (0 < (int)local_8cc) {
              uVar16 = local_8cc;
              uVar17 = uVar20;
              do {
                uVar18 = uVar16 >> 1;
                if ((&local_8a8->field0_0x0)[(int)(uVar18 + uVar17)].Allocation < *(uchar **)FVar10)
                {
                  uVar17 = uVar18 + uVar17 + (uVar16 & 1);
                }
                uVar16 = uVar18;
              } while (uVar18 != 0);
            }
            if ((int)uVar17 < this->Capacity) {
              uVar16 = 0;
              if ((int)uVar17 < (int)local_8cc) {
                uVar16 = ~uVar17 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((&local_8a8->field0_0x0)[(int)uVar17].Allocation == *(uchar **)FVar10)
              goto LAB_14232f6d9;
            }
            FVar8 = (ForElementType<unsigned___int64>)&local_850;
            if (local_850.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
              FVar8 = local_850.SecondaryData;
            }
            if ((ulonglong)FVar8 <= (ulonglong)FVar10) {
              FVar8 = (ForElementType<unsigned___int64>)&local_850;
              if (local_850.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
                FVar8 = local_850.SecondaryData;
              }
              if (((ulonglong)FVar10 < (ulonglong)((longlong)FVar8 + (longlong)local_44 * 8)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            if (local_48 == local_44) {
              local_48 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
                                   (0x808,&local_850,&local_44);
            }
            lVar22 = (longlong)local_48;
            FVar8 = (ForElementType<unsigned___int64>)&local_850;
            if (local_850.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
              FVar8 = local_850.SecondaryData;
            }
            local_48 = local_48 + 1;
            *(ulonglong *)((longlong)FVar8 + lVar22 * 8) = *(ulonglong *)FVar10;
          }
LAB_14232f6d9:
          pFVar1 = (FExportMapEntry *)((longlong)FVar10 + 0x10);
          FVar10 = (ForElementType<unsigned___int64>)((longlong)FVar10 + 0x48);
        } while (pFVar1 != pFVar5 + (int)uVar2);
      }
    }
    if (0 < local_48) {
      FVar10 = (ForElementType<unsigned___int64>)&local_850;
      if (local_850.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
        FVar10 = local_850.SecondaryData;
      }
      AlgoImpl::IntroSortInternal<unsigned___int64,int,FIdentityFunctor,TLess<void>_>
                ((ulong64 *)FVar10,local_48,local_8d8,(TLess<void>)local_8d8);
      iVar19 = local_48 + uVar15;
      lVar22 = (longlong)iVar19;
      puVar9 = FMemory::Malloc(lVar22 * 0xc,0);
      if ((iVar19 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_8c0 = (int *)(puVar9 + lVar22 * 8);
      if ((iVar19 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (0 < iVar19) {
        lVar14 = 0;
        local_8c8 = (TArrayView<FExportMapEntry_const_,int> *)0x0;
        uVar15 = uVar20;
        uVar17 = uVar20;
        do {
          if (((int)uVar15 < 0) || ((int)local_8cc <= (int)uVar15)) {
LAB_14232fa11:
            uVar16 = 0;
            if ((int)uVar17 < local_48) {
              uVar16 = ~uVar17 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FVar10 = (ForElementType<unsigned___int64>)&local_850;
            if (local_850.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
              FVar10 = local_850.SecondaryData;
            }
            uVar2 = *(undefined8 *)((longlong)local_8c8 + (longlong)FVar10);
            uVar16 = (uint)((int)uVar20 < iVar19) & ~uVar20 >> 0x1f;
            if ((uVar16 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(undefined8 *)(puVar9 + lVar14 * 8) = uVar2;
            if ((uVar16 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar17 = uVar17 + 1;
            local_8c8 = (TArrayView<FExportMapEntry_const_,int> *)((longlong)local_8c8 + 8);
            iVar12 = -1;
          }
          else {
            if ((-1 < (int)uVar17) && ((int)uVar17 < local_48)) {
              if (((int)uVar15 < 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar16 = 0;
              if ((int)uVar17 < local_48) {
                uVar16 = ~uVar17 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              FVar10 = (ForElementType<unsigned___int64>)&local_850;
              if (local_850.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
                FVar10 = local_850.SecondaryData;
              }
              if (*(uchar **)((longlong)FVar10 + (longlong)local_8c8) <=
                  (local_8a8->field0_0x0).Allocation) goto LAB_14232fa11;
            }
            if (((int)uVar15 < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FVar21 = local_8a8->field0_0x0;
            uVar16 = (uint)((int)uVar20 < iVar19) & ~uVar20 >> 0x1f;
            if ((uVar16 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(FPublicExportMap_u_0 *)(puVar9 + lVar14 * 8) = FVar21;
            uVar18 = 0;
            if ((int)uVar15 < local_8d4) {
              uVar18 = ~uVar15 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar12 = *local_8b8;
            if ((uVar16 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_8a8 = (FPublicExportMap *)&local_8a8->Count;
            uVar15 = uVar15 + 1;
            local_8b8 = local_8b8 + 1;
          }
          uVar20 = uVar20 + 1;
          lVar14 = lVar14 + 1;
          *local_8c0 = iVar12;
          local_8c0 = local_8c0 + 1;
        } while (lVar14 < lVar22);
      }
      FMemory::Free((this->field0_0x0).Allocation);
      (this->field0_0x0).Allocation = puVar9;
      this->Capacity = iVar19;
    }
    if (local_850.SecondaryData != (ForElementType<unsigned___int64>)0x0) {
      FMemory::Free((void *)local_850.SecondaryData);
    }
  }
  return;
}

// Remove @ 142338f30

bool __thiscall FLoadedPackageRef::FPublicExportMap::Remove(FPublicExportMap *this,ulong64 param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FPublicExportMap *pFVar8;
  int *piVar9;
  int iVar10;
  
  uVar6 = this->Capacity;
  if (uVar6 == 1) {
    uVar5 = 0;
    pFVar8 = this;
    uVar6 = 1;
    uVar7 = 1;
  }
  else {
    pFVar8 = (FPublicExportMap *)(this->field0_0x0).SingleItemKey;
    if (((int)uVar6 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    uVar5 = 0;
    uVar7 = uVar6;
    if ((int)uVar6 < 1) goto LAB_142338fd3;
  }
  do {
    iVar10 = (uVar7 >> 1) + uVar5;
    if ((&pFVar8->field0_0x0)[iVar10].Allocation < param_1) {
      uVar5 = iVar10 + (uVar7 & 1);
    }
    uVar2 = uVar7 >> 1;
    uVar7 = uVar7 >> 1;
  } while (uVar2 != 0);
LAB_142338fd3:
  if ((int)uVar5 < this->Capacity) {
    uVar7 = 0;
    if ((int)uVar5 < (int)uVar6) {
      uVar7 = ~uVar5 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if ((&pFVar8->field0_0x0)[(int)uVar5].Allocation == (uchar *)param_1) {
      iVar10 = this->Capacity;
      if (iVar10 == 1) {
        piVar9 = &this->SingleItemValue;
        iVar10 = 1;
      }
      else {
        piVar9 = (int *)((this->field0_0x0).Allocation + (longlong)iVar10 * 8);
        if ((iVar10 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      uVar6 = 0;
      if ((int)uVar5 < iVar10) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      iVar10 = piVar9[(int)uVar5];
      this->Count = this->Count - (uint)(iVar10 != -1);
      piVar9[(int)uVar5] = -1;
      return iVar10 != -1;
    }
  }
  return false;
}

// Store @ 14233de70

void __thiscall
FLoadedPackageRef::FPublicExportMap::Store(FPublicExportMap *this,ulong64 param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uchar *_Dst;
  longlong lVar9;
  int iVar10;
  size_t _Size;
  int iVar11;
  size_t _Size_00;
  uint uVar12;
  uint uVar13;
  int *_Dst_00;
  FPublicExportMap *local_res20;
  int *local_70;
  FPublicExportMap *local_68;
  
  if ((param_1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExportHash",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x448,L"Invalid to store a hash of 0 in this map"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_2 == -1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObjectIndex != InvalidValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                         ,0x449,L"Use Remove() instead"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar11 = this->Capacity;
  local_68 = this;
  if (((iVar11 != 1) &&
      (local_68 = (FPublicExportMap *)(this->field0_0x0).SingleItemKey, iVar11 < 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar10 = this->Capacity;
  if (iVar10 == 1) {
    _Dst_00 = &this->SingleItemValue;
  }
  else {
    _Dst_00 = (int *)((this->field0_0x0).Allocation + (longlong)iVar10 * 8);
    if ((iVar10 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar12 = 0;
  iVar4 = iVar11;
  uVar13 = 0;
  while (0 < iVar4) {
    iVar6 = iVar4 / 2;
    iVar3 = iVar4 % 2;
    iVar4 = iVar6;
    if ((&local_68->field0_0x0)[(int)(iVar6 + uVar13)].Allocation < param_1) {
      uVar13 = iVar6 + uVar13 + iVar3;
    }
  }
  if ((int)uVar13 < this->Capacity) {
    uVar7 = uVar12;
    if ((int)uVar13 < iVar11) {
      uVar7 = ~uVar13 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((&local_68->field0_0x0)[(int)uVar13].Allocation == (uchar *)param_1) {
      if ((int)uVar13 < iVar10) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this->Count = this->Count + (uint)(_Dst_00[(int)uVar13] == -1);
      _Dst_00[(int)uVar13] = param_2;
      return;
    }
  }
  if (this->Capacity != 0) {
    if ((iVar11 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((local_68->field0_0x0).Allocation == (uchar *)0x0) {
      uVar13 = uVar13 - 1;
      goto LAB_14233e2b9;
    }
  }
  iVar11 = this->Capacity;
  iVar10 = iVar11 + 1;
  if (iVar11 < iVar10) {
    if (1 < iVar10) {
      local_res20 = this;
      if (((iVar11 != 1) &&
          (local_res20 = (FPublicExportMap *)(this->field0_0x0).Allocation, iVar11 < 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar11 = this->Capacity;
      if (iVar11 == 1) {
        local_70 = &this->SingleItemValue;
      }
      else {
        local_70 = (int *)((this->field0_0x0).Allocation + (longlong)iVar11 * 8);
        if ((iVar11 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      lVar9 = (longlong)this->Capacity;
      lVar8 = (longlong)iVar10;
      lVar1 = lVar8 * 8;
      _Size_00 = lVar8 * 4 + lVar9 * -4;
      _Size = lVar1 + lVar9 * -8;
      _Dst = FMemory::Malloc(lVar8 * 0xc,0);
      memset(_Dst,0,_Size);
      memcpy(_Dst + _Size,local_res20,lVar9 * 8);
      memset(_Dst + lVar1,0xff,_Size_00);
      memcpy(_Dst + lVar1 + _Size_00,local_70,lVar9 * 4);
      if (1 < this->Capacity) {
        FMemory::Free((this->field0_0x0).Allocation);
      }
      (this->field0_0x0).Allocation = _Dst;
    }
    this->Capacity = iVar10;
    iVar11 = iVar10;
  }
  local_68 = this;
  if (((iVar11 != 1) && (local_68 = (FPublicExportMap *)(this->field0_0x0).Allocation, iVar11 < 0))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar10 = this->Capacity;
  if (iVar10 == 1) {
    _Dst_00 = &this->SingleItemValue;
  }
  else {
    _Dst_00 = (int *)((this->field0_0x0).Allocation + (longlong)iVar10 * 8);
    if ((iVar10 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
LAB_14233e2b9:
  if (0 < (int)uVar13) {
    memmove(local_68,&local_68->Count,(longlong)(int)uVar13 * 8);
    memmove(_Dst_00,_Dst_00 + 1,(longlong)(int)uVar13 * 4);
  }
  uVar7 = 0;
  if ((int)uVar13 < iVar11) {
    uVar7 = ~uVar13 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((int)uVar13 < iVar10) {
    uVar12 = ~uVar13 >> 0x1f;
  }
  (&local_68->field0_0x0)[(int)uVar13].SingleItemKey = param_1;
  if ((uVar12 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  _Dst_00[(int)uVar13] = param_2;
  this->Count = this->Count + 1;
  return;
}

// UnpinForGC @ 142340c70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FLoadedPackageRef::FPublicExportMap::UnpinForGC(FPublicExportMap *this)

{
  int *piVar1;
  int iVar2;
  UObjectBase *this_00;
  code *pcVar3;
  bool bVar4;
  FUObjectItem *pFVar5;
  int *piVar6;
  FString local_38;
  FString local_28;
  
  iVar2 = this->Capacity;
  if (iVar2 == 1) {
    piVar6 = &this->SingleItemValue;
  }
  else {
    piVar6 = (int *)((this->field0_0x0).Allocation + (longlong)iVar2 * 8);
    if ((iVar2 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  piVar1 = piVar6 + iVar2;
  do {
    if (piVar6 == piVar1) {
      return;
    }
    iVar2 = *piVar6;
    if (-1 < iVar2) {
      if (iVar2 < GUObjectArray.ObjObjects.NumElements) {
        pFVar5 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar2);
      }
      else {
        pFVar5 = (FUObjectItem *)0x0;
      }
      this_00 = (pFVar5->field1_0x8).Object;
      iVar2 = this_00->InternalIndex;
      if ((iVar2 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x443,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (iVar2 < GUObjectArray.ObjObjects.NumElements) {
        pFVar5 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar2);
      }
      else {
        pFVar5 = (FUObjectItem *)0x0;
      }
      if (((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x34) & 1) == 0) {
        iVar2 = this_00->InternalIndex;
        if ((iVar2 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x443,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (iVar2 < GUObjectArray.ObjObjects.NumElements) {
          FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar2);
        }
        ::LexToString(&local_28,this_00->ObjectFlags);
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_38,(UObject *)0x0,None)
        ;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object->HasAnyInternalFlags(EInternalObjectFlags::LoaderImport)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                           ,0x4b5,L"Object=\'%s\' (%p), Flags=%s, InternalFlags=0x%08X");
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar2 = this_00->InternalIndex;
      if ((iVar2 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x443,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (iVar2 < GUObjectArray.ObjObjects.NumElements) {
        pFVar5 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar2);
      }
      else {
        pFVar5 = (FUObjectItem *)0x0;
      }
      FUObjectItem::ClearRootFlags(pFVar5,LoaderImport);
    }
    piVar6 = piVar6 + 1;
  } while( true );
}

