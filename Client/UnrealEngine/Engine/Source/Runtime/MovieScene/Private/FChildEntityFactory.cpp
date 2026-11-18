// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 7

// ~FChildEntityFactory @ 146097680

void __thiscall UE::MovieScene::FChildEntityFactory::~FChildEntityFactory(FChildEntityFactory *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FChildEntityFactory_MovieScene_UE__6B_;
  pFVar1 = (this->ParentEntityOffsets).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// Apply @ 1460aad40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FChildEntityFactory::Apply
          (FChildEntityFactory *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityAllocationProxy *param_2)

{
  atomic<int> *paVar1;
  FScriptContainerElement *pFVar2;
  atomic<int> aVar3;
  ushort uVar4;
  FMovieSceneEntityID *pFVar5;
  code *pcVar6;
  FEntityAllocationWriteContext FVar7;
  uint uVar8;
  TBitArray<TFixedAllocator<12>_> *pTVar9;
  TTypeCompatibleBytes<unsigned_int> *pTVar10;
  FEntityAllocation *pFVar11;
  FBuiltInComponentTypes *this_00;
  FBuiltInComponentTypes *pFVar12;
  uint uVar13;
  FComponentHeader *pFVar15;
  uint uVar16;
  FEntityManager *this_01;
  EComponentHeaderLockMode EVar17;
  longlong lVar18;
  FComponentHeader *pFVar19;
  ulonglong uVar20;
  int iVar21;
  bool bVar22;
  undefined1 auStackY_1b8 [32];
  int local_178;
  uint local_174;
  FEntityRange local_170;
  FComponentHeader *local_160;
  ulonglong local_158;
  undefined8 local_150;
  uchar *local_148;
  int local_140;
  FEntityAllocation *local_138;
  FEntityAllocationWriteContext local_130;
  int local_128;
  UMovieSceneEntitySystemLinker *local_120;
  FEntityDataLocation local_118;
  FScriptContainerElement *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  TArrayView<int_const_,int> local_e8;
  FComponentMask local_d8;
  FMutualComponentInitializers local_a0;
  TBitArray<TFixedAllocator<12>_> local_80;
  ulonglong local_48;
  ulonglong uVar14;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_120 = param_1;
  pTVar9 = &FEntityAllocationProxy::GetAllocationType(param_2)->Bits;
  uVar20 = 0;
  local_80.NumBits = 0;
  local_80.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(&local_80,pTVar9);
  local_d8.Bits.NumBits = 0;
  local_d8.Bits.MaxBits = 0x180;
  local_a0.Initializers.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0;
  local_a0.Initializers.ArrayNum = 0;
  local_a0.Initializers.ArrayMax = 2;
  (**(code **)(this->_padding_ + 8))(this,&local_d8);
  FEntityFactories::ComputeChildComponents
            (&((param_1->EntityManager).ComponentRegistry)->Factories,(FComponentMask *)&local_80,
             &local_d8);
  FMutualInclusivityGraph::ComputeMutuallyInclusiveComponents
            (&(((param_1->EntityManager).ComponentRegistry)->Factories).MutualInclusivityGraph,All,
             &local_d8,&local_d8,&local_a0);
  if (local_d8.Bits.NumBits + 0x1fU >> 5 != 0) {
    pTVar10 = (TTypeCompatibleBytes<unsigned_int> *)&local_d8;
    uVar14 = uVar20;
    do {
      if (*(int *)pTVar10->Pad != 0) {
        pTVar10 = local_d8.Bits.AllocatorInstance.InlineData + uVar14;
        local_128 = 0;
        bVar22 = *(int *)pTVar10->Pad != 0;
        if (bVar22) {
          for (; (*(uint *)pTVar10->Pad >> local_128 & 1) == 0; local_128 = local_128 + 1) {
          }
        }
        iVar21 = 0x20;
        if (bVar22) {
          iVar21 = local_128;
        }
        iVar21 = iVar21 + (int)uVar14 * 0x20;
        if ((iVar21 < local_d8.Bits.NumBits) && (iVar21 != -1)) {
          iVar21 = (this->ParentEntityOffsets).ArrayNum;
          local_174 = 0;
          local_140 = iVar21;
          pFVar11 = FEntityAllocationProxy::GetAllocation(param_2);
          this_01 = &param_1->EntityManager;
          local_138 = pFVar11;
          FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_130,this_01);
          if (0 < iVar21) {
            do {
              uVar13 = (uint)uVar20;
              local_178 = iVar21 - uVar13;
              FEntityManager::AllocateContiguousEntities(this_01,&local_118,&local_d8,&local_178);
              iVar21 = local_178;
              local_170.Allocation = local_118.Allocation;
              local_170.ComponentStartOffset = local_118.ComponentOffset;
              local_170.Num = local_178;
              pFVar2 = (this->ParentEntityOffsets).AllocatorInstance.Data +
                       (longlong)(int)uVar13 * 4;
              if ((local_178 < 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar22)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              FVar7.SystemSerial = local_130.SystemSerial;
              iStack_100 = iVar21;
              (this->CurrentEntityOffsets).DataPtr = (int *)pFVar2;
              (this->CurrentEntityOffsets).ArrayNum = iVar21;
              *(undefined4 *)&(this->CurrentEntityOffsets).field_0xc = uStack_fc;
              local_108 = pFVar2;
              if (GMovieSceneBuiltInComponentTypes.Ptr == (FBuiltInComponentTypes *)0x0) {
                if ((GMovieSceneBuiltInComponentTypesDestroyed != false) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("!GMovieSceneBuiltInComponentTypesDestroyed",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\BuiltInComponentTypes.cpp"
                                        ,0x29f,L""), bVar22)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                this_00 = ::operator_new(0x1e8);
                pFVar12 = (FBuiltInComponentTypes *)0x0;
                if (this_00 != (FBuiltInComponentTypes *)0x0) {
                  pFVar12 = FBuiltInComponentTypes::FBuiltInComponentTypes(this_00);
                }
                TUniquePtr<UE::MovieScene::FBuiltInComponentTypes,TDefaultDelete<UE::MovieScene::FBuiltInComponentTypes>_>
                ::Reset(&GMovieSceneBuiltInComponentTypes,pFVar12);
              }
              pFVar19 = (local_170.Allocation)->ComponentHeaders;
              pFVar15 = pFVar19 + (local_170.Allocation)->NumComponents;
              if (pFVar19 != pFVar15) {
LAB_1460aafa1:
                if ((TComponentTypeID<UE::MovieScene::FMovieSceneEntityID>)
                    (pFVar19->ComponentType).Value !=
                    (GMovieSceneBuiltInComponentTypes.Ptr)->ParentEntity) goto code_r0x0001460aafab;
                if (pFVar19 != (FComponentHeader *)0x0) {
                  EVar17 = (local_170.Allocation)->LockMode;
                  local_160 = (FComponentHeader *)0x0;
                  local_158 = 0;
                  local_150 = CONCAT44(local_150._4_4_,1);
                  if (EVar17 == Mutex) {
                    AcquireSRWLockExclusive((PSRWLOCK)&pFVar19->ReadWriteLock);
                  }
                  LOCK();
                  paVar1 = &pFVar19->ScheduledAccessCount;
                  aVar3 = *paVar1;
                  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
                  UNLOCK();
                  if ((aVar3 != (atomic<int>)0x0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("PreviousAccessCount == 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                          ,0x487,
                                          L"Component header is still in use when it is being opened for write!"
                                         ), bVar22)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  local_148 = pFVar19->Components;
                  local_158 = FVar7.SystemSerial;
                  local_150 = CONCAT44(local_150._4_4_,EVar17);
                  local_160 = pFVar19;
                  if (local_148 != (uchar *)0x0) {
                    pFVar5 = pFVar11->EntityIDs;
                    uVar16 = 0;
                    uVar4 = pFVar11->Size;
                    pFVar11 = local_138;
                    uVar13 = local_174;
                    if (0 < local_170.Num) {
                      lVar18 = 0;
                      do {
                        uVar13 = 0;
                        if ((int)uVar16 < (this->CurrentEntityOffsets).ArrayNum) {
                          uVar13 = ~uVar16 >> 0x1f;
                        }
                        if ((uVar13 == 0) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                ,0x14f,
                                                L"Array index out of bounds: %lld from an array of size %lld"
                                               ), bVar22)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        iVar21 = local_170.ComponentStartOffset + uVar16;
                        uVar13 = *(uint *)(lVar18 + (longlong)(this->CurrentEntityOffsets).DataPtr);
                        uVar8 = 0;
                        if ((int)uVar13 < (int)(uint)uVar4) {
                          uVar8 = ~uVar13 >> 0x1f;
                        }
                        if ((uVar8 == 0) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                ,0x14f,
                                                L"Array index out of bounds: %lld from an array of size %lld"
                                               ), bVar22)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        uVar16 = uVar16 + 1;
                        lVar18 = lVar18 + 4;
                        *(ushort *)(local_148 + (longlong)iVar21 * 2) = pFVar5[(int)uVar13].Value;
                      } while ((int)uVar16 < local_170.Num);
                      pFVar11 = local_138;
                      EVar17 = (EComponentHeaderLockMode)local_150;
                      uVar13 = local_174;
                    }
                  }
                  if (local_160 != (FComponentHeader *)0x0) {
                    uVar20 = local_158;
                    if (local_158 < local_160->SerialNumber) {
                      uVar20 = local_160->SerialNumber;
                    }
                    local_160->SerialNumber = uVar20;
                    LOCK();
                    local_160->ScheduledAccessCount =
                         (atomic<int>)((int)local_160->ScheduledAccessCount + -1);
                    UNLOCK();
                    if (EVar17 == Mutex) {
                      ReleaseSRWLockExclusive((PSRWLOCK)&local_160->ReadWriteLock);
                    }
                  }
                  goto LAB_1460aafcf;
                }
              }
LAB_1460aafb4:
              local_150 = 1;
              local_160 = (FComponentHeader *)0x0;
              local_158 = 0;
              local_148 = (uchar *)0x0;
LAB_1460aafcf:
              param_1 = local_120;
              local_f8 = *(undefined4 *)&(this->CurrentEntityOffsets).DataPtr;
              uStack_f4 = *(undefined4 *)((longlong)&(this->CurrentEntityOffsets).DataPtr + 4);
              iStack_f0 = (this->CurrentEntityOffsets).ArrayNum;
              uStack_ec = *(undefined4 *)&(this->CurrentEntityOffsets).field_0xc;
              (**(code **)(this->_padding_ + 0x18))(this,local_120,&local_80,&local_d8);
              FMutualComponentInitializers::Execute(&local_a0,&local_170,&local_130);
              local_e8.DataPtr = (this->CurrentEntityOffsets).DataPtr;
              local_e8.ArrayNum = (this->CurrentEntityOffsets).ArrayNum;
              local_e8._12_4_ = *(undefined4 *)&(this->CurrentEntityOffsets).field_0xc;
              this_01 = &param_1->EntityManager;
              FEntityManager::InitializeChildAllocation
                        (this_01,(FComponentMask *)&local_80,&local_d8,pFVar11,&local_e8,&local_170)
              ;
              local_174 = uVar13 + local_178;
              uVar20 = (ulonglong)local_174;
              iVar21 = local_140;
            } while ((int)local_174 < local_140);
          }
          (**(code **)(this->_padding_ + 0x10))(this,param_1);
        }
        break;
      }
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      pTVar10 = pTVar10 + 1;
    } while ((int)uVar13 < (int)(local_d8.Bits.NumBits + 0x1fU >> 5));
  }
  if (local_a0.Initializers.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
    FMemory::Free((void *)local_a0.Initializers.AllocatorInstance.SecondaryData);
  }
  return;
code_r0x0001460aafab:
  pFVar19 = pFVar19 + 1;
  if (pFVar19 == pFVar15) goto LAB_1460aafb4;
  goto LAB_1460aafa1;
}

// GenerateDerivedType @ 1460c7ad0

void __thiscall
UE::MovieScene::FChildEntityFactory::GenerateDerivedType
          (FChildEntityFactory *this,FComponentMask *param_1)

{
  return;
}

// GetCurrentIndex @ 1460c9680

int __thiscall UE::MovieScene::FChildEntityFactory::GetCurrentIndex(FChildEntityFactory *this)

{
  int *piVar1;
  
  piVar1 = (this->CurrentEntityOffsets).DataPtr;
  if (piVar1 != (int *)0x0) {
    return (int)((longlong)piVar1 - (longlong)(this->ParentEntityOffsets).AllocatorInstance.Data >>
                2);
  }
  return -1;
}

// InitializeAllocation @ 1460d2150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FChildEntityFactory::InitializeAllocation
          (FChildEntityFactory *this,UMovieSceneEntitySystemLinker *param_1,FComponentMask *param_2,
          FComponentMask *param_3,FEntityAllocation *param_4,TArrayView<int_const_,int> *param_5,
          FEntityRange *param_6)

{
  return;
}

// Num @ 1460da5b0

int __thiscall UE::MovieScene::FChildEntityFactory::Num(FChildEntityFactory *this)

{
  return (this->ParentEntityOffsets).ArrayNum;
}

// PostInitialize @ 1460e0b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FChildEntityFactory::PostInitialize
          (FChildEntityFactory *this,UMovieSceneEntitySystemLinker *param_1)

{
  return;
}

