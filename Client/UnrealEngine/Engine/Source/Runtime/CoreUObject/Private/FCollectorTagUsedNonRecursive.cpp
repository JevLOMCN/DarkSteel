// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// HandleObjectReference @ 142271f30

void __thiscall
FCollectorTagUsedNonRecursive::HandleObjectReference
          (FCollectorTagUsedNonRecursive *this,UObject **param_1,UObject *param_2,FProperty *param_3
          )

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  FReferencerInformationList *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FReferencerInformation *pFVar9;
  ForElementType<unsigned_int> FVar10;
  FProperty *local_res20;
  UObject *local_38 [2];
  
  if (*param_1 != (UObject *)0x0) {
    local_res20 = param_3;
    if ((*(EObjectFlags *)&(*param_1)->field_0x8 & this->ReferenceSearchFlags) == RF_NoFlags) {
      piVar1 = &(this->ReachabilityBits).NumBits;
      uVar3 = *(uint *)&(*param_1)->field_0xc;
      if ((((int)uVar3 < 0) || (*piVar1 <= (int)uVar3)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar10 = (this->ReachabilityBits).AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<unsigned_int>)0x0) {
        FVar10 = (ForElementType<unsigned_int>)&this->ReachabilityBits;
      }
      if ((*(uint *)((longlong)FVar10 +
                    (longlong)((int)(uVar3 + ((int)uVar3 >> 0x1f & 0x1fU)) >> 5) * 4) >>
           (uVar3 & 0x1f) & 1) == 0) {
        local_38[0] = *param_1;
        iVar8 = *(int *)&local_38[0]->field_0xc;
        if (((iVar8 < 0) || (*piVar1 <= iVar8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar10 = (this->ReachabilityBits).AllocatorInstance.SecondaryData;
        if (FVar10 == (ForElementType<unsigned_int>)0x0) {
          FVar10 = (ForElementType<unsigned_int>)&this->ReachabilityBits;
        }
        puVar2 = (uint *)((longlong)FVar10 +
                         (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)iVar8 & 0x1f);
        pFVar5 = (this->ObjectsToSerialize).AllocatorInstance.Data;
        if (((pFVar5 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 <
             pFVar5 + (longlong)(this->ObjectsToSerialize).ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar8 = (this->ObjectsToSerialize).ArrayNum;
        piVar1 = &(this->ObjectsToSerialize).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->ObjectsToSerialize).AllocatorInstance,piVar1);
        }
        (this->ObjectsToSerialize).ArrayNum = iVar8 + 1;
        *(UObject **)((this->ObjectsToSerialize).AllocatorInstance.Data + (longlong)iVar8 * 8) =
             local_38[0];
      }
    }
    else {
      pFVar4 = this->FoundReferencesList;
      if (pFVar4 != (FReferencerInformationList *)0x0) {
        pFVar9 = this->CurrentReferenceInfo;
        if (pFVar9 == (FReferencerInformation *)0x0) {
          iVar8 = (pFVar4->ExternalReferences).ArrayNum;
          piVar1 = &(pFVar4->ExternalReferences).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&(pFVar4->ExternalReferences).AllocatorInstance,piVar1);
          }
          pFVar5 = (pFVar4->ExternalReferences).AllocatorInstance.Data;
          (pFVar4->ExternalReferences).ArrayNum = iVar8 + 1;
          pFVar9 = FReferencerInformation::FReferencerInformation
                             ((FReferencerInformation *)(pFVar5 + (longlong)iVar8 * 0x20),
                              this->CurrentObject);
          this->CurrentReferenceInfo = pFVar9;
        }
        if (local_res20 != (FProperty *)0x0) {
          TArray<FProperty_const_*,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<FProperty_const_*_const_&>(&pFVar9->ReferencingProperties,&local_res20);
        }
        piVar1 = &this->CurrentReferenceInfo->TotalReferences;
        *piVar1 = *piVar1 + 1;
      }
      iVar8 = *(int *)&(*param_1)->field_0xc;
      if (((iVar8 < 0) || ((this->ReachabilityBits).NumBits <= iVar8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar10 = (this->ReachabilityBits).AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<unsigned_int>)0x0) {
        FVar10 = (ForElementType<unsigned_int>)&this->ReachabilityBits;
      }
      puVar2 = (uint *)((longlong)FVar10 +
                       (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar8 & 0x1f);
    }
  }
  return;
}

// IsIgnoringArchetypeRef @ 1422749a0

bool __thiscall
FCollectorTagUsedNonRecursive::IsIgnoringArchetypeRef(FCollectorTagUsedNonRecursive *this)

{
  return false;
}

// IsIgnoringTransient @ 1422749d0

bool __thiscall
FCollectorTagUsedNonRecursive::IsIgnoringTransient(FCollectorTagUsedNonRecursive *this)

{
  return false;
}

// PerformReachabilityAnalysis @ 142279ea0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCollectorTagUsedNonRecursive::PerformReachabilityAnalysis
          (FCollectorTagUsedNonRecursive *this,EObjectFlags param_1,EInternalObjectFlags param_2,
          EObjectFlags param_3,FReferencerInformationList *param_4)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  int *piVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  UObject *this_01;
  code *pcVar4;
  UObjectBaseUtility *pUVar5;
  EInternalObjectFlags EVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  UClass *pUVar11;
  FUObjectItem *pFVar12;
  FUObjectItem *pFVar13;
  ForElementType<unsigned_int> FVar14;
  ForElementType<unsigned_int> FVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  UObjectBaseUtility *local_118;
  FString local_110;
  TObjectIteratorBase<1> local_100;
  FArchiveState local_d8;
  UObject *local_48;
  undefined8 local_40;
  FCollectorTagUsedNonRecursive *local_38;
  
  this_00 = &this->ReachabilityBits;
  this->FoundReferencesList = param_4;
  this->ReferenceSearchFlags = param_3;
  iVar9 = GUObjectArray.ObjObjects.NumElements;
  (this->ReachabilityBits).NumBits = GUObjectArray.ObjObjects.NumElements;
  uVar17 = iVar9 + 0x1fU >> 5;
  if (iVar9 + 0x1fU >> 5 != 0) {
    if ((this->ReachabilityBits).MaxBits + 0x1fU >> 5 < uVar17) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&this_00->AllocatorInstance,0,uVar17,4);
      (this->ReachabilityBits).MaxBits = uVar17 << 5;
    }
    FVar14 = (this->ReachabilityBits).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<unsigned_int>)0x0) {
      FVar14 = (ForElementType<unsigned_int>)this_00;
    }
    memset((void *)FVar14,0,(ulonglong)uVar17 << 2);
    iVar9 = (this->ReachabilityBits).NumBits;
    uVar16 = iVar9 >> 0x1f & 0x1f;
    uVar17 = iVar9 + uVar16;
    iVar9 = (uVar17 & 0x1f) - uVar16;
    if (iVar9 != 0) {
      FVar14 = (this->ReachabilityBits).AllocatorInstance.SecondaryData;
      if (FVar14 == (ForElementType<unsigned_int>)0x0) {
        FVar14 = (ForElementType<unsigned_int>)this_00;
      }
      puVar2 = (uint *)((longlong)FVar14 + (longlong)((int)uVar17 >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar9 & 0x1f);
    }
  }
  pUVar11 = Z_Construct_UClass_UObject_NoRegister();
  TObjectIteratorBase<1>::TObjectIteratorBase<1>(&local_100,pUVar11,false,RF_NoFlags,Borrowed);
  lVar19 = local_100._padding_;
joined_r0x000142279fa9:
  if (lVar19 != 0) {
    local_118 = *(UObjectBaseUtility **)(lVar19 + 8);
    pFVar13 = (FUObjectItem *)0x0;
    iVar9 = *(int *)&local_118->field_0xc;
    if ((iVar9 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x443,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar12 = pFVar13;
    if (iVar9 < GUObjectArray.ObjObjects.NumElements) {
      pFVar12 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar9);
    }
    if (((ulonglong)((pFVar12->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1e & 1) == 0) {
      if ((param_3 & *(EObjectFlags *)&local_118->field_0x8) == RF_NoFlags) {
        if (((param_1 != RF_NoFlags) || (param_2 != Borrowed)) &&
           ((param_1 & *(EObjectFlags *)&local_118->field_0x8) == RF_NoFlags)) {
          iVar9 = *(int *)&local_118->field_0xc;
          if ((iVar9 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                 ,0x443,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (iVar9 < GUObjectArray.ObjObjects.NumElements) {
            pFVar13 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar9);
          }
          if ((param_2 &
              (EInternalObjectFlags)((ulonglong)(pFVar13->field0_0x0).FlagsAndRefCount >> 0x20)) ==
              Borrowed) goto LAB_14227a2e0;
        }
        iVar9 = *(int *)&local_118->field_0xc;
        if (((iVar9 < 0) || ((this->ReachabilityBits).NumBits <= iVar9)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar14 = (this->ReachabilityBits).AllocatorInstance.SecondaryData;
        FVar15 = (ForElementType<unsigned_int>)this_00;
        if (FVar14 != (ForElementType<unsigned_int>)0x0) {
          FVar15 = FVar14;
        }
        iVar10 = iVar9;
        if (iVar9 < 0) {
          iVar10 = iVar9 + 0x1f;
        }
        puVar2 = (uint *)((longlong)FVar15 + (longlong)(iVar10 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)iVar9 & 0x1f);
        pFVar3 = (this->ObjectsToSerialize).AllocatorInstance.Data;
        if ((pFVar3 <= (FScriptContainerElement *)&local_118) &&
           ((FScriptContainerElement *)&local_118 <
            pFVar3 + (longlong)(this->ObjectsToSerialize).ArrayMax * 8)) goto LAB_14227a276;
        goto LAB_14227a2a6;
      }
    }
    else {
      iVar9 = *(int *)&local_118->field_0xc;
      if (((iVar9 < 0) || ((this->ReachabilityBits).NumBits <= iVar9)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar5 = local_118;
      FVar14 = (this->ReachabilityBits).AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<unsigned_int>)this_00;
      if (FVar14 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = FVar14;
      }
      iVar10 = iVar9;
      if (iVar9 < 0) {
        iVar10 = iVar9 + 0x1f;
      }
      puVar2 = (uint *)((longlong)FVar15 + (longlong)(iVar10 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar9 & 0x1f);
      if ((local_118 == (UObjectBaseUtility *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Test",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                             ,0x760,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(uint *)&pUVar5->field_0x8 >> 0x1e & 1) != 0) {
        local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_110.Data.ArrayNum = 0;
        local_110.Data.ArrayMax = 0;
        UObjectBaseUtility::GetFullName(local_118,(UObject *)0x0,&local_110,None);
        UE::Logging::Private::BasicFatalLog
                  (&`public:_void___cdecl_FCollectorTagUsedNonRecursive::PerformReachabilityAnalysis(EObjectFlags,EInternalObjectFlags,EObjectFlags,FReferencerInformationList*___ptr64)___ptr64'
                    ::__l15::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
        if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data.AllocatorInstance.Data);
        }
      }
      pFVar3 = (this->ObjectsToSerialize).AllocatorInstance.Data;
      if ((pFVar3 <= (FScriptContainerElement *)&local_118) &&
         ((FScriptContainerElement *)&local_118 <
          pFVar3 + (longlong)(this->ObjectsToSerialize).ArrayMax * 8)) {
LAB_14227a276:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
LAB_14227a2a6:
      iVar9 = (this->ObjectsToSerialize).ArrayNum;
      piVar1 = &(this->ObjectsToSerialize).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->ObjectsToSerialize).AllocatorInstance,piVar1);
      }
      (this->ObjectsToSerialize).ArrayNum = iVar9 + 1;
      *(UObjectBaseUtility **)
       ((this->ObjectsToSerialize).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_118;
    }
LAB_14227a2e0:
    do {
      do {
        bVar7 = FUObjectArray::TIterator::Advance((TIterator *)&local_100);
        lVar19 = local_100._padding_;
        if (!bVar7) goto joined_r0x000142279fa9;
        if (local_100._padding_ == 0) {
          lVar18 = 0;
        }
        else {
          lVar18 = *(longlong *)(local_100._padding_ + 8);
        }
      } while ((local_100.ExclusionFlags & *(EObjectFlags *)(lVar18 + 8)) != RF_NoFlags);
      pUVar11 = Z_Construct_UClass_UObject_NoRegister();
      EVar6 = local_100.InternalExclusionFlags;
      if (local_100.Class != pUVar11) {
        iVar9 = (int)(local_100.Class)->_padding_;
        if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x38) < iVar9) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) + (longlong)iVar9 * 8) !=
            &(local_100.Class)->_padding_)) goto LAB_14227a2e0;
      }
      iVar9 = *(int *)(lVar18 + 0xc);
      if ((iVar9 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x443,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (iVar9 < GUObjectArray.ObjObjects.NumElements) {
        pFVar13 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar9);
      }
      else {
        pFVar13 = (FUObjectItem *)0x0;
      }
    } while ((EVar6 & (EInternalObjectFlags)
                      ((ulonglong)(pFVar13->field0_0x0).FlagsAndRefCount >> 0x20)) != Borrowed);
    goto joined_r0x000142279fa9;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(local_100._padding_ + 0x30));
  uVar17 = 0;
  if (0 < (this->ObjectsToSerialize).ArrayNum) {
    lVar19 = 0;
    do {
      uVar16 = 0;
      if ((int)uVar17 < (this->ObjectsToSerialize).ArrayNum) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar17 = uVar17 + 1;
      this_01 = *(UObject **)((this->ObjectsToSerialize).AllocatorInstance.Data + lVar19 * 8);
      this->CurrentObject = this_01;
      this->CurrentReferenceInfo = (FReferencerInformation *)0x0;
      if ((this_01 == (UObject *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                             ,0x1693,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar18 = *(longlong *)&this_01->field_0x10;
      pUVar11 = Z_Construct_UClass_UClass_NoRegister();
      if (pUVar11 == (UClass *)0x0) {
LAB_14227a492:
        FArchiveState::FArchiveState(&local_d8);
        local_d8.ArIsObjectReferenceCollector = '\x01';
        local_d8._padding_ = (longlong)&___7FReferenceCollectorArchive__6B_;
        local_40 = 0;
        local_48 = this_01;
        local_38 = this;
        bVar7 = (bool)(**(code **)(this->_padding_ + 0x48))(this);
        FArchiveState::SetIsPersistent(&local_d8,bVar7);
        bVar8 = (**(code **)(this->_padding_ + 0x40))(this);
        local_d8._padding_ = (longlong)&___7FPropertyTrackingReferenceCollectorArchive__6B_;
        local_d8._42_1_ = (bVar8 & 1) * '\x02' | local_d8._42_1_ & 0xfd;
        UObject::SerializeScriptProperties(this_01,(FArchive *)&local_d8);
        FArchive::~FArchive((FArchive *)&local_d8);
      }
      else {
        iVar9 = (int)pUVar11->_padding_;
        if ((*(int *)(lVar18 + 0x38) < iVar9) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar18 + 0x30) + (longlong)iVar9 * 8) !=
            &pUVar11->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (!bVar7) goto LAB_14227a492;
      }
      UObject::CallAddReferencedObjects(this_01,(FReferenceCollector *)this);
      lVar19 = lVar19 + 1;
    } while ((int)uVar17 < (this->ObjectsToSerialize).ArrayNum);
  }
  return;
}

