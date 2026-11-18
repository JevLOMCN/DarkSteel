// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 16

// StaticClass @ 146100da0

UClass * __cdecl UMovieSceneEntityGroupingSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEntityGroupingSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEntityGroupingSystem",
               &Z_Registration_Info_UClass_UMovieSceneEntityGroupingSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneEntityGroupingSystem,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneEntityGroupingSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneEntityGroupingSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEntityGroupingSystem.InnerSingleton;
}

// UMovieSceneEntityGroupingSystem @ 14611a920

UMovieSceneEntityGroupingSystem * __thiscall
UMovieSceneEntityGroupingSystem::UMovieSceneEntityGroupingSystem
          (UMovieSceneEntityGroupingSystem *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0xffff;
  this->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMovieSceneEntityGroupingSystem__6B_;
  *(undefined8 *)&this->AllocatedGroupIndices = 0;
  *(undefined8 *)&(this->AllocatedGroupIndices).field_0x8 = 0;
  *(undefined8 *)&(this->AllocatedGroupIndices).field_0x20 = 0;
  *(undefined4 *)&(this->AllocatedGroupIndices).field_0x28 = 0;
  *(undefined4 *)&(this->AllocatedGroupIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllocatedGroupIndices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllocatedGroupIndices).field_0x34 = 0;
  *(undefined8 *)&this->Groups = 0;
  *(undefined8 *)&(this->Groups).field_0x8 = 0;
  *(undefined8 *)&(this->Groups).field_0x20 = 0;
  *(undefined4 *)&(this->Groups).field_0x28 = 0;
  *(undefined4 *)&(this->Groups).field_0x2c = 0x80;
  *(undefined4 *)&(this->Groups).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Groups).field_0x34 = 0;
  *(undefined8 *)&(this->Groups).field_0x40 = 0;
  *(undefined4 *)&(this->Groups).field_0x48 = 0;
  *(undefined8 *)&this->EntityIDToGroup = 0;
  *(undefined8 *)&(this->EntityIDToGroup).field_0x8 = 0;
  *(undefined8 *)&(this->EntityIDToGroup).field_0x20 = 0;
  *(undefined4 *)&(this->EntityIDToGroup).field_0x28 = 0;
  *(undefined4 *)&(this->EntityIDToGroup).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntityIDToGroup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntityIDToGroup).field_0x34 = 0;
  (this->EmptyGroupIndices).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->EmptyGroupIndices).NumBits = 0;
  (this->EmptyGroupIndices).MaxBits = 0x80;
  *(undefined8 *)&this->GroupHandlers = 0;
  *(undefined8 *)&(this->GroupHandlers).field_0x8 = 0;
  *(undefined8 *)&(this->GroupHandlers).field_0x20 = 0;
  *(undefined4 *)&(this->GroupHandlers).field_0x28 = 0;
  *(undefined4 *)&(this->GroupHandlers).field_0x2c = 0x80;
  *(undefined4 *)&(this->GroupHandlers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GroupHandlers).field_0x34 = 0;
  return this;
}

// UMovieSceneEntityGroupingSystem @ 14611aa50

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEntityGroupingSystem * __thiscall
UMovieSceneEntityGroupingSystem::UMovieSceneEntityGroupingSystem
          (UMovieSceneEntityGroupingSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FBuiltInComponentTypes *pFVar2;
  UObject *local_res8;
  UClass *local_res18;
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneEntityGroupingSystem__6B_;
  *(undefined8 *)&this->AllocatedGroupIndices = 0;
  *(undefined8 *)&(this->AllocatedGroupIndices).field_0x8 = 0;
  *(undefined8 *)&(this->AllocatedGroupIndices).field_0x20 = 0;
  *(undefined4 *)&(this->AllocatedGroupIndices).field_0x28 = 0;
  *(undefined4 *)&(this->AllocatedGroupIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllocatedGroupIndices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllocatedGroupIndices).field_0x34 = 0;
  *(undefined8 *)&this->Groups = 0;
  *(undefined8 *)&(this->Groups).field_0x8 = 0;
  *(undefined8 *)&(this->Groups).field_0x20 = 0;
  *(undefined4 *)&(this->Groups).field_0x28 = 0;
  *(undefined4 *)&(this->Groups).field_0x2c = 0x80;
  *(undefined4 *)&(this->Groups).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Groups).field_0x34 = 0;
  *(undefined8 *)&(this->Groups).field_0x40 = 0;
  *(undefined4 *)&(this->Groups).field_0x48 = 0;
  *(undefined8 *)&this->EntityIDToGroup = 0;
  *(undefined8 *)&(this->EntityIDToGroup).field_0x8 = 0;
  *(undefined8 *)&(this->EntityIDToGroup).field_0x20 = 0;
  *(undefined4 *)&(this->EntityIDToGroup).field_0x28 = 0;
  *(undefined4 *)&(this->EntityIDToGroup).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntityIDToGroup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntityIDToGroup).field_0x34 = 0;
  (this->EmptyGroupIndices).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->EmptyGroupIndices).NumBits = 0;
  (this->EmptyGroupIndices).MaxBits = 0x80;
  *(undefined8 *)&(this->GroupHandlers).field_0x0 = 0;
  *(undefined8 *)&(this->GroupHandlers).field_0x8 = 0;
  *(undefined8 *)&(this->GroupHandlers).field_0x20 = 0;
  *(undefined4 *)&(this->GroupHandlers).field_0x28 = 0;
  *(undefined4 *)&(this->GroupHandlers).field_0x2c = 0x80;
  *(undefined4 *)&(this->GroupHandlers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GroupHandlers).field_0x34 = 0;
  pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
  *(undefined4 *)&this->_padding_ = 2;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 4;
  *(TComponentTypeID<UE::MovieScene::FEntityGroupID> *)&this->_padding_ = pFVar2->Group;
  TSparseArrayBase<392,8,FDefaultSparseArrayAllocator>::Reserve
            ((TSparseArrayBase<392,8,FDefaultSparseArrayAllocator> *)&this->GroupHandlers,2);
  if ((this->_padding_ & 0x10) != 0) {
    local_res8 = (UObject *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar2->Group;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentProducer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = (UObject *)this->_padding_;
    FVar1.Value = *(ushort *)&pFVar2->BoundObject;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    local_res18 = UMovieSceneRootInstantiatorSystem::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  }
  return this;
}

// ~UMovieSceneEntityGroupingSystem @ 14611e620

void __thiscall
UMovieSceneEntityGroupingSystem::~UMovieSceneEntityGroupingSystem
          (UMovieSceneEntityGroupingSystem *this)

{
  ForElementType<unsigned_int> FVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMovieSceneEntityGroupingSystem__6B_;
  TSparseArray<UMovieSceneEntityGroupingSystem::FEntityGroupingHandlerInfo,FDefaultSparseArrayAllocator>
  ::
  ~TSparseArray<UMovieSceneEntityGroupingSystem::FEntityGroupingHandlerInfo,FDefaultSparseArrayAllocator>
            (&this->GroupHandlers);
  FVar1 = (this->EmptyGroupIndices).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<UE::MovieScene::FEntityGroupID,FDefaultSparseArrayAllocator>::
  ~TSparseArray<UE::MovieScene::FEntityGroupID,FDefaultSparseArrayAllocator>(&this->EntityIDToGroup)
  ;
  *(undefined4 *)&(this->Groups).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Groups).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Groups);
  TSparseArray<UE::MovieScene::FEntityGroupingPolicyKey,FDefaultSparseArrayAllocator>::
  ~TSparseArray<UE::MovieScene::FEntityGroupingPolicyKey,FDefaultSparseArrayAllocator>
            (&this->AllocatedGroupIndices);
  this->_padding_ = (longlong)&___7UMovieSceneEntitySystem__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AllocateGroupIndex @ 146124250

int __thiscall
UMovieSceneEntityGroupingSystem::AllocateGroupIndex
          (UMovieSceneEntityGroupingSystem *this,FEntityGroupingPolicyKey param_1)

{
  TSparseArray<UE::MovieScene::FEntityGroupingPolicyKey,FDefaultSparseArrayAllocator> *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->AllocatedGroupIndices).field_0x34;
  this_00 = &this->AllocatedGroupIndices;
  if (iVar1 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,1,(ForAnyElementType *)this_00,
                       (int *)&(this->AllocatedGroupIndices).field_0x8,
                       (int *)&(this->AllocatedGroupIndices).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AllocatedGroupIndices).field_0x10,
               false);
  }
  else {
    iVar3 = *(int *)&(this->AllocatedGroupIndices).field_0x30;
    iVar1 = iVar1 + -1;
    iVar2 = *(int *)(*(longlong *)&this_00->field_0x0 + 4 + (longlong)iVar3 * 8);
    *(int *)&(this->AllocatedGroupIndices).field_0x30 = iVar2;
    *(int *)&(this->AllocatedGroupIndices).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar2 * 8) = 0xffffffff;
    }
  }
  TSparseArrayBase<4,4,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> *)this_00,&local_18,iVar3);
  if (local_18.Pointer != (int *)0x0) {
    *(int *)local_18.Pointer = param_1.Index;
  }
  return local_18.Index;
}

// FreeEmptyGroups @ 146133ac0

void __thiscall
UMovieSceneEntityGroupingSystem::FreeEmptyGroups(UMovieSceneEntityGroupingSystem *this)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<unsigned_int> FVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  code *pcVar8;
  byte bVar9;
  undefined4 uVar10;
  ForElementType<unsigned_int> FVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  ForElementType<unsigned_int> FVar21;
  uint uVar22;
  longlong *plVar23;
  bool bVar24;
  FEntityGroupID local_58 [2];
  
  FVar4 = (this->EmptyGroupIndices).AllocatorInstance.SecondaryData;
  iVar3 = (this->EmptyGroupIndices).NumBits;
  FVar21 = FVar4;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar21 = (ForElementType<unsigned_int>)&this->EmptyGroupIndices;
  }
  uVar17 = 0;
  FVar11 = FVar21;
  if (iVar3 + 0x1fU >> 5 != 0) {
    while (*(uint *)FVar11 == 0) {
      uVar15 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar15;
      FVar11 = (ForElementType<unsigned_int>)((longlong)FVar11 + 4);
      if ((int)(iVar3 + 0x1fU >> 5) <= (int)uVar15) {
        return;
      }
    }
    puVar1 = (uint *)((longlong)FVar21 + uVar17 * 4);
    iVar20 = 0;
    bVar24 = *puVar1 != 0;
    if (bVar24) {
      for (; (*puVar1 >> iVar20 & 1) == 0; iVar20 = iVar20 + 1) {
      }
    }
    iVar12 = 0x20;
    if (bVar24) {
      iVar12 = iVar20;
    }
    iVar12 = iVar12 + (int)uVar17 * 0x20;
    if ((iVar12 < iVar3) && (iVar12 != -1)) {
      iVar12 = 0;
      iVar20 = 0;
      if (iVar3 != 0) {
        FVar21 = (ForElementType<unsigned_int>)&this->EmptyGroupIndices;
        if (FVar4 != (ForElementType<unsigned_int>)0x0) {
          FVar21 = FVar4;
        }
        uVar15 = *(uint *)FVar21;
        while (uVar15 == 0) {
          iVar20 = iVar20 + 1;
          iVar12 = iVar12 + 0x20;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_146133eb7;
          uVar15 = *(uint *)((longlong)FVar21 + (longlong)iVar20 * 4);
        }
        uVar15 = -uVar15 & uVar15;
        uVar22 = 0xffffffff;
        uVar17 = (ulonglong)uVar15 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        uVar19 = (int)lVar7 + -1 + iVar12;
        if ((int)uVar19 < iVar3) {
          do {
            lVar7 = (longlong)(int)uVar19 * 8;
            iVar3 = *(int *)(lVar7 + *(longlong *)&this->AllocatedGroupIndices);
            plVar23 = (longlong *)((longlong)iVar3 * 0x188 + *(longlong *)&this->GroupHandlers);
            if (((*(byte *)(plVar23 + 0x20) & 1) == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("bIsValid",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                    ,0x97,
                                    L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                                   ), bVar24)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if ((*(byte *)(plVar23 + 0x20) & 2) == 0) {
              plVar23 = (longlong *)*plVar23;
            }
            (**(code **)(*plVar23 + 0x10))(plVar23,uVar19);
            local_58[0].Flags = None;
            local_58[0].PolicyKey.Index = iVar3;
            local_58[0].GroupIndex = uVar19;
            if (*(int *)&(this->Groups).field_0x8 != *(int *)&(this->Groups).field_0x34) {
              uVar18 = iVar3 - uVar19 ^ uVar19 >> 0xd;
              uVar13 = (-0x61c88647 - uVar18) - uVar19 ^ uVar18 << 8;
              uVar16 = (uVar19 - uVar13) - uVar18 ^ uVar13 >> 0xd;
              uVar18 = (uVar18 - uVar16) - uVar13 ^ uVar16 >> 0xc;
              uVar13 = (uVar13 - uVar18) - uVar16 ^ uVar18 << 0x10;
              uVar16 = (uVar16 - uVar13) - uVar18 ^ uVar13 >> 5;
              uVar18 = (uVar18 - uVar16) - uVar13 ^ uVar16 >> 3;
              uVar13 = (uVar13 - uVar18) - uVar16 ^ uVar18 << 10;
              TSet<TTuple<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,0>,FDefaultSetAllocator>
              ::RemoveImpl<UE::MovieScene::FEntityGroupID>
                        ((TSet<TTuple<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,0>,FDefaultSetAllocator>
                          *)&this->Groups,(uVar16 - uVar13) - uVar18 ^ uVar13 >> 0xf,local_58);
            }
            lVar5 = *(longlong *)&this->AllocatedGroupIndices;
            bVar9 = (byte)uVar19 & 0x1f;
            uVar13 = 1 << bVar9 | 1U >> 0x20 - bVar9;
            if ((((int)uVar19 < 0) ||
                (*(int *)&(this->AllocatedGroupIndices).field_0x28 <= (int)uVar19)) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar24)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            puVar6 = *(undefined1 **)&(this->AllocatedGroupIndices).field_0x20;
            puVar14 = &(this->AllocatedGroupIndices).field_0x10;
            if (puVar6 != (undefined1 *)0x0) {
              puVar14 = puVar6;
            }
            uVar16 = uVar19;
            if ((int)uVar19 < 0) {
              uVar16 = uVar19 + 0x1f;
            }
            lVar2 = (longlong)((int)uVar16 >> 5) * 4;
            if (((*(uint *)(puVar14 + lVar2) & uVar13) == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("AllocationFlags[Index]",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                    ,0xc5,L""), bVar24)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (*(int *)&(this->AllocatedGroupIndices).field_0x34 != 0) {
              *(uint *)(lVar5 + (longlong)*(int *)&(this->AllocatedGroupIndices).field_0x30 * 8) =
                   uVar19;
            }
            *(undefined4 *)(lVar7 + lVar5) = 0xffffffff;
            if (*(int *)&(this->AllocatedGroupIndices).field_0x34 < 1) {
              uVar10 = 0xffffffff;
            }
            else {
              uVar10 = *(undefined4 *)&(this->AllocatedGroupIndices).field_0x30;
            }
            *(undefined4 *)(lVar7 + 4 + lVar5) = uVar10;
            puVar6 = &(this->AllocatedGroupIndices).field_0x34;
            *(int *)puVar6 = *(int *)puVar6 + 1;
            *(uint *)&(this->AllocatedGroupIndices).field_0x30 = uVar19;
            if ((((int)uVar19 < 0) ||
                (*(int *)&(this->AllocatedGroupIndices).field_0x28 <= (int)uVar19)) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar24)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            puVar6 = *(undefined1 **)&(this->AllocatedGroupIndices).field_0x20;
            puVar14 = &(this->AllocatedGroupIndices).field_0x10;
            if (puVar6 != (undefined1 *)0x0) {
              puVar14 = puVar6;
            }
            *(uint *)(puVar14 + lVar2) = *(uint *)(puVar14 + lVar2) & ~uVar13;
            iVar3 = (this->EmptyGroupIndices).NumBits;
            uVar22 = uVar22 & ~uVar15;
            FVar4 = (this->EmptyGroupIndices).AllocatorInstance.SecondaryData;
            FVar21 = (ForElementType<unsigned_int>)&this->EmptyGroupIndices;
            if (FVar4 != (ForElementType<unsigned_int>)0x0) {
              FVar21 = FVar4;
            }
            uVar15 = uVar22 & *(uint *)((longlong)FVar21 + (longlong)iVar20 * 4);
            while (uVar15 == 0) {
              iVar20 = iVar20 + 1;
              iVar12 = iVar12 + 0x20;
              if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar20)
              goto LAB_146133eb7;
              uVar22 = 0xffffffff;
              uVar15 = *(uint *)((longlong)FVar21 + (longlong)iVar20 * 4);
            }
            uVar15 = -uVar15 & uVar15;
            uVar17 = (ulonglong)uVar15 * 2 + 1;
            lVar7 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            uVar19 = (int)lVar7 + -1 + iVar12;
          } while (((int)uVar19 <= iVar3) && ((int)uVar19 < iVar3));
        }
      }
LAB_146133eb7:
      iVar3 = (this->EmptyGroupIndices).MaxBits;
      (this->EmptyGroupIndices).NumBits = 0;
      if ((iVar3 < 0) || (0x80 < iVar3)) {
        (this->EmptyGroupIndices).MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->EmptyGroupIndices,0);
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 14613c0a0

UClass * __cdecl UMovieSceneEntityGroupingSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEntityGroupingSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEntityGroupingSystem",
               &Z_Registration_Info_UClass_UMovieSceneEntityGroupingSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneEntityGroupingSystem,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneEntityGroupingSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneEntityGroupingSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEntityGroupingSystem.InnerSingleton;
}

// IsRelevantImpl @ 1461413d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneEntityGroupingSystem::IsRelevantImpl
          (UMovieSceneEntityGroupingSystem *this,UMovieSceneEntitySystemLinker *param_1)

{
  return *(int *)&(this->GroupHandlers).field_0x8 != *(int *)&(this->GroupHandlers).field_0x34;
}

// OnCleanTaggedGarbage @ 1461459d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEntityGroupingSystem::OnCleanTaggedGarbage(UMovieSceneEntityGroupingSystem *this)

{
  FBuiltInComponentTypes *pFVar1;
  TFilteredEntityTask<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<UE::MovieScene::FEntityGroupID>_>
  *this_00;
  undefined1 auStack_1d8 [32];
  FComponentTypeID local_1b8;
  FComponentTypeID local_1b6 [7];
  undefined8 local_1a8;
  TStatIdData *pTStack_1a0;
  byte local_198;
  undefined7 uStack_197;
  undefined4 uStack_190;
  uint uStack_18c;
  initializer_list<UE::MovieScene::FComponentTypeID> local_188;
  FUpdateGroupsTask local_178;
  undefined1 local_160 [8];
  undefined8 local_158;
  TStatIdData *pTStack_150;
  ulonglong local_148;
  undefined8 uStack_140;
  TFilteredEntityTask<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<UE::MovieScene::FEntityGroupID>_>
  local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
  uStack_190 = 0x6ff;
  local_1a8 = 0;
  local_178.BuiltInComponents = (FBuiltInComponentTypes *)0x0;
  local_178.bFreeGroupIDs = false;
  pTStack_1a0 = &TStatId::TStatId_NAME_None;
  local_160._2_2_ = pFVar1->Group;
  local_1b8.Value = (pFVar1->Tags).NeedsUnlink.Value;
  local_188._First = &local_1b8;
  local_188._Last = local_1b6;
  uStack_18c = uStack_18c & 0xffffff00;
  local_148 = CONCAT71(uStack_197,local_198) & 0xffffffffffffffe0;
  uStack_140._4_4_ = uStack_18c;
  uStack_140._0_4_ = 0x6ff;
  local_158 = 0;
  pTStack_150 = &TStatId::TStatId_NAME_None;
  local_198 = local_198 & 0xe0;
  local_178.System = this;
  this_00 = UE::MovieScene::
            TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<UE::MovieScene::FEntityGroupID>_>
            ::FilterAny((TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<UE::MovieScene::FEntityGroupID>_>
                         *)local_160,&local_138,&local_188);
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<UE::MovieScene::FEntityGroupID>_>
  ::RunInline_PerAllocation<UE::MovieScene::FUpdateGroupsTask>
            (this_00,(FEntityManager *)(this->_padding_ + 0x28),&local_178);
  if (local_138.Filter.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Filter.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// OnLink @ 146145ae0

void __thiscall UMovieSceneEntityGroupingSystem::OnLink(UMovieSceneEntityGroupingSystem *this)

{
  return;
}

// OnRun @ 146145fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEntityGroupingSystem::OnRun
          (UMovieSceneEntityGroupingSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  char cVar1;
  TComponentTypeID<UE::MovieScene::FEntityGroupID> TVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FBuiltInComponentTypes *pFVar8;
  TFilteredEntityTask<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<UE::MovieScene::FEntityGroupID>_>
  *this_00;
  FScriptContainerElement *this_01;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int *piVar13;
  undefined1 *puVar14;
  undefined1 auStack_2c8 [32];
  undefined1 local_2a8 [4];
  FComponentTypeID local_2a4;
  FComponentTypeID local_2a2;
  FComponentTypeID local_2a0;
  ushort local_29e;
  FComponentTypeID local_29c [2];
  longlong local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined2 local_27c;
  IMovieSceneEntityMutation local_278;
  UMovieSceneEntityGroupingSystem *local_270;
  FBuiltInComponentTypes *local_268;
  undefined8 local_258;
  TStatIdData *pTStack_250;
  byte local_248;
  undefined7 uStack_247;
  undefined4 uStack_240;
  uint uStack_23c;
  initializer_list<UE::MovieScene::FComponentTypeID> local_238;
  initializer_list<UE::MovieScene::FComponentTypeID> local_228;
  FUpdateGroupsTask local_218;
  undefined1 local_200 [8];
  undefined8 local_1f8;
  TStatIdData *pTStack_1f0;
  ulonglong local_1e8;
  undefined8 uStack_1e0;
  FEntityComponentFilter local_1d8;
  TFilteredEntityTask<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<UE::MovieScene::FEntityGroupID>_>
  local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  pFVar8 = UE::MovieScene::FBuiltInComponentTypes::Get();
  uVar12 = 0;
  local_1d8.AllMask.Bits.MaxBits = 0x180;
  local_1d8.AllMask.Bits.NumBits = 0;
  local_1d8.NoneMask.Bits.NumBits = 0;
  local_1d8.NoneMask.Bits.MaxBits = 0x180;
  local_1d8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.ComplexMasks.ArrayNum = 0;
  local_1d8.ComplexMasks.ArrayMax = 0;
  local_2a4.Value = (pFVar8->Tags).NeedsLink.Value;
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x43c,&local_1d8.ComplexMasks.AllocatorInstance,
                     &local_1d8.ComplexMasks.ArrayMax);
  local_1d8.ComplexMasks.ArrayNum = iVar6 + 1;
  local_238._First = &local_2a4;
  this_01 = local_1d8.ComplexMasks.AllocatorInstance.Data + (longlong)iVar6 * 0x3c;
  local_238._Last = &local_2a2;
  *(int *)(this_01 + 0x30) = 0;
  *(int *)(this_01 + 0x34) = 0x180;
  this_01[0x38] = (FScriptContainerElement)0x2;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)this_01,&local_238);
  local_278 = (IMovieSceneEntityMutation)&___7FAddGroupMutation_MovieScene_UE__6B_;
  local_270 = this;
  local_268 = UE::MovieScene::FBuiltInComponentTypes::Get();
  UE::MovieScene::FEntityManager::MutateAll
            ((FEntityManager *)(this->_padding_ + 0x28),&local_1d8,&local_278,Mandatory);
  pTStack_250 = &TStatId::TStatId_NAME_None;
  local_200._2_2_ = pFVar8->Group;
  local_2a0.Value = (pFVar8->Tags).NeedsLink.Value;
  local_29e = (pFVar8->Tags).NeedsUnlink.Value;
  local_228._First = &local_2a0;
  local_228._Last = local_29c;
  local_258 = 0;
  uStack_240 = 0x6ff;
  uStack_23c = uStack_23c & 0xffffff00;
  local_1e8 = CONCAT71(uStack_247,local_248) & 0xffffffffffffffe0;
  uStack_1e0._4_4_ = uStack_23c;
  uStack_1e0._0_4_ = 0x6ff;
  local_218.BuiltInComponents = (FBuiltInComponentTypes *)0x0;
  local_218.bFreeGroupIDs = true;
  local_1f8 = 0;
  pTStack_1f0 = &TStatId::TStatId_NAME_None;
  local_248 = local_248 & 0xe0;
  local_218.System = this;
  this_00 = UE::MovieScene::
            TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<UE::MovieScene::FEntityGroupID>_>
            ::FilterAny((TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<UE::MovieScene::FEntityGroupID>_>
                         *)local_200,&local_158,&local_228);
  UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<UE::MovieScene::FEntityGroupID>_>
  ::RunInline_PerAllocation<UE::MovieScene::FUpdateGroupsTask>
            (this_00,(FEntityManager *)(this->_padding_ + 0x28),&local_218);
  if (local_158.Filter.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Filter.ComplexMasks.AllocatorInstance.Data);
  }
  if (0 < *(int *)&(this->EntityIDToGroup).field_0x8) {
    do {
      uVar11 = (uint)uVar12;
      if ((-1 < (int)uVar11) && ((int)uVar11 < *(int *)&(this->EntityIDToGroup).field_0x28)) {
        if ((*(int *)&(this->EntityIDToGroup).field_0x28 <= (int)uVar11) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar3 = *(undefined1 **)&(this->EntityIDToGroup).field_0x20;
        puVar14 = &(this->EntityIDToGroup).field_0x10;
        if (puVar3 != (undefined1 *)0x0) {
          puVar14 = puVar3;
        }
        uVar7 = uVar11;
        if ((int)uVar11 < 0) {
          uVar7 = uVar11 + 0x1f;
        }
        if ((*(uint *)(puVar14 + (longlong)((int)uVar7 >> 5) * 4) >> (uVar11 & 0x1f) & 1) != 0) {
          lVar9 = this->_padding_;
          TVar2 = pFVar8->Group;
          if (((uVar12 & 0xffff0000) != 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index & 0xFFFF0000) == 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                                 ,0x153,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (((short)uVar12 == -1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Entity",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                                 ,0x1a8,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (TVar2 != (TComponentTypeID<UE::MovieScene::FEntityGroupID>)0xffff) {
            uVar7 = *(uint *)(*(longlong *)(lVar9 + 0xc0) + (uVar12 & 0xffff) * 8);
            local_27c = *(undefined2 *)(*(longlong *)(lVar9 + 0xc0) + 4 + (uVar12 & 0xffff) * 8);
            local_280 = uVar7;
            if ((short)uVar7 != -1) {
              lVar10 = *(longlong *)(lVar9 + 0x30) + (ulonglong)(uVar7 & 0xffff) * 0x38;
              if (((int)(uint)(ushort)TVar2 < *(int *)(lVar10 + 0x30)) &&
                 ((*(uint *)(lVar10 + (ulonglong)((ushort)TVar2 >> 5) * 4) >> ((ushort)TVar2 & 0x1f)
                  & 1) != 0)) {
                cVar1 = *(char *)(lVar9 + 0x2d0);
                local_280._2_2_ = (ushort)(uVar7 >> 0x10);
                uVar12 = (ulonglong)local_280._2_2_;
                lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x88) + (ulonglong)(uVar7 & 0xffff) * 8)
                ;
                lVar10 = *(longlong *)(lVar9 + 0x28);
                lVar9 = (ulonglong)*(ushort *)(lVar9 + 0xc) * 0x38 + lVar10;
                for (; lVar10 != lVar9; lVar10 = lVar10 + 0x38) {
                  if (*(TComponentTypeID<UE::MovieScene::FEntityGroupID> *)(lVar10 + 0x36) == TVar2)
                  {
                    if (cVar1 != '\0') {
                      AcquireSRWLockShared((PSRWLOCK)(lVar10 + 0x20));
                    }
                    LOCK();
                    *(int *)(lVar10 + 0x30) = *(int *)(lVar10 + 0x30) + 1;
                    UNLOCK();
                    uStack_290 = CONCAT44(uStack_290._4_4_,(uint)(cVar1 != '\0'));
                    piVar13 = (int *)(*(longlong *)(lVar10 + 0x18) + uVar12 * 0xc);
                    local_298 = lVar10;
                    goto LAB_146146331;
                  }
                }
              }
            }
          }
          piVar13 = (int *)0x0;
          uStack_290 = 0;
          local_298 = 0;
LAB_146146331:
          local_288 = 0;
          if (local_298 != 0) {
            LOCK();
            *(int *)(local_298 + 0x30) = *(int *)(local_298 + 0x30) + -1;
            UNLOCK();
            if ((int)uStack_290 == 1) {
              ReleaseSRWLockShared((PSRWLOCK)(local_298 + 0x20));
            }
          }
          if (((piVar13 == (int *)0x0) ||
              (*piVar13 !=
               *(int *)(*(longlong *)&this->EntityIDToGroup + (longlong)(int)uVar11 * 0xc))) ||
             (piVar13[1] !=
              *(int *)(*(longlong *)&this->EntityIDToGroup + (longlong)(int)uVar11 * 0xc + 4))) {
            local_2a8[0] = 0;
            `UMovieSceneEntityGroupingSystem::OnRun'::__l4::<lambda_1>::operator()(local_2a8);
          }
        }
      }
      uVar12 = (ulonglong)(uVar11 + 1);
    } while ((int)(uVar11 + 1) < *(int *)&(this->EntityIDToGroup).field_0x8);
  }
  local_278 = (IMovieSceneEntityMutation)&___7IMovieSceneEntityMutation_MovieScene_UE__6B_;
  if (local_1d8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// OnUnlink @ 146148ce0

void __thiscall UMovieSceneEntityGroupingSystem::OnUnlink(UMovieSceneEntityGroupingSystem *this)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TMap<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,0>_>
  *this_00;
  
  if ((*(int *)&(this->GroupHandlers).field_0x8 != *(int *)&(this->GroupHandlers).field_0x34) ||
     (*(int *)&(this->Groups).field_0x8 != *(int *)&(this->Groups).field_0x34)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3774488813879951037>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityGroupingSystem.cpp"
                       ,0x143,"bIsEmpty");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TSparseArray<UMovieSceneEntityGroupingSystem::FEntityGroupingHandlerInfo,FDefaultSparseArrayAllocator>
    ::DestroyElements(&this->GroupHandlers,0,*(int *)&(this->GroupHandlers).field_0x8);
    puVar1 = &(this->GroupHandlers).field_0xc;
    *(undefined4 *)&(this->GroupHandlers).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x188,8,0,(ForAnyElementType *)&this->GroupHandlers,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->GroupHandlers).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->GroupHandlers).field_0x34 = 0;
    iVar2 = *(int *)&(this->GroupHandlers).field_0x2c;
    *(undefined4 *)&(this->GroupHandlers).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->GroupHandlers).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->GroupHandlers).field_0x10,0);
    }
    this_00 = &this->Groups;
    bVar4 = 1 < *(int *)&(this->Groups).field_0x48;
    if (!bVar4) {
      TSet<TTuple<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    puVar1 = &(this->Groups).field_0xc;
    *(undefined4 *)&(this->Groups).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->Groups).field_0x34 = 0;
    *(undefined4 *)&(this->Groups).field_0x30 = 0xffffffff;
    iVar2 = *(int *)&(this->Groups).field_0x2c;
    *(undefined4 *)&(this->Groups).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->Groups).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Groups).field_0x10,0);
    }
    if (bVar4) {
      *(undefined4 *)&(this->Groups).field_0x48 = 1;
      TSet<TTuple<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,0>,FDefaultSetAllocator>
                *)this_00);
      return;
    }
  }
  return;
}

// RemoveGrouping @ 14614fcb0

void __thiscall
UMovieSceneEntityGroupingSystem::RemoveGrouping
          (UMovieSceneEntityGroupingSystem *this,FEntityGroupingPolicyKey param_1)

{
  FEntityGroupID *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArray<UE::MovieScene::FEntityGroupID,TSizedDefaultAllocator<32>_> local_38;
  
  if (param_1.Index == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPolicyKey.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityGroupingSystem.cpp"
                       ,0x172,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  TMapBase<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,0>_>
              *)&this->Groups,&local_38);
  iVar3 = local_38.ArrayNum;
  pFVar1 = (FEntityGroupID *)(local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0xc);
  FVar8.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::MovieScene::FEntityGroupID,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if ((FEntityGroupID *)FVar8.Data == pFVar1) break;
    if ((((FEntityGroupID *)FVar8.Data)->PolicyKey).Index == param_1.Index) {
      bVar4 = `UMovieSceneEntityGroupingSystem::RemoveGrouping'::__l14::<lambda_1>::operator()
                        (local_res8);
      if ((!bVar4) && (*(int *)&(this->Groups).field_0x8 != *(int *)&(this->Groups).field_0x34)) {
        uVar6 = ((FEntityGroupID *)FVar8.Data)->GroupIndex;
        uVar9 = (((FEntityGroupID *)FVar8.Data)->PolicyKey).Index - uVar6 ^ uVar6 >> 0xd;
        uVar5 = (-0x61c88647 - uVar9) - uVar6 ^ uVar9 << 8;
        uVar7 = (uVar6 - uVar9) - uVar5 ^ uVar5 >> 0xd;
        uVar9 = (uVar9 - uVar7) - uVar5 ^ uVar7 >> 0xc;
        uVar6 = (uVar5 - uVar9) - uVar7 ^ uVar9 << 0x10;
        uVar5 = (uVar7 - uVar6) - uVar9 ^ uVar6 >> 5;
        uVar7 = (uVar9 - uVar5) - uVar6 ^ uVar5 >> 3;
        uVar6 = (uVar6 - uVar7) - uVar5 ^ uVar7 << 10;
        TSet<TTuple<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,0>,FDefaultSetAllocator>
        ::RemoveImpl<UE::MovieScene::FEntityGroupID>
                  ((TSet<TTuple<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,0>,FDefaultSetAllocator>
                    *)&this->Groups,(uVar5 - uVar6) - uVar7 ^ uVar6 >> 0xf,
                   (FEntityGroupID *)FVar8.Data);
      }
    }
    FVar8.Data = FVar8.Data + 0xc;
  }
  TSparseArray<UMovieSceneEntityGroupingSystem::FEntityGroupingHandlerInfo,FDefaultSparseArrayAllocator>
  ::RemoveAt(&this->GroupHandlers,param_1.Index,1);
  if ((FEntityGroupID *)local_38.AllocatorInstance.Data != (FEntityGroupID *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUMovieSceneEntityGroupingSystem @ 1461557b0

void __cdecl
UMovieSceneEntityGroupingSystem::StaticRegisterNativesUMovieSceneEntityGroupingSystem(void)

{
  return;
}

// operator() @ 1504e40b0

bool __thiscall `UMovieSceneEntityGroupingSystem::OnRun'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3774488813879951052>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3774488813879951052>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e4900

bool __thiscall
`UMovieSceneEntityGroupingSystem::RemoveGrouping'::__l14::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3774488813879950983>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3774488813879950983>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

