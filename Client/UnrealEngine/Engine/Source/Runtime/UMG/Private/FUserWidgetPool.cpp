// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 15

// StaticStruct @ 1468db6d0

UScriptStruct * __cdecl FUserWidgetPool::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUserWidgetPool.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UScriptStruct_FUserWidgetPool.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUserWidgetPool,(UObject *)pUVar1,
                         L"UserWidgetPool");
  }
  return Z_Registration_Info_UScriptStruct_FUserWidgetPool.OuterSingleton;
}

// FUserWidgetPool @ 1468ffa90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FUserWidgetPool * __thiscall
FUserWidgetPool::FUserWidgetPool(FUserWidgetPool *this,UWidget *param_1)

{
  UWidget *local_res8;
  
  (this->ActiveWidgets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveWidgets).ArrayNum = 0;
  (this->ActiveWidgets).ArrayMax = 0;
  (this->InactiveWidgets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InactiveWidgets).ArrayNum = 0;
  (this->InactiveWidgets).ArrayMax = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->OwningWidget).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->OwningWidget).WeakPtr,(FObjectPtr)&local_res8);
  (this->OwningWorld).WeakPtr = (FWeakObjectPtr)0x0;
  (this->DefaultPlayerController).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->CachedSlateByWidgetObject = 0;
  *(undefined8 *)&(this->CachedSlateByWidgetObject).field_0x8 = 0;
  *(undefined8 *)&(this->CachedSlateByWidgetObject).field_0x20 = 0;
  *(undefined4 *)&(this->CachedSlateByWidgetObject).field_0x28 = 0;
  *(undefined4 *)&(this->CachedSlateByWidgetObject).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedSlateByWidgetObject).field_0x34 = 0;
  *(undefined4 *)&(this->CachedSlateByWidgetObject).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedSlateByWidgetObject).field_0x40 = 0;
  *(undefined4 *)&(this->CachedSlateByWidgetObject).field_0x48 = 0;
  return this;
}

// ~FUserWidgetPool @ 146904330

void __thiscall FUserWidgetPool::~FUserWidgetPool(FUserWidgetPool *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  (this->InactiveWidgets).ArrayNum = 0;
  if ((this->InactiveWidgets).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->InactiveWidgets).AllocatorInstance,0,&(this->InactiveWidgets).ArrayMax)
    ;
  }
  (this->ActiveWidgets).ArrayNum = 0;
  if ((this->ActiveWidgets).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,&(this->ActiveWidgets).ArrayMax);
  }
  TSet<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<UUserWidget_*,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<UUserWidget_*,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
           *)&this->CachedSlateByWidgetObject);
  *(undefined4 *)&(this->CachedSlateByWidgetObject).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedSlateByWidgetObject).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedSlateByWidgetObject);
  pFVar2 = (this->InactiveWidgets).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ActiveWidgets).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// AddReferencedObjects @ 14690ad00

void __thiscall
FUserWidgetPool::AddReferencedObjects(FUserWidgetPool *this,FReferenceCollector *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->OwningWidget).WeakPtr);
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->ActiveWidgets).AllocatorInstance.Data,(this->ActiveWidgets).ArrayNum,
             pUVar1,0);
  pUVar1 = FWeakObjectPtr::Get(&(this->OwningWidget).WeakPtr);
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->InactiveWidgets).AllocatorInstance.Data,(this->InactiveWidgets).ArrayNum
             ,pUVar1,0);
  return;
}

// RebuildWidgets @ 146937150

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FUserWidgetPool::RebuildWidgets(FUserWidgetPool *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TSharedRef<SWidget,1> *pTVar3;
  FScriptContainerElement *pFVar4;
  UWidget *local_res8 [2];
  SWidget *local_48;
  TReferenceControllerBase<1> *local_40;
  UWidget **local_38;
  SWidget **local_30;
  TSharedRef<SWidget,1> local_28;
  
  pFVar4 = (this->ActiveWidgets).AllocatorInstance.Data;
  iVar2 = (this->ActiveWidgets).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ActiveWidgets).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UUserWidget>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    local_res8[0] = *(UWidget **)pFVar4;
    pTVar3 = UWidget::TakeWidget(local_res8[0],&local_28);
    local_48 = pTVar3->Object;
    local_40 = (pTVar3->SharedReferenceCount).ReferenceController;
    if (local_40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38 = local_res8;
    local_30 = &local_48;
    TSet<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<UUserWidget_*,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UUserWidget_*_const_&,TSharedPtr<SWidget,1>_&&>_>
              ((TSet<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<UUserWidget_*,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                *)&this->CachedSlateByWidgetObject,
               (TPairInitializer<UUserWidget_*_const_&,TSharedPtr<SWidget,1>_&&> *)(local_res8 + 1),
               (bool *)&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// Release @ 14693a550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FUserWidgetPool::Release(FUserWidgetPool *this,UUserWidget *param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  UUserWidget *local_28 [2];
  
  if (param_1 != (UUserWidget *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar2 = (this->ActiveWidgets).AllocatorInstance.Data;
    pFVar8 = pFVar2;
    if (pFVar2 != pFVar2 + (longlong)(this->ActiveWidgets).ArrayNum * 8) {
      while (*(UUserWidget **)pFVar8 != param_1) {
        pFVar8 = pFVar8 + 8;
        if (pFVar8 == pFVar2 + (longlong)(this->ActiveWidgets).ArrayNum * 8) {
          return;
        }
      }
      uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar2 >> 3);
      if (uVar7 != 0xffffffff) {
        local_28[0] = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        pFVar2 = (this->InactiveWidgets).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 <
             pFVar2 + (longlong)(this->InactiveWidgets).ArrayMax * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = (this->InactiveWidgets).ArrayNum;
        piVar1 = &(this->InactiveWidgets).ArrayMax;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->InactiveWidgets).AllocatorInstance,piVar1);
        }
        (this->InactiveWidgets).ArrayNum = iVar5 + 1;
        *(UUserWidget **)((this->InactiveWidgets).AllocatorInstance.Data + (longlong)iVar5 * 8) =
             local_28[0];
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_28[0] != (UUserWidget *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_28[0]);
        }
        uVar6 = 0;
        if ((int)uVar7 < (this->ActiveWidgets).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = (this->ActiveWidgets).ArrayNum + ~uVar7;
        pFVar2 = (this->ActiveWidgets).AllocatorInstance.Data + (longlong)(int)uVar7 * 8;
        if (iVar5 != 0) {
          memmove(pFVar2,pFVar2 + 8,(longlong)iVar5 << 3);
        }
        piVar1 = &(this->ActiveWidgets).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(ForAnyElementType *)this,(this->ActiveWidgets).ArrayNum,
                   &(this->ActiveWidgets).ArrayMax);
        if (param_2) {
          TMapBase<UUserWidget_*,TSharedPtr<SWidget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UUserWidget_*,TSharedPtr<SWidget,1>,0>_>
          ::Remove((TMapBase<UUserWidget_*,TSharedPtr<SWidget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UUserWidget_*,TSharedPtr<SWidget,1>,0>_>
                    *)&this->CachedSlateByWidgetObject,param_1);
        }
      }
    }
  }
  return;
}

// Release @ 14693a770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FUserWidgetPool::Release
          (FUserWidgetPool *this,TArray<UUserWidget_*,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  pFVar2 = pFVar3 + (longlong)iVar1 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UUserWidget_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar3 == pFVar2) break;
    Release(this,*(UUserWidget **)pFVar3,param_2);
    pFVar3 = pFVar3 + 8;
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ReleaseAll @ 14693a800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FUserWidgetPool::ReleaseAll(FUserWidgetPool *this,bool param_1)

{
  TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar1 = &this->InactiveWidgets;
  if ((FUserWidgetPool *)pTVar1 == this) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar3 = (this->ActiveWidgets).ArrayNum;
  if (iVar3 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar3,&pTVar1->AllocatorInstance,&(this->InactiveWidgets).ArrayNum,
                       &(this->InactiveWidgets).ArrayMax);
    ConstructItems<TObjectPtr<UUserWidget>,TObjectPtr<UUserWidget>,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8,
               (TObjectPtr<UUserWidget> *)(this->ActiveWidgets).AllocatorInstance.Data,iVar3);
  }
  piVar2 = &(this->ActiveWidgets).ArrayMax;
  (this->ActiveWidgets).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar2);
  }
  if (param_1) {
    TSet<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<UUserWidget_*,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<UUserWidget_*,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
             *)&this->CachedSlateByWidgetObject);
  }
  return;
}

// ReleaseAllSlateResources @ 14693a8e0

void __thiscall FUserWidgetPool::ReleaseAllSlateResources(FUserWidgetPool *this)

{
  TSet<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<UUserWidget_*,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<UUserWidget_*,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
           *)&this->CachedSlateByWidgetObject);
  return;
}

// ReleaseInactiveSlateResources @ 14693a9c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FUserWidgetPool::ReleaseInactiveSlateResources(FUserWidgetPool *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  UUserWidget *local_res8;
  
  pFVar4 = (this->InactiveWidgets).AllocatorInstance.Data;
  iVar2 = (this->InactiveWidgets).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->InactiveWidgets).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UUserWidget>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar4 == pFVar1) break;
    local_res8 = *(UUserWidget **)pFVar4;
    if (*(int *)&(this->CachedSlateByWidgetObject).field_0x8 !=
        *(int *)&(this->CachedSlateByWidgetObject).field_0x34) {
      uVar3 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4))
              * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      TSet<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<UUserWidget_*,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<UUserWidget_const_*>
                ((TSet<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<UUserWidget_*,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                  *)&this->CachedSlateByWidgetObject,uVar3 >> 0x10 ^ uVar3,&local_res8);
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// ResetPool @ 14693cc60

void __thiscall FUserWidgetPool::ResetPool(FUserWidgetPool *this)

{
  (this->InactiveWidgets).ArrayNum = 0;
  if ((this->InactiveWidgets).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->InactiveWidgets).AllocatorInstance,0,&(this->InactiveWidgets).ArrayMax)
    ;
  }
  (this->ActiveWidgets).ArrayNum = 0;
  if ((this->ActiveWidgets).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,&(this->ActiveWidgets).ArrayMax);
  }
  TSet<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<UUserWidget_*,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<UUserWidget_*,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
           *)&this->CachedSlateByWidgetObject);
  return;
}

// SetDefaultPlayerController @ 146942af0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FUserWidgetPool::SetDefaultPlayerController(FUserWidgetPool *this,APlayerController *param_1)

{
  APlayerController *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (APlayerController *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->DefaultPlayerController).WeakPtr,(FObjectPtr)local_res8);
  return;
}

// SetWorld @ 146944be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FUserWidgetPool::SetWorld(FUserWidgetPool *this,UWorld *param_1)

{
  UWorld *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->OwningWorld).WeakPtr,(FObjectPtr)local_res8);
  return;
}

// AddActiveWidgetInternal<UUserWidget> @ 14696e360

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UUserWidget * __thiscall
FUserWidgetPool::AddActiveWidgetInternal<UUserWidget>
          (FUserWidgetPool *this,TSubclassOf<UUserWidget> param_1,
          TFunctionRef<TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
          *param_2)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  UObject *pUVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UUserWidget *pUVar12;
  UClass *pUVar13;
  longlong lVar14;
  UWidget *this_00;
  APlayerController *pAVar15;
  UWorld *pUVar16;
  TSharedPtr<SWidget,1> *pTVar17;
  TSharedRef<SWidget,1> *pTVar18;
  uint uVar19;
  FName *pFVar20;
  undefined1 *puVar21;
  FName FVar22;
  FName *pFVar23;
  undefined1 local_res8 [8];
  FName local_c8;
  FName local_c0;
  FName local_b8;
  int local_b0 [2];
  FName local_a8;
  FSharedReferencer<1> local_a0;
  FName local_98;
  FName local_90;
  UObject *local_88;
  UObject *local_80;
  UObject *local_78;
  FName *local_70;
  TFunctionRef<TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)> local_68;
  TSharedRef<SWidget,1> local_58;
  TSharedPtr<SWidget,1> local_48;
  
  bVar9 = false;
  bVar8 = FWeakObjectPtr::IsValid(&(this->OwningWidget).WeakPtr);
  if ((bVar8) || (bVar8 = FWeakObjectPtr::IsValid(&(this->OwningWorld).WeakPtr), bVar8)) {
    lVar14 = *(longlong *)param_1.Class.field0_0x0;
    if ((lVar14 != 0) &&
       (pUVar13 = Z_Construct_UClass_UUserWidget_NoRegister(), pUVar13 != (UClass *)0x0)) {
      iVar11 = (int)pUVar13->_padding_;
      if ((*(int *)(lVar14 + 0x38) < iVar11) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar11 * 8) !=
          &pUVar13->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if ((bVar8) && (*(longlong *)param_1.Class.field0_0x0 != 0)) {
        FVar22 = (FName)(this->InactiveWidgets).AllocatorInstance.Data;
        iVar11 = (this->InactiveWidgets).ArrayNum;
        local_c8.ComparisonIndex.Value = 0;
        local_c8.Number = 0;
        local_b8 = (FName)((longlong)FVar22 + (longlong)iVar11 * 8);
        do {
          FVar3 = local_b8;
          if ((this->InactiveWidgets).ArrayNum != iVar11) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<TObjectPtr<UUserWidget>,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (FVar22 == FVar3) goto LAB_14696e4f5;
          lVar14 = *(longlong *)param_1.Class.field0_0x0;
          FVar3 = *(FName *)FVar22;
          if ((lVar14 == 0) ||
             (pUVar13 = Z_Construct_UClass_UUserWidget_NoRegister(), pUVar13 == (UClass *)0x0)) {
LAB_14696e4a5:
            lVar14 = 0;
          }
          else {
            iVar2 = (int)pUVar13->_padding_;
            if ((*(int *)(lVar14 + 0x38) < iVar2) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar2 * 8) !=
                &pUVar13->_padding_)) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            if (!bVar8) goto LAB_14696e4a5;
            lVar14 = *(longlong *)param_1.Class.field0_0x0;
          }
          if (*(longlong *)((longlong)FVar3 + 0x10) == lVar14) goto LAB_14696e4b7;
          FVar22 = (FName)((longlong)FVar22 + 8);
        } while( true );
      }
    }
  }
  else {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5370306963798228889>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Blueprint\\UserWidgetPool.h"
                       ,0x67,"IsInitialized()");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pUVar12 = (UUserWidget *)(*pcVar7)();
      return pUVar12;
    }
  }
  return (UUserWidget *)0x0;
LAB_14696e4b7:
  local_c8 = FVar3;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)FVar3);
  }
  pFVar20 = (FName *)(this->InactiveWidgets).AllocatorInstance.Data;
  iVar11 = (this->InactiveWidgets).ArrayNum;
  for (pFVar23 = pFVar20; pFVar23 != pFVar20 + iVar11; pFVar23 = pFVar23 + 1) {
    if (*pFVar23 == FVar3) {
      uVar19 = (uint)((longlong)pFVar23 - (longlong)pFVar20 >> 3);
      if (uVar19 != 0xffffffff) {
        uVar10 = 0;
        if ((int)(uVar19 + 1) <= iVar11) {
          uVar10 = ~uVar19 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          pUVar12 = (UUserWidget *)(*pcVar7)();
          return pUVar12;
        }
        iVar2 = (this->InactiveWidgets).ArrayNum;
        pFVar4 = (this->InactiveWidgets).AllocatorInstance.Data;
        iVar11 = ~uVar19 + iVar2;
        if (1 < iVar11) {
          iVar11 = 1;
        }
        if (iVar11 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar19 * 8,pFVar4 + (longlong)(iVar2 - iVar11) * 8,
                  (longlong)iVar11 << 3);
        }
        piVar1 = &(this->InactiveWidgets).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->InactiveWidgets).AllocatorInstance,(this->InactiveWidgets).ArrayNum,
                   &(this->InactiveWidgets).ArrayMax);
      }
      break;
    }
  }
LAB_14696e4f5:
  this_00 = (UWidget *)FWeakObjectPtr::Get(&(this->OwningWidget).WeakPtr);
  if (local_c8 == (FName)0x0) {
    if (this_00 == (UWidget *)0x0) {
      pAVar15 = (APlayerController *)FWeakObjectPtr::Get(&(this->DefaultPlayerController).WeakPtr);
      pUVar5 = *(UObject **)param_1.Class.field0_0x0;
      if (pAVar15 == (APlayerController *)0x0) {
        local_b8.ComparisonIndex.Value = 0;
        local_b8.Number = 0;
        local_78 = pUVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        pUVar16 = (UWorld *)FWeakObjectPtr::Get(&(this->OwningWorld).WeakPtr);
        local_c8 = (FName)CreateWidget<UUserWidget,UWorld_*>
                                    (pUVar16,(TSubclassOf<UUserWidget>)&local_78,local_b8);
      }
      else {
        local_90.ComparisonIndex.Value = 0;
        local_90.Number = 0;
        local_80 = pUVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        local_c8 = (FName)CreateWidget<UUserWidget,APlayerController_*>
                                    (pAVar15,(TSubclassOf<UUserWidget>)&local_80,local_90);
      }
    }
    else {
      local_88 = *(UObject **)param_1.Class.field0_0x0;
      local_98 = local_c8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_88 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_88);
      }
      local_c8 = (FName)CreateWidget<UUserWidget,UWidget_*>
                                  (this_00,(TSubclassOf<UUserWidget>)&local_88,local_98);
    }
    if (local_c8 == (FName)0x0) {
      return (UUserWidget *)0x0;
    }
  }
  local_c0 = local_c8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_c8);
  }
  pFVar20 = (FName *)(this->ActiveWidgets).AllocatorInstance.Data;
  if (((pFVar20 <= &local_c0) && (&local_c0 < pFVar20 + (this->ActiveWidgets).ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    pUVar12 = (UUserWidget *)(*pcVar7)();
    return pUVar12;
  }
  iVar11 = (this->ActiveWidgets).ArrayNum;
  piVar1 = &(this->ActiveWidgets).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->ActiveWidgets).ArrayNum = iVar11 + 1;
  *(FName *)((this->ActiveWidgets).AllocatorInstance.Data + (longlong)iVar11 * 8) = local_c0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c0 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_c0);
  }
  if ((this_00 == (UWidget *)0x0) ||
     (pTVar17 = UWidget::GetCachedWidget(this_00,&local_48), bVar9 = true,
     pTVar17->Object != (SWidget *)0x0)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
    bVar9 = true;
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (bVar8) {
    uVar19 = ((uint)((ulonglong)local_c8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_c8 >> 4)) *
             -0x7a143595;
    uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
    uVar19 = uVar19 >> 0x10 ^ uVar19;
    if (*(int *)&(this->CachedSlateByWidgetObject).field_0x8 !=
        *(int *)&(this->CachedSlateByWidgetObject).field_0x34) {
      puVar21 = *(undefined1 **)&(this->CachedSlateByWidgetObject).field_0x40;
      if (puVar21 == (undefined1 *)0x0) {
        puVar21 = &(this->CachedSlateByWidgetObject).field_0x38;
      }
      uVar10 = *(uint *)(puVar21 +
                        (ulonglong)
                        (*(int *)&(this->CachedSlateByWidgetObject).field_0x48 - 1U & uVar19) * 4);
      if (uVar10 != 0xffffffff) {
        do {
          pFVar20 = (FName *)((longlong)(int)uVar10 * 0x20 +
                             *(longlong *)&this->CachedSlateByWidgetObject);
          if (*pFVar20 == local_c8) {
            if (pFVar20 != (FName *)0x0) goto LAB_14696e872;
            break;
          }
          uVar10 = pFVar20[3].ComparisonIndex.Value;
        } while (uVar10 != 0xffffffff);
      }
    }
    local_70 = &local_c8;
    TSet<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<UUserWidget_*,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<UUserWidget_*_const_&>_>
              ((TSet<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<UUserWidget_*,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                *)&this->CachedSlateByWidgetObject,(uint)local_b0,
               (TKeyInitializer<UUserWidget_*_const_&> *)(ulonglong)uVar19,(bool *)&local_70);
    pFVar20 = (FName *)((longlong)local_b0[0] * 0x20 + *(longlong *)&this->CachedSlateByWidgetObject
                       );
LAB_14696e872:
    if (pFVar20[1] == (FName)0x0) {
      local_68._0_8_ = *(undefined8 *)param_2;
      local_68._8_8_ = *(undefined8 *)&param_2->field_0x8;
      pTVar18 = UWidget::TakeWidget_Private((UWidget *)local_c8,&local_58,&local_68);
      pTVar6 = (pTVar18->SharedReferenceCount).ReferenceController;
      FVar22 = (FName)pTVar18->Object;
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
      }
      else {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_a8 = FVar22;
      local_a0.ReferenceController = pTVar6;
      if (pFVar20 + 1 != &local_a8) {
        pFVar20[1] = FVar22;
        local_a8.ComparisonIndex.Value = 0;
        local_a8.Number = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(pFVar20 + 2),&local_a0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a0.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    }
  }
  if (local_c8 == (FName)0x0) {
    return (UUserWidget *)0x0;
  }
  return (UUserWidget *)local_c8;
}

// operator() @ 146996fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TSharedRef<SObjectWidget,1> * __thiscall
`FUserWidgetPool::GetOrCreateInstance<UUserWidget>'::__l2::<lambda_1>::operator()
          (void *this,TSharedRef<SObjectWidget,1> *__return_storage_ptr__,UUserWidget *param_1,
          TSharedRef<SWidget,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  FArguments *pFVar4;
  FLLMScope local_res10 [2];
  UUserWidget *local_res18;
  FName local_res20;
  T1RequiredArgs<UUserWidget_*_&> local_248;
  FMemScope local_240;
  TSlateDecl<SObjectWidget,RequiredArgs::T1RequiredArgs<UUserWidget_*_&>_> local_238;
  FArguments local_220;
  
  local_res18 = param_1;
  pFVar4 = SObjectWidget::FArguments::FArguments(&local_220);
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pSVar2 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar4->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar4->_Content).Widget.Object = pSVar2;
  (pFVar4->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_248.Arg0 = &local_res18;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_240,&local_res20,true);
  TSlateDecl<SObjectWidget,RequiredArgs::T1RequiredArgs<UUserWidget_*_&>_>::
  TSlateDecl<SObjectWidget,RequiredArgs::T1RequiredArgs<UUserWidget_*_&>_>
            (&local_238,"SObjectWidget",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Blueprint\\UserWidgetPool.h"
             ,0x41,&local_248);
  FMemScope::~FMemScope(&local_240);
  FLLMScope::~FLLMScope(local_res10);
  TSlateDecl<SObjectWidget,RequiredArgs::T1RequiredArgs<UUserWidget_*_&>_>::operator<<=
            (&local_238,__return_storage_ptr__,pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_220._Content.Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_220);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

