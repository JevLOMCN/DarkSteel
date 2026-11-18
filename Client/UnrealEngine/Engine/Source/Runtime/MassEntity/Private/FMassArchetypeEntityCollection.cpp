// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 15

// Append<FMassArchetypeEntityCollection_const_&> @ 1471bed10

void __thiscall
FMassArchetypeEntityCollection::Append<FMassArchetypeEntityCollection_const_&>
          (FMassArchetypeEntityCollection *this,FMassArchetypeEntityCollection *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FIdentityFunctor local_res8 [8];
  
  piVar1 = &(this->Ranges).ArrayNum;
  iVar2 = *piVar1;
  if (((this->Archetype).ArchetypeHandle.DataPtr.Object !=
       (param_1->Archetype).ArchetypeHandle.DataPtr.Object) ||
     ((this->Archetype).HandleVersion != (param_1->Archetype).HandleVersion)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSameArchetype(Other)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassArchetypeTypes.h"
                       ,0x1a8,
                       L"Unable to merge two entity collections representing different archetypes");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (this == param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar3 = (param_1->Ranges).ArrayNum;
  if (iVar3 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,iVar3,(ForAnyElementType *)this,piVar1,&(this->Ranges).ArrayMax);
    memcpy((this->Ranges).AllocatorInstance.Data + (longlong)iVar6 * 0xc,
           (param_1->Ranges).AllocatorInstance.Data,(longlong)iVar3 * 0xc);
  }
  if (iVar2 != 0) {
    AlgoImpl::
    IntroSortInternal<FMassArchetypeEntityCollection::FArchetypeEntityRange,int,FIdentityFunctor,TDereferenceWrapper<FMassArchetypeEntityCollection::FArchetypeEntityRange,TLess<void>_>_>
              ((FArchetypeEntityRange *)(this->Ranges).AllocatorInstance.Data,*piVar1,local_res8[0],
               (TLess<void> *)local_res8);
  }
  return;
}

// FMassArchetypeEntityCollection @ 1471d68d0

FMassArchetypeEntityCollection * __thiscall
FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
          (FMassArchetypeEntityCollection *this,FMassArchetypeHandle *param_1,
          FMassEntityHandle param_2)

{
  FMassArchetypeData *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMassArchetypeEntityCollection *pFVar5;
  int *piVar6;
  undefined1 *puVar7;
  int *piVar8;
  FArchetypeEntityRange local_38;
  undefined1 local_2c [4];
  initializer_list<FMassArchetypeEntityCollection::FArchetypeEntityRange> local_28;
  
  pFVar1 = (param_1->DataPtr).Object;
  local_38.SubchunkStart = param_2.Index;
  if (pFVar1 == (FMassArchetypeData *)0x0) {
    local_38.ChunkIndex = 0;
  }
  else {
    if (*(int *)&(pFVar1->EntityMap).field_0x8 != *(int *)&(pFVar1->EntityMap).field_0x34) {
      puVar7 = *(undefined1 **)&(pFVar1->EntityMap).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(pFVar1->EntityMap).field_0x38;
      }
      iVar4 = *(int *)(puVar7 + ((ulonglong)(*(int *)&(pFVar1->EntityMap).field_0x48 - 1) &
                                (ulonglong)param_2 & 0xffffffff) * 4);
      if (iVar4 != -1) {
        do {
          piVar6 = (int *)((longlong)iVar4 * 0x10 + *(longlong *)&pFVar1->EntityMap);
          if (*piVar6 == local_38.SubchunkStart) {
            piVar8 = piVar6 + 1;
            if (piVar6 == (int *)0x0) {
              piVar8 = (int *)0x0;
            }
            if (piVar8 == (int *)0x0) goto LAB_1471d695c;
            goto LAB_1471d6982;
          }
          iVar4 = piVar6[2];
        } while (iVar4 != -1);
      }
    }
    piVar8 = (int *)0x0;
LAB_1471d695c:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TrueIndexPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeTypes.cpp"
                       ,0x2e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMassArchetypeEntityCollection *)(*pcVar2)();
      return pFVar5;
    }
LAB_1471d6982:
    iVar4 = *piVar8;
    if ((iVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TrueIndex >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeTypes.cpp"
                           ,0x30,L"Negative values are unexpected here"), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMassArchetypeEntityCollection *)(*pcVar2)();
      return pFVar5;
    }
    local_38.ChunkIndex = iVar4 / pFVar1->NumEntitiesPerChunk;
    local_38.SubchunkStart = iVar4 % pFVar1->NumEntitiesPerChunk;
  }
  local_28._First = &local_38;
  local_38.Length = 1;
  local_28._Last = (FArchetypeEntityRange *)local_2c;
  TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>::
  TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>
            (&this->Ranges,&local_28);
  (this->Archetype).ArchetypeHandle.DataPtr.Object = (param_1->DataPtr).Object;
  (this->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController =
       (param_1->DataPtr).SharedReferenceCount.ReferenceController;
  (param_1->DataPtr).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_1->DataPtr).Object = (FMassArchetypeData *)0x0;
  pFVar1 = (this->Archetype).ArchetypeHandle.DataPtr.Object;
  if (pFVar1 == (FMassArchetypeData *)0x0) {
    (this->Archetype).HandleVersion = 0;
    return this;
  }
  (this->Archetype).HandleVersion = pFVar1->EntityOrderVersion;
  return this;
}

// FMassArchetypeEntityCollection @ 1471d6a70

FMassArchetypeEntityCollection * __thiscall
FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
          (FMassArchetypeEntityCollection *this,TSharedPtr<FMassArchetypeData,1> *param_1,
          EInitializationType param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FMassArchetypeData *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FMassArchetypeEntityCollection *pFVar6;
  
  uVar5 = 0;
  (this->Ranges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Ranges).ArrayNum = 0;
  (this->Ranges).ArrayMax = 0;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Archetype).ArchetypeHandle.DataPtr.Object = pFVar2;
  (this->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController = pTVar1;
  if (pFVar2 != (FMassArchetypeData *)0x0) {
    uVar5 = pFVar2->EntityOrderVersion;
  }
  (this->Archetype).HandleVersion = uVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (param_2 == GatherAll) {
    if (param_1->Object == (FMassArchetypeData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InArchetype.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeTypes.cpp"
                         ,0xd3,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FMassArchetypeEntityCollection *)(*pcVar3)();
        return pFVar6;
      }
    }
    GatherChunksFromArchetype(this);
  }
  return this;
}

// FMassArchetypeEntityCollection @ 1471d6b10

FMassArchetypeEntityCollection * __thiscall
FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
          (FMassArchetypeEntityCollection *this,FMassArchetypeHandle *param_1,
          FMassEntityHandle param_2)

{
  FMassArchetypeData *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMassArchetypeEntityCollection *pFVar6;
  int *piVar7;
  undefined1 *puVar8;
  int *piVar9;
  FArchetypeEntityRange local_38;
  undefined1 local_2c [4];
  initializer_list<FMassArchetypeEntityCollection::FArchetypeEntityRange> local_28;
  
  pFVar1 = (param_1->DataPtr).Object;
  local_38.SubchunkStart = param_2.Index;
  if (pFVar1 == (FMassArchetypeData *)0x0) {
    local_38.ChunkIndex = 0;
  }
  else {
    if (*(int *)&(pFVar1->EntityMap).field_0x8 != *(int *)&(pFVar1->EntityMap).field_0x34) {
      puVar8 = *(undefined1 **)&(pFVar1->EntityMap).field_0x40;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &(pFVar1->EntityMap).field_0x38;
      }
      iVar5 = *(int *)(puVar8 + ((ulonglong)(*(int *)&(pFVar1->EntityMap).field_0x48 - 1) &
                                (ulonglong)param_2 & 0xffffffff) * 4);
      if (iVar5 != -1) {
        do {
          piVar7 = (int *)((longlong)iVar5 * 0x10 + *(longlong *)&pFVar1->EntityMap);
          if (*piVar7 == local_38.SubchunkStart) {
            piVar9 = piVar7 + 1;
            if (piVar7 == (int *)0x0) {
              piVar9 = (int *)0x0;
            }
            if (piVar9 == (int *)0x0) goto LAB_1471d6b9c;
            goto LAB_1471d6bc2;
          }
          iVar5 = piVar7[2];
        } while (iVar5 != -1);
      }
    }
    piVar9 = (int *)0x0;
LAB_1471d6b9c:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TrueIndexPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeTypes.cpp"
                       ,0x2e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FMassArchetypeEntityCollection *)(*pcVar3)();
      return pFVar6;
    }
LAB_1471d6bc2:
    iVar5 = *piVar9;
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TrueIndex >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeTypes.cpp"
                           ,0x30,L"Negative values are unexpected here"), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FMassArchetypeEntityCollection *)(*pcVar3)();
      return pFVar6;
    }
    local_38.ChunkIndex = iVar5 / pFVar1->NumEntitiesPerChunk;
    local_38.SubchunkStart = iVar5 % pFVar1->NumEntitiesPerChunk;
  }
  local_28._First = &local_38;
  local_38.Length = 1;
  local_28._Last = (FArchetypeEntityRange *)local_2c;
  TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>::
  TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>
            (&this->Ranges,&local_28);
  (this->Archetype).ArchetypeHandle.DataPtr.Object = (param_1->DataPtr).Object;
  pTVar2 = (param_1->DataPtr).SharedReferenceCount.ReferenceController;
  (this->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar1 = (this->Archetype).ArchetypeHandle.DataPtr.Object;
  if (pFVar1 == (FMassArchetypeData *)0x0) {
    (this->Archetype).HandleVersion = 0;
    return this;
  }
  (this->Archetype).HandleVersion = pFVar1->EntityOrderVersion;
  return this;
}

// FMassArchetypeEntityCollection @ 1471d6cb0

FMassArchetypeEntityCollection * __thiscall
FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
          (FMassArchetypeEntityCollection *this,FMassArchetypeHandle *param_1,
          TArrayView<FMassEntityHandle_const_,int> *param_2,EDuplicatesHandling param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FMassArchetypeData *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FMassEntityHandle *pFVar9;
  FMassArchetypeEntityCollection *pFVar10;
  uint *puVar11;
  uint *puVar12;
  int *piVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  FMassEntityHandle *pFVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int *piVar21;
  undefined1 *puVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  longlong lVar26;
  FIdentityFunctor local_res8;
  undefined1 local_res10 [8];
  int local_res18;
  longlong local_80;
  int local_68;
  int iStack_64;
  undefined4 local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  TStridedView<int_const_,int> local_48;
  
  piVar21 = (int *)0x0;
  (this->Ranges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Ranges).ArrayNum = 0;
  (this->Ranges).ArrayMax = 0;
  (this->Archetype).ArchetypeHandle.DataPtr.Object = (param_1->DataPtr).Object;
  pTVar1 = (param_1->DataPtr).SharedReferenceCount.ReferenceController;
  (this->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar2 = (this->Archetype).ArchetypeHandle.DataPtr.Object;
  uVar20 = 0;
  if (pFVar2 != (FMassArchetypeData *)0x0) {
    uVar20 = pFVar2->EntityOrderVersion;
  }
  iVar7 = param_2->ArrayNum;
  (this->Archetype).HandleVersion = uVar20;
  if (0 < iVar7) {
    if (iVar7 == 1) {
      pFVar9 = TArrayView<FMassEntityHandle_const_,int>::operator[](param_2,0);
      pFVar2 = (param_1->DataPtr).Object;
      iStack_64 = (*pFVar9).Index;
      if (pFVar2 == (FMassArchetypeData *)0x0) {
        local_68 = 0;
      }
      else {
        if (*(int *)&(pFVar2->EntityMap).field_0x8 != *(int *)&(pFVar2->EntityMap).field_0x34) {
          puVar22 = *(undefined1 **)&(pFVar2->EntityMap).field_0x40;
          if (puVar22 == (undefined1 *)0x0) {
            puVar22 = &(pFVar2->EntityMap).field_0x38;
          }
          iVar7 = *(int *)(puVar22 +
                          ((ulonglong)(*(int *)&(pFVar2->EntityMap).field_0x48 - 1) &
                          (ulonglong)*pFVar9 & 0xffffffff) * 4);
          if (iVar7 != -1) {
            do {
              piVar13 = (int *)((longlong)iVar7 * 0x10 + *(longlong *)&pFVar2->EntityMap);
              if (*piVar13 == iStack_64) {
                piVar21 = piVar13 + 1;
                if (piVar13 == (int *)0x0) {
                  piVar21 = (int *)0x0;
                }
                if (piVar21 != (int *)0x0) goto LAB_1471d6de3;
                break;
              }
              iVar7 = piVar13[2];
            } while (iVar7 != -1);
          }
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TrueIndexPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeTypes.cpp"
                           ,0x2e,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FMassArchetypeEntityCollection *)(*pcVar4)();
          return pFVar10;
        }
LAB_1471d6de3:
        iVar7 = *piVar21;
        if ((iVar7 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("TrueIndex >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeTypes.cpp"
                               ,0x30,L"Negative values are unexpected here"), bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FMassArchetypeEntityCollection *)(*pcVar4)();
          return pFVar10;
        }
        local_68 = iVar7 / pFVar2->NumEntitiesPerChunk;
        iStack_64 = iVar7 % pFVar2->NumEntitiesPerChunk;
      }
      pFVar3 = (this->Ranges).AllocatorInstance.Data;
      local_60 = 1;
      if (((pFVar3 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 < pFVar3 + (longlong)(this->Ranges).ArrayMax * 0xc))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FMassArchetypeEntityCollection *)(*pcVar4)();
        return pFVar10;
      }
      iVar7 = (this->Ranges).ArrayNum;
      if (iVar7 == (this->Ranges).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)this,&(this->Ranges).ArrayMax);
      }
      (this->Ranges).ArrayNum = iVar7 + 1;
      pFVar3 = (this->Ranges).AllocatorInstance.Data;
      *(ulonglong *)(pFVar3 + (longlong)iVar7 * 0xc) = CONCAT44(iStack_64,local_68);
      *(undefined4 *)(pFVar3 + (longlong)iVar7 * 0xc + 8) = local_60;
    }
    else {
      pFVar2 = (param_1->DataPtr).Object;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50 = 0;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar7,&local_58,(int *)&local_50,(int *)((longlong)&local_50 + 4));
      pFVar16 = param_2->DataPtr;
      lVar26 = 0;
      pFVar9 = pFVar16 + iVar7;
      if (pFVar2 == (FMassArchetypeData *)0x0) {
        for (; pFVar16 != pFVar9; pFVar16 = pFVar16 + 1) {
          iVar7 = pFVar16->Index;
          if ((iVar7 != 0) && (pFVar16->SerialNumber != 0)) {
            uVar18 = (uint)piVar21;
            uVar20 = 0;
            if ((int)uVar18 < (int)local_50) {
              uVar20 = ~uVar18 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              pFVar10 = (FMassArchetypeEntityCollection *)(*pcVar4)();
              return pFVar10;
            }
            piVar21 = (int *)(ulonglong)(uVar18 + 1);
            *(int *)(local_58.Data + lVar26) = iVar7;
            lVar26 = lVar26 + 4;
          }
        }
      }
      else {
        for (; pFVar16 != pFVar9; pFVar16 = pFVar16 + 1) {
          uVar20 = pFVar16->Index;
          if (((uVar20 != 0) && (pFVar16->SerialNumber != 0)) &&
             (*(int *)&(pFVar2->EntityMap).field_0x8 != *(int *)&(pFVar2->EntityMap).field_0x34)) {
            puVar22 = *(undefined1 **)&(pFVar2->EntityMap).field_0x40;
            puVar14 = &(pFVar2->EntityMap).field_0x38;
            if (puVar22 != (undefined1 *)0x0) {
              puVar14 = puVar22;
            }
            uVar18 = *(uint *)(puVar14 +
                              (ulonglong)(*(int *)&(pFVar2->EntityMap).field_0x48 - 1U & uVar20) * 4
                              );
            if (uVar18 != 0xffffffff) {
              do {
                puVar12 = (uint *)((longlong)(int)uVar18 * 0x10 + *(longlong *)&pFVar2->EntityMap);
                if (*puVar12 == uVar20) {
                  puVar11 = puVar12 + 1;
                  if (puVar12 == (uint *)0x0) {
                    puVar11 = (uint *)0x0;
                  }
                  if (puVar11 != (uint *)0x0) {
                    uVar20 = *puVar11;
                    uVar23 = (uint)piVar21;
                    uVar18 = 0;
                    if ((int)uVar23 < (int)local_50) {
                      uVar18 = ~uVar23 >> 0x1f;
                    }
                    if ((uVar18 == 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      pFVar10 = (FMassArchetypeEntityCollection *)(*pcVar4)();
                      return pFVar10;
                    }
                    piVar21 = (int *)(ulonglong)(uVar23 + 1);
                    *(uint *)(local_58.Data + lVar26) = uVar20;
                    lVar26 = lVar26 + 4;
                  }
                  break;
                }
                uVar18 = puVar12[2];
              } while (uVar18 != 0xffffffff);
            }
          }
        }
      }
      uVar20 = (uint)piVar21;
      if ((int)local_50 < (int)uVar20) {
        iVar19 = uVar20 - (int)local_50;
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar19,&local_58,(int *)&local_50,(int *)((longlong)&local_50 + 4));
        memset(local_58.Data + (longlong)iVar7 * 4,0,(longlong)iVar19 << 2);
        iVar7 = (int)local_50;
      }
      else {
        if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulong64)piVar21);
        }
        iVar7 = (int)local_50;
        if ((int)uVar20 < (int)local_50) {
          uVar18 = (int)local_50 - uVar20;
          if ((int)(uVar18 | uVar20) < 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              );
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              pFVar10 = (FMassArchetypeEntityCollection *)(*pcVar4)();
              return pFVar10;
            }
            iVar7 = (int)local_50;
          }
          if (uVar18 != 0) {
            iVar19 = (iVar7 - uVar18) - uVar20;
            if (iVar19 != 0) {
              memmove(local_58.Data + (longlong)(int)uVar20 * 4,
                      local_58.Data + (longlong)(int)uVar20 * 4 + (longlong)(int)uVar18 * 4,
                      (longlong)iVar19 << 2);
              iVar7 = (int)local_50;
            }
            iVar7 = iVar7 - uVar18;
            local_50 = CONCAT44(local_50._4_4_,iVar7);
          }
        }
      }
      local_res8 = SUB81(this,0);
      AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                ((int *)local_58.Data,iVar7,local_res8,(TLess<void> *)local_res10);
      iVar7 = (int)local_50;
      if (param_3 == FoldDuplicates) {
        uVar17 = (ulonglong)(int)local_50;
        if ((int)local_50 < 1) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FMassArchetypeEntityCollection *)(*pcVar4)();
            return pFVar10;
          }
          uVar17 = local_50 & 0xffffffff;
        }
        uVar20 = 1;
        local_res18 = *(int *)local_58.Data;
        iVar7 = (int)uVar17;
        if (1 < (int)uVar17) {
          local_80 = 1;
          do {
            iVar7 = local_res18;
            uVar23 = ~uVar20 >> 0x1f;
            uVar18 = 0;
            if ((int)uVar20 < (int)uVar17) {
              uVar18 = uVar23;
            }
            if (uVar18 == 0) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                pFVar10 = (FMassArchetypeEntityCollection *)(*pcVar4)();
                return pFVar10;
              }
              uVar17 = local_50 & 0xffffffff;
            }
            uVar15 = 0;
            lVar26 = local_80 * 4;
            iVar19 = (int)uVar17;
            if (*(int *)(local_58.Data + lVar26) == iVar7) {
              uVar24 = uVar15;
              do {
                uVar18 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar18;
                uVar24 = uVar24 + 1;
                lVar26 = lVar26 + 4;
                uVar25 = uVar18 + uVar20;
                if ((longlong)iVar19 <= (longlong)(local_80 + uVar24)) break;
                uVar8 = 0;
                if ((int)uVar25 < (int)uVar17) {
                  uVar8 = ~uVar25 >> 0x1f;
                }
                if (uVar8 == 0) {
                  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar6) {
                    pcVar4 = (code *)swi(3);
                    pFVar10 = (FMassArchetypeEntityCollection *)(*pcVar4)();
                    return pFVar10;
                  }
                  uVar17 = local_50 & 0xffffffff;
                }
              } while (*(int *)(local_58.Data + lVar26) == local_res18);
              uVar8 = 0;
              if ((int)uVar25 <= (int)uVar17) {
                uVar8 = ~uVar18 >> 0x1f;
              }
              if ((uVar23 & uVar8) == 0) {
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  );
                if (bVar6) {
                  pcVar4 = (code *)swi(3);
                  pFVar10 = (FMassArchetypeEntityCollection *)(*pcVar4)();
                  return pFVar10;
                }
                uVar17 = local_50 & 0xffffffff;
              }
              if (uVar18 != 0) {
                iVar19 = ((int)uVar17 - uVar18) - uVar20;
                iVar7 = (int)uVar17;
                if (iVar19 != 0) {
                  memmove(local_58.Data + (longlong)(int)uVar20 * 4,
                          local_58.Data + (longlong)(int)uVar20 * 4 + (longlong)(int)uVar18 * 4,
                          (longlong)iVar19 << 2);
                  iVar7 = (int)local_50;
                }
                uVar17 = (ulonglong)(iVar7 - uVar18);
                local_50 = CONCAT44(local_50._4_4_,iVar7 - uVar18);
              }
              local_80 = local_80 + -1;
              uVar20 = uVar20 - 1;
            }
            else {
              uVar18 = 0;
              if ((int)uVar20 < iVar19) {
                uVar18 = uVar23;
              }
              if (uVar18 == 0) {
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar4 = (code *)swi(3);
                  pFVar10 = (FMassArchetypeEntityCollection *)(*pcVar4)();
                  return pFVar10;
                }
                uVar17 = local_50 & 0xffffffff;
              }
              local_res18 = *(int *)(local_58.Data + lVar26);
            }
            local_80 = local_80 + 1;
            uVar20 = uVar20 + 1;
            iVar7 = (int)uVar17;
          } while ((int)uVar20 < iVar7);
        }
      }
      FVar5.Data = local_58.Data;
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FMassArchetypeEntityCollection *)(*pcVar4)();
        return pFVar10;
      }
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumElements >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x3f,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FMassArchetypeEntityCollection *)(*pcVar4)();
        return pFVar10;
      }
      local_48.NumElements = iVar7;
      local_48.BytesBetweenElements = 4;
      local_48.FirstElementPtr = (int *)FVar5.Data;
      BuildEntityRanges(this,&local_48);
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
    }
  }
  return this;
}

// FMassArchetypeEntityCollection @ 1471d74d0

FMassArchetypeEntityCollection * __thiscall
FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
          (FMassArchetypeEntityCollection *this,FMassArchetypeHandle *param_1,
          EInitializationType param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FMassArchetypeData *pFVar2;
  code *pcVar3;
  bool bVar4;
  FMassArchetypeEntityCollection *pFVar5;
  uint uVar6;
  
  uVar6 = 0;
  (this->Ranges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Ranges).ArrayNum = 0;
  (this->Ranges).ArrayMax = 0;
  (this->Archetype).ArchetypeHandle.DataPtr.Object = (param_1->DataPtr).Object;
  pTVar1 = (param_1->DataPtr).SharedReferenceCount.ReferenceController;
  (this->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar2 = (this->Archetype).ArchetypeHandle.DataPtr.Object;
  if (pFVar2 != (FMassArchetypeData *)0x0) {
    uVar6 = pFVar2->EntityOrderVersion;
  }
  (this->Archetype).HandleVersion = uVar6;
  if (param_2 == GatherAll) {
    if ((param_1->DataPtr).Object == (FMassArchetypeData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeTypes.cpp"
                         ,0xc9,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FMassArchetypeEntityCollection *)(*pcVar3)();
        return pFVar5;
      }
    }
    GatherChunksFromArchetype(this);
  }
  return this;
}

// operator= @ 1471e20b0

FMassArchetypeEntityCollection * __thiscall
FMassArchetypeEntityCollection::operator=
          (FMassArchetypeEntityCollection *this,FMassArchetypeEntityCollection *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  TReferenceControllerBase<1> *pTVar4;
  FMassArchetypeData *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  if (this != param_1) {
    iVar2 = (this->Ranges).ArrayMax;
    piVar1 = &(this->Ranges).ArrayMax;
    _Src = (param_1->Ranges).AllocatorInstance.Data;
    iVar3 = (param_1->Ranges).ArrayNum;
    (this->Ranges).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((this->Ranges).AllocatorInstance.Data,_Src,(longlong)iVar3 * 0xc);
      }
    }
  }
  pTVar4 = (param_1->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController;
  pFVar5 = (param_1->Archetype).ArchetypeHandle.DataPtr.Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (this->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController;
  (this->Archetype).ArchetypeHandle.DataPtr.Object = pFVar5;
  (this->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  (this->Archetype).HandleVersion = (param_1->Archetype).HandleVersion;
  return this;
}

// BuildEntityRanges @ 1471fdb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMassArchetypeEntityCollection::BuildEntityRanges
          (FMassArchetypeEntityCollection *this,TStridedView<int_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMassArchetypeData *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_1c8 [32];
  wchar_t *local_1a8;
  FScriptContainerElement *local_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  int local_178;
  int iStack_174;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_164;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  if ((this->Ranges).ArrayNum != 0) {
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FMassArchetypeEntityCollection::BuildEntityRanges",0x31,Yes);
    local_1a8 = local_158.Ptr;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ranges.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeTypes.cpp"
                       ,0xa3,L"Calling %s is valid only for initial configuration");
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar4 = (this->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController;
  pFVar5 = (this->Archetype).ArchetypeHandle.DataPtr.Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (pFVar5 == (FMassArchetypeData *)0x0) {
    iVar13 = 0x7fffffff;
  }
  else {
    iVar13 = pFVar5->NumEntitiesPerChunk;
  }
  iVar2 = param_1->NumElements;
  pFVar12 = (FScriptContainerElement *)&local_168;
  iVar11 = 0;
  iVar14 = -1;
  local_164 = 0;
  local_168 = 0xffffffff;
  iVar8 = -1;
  iVar10 = iVar11;
  do {
    if (iVar11 == iVar2) {
      *(int *)(pFVar12 + 8) = iVar10;
      return;
    }
    iVar3 = *(int *)((longlong)param_1->BytesBetweenElements * (longlong)iVar11 +
                    (longlong)param_1->FirstElementPtr);
    if ((iVar14 <= iVar3) || (iVar3 != iVar8 + 1)) {
      *(int *)(pFVar12 + 8) = iVar10;
      pFVar12 = (this->Ranges).AllocatorInstance.Data;
      local_178 = iVar3 / iVar13;
      iStack_174 = iVar3 % iVar13;
      iVar10 = 0;
      local_170 = 0;
      iVar14 = (local_178 + 1) * iVar13;
      if ((pFVar12 <= (FScriptContainerElement *)&local_178) &&
         (lVar9 = (longlong)(this->Ranges).ArrayMax,
         (FScriptContainerElement *)&local_178 < pFVar12 + lVar9 * 0xc)) {
        local_190 = (longlong)(this->Ranges).ArrayNum;
        local_188 = 0xc;
        local_1a8 = (wchar_t *)&local_178;
        local_1a0 = pFVar12;
        local_198 = lVar9;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar8 = (this->Ranges).ArrayNum;
      piVar1 = &(this->Ranges).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)this,piVar1);
      }
      (this->Ranges).ArrayNum = iVar8 + 1;
      pFVar12 = (this->Ranges).AllocatorInstance.Data;
      *(ulonglong *)(pFVar12 + (longlong)iVar8 * 0xc) = CONCAT44(iStack_174,local_178);
      pFVar12 = pFVar12 + (longlong)iVar8 * 0xc;
      *(undefined4 *)(pFVar12 + 8) = local_170;
    }
    iVar10 = iVar10 + 1;
    iVar11 = iVar11 + 1;
    iVar8 = iVar3;
  } while( true );
}

// DebugCountEntities @ 14720dd10

int __thiscall
FMassArchetypeEntityCollection::DebugCountEntities(FMassArchetypeEntityCollection *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  int iVar3;
  FMassArchetypeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_48;
  
  pFVar4 = (this->Archetype).ArchetypeHandle.DataPtr.Object;
  pTVar5 = (this->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController;
  iVar8 = 0;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  iVar3 = (this->Ranges).ArrayNum;
  pFVar10 = (this->Ranges).AllocatorInstance.Data;
  pFVar1 = pFVar10 + (longlong)iVar3 * 0xc;
  if (pFVar4 == (FMassArchetypeData *)0x0) {
    while( true ) {
      if ((this->Ranges).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar10 == pFVar1) break;
      if (*(int *)(pFVar10 + 8) < 1) {
        `FMassArchetypeEntityCollection::DebugCountEntities'::__l15::<lambda_1>::operator()
                  (local_res18);
      }
      iVar8 = iVar8 + *(int *)(pFVar10 + 8);
      pFVar10 = pFVar10 + 0xc;
    }
  }
  else {
    while( true ) {
      if ((this->Ranges).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar10 == pFVar1) break;
      uVar2 = *(undefined8 *)pFVar10;
      iVar11 = *(int *)(pFVar10 + 8);
      local_48 = (uint)uVar2;
      if ((((int)local_48 < 0) || ((pFVar4->Chunks).ArrayNum <= (int)local_48)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Chunks.IsValidIndex(EntityRange.ChunkIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                             ,299,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        iVar8 = (*pcVar6)();
        return iVar8;
      }
      uVar9 = 0;
      if ((int)local_48 < (pFVar4->Chunks).ArrayNum) {
        uVar9 = ~local_48 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        iVar8 = (*pcVar6)();
        return iVar8;
      }
      if (iVar11 < 1) {
        iVar11 = *(int *)((pFVar4->Chunks).AllocatorInstance.Data +
                         (longlong)(int)local_48 * 0x90 + 0x10) - (int)((ulonglong)uVar2 >> 0x20);
      }
      iVar8 = iVar8 + iVar11;
      pFVar10 = pFVar10 + 0xc;
    }
  }
  return iVar8;
}

// DoesContainOverlappingRanges @ 147214bd0

bool __cdecl
FMassArchetypeEntityCollection::DoesContainOverlappingRanges
          (TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *param_1)

{
  int iVar1;
  FArchetypeEntityRange *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  bool bVar13;
  
  iVar10 = param_1->ArrayNum;
  uVar11 = 1;
  if (1 < iVar10) {
    lVar12 = 0xc;
    do {
      uVar7 = 0;
      if ((int)(uVar11 - 1) < iVar10) {
        uVar7 = -uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar2 = param_1->DataPtr;
      uVar7 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      piVar9 = (int *)((longlong)&param_1->DataPtr->ChunkIndex + lVar12);
      if (*(int *)((longlong)&pFVar2[-1].ChunkIndex + lVar12) == *piVar9) {
        iVar1 = piVar9[1];
        iVar10 = *(int *)((longlong)pFVar2 + lVar12 + -8);
        bVar5 = SBORROW4(iVar10,iVar1);
        iVar8 = iVar10 - iVar1;
        if (iVar10 == iVar1) {
          iVar8 = *(int *)((longlong)pFVar2 + lVar12 + -4);
          bVar5 = SBORROW4(iVar8,piVar9[2]);
          iVar8 = iVar8 - piVar9[2];
        }
        if (bVar5 == iVar8 < 0) {
          iVar8 = piVar9[2];
          iVar1 = iVar8 + iVar1;
          bVar13 = SBORROW4(iVar1,iVar10);
          iVar3 = iVar1 - iVar10;
          bVar5 = iVar1 == iVar10;
        }
        else {
          iVar8 = *(int *)((longlong)pFVar2 + lVar12 + -4);
          iVar10 = iVar8 + iVar10;
          bVar13 = SBORROW4(iVar10,iVar1);
          iVar3 = iVar10 - iVar1;
          bVar5 = iVar10 == iVar1;
        }
        if ((!bVar5 && bVar13 == iVar3 < 0) || (iVar8 == 0)) {
          return true;
        }
      }
      iVar10 = param_1->ArrayNum;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0xc;
    } while ((int)uVar11 < iVar10);
  }
  return false;
}

// ExportEntityHandles @ 147219090

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMassArchetypeEntityCollection::ExportEntityHandles
          (FMassArchetypeEntityCollection *this,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  FMassArchetypeData *this_00;
  TReferenceControllerBase<1> *pTVar3;
  FMassArchetypeData *pFVar4;
  code *pcVar5;
  undefined1 uVar6;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *pTVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_38;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_28;
  
  if ((this->Ranges).ArrayNum == 0) {
    return false;
  }
  this_00 = (this->Archetype).ArchetypeHandle.DataPtr.Object;
  pTVar3 = (this->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController;
  iVar1 = param_1->ArrayNum;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (this_00 == (FMassArchetypeData *)0x0) {
    if (UE::AITestSuite::TestsInProgress < 1) {
      ``FMassArchetypeEntityCollection::ExportEntityHandles'::__l6::<lambda_1>::operator()'::__l16::
      <lambda_1>::operator()(local_res8);
      return iVar1 != param_1->ArrayNum;
    }
    if (2 < (byte)LogTestableEnsures._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_This_operation__15156ed18,
                 (FLogCategoryBase *)&LogTestableEnsures);
      return iVar1 != param_1->ArrayNum;
    }
  }
  else {
    iVar2 = (this->Ranges).ArrayNum;
    if (UE::AITestSuite::TestsInProgress < 1) {
      if ((((iVar2 != 0) ||
           ((this->Archetype).ArchetypeHandle.DataPtr.Object != (FMassArchetypeData *)0x0)) &&
          ((pFVar4 = (this->Archetype).ArchetypeHandle.DataPtr.Object,
           pFVar4 == (FMassArchetypeData *)0x0 ||
           (pFVar4->EntityOrderVersion != (this->Archetype).HandleVersion)))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsUpToDate()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeTypes.cpp"
                             ,0x101,
                             L"The entity collection is out of date. Unable to reliably generate handle list."
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar6 = (*pcVar5)();
        return (bool)uVar6;
      }
    }
    else if (((iVar2 != 0) ||
             ((this->Archetype).ArchetypeHandle.DataPtr.Object != (FMassArchetypeData *)0x0)) &&
            ((pFVar4 = (this->Archetype).ArchetypeHandle.DataPtr.Object,
             pFVar4 == (FMassArchetypeData *)0x0 ||
             (pFVar4->EntityOrderVersion != (this->Archetype).HandleVersion)))) {
      if ((byte)LogTestableEnsures._0_1_ < 2) {
        return false;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
      return false;
    }
    pTVar7 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
             TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int><TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>_const_&,TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>_>
                       (&local_28,&this->Ranges);
    local_38.DataPtr = pTVar7->DataPtr;
    local_38.ArrayNum = pTVar7->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&pTVar7->field_0xc;
    FMassArchetypeData::ExportEntityHandles(this_00,&local_38,param_1);
    bVar8 = iVar1 == param_1->ArrayNum;
    if (!bVar8) goto LAB_1472191f8;
    `FMassArchetypeEntityCollection::ExportEntityHandles'::__l8::<lambda_2>::operator()(local_res18)
    ;
  }
  bVar8 = iVar1 == param_1->ArrayNum;
LAB_1472191f8:
  return !bVar8;
}

// GatherChunksFromArchetype @ 14721d9e0

void __thiscall
FMassArchetypeEntityCollection::GatherChunksFromArchetype(FMassArchetypeEntityCollection *this)

{
  int *piVar1;
  uint uVar2;
  FMassArchetypeData *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  pFVar3 = (this->Archetype).ArchetypeHandle.DataPtr.Object;
  pTVar4 = (this->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (pFVar3 != (FMassArchetypeData *)0x0) {
    uVar2 = (pFVar3->Chunks).ArrayNum;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    piVar1 = &(this->Ranges).ArrayMax;
    iVar9 = 0;
    (this->Ranges).ArrayNum = 0;
    if ((this->Ranges).ArrayMax < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar2,(ForAnyElementType *)this,0,piVar1);
    }
    if (0 < (int)uVar2) {
      do {
        pFVar5 = (this->Ranges).AllocatorInstance.Data;
        uStack_14 = 0;
        uStack_10 = 0;
        local_18 = iVar9;
        if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
            ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)*piVar1 * 0xc)) &&
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
        iVar8 = (this->Ranges).ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,(ForAnyElementType *)this,piVar1);
        }
        iVar9 = iVar9 + 1;
        (this->Ranges).ArrayNum = iVar8 + 1;
        pFVar5 = (this->Ranges).AllocatorInstance.Data;
        *(ulonglong *)(pFVar5 + (longlong)iVar8 * 0xc) = CONCAT44(uStack_14,local_18);
        *(undefined4 *)(pFVar5 + (longlong)iVar8 * 0xc + 8) = uStack_10;
      } while (iVar9 < (int)uVar2);
    }
  }
  return;
}

// IsSame @ 147232ec0

bool __thiscall
FMassArchetypeEntityCollection::IsSame
          (FMassArchetypeEntityCollection *this,FMassArchetypeEntityCollection *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  if ((((this->Archetype).ArchetypeHandle.DataPtr.Object ==
        (param_1->Archetype).ArchetypeHandle.DataPtr.Object) &&
      ((this->Archetype).HandleVersion == (param_1->Archetype).HandleVersion)) &&
     (iVar7 = (this->Ranges).ArrayNum, iVar7 == (param_1->Ranges).ArrayNum)) {
    uVar8 = 0;
    if (0 < iVar7) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < iVar7) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        pFVar1 = (this->Ranges).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar8 < (param_1->Ranges).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        pFVar2 = (param_1->Ranges).AllocatorInstance.Data;
        if (((*(int *)(pFVar1 + lVar9) != *(int *)(pFVar2 + lVar9)) ||
            (*(int *)(pFVar1 + lVar9 + 4) != *(int *)(pFVar2 + lVar9 + 4))) ||
           (*(int *)(pFVar1 + lVar9 + 8) != *(int *)(pFVar2 + lVar9 + 8))) goto LAB_147232fe9;
        iVar7 = (this->Ranges).ArrayNum;
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0xc;
      } while ((int)uVar8 < iVar7);
    }
    bVar4 = true;
  }
  else {
LAB_147232fe9:
    bVar4 = false;
  }
  return bVar4;
}

// operator() @ 1505057b0

bool __thiscall
`FMassArchetypeEntityCollection::DebugCountEntities'::__l15::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_1767606624031080154>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1767606624031080154>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150505ad0

bool __thiscall
`FMassArchetypeEntityCollection::ExportEntityHandles'::__l8::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1767606624031080188>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1767606624031080188>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

