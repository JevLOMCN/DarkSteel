// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 21

// StaticClass @ 1461e3430

UClass * __cdecl UMovieSceneSequenceTickManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSequenceTickManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSequenceTickManager",
               &Z_Registration_Info_UClass_UMovieSceneSequenceTickManager.InnerSingleton,
               StaticRegisterNativesUMovieSceneSequenceTickManager,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSequenceTickManager>,
               InternalVTableHelperCtorCaller<UMovieSceneSequenceTickManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSequenceTickManager.InnerSingleton;
}

// UMovieSceneSequenceTickManager @ 1461fe600

UMovieSceneSequenceTickManager * __thiscall
UMovieSceneSequenceTickManager::UMovieSceneSequenceTickManager
          (UMovieSceneSequenceTickManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneSequenceTickManager__6B_;
  (this->TickableClients).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TickableClients).ArrayNum = 0;
  (this->TickableClients).ArrayMax = 0;
  *(undefined8 *)&this->LinkerGroups = 0;
  *(undefined8 *)&(this->LinkerGroups).field_0x8 = 0;
  *(undefined8 *)&(this->LinkerGroups).field_0x20 = 0;
  *(undefined4 *)&(this->LinkerGroups).field_0x28 = 0;
  *(undefined4 *)&(this->LinkerGroups).field_0x2c = 0x80;
  *(undefined4 *)&(this->LinkerGroups).field_0x34 = 0;
  *(undefined4 *)&(this->LinkerGroups).field_0x30 = 0xffffffff;
  (this->WorldTickDelegateHandle).ID = 0;
  (this->LatentActionManager).LatentActions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LatentActionManager).LatentActions.ArrayNum = 0;
  (this->LatentActionManager).LatentActions.ArrayMax = 0;
  (this->LatentActionManager).bIsRunningLatentActions = false;
  return this;
}

// UMovieSceneSequenceTickManager @ 1461fe670

UMovieSceneSequenceTickManager * __thiscall
UMovieSceneSequenceTickManager::UMovieSceneSequenceTickManager
          (UMovieSceneSequenceTickManager *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneSequenceTickManager__6B_;
  (this->TickableClients).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TickableClients).ArrayNum = 0;
  (this->TickableClients).ArrayMax = 0;
  *(undefined8 *)&this->LinkerGroups = 0;
  *(undefined8 *)&(this->LinkerGroups).field_0x8 = 0;
  *(undefined8 *)&(this->LinkerGroups).field_0x20 = 0;
  *(undefined4 *)&(this->LinkerGroups).field_0x28 = 0;
  *(undefined4 *)&(this->LinkerGroups).field_0x2c = 0x80;
  *(undefined4 *)&(this->LinkerGroups).field_0x34 = 0;
  *(undefined4 *)&(this->LinkerGroups).field_0x30 = 0xffffffff;
  (this->WorldTickDelegateHandle).ID = 0;
  (this->LatentActionManager).LatentActions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LatentActionManager).LatentActions.ArrayNum = 0;
  (this->LatentActionManager).LatentActions.ArrayMax = 0;
  (this->LatentActionManager).bIsRunningLatentActions = false;
  this->PendingActorOperations =
       (TArray<UMovieSceneSequenceTickManager::FPendingOperation,TSizedDefaultAllocator<32>_> *)0x0;
  return this;
}

// ~UMovieSceneSequenceTickManager @ 146200070

void __thiscall
UMovieSceneSequenceTickManager::~UMovieSceneSequenceTickManager
          (UMovieSceneSequenceTickManager *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneSequenceTickManager__6B_;
  DestructItems<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
             (this->LatentActionManager).LatentActions.AllocatorInstance.Data,
             (this->LatentActionManager).LatentActions.ArrayNum);
  pFVar1 = (this->LatentActionManager).LatentActions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TSparseArray<UMovieSceneSequenceTickManager::FLinkerGroup,FDefaultSparseArrayAllocator>::
  ~TSparseArray<UMovieSceneSequenceTickManager::FLinkerGroup,FDefaultSparseArrayAllocator>
            (&this->LinkerGroups);
  pFVar1 = (this->TickableClients).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddLatentAction @ 1462052a0

void __thiscall
UMovieSceneSequenceTickManager::AddLatentAction
          (UMovieSceneSequenceTickManager *this,
          TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *pTVar1;
  TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> local_18;
  
  pTVar1 = TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>::
           TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                     (&local_18,param_1);
  FMovieSceneLatentActionManager::AddLatentAction(&this->LatentActionManager,pTVar1);
  if ((*(int *)&param_1->field_0x8 != 0) && (*(undefined8 **)param_1 != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)param_1)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)param_1,0,0,0x10);
    *(undefined4 *)&param_1->field_0x8 = 0;
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// AddReferencedObjects @ 146205ef0

void __cdecl
UMovieSceneSequenceTickManager::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  UClass *pUVar8;
  FString *pFVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  wchar_t *pwVar14;
  undefined1 *puVar15;
  uint *puVar16;
  wchar_t *pwVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  FReferenceCollector *local_res10;
  int local_res18;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  int local_98;
  uint uStack_94;
  undefined1 *puStack_90;
  undefined4 local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70;
  int local_50;
  
  local_res10 = param_2;
  UObject::AddReferencedObjects(param_1,param_2);
  if (param_1 == (UObject *)0x0) {
    pFVar9 = GetTypeName<UMovieSceneSequenceTickManager>(&local_c8);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar17);
  }
  pUVar8 = GetPrivateStaticClass();
  iVar4 = (int)pUVar8->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar4) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar8->_padding_)) {
    pFVar9 = GetTypeName<UMovieSceneSequenceTickManager>(&local_b8);
    pwVar17 = L"";
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    pFVar9 = GetFullNameForCastLogError<UObject>(&local_a8,param_1);
    if ((pFVar9->Data).ArrayNum != 0) {
      pwVar17 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar17,pwVar14);
  }
  puVar1 = &param_1[1].field_0x10;
  iVar4 = *(int *)&param_1[2].field_0x10;
  puVar2 = &param_1[1].field_0x20;
  local_98 = 0;
  uStack_94 = 1;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&param_1[2].field_0x8;
    if (*(uint **)&param_1[2].field_0x8 == (uint *)0x0) {
      puVar16 = (uint *)puVar2;
    }
    uVar12 = *puVar16;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar12 == 0) {
      iStack_80 = iStack_80 + 0x20;
      lVar10 = (longlong)local_98;
      local_98 = local_98 + 1;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_146206006;
      uVar12 = puVar16[lVar10 + 1];
    }
    uStack_94 = -uVar12 & uVar12;
    uVar3 = (ulonglong)uStack_94 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iStack_84 = local_res18 + -1 + iStack_80;
    if (iVar4 < iStack_84) {
LAB_146206006:
      iStack_84 = iVar4;
    }
  }
  local_88 = 0xffffffff;
  uVar12 = *(uint *)&param_1[2].field_0x10;
  local_50 = *(int *)&param_1[1].field_0x18 - *(int *)&param_1[2].field_0x1c;
  local_70._padding_ = CONCAT44(uStack_94,local_98);
  iVar13 = (int)uVar12 >> 5;
  local_70.CurrentBitIndex = iStack_84;
  local_70.UnvisitedBitMask = 0xffffffff;
  local_70._28_4_ = uStack_7c;
  local_70.BaseBitIndex = iStack_80;
  uVar18 = uVar12 & 0xffffffe0;
  puStack_90 = puVar2;
  local_78 = (longlong *)puVar1;
  local_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&param_1[2].field_0x10;
  plVar11 = (longlong *)puVar1;
  if (uVar12 != uVar5) {
    puVar15 = puVar2;
    if (*(undefined1 **)&param_1[2].field_0x8 != (undefined1 *)0x0) {
      puVar15 = *(undefined1 **)&param_1[2].field_0x8;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar18 = uVar18 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_146206100;
      uVar12 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar18;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_146206100:
  while( true ) {
    if ((int)plVar11[1] - *(int *)((longlong)plVar11 + 0x34) != local_50) {
      `TSparseArray<UMovieSceneSequenceTickManager::FLinkerGroup,FDefaultSparseArrayAllocator>::
      TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((local_70.CurrentBitIndex == uVar12) &&
        (local_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (plVar11 == (longlong *)puVar1)) break;
    (**(code **)(local_res10->_padding_ + 0x88))
              (local_res10,(longlong)local_70.CurrentBitIndex * 0x30 + *plVar11,0,0);
    local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
    plVar11 = local_78;
  }
  return;
}

// BeginDestroy @ 146208520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMovieSceneSequenceTickManager::BeginDestroy(UMovieSceneSequenceTickManager *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UWorld *this_00;
  
  if ((this->WorldTickDelegateHandle).ID != 0) {
    pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
    this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
    if (this_00 == (UWorld *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6187304322972254313>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequenceTickManager.cpp"
                         ,0x69,"World != nullptr");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      UWorld::RemoveMovieSceneSequenceTickHandler
                (this_00,(FDelegateHandle)(this->WorldTickDelegateHandle).ID);
      (this->WorldTickDelegateHandle).ID = 0;
    }
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// ClearLatentActions @ 14620b510

void __thiscall
UMovieSceneSequenceTickManager::ClearLatentActions
          (UMovieSceneSequenceTickManager *this,UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UObject *pUVar5;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  if ((param_1 == (UObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequenceTickManager.cpp"
                         ,0x1f9,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar1 = (this->LatentActionManager).LatentActions.ArrayNum;
  this_00 = (this->LatentActionManager).LatentActions.AllocatorInstance.Data;
  pFVar6 = this_00 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->LatentActionManager).LatentActions.ArrayNum != iVar1) {
      `TCheckedPointerIterator<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar6) break;
    if (((*(int *)&this_00[8].field_0x0 != 0) &&
        (*(longlong **)&this_00->field_0x0 != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(**(longlong **)&this_00->field_0x0 + 0x38))(), cVar4 != '\0')) {
      pUVar5 = (UObject *)0x0;
      if ((*(int *)&this_00[8].field_0x0 != 0) &&
         (*(longlong **)&this_00->field_0x0 != (longlong *)0x0)) {
        pUVar5 = (UObject *)(**(code **)(**(longlong **)&this_00->field_0x0 + 0x10))();
      }
      if (((pUVar5 == param_1) && (*(int *)&this_00[8].field_0x0 != 0)) &&
         (*(undefined8 **)&this_00->field_0x0 != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)&this_00->field_0x0)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)this_00,0,0,0x10);
        *(undefined4 *)&this_00[8].field_0x0 = 0;
      }
    }
    this_00 = this_00 + 0x10;
  }
  return;
}

// FlushRunners @ 146214aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneSequenceTickManager::FlushRunners(UMovieSceneSequenceTickManager *this)

{
  TSparseArray<UMovieSceneSequenceTickManager::FLinkerGroup,FDefaultSparseArrayAllocator> *pTVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  FUObjectItem *pFVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  TSparseArray<UMovieSceneSequenceTickManager::FLinkerGroup,FDefaultSparseArrayAllocator> *pTVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  TArray<UMovieSceneSequenceTickManager::FPendingOperation,TSizedDefaultAllocator<32>_> local_e8;
  int local_d8;
  uint uStack_d4;
  undefined1 *puStack_d0;
  undefined4 local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TSparseArray<UMovieSceneSequenceTickManager::FLinkerGroup,FDefaultSparseArrayAllocator> *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b0;
  int local_90;
  TArray<UMovieSceneSequenceTickManager::FPendingOperation,TSizedDefaultAllocator<32>_> *local_88;
  FPendingOperation *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TArrayView<UMovieSceneSequenceTickManager::FPendingOperation_const_,int> local_68 [2];
  
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88 = this->PendingActorOperations;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  pTVar1 = &this->LinkerGroups;
  this->PendingActorOperations = &local_e8;
  iVar4 = *(int *)&(this->LinkerGroups).field_0x28;
  puVar3 = &(this->LinkerGroups).field_0x10;
  local_d8 = 0;
  uStack_d4 = 1;
  iStack_c4 = 0;
  iStack_c0 = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(this->LinkerGroups).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar3;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar11 = (longlong)local_d8;
      iStack_c0 = iStack_c0 + 0x20;
      local_d8 = local_d8 + 1;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < local_d8) goto LAB_146214b8a;
      uVar12 = puVar16[lVar11 + 1];
    }
    uStack_d4 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_d4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    iStack_c4 = local_res18 + -1 + iStack_c0;
    if (iVar4 < iStack_c4) {
LAB_146214b8a:
      iStack_c4 = iVar4;
    }
  }
  local_c8 = 0xffffffff;
  uVar12 = *(uint *)&(this->LinkerGroups).field_0x28;
  local_90 = *(int *)&(this->LinkerGroups).field_0x8 - *(int *)&(this->LinkerGroups).field_0x34;
  local_b0._padding_ = CONCAT44(uStack_d4,local_d8);
  iVar13 = (int)uVar12 >> 5;
  local_b0.CurrentBitIndex = iStack_c4;
  local_b0.UnvisitedBitMask = 0xffffffff;
  local_b0._28_4_ = uStack_bc;
  local_b0.BaseBitIndex = iStack_c0;
  uVar17 = uVar12 & 0xffffffe0;
  puStack_d0 = puVar3;
  local_b8 = pTVar1;
  local_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar5 = *(uint *)&(this->LinkerGroups).field_0x28;
  pTVar14 = pTVar1;
  if (uVar12 != uVar5) {
    puVar15 = *(undefined1 **)&(this->LinkerGroups).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar3;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar13;
      uVar17 = uVar17 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_146214c72;
      uVar12 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    uVar12 = local_res20 + -1 + uVar17;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_146214c72:
  while( true ) {
    if (*(int *)&pTVar14->field_0x8 - *(int *)&pTVar14->field_0x34 != local_90) {
      local_res10[0] = 0;
      `TSparseArray<UMovieSceneSequenceTickManager::FLinkerGroup,FDefaultSparseArrayAllocator>::
      TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    lVar11 = (longlong)local_b0.CurrentBitIndex;
    if (((local_b0.CurrentBitIndex == uVar12) &&
        (local_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar14 == pTVar1))
    break;
    lVar6 = *(longlong *)pTVar14;
    lVar7 = *(longlong *)(lVar6 + lVar11 * 0x30);
    if (((lVar7 != 0) &&
        (pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar7 + 0xc)),
        ((uint)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) &&
       ((*(uint *)(*(longlong *)(lVar6 + lVar11 * 0x30) + 8) >> 0xf & 1) == 0)) {
      if ((*(longlong *)(lVar6 + 8 + lVar11 * 0x30) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FMovieSceneEntitySystemRunner::Flush
                (*(FMovieSceneEntitySystemRunner **)(lVar6 + 8 + lVar11 * 0x30),0.0,None);
    }
    local_b0.UnvisitedBitMask = local_b0.UnvisitedBitMask & ~local_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b0);
    pTVar14 = local_b8;
  }
  iVar4 = local_e8.ArrayNum;
  this->PendingActorOperations = local_88;
  local_78 = (FPendingOperation *)local_e8.AllocatorInstance.Data;
  if ((local_e8.ArrayNum < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iStack_70 = iVar4;
  local_68[0]._12_4_ = uStack_6c;
  local_68[0].ArrayNum = iVar4;
  local_68[0].DataPtr = local_78;
  ProcessPendingOperations(this,local_68);
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return;
}

// Get @ 146215d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMovieSceneSequenceTickManager * __cdecl UMovieSceneSequenceTickManager::Get(UObject *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  UMovieSceneSequenceTickManager *pUVar5;
  UWorld *this;
  UClass *pUVar6;
  FName *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  longlong *plVar10;
  undefined1 auStack_158 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_138;
  FDelegateAllocation local_130;
  undefined1 local_120 [24];
  wchar_t *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FDestructionSentinel local_f8;
  FDestructionSentinel local_e0;
  FDelegateAllocation *local_c8;
  FName local_c0;
  TStringView<wchar_t> local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (param_1 != (UObject *)0x0) {
    lVar4 = (**(code **)(*(longlong *)param_1 + 0x180))();
    if (lVar4 != 0) goto LAB_146215dbb;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("PlaybackContext != nullptr && PlaybackContext->GetWorld() != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequenceTickManager.cpp"
                     ,0x27,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UMovieSceneSequenceTickManager *)(*pcVar2)();
    return pUVar5;
  }
LAB_146215dbb:
  this = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
  iStack_100 = 0x23;
  local_108 = L"GlobalMovieSceneSequenceTickManager";
  pUVar6 = StaticClass();
  local_b8._12_4_ = uStack_fc;
  local_b8.Size = iStack_100;
  local_b8.DataPtr = local_108;
  pUVar5 = (UMovieSceneSequenceTickManager *)StaticFindObject(pUVar6,(UObject *)this,&local_b8,None)
  ;
  if (pUVar5 == (UMovieSceneSequenceTickManager *)0x0) {
    pFVar7 = ::FName::FName(&local_c0,L"GlobalMovieSceneSequenceTickManager");
    FVar1 = *pFVar7;
    if (FVar1 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar6 = StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar6);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._24_4_ = RF_NoFlags;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    local_a8._16_8_ = FVar1;
    pUVar5 = (UMovieSceneSequenceTickManager *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar10 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    local_138.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_130.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_138,(FWriteAccessScope *)&local_e0);
    local_c8 = &local_130;
    puVar8 = UE::Core::Private::DelegateAllocate(0x28,&local_130);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequenceTickManager____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UMovieSceneSequenceTickManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      puVar8[3] = 0;
      local_120._8_8_ = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UMovieSceneSequenceTickManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      FWeakObjectPtr::operator=
                ((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)((longlong)local_120 + 8));
      puVar8[4] = TickSequenceActors;
    }
    if (local_e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
    }
    UWorld::AddMovieSceneSequenceTickHandler
              (this,(TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)local_120);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_138,(FWriteAccessScope *)&local_f8);
    if ((local_130.DelegateSize != 0) &&
       (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_130.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_130,0,0,0x10);
      local_130.DelegateSize = 0;
    }
    if (local_f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
    }
    if (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_130.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_138.AccessDetector);
    if (local_120._0_8_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequenceTickManager.cpp"
                         ,0x32,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UMovieSceneSequenceTickManager *)(*pcVar2)();
        return pUVar5;
      }
    }
    (pUVar5->WorldTickDelegateHandle).ID = local_120._0_8_;
  }
  return pUVar5;
}

// GetLinker @ 1462193c0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEntitySystemLinker * __thiscall
UMovieSceneSequenceTickManager::GetLinker
          (UMovieSceneSequenceTickManager *this,FMovieSceneSequenceTickInterval *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UMovieSceneEntitySystemLinker *pUVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  iVar7 = FMovieSceneSequenceTickInterval::RoundTickIntervalMs(param_1);
  local_88 = 0;
  iVar3 = *(int *)&(this->LinkerGroups).field_0x28;
  puVar2 = &(this->LinkerGroups).field_0x10;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->LinkerGroups).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar2;
    }
    uVar11 = *puVar13;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar11 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar9 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_146219487;
      uVar11 = puVar13[lVar9 + 1];
    }
    uStack_84 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uStack_84 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_74 = (int)lVar9 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_146219487:
      iStack_74 = iVar3;
    }
  }
  uVar11 = *(uint *)&(this->LinkerGroups).field_0x28;
  local_40 = *(int *)&(this->LinkerGroups).field_0x8 - *(int *)&(this->LinkerGroups).field_0x34;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  iVar10 = (int)uVar11 >> 5;
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  uVar14 = uVar11 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pUVar8 = (UMovieSceneEntitySystemLinker *)(*pcVar5)();
    return pUVar8;
  }
  uVar4 = *(uint *)&(this->LinkerGroups).field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&(this->LinkerGroups).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar2;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_146219570;
      uVar11 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_146219570:
  while( true ) {
    if (*(int *)&(this->LinkerGroups).field_0x8 - *(int *)&(this->LinkerGroups).field_0x34 !=
        local_40) {
      `TSparseArray<UMovieSceneSequenceTickManager::FLinkerGroup,FDefaultSparseArrayAllocator>::
      TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar11) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    if (*(int *)(*(longlong *)&this->LinkerGroups + 0x18 + (longlong)local_60.CurrentBitIndex * 0x30
                ) == iVar7) {
      return *(UMovieSceneEntitySystemLinker **)
              (*(longlong *)&this->LinkerGroups + (longlong)local_60.CurrentBitIndex * 0x30);
    }
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return (UMovieSceneEntitySystemLinker *)0x0;
}

// GetPrivateStaticClass @ 14621bf10

UClass * __cdecl UMovieSceneSequenceTickManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSequenceTickManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSequenceTickManager",
               &Z_Registration_Info_UClass_UMovieSceneSequenceTickManager.InnerSingleton,
               StaticRegisterNativesUMovieSceneSequenceTickManager,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSequenceTickManager>,
               InternalVTableHelperCtorCaller<UMovieSceneSequenceTickManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSequenceTickManager.InnerSingleton;
}

// GetRunner @ 14621c5f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FMovieSceneEntitySystemRunner,1> * __thiscall
UMovieSceneSequenceTickManager::GetRunner
          (UMovieSceneSequenceTickManager *this,
          TSharedPtr<FMovieSceneEntitySystemRunner,1> *__return_storage_ptr__,
          FMovieSceneSequenceTickInterval *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> *pTVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  iVar8 = FMovieSceneSequenceTickInterval::RoundTickIntervalMs(param_1);
  iVar3 = *(int *)&(this->LinkerGroups).field_0x28;
  puVar1 = &(this->LinkerGroups).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->LinkerGroups).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar12 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar10 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14621c6b7;
      uVar12 = puVar14[lVar10 + 1];
    }
    uStack_84 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_74 = (int)lVar10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14621c6b7:
      iStack_74 = iVar3;
    }
  }
  uVar12 = *(uint *)&(this->LinkerGroups).field_0x28;
  local_40 = *(int *)&(this->LinkerGroups).field_0x8 - *(int *)&(this->LinkerGroups).field_0x34;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar11 = (int)uVar12 >> 5;
  uVar15 = uVar12 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TSharedPtr<FMovieSceneEntitySystemRunner,1> *)(*pcVar6)();
    return pTVar9;
  }
  uVar4 = *(uint *)&(this->LinkerGroups).field_0x28;
  if (uVar12 != uVar4) {
    puVar13 = *(undefined1 **)&(this->LinkerGroups).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14621c794;
      uVar12 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14621c794:
  while( true ) {
    if (*(int *)&(this->LinkerGroups).field_0x8 - *(int *)&(this->LinkerGroups).field_0x34 !=
        local_40) {
      `TSparseArray<UMovieSceneSequenceTickManager::FLinkerGroup,FDefaultSparseArrayAllocator>::
      TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar12) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar10 = (longlong)local_60.CurrentBitIndex * 0x30 + *(longlong *)&this->LinkerGroups;
    if (*(int *)(lVar10 + 0x18) == iVar8) {
      __return_storage_ptr__->Object = *(FMovieSceneEntitySystemRunner **)(lVar10 + 8);
      pTVar5 = *(TReferenceControllerBase<1> **)(lVar10 + 0x10);
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      return __return_storage_ptr__;
    }
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  __return_storage_ptr__->Object = (FMovieSceneEntitySystemRunner *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// ProcessPendingOperations @ 146229c30

void __thiscall
UMovieSceneSequenceTickManager::ProcessPendingOperations
          (UMovieSceneSequenceTickManager *this,
          TArrayView<UMovieSceneSequenceTickManager::FPendingOperation_const_,int> *param_1)

{
  FPendingOperation *pFVar1;
  UObject *pUVar2;
  FPendingOperation *pFVar3;
  UObject *local_28 [2];
  UObject *local_18 [2];
  
  pFVar3 = param_1->DataPtr;
  pFVar1 = pFVar3 + param_1->ArrayNum;
  for (; pFVar3 != pFVar1; pFVar3 = pFVar3 + 1) {
    pUVar2 = FWeakObjectPtr::Get(&(pFVar3->WeakObject).WeakPtr);
    if (pUVar2 != (UObject *)0x0) {
      pUVar2 = *(UObject **)&pFVar3->Interface;
      if (pFVar3->Type == Register) {
        local_28[0] = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        local_28[1] = *(UObject **)&(pFVar3->Interface).field_0x8;
        RegisterTickClient(this,&pFVar3->TickInterval,
                           (TScriptInterface<IMovieSceneSequenceTickManagerClient> *)local_28);
      }
      else {
        local_18[0] = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        local_18[1] = *(UObject **)&(pFVar3->Interface).field_0x8;
        UnregisterTickClient
                  (this,(TScriptInterface<IMovieSceneSequenceTickManagerClient> *)local_18);
      }
    }
  }
  return;
}

// RegisterTickClient @ 14622c640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSequenceTickManager::RegisterTickClient
          (UMovieSceneSequenceTickManager *this,FMovieSceneSequenceTickInterval *param_1,
          TScriptInterface<IMovieSceneSequenceTickManagerClient> *param_2)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  TArray<UMovieSceneSequenceTickManager::FPendingOperation,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  FTokenizedMessage *pFVar7;
  FName FVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  FMovieSceneSequenceTickInterval *pFVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  FMessageLog *this_00;
  FText *pFVar17;
  TSharedRef<FTokenizedMessage,1> *pTVar18;
  TSharedRef<FTextToken,1> *pTVar19;
  TSharedRef<FUObjectToken,1> *pTVar20;
  FTextFormat *pFVar21;
  UObject *pUVar22;
  UClass *pUVar23;
  void *pvVar24;
  FName *pFVar25;
  FName FVar26;
  FString *pFVar27;
  UMovieSceneEntitySystemLinker *this_01;
  TSharedRef<FMovieSceneEntitySystemRunner,1> *pTVar28;
  undefined1 *puVar29;
  FWeakObjectPtr *pFVar30;
  wchar_t *pwVar31;
  undefined8 *puVar32;
  IMovieSceneSequenceTickManagerClient *pIVar33;
  undefined1 *puVar34;
  FWeakObjectPtr *pFVar35;
  uint uVar36;
  float fVar37;
  float fVar38;
  undefined1 auStackY_408 [32];
  undefined1 local_3b8 [8];
  FWeakObjectPtr *local_3b0;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_3a8;
  FMovieSceneSequenceTickInterval *local_398;
  UObject *local_390;
  FTokenizedMessage *local_388;
  IMovieSceneSequenceTickManagerClient *local_380;
  FWeakObjectPtr FStack_378;
  uint local_370;
  undefined4 uStack_36c;
  UObject *local_368;
  undefined8 local_360;
  FWeakObjectPtr local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined4 local_344;
  IMovieSceneSequenceTickManagerClient *local_340;
  FMovieSceneEntitySystemRunner *local_338;
  FSharedReferencer<1> local_330;
  UObject *local_328;
  FName local_320;
  undefined1 local_318 [8];
  TSharedRef<IMessageToken,1> local_310;
  TSharedRef<IMessageToken,1> local_300;
  TSharedRef<IMessageToken,1> local_2f0;
  TSharedRef<IMessageToken,1> local_2e0;
  FSparseArrayAllocationInfo local_2d0;
  FTextFormat local_2c0;
  FText local_2b0;
  TSharedRef<FTokenizedMessage,1> local_2a0;
  FText local_290;
  TSharedRef<FTokenizedMessage,1> local_280;
  TSharedRef<FUObjectToken,1> local_270;
  FText local_260;
  TSharedRef<FTokenizedMessage,1> local_250;
  TSharedRef<FTextToken,1> local_240;
  FText local_230;
  TSharedRef<FTokenizedMessage,1> local_220;
  FText local_210;
  TSharedRef<FTokenizedMessage,1> local_200;
  TSharedRef<FUObjectToken,1> local_1f0;
  FText local_1e0;
  FString local_1d0;
  TSharedRef<FMovieSceneEntitySystemRunner,1> local_1c0;
  FName local_1b0;
  TSharedRef<FTextToken,1> local_1a8;
  FTextFormat local_198;
  FMessageLog local_188;
  FFormatArgumentValue local_158;
  undefined4 local_138;
  longlong local_130;
  longlong *local_128;
  undefined4 local_120;
  undefined4 local_118;
  longlong local_110;
  longlong *local_108;
  undefined4 local_100;
  TStringBuilderBase<wchar_t> local_f8;
  wchar_t local_d8 [64];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_408;
  pUVar22 = *(UObject **)param_2;
  local_398 = param_1;
  local_390 = pUVar22;
  if ((pUVar22 == (UObject *)0x0) ||
     (pIVar33 = *(IMovieSceneSequenceTickManagerClient **)&param_2->field_0x8,
     pIVar33 == (IMovieSceneSequenceTickManagerClient *)0x0)) {
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6187304322972254329>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequenceTickManager.cpp"
                        ,0x79,"InterfaceObject && ClientInterface");
    if (!bVar12) {
      return;
    }
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar5 = this->PendingActorOperations;
  if (pTVar5 != (TArray<UMovieSceneSequenceTickManager::FPendingOperation,TSizedDefaultAllocator<32>_>
                 *)0x0) {
    local_368 = pUVar22;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(pUVar22);
    }
    local_360 = *(undefined8 *)&param_2->field_0x8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar22);
    }
    local_358.ObjectIndex = 0;
    local_358.ObjectSerialNumber = 0;
    local_328 = pUVar22;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar22);
    }
    FWeakObjectPtr::operator=(&local_358,(FObjectPtr)&local_328);
    local_348._0_1_ = param_1->bTickWhenPaused;
    local_348._1_1_ = param_1->bAllowRounding;
    local_348._2_2_ = *(undefined2 *)&param_1->field_0xa;
    local_350._0_4_ = param_1->TickIntervalSeconds;
    local_350._4_4_ = param_1->EvaluationBudgetMicroseconds;
    local_344 = 0;
    pFVar6 = (pTVar5->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_368) &&
        ((FScriptContainerElement *)&local_368 < pFVar6 + (longlong)pTVar5->ArrayMax * 0x28)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar13 = pTVar5->ArrayNum;
    if (iVar13 == pTVar5->ArrayMax) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
    }
    lVar16 = (longlong)iVar13;
    pTVar5->ArrayNum = iVar13 + 1;
    pFVar6 = (pTVar5->AllocatorInstance).Data;
    *(UObject **)(pFVar6 + lVar16 * 0x28) = local_368;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_368 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_368);
    }
    *(undefined8 *)(pFVar6 + lVar16 * 0x28 + 8) = local_360;
    *(FWeakObjectPtr *)(pFVar6 + lVar16 * 0x28 + 0x10) = local_358;
    *(undefined8 *)(pFVar6 + lVar16 * 0x28 + 0x18) = local_350;
    *(undefined4 *)(pFVar6 + lVar16 * 0x28 + 0x20) = local_348;
    *(undefined4 *)(pFVar6 + lVar16 * 0x28 + 0x24) = local_344;
    return;
  }
  UnregisterTickClientImpl(this,pIVar33);
  iVar13 = FMovieSceneSequenceTickInterval::RoundTickIntervalMs(param_1);
  uVar36 = 0;
  if (0 < *(int *)&(this->LinkerGroups).field_0x8) {
    do {
      if ((((int)uVar36 < 0) || (*(int *)&(this->LinkerGroups).field_0x28 <= (int)uVar36)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      puVar34 = *(undefined1 **)&(this->LinkerGroups).field_0x20;
      puVar29 = &(this->LinkerGroups).field_0x10;
      if (puVar34 != (undefined1 *)0x0) {
        puVar29 = puVar34;
      }
      uVar14 = uVar36;
      if ((int)uVar36 < 0) {
        uVar14 = uVar36 + 0x1f;
      }
    } while ((((*(uint *)(puVar29 + (longlong)((int)uVar14 >> 5) * 4) >> (uVar36 & 0x1f) & 1) == 0)
             || (*(int *)(*(longlong *)&this->LinkerGroups + 0x18 + (longlong)(int)uVar36 * 0x30) !=
                 iVar13)) &&
            (uVar36 = uVar36 + 1, (int)uVar36 < *(int *)&(this->LinkerGroups).field_0x8));
  }
  fVar38 = local_398->EvaluationBudgetMicroseconds * __real_3a83126f;
  local_340 = pIVar33;
  if ((-1 < (int)uVar36) && ((int)uVar36 < *(int *)&(this->LinkerGroups).field_0x28)) {
    puVar34 = *(undefined1 **)&(this->LinkerGroups).field_0x20;
    if (puVar34 == (undefined1 *)0x0) {
      puVar34 = &(this->LinkerGroups).field_0x10;
    }
    if ((*(uint *)(puVar34 + (longlong)((int)(uVar36 + ((int)uVar36 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar36 & 0x1f) & 1) != 0) {
      pFVar35 = *(FWeakObjectPtr **)&this->LinkerGroups;
      lVar16 = (longlong)(int)uVar36;
      psVar2 = (short *)((longlong)&pFVar35[lVar16 * 6 + 5].ObjectIndex + 2);
      *psVar2 = *psVar2 + 1;
      fVar37 = (float)pFVar35[lVar16 * 6 + 3].ObjectSerialNumber;
      local_3b0 = pFVar35;
      if (fVar37 != fVar38) {
        if (fVar37 == 0.0) {
          pFVar35[lVar16 * 6 + 3].ObjectSerialNumber = (int)fVar38;
          ::FName::FName(&local_320,"PIE");
          this_00 = FMessageLog::FMessageLog(&local_188,&local_320);
          pFVar17 = FText::AsLocalizable_Advanced_LocText
                              (&local_210,L"MovieSceneSequenceTickManager",L"BudgetMismatch",
                               L"Attempting to play multiple sequences with the same tick interval but different budgets. Lowest budget will be used, but may result in undesired multi-frame effects."
                              );
          pTVar18 = FMessageLog::Warning(this_00,&local_220,pFVar17);
          pFVar7 = pTVar18->Object;
          pFVar17 = FText::AsLocalizable_Advanced_LocText
                              (&local_230,L"MovieSceneSequenceTickManager",L"ClientList",
                               L"Initiating tick client ");
          pTVar19 = FTextToken::Create(&local_240,pFVar17,true);
          local_2f0.Object = (IMessageToken *)pTVar19->Object;
          local_2f0.SharedReferenceCount.ReferenceController =
               (pTVar19->SharedReferenceCount).ReferenceController;
          if (local_2f0.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_2f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_2f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          pTVar18 = FTokenizedMessage::AddToken(pFVar7,&local_250,&local_2f0);
          pFVar7 = pTVar18->Object;
          pFVar17 = FText::FText(&local_260);
          pTVar20 = FUObjectToken::Create(&local_270,local_390,pFVar17);
          local_300.Object = (IMessageToken *)pTVar20->Object;
          local_300.SharedReferenceCount.ReferenceController =
               (pTVar20->SharedReferenceCount).ReferenceController;
          if (local_300.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_300.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_300.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          pTVar18 = FTokenizedMessage::AddToken(pFVar7,&local_280,&local_300);
          local_388 = pTVar18->Object;
          fVar37 = (float)pFVar35[lVar16 * 6 + 3].ObjectSerialNumber * __real_3b03126f +
                   __real_3f000000;
          iVar13 = local_3b0[lVar16 * 6 + 3].ObjectIndex;
          pFVar17 = FText::AsLocalizable_Advanced_LocText
                              (&local_290,L"MovieSceneSequenceTickManager",L"ExistingClients",
                               L" with budget of {0}μs into group with an interval of {1}ms and budget of {2}μs. Existing clients: "
                              );
          pFVar21 = FTextFormat::FTextFormat(&local_198,pFVar17,Default);
          local_158.Type = Int;
          local_158.TextValue.field0_0x0.TypedValue.TextData.Reference =
               (TRefCountPtr<ITextData>)(ITextData *)0x0;
          local_158.TextValue.field0_0x0.TypedValue.Flags = 0;
          local_138 = 0;
          local_128 = (longlong *)0x0;
          local_120 = 0;
          local_118 = 0;
          local_108 = (longlong *)0x0;
          local_100 = 0;
          local_3a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3a8.ArrayNum = 3;
          local_158.field1_0x8.IntValue =
               (longlong)(int)ROUND(fVar38 * __real_3b03126f + __real_3f000000) >> 1;
          local_110 = (longlong)((int)ROUND(fVar37) >> 1);
          local_130 = (longlong)iVar13;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,3,0,&local_3a8.AllocatorInstance,3,&local_3a8.ArrayMax);
          ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                    (local_3a8.AllocatorInstance.Data,&local_158,3);
          local_2c0.TextFormatData.Object = (pFVar21->TextFormatData).Object;
          local_2c0.TextFormatData.SharedReferenceCount.ReferenceController =
               (pFVar21->TextFormatData).SharedReferenceCount.ReferenceController;
          if (local_2c0.TextFormatData.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_2c0.TextFormatData.SharedReferenceCount.ReferenceController)->
            SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_2c0.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          FText::Format(&local_2b0,&local_2c0,&local_3a8);
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_3a8.AllocatorInstance.Data,local_3a8.ArrayNum);
          if ((FFormatArgumentValue *)local_3a8.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_3a8.AllocatorInstance.Data);
          }
          if (local_108 != (longlong *)0x0) {
            (**(code **)(*local_108 + 0x10))();
          }
          if (local_128 != (longlong *)0x0) {
            (**(code **)(*local_128 + 0x10))();
          }
          if (local_158.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_158.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar21->TextFormatData).SharedReferenceCount.ReferenceController);
          pTVar19 = FTextToken::Create(&local_1a8,&local_2b0,true);
          local_310.Object = (IMessageToken *)pTVar19->Object;
          local_310.SharedReferenceCount.ReferenceController =
               (pTVar19->SharedReferenceCount).ReferenceController;
          if (local_310.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_310.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_310.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          FTokenizedMessage::AddToken(local_388,&local_2a0,&local_310);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_310.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1a8.SharedReferenceCount.ReferenceController);
          if (local_2b0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2b0.TextData.Reference + 0x10))();
          }
          if (local_290.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_290.TextData.Reference + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_280.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_300.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_270.SharedReferenceCount.ReferenceController);
          if (local_260.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_260.TextData.Reference + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_250.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2f0.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_240.SharedReferenceCount.ReferenceController);
          if (local_230.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_230.TextData.Reference + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_220.SharedReferenceCount.ReferenceController);
          if (local_210.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_210.TextData.Reference + 0x10))();
          }
          FMessageLog::~FMessageLog(&local_188);
          pIVar33 = local_340;
          pFVar6 = (this->TickableClients).AllocatorInstance.Data;
          iVar13 = (this->TickableClients).ArrayNum;
          pFVar35 = (FWeakObjectPtr *)(pFVar6 + 8);
          pFVar30 = (FWeakObjectPtr *)(pFVar6 + (longlong)iVar13 * 0x18);
          local_3b0 = pFVar30;
          while( true ) {
            if ((this->TickableClients).ArrayNum != iVar13) {
              local_3b8[0] = 0;
              `TCheckedPointerIterator<UMovieSceneSequenceTickManager::FTickableClientData,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_3b8);
            }
            if (pFVar35 + -1 == pFVar30) break;
            if (pFVar35[1].ObjectIndex == uVar36) {
              pUVar22 = FWeakObjectPtr::Get(pFVar35);
              if (pUVar22 != (UObject *)0x0) {
                while( true ) {
                  pUVar23 = Z_Construct_UClass_AActor_NoRegister();
                  iVar3 = (int)pUVar23->_padding_;
                  if ((iVar3 <= *(int *)(*(longlong *)&pUVar22->field_0x10 + 0x38)) &&
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(*(longlong *)&pUVar22->field_0x10 + 0x30) +
                       (longlong)iVar3 * 8) == &pUVar23->_padding_)) break;
                  pUVar23 = Z_Construct_UClass_USceneComponent_NoRegister();
                  iVar3 = (int)pUVar23->_padding_;
                  if (((iVar3 <= *(int *)(*(longlong *)&pUVar22->field_0x10 + 0x38)) &&
                      ((longlong *)
                       *(undefined1 **)
                        (*(longlong *)(*(longlong *)&pUVar22->field_0x10 + 0x30) +
                        (longlong)iVar3 * 8) == &pUVar23->_padding_)) ||
                     (pUVar22 = *(UObject **)&pUVar22->field_0x20, pUVar22 == (UObject *)0x0))
                  break;
                }
              }
              pFVar7 = local_2a0.Object;
              pFVar17 = FText::FText(&local_1e0);
              pTVar20 = FUObjectToken::Create(&local_1f0,pUVar22,pFVar17);
              local_2e0.Object = (IMessageToken *)pTVar20->Object;
              local_2e0.SharedReferenceCount.ReferenceController =
                   (pTVar20->SharedReferenceCount).ReferenceController;
              if (local_2e0.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_2e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_2e0.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              FTokenizedMessage::AddToken(pFVar7,&local_200,&local_2e0);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_200.SharedReferenceCount.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_2e0.SharedReferenceCount.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_1f0.SharedReferenceCount.ReferenceController);
              pFVar30 = local_3b0;
              if (local_1e0.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_1e0.TextData.Reference + 0x10))();
                pFVar30 = local_3b0;
              }
            }
            pFVar35 = pFVar35 + 3;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2a0.SharedReferenceCount.ReferenceController);
        }
        else if (fVar38 != 0.0) {
          if (fVar38 <= fVar37) {
            fVar37 = fVar38;
          }
          pFVar35[lVar16 * 6 + 3].ObjectSerialNumber = (int)fVar37;
        }
      }
      goto LAB_14622d15b;
    }
  }
  iVar3 = *(int *)&(this->LinkerGroups).field_0x34;
  if (iVar3 == 0) {
    iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x30,8,1,(ForAnyElementType *)&this->LinkerGroups,
                        (int *)&(this->LinkerGroups).field_0x8,
                        (int *)&(this->LinkerGroups).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->LinkerGroups).field_0x10,false);
  }
  else {
    iVar15 = *(int *)&(this->LinkerGroups).field_0x30;
    iVar3 = iVar3 + -1;
    lVar16 = *(longlong *)&this->LinkerGroups;
    iVar4 = *(int *)(lVar16 + 4 + (longlong)iVar15 * 0x30);
    *(int *)&(this->LinkerGroups).field_0x30 = iVar4;
    *(int *)&(this->LinkerGroups).field_0x34 = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(lVar16 + (longlong)iVar4 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<48,8,FDefaultSparseArrayAllocator> *)&this->LinkerGroups,&local_2d0,
             iVar15);
  if (local_2d0.Pointer != (undefined8 *)0x0) {
    *(undefined8 *)local_2d0.Pointer = 0;
    *(undefined8 *)((longlong)local_2d0.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_2d0.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_2d0.Pointer + 0x18) = 0;
    *(undefined8 *)((longlong)local_2d0.Pointer + 0x20) = 0;
    *(undefined8 *)((longlong)local_2d0.Pointer + 0x28) = 0;
    *(undefined8 *)local_2d0.Pointer = 0;
    *(undefined8 *)((longlong)local_2d0.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_2d0.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_2d0.Pointer + 0x18) = 0;
    *(undefined4 *)((longlong)local_2d0.Pointer + 0x20) = 0xbf800000;
    *(undefined4 *)((longlong)local_2d0.Pointer + 0x24) = 0xbf800000;
    *(undefined4 *)((longlong)local_2d0.Pointer + 0x28) = 0;
  }
  local_f8.Base = local_d8;
  local_f8.CurPos = local_d8;
  local_f8.bIsDynamic = false;
  local_f8.bIsExternal = false;
  local_f8.End = (wchar_t *)local_58;
  pvVar24 = FGenericPlatformString::Memcpy(local_d8,L"MovieSceneSequencePlayerEntityLinker",0x48);
  local_f8.CurPos = (wchar_t *)((longlong)pvVar24 + 0x48);
  if (iVar13 != 0) {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_f8,L"_%i_ms");
  }
  if (local_f8.End < local_f8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_f8,1);
  }
  *local_f8.CurPos = L'\0';
  pFVar25 = ::FName::FName(&local_1b0,local_f8.Base);
  FVar8 = *pFVar25;
  FVar26 = (FName)Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister();
  pUVar23 = (UClass *)(**(code **)(this->_padding_ + 0x180))(this);
  MakeUniqueObjectName((UObject *)local_318,pUVar23,FVar26,FVar8.ComparisonIndex.Value.Value);
  pFVar27 = ::FName::ToString((FName *)local_318,&local_1d0);
  if ((pFVar27->Data).ArrayNum == 0) {
    pwVar31 = L"";
  }
  else {
    pwVar31 = (wchar_t *)(pFVar27->Data).AllocatorInstance.Data;
  }
  pUVar22 = (UObject *)(**(code **)(this->_padding_ + 0x180))(this);
  this_01 = UMovieSceneEntitySystemLinker::FindOrCreateLinker(pUVar22,LevelSequences,pwVar31);
  if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
  }
  if ((this_01 == (UMovieSceneEntitySystemLinker *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Linker",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequenceTickManager.cpp"
                          ,0xad,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  puVar32 = (undefined8 *)((longlong)local_2d0.Index * 0x30 + *(longlong *)&this->LinkerGroups);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_01 != (UMovieSceneEntitySystemLinker *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  *puVar32 = this_01;
  pTVar28 = UMovieSceneEntitySystemLinker::GetRunner(this_01,&local_1c0);
  local_330.ReferenceController = (pTVar28->SharedReferenceCount).ReferenceController;
  local_338 = pTVar28->Object;
  if (local_330.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_330.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_330.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FMovieSceneEntitySystemRunner **)(puVar32 + 1) != &local_338) {
    puVar32[1] = local_338;
    local_338 = (FMovieSceneEntitySystemRunner *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(puVar32 + 2),&local_330);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_330.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c0.SharedReferenceCount.ReferenceController);
  *(float *)((longlong)puVar32 + 0x1c) = fVar38;
  *(int *)(puVar32 + 3) = iVar13;
  *(undefined2 *)((longlong)puVar32 + 0x2a) = 1;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_f8);
  uVar36 = local_2d0.Index;
LAB_14622d15b:
  pFVar11 = local_398;
  local_380 = pIVar33;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(local_390);
  }
  local_388 = (FTokenizedMessage *)local_390;
  FStack_378.ObjectIndex = 0;
  FStack_378.ObjectSerialNumber = 0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(local_390);
  }
  FWeakObjectPtr::operator=(&FStack_378,(FObjectPtr)&local_388);
  pFVar6 = (this->TickableClients).AllocatorInstance.Data;
  local_370 = uVar36 & 0xffff;
  uStack_36c = CONCAT31(uStack_36c._1_3_,pFVar11->bTickWhenPaused);
  if (((pFVar6 <= (FScriptContainerElement *)&local_380) &&
      ((FScriptContainerElement *)&local_380 <
       pFVar6 + (longlong)(this->TickableClients).ArrayMax * 0x18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar13 = (this->TickableClients).ArrayNum;
  piVar1 = &(this->TickableClients).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&(this->TickableClients).AllocatorInstance,piVar1);
  }
  (this->TickableClients).ArrayNum = iVar13 + 1;
  pFVar9 = (this->TickableClients).AllocatorInstance.Data;
  pFVar6 = pFVar9 + (longlong)iVar13 * 0x18;
  *(IMovieSceneSequenceTickManagerClient **)pFVar6 = local_380;
  *(FWeakObjectPtr *)(pFVar6 + 8) = FStack_378;
  *(ulonglong *)(pFVar9 + (longlong)iVar13 * 0x18 + 0x10) = CONCAT44(uStack_36c,local_370);
  return;
}

// RunLatentActions @ 1462337e0

void __thiscall
UMovieSceneSequenceTickManager::RunLatentActions(UMovieSceneSequenceTickManager *this)

{
  UMovieSceneSequenceTickManager *local_res8 [4];
  code *local_18;
  UMovieSceneSequenceTickManager **local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMovieSceneSequenceTickManager::RunLatentActions'::__l2::<lambda_1>,void>
             ::Call;
  local_res8[0] = this;
  FMovieSceneLatentActionManager::RunLatentActions
            (&this->LatentActionManager,(TFunctionRef<void___cdecl(void)> *)&local_18);
  return;
}

// StaticRegisterNativesUMovieSceneSequenceTickManager @ 146237d10

void __cdecl
UMovieSceneSequenceTickManager::StaticRegisterNativesUMovieSceneSequenceTickManager(void)

{
  return;
}

// TickSequenceActors @ 146238aa0

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
UMovieSceneSequenceTickManager::TickSequenceActors
          (UMovieSceneSequenceTickManager *this,float param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  float fVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  undefined1 *puVar8;
  longlong lVar9;
  float *pfVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined8 uVar12;
  code *pcVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  float fVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  uint uVar22;
  int iVar23;
  FName *pFVar24;
  FThreadSafeStaticStat<FStat_MovieSceneEval_SequenceTickManager> FVar25;
  FUObjectItem *pFVar26;
  UClass *pUVar27;
  UWorld *this_00;
  FSparseArrayAllocationInfo *pFVar28;
  FThreadSafeStaticStat<FStat_MovieSceneEval_TickClients> FVar29;
  UObject *pUVar30;
  longlong lVar31;
  undefined1 *puVar32;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,4>_>_> FVar33;
  ForElementType<unsigned_int> FVar34;
  uint uVar35;
  FName FVar36;
  ForAnyElementType FVar37;
  int iVar38;
  FScriptContainerElement *pFVar39;
  FName FVar40;
  uint uVar41;
  uint uVar42;
  UMovieSceneSequenceTickManager *pUVar43;
  longlong lVar44;
  float fVar45;
  float fVar46;
  undefined1 auStackY_2b8 [32];
  undefined1 local_256;
  undefined1 local_255 [5];
  FName local_250;
  FName local_248;
  UMovieSceneSequenceTickManager *local_240;
  FColor_u_0 local_238;
  FColor_u_0 local_234;
  TArray<UMovieSceneSequenceTickManager::FPendingOperation,TSizedDefaultAllocator<32>_> local_230;
  FName local_220;
  FName local_218;
  FName local_210;
  FName local_200;
  int local_1f0;
  int local_1ec;
  TArray<UMovieSceneSequenceTickManager::FPendingOperation,TSizedDefaultAllocator<32>_> *local_1e8;
  UMovieSceneSequenceTickManager *local_1e0;
  UObject *local_1d8 [2];
  UObject *local_1c8 [2];
  code *local_1b8;
  UMovieSceneSequenceTickManager **local_1b0;
  FName local_1a8;
  FName local_1a0;
  FSparseArrayAllocationInfo local_198;
  TBitArray<FDefaultBitArrayAllocator> local_188;
  TSparseArrayBase<8,4,TSparseArrayAllocator<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
  local_168;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_240 = this;
  if (!__CsvProfilerStat283) {
    FCsvProfilerTrace::OutputInlineStatExclusive("MovieSceneEval");
    __CsvProfilerStat283 = true;
  }
  FCsvProfiler::BeginExclusiveStat("MovieSceneEval","CSV_MovieSceneEval");
  uVar35 = 0;
  FVar25 = StatPtr_MovieSceneEval_SequenceTickManager;
  if (StatPtr_MovieSceneEval_SequenceTickManager ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_SequenceTickManager>)0x0) {
    pFVar24 = ::FName::FName(&local_1a8,"MovieSceneEval_SequenceTickManager");
    FVar25 = (FThreadSafeStaticStat<FStat_MovieSceneEval_SequenceTickManager>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_SequenceTickManager,
                        *pFVar24,L"Sequence Tick Manager","STATGROUP_MovieSceneEval",
                        "STATCAT_Advanced",L"Movie Scene Evaluation",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar40 = *(FName *)FVar25;
  bVar15 = false;
  bVar17 = false;
  local_210.ComparisonIndex.Value = 0;
  local_210.Number = 0;
  bVar19 = false;
  bVar20 = false;
  if ((FVar40.ComparisonIndex.Value.Value == 0) && (FVar40.Number == 0)) {
LAB_146238c4f:
    bVar17 = bVar20;
    bVar15 = bVar19;
    bVar19 = false;
    local_248 = local_210;
    FVar40 = local_210;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_238.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_238._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
      bVar15 = false;
      bVar17 = true;
      bVar19 = false;
      bVar20 = true;
      if (-1 < CpuChannel->Enabled) {
        local_220.ComparisonIndex.Value = FVar40.ComparisonIndex.Value.Value;
        local_220.Number = FVar40.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_220,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequenceTickManager.cpp"
                   ,0x11c);
        bVar15 = true;
        bVar17 = true;
        bVar19 = true;
        bVar20 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146238c4f;
    local_248 = FVar40;
    FThreadStats::AddMessage(FVar40,CycleScopeStart);
    bVar19 = true;
  }
  pFVar26 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
  if ((((uint)((ulonglong)(pFVar26->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) ||
     (((uint)this->_padding_ >> 0xf & 1) != 0)) goto LAB_146239768;
  pUVar27 = Z_Construct_UClass_UWorld_NoRegister();
  this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar27);
  bVar20 = UWorld::IsPaused(this_00);
  fVar18 = __real_3a83126f;
  dVar6 = this_00->UnpausedTimeSeconds;
  dVar7 = this_00->TimeSeconds;
  local_168.NumFreeIndices = 0;
  local_168.Data.AllocatorInstance.SecondaryData =
       (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,4>_>_>)0x0;
  local_168.Data.ArrayNum = 0;
  local_168.Data.ArrayMax = 0x10;
  local_168.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_168.AllocationFlags.NumBits = 0;
  local_168.AllocationFlags.MaxBits = 0x80;
  local_168.FirstFreeIndex = -1;
  local_188.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_188.NumBits = 0;
  local_188.MaxBits = 0x80;
  pUVar43 = this;
  uVar41 = uVar35;
  if (0 < *(int *)&(this->LinkerGroups).field_0x8) {
    uVar42 = 1;
    lVar44 = 0;
    do {
      if ((((int)uVar35 < 0) || (*(int *)&(this->LinkerGroups).field_0x28 <= (int)uVar35)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L""), uVar41 = local_188.NumBits, bVar21)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      puVar8 = *(undefined1 **)&(this->LinkerGroups).field_0x20;
      puVar32 = &(this->LinkerGroups).field_0x10;
      if (puVar8 != (undefined1 *)0x0) {
        puVar32 = puVar8;
      }
      uVar22 = uVar35;
      if ((int)uVar35 < 0) {
        uVar22 = uVar35 + 0x1f;
      }
      if ((*(uint *)(puVar32 + (longlong)((int)uVar22 >> 5) * 4) & uVar42) != 0) {
        lVar9 = *(longlong *)&local_240->LinkerGroups;
        if ((*(longlong *)(lVar9 + 8 + lVar44) == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar21)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        bVar21 = FMovieSceneEntitySystemRunner::IsCurrentlyEvaluating
                           (*(FMovieSceneEntitySystemRunner **)(lVar9 + 8 + lVar44));
        if (bVar21) {
          iVar38 = (uVar35 - local_188.NumBits) + 1;
          if (0 < iVar38) {
            iVar23 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_188,iVar38);
            TBitArray<FDefaultBitArrayAllocator>::SetRange(&local_188,iVar23,iVar38,false);
          }
          if ((((int)uVar35 < 0) || (local_188.NumBits <= (int)uVar35)) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar21)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          FVar34 = (ForElementType<unsigned_int>)&local_188;
          if (local_188.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar34 = local_188.AllocatorInstance.SecondaryData;
          }
          puVar1 = (uint *)((longlong)FVar34 + (longlong)((int)uVar22 >> 5) * 4);
          *puVar1 = *puVar1 | uVar42;
          uVar41 = local_188.NumBits;
        }
        else {
          fVar4 = *(float *)(lVar9 + 0x20 + lVar44);
          fVar45 = param_1;
          fVar46 = param_1;
          if (0.0 <= fVar4) {
            fVar46 = (float)dVar7 - *(float *)(lVar9 + 0x24 + lVar44);
            fVar45 = (float)dVar6 - fVar4;
            uVar41 = local_188.NumBits;
            if (fVar45 < (float)*(int *)(lVar9 + 0x18 + lVar44) * fVar18) goto LAB_146238ef1;
          }
          *(float *)(lVar9 + 0x20 + lVar44) = (float)dVar6;
          *(float *)(lVar9 + 0x24 + lVar44) = (float)dVar7;
          pFVar28 = TSparseArrayBase<8,4,TSparseArrayAllocator<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
                    ::InsertUninitialized(&local_168,&local_198,uVar35);
          pfVar10 = pFVar28->Pointer;
          uVar41 = local_188.NumBits;
          if (pfVar10 != (float *)0x0) {
            *pfVar10 = fVar45;
            pfVar10[1] = fVar46;
          }
        }
      }
LAB_146238ef1:
      uVar35 = uVar35 + 1;
      uVar42 = uVar42 << 1 | (uint)((int)uVar42 < 0);
      lVar44 = lVar44 + 0x30;
      pUVar43 = local_240;
    } while ((int)uVar35 < *(int *)&(local_240->LinkerGroups).field_0x8);
  }
  if ((local_168.Data.ArrayNum != local_168.NumFreeIndices) || (uVar41 != 0)) {
    local_1e8 = pUVar43->PendingActorOperations;
    pUVar43->PendingActorOperations = &local_230;
    local_230.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_230.ArrayNum = 0;
    local_230.ArrayMax = 0;
    if (local_168.Data.ArrayNum != local_168.NumFreeIndices) {
      FVar29 = StatPtr_MovieSceneEval_TickClients;
      if (StatPtr_MovieSceneEval_TickClients ==
          (FThreadSafeStaticStat<FStat_MovieSceneEval_TickClients>)0x0) {
        pFVar24 = ::FName::FName(&local_1a0,"MovieSceneEval_TickClients");
        FVar29 = (FThreadSafeStaticStat<FStat_MovieSceneEval_TickClients>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_TickClients,
                            *pFVar24,L"Tick Clients","STATGROUP_MovieSceneEval","STATCAT_Advanced",
                            L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
      }
      FVar36 = *(FName *)FVar29;
      bVar21 = false;
      bVar16 = false;
      local_200.ComparisonIndex.Value = 0;
      local_200.Number = 0;
      if ((FVar36.ComparisonIndex.Value.Value == 0) && (FVar36.Number == 0)) {
LAB_146239098:
        bVar14 = false;
        FVar36 = local_200;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_234.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_234._s_0,(char *)*(FName *)((longlong)FVar29 + 0x10));
          bVar21 = false;
          bVar16 = true;
          if (-1 < CpuChannel->Enabled) {
            local_218.ComparisonIndex.Value = FVar36.ComparisonIndex.Value.Value;
            local_218.Number = FVar36.Number;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_218,(wchar_t *)*(FName *)((longlong)FVar29 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequenceTickManager.cpp"
                       ,0x179);
            bVar21 = true;
            bVar16 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_146239098;
        local_250 = FVar36;
        FThreadStats::AddMessage(FVar36,CycleScopeStart);
        bVar14 = true;
      }
      iVar38 = (pUVar43->TickableClients).ArrayNum;
      pFVar39 = (pUVar43->TickableClients).AllocatorInstance.Data;
      pFVar2 = pFVar39 + (longlong)iVar38 * 0x18;
      while( true ) {
        if ((pUVar43->TickableClients).ArrayNum != iVar38) {
          local_256 = 0;
          `TCheckedPointerIterator<UMovieSceneSequenceTickManager::FTickableClientData,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_256);
        }
        FVar40 = local_248;
        if (pFVar39 == pFVar2) break;
        if (((pFVar39[0x14] != (FScriptContainerElement)0x0) || (!bVar20)) &&
           (pUVar30 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar39 + 8)),
           pUVar30 != (UObject *)0x0)) {
          uVar35 = *(uint *)(pFVar39 + 0x10);
          lVar44 = (longlong)(int)uVar35;
          if ((-1 < (int)uVar35) && ((int)uVar35 < local_168.AllocationFlags.NumBits)) {
            FVar34 = (ForElementType<unsigned_int>)&local_168.AllocationFlags;
            if (local_168.AllocationFlags.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar34 = local_168.AllocationFlags.AllocatorInstance.SecondaryData;
            }
            uVar41 = uVar35 & 0x1f;
            if ((int)uVar35 < 0) {
              uVar35 = uVar35 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar34 + (longlong)((int)uVar35 >> 5) * 4) >> uVar41 & 1) != 0)
            {
              FVar33 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,4>_>_>)
                       &local_168;
              if (local_168.Data.AllocatorInstance.SecondaryData !=
                  (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,4>_>_>)0x0) {
                FVar33 = local_168.Data.AllocatorInstance.SecondaryData;
              }
              uVar5 = *(undefined4 *)((longlong)FVar33 + lVar44 * 8);
              if (pFVar39[0x14] == (FScriptContainerElement)0x0) {
                uVar5 = *(undefined4 *)((uchar *)((longlong)FVar33 + 4) + lVar44 * 8);
              }
              pTVar11 = *(TReferenceControllerBase<1> **)
                         (*(longlong *)&pUVar43->LinkerGroups + 0x10 + lVar44 * 0x30);
              uVar12 = *(undefined8 *)(*(longlong *)&pUVar43->LinkerGroups + 8 + lVar44 * 0x30);
              if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar11->SharedReferenceCount =
                     (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
                UNLOCK();
              }
              (**(code **)(**(longlong **)pFVar39 + 0x10))(*(longlong **)pFVar39,uVar5,uVar12);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar11);
              pUVar43 = local_240;
            }
          }
        }
        pFVar39 = pFVar39 + 0x18;
      }
      if (bVar16) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar21) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      uVar41 = local_188.NumBits;
      if (bVar14) {
        FThreadStats::AddMessage(FVar36,CycleScopeEnd);
        uVar41 = local_188.NumBits;
      }
    }
    iVar38 = 0;
    iVar23 = 0;
    local_250.ComparisonIndex.Value = 1;
    uVar35 = 0xffffffff;
    uVar42 = 0;
    if (uVar41 != 0) {
      FVar34 = (ForElementType<unsigned_int>)&local_188;
      if (local_188.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar34 = local_188.AllocatorInstance.SecondaryData;
      }
      uVar42 = *(uint *)FVar34;
      while (uVar42 == 0) {
        lVar44 = (longlong)iVar23;
        iVar38 = iVar38 + 0x20;
        iVar23 = iVar23 + 1;
        uVar42 = uVar41;
        if ((int)((uVar41 - 1) + ((int)(uVar41 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
        goto LAB_146239257;
        uVar42 = *(uint *)((uchar *)((longlong)FVar34 + 4) + lVar44 * 4);
      }
      local_250.Number = 0;
      local_250.ComparisonIndex.Value = -uVar42 & uVar42;
      uVar3 = (ulonglong)(-uVar42 & uVar42) * 2 + 1;
      lVar44 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar44 == 0; lVar44 = lVar44 + -1) {
        }
      }
      local_1f0 = (int)lVar44;
      uVar42 = local_1f0 + -1 + iVar38;
      if ((int)uVar41 < (int)uVar42) {
        uVar42 = uVar41;
      }
    }
LAB_146239257:
    FVar36 = local_250;
    if ((int)uVar42 < (int)uVar41) {
      do {
        lVar31 = (longlong)(int)uVar42;
        lVar44 = *(longlong *)&local_240->LinkerGroups;
        lVar9 = *(longlong *)(lVar44 + lVar31 * 0x30);
        if (((lVar9 != 0) &&
            (pFVar26 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar9 + 0xc)),
            uVar41 = local_188.NumBits,
            ((uint)((ulonglong)(pFVar26->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) &&
           ((*(uint *)(*(longlong *)(lVar44 + lVar31 * 0x30) + 8) >> 0xf & 1) == 0)) {
          if ((-1 < (int)uVar42) && ((int)uVar42 < local_168.AllocationFlags.NumBits)) {
            FVar34 = (ForElementType<unsigned_int>)&local_168.AllocationFlags;
            if (local_168.AllocationFlags.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar34 = local_168.AllocationFlags.AllocatorInstance.SecondaryData;
            }
            uVar41 = uVar42 & 0x1f;
            if ((int)uVar42 < 0) {
              uVar42 = uVar42 + 0x1f;
            }
            if (((*(uint *)((longlong)FVar34 + (longlong)((int)uVar42 >> 5) * 4) >> uVar41 & 1) != 0
                ) && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("!UpdatedDeltaTimes.IsValidIndex(LinkerIndex.GetIndex())",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequenceTickManager.cpp"
                                          ,0x193,L""), bVar20)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
          }
          if ((*(longlong *)(lVar44 + 8 + lVar31 * 0x30) == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar20)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          FMovieSceneEntitySystemRunner::Flush
                    (*(FMovieSceneEntitySystemRunner **)(lVar44 + 8 + lVar31 * 0x30),
                     (double)*(float *)(lVar44 + 0x1c + lVar31 * 0x30),None);
          uVar41 = local_188.NumBits;
        }
        uVar35 = uVar35 & ~FVar36.ComparisonIndex.Value.Value;
        FVar34 = (ForElementType<unsigned_int>)&local_188;
        if (local_188.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar34 = local_188.AllocatorInstance.SecondaryData;
        }
        uVar42 = uVar35 & *(uint *)((longlong)FVar34 + (longlong)iVar23 * 4);
        while (uVar42 == 0) {
          lVar44 = (longlong)iVar23;
          iVar38 = iVar38 + 0x20;
          iVar23 = iVar23 + 1;
          uVar42 = uVar41;
          if ((int)((uVar41 - 1) + ((int)(uVar41 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
          goto LAB_1462393eb;
          uVar35 = 0xffffffff;
          uVar42 = *(uint *)((uchar *)((longlong)FVar34 + 4) + lVar44 * 4);
        }
        local_250.ComparisonIndex.Value = -uVar42 & uVar42;
        uVar3 = (ulonglong)(-uVar42 & uVar42) * 2 + 1;
        lVar44 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar44 == 0; lVar44 = lVar44 + -1) {
          }
        }
        local_1ec = (int)lVar44;
        uVar42 = local_1ec + -1 + iVar38;
        FVar36 = local_250;
        if ((int)uVar41 < (int)uVar42) {
          uVar42 = uVar41;
        }
LAB_1462393eb:
        FVar40 = local_248;
      } while ((int)uVar42 < (int)uVar41);
    }
    pUVar43 = local_240;
    uVar35 = 1;
    iVar38 = 0;
    if (0 < local_168.Data.ArrayNum) {
      lVar44 = 0;
      do {
        if (((iVar38 < 0) || (local_168.AllocationFlags.NumBits <= iVar38)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5c6,L""), bVar20)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        FVar34 = (ForElementType<unsigned_int>)&local_168.AllocationFlags;
        if (local_168.AllocationFlags.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar34 = local_168.AllocationFlags.AllocatorInstance.SecondaryData;
        }
        iVar23 = iVar38;
        if (iVar38 < 0) {
          iVar23 = iVar38 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar34 + (longlong)(iVar23 >> 5) * 4) & uVar35) != 0) {
          lVar9 = *(longlong *)&pUVar43->LinkerGroups;
          if (((*(longlong *)(lVar9 + lVar44) != 0) &&
              (pFVar26 = FUObjectArray::IndexToObject
                                   (&GUObjectArray,*(int *)(*(longlong *)(lVar9 + lVar44) + 0xc)),
              ((uint)((ulonglong)(pFVar26->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) &&
             ((*(uint *)(*(longlong *)(lVar9 + lVar44) + 8) >> 0xf & 1) == 0)) {
            if ((*(longlong *)(lVar9 + 8 + lVar44) == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar20)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            bVar20 = FMovieSceneEntitySystemRunner::IsCurrentlyEvaluating
                               (*(FMovieSceneEntitySystemRunner **)(lVar9 + 8 + lVar44));
            if (bVar20) {
              local_255[0] = 0;
              `UMovieSceneSequenceTickManager::TickSequenceActors'::__l54::<lambda_1>::operator()
                        (local_255);
            }
            if ((*(longlong *)(lVar9 + 8 + lVar44) == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar20)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            bVar20 = FMovieSceneEntitySystemRunner::HasQueuedUpdates
                               (*(FMovieSceneEntitySystemRunner **)(lVar9 + 8 + lVar44));
            if (bVar20) {
              if ((*(longlong *)(lVar9 + 8 + lVar44) == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar20)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              FMovieSceneEntitySystemRunner::Flush
                        (*(FMovieSceneEntitySystemRunner **)(lVar9 + 8 + lVar44),
                         (double)*(float *)(lVar9 + 0x1c + lVar44),None);
            }
          }
        }
        iVar38 = iVar38 + 1;
        uVar35 = uVar35 << 1 | (uint)((int)uVar35 < 0);
        lVar44 = lVar44 + 0x30;
        FVar40 = local_248;
      } while (iVar38 < local_168.Data.ArrayNum);
    }
    FVar37.Data = local_230.AllocatorInstance.Data;
    pUVar43 = local_240;
    lVar44 = (longlong)local_230.ArrayNum;
    local_240->PendingActorOperations = local_1e8;
    if ((local_230.ArrayNum < 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar20)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pFVar2 = FVar37.Data + lVar44 * 0x28;
    for (; FVar37.Data != pFVar2; FVar37.Data = FVar37.Data + 0x28) {
      pUVar30 = FWeakObjectPtr::Get((FWeakObjectPtr *)(FVar37.Data + 0x10));
      if (pUVar30 != (UObject *)0x0) {
        pUVar30 = *(UObject **)FVar37.Data;
        if (*(int *)(FVar37.Data + 0x24) == 0) {
          local_1d8[0] = pUVar30;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar30 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar30);
          }
          local_1d8[1] = *(UObject **)(FVar37.Data + 8);
          RegisterTickClient(pUVar43,(FMovieSceneSequenceTickInterval *)(FVar37.Data + 0x18),
                             (TScriptInterface<IMovieSceneSequenceTickManagerClient> *)local_1d8);
        }
        else {
          local_1c8[0] = pUVar30;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar30 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar30);
          }
          local_1c8[1] = *(UObject **)(FVar37.Data + 8);
          UnregisterTickClient
                    (pUVar43,(TScriptInterface<IMovieSceneSequenceTickManagerClient> *)local_1c8);
        }
      }
    }
    local_1b0 = &local_1e0;
    local_1e0 = pUVar43;
    local_1b8 = UE::Core::Private::Function::
                TFunctionRefCaller<`UMovieSceneSequenceTickManager::RunLatentActions'::__l2::<lambda_1>,void>
                ::Call;
    FMovieSceneLatentActionManager::RunLatentActions
              (&pUVar43->LatentActionManager,(TFunctionRef<void___cdecl(void)> *)&local_1b8);
    if (local_230.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.AllocatorInstance.Data);
    }
  }
  if (local_188.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_188.AllocatorInstance.SecondaryData);
  }
  local_168.Data.ArrayNum = 0;
  if (local_168.Data.ArrayMax != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,4>_>_>_>
              (8,4,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,4>_>_> *)
                     &local_168,0,&local_168.Data.ArrayMax);
  }
  local_168.FirstFreeIndex = -1;
  local_168.NumFreeIndices = 0;
  local_168.AllocationFlags.NumBits = 0;
  if (0x80 < (uint)local_168.AllocationFlags.MaxBits) {
    local_168.AllocationFlags.MaxBits = 0x80;
    TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::Realloc
              (&local_168.AllocationFlags,0);
  }
  if (local_168.AllocationFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_168.AllocationFlags.AllocatorInstance.SecondaryData);
  }
  if (local_168.Data.AllocatorInstance.SecondaryData !=
      (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,4>_>_>)0x0) {
    FMemory::Free((void *)local_168.Data.AllocatorInstance.SecondaryData);
  }
LAB_146239768:
  if (bVar17) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar19) {
    FThreadStats::AddMessage(FVar40,CycleScopeEnd);
  }
  FCsvProfiler::EndExclusiveStat("MovieSceneEval");
  return;
}

// UnregisterTickClient @ 14623b1d0

void __thiscall
UMovieSceneSequenceTickManager::UnregisterTickClient
          (UMovieSceneSequenceTickManager *this,
          TScriptInterface<IMovieSceneSequenceTickManagerClient> *param_1)

{
  UObject *pUVar1;
  IMovieSceneSequenceTickManagerClient *pIVar2;
  TArray<UMovieSceneSequenceTickManager::FPendingOperation,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  UObject *pUVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  UObject *local_res18 [2];
  UObject *local_68;
  undefined8 local_60;
  FWeakObjectPtr local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined2 local_48;
  undefined2 uStack_46;
  undefined4 local_44;
  
  pUVar1 = *(UObject **)param_1;
  if ((pUVar1 == (UObject *)0x0) ||
     (pIVar2 = *(IMovieSceneSequenceTickManagerClient **)&param_1->field_0x8,
     pIVar2 == (IMovieSceneSequenceTickManagerClient *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6187304322972254448>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequenceTickManager.cpp"
                       ,0xf0,"ClientInterface");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pTVar3 = this->PendingActorOperations;
    if (pTVar3 == (TArray<UMovieSceneSequenceTickManager::FPendingOperation,TSizedDefaultAllocator<32>_>
                   *)0x0) {
      pFVar10 = (this->LatentActionManager).LatentActions.AllocatorInstance.Data;
      iVar7 = (this->LatentActionManager).LatentActions.ArrayNum;
      pFVar11 = pFVar10 + (longlong)iVar7 * 0x10;
      while( true ) {
        if ((this->LatentActionManager).LatentActions.ArrayNum != iVar7) {
          `TCheckedPointerIterator<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar10 == pFVar11) break;
        if ((((*(int *)&pFVar10[8].field_0x0 != 0) &&
             (*(longlong **)&pFVar10->field_0x0 != (longlong *)0x0)) &&
            (cVar6 = (**(code **)(**(longlong **)&pFVar10->field_0x0 + 0x38))(), cVar6 != '\0')) &&
           (((*(int *)&pFVar10[8].field_0x0 != 0 &&
             (*(longlong **)&pFVar10->field_0x0 != (longlong *)0x0)) &&
            ((pUVar9 = (UObject *)(**(code **)(**(longlong **)&pFVar10->field_0x0 + 0x10))(),
             pUVar9 == pUVar1 &&
             ((*(int *)&pFVar10[8].field_0x0 != 0 &&
              (*(undefined8 **)&pFVar10->field_0x0 != (undefined8 *)0x0)))))))) {
          (**(code **)**(undefined8 **)&pFVar10->field_0x0)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)pFVar10,0,0,0x10);
          *(undefined4 *)&pFVar10[8].field_0x0 = 0;
        }
        pFVar10 = pFVar10 + 0x10;
      }
      UnregisterTickClientImpl(this,pIVar2);
    }
    else {
      local_68 = pUVar1;
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      local_60 = *(undefined8 *)&param_1->field_0x8;
      pUVar1 = *(UObject **)param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      local_58.ObjectIndex = 0;
      local_58.ObjectSerialNumber = 0;
      local_res18[0] = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      FWeakObjectPtr::operator=(&local_58,(FObjectPtr)local_res18);
      local_44 = 1;
      uStack_4c = 0;
      uStack_46 = 0;
      local_50 = 0;
      local_48 = 0x100;
      pFVar10 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar10 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 < pFVar10 + (longlong)pTVar3->ArrayMax * 0x28)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = pTVar3->ArrayNum;
      if (iVar7 == pTVar3->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
      }
      lVar8 = (longlong)iVar7;
      pTVar3->ArrayNum = iVar7 + 1;
      pFVar10 = (pTVar3->AllocatorInstance).Data;
      *(UObject **)(pFVar10 + lVar8 * 0x28) = local_68;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_68);
      }
      *(undefined8 *)(pFVar10 + lVar8 * 0x28 + 8) = local_60;
      *(FWeakObjectPtr *)(pFVar10 + lVar8 * 0x28 + 0x10) = local_58;
      *(ulonglong *)(pFVar10 + lVar8 * 0x28 + 0x18) = CONCAT44(uStack_4c,local_50);
      *(uint *)(pFVar10 + lVar8 * 0x28 + 0x20) = CONCAT22(uStack_46,local_48);
      *(undefined4 *)(pFVar10 + lVar8 * 0x28 + 0x24) = local_44;
    }
  }
  return;
}

// UnregisterTickClientImpl @ 14623b4a0

void __thiscall
UMovieSceneSequenceTickManager::UnregisterTickClientImpl
          (UMovieSceneSequenceTickManager *this,IMovieSceneSequenceTickManagerClient *param_1)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  
  iVar3 = (this->TickableClients).ArrayNum;
  pFVar7 = (this->TickableClients).AllocatorInstance.Data;
  uVar10 = 0;
  if (0 < iVar3) {
    lVar9 = 0;
    while (*(IMovieSceneSequenceTickManagerClient **)pFVar7 != param_1) {
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 1;
      pFVar7 = pFVar7 + 0x18;
      if (iVar3 <= lVar9) {
        return;
      }
    }
    if ((-1 < (int)uVar10) && ((int)uVar10 < iVar3)) {
      if (((int)uVar10 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar3 = *(int *)((this->TickableClients).AllocatorInstance.Data +
                      (longlong)(int)uVar10 * 0x18 + 0x10);
      uVar11 = 0;
      if ((int)uVar10 < (this->TickableClients).ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar4 = (this->TickableClients).ArrayNum;
      pFVar7 = (this->TickableClients).AllocatorInstance.Data;
      iVar8 = iVar4 + ~uVar10;
      if (1 < iVar8) {
        iVar8 = 1;
      }
      if (iVar8 != 0) {
        memmove(pFVar7 + (longlong)(int)uVar10 * 0x18,pFVar7 + (longlong)(iVar4 - iVar8) * 0x18,
                (longlong)iVar8 * 0x18);
      }
      piVar1 = &(this->TickableClients).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,&(this->TickableClients).AllocatorInstance,(this->TickableClients).ArrayNum,
                 &(this->TickableClients).ArrayMax);
      psVar2 = (short *)((longlong)iVar3 * 0x30 + 0x2a + *(longlong *)&this->LinkerGroups);
      *psVar2 = *psVar2 + -1;
      if (*psVar2 == 0) {
        TSparseArray<UMovieSceneSequenceTickManager::FLinkerGroup,FDefaultSparseArrayAllocator>::
        RemoveAt(&this->LinkerGroups,iVar3,1);
      }
    }
  }
  return;
}

// operator() @ 1504e7420

bool __thiscall
`UMovieSceneSequenceTickManager::TickSequenceActors'::__l54::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6187304322972254630>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6187304322972254630>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

