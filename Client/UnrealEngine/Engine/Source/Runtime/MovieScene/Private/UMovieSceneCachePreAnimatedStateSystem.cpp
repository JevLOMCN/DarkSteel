// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 11

// StaticClass @ 146101ee0

UClass * __cdecl UMovieSceneCachePreAnimatedStateSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCachePreAnimatedStateSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneCachePreAnimatedStateSystem",
               &Z_Registration_Info_UClass_UMovieSceneCachePreAnimatedStateSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneCachePreAnimatedStateSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCachePreAnimatedStateSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneCachePreAnimatedStateSystem>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCachePreAnimatedStateSystem.InnerSingleton;
}

// UMovieSceneCachePreAnimatedStateSystem @ 14611a860

UMovieSceneCachePreAnimatedStateSystem * __thiscall
UMovieSceneCachePreAnimatedStateSystem::UMovieSceneCachePreAnimatedStateSystem
          (UMovieSceneCachePreAnimatedStateSystem *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(TStatIdData **)&this->field_0x40 = &TStatId::TStatId_NAME_None;
  *(undefined ***)this = &___7UMovieSceneCachePreAnimatedStateSystem__6B_;
  *(undefined2 *)&this->field_0x30 = 0xffff;
  return this;
}

// UMovieSceneCachePreAnimatedStateSystem @ 14611a8a0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneCachePreAnimatedStateSystem * __thiscall
UMovieSceneCachePreAnimatedStateSystem::UMovieSceneCachePreAnimatedStateSystem
          (UMovieSceneCachePreAnimatedStateSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FBuiltInComponentTypes *pFVar2;
  UObject *local_res8;
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->field_0x32 = 4;
  *(undefined ***)this = &___7UMovieSceneCachePreAnimatedStateSystem__6B_;
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_res8 = *(UObject **)&this->field_0x10;
    FVar1.Value = (pFVar2->SymbolicTags).CreatesEntities.Value;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
  }
  return this;
}

// ~UMovieSceneCachePreAnimatedStateSystem @ 14611e600

void __thiscall
UMovieSceneCachePreAnimatedStateSystem::~UMovieSceneCachePreAnimatedStateSystem
          (UMovieSceneCachePreAnimatedStateSystem *this)

{
  *(undefined ***)this = &___7UMovieSceneEntitySystem__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 1461201a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UMovieSceneCachePreAnimatedStateSystem::OnRun'::__l2::<lambda_1>::operator()
          (void *this,UMovieSceneEntitySystem *param_1)

{
  ForElementType<IMovieScenePreAnimatedStateSystemInterface_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  ForElementType<IMovieScenePreAnimatedStateSystemInterface_*> FVar6;
  void *local_18 [2];
  
  if (param_1 != (UMovieSceneEntitySystem *)0x0) {
    pUVar5 = UMovieScenePreAnimatedStateSystemInterface::StaticClass();
    local_18[0] = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar5);
    if (local_18[0] != (void *)0x0) {
      FVar1 = *(ForElementType<IMovieScenePreAnimatedStateSystemInterface_*> *)this;
      FVar6 = *(ForElementType<IMovieScenePreAnimatedStateSystemInterface_*> *)
               ((longlong)FVar1 + 0x80);
      if (*(ForElementType<IMovieScenePreAnimatedStateSystemInterface_*> *)((longlong)FVar1 + 0x80)
          == (ForElementType<IMovieScenePreAnimatedStateSystemInterface_*>)0x0) {
        FVar6 = FVar1;
      }
      if ((((ulonglong)FVar6 <= local_18) &&
          (local_18 < (void **)((longlong)FVar6 + (longlong)*(int *)((longlong)FVar1 + 0x8c) * 8)))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = *(int *)((longlong)FVar1 + 0x88);
      if (iVar4 == *(int *)((longlong)FVar1 + 0x8c)) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<IMovieScenePreAnimatedStateSystemInterface_*>_>
                          (0x808,(ForElementType<IMovieScenePreAnimatedStateSystemInterface_*> *)
                                 FVar1,(int *)((longlong)FVar1 + 0x8c));
      }
      *(int *)((longlong)FVar1 + 0x88) = iVar4 + 1;
      FVar6 = *(ForElementType<IMovieScenePreAnimatedStateSystemInterface_*> *)
               ((longlong)FVar1 + 0x80);
      if (*(ForElementType<IMovieScenePreAnimatedStateSystemInterface_*> *)((longlong)FVar1 + 0x80)
          == (ForElementType<IMovieScenePreAnimatedStateSystemInterface_*>)0x0) {
        FVar6 = FVar1;
      }
      *(void **)((longlong)FVar6 + (longlong)iVar4 * 8) = local_18[0];
      return;
    }
  }
  return;
}

// GetPrivateStaticClass @ 14613bfe0

UClass * __cdecl UMovieSceneCachePreAnimatedStateSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCachePreAnimatedStateSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneCachePreAnimatedStateSystem",
               &Z_Registration_Info_UClass_UMovieSceneCachePreAnimatedStateSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneCachePreAnimatedStateSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCachePreAnimatedStateSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneCachePreAnimatedStateSystem>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCachePreAnimatedStateSystem.InnerSingleton;
}

// IsRelevantImpl @ 146141350

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneCachePreAnimatedStateSystem::IsRelevantImpl
          (UMovieSceneCachePreAnimatedStateSystem *this,UMovieSceneEntitySystemLinker *param_1)

{
  ushort uVar1;
  FBuiltInComponentTypes *pFVar2;
  FComponentMask *pFVar3;
  
  pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
  uVar1 = (pFVar2->Tags).RestoreState.Value;
  pFVar3 = UE::MovieScene::FEntityManager::GetAccumulatedMask(&param_1->EntityManager);
  if ((((uVar1 == 0xffff) || ((pFVar3->Bits).NumBits <= (int)(uint)uVar1)) ||
      ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
       == 0)) && ((param_1->PreAnimatedState).NumRequestsForGlobalState == 0)) {
    return false;
  }
  return true;
}

// OnLink @ 146145ad0

void __thiscall
UMovieSceneCachePreAnimatedStateSystem::OnLink(UMovieSceneCachePreAnimatedStateSystem *this)

{
  return;
}

// OnRun @ 146145c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneCachePreAnimatedStateSystem::OnRun
          (UMovieSceneCachePreAnimatedStateSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  ushort *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  TArray<unsigned_short,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar7;
  bool bVar8;
  ulonglong uVar9;
  FMovieSceneEntitySystemGraph *pFVar10;
  undefined8 *puVar11;
  ushort *puVar12;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  undefined8 *local_110;
  UMovieSceneEntitySystem *local_108;
  UMovieSceneEntitySystem *local_100;
  UMovieSceneEntitySystem *local_f8;
  UMovieSceneEntitySystem *local_f0;
  FSystemTaskPrerequisites *local_e8;
  FSystemSubsequentTasks *local_e0;
  longlong local_d8;
  undefined8 local_d0 [16];
  undefined8 *local_50;
  uint local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_138;
  lVar4 = *(longlong *)&this->field_0x28;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  local_110 = local_d0;
  local_44 = 0x10;
  FMovieSceneEntitySystemGraph::UpdateCache((FMovieSceneEntitySystemGraph *)(lVar4 + 0x2d8));
  iVar3 = *(int *)(lVar4 + 0x2e8);
  pFVar10 = *(FMovieSceneEntitySystemGraph **)(lVar4 + 0x2e0);
  if (*(FMovieSceneEntitySystemGraph **)(lVar4 + 0x2e0) == (FMovieSceneEntitySystemGraph *)0x0) {
    pFVar10 = (FMovieSceneEntitySystemGraph *)(lVar4 + 0x2d8);
  }
  if ((iVar3 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar7 = &pFVar10->SpawnPhase;
  for (; pFVar10 !=
         (FMovieSceneEntitySystemGraph *)
         ((pTVar7->AllocatorInstance).InlineData + (longlong)iVar3 * 2);
      pFVar10 = (FMovieSceneEntitySystemGraph *)
                ((pFVar10->SpawnPhase).AllocatorInstance.InlineData + 2)) {
    local_108 = *(UMovieSceneEntitySystem **)
                 (*(longlong *)(lVar4 + 0x390) + 0x20 +
                 (ulonglong)*(ushort *)(pFVar10->SpawnPhase).AllocatorInstance.InlineData * 0x28);
    UE::Core::Private::Function::
    TFunctionRefCaller<`UMovieSceneCachePreAnimatedStateSystem::OnRun'::__l2::<lambda_1>,void,UMovieSceneEntitySystem_*>
    ::Call(&local_110,&local_108);
  }
  lVar4 = *(longlong *)&this->field_0x28;
  FMovieSceneEntitySystemGraph::UpdateCache((FMovieSceneEntitySystemGraph *)(lVar4 + 0x2d8));
  puVar12 = *(ushort **)(lVar4 + 0x300);
  if (*(ushort **)(lVar4 + 0x300) == (ushort *)0x0) {
    puVar12 = (ushort *)(lVar4 + 0x2f0);
  }
  iVar3 = *(int *)(lVar4 + 0x308);
  if ((iVar3 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar1 = puVar12 + iVar3;
  for (; puVar12 != puVar1; puVar12 = puVar12 + 1) {
    local_100 = *(UMovieSceneEntitySystem **)
                 (*(longlong *)(lVar4 + 0x390) + 0x20 + (ulonglong)*puVar12 * 0x28);
    UE::Core::Private::Function::
    TFunctionRefCaller<`UMovieSceneCachePreAnimatedStateSystem::OnRun'::__l2::<lambda_1>,void,UMovieSceneEntitySystem_*>
    ::Call(&local_110,&local_100);
  }
  lVar4 = *(longlong *)&this->field_0x28;
  FMovieSceneEntitySystemGraph::UpdateCache((FMovieSceneEntitySystemGraph *)(lVar4 + 0x2d8));
  puVar12 = *(ushort **)(lVar4 + 0x330);
  if (*(ushort **)(lVar4 + 0x330) == (ushort *)0x0) {
    puVar12 = (ushort *)(lVar4 + 0x310);
  }
  iVar3 = *(int *)(lVar4 + 0x338);
  if ((iVar3 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar1 = puVar12 + iVar3;
  for (; puVar12 != puVar1; puVar12 = puVar12 + 1) {
    local_f8 = *(UMovieSceneEntitySystem **)
                (*(longlong *)(lVar4 + 0x390) + 0x20 + (ulonglong)*puVar12 * 0x28);
    UE::Core::Private::Function::
    TFunctionRefCaller<`UMovieSceneCachePreAnimatedStateSystem::OnRun'::__l2::<lambda_1>,void,UMovieSceneEntitySystem_*>
    ::Call(&local_110,&local_f8);
  }
  lVar4 = *(longlong *)&this->field_0x28;
  FMovieSceneEntitySystemGraph::UpdateCache((FMovieSceneEntitySystemGraph *)(lVar4 + 0x2d8));
  puVar12 = *(ushort **)(lVar4 + 0x360);
  if (*(ushort **)(lVar4 + 0x360) == (ushort *)0x0) {
    puVar12 = (ushort *)(lVar4 + 0x340);
  }
  iVar3 = *(int *)(lVar4 + 0x368);
  if ((iVar3 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar1 = puVar12 + iVar3;
  uVar6 = local_48;
  for (; local_48 = uVar6, puVar12 != puVar1; puVar12 = puVar12 + 1) {
    local_f0 = *(UMovieSceneEntitySystem **)
                (*(longlong *)(lVar4 + 0x390) + 0x20 + (ulonglong)*puVar12 * 0x28);
    UE::Core::Private::Function::
    TFunctionRefCaller<`UMovieSceneCachePreAnimatedStateSystem::OnRun'::__l2::<lambda_1>,void,UMovieSceneEntitySystem_*>
    ::Call(&local_110,&local_f0);
    uVar6 = local_48;
  }
  uVar9 = (ulonglong)(int)uVar6;
  local_d8 = *(longlong *)&this->field_0x28 + 0x468;
  puVar11 = local_d0;
  if (local_50 != (undefined8 *)0x0) {
    puVar11 = local_50;
  }
  puVar2 = puVar11 + uVar9;
  local_e8 = param_1;
  local_e0 = param_2;
  while( true ) {
    if ((uint)uVar9 != uVar6) {
      `TCheckedPointerIterator<IMovieScenePreAnimatedStateSystemInterface_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_118);
    }
    if (puVar11 == puVar2) break;
    (**(code **)(*(longlong *)*puVar11 + 0x10))((longlong *)*puVar11,&local_e8);
    uVar9 = (ulonglong)local_48;
    puVar11 = puVar11 + 1;
  }
  if (local_50 != (undefined8 *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}

// OnUnlink @ 146148cd0

void __thiscall
UMovieSceneCachePreAnimatedStateSystem::OnUnlink(UMovieSceneCachePreAnimatedStateSystem *this)

{
  return;
}

// StaticRegisterNativesUMovieSceneCachePreAnimatedStateSystem @ 1461557a0

void __cdecl
UMovieSceneCachePreAnimatedStateSystem::StaticRegisterNativesUMovieSceneCachePreAnimatedStateSystem
          (void)

{
  return;
}

