// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticStruct @ 1489983d0

UScriptStruct * __cdecl FLevelCollection::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLevelCollection.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FLevelCollection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLevelCollection,(UObject *)pUVar1,
                         L"LevelCollection");
  }
  return Z_Registration_Info_UScriptStruct_FLevelCollection.OuterSingleton;
}

// FLevelCollection @ 1489b37f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FLevelCollection * __thiscall
FLevelCollection::FLevelCollection(FLevelCollection *this,FLevelCollection *param_1)

{
  TSet<TObjectPtr<ULevel>,DefaultKeyFuncs<TObjectPtr<ULevel>,0>,FDefaultSetAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  AGameStateBase *pAVar4;
  UNetDriver *pUVar5;
  UDemoNetDriver *pUVar6;
  ULevel *pUVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FLevelCollection *pFVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  this->CollectionType = param_1->CollectionType;
  this->bIsVisible = param_1->bIsVisible;
  pAVar4 = (param_1->GameState).field0_0x0.DebugPtr;
  (this->GameState).field0_0x0.DebugPtr = pAVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar4 != (AGameStateBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar4);
  }
  pUVar5 = (param_1->NetDriver).field0_0x0.DebugPtr;
  (this->NetDriver).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UNetDriver *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar6 = (param_1->DemoNetDriver).field0_0x0.DebugPtr;
  (this->DemoNetDriver).field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UDemoNetDriver *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pUVar7 = (param_1->PersistentLevel).field0_0x0.DebugPtr;
  (this->PersistentLevel).field0_0x0.DebugPtr = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (ULevel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pTVar1 = &this->Levels;
  *(undefined8 *)&pTVar1->Elements = 0;
  *(undefined8 *)&(this->Levels).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Levels).Elements.field_0x20 = 0;
  iVar14 = 0;
  *(undefined4 *)&(this->Levels).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Levels).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Levels).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Levels).Elements.field_0x34 = 0;
  (this->Levels).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Levels).HashSize = 0;
  TSet<TObjectPtr<ULevel>,DefaultKeyFuncs<TObjectPtr<ULevel>,0>,FDefaultSetAllocator>::
  Move<TSet<TObjectPtr<ULevel>,DefaultKeyFuncs<TObjectPtr<ULevel>,0>,FDefaultSetAllocator>_>
            (pTVar1,&param_1->Levels);
  iVar3 = *(int *)&(this->Levels).Elements.field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Levels).Elements.field_0x10;
  uVar10 = 1;
  iVar16 = 0;
  iVar11 = iVar14;
  if (iVar3 != 0) {
    puVar18 = *(uint **)&(this->Levels).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)TStack_60.Array;
    }
    uVar15 = *puVar18;
    iVar16 = 0;
    iVar14 = 0;
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1489b394d;
      uVar15 = puVar18[lVar13 + 1];
    }
    uVar10 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res10 = (int)lVar13;
    iVar11 = iVar16 + -1 + local_res10;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_1489b394d:
  uVar15 = *(uint *)&(this->Levels).Elements.field_0x28;
  uVar19 = uVar15 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar14);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar15 >> 5;
  TStack_60._28_4_ = iVar11;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Levels).Elements.field_0x8 -
                       *(int *)&(this->Levels).Elements.field_0x34);
  if ((((int)uVar15 < 0) || (iVar3 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FLevelCollection *)(*pcVar8)();
    return pFVar12;
  }
  uVar10 = *(uint *)&(this->Levels).Elements.field_0x28;
  if (uVar15 != uVar10) {
    puVar17 = *(undefined1 **)&(this->Levels).Elements.field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = &(this->Levels).Elements.field_0x10;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar14;
      uVar19 = uVar19 + 0x20;
      iVar14 = iVar14 + 1;
      uVar15 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_1489b3a50;
      uVar15 = *(uint *)(puVar17 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res18 = (int)lVar13;
    uVar15 = local_res18 + -1 + uVar19;
    if ((int)uVar10 < (int)uVar15) {
      uVar15 = uVar10;
    }
  }
LAB_1489b3a50:
  while( true ) {
    if (*(int *)&(this->Levels).Elements.field_0x8 - *(int *)&(this->Levels).Elements.field_0x34 !=
        (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<ULevel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar15) &&
       (TStack_60.Array ==
        (TBitArray<FDefaultBitArrayAllocator> *)&(this->Levels).Elements.field_0x10)) break;
    lVar13 = *(longlong *)
              (*(longlong *)&pTVar1->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (lVar13 != 0) {
      if ((*(FLevelCollection **)(lVar13 + 0x300) != param_1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Level->GetCachedLevelCollection() == &Other",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\World.cpp"
                             ,0x27d,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FLevelCollection *)(*pcVar8)();
        return pFVar12;
      }
      *(FLevelCollection **)(lVar13 + 0x300) = this;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return this;
}

// FLevelCollection @ 1489b3b10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FLevelCollection * __thiscall FLevelCollection::FLevelCollection(FLevelCollection *this)

{
  this->CollectionType = DynamicSourceLevels;
  this->bIsVisible = true;
  (this->GameState).field0_0x0.DebugPtr = (AGameStateBase *)0x0;
  (this->NetDriver).field0_0x0.DebugPtr = (UNetDriver *)0x0;
  (this->DemoNetDriver).field0_0x0.DebugPtr = (UDemoNetDriver *)0x0;
  (this->PersistentLevel).field0_0x0.DebugPtr = (ULevel *)0x0;
  *(undefined8 *)&(this->Levels).Elements = 0;
  *(undefined8 *)&(this->Levels).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Levels).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Levels).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Levels).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Levels).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->Levels).Elements.field_0x30 = 0xffffffff;
  (this->Levels).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Levels).HashSize = 0;
  return this;
}

// ~FLevelCollection @ 1489b9240

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FLevelCollection::~FLevelCollection(FLevelCollection *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  bool bVar6;
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
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Levels).Elements.field_0x28;
  puVar1 = &(this->Levels).Elements.field_0x10;
  iVar12 = 0;
  iVar14 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->Levels).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1489b92dd;
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
LAB_1489b92dd:
  uVar11 = *(uint *)&(this->Levels).Elements.field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Levels).Elements.field_0x8 -
                       *(int *)&(this->Levels).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->Levels).Elements.field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->Levels).Elements.field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1489b93e0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    uVar11 = local_res18 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_1489b93e0:
  while( true ) {
    if (*(int *)&(this->Levels).Elements.field_0x8 - *(int *)&(this->Levels).Elements.field_0x34 !=
        (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<ULevel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar9 = *(longlong *)
             (*(longlong *)&(this->Levels).Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (lVar9 != 0) {
      if ((*(FLevelCollection **)(lVar9 + 0x300) != this) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Level->GetCachedLevelCollection() == this",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\World.cpp"
                             ,0x26a,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined8 *)(lVar9 + 0x300) = 0;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  (this->Levels).HashSize = 0;
  FVar4 = (this->Levels).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<ULevel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<ULevel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Levels).Elements);
  return;
}

// operator= @ 1489bb6e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FLevelCollection * __thiscall
FLevelCollection::operator=(FLevelCollection *this,FLevelCollection *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  AGameStateBase *pAVar3;
  UNetDriver *pUVar4;
  UDemoNetDriver *pUVar5;
  ULevel *pUVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FLevelCollection *pFVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (this != param_1) {
    this->CollectionType = param_1->CollectionType;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar3 = (param_1->GameState).field0_0x0.DebugPtr, pAVar3 != (AGameStateBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar3);
    }
    (this->GameState).field0_0x0 = (param_1->GameState).field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 = (param_1->NetDriver).field0_0x0.DebugPtr, pUVar4 != (UNetDriver *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->NetDriver).field0_0x0 = (param_1->NetDriver).field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 = (param_1->DemoNetDriver).field0_0x0.DebugPtr, pUVar5 != (UDemoNetDriver *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->DemoNetDriver).field0_0x0 = (param_1->DemoNetDriver).field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 = (param_1->PersistentLevel).field0_0x0.DebugPtr, pUVar6 != (ULevel *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->PersistentLevel).field0_0x0 = (param_1->PersistentLevel).field0_0x0;
    if (&this->Levels != &param_1->Levels) {
      TSet<TObjectPtr<ULevel>,DefaultKeyFuncs<TObjectPtr<ULevel>,0>,FDefaultSetAllocator>::
      Move<TSet<TObjectPtr<ULevel>,DefaultKeyFuncs<TObjectPtr<ULevel>,0>,FDefaultSetAllocator>_>
                (&this->Levels,&param_1->Levels);
    }
    puVar1 = &(this->Levels).Elements.field_0x10;
    iVar15 = 0;
    this->bIsVisible = param_1->bIsVisible;
    iVar14 = *(int *)&(this->Levels).Elements.field_0x28;
    uVar9 = 1;
    iVar17 = 0;
    iVar13 = 0;
    iVar10 = 0;
    if (iVar14 != 0) {
      puVar18 = *(uint **)&(this->Levels).Elements.field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)puVar1;
      }
      uVar19 = *puVar18;
      while (uVar19 == 0) {
        lVar12 = (longlong)iVar15;
        iVar17 = iVar17 + 0x20;
        iVar15 = iVar15 + 1;
        if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) {
          iVar13 = *(int *)&(this->Levels).Elements.field_0x28;
          iVar10 = iVar14;
          goto LAB_1489bb835;
        }
        uVar19 = puVar18[lVar12 + 1];
      }
      iVar13 = *(int *)&(this->Levels).Elements.field_0x28;
      uVar9 = -uVar19 & uVar19;
      uVar2 = (ulonglong)uVar9 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res10 = (int)lVar12;
      iVar10 = iVar17 + -1 + local_res10;
      if (iVar13 < iVar10) {
        iVar10 = iVar14;
      }
    }
LAB_1489bb835:
    uVar19 = *(uint *)&(this->Levels).Elements.field_0x28;
    uVar20 = uVar19 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar9,iVar15);
    TStack_60.CurrentBitIndex = iVar10;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar19 >> 5;
    TStack_60._28_4_ = iVar10;
    TStack_60.BaseBitIndex = iVar17;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(this->Levels).Elements.field_0x8 -
                         *(int *)&(this->Levels).Elements.field_0x34);
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar19 < 0) || (iVar13 < (int)uVar19)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FLevelCollection *)(*pcVar7)();
      return pFVar11;
    }
    uVar9 = *(uint *)&(this->Levels).Elements.field_0x28;
    if (uVar19 != uVar9) {
      puVar16 = *(undefined1 **)&(this->Levels).Elements.field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar1;
      }
      uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
      while (uVar19 == 0) {
        lVar12 = (longlong)iVar14;
        uVar20 = uVar20 + 0x20;
        iVar14 = iVar14 + 1;
        uVar19 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_1489bb940;
        uVar19 = *(uint *)(puVar16 + lVar12 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res18 = (int)lVar12;
      uVar19 = local_res18 + -1 + uVar20;
      if ((int)uVar9 < (int)uVar19) {
        uVar19 = uVar9;
      }
    }
LAB_1489bb940:
    while( true ) {
      if (*(int *)&(this->Levels).Elements.field_0x8 - *(int *)&(this->Levels).Elements.field_0x34
          != (int)uStack_40) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TObjectPtr<ULevel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_60.CurrentBitIndex == uVar19) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      lVar12 = *(longlong *)
                (*(longlong *)&(this->Levels).Elements + (longlong)TStack_60.CurrentBitIndex * 0x10)
      ;
      if (lVar12 != 0) {
        if ((*(FLevelCollection **)(lVar12 + 0x300) != param_1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Level->GetCachedLevelCollection() == &Other",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\World.cpp"
                               ,0x293,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          pFVar11 = (FLevelCollection *)(*pcVar7)();
          return pFVar11;
        }
        *(FLevelCollection **)(lVar12 + 0x300) = this;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return this;
}

// AddLevel @ 1489c4fe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FLevelCollection::AddLevel(FLevelCollection *this,ULevel *param_1)

{
  code *pcVar1;
  bool bVar2;
  TObjectPtr<ULevel> local_res10;
  ULevel *local_res18 [2];
  
  if (param_1 != (ULevel *)0x0) {
    if (param_1->CachedLevelCollection != (FLevelCollection *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Level->GetCachedLevelCollection() == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\World.cpp"
                         ,0x2a6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TSet<TObjectPtr<ULevel>,DefaultKeyFuncs<TObjectPtr<ULevel>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<ULevel>_>(&this->Levels,&local_res10,(bool *)local_res18);
    param_1->CachedLevelCollection = this;
  }
  return;
}

// RemoveLevel @ 148a0aa90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FLevelCollection::RemoveLevel(FLevelCollection *this,ULevel *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TObjectPtr<ULevel_const_>_u_0 local_res10 [3];
  
  if (param_1 != (ULevel *)0x0) {
    if ((param_1->CachedLevelCollection != this) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Level->GetCachedLevelCollection() == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\World.cpp"
                           ,0x2b0,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_1->CachedLevelCollection = (FLevelCollection *)0x0;
    local_res10[0].DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if (*(int *)&(this->Levels).Elements.field_0x8 != *(int *)&(this->Levels).Elements.field_0x34) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      TSet<TObjectPtr<ULevel>,DefaultKeyFuncs<TObjectPtr<ULevel>,0>,FDefaultSetAllocator>::
      RemoveImpl<TObjectPtr<ULevel_const_>_>
                (&this->Levels,uVar3 >> 0x10 ^ uVar3,
                 (TObjectPtr<ULevel_const_> *)&local_res10[0].ObjectPtr);
    }
  }
  return;
}

// SetPersistentLevel @ 148a163b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FLevelCollection::SetPersistentLevel(FLevelCollection *this,ULevel *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (ULevel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->PersistentLevel).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->PersistentLevel).field0_0x0.DebugPtr = param_1;
  return;
}

