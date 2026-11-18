// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// AddChildEvaluationContext @ 14d597c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPriorityQueueCameraDirectorEvaluator::AddChildEvaluationContext
          (FPriorityQueueCameraDirectorEvaluator *this,
          TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_38;
  TVariant<int,UE::Cameras::IPriorityQueueEntry_*> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38.Object = param_1->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FCameraDirectorEvaluator::AddChildEvaluationContext((FCameraDirectorEvaluator *)this,&local_38);
  iVar1 = (this->Entries).ArrayNum;
  local_28.TypeIndex = '\0';
  uVar5 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar5 < iVar1) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  local_28._padding_._0_4_ = param_2;
  if (uVar4 == 0) {
    local_48 = (longlong)(int)uVar5;
    local_40 = (longlong)iVar1;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TVariant<int,UE::Cameras::IPriorityQueueEntry_*>::operator=
            ((TVariant<int,UE::Cameras::IPriorityQueueEntry_*> *)
             ((this->Entries).AllocatorInstance.Data +
             (longlong)((this->Entries).ArrayNum + -1) * 0x20 + 0x10),&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// AddChildEvaluationContext @ 14d597d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPriorityQueueCameraDirectorEvaluator::AddChildEvaluationContext
          (FPriorityQueueCameraDirectorEvaluator *this,
          TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *param_1,IPriorityQueueEntry *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_38;
  TVariant<int,UE::Cameras::IPriorityQueueEntry_*> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38.Object = param_1->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FCameraDirectorEvaluator::AddChildEvaluationContext((FCameraDirectorEvaluator *)this,&local_38);
  iVar1 = (this->Entries).ArrayNum;
  local_28.TypeIndex = '\x01';
  uVar5 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar5 < iVar1) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  local_28._padding_ = (longlong)param_2;
  if (uVar4 == 0) {
    local_48 = (longlong)(int)uVar5;
    local_40 = (longlong)iVar1;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TVariant<int,UE::Cameras::IPriorityQueueEntry_*>::operator=
            ((TVariant<int,UE::Cameras::IPriorityQueueEntry_*> *)
             ((this->Entries).AllocatorInstance.Data +
             (longlong)((this->Entries).ArrayNum + -1) * 0x20 + 0x10),&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetTypeID @ 14d5abc50

FCameraObjectTypeID * __thiscall
UE::Cameras::FPriorityQueueCameraDirectorEvaluator::GetTypeID
          (FPriorityQueueCameraDirectorEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d5b48c0

bool __thiscall
UE::Cameras::FPriorityQueueCameraDirectorEvaluator::IsKindOf
          (FPriorityQueueCameraDirectorEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FPriorityQueueCameraDirectorEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraDirectorEvaluator>)param_1->ID !=
      FCameraDirectorEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnAddChildEvaluationContext @ 14d5b79f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPriorityQueueCameraDirectorEvaluator::OnAddChildEvaluationContext
          (FPriorityQueueCameraDirectorEvaluator *this,FChildContextManulationParams *param_1,
          FChildContextManulationResult *param_2)

{
  TArray<UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [32];
  FCameraEvaluationContext **local_68;
  FScriptContainerElement *local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  FCameraEvaluationContext *local_38;
  TReferenceControllerBase<1> *local_30;
  undefined4 local_28 [2];
  FScriptContainerElement local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_38 = (param_1->ChildContext).Object;
  pTVar1 = &this->Entries;
  local_30 = (param_1->ChildContext).SharedReferenceCount.ReferenceController;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar7 = (pTVar1->AllocatorInstance).Data;
  local_28[0] = 0;
  local_20 = (FScriptContainerElement)0x0;
  if ((pFVar7 <= (FScriptContainerElement *)&local_38) &&
     (lVar6 = (longlong)(this->Entries).ArrayMax,
     (FScriptContainerElement *)&local_38 < pFVar7 + lVar6 * 0x20)) {
    local_50 = (longlong)(this->Entries).ArrayNum;
    local_48 = 0x20;
    local_68 = &local_38;
    local_60 = pFVar7;
    local_58 = lVar6;
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
  iVar5 = (this->Entries).ArrayNum;
  piVar2 = &(this->Entries).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Entries).ArrayNum = iVar5 + 1;
  pFVar7 = (pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x20;
  *(FCameraEvaluationContext **)pFVar7 = local_38;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = local_30;
  local_30 = (TReferenceControllerBase<1> *)0x0;
  local_38 = (FCameraEvaluationContext *)0x0;
  uVar8 = (ulonglong)(byte)local_20;
  pFVar7[0x18] = local_20;
  if (1 < (byte)local_20) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<int,UE::Cameras::IPriorityQueueEntry*___ptr64>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[uVar8] ==
      Core::Private::TMoveConstructorCaller<int>::Construct) {
    *(undefined4 *)(pFVar7 + 0x10) = local_28[0];
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<int,UE::Cameras::IPriorityQueueEntry*___ptr64>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[uVar8])(pFVar7 + 0x10,local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  param_2->Result = Success;
  return;
}

// OnRemoveChildEvaluationContext @ 14d5c2490

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPriorityQueueCameraDirectorEvaluator::OnRemoveChildEvaluationContext
          (FPriorityQueueCameraDirectorEvaluator *this,FChildContextManulationParams *param_1,
          FChildContextManulationResult *param_2)

{
  TArray<UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *_Dst;
  uint uVar7;
  
  pTVar1 = &this->Entries;
  param_2->Result = Failure;
  uVar6 = 0;
  while( true ) {
    if ((int)uVar6 < 0) {
      return;
    }
    if ((this->Entries).ArrayNum <= (int)uVar6) {
      return;
    }
    if (((int)uVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(FCameraEvaluationContext **)
         ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x20) ==
        (param_1->ChildContext).Object) break;
    uVar6 = uVar6 + 1;
  }
  uVar7 = 0;
  if ((int)uVar6 < (this->Entries).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  _Dst = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x20;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar5 = (this->Entries).ArrayNum + ~uVar6;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 0x20,(longlong)iVar5 << 5);
  }
  piVar2 = &(this->Entries).ArrayNum;
  *piVar2 = *piVar2 + -1;
  Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,&pTVar1->AllocatorInstance,(this->Entries).ArrayNum,&(this->Entries).ArrayMax);
  param_2->Result = Success;
  return;
}

// OnRun @ 14d5c2ae0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPriorityQueueCameraDirectorEvaluator::OnRun
          (FPriorityQueueCameraDirectorEvaluator *this,FCameraDirectorEvaluationParams *param_1,
          FCameraDirectorEvaluationResult *param_2)

{
  int iVar1;
  FEntry *pFVar2;
  FCameraDirectorEvaluator *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FCameraDirectorEvaluationParams local_res8 [2];
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  iVar1 = (this->Entries).ArrayNum;
  if (0 < iVar1) {
    pFVar2 = (FEntry *)(this->Entries).AllocatorInstance.Data;
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20 = iVar1;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar1,0,&local_28,iVar1,&local_1c);
    ConstructItems<UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry,UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry,int>
              (local_28.Data,pFVar2,iVar1);
    AlgoImpl::
    StableSortInternal<UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry,int_(__cdecl_UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry::*)(void)const_,TLess<void>_>
              ((FEntry *)local_28.Data,local_20,(pmf_93107371)0x14d5a8b00,
               local_res8[0].DeltaTime._0_1_);
    uVar5 = 0;
    if ((int)(local_20 - 1U) < local_20) {
      uVar5 = ~(local_20 - 1U) >> 0x1f;
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
    if (*(longlong *)(local_28.Data + (longlong)local_20 * 0x20 + -0x20) == 0) {
      bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7827837355934351291>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Directors\\PriorityQueueCameraDirector.cpp"
                         ,0x45,"HighestPriorityEntry.ChildContext");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      this_00 = *(FCameraDirectorEvaluator **)
                 (*(longlong *)(local_28.Data + (longlong)local_20 * 0x20 + -0x20) + 0xa60);
      if (this_00 != (FCameraDirectorEvaluator *)0x0) {
        local_res8[0] = (FCameraDirectorEvaluationParams)param_1->DeltaTime;
        FCameraDirectorEvaluator::Run(this_00,local_res8,param_2);
      }
    }
    DestructItems<UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry,int>
              ((FEntry *)local_28.Data,local_20);
    if ((FEntry *)local_28.Data != (FEntry *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  return;
}

