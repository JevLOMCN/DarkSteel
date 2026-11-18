// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 63

// FDependsNode @ 142ad5f60

FDependsNode * __thiscall FDependsNode::FDependsNode(FDependsNode *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  (this->Identifier).PackageName.ComparisonIndex = 0;
  (this->Identifier).PackageName.Number = 0;
  (this->Identifier).PrimaryAssetType.Name = (FName)0x0;
  (this->Identifier).ObjectName.ComparisonIndex = 0;
  (this->Identifier).ObjectName.Number = 0;
  (this->Identifier).ValueName.ComparisonIndex = 0;
  (this->Identifier).ValueName.Number = 0;
  (this->PackageDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackageDependencies).ArrayNum = 0;
  (this->PackageDependencies).ArrayMax = 0;
  (this->NameDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameDependencies).ArrayNum = 0;
  (this->NameDependencies).ArrayMax = 0;
  (this->ManageDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManageDependencies).ArrayNum = 0;
  (this->ManageDependencies).ArrayMax = 0;
  (this->Referencers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Referencers).ArrayNum = 0;
  (this->Referencers).ArrayMax = 0;
  (this->PackageFlags).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->PackageFlags).NumBits = 0;
  (this->PackageFlags).MaxBits = 0x80;
  (this->ManageFlags).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->ManageFlags).NumBits = 0;
  (this->ManageFlags).MaxBits = 0x80;
  puVar2 = &this->field_0xa0;
  this->PackageIsSorted = 1;
  this->bScriptPath = 0;
  this->DependenciesInitialized = 0;
  this->ReferencersIsSorted = 1;
  this->ManageIsSorted = 1;
  this->SearchableNameIsSorted = 1;
  return this;
}

// ~FDependsNode @ 142ada880

void __thiscall FDependsNode::~FDependsNode(FDependsNode *this)

{
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  
  FVar1 = (this->ManageFlags).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->PackageFlags).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  pFVar2 = (this->Referencers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ManageDependencies).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NameDependencies).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PackageDependencies).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// Reserve @ 142b17260

void __thiscall FDependsNode::Reserve(FDependsNode *this,FDependsNode *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (param_1->PackageDependencies).ArrayNum;
  uVar2 = (param_1->Referencers).ArrayNum;
  uVar3 = (param_1->ManageDependencies).ArrayNum;
  uVar4 = (param_1->NameDependencies).ArrayNum;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if ((this->PackageDependencies).ArrayMax < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar1,&(this->PackageDependencies).AllocatorInstance,
               (this->PackageDependencies).ArrayNum,&(this->PackageDependencies).ArrayMax);
  }
  TBitArray<FDefaultBitArrayAllocator>::Reserve(&this->PackageFlags,uVar1 * 5);
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if ((this->NameDependencies).ArrayMax < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,&(this->NameDependencies).AllocatorInstance,
               (this->NameDependencies).ArrayNum,&(this->NameDependencies).ArrayMax);
  }
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if ((this->ManageDependencies).ArrayMax < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&(this->ManageDependencies).AllocatorInstance,
               (this->ManageDependencies).ArrayNum,&(this->ManageDependencies).ArrayMax);
  }
  TBitArray<FDefaultBitArrayAllocator>::Reserve(&this->ManageFlags,uVar3 * 3);
  if (-1 < (int)uVar2) {
    if ((this->Referencers).ArrayMax < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar2,&(this->Referencers).AllocatorInstance,(this->Referencers).ArrayNum,
                 &(this->Referencers).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// SerializeLoad<1> @ 142b46130

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDependsNode::SerializeLoad<1>
          (FDependsNode *this,FArchive *param_1,
          TUniqueFunction<FDependsNode_*___cdecl(int)> *param_2,FLoadScratch *param_3,Type param_4)

{
  ::operator<<(param_1,&this->Identifier);
  SetIdentifier(this,&this->Identifier);
  SerializeLoad_PackageDependencies<1>(this,param_1,param_2,param_3,param_4);
  SerializeLoad_NameDependencies<1>(this,param_1,param_2,param_3,param_4);
  SerializeLoad_ManageDependencies<1>(this,param_1,param_2,param_3,param_4);
  SerializeLoad_Referencers<1>(this,param_1,param_2,param_3,param_4);
  this->DependenciesInitialized = this->bScriptPath;
  return;
}

// SerializeLoad<0> @ 142b46200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDependsNode::SerializeLoad<0>
          (FDependsNode *this,FArchive *param_1,
          TUniqueFunction<FDependsNode_*___cdecl(int)> *param_2,FLoadScratch *param_3,Type param_4)

{
  ::operator<<(param_1,&this->Identifier);
  SetIdentifier(this,&this->Identifier);
  SerializeLoad_PackageDependencies<0>(this,param_1,param_2,param_3,param_4);
  SerializeLoad_NameDependencies<0>(this,param_1,param_2,param_3,param_4);
  SerializeLoad_ManageDependencies<0>(this,param_1,param_2,param_3,param_4);
  SerializeLoad_Referencers<0>(this,param_1,param_2,param_3,param_4);
  this->DependenciesInitialized = this->bScriptPath;
  return;
}

// SerializeLoad_ManageDependencies<1> @ 142b462d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDependsNode::SerializeLoad_ManageDependencies<1>
          (FDependsNode *this,FArchive *param_1,
          TUniqueFunction<FDependsNode_*___cdecl(int)> *param_2,FLoadScratch *param_3,Type param_4)

{
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this_00;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  ForElementType<unsigned_int> FVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  longlong *plVar14;
  ForElementType<unsigned_int> FVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  FIdentityFunctor local_98;
  undefined1 local_97 [3];
  int local_94;
  uint local_90;
  longlong local_88;
  undefined4 local_80 [2];
  int local_78;
  TUniqueFunction<FDependsNode_*___cdecl(int)> *local_70;
  ForElementType<unsigned_int> local_68;
  FScriptContainerElement *local_60;
  FArchiveState *local_58;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_50;
  
  local_68 = (ForElementType<unsigned_int>)&this->ManageFlags;
  pTVar1 = &this->ManageDependencies;
  this_00 = &param_3->InFlagBits;
  (param_3->InDependencies).ArrayNum = 0;
  pTVar2 = &param_3->PointerDependencies;
  pTVar3 = &param_3->SortIndexes;
  local_70 = param_2;
  local_58 = (FArchiveState *)param_1;
  local_50 = this_00;
  if ((param_3->InDependencies).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)param_3,0,&(param_3->InDependencies).ArrayMax);
  }
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,&param_3->InDependencies);
  uVar17 = (param_3->InDependencies).ArrayNum;
  local_78 = uVar17 * 3;
  uVar10 = local_78 + 0x1fU >> 5;
  local_90 = uVar17;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this_00,uVar10,Default);
  (**(code **)(*(longlong *)param_1 + 0x188))
            (param_1,(this_00->AllocatorInstance).Data,(ulonglong)uVar10 << 2);
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  piVar4 = &(param_3->PointerDependencies).ArrayMax;
  (param_3->PointerDependencies).ArrayNum = 0;
  if ((param_3->PointerDependencies).ArrayMax < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar17,&pTVar2->AllocatorInstance,0,piVar4);
  }
  pFVar20 = (param_3->InDependencies).AllocatorInstance.Data;
  iVar12 = (param_3->InDependencies).ArrayNum;
  local_60 = pFVar20 + (longlong)iVar12 * 4;
  while( true ) {
    pFVar19 = local_60;
    if ((param_3->InDependencies).ArrayNum != iVar12) {
      local_97[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_97);
    }
    uVar17 = local_90;
    if (pFVar20 == pFVar19) {
      piVar4 = &(param_3->SortIndexes).ArrayMax;
      (param_3->SortIndexes).ArrayNum = 0;
      if ((param_3->SortIndexes).ArrayMax < (int)local_90) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_90,&pTVar3->AllocatorInstance,0,piVar4);
      }
      local_94 = 0;
      if (0 < (int)uVar17) {
        do {
          pFVar20 = (pTVar3->AllocatorInstance).Data;
          if (((pFVar20 <= (FScriptContainerElement *)&local_94) &&
              ((FScriptContainerElement *)&local_94 < pFVar20 + (longlong)*piVar4 * 4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar12 = (param_3->SortIndexes).ArrayNum;
          if (iVar12 == *piVar4) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar3->AllocatorInstance,piVar4);
          }
          (param_3->SortIndexes).ArrayNum = iVar12 + 1;
          *(int *)((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_94;
          local_94 = local_94 + 1;
        } while (local_94 < (int)uVar17);
      }
      AlgoImpl::
      IntroSortInternal<int,int,FIdentityFunctor,_FDependsNode::SerializeLoad_ManageDependencies<1>_::__l2::<lambda_1>_>
                ((int *)(pTVar3->AllocatorInstance).Data,(param_3->SortIndexes).ArrayNum,local_98,
                 (<lambda_1>)pTVar2);
      piVar4 = &(this->ManageDependencies).ArrayMax;
      (this->ManageDependencies).ArrayNum = 0;
      if (*piVar4 != uVar17) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar17,&pTVar1->AllocatorInstance,0,piVar4);
      }
      pFVar19 = (pTVar3->AllocatorInstance).Data;
      iVar12 = (param_3->SortIndexes).ArrayNum;
      pFVar20 = pFVar19 + (longlong)iVar12 * 4;
      while( true ) {
        if ((param_3->SortIndexes).ArrayNum != iVar12) {
          local_98 = (FIdentityFunctor)0x0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_98);
        }
        if (pFVar19 == pFVar20) break;
        uVar17 = *(uint *)pFVar19;
        uVar10 = 0;
        if ((int)uVar17 < (param_3->PointerDependencies).ArrayNum) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar7 = (pTVar1->AllocatorInstance).Data;
        pFVar5 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar17 * 8;
        if (((pFVar7 <= pFVar5) && (pFVar5 < pFVar7 + (longlong)*piVar4 * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar11 = (this->ManageDependencies).ArrayNum;
        if (iVar11 == *piVar4) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar1->AllocatorInstance,piVar4);
        }
        (this->ManageDependencies).ArrayNum = iVar11 + 1;
        pFVar19 = pFVar19 + 4;
        *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 8) =
             *(undefined8 *)pFVar5;
      }
      TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized
                ((TBitArray<FDefaultBitArrayAllocator> *)local_68,local_78);
      FVar8 = local_68;
      lVar18 = (longlong)(int)local_90;
      uVar17 = 0;
      pFVar20 = (local_50->AllocatorInstance).Data;
      if (0 < (int)local_90) {
        lVar16 = 0;
        iVar12 = 0;
        do {
          uVar10 = 0;
          if ((int)uVar17 < (param_3->SortIndexes).ArrayNum) {
            uVar10 = ~uVar17 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar11 = *(int *)((pTVar3->AllocatorInstance).Data + lVar16 * 4);
          if (((iVar12 < 0) || (*(int *)((longlong)FVar8 + 0x18) < iVar12 + 3)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x3bc,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((pFVar20 == (FScriptContainerElement *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumBitsToSet == 0 || ReadBits != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x3bd,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar15 = FVar8;
          if (*(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x10) !=
              (ForElementType<unsigned_int>)0x0) {
            FVar15 = *(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x10);
          }
          FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar15,iVar12,(uint *)pFVar20,iVar11 * 3,3);
          uVar17 = uVar17 + 1;
          iVar12 = iVar12 + 3;
          lVar16 = lVar16 + 1;
        } while (lVar16 < lVar18);
      }
      return;
    }
    local_80[0] = *(undefined4 *)pFVar20;
    UE::Core::Private::Function::CheckCallable(*(void **)local_70);
    pcVar6 = *(code **)local_70;
    plVar14 = *(longlong **)&local_70->field_0x28;
    if (*(longlong **)&local_70->field_0x28 == (longlong *)0x0) {
      plVar14 = (longlong *)&local_70->field_0x10;
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    local_88 = (*pcVar6)(uVar13,local_80);
    if (local_88 == 0) break;
    pFVar19 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar19 <= (FScriptContainerElement *)&local_88) &&
        ((FScriptContainerElement *)&local_88 < pFVar19 + (longlong)*piVar4 * 8)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar11 = (param_3->PointerDependencies).ArrayNum;
    if (iVar11 == *piVar4) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,piVar4);
    }
    (param_3->PointerDependencies).ArrayNum = iVar11 + 1;
    pFVar20 = pFVar20 + 4;
    *(longlong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_88;
  }
  FArchiveState::SetError(local_58);
  return;
}

// SerializeLoad_ManageDependencies<0> @ 142b46890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDependsNode::SerializeLoad_ManageDependencies<0>
          (FDependsNode *this,FArchive *param_1,
          TUniqueFunction<FDependsNode_*___cdecl(int)> *param_2,FLoadScratch *param_3,Type param_4)

{
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  uint *puVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FArchiveState *pFVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  ulong64 uVar16;
  byte bVar17;
  ulonglong uVar18;
  longlong *plVar19;
  ForElementType<unsigned_int> FVar20;
  ForElementType<unsigned_int> FVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 auStackY_138 [32];
  FIdentityFunctor local_e8;
  undefined1 local_e7 [3];
  int local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  longlong local_d0;
  ForElementType<unsigned_int> local_c8;
  undefined4 local_c0 [2];
  int local_b8;
  int local_b4;
  FArchiveState *local_b0;
  TUniqueFunction<FDependsNode_*___cdecl(int)> *local_a8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_a0;
  FScriptContainerElement *local_98;
  ulonglong local_90;
  ulong64 local_88;
  uint local_80 [2];
  ForElementType<unsigned_int> local_78;
  uint local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_c8 = (ForElementType<unsigned_int>)&this->ManageFlags;
  pTVar1 = &this->ManageDependencies;
  iVar12 = 3;
  if ((int)param_4 < 0x16) {
    iVar12 = 1;
  }
  piVar2 = &(param_3->InDependencies).ArrayMax;
  local_a0 = &param_3->InFlagBits;
  pTVar3 = &param_3->PointerDependencies;
  pTVar4 = &param_3->SortIndexes;
  (param_3->InDependencies).ArrayNum = 0;
  local_b8 = iVar12;
  local_b0 = (FArchiveState *)param_1;
  local_a8 = param_2;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)param_3,0,piVar2);
  }
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,&param_3->InDependencies);
  uVar14 = (param_3->InDependencies).ArrayNum;
  local_dc = iVar12 * uVar14;
  uVar11 = local_dc + 0x1f >> 5;
  local_e0 = uVar14;
  local_90 = (ulonglong)uVar11;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&param_3->InFlagBits,uVar11,Default);
  local_88 = (ulonglong)uVar11 << 2;
  (**(code **)(*(longlong *)param_1 + 0x188))
            (param_1,(param_3->InFlagBits).AllocatorInstance.Data,local_88);
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  piVar2 = &(param_3->PointerDependencies).ArrayMax;
  (param_3->PointerDependencies).ArrayNum = 0;
  if ((param_3->PointerDependencies).ArrayMax < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar14,&pTVar3->AllocatorInstance,0,piVar2);
  }
  local_d4 = (param_3->InDependencies).ArrayNum;
  uVar18 = (ulonglong)(int)local_d4;
  pFVar23 = (param_3->InDependencies).AllocatorInstance.Data;
  local_98 = pFVar23 + uVar18 * 4;
  while( true ) {
    pFVar7 = local_98;
    if ((param_3->InDependencies).ArrayNum != (int)uVar18) {
      local_e7[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_e7);
    }
    uVar14 = local_e0;
    if (pFVar23 == pFVar7) break;
    local_c0[0] = *(undefined4 *)pFVar23;
    UE::Core::Private::Function::CheckCallable(*(void **)local_a8);
    pcVar6 = *(code **)local_a8;
    plVar19 = *(longlong **)&local_a8->field_0x28;
    if (*(longlong **)&local_a8->field_0x28 == (longlong *)0x0) {
      plVar19 = (longlong *)&local_a8->field_0x10;
    }
    uVar15 = (**(code **)(*plVar19 + 8))();
    local_d0 = (*pcVar6)(uVar15,local_c0);
    if (local_d0 == 0) {
      FArchiveState::SetError(local_b0);
      return;
    }
    pFVar7 = (pTVar3->AllocatorInstance).Data;
    if (((pFVar7 <= (FScriptContainerElement *)&local_d0) &&
        ((FScriptContainerElement *)&local_d0 < pFVar7 + (longlong)*piVar2 * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar12 = (param_3->PointerDependencies).ArrayNum;
    if (iVar12 == *piVar2) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar3->AllocatorInstance,piVar2);
    }
    (param_3->PointerDependencies).ArrayNum = iVar12 + 1;
    pFVar23 = pFVar23 + 4;
    *(longlong *)((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_d0;
    uVar18 = (ulonglong)local_d4;
  }
  piVar2 = &(param_3->SortIndexes).ArrayMax;
  (param_3->SortIndexes).ArrayNum = 0;
  if ((param_3->SortIndexes).ArrayMax < (int)local_e0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_e0,&pTVar4->AllocatorInstance,0,piVar2);
  }
  local_e4 = 0;
  if (0 < (int)uVar14) {
    do {
      pFVar23 = (pTVar4->AllocatorInstance).Data;
      if (((pFVar23 <= (FScriptContainerElement *)&local_e4) &&
          ((FScriptContainerElement *)&local_e4 < pFVar23 + (longlong)*piVar2 * 4)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = (param_3->SortIndexes).ArrayNum;
      if (iVar12 == *piVar2) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar4->AllocatorInstance,piVar2);
      }
      (param_3->SortIndexes).ArrayNum = iVar12 + 1;
      *(int *)((pTVar4->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_e4;
      local_e4 = local_e4 + 1;
    } while (local_e4 < (int)uVar14);
  }
  AlgoImpl::
  IntroSortInternal<int,int,FIdentityFunctor,_FDependsNode::SerializeLoad_ManageDependencies<0>_::__l2::<lambda_1>_>
            ((int *)(pTVar4->AllocatorInstance).Data,(param_3->SortIndexes).ArrayNum,local_e8,
             (<lambda_1>)pTVar3);
  piVar2 = &(this->ManageDependencies).ArrayMax;
  (this->ManageDependencies).ArrayNum = 0;
  if (*piVar2 != uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar14,&pTVar1->AllocatorInstance,0,piVar2);
  }
  pFVar23 = (pTVar4->AllocatorInstance).Data;
  iVar12 = (param_3->SortIndexes).ArrayNum;
  local_b0 = (FArchiveState *)(pFVar23 + (longlong)iVar12 * 4);
  while( true ) {
    pFVar9 = local_b0;
    if ((param_3->SortIndexes).ArrayNum != iVar12) {
      local_e8 = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_e8);
    }
    uVar11 = local_dc;
    uVar14 = local_e0;
    if ((FArchiveState *)pFVar23 == pFVar9) break;
    uVar14 = *(uint *)pFVar23;
    uVar11 = 0;
    if ((int)uVar14 < (param_3->PointerDependencies).ArrayNum) {
      uVar11 = ~uVar14 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar8 = (pTVar1->AllocatorInstance).Data;
    pFVar7 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar14 * 8;
    if (((pFVar8 <= pFVar7) && (pFVar7 < pFVar8 + (longlong)*piVar2 * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar13 = (this->ManageDependencies).ArrayNum;
    if (iVar13 == *piVar2) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->ManageDependencies).ArrayNum = iVar13 + 1;
    pFVar23 = pFVar23 + 4;
    *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar13 * 8) = *(undefined8 *)pFVar7
    ;
  }
  lVar25 = (longlong)(int)local_e0;
  if ((int)param_4 < 0x16) {
    local_60 = local_dc;
    local_78.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_5c = 0x80;
    if (0x80 < (int)local_dc) {
      uVar22 = (uint)local_90;
      if (uVar22 < 5) {
        iVar12 = 4;
      }
      else {
        uVar16 = FMemory::QuantizeSize(local_88,0);
        iVar12 = (int)(uVar16 >> 2);
        if (iVar12 < (int)uVar22) {
          iVar12 = 0x7fffffff;
        }
      }
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_78,0,iVar12,4);
      local_5c = iVar12 << 5;
    }
    uVar22 = local_60 & 0x8000001f;
    if ((int)uVar22 < 0) {
      uVar22 = (uVar22 - 1 | 0xffffffe0) + 1;
    }
    if (uVar22 != 0) {
      FVar20 = (ForElementType<unsigned_int>)&local_78;
      if (local_78.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar20 = local_78.SecondaryData;
      }
      puVar5 = (uint *)((longlong)FVar20 +
                       (longlong)((int)(local_60 + ((int)local_60 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar5 = *puVar5 & 0xffffffffU >> (0x20U - (char)uVar22 & 0x1f);
    }
    pFVar23 = (local_a0->AllocatorInstance).Data;
    if ((((int)uVar11 < 0) || ((int)local_60 < (int)uVar11)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x3bc,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (((uVar11 != 0) && (pFVar23 == (FScriptContainerElement *)0x0)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumBitsToSet == 0 || ReadBits != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x3bd,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar20 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar20 = local_78.SecondaryData;
    }
    FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar20,0,(uint *)pFVar23,0,uVar11);
    FVar20 = local_c8;
    TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized
              ((TBitArray<FDefaultBitArrayAllocator> *)local_c8,uVar14 * 3);
    uVar11 = 0;
    if (0 < (int)uVar14) {
      lVar24 = 0;
      iVar12 = 0;
      do {
        uVar14 = 0;
        if ((int)uVar11 < (param_3->SortIndexes).ArrayNum) {
          uVar14 = ~uVar11 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar13 = local_b8 * *(int *)((pTVar4->AllocatorInstance).Data + lVar24 * 4);
        if (((iVar13 < 0) || ((int)local_60 <= iVar13)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar21 = (ForElementType<unsigned_int>)&local_78;
        if (local_78.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar21 = local_78.SecondaryData;
        }
        bVar17 = (byte)iVar13;
        if (iVar13 < 0) {
          iVar13 = iVar13 + 0x1f;
        }
        local_d8 = 0;
        bVar10 = TPropertyCombinationSetHardcoded<FPropertyCombinationPack2>::AddNonRedundant
                           ((uint *)&`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                                     ::__l5::Values,1,
                            ((1 << (bVar17 & 0x1f) &
                             *(uint *)((longlong)FVar21 + (longlong)(iVar13 >> 5) * 4)) != 0) + 2,
                            local_80,&local_b4);
        if (bVar10) {
          local_d8 = FPropertyCombinationPack2::Pack(local_80,local_b4);
        }
        if (((iVar12 < 0) || (*(int *)((longlong)FVar20 + 0x18) < iVar12 + 3)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x3bc,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar21 = FVar20;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar20 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar21 = *(ForElementType<unsigned_int> *)((longlong)FVar20 + 0x10);
        }
        FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar21,iVar12,&local_d8,0,3);
        uVar11 = uVar11 + 1;
        iVar12 = iVar12 + 3;
        lVar24 = lVar24 + 1;
      } while (lVar24 < lVar25);
    }
    if (local_78.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_78.SecondaryData);
    }
  }
  else {
    TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized
              ((TBitArray<FDefaultBitArrayAllocator> *)local_c8,local_dc);
    uVar11 = 0;
    pFVar23 = (local_a0->AllocatorInstance).Data;
    if (0 < (int)uVar14) {
      lVar24 = 0;
      iVar12 = 0;
      do {
        uVar14 = 0;
        if ((int)uVar11 < (param_3->SortIndexes).ArrayNum) {
          uVar14 = ~uVar11 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar13 = *(int *)((pTVar4->AllocatorInstance).Data + lVar24 * 4);
        if (((iVar12 < 0) || ((int)*(uint *)((longlong)local_c8 + 0x18) < iVar12 + 3)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x3bc,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((pFVar23 == (FScriptContainerElement *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumBitsToSet == 0 || ReadBits != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x3bd,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar20 = local_c8;
        if (*(ForElementType<unsigned_int> *)((longlong)local_c8 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar20 = *(ForElementType<unsigned_int> *)((longlong)local_c8 + 0x10);
        }
        FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar20,iVar12,(uint *)pFVar23,iVar13 * 3,3);
        uVar11 = uVar11 + 1;
        iVar12 = iVar12 + 3;
        lVar24 = lVar24 + 1;
      } while (lVar24 < lVar25);
    }
  }
  return;
}

// SerializeLoad_NameDependencies<1> @ 142b47150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDependsNode::SerializeLoad_NameDependencies<1>
          (FDependsNode *this,FArchive *param_1,
          TUniqueFunction<FDependsNode_*___cdecl(int)> *param_2,FLoadScratch *param_3,Type param_4)

{
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  FIdentityFunctor local_res8 [8];
  undefined4 local_res20 [2];
  longlong local_48 [2];
  
  pTVar1 = &this->NameDependencies;
  (param_3->InDependencies).ArrayNum = 0;
  if ((param_3->InDependencies).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)param_3,0,&(param_3->InDependencies).ArrayMax);
  }
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,&param_3->InDependencies);
  uVar4 = (param_3->InDependencies).ArrayNum;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  piVar2 = &(this->NameDependencies).ArrayMax;
  (this->NameDependencies).ArrayNum = 0;
  if ((this->NameDependencies).ArrayMax < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,&pTVar1->AllocatorInstance,0,piVar2);
  }
  pFVar12 = (param_3->InDependencies).AllocatorInstance.Data;
  iVar5 = (param_3->InDependencies).ArrayNum;
  pFVar3 = pFVar12 + (longlong)iVar5 * 4;
  while( true ) {
    if ((param_3->InDependencies).ArrayNum != iVar5) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar3) break;
    local_res20[0] = *(undefined4 *)pFVar12;
    UE::Core::Private::Function::CheckCallable(*(void **)param_2);
    pcVar6 = *(code **)param_2;
    plVar11 = *(longlong **)&param_2->field_0x28;
    if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
      plVar11 = (longlong *)&param_2->field_0x10;
    }
    uVar10 = (**(code **)(*plVar11 + 8))();
    local_48[0] = (*pcVar6)(uVar10,local_res20);
    if (local_48[0] == 0) {
      FArchiveState::SetError((FArchiveState *)param_1);
      return;
    }
    pFVar7 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar7 <= (FScriptContainerElement *)local_48) &&
        ((FScriptContainerElement *)local_48 < pFVar7 + (longlong)*piVar2 * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = (this->NameDependencies).ArrayNum;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->NameDependencies).ArrayNum = iVar9 + 1;
    pFVar12 = pFVar12 + 4;
    *(longlong *)((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_48[0];
  }
  AlgoImpl::
  IntroSortInternal<FDependsNode_*,int,FIdentityFunctor,_FDependsNode::SerializeLoad_NameDependencies<1>_::__l2::<lambda_1>_>
            ((FDependsNode **)(pTVar1->AllocatorInstance).Data,(this->NameDependencies).ArrayNum,
             local_res8[0],(<lambda_1>)local_res8[0]);
  return;
}

// SerializeLoad_NameDependencies<0> @ 142b47360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDependsNode::SerializeLoad_NameDependencies<0>
          (FDependsNode *this,FArchive *param_1,
          TUniqueFunction<FDependsNode_*___cdecl(int)> *param_2,FLoadScratch *param_3,Type param_4)

{
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  FIdentityFunctor local_res8 [8];
  undefined4 local_res20 [2];
  longlong local_48 [2];
  
  pTVar1 = &this->NameDependencies;
  (param_3->InDependencies).ArrayNum = 0;
  if ((param_3->InDependencies).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)param_3,0,&(param_3->InDependencies).ArrayMax);
  }
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,&param_3->InDependencies);
  uVar4 = (param_3->InDependencies).ArrayNum;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  piVar2 = &(this->NameDependencies).ArrayMax;
  (this->NameDependencies).ArrayNum = 0;
  if ((this->NameDependencies).ArrayMax < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,&pTVar1->AllocatorInstance,0,piVar2);
  }
  pFVar12 = (param_3->InDependencies).AllocatorInstance.Data;
  iVar5 = (param_3->InDependencies).ArrayNum;
  pFVar3 = pFVar12 + (longlong)iVar5 * 4;
  while( true ) {
    if ((param_3->InDependencies).ArrayNum != iVar5) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar3) break;
    local_res20[0] = *(undefined4 *)pFVar12;
    UE::Core::Private::Function::CheckCallable(*(void **)param_2);
    pcVar6 = *(code **)param_2;
    plVar11 = *(longlong **)&param_2->field_0x28;
    if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
      plVar11 = (longlong *)&param_2->field_0x10;
    }
    uVar10 = (**(code **)(*plVar11 + 8))();
    local_48[0] = (*pcVar6)(uVar10,local_res20);
    if (local_48[0] == 0) {
      FArchiveState::SetError((FArchiveState *)param_1);
      return;
    }
    pFVar7 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar7 <= (FScriptContainerElement *)local_48) &&
        ((FScriptContainerElement *)local_48 < pFVar7 + (longlong)*piVar2 * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = (this->NameDependencies).ArrayNum;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->NameDependencies).ArrayNum = iVar9 + 1;
    pFVar12 = pFVar12 + 4;
    *(longlong *)((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_48[0];
  }
  AlgoImpl::
  IntroSortInternal<FDependsNode_*,int,FIdentityFunctor,_FDependsNode::SerializeLoad_NameDependencies<0>_::__l2::<lambda_1>_>
            ((FDependsNode **)(pTVar1->AllocatorInstance).Data,(this->NameDependencies).ArrayNum,
             local_res8[0],(<lambda_1>)local_res8[0]);
  return;
}

// SerializeLoad_PackageDependencies<1> @ 142b47570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDependsNode::SerializeLoad_PackageDependencies<1>
          (FDependsNode *this,FArchive *param_1,
          TUniqueFunction<FDependsNode_*___cdecl(int)> *param_2,FLoadScratch *param_3,Type param_4)

{
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this_00;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  ForElementType<unsigned_int> FVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  longlong *plVar14;
  ForElementType<unsigned_int> FVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res8 [8];
  FArchiveState *local_res10;
  TUniqueFunction<FDependsNode_*___cdecl(int)> *local_res18;
  undefined1 local_res20 [8];
  int local_88;
  uint local_84;
  undefined4 local_80 [2];
  int local_78;
  longlong local_70;
  ForElementType<unsigned_int> local_68;
  FScriptContainerElement *local_60;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_58;
  
  local_68 = (ForElementType<unsigned_int>)&this->PackageFlags;
  pTVar1 = &this->PackageDependencies;
  (param_3->InDependencies).ArrayNum = 0;
  this_00 = &param_3->InFlagBits;
  pTVar2 = &param_3->PointerDependencies;
  pTVar3 = &param_3->SortIndexes;
  local_res10 = (FArchiveState *)param_1;
  local_res18 = param_2;
  local_58 = this_00;
  if ((param_3->InDependencies).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)param_3,0,&(param_3->InDependencies).ArrayMax);
  }
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,&param_3->InDependencies);
  uVar18 = (param_3->InDependencies).ArrayNum;
  local_78 = uVar18 * 5;
  uVar10 = local_78 + 0x1fU >> 5;
  local_84 = uVar18;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this_00,uVar10,Default);
  (**(code **)(*(longlong *)param_1 + 0x188))
            (param_1,(this_00->AllocatorInstance).Data,(ulonglong)uVar10 << 2);
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  piVar4 = &(param_3->PointerDependencies).ArrayMax;
  (param_3->PointerDependencies).ArrayNum = 0;
  if ((param_3->PointerDependencies).ArrayMax < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar18,&pTVar2->AllocatorInstance,0,piVar4);
  }
  iVar12 = (param_3->InDependencies).ArrayNum;
  pFVar16 = (param_3->InDependencies).AllocatorInstance.Data;
  local_60 = pFVar16 + (longlong)iVar12 * 4;
  while( true ) {
    pFVar20 = local_60;
    if ((param_3->InDependencies).ArrayNum != iVar12) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    uVar18 = local_84;
    if (pFVar16 == pFVar20) {
      piVar4 = &(param_3->SortIndexes).ArrayMax;
      (param_3->SortIndexes).ArrayNum = 0;
      if ((param_3->SortIndexes).ArrayMax < (int)local_84) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_84,&pTVar3->AllocatorInstance,0,piVar4);
      }
      local_88 = 0;
      if (0 < (int)uVar18) {
        do {
          pFVar16 = (pTVar3->AllocatorInstance).Data;
          if (((pFVar16 <= (FScriptContainerElement *)&local_88) &&
              ((FScriptContainerElement *)&local_88 < pFVar16 + (longlong)*piVar4 * 4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar12 = (param_3->SortIndexes).ArrayNum;
          if (iVar12 == *piVar4) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar3->AllocatorInstance,piVar4);
          }
          (param_3->SortIndexes).ArrayNum = iVar12 + 1;
          *(int *)((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_88;
          local_88 = local_88 + 1;
        } while (local_88 < (int)uVar18);
      }
      AlgoImpl::
      IntroSortInternal<int,int,FIdentityFunctor,_FDependsNode::SerializeLoad_PackageDependencies<1>_::__l2::<lambda_1>_>
                ((int *)(pTVar3->AllocatorInstance).Data,(param_3->SortIndexes).ArrayNum,
                 local_res10._0_1_,(<lambda_1>)pTVar2);
      piVar4 = &(this->PackageDependencies).ArrayMax;
      (this->PackageDependencies).ArrayNum = 0;
      if (*piVar4 != uVar18) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar18,&pTVar1->AllocatorInstance,0,piVar4);
      }
      pFVar20 = (pTVar3->AllocatorInstance).Data;
      iVar12 = (param_3->SortIndexes).ArrayNum;
      pFVar16 = pFVar20 + (longlong)iVar12 * 4;
      while( true ) {
        if ((param_3->SortIndexes).ArrayNum != iVar12) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (pFVar20 == pFVar16) break;
        uVar18 = *(uint *)pFVar20;
        uVar10 = 0;
        if ((int)uVar18 < (param_3->PointerDependencies).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar7 = (pTVar1->AllocatorInstance).Data;
        pFVar5 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar18 * 8;
        if (((pFVar7 <= pFVar5) && (pFVar5 < pFVar7 + (longlong)*piVar4 * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar11 = (this->PackageDependencies).ArrayNum;
        if (iVar11 == *piVar4) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar1->AllocatorInstance,piVar4);
        }
        (this->PackageDependencies).ArrayNum = iVar11 + 1;
        pFVar20 = pFVar20 + 4;
        *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 8) =
             *(undefined8 *)pFVar5;
      }
      TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized
                ((TBitArray<FDefaultBitArrayAllocator> *)local_68,local_78);
      FVar8 = local_68;
      lVar19 = (longlong)(int)local_84;
      uVar18 = 0;
      pFVar16 = (local_58->AllocatorInstance).Data;
      if (0 < (int)local_84) {
        lVar17 = 0;
        iVar12 = 0;
        do {
          uVar10 = 0;
          if ((int)uVar18 < (param_3->SortIndexes).ArrayNum) {
            uVar10 = ~uVar18 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar11 = *(int *)((pTVar3->AllocatorInstance).Data + lVar17 * 4);
          if (((iVar12 < 0) || (*(int *)((longlong)FVar8 + 0x18) < iVar12 + 5)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x3bc,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((pFVar16 == (FScriptContainerElement *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumBitsToSet == 0 || ReadBits != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x3bd,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar15 = FVar8;
          if (*(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x10) !=
              (ForElementType<unsigned_int>)0x0) {
            FVar15 = *(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x10);
          }
          FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar15,iVar12,(uint *)pFVar16,iVar11 * 5,5);
          uVar18 = uVar18 + 1;
          iVar12 = iVar12 + 5;
          lVar17 = lVar17 + 1;
        } while (lVar17 < lVar19);
      }
      return;
    }
    local_80[0] = *(undefined4 *)pFVar16;
    UE::Core::Private::Function::CheckCallable(*(void **)local_res18);
    pcVar6 = *(code **)local_res18;
    plVar14 = *(longlong **)&local_res18->field_0x28;
    if (*(longlong **)&local_res18->field_0x28 == (longlong *)0x0) {
      plVar14 = (longlong *)&local_res18->field_0x10;
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    local_70 = (*pcVar6)(uVar13,local_80);
    if (local_70 == 0) break;
    pFVar20 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar20 <= (FScriptContainerElement *)&local_70) &&
        ((FScriptContainerElement *)&local_70 < pFVar20 + (longlong)*piVar4 * 8)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar11 = (param_3->PointerDependencies).ArrayNum;
    if (iVar11 == *piVar4) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,piVar4);
    }
    (param_3->PointerDependencies).ArrayNum = iVar11 + 1;
    pFVar16 = pFVar16 + 4;
    *(longlong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_70;
  }
  FArchiveState::SetError(local_res10);
  return;
}

// SerializeLoad_PackageDependencies<0> @ 142b47b30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDependsNode::SerializeLoad_PackageDependencies<0>
          (FDependsNode *this,FArchive *param_1,
          TUniqueFunction<FDependsNode_*___cdecl(int)> *param_2,FLoadScratch *param_3,Type param_4)

{
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this_00;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  ForElementType<unsigned_int> FVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  longlong *plVar14;
  ForElementType<unsigned_int> FVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res8 [8];
  FArchiveState *local_res10;
  TUniqueFunction<FDependsNode_*___cdecl(int)> *local_res18;
  undefined1 local_res20 [8];
  int local_88;
  uint local_84;
  undefined4 local_80 [2];
  int local_78;
  longlong local_70;
  ForElementType<unsigned_int> local_68;
  FScriptContainerElement *local_60;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_58;
  
  local_68 = (ForElementType<unsigned_int>)&this->PackageFlags;
  pTVar1 = &this->PackageDependencies;
  (param_3->InDependencies).ArrayNum = 0;
  this_00 = &param_3->InFlagBits;
  pTVar2 = &param_3->PointerDependencies;
  pTVar3 = &param_3->SortIndexes;
  local_res10 = (FArchiveState *)param_1;
  local_res18 = param_2;
  local_58 = this_00;
  if ((param_3->InDependencies).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)param_3,0,&(param_3->InDependencies).ArrayMax);
  }
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,&param_3->InDependencies);
  uVar18 = (param_3->InDependencies).ArrayNum;
  local_78 = uVar18 * 5;
  uVar10 = local_78 + 0x1fU >> 5;
  local_84 = uVar18;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this_00,uVar10,Default);
  (**(code **)(*(longlong *)param_1 + 0x188))
            (param_1,(this_00->AllocatorInstance).Data,(ulonglong)uVar10 << 2);
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  piVar4 = &(param_3->PointerDependencies).ArrayMax;
  (param_3->PointerDependencies).ArrayNum = 0;
  if ((param_3->PointerDependencies).ArrayMax < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar18,&pTVar2->AllocatorInstance,0,piVar4);
  }
  iVar12 = (param_3->InDependencies).ArrayNum;
  pFVar16 = (param_3->InDependencies).AllocatorInstance.Data;
  local_60 = pFVar16 + (longlong)iVar12 * 4;
  while( true ) {
    pFVar20 = local_60;
    if ((param_3->InDependencies).ArrayNum != iVar12) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    uVar18 = local_84;
    if (pFVar16 == pFVar20) {
      piVar4 = &(param_3->SortIndexes).ArrayMax;
      (param_3->SortIndexes).ArrayNum = 0;
      if ((param_3->SortIndexes).ArrayMax < (int)local_84) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_84,&pTVar3->AllocatorInstance,0,piVar4);
      }
      local_88 = 0;
      if (0 < (int)uVar18) {
        do {
          pFVar16 = (pTVar3->AllocatorInstance).Data;
          if (((pFVar16 <= (FScriptContainerElement *)&local_88) &&
              ((FScriptContainerElement *)&local_88 < pFVar16 + (longlong)*piVar4 * 4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar12 = (param_3->SortIndexes).ArrayNum;
          if (iVar12 == *piVar4) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar3->AllocatorInstance,piVar4);
          }
          (param_3->SortIndexes).ArrayNum = iVar12 + 1;
          *(int *)((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_88;
          local_88 = local_88 + 1;
        } while (local_88 < (int)uVar18);
      }
      AlgoImpl::
      IntroSortInternal<int,int,FIdentityFunctor,_FDependsNode::SerializeLoad_PackageDependencies<0>_::__l2::<lambda_1>_>
                ((int *)(pTVar3->AllocatorInstance).Data,(param_3->SortIndexes).ArrayNum,
                 local_res10._0_1_,(<lambda_1>)pTVar2);
      piVar4 = &(this->PackageDependencies).ArrayMax;
      (this->PackageDependencies).ArrayNum = 0;
      if (*piVar4 != uVar18) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar18,&pTVar1->AllocatorInstance,0,piVar4);
      }
      pFVar20 = (pTVar3->AllocatorInstance).Data;
      iVar12 = (param_3->SortIndexes).ArrayNum;
      pFVar16 = pFVar20 + (longlong)iVar12 * 4;
      while( true ) {
        if ((param_3->SortIndexes).ArrayNum != iVar12) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (pFVar20 == pFVar16) break;
        uVar18 = *(uint *)pFVar20;
        uVar10 = 0;
        if ((int)uVar18 < (param_3->PointerDependencies).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar7 = (pTVar1->AllocatorInstance).Data;
        pFVar5 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar18 * 8;
        if (((pFVar7 <= pFVar5) && (pFVar5 < pFVar7 + (longlong)*piVar4 * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar11 = (this->PackageDependencies).ArrayNum;
        if (iVar11 == *piVar4) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar1->AllocatorInstance,piVar4);
        }
        (this->PackageDependencies).ArrayNum = iVar11 + 1;
        pFVar20 = pFVar20 + 4;
        *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 8) =
             *(undefined8 *)pFVar5;
      }
      TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized
                ((TBitArray<FDefaultBitArrayAllocator> *)local_68,local_78);
      FVar8 = local_68;
      lVar19 = (longlong)(int)local_84;
      uVar18 = 0;
      pFVar16 = (local_58->AllocatorInstance).Data;
      if (0 < (int)local_84) {
        lVar17 = 0;
        iVar12 = 0;
        do {
          uVar10 = 0;
          if ((int)uVar18 < (param_3->SortIndexes).ArrayNum) {
            uVar10 = ~uVar18 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar11 = *(int *)((pTVar3->AllocatorInstance).Data + lVar17 * 4);
          if (((iVar12 < 0) || (*(int *)((longlong)FVar8 + 0x18) < iVar12 + 5)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x3bc,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((pFVar16 == (FScriptContainerElement *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumBitsToSet == 0 || ReadBits != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x3bd,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar15 = FVar8;
          if (*(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x10) !=
              (ForElementType<unsigned_int>)0x0) {
            FVar15 = *(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x10);
          }
          FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar15,iVar12,(uint *)pFVar16,iVar11 * 5,5);
          uVar18 = uVar18 + 1;
          iVar12 = iVar12 + 5;
          lVar17 = lVar17 + 1;
        } while (lVar17 < lVar19);
      }
      return;
    }
    local_80[0] = *(undefined4 *)pFVar16;
    UE::Core::Private::Function::CheckCallable(*(void **)local_res18);
    pcVar6 = *(code **)local_res18;
    plVar14 = *(longlong **)&local_res18->field_0x28;
    if (*(longlong **)&local_res18->field_0x28 == (longlong *)0x0) {
      plVar14 = (longlong *)&local_res18->field_0x10;
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    local_70 = (*pcVar6)(uVar13,local_80);
    if (local_70 == 0) break;
    pFVar20 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar20 <= (FScriptContainerElement *)&local_70) &&
        ((FScriptContainerElement *)&local_70 < pFVar20 + (longlong)*piVar4 * 8)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar11 = (param_3->PointerDependencies).ArrayNum;
    if (iVar11 == *piVar4) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,piVar4);
    }
    (param_3->PointerDependencies).ArrayNum = iVar11 + 1;
    pFVar16 = pFVar16 + 4;
    *(longlong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_70;
  }
  FArchiveState::SetError(local_res10);
  return;
}

// SerializeLoad_Referencers<1> @ 142b480f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDependsNode::SerializeLoad_Referencers<1>
          (FDependsNode *this,FArchive *param_1,
          TUniqueFunction<FDependsNode_*___cdecl(int)> *param_2,FLoadScratch *param_3,Type param_4)

{
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  FIdentityFunctor local_res8 [8];
  undefined4 local_res20 [2];
  longlong local_48 [2];
  
  pTVar1 = &this->Referencers;
  (param_3->InDependencies).ArrayNum = 0;
  if ((param_3->InDependencies).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)param_3,0,&(param_3->InDependencies).ArrayMax);
  }
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,&param_3->InDependencies);
  uVar4 = (param_3->InDependencies).ArrayNum;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  piVar2 = &(this->Referencers).ArrayMax;
  (this->Referencers).ArrayNum = 0;
  if ((this->Referencers).ArrayMax < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,&pTVar1->AllocatorInstance,0,piVar2);
  }
  pFVar12 = (param_3->InDependencies).AllocatorInstance.Data;
  iVar5 = (param_3->InDependencies).ArrayNum;
  pFVar3 = pFVar12 + (longlong)iVar5 * 4;
  while( true ) {
    if ((param_3->InDependencies).ArrayNum != iVar5) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar3) break;
    local_res20[0] = *(undefined4 *)pFVar12;
    UE::Core::Private::Function::CheckCallable(*(void **)param_2);
    pcVar6 = *(code **)param_2;
    plVar11 = *(longlong **)&param_2->field_0x28;
    if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
      plVar11 = (longlong *)&param_2->field_0x10;
    }
    uVar10 = (**(code **)(*plVar11 + 8))();
    local_48[0] = (*pcVar6)(uVar10,local_res20);
    if (local_48[0] == 0) {
      FArchiveState::SetError((FArchiveState *)param_1);
      return;
    }
    pFVar7 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar7 <= (FScriptContainerElement *)local_48) &&
        ((FScriptContainerElement *)local_48 < pFVar7 + (longlong)*piVar2 * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = (this->Referencers).ArrayNum;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->Referencers).ArrayNum = iVar9 + 1;
    pFVar12 = pFVar12 + 4;
    *(longlong *)((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_48[0];
  }
  AlgoImpl::
  IntroSortInternal<FDependsNode_*,int,FIdentityFunctor,_FDependsNode::SerializeLoad_Referencers<1>_::__l2::<lambda_1>_>
            ((FDependsNode **)(pTVar1->AllocatorInstance).Data,(this->Referencers).ArrayNum,
             local_res8[0],(<lambda_1>)local_res8[0]);
  return;
}

// SerializeLoad_Referencers<0> @ 142b48300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDependsNode::SerializeLoad_Referencers<0>
          (FDependsNode *this,FArchive *param_1,
          TUniqueFunction<FDependsNode_*___cdecl(int)> *param_2,FLoadScratch *param_3,Type param_4)

{
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  FIdentityFunctor local_res8 [8];
  undefined4 local_res20 [2];
  longlong local_48 [2];
  
  pTVar1 = &this->Referencers;
  (param_3->InDependencies).ArrayNum = 0;
  if ((param_3->InDependencies).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)param_3,0,&(param_3->InDependencies).ArrayMax);
  }
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,&param_3->InDependencies);
  uVar4 = (param_3->InDependencies).ArrayNum;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  piVar2 = &(this->Referencers).ArrayMax;
  (this->Referencers).ArrayNum = 0;
  if ((this->Referencers).ArrayMax < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,&pTVar1->AllocatorInstance,0,piVar2);
  }
  pFVar12 = (param_3->InDependencies).AllocatorInstance.Data;
  iVar5 = (param_3->InDependencies).ArrayNum;
  pFVar3 = pFVar12 + (longlong)iVar5 * 4;
  while( true ) {
    if ((param_3->InDependencies).ArrayNum != iVar5) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar3) break;
    local_res20[0] = *(undefined4 *)pFVar12;
    UE::Core::Private::Function::CheckCallable(*(void **)param_2);
    pcVar6 = *(code **)param_2;
    plVar11 = *(longlong **)&param_2->field_0x28;
    if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
      plVar11 = (longlong *)&param_2->field_0x10;
    }
    uVar10 = (**(code **)(*plVar11 + 8))();
    local_48[0] = (*pcVar6)(uVar10,local_res20);
    if (local_48[0] == 0) {
      FArchiveState::SetError((FArchiveState *)param_1);
      return;
    }
    pFVar7 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar7 <= (FScriptContainerElement *)local_48) &&
        ((FScriptContainerElement *)local_48 < pFVar7 + (longlong)*piVar2 * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = (this->Referencers).ArrayNum;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->Referencers).ArrayNum = iVar9 + 1;
    pFVar12 = pFVar12 + 4;
    *(longlong *)((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_48[0];
  }
  AlgoImpl::
  IntroSortInternal<FDependsNode_*,int,FIdentityFunctor,_FDependsNode::SerializeLoad_Referencers<0>_::__l2::<lambda_1>_>
            ((FDependsNode **)(pTVar1->AllocatorInstance).Data,(this->Referencers).ArrayNum,
             local_res8[0],(<lambda_1>)local_res8[0]);
  return;
}

// operator() @ 142b503f0

bool __thiscall
`FDependsNode::SerializeLoad_ManageDependencies<1>'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  plVar1 = *(longlong **)this;
  uVar6 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
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
  uVar2 = *(ulonglong *)(*plVar1 + (longlong)param_1 * 8);
  uVar6 = 0;
  if (param_2 < (int)plVar1[1]) {
    uVar6 = (uint)~param_2 >> 0x1f;
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
  return uVar2 < *(ulonglong *)(*plVar1 + (longlong)param_2 * 8);
}

// operator() @ 142b504d0

bool __thiscall
`FDependsNode::SerializeLoad_ManageDependencies<0>'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  plVar1 = *(longlong **)this;
  uVar6 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
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
  uVar2 = *(ulonglong *)(*plVar1 + (longlong)param_1 * 8);
  uVar6 = 0;
  if (param_2 < (int)plVar1[1]) {
    uVar6 = (uint)~param_2 >> 0x1f;
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
  return uVar2 < *(ulonglong *)(*plVar1 + (longlong)param_2 * 8);
}

// operator() @ 142b505b0

bool __thiscall
`FDependsNode::SerializeLoad_PackageDependencies<1>'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  plVar1 = *(longlong **)this;
  uVar6 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
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
  uVar2 = *(ulonglong *)(*plVar1 + (longlong)param_1 * 8);
  uVar6 = 0;
  if (param_2 < (int)plVar1[1]) {
    uVar6 = (uint)~param_2 >> 0x1f;
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
  return uVar2 < *(ulonglong *)(*plVar1 + (longlong)param_2 * 8);
}

// operator() @ 142b50690

bool __thiscall
`FDependsNode::SerializeLoad_PackageDependencies<0>'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  plVar1 = *(longlong **)this;
  uVar6 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
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
  uVar2 = *(ulonglong *)(*plVar1 + (longlong)param_1 * 8);
  uVar6 = 0;
  if (param_2 < (int)plVar1[1]) {
    uVar6 = (uint)~param_2 >> 0x1f;
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
  return uVar2 < *(ulonglong *)(*plVar1 + (longlong)param_2 * 8);
}

// operator() @ 142b51230

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
`FDependsNode::GetDependencies'::__l2::<lambda_1>::operator()
          (void *this,FDependsNode *param_1,EDependencyCategory param_2,EDependencyProperty param_3,
          bool param_4)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDependsNode *local_res10 [3];
  
  if (!param_4) {
    pFVar2 = *(ForAnyElementType **)this;
    local_res10[0] = param_1;
    if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
       ((FScriptContainerElement *)local_res10 <
        pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar5 + 1;
    *(FDependsNode **)(pFVar2->Data + (longlong)iVar5 * 8) = local_res10[0];
  }
  return;
}

// operator() @ 142b51300

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
`FDependsNode::GetDependencies'::__l2::<lambda_1>::operator()
          (void *this,FDependsNode *param_1,EDependencyCategory param_2,EDependencyProperty param_3,
          bool param_4)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  FName local_38;
  FName FStack_30;
  FName local_28;
  FName FStack_20;
  undefined4 local_18;
  
  local_38 = (param_1->Identifier).PackageName;
  FStack_30 = (param_1->Identifier).PrimaryAssetType.Name;
  pFVar2 = *(ForAnyElementType **)this;
  local_28 = (param_1->Identifier).ObjectName;
  FStack_20 = (param_1->Identifier).ValueName;
  local_18._0_2_ = CONCAT11(param_3,param_2);
  if (((FName *)pFVar2->Data <= &local_38) &&
     (&local_38 <
      (FName *)((longlong)pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x24)))
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x424,pFVar2,piVar1);
  }
  lVar7 = (longlong)iVar6;
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(FName *)(pFVar3 + lVar7 * 0x24) = local_38;
  ((FName *)(pFVar3 + lVar7 * 0x24))[1] = FStack_30;
  *(FName *)(pFVar3 + lVar7 * 0x24 + 0x10) = local_28;
  *(FName *)(pFVar3 + lVar7 * 0x24 + 0x18) = FStack_20;
  *(undefined4 *)(pFVar3 + lVar7 * 0x24 + 0x20) = local_18;
  return;
}

// operator() @ 142b513f0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
`FDependsNode::GetDependencies'::__l2::<lambda_1>::operator()
          (void *this,FDependsNode *param_1,EDependencyCategory param_2,EDependencyProperty param_3,
          bool param_4)

{
  int *piVar1;
  FName *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  
  if (!param_4) {
    pFVar3 = *(ForAnyElementType **)this;
    if (((FDependsNode *)pFVar3->Data <= param_1) &&
       (param_1 < (FDependsNode *)
                  (&((FDependsNode *)pFVar3->Data)->PackageFlags +
                  (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) + -3))) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x420,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar8 + 1;
    FVar6 = (param_1->Identifier).PrimaryAssetType.Name;
    pFVar4 = pFVar3->Data;
    pFVar2 = (FName *)(pFVar4 + (longlong)iVar8 * 0x20);
    *pFVar2 = (param_1->Identifier).PackageName;
    pFVar2[1] = FVar6;
    FVar6 = (param_1->Identifier).ValueName;
    pFVar2 = (FName *)(pFVar4 + (longlong)iVar8 * 0x20 + 0x10);
    *pFVar2 = (param_1->Identifier).ObjectName;
    pFVar2[1] = FVar6;
  }
  return;
}

// operator() @ 142b514c0

void __thiscall
`FDependsNode::LegacySerializeLoad_BeforeFlags'::__l2::<lambda_1>::operator()
          (void *this,int param_1,TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_2,
          TBitArray<FDefaultBitArrayAllocator> *param_3,uint param_4,uint param_5,bool param_6,
          bool param_7)

{
  uint uVar1;
  FArchive *this_00;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<unsigned_int> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForElementType<unsigned_int> FVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint local_res10 [2];
  ulonglong local_38 [2];
  
  if (0 < param_1) {
    iVar12 = 0;
    do {
      this_00 = *(FArchive **)this;
      local_res10[0] = 0;
      puVar2 = (uint *)**(undefined8 **)&this_00->field_0x8;
      if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar2 + 1) {
        if ((this_00->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res10,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(this_00,local_res10);
        }
      }
      else {
        local_res10[0] = *puVar2;
        **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
      }
      if (((int)local_res10[0] < 0) || (*(int *)((longlong)this + 0x10) <= (int)local_res10[0])) {
        FArchiveState::SetError(*(FArchiveState **)this);
        return;
      }
      if (param_7 != false) {
        uVar1 = param_2->ArrayNum;
        iVar9 = 0;
        local_38[0] = (longlong)(int)local_res10[0] * 0xa8 + *(longlong *)((longlong)this + 8);
        uVar10 = uVar1;
        if (0 < (int)uVar1) {
          do {
            uVar11 = uVar10 >> 1;
            if (*(ulonglong *)
                 ((param_2->AllocatorInstance).Data + (longlong)(int)(uVar11 + iVar9) * 8) <
                local_38[0]) {
              iVar9 = uVar11 + iVar9 + (uVar10 & 1);
            }
            uVar10 = uVar11;
          } while (uVar11 != 0);
        }
        if (iVar9 < (int)uVar1) {
          if ((iVar9 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(ulonglong *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 8) != local_38[0]
             ) goto LAB_142b51646;
          if ((param_6 == false) || (param_3 == (TBitArray<FDefaultBitArrayAllocator> *)0x0))
          goto LAB_142b51766;
        }
        else {
LAB_142b51646:
          pFVar3 = (param_2->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
              ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)param_2->ArrayMax * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar7 = param_2->ArrayNum;
          if (iVar7 == param_2->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar7 + 1;
          pFVar3 = (param_2->AllocatorInstance).Data + (longlong)iVar9 * 8;
          memmove(pFVar3 + 8,pFVar3,(longlong)(iVar7 - iVar9) << 3);
          *(ulonglong *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_38[0];
          if (param_3 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) goto LAB_142b51766;
          TBitArray<FDefaultBitArrayAllocator>::InsertUninitialized(param_3,iVar9 * param_4,param_4)
          ;
        }
        iVar9 = iVar9 * param_4;
        if (((iVar9 < 0) || (((int)param_4 < 0 || (param_3->NumBits < (int)(iVar9 + param_4))))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x3bc,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar4 = (param_3->AllocatorInstance).SecondaryData;
        FVar8 = (ForElementType<unsigned_int>)param_3;
        if (FVar4 != (ForElementType<unsigned_int>)0x0) {
          FVar8 = FVar4;
        }
        FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar8,iVar9,&param_5,0,param_4);
      }
LAB_142b51766:
      iVar12 = iVar12 + 1;
    } while (iVar12 < param_1);
  }
  return;
}

// operator() @ 142b51a90

void __thiscall
`FDependsNode::SerializeSave'::__l2::<lambda_1>::operator()
          (void *this,TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_1,
          TBitArray<FDefaultBitArrayAllocator> *param_2,int param_3,bool param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  ForAnyElementType *pFVar4;
  undefined8 *puVar5;
  FScriptContainerElement *pFVar6;
  ForElementType<unsigned_int> FVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  longlong *plVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar17;
  ForElementType<unsigned_int> FVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  FIdentityFunctor local_res8;
  bool local_78 [8];
  undefined1 local_70;
  undefined1 local_6f [3];
  int local_6c;
  uint uStack_68;
  FScriptContainerElement *local_60;
  undefined8 local_58 [3];
  
  pFVar4 = *(ForAnyElementType **)((longlong)this + 0x10);
  uVar16 = param_1->ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
  iVar2 = *piVar1;
  *(undefined4 *)&pFVar4[1].Data = 0;
  if (iVar2 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar16,pFVar4,0,piVar1);
  }
  iVar2 = param_1->ArrayNum;
  uVar16 = 0;
  if (0 < (longlong)iVar2) {
    lVar19 = 0;
    do {
      puVar5 = *(undefined8 **)((longlong)this + 8);
      uVar10 = 0;
      if ((int)uVar16 < param_1->ArrayNum) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_58[0] = *(undefined8 *)((param_1->AllocatorInstance).Data + lVar19 * 8);
      local_78[0] = param_4;
      UE::Core::Private::Function::CheckCallable((void *)*puVar5);
      pcVar8 = (code *)*puVar5;
      plVar14 = (longlong *)puVar5[5];
      if ((longlong *)puVar5[5] == (longlong *)0x0) {
        plVar14 = puVar5 + 2;
      }
      uVar13 = (**(code **)(*plVar14 + 8))();
      iVar11 = (*pcVar8)(uVar13,local_58,local_78);
      if (-1 < iVar11) {
        local_6c = iVar11;
        uStack_68 = uVar16;
        if (((pFVar4->Data <= (FScriptContainerElement *)&local_6c) &&
            ((FScriptContainerElement *)&local_6c < pFVar4->Data + (longlong)*piVar1 * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar11 = *(int *)&pFVar4[1].Data;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,pFVar4,piVar1);
        }
        *(int *)&pFVar4[1].Data = iVar11 + 1;
        *(ulonglong *)(pFVar4->Data + (longlong)iVar11 * 8) = CONCAT44(uStack_68,local_6c);
      }
      uVar16 = uVar16 + 1;
      lVar19 = lVar19 + 1;
    } while (lVar19 < iVar2);
  }
  pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar4 + 2);
  local_res8 = SUB81(this,0);
  AlgoImpl::
  IntroSortInternal<FDependsNode::FSaveScratch::FSortInfo,int,FIdentityFunctor,__FDependsNode::SerializeSave_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            ((FSortInfo *)pFVar4->Data,*(int *)&pFVar4[1].Data,local_res8,(<lambda_1>)local_res8);
  uVar16 = *(uint *)&pFVar4[1].Data;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  iVar2 = *(int *)((longlong)&pFVar4[3].Data + 4);
  piVar1 = (int *)((longlong)&pFVar4[3].Data + 4);
  *(undefined4 *)&pFVar4[3].Data = 0;
  if (iVar2 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,(ForAnyElementType *)pTVar17,0,piVar1);
  }
  pFVar15 = pFVar4->Data;
  iVar2 = *(int *)&pFVar4[1].Data;
  pFVar20 = pFVar15 + (longlong)iVar2 * 8;
  while( true ) {
    if (*(int *)&pFVar4[1].Data != iVar2) {
      local_70 = 0;
      `TCheckedPointerIterator<FDependsNode::FSaveScratch::FSortInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_70);
    }
    if (pFVar15 == pFVar20) break;
    pFVar6 = (pTVar17->AllocatorInstance).Data;
    if (((pFVar6 <= pFVar15) && (pFVar15 < pFVar6 + (longlong)*piVar1 * 4)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar11 = *(int *)&pFVar4[3].Data;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)pTVar17,piVar1);
    }
    *(int *)&pFVar4[3].Data = iVar11 + 1;
    uVar3 = *(undefined4 *)pFVar15;
    pFVar15 = pFVar15 + 8;
    *(undefined4 *)((pTVar17->AllocatorInstance).Data + (longlong)iVar11 * 4) = uVar3;
  }
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(*(FArchive **)this,pTVar17);
  if (param_2 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
    *(undefined4 *)&pFVar4[7].Data = 0;
    pFVar20 = pFVar4->Data;
    iVar2 = *(int *)&pFVar4[1].Data;
    local_60 = pFVar20 + (longlong)iVar2 * 8;
    while( true ) {
      pFVar15 = local_60;
      if (*(int *)&pFVar4[1].Data != iVar2) {
        local_6f[0] = 0;
        `TCheckedPointerIterator<FDependsNode::FSaveScratch::FSortInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_6f);
      }
      if (pFVar20 == pFVar15) break;
      iVar11 = param_3 * *(int *)(pFVar20 + 4);
      if (((iVar11 < 0) || (param_2->NumBits < iVar11 + param_3)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToAdd <= ReadBits.NumBits"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x298,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar12 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                         ((TBitArray<FDefaultBitArrayAllocator> *)(pFVar4 + 4),param_3);
      if ((((iVar12 < 0) || (param_3 < 0)) || (*(int *)&pFVar4[7].Data < iVar12 + param_3)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x3cf,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (((iVar11 < 0) || (param_2->NumBits < iVar11 + param_3)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToSet <= ReadBits.NumBits"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x3d0,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar7 = (param_2->AllocatorInstance).SecondaryData;
      FVar18 = (ForElementType<unsigned_int>)param_2;
      if (FVar7 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = FVar7;
      }
      pFVar15 = pFVar4[6].Data;
      if (pFVar4[6].Data == (FScriptContainerElement *)0x0) {
        pFVar15 = (FScriptContainerElement *)(pFVar4 + 4);
      }
      FBitArrayMemory::MemmoveBitsWordOrder((uint *)pFVar15,iVar12,(uint *)FVar18,iVar11,param_3);
      pFVar20 = pFVar20 + 8;
    }
    if ((*(int *)&pFVar4[7].Data != uVar16 * param_3) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutFlagBits.Num() == NumFlagBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\DependsNode.cpp"
                           ,0x369,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar20 = pFVar4[6].Data;
    if (pFVar4[6].Data == (FScriptContainerElement *)0x0) {
      pFVar20 = (FScriptContainerElement *)(pFVar4 + 4);
    }
    (**(code **)(**(longlong **)this + 0x188))
              (*(longlong **)this,pFVar20,(ulonglong)(uVar16 * param_3 + 0x1f >> 5) << 2);
  }
  return;
}

// operator() @ 142b526b0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
`FDependsNode::GetReferencers'::__l6::<lambda_1>::operator()
          (void *this,FDependsNode *param_1,EDependencyCategory param_2,EDependencyProperty param_3,
          bool param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  
  puVar2 = *(undefined8 **)((longlong)this + 8);
  pFVar3 = *(ForAnyElementType **)this;
  local_38 = *puVar2;
  uStack_30 = puVar2[1];
  local_28 = puVar2[2];
  uStack_20 = puVar2[3];
  local_18._0_2_ = CONCAT11(param_3,param_2);
  if ((pFVar3->Data <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x24)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x424,pFVar3,piVar1);
  }
  lVar8 = (longlong)iVar7;
  *(int *)&pFVar3[1].Data = iVar7 + 1;
  pFVar4 = pFVar3->Data;
  *(undefined8 *)(pFVar4 + lVar8 * 0x24) = local_38;
  *(undefined8 *)(pFVar4 + lVar8 * 0x24 + 8) = uStack_30;
  *(undefined8 *)(pFVar4 + lVar8 * 0x24 + 0x10) = local_28;
  *(undefined8 *)(pFVar4 + lVar8 * 0x24 + 0x18) = uStack_20;
  *(undefined4 *)(pFVar4 + lVar8 * 0x24 + 0x20) = local_18;
  return;
}

// AddDependency @ 142b53e90

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
FDependsNode::AddDependency
          (FDependsNode *this,FDependsNode *param_1,EDependencyCategory param_2,
          EDependencyProperty param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_2 & Package) == None) {
    if ((param_2 & SearchableName) == None) {
      if ((param_2 & Manage) == None) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\DependsNode.cpp"
                           ,0x1a4,L"");
        if (!bVar2) {
          return;
        }
      }
      else {
        AddDependency<2>(param_1,param_3,ManageMask,&this->ManageDependencies,&this->ManageFlags,
                         ManagePropertiesToByte,this->ManageIsSorted);
        if ((param_2 & ~Manage) == None) {
          return;
        }
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Category & ~EDependencyCategory::Manage) == EDependencyCategory::None",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\DependsNode.cpp"
                           ,0x19f,L"");
        if (!bVar2) {
          return;
        }
      }
    }
    else {
      AddDependency<0>(param_1,param_3,None,&this->NameDependencies,
                       (TBitArray<FDefaultBitArrayAllocator> *)0x0,
                       (_func___cdecl_uchar_EDependencyProperty *)0x0,this->SearchableNameIsSorted);
      if ((param_2 & ~SearchableName) == None) {
        return;
      }
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Category & ~EDependencyCategory::SearchableName) == EDependencyCategory::None"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\DependsNode.cpp"
                         ,0x198,L"");
      if (!bVar2) {
        return;
      }
    }
  }
  else {
    AddDependency<3>(param_1,param_3,PackageMask,&this->PackageDependencies,&this->PackageFlags,
                     PackagePropertiesToByte,this->PackageIsSorted);
    if ((param_2 & ~Package) == None) {
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Category & ~EDependencyCategory::Package) == EDependencyCategory::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\DependsNode.cpp"
                       ,0x191,L"");
    if (!bVar2) {
      return;
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// AddPackageDependencySet @ 142b54480

void __thiscall
FDependsNode::AddPackageDependencySet
          (FDependsNode *this,FDependsNode *param_1,TPropertyCombinationSet<3> *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  int *piVar1;
  uint *puVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  ForElementType<unsigned_int> FVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FDependsNode *local_res10;
  
  if (this->PackageIsSorted == 0) {
    iVar9 = (this->PackageDependencies).ArrayNum;
  }
  else {
    uVar10 = (this->PackageDependencies).ArrayNum;
    iVar9 = 0;
    if (0 < (int)uVar10) {
      do {
        uVar11 = uVar10 >> 1;
        if (*(FDependsNode **)
             ((this->PackageDependencies).AllocatorInstance.Data +
             (longlong)(int)(uVar11 + iVar9) * 8) < param_1) {
          iVar9 = uVar11 + iVar9 + (uVar10 & 1);
        }
        uVar10 = uVar11;
      } while (uVar11 != 0);
    }
  }
  local_res10 = param_1;
  if (iVar9 < (this->PackageDependencies).ArrayNum) {
    if ((iVar9 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(FDependsNode **)((this->PackageDependencies).AllocatorInstance.Data + (longlong)iVar9 * 8)
        == local_res10) goto LAB_142b54649;
  }
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>::Insert
            (&this->PackageDependencies,&local_res10,iVar9);
  iVar5 = iVar9 * 5;
  this_00 = &this->PackageFlags;
  piVar1 = &(this->PackageFlags).NumBits;
  if (((iVar5 < 0) || (*piVar1 < iVar5)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= Index && Index <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x2f7,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar3 = *piVar1;
  if ((iVar3 == 0) ||
     ((int)((iVar3 + 4 >> 0x1f & 0x1fU) + iVar3 + 4) >> 5 !=
      (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5)) {
    TBitArray<FDefaultBitArrayAllocator>::Reserve(this_00,iVar3 + 5);
    iVar7 = *piVar1 + 5;
    *piVar1 = iVar7;
    uVar11 = iVar7 >> 0x1f & 0x1f;
    uVar10 = iVar7 + uVar11;
    iVar7 = (uVar10 & 0x1f) - uVar11;
    if (iVar7 != 0) {
      FVar8 = (this->PackageFlags).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<unsigned_int>)0x0) {
        FVar8 = (ForElementType<unsigned_int>)this_00;
      }
      puVar2 = (uint *)((longlong)FVar8 + (longlong)((int)uVar10 >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
    }
  }
  else {
    *piVar1 = iVar3 + 5;
  }
  uVar10 = iVar3 + iVar9 * -5;
  if (uVar10 != 0) {
    FVar8 = (this->PackageFlags).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<unsigned_int>)0x0) {
      FVar8 = (ForElementType<unsigned_int>)this_00;
    }
    FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar8,iVar5 + 5,(uint *)FVar8,iVar5,uVar10);
  }
LAB_142b54649:
  iVar9 = iVar9 * 5;
  if (((iVar9 < 0) || ((this->PackageFlags).NumBits < iVar9 + 5)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3bc,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_2 == (TPropertyCombinationSet<3> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBitsToSet == 0 || ReadBits != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3bd,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar8 = (this->PackageFlags).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<unsigned_int>)0x0) {
    FVar8 = (ForElementType<unsigned_int>)&this->PackageFlags;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar8,iVar9,(uint *)param_2,0,5);
  return;
}

// AddReferencer @ 142b54dc0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall FDependsNode::AddReferencer(FDependsNode *this,FDependsNode *param_1)

{
  AddDependency<0>(param_1,None,None,&this->Referencers,(TBitArray<FDefaultBitArrayAllocator> *)0x0,
                   (_func___cdecl_uchar_EDependencyProperty *)0x0,this->ReferencersIsSorted);
  return;
}

// ByteToManageProperties @ 142b553b0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

EDependencyProperty __cdecl FDependsNode::ByteToManageProperties(uchar param_1)

{
  return (param_1 >> 1 & 1) << 4 | (param_1 & 1) << 3;
}

// ByteToPackageProperties @ 142b553d0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

EDependencyProperty __cdecl FDependsNode::ByteToPackageProperties(uchar param_1)

{
  return (param_1 >> 2 & 1) << 2 | (param_1 >> 1 & 1) * '\x02' | param_1 & Hard;
}

// ClearDependencies @ 142b56050

void __thiscall FDependsNode::ClearDependencies(FDependsNode *this,EDependencyCategory param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  if ((param_1 & Package) != None) {
    if (this->bAllowShrinking == 0) {
      uVar3 = (this->PackageDependencies).ArrayMax;
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
      }
      (this->PackageDependencies).ArrayNum = 0;
      (this->PackageFlags).NumBits = 0;
    }
    else {
      (this->PackageDependencies).ArrayNum = 0;
      piVar2 = &(this->PackageDependencies).ArrayMax;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->PackageDependencies).AllocatorInstance,0,piVar2);
      }
      iVar1 = (this->PackageFlags).MaxBits;
      (this->PackageFlags).NumBits = 0;
      if ((iVar1 < 0) || (0x80 < iVar1)) {
        (this->PackageFlags).MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->PackageFlags,0);
      }
    }
  }
  if ((param_1 & SearchableName) != None) {
    if (this->bAllowShrinking == 0) {
      uVar3 = (this->NameDependencies).ArrayMax;
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
      }
    }
    else {
      uVar3 = 0;
    }
    piVar2 = &(this->NameDependencies).ArrayMax;
    (this->NameDependencies).ArrayNum = 0;
    if (*piVar2 != uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar3,&(this->NameDependencies).AllocatorInstance,0,piVar2);
    }
  }
  if ((param_1 & Manage) != None) {
    if (this->bAllowShrinking == 0) {
      uVar3 = (this->ManageDependencies).ArrayMax;
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
      }
      (this->ManageDependencies).ArrayNum = 0;
      (this->ManageFlags).NumBits = 0;
    }
    else {
      piVar2 = &(this->ManageDependencies).ArrayMax;
      (this->ManageDependencies).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->ManageDependencies).AllocatorInstance,0,piVar2);
      }
      iVar1 = (this->ManageFlags).MaxBits;
      (this->ManageFlags).NumBits = 0;
      if ((iVar1 < 0) || (0x80 < iVar1)) {
        (this->ManageFlags).MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->ManageFlags,0);
        return;
      }
    }
  }
  return;
}

// ClearReferencers @ 142b561d0

void __thiscall FDependsNode::ClearReferencers(FDependsNode *this)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((this->bAllowShrinking == 0) && (uVar2 = (this->Referencers).ArrayMax, (int)uVar2 < 0)) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  piVar1 = &(this->Referencers).ArrayMax;
  (this->Referencers).ArrayNum = 0;
  if (*piVar1 != uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,&(this->Referencers).AllocatorInstance,0,piVar1);
  }
  return;
}

// ContainsDependency @ 142b56de0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

bool __thiscall
FDependsNode::ContainsDependency
          (FDependsNode *this,FDependsNode *param_1,EDependencyCategory param_2,
          FDependencyQuery *param_3)

{
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  bool local_res18 [8];
  FDependencyQuery *local_res20;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  bool *local_e8;
  TBitArray<FDefaultBitArrayAllocator> *local_e0;
  code *local_d8;
  <lambda_2> local_d0;
  bool *local_c8;
  TBitArray<FDefaultBitArrayAllocator> *local_c0;
  code *local_b8;
  bool **local_b0;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *local_a8;
  undefined1 *local_a0;
  TBitArray<FDefaultBitArrayAllocator> **local_98;
  undefined1 *local_90;
  code **local_88;
  FDependencyQuery *local_80;
  bool **local_78;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *local_70;
  undefined1 *local_68;
  TBitArray<FDefaultBitArrayAllocator> **local_60;
  undefined1 *local_58;
  code **local_50;
  FDependencyQuery *local_48;
  
  uVar10 = 0;
  iVar7 = 0;
  local_res18[0] = false;
  uVar8 = 0;
  local_res20 = param_3;
  if ((param_2 & Package) == None) {
LAB_142b56f84:
    if ((param_2 & SearchableName) != None) {
      local_d0.bExists = local_res18;
      IterateDependencyList<0,_FDependsNode::ContainsDependency_::__l11::<lambda_2>_>
                (&local_d0,param_1,param_2,param_3,SearchableName,None,&this->NameDependencies,
                 (TBitArray<FDefaultBitArrayAllocator> *)0x0,
                 (_func___cdecl_EDependencyProperty_uchar *)0x0,this->SearchableNameIsSorted);
      if (local_res18[0] != false) goto LAB_142b56fd5;
    }
    if ((param_2 & Manage) == None) {
      bVar16 = false;
    }
    else {
      local_c8 = local_res18;
      local_f0[0] = 0x18;
      pTVar1 = &this->ManageDependencies;
      local_f8[0] = 2;
      local_b8 = ByteToManageProperties;
      local_c0 = &this->ManageFlags;
      local_78 = &local_c8;
      local_68 = local_f8;
      local_60 = &local_c0;
      local_58 = local_f0;
      local_50 = &local_b8;
      local_70 = pTVar1;
      local_48 = param_3;
      if (this->ManageIsSorted == 0) {
        lVar15 = (longlong)(this->ManageDependencies).ArrayNum;
        uVar9 = uVar10;
        if (0 < lVar15) {
          do {
            uVar12 = (uint)uVar9;
            uVar5 = uVar8;
            if ((int)uVar12 < (this->ManageDependencies).ArrayNum) {
              uVar5 = ~uVar12 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar3 = (code *)swi(3);
              uVar4 = (*pcVar3)();
              return (bool)uVar4;
            }
            if (*(FDependsNode **)((pTVar1->AllocatorInstance).Data + uVar10 * 8) == param_1) {
              `IterateDependencyList<2,`FDependsNode::ContainsDependency'::__l17::<lambda_3>_>'::
              __l2::<lambda_1>::operator()(&local_78,uVar12);
            }
            uVar10 = uVar10 + 1;
            uVar9 = (ulonglong)(uVar12 + 1);
          } while ((longlong)uVar10 < lVar15);
        }
      }
      else {
        uVar8 = (this->ManageDependencies).ArrayNum;
        pFVar2 = (pTVar1->AllocatorInstance).Data;
        uVar5 = uVar8;
        if (0 < (int)uVar8) {
          do {
            uVar12 = uVar5 >> 1;
            iVar7 = uVar12 + (int)uVar10;
            if (*(FDependsNode **)(pFVar2 + (longlong)iVar7 * 8) < param_1) {
              uVar10 = (ulonglong)((uVar5 & 1) + iVar7);
            }
            iVar7 = (int)uVar10;
            uVar5 = uVar12;
          } while (uVar12 != 0);
        }
        if (((iVar7 < (int)uVar8) && (*(FDependsNode **)(pFVar2 + (longlong)iVar7 * 8) <= param_1))
           && (iVar7 != -1)) {
          `IterateDependencyList<2,`FDependsNode::ContainsDependency'::__l17::<lambda_3>_>'::__l2::
          <lambda_1>::operator()(&local_78,iVar7);
          return local_res18[0] != false;
        }
      }
      bVar16 = local_res18[0] != false;
    }
  }
  else {
    local_e8 = local_res18;
    pTVar1 = &this->PackageDependencies;
    local_100[0] = 7;
    local_d8 = ByteToPackageProperties;
    local_e0 = &this->PackageFlags;
    local_b0 = &local_e8;
    local_a0 = local_108;
    local_98 = &local_e0;
    local_90 = local_100;
    local_88 = &local_d8;
    local_108[0] = 1;
    local_a8 = pTVar1;
    local_80 = param_3;
    if (this->PackageIsSorted == 0) {
      lVar15 = (longlong)(this->PackageDependencies).ArrayNum;
      uVar9 = uVar10;
      uVar11 = uVar10;
      if (0 < lVar15) {
        do {
          uVar12 = (uint)uVar11;
          uVar5 = uVar8;
          if ((int)uVar12 < (this->PackageDependencies).ArrayNum) {
            uVar5 = ~uVar12 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar3 = (code *)swi(3);
            uVar4 = (*pcVar3)();
            return (bool)uVar4;
          }
          if (*(FDependsNode **)((pTVar1->AllocatorInstance).Data + uVar9 * 8) == param_1) {
            `IterateDependencyList<3,`FDependsNode::ContainsDependency'::__l5::<lambda_1>_>'::__l2::
            <lambda_1>::operator()(&local_b0,uVar12);
          }
          uVar9 = uVar9 + 1;
          param_3 = local_res20;
          uVar11 = (ulonglong)(uVar12 + 1);
        } while ((longlong)uVar9 < lVar15);
        goto LAB_142b56f7b;
      }
      goto LAB_142b56f84;
    }
    uVar5 = (this->PackageDependencies).ArrayNum;
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    uVar9 = uVar10;
    uVar12 = uVar8;
    uVar13 = uVar5;
    if (0 < (int)uVar5) {
      do {
        uVar14 = uVar13 >> 1;
        iVar6 = uVar14 + (int)uVar9;
        if (*(FDependsNode **)(pFVar2 + (longlong)iVar6 * 8) < param_1) {
          uVar9 = (ulonglong)(iVar6 + (uVar13 & 1));
        }
        uVar12 = (uint)uVar9;
        uVar13 = uVar14;
      } while (uVar14 != 0);
    }
    if ((((int)uVar5 <= (int)uVar12) ||
        (param_1 < *(FDependsNode **)(pFVar2 + (longlong)(int)uVar12 * 8))) ||
       (uVar12 == 0xffffffff)) goto LAB_142b56f84;
    `IterateDependencyList<3,`FDependsNode::ContainsDependency'::__l5::<lambda_1>_>'::__l2::
    <lambda_1>::operator()(&local_b0,uVar12);
LAB_142b56f7b:
    if (local_res18[0] == false) goto LAB_142b56f84;
LAB_142b56fd5:
    bVar16 = true;
  }
  return bVar16;
}

// GetConnectionCount @ 142b58c90

int __thiscall FDependsNode::GetConnectionCount(FDependsNode *this)

{
  return (this->Referencers).ArrayNum + (this->ManageDependencies).ArrayNum +
         (this->NameDependencies).ArrayNum + (this->PackageDependencies).ArrayNum;
}

// GetDependencies @ 142b58cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
FDependsNode::GetDependencies
          (FDependsNode *this,TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_1,
          EDependencyCategory param_2,FDependencyQuery *param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FDependsNode::GetDependencies'::`2'::<lambda_1>,1,0>::_vftable_
  ;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FDependsNode::GetDependencies'::__l2::<lambda_1>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
                ::Call;
  local_30 = param_1;
  IterateOverDependencies
            (this,(TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
                   *)local_48,param_2,param_3);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// GetDependencies @ 142b58d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
FDependsNode::GetDependencies
          (FDependsNode *this,TArray<FAssetDependency,TSizedDefaultAllocator<32>_> *param_1,
          EDependencyCategory param_2,FDependencyQuery *param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  TArray<FAssetDependency,TSizedDefaultAllocator<32>_> *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FDependsNode::GetDependencies'::`2'::<lambda_1>,1,0>::_vftable_
  ;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FDependsNode::GetDependencies'::__l2::<lambda_1>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
                ::Call;
  local_30 = param_1;
  IterateOverDependencies
            (this,(TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
                   *)local_48,param_2,param_3);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// GetDependencies @ 142b58dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
FDependsNode::GetDependencies
          (FDependsNode *this,TArray<FAssetIdentifier,TSizedDefaultAllocator<32>_> *param_1,
          EDependencyCategory param_2,FDependencyQuery *param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  TArray<FAssetIdentifier,TSizedDefaultAllocator<32>_> *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FDependsNode::GetDependencies'::`2'::<lambda_1>,1,0>::_vftable_
  ;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FDependsNode::GetDependencies'::__l2::<lambda_1>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
                ::Call;
  local_30 = param_1;
  IterateOverDependencies
            (this,(TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
                   *)local_48,param_2,param_3);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// GetPackageReferencers @ 142b59250

void __thiscall
FDependsNode::GetPackageReferencers
          (FDependsNode *this,
          TArray<TTuple<FAssetIdentifier,TPropertyCombinationSet<3>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  uint local_res18 [4];
  
  pFVar15 = (this->Referencers).AllocatorInstance.Data;
  iVar2 = (this->Referencers).ArrayNum;
  pFVar1 = pFVar15 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Referencers).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FDependsNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar15 == pFVar1) break;
    puVar4 = *(undefined8 **)pFVar15;
    iVar10 = 0;
    uVar3 = *(uint *)(puVar4 + 5);
    uVar13 = uVar3;
    iVar9 = 0;
    if (0 < (int)uVar3) {
      do {
        uVar14 = uVar13 >> 1;
        iVar10 = iVar9;
        if (*(FDependsNode **)(puVar4[4] + (longlong)(int)(uVar14 + iVar9) * 8) < this) {
          iVar10 = uVar14 + iVar9 + (uVar13 & 1);
        }
        uVar13 = uVar14;
        iVar9 = iVar10;
      } while (uVar14 != 0);
    }
    if (((iVar10 < (int)uVar3) && (*(FDependsNode **)(puVar4[4] + (longlong)iVar10 * 8) <= this)) &&
       (iVar10 != -1)) {
      iVar10 = iVar10 * 5;
      local_res18[0] = 0;
      if ((iVar10 < 0) || (*(int *)(puVar4 + 0xf) < iVar10 + 5)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x3df,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      puVar12 = (uint *)(puVar4 + 0xc);
      if ((uint *)puVar4[0xe] != (uint *)0x0) {
        puVar12 = (uint *)puVar4[0xe];
      }
      FBitArrayMemory::MemmoveBitsWordOrder(local_res18,0,puVar12,iVar10,5);
      iVar10 = param_1->ArrayNum;
      if (iVar10 == param_1->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x424,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      lVar11 = (longlong)iVar10;
      param_1->ArrayNum = iVar10 + 1;
      uVar7 = puVar4[1];
      pFVar5 = (param_1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar5 + lVar11 * 0x24) = *puVar4;
      *(undefined8 *)(pFVar5 + lVar11 * 0x24 + 8) = uVar7;
      uVar7 = puVar4[3];
      *(undefined8 *)(pFVar5 + lVar11 * 0x24 + 0x10) = puVar4[2];
      *(undefined8 *)(pFVar5 + lVar11 * 0x24 + 0x18) = uVar7;
      *(uint *)(pFVar5 + lVar11 * 0x24 + 0x20) = local_res18[0];
    }
    pFVar15 = pFVar15 + 8;
  }
  return;
}

// GetReferencers @ 142b593e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
FDependsNode::GetReferencers
          (FDependsNode *this,TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_1,
          EDependencyCategory param_2,FDependencyQuery *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined ***pppuVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStackY_d8 [32];
  char local_88 [8];
  FDependsNode *local_80;
  code *local_78 [2];
  undefined **local_68;
  char *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar8 = (this->Referencers).AllocatorInstance.Data;
  iVar2 = (this->Referencers).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  do {
    if ((this->Referencers).ArrayNum != iVar2) {
      local_88[1] = 0;
      `TCheckedPointerIterator<FDependsNode_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_88 + 1);
    }
    if (pFVar8 == pFVar1) {
      return;
    }
    local_80 = *(FDependsNode **)pFVar8;
    local_88[0] = '\0';
    if ((((param_2 == All) && (param_3->Required == None)) && (param_3->Excluded == None)) &&
       ((param_3->RequiredUnions).ArrayNum == 0)) {
      local_88[0] = '\x01';
LAB_142b594ed:
      pFVar3 = (param_1->AllocatorInstance).Data;
      if ((pFVar3 <= (FScriptContainerElement *)&local_80) &&
         ((FScriptContainerElement *)&local_80 < pFVar3 + (longlong)param_1->ArrayMax * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar6 + 1;
      *(FDependsNode **)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_80;
    }
    else {
      local_68 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FDependsNode::GetReferencers'::`9'::<lambda_1>,1,0>::
                  _vftable_;
      local_60 = local_88;
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FDependsNode::GetReferencers'::__l9::<lambda_1>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
                    ::Call;
      local_50 = (undefined ***)0x0;
      IterateOverDependencies
                (local_80,(TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
                           *)local_78,this,param_2,param_3);
      if (local_78[0] != (code *)0x0) {
        pppuVar7 = &local_68;
        if (local_50 != (undefined ***)0x0) {
          pppuVar7 = local_50;
        }
        (*(code *)(*pppuVar7)[2])();
      }
      if (local_88[0] != '\0') goto LAB_142b594ed;
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// GetReferencers @ 142b595c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
FDependsNode::GetReferencers
          (FDependsNode *this,TArray<FAssetDependency,TSizedDefaultAllocator<32>_> *param_1,
          EDependencyCategory param_2,FDependencyQuery *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined ***pppuVar3;
  FScriptContainerElement *pFVar4;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [16];
  code *local_78 [2];
  undefined **local_68;
  TArray<FAssetDependency,TSizedDefaultAllocator<32>_> *local_60;
  FDependsNode *local_58;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pFVar4 = (this->Referencers).AllocatorInstance.Data;
  iVar2 = (this->Referencers).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Referencers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FDependsNode_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_88);
    }
    if (pFVar4 == pFVar1) break;
    local_58 = *(FDependsNode **)pFVar4;
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FDependsNode::GetReferencers'::__l6::<lambda_1>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
                  ::Call;
    local_50 = (undefined ***)0x0;
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FDependsNode::GetReferencers'::`6'::<lambda_1>,1,0>::
                _vftable_;
    local_60 = param_1;
    IterateOverDependencies
              (local_58,(TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
                         *)local_78,this,param_2,param_3);
    if (local_78[0] != (code *)0x0) {
      pppuVar3 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar3 = local_50;
      }
      (*(code *)(*pppuVar3)[2])();
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// IsDependencyListSorted @ 142b5a090

bool __thiscall FDependsNode::IsDependencyListSorted(FDependsNode *this,EDependencyCategory param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_1 == Package) {
    return this->PackageIsSorted;
  }
  if (param_1 == SearchableName) {
    return this->SearchableNameIsSorted;
  }
  if (param_1 == Manage) {
    return this->ManageIsSorted;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\DependsNode.cpp"
                     ,0x56e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return true;
}

// IsReferencersSorted @ 142b5a230

bool __thiscall FDependsNode::IsReferencersSorted(FDependsNode *this)

{
  return this->ReferencersIsSorted;
}

// IsScriptDependenciesInitialized @ 142b5a250

bool __thiscall FDependsNode::IsScriptDependenciesInitialized(FDependsNode *this)

{
  return this->DependenciesInitialized;
}

// IterateOverDependencies @ 142b5a270

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
FDependsNode::IterateOverDependencies
          (FDependsNode *this,
          TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
          *param_1,FDependsNode *param_2,EDependencyCategory param_3,FDependencyQuery *param_4)

{
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 local_res8 [8];
  TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
  *local_res10;
  undefined1 local_res18 [8];
  EDependencyCategory local_res20;
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  undefined1 local_138 [8];
  undefined1 local_130 [8];
  TBitArray<FDefaultBitArrayAllocator> *local_128;
  code *local_120;
  undefined8 local_118;
  undefined8 local_110;
  TBitArray<FDefaultBitArrayAllocator> *local_108;
  code *local_100;
  TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
  *local_f8;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *local_f0;
  undefined1 *local_e8;
  TBitArray<FDefaultBitArrayAllocator> **local_e0;
  undefined1 *local_d8;
  code **local_d0;
  FDependencyQuery *local_c8;
  TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
  *local_c0;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined8 *local_98;
  FDependencyQuery *local_90;
  TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
  *local_88;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *local_80;
  undefined1 *local_78;
  TBitArray<FDefaultBitArrayAllocator> **local_70;
  undefined1 *local_68;
  code **local_60;
  FDependencyQuery *local_58;
  
  local_res18[0] = 7;
  local_120 = ByteToPackageProperties;
  uVar10 = 0;
  iVar7 = 0;
  local_res8[0] = 1;
  local_128 = &this->PackageFlags;
  pTVar1 = &this->PackageDependencies;
  uVar8 = 0;
  local_res10 = param_1;
  local_res20 = param_3;
  if ((param_3 & Package) != None) {
    local_e8 = local_res8;
    local_e0 = &local_128;
    local_d8 = local_res18;
    local_d0 = &local_120;
    local_c8 = param_4;
    local_f8 = param_1;
    local_f0 = pTVar1;
    if (this->PackageIsSorted == 0) {
      lVar15 = (longlong)(this->PackageDependencies).ArrayNum;
      uVar9 = uVar10;
      uVar11 = uVar10;
      if (0 < lVar15) {
        do {
          uVar12 = (uint)uVar11;
          uVar5 = uVar8;
          if ((int)uVar12 < (this->PackageDependencies).ArrayNum) {
            uVar5 = ~uVar12 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(FDependsNode **)((pTVar1->AllocatorInstance).Data + uVar9 * 8) == param_2) {
            `IterateDependencyList<3,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>'
            ::__l2::<lambda_1>::operator()(&local_f8,uVar12);
          }
          uVar9 = uVar9 + 1;
          uVar11 = (ulonglong)(uVar12 + 1);
          param_3 = local_res20;
        } while ((longlong)uVar9 < lVar15);
      }
    }
    else {
      uVar5 = (this->PackageDependencies).ArrayNum;
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      uVar9 = uVar10;
      uVar12 = uVar5;
      if (0 < (int)uVar5) {
        do {
          uVar13 = uVar12 >> 1;
          iVar6 = uVar13 + (int)uVar9;
          if (*(FDependsNode **)(pFVar2 + (longlong)iVar6 * 8) < param_2) {
            uVar9 = (ulonglong)(iVar6 + (uVar12 & 1));
          }
          uVar8 = (uint)uVar9;
          uVar12 = uVar13;
        } while (uVar13 != 0);
      }
      if ((((int)uVar8 < (int)uVar5) &&
          (*(FDependsNode **)(pFVar2 + (longlong)(int)uVar8 * 8) <= param_2)) &&
         (uVar8 != 0xffffffff)) {
        `IterateDependencyList<3,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>'
        ::__l2::<lambda_1>::operator()(&local_f8,uVar8);
      }
    }
  }
  local_110 = 0;
  pTVar1 = &this->NameDependencies;
  local_118 = 0;
  local_140[0] = 0;
  local_148[0] = 4;
  uVar8 = 0;
  if ((param_3 & SearchableName) != None) {
    local_b0 = local_148;
    local_a8 = &local_118;
    local_a0 = local_140;
    local_98 = &local_110;
    local_90 = param_4;
    local_c0 = local_res10;
    local_b8 = pTVar1;
    if (this->SearchableNameIsSorted == 0) {
      lVar15 = (longlong)(this->NameDependencies).ArrayNum;
      uVar9 = uVar10;
      uVar11 = uVar10;
      if (0 < lVar15) {
        do {
          uVar12 = (uint)uVar11;
          uVar5 = uVar8;
          if ((int)uVar12 < (this->NameDependencies).ArrayNum) {
            uVar5 = ~uVar12 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(FDependsNode **)((pTVar1->AllocatorInstance).Data + uVar9 * 8) == param_2) {
            `IterateDependencyList<0,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>'
            ::__l2::<lambda_1>::operator()(&local_c0,uVar12);
          }
          uVar9 = uVar9 + 1;
          uVar11 = (ulonglong)(uVar12 + 1);
          param_3 = local_res20;
        } while ((longlong)uVar9 < lVar15);
      }
    }
    else {
      uVar5 = (this->NameDependencies).ArrayNum;
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      uVar9 = uVar10;
      uVar12 = uVar8;
      uVar13 = uVar5;
      if (0 < (int)uVar5) {
        do {
          uVar14 = uVar13 >> 1;
          iVar6 = uVar14 + (int)uVar9;
          if (*(FDependsNode **)(pFVar2 + (longlong)iVar6 * 8) < param_2) {
            uVar9 = (ulonglong)(iVar6 + (uVar13 & 1));
          }
          uVar12 = (uint)uVar9;
          uVar13 = uVar14;
        } while (uVar14 != 0);
      }
      if ((((int)uVar12 < (int)uVar5) &&
          (*(FDependsNode **)(pFVar2 + (longlong)(int)uVar12 * 8) <= param_2)) &&
         (uVar12 != 0xffffffff)) {
        `IterateDependencyList<0,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>'
        ::__l2::<lambda_1>::operator()(&local_c0,uVar12);
      }
    }
  }
  local_130[0] = 0x18;
  local_100 = ByteToManageProperties;
  local_108 = &this->ManageFlags;
  pTVar1 = &this->ManageDependencies;
  local_138[0] = 2;
  if ((param_3 & Manage) != None) {
    local_88 = local_res10;
    local_78 = local_138;
    local_70 = &local_108;
    local_68 = local_130;
    local_60 = &local_100;
    local_58 = param_4;
    local_80 = pTVar1;
    if (this->ManageIsSorted == 0) {
      lVar15 = (longlong)(this->ManageDependencies).ArrayNum;
      uVar9 = uVar10;
      if (0 < lVar15) {
        do {
          uVar12 = (uint)uVar9;
          uVar5 = uVar8;
          if ((int)uVar12 < (this->ManageDependencies).ArrayNum) {
            uVar5 = ~uVar12 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(FDependsNode **)((pTVar1->AllocatorInstance).Data + uVar10 * 8) == param_2) {
            `IterateDependencyList<2,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>'
            ::__l2::<lambda_1>::operator()(&local_88,uVar12);
          }
          uVar10 = uVar10 + 1;
          uVar9 = (ulonglong)(uVar12 + 1);
        } while ((longlong)uVar10 < lVar15);
      }
    }
    else {
      uVar8 = (this->ManageDependencies).ArrayNum;
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      uVar5 = uVar8;
      if (0 < (int)uVar8) {
        do {
          uVar12 = uVar5 >> 1;
          iVar7 = uVar12 + (int)uVar10;
          if (*(FDependsNode **)(pFVar2 + (longlong)iVar7 * 8) < param_2) {
            uVar10 = (ulonglong)(iVar7 + (uVar5 & 1));
          }
          iVar7 = (int)uVar10;
          uVar5 = uVar12;
        } while (uVar12 != 0);
      }
      if (((iVar7 < (int)uVar8) && (*(FDependsNode **)(pFVar2 + (longlong)iVar7 * 8) <= param_2)) &&
         (iVar7 != -1)) {
        `IterateDependencyList<2,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>'
        ::__l2::<lambda_1>::operator()(&local_88,iVar7);
      }
    }
  }
  return;
}

// IterateOverDependencies @ 142b5a6f0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
FDependsNode::IterateOverDependencies
          (FDependsNode *this,
          TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
          *param_1,EDependencyCategory param_2,FDependencyQuery *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  undefined1 local_78 [8];
  undefined8 local_70;
  <lambda_1> local_68;
  <lambda_1> local_50;
  
  if ((param_2 & Package) != None) {
    iVar6 = (this->PackageDependencies).ArrayNum;
    uVar7 = 0;
    if (0 < iVar6) {
      lVar8 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar7 < iVar6) {
          uVar3 = ~uVar7 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_68.ListCategory = Package;
        local_68.DependsNode =
             *(FDependsNode **)((this->PackageDependencies).AllocatorInstance.Data + lVar8);
        local_68.InCallback = param_1;
        EnumerateMatchingDependencyFlags<3,_IterateDependencyList<3,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>_::__l14::<lambda_1>_>
                  (&this->PackageFlags,PackageMask,ByteToPackageProperties,uVar7,param_3,&local_68);
        iVar6 = (this->PackageDependencies).ArrayNum;
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 8;
      } while ((int)uVar7 < iVar6);
    }
  }
  if ((param_2 & SearchableName) != None) {
    iVar6 = (this->NameDependencies).ArrayNum;
    uVar7 = 0;
    if (0 < iVar6) {
      lVar8 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar7 < iVar6) {
          uVar3 = ~uVar7 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_res18[0] = 0;
        local_res8[0] = 0;
        local_78[0] = 4;
        local_70 = *(undefined8 *)((this->NameDependencies).AllocatorInstance.Data + lVar8);
        UE::Core::Private::Function::CheckCallable(*(void **)param_1);
        pcVar1 = *(code **)param_1;
        plVar5 = *(longlong **)&param_1->field_0x28;
        if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
          plVar5 = (longlong *)&param_1->field_0x10;
        }
        uVar4 = (**(code **)(*plVar5 + 8))();
        (*pcVar1)(uVar4,&local_70,local_78,local_res8,local_res18);
        iVar6 = (this->NameDependencies).ArrayNum;
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 8;
      } while ((int)uVar7 < iVar6);
    }
  }
  if ((param_2 & Manage) != None) {
    iVar6 = (this->ManageDependencies).ArrayNum;
    uVar7 = 0;
    if (0 < iVar6) {
      lVar8 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar7 < iVar6) {
          uVar3 = ~uVar7 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_50.ListCategory = Manage;
        local_50.DependsNode =
             *(FDependsNode **)((this->ManageDependencies).AllocatorInstance.Data + lVar8);
        local_50.InCallback = param_1;
        EnumerateMatchingDependencyFlags<2,_IterateDependencyList<2,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>_::__l14::<lambda_1>_>
                  (&this->ManageFlags,ManageMask,ByteToManageProperties,uVar7,param_3,&local_50);
        iVar6 = (this->ManageDependencies).ArrayNum;
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 8;
      } while ((int)uVar7 < iVar6);
    }
  }
  return;
}

// LegacySerializeLoad_BeforeFlags @ 142b5a980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDependsNode::LegacySerializeLoad_BeforeFlags
          (FDependsNode *this,FArchive *param_1,Type param_2,FDependsNode *param_3,int param_4,
          bool param_5)

{
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  uint *puVar4;
  ForElementType<unsigned_int> FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ForElementType<unsigned_int> FVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  int iVar18;
  int *piVar19;
  uint local_res10 [2];
  int local_res18;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8 [2];
  FArchive *local_e0;
  FDependsNode *local_d8;
  int local_d0;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  FDependsNode *local_b0;
  FDependsNode *local_a8;
  FDependsNode *local_a0;
  FDependsNode *local_98;
  FDependsNode *local_90;
  TPropertyCombinationSetHardcoded<FPropertyCombinationPack3> local_88 [2];
  uint local_80 [2];
  TPropertyCombinationSetHardcoded<FPropertyCombinationPack3> local_78 [2];
  uint local_70 [2];
  uint local_68 [2];
  uint local_60 [2];
  int local_58;
  int local_54;
  uint local_50 [2];
  uint local_48 [4];
  
  ::operator<<(param_1,&this->Identifier);
  SetIdentifier(this,&this->Identifier);
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_f4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_f4);
    }
  }
  else {
    local_f4 = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  puVar2 = &param_1->field_0x2a;
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_f0,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_f0);
    }
  }
  else {
    local_f0 = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_c0,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_c0);
    }
  }
  else {
    local_c0 = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_ec,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_ec);
    }
  }
  else {
    local_ec = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if ((int)param_2 < 5) {
    local_res10[0] = 0;
  }
  else {
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((*puVar2 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_e8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_e8);
    }
  }
  else {
    local_e8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  pTVar1 = &this->PackageDependencies;
  uVar13 = local_f0 + local_f4;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar19 = &(this->PackageDependencies).ArrayMax;
  uVar14 = 0;
  (this->PackageDependencies).ArrayNum = 0;
  if (*piVar19 != uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar13,&pTVar1->AllocatorInstance,0,piVar19);
  }
  uVar13 = uVar14;
  if (param_5) {
    uVar13 = local_c0;
  }
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar19 = &(this->NameDependencies).ArrayMax;
  (this->NameDependencies).ArrayNum = 0;
  if (*piVar19 != uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar13,&(this->NameDependencies).AllocatorInstance,0,piVar19);
  }
  if ((param_5) && (uVar14 = local_res10[0] + local_ec, (int)uVar14 < 0)) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  piVar19 = &(this->ManageDependencies).ArrayMax;
  (this->ManageDependencies).ArrayNum = 0;
  if (*piVar19 != uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar14,&(this->ManageDependencies).AllocatorInstance,0,piVar19);
  }
  if ((int)local_e8[0] < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_e8[0]);
  }
  piVar19 = &(this->Referencers).ArrayMax;
  (this->Referencers).ArrayNum = 0;
  if (*piVar19 != local_e8[0]) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_e8[0],&(this->Referencers).AllocatorInstance,0,piVar19);
  }
  local_d0 = param_4;
  local_e0 = param_1;
  local_d8 = param_3;
  if (0 < (int)local_f4) {
    local_88[0].Storage = 0;
    TPropertyCombinationSetHardcoded<FPropertyCombinationPack3>::Add(local_88,7);
    uVar13 = local_f4;
    pTVar17 = &this->PackageFlags;
    local_80[0] = local_88[0].Storage;
    local_res18 = 0;
    if (0 < (int)local_f4) {
      do {
        iVar18 = 0;
        piVar19 = &(this->PackageDependencies).ArrayMax;
        local_c8 = 0;
        puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_c8,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_c8);
          }
        }
        else {
          local_c8 = *puVar4;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        if (((int)local_c8 < 0) || (local_d0 <= (int)local_c8)) {
          FArchiveState::SetError((FArchiveState *)param_1);
          break;
        }
        uVar14 = (this->PackageDependencies).ArrayNum;
        local_b0 = local_d8 + (int)local_c8;
        uVar16 = uVar14;
        if (0 < (int)uVar14) {
          do {
            uVar15 = uVar16 >> 1;
            if (*(FDependsNode **)
                 ((pTVar1->AllocatorInstance).Data + (longlong)(int)(uVar15 + iVar18) * 8) <
                local_b0) {
              iVar18 = uVar15 + iVar18 + (uVar16 & 1);
            }
            uVar16 = uVar15;
          } while (uVar15 != 0);
        }
        if (iVar18 < (int)uVar14) {
          if ((iVar18 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(FDependsNode **)((pTVar1->AllocatorInstance).Data + (longlong)iVar18 * 8) !=
              local_b0) goto LAB_142b5ae0d;
          if (pTVar17 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            iVar18 = iVar18 * 5;
            if (((iVar18 < 0) || ((this->PackageFlags).NumBits < iVar18 + 5)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x3bc,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FVar5 = (this->PackageFlags).AllocatorInstance.SecondaryData;
            FVar11 = (ForElementType<unsigned_int>)pTVar17;
            if (FVar5 != (ForElementType<unsigned_int>)0x0) {
              FVar11 = FVar5;
            }
            FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar11,iVar18,local_80,0,5);
          }
        }
        else {
LAB_142b5ae0d:
          pFVar12 = (pTVar1->AllocatorInstance).Data;
          if (((pFVar12 <= (FScriptContainerElement *)&local_b0) &&
              ((FScriptContainerElement *)&local_b0 < pFVar12 + (longlong)*piVar19 * 8)) &&
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
          iVar8 = (this->PackageDependencies).ArrayNum;
          if (iVar8 == *piVar19) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar1->AllocatorInstance,piVar19);
          }
          (this->PackageDependencies).ArrayNum = iVar8 + 1;
          pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)iVar18 * 8;
          memmove(pFVar12 + 8,pFVar12,(longlong)(iVar8 - iVar18) << 3);
          *(FDependsNode **)((pTVar1->AllocatorInstance).Data + (longlong)iVar18 * 8) = local_b0;
          if (pTVar17 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            iVar8 = iVar18 * 5;
            if (((iVar8 < 0) || ((this->PackageFlags).NumBits < iVar8)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("0 <= Index && Index <= NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x2f7,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar9 = (this->PackageFlags).NumBits;
            if ((iVar9 == 0) ||
               ((int)((iVar9 + 4 >> 0x1f & 0x1fU) + iVar9 + 4) >> 5 !=
                (int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5)) {
              TBitArray<FDefaultBitArrayAllocator>::Reserve(pTVar17,iVar9 + 5);
              iVar10 = (this->PackageFlags).NumBits + 5;
              (this->PackageFlags).NumBits = iVar10;
              uVar16 = iVar10 >> 0x1f & 0x1f;
              uVar14 = iVar10 + uVar16;
              iVar10 = (uVar14 & 0x1f) - uVar16;
              if (iVar10 != 0) {
                FVar5 = (this->PackageFlags).AllocatorInstance.SecondaryData;
                FVar11 = (ForElementType<unsigned_int>)pTVar17;
                if (FVar5 != (ForElementType<unsigned_int>)0x0) {
                  FVar11 = FVar5;
                }
                puVar4 = (uint *)((longlong)FVar11 + (longlong)((int)uVar14 >> 5) * 4);
                *puVar4 = *puVar4 & 0xffffffffU >> (0x20U - (char)iVar10 & 0x1f);
              }
            }
            else {
              (this->PackageFlags).NumBits = iVar9 + 5;
            }
            uVar14 = iVar9 + iVar18 * -5;
            if (uVar14 != 0) {
              FVar5 = (this->PackageFlags).AllocatorInstance.SecondaryData;
              FVar11 = (ForElementType<unsigned_int>)pTVar17;
              if (FVar5 != (ForElementType<unsigned_int>)0x0) {
                FVar11 = FVar5;
              }
              FBitArrayMemory::MemmoveBitsWordOrder
                        ((uint *)FVar11,iVar8 + 5,(uint *)FVar11,iVar8,uVar14);
            }
            if (((iVar8 < 0) || ((this->PackageFlags).NumBits < iVar8 + 5)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x3bc,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FVar5 = (this->PackageFlags).AllocatorInstance.SecondaryData;
            FVar11 = (ForElementType<unsigned_int>)pTVar17;
            if (FVar5 != (ForElementType<unsigned_int>)0x0) {
              FVar11 = FVar5;
            }
            FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar11,iVar8,local_80,0,5);
          }
        }
        local_res18 = local_res18 + 1;
      } while (local_res18 < (int)uVar13);
    }
  }
  if (0 < (int)local_f0) {
    local_78[0].Storage = 0;
    TPropertyCombinationSetHardcoded<FPropertyCombinationPack3>::Add(local_78,6);
    uVar13 = local_f0;
    pTVar17 = &this->PackageFlags;
    local_60[0] = local_78[0].Storage;
    local_res18 = 0;
    pTVar1 = &this->PackageDependencies;
    if (0 < (int)local_f0) {
      do {
        iVar18 = 0;
        local_c4 = 0;
        puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_c4,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_c4);
          }
        }
        else {
          local_c4 = *puVar4;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        if (((int)local_c4 < 0) || (local_d0 <= (int)local_c4)) {
          FArchiveState::SetError((FArchiveState *)param_1);
          break;
        }
        uVar14 = (this->PackageDependencies).ArrayNum;
        local_a8 = local_d8 + (int)local_c4;
        if (0 < (int)uVar14) {
          do {
            uVar16 = uVar14 >> 1;
            if (*(FDependsNode **)
                 ((pTVar1->AllocatorInstance).Data + (longlong)(int)(uVar16 + iVar18) * 8) <
                local_a8) {
              iVar18 = (uVar14 & 1) + uVar16 + iVar18;
            }
            uVar14 = uVar16;
          } while (uVar16 != 0);
        }
        if (iVar18 < (this->PackageDependencies).ArrayNum) {
          if ((iVar18 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(FDependsNode **)((pTVar1->AllocatorInstance).Data + (longlong)iVar18 * 8) !=
              local_a8) goto LAB_142b5b178;
        }
        else {
LAB_142b5b178:
          pFVar12 = (pTVar1->AllocatorInstance).Data;
          if (((pFVar12 <= (FScriptContainerElement *)&local_a8) &&
              ((FScriptContainerElement *)&local_a8 <
               pFVar12 + (longlong)(this->PackageDependencies).ArrayMax * 8)) &&
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
          iVar8 = (this->PackageDependencies).ArrayNum;
          if (iVar8 == (this->PackageDependencies).ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar1->AllocatorInstance,
                               &(this->PackageDependencies).ArrayMax);
          }
          (this->PackageDependencies).ArrayNum = iVar8 + 1;
          pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)iVar18 * 8;
          memmove(pFVar12 + 8,pFVar12,(longlong)(iVar8 - iVar18) << 3);
          *(FDependsNode **)((pTVar1->AllocatorInstance).Data + (longlong)iVar18 * 8) = local_a8;
          if (pTVar17 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            iVar8 = iVar18 * 5;
            if (((iVar8 < 0) || ((this->PackageFlags).NumBits < iVar8)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("0 <= Index && Index <= NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x2f7,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar9 = (this->PackageFlags).NumBits;
            if ((iVar9 == 0) ||
               ((int)((iVar9 + 4 >> 0x1f & 0x1fU) + iVar9 + 4) >> 5 !=
                (int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5)) {
              TBitArray<FDefaultBitArrayAllocator>::Reserve(pTVar17,iVar9 + 5);
              iVar10 = (this->PackageFlags).NumBits + 5;
              (this->PackageFlags).NumBits = iVar10;
              uVar16 = iVar10 >> 0x1f & 0x1f;
              uVar14 = iVar10 + uVar16;
              iVar10 = (uVar14 & 0x1f) - uVar16;
              if (iVar10 != 0) {
                FVar5 = (this->PackageFlags).AllocatorInstance.SecondaryData;
                FVar11 = (ForElementType<unsigned_int>)pTVar17;
                if (FVar5 != (ForElementType<unsigned_int>)0x0) {
                  FVar11 = FVar5;
                }
                puVar4 = (uint *)((longlong)FVar11 + (longlong)((int)uVar14 >> 5) * 4);
                *puVar4 = *puVar4 & 0xffffffffU >> (0x20U - (char)iVar10 & 0x1f);
              }
            }
            else {
              (this->PackageFlags).NumBits = iVar9 + 5;
            }
            uVar14 = iVar9 + iVar18 * -5;
            if (uVar14 != 0) {
              FVar5 = (this->PackageFlags).AllocatorInstance.SecondaryData;
              FVar11 = (ForElementType<unsigned_int>)pTVar17;
              if (FVar5 != (ForElementType<unsigned_int>)0x0) {
                FVar11 = FVar5;
              }
              FBitArrayMemory::MemmoveBitsWordOrder
                        ((uint *)FVar11,iVar8 + 5,(uint *)FVar11,iVar8,uVar14);
            }
            if (((iVar8 < 0) || ((this->PackageFlags).NumBits < iVar8 + 5)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x3bc,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FVar5 = (this->PackageFlags).AllocatorInstance.SecondaryData;
            FVar11 = (ForElementType<unsigned_int>)pTVar17;
            if (FVar5 != (ForElementType<unsigned_int>)0x0) {
              FVar11 = FVar5;
            }
            FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar11,iVar8,local_60,0,5);
          }
        }
        local_res18 = local_res18 + 1;
      } while (local_res18 < (int)uVar13);
    }
  }
  uVar13 = local_c0;
  if (0 < (int)local_c0) {
    iVar18 = 0;
    pTVar1 = &this->NameDependencies;
    if (0 < (int)local_c0) {
      do {
        local_bc = 0;
        puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_bc,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_bc);
          }
        }
        else {
          local_bc = *puVar4;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        if (((int)local_bc < 0) || (local_d0 <= (int)local_bc)) {
          FArchiveState::SetError((FArchiveState *)param_1);
          break;
        }
        if (param_5) {
          uVar14 = (this->NameDependencies).ArrayNum;
          iVar8 = 0;
          local_a0 = local_d8 + (int)local_bc;
          if (0 < (int)uVar14) {
            do {
              uVar16 = uVar14 >> 1;
              if (*(FDependsNode **)
                   ((pTVar1->AllocatorInstance).Data + (longlong)(int)(uVar16 + iVar8) * 8) <
                  local_a0) {
                iVar8 = uVar16 + iVar8 + (uVar14 & 1);
              }
              uVar14 = uVar16;
            } while (uVar16 != 0);
          }
          if (iVar8 < (this->NameDependencies).ArrayNum) {
            if ((iVar8 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (*(FDependsNode **)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8) ==
                local_a0) goto LAB_142b5b588;
          }
          pFVar12 = (pTVar1->AllocatorInstance).Data;
          if (((pFVar12 <= (FScriptContainerElement *)&local_a0) &&
              ((FScriptContainerElement *)&local_a0 <
               pFVar12 + (longlong)(this->NameDependencies).ArrayMax * 8)) &&
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
          iVar9 = (this->NameDependencies).ArrayNum;
          if (iVar9 == (this->NameDependencies).ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar1->AllocatorInstance,&(this->NameDependencies).ArrayMax);
          }
          (this->NameDependencies).ArrayNum = iVar9 + 1;
          pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8;
          memmove(pFVar12 + 8,pFVar12,(longlong)(iVar9 - iVar8) << 3);
          *(FDependsNode **)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_a0;
        }
LAB_142b5b588:
        iVar18 = iVar18 + 1;
      } while (iVar18 < (int)uVar13);
    }
  }
  if (0 < (int)local_ec) {
    bVar7 = TPropertyCombinationSetHardcoded<FPropertyCombinationPack2>::AddNonRedundant
                      ((uint *)&`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                                ::__l5::Values,1,2,local_50,&local_58);
    local_70[0] = 0;
    if (bVar7) {
      local_70[0] = FPropertyCombinationPack2::Pack(local_50,local_58);
    }
    uVar13 = local_ec;
    local_res18 = 0;
    pTVar17 = &this->ManageFlags;
    pTVar1 = &this->ManageDependencies;
    if (0 < (int)local_ec) {
      do {
        local_b8 = 0;
        puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_b8,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_b8);
          }
        }
        else {
          local_b8 = *puVar4;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        if (((int)local_b8 < 0) || (local_d0 <= (int)local_b8)) {
          FArchiveState::SetError((FArchiveState *)param_1);
          break;
        }
        if (param_5) {
          uVar14 = (this->ManageDependencies).ArrayNum;
          iVar18 = 0;
          local_98 = local_d8 + (int)local_b8;
          if (0 < (int)uVar14) {
            do {
              uVar16 = uVar14 >> 1;
              if (*(FDependsNode **)
                   ((pTVar1->AllocatorInstance).Data + (longlong)(int)(uVar16 + iVar18) * 8) <
                  local_98) {
                iVar18 = uVar16 + iVar18 + (uVar14 & 1);
              }
              uVar14 = uVar16;
            } while (uVar16 != 0);
          }
          if (iVar18 < (this->ManageDependencies).ArrayNum) {
            if ((iVar18 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (*(FDependsNode **)((pTVar1->AllocatorInstance).Data + (longlong)iVar18 * 8) !=
                local_98) goto LAB_142b5b732;
            if (pTVar17 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) goto LAB_142b5b93b;
          }
          else {
LAB_142b5b732:
            pFVar12 = (pTVar1->AllocatorInstance).Data;
            if (((pFVar12 <= (FScriptContainerElement *)&local_98) &&
                ((FScriptContainerElement *)&local_98 <
                 pFVar12 + (longlong)(this->ManageDependencies).ArrayMax * 8)) &&
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
            iVar8 = (this->ManageDependencies).ArrayNum;
            if (iVar8 == (this->ManageDependencies).ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&pTVar1->AllocatorInstance,
                                 &(this->ManageDependencies).ArrayMax);
            }
            pFVar12 = (pTVar1->AllocatorInstance).Data;
            (this->ManageDependencies).ArrayNum = iVar8 + 1;
            pFVar12 = pFVar12 + (longlong)iVar18 * 8;
            memmove(pFVar12 + 8,pFVar12,(longlong)(iVar8 - iVar18) << 3);
            *(FDependsNode **)((pTVar1->AllocatorInstance).Data + (longlong)iVar18 * 8) = local_98;
            if (pTVar17 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) goto LAB_142b5b93b;
            iVar8 = iVar18 * 3;
            if (((iVar8 < 0) || ((this->ManageFlags).NumBits < iVar8)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("0 <= Index && Index <= NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x2f7,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar9 = (this->ManageFlags).NumBits;
            if ((iVar9 == 0) ||
               ((int)((iVar9 + 2 >> 0x1f & 0x1fU) + iVar9 + 2) >> 5 !=
                (int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5)) {
              TBitArray<FDefaultBitArrayAllocator>::Reserve(pTVar17,iVar9 + 3);
              iVar10 = (this->ManageFlags).NumBits + 3;
              (this->ManageFlags).NumBits = iVar10;
              uVar16 = iVar10 >> 0x1f & 0x1f;
              uVar14 = iVar10 + uVar16;
              iVar10 = (uVar14 & 0x1f) - uVar16;
              if (iVar10 != 0) {
                FVar5 = (this->ManageFlags).AllocatorInstance.SecondaryData;
                FVar11 = (ForElementType<unsigned_int>)pTVar17;
                if (FVar5 != (ForElementType<unsigned_int>)0x0) {
                  FVar11 = FVar5;
                }
                puVar4 = (uint *)((longlong)FVar11 + (longlong)((int)uVar14 >> 5) * 4);
                *puVar4 = *puVar4 & 0xffffffffU >> (0x20U - (char)iVar10 & 0x1f);
              }
            }
            else {
              (this->ManageFlags).NumBits = iVar9 + 3;
            }
            uVar14 = iVar9 + iVar18 * -3;
            if (uVar14 != 0) {
              FVar5 = (this->ManageFlags).AllocatorInstance.SecondaryData;
              FVar11 = (ForElementType<unsigned_int>)pTVar17;
              if (FVar5 != (ForElementType<unsigned_int>)0x0) {
                FVar11 = FVar5;
              }
              FBitArrayMemory::MemmoveBitsWordOrder
                        ((uint *)FVar11,iVar8 + 3,(uint *)FVar11,iVar8,uVar14);
            }
          }
          iVar18 = iVar18 * 3;
          if (((iVar18 < 0) || ((this->ManageFlags).NumBits < iVar18 + 3)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x3bc,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar5 = (this->ManageFlags).AllocatorInstance.SecondaryData;
          FVar11 = (ForElementType<unsigned_int>)pTVar17;
          if (FVar5 != (ForElementType<unsigned_int>)0x0) {
            FVar11 = FVar5;
          }
          FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar11,iVar18,local_70,0,3);
        }
LAB_142b5b93b:
        local_res18 = local_res18 + 1;
      } while (local_res18 < (int)uVar13);
    }
  }
  if (0 < (int)local_res10[0]) {
    uVar13 = 0;
    bVar7 = TPropertyCombinationSetHardcoded<FPropertyCombinationPack2>::AddNonRedundant
                      ((uint *)&`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                                ::__l5::Values,1,3,local_48,&local_54);
    if (bVar7) {
      uVar13 = FPropertyCombinationPack2::Pack(local_48,local_54);
    }
    uVar14 = local_res10[0];
    local_res18 = 0;
    pTVar17 = &this->ManageFlags;
    pTVar1 = &this->ManageDependencies;
    local_68[0] = uVar13;
    if (0 < (int)local_res10[0]) {
      do {
        local_b4 = 0;
        puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_b4,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_b4);
          }
        }
        else {
          local_b4 = *puVar4;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        if (((int)local_b4 < 0) || (local_d0 <= (int)local_b4)) {
          FArchiveState::SetError((FArchiveState *)param_1);
          break;
        }
        if (param_5) {
          uVar13 = (this->ManageDependencies).ArrayNum;
          iVar18 = 0;
          local_90 = local_d8 + (int)local_b4;
          if (0 < (int)uVar13) {
            do {
              uVar16 = uVar13 >> 1;
              if (*(FDependsNode **)
                   ((pTVar1->AllocatorInstance).Data + (longlong)(int)(uVar16 + iVar18) * 8) <
                  local_90) {
                iVar18 = uVar16 + iVar18 + (uVar13 & 1);
              }
              uVar13 = uVar16;
            } while (uVar16 != 0);
          }
          if (iVar18 < (this->ManageDependencies).ArrayNum) {
            if ((iVar18 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (*(FDependsNode **)((pTVar1->AllocatorInstance).Data + (longlong)iVar18 * 8) !=
                local_90) goto LAB_142b5bae2;
            if (pTVar17 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) goto LAB_142b5bceb;
          }
          else {
LAB_142b5bae2:
            pFVar12 = (pTVar1->AllocatorInstance).Data;
            if (((pFVar12 <= (FScriptContainerElement *)&local_90) &&
                ((FScriptContainerElement *)&local_90 <
                 pFVar12 + (longlong)(this->ManageDependencies).ArrayMax * 8)) &&
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
            iVar8 = (this->ManageDependencies).ArrayNum;
            if (iVar8 == (this->ManageDependencies).ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&pTVar1->AllocatorInstance,
                                 &(this->ManageDependencies).ArrayMax);
            }
            pFVar12 = (pTVar1->AllocatorInstance).Data;
            (this->ManageDependencies).ArrayNum = iVar8 + 1;
            pFVar12 = pFVar12 + (longlong)iVar18 * 8;
            memmove(pFVar12 + 8,pFVar12,(longlong)(iVar8 - iVar18) << 3);
            *(FDependsNode **)((pTVar1->AllocatorInstance).Data + (longlong)iVar18 * 8) = local_90;
            if (pTVar17 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) goto LAB_142b5bceb;
            iVar8 = iVar18 * 3;
            if (((iVar8 < 0) || ((this->ManageFlags).NumBits < iVar8)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("0 <= Index && Index <= NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x2f7,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar9 = (this->ManageFlags).NumBits;
            if ((iVar9 == 0) ||
               ((int)((iVar9 + 2 >> 0x1f & 0x1fU) + iVar9 + 2) >> 5 !=
                (int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5)) {
              TBitArray<FDefaultBitArrayAllocator>::Reserve(pTVar17,iVar9 + 3);
              iVar10 = (this->ManageFlags).NumBits + 3;
              (this->ManageFlags).NumBits = iVar10;
              uVar16 = iVar10 >> 0x1f & 0x1f;
              uVar13 = iVar10 + uVar16;
              iVar10 = (uVar13 & 0x1f) - uVar16;
              if (iVar10 != 0) {
                FVar5 = (this->ManageFlags).AllocatorInstance.SecondaryData;
                FVar11 = (ForElementType<unsigned_int>)pTVar17;
                if (FVar5 != (ForElementType<unsigned_int>)0x0) {
                  FVar11 = FVar5;
                }
                puVar4 = (uint *)((longlong)FVar11 + (longlong)((int)uVar13 >> 5) * 4);
                *puVar4 = *puVar4 & 0xffffffffU >> (0x20U - (char)iVar10 & 0x1f);
              }
            }
            else {
              (this->ManageFlags).NumBits = iVar9 + 3;
            }
            uVar13 = iVar9 + iVar18 * -3;
            if (uVar13 != 0) {
              FVar5 = (this->ManageFlags).AllocatorInstance.SecondaryData;
              FVar11 = (ForElementType<unsigned_int>)pTVar17;
              if (FVar5 != (ForElementType<unsigned_int>)0x0) {
                FVar11 = FVar5;
              }
              FBitArrayMemory::MemmoveBitsWordOrder
                        ((uint *)FVar11,iVar8 + 3,(uint *)FVar11,iVar8,uVar13);
            }
          }
          iVar18 = iVar18 * 3;
          if (((iVar18 < 0) || ((this->ManageFlags).NumBits < iVar18 + 3)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x3bc,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar5 = (this->ManageFlags).AllocatorInstance.SecondaryData;
          FVar11 = (ForElementType<unsigned_int>)pTVar17;
          if (FVar5 != (ForElementType<unsigned_int>)0x0) {
            FVar11 = FVar5;
          }
          FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar11,iVar18,local_68,0,3);
        }
LAB_142b5bceb:
        local_res18 = local_res18 + 1;
      } while (local_res18 < (int)uVar14);
    }
  }
  if (0 < (int)local_e8[0]) {
    `FDependsNode::LegacySerializeLoad_BeforeFlags'::__l2::<lambda_1>::operator()
              (&local_e0,local_e8[0],&this->Referencers,(TBitArray<FDefaultBitArrayAllocator> *)0x0,
               0,0,true,true);
  }
  this->DependenciesInitialized = this->bScriptPath;
  return;
}

// ManagePropertiesToByte @ 142b5cff0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

uchar __cdecl FDependsNode::ManagePropertiesToByte(EDependencyProperty param_1)

{
  return (param_1 >> 4 & 1) * '\x02' | param_1 >> 3 & 1;
}

// PackagePropertiesToByte @ 142b5e1d0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

uchar __cdecl FDependsNode::PackagePropertiesToByte(EDependencyProperty param_1)

{
  return (param_1 >> 2 & 1) << 2 | (param_1 >> 1 & 1) * '\x02' | param_1 & Hard;
}

// PrintDependencies @ 142b5e400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FDependsNode::PrintDependencies(FDependsNode *this)

{
  int iVar1;
  undefined1 auStackY_a8 [32];
  FString local_78;
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_3c = 0x80;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_34 = 0;
  local_28 = (ForElementType<FSetElementId>)0x0;
  local_20 = 0;
  local_38 = 0xffffffff;
  ::FString::FString(&local_78,L"");
  PrintDependenciesRecursive
            (this,&local_78,
             (TSet<FDependsNode_const_*,DefaultKeyFuncs<FDependsNode_const_*,0>,FDefaultSetAllocator>
              *)local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  local_20 = 0;
  if (local_28 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return;
}

// PrintDependenciesRecursive @ 142b5e530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
FDependsNode::PrintDependenciesRecursive
          (FDependsNode *this,FString *param_1,
          TSet<FDependsNode_const_*,DefaultKeyFuncs<FDependsNode_const_*,0>,FDefaultSetAllocator>
          *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined ***pppuVar4;
  ForElementType<UE::AssetRegistry::EDependencyProperty> FVar5;
  ForElementType<FSetElementId> FVar6;
  undefined1 auStack_a8 [32];
  FDependsNode *local_88;
  FDependencyQuery local_80;
  code *local_58 [2];
  undefined **local_48;
  FString *local_40;
  TSet<FDependsNode_const_*,DefaultKeyFuncs<FDependsNode_const_*,0>,FDefaultSetAllocator> *local_38;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar1 = IsThisNotNull(this,"FDependsNode::PrintDependenciesRecursive");
  if (bVar1) {
    uVar3 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    if (*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34) {
      FVar6 = (param_2->Hash).SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
      }
      iVar2 = *(int *)((longlong)FVar6 +
                      (ulonglong)(param_2->HashSize - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
      if (iVar2 != -1) {
        do {
          if (*(FDependsNode **)(*(longlong *)&param_2->Elements + (longlong)iVar2 * 0x10) == this)
          {
            if ((byte)LogAssetRegistry._0_1_ < 5) {
              return;
            }
            FAssetIdentifier::ToString(&this->Identifier,(FString *)&local_80);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
            FVar5 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)local_80._0_8_;
            goto LAB_142b5e74a;
          }
          iVar2 = *(int *)(*(longlong *)&param_2->Elements + 8 + (longlong)iVar2 * 0x10);
        } while (iVar2 != -1);
      }
    }
    if (4 < (byte)LogAssetRegistry._0_1_) {
      FAssetIdentifier::ToString(&this->Identifier,(FString *)&local_80);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      if ((ForElementType<UE::AssetRegistry::EDependencyProperty>)local_80._0_8_ !=
          (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
        FMemory::Free((void *)local_80._0_8_);
      }
    }
    local_80._0_8_ = this;
    TSet<FDependsNode_const_*,DefaultKeyFuncs<FDependsNode_const_*,0>,FDefaultSetAllocator>::
    Emplace<FDependsNode_const_*>(param_2,&local_88,(bool *)&local_80);
    local_80.RequiredUnions.ArrayMax = 1;
    local_80.RequiredUnions.AllocatorInstance.SecondaryData =
         (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
    local_80.RequiredUnions.ArrayNum = 0;
    local_80._0_8_ = local_80._0_8_ & 0xffffffffffff0000;
    local_30 = (undefined ***)0x0;
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FDependsNode::PrintDependenciesRecursive'::`47'::<lambda_1>,1,0>
                ::_vftable_;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FDependsNode::PrintDependenciesRecursive'::__l47::<lambda_1>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
                  ::Call;
    local_40 = param_1;
    local_38 = param_2;
    IterateOverDependencies
              (this,(TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
                     *)local_58,All,&local_80);
    FVar5 = local_80.RequiredUnions.AllocatorInstance.SecondaryData;
    if (local_58[0] != (code *)0x0) {
      pppuVar4 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar4 = local_30;
      }
      (*(code *)(*pppuVar4)[2])();
      FVar5 = local_80.RequiredUnions.AllocatorInstance.SecondaryData;
    }
LAB_142b5e74a:
    if (FVar5 != (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
      FMemory::Free((void *)FVar5);
    }
  }
  else if (4 < (byte)LogAssetRegistry._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
  }
  return;
}

// PrintNode @ 142b5e780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDependsNode::PrintNode(FDependsNode *this)

{
  int iVar1;
  undefined1 auStackY_a8 [32];
  FString local_78;
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (4 < (byte)LogAssetRegistry._0_1_) {
    FAssetIdentifier::ToString(&this->Identifier,&local_78);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogAssetRegistry._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    }
  }
  local_3c = 0x80;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_34 = 0;
  local_28 = (ForElementType<FSetElementId>)0x0;
  local_20 = 0;
  local_38 = 0xffffffff;
  ::FString::FString(&local_78,L"");
  PrintDependenciesRecursive
            (this,&local_78,
             (TSet<FDependsNode_const_*,DefaultKeyFuncs<FDependsNode_const_*,0>,FDefaultSetAllocator>
              *)local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  local_20 = 0;
  if (local_28 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  if (4 < (byte)LogAssetRegistry._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
  }
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (ForElementType<FSetElementId>)0x0;
  local_20 = 0;
  ::FString::FString(&local_78,L"");
  PrintReferencersRecursive
            (this,&local_78,
             (TSet<FDependsNode_const_*,DefaultKeyFuncs<FDependsNode_const_*,0>,FDefaultSetAllocator>
              *)local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  local_20 = 0;
  if (local_28 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return;
}

// PrintReferencers @ 142b5ea00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FDependsNode::PrintReferencers(FDependsNode *this)

{
  int iVar1;
  undefined1 auStackY_a8 [32];
  FString local_78;
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_3c = 0x80;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_34 = 0;
  local_28 = (ForElementType<FSetElementId>)0x0;
  local_20 = 0;
  local_38 = 0xffffffff;
  ::FString::FString(&local_78,L"");
  PrintReferencersRecursive
            (this,&local_78,
             (TSet<FDependsNode_const_*,DefaultKeyFuncs<FDependsNode_const_*,0>,FDefaultSetAllocator>
              *)local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  local_20 = 0;
  if (local_28 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return;
}

// PrintReferencersRecursive @ 142b5eb30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDependsNode::PrintReferencersRecursive
          (FDependsNode *this,FString *param_1,
          TSet<FDependsNode_const_*,DefaultKeyFuncs<FDependsNode_const_*,0>,FDefaultSetAllocator>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  FDependsNode *this_00;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  FScriptContainerElement *pFVar6;
  FDependsNode *local_res20;
  FString local_38;
  
  bVar2 = IsThisNotNull(this,"FDependsNode::PrintReferencersRecursive");
  if (bVar2) {
    uVar4 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    if (*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34) {
      FVar5 = (param_2->Hash).SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
      }
      iVar3 = *(int *)((longlong)FVar5 +
                      (ulonglong)(param_2->HashSize - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
      if (iVar3 != -1) {
        do {
          if (*(FDependsNode **)(*(longlong *)&param_2->Elements + (longlong)iVar3 * 0x10) == this)
          {
            if ((byte)LogAssetRegistry._0_1_ < 5) {
              return;
            }
            FAssetIdentifier::ToString(&this->Identifier,&local_38);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
            if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return;
            }
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
            return;
          }
          iVar3 = *(int *)(*(longlong *)&param_2->Elements + 8 + (longlong)iVar3 * 0x10);
        } while (iVar3 != -1);
      }
    }
    if (4 < (byte)LogAssetRegistry._0_1_) {
      FAssetIdentifier::ToString(&this->Identifier,&local_38);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)this;
    TSet<FDependsNode_const_*,DefaultKeyFuncs<FDependsNode_const_*,0>,FDefaultSetAllocator>::
    Emplace<FDependsNode_const_*>(param_2,&local_res20,(bool *)&local_38);
    pFVar6 = (this->Referencers).AllocatorInstance.Data;
    iVar3 = (this->Referencers).ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->Referencers).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FDependsNode_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res20);
      }
      if (pFVar6 == pFVar1) break;
      this_00 = *(FDependsNode **)pFVar6;
      ::FString::ConcatFC(&local_38,param_1,L"  ");
      PrintReferencersRecursive(this_00,&local_38,param_2);
      if ((FDependsNode *)local_38.Data.AllocatorInstance.Data != (FDependsNode *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      pFVar6 = pFVar6 + 8;
    }
  }
  else if (4 < (byte)LogAssetRegistry._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
    return;
  }
  return;
}

// RefreshReferencers @ 142b626b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FDependsNode::RefreshReferencers(FDependsNode *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  bool bVar4;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *this_00;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [32];
  uint local_68;
  <lambda_2> local_60;
  FScriptContainerElement *local_58;
  FDependencyQuery local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_88;
  this_00 = &this->Referencers;
  if (this->ReferencersIsSorted == 0) {
    local_60.__this = this;
    TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>::
    RemoveAllSwap<_FDependsNode::RefreshReferencers_::__l7::<lambda_2>_>(this_00,&local_60,Default);
  }
  else {
    iVar1 = (this->Referencers).ArrayNum;
    if (iVar1 != 0) {
      local_58 = (this_00->AllocatorInstance).Data;
      uVar5 = 0;
      local_50.RequiredUnions.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
      local_50.RequiredUnions.ArrayNum = 0;
      local_50.RequiredUnions.ArrayMax = 1;
      local_50.Required = None;
      local_50.Excluded = None;
      local_60.__this = (FDependsNode *)this_00;
      bVar3 = ContainsDependency(*(FDependsNode **)local_58,this,All,&local_50);
      uVar8 = uVar5;
      uVar10 = uVar5;
      if (local_50.RequiredUnions.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
        FMemory::Free((void *)local_50.RequiredUnions.AllocatorInstance.SecondaryData);
      }
      do {
        pFVar2 = local_58;
        local_68 = (uint)uVar8;
        uVar7 = local_68;
        do {
          uVar5 = uVar5 + 1;
          uVar7 = uVar7 + 1;
          if ((longlong)iVar1 <= (longlong)uVar5) break;
          local_50.RequiredUnions.AllocatorInstance.SecondaryData =
               (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
          local_50.RequiredUnions.ArrayNum = 0;
          local_50.RequiredUnions.ArrayMax = 1;
          local_50.Required = None;
          local_50.Excluded = None;
          bVar4 = ContainsDependency(*(FDependsNode **)(pFVar2 + uVar5 * 8),this,All,&local_50);
          if (local_50.RequiredUnions.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
            FMemory::Free((void *)local_50.RequiredUnions.AllocatorInstance.SecondaryData);
          }
        } while (bVar3 == bVar4);
        iVar6 = uVar7 - local_68;
        if (bVar3 != false) {
          uVar9 = (uint)uVar10;
          if (uVar9 != local_68) {
            memmove(local_58 + (longlong)(int)uVar9 * 8,local_58 + (longlong)(int)local_68 * 8,
                    (longlong)iVar6 << 3);
          }
          uVar10 = (ulonglong)(uVar9 + iVar6);
        }
        bVar3 = (bool)(bVar3 ^ 1);
        uVar8 = (ulonglong)uVar7;
      } while ((longlong)uVar5 < (longlong)iVar1);
      ((local_60.__this)->Identifier).PrimaryAssetType.Name.ComparisonIndex.Value = (uint)uVar10;
    }
  }
  return;
}

// RemoveDependency @ 142b63330

void __thiscall
FDependsNode::RemoveDependency(FDependsNode *this,FDependsNode *param_1,EDependencyCategory param_2)

{
  if ((param_2 & Package) != None) {
    RemoveDependency<3>(param_1,&this->PackageDependencies,&this->PackageFlags,this->PackageIsSorted
                        ,this->bAllowShrinking);
  }
  if ((param_2 & SearchableName) != None) {
    RemoveDependency<0>(param_1,&this->NameDependencies,(TBitArray<FDefaultBitArrayAllocator> *)0x0,
                        this->SearchableNameIsSorted,this->bAllowShrinking);
  }
  if ((param_2 & Manage) != None) {
    RemoveDependency<2>(param_1,&this->ManageDependencies,&this->ManageFlags,this->ManageIsSorted,
                        this->bAllowShrinking);
  }
  return;
}

// RemoveLinks @ 142b63400

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDependsNode::RemoveLinks
          (FDependsNode *this,TUniqueFunction<bool___cdecl(FDependsNode_const_*)> *param_1)

{
  EAllowShrinking EVar1;
  
  EVar1 = this->bAllowShrinking;
  RemoveAll<3>(param_1,&this->PackageDependencies,&this->PackageFlags,this->PackageIsSorted,EVar1);
  if (this->SearchableNameIsSorted == 0) {
    TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>::
    RemoveAllSwap<TUniqueFunction<bool___cdecl(FDependsNode_const_*)>_>
              (&this->NameDependencies,param_1,EVar1);
  }
  else {
    TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>::
    RemoveAll<TUniqueFunction<bool___cdecl(FDependsNode_const_*)>_>(&this->NameDependencies,param_1)
    ;
  }
  RemoveAll<2>(param_1,&this->ManageDependencies,&this->ManageFlags,this->ManageIsSorted,EVar1);
  if (this->ReferencersIsSorted != 0) {
    TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>::
    RemoveAll<TUniqueFunction<bool___cdecl(FDependsNode_const_*)>_>(&this->Referencers,param_1);
    return;
  }
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<TUniqueFunction<bool___cdecl(FDependsNode_const_*)>_>
            (&this->Referencers,param_1,EVar1);
  return;
}

// RemoveManageReferencesToNode @ 142b634d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall FDependsNode::RemoveManageReferencesToNode(FDependsNode *this)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStackY_88 [32];
  FDependencyQuery local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_88;
  uVar12 = (this->Referencers).ArrayNum - 1;
  if (-1 < (int)uVar12) {
    lVar11 = (longlong)(int)uVar12;
    lVar13 = lVar11 * 8;
    do {
      uVar14 = ~uVar12;
      uVar10 = uVar14 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar12 < (this->Referencers).ArrayNum) {
        uVar8 = uVar10;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)((this->Referencers).AllocatorInstance.Data + lVar13);
      RemoveDependency<2>(this,(TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *)(lVar4 + 0x40),
                          (TBitArray<FDefaultBitArrayAllocator> *)(lVar4 + 0x80),
                          (bool)((byte)(*(uint *)(lVar4 + 0xa0) >> 2) & 1),
                          (bool)((byte)(*(uint *)(lVar4 + 0xa0) >> 6) & 1));
      uVar8 = 0;
      if ((int)uVar12 < (this->Referencers).ArrayNum) {
        uVar8 = uVar10;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_50.RequiredUnions.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
      local_50.RequiredUnions.ArrayNum = 0;
      local_50.RequiredUnions.ArrayMax = 1;
      local_50.Required = None;
      local_50.Excluded = None;
      bVar7 = ContainsDependency(*(FDependsNode **)
                                  ((this->Referencers).AllocatorInstance.Data + lVar13),this,
                                 SearchableName|Package,&local_50);
      if (local_50.RequiredUnions.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
        FMemory::Free((void *)local_50.RequiredUnions.AllocatorInstance.SecondaryData);
      }
      if (!bVar7) {
        iVar9 = (this->Referencers).ArrayNum;
        if (this->ReferencersIsSorted == 0) {
          uVar8 = 0;
          if ((int)uVar12 < iVar9) {
            uVar8 = uVar10;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar3 = (this->Referencers).ArrayNum;
          pFVar1 = (this->Referencers).AllocatorInstance.Data;
          iVar9 = uVar14 + iVar3;
          if (1 < iVar9) {
            iVar9 = 1;
          }
          if (iVar9 != 0) {
            memmove(pFVar1 + lVar11 * 8,pFVar1 + (longlong)(iVar3 - iVar9) * 8,(longlong)iVar9 << 3)
            ;
          }
          iVar9 = (this->Referencers).ArrayNum + -1;
          (this->Referencers).ArrayNum = iVar9;
          if (this->bAllowShrinking != 0) {
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,&(this->Referencers).AllocatorInstance,iVar9,
                       &(this->Referencers).ArrayMax);
          }
        }
        else {
          uVar8 = 0;
          if ((int)uVar12 < iVar9) {
            uVar8 = uVar10;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar1 = (this->Referencers).AllocatorInstance.Data + lVar11 * 8;
          iVar9 = (this->Referencers).ArrayNum + uVar14;
          if (iVar9 != 0) {
            memmove(pFVar1,pFVar1 + 8,(longlong)iVar9 << 3);
          }
          iVar9 = (this->Referencers).ArrayNum + -1;
          (this->Referencers).ArrayNum = iVar9;
          if (this->bAllowShrinking != 0) {
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,&(this->Referencers).AllocatorInstance,iVar9,
                       &(this->Referencers).ArrayMax);
          }
        }
      }
      lVar11 = lVar11 + -1;
      lVar13 = lVar13 + -8;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  return;
}

// RemoveReferencer @ 142b643d0

void __thiscall FDependsNode::RemoveReferencer(FDependsNode *this,FDependsNode *param_1)

{
  RemoveDependency<0>(param_1,&this->Referencers,(TBitArray<FDefaultBitArrayAllocator> *)0x0,
                      this->ReferencersIsSorted,this->bAllowShrinking);
  return;
}

// RemoveReferencers @ 142b64410

void __thiscall
FDependsNode::RemoveReferencers
          (FDependsNode *this,
          TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator> *param_1)

{
  ulonglong uVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int *piVar9;
  uint uVar10;
  FIdentityFunctor local_res8;
  
  uVar10 = 0;
LAB_142b64448:
  do {
    if ((int)uVar10 < 0) {
LAB_142b645ce:
      piVar9 = &(this->Referencers).ArrayNum;
      if (this->ReferencersIsSorted != 0) {
        local_res8 = SUB81(this,0);
        AlgoImpl::IntroSortInternal<FDependsNode_*,int,FIdentityFunctor,TLess<void>_>
                  ((FDependsNode **)(this->Referencers).AllocatorInstance.Data,*piVar9,local_res8,
                   (TLess<void>)local_res8);
      }
      if (this->bAllowShrinking != 0) {
        iVar6 = *piVar9;
        if ((this->Referencers).ArrayMax != iVar6) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar6,&(this->Referencers).AllocatorInstance,iVar6,
                     &(this->Referencers).ArrayMax);
        }
      }
      return;
    }
    piVar9 = &(this->Referencers).ArrayNum;
    if ((this->Referencers).ArrayNum <= (int)uVar10) goto LAB_142b645ce;
    if ((int)uVar10 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar1 = *(ulonglong *)((this->Referencers).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
    uVar7 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
      FVar2 = (param_1->Hash).SecondaryData;
      FVar8 = (ForElementType<FSetElementId>)&param_1->Hash;
      if (FVar2 != (ForElementType<FSetElementId>)0x0) {
        FVar8 = FVar2;
      }
      iVar6 = *(int *)((longlong)FVar8 +
                      (ulonglong)(param_1->HashSize - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
      if (iVar6 != -1) {
        do {
          if (*(ulonglong *)(*(longlong *)&param_1->Elements + (longlong)iVar6 * 0x10) == uVar1) {
            uVar7 = 0;
            if ((int)uVar10 < *piVar9) {
              uVar7 = ~uVar10 >> 0x1f;
            }
            if (uVar7 == 0) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            pFVar3 = (this->Referencers).AllocatorInstance.Data;
            iVar6 = *piVar9 + ~uVar10;
            if (1 < iVar6) {
              iVar6 = 1;
            }
            if (iVar6 != 0) {
              memmove(pFVar3 + (longlong)(int)uVar10 * 8,pFVar3 + (longlong)(*piVar9 - iVar6) * 8,
                      (longlong)iVar6 << 3);
            }
            *piVar9 = *piVar9 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,&(this->Referencers).AllocatorInstance,*piVar9,
                       &(this->Referencers).ArrayMax);
            uVar10 = uVar10 - 1;
            goto LAB_142b645c7;
          }
          iVar6 = *(int *)(*(longlong *)&param_1->Elements + 8 + (longlong)iVar6 * 0x10);
        } while (iVar6 != -1);
        uVar10 = uVar10 + 1;
        goto LAB_142b64448;
      }
    }
LAB_142b645c7:
    uVar10 = uVar10 + 1;
  } while( true );
}

// SerializeSave @ 142b690c0

void __thiscall
FDependsNode::SerializeSave
          (FDependsNode *this,FArchive *param_1,
          TUniqueFunction<int___cdecl(FDependsNode_*,bool)> *param_2,FSaveScratch *param_3,
          FAssetRegistrySerializationOptions *param_4)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong lVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> local_68;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> local_58;
  FArchive *local_48;
  TUniqueFunction<int___cdecl(FDependsNode_*,bool)> *local_40;
  FSaveScratch *local_38;
  
  pTVar7 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
  ::operator<<(param_1,&this->Identifier);
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  `FDependsNode::SerializeSave'::__l2::<lambda_1>::operator()
            (&local_48,&this->PackageDependencies,&this->PackageFlags,5,false);
  bVar3 = false;
  bVar2 = true;
  if (param_4->bSerializeSearchableNameDependencies == false) {
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    `FDependsNode::SerializeSave'::__l2::<lambda_1>::operator()
              (&local_48,&local_58,(TBitArray<FDefaultBitArrayAllocator> *)0x0,0,false);
  }
  else {
    local_68.ArrayNum = (this->NameDependencies).ArrayNum;
    lVar6 = (longlong)local_68.ArrayNum;
    pFVar1 = (this->NameDependencies).AllocatorInstance.Data;
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_68.ArrayNum == 0) {
      local_68.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_68.ArrayNum,0,&local_68.AllocatorInstance,local_68.ArrayNum,
                 &local_68.ArrayMax);
      memcpy(local_68.AllocatorInstance.Data,pFVar1,lVar6 << 3);
    }
    `FDependsNode::SerializeSave'::__l2::<lambda_1>::operator()
              (&local_48,&local_68,(TBitArray<FDefaultBitArrayAllocator> *)0x0,0,false);
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
  }
  if (param_4->bSerializeManageDependencies == false) {
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pTVar5 = &local_58;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
  }
  else {
    local_68.ArrayNum = (this->ManageDependencies).ArrayNum;
    lVar6 = (longlong)local_68.ArrayNum;
    pFVar1 = (this->ManageDependencies).AllocatorInstance.Data;
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pTVar7 = &this->ManageFlags;
    if (local_68.ArrayNum == 0) {
      local_68.ArrayMax = 0;
      pTVar5 = &local_68;
      bVar3 = true;
      bVar2 = false;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_68.ArrayNum,0,&local_68.AllocatorInstance,local_68.ArrayNum,
                 &local_68.ArrayMax);
      memcpy(local_68.AllocatorInstance.Data,pFVar1,lVar6 << 3);
      pTVar5 = &local_68;
      bVar3 = true;
      bVar2 = false;
    }
  }
  FVar4.Data = local_58.AllocatorInstance.Data;
  `FDependsNode::SerializeSave'::__l2::<lambda_1>::operator()(&local_48,pTVar5,pTVar7,3,false);
  if ((bVar2) && (FVar4.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(FVar4.Data);
  }
  if ((bVar3) && (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  `FDependsNode::SerializeSave'::__l2::<lambda_1>::operator()
            (&local_48,&this->Referencers,(TBitArray<FDefaultBitArrayAllocator> *)0x0,0,true);
  return;
}

// SetIdentifier @ 142b6b3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FDependsNode::SetIdentifier(FDependsNode *this,FAssetIdentifier *param_1)

{
  FName FVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_898 [48];
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1035];
  wchar_t local_32 [5];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_898;
  FVar1 = (param_1->PrimaryAssetType).Name;
  (this->Identifier).PackageName = param_1->PackageName;
  (this->Identifier).PrimaryAssetType.Name = FVar1;
  FVar1 = param_1->ValueName;
  (this->Identifier).ObjectName = param_1->ObjectName;
  (this->Identifier).ValueName = FVar1;
  if (param_1->PackageName == (FName)0x0) {
    this->bScriptPath = 0;
  }
  else {
    local_868.Base = local_848;
    local_868.CurPos = local_848;
    local_868.End = local_32;
    local_868.bIsDynamic = false;
    local_868.bIsExternal = false;
    ::FName::AppendString(&param_1->PackageName,&local_868);
    iVar2 = (int)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1);
    if (8 < iVar2) {
      iVar2 = 8;
    }
    iVar4 = 0;
    if (0 < iVar2) {
      iVar4 = iVar2;
    }
    uVar3 = 0;
    if ((iVar4 == 8) && (iVar2 = wcsncmp(L"/Script/",local_868.Base,8), uVar3 = 0, iVar2 == 0)) {
      uVar3 = 0x20;
    }
    this->bScriptPath = 0;
    *(uint *)&this->field_0xa0 = *(uint *)&this->field_0xa0 | uVar3;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  }
  return;
}

// SetIsDependencyListSorted @ 142b6b4f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDependsNode::SetIsDependencyListSorted(FDependsNode *this,EDependencyCategory param_1,bool param_2)

{
  uint uVar1;
  EAllowShrinking EVar2;
  
  uVar1 = *(uint *)&this->field_0xa0;
  EVar2 = ZPULL(uVar1,6,1);
  if ((param_1 & Package) != None) {
    if ((param_2) && (this->PackageIsSorted == 0)) {
      SortDependencyList<3>(&this->PackageDependencies,&this->PackageFlags,EVar2);
    }
    this->PackageIsSorted = 0;
    *(uint *)&this->field_0xa0 = *(uint *)&this->field_0xa0 | (uint)param_2;
    uVar1 = *(uint *)&this->field_0xa0;
  }
  if ((param_1 & SearchableName) != None) {
    if ((param_2) && ((uVar1 & 2) == 0)) {
      SortDependencyList<0>
                (&this->NameDependencies,(TBitArray<FDefaultBitArrayAllocator> *)0x0,EVar2);
    }
    this->SearchableNameIsSorted = 0;
    *(uint *)&this->field_0xa0 = *(uint *)&this->field_0xa0 | (uint)param_2 + (uint)param_2;
    uVar1 = *(uint *)&this->field_0xa0;
  }
  if ((param_1 & Manage) != None) {
    if ((param_2) && ((uVar1 & 4) == 0)) {
      SortDependencyList<2>(&this->ManageDependencies,&this->ManageFlags,EVar2);
    }
    this->ManageIsSorted = 0;
    *(uint *)&this->field_0xa0 = *(uint *)&this->field_0xa0 | (uint)param_2 * 4;
  }
  return;
}

// SetIsReferencersSorted @ 142b6b5f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FDependsNode::SetIsReferencersSorted(FDependsNode *this,bool param_1)

{
  if ((param_1) && (this->ReferencersIsSorted == 0)) {
    SortDependencyList<0>
              (&this->Referencers,(TBitArray<FDefaultBitArrayAllocator> *)0x0,this->bAllowShrinking)
    ;
  }
  this->ReferencersIsSorted = 0;
  *(uint *)&this->field_0xa0 = *(uint *)&this->field_0xa0 | (uint)param_1 << 3;
  return;
}

// SetIsScriptDependenciesInitialized @ 142b6b650

void __thiscall FDependsNode::SetIsScriptDependenciesInitialized(FDependsNode *this,bool param_1)

{
  this->DependenciesInitialized = 0;
  *(uint *)&this->field_0xa0 = *(uint *)&this->field_0xa0 | (uint)param_1 << 4;
  return;
}

// Reserve @ 142ba5890

void __thiscall FDependsNode::Reserve(FDependsNode *this,FDependsNodeReservations *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_1->PackageDependenciesSize;
  uVar2 = param_1->ReferencersSize;
  uVar3 = param_1->ManageDependenciesSize;
  uVar4 = param_1->NameDependenciesSize;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if ((this->PackageDependencies).ArrayMax < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar1,&(this->PackageDependencies).AllocatorInstance,
               (this->PackageDependencies).ArrayNum,&(this->PackageDependencies).ArrayMax);
  }
  TBitArray<FDefaultBitArrayAllocator>::Reserve(&this->PackageFlags,uVar1 * 5);
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if ((this->NameDependencies).ArrayMax < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,&(this->NameDependencies).AllocatorInstance,
               (this->NameDependencies).ArrayNum,&(this->NameDependencies).ArrayMax);
  }
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if ((this->ManageDependencies).ArrayMax < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&(this->ManageDependencies).AllocatorInstance,
               (this->ManageDependencies).ArrayNum,&(this->ManageDependencies).ArrayMax);
  }
  TBitArray<FDefaultBitArrayAllocator>::Reserve(&this->ManageFlags,uVar3 * 3);
  if (-1 < (int)uVar2) {
    if ((this->Referencers).ArrayMax < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar2,&(this->Referencers).AllocatorInstance,(this->Referencers).ArrayNum,
                 &(this->Referencers).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

