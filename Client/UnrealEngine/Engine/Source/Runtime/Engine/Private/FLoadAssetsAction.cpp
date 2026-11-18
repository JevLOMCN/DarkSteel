// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FLoadAssetsAction @ 147d78ad0

FLoadAssetsAction * __thiscall
`UKismetSystemLibrary::LoadAssets'::__l2::FLoadAssetsAction::FLoadAssetsAction
          (void *this,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1,
          FOnAssetsLoaded *param_2,FLatentActionInfo *param_3)

{
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTVar1;
  TSharedPtr<FStreamableHandle,1> *pTVar2;
  int iVar3;
  FSoftObjectPath *pFVar4;
  UObject *pUVar5;
  TSharedPtr<FStreamableHandle,1> *pTVar6;
  UObject *local_res8;
  FString local_98;
  TSharedPtr<FStreamableHandle,1> local_88;
  undefined1 local_78 [8];
  ForAnyElementType local_70;
  ulonglong local_68;
  undefined1 local_58 [32];
  
  pTVar1 = (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)((longlong)this + 8);
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *(undefined ***)this = &LoadAssets'::`2'::FLoadAssetsAction::_vftable_;
  iVar3 = param_1->ArrayNum;
  pFVar4 = (FSoftObjectPath *)(param_1->AllocatorInstance).Data;
  *(int *)((longlong)this + 0x10) = iVar3;
  if (iVar3 == 0) {
    *(int *)((longlong)this + 0x14) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,(ForAnyElementType *)pTVar1,iVar3,(int *)((longlong)this + 0x14));
    ConstructItems<FSoftObjectPath,FSoftObjectPath,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  FStreamableManager::FStreamableManager((FStreamableManager *)((longlong)this + 0x18));
  pTVar2 = (TSharedPtr<FStreamableHandle,1> *)((longlong)this + 0x100);
  pTVar2->Object = (FStreamableHandle *)0x0;
  *(undefined8 *)((longlong)this + 0x108) = 0;
  *(FName *)((longlong)this + 0x110) = param_3->ExecutionFunction;
  *(int *)((longlong)this + 0x118) = param_3->Linkage;
  pUVar5 = (param_3->CallbackTarget).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar5 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
  }
  *(undefined8 *)((longlong)this + 0x11c) = 0;
  local_res8 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)((longlong)this + 0x11c),(FObjectPtr)&local_res8);
  *(undefined8 *)((longlong)this + 0x128) = 0;
  *(undefined8 *)((longlong)this + 0x130) = 0;
  *(undefined8 *)((longlong)this + 0x138) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
             (FReadAccessScope *)local_58);
  *(undefined8 *)((longlong)this + 0x130) = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)((longlong)this + 0x138) = *(undefined8 *)&param_2->field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_58);
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58._8_8_ =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetSystemLibrary.cpp"
  ;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_58._16_8_ =
       "__cdecl UKismetSystemLibrary::LoadAssets::FLoadAssetsAction::FLoadAssetsAction(const class TArray<struct FSoftObjectPath,class TSizedDefaultAllocator<32> > &,class UKismetSystemLibrary::FOnAssetsLoaded,const struct FLatentActionInfo &)"
  ;
  local_68 = 0;
  local_78 = (undefined1  [8])0x0;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_58._0_4_ = 0xc7c;
  local_58._4_4_ = 0x1f;
  pTVar6 = FStreamableManager::
           RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>,void>
                     ((FStreamableManager *)((longlong)this + 0x18),&local_88,pTVar1,
                      (TDelegate<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy>
                       *)local_78,0,false,false,&local_98,(FSourceLocation *)local_58);
  if (pTVar2 != pTVar6) {
    pTVar2->Object = pTVar6->Object;
    pTVar6->Object = (FStreamableHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)this + 0x108),&pTVar6->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)local_58);
  if (((int)local_68 != 0) && (local_70.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_70.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_70,0,0,0x10);
    local_68 = local_68 & 0xffffffff00000000;
  }
  if (local_58[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_58._8_8_,(FDestructionSentinel *)local_58);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return this;
}

// ~FLoadAssetsAction @ 147d7b5a0

void __thiscall
`UKismetSystemLibrary::LoadAssets'::__l2::FLoadAssetsAction::~FLoadAssetsAction(void *this)

{
  *(undefined ***)this = &LoadAssets'::`2'::FLoadAssetsAction::_vftable_;
  if (*(FStreamableHandle **)((longlong)this + 0x100) != (FStreamableHandle *)0x0) {
    FStreamableHandle::ReleaseHandle(*(FStreamableHandle **)((longlong)this + 0x100));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x128));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x108));
  FStreamableManager::~FStreamableManager((FStreamableManager *)((longlong)this + 0x18));
  DestructItems<FSoftObjectPath,int>
            (*(FSoftObjectPath **)((longlong)this + 8),*(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  *(undefined ***)this = &___7FPendingLatentAction__6B_;
  return;
}

// OnLoaded @ 147db86f0

void __thiscall `UKismetSystemLibrary::LoadAssets'::__l2::FLoadAssetsAction::OnLoaded(void *this)

{
  int iVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  FSoftObjectPath *this_00;
  longlong lVar5;
  FSoftObjectPath *pFVar6;
  undefined1 local_res8 [8];
  UObject *local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  ForAnyElementType local_30;
  int local_28;
  int local_24 [3];
  
  iVar1 = *(int *)((longlong)this + 0x10);
  this_00 = *(FSoftObjectPath **)((longlong)this + 8);
  pFVar6 = this_00 + iVar1;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  while( true ) {
    if (*(int *)((longlong)this + 0x10) != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSoftObjectPath,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar6) break;
    local_48 = FSoftObjectPath::ResolveObject(this_00);
    if (((local_40.Data <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 < local_40.Data + (longlong)local_38._4_4_ * 8)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = (int)local_38;
    if ((int)local_38 == local_38._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_40,(int *)((longlong)&local_38 + 4));
    }
    this_00 = this_00 + 1;
    local_38 = CONCAT44(local_38._4_4_,iVar4 + 1);
    *(UObject **)(local_40.Data + (longlong)iVar4 * 8) = local_48;
  }
  bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)((longlong)this + 0x128));
  _Src.Data = local_40.Data;
  if (bVar3) {
    lVar5 = (longlong)(int)local_38;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_24[0] = 0;
    local_28 = (int)local_38;
    if ((int)local_38 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(int)local_38,0,&local_30,(int)local_38,local_24);
      memcpy(local_30.Data,_Src.Data,lVar5 << 3);
    }
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)((longlong)this + 0x128),&local_30);
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  return;
}

// UpdateOperation @ 147dc79a0

void __thiscall
`UKismetSystemLibrary::LoadAssets'::__l2::FLoadAssetsAction::UpdateOperation
          (void *this,FLatentResponse *param_1)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = *(longlong *)((longlong)this + 0x100);
  if (((lVar1 == 0) || (*(char *)(lVar1 + 0x109) != '\0')) || (*(char *)(lVar1 + 0x10b) != '\0')) {
    bVar2 = true;
    OnLoaded(this);
  }
  else {
    bVar2 = false;
  }
  FLatentResponse::FinishAndTriggerIf
            (param_1,bVar2,*(FName *)((longlong)this + 0x110),*(int *)((longlong)this + 0x118),
             *(FWeakObjectPtr *)((longlong)this + 0x11c));
  return;
}

