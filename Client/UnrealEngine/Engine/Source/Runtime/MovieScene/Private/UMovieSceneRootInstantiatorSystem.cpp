// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// StaticClass @ 1461013f0

UClass * __cdecl UMovieSceneRootInstantiatorSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneRootInstantiatorSystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneRootInstantiatorSystem",
               &Z_Registration_Info_UClass_UMovieSceneRootInstantiatorSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneRootInstantiatorSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneRootInstantiatorSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneRootInstantiatorSystem>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneRootInstantiatorSystem.InnerSingleton;
}

// UMovieSceneRootInstantiatorSystem @ 14611bb60

UMovieSceneRootInstantiatorSystem * __thiscall
UMovieSceneRootInstantiatorSystem::UMovieSceneRootInstantiatorSystem
          (UMovieSceneRootInstantiatorSystem *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(TStatIdData **)&this->field_0x40 = &TStatId::TStatId_NAME_None;
  *(undefined ***)this = &___7UMovieSceneRootInstantiatorSystem__6B_;
  *(undefined2 *)&this->field_0x30 = 0xffff;
  return this;
}

// UMovieSceneRootInstantiatorSystem @ 14611bba0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneRootInstantiatorSystem * __thiscall
UMovieSceneRootInstantiatorSystem::UMovieSceneRootInstantiatorSystem
          (UMovieSceneRootInstantiatorSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FBuiltInComponentTypes *pFVar2;
  UObject *local_res8;
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->field_0x32 = 4;
  *(undefined ***)this = &___7UMovieSceneRootInstantiatorSystem__6B_;
  pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
  *(ushort *)&this->field_0x30 = (pFVar2->Tags).Root.Value;
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_res8 = *(UObject **)&this->field_0x10;
    FVar1.Value = (pFVar2->Tags).Root.Value;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentProducer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
  }
  return this;
}

// ~UMovieSceneRootInstantiatorSystem @ 14611e960

void __thiscall
UMovieSceneRootInstantiatorSystem::~UMovieSceneRootInstantiatorSystem
          (UMovieSceneRootInstantiatorSystem *this)

{
  *(undefined ***)this = &___7UMovieSceneEntitySystem__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14613c740

UClass * __cdecl UMovieSceneRootInstantiatorSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneRootInstantiatorSystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneRootInstantiatorSystem",
               &Z_Registration_Info_UClass_UMovieSceneRootInstantiatorSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneRootInstantiatorSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneRootInstantiatorSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneRootInstantiatorSystem>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneRootInstantiatorSystem.InnerSingleton;
}

// InstantiateAllocation @ 14613fd30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneRootInstantiatorSystem::InstantiateAllocation
          (UMovieSceneRootInstantiatorSystem *this,FEntityAllocation *param_1)

{
  TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
  *this_00;
  FScriptContainerElement *pFVar1;
  ushort uVar2;
  FMovieSceneEntityID FVar3;
  FMovieSceneEntityID FVar4;
  longlong lVar5;
  code *pcVar6;
  FEntityAllocation *pFVar7;
  bool bVar8;
  TTypeCompatibleBytes<unsigned_int> *pTVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  FMovieSceneEntityID *pFVar13;
  FComponentHeader *pFVar14;
  longlong lVar15;
  uint uVar16;
  FComponentHeader *pFVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  undefined1 auStackY_228 [32];
  FMovieSceneEntityID local_1f8 [4];
  ushort local_1f0 [4];
  int local_1e8 [2];
  ushort local_1e0;
  FMovieSceneEntityID local_1d8 [2];
  uint local_1d4;
  ForAnyElementType local_1d0;
  undefined8 local_1c8;
  uint local_1c0;
  uint local_1bc;
  uint local_1b8;
  longlong local_1b0;
  FEntityRange local_1a8;
  FMovieSceneEntityID *local_198;
  int local_190;
  undefined1 local_18c [20];
  FMovieSceneEntityID *local_178;
  FMovieSceneEntityID *local_170;
  FBuiltInComponentTypes *local_168;
  FEntityDataLocation local_160;
  FScriptContainerElement *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  <lambda_1> local_138;
  ushort *local_128;
  FMovieSceneEntityID *local_120;
  TArrayView<int_const_,int> local_118;
  FMutualComponentInitializers local_108;
  FComponentMask local_e8;
  TBitArray<TFixedAllocator<12>_> local_b0;
  TBitArray<TFixedAllocator<12>_> local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_18c._12_8_ = param_1;
  local_168 = UE::MovieScene::FBuiltInComponentTypes::Get();
  uVar21 = 0;
  local_78.NumBits = 0;
  local_78.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&local_78,
             (TBitArray<TFixedAllocator<12>_> *)
             (*(longlong *)(*(longlong *)&this->field_0x28 + 0x288) + 0x1c0));
  pFVar17 = param_1->ComponentHeaders;
  local_108.Initializers.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0;
  pFVar14 = pFVar17 + param_1->NumComponents;
  local_108.Initializers.ArrayNum = 0;
  local_108.Initializers.ArrayMax = 2;
  local_e8.Bits.NumBits = 0;
  local_e8.Bits.MaxBits = 0x180;
  local_b0.NumBits = 0;
  local_b0.MaxBits = 0x180;
  uVar10 = uVar21;
  if (pFVar17 != pFVar14) {
    while( true ) {
      uVar2 = (pFVar17->ComponentType).Value;
      iVar18 = ((uint)uVar2 - (uint)uVar10) + 1;
      uVar11 = (uint)uVar10;
      if (0 < iVar18) {
        TBitArray<TFixedAllocator<12>_>::Add(&local_b0,false,iVar18);
        uVar11 = local_b0.NumBits;
      }
      if (((int)uVar11 <= (int)(uint)uVar2) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar9 = local_b0.AllocatorInstance.InlineData + (uVar2 >> 5);
      pFVar17 = pFVar17 + 1;
      *(uint *)pTVar9->Pad = *(uint *)pTVar9->Pad | 1 << ((byte)uVar2 & 0x1f);
      if (pFVar17 == pFVar14) break;
      uVar10 = (ulonglong)(uint)local_b0.NumBits;
    }
  }
  UE::MovieScene::FEntityFactories::ComputeChildComponents
            (*(FEntityFactories **)(*(longlong *)&this->field_0x28 + 0x288),
             (FComponentMask *)&local_b0,&local_e8);
  UE::MovieScene::FEntityFactories::ComputeMutuallyInclusiveComponents
            (*(FEntityFactories **)(*(longlong *)&this->field_0x28 + 0x288),All,&local_e8,&local_108
            );
  if (local_e8.Bits.NumBits + 0x1fU >> 5 != 0) {
    pTVar9 = (TTypeCompatibleBytes<unsigned_int> *)&local_e8;
    uVar10 = uVar21;
    do {
      if (*(int *)pTVar9->Pad != 0) {
        pTVar9 = local_e8.Bits.AllocatorInstance.InlineData + uVar10;
        local_190 = 0;
        bVar8 = *(int *)pTVar9->Pad != 0;
        if (bVar8) {
          for (; (*(uint *)pTVar9->Pad >> local_190 & 1) == 0; local_190 = local_190 + 1) {
          }
        }
        iVar18 = 0x20;
        if (bVar8) {
          iVar18 = local_190;
        }
        iVar18 = iVar18 + (int)uVar10 * 0x20;
        if ((iVar18 < local_e8.Bits.NumBits) && (iVar18 != -1)) {
          uVar2 = param_1->Size;
          uVar11 = (uint)uVar2;
          local_1b8 = (uint)uVar2;
          local_1d0.Data = (FScriptContainerElement *)0x0;
          local_1c8 = 0;
          if (local_1b8 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,(uint)uVar2,&local_1d0,0,(int *)((longlong)&local_1c8 + 4));
            uVar10 = uVar21;
            do {
              iVar18 = (int)local_1c8;
              if ((int)local_1c8 == local_1c8._4_4_) {
                iVar18 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_1d0,(int *)((longlong)&local_1c8 + 4));
              }
              local_1c8 = CONCAT44(local_1c8._4_4_,iVar18 + 1);
              *(int *)(local_1d0.Data + (longlong)iVar18 * 4) = (int)uVar10;
              uVar12 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar12;
            } while ((int)uVar12 < (int)(uint)uVar2);
          }
          local_178 = param_1->EntityIDs;
          local_1c0 = (uint)param_1->Size;
          local_1d4 = 0;
          local_18c._4_8_ = *(undefined8 *)(*(longlong *)&this->field_0x28 + 0x2a0);
          if (uVar2 != 0) {
            do {
              iVar20 = (int)uVar21;
              local_1e8[0] = uVar11 - iVar20;
              UE::MovieScene::FEntityManager::AllocateContiguousEntities
                        ((FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28),&local_160,
                         &local_e8,local_1e8);
              pFVar7 = local_160.Allocation;
              iVar18 = local_1e8[0];
              local_1a8.Allocation = local_160.Allocation;
              local_1a8.ComponentStartOffset = local_160.ComponentOffset;
              local_1a8.Num = local_1e8[0];
              UE::MovieScene::FMutualComponentInitializers::Execute
                        (&local_108,&local_1a8,(FEntityAllocationWriteContext *)(local_18c + 4));
              lVar15 = *(longlong *)&this->field_0x28;
              pFVar1 = local_1d0.Data + (longlong)iVar20 * 4;
              if ((iVar18 < 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iStack_140 = iVar18;
              local_118._12_4_ = uStack_13c;
              local_118.ArrayNum = iVar18;
              local_148 = pFVar1;
              local_118.DataPtr = (int *)pFVar1;
              UE::MovieScene::FEntityManager::InitializeChildAllocation
                        ((FEntityManager *)(lVar15 + 0x28),(FComponentMask *)&local_b0,&local_e8,
                         (FEntityAllocation *)local_18c._12_8_,&local_118,&local_1a8);
              local_170 = pFVar7->EntityIDs;
              iVar19 = local_1a8.Num + -1;
              lVar15 = (longlong)iVar19;
              local_1bc = (uint)pFVar7->Size;
              local_1b0 = lVar15;
              if (-1 < iVar19) {
                uVar11 = local_1d4 + iVar19;
                pFVar13 = local_178 + lVar15 + iVar20;
                do {
                  uVar12 = 0;
                  if ((int)uVar11 < (int)local_1c0) {
                    uVar12 = ~uVar11 >> 0x1f;
                  }
                  local_1b0 = lVar15;
                  local_198 = pFVar13;
                  if ((uVar12 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0x14f,
                                         L"Array index out of bounds: %lld from an array of size %lld"
                                        ), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  uVar16 = local_1a8.ComponentStartOffset + iVar19;
                  FVar3.Value = pFVar13->Value;
                  uVar12 = 0;
                  if ((int)uVar16 < (int)local_1bc) {
                    uVar12 = ~uVar16 >> 0x1f;
                  }
                  if ((uVar12 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0x14f,
                                         L"Array index out of bounds: %lld from an array of size %lld"
                                        ), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  lVar5 = *(longlong *)&this->field_0x28;
                  FVar4.Value = local_170[(int)uVar16].Value;
                  local_1e0 = FVar3.Value;
                  if (*(int *)(lVar5 + 0x140) != 0) {
                    lVar15 = lVar5 + 0x130;
                    if (*(longlong *)(lVar5 + 0x138) != 0) {
                      lVar15 = *(longlong *)(lVar5 + 0x138);
                    }
                    iVar18 = *(int *)(lVar15 + ((longlong)*(int *)(lVar5 + 0x140) - 1U &
                                               (ulonglong)FVar3.Value) * 4);
                    iVar20 = iVar18;
                    if (iVar18 != -1) {
                      do {
                        iVar18 = *(int *)(*(longlong *)(lVar5 + 0xf8) + 4 + (longlong)iVar20 * 0xc);
                        if (*(ushort *)(*(longlong *)(lVar5 + 0xf8) + (longlong)iVar20 * 0xc) ==
                            FVar3.Value) break;
                        iVar20 = iVar18;
                      } while (iVar18 != -1);
                    }
                    lVar15 = local_1b0;
                    if (iVar20 != -1) {
                      while (UE::MovieScene::FEntityManager::CombineComponents
                                       ((FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28),
                                        FVar4,(FMovieSceneEntityID)
                                              *(ushort *)
                                               (*(longlong *)(lVar5 + 0xf8) + 2 +
                                               (longlong)iVar20 * 0xc),(FComponentMask *)&local_78),
                            lVar15 = local_1b0, iVar18 != -1) {
                        iVar20 = iVar18;
                        while (iVar18 = *(int *)(*(longlong *)(lVar5 + 0xf8) + 4 +
                                                (longlong)iVar20 * 0xc),
                              *(ushort *)(*(longlong *)(lVar5 + 0xf8) + (longlong)iVar20 * 0xc) !=
                              local_1e0) {
                          iVar20 = iVar18;
                          if (iVar18 == -1) goto LAB_146140247;
                        }
                      }
                    }
                  }
LAB_146140247:
                  local_138.__this = (FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28);
                  local_138.ComponentTypeID.Value = (local_168->Tags).NeedsUnlink.Value;
                  UE::MovieScene::FEntityManager::
                  IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::AddComponent_::__l8::<lambda_1>_>
                            (local_138.__this,FVar3,&local_138);
                  this_00 = (TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
                             *)(*(longlong *)&this->field_0x28 + 0xf8);
                  lVar5 = *(longlong *)(*(longlong *)&this->field_0x28 + 0xc0) +
                          (ulonglong)FVar4.Value * 8;
                  uVar2 = *(ushort *)(lVar5 + 4);
                  local_1f8[0].Value = FVar4.Value;
                  local_1f0[0] = FVar3.Value;
                  if (uVar2 != 0xffff) {
                    local_1d8[0].Value = uVar2;
                    TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
                    ::Remove((TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
                              *)this_00,local_1d8,local_1f8);
                  }
                  local_128 = local_1f0;
                  local_120 = local_1f8;
                  TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
                  ::
                  Emplace<TPairInitializer<UE::MovieScene::FMovieSceneEntityID_const_&,UE::MovieScene::FMovieSceneEntityID_const_&>_>
                            (this_00,(TPairInitializer<UE::MovieScene::FMovieSceneEntityID_const_&,UE::MovieScene::FMovieSceneEntityID_const_&>
                                      *)local_18c,(bool *)&local_128);
                  lVar15 = lVar15 + -1;
                  pFVar13 = local_198 + -1;
                  iVar19 = iVar19 + -1;
                  *(ushort *)(lVar5 + 4) = local_1f0[0];
                  uVar11 = uVar11 - 1;
                  iVar18 = local_1e8[0];
                  local_1b0 = lVar15;
                  local_198 = pFVar13;
                } while (-1 < lVar15);
              }
              local_1d4 = local_1d4 + iVar18;
              uVar21 = (ulonglong)local_1d4;
              uVar11 = local_1b8;
            } while ((int)local_1d4 < (int)local_1b8);
          }
          if (local_1d0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d0.Data);
          }
        }
        break;
      }
      uVar11 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar11;
      pTVar9 = pTVar9 + 1;
    } while ((int)uVar11 < (int)(local_e8.Bits.NumBits + 0x1fU >> 5));
  }
  if (local_108.Initializers.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
    FMemory::Free((void *)local_108.Initializers.AllocatorInstance.SecondaryData);
  }
  return;
}

// OnRun @ 146147b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneRootInstantiatorSystem::OnRun
          (UMovieSceneRootInstantiatorSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FBuiltInComponentTypes *pFVar6;
  FEntityAllocationProxy *pFVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  FScriptContainerElement *local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  ForAnyElementType local_128;
  undefined8 local_120;
  undefined1 local_118 [4];
  FComponentTypeID local_114;
  ushort local_112;
  undefined8 local_110;
  FEntityAllocationIterator local_108;
  initializer_list<UE::MovieScene::FComponentTypeID> local_e8;
  FEntityAllocationIterator local_d8;
  FEntityAllocationProxy local_c0;
  FEntityComponentFilter local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  pFVar6 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_a8.AllMask.Bits.MaxBits = 0x180;
  local_a8.AllMask.Bits.NumBits = 0;
  local_a8.NoneMask.Bits.NumBits = 0;
  local_a8.NoneMask.Bits.MaxBits = 0x180;
  local_a8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ComplexMasks.ArrayNum = 0;
  local_a8.ComplexMasks.ArrayMax = 0;
  local_114.Value = (pFVar6->Tags).Root.Value;
  local_112 = (pFVar6->Tags).NeedsLink.Value;
  local_e8._First = &local_114;
  local_e8._Last = (FComponentTypeID *)&local_110;
  UE::MovieScene::FComponentMask::SetAll(&local_a8.AllMask,&local_e8);
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120 = 0;
  lVar2 = *(longlong *)&this->field_0x28;
  UE::MovieScene::FEntityAllocationIterator::FEntityAllocationIterator
            (&local_108,(FEntityManager *)(lVar2 + 0x28),&local_a8);
  UE::MovieScene::FEntityAllocationIterator::FEntityAllocationIterator
            (&local_d8,(FEntityManager *)(lVar2 + 0x28));
  bVar4 = UE::MovieScene::FEntityAllocationIterator::operator!=(&local_108,&local_d8);
  if (bVar4) {
    do {
      pFVar7 = UE::MovieScene::FEntityAllocationIterator::operator*(&local_108,&local_c0);
      local_110 = *(undefined8 *)
                   (*(longlong *)&pFVar7->Manager->EntityAllocations +
                   (longlong)pFVar7->AllocationIndex * 8);
      if (local_128.Data <= (FScriptContainerElement *)&local_110) {
        if ((FScriptContainerElement *)&local_110 < local_128.Data + (longlong)local_120._4_4_ * 8)
        {
          local_140 = (longlong)(int)local_120;
          local_138 = 8;
          local_158 = &local_110;
          local_150 = local_128.Data;
          local_148 = (longlong)local_120._4_4_;
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
      }
      iVar5 = (int)local_120;
      if ((int)local_120 == local_120._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_128,(int *)((longlong)&local_120 + 4));
      }
      local_120 = CONCAT44(local_120._4_4_,iVar5 + 1);
      *(undefined8 *)(local_128.Data + (longlong)iVar5 * 8) = local_110;
      UE::MovieScene::FEntityAllocationIterator::operator++(&local_108);
      bVar4 = UE::MovieScene::FEntityAllocationIterator::operator!=(&local_108,&local_d8);
    } while (bVar4);
  }
  UE::MovieScene::FEntityAllocationIterator::~FEntityAllocationIterator(&local_d8);
  UE::MovieScene::FEntityAllocationIterator::~FEntityAllocationIterator(&local_108);
  iVar5 = (int)local_120;
  uVar8 = (ulonglong)(int)local_120;
  pFVar1 = local_128.Data + uVar8 * 8;
  FVar9.Data = local_128.Data;
  while( true ) {
    if ((int)uVar8 != iVar5) {
      `TCheckedPointerIterator<UE::MovieScene::FEntityAllocation_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_118);
    }
    if (FVar9.Data == pFVar1) break;
    InstantiateAllocation(this,*(FEntityAllocation **)FVar9.Data);
    uVar8 = local_120 & 0xffffffff;
    FVar9.Data = FVar9.Data + 8;
  }
  if (local_128.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data);
  }
  if (local_a8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUMovieSceneRootInstantiatorSystem @ 146155840

void __cdecl
UMovieSceneRootInstantiatorSystem::StaticRegisterNativesUMovieSceneRootInstantiatorSystem(void)

{
  return;
}

