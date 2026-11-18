// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 17

// FInteractionIsland @ 14a8e02b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FInteractionIsland * __thiscall
UE::PoseSearch::FInteractionIsland::FInteractionIsland
          (FInteractionIsland *this,ULevel *param_1,UPoseSearchInteractionSubsystem *param_2)

{
  byte *pbVar1;
  
  FTickFunction::FTickFunction((FTickFunction *)this);
  (this->PreTickFunction)._padding_ =
       (longlong)&___7FPreTickFunction_FInteractionIsland_PoseSearch_UE__6B_;
  (this->PreTickFunction).Island = (FInteractionIsland *)0x0;
  FTickFunction::FTickFunction((FTickFunction *)&this->PostTickFunction);
  (this->PostTickFunction).Island = (FInteractionIsland *)0x0;
  (this->PostTickFunction)._padding_ =
       (longlong)&___7FPostTickFunction_FInteractionIsland_PoseSearch_UE__6B_;
  pbVar1 = (byte *)((longlong)&(this->PreTickFunction)._padding_ + 2);
  *pbVar1 = *pbVar1 | 0x50;
  (this->TickActorComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TickActorComponents).ArrayNum = 0;
  (this->TickActorComponents).ArrayMax = 0;
  (this->IslandAnimContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IslandAnimContexts).ArrayNum = 0;
  (this->IslandAnimContexts).ArrayMax = 0;
  (this->SearchContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchContexts).ArrayNum = 0;
  (this->SearchContexts).ArrayMax = 0;
  (this->SearchResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchResults).ArrayNum = 0;
  (this->SearchResults).ArrayMax = 0;
  this->InteractionSubsystem = (UPoseSearchInteractionSubsystem *)0x0;
  this->bHasTickDependencies = false;
  this->bSearchPerfomed = false;
  (this->InteractionIslandThreadSafeCounter).Counter = 0;
  (this->TickFunctionsThreadSafeCounter).Counter = 0;
  this->bPreTickFunctionExecuted = false;
  this->bPostTickFunctionExecuted = false;
  (this->PreTickFunction).Island = this;
  FTickFunction::RegisterTickFunction((FTickFunction *)this,param_1);
  pbVar1 = (byte *)((longlong)&(this->PostTickFunction)._padding_ + 2);
  *pbVar1 = *pbVar1 | 0x50;
  (this->PostTickFunction).Island = this;
  FTickFunction::RegisterTickFunction((FTickFunction *)&this->PostTickFunction,param_1);
  this->InteractionSubsystem = param_2;
  return this;
}

// ~FInteractionIsland @ 14a8e2b90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UE::PoseSearch::FInteractionIsland::~FInteractionIsland(FInteractionIsland *this)

{
  FScriptContainerElement *pFVar1;
  
  Uninitialize(this,false);
  FTickFunction::UnRegisterTickFunction((FTickFunction *)this);
  FTickFunction::UnRegisterTickFunction((FTickFunction *)&this->PostTickFunction);
  this->InteractionSubsystem = (UPoseSearchInteractionSubsystem *)0x0;
  DestructItems<UE::PoseSearch::FInteractionSearchResult,int>
            ((FInteractionSearchResult *)(this->SearchResults).AllocatorInstance.Data,
             (this->SearchResults).ArrayNum);
  pFVar1 = (this->SearchResults).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::PoseSearch::FInteractionSearchContext,int>
            ((FInteractionSearchContext *)(this->SearchContexts).AllocatorInstance.Data,
             (this->SearchContexts).ArrayNum);
  pFVar1 = (this->SearchContexts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IslandAnimContexts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TickActorComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FTickFunction::~FTickFunction((FTickFunction *)&this->PostTickFunction);
  FTickFunction::~FTickFunction((FTickFunction *)this);
  return;
}

// AddSearchContext @ 14a8e6d00

void __thiscall
UE::PoseSearch::FInteractionIsland::AddSearchContext
          (FInteractionIsland *this,FInteractionSearchContext *param_1)

{
  int *piVar1;
  FInteractionSearchContext *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<UE::PoseSearch::FInteractionSearchContext,TSizedDefaultAllocator<32>_> *pTVar6;
  
  bVar4 = FInteractionSearchContextBase::CheckForConsistency
                    ((FInteractionSearchContextBase *)param_1);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SearchContext.CheckForConsistency()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                       ,0x34e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                       ,0x350,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar6 = &this->SearchContexts;
  pFVar2 = (FInteractionSearchContext *)(pTVar6->AllocatorInstance).Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->SearchContexts).ArrayMax)) {
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
  iVar5 = (this->SearchContexts).ArrayNum;
  piVar1 = &(this->SearchContexts).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1e0,8,&pTVar6->AllocatorInstance,piVar1);
  }
  (this->SearchContexts).ArrayNum = iVar5 + 1;
  FInteractionSearchContext::FInteractionSearchContext
            ((FInteractionSearchContext *)
             ((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 0x1e0),param_1);
  return;
}

// AddTickDependencies @ 14a8e6e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::PoseSearch::FInteractionIsland::AddTickDependencies
          (FInteractionIsland *this,UActorComponent *param_1,bool param_2)

{
  FWeakObjectPtr FVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  IInteractionIslandDependency *pIVar6;
  longlong lVar7;
  UObject *pUVar8;
  FWeakObjectPtr *pFVar9;
  int iVar10;
  FWeakObjectPtr FVar11;
  FWeakObjectPtr *pFVar12;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5 [5];
  UActorComponent *local_c0;
  IInteractionIslandDependency *local_b8;
  FName local_b0;
  FString local_a8;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_c0 = param_1;
  if ((param_1 == (UActorComponent *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TickActorComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                         ,0x248,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar6 = FindCustomDependency(param_1);
  FVar11.ObjectIndex = 0;
  FVar11.ObjectSerialNumber = 0;
  local_b8 = pIVar6;
  if (pIVar6 == (IInteractionIslandDependency *)0x0) {
    iVar10 = (int)(this->PostTickFunction)._padding_;
    if (!param_2) {
      if ((iVar10 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("PostTickFunction.GetPrerequisites().Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                             ,0x292,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((int)(this->PostTickFunction)._padding_ < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar9 = (FWeakObjectPtr *)(this->PostTickFunction)._padding_;
      bVar3 = FWeakObjectPtr::IsValid(pFVar9,true,false);
      if (bVar3) {
        FVar11 = pFVar9[1];
      }
      iVar10 = (int)(param_1->PrimaryComponentTick)._padding_;
      pFVar9 = (FWeakObjectPtr *)(param_1->PrimaryComponentTick)._padding_;
      pFVar12 = pFVar9 + (longlong)iVar10 * 2;
      while( true ) {
        if ((int)(param_1->PrimaryComponentTick)._padding_ != iVar10) {
          local_c5[0] = 0;
          `TCheckedPointerIterator<FTickPrerequisite,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_c5);
        }
        if (pFVar9 == pFVar12) break;
        FVar1 = pFVar9[1];
        if (FVar1 != FVar11) {
          pUVar8 = FWeakObjectPtr::Get(pFVar9);
          AddPrerequisite((FTickFunction *)this,pUVar8,(FTickFunction *)FVar1);
        }
        pFVar9 = pFVar9 + 2;
      }
      AddPrerequisite((FTickFunction *)&param_1->PrimaryComponentTick,
                      (UObject *)this->InteractionSubsystem,(FTickFunction *)&this->PostTickFunction
                     );
      if ((this->bHasTickDependencies == false) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("bHasTickDependencies",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                             ,0x2a2,L""), bVar3)) {
code_r0x00014a8e730b:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_14a8e730f;
    }
    if ((iVar10 != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PostTickFunction.GetPrerequisites().IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                           ,0x27f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar10 = (int)(param_1->PrimaryComponentTick)._padding_;
    pFVar9 = (FWeakObjectPtr *)(param_1->PrimaryComponentTick)._padding_;
    pFVar12 = pFVar9 + (longlong)iVar10 * 2;
    while( true ) {
      if ((int)(param_1->PrimaryComponentTick)._padding_ != iVar10) {
        local_c6 = 0;
        `TCheckedPointerIterator<FTickPrerequisite,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_c6);
      }
      if (pFVar9 == pFVar12) break;
      FVar11 = pFVar9[1];
      pUVar8 = FWeakObjectPtr::Get(pFVar9);
      AddPrerequisite((FTickFunction *)this,pUVar8,(FTickFunction *)FVar11);
      pFVar9 = pFVar9 + 2;
    }
    AddPrerequisite((FTickFunction *)&param_1->PrimaryComponentTick,
                    (UObject *)this->InteractionSubsystem,(FTickFunction *)this);
    AddPrerequisite((FTickFunction *)&this->PostTickFunction,(UObject *)local_c0,
                    (FTickFunction *)&param_1->PrimaryComponentTick);
    if (this->bHasTickDependencies != false) {
      iVar10 = 0x28c;
LAB_14a8e6f95:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bHasTickDependencies",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                         ,iVar10,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  else {
    lVar7 = (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6,param_1);
    if (lVar7 == 0) {
      if (1 < (byte)LogPoseSearch._0_1_) {
        local_b0 = (FName)param_1->_padding_;
        ::FName::ToString(&local_b0,&local_a8);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_14a8e730f;
    }
    iVar10 = (int)(this->PostTickFunction)._padding_;
    if (!param_2) {
      if ((iVar10 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("PostTickFunction.GetPrerequisites().Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                             ,0x263,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((int)(this->PostTickFunction)._padding_ < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar9 = (FWeakObjectPtr *)(this->PostTickFunction)._padding_;
      bVar3 = FWeakObjectPtr::IsValid(pFVar9,true,false);
      if (bVar3) {
        FVar11 = pFVar9[1];
      }
      iVar10 = *(int *)(lVar7 + 0x18);
      pFVar9 = *(FWeakObjectPtr **)(lVar7 + 0x10);
      pFVar12 = pFVar9 + (longlong)iVar10 * 2;
      while( true ) {
        if (*(int *)(lVar7 + 0x18) != iVar10) {
          local_c7 = 0;
          `TCheckedPointerIterator<FTickPrerequisite_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_c7);
        }
        if (pFVar9 == pFVar12) break;
        FVar1 = pFVar9[1];
        if (FVar1 != FVar11) {
          pUVar8 = FWeakObjectPtr::Get(pFVar9);
          AddPrerequisite((FTickFunction *)this,pUVar8,(FTickFunction *)FVar1);
        }
        pFVar9 = pFVar9 + 2;
      }
      (**(code **)((longlong)*local_b8 + 0x20))
                (local_b8,this->InteractionSubsystem,&this->PostTickFunction,local_c0);
      if ((this->bHasTickDependencies == false) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("bHasTickDependencies",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                             ,0x272,L""), bVar3)) goto code_r0x00014a8e730b;
      goto LAB_14a8e730f;
    }
    if ((iVar10 != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PostTickFunction.GetPrerequisites().IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                           ,0x251,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar10 = *(int *)(lVar7 + 0x18);
    pFVar9 = *(FWeakObjectPtr **)(lVar7 + 0x10);
    pFVar12 = pFVar9 + (longlong)iVar10 * 2;
    while( true ) {
      if (*(int *)(lVar7 + 0x18) != iVar10) {
        local_c8 = 0;
        `TCheckedPointerIterator<FTickPrerequisite_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_c8);
      }
      if (pFVar9 == pFVar12) break;
      FVar11 = pFVar9[1];
      pUVar8 = FWeakObjectPtr::Get(pFVar9);
      AddPrerequisite((FTickFunction *)this,pUVar8,(FTickFunction *)FVar11);
      pFVar9 = pFVar9 + 2;
    }
    (**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,this->InteractionSubsystem,this,local_c0);
    (**(code **)((longlong)*pIVar6 + 0x18))
              (pIVar6,this->InteractionSubsystem,&this->PostTickFunction,local_c0);
    if (this->bHasTickDependencies != false) {
      iVar10 = 0x25d;
      goto LAB_14a8e6f95;
    }
  }
  this->bHasTickDependencies = true;
LAB_14a8e730f:
  if (GVarPoseSearchInteractionDiagnoseTickDependencies != false) {
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    bVar3 = ValidateTickDependenciesCycles
                      ((FTickFunction *)this,
                       (TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>
                        *)local_98);
    if ((local_98._8_4_ != local_64) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("VisitedTickFunctions.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                           ,0x2ab,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar4 = ValidateTickDependenciesCycles
                      ((FTickFunction *)&this->PostTickFunction,
                       (TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>
                        *)local_98);
    if ((local_98._8_4_ != local_64) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("VisitedTickFunctions.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                           ,0x2ad,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((!bVar3) || (!bVar4)) {
      if (1 < (byte)LogPoseSearch._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
      }
      LogTickDependencies(this);
    }
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    bVar3 = local_98._12_4_ != 0;
    local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
    if (bVar3) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
    }
    local_68 = 0xffffffff;
    local_64 = 0;
    local_70 = 0;
    if (0x80 < local_6c) {
      local_6c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
  }
  return;
}

// DoSearch_AnyThread @ 14a8f2d30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::PoseSearch::FInteractionIsland::DoSearch_AnyThread
          (FInteractionIsland *this,UObject *param_1,
          TArrayView<UE::PoseSearch::FValidInteractionSearch_const_,int> *param_2,
          FPoseSearchBlueprintResult *param_3)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  UObject *pUVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<_public:_bool___cdecl_UE::PoseSearch::FInteractionIsland::DoSearch_AnyThread(UObject_const_*,TArrayView<UE::PoseSearch::FValidInteractionSearch_const_,int>,FPoseSearchBlueprintResult_&)_::_2_::FStat_STAT_UPoseSearchInteractionInteractionIsland_Search>
  FVar17;
  uint *puVar18;
  FTlsAutoCleanup *pFVar19;
  IPoseHistory *pIVar20;
  TObjectPtr<UObject_const_>_u_0 TVar21;
  undefined8 uVar22;
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> FVar23;
  ForElementType<FChooserEvaluationContext> FVar24;
  longlong *plVar25;
  FName FVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  ulonglong uVar30;
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> this_00;
  uint uVar31;
  FChooserEvaluationContext *_Dst;
  undefined1 auStackY_3388 [32];
  undefined1 local_3327 [7];
  FName local_3320;
  uint local_3318;
  ForElementType<UE::PoseSearch::FSearchResult> local_3310;
  int local_3308 [2];
  FColor_u_0 local_3300;
  uint local_32fc;
  uint local_32f8;
  FMemMark local_32f0;
  FName local_32c8;
  FFloatInterval local_32c0;
  longlong local_32b8;
  longlong local_32b0;
  FPoseSearchEvent local_32a8;
  FName local_3290;
  TObjectPtr<UObject_const_>_u_0 local_3280;
  undefined4 local_3278;
  undefined1 local_3274;
  double local_3270;
  double dStack_3268;
  double local_3260;
  undefined2 local_3258;
  undefined8 local_3250;
  longlong local_3248;
  FInteractionIsland *local_3240;
  UObject *local_3238;
  UObject *local_3230;
  FName local_3228;
  UObject *local_3220;
  FPoseSearchBlueprintResult *local_3218;
  FString local_3210;
  TObjectPtr<UObject>_u_0 local_3200;
  undefined4 local_31f8;
  undefined1 local_31f4;
  undefined2 local_31f3;
  undefined1 local_31f1;
  undefined8 local_31f0;
  double local_31e8;
  double dStack_31e0;
  double local_31d8;
  undefined8 local_31d0;
  undefined4 local_31c8;
  undefined1 local_31c4;
  undefined2 local_31c3;
  undefined1 local_31c1;
  FName local_31c0;
  void *local_31b8;
  undefined8 local_31b0;
  void *local_31a8;
  undefined8 local_31a0;
  void *local_3198;
  undefined8 local_3190;
  code *local_3188;
  undefined1 *local_3180;
  TArrayView<FName_const_,int> local_3178;
  UObject **local_3168;
  undefined4 uStack_3160;
  undefined4 uStack_315c;
  FInteractionSearchContext *local_3158;
  int iStack_3150;
  undefined4 uStack_314c;
  FSearchResult *local_3148;
  int iStack_3140;
  undefined4 uStack_313c;
  undefined8 local_3138;
  undefined8 uStack_3130;
  undefined8 local_3128;
  undefined4 local_3120;
  FName local_311c;
  FName local_3114;
  TArrayView<UObject_const_*,int> local_3108;
  TArrayView<UE::PoseSearch::FInteractionSearchContext_const_,int> local_30f8;
  TArrayView<UE::PoseSearch::FSearchResult_const_,int> local_30e8;
  ForElementType<FChooserEvaluationContext> local_30d8;
  int local_2eb0;
  int local_2eac;
  FSearchResults_Single local_2ea8;
  undefined1 local_2d88 [232];
  void *local_2ca0;
  undefined4 local_2c98;
  ForAnyElementType local_2c88;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TTransform<double>_>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  local_2c08;
  undefined4 local_b40;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
  local_998;
  undefined4 local_e0;
  TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_d0;
  void *local_90;
  undefined4 local_88;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_3388;
  local_3240 = this;
  local_3220 = param_1;
  local_3218 = param_3;
  if ((param_1 == (UObject *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("AnimContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                         ,0x3c8,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    uVar10 = (*pcVar1)();
    return (bool)uVar10;
  }
  if (this->bSearchPerfomed != false) {
    bVar9 = GetResult_AnyThread(this,param_1,param_3,false);
    return bVar9;
  }
  pUVar15 = GetMainAnimContext(this);
  if (param_1 != pUVar15) {
    local_31f0 = 0x3f800000;
    local_31f3 = 0;
    local_31e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_31e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_31f1 = 0;
    local_31c3 = 0;
    local_31c1 = 0;
    local_31f8 = 0;
    local_31f4 = 0;
    local_31c4 = 0;
    local_31d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_3200.DebugPtr = (UObject *)0x0;
    local_31d0 = 0;
    local_31c8 = 0x7f7fffff;
    local_31c0 = DefaultRole;
    local_31b8 = (void *)0x0;
    local_31b0 = 0;
    local_31a8 = (void *)0x0;
    local_31a0 = 0;
    local_3198 = (void *)0x0;
    local_3190 = 0;
    FPoseSearchBlueprintResult::operator=
              (param_3,(FPoseSearchBlueprintResult *)&local_3200.ObjectPtr);
    if (local_3198 != (void *)0x0) {
      FMemory::Free(local_3198);
    }
    if (local_31a8 != (void *)0x0) {
      FMemory::Free(local_31a8);
    }
    if (local_31b8 != (void *)0x0) {
      FMemory::Free(local_31b8);
    }
    return false;
  }
  uVar27 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_UPoseSearchInteractionInteractionIsland_Search ==
        (FThreadSafeStaticStat<_public:_bool___cdecl_UE::PoseSearch::FInteractionIsland::DoSearch_AnyThread(UObject_const_*,TArrayView<UE::PoseSearch::FValidInteractionSearch_const_,int>,FPoseSearchBlueprintResult_&)_::_2_::FStat_STAT_UPoseSearchInteractionInteractionIsland_Search>
         )0x0) {
      pFVar16 = ::FName::FName(&local_311c,"STAT_UPoseSearchInteractionInteractionIsland_Search");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_UPoseSearchInteractionInteractionIsland_Search,*pFVar16,
                 L"STAT_UPoseSearchInteractionInteractionIsland_Search","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar17 = StatPtr_STAT_UPoseSearchInteractionInteractionIsland_Search;
  if (StatPtr_STAT_UPoseSearchInteractionInteractionIsland_Search ==
      (FThreadSafeStaticStat<_public:_bool___cdecl_UE::PoseSearch::FInteractionIsland::DoSearch_AnyThread(UObject_const_*,TArrayView<UE::PoseSearch::FValidInteractionSearch_const_,int>,FPoseSearchBlueprintResult_&)_::_2_::FStat_STAT_UPoseSearchInteractionInteractionIsland_Search>
       )0x0) {
    pFVar16 = ::FName::FName(&local_3114,"STAT_UPoseSearchInteractionInteractionIsland_Search");
    FVar17 = (FThreadSafeStaticStat<_public:_bool___cdecl_UE::PoseSearch::FInteractionIsland::DoSearch_AnyThread(UObject_const_*,TArrayView<UE::PoseSearch::FValidInteractionSearch_const_,int>,FPoseSearchBlueprintResult_&)_::_2_::FStat_STAT_UPoseSearchInteractionInteractionIsland_Search>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_UPoseSearchInteractionInteractionIsland_Search,*pFVar16,
                          L"STAT_UPoseSearchInteractionInteractionIsland_Search","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar26 = *(FName *)FVar17;
  bVar9 = false;
  bVar2 = false;
  local_3290.ComparisonIndex.Value = 0;
  local_3290.Number = 0;
  bVar8 = false;
  bVar11 = false;
  if ((FVar26.ComparisonIndex.Value.Value != 0) || (FVar26.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_3300.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_3300._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar9 = false;
      bVar2 = true;
      bVar8 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_32c8.ComparisonIndex.Value = FVar26.ComparisonIndex.Value.Value;
        local_32c8.Number = FVar26.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_32c8,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                   ,0x3da);
        bVar9 = true;
        bVar2 = true;
        bVar8 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_3320 = FVar26;
      FThreadStats::AddMessage(FVar26,CycleScopeStart);
      bVar8 = true;
      goto LAB_14a8f3035;
    }
  }
  bVar2 = bVar11;
  bVar9 = bVar8;
  bVar8 = false;
  FVar26 = local_3290;
LAB_14a8f3035:
  puVar18 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_3180 = local_3327;
  local_3188 = Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar19 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_3188,puVar18);
  local_3310.Data = (FSearchResult *)0x0;
  local_3308[0] = 0;
  local_3308[1] = 0;
  local_32f0.Mem = (FMemStackBase *)(pFVar19 + 2);
  local_32f0.Top = (local_32f0.Mem)->Top;
  local_32f0.SavedChunk = *(FTaggedMemory **)(pFVar19 + 4);
  local_32f0.bPopped = false;
  local_32f0.NextTopmostMark = *(FMemMark **)(pFVar19 + 5);
  pFVar19[5] = (FTlsAutoCleanup)&local_32f0;
  *(int *)(pFVar19 + 6) = *(int *)(pFVar19 + 6) + 1;
  uVar14 = (this->SearchContexts).ArrayNum;
  local_30d8.SecondaryData = (ForElementType<FChooserEvaluationContext>)0x0;
  local_2eb0 = 0;
  local_2eac = 4;
  if ((int)uVar14 < 1) {
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
  }
  else {
    iVar13 = Core::Private::
             ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::PoseSearch::FSearchResult>_>
                       (0x1c,4,uVar14,&local_3310,local_3308,local_3308 + 1);
    DefaultConstructItems<UE::PoseSearch::FSearchResult,int>(local_3310.Data + iVar13,uVar14);
  }
  local_3318 = 0;
  if ((this->SearchContexts).ArrayNum < 1) {
LAB_14a8f3879:
    local_3158 = (FInteractionSearchContext *)(this->SearchContexts).AllocatorInstance.Data;
    iVar13 = (this->SearchContexts).ArrayNum;
    if ((iVar13 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar1 = (code *)swi(3);
      uVar10 = (*pcVar1)();
      return (bool)uVar10;
    }
    iVar28 = local_3308[0];
    local_3148 = local_3310.Data;
    iStack_3150 = iVar13;
    if ((local_3308[0] < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar1 = (code *)swi(3);
      uVar10 = (*pcVar1)();
      return (bool)uVar10;
    }
    local_30f8._12_4_ = uStack_314c;
    local_30f8.ArrayNum = iStack_3150;
    iStack_3140 = iVar28;
    local_30e8._12_4_ = uStack_313c;
    local_30e8.ArrayNum = iVar28;
    local_30e8.DataPtr = local_3148;
    local_30f8.DataPtr = local_3158;
    InitSearchResults(&this->SearchResults,&local_30e8,&local_30f8);
    this->bSearchPerfomed = true;
    bVar11 = GetResult_AnyThread(this,param_1,param_3,false);
LAB_14a8f3955:
    FVar24 = (ForElementType<FChooserEvaluationContext>)&local_30d8;
    if (local_30d8.SecondaryData != (ForElementType<FChooserEvaluationContext>)0x0) {
      FVar24 = local_30d8.SecondaryData;
    }
    DestructItems<FChooserEvaluationContext,int>((FChooserEvaluationContext *)FVar24,local_2eb0);
    if (local_30d8.SecondaryData != (ForElementType<FChooserEvaluationContext>)0x0) {
      FMemory::Free((void *)local_30d8.SecondaryData);
    }
    if (local_32f0.bPopped == false) {
      if (((local_32f0.Mem)->TopMark != &local_32f0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mem.TopMark == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                              ,0x215,L""), bVar12)) {
        pcVar1 = (code *)swi(3);
        uVar10 = (*pcVar1)();
        return (bool)uVar10;
      }
      local_32f0.bPopped = true;
      (local_32f0.Mem)->NumMarks = (local_32f0.Mem)->NumMarks + -1;
      if (local_32f0.SavedChunk != (local_32f0.Mem)->TopChunk) {
        FMemStackBase::FreeChunks(local_32f0.Mem,local_32f0.SavedChunk);
      }
      (local_32f0.Mem)->Top = local_32f0.Top;
      (local_32f0.Mem)->TopMark = local_32f0.NextTopmostMark;
      local_32f0.Top = (uchar *)0x0;
    }
    if (bVar2) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar8) {
      FThreadStats::AddMessage(FVar26,CycleScopeEnd);
    }
    return bVar11;
  }
  local_3320.ComparisonIndex.Value = 0;
  local_3320.Number = 0;
  local_32b0 = 0;
  local_32b8 = 0;
  uVar30 = 0;
LAB_14a8f3150:
  lVar4 = local_32b8;
  local_32f8 = ~(uint)uVar30 >> 0x1f;
  uVar14 = uVar27;
  if ((int)(uint)uVar30 < (this->SearchContexts).ArrayNum) {
    uVar14 = local_32f8;
  }
  if ((uVar14 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar1 = (code *)swi(3);
    uVar10 = (*pcVar1)();
    return (bool)uVar10;
  }
  this_00 = (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)
            ((longlong)(this->SearchContexts).AllocatorInstance.Data + lVar4);
  local_3238 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this_00 + 0xb0));
  if (local_3238 == (UObject *)0x0) {
    if (1 < (byte)LogPoseSearch._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
  }
  else {
    if (*(longlong *)&local_3238[1].field_0x8 != 0) {
      uVar14 = *(int *)((longlong)this_00 + 0x28);
      local_32fc = uVar14;
      if (local_2eac < 0) {
        FVar24 = (ForElementType<FChooserEvaluationContext>)&local_30d8;
        if (local_30d8.SecondaryData != (ForElementType<FChooserEvaluationContext>)0x0) {
          FVar24 = local_30d8.SecondaryData;
        }
        DestructItems<FChooserEvaluationContext,int>((FChooserEvaluationContext *)FVar24,local_2eb0)
        ;
        local_2eb0 = 0;
        if (local_2eac != 0) {
          Core::Private::
          ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FChooserEvaluationContext>_>
                    (0x88,8,0,&local_30d8,0,&local_2eac);
        }
      }
      else {
        FVar24 = (ForElementType<FChooserEvaluationContext>)&local_30d8;
        if (local_30d8.SecondaryData != (ForElementType<FChooserEvaluationContext>)0x0) {
          FVar24 = local_30d8.SecondaryData;
        }
        DestructItems<FChooserEvaluationContext,int>((FChooserEvaluationContext *)FVar24,local_2eb0)
        ;
        local_2eb0 = 0;
      }
      if (local_2eb0 < (int)uVar14) {
        iVar28 = uVar14 - local_2eb0;
        iVar13 = Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FChooserEvaluationContext>_>
                           (0x88,8,iVar28,&local_30d8,&local_2eb0,&local_2eac);
        FVar24 = (ForElementType<FChooserEvaluationContext>)&local_30d8;
        if (local_30d8.SecondaryData != (ForElementType<FChooserEvaluationContext>)0x0) {
          FVar24 = local_30d8.SecondaryData;
        }
        DefaultConstructItems<FChooserEvaluationContext,int>
                  ((FChooserEvaluationContext *)((longlong)iVar13 * 0x88 + (longlong)FVar24),iVar28)
        ;
      }
      else {
        if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
        }
        if ((int)uVar14 < local_2eb0) {
          uVar29 = local_2eb0 - uVar14;
          if (((int)(uVar29 | uVar14) < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar11)) {
            pcVar1 = (code *)swi(3);
            uVar10 = (*pcVar1)();
            return (bool)uVar10;
          }
          if (uVar29 != 0) {
            FVar24 = (ForElementType<FChooserEvaluationContext>)&local_30d8;
            if (local_30d8.SecondaryData != (ForElementType<FChooserEvaluationContext>)0x0) {
              FVar24 = local_30d8.SecondaryData;
            }
            _Dst = (FChooserEvaluationContext *)((longlong)(int)uVar14 * 0x88 + (longlong)FVar24);
            DestructItems<FChooserEvaluationContext,int>(_Dst,uVar29);
            iVar13 = (local_2eb0 - uVar29) - uVar14;
            if (iVar13 != 0) {
              memmove(_Dst,_Dst + (int)uVar29,(longlong)iVar13 * 0x88);
            }
            local_2eb0 = local_2eb0 - uVar29;
            Core::Private::
            ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FChooserEvaluationContext>_>
                      (0x88,8,&local_30d8,local_2eb0,&local_2eac);
          }
        }
      }
      local_32a8.bEnablePoseFilters = false;
      local_32a8.bUsePlayRateRangeOverride = true;
      local_32a8._padding_ = 0;
      local_32a8.EventTag.TagName.ComparisonIndex.Value = 0;
      local_32a8.EventTag.TagName.Number = 0;
      local_32a8.TimeToEvent = 0.0;
      local_32a8.PlayRateRangeOverride._0_4_ = 0x3f800000;
      local_32a8.PlayRateRangeOverride._4_4_ = 0x3f800000;
      local_32c0 = (FFloatInterval)0x0;
      FSearchContext::FSearchContext((FSearchContext *)local_2d88,0.0,&local_32c0,&local_32a8);
      uVar30 = 0;
      if (0 < (int)uVar14) {
        do {
          uVar29 = (uint)uVar30;
          uVar31 = ~uVar29 >> 0x1f;
          uVar14 = uVar27;
          if ((int)uVar29 < *(int *)((longlong)this_00 + 0x28)) {
            uVar14 = uVar31;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar1 = (code *)swi(3);
            uVar10 = (*pcVar1)();
            return (bool)uVar10;
          }
          FVar23 = this_00;
          if (*(ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> *)
               ((longlong)this_00 + 0x20) !=
              (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0) {
            FVar23 = *(ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> *)
                      ((longlong)this_00 + 0x20);
          }
          pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)FVar23 + uVar30 * 8));
          if (pUVar15 == (UObject *)0x0) {
            if (1 < (byte)LogPoseSearch._0_1_) {
              Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
            }
            local_88 = 0;
            if (local_90 != (void *)0x0) {
              FMemory::Free(local_90);
            }
            TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_d0);
            local_e0 = 0;
            TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                      (&local_998);
            local_b40 = 0;
            TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TTransform<double>_>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TTransform<double>_>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                      (&local_2c08);
            if (local_2c88.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2c88.Data);
            }
            local_2c98 = 0;
            if (local_2ca0 != (void *)0x0) {
              FMemory::Free(local_2ca0);
            }
            TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                      ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                        *)(local_2d88 + 0x60));
            bVar11 = false;
            goto LAB_14a8f3955;
          }
          uVar14 = uVar27;
          if ((int)uVar29 < local_2eb0) {
            uVar14 = uVar31;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar1 = (code *)swi(3);
            uVar10 = (*pcVar1)();
            return (bool)uVar10;
          }
          FVar24 = (ForElementType<FChooserEvaluationContext>)&local_30d8;
          if (local_30d8.SecondaryData != (ForElementType<FChooserEvaluationContext>)0x0) {
            FVar24 = local_30d8.SecondaryData;
          }
          local_3248 = uVar30 * 0x88;
          FChooserEvaluationContext::AddObjectParam
                    ((FChooserEvaluationContext *)((longlong)FVar24 + local_3248),pUVar15);
          pIVar20 = FInteractionSearchContextBase::GetPoseHistory
                              ((FInteractionSearchContextBase *)this_00,uVar29);
          if ((pIVar20 == (IPoseHistory *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PoseHistory",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                                  ,0x405,L""), bVar11)) {
            pcVar1 = (code *)swi(3);
            uVar10 = (*pcVar1)();
            return (bool)uVar10;
          }
          uVar14 = 0;
          if ((int)uVar29 < local_2eb0) {
            uVar14 = uVar31;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar1 = (code *)swi(3);
            uVar10 = (*pcVar1)();
            return (bool)uVar10;
          }
          iVar13 = *(int *)((longlong)this_00 + 0xa8);
          FVar24 = (ForElementType<FChooserEvaluationContext>)&local_30d8;
          if (local_30d8.SecondaryData != (ForElementType<FChooserEvaluationContext>)0x0) {
            FVar24 = local_30d8.SecondaryData;
          }
          local_3178.DataPtr = (FName *)((longlong)this_00 + 0x80);
          if (*(FName **)((longlong)this_00 + 0xa0) != (FName *)0x0) {
            local_3178.DataPtr = *(FName **)((longlong)this_00 + 0xa0);
          }
          if ((iVar13 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar11)) {
            pcVar1 = (code *)swi(3);
            uVar10 = (*pcVar1)();
            return (bool)uVar10;
          }
          local_3178.ArrayNum = iVar13;
          pFVar16 = TArrayView<FName_const_,int>::operator[](&local_3178,uVar29);
          FSearchContext::AddRole
                    ((FSearchContext *)local_2d88,pFVar16,
                     (FChooserEvaluationContext *)(local_3248 + (longlong)FVar24),pIVar20);
          uVar30 = (ulonglong)(uVar29 + 1);
          this = local_3240;
        } while ((int)(uVar29 + 1) < (int)local_32fc);
      }
      local_3230 = local_3238;
      FSearchResults_Single::FSearchResults_Single(&local_2ea8);
      local_3280.DebugPtr = (UObject *)0x0;
      local_3278 = 0;
      local_3270 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_3268 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_3274 = 0;
      local_3260 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_3258 = 0;
      local_3250 = 0;
      TVar21.DebugPtr = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this_00 + 0xc0));
      if ((GC::GIsIncrementalReachabilityPending != false) && (TVar21.DebugPtr != (UObject *)0x0)) {
        GC::MarkAsReachable(TVar21.DebugPtr);
      }
      local_3274 = *(undefined1 *)((longlong)this_00 + 0xcc);
      local_3278 = *(undefined4 *)((longlong)this_00 + 200);
      local_3260 = *(double *)((longlong)this_00 + 0xe0);
      local_3258 = *(undefined2 *)((longlong)this_00 + 0xe8);
      local_3270 = *(double *)((longlong)this_00 + 0xd0);
      dStack_3268 = *(double *)((longlong)this_00 + 0xd8);
      local_3168 = &local_3230;
      uStack_3160 = 1;
      local_3108._12_4_ = uStack_315c;
      local_3108.ArrayNum = 1;
      local_3280.DebugPtr = TVar21.DebugPtr;
      local_3108.DataPtr = local_3168;
      UPoseSearchLibrary::MotionMatch
                ((FSearchContext *)local_2d88,&local_3108,
                 (FPoseSearchContinuingProperties *)&local_3280.ObjectPtr,
                 (FSearchResults *)&local_2ea8);
      Core::Private::Function::CheckCallable((void *)local_2ea8._padding_);
      lVar4 = local_2ea8._padding_;
      plVar25 = &local_2ea8._padding_;
      if ((longlong *)local_2ea8._padding_ != (longlong *)0x0) {
        plVar25 = (longlong *)local_2ea8._padding_;
      }
      uVar22 = (**(code **)(*plVar25 + 8))();
      (*(code *)lVar4)(&local_3138,uVar22);
      uVar7 = local_3120;
      uVar6 = local_3128;
      uVar5 = uStack_3130;
      uVar22 = local_3138;
      uVar14 = local_3318;
      FVar3 = local_3320;
      uVar29 = 0;
      if ((int)local_3318 < local_3308[0]) {
        uVar29 = local_32f8;
      }
      if ((uVar29 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar1 = (code *)swi(3);
        uVar10 = (*pcVar1)();
        return (bool)uVar10;
      }
      lVar4 = local_32b0;
      *(undefined8 *)(&(local_3310.Data)->field_0x0 + local_32b0) = uVar22;
      *(undefined8 *)((longlong)(&(local_3310.Data)->field_0x0 + local_32b0) + 8) = uVar5;
      *(undefined8 *)((longlong)&(local_3310.Data)->EventPoseIdx + local_32b0) = uVar6;
      *(undefined4 *)(&(local_3310.Data)->bIsContinuingPoseSearch + local_32b0) = uVar7;
      FSearchResults::~FSearchResults((FSearchResults *)&local_2ea8);
      local_88 = 0;
      if (local_90 != (void *)0x0) {
        FMemory::Free(local_90);
      }
      TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_d0);
      local_e0 = 0;
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::PoseSearch::FCachedChannel>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                (&local_998);
      local_b40 = 0;
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TTransform<double>_>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TTransform<double>_>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                (&local_2c08);
      if (local_2c88.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c88.Data);
      }
      local_2c98 = 0;
      if (local_2ca0 != (void *)0x0) {
        FMemory::Free(local_2ca0);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                  *)(local_2d88 + 0x60));
      local_3318 = uVar14 + 1;
      uVar30 = (ulonglong)local_3318;
      local_32b8 = local_32b8 + 0x1e0;
      local_3320 = (FName)((longlong)FVar3 + 1);
      local_32b0 = lVar4 + 0x1c;
      param_3 = local_3218;
      param_1 = local_3220;
      if ((this->SearchContexts).ArrayNum <= (int)local_3318) goto LAB_14a8f3879;
      goto LAB_14a8f3150;
    }
    if ((byte)LogPoseSearch._0_1_ < 2) goto LAB_14a8f3b96;
    local_3228.ComparisonIndex.Value = *(uint *)&local_3238->field_0x18;
    local_3228.Number = *(uint *)&local_3238->field_0x1c;
    ::FName::ToString(&local_3228,&local_3210);
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    if (local_3210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3210.Data.AllocatorInstance.Data);
      bVar11 = false;
      goto LAB_14a8f3955;
    }
  }
LAB_14a8f3b96:
  bVar11 = false;
  goto LAB_14a8f3955;
}

// FindCustomDependency @ 14a8f7df0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

IInteractionIslandDependency * __cdecl
UE::PoseSearch::FInteractionIsland::FindCustomDependency(UActorComponent *param_1)

{
  char cVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  uint uVar5;
  IInteractionIslandDependency *pIVar7;
  IInteractionIslandDependency *pIVar6;
  
  pIVar3 = IModularFeatures::Get();
  iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,IInteractionIslandDependency::FeatureName);
  pIVar6 = (IInteractionIslandDependency *)0x0;
  if (0 < iVar2) {
    do {
      lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))
                        (pIVar3,IInteractionIslandDependency::FeatureName,pIVar6);
      pIVar7 = (IInteractionIslandDependency *)(lVar4 + -8);
      if (lVar4 == 0) {
        pIVar7 = (IInteractionIslandDependency *)0x0;
      }
      if ((pIVar7 != (IInteractionIslandDependency *)0x0) &&
         (cVar1 = (**(code **)((longlong)*pIVar7 + 8))(pIVar7,0,param_1), cVar1 != '\0')) {
        return pIVar7;
      }
      uVar5 = (int)pIVar6 + 1;
      pIVar6 = (IInteractionIslandDependency *)(ulonglong)uVar5;
    } while ((int)uVar5 < iVar2);
  }
  return (IInteractionIslandDependency *)0x0;
}

// FindSearchResult @ 14a8f8d60

FInteractionSearchResult * __thiscall
UE::PoseSearch::FInteractionIsland::FindSearchResult
          (FInteractionIsland *this,FInteractionSearchContext *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FInteractionSearchResult *pFVar6;
  FScriptContainerElement *pFVar7;
  TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *pTVar8;
  FName *pFVar9;
  FInteractionSearchContext *pFVar10;
  TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *pTVar11;
  FName *pFVar12;
  FScriptContainerElement *pFVar13;
  FInteractionSearchResult *pFVar14;
  undefined1 local_res8 [8];
  
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                         ,0x485,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FInteractionSearchResult *)(*pcVar3)();
    return pFVar6;
  }
  iVar1 = (this->SearchResults).ArrayNum;
  pFVar6 = (FInteractionSearchResult *)(this->SearchResults).AllocatorInstance.Data;
  pFVar14 = pFVar6 + iVar1;
  while( true ) {
    if ((this->SearchResults).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::PoseSearch::FInteractionSearchResult_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar14) {
      return (FInteractionSearchResult *)0x0;
    }
    uVar2 = pFVar6->SearchIndex;
    uVar5 = 0;
    if ((int)uVar2 < (this->SearchContexts).ArrayNum) {
      uVar5 = ~uVar2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    pFVar13 = (this->SearchContexts).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x1e0;
    bVar4 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::
            UEOpEquals<UPoseSearchDatabase_const_,bool>
                      ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)(pFVar13 + 0xb0)
                       ,(TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                        &param_1->_padding_);
    if ((bVar4) && (*(int *)&pFVar13[0x28].field_0x0 == (int)param_1->_padding_)) {
      pFVar10 = param_1;
      if ((FInteractionSearchContext *)param_1->_padding_ != (FInteractionSearchContext *)0x0) {
        pFVar10 = (FInteractionSearchContext *)param_1->_padding_;
      }
      pFVar7 = pFVar13;
      if (*(FScriptContainerElement **)(pFVar13 + 0x20) != (FScriptContainerElement *)0x0) {
        pFVar7 = *(FScriptContainerElement **)(pFVar13 + 0x20);
      }
      bVar4 = CompareItems<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,int>
                        ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)pFVar7,
                         (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)pFVar10,
                         *(int *)&pFVar13[0x28].field_0x0);
      if (bVar4) {
        if (*(int *)&pFVar13[0x78].field_0x0 == (int)param_1->_padding_) {
          pTVar11 = (TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *)&param_1->_padding_;
          if ((TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *)param_1->_padding_ !=
              (TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *)0x0) {
            pTVar11 = (TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *)param_1->_padding_;
          }
          pTVar8 = (TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *)(pFVar13 + 0x30);
          if (*(TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> **)(pFVar13 + 0x70) !=
              (TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *)0x0) {
            pTVar8 = *(TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> **)(pFVar13 + 0x70);
          }
          bVar4 = CompareItems<TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>,int>
                            (pTVar8,pTVar11,*(int *)&pFVar13[0x78].field_0x0);
          if (bVar4) {
            if (*(int *)&pFVar13[0xa8].field_0x0 == (int)param_1->_padding_) {
              pFVar12 = (FName *)&param_1->_padding_;
              if ((FName *)param_1->_padding_ != (FName *)0x0) {
                pFVar12 = (FName *)param_1->_padding_;
              }
              pFVar9 = (FName *)(pFVar13 + 0x80);
              if (*(FName **)(pFVar13 + 0xa0) != (FName *)0x0) {
                pFVar9 = *(FName **)(pFVar13 + 0xa0);
              }
              bVar4 = CompareItems<FName,int>(pFVar9,pFVar12,*(int *)&pFVar13[0xa8].field_0x0);
              if (bVar4) {
                return pFVar6;
              }
            }
          }
        }
      }
    }
    pFVar6 = pFVar6 + 1;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FInteractionSearchResult *)(*pcVar3)();
  return pFVar6;
}

// GetMainActor @ 14a8fa9a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall UE::PoseSearch::FInteractionIsland::GetMainActor(FInteractionIsland *this)

{
  UObject *pUVar1;
  AActor *pAVar2;
  
  if ((this->SearchContexts).ArrayNum != 0) {
    pUVar1 = GetMainAnimContext(this);
    pAVar2 = GetContextOwningActor(pUVar1,false);
    return pAVar2;
  }
  return (AActor *)0x0;
}

// GetMainAnimContext @ 14a8fa9d0

UObject * __thiscall
UE::PoseSearch::FInteractionIsland::GetMainAnimContext(FInteractionIsland *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  
  iVar1 = (this->IslandAnimContexts).ArrayNum;
  if (iVar1 == 0) {
    return (UObject *)0x0;
  }
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UObject *)(*pcVar2)();
      return pUVar4;
    }
  }
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(this->IslandAnimContexts).AllocatorInstance.Data);
  return pUVar4;
}

// GetResult_AnyThread @ 14a8fd7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::PoseSearch::FInteractionIsland::GetResult_AnyThread
          (FInteractionIsland *this,UObject *param_1,FPoseSearchBlueprintResult *param_2,
          bool param_3)

{
  undefined8 *puVar1;
  float fVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  FWeakObjectPtr FVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  FWeakObjectPtr FVar19;
  FDatabasePoseIdx *pFVar20;
  __m128d _Var21;
  __m128d _Var22;
  __m128d _Var23;
  __m128d _Var24;
  __m128d _Var25;
  __m128d _Var26;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar27;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar28;
  bool bVar29;
  undefined1 uVar30;
  int iVar31;
  UObject *pUVar32;
  AActor *pAVar33;
  UPoseSearchDatabase *this_00;
  FSearchIndexAsset *pFVar34;
  FPoseSearchDatabaseAnimationAsset *pFVar35;
  UClass *pUVar36;
  FName *pFVar37;
  uint *puVar38;
  ulonglong uVar39;
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> FVar40;
  uint uVar41;
  uint uVar42;
  longlong lVar43;
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> this_01;
  longlong lVar44;
  FDatabasePoseIdx *pFVar45;
  uint uVar46;
  int *piVar47;
  FWeakObjectPtr FVar48;
  longlong lVar49;
  undefined1 auStack_248 [32];
  longlong local_228;
  longlong local_220;
  undefined1 local_218 [8];
  AActor *local_210;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_208;
  UObject *local_200;
  FDatabasePoseIdx *local_1f8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_1f0;
  FName *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  TObjectPtr<UObject>_u_0 local_1d8;
  undefined4 local_1d0;
  undefined1 local_1cc;
  undefined2 local_1cb;
  undefined1 local_1c9;
  undefined8 local_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined2 local_19b;
  undefined1 local_199;
  FName local_198;
  void *local_190;
  undefined8 local_188;
  void *local_180;
  undefined8 local_178;
  void *local_170;
  undefined8 local_168;
  undefined1 local_160 [8];
  TArrayView<FName_const_,int> local_158;
  undefined1 local_148 [144];
  undefined4 local_b8;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_248;
  if ((param_1 == (UObject *)0x0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("AnimContext",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                          ,0x418,L""), bVar29)) {
    pcVar6 = (code *)swi(3);
    uVar30 = (*pcVar6)();
    return (bool)uVar30;
  }
  if (param_3) {
    local_210 = GetContextOwningActor(param_1,false);
  }
  else {
    local_210 = (AActor *)0x0;
  }
  iVar31 = (this->SearchResults).ArrayNum;
  uVar39 = (ulonglong)iVar31;
  pFVar45 = (FDatabasePoseIdx *)(this->SearchResults).AllocatorInstance.Data;
  local_208 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
              CONCAT44(local_208._4_4_,iVar31);
  local_200 = (UObject *)(pFVar45 + uVar39 * 0x48);
  do {
    pUVar32 = local_200;
    local_1f8 = pFVar45;
    if ((this->SearchResults).ArrayNum != (int)uVar39) {
      local_218[0] = 0;
      `TCheckedPointerIterator<UE::PoseSearch::FInteractionSearchResult,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_218);
    }
    if ((UObject *)pFVar45 == pUVar32) {
      local_1c8 = 0x3f800000;
      local_1cb = 0;
      local_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_1c9 = 0;
      local_19b = 0;
      local_199 = 0;
      local_1d0 = 0;
      local_1cc = 0;
      local_19c = 0;
      local_1b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1d8.DebugPtr = (UObject *)0x0;
      local_1a8 = 0;
      local_1a0 = 0x7f7fffff;
      local_198 = DefaultRole;
      local_190 = (void *)0x0;
      local_188 = 0;
      local_180 = (void *)0x0;
      local_178 = 0;
      local_170 = (void *)0x0;
      local_168 = 0;
      FPoseSearchBlueprintResult::operator=
                (param_2,(FPoseSearchBlueprintResult *)&local_1d8.ObjectPtr);
      if (local_170 != (void *)0x0) {
        FMemory::Free(local_170);
      }
      if (local_180 != (void *)0x0) {
        FMemory::Free(local_180);
      }
      if (local_190 != (void *)0x0) {
        FMemory::Free(local_190);
      }
      return false;
    }
    uVar42 = pFVar45[2].Database.WeakPtr.ObjectIndex;
    iVar31 = (this->SearchContexts).ArrayNum;
    uVar41 = 0;
    if ((int)uVar42 < iVar31) {
      uVar41 = ~uVar42 >> 0x1f;
    }
    if ((uVar41 == 0) &&
       (local_228 = (longlong)(int)uVar42, local_220 = (longlong)iVar31,
       bVar29 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar29)) {
      pcVar6 = (code *)swi(3);
      uVar30 = (*pcVar6)();
      return (bool)uVar30;
    }
    uVar41 = 0;
    this_01 = (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)
              ((longlong)(int)uVar42 * 0x1e0 +
              (longlong)(this->SearchContexts).AllocatorInstance.Data);
    iVar31 = *(int *)((longlong)this_01 + 0x28);
    if (0 < iVar31) {
      do {
        if (param_3) {
          uVar42 = 0;
          if ((int)uVar41 < iVar31) {
            uVar42 = ~uVar41 >> 0x1f;
          }
          if (uVar42 == 0) {
            local_220 = (longlong)iVar31;
            local_228 = (longlong)(int)uVar41;
            bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar29) {
              pcVar6 = (code *)swi(3);
              uVar30 = (*pcVar6)();
              return (bool)uVar30;
            }
          }
          FVar40 = this_01;
          if (*(ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> *)
               ((longlong)this_01 + 0x20) !=
              (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0) {
            FVar40 = *(ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> *)
                      ((longlong)this_01 + 0x20);
          }
          pUVar32 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                        ((longlong)FVar40 + (longlong)(int)uVar41 * 8));
          pAVar33 = GetContextOwningActor(pUVar32,false);
          bVar29 = pAVar33 == local_210;
        }
        else {
          uVar42 = 0;
          if ((int)uVar41 < iVar31) {
            uVar42 = ~uVar41 >> 0x1f;
          }
          if (uVar42 == 0) {
            local_220 = (longlong)iVar31;
            local_228 = (longlong)(int)uVar41;
            bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar29) {
              pcVar6 = (code *)swi(3);
              uVar30 = (*pcVar6)();
              return (bool)uVar30;
            }
          }
          FVar40 = this_01;
          if (*(ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> *)
               ((longlong)this_01 + 0x20) !=
              (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0) {
            FVar40 = *(ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> *)
                      ((longlong)this_01 + 0x20);
          }
          pUVar32 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                        ((longlong)FVar40 + (longlong)(int)uVar41 * 8));
          bVar29 = pUVar32 == param_1;
        }
        if (bVar29) {
          this_00 = (UPoseSearchDatabase *)FWeakObjectPtr::Get(&(pFVar45->Database).WeakPtr);
          if ((this_00 == (UPoseSearchDatabase *)0x0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Database",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                                  ,0x430,L""), bVar29)) {
            pcVar6 = (code *)swi(3);
            uVar30 = (*pcVar6)();
            return (bool)uVar30;
          }
          pFVar34 = FDatabasePoseIdx::GetSearchIndexAsset(pFVar45,false);
          if ((pFVar34 == (FSearchIndexAsset *)0x0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SearchIndexAsset",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                                  ,0x433,L""), bVar29)) {
            pcVar6 = (code *)swi(3);
            uVar30 = (*pcVar6)();
            return (bool)uVar30;
          }
          pFVar35 = UPoseSearchDatabase::GetDatabaseAnimationAsset(this_00,pFVar34);
          if ((pFVar35 == (FPoseSearchDatabaseAnimationAsset *)0x0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("DatabaseAnimationAssetBase",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                                  ,0x436,L""), bVar29)) {
            pcVar6 = (code *)swi(3);
            uVar30 = (*pcVar6)();
            return (bool)uVar30;
          }
          pUVar32 = (UObject *)(**(code **)(pFVar35->_padding_ + 8))(pFVar35);
          if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar32 != (UObject *)0x0)) {
            GC::MarkAsReachable(pUVar32);
          }
          fVar2 = __real_7f7fffff;
          (param_2->SelectedAnim).field0_0x0.DebugPtr = pUVar32;
          if ((fVar2 == (float)pFVar45[1].Database.WeakPtr.ObjectSerialNumber) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsAssetTimeValid(AssetTime)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchResult.h"
                                  ,0x4a,L""), bVar29)) {
            pcVar6 = (code *)swi(3);
            uVar30 = (*pcVar6)();
            return (bool)uVar30;
          }
          pUVar32 = (UObject *)0x0;
          param_2->SelectedTime = (float)pFVar45[1].Database.WeakPtr.ObjectSerialNumber;
          param_2->bIsContinuingPoseSearch = SUB41(pFVar45[2].PoseIdx,0);
          param_2->bLoop = pFVar34->bLooping;
          param_2->bIsMirrored = pFVar34->bMirrored;
          fVar2 = pFVar34->BlendParameterY;
          (param_2->BlendParameters).field0_0x0._s_0.X = (double)pFVar34->BlendParameterX;
          (param_2->BlendParameters).field0_0x0._s_0.Y = (double)fVar2;
          (param_2->BlendParameters).field0_0x0._s_0.Z = 0.0;
          if ((GC::GIsIncrementalReachabilityPending != false) &&
             (this_00 != (UPoseSearchDatabase *)0x0)) {
            GC::MarkAsReachable((UObject *)this_00);
          }
          (param_2->SelectedDatabase).field0_0x0.DebugPtr = this_00;
          param_2->SearchCost = (float)pFVar45[1].PoseIdx;
          param_2->bIsInteraction = true;
          uVar42 = 0;
          if ((int)uVar41 < *(int *)((longlong)this_01 + 0xa8)) {
            uVar42 = ~uVar41 >> 0x1f;
          }
          if (uVar42 == 0) {
            local_228 = (longlong)(int)uVar41;
            local_220 = (longlong)*(int *)((longlong)this_01 + 0xa8);
            bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar29) {
              pcVar6 = (code *)swi(3);
              uVar30 = (*pcVar6)();
              return (bool)uVar30;
            }
          }
          lVar43 = (longlong)this_01 + 0x80;
          if (*(longlong *)((longlong)this_01 + 0xa0) != 0) {
            lVar43 = *(longlong *)((longlong)this_01 + 0xa0);
          }
          param_2->Role = *(FName *)(lVar43 + (longlong)(int)uVar41 * 8);
          param_2->WantedPlayRate = 1.0;
          if ((param_2->SelectedAnim).field0_0x0.DebugPtr != (UObject *)0x0) {
            pUVar36 = Z_Construct_UClass_UMultiAnimAsset_NoRegister();
            bVar29 = FObjectPtr::IsA((FObjectPtr *)param_2,pUVar36);
            if (bVar29) {
              pUVar32 = (param_2->SelectedAnim).field0_0x0.DebugPtr;
            }
          }
          local_200 = pUVar32;
          if (pUVar32 == (UObject *)0x0) {
            if (((param_2->AnimContexts).ArrayNum != 1) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Result.AnimContexts.Num() == 1",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                                    ,0x46f,L""), bVar29)) {
              pcVar6 = (code *)swi(3);
              uVar30 = (*pcVar6)();
              return (bool)uVar30;
            }
            TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::
            operator=<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      (&param_2->ActorRootTransforms,
                       (TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)&pFVar45[2].Database.WeakPtr.ObjectSerialNumber);
            TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::
            operator=<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      (&param_2->ActorRootBoneTransforms,
                       (TArray<UE::Math::TTransform<double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)&pFVar45[0x25].Database);
            TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>::SetNum
                      (&param_2->AnimContexts,1,Default);
            pUVar32 = FInteractionSearchContextBase::GetAnimContext
                                ((FInteractionSearchContextBase *)this_01,0);
            iVar31 = (param_2->AnimContexts).ArrayNum;
            if (iVar31 < 1) {
              local_228 = 0;
              local_220 = (longlong)iVar31;
              bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar29) {
                pcVar6 = (code *)swi(3);
                uVar30 = (*pcVar6)();
                return (bool)uVar30;
              }
            }
            pFVar4 = (param_2->AnimContexts).AllocatorInstance.Data;
            if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar32 != (UObject *)0x0)) {
              GC::MarkAsReachable(pUVar32);
            }
            *(UObject **)pFVar4 = pUVar32;
            return true;
          }
          iVar31 = (**(code **)(*(longlong *)pUVar32 + 0x2c8))(pUVar32);
          local_208 = &param_2->ActorRootTransforms;
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
                    (local_208,iVar31,Default);
          local_1f0 = &param_2->ActorRootBoneTransforms;
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
                    (local_1f0,iVar31,Default);
          pAVar33 = (AActor *)&param_2->AnimContexts;
          local_210 = pAVar33;
          TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>::SetNum
                    ((TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_> *)pAVar33,
                     iVar31,Default);
          iStack_1e0 = *(int *)((longlong)this_01 + 0xa8);
          local_1e8 = *(FName **)((longlong)this_01 + 0xa0);
          if (*(FName **)((longlong)this_01 + 0xa0) == (FName *)0x0) {
            local_1e8 = (FName *)((longlong)this_01 + 0x80);
          }
          if ((iStack_1e0 < 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar29)) {
            pcVar6 = (code *)swi(3);
            uVar30 = (*pcVar6)();
            return (bool)uVar30;
          }
          local_158._12_4_ = uStack_1dc;
          local_158.ArrayNum = iStack_1e0;
          local_158.DataPtr = local_1e8;
          MakeRoleToIndex((TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                           *)local_148,&local_158);
          uVar42 = 0;
          local_1e8 = (FName *)(longlong)iVar31;
          if (0 < iVar31) {
            lVar44 = 0;
            lVar43 = 0;
            do {
              pFVar37 = (FName *)(**(code **)(*(longlong *)pUVar32 + 0x2d0))
                                           (pUVar32,local_160,uVar42);
              puVar38 = (uint *)TMapBase<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                ::Find((TMapBase<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                        *)local_148,*pFVar37);
              pFVar45 = local_1f8;
              pTVar27 = local_208;
              _Var26 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
              _Var25 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
              _Var24 = UE::Math::TTransform<double>::Identity.Translation.ZW;
              _Var23 = UE::Math::TTransform<double>::Identity.Translation.XY;
              _Var22 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
              _Var21 = UE::Math::TTransform<double>::Identity.Rotation.XY;
              if (puVar38 == (uint *)0x0) {
                uVar46 = ~uVar42 >> 0x1f;
                uVar41 = 0;
                if ((int)uVar42 < local_208->ArrayNum) {
                  uVar41 = uVar46;
                }
                if (uVar41 == 0) {
                  local_228 = (longlong)(int)uVar42;
                  local_220 = (longlong)local_208->ArrayNum;
                  bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar29) {
                    pcVar6 = (code *)swi(3);
                    uVar30 = (*pcVar6)();
                    return (bool)uVar30;
                  }
                }
                pTVar28 = local_1f0;
                pFVar4 = (pTVar27->AllocatorInstance).Data;
                *(double (*) [2])(pFVar4 + lVar43) = _Var21.m128d_f64;
                *(double (*) [2])(pFVar4 + lVar43 + 0x10) = _Var22.m128d_f64;
                *(double (*) [2])(pFVar4 + lVar43 + 0x20) = _Var23.m128d_f64;
                *(double (*) [2])(pFVar4 + lVar43 + 0x30) = _Var24.m128d_f64;
                *(double (*) [2])(pFVar4 + lVar43 + 0x40) = _Var25.m128d_f64;
                *(double (*) [2])(pFVar4 + lVar43 + 0x50) = _Var26.m128d_f64;
                _Var26 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
                _Var25 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
                _Var24 = UE::Math::TTransform<double>::Identity.Translation.ZW;
                _Var23 = UE::Math::TTransform<double>::Identity.Translation.XY;
                _Var22 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
                _Var21 = UE::Math::TTransform<double>::Identity.Rotation.XY;
                uVar41 = 0;
                if ((int)uVar42 < local_1f0->ArrayNum) {
                  uVar41 = uVar46;
                }
                if (uVar41 == 0) {
                  local_228 = (longlong)(int)uVar42;
                  local_220 = (longlong)local_1f0->ArrayNum;
                  bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar29) {
                    pcVar6 = (code *)swi(3);
                    uVar30 = (*pcVar6)();
                    return (bool)uVar30;
                  }
                }
                pFVar4 = (pTVar28->AllocatorInstance).Data;
                *(double (*) [2])(pFVar4 + lVar43) = _Var21.m128d_f64;
                *(double (*) [2])(pFVar4 + lVar43 + 0x10) = _Var22.m128d_f64;
                *(double (*) [2])(pFVar4 + lVar43 + 0x20) = _Var23.m128d_f64;
                *(double (*) [2])(pFVar4 + lVar43 + 0x30) = _Var24.m128d_f64;
                *(double (*) [2])(pFVar4 + lVar43 + 0x40) = _Var25.m128d_f64;
                *(double (*) [2])(pFVar4 + lVar43 + 0x50) = _Var26.m128d_f64;
                uVar41 = 0;
                if ((int)uVar42 <
                    ((TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_> *)pAVar33)->
                    ArrayNum) {
                  uVar41 = uVar46;
                }
                if (uVar41 == 0) {
                  local_228 = (longlong)(int)uVar42;
                  local_220 = (longlong)
                              ((TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_> *)
                              pAVar33)->ArrayNum;
                  bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar29) {
                    pcVar6 = (code *)swi(3);
                    uVar30 = (*pcVar6)();
                    return (bool)uVar30;
                  }
                }
                *(undefined8 *)
                 ((((TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_> *)pAVar33)->
                  AllocatorInstance).Data + lVar44 * 8) = 0;
              }
              else {
                uVar41 = *puVar38;
                lVar49 = (longlong)(int)uVar41;
                pFVar20 = local_1f8 + 2;
                uVar46 = 0;
                if ((int)uVar41 < local_1f8[0x24].PoseIdx) {
                  uVar46 = ~uVar41 >> 0x1f;
                }
                if ((uVar46 == 0) &&
                   (local_228 = lVar49, local_220 = (longlong)local_1f8[0x24].PoseIdx,
                   bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar29)) {
                  pcVar6 = (code *)swi(3);
                  uVar30 = (*pcVar6)();
                  return (bool)uVar30;
                }
                pTVar27 = local_208;
                piVar3 = *(int **)&pFVar45[0x22].Database.WeakPtr.ObjectSerialNumber;
                piVar47 = &(pFVar20->Database).WeakPtr.ObjectSerialNumber;
                if (piVar3 != (int *)0x0) {
                  piVar47 = piVar3;
                }
                uVar7 = *(undefined8 *)(piVar47 + lVar49 * 0x18);
                uVar8 = *(undefined8 *)(piVar47 + lVar49 * 0x18 + 2);
                uVar9 = *(undefined8 *)(piVar47 + lVar49 * 0x18 + 4);
                uVar10 = *(undefined8 *)(piVar47 + lVar49 * 0x18 + 4 + 2);
                uVar11 = *(undefined8 *)(piVar47 + lVar49 * 0x18 + 8);
                uVar12 = *(undefined8 *)(piVar47 + lVar49 * 0x18 + 8 + 2);
                uVar13 = *(undefined8 *)(piVar47 + lVar49 * 0x18 + 0xc);
                uVar14 = *(undefined8 *)(piVar47 + lVar49 * 0x18 + 0xc + 2);
                uVar15 = *(undefined8 *)(piVar47 + lVar49 * 0x18 + 0x10);
                uVar16 = *(undefined8 *)(piVar47 + lVar49 * 0x18 + 0x10 + 2);
                uVar17 = *(undefined8 *)(piVar47 + lVar49 * 0x18 + 0x14);
                uVar18 = *(undefined8 *)(piVar47 + lVar49 * 0x18 + 0x14 + 2);
                uVar41 = 0;
                if ((int)uVar42 < local_208->ArrayNum) {
                  uVar41 = ~uVar42 >> 0x1f;
                }
                if (uVar41 == 0) {
                  local_228 = (longlong)(int)uVar42;
                  local_220 = (longlong)local_208->ArrayNum;
                  bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar29) {
                    pcVar6 = (code *)swi(3);
                    uVar30 = (*pcVar6)();
                    return (bool)uVar30;
                  }
                }
                pFVar20 = local_1f8;
                pFVar4 = (pTVar27->AllocatorInstance).Data;
                pFVar45 = local_1f8 + 0x25;
                *(undefined8 *)(pFVar4 + lVar43) = uVar7;
                *(undefined8 *)(pFVar4 + lVar43 + 8) = uVar8;
                *(undefined8 *)(pFVar4 + lVar43 + 0x10) = uVar9;
                *(undefined8 *)(pFVar4 + lVar43 + 0x10 + 8) = uVar10;
                *(undefined8 *)(pFVar4 + lVar43 + 0x20) = uVar11;
                *(undefined8 *)(pFVar4 + lVar43 + 0x20 + 8) = uVar12;
                *(undefined8 *)(pFVar4 + lVar43 + 0x30) = uVar13;
                *(undefined8 *)(pFVar4 + lVar43 + 0x30 + 8) = uVar14;
                *(undefined8 *)(pFVar4 + lVar43 + 0x40) = uVar15;
                *(undefined8 *)(pFVar4 + lVar43 + 0x40 + 8) = uVar16;
                *(undefined8 *)(pFVar4 + lVar43 + 0x50) = uVar17;
                *(undefined8 *)(pFVar4 + lVar43 + 0x50 + 8) = uVar18;
                uVar41 = *puVar38;
                iVar31 = local_1f8[0x46].Database.WeakPtr.ObjectSerialNumber;
                uVar46 = 0;
                if ((int)uVar41 < iVar31) {
                  uVar46 = ~uVar41 >> 0x1f;
                }
                if ((uVar46 == 0) &&
                   (local_228 = (longlong)(int)uVar41, local_220 = (longlong)iVar31,
                   bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar29)) {
                  pcVar6 = (code *)swi(3);
                  uVar30 = (*pcVar6)();
                  return (bool)uVar30;
                }
                pTVar27 = local_1f0;
                FVar5 = pFVar20[0x45].Database.WeakPtr;
                FVar48 = (FWeakObjectPtr)&pFVar45->Database;
                if (FVar5 != (FWeakObjectPtr)0x0) {
                  FVar48 = FVar5;
                }
                lVar49 = (longlong)(int)uVar41 * 0x60;
                FVar5 = *(FWeakObjectPtr *)(lVar49 + (longlong)FVar48);
                FVar19 = ((FWeakObjectPtr *)(lVar49 + (longlong)FVar48))[1];
                puVar1 = (undefined8 *)(lVar49 + 0x10 + (longlong)FVar48);
                uVar7 = *puVar1;
                uVar8 = puVar1[1];
                puVar1 = (undefined8 *)(lVar49 + 0x20 + (longlong)FVar48);
                uVar9 = *puVar1;
                uVar10 = puVar1[1];
                puVar1 = (undefined8 *)(lVar49 + 0x30 + (longlong)FVar48);
                uVar11 = *puVar1;
                uVar12 = puVar1[1];
                puVar1 = (undefined8 *)(lVar49 + 0x40 + (longlong)FVar48);
                uVar13 = *puVar1;
                uVar14 = puVar1[1];
                puVar1 = (undefined8 *)(lVar49 + 0x50 + (longlong)FVar48);
                uVar15 = *puVar1;
                uVar16 = puVar1[1];
                uVar41 = 0;
                if ((int)uVar42 < local_1f0->ArrayNum) {
                  uVar41 = ~uVar42 >> 0x1f;
                }
                if (uVar41 == 0) {
                  local_228 = (longlong)(int)uVar42;
                  local_220 = (longlong)local_1f0->ArrayNum;
                  bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar29) {
                    pcVar6 = (code *)swi(3);
                    uVar30 = (*pcVar6)();
                    return (bool)uVar30;
                  }
                }
                pFVar4 = (pTVar27->AllocatorInstance).Data;
                *(FWeakObjectPtr *)(pFVar4 + lVar43) = FVar5;
                ((FWeakObjectPtr *)(pFVar4 + lVar43))[1] = FVar19;
                *(undefined8 *)(pFVar4 + lVar43 + 0x10) = uVar7;
                *(undefined8 *)(pFVar4 + lVar43 + 0x10 + 8) = uVar8;
                *(undefined8 *)(pFVar4 + lVar43 + 0x20) = uVar9;
                *(undefined8 *)(pFVar4 + lVar43 + 0x20 + 8) = uVar10;
                *(undefined8 *)(pFVar4 + lVar43 + 0x30) = uVar11;
                *(undefined8 *)(pFVar4 + lVar43 + 0x30 + 8) = uVar12;
                *(undefined8 *)(pFVar4 + lVar43 + 0x40) = uVar13;
                *(undefined8 *)(pFVar4 + lVar43 + 0x40 + 8) = uVar14;
                *(undefined8 *)(pFVar4 + lVar43 + 0x50) = uVar15;
                *(undefined8 *)(pFVar4 + lVar43 + 0x50 + 8) = uVar16;
                uVar41 = *puVar38;
                uVar46 = 0;
                if ((int)uVar41 < *(int *)((longlong)this_01 + 0x28)) {
                  uVar46 = ~uVar41 >> 0x1f;
                }
                if ((uVar46 == 0) &&
                   (local_228 = (longlong)(int)uVar41,
                   local_220 = (longlong)*(int *)((longlong)this_01 + 0x28),
                   bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar29)) {
                  pcVar6 = (code *)swi(3);
                  uVar30 = (*pcVar6)();
                  return (bool)uVar30;
                }
                FVar40 = this_01;
                if (*(ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> *)
                     ((longlong)this_01 + 0x20) !=
                    (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0) {
                  FVar40 = *(ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> *)
                            ((longlong)this_01 + 0x20);
                }
                pUVar32 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                              ((longlong)FVar40 + (longlong)(int)uVar41 * 8));
                pAVar33 = local_210;
                uVar41 = 0;
                if ((int)uVar42 < *(int *)&local_210->_padding_) {
                  uVar41 = ~uVar42 >> 0x1f;
                }
                if (uVar41 == 0) {
                  local_228 = (longlong)(int)uVar42;
                  local_220 = (longlong)*(int *)&local_210->_padding_;
                  bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar29) {
                    pcVar6 = (code *)swi(3);
                    uVar30 = (*pcVar6)();
                    return (bool)uVar30;
                  }
                }
                pFVar4 = ((ForAnyElementType *)&pAVar33->_padding_)->Data;
                if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar32 != (UObject *)0x0))
                {
                  GC::MarkAsReachable(pUVar32);
                }
                *(UObject **)(pFVar4 + lVar44 * 8) = pUVar32;
                pAVar33 = local_210;
              }
              uVar42 = uVar42 + 1;
              lVar44 = lVar44 + 1;
              lVar43 = lVar43 + 0x60;
              pUVar32 = local_200;
            } while (lVar44 < (longlong)local_1e8);
          }
          local_b8 = 0;
          if ((void *)local_148._136_8_ != (void *)0x0) {
            FMemory::Free((void *)local_148._136_8_);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                      *)local_148);
          return true;
        }
        iVar31 = *(int *)((longlong)this_01 + 0x28);
        uVar41 = uVar41 + 1;
      } while ((int)uVar41 < iVar31);
    }
    pFVar45 = pFVar45 + 0x48;
    uVar39 = (ulonglong)local_208 & 0xffffffff;
  } while( true );
}

// HasTickDependencies @ 14a900140

bool __thiscall UE::PoseSearch::FInteractionIsland::HasTickDependencies(FInteractionIsland *this)

{
  return this->bHasTickDependencies;
}

// InjectToActor @ 14a9012a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::PoseSearch::FInteractionIsland::InjectToActor
          (FInteractionIsland *this,UObject *param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  USkeletalMeshComponent *pUVar5;
  FStaticBasicLogRecord *pFVar6;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res20;
  USkeletalMeshComponent *local_38;
  UObject *local_30;
  
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                         ,0x319,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_1 == (UObject *)0x0) {
    return;
  }
  if (this->bPreTickFunctionExecuted == false) {
    if (this->bPostTickFunctionExecuted == false) goto LAB_14a901342;
    if (1 < (byte)LogPoseSearch._0_1_) {
      pFVar6 = &::LOG_Static;
      goto LAB_14a90132e;
    }
  }
  else if (1 < (byte)LogPoseSearch._0_1_) {
    pFVar6 = &::LOG_Static;
LAB_14a90132e:
    Logging::Private::BasicLog<2>(pFVar6,(FLogCategoryBase *)&LogPoseSearch);
  }
  LogTickDependencies(this);
LAB_14a901342:
  pUVar4 = Z_Construct_UClass_UAnimInstance_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_)) {
    pUVar4 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       (pUVar5 = (USkeletalMeshComponent *)param_1,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
       &pUVar4->_padding_)) {
      pUVar5 = (USkeletalMeshComponent *)0x0;
    }
  }
  else {
    pUVar5 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)param_1);
  }
  if (pUVar5 != (USkeletalMeshComponent *)0x0) {
    iVar1 = (this->IslandAnimContexts).ArrayNum;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar5);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_38 = pUVar5;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar5);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_38);
    TArray<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_>
              (&this->TickActorComponents,
               (TWeakObjectPtr<UActorComponent,FWeakObjectPtr> *)&local_res10);
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_1);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_30 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_30);
    TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
              (&this->IslandAnimContexts,
               (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res20);
    if (((this->TickActorComponents).ArrayNum != (this->IslandAnimContexts).ArrayNum) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TickActorComponents.Num() == IslandAnimContexts.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                           ,0x33d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (param_2) {
      AddTickDependencies(this,(UActorComponent *)pUVar5,iVar1 == 0);
    }
    else if ((this->bHasTickDependencies != false) &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("!bHasTickDependencies",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                                ,0x345,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// IsInitialized @ 14a902190

bool __thiscall UE::PoseSearch::FInteractionIsland::IsInitialized(FInteractionIsland *this)

{
  return (this->SearchContexts).ArrayNum != 0;
}

// LogTickDependencies @ 14a903040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::PoseSearch::FInteractionIsland::LogTickDependencies
          (TArrayView<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_const_,int> *param_1,
          int param_2)

{
  FWeakObjectPtr *pFVar1;
  code *pcVar2;
  bool bVar3;
  UActorComponent *pUVar4;
  IInteractionIslandDependency *pIVar5;
  FTickFunction *pFVar6;
  FWeakObjectPtr *this;
  FName local_res8;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                         ,0x393,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = &param_1->DataPtr->WeakPtr;
  pFVar1 = this + param_1->ArrayNum;
  for (; this != pFVar1; this = this + 1) {
    pUVar4 = (UActorComponent *)FWeakObjectPtr::Get(this);
    if (pUVar4 == (UActorComponent *)0x0) {
      if (4 < (byte)LogPoseSearch._0_1_) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
      }
    }
    else {
      if (4 < (byte)LogPoseSearch._0_1_) {
        local_res8 = (FName)pUVar4->OwnerPrivate->_padding_;
        ::FName::ToString(&local_res8,&local_38);
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      pIVar5 = FindCustomDependency(pUVar4);
      if (pIVar5 == (IInteractionIslandDependency *)0x0) {
        LogTickFunction((FTickFunction *)&pUVar4->PrimaryComponentTick,GameThread,true,1,0x32);
      }
      else {
        pFVar6 = (FTickFunction *)(**(code **)((longlong)*pIVar5 + 0x10))(pIVar5,pUVar4);
        if (pFVar6 == (FTickFunction *)0x0) {
          if (1 < (byte)LogPoseSearch._0_1_) {
            local_res18[0] = (FName)pUVar4->_padding_;
            ::FName::ToString(local_res18,&local_28);
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
            if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_28.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          LogTickFunction(pFVar6,GameThread,true,1,0x32);
        }
      }
    }
  }
  return;
}

// LogTickDependencies @ 14a903210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::PoseSearch::FInteractionIsland::LogTickDependencies(FInteractionIsland *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  int iVar4;
  bool bVar5;
  TArrayView<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_const_,int> *pTVar6;
  longlong *plVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  TStatIdData *local_res10;
  FConstructor local_res18;
  undefined8 *local_res20;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  TArrayView<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_const_,int> local_a8;
  TArrayView<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_const_,int> local_98;
  ForAnyElementType local_88;
  undefined8 local_80;
  int local_78;
  TStatId local_68 [2];
  longlong local_58 [3];
  longlong *local_40;
  
  iVar8 = (this->InteractionSubsystem->Islands).ArrayNum;
  pFVar2 = (this->InteractionSubsystem->Islands).AllocatorInstance.Data;
  if ((iVar8 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar9 = pFVar2;
  do {
    if (pFVar9 == pFVar2 + (longlong)iVar8 * 8) {
      iVar8 = -1;
LAB_14a903280:
      bVar5 = IsInGameThread();
      if (!bVar5) {
        local_b0 = (this->TickActorComponents).ArrayNum;
        lVar10 = (longlong)local_b0;
        pFVar2 = (this->TickActorComponents).AllocatorInstance.Data;
        local_b8.Data = (FScriptContainerElement *)0x0;
        if (local_b0 == 0) {
          local_ac = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,local_b0,0,&local_b8,local_b0,&local_ac);
          memcpy(local_b8.Data,pFVar2,lVar10 << 3);
        }
        iVar4 = local_b0;
        _Src.Data = local_b8.Data;
        local_88.Data = (FScriptContainerElement *)0x0;
        local_80 = CONCAT44(local_80._4_4_,local_b0);
        if (local_b0 == 0) {
          local_80 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,local_b0,0,&local_88,local_b0,(int *)((longlong)&local_80 + 4));
          memcpy(local_88.Data,_Src.Data,(longlong)iVar4 << 3);
        }
        local_68[0].StatIdPtr = (TStatIdData *)0x0;
        local_78 = iVar8;
        local_40 = FMemory::Malloc(0x20,8);
        local_40[1] = 0;
        *local_40 = (longlong)
                    &Core::Private::Function::
                     TFunction_OwnedObject<`UE::PoseSearch::FInteractionIsland::LogTickDependencies'::`7'::<lambda_1>,1,1>
                     ::_vftable_;
        local_40[1] = (longlong)local_88.Data;
        local_88.Data = (FScriptContainerElement *)0x0;
        *(undefined4 *)(local_40 + 2) = (undefined4)local_80;
        *(undefined4 *)((longlong)local_40 + 0x14) = local_80._4_4_;
        local_80 = 0;
        *(int *)(local_40 + 3) = local_78;
        if (local_40 + 1 != (longlong *)0x0) {
          local_68[0].StatIdPtr =
               (TStatIdData *)
               Core::Private::Function::
               TFunctionRefCaller<`UE::PoseSearch::FInteractionIsland::LogTickDependencies'::__l7::<lambda_1>,void>
               ::Call;
        }
        local_res10 = &TStatId::TStatId_NAME_None;
        local_res18.Prerequisites =
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)0x0;
        TGraphTask<TFunctionGraphTaskImpl<void___cdecl(void),0>_>::FConstructor::
        ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TStatId_&,enum_ENamedThreads::Type_&>
                  (&local_res18,(TUniqueFunction<void___cdecl(void)> *)&local_res20,local_68,
                   (Type *)&local_res10);
        if (local_68[0].StatIdPtr != (TStatIdData *)0x0) {
          plVar7 = local_58;
          if (local_40 != (longlong *)0x0) {
            plVar7 = local_40;
          }
          (**(code **)(*plVar7 + 0x10))();
        }
        if (local_res20 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_res20 + 6);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)*local_res20)(local_res20,1);
          }
        }
        if (local_88.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data);
        }
        if (local_b8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data);
        }
        return;
      }
      pTVar6 = TArrayView<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_const_,int>::
               TArrayView<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>_const_,int><TArray<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_&,TArray<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>
                         (&local_98,&this->TickActorComponents);
      local_a8.DataPtr = pTVar6->DataPtr;
      local_a8.ArrayNum = pTVar6->ArrayNum;
      local_a8._12_4_ = *(undefined4 *)&pTVar6->field_0xc;
      LogTickDependencies(&local_a8,iVar8);
      return;
    }
    if (*(FInteractionIsland **)pFVar9 == this) {
      iVar8 = (int)((longlong)pFVar9 - (longlong)pFVar2 >> 3);
      goto LAB_14a903280;
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// RemoveTickDependencies @ 14a906d10

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
UE::PoseSearch::FInteractionIsland::RemoveTickDependencies(FInteractionIsland *this,bool param_1)

{
  int iVar1;
  FWeakObjectPtr FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  UActorComponent *pUVar7;
  IInteractionIslandDependency *pIVar8;
  FStaticBasicLogRecord *pFVar9;
  FWeakObjectPtr *pFVar10;
  FTickFunction *this_00;
  uint uVar11;
  UActorComponent *pUVar12;
  FWeakObjectPtr *this_01;
  FTickFunction *pFVar13;
  undefined1 local_res8 [8];
  
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                         ,699,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((this->TickActorComponents).ArrayNum != (this->IslandAnimContexts).ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TickActorComponents.Num() == IslandAnimContexts.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                         ,0x2bd,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (this->bHasTickDependencies == false) {
    if (param_1) {
      if (this->bPreTickFunctionExecuted == false) {
        if (this->bPostTickFunctionExecuted == false) goto LAB_14a90704e;
        if ((byte)LogPoseSearch._0_1_ < 2) goto LAB_14a906dd0;
        pFVar9 = &::LOG_Static;
      }
      else {
        if ((byte)LogPoseSearch._0_1_ < 2) goto LAB_14a906dd0;
        pFVar9 = &::LOG_Static;
      }
      Logging::Private::BasicLog<2>(pFVar9,(FLogCategoryBase *)&LogPoseSearch);
LAB_14a906dd0:
      LogTickDependencies(this);
      this->bPreTickFunctionExecuted = false;
      this->bPostTickFunctionExecuted = false;
      return;
    }
    goto LAB_14a90704e;
  }
  if (param_1) {
    if (this->bPreTickFunctionExecuted == false) {
      if (1 < (byte)LogPoseSearch._0_1_) {
        pFVar9 = &::LOG_Static;
LAB_14a906e30:
        Logging::Private::BasicLog<2>(pFVar9,(FLogCategoryBase *)&LogPoseSearch);
      }
    }
    else {
      if (this->bPostTickFunctionExecuted != false) goto LAB_14a906e44;
      if (1 < (byte)LogPoseSearch._0_1_) {
        pFVar9 = &::LOG_Static;
        goto LAB_14a906e30;
      }
    }
    LogTickDependencies(this);
  }
LAB_14a906e44:
  iVar1 = (int)(this->PreTickFunction)._padding_;
  while (iVar1 != 0) {
    iVar1 = (int)(this->PreTickFunction)._padding_;
    uVar11 = iVar1 - 1;
    uVar5 = 0;
    if ((int)uVar11 < iVar1) {
      uVar5 = ~uVar11 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar10 = (FWeakObjectPtr *)
              ((longlong)(int)(this->PreTickFunction)._padding_ * 0x10 +
              (this->PreTickFunction)._padding_ + -0x10);
    FVar2 = pFVar10[1];
    pUVar6 = FWeakObjectPtr::Get(pFVar10);
    FTickFunction::RemovePrerequisite((FTickFunction *)this,pUVar6,(FTickFunction *)FVar2);
    iVar1 = (int)(this->PreTickFunction)._padding_;
  }
  this_01 = (FWeakObjectPtr *)(this->TickActorComponents).AllocatorInstance.Data;
  bVar4 = true;
  iVar1 = (this->TickActorComponents).ArrayNum;
  pFVar10 = this_01 + iVar1;
  while( true ) {
    if ((this->TickActorComponents).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UActorComponent,FWeakObjectPtr>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (this_01 == pFVar10) break;
    pUVar7 = (UActorComponent *)FWeakObjectPtr::Get(this_01);
    if (pUVar7 == (UActorComponent *)0x0) {
LAB_14a906fc0:
      bVar4 = false;
      this_01 = this_01 + 1;
    }
    else {
      pIVar8 = FindCustomDependency(pUVar7);
      pUVar12 = (UActorComponent *)this->InteractionSubsystem;
      if (pIVar8 == (IInteractionIslandDependency *)0x0) {
        this_00 = (FTickFunction *)&pUVar7->PrimaryComponentTick;
        if (bVar4) {
          FTickFunction::RemovePrerequisite(this_00,(UObject *)pUVar12,(FTickFunction *)this);
          pFVar13 = (FTickFunction *)&pUVar7->PrimaryComponentTick;
          this_00 = (FTickFunction *)&this->PostTickFunction;
          pUVar12 = pUVar7;
        }
        else {
          pFVar13 = (FTickFunction *)&this->PostTickFunction;
        }
        FTickFunction::RemovePrerequisite(this_00,(UObject *)pUVar12,pFVar13);
        goto LAB_14a906fc0;
      }
      if (bVar4) {
        (**(code **)((longlong)*pIVar8 + 0x30))(pIVar8,pUVar12,this);
        (**(code **)((longlong)*pIVar8 + 0x28))
                  (pIVar8,this->InteractionSubsystem,&this->PostTickFunction,pUVar7);
        bVar4 = false;
        this_01 = this_01 + 1;
      }
      else {
        (**(code **)((longlong)*pIVar8 + 0x30))(pIVar8,pUVar12,&this->PostTickFunction,pUVar7);
        bVar4 = false;
        this_01 = this_01 + 1;
      }
    }
  }
  if (((int)(this->PreTickFunction)._padding_ != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreTickFunction.GetPrerequisites().IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                         ,0x30b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((int)(this->PostTickFunction)._padding_ != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PostTickFunction.GetPrerequisites().IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                         ,0x30c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->bHasTickDependencies = false;
LAB_14a90704e:
  this->bPreTickFunctionExecuted = false;
  this->bPostTickFunctionExecuted = false;
  return;
}

// Uninitialize @ 14a909590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::PoseSearch::FInteractionIsland::Uninitialize(FInteractionIsland *this,bool param_1)

{
  int *piVar1;
  int iVar2;
  FInteractionSearchContext *pFVar3;
  FInteractionSearchResult *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  int local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (GVarPoseSearchInteractionDiagnoseTickDependencies) {
    local_78._0_8_ = (FScriptContainerElement *)0x0;
    local_78._8_8_ = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_4c = 0x80;
    local_48 = 0xffffffff;
    local_44 = 0;
    local_38 = (ForElementType<FSetElementId>)0x0;
    local_30 = 0;
    bVar6 = ValidateTickDependenciesCycles
                      ((FTickFunction *)this,
                       (TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>
                        *)local_78);
    if (local_78._8_4_ != local_44) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("VisitedTickFunctions.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                         ,0x35b,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    bVar7 = ValidateTickDependenciesCycles
                      ((FTickFunction *)&this->PostTickFunction,
                       (TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>
                        *)local_78);
    if (local_78._8_4_ != local_44) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("VisitedTickFunctions.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                         ,0x35d,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if ((!bVar6) || (!bVar7)) {
      if (1 < (byte)LogPoseSearch._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
      }
      LogTickDependencies(this);
    }
    local_30 = 0;
    if (local_38 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_38);
    }
    iVar2 = SUB84(local_78._8_8_,4);
    local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
    }
    local_48 = 0xffffffff;
    local_44 = 0;
    local_50 = 0;
    if (0x80 < local_4c) {
      local_4c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
  }
  RemoveTickDependencies(this,param_1);
  if ((this->SearchContexts).ArrayNum == 0) {
    if (((((this->TickActorComponents).ArrayNum != 0) || ((this->IslandAnimContexts).ArrayNum != 0))
        || ((this->SearchResults).ArrayNum != 0)) || (this->bSearchPerfomed != false)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TickActorComponents.IsEmpty() && IslandAnimContexts.IsEmpty() && SearchContexts.IsEmpty() && SearchResults.IsEmpty() && !bSearchPerfomed"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                         ,0x374,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  else {
    (this->TickActorComponents).ArrayNum = 0;
    if ((this->TickActorComponents).ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this->TickActorComponents).AllocatorInstance,0,
                 &(this->TickActorComponents).ArrayMax);
    }
    (this->IslandAnimContexts).ArrayNum = 0;
    if ((this->IslandAnimContexts).ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this->IslandAnimContexts).AllocatorInstance,0,
                 &(this->IslandAnimContexts).ArrayMax);
    }
    piVar1 = &(this->SearchContexts).ArrayMax;
    pFVar3 = (FInteractionSearchContext *)(this->SearchContexts).AllocatorInstance.Data;
    iVar2 = (this->SearchContexts).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<UE::PoseSearch::FInteractionSearchContext,int>(pFVar3,iVar2);
      (this->SearchContexts).ArrayNum = 0;
      if (*piVar1 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1e0,8,0,&(this->SearchContexts).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<UE::PoseSearch::FInteractionSearchContext,int>(pFVar3,iVar2);
      (this->SearchContexts).ArrayNum = 0;
    }
    piVar1 = &(this->SearchResults).ArrayMax;
    pFVar4 = (FInteractionSearchResult *)(this->SearchResults).AllocatorInstance.Data;
    iVar2 = (this->SearchResults).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<UE::PoseSearch::FInteractionSearchResult,int>(pFVar4,iVar2);
      (this->SearchResults).ArrayNum = 0;
      if (*piVar1 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x360,0x10,0,&(this->SearchResults).AllocatorInstance,0,piVar1);
      }
      this->bSearchPerfomed = false;
    }
    else {
      DestructItems<UE::PoseSearch::FInteractionSearchResult,int>(pFVar4,iVar2);
      (this->SearchResults).ArrayNum = 0;
      this->bSearchPerfomed = false;
    }
  }
  return;
}

