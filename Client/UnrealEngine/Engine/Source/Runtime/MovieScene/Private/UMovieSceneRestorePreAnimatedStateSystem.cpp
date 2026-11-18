// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 11

// StaticClass @ 146100a40

UClass * __cdecl UMovieSceneRestorePreAnimatedStateSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneRestorePreAnimatedStateSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneRestorePreAnimatedStateSystem",
               &Z_Registration_Info_UClass_UMovieSceneRestorePreAnimatedStateSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneRestorePreAnimatedStateSystem,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneRestorePreAnimatedStateSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneRestorePreAnimatedStateSystem>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneRestorePreAnimatedStateSystem.InnerSingleton;
}

// UMovieSceneRestorePreAnimatedStateSystem @ 14611ba80

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneRestorePreAnimatedStateSystem * __thiscall
UMovieSceneRestorePreAnimatedStateSystem::UMovieSceneRestorePreAnimatedStateSystem
          (UMovieSceneRestorePreAnimatedStateSystem *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0xffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
  this->_padding_ = (longlong)&___7UMovieSceneRestorePreAnimatedStateSystem__6B_;
  (this->PreAnimatedStateRef).Object = (FPreAnimatedStateExtension *)0x0;
  (this->PreAnimatedStateRef).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UMovieSceneRestorePreAnimatedStateSystem @ 14611bad0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneRestorePreAnimatedStateSystem * __thiscall
UMovieSceneRestorePreAnimatedStateSystem::UMovieSceneRestorePreAnimatedStateSystem
          (UMovieSceneRestorePreAnimatedStateSystem *this,FObjectInitializer *param_1)

{
  UObject *local_res8 [2];
  UClass *local_res18 [2];
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 4;
  this->_padding_ = (longlong)&___7UMovieSceneRestorePreAnimatedStateSystem__6B_;
  (this->PreAnimatedStateRef).Object = (FPreAnimatedStateExtension *)0x0;
  (this->PreAnimatedStateRef).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if ((this->_padding_ & 0x10) != 0) {
    local_res8[0] = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8[0]);
    }
    local_res18[0] = UMovieSceneCachePreAnimatedStateSystem::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)local_res8);
  }
  return this;
}

// ~UMovieSceneRestorePreAnimatedStateSystem @ 14611e920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneRestorePreAnimatedStateSystem::~UMovieSceneRestorePreAnimatedStateSystem
          (UMovieSceneRestorePreAnimatedStateSystem *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneRestorePreAnimatedStateSystem__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PreAnimatedStateRef).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7UMovieSceneEntitySystem__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 1461202c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UMovieSceneRestorePreAnimatedStateSystem::OnRun'::__l2::<lambda_1>::operator()
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

// GetPrivateStaticClass @ 14613c680

UClass * __cdecl UMovieSceneRestorePreAnimatedStateSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneRestorePreAnimatedStateSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneRestorePreAnimatedStateSystem",
               &Z_Registration_Info_UClass_UMovieSceneRestorePreAnimatedStateSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneRestorePreAnimatedStateSystem,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneRestorePreAnimatedStateSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneRestorePreAnimatedStateSystem>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneRestorePreAnimatedStateSystem.InnerSingleton;
}

// IsRelevantImpl @ 1461415e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneRestorePreAnimatedStateSystem::IsRelevantImpl
          (UMovieSceneRestorePreAnimatedStateSystem *this,UMovieSceneEntitySystemLinker *param_1)

{
  ushort uVar1;
  FBuiltInComponentTypes *pFVar2;
  FComponentMask *pFVar3;
  
  pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
  uVar1 = (pFVar2->Tags).RestoreState.Value;
  pFVar3 = UE::MovieScene::FEntityManager::GetAccumulatedMask(&param_1->EntityManager);
  if (((uVar1 != 0xffff) && ((int)(uint)uVar1 < (pFVar3->Bits).NumBits)) &&
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      != 0)) {
    return true;
  }
  return false;
}

// OnLink @ 146145b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneRestorePreAnimatedStateSystem::OnLink(UMovieSceneRestorePreAnimatedStateSystem *this)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  UMovieSceneEntitySystemLinker *this_00;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  UMovieSceneEntitySystem *pUVar7;
  UClass *pUVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  UClass *local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this_00 = (UMovieSceneEntitySystemLinker *)this->_padding_;
  local_res8 = UMovieSceneCachePreAnimatedStateSystem::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar7 = UMovieSceneEntitySystemLinker::LinkSystem
                     (this_00,(TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  if (pUVar7 != (UMovieSceneEntitySystem *)0x0) {
    pUVar8 = UMovieSceneCachePreAnimatedStateSystem::StaticClass();
    iVar3 = (int)pUVar8->_padding_;
    if ((iVar3 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar8->_padding_)) {
      uVar1 = pUVar7->GraphID;
      uVar2 = *(ushort *)((longlong)&this->_padding_ + 4);
      lVar4 = this->_padding_;
      if ((uVar2 == 0xffff) || (uVar1 == 0xffff)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("FromID != TNumericLimits<uint16>::Max() && ToID != TNumericLimits<uint16>::Max()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemGraphs.cpp"
                           ,0x39,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      UE::MovieScene::FDirectedGraph::MakeEdge((FDirectedGraph *)(lVar4 + 0x418),uVar2,uVar1);
      return;
    }
    pFVar9 = GetTypeName<UMovieSceneCachePreAnimatedStateSystem>(&local_38);
    pwVar10 = L"";
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    pFVar9 = GetFullNameForCastLogError<UMovieSceneEntitySystem>(&local_28,pUVar7);
    if ((pFVar9->Data).ArrayNum != 0) {
      pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar10,pwVar11);
  }
  pFVar9 = GetTypeName<UMovieSceneCachePreAnimatedStateSystem>(&local_48);
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar10);
}

// OnRun @ 1461475b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneRestorePreAnimatedStateSystem::OnRun
          (UMovieSceneRestorePreAnimatedStateSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  ushort *puVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  code *pcVar5;
  TArray<unsigned_short,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar6;
  bool bVar7;
  uint uVar8;
  TPreAnimatedCaptureSources<UE::MovieScene::FMovieSceneEntityID> *this_00;
  FBuiltInComponentTypes *pFVar9;
  undefined1 *puVar10;
  uint uVar11;
  FMovieSceneEntitySystemGraph *pFVar12;
  longlong lVar13;
  ushort *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_318 [32];
  longlong local_2f8;
  longlong local_2f0;
  FComponentTypeID local_2e8;
  FComponentTypeID local_2e6 [3];
  FMovieSceneEntityID local_2e0 [4];
  undefined1 *local_2d8;
  FEntityAllocationProxy local_2d0;
  UMovieSceneEntitySystem *local_2c0;
  UMovieSceneEntitySystem *local_2b8;
  UMovieSceneEntitySystem *local_2b0;
  UMovieSceneEntitySystem *local_2a8;
  FEntityAllocationIterator local_2a0;
  undefined8 local_280;
  TStatIdData *pTStack_278;
  byte local_270;
  undefined7 uStack_26f;
  undefined4 uStack_268;
  uint uStack_264;
  FSystemTaskPrerequisites *local_260;
  FSystemSubsequentTasks *local_258;
  longlong local_250;
  initializer_list<UE::MovieScene::FComponentTypeID> local_248;
  FEntityAllocationIterator local_238;
  undefined8 uStack_220;
  undefined8 local_218;
  TStatIdData *pTStack_210;
  ulonglong local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [128];
  undefined1 *local_178;
  int local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  TStatIdData *local_158;
  ulonglong uStack_150;
  undefined8 local_148;
  FEntityComponentFilter local_140;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_318;
  lVar13 = this->_padding_;
  local_2d8 = local_1f8;
  local_16c = 0x10;
  local_178 = (undefined1 *)0x0;
  local_170 = 0;
  FMovieSceneEntitySystemGraph::UpdateCache((FMovieSceneEntitySystemGraph *)(lVar13 + 0x2d8));
  iVar4 = *(int *)(lVar13 + 0x2e8);
  pFVar12 = *(FMovieSceneEntitySystemGraph **)(lVar13 + 0x2e0);
  if (*(FMovieSceneEntitySystemGraph **)(lVar13 + 0x2e0) == (FMovieSceneEntitySystemGraph *)0x0) {
    pFVar12 = (FMovieSceneEntitySystemGraph *)(lVar13 + 0x2d8);
  }
  if ((iVar4 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar6 = &pFVar12->SpawnPhase;
  for (; pFVar12 !=
         (FMovieSceneEntitySystemGraph *)
         ((pTVar6->AllocatorInstance).InlineData + (longlong)iVar4 * 2);
      pFVar12 = (FMovieSceneEntitySystemGraph *)
                ((pFVar12->SpawnPhase).AllocatorInstance.InlineData + 2)) {
    local_2c0 = *(UMovieSceneEntitySystem **)
                 (*(longlong *)(lVar13 + 0x390) + 0x20 +
                 (ulonglong)*(ushort *)(pFVar12->SpawnPhase).AllocatorInstance.InlineData * 0x28);
    UE::Core::Private::Function::
    TFunctionRefCaller<`UMovieSceneRestorePreAnimatedStateSystem::OnRun'::__l2::<lambda_1>,void,UMovieSceneEntitySystem_*>
    ::Call(&local_2d8,&local_2c0);
  }
  lVar13 = this->_padding_;
  FMovieSceneEntitySystemGraph::UpdateCache((FMovieSceneEntitySystemGraph *)(lVar13 + 0x2d8));
  puVar14 = *(ushort **)(lVar13 + 0x300);
  if (*(ushort **)(lVar13 + 0x300) == (ushort *)0x0) {
    puVar14 = (ushort *)(lVar13 + 0x2f0);
  }
  iVar4 = *(int *)(lVar13 + 0x308);
  if ((iVar4 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar1 = puVar14 + iVar4;
  for (; puVar14 != puVar1; puVar14 = puVar14 + 1) {
    local_2b8 = *(UMovieSceneEntitySystem **)
                 (*(longlong *)(lVar13 + 0x390) + 0x20 + (ulonglong)*puVar14 * 0x28);
    UE::Core::Private::Function::
    TFunctionRefCaller<`UMovieSceneRestorePreAnimatedStateSystem::OnRun'::__l2::<lambda_1>,void,UMovieSceneEntitySystem_*>
    ::Call(&local_2d8,&local_2b8);
  }
  lVar13 = this->_padding_;
  FMovieSceneEntitySystemGraph::UpdateCache((FMovieSceneEntitySystemGraph *)(lVar13 + 0x2d8));
  puVar14 = *(ushort **)(lVar13 + 0x330);
  if (*(ushort **)(lVar13 + 0x330) == (ushort *)0x0) {
    puVar14 = (ushort *)(lVar13 + 0x310);
  }
  iVar4 = *(int *)(lVar13 + 0x338);
  if ((iVar4 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar1 = puVar14 + iVar4;
  for (; puVar14 != puVar1; puVar14 = puVar14 + 1) {
    local_2b0 = *(UMovieSceneEntitySystem **)
                 (*(longlong *)(lVar13 + 0x390) + 0x20 + (ulonglong)*puVar14 * 0x28);
    UE::Core::Private::Function::
    TFunctionRefCaller<`UMovieSceneRestorePreAnimatedStateSystem::OnRun'::__l2::<lambda_1>,void,UMovieSceneEntitySystem_*>
    ::Call(&local_2d8,&local_2b0);
  }
  lVar13 = this->_padding_;
  FMovieSceneEntitySystemGraph::UpdateCache((FMovieSceneEntitySystemGraph *)(lVar13 + 0x2d8));
  puVar14 = *(ushort **)(lVar13 + 0x360);
  if (*(ushort **)(lVar13 + 0x360) == (ushort *)0x0) {
    puVar14 = (ushort *)(lVar13 + 0x340);
  }
  iVar4 = *(int *)(lVar13 + 0x368);
  if ((iVar4 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar1 = puVar14 + iVar4;
  for (; puVar14 != puVar1; puVar14 = puVar14 + 1) {
    local_2a8 = *(UMovieSceneEntitySystem **)
                 (*(longlong *)(lVar13 + 0x390) + 0x20 + (ulonglong)*puVar14 * 0x28);
    UE::Core::Private::Function::
    TFunctionRefCaller<`UMovieSceneRestorePreAnimatedStateSystem::OnRun'::__l2::<lambda_1>,void,UMovieSceneEntitySystem_*>
    ::Call(&local_2d8,&local_2a8);
  }
  local_250 = this->_padding_ + 0x468;
  uVar11 = local_170 - 1;
  local_260 = param_1;
  local_258 = param_2;
  if (-1 < (int)uVar11) {
    lVar15 = (longlong)(int)uVar11;
    lVar13 = lVar15 * 8;
    do {
      uVar8 = 0;
      if ((int)uVar11 < local_170) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_2f0 = (longlong)local_170;
        local_2f8 = lVar15;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      puVar10 = local_1f8;
      if (local_178 != (undefined1 *)0x0) {
        puVar10 = local_178;
      }
      (**(code **)(**(longlong **)(puVar10 + lVar13) + 0x18))
                (*(longlong **)(puVar10 + lVar13),&local_260);
      lVar15 = lVar15 + -1;
      lVar13 = lVar13 + -8;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  this_00 = (TPreAnimatedCaptureSources<UE::MovieScene::FMovieSceneEntityID> *)
            UE::MovieScene::FPreAnimatedStateExtension::GetEntityMetaData
                      ((FPreAnimatedStateExtension *)(this->_padding_ + 0x468));
  if (this_00 != (TPreAnimatedCaptureSources<UE::MovieScene::FMovieSceneEntityID> *)0x0) {
    pTStack_278 = &TStatId::TStatId_NAME_None;
    local_280 = 0;
    uStack_268 = 0x6ff;
    uStack_264 = uStack_264 & 0xffffff00;
    local_208 = CONCAT71(uStack_26f,local_270) & 0xffffffffffffffe0;
    uStack_200 = CONCAT44(uStack_264,0x6ff);
    local_218 = 0;
    pTStack_210 = &TStatId::TStatId_NAME_None;
    local_270 = local_270 & 0xe0;
    pFVar9 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_2e8.Value = (pFVar9->Tags).NeedsUnlink.Value;
    local_248._First = &local_2e8;
    local_248._Last = local_2e6;
    local_168 = uStack_220;
    uStack_160 = local_218;
    local_148 = CONCAT44(uStack_264,uStack_268);
    local_158 = pTStack_210;
    uStack_150 = local_208;
    local_140.AllMask.Bits.NumBits = 0;
    local_140.AllMask.Bits.MaxBits = 0x180;
    local_140.NoneMask.Bits.NumBits = 0;
    local_140.NoneMask.Bits.MaxBits = 0x180;
    local_140.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.ComplexMasks.ArrayNum = 0;
    local_140.ComplexMasks.ArrayMax = 0;
    local_90 = 0;
    local_8c = 0x180;
    local_58 = 0;
    local_54 = 0x180;
    UE::MovieScene::FComponentMask::SetAll(&local_140.AllMask,&local_248);
    lVar13 = this->_padding_;
    cVar2 = *(char *)(lVar13 + 0x2d0);
    UE::MovieScene::FEntityAllocationIterator::FEntityAllocationIterator
              (&local_2a0,(FEntityManager *)(lVar13 + 0x28),&local_140);
    UE::MovieScene::FEntityAllocationIterator::FEntityAllocationIterator
              (&local_238,(FEntityManager *)(lVar13 + 0x28));
    bVar7 = UE::MovieScene::FEntityAllocationIterator::operator!=(&local_2a0,&local_238);
    if (bVar7) {
      do {
        UE::MovieScene::FEntityAllocationIterator::operator*(&local_2a0,&local_2d0);
        lVar13 = *(longlong *)
                  (*(longlong *)&(local_2d0.Manager)->EntityAllocations +
                  (longlong)local_2d0.AllocationIndex * 8);
        lVar15 = 0;
        if (cVar2 == '\0') {
          *(undefined4 *)(lVar13 + 0x14) = 0;
          lVar15 = lVar13;
        }
        uVar3 = *(ushort *)(lVar13 + 0xe);
        lVar13 = *(longlong *)
                  (*(longlong *)
                    (*(longlong *)&(local_2d0.Manager)->EntityAllocations +
                    (longlong)local_2d0.AllocationIndex * 8) + 0x18);
        lVar16 = 0;
        if ((ulonglong)uVar3 != 0) {
          do {
            local_2e0[0].Value = *(ushort *)(lVar13 + lVar16 * 2);
            UE::MovieScene::TPreAnimatedCaptureSources<UE::MovieScene::FMovieSceneEntityID>::
            StopTrackingCaptureSource(this_00,local_2e0);
            lVar16 = lVar16 + 1;
          } while (lVar16 < (longlong)(ulonglong)uVar3);
        }
        if (lVar15 != 0) {
          *(undefined4 *)(lVar15 + 0x14) = 1;
        }
        UE::MovieScene::FEntityAllocationIterator::operator++(&local_2a0);
        bVar7 = UE::MovieScene::FEntityAllocationIterator::operator!=(&local_2a0,&local_238);
      } while (bVar7);
    }
    UE::MovieScene::FEntityAllocationIterator::~FEntityAllocationIterator(&local_238);
    UE::MovieScene::FEntityAllocationIterator::~FEntityAllocationIterator(&local_2a0);
    if (local_140.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.ComplexMasks.AllocatorInstance.Data);
    }
  }
  *(undefined1 *)(local_250 + 0x110) = 0;
  if (local_178 != (undefined1 *)0x0) {
    FMemory::Free(local_178);
  }
  return;
}

// OnUnlink @ 146148e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneRestorePreAnimatedStateSystem::OnUnlink(UMovieSceneRestorePreAnimatedStateSystem *this)

{
  return;
}

// StaticRegisterNativesUMovieSceneRestorePreAnimatedStateSystem @ 146155830

void __cdecl
UMovieSceneRestorePreAnimatedStateSystem::
StaticRegisterNativesUMovieSceneRestorePreAnimatedStateSystem(void)

{
  return;
}

