// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// Initialize @ 14613e410

/* WARNING: Enum "Type": Some values do not have unique names */

FEntityAllocation * __cdecl
UE::MovieScene::FEntityInitializer::Initialize
          (FEntityManager *param_1,FComponentMask *param_2,
          FEntityAllocationInitializationInfo *param_3)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  FComponentTypeDebugInfo *pFVar5;
  longlong lVar6;
  code *pcVar7;
  int iVar8;
  bool bVar9;
  byte bVar10;
  FEntityAllocation *pFVar11;
  FComponentTypeInfo *pFVar12;
  ulonglong uVar13;
  FComponentHeader *pFVar14;
  FComponentHeader *pFVar15;
  ushort **ppuVar16;
  uint uVar17;
  uchar *puVar18;
  TBitArray<TFixedAllocator<12>_> *pTVar19;
  TConstSetBitIterator<TFixedAllocator<12>_> local_58;
  
  uVar3 = param_1->SystemSerialNumber;
  if (((param_3->NumComponents & 0xffff0000U) != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidUint16(InitInfo.NumComponents)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                         ,0xa8,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FEntityAllocation *)(*pcVar7)();
    return pFVar11;
  }
  pFVar11 = FMemory::Malloc(param_3->SizeofEntityIDs + param_3->SizeofComponentHeaders + 0x3a,0);
  pFVar11->Size = 0;
  pFVar11->SerialNumber = 0;
  pFVar11->NumComponents = 0;
  pFVar11->Capacity = 0;
  pFVar11->MaxCapacity = 0;
  pFVar11->LockMode = Mutex;
  pFVar14 = (FComponentHeader *)
            ((ulonglong)((longlong)&pFVar11[1].SerialNumber + 7U) & 0xfffffffffffffff8);
  pFVar11->UniqueID = param_3->AllocationID;
  pFVar11->NumComponents = (ushort)param_3->NumComponents;
  pFVar11->Capacity = param_3->InitialCapacity;
  uVar1 = param_3->MaxCapacity;
  pFVar11->SerialNumber = uVar3;
  pFVar11->ComponentHeaders = pFVar14;
  pFVar11->MaxCapacity = uVar1;
  pFVar11->EntityIDs =
       (FMovieSceneEntityID *)
       ((longlong)&pFVar14->_padding_ + param_3->SizeofComponentHeaders + 1 & 0xfffffffffffffffe);
  if (param_3->SizeofComponentData == 0) {
    if (param_3->MigrateComponentDataFrom != (FEntityAllocation *)0x0) goto LAB_14613e524;
  }
  else if (param_3->MigrateComponentDataFrom == (FEntityAllocation *)0x0) goto LAB_14613e524;
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("(InitInfo.SizeofComponentData > 0 && InitInfo.MigrateComponentDataFrom == nullptr) || (InitInfo.SizeofComponentData == 0 && InitInfo.MigrateComponentDataFrom != nullptr)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                     ,200,L"");
  if (bVar9) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FEntityAllocation *)(*pcVar7)();
    return pFVar11;
  }
LAB_14613e524:
  if (param_3->MigrateComponentDataFrom == (FEntityAllocation *)0x0) {
    if (param_3->SizeofComponentData != 0) {
      puVar18 = FMemory::Malloc(param_3->SizeofComponentData,0);
      pFVar11->ComponentData = puVar18;
    }
  }
  else {
    pFVar11->ComponentData = param_3->MigrateComponentDataFrom->ComponentData;
    param_3->MigrateComponentDataFrom->ComponentData = (uchar *)0x0;
    pFVar14 = param_3->MigrateComponentDataFrom->ComponentHeaders;
    pFVar15 = pFVar14 + param_3->MigrateComponentDataFrom->NumComponents;
    for (; pFVar14 != pFVar15; pFVar14 = pFVar14 + 1) {
      pFVar14->Components = (uchar *)0x0;
    }
  }
  puVar18 = pFVar11->ComponentData;
  pFVar14 = pFVar11->ComponentHeaders;
  FComponentMask::Iterate(param_2,&local_58);
  if (local_58.CurrentBitIndex < (local_58.Array)->NumBits) {
    ppuVar16 = &pFVar14->Size;
    pTVar19 = local_58.Array;
    do {
      iVar8 = local_58.CurrentBitIndex;
      if (((local_58.CurrentBitIndex & 0xffff0000U) != 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(BitIndex & 0xFFFF0000) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                             ,0xba,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FEntityAllocation *)(*pcVar7)();
        return pFVar11;
      }
      pFVar12 = FComponentRegistry::GetComponentTypeChecked
                          (param_1->ComponentRegistry,(FComponentTypeID)(ushort)iVar8);
      if (GRichComponentDebugging == false) {
        ppuVar16[1] = (ushort *)0x0;
        ppuVar16[3] = (ushort *)0x0;
        *(undefined4 *)((longlong)ppuVar16 + 0x24) = 0xffff0000;
        ((FComponentHeader *)(ppuVar16 + -2))->_padding_ =
             (longlong)&___7FComponentHeader_MovieScene_UE__6B_;
        ppuVar16[-1] = (ushort *)0x0;
        *ppuVar16 = (ushort *)0x0;
        (((FPlatformRWLock *)(ppuVar16 + 2))->Mutex).Mutex.Ptr = (void *)0x0;
        *(atomic<int> *)(ppuVar16 + 4) = (atomic<int>)0x0;
        pTVar19 = local_58.Array;
      }
      else {
        (**(code **)(((pFVar12->DebugInfo).Ptr)->_padding_ + 8))();
        *ppuVar16 = &pFVar11->Size;
      }
      uVar4 = (ulonglong)ppuVar16[3];
      ((FComponentTypeID *)((longlong)ppuVar16 + 0x26))->Value = (ushort)iVar8;
      *(uchar *)((longlong)ppuVar16 + 0x24) = pFVar12->Sizeof;
      uVar13 = uVar3;
      if (uVar3 < uVar4) {
        uVar13 = (ulonglong)ppuVar16[3];
      }
      ppuVar16[3] = (ushort *)uVar13;
      if (pFVar12->Sizeof == '\0') {
        ppuVar16[1] = (ushort *)0x0;
      }
      else {
        bVar10 = pFVar12->Alignment;
        if (pFVar12->Alignment < 0x40) {
          bVar10 = 0x40;
        }
        puVar18 = (uchar *)((ulonglong)(puVar18 + ((ulonglong)bVar10 - 1)) & -(ulonglong)bVar10);
        LOCK();
        *(atomic<int> *)(ppuVar16 + 4) = (atomic<int>)0x0;
        UNLOCK();
        ppuVar16[1] = (ushort *)puVar18;
        if ((((ulonglong)puVar18 & (ulonglong)pFVar12->Alignment - 1) != 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsAligned(Header->Components, TypeInfo.Alignment)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                               ,0x108,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          pFVar11 = (FEntityAllocation *)(*pcVar7)();
          return pFVar11;
        }
        puVar18 = puVar18 + (ulonglong)param_3->InitialCapacity * (ulonglong)pFVar12->Sizeof;
        if (GRichComponentDebugging != false) {
          pFVar5 = (pFVar12->DebugInfo).Ptr;
          (**(code **)(pFVar5->_padding_ + 0x10))(pFVar5,(FComponentHeader *)(ppuVar16 + -2));
        }
      }
      uVar2 = pTVar19->NumBits;
      local_58.UnvisitedBitMask = local_58.UnvisitedBitMask & ~local_58._padding_._4_4_;
      uVar17 = local_58.UnvisitedBitMask &
               *(uint *)(pTVar19->AllocatorInstance).InlineData[(int)local_58._padding_].Pad;
      while (uVar17 == 0) {
        local_58.BaseBitIndex = local_58.BaseBitIndex + 0x20;
        local_58._padding_._0_4_ = (int)local_58._padding_ + 1;
        local_58.CurrentBitIndex = uVar2;
        if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < (int)local_58._padding_)
        goto LAB_14613e799;
        local_58.UnvisitedBitMask = 0xffffffff;
        uVar17 = *(uint *)(pTVar19->AllocatorInstance).InlineData[(int)local_58._padding_].Pad;
      }
      local_58._padding_._4_4_ = -uVar17 & uVar17;
      uVar4 = (ulonglong)local_58._padding_._4_4_ * 2 + 1;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_58.CurrentBitIndex = local_58.BaseBitIndex + -1 + (int)lVar6;
      if ((int)uVar2 < local_58.CurrentBitIndex) {
        local_58.CurrentBitIndex = uVar2;
      }
LAB_14613e799:
      ppuVar16 = ppuVar16 + 7;
    } while (local_58.CurrentBitIndex < (int)uVar2);
  }
  return pFVar11;
}

// MigrateAllocation @ 146143020

void __cdecl
UE::MovieScene::FEntityInitializer::MigrateAllocation
          (FEntityAllocation *param_1,FEntityAllocation *param_2,FComponentRegistry *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  FComponentHeader *pFVar5;
  FComponentHeader *pFVar6;
  void *_Src;
  IComplexComponentOps *pIVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  FComponentTypeInfo *pFVar11;
  uint uVar12;
  void *_Dst;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  
  puVar1 = &param_2->Size;
  if (((int)((uint)param_1->Capacity - (uint)param_1->Size) < (int)(uint)*puVar1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestAllocation->Capacity - DestAllocation->Size >= SrcAllocation->Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                         ,0x5f,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar2 = param_1->Size;
  uVar12 = (uint)*puVar1;
  param_1->Size = uVar2 + *puVar1;
  memcpy(param_1->EntityIDs + uVar2,param_2->EntityIDs,(ulonglong)uVar12 * 2);
  pFVar5 = param_1->ComponentHeaders;
  uVar3 = param_1->NumComponents;
  pFVar6 = param_2->ComponentHeaders;
  uVar4 = param_2->NumComponents;
  if (((uint)uVar3 != (uint)uVar4) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("DstHeaders.Num() == SrcHeaders.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                         ,0x6c,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar13 = 0;
  uVar15 = uVar13;
  if (uVar3 == 0) {
    *puVar1 = 0;
    return;
  }
  do {
    uVar14 = (uint)uVar15;
    uVar10 = 0;
    if (uVar14 < uVar4) {
      uVar10 = ~uVar14 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((*(short *)((longlong)&(pFVar5->ComponentType).Value + uVar13) !=
         *(short *)((longlong)&(pFVar6->ComponentType).Value + uVar13)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("DstHeader->ComponentType == SrcHeader->ComponentType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                           ,0x73,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((&pFVar6->Sizeof)[uVar13] != '\0') {
      pFVar11 = FComponentRegistry::GetComponentTypeChecked
                          (param_3,(FComponentTypeID)
                                   *(ushort *)((longlong)&(pFVar6->ComponentType).Value + uVar13));
      if ((((&pFVar5->Sizeof)[uVar13] == '\0') ||
          (*(longlong *)((longlong)&pFVar5->Components + uVar13) == 0)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsTag() && Components != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                             ,0x221,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      _Dst = (void *)((ulonglong)((uint)(&pFVar5->Sizeof)[uVar13] * (uint)uVar2) +
                     *(longlong *)((longlong)&pFVar5->Components + uVar13));
      if ((((&pFVar6->Sizeof)[uVar13] == '\0') ||
          (*(longlong *)((longlong)&pFVar6->Components + uVar13) == 0)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsTag() && Components != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                             ,0x221,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      _Src = *(void **)((longlong)&pFVar6->Components + uVar13);
      if (pFVar11->bIsTriviallyDestructable == '\x01' &&
          pFVar11->bIsTriviallyCopyAssignable == '\x01') {
        memmove(_Dst,_Src,(ulonglong)(pFVar11->Sizeof * uVar12));
      }
      else {
        pIVar7 = (pFVar11->ComplexComponentOps).Ptr;
        (**(code **)((longlong)*pIVar7 + 0x20))(pIVar7,_Dst,_Src,uVar12);
      }
      *(undefined8 *)((longlong)&pFVar6->Components + uVar13) = 0;
    }
    uVar13 = uVar13 + 0x38;
    uVar15 = (ulonglong)(uVar14 + 1);
    if ((int)(uint)uVar3 <= (int)(uVar14 + 1)) {
      param_2->Size = 0;
      return;
    }
  } while( true );
}

// MoveEntryIndex @ 146143f40

void __cdecl
UE::MovieScene::FEntityInitializer::MoveEntryIndex
          (FEntityAllocation *param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (((((longlong)param_2 & 0xffff0000U) != 0) || (((longlong)param_3 & 0xffff0000U) != 0)) ||
     ((int)(uint)param_1->Size <= param_3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidUint16(InCurrentOffset) && IsValidUint16(InNewOffset) && InNewOffset < Allocation->Size"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                       ,0x58,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_1->EntityIDs[param_3].Value = param_1->EntityIDs[param_2].Value;
  return;
}

