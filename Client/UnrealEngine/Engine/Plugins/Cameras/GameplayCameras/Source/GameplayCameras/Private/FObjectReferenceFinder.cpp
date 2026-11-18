// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// FObjectReferenceFinder @ 14d5fc0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FObjectReferenceFinder * __thiscall
UE::Cameras::FObjectReferenceFinder::FObjectReferenceFinder
          (FObjectReferenceFinder *this,UObject *param_1,TArrayView<UObject_*,int> *param_2)

{
  byte *pbVar1;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar2;
  UObject **ppUVar3;
  uint uVar4;
  code *pcVar5;
  longlong lVar6;
  UPackage *pUVar7;
  ulonglong uVar8;
  int iVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  UObject **ppUVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  ForElementType<unsigned_int> FVar18;
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
  FArchiveState::FArchiveState((FArchiveState *)this);
  uVar11 = 0;
  pTVar2 = &this->TargetObjects;
  this->_padding_ = (longlong)&___7FObjectReferenceFinder_Cameras_UE__6B_;
  *(undefined8 *)&pTVar2->Elements = 0;
  *(undefined8 *)&(this->TargetObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TargetObjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TargetObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TargetObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TargetObjects).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TargetObjects).Elements.field_0x34 = 0;
  (this->TargetObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TargetObjects).HashSize = 0;
  (this->ObjectsToVisit).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectsToVisit).ArrayNum = 0;
  (this->ObjectsToVisit).ArrayMax = 0;
  *(undefined8 *)&(this->VisitedObjects).Elements = 0;
  *(undefined8 *)&(this->VisitedObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->VisitedObjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->VisitedObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->VisitedObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->VisitedObjects).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VisitedObjects).Elements.field_0x34 = 0;
  (this->VisitedObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->VisitedObjects).HashSize = 0;
  *(undefined8 *)&this->ObjectReferenceCounts = 0;
  *(undefined8 *)&(this->ObjectReferenceCounts).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectReferenceCounts).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectReferenceCounts).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectReferenceCounts).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectReferenceCounts).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectReferenceCounts).field_0x34 = 0;
  *(undefined8 *)&(this->ObjectReferenceCounts).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectReferenceCounts).field_0x48 = 0;
  this->RootObject = param_1;
  pUVar7 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  this->PackageScope = pUVar7;
  (**(code **)(this->_padding_ + 0x108))(this,1);
  (**(code **)(this->_padding_ + 0xd8))(this);
  pcVar5 = *(code **)(this->_padding_ + 0x80);
  if (pcVar5 == FArchiveState::SetFilterEditorOnly) {
    pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
    *pbVar1 = *pbVar1 & 0xef;
  }
  else {
    (*pcVar5)(this);
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 1;
  ppUVar13 = param_2->DataPtr;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 8;
  uVar4 = param_2->ArrayNum;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if (uVar4 == 0) goto LAB_14d5fc4c1;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar4);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88,uVar4);
  uVar14 = 1;
  if (3 < uVar4) {
    uVar12 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar6 & 0x1f);
  }
  if ((local_40 != 0) && ((int)uVar14 <= (int)local_40)) goto LAB_14d5fc4c1;
  local_40 = uVar14;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar14 != 0) {
    uVar15 = uVar14;
    if (uVar14 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar15 = 0;
        goto LAB_14d5fc312;
      }
    }
    else {
LAB_14d5fc312:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar15,4);
    }
    if (0 < (int)uVar14) {
      uVar16 = (ulonglong)uVar14;
      uVar12 = uVar11;
      do {
        FVar10.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_48.Data;
        }
        uVar8 = (longlong)(int)uVar14 - 1U & uVar12;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(FVar10.Data + uVar8 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (local_40 != 0) {
    local_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    local_d8 = 0;
    uStack_d4 = 1;
    uStack_c4 = 0;
    uStack_c0 = 0;
    if (local_60 != 0) {
      FVar18 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_68;
      }
      uVar14 = *(uint *)FVar18;
      uVar12 = uVar11;
      while (uVar14 == 0) {
        uStack_c0 = (int)uVar12 + 0x20;
        uVar12 = (ulonglong)uStack_c0;
        iVar9 = (int)uVar11;
        local_d8 = iVar9 + 1;
        uVar11 = (ulonglong)local_d8;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_d8)
        goto LAB_14d5fc409;
        uVar14 = ((uint *)((longlong)FVar18 + 4))[iVar9];
      }
      uStack_d4 = -uVar14 & uVar14;
      uVar11 = (ulonglong)uStack_d4 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uStack_c4 = (int)lVar6 + -1 + uStack_c0;
      uVar11 = (ulonglong)uStack_c4;
      if ((int)local_60 < (int)uStack_c4) {
LAB_14d5fc409:
        uVar11 = (ulonglong)local_60;
        uStack_c4 = local_60;
      }
    }
    local_b0 = (longlong *)local_88;
    local_a8._padding_ = CONCAT44(uStack_d4,local_d8);
    local_a8.CurrentBitIndex = uStack_c4;
    local_a8.UnvisitedBitMask = 0xffffffff;
    local_a8._28_4_ = uStack_bc;
    local_a8.BaseBitIndex = uStack_c0;
    if ((int)uVar11 < (int)local_60) {
      do {
        puVar17 = (ulonglong *)((longlong)(int)uVar11 * 0x10 + *local_b0);
        uVar14 = ((uint)(*puVar17 >> 0x14) & 0xffff ^ (uint)(*puVar17 >> 4)) * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        uVar14 = (uVar14 >> 0x10 ^ uVar14) & local_40 - 1;
        *(uint *)((longlong)puVar17 + 0xc) = uVar14;
        FVar10.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_48.Data;
        }
        uVar12 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar14;
        *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(FVar10.Data + uVar12 * 4);
        *(int *)(FVar10.Data + uVar12 * 4) = (int)uVar11;
        local_a8.UnvisitedBitMask = local_a8.UnvisitedBitMask & ~local_a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a8);
        uVar11 = (ulonglong)(uint)local_a8.CurrentBitIndex;
      } while (local_a8.CurrentBitIndex < (local_a8.Array)->NumBits);
    }
  }
LAB_14d5fc4c1:
  ppUVar3 = ppUVar13 + (int)uVar4;
  for (; ppUVar13 != ppUVar3; ppUVar13 = ppUVar13 + 1) {
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*_const_&>
              ((TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)local_88,
               &local_b8,(bool *)ppUVar13);
  }
  if (pTVar2 != (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)local_88) {
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::
    Move<TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>
              (pTVar2,(TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)local_88)
    ;
  }
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  iVar9 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar9 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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
  return this;
}

// operator<< @ 14d601680

FArchive * __thiscall
UE::Cameras::FObjectReferenceFinder::operator<<(FObjectReferenceFinder *this,UObject **param_1)

{
  int *piVar1;
  TMap<UObject_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,int,0>_> *this_00;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  FArchive *pFVar9;
  uint uVar10;
  undefined1 *puVar11;
  ForElementType<FSetElementId> FVar12;
  undefined4 local_res8 [2];
  int local_res10 [2];
  UObject **local_18;
  undefined4 *local_10;
  
  pUVar3 = *param_1;
  if (pUVar3 == (UObject *)0x0) {
    return (FArchive *)this;
  }
  uVar10 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
           -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  uVar10 = uVar10 >> 0x10 ^ uVar10;
  if (*(int *)&(this->TargetObjects).Elements.field_0x8 !=
      *(int *)&(this->TargetObjects).Elements.field_0x34) {
    FVar12 = (this->TargetObjects).Hash.SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&(this->TargetObjects).Hash;
    }
    iVar7 = *(int *)((longlong)FVar12 +
                    (ulonglong)((this->TargetObjects).HashSize - 1U & uVar10) * 4);
    if (iVar7 != -1) {
      lVar8 = *(longlong *)&(this->TargetObjects).Elements;
      do {
        if (*(UObject **)(lVar8 + (longlong)iVar7 * 0x10) == pUVar3) {
          this_00 = &this->ObjectReferenceCounts;
          local_res8[0] = 0;
          if (*(int *)&(this->ObjectReferenceCounts).field_0x8 ==
              *(int *)&(this->ObjectReferenceCounts).field_0x34) goto LAB_14d60179f;
          puVar11 = *(undefined1 **)&(this->ObjectReferenceCounts).field_0x40;
          if (puVar11 == (undefined1 *)0x0) {
            puVar11 = &(this->ObjectReferenceCounts).field_0x38;
          }
          iVar7 = *(int *)(puVar11 +
                          (ulonglong)
                          (*(int *)&(this->ObjectReferenceCounts).field_0x48 - 1U & uVar10) * 4);
          if (iVar7 == -1) goto LAB_14d60179f;
          goto LAB_14d601780;
        }
        iVar7 = *(int *)(lVar8 + 8 + (longlong)iVar7 * 0x10);
      } while (iVar7 != -1);
    }
  }
  goto LAB_14d6017d8;
  while (iVar7 = *(int *)(lVar8 + 0x10), iVar7 != -1) {
LAB_14d601780:
    lVar8 = *(longlong *)&this_00->field_0x0 + (longlong)iVar7 * 0x18;
    if (*(UObject **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar7 * 0x18) == pUVar3) {
      if (lVar8 != 0) goto LAB_14d6017d5;
      break;
    }
  }
LAB_14d60179f:
  local_10 = local_res8;
  local_18 = param_1;
  TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>::
  EmplaceByHash<TPairInitializer<UObject_*_const_&,int_&&>_>
            ((TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_res10,
             (TPairInitializer<UObject_*_const_&,int_&&> *)(ulonglong)uVar10,(bool *)&local_18);
  lVar8 = *(longlong *)&this_00->field_0x0 + (longlong)local_res10[0] * 0x18;
LAB_14d6017d5:
  *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
LAB_14d6017d8:
  bVar6 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)*param_1,this->PackageScope);
  if (bVar6) {
    pUVar3 = *param_1;
    uVar10 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
             -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    if (*(int *)&(this->VisitedObjects).Elements.field_0x8 !=
        *(int *)&(this->VisitedObjects).Elements.field_0x34) {
      FVar12 = (this->VisitedObjects).Hash.SecondaryData;
      if (FVar12 == (ForElementType<FSetElementId>)0x0) {
        FVar12 = (ForElementType<FSetElementId>)&(this->VisitedObjects).Hash;
      }
      iVar7 = *(int *)((longlong)FVar12 +
                      (ulonglong)((this->VisitedObjects).HashSize - 1U & (uVar10 >> 0x10 ^ uVar10))
                      * 4);
      if (iVar7 != -1) {
        lVar8 = *(longlong *)&(this->VisitedObjects).Elements;
        do {
          if (*(UObject **)(lVar8 + (longlong)iVar7 * 0x10) == pUVar3) {
            return (FArchive *)this;
          }
          iVar7 = *(int *)(lVar8 + 8 + (longlong)iVar7 * 0x10);
        } while (iVar7 != -1);
      }
    }
    pTVar2 = &this->ObjectsToVisit;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar4 <= param_1) && (param_1 < pFVar4 + (longlong)(this->ObjectsToVisit).ArrayMax * 8))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FArchive *)(*pcVar5)();
      return pFVar9;
    }
    iVar7 = (this->ObjectsToVisit).ArrayNum;
    piVar1 = &(this->ObjectsToVisit).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->ObjectsToVisit).ArrayNum = iVar7 + 1;
    *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = *param_1;
  }
  return (FArchive *)this;
}

// CollectReferences @ 14d60e7f0

void __thiscall UE::Cameras::FObjectReferenceFinder::CollectReferences(FObjectReferenceFinder *this)

{
  int *piVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *this_00;
  UObject **ppUVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  ForElementType<FSetElementId> FVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  UObject *local_res8;
  longlong *local_res10;
  
  pTVar2 = &this->ObjectsToVisit;
  piVar1 = &(this->ObjectsToVisit).ArrayMax;
  (this->ObjectsToVisit).ArrayNum = 0;
  if ((this->ObjectsToVisit).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  this_00 = &this->VisitedObjects;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Reset(this_00);
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  ppUVar3 = &this->RootObject;
  if (((pFVar4 <= ppUVar3) && (ppUVar3 < pFVar4 + (longlong)*piVar1 * 8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar9 = (this->ObjectsToVisit).ArrayNum;
  if (iVar9 == *piVar1) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ObjectsToVisit).ArrayNum = iVar9 + 1;
  *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = *ppUVar3;
  iVar9 = (this->ObjectsToVisit).ArrayNum;
  do {
    if (iVar9 < 1) {
      return;
    }
    if (((this->ObjectsToVisit).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar9 = (this->ObjectsToVisit).ArrayNum;
    plVar5 = *(longlong **)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8 + -8);
    (this->ObjectsToVisit).ArrayNum = iVar9 + -1;
    uVar10 = ((uint)((ulonglong)plVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar5 >> 4)) *
             -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    local_res10 = plVar5;
    if (*(int *)&(this->VisitedObjects).Elements.field_0x8 !=
        *(int *)&(this->VisitedObjects).Elements.field_0x34) {
      FVar6 = (this->VisitedObjects).Hash.SecondaryData;
      FVar11 = (ForElementType<FSetElementId>)&(this->VisitedObjects).Hash;
      if (FVar6 != (ForElementType<FSetElementId>)0x0) {
        FVar11 = FVar6;
      }
      iVar9 = *(int *)((longlong)FVar11 +
                      (ulonglong)((this->VisitedObjects).HashSize - 1U & (uVar10 >> 0x10 ^ uVar10))
                      * 4);
      if (iVar9 != -1) {
        do {
          if (*(longlong **)(*(longlong *)&this_00->Elements + (longlong)iVar9 * 0x10) == plVar5)
          goto LAB_14d60e9cf;
          iVar9 = *(int *)(*(longlong *)&this_00->Elements + 8 + (longlong)iVar9 * 0x10);
        } while (iVar9 != -1);
      }
    }
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*_const_&>
              (this_00,&local_res8,(bool *)&local_res10);
    (**(code **)(*plVar5 + 200))(plVar5,this);
LAB_14d60e9cf:
    iVar9 = (this->ObjectsToVisit).ArrayNum;
  } while( true );
}

// GetObjectReferenceCount @ 14d61ac90

int __thiscall
UE::Cameras::FObjectReferenceFinder::GetObjectReferenceCount
          (FObjectReferenceFinder *this,UObject *param_1)

{
  int *piVar1;
  
  piVar1 = TMapBase<UObject_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,int,0>_>
           ::Find((TMapBase<UObject_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,int,0>_>
                   *)&this->ObjectReferenceCounts,param_1);
  if (piVar1 != (int *)0x0) {
    return *piVar1;
  }
  return 0;
}

// HasAnyObjectReference @ 14d61f260

bool __thiscall
UE::Cameras::FObjectReferenceFinder::HasAnyObjectReference(FObjectReferenceFinder *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar12 = 0;
  puVar1 = &(this->ObjectReferenceCounts).field_0x10;
  iVar3 = *(int *)&(this->ObjectReferenceCounts).field_0x28;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->ObjectReferenceCounts).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14d61f30d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14d61f30d:
  uVar11 = *(uint *)&(this->ObjectReferenceCounts).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar7,iVar12);
  TStack_50.CurrentBitIndex = iVar8;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_50._28_4_ = iVar8;
  TStack_50.BaseBitIndex = iVar14;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->ObjectReferenceCounts).field_0x8 -
                       *(int *)&(this->ObjectReferenceCounts).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar7 = *(uint *)&(this->ObjectReferenceCounts).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->ObjectReferenceCounts).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14d61f410;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14d61f410:
  while( true ) {
    if (*(int *)&(this->ObjectReferenceCounts).field_0x8 -
        *(int *)&(this->ObjectReferenceCounts).field_0x34 != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<UObject_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar11) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if (0 < *(int *)(*(longlong *)&this->ObjectReferenceCounts + 8 +
                    (longlong)TStack_50.CurrentBitIndex * 0x18)) {
      return true;
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return false;
}

// Initialize @ 14d61f9b0

void __thiscall
UE::Cameras::FObjectReferenceFinder::Initialize(FObjectReferenceFinder *this,UObject *param_1)

{
  byte *pbVar1;
  UPackage *pUVar2;
  
  this->RootObject = param_1;
  pUVar2 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  this->PackageScope = pUVar2;
  (**(code **)(this->_padding_ + 0x108))(this,1);
  (**(code **)(this->_padding_ + 0xd8))(this,1);
  (**(code **)(this->_padding_ + 0x80))(this,0);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 9;
  return;
}

