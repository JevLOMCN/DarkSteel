// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 13

// StaticClass @ 14dc9e150

UClass * __cdecl UMovieGraphConditionGroupQuery_Actor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_Actor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_Actor",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_Actor.InnerSingleton,
               StaticRegisterNativesUMovieGraphConditionGroupQuery_Actor,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphConditionGroupQuery_Actor>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_Actor>,local_res8,
               UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_Actor.InnerSingleton;
}

// UMovieGraphConditionGroupQuery_Actor @ 14dcaf420

UMovieGraphConditionGroupQuery_Actor * __thiscall
UMovieGraphConditionGroupQuery_Actor::UMovieGraphConditionGroupQuery_Actor
          (UMovieGraphConditionGroupQuery_Actor *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_Actor__6B_;
  (this->ActorsToMatch).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorsToMatch).ArrayNum = 0;
  (this->ActorsToMatch).ArrayMax = 0;
  (this->ActorsAndComponentsToMatch).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorsAndComponentsToMatch).ArrayNum = 0;
  (this->ActorsAndComponentsToMatch).ArrayMax = 0;
  return this;
}

// UMovieGraphConditionGroupQuery_Actor @ 14dcaf460

UMovieGraphConditionGroupQuery_Actor * __thiscall
UMovieGraphConditionGroupQuery_Actor::UMovieGraphConditionGroupQuery_Actor
          (UMovieGraphConditionGroupQuery_Actor *this)

{
  UObject::UObject((UObject *)this);
  *(undefined2 *)&this->_padding_ = 0x100;
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_Actor__6B_;
  (this->ActorsToMatch).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorsToMatch).ArrayNum = 0;
  (this->ActorsToMatch).ArrayMax = 0;
  (this->ActorsAndComponentsToMatch).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorsAndComponentsToMatch).ArrayNum = 0;
  (this->ActorsAndComponentsToMatch).ArrayMax = 0;
  return this;
}

// ~UMovieGraphConditionGroupQuery_Actor @ 14dcb28d0

void __thiscall
UMovieGraphConditionGroupQuery_Actor::~UMovieGraphConditionGroupQuery_Actor
          (UMovieGraphConditionGroupQuery_Actor *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQuery_Actor__6B_;
  DestructItems<FMovieGraphActorQueryEntry,int>
            ((FMovieGraphActorQueryEntry *)(this->ActorsAndComponentsToMatch).AllocatorInstance.Data
             ,(this->ActorsAndComponentsToMatch).ArrayNum);
  pFVar1 = (this->ActorsAndComponentsToMatch).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<AActor>,int>
            ((TSoftObjectPtr<AActor> *)(this->ActorsToMatch).AllocatorInstance.Data,
             (this->ActorsToMatch).ArrayNum);
  pFVar1 = (this->ActorsToMatch).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQueryBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14dcb65d0

FString * __thiscall
`UMovieGraphConditionGroupQuery_Actor::EvaluateActorsAndComponents'::__l12::<lambda_1>::operator()
          (void *this,FString *__return_storage_ptr__,TSoftObjectPtr<UActorComponent> *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  FString *pFVar6;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
      if (pUVar4 == (UObject *)0x0) {
LAB_14dcb6656:
        pUVar4 = (UObject *)0x0;
      }
      else {
        pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
        iVar1 = (int)pUVar5->_padding_;
        if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) goto LAB_14dcb6656;
      }
      local_res10.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
      local_res10.Number = *(uint *)&pUVar4->field_0x1c;
      bVar3 = true;
      bVar2 = false;
      ::FName::ToString(&local_res10,&local_18);
      pFVar6 = &local_18;
      goto LAB_14dcb6691;
    }
  }
  bVar3 = false;
  bVar2 = true;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  pFVar6 = &local_28;
LAB_14dcb6691:
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Evaluate @ 14dcc3630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMovieGraphConditionGroupQuery_Actor::Evaluate
          (UMovieGraphConditionGroupQuery_Actor *this,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *param_3)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_3c = 0x80;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_34 = 0;
  local_28 = (ForElementType<FSetElementId>)0x0;
  local_20 = 0;
  local_38 = 0xffffffff;
  EvaluateActorsAndComponents
            (this,param_1,param_2,param_3,
             (TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *)
             local_68);
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

// EvaluateActorsAndComponents @ 14dcc5070

/* WARNING: Removing unreachable block (ram,0x00014dcc52fa) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMovieGraphConditionGroupQuery_Actor::EvaluateActorsAndComponents
          (UMovieGraphConditionGroupQuery_Actor *this,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *param_3,
          TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *param_4
          )

{
  FWeakObjectPtr FVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  code *pcVar5;
  ForElementType<unsigned_int> FVar6;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar7;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  int iVar10;
  AActor *this_00;
  UClass *pUVar11;
  UWorld *this_01;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  FWeakObjectPtr FVar15;
  ForAnyElementType FVar16;
  ForElementType<unsigned_int> FVar17;
  uint *puVar18;
  TPersistentObjectPtr<FSoftObjectPath> *this_02;
  bool bVar19;
  uint uVar20;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar21;
  uint uVar22;
  bool bVar23;
  undefined1 local_res8;
  undefined1 local_158;
  undefined1 local_157 [7];
  undefined1 local_150 [8];
  undefined1 local_148 [8];
  ForAnyElementType local_140;
  undefined8 local_138;
  uint local_130;
  FString local_128;
  AActor *local_118;
  TPersistentObjectPtr<FSoftObjectPath> *local_110;
  ForElementType<unsigned_int> local_108;
  TPersistentObjectPtr<FSoftObjectPath> *local_100;
  FString local_f8;
  int local_e8;
  int local_e4;
  undefined1 local_e0 [8];
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_d8;
  FName local_d0;
  longlong local_c8;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  bVar19 = false;
  local_130 = 0;
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId714,
               "UMovieGraphConditionGroupQuery_Actor::EvaluateActorsAndComponents",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphRenderLayerSubsystem.cpp"
               ,0x2ca);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId714);
  }
  local_130 = (this->ActorsAndComponentsToMatch).ArrayNum;
  uVar12 = (ulonglong)(int)local_130;
  this_02 = (TPersistentObjectPtr<FSoftObjectPath> *)
            (this->ActorsAndComponentsToMatch).AllocatorInstance.Data;
  local_res8 = SUB81(this,0);
  local_100 = (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)this_02 + uVar12 * 0x38);
  pTVar21 = local_100;
  do {
    while( true ) {
      local_110 = this_02;
      if ((this->ActorsAndComponentsToMatch).ArrayNum != (int)uVar12) {
        local_158 = 0;
        `TCheckedPointerIterator<FMovieGraphActorQueryEntry_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_158);
      }
      if (this_02 == pTVar21) {
        if (bVar23) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return;
      }
      this_00 = (AActor *)TPersistentObjectPtr<FSoftObjectPath>::Get(this_02);
      if (this_00 != (AActor *)0x0) break;
LAB_14dcc5634:
      this_02 = (TPersistentObjectPtr<FSoftObjectPath> *)&this_02[1].ObjectID.AssetPath.AssetName;
      uVar12 = (ulonglong)local_130;
      local_118 = (AActor *)0x0;
    }
    pUVar11 = Z_Construct_UClass_AActor_NoRegister();
    iVar10 = (int)pUVar11->_padding_;
    if ((((*(int *)(this_00->_padding_ + 0x38) < iVar10) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
          &pUVar11->_padding_)) || (this_01 = AActor::GetWorld(this_00), this_01 == (UWorld *)0x0))
       || (bVar9 = UWorld::IsEditorWorld(this_01), !bVar9)) goto LAB_14dcc5634;
    uVar20 = this_02[1].ObjectID.AssetPath.PackageName.ComparisonIndex.Value;
    local_118 = this_00;
    if (uVar20 == 0) {
      TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::Emplace<AActor_*_const_&>
                (param_3,(AActor **)(local_e0 + 4),(bool *)&local_118);
      uVar12 = (ulonglong)local_130;
      this_02 = (TPersistentObjectPtr<FSoftObjectPath> *)&this_02[1].ObjectID.AssetPath.AssetName;
    }
    else {
      local_140.Data = (FScriptContainerElement *)0x0;
      local_138 = 0;
      if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
      }
      if (0 < (int)uVar20) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar20,&local_140,0,(int *)((longlong)&local_138 + 4));
      }
      uVar20 = this_02[1].ObjectID.AssetPath.PackageName.ComparisonIndex.Value;
      FVar15 = this_02[1].WeakPtr;
      FVar1 = (FWeakObjectPtr)((longlong)FVar15 + (longlong)(int)uVar20 * 0x28);
      local_150[0] = local_res8;
      while( true ) {
        if (this_02[1].ObjectID.AssetPath.PackageName.ComparisonIndex.Value != uVar20) {
          local_157[0] = 0;
          `TCheckedPointerIterator<TSoftObjectPtr<UActorComponent>_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_157);
        }
        if (FVar15 == FVar1) break;
        `UMovieGraphConditionGroupQuery_Actor::EvaluateActorsAndComponents'::__l12::<lambda_1>::
        operator()(local_150,&local_128,(TSoftObjectPtr<UActorComponent> *)FVar15);
        if (((local_140.Data <= (FScriptContainerElement *)&local_128) &&
            ((FScriptContainerElement *)&local_128 <
             local_140.Data + (longlong)local_138._4_4_ * 0x10)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((int)local_138 == local_138._4_4_) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_140,(int *)((longlong)&local_138 + 4));
          pFVar13 = local_140.Data + (longlong)iVar10 * 0x10;
          local_138 = CONCAT44(local_138._4_4_,iVar10 + 1);
        }
        else {
          pFVar13 = local_140.Data + (longlong)(int)local_138 * 0x10;
          local_138 = CONCAT44(local_138._4_4_,(int)local_138 + 1);
        }
        *(undefined8 *)pFVar13 = 0;
        *(FScriptContainerElement **)pFVar13 = local_128.Data.AllocatorInstance.Data;
        local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar13 + 8) = local_128.Data.ArrayNum;
        *(int *)(pFVar13 + 0xc) = local_128.Data.ArrayMax;
        local_128.Data.ArrayNum = 0;
        local_128.Data.ArrayMax = 0;
        FVar15 = (FWeakObjectPtr)((longlong)FVar15 + 0x28);
      }
      local_d8 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                           (&local_118->OwnedComponents);
      iVar10 = *(int *)&(local_d8->Elements).field_0x28;
      iStack_b8 = 0;
      local_a0 = 0;
      local_108 = (ForElementType<unsigned_int>)&(local_d8->Elements).field_0x10;
      uStack_b4 = 1;
      iStack_a4 = 0;
      if (iVar10 != 0) {
        puVar3 = *(uint **)&(local_d8->Elements).field_0x20;
        puVar18 = (uint *)local_108;
        if (puVar3 != (uint *)0x0) {
          puVar18 = puVar3;
        }
        uVar20 = *puVar18;
        while (uVar20 == 0) {
          iStack_b8 = iStack_b8 + 1;
          local_a0 = local_a0 + 0x20;
          iStack_a4 = iVar10;
          if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8)
          goto LAB_14dcc53a1;
          uVar20 = puVar18[iStack_b8];
        }
        uStack_b4 = -uVar20 & uVar20;
        uVar12 = (ulonglong)uStack_b4 * 2 + 1;
        lVar4 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        local_e8 = (int)lVar4;
        iStack_a4 = local_e8 + -1 + local_a0;
        if (iVar10 < iStack_a4) {
          iStack_a4 = iVar10;
        }
      }
LAB_14dcc53a1:
      uStack_9c = local_44;
      iStack_98 = *(int *)&(local_d8->Elements).field_0x8 - *(int *)&(local_d8->Elements).field_0x34
      ;
      uVar20 = *(uint *)&(local_d8->Elements).field_0x28;
      TStack_88._padding_ = CONCAT44(uStack_b4,iStack_b8);
      uStack_a8 = 0xffffffff;
      uVar22 = uVar20 & 0xffffffe0;
      TStack_88.CurrentBitIndex = iStack_a4;
      TStack_88.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar20 >> 5;
      TStack_88._28_4_ = local_44;
      TStack_88.BaseBitIndex = local_a0;
      uStack_68 = CONCAT44(uStack_94,iStack_98);
      local_c0 = local_d8;
      local_b0 = (undefined1 *)local_108;
      local_90 = local_d8;
      TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_108;
      if ((((int)uVar20 < 0) || (iVar10 < (int)uVar20)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar7 = local_d8;
      FVar6 = local_108;
      uVar2 = *(int *)((longlong)local_108 + 0x18);
      if (uVar20 != uVar2) {
        FVar17 = local_108;
        if (*(ForElementType<unsigned_int> *)((longlong)local_108 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar17 = *(ForElementType<unsigned_int> *)((longlong)local_108 + 0x10);
        }
        uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)((longlong)FVar17 + (longlong)iVar14 * 4);
        while (uVar20 == 0) {
          iVar14 = iVar14 + 1;
          uVar22 = uVar22 + 0x20;
          uVar20 = uVar2;
          if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < iVar14)
          goto LAB_14dcc54c0;
          uVar20 = *(uint *)((longlong)FVar17 + (longlong)iVar14 * 4);
        }
        uVar12 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        local_e4 = (int)lVar4;
        uVar20 = local_e4 + -1 + uVar22;
        if ((int)uVar2 < (int)uVar20) {
          uVar20 = uVar2;
        }
      }
LAB_14dcc54c0:
      while( true ) {
        pTVar8 = local_90;
        if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
            (int)uStack_68) {
          local_148[0] = 0;
          `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_148);
        }
        if (((TStack_88.CurrentBitIndex == uVar20) &&
            ((ForElementType<unsigned_int>)TStack_88.Array == FVar6)) && (pTVar8 == pTVar7)) break;
        local_c8 = *(longlong *)
                    (*(longlong *)&pTVar8->Elements + (longlong)TStack_88.CurrentBitIndex * 0x10);
        if (local_c8 != 0) {
          local_d0 = *(FName *)(local_c8 + 0x18);
          bVar19 = true;
          ::FName::ToString(&local_d0,&local_f8);
          pFVar13 = local_140.Data + (longlong)(int)local_138 * 0x10;
          iVar10 = local_f8.Data.ArrayNum;
          for (FVar16.Data = local_140.Data; FVar16.Data != pFVar13;
              FVar16.Data = FVar16.Data + 0x10) {
            iVar14 = *(int *)(FVar16.Data + 8);
            if (iVar14 == iVar10) {
              if (1 < iVar14) {
                iVar10 = FGenericPlatformStricmp::Stricmp
                                   (*(wchar_t **)FVar16.Data,
                                    (wchar_t *)local_f8.Data.AllocatorInstance.Data);
                bVar9 = iVar10 == 0;
                iVar10 = local_f8.Data.ArrayNum;
                goto LAB_14dcc5564;
              }
LAB_14dcc55c1:
              bVar9 = true;
              goto LAB_14dcc5577;
            }
            bVar9 = iVar14 + iVar10 == 1;
LAB_14dcc5564:
            if (bVar9) goto LAB_14dcc55c1;
          }
        }
        bVar9 = false;
LAB_14dcc5577:
        if ((bVar19) &&
           (bVar19 = false, local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        if (bVar9) {
          TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>::
          Emplace<UActorComponent_*_const_&>(param_4,(UActorComponent **)local_e0,(bool *)&local_c8)
          ;
        }
        TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
      }
      DestructItems<FString,int>((FString *)local_140.Data,(int)local_138);
      if (local_140.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data);
      }
      this_02 = (TPersistentObjectPtr<FSoftObjectPath> *)&local_110[1].ObjectID.AssetPath.AssetName;
      uVar12 = (ulonglong)local_130;
      pTVar21 = local_100;
    }
  } while( true );
}

// GetDisplayName @ 14dccc640

FText * __thiscall
UMovieGraphConditionGroupQuery_Actor::GetDisplayName(UMovieGraphConditionGroupQuery_Actor *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayName,L"MovieGraph",L"ConditionGroupQueryDisplayName_Actor",L"Actor");
      atexit(`UMovieGraphConditionGroupQuery_Actor::GetDisplayName'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayName;
    }
  }
  return &::DisplayName;
}

// GetIcon @ 14dccda70

FSlateIcon * __thiscall
UMovieGraphConditionGroupQuery_Actor::GetIcon(UMovieGraphConditionGroupQuery_Actor *this)

{
  FName FVar1;
  FName *pFVar2;
  FName FVar3;
  FName local_res20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = ::FName::FName(&local_res20,"ClassIcon.Actor");
      FVar1 = *pFVar2;
      FVar3 = FAppStyle::GetAppStyleSetName();
      FSlateIcon::FSlateIcon(&ActorIcon,*(FName *)FVar3,FVar1,(FName)0x0,(FName)0x0);
      _Init_thread_footer(&::_TSS0);
      return &ActorIcon;
    }
  }
  return &ActorIcon;
}

// GetPrivateStaticClass @ 14dcd1b80

UClass * __cdecl UMovieGraphConditionGroupQuery_Actor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_Actor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQuery_Actor",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_Actor.InnerSingleton,
               StaticRegisterNativesUMovieGraphConditionGroupQuery_Actor,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphConditionGroupQuery_Actor>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQuery_Actor>,local_res8,
               UMovieGraphConditionGroupQueryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQuery_Actor.InnerSingleton;
}

// PostLoad @ 14dcda370

void __thiscall
UMovieGraphConditionGroupQuery_Actor::PostLoad(UMovieGraphConditionGroupQuery_Actor *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UMovieGraphConditionGroupQuery_Actor **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// ShouldEvaluateComponents @ 14dce4af0

bool __thiscall
UMovieGraphConditionGroupQuery_Actor::ShouldEvaluateComponents
          (UMovieGraphConditionGroupQuery_Actor *this)

{
  return true;
}

// StaticRegisterNativesUMovieGraphConditionGroupQuery_Actor @ 14dce6430

void __cdecl
UMovieGraphConditionGroupQuery_Actor::StaticRegisterNativesUMovieGraphConditionGroupQuery_Actor
          (void)

{
  return;
}

