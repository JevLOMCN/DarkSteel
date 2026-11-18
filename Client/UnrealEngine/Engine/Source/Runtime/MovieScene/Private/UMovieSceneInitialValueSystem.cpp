// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 11

// StaticClass @ 146101a30

UClass * __cdecl UMovieSceneInitialValueSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneInitialValueSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneInitialValueSystem",
               &Z_Registration_Info_UClass_UMovieSceneInitialValueSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneInitialValueSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneInitialValueSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneInitialValueSystem>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneInitialValueSystem.InnerSingleton;
}

// UMovieSceneInitialValueSystem @ 14611b9a0

UMovieSceneInitialValueSystem * __thiscall
UMovieSceneInitialValueSystem::UMovieSceneInitialValueSystem
          (UMovieSceneInitialValueSystem *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(TStatIdData **)&this->field_0x40 = &TStatId::TStatId_NAME_None;
  *(undefined ***)this = &___7UMovieSceneInitialValueSystem__6B_;
  *(undefined2 *)&this->field_0x30 = 0xffff;
  return this;
}

// UMovieSceneInitialValueSystem @ 14611b9e0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneInitialValueSystem * __thiscall
UMovieSceneInitialValueSystem::UMovieSceneInitialValueSystem
          (UMovieSceneInitialValueSystem *this,FObjectInitializer *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->field_0x32 = 4;
  *(undefined ***)this = &___7UMovieSceneInitialValueSystem__6B_;
  *(undefined4 *)&this->field_0x38 = 2;
  return this;
}

// ~UMovieSceneInitialValueSystem @ 14611e8f0

void __thiscall
UMovieSceneInitialValueSystem::~UMovieSceneInitialValueSystem(UMovieSceneInitialValueSystem *this)

{
  *(undefined ***)this = &___7UMovieSceneEntitySystem__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14613c500

UClass * __cdecl UMovieSceneInitialValueSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneInitialValueSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneInitialValueSystem",
               &Z_Registration_Info_UClass_UMovieSceneInitialValueSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneInitialValueSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneInitialValueSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneInitialValueSystem>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneInitialValueSystem.InnerSingleton;
}

// IsRelevantImpl @ 146141520

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneInitialValueSystem::IsRelevantImpl
          (UMovieSceneInitialValueSystem *this,UMovieSceneEntitySystemLinker *param_1)

{
  ushort uVar1;
  FComponentMask *pFVar2;
  ForAnyElementType FVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res18 [8];
  
  iVar5 = UE::MovieScene::GInitialValueProcessors.ArrayNum;
  pFVar4 = UE::MovieScene::GInitialValueProcessors.AllocatorInstance.Data + (longlong)iVar5 * 0x98;
  FVar3.Data = UE::MovieScene::GInitialValueProcessors.AllocatorInstance.Data;
  while( true ) {
    if (UE::MovieScene::GInitialValueProcessors.ArrayNum != iVar5) {
      `TCheckedPointerIterator<UE::MovieScene::FInitialValueProcessorEntry,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res18);
    }
    if (FVar3.Data == pFVar4) break;
    uVar1 = *(ushort *)FVar3.Data;
    pFVar2 = UE::MovieScene::FEntityManager::GetAccumulatedMask(&param_1->EntityManager);
    if (((uVar1 != 0xffff) && ((int)(uint)uVar1 < (pFVar2->Bits).NumBits)) &&
       ((*(uint *)(pFVar2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
        != 0)) {
      return true;
    }
    FVar3.Data = FVar3.Data + 0x98;
  }
  return false;
}

// OnLink @ 146145af0

void __thiscall UMovieSceneInitialValueSystem::OnLink(UMovieSceneInitialValueSystem *this)

{
  return;
}

// OnRun @ 146146e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneInitialValueSystem::OnRun
          (UMovieSceneInitialValueSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  TEntitySystemLinkerExtensionID<UE::MovieScene::IInterrogationExtension> TVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  FBuiltInComponentTypes *pFVar13;
  undefined8 *puVar14;
  int iVar15;
  ForAnyElementType FVar16;
  longlong lVar17;
  TBitArray<TFixedAllocator<12>_> *pTVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined1 *puVar21;
  undefined1 auStackY_418 [32];
  FComponentTypeID local_3e8;
  FComponentTypeID local_3e6;
  FComponentTypeID local_3e4;
  FComponentTypeID local_3e2;
  FComponentTypeID local_3e0;
  FComponentTypeID local_3de;
  <lambda_1> local_3dc [4];
  ushort local_3d8;
  FComponentTypeID local_3d4;
  ushort local_3d2;
  FComponentTypeID local_3d0;
  ushort local_3ce;
  FComponentTypeID local_3cc;
  ushort local_3ca;
  undefined8 local_3c8;
  uint uStack_3c0;
  undefined4 uStack_3bc;
  FEntityAllocationIterator local_3b8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_398;
  initializer_list<UE::MovieScene::FComponentTypeID> local_388;
  initializer_list<UE::MovieScene::FComponentTypeID> local_378;
  initializer_list<UE::MovieScene::FComponentTypeID> local_368;
  FEntityAllocationProxy local_358;
  initializer_list<UE::MovieScene::FComponentTypeID> local_348;
  initializer_list<UE::MovieScene::FComponentTypeID> local_338;
  undefined4 local_328;
  undefined4 uStack_324;
  uint uStack_320;
  undefined4 uStack_31c;
  FEntityAllocationIterator local_318;
  FInitialValueMutation local_2f8;
  TBitArray<TFixedAllocator<12>_> local_258;
  FEntityComponentFilter local_218;
  FEntityComponentFilter local_198;
  FEntityComponentFilter local_118;
  FComponentMask local_98;
  TBitArray<TFixedAllocator<12>_> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_418;
  pFVar13 = UE::MovieScene::FBuiltInComponentTypes::Get();
  UE::MovieScene::FInitialValueMutation::FInitialValueMutation
            (&local_2f8,*(UMovieSceneEntitySystemLinker **)&this->field_0x28);
  iVar12 = UE::MovieScene::FComponentMask::NumComponents(&local_2f8.AnyInitialValue);
  if (iVar12 == 0) goto LAB_146147541;
  if (local_2f8.InitialValueCache == (FInitialValueCache *)0x0) {
LAB_146147415:
    local_198.AllMask.Bits.MaxBits = 0x180;
    local_198.AllMask.Bits.NumBits = 0;
    local_198.NoneMask.Bits.NumBits = 0;
    local_198.NoneMask.Bits.MaxBits = 0x180;
    local_198.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.ComplexMasks.ArrayNum = 0;
    local_198.ComplexMasks.ArrayMax = 0;
    if (0 < local_2f8.AnyInitialValue.Bits.NumBits) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x43c,&local_198.ComplexMasks.AllocatorInstance,
                          &local_198.ComplexMasks.ArrayMax);
      local_198.ComplexMasks.ArrayNum = iVar12 + 1;
      pTVar18 = (TBitArray<TFixedAllocator<12>_> *)
                (local_198.ComplexMasks.AllocatorInstance.Data + (longlong)iVar12 * 0x3c);
      pTVar18->NumBits = 0;
      pTVar18->MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                (pTVar18,&local_2f8.AnyInitialValue.Bits);
      pTVar18[1].AllocatorInstance.InlineData[0].Pad[0] = '\x02';
    }
    local_3e0.Value = (pFVar13->Tags).NeedsLink.Value;
    local_348._First = &local_3e0;
    local_348._Last = &local_3de;
    UE::MovieScene::FComponentMask::SetAll(&local_198.AllMask,&local_348);
    local_3cc.Value = (pFVar13->Tags).HasAssignedInitialValue.Value;
    local_3ca = (pFVar13->Tags).Ignored.Value;
    local_338._First = &local_3cc;
    local_338._Last = (FComponentTypeID *)&local_3c8;
    UE::MovieScene::FComponentMask::SetAll(&local_198.NoneMask,&local_338);
    UE::MovieScene::FEntityManager::MutateAll
              ((FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28),&local_198,
               (IMovieSceneEntityMutation *)&local_2f8,Mandatory);
    FVar16.Data = local_198.ComplexMasks.AllocatorInstance.Data;
  }
  else {
    lVar1 = *(longlong *)&this->field_0x28;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ID = (TEntitySystemLinkerExtensionID<UE::MovieScene::IInterrogationExtension>)::StaticID;
      ::StaticID = ::StaticID + 1;
      _Init_thread_footer(&::_TSS0);
    }
    TVar4 = ID;
    lVar17 = (longlong)(int)ID;
    if ((-1 < (int)ID) && ((int)ID < *(int *)(lVar1 + 0x668))) {
      if ((*(int *)(lVar1 + 0x668) <= (int)ID) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar20 = *(longlong *)(lVar1 + 0x660);
      if (*(longlong *)(lVar1 + 0x660) == 0) {
        lVar20 = lVar1 + 0x650;
      }
      if (((*(uint *)(lVar20 + (longlong)((int)((int)TVar4 + ((int)TVar4 >> 0x1f & 0x1fU)) >> 5) * 4
                     ) >> ((uint)TVar4 & 0x1f) & 1) != 0) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x640) + lVar17 * 8) != 0)) goto LAB_146147415;
    }
    local_218.AllMask.Bits.MaxBits = 0x180;
    local_218.AllMask.Bits.NumBits = 0;
    local_218.NoneMask.Bits.NumBits = 0;
    local_218.NoneMask.Bits.MaxBits = 0x180;
    local_218.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.ComplexMasks.ArrayNum = 0;
    local_218.ComplexMasks.ArrayMax = 0;
    if (0 < local_2f8.AnyInitialValue.Bits.NumBits) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x43c,&local_218.ComplexMasks.AllocatorInstance,
                          &local_218.ComplexMasks.ArrayMax);
      local_218.ComplexMasks.ArrayNum = iVar12 + 1;
      pTVar18 = (TBitArray<TFixedAllocator<12>_> *)
                (local_218.ComplexMasks.AllocatorInstance.Data + (longlong)iVar12 * 0x3c);
      pTVar18->NumBits = 0;
      pTVar18->MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                (pTVar18,&local_2f8.AnyInitialValue.Bits);
      pTVar18[1].AllocatorInstance.InlineData[0].Pad[0] = '\x02';
    }
    local_3e8.Value = (pFVar13->Tags).NeedsLink.Value;
    local_398._First = &local_3e8;
    local_398._Last = &local_3e6;
    UE::MovieScene::FComponentMask::SetAll(&local_218.AllMask,&local_398);
    local_3e4.Value = *(ushort *)&pFVar13->InitialValueIndex;
    local_388._First = &local_3e4;
    local_388._Last = &local_3e2;
    UE::MovieScene::FComponentMask::SetAll(&local_218.NoneMask,&local_388);
    local_3d4.Value = (pFVar13->Tags).HasAssignedInitialValue.Value;
    local_3d2 = (pFVar13->Tags).Ignored.Value;
    local_378._First = &local_3d4;
    local_378._Last = &local_3d0;
    UE::MovieScene::FComponentMask::SetAll(&local_218.NoneMask,&local_378);
    UE::MovieScene::FEntityManager::MutateAll
              ((FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28),&local_218,
               (IMovieSceneEntityMutation *)&local_2f8,Mandatory);
    if (local_218.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.ComplexMasks.AllocatorInstance.Data);
    }
    local_118.AllMask.Bits.NumBits = 0;
    local_118.AllMask.Bits.MaxBits = 0x180;
    local_118.NoneMask.Bits.NumBits = 0;
    local_118.NoneMask.Bits.MaxBits = 0x180;
    local_118.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.ComplexMasks.ArrayNum = 0;
    local_118.ComplexMasks.ArrayMax = 0;
    if (0 < local_2f8.AnyInitialValue.Bits.NumBits) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x43c,&local_118.ComplexMasks.AllocatorInstance,
                          &local_118.ComplexMasks.ArrayMax);
      local_118.ComplexMasks.ArrayNum = iVar12 + 1;
      pTVar18 = (TBitArray<TFixedAllocator<12>_> *)
                (local_118.ComplexMasks.AllocatorInstance.Data + (longlong)iVar12 * 0x3c);
      pTVar18->NumBits = 0;
      pTVar18->MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                (pTVar18,&local_2f8.AnyInitialValue.Bits);
      pTVar18[1].AllocatorInstance.InlineData[0].Pad[0] = '\x02';
    }
    local_3d0.Value = *(ushort *)&pFVar13->InitialValueIndex;
    local_3ce = (pFVar13->Tags).NeedsUnlink.Value;
    local_368._First = &local_3d0;
    local_368._Last = &local_3cc;
    UE::MovieScene::FComponentMask::SetAll(&local_118.AllMask,&local_368);
    lVar1 = *(longlong *)&this->field_0x28;
    UE::MovieScene::FEntityAllocationIterator::FEntityAllocationIterator
              (&local_3b8,(FEntityManager *)(lVar1 + 0x28),&local_118);
    UE::MovieScene::FEntityAllocationIterator::FEntityAllocationIterator
              (&local_318,(FEntityManager *)(lVar1 + 0x28));
    bVar11 = UE::MovieScene::FEntityAllocationIterator::operator!=(&local_3b8,&local_318);
    if (bVar11) {
      uStack_3bc = uStack_31c;
      do {
        UE::MovieScene::FEntityAllocationIterator::operator*(&local_3b8,&local_358);
        lVar1 = *(longlong *)
                 (*(longlong *)&(local_358.Manager)->EntityAllocations +
                 (longlong)local_358.AllocationIndex * 8);
        local_60.NumBits = 0;
        local_60.MaxBits = 0;
        TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                  (&local_60,
                   (TBitArray<TFixedAllocator<12>_> *)
                   (*(longlong *)&(local_358.Manager)->EntityAllocationMasks +
                   (longlong)local_358.AllocationIndex * 0x38));
        local_258.NumBits = 0;
        local_258.MaxBits = 0x180;
        UE::Core::Private::
        BitwiseBinaryOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::BitwiseAND<TFixedAllocator<12>,TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                  (&local_60,&local_2f8.AnyInitialValue.Bits,&local_258,MinSize,local_3dc);
        uVar10 = local_258.AllocatorInstance.InlineData._40_8_;
        uVar9 = local_258.AllocatorInstance.InlineData._32_8_;
        uVar8 = local_258.AllocatorInstance.InlineData._24_8_;
        uVar7 = local_258.AllocatorInstance.InlineData._16_8_;
        uVar6 = local_258.AllocatorInstance.InlineData._8_8_;
        uVar5 = local_258.AllocatorInstance.InlineData._0_8_;
        local_98.Bits.NumBits = local_258.NumBits;
        local_98.Bits.MaxBits = local_258.MaxBits;
        local_98.Bits.AllocatorInstance.InlineData[0].Pad[0] =
             local_258.AllocatorInstance.InlineData[0].Pad[0];
        local_98.Bits.AllocatorInstance.InlineData[0].Pad[1] =
             local_258.AllocatorInstance.InlineData[0].Pad[1];
        local_98.Bits.AllocatorInstance.InlineData[0].Pad[2] =
             local_258.AllocatorInstance.InlineData[0].Pad[2];
        local_98.Bits.AllocatorInstance.InlineData[0].Pad[3] =
             local_258.AllocatorInstance.InlineData[0].Pad[3];
        local_98.Bits.AllocatorInstance.InlineData[1].Pad[0] =
             local_258.AllocatorInstance.InlineData[1].Pad[0];
        local_98.Bits.AllocatorInstance.InlineData[1].Pad[1] =
             local_258.AllocatorInstance.InlineData[1].Pad[1];
        local_98.Bits.AllocatorInstance.InlineData[1].Pad[2] =
             local_258.AllocatorInstance.InlineData[1].Pad[2];
        local_98.Bits.AllocatorInstance.InlineData[1].Pad[3] =
             local_258.AllocatorInstance.InlineData[1].Pad[3];
        local_98.Bits.AllocatorInstance.InlineData[2].Pad[0] =
             local_258.AllocatorInstance.InlineData[2].Pad[0];
        local_98.Bits.AllocatorInstance.InlineData[2].Pad[1] =
             local_258.AllocatorInstance.InlineData[2].Pad[1];
        local_98.Bits.AllocatorInstance.InlineData[2].Pad[2] =
             local_258.AllocatorInstance.InlineData[2].Pad[2];
        local_98.Bits.AllocatorInstance.InlineData[2].Pad[3] =
             local_258.AllocatorInstance.InlineData[2].Pad[3];
        local_98.Bits.AllocatorInstance.InlineData[3].Pad[0] =
             local_258.AllocatorInstance.InlineData[3].Pad[0];
        local_98.Bits.AllocatorInstance.InlineData[3].Pad[1] =
             local_258.AllocatorInstance.InlineData[3].Pad[1];
        local_98.Bits.AllocatorInstance.InlineData[3].Pad[2] =
             local_258.AllocatorInstance.InlineData[3].Pad[2];
        local_98.Bits.AllocatorInstance.InlineData[3].Pad[3] =
             local_258.AllocatorInstance.InlineData[3].Pad[3];
        local_258.NumBits = 0;
        local_258.MaxBits = 0;
        local_98.Bits.AllocatorInstance.InlineData[4].Pad[0] =
             local_258.AllocatorInstance.InlineData[4].Pad[0];
        local_98.Bits.AllocatorInstance.InlineData[4].Pad[1] =
             local_258.AllocatorInstance.InlineData[4].Pad[1];
        local_98.Bits.AllocatorInstance.InlineData[4].Pad[2] =
             local_258.AllocatorInstance.InlineData[4].Pad[2];
        local_98.Bits.AllocatorInstance.InlineData[4].Pad[3] =
             local_258.AllocatorInstance.InlineData[4].Pad[3];
        local_98.Bits.AllocatorInstance.InlineData[5].Pad[0] =
             local_258.AllocatorInstance.InlineData[5].Pad[0];
        local_98.Bits.AllocatorInstance.InlineData[5].Pad[1] =
             local_258.AllocatorInstance.InlineData[5].Pad[1];
        local_98.Bits.AllocatorInstance.InlineData[5].Pad[2] =
             local_258.AllocatorInstance.InlineData[5].Pad[2];
        local_98.Bits.AllocatorInstance.InlineData[5].Pad[3] =
             local_258.AllocatorInstance.InlineData[5].Pad[3];
        local_98.Bits.AllocatorInstance.InlineData[6].Pad[0] =
             local_258.AllocatorInstance.InlineData[6].Pad[0];
        local_98.Bits.AllocatorInstance.InlineData[6].Pad[1] =
             local_258.AllocatorInstance.InlineData[6].Pad[1];
        local_98.Bits.AllocatorInstance.InlineData[6].Pad[2] =
             local_258.AllocatorInstance.InlineData[6].Pad[2];
        local_98.Bits.AllocatorInstance.InlineData[6].Pad[3] =
             local_258.AllocatorInstance.InlineData[6].Pad[3];
        local_98.Bits.AllocatorInstance.InlineData[7].Pad[0] =
             local_258.AllocatorInstance.InlineData[7].Pad[0];
        local_98.Bits.AllocatorInstance.InlineData[7].Pad[1] =
             local_258.AllocatorInstance.InlineData[7].Pad[1];
        local_98.Bits.AllocatorInstance.InlineData[7].Pad[2] =
             local_258.AllocatorInstance.InlineData[7].Pad[2];
        local_98.Bits.AllocatorInstance.InlineData[7].Pad[3] =
             local_258.AllocatorInstance.InlineData[7].Pad[3];
        local_98.Bits.AllocatorInstance.InlineData[8].Pad[0] =
             local_258.AllocatorInstance.InlineData[8].Pad[0];
        local_98.Bits.AllocatorInstance.InlineData[8].Pad[1] =
             local_258.AllocatorInstance.InlineData[8].Pad[1];
        local_98.Bits.AllocatorInstance.InlineData[8].Pad[2] =
             local_258.AllocatorInstance.InlineData[8].Pad[2];
        local_98.Bits.AllocatorInstance.InlineData[8].Pad[3] =
             local_258.AllocatorInstance.InlineData[8].Pad[3];
        local_98.Bits.AllocatorInstance.InlineData[9].Pad[0] =
             local_258.AllocatorInstance.InlineData[9].Pad[0];
        local_98.Bits.AllocatorInstance.InlineData[9].Pad[1] =
             local_258.AllocatorInstance.InlineData[9].Pad[1];
        local_98.Bits.AllocatorInstance.InlineData[9].Pad[2] =
             local_258.AllocatorInstance.InlineData[9].Pad[2];
        local_98.Bits.AllocatorInstance.InlineData[9].Pad[3] =
             local_258.AllocatorInstance.InlineData[9].Pad[3];
        local_98.Bits.AllocatorInstance.InlineData[10].Pad[0] =
             local_258.AllocatorInstance.InlineData[10].Pad[0];
        local_98.Bits.AllocatorInstance.InlineData[10].Pad[1] =
             local_258.AllocatorInstance.InlineData[10].Pad[1];
        local_98.Bits.AllocatorInstance.InlineData[10].Pad[2] =
             local_258.AllocatorInstance.InlineData[10].Pad[2];
        local_98.Bits.AllocatorInstance.InlineData[10].Pad[3] =
             local_258.AllocatorInstance.InlineData[10].Pad[3];
        local_98.Bits.AllocatorInstance.InlineData[0xb].Pad[0] =
             local_258.AllocatorInstance.InlineData[0xb].Pad[0];
        local_98.Bits.AllocatorInstance.InlineData[0xb].Pad[1] =
             local_258.AllocatorInstance.InlineData[0xb].Pad[1];
        local_98.Bits.AllocatorInstance.InlineData[0xb].Pad[2] =
             local_258.AllocatorInstance.InlineData[0xb].Pad[2];
        local_98.Bits.AllocatorInstance.InlineData[0xb].Pad[3] =
             local_258.AllocatorInstance.InlineData[0xb].Pad[3];
        local_258.AllocatorInstance.InlineData._0_8_ = uVar5;
        local_258.AllocatorInstance.InlineData._8_8_ = uVar6;
        local_258.AllocatorInstance.InlineData._16_8_ = uVar7;
        local_258.AllocatorInstance.InlineData._24_8_ = uVar8;
        local_258.AllocatorInstance.InlineData._32_8_ = uVar9;
        local_258.AllocatorInstance.InlineData._40_8_ = uVar10;
        UE::MovieScene::FComponentMask::First(&local_98);
        puVar19 = *(undefined8 **)(lVar1 + 0x28);
        puVar14 = puVar19 + (ulonglong)*(ushort *)(lVar1 + 0xc) * 7;
        for (; puVar19 != puVar14; puVar19 = puVar19 + 7) {
          if (*(TComponentTypeID<UE::MovieScene::FInitialValueIndex> *)((longlong)puVar19 + 0x36) ==
              pFVar13->InitialValueIndex) goto LAB_146147318;
        }
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Header",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                            ,0x2cd,L"");
        puVar19 = (undefined8 *)0x0;
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
LAB_146147318:
        iVar12 = *(int *)(lVar1 + 0x14);
        if (iVar12 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar19 + 4));
        }
        LOCK();
        *(int *)(puVar19 + 6) = *(int *)(puVar19 + 6) + 1;
        UNLOCK();
        local_3c8 = puVar19[3];
        uStack_3c0 = (uint)*(ushort *)(lVar1 + 0xe);
        if (*(int *)&((local_2f8.InitialValueCache)->StorageByComponent).field_0x8 !=
            *(int *)&((local_2f8.InitialValueCache)->StorageByComponent).field_0x34) {
          puVar2 = *(undefined1 **)&((local_2f8.InitialValueCache)->StorageByComponent).field_0x40;
          puVar21 = &((local_2f8.InitialValueCache)->StorageByComponent).field_0x38;
          if (puVar2 != (undefined1 *)0x0) {
            puVar21 = puVar2;
          }
          iVar15 = *(int *)(puVar21 +
                           ((ulonglong)
                            (*(int *)&((local_2f8.InitialValueCache)->StorageByComponent).field_0x48
                            - 1) & (ulonglong)local_3d8) * 4);
          if (iVar15 != -1) {
            do {
              lVar1 = *(longlong *)&(local_2f8.InitialValueCache)->StorageByComponent +
                      (longlong)iVar15 * 0x18;
              if (*(ushort *)
                   (*(longlong *)&(local_2f8.InitialValueCache)->StorageByComponent +
                   (longlong)iVar15 * 0x18) == local_3d8) {
                puVar14 = (undefined8 *)(lVar1 + 8);
                if (lVar1 == 0) {
                  puVar14 = (undefined8 *)0x0;
                }
                if (puVar14 != (undefined8 *)0x0) {
                  local_3c8._4_4_ = (undefined4)((ulonglong)local_3c8 >> 0x20);
                  local_328 = (undefined4)local_3c8;
                  uStack_324 = local_3c8._4_4_;
                  uStack_31c = uStack_3bc;
                  uStack_320 = uStack_3c0;
                  (**(code **)(*(longlong *)*puVar14 + 8))((longlong *)*puVar14,&local_328);
                }
                break;
              }
              iVar15 = *(int *)(lVar1 + 0x10);
            } while (iVar15 != -1);
          }
        }
        LOCK();
        *(int *)(puVar19 + 6) = *(int *)(puVar19 + 6) + -1;
        UNLOCK();
        if (iVar12 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(puVar19 + 4));
        }
        UE::MovieScene::FEntityAllocationIterator::operator++(&local_3b8);
        bVar11 = UE::MovieScene::FEntityAllocationIterator::operator!=(&local_3b8,&local_318);
      } while (bVar11);
    }
    UE::MovieScene::FEntityAllocationIterator::~FEntityAllocationIterator(&local_318);
    UE::MovieScene::FEntityAllocationIterator::~FEntityAllocationIterator(&local_3b8);
    FVar16.Data = local_118.ComplexMasks.AllocatorInstance.Data;
  }
  if (FVar16.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar16.Data);
  }
LAB_146147541:
  UE::MovieScene::FInitialValueMutation::~FInitialValueMutation(&local_2f8);
  return;
}

// OnUnlink @ 146148e50

void __thiscall UMovieSceneInitialValueSystem::OnUnlink(UMovieSceneInitialValueSystem *this)

{
  return;
}

// RegisterProcessor @ 14614beb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieSceneInitialValueSystem::RegisterProcessor
          (FComponentTypeID param_1,TSharedPtr<UE::MovieScene::IInitialValueProcessor,1> *param_2,
          FEntityComponentFilter *param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  undefined1 auStack_108 [32];
  FInitialValueProcessorEntry *local_e8;
  FScriptContainerElement *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  FInitialValueProcessorEntry local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  if ((param_2->Object == (IInitialValueProcessor *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)((longlong)*param_2->Object + 0x10))(param_2->Object,param_3);
  local_b8.Filter.AllMask.Bits.NumBits = (param_3->AllMask).Bits.NumBits;
  local_b8.Filter.AllMask.Bits.AllocatorInstance.InlineData._0_8_ =
       *(undefined8 *)(param_3->AllMask).Bits.AllocatorInstance.InlineData;
  local_b8.Filter.AllMask.Bits.AllocatorInstance.InlineData._8_8_ =
       *(undefined8 *)((param_3->AllMask).Bits.AllocatorInstance.InlineData + 2);
  local_b8.Filter.AllMask.Bits.MaxBits = (param_3->AllMask).Bits.MaxBits;
  local_b8.Filter.AllMask.Bits.AllocatorInstance.InlineData._16_8_ =
       *(undefined8 *)((param_3->AllMask).Bits.AllocatorInstance.InlineData + 4);
  local_b8.Filter.AllMask.Bits.AllocatorInstance.InlineData._24_8_ =
       *(undefined8 *)((param_3->AllMask).Bits.AllocatorInstance.InlineData + 6);
  local_b8.Filter.AllMask.Bits.AllocatorInstance.InlineData._32_8_ =
       *(undefined8 *)((param_3->AllMask).Bits.AllocatorInstance.InlineData + 8);
  local_b8.Filter.AllMask.Bits.AllocatorInstance.InlineData._40_8_ =
       *(undefined8 *)((param_3->AllMask).Bits.AllocatorInstance.InlineData + 10);
  (param_3->AllMask).Bits.NumBits = 0;
  (param_3->AllMask).Bits.MaxBits = 0;
  local_b8.Filter.NoneMask.Bits.NumBits = (param_3->NoneMask).Bits.NumBits;
  local_b8.Filter.NoneMask.Bits.MaxBits = (param_3->NoneMask).Bits.MaxBits;
  local_b8.Filter.NoneMask.Bits.AllocatorInstance.InlineData._0_8_ =
       *(undefined8 *)(param_3->NoneMask).Bits.AllocatorInstance.InlineData;
  local_b8.Filter.NoneMask.Bits.AllocatorInstance.InlineData._8_8_ =
       *(undefined8 *)((param_3->NoneMask).Bits.AllocatorInstance.InlineData + 2);
  local_b8.Filter.NoneMask.Bits.AllocatorInstance.InlineData._16_8_ =
       *(undefined8 *)((param_3->NoneMask).Bits.AllocatorInstance.InlineData + 4);
  local_b8.Filter.NoneMask.Bits.AllocatorInstance.InlineData._24_8_ =
       *(undefined8 *)((param_3->NoneMask).Bits.AllocatorInstance.InlineData + 6);
  local_b8.Filter.NoneMask.Bits.AllocatorInstance.InlineData._32_8_ =
       *(undefined8 *)((param_3->NoneMask).Bits.AllocatorInstance.InlineData + 8);
  local_b8.Filter.NoneMask.Bits.AllocatorInstance.InlineData._40_8_ =
       *(undefined8 *)((param_3->NoneMask).Bits.AllocatorInstance.InlineData + 10);
  (param_3->NoneMask).Bits.NumBits = 0;
  (param_3->NoneMask).Bits.MaxBits = 0;
  local_b8.Filter.ComplexMasks.AllocatorInstance.Data =
       (param_3->ComplexMasks).AllocatorInstance.Data;
  (param_3->ComplexMasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Filter.ComplexMasks.ArrayNum = (param_3->ComplexMasks).ArrayNum;
  local_b8.Filter.ComplexMasks.ArrayMax = (param_3->ComplexMasks).ArrayMax;
  (param_3->ComplexMasks).ArrayNum = 0;
  (param_3->ComplexMasks).ArrayMax = 0;
  local_b8.Processor.Object = param_2->Object;
  local_b8.Processor.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (IInitialValueProcessor *)0x0;
  local_b8.InitialValueType.Value = param_1.Value;
  if ((UE::MovieScene::GInitialValueProcessors.AllocatorInstance.Data <= &local_b8) &&
     (&local_b8 <
      (FInitialValueProcessorEntry *)
      (UE::MovieScene::GInitialValueProcessors.AllocatorInstance.Data +
      (longlong)UE::MovieScene::GInitialValueProcessors.ArrayMax * 0x98))) {
    local_d0 = (longlong)UE::MovieScene::GInitialValueProcessors.ArrayNum;
    local_c8 = 0x98;
    local_e8 = &local_b8;
    local_e0 = UE::MovieScene::GInitialValueProcessors.AllocatorInstance.Data;
    local_d8 = (longlong)UE::MovieScene::GInitialValueProcessors.ArrayMax;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (UE::MovieScene::GInitialValueProcessors.ArrayNum ==
      UE::MovieScene::GInitialValueProcessors.ArrayMax) {
    UE::MovieScene::GInitialValueProcessors.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x898,&UE::MovieScene::GInitialValueProcessors.AllocatorInstance,
                    &UE::MovieScene::GInitialValueProcessors.ArrayMax);
  }
  lVar3 = (longlong)UE::MovieScene::GInitialValueProcessors.ArrayNum;
  UE::MovieScene::GInitialValueProcessors.ArrayNum =
       UE::MovieScene::GInitialValueProcessors.ArrayNum + 1;
  UE::MovieScene::FInitialValueProcessorEntry::FInitialValueProcessorEntry
            ((FInitialValueProcessorEntry *)
             (UE::MovieScene::GInitialValueProcessors.AllocatorInstance.Data + lVar3 * 0x98),
             &local_b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.Processor.SharedReferenceCount.ReferenceController);
  if (local_b8.Filter.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Filter.ComplexMasks.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// StaticRegisterNativesUMovieSceneInitialValueSystem @ 146155810

void __cdecl UMovieSceneInitialValueSystem::StaticRegisterNativesUMovieSceneInitialValueSystem(void)

{
  return;
}

