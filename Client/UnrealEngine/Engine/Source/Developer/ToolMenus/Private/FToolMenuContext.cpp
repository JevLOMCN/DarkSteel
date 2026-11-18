// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 23

// StaticStruct @ 142c2ded0

UScriptStruct * __cdecl FToolMenuContext::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FToolMenuContext.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ToolMenus();
    Z_Registration_Info_UScriptStruct_FToolMenuContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FToolMenuContext,(UObject *)pUVar1,
                         L"ToolMenuContext");
  }
  return Z_Registration_Info_UScriptStruct_FToolMenuContext.OuterSingleton;
}

// FToolMenuContext @ 142c38480

FToolMenuContext * __thiscall
FToolMenuContext::FToolMenuContext(FToolMenuContext *this,FToolMenuContext *param_1)

{
  this->bIsEditing = param_1->bIsEditing;
  (this->ContextObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextObjects).AllocatorInstance.Data = (param_1->ContextObjects).AllocatorInstance.Data;
  (param_1->ContextObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextObjects).ArrayNum = (param_1->ContextObjects).ArrayNum;
  (this->ContextObjects).ArrayMax = (param_1->ContextObjects).ArrayMax;
  (param_1->ContextObjects).ArrayNum = 0;
  (param_1->ContextObjects).ArrayMax = 0;
  (this->ContextObjectCleanupFuncs).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextObjectCleanupFuncs).Pairs.AllocatorInstance.Data =
       (param_1->ContextObjectCleanupFuncs).Pairs.AllocatorInstance.Data;
  (param_1->ContextObjectCleanupFuncs).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ContextObjectCleanupFuncs).Pairs.ArrayNum =
       (param_1->ContextObjectCleanupFuncs).Pairs.ArrayNum;
  (this->ContextObjectCleanupFuncs).Pairs.ArrayMax =
       (param_1->ContextObjectCleanupFuncs).Pairs.ArrayMax;
  (param_1->ContextObjectCleanupFuncs).Pairs.ArrayNum = 0;
  (param_1->ContextObjectCleanupFuncs).Pairs.ArrayMax = 0;
  (this->ContextCleanupFuncs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextCleanupFuncs).AllocatorInstance.Data =
       (param_1->ContextCleanupFuncs).AllocatorInstance.Data;
  (param_1->ContextCleanupFuncs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextCleanupFuncs).ArrayNum = (param_1->ContextCleanupFuncs).ArrayNum;
  (this->ContextCleanupFuncs).ArrayMax = (param_1->ContextCleanupFuncs).ArrayMax;
  (param_1->ContextCleanupFuncs).ArrayNum = 0;
  (param_1->ContextCleanupFuncs).ArrayMax = 0;
  (this->CommandLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommandLists).AllocatorInstance.Data = (param_1->CommandLists).AllocatorInstance.Data;
  (param_1->CommandLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommandLists).ArrayNum = (param_1->CommandLists).ArrayNum;
  (this->CommandLists).ArrayMax = (param_1->CommandLists).ArrayMax;
  (param_1->CommandLists).ArrayNum = 0;
  (param_1->CommandLists).ArrayMax = 0;
  (this->CommandList).Object = (param_1->CommandList).Object;
  (this->CommandList).SharedReferenceCount.ReferenceController =
       (param_1->CommandList).SharedReferenceCount.ReferenceController;
  (param_1->CommandList).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->CommandList).Object = (FUICommandList *)0x0;
  (this->Extenders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Extenders).AllocatorInstance.Data = (param_1->Extenders).AllocatorInstance.Data;
  (param_1->Extenders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Extenders).ArrayNum = (param_1->Extenders).ArrayNum;
  (this->Extenders).ArrayMax = (param_1->Extenders).ArrayMax;
  (param_1->Extenders).ArrayNum = 0;
  (param_1->Extenders).ArrayMax = 0;
  return this;
}

// FToolMenuContext @ 142c38550

FToolMenuContext * __thiscall
FToolMenuContext::FToolMenuContext(FToolMenuContext *this,FToolMenuContext *param_1)

{
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TSortedMap<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>,TSizedDefaultAllocator<32>,TLess<TObjectPtr<UObject_const_>_const_>_>
  *pTVar3;
  TArray<TFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<TSharedPtr<FUICommandList,1>,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<TSharedPtr<FExtender,1>,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *pTVar9;
  TFunction<void___cdecl(void)> *pTVar10;
  TSharedPtr<FUICommandList,1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TSharedPtr<FExtender,1> *pTVar13;
  
  pTVar1 = &this->ContextObjects;
  this->bIsEditing = param_1->bIsEditing;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ContextObjects).ArrayMax;
  iVar7 = (param_1->ContextObjects).ArrayNum;
  pFVar8 = (param_1->ContextObjects).AllocatorInstance.Data;
  (this->ContextObjects).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar7,0,&pTVar1->AllocatorInstance,iVar7,piVar2);
    ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UObject> *)pFVar8,iVar7);
  }
  pTVar3 = &this->ContextObjectCleanupFuncs;
  (pTVar3->Pairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ContextObjectCleanupFuncs).Pairs.ArrayMax;
  iVar7 = (param_1->ContextObjectCleanupFuncs).Pairs.ArrayNum;
  pTVar9 = (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
           (param_1->ContextObjectCleanupFuncs).Pairs.AllocatorInstance.Data;
  (this->ContextObjectCleanupFuncs).Pairs.ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,iVar7,0,(ForAnyElementType *)pTVar3,iVar7,piVar2);
    ConstructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
              ((pTVar3->Pairs).AllocatorInstance.Data,pTVar9,iVar7);
  }
  pTVar4 = &this->ContextCleanupFuncs;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ContextCleanupFuncs).ArrayMax;
  iVar7 = (param_1->ContextCleanupFuncs).ArrayNum;
  pTVar10 = (TFunction<void___cdecl(void)> *)(param_1->ContextCleanupFuncs).AllocatorInstance.Data;
  (this->ContextCleanupFuncs).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,iVar7,0,&pTVar4->AllocatorInstance,iVar7,piVar2);
    ConstructItems<TFunction<void___cdecl(void)>,TFunction<void___cdecl(void)>,int>
              ((pTVar4->AllocatorInstance).Data,pTVar10,iVar7);
  }
  pTVar5 = &this->CommandLists;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->CommandLists).ArrayMax;
  iVar7 = (param_1->CommandLists).ArrayNum;
  pTVar11 = (TSharedPtr<FUICommandList,1> *)(param_1->CommandLists).AllocatorInstance.Data;
  (this->CommandLists).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar7,0,&pTVar5->AllocatorInstance,iVar7,piVar2);
    ConstructItems<TSharedPtr<FUICommandList,1>,TSharedPtr<FUICommandList,1>,int>
              ((pTVar5->AllocatorInstance).Data,pTVar11,iVar7);
  }
  (this->CommandList).Object = (param_1->CommandList).Object;
  pTVar12 = (param_1->CommandList).SharedReferenceCount.ReferenceController;
  (this->CommandList).SharedReferenceCount.ReferenceController = pTVar12;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = &this->Extenders;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Extenders).ArrayMax;
  iVar7 = (param_1->Extenders).ArrayNum;
  pTVar13 = (TSharedPtr<FExtender,1> *)(param_1->Extenders).AllocatorInstance.Data;
  (this->Extenders).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar7,0,&pTVar6->AllocatorInstance,iVar7,piVar2);
    ConstructItems<TSharedPtr<FExtender,1>,TSharedPtr<FExtender,1>,int>
              ((pTVar6->AllocatorInstance).Data,pTVar13,iVar7);
  }
  return this;
}

// FToolMenuContext @ 142c38740

FToolMenuContext * __thiscall
FToolMenuContext::FToolMenuContext
          (FToolMenuContext *this,UObject *param_1,TFunction<void___cdecl(UObject_*)> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FToolMenuContext *pFVar5;
  TObjectPtr<UObject>_u_0 local_res8;
  UObject *local_28 [2];
  
  this->bIsEditing = false;
  (this->ContextObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextObjects).ArrayNum = 0;
  (this->ContextObjects).ArrayMax = 0;
  (this->ContextObjectCleanupFuncs).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextObjectCleanupFuncs).Pairs.ArrayNum = 0;
  (this->ContextObjectCleanupFuncs).Pairs.ArrayMax = 0;
  (this->ContextCleanupFuncs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextCleanupFuncs).ArrayNum = 0;
  (this->ContextCleanupFuncs).ArrayMax = 0;
  (this->CommandLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommandLists).ArrayNum = 0;
  (this->CommandLists).ArrayMax = 0;
  (this->CommandList).Object = (FUICommandList *)0x0;
  (this->CommandList).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Extenders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Extenders).ArrayNum = 0;
  (this->Extenders).ArrayMax = 0;
  if (param_1 != (UObject *)0x0) {
    local_28[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    pFVar1 = (this->ContextObjects).AllocatorInstance.Data;
    if ((pFVar1 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 < pFVar1 + (longlong)(this->ContextObjects).ArrayMax * 8
       )) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FToolMenuContext *)(*pcVar2)();
        return pFVar5;
      }
    }
    iVar4 = (this->ContextObjects).ArrayNum;
    if (iVar4 == (this->ContextObjects).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ContextObjects).AllocatorInstance,
                         &(this->ContextObjects).ArrayMax);
    }
    (this->ContextObjects).ArrayNum = iVar4 + 1;
    *(UObject **)((this->ContextObjects).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_28[0]
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28[0]);
    }
    if (*(longlong *)param_2 != 0) {
      local_res8.DebugPtr = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      TSortedMap<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>,TSizedDefaultAllocator<32>,TLess<TObjectPtr<UObject_const_>_const_>_>
      ::Emplace<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>
                (&this->ContextObjectCleanupFuncs,(TObjectPtr<UObject> *)&local_res8.ObjectPtr,
                 param_2);
    }
  }
  return this;
}

// FToolMenuContext @ 142c388d0

FToolMenuContext * __thiscall
FToolMenuContext::FToolMenuContext(FToolMenuContext *this,UObject *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FToolMenuContext *pFVar5;
  UObject *local_18 [2];
  
  this->bIsEditing = false;
  (this->ContextObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextObjects).ArrayNum = 0;
  (this->ContextObjects).ArrayMax = 0;
  (this->ContextObjectCleanupFuncs).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextObjectCleanupFuncs).Pairs.ArrayNum = 0;
  (this->ContextObjectCleanupFuncs).Pairs.ArrayMax = 0;
  (this->ContextCleanupFuncs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextCleanupFuncs).ArrayNum = 0;
  (this->ContextCleanupFuncs).ArrayMax = 0;
  (this->CommandLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommandLists).ArrayNum = 0;
  (this->CommandLists).ArrayMax = 0;
  (this->CommandList).Object = (FUICommandList *)0x0;
  (this->CommandList).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Extenders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Extenders).ArrayNum = 0;
  (this->Extenders).ArrayMax = 0;
  if (param_1 != (UObject *)0x0) {
    local_18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    pFVar1 = (this->ContextObjects).AllocatorInstance.Data;
    if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)(this->ContextObjects).ArrayMax * 8
       )) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FToolMenuContext *)(*pcVar2)();
        return pFVar5;
      }
    }
    iVar4 = (this->ContextObjects).ArrayNum;
    if (iVar4 == (this->ContextObjects).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ContextObjects).AllocatorInstance,
                         &(this->ContextObjects).ArrayMax);
    }
    (this->ContextObjects).ArrayNum = iVar4 + 1;
    *(UObject **)((this->ContextObjects).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_18[0]
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_18[0]);
    }
  }
  return this;
}

// FToolMenuContext @ 142c38a10

FToolMenuContext * __thiscall
FToolMenuContext::FToolMenuContext
          (FToolMenuContext *this,TSharedPtr<FUICommandList,1> *param_1,
          TSharedPtr<FExtender,1> *param_2,UObject *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FToolMenuContext *pFVar5;
  UObject *local_28 [2];
  
  this->bIsEditing = false;
  (this->ContextObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextObjects).ArrayNum = 0;
  (this->ContextObjects).ArrayMax = 0;
  (this->ContextObjectCleanupFuncs).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextObjectCleanupFuncs).Pairs.ArrayNum = 0;
  (this->ContextObjectCleanupFuncs).Pairs.ArrayMax = 0;
  (this->ContextCleanupFuncs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextCleanupFuncs).ArrayNum = 0;
  (this->ContextCleanupFuncs).ArrayMax = 0;
  (this->CommandLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommandLists).ArrayNum = 0;
  (this->CommandLists).ArrayMax = 0;
  (this->CommandList).Object = (FUICommandList *)0x0;
  (this->CommandList).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Extenders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Extenders).ArrayNum = 0;
  (this->Extenders).ArrayMax = 0;
  if (param_3 != (UObject *)0x0) {
    local_28[0] = param_3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_3);
    }
    pFVar1 = (this->ContextObjects).AllocatorInstance.Data;
    if ((pFVar1 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 < pFVar1 + (longlong)(this->ContextObjects).ArrayMax * 8
       )) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FToolMenuContext *)(*pcVar2)();
        return pFVar5;
      }
    }
    iVar4 = (this->ContextObjects).ArrayNum;
    if (iVar4 == (this->ContextObjects).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ContextObjects).AllocatorInstance,
                         &(this->ContextObjects).ArrayMax);
    }
    (this->ContextObjects).ArrayNum = iVar4 + 1;
    *(UObject **)((this->ContextObjects).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_28[0]
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28[0]);
    }
  }
  if (param_2->Object != (FExtender *)0x0) {
    TArray<TSharedPtr<FExtender,1>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TSharedPtr<FExtender,1>_const_&>(&this->Extenders,param_2);
  }
  AppendCommandList(this,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FToolMenuContext @ 142c3c170

void __thiscall FToolMenuContext::~FToolMenuContext(FToolMenuContext *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)(this->Extenders).AllocatorInstance.Data,
             (this->Extenders).ArrayNum);
  pFVar1 = (this->Extenders).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CommandList).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FUICommandList,1>,int>
            ((TSharedPtr<FUICommandList,1> *)(this->CommandLists).AllocatorInstance.Data,
             (this->CommandLists).ArrayNum);
  pFVar1 = (this->CommandLists).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)(this->ContextCleanupFuncs).AllocatorInstance.Data,
             (this->ContextCleanupFuncs).ArrayNum);
  pFVar1 = (this->ContextCleanupFuncs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
            ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
             (this->ContextObjectCleanupFuncs).Pairs.AllocatorInstance.Data,
             (this->ContextObjectCleanupFuncs).Pairs.ArrayNum);
  pFVar1 = (this->ContextObjectCleanupFuncs).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ContextObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 142c3da60

FToolMenuContext * __thiscall
FToolMenuContext::operator=(FToolMenuContext *this,FToolMenuContext *param_1)

{
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar2;
  TSortedMap<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>,TSizedDefaultAllocator<32>,TLess<TObjectPtr<UObject_const_>_const_>_>
  *pTVar3;
  TSortedMap<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>,TSizedDefaultAllocator<32>,TLess<TObjectPtr<UObject_const_>_const_>_>
  *pTVar4;
  TArray<TFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<TFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<TSharedPtr<FUICommandList,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<TSharedPtr<FUICommandList,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  TSharedPtr<FUICommandList,1> *pTVar9;
  TArray<TSharedPtr<FExtender,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  TArray<TSharedPtr<FExtender,1>,TSizedDefaultAllocator<32>_> *pTVar12;
  
  pTVar1 = &param_1->ContextObjects;
  pTVar2 = &this->ContextObjects;
  this->bIsEditing = param_1->bIsEditing;
  if (pTVar2 != pTVar1) {
    pFVar11 = (pTVar2->AllocatorInstance).Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ContextObjects).ArrayNum = (param_1->ContextObjects).ArrayNum;
    (this->ContextObjects).ArrayMax = (param_1->ContextObjects).ArrayMax;
    (param_1->ContextObjects).ArrayNum = 0;
    (param_1->ContextObjects).ArrayMax = 0;
  }
  pTVar3 = &param_1->ContextObjectCleanupFuncs;
  pTVar4 = &this->ContextObjectCleanupFuncs;
  if (pTVar4 != pTVar3) {
    DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
              ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
               (pTVar4->Pairs).AllocatorInstance.Data,
               (this->ContextObjectCleanupFuncs).Pairs.ArrayNum);
    pFVar11 = (pTVar4->Pairs).AllocatorInstance.Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pTVar4->Pairs).AllocatorInstance.Data = (pTVar3->Pairs).AllocatorInstance.Data;
    (pTVar3->Pairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ContextObjectCleanupFuncs).Pairs.ArrayNum =
         (param_1->ContextObjectCleanupFuncs).Pairs.ArrayNum;
    (this->ContextObjectCleanupFuncs).Pairs.ArrayMax =
         (param_1->ContextObjectCleanupFuncs).Pairs.ArrayMax;
    (param_1->ContextObjectCleanupFuncs).Pairs.ArrayNum = 0;
    (param_1->ContextObjectCleanupFuncs).Pairs.ArrayMax = 0;
  }
  pTVar5 = &param_1->ContextCleanupFuncs;
  pTVar6 = &this->ContextCleanupFuncs;
  if (pTVar6 != pTVar5) {
    DestructItems<TFunction<void___cdecl(void)>,int>
              ((TFunction<void___cdecl(void)> *)(pTVar6->AllocatorInstance).Data,
               (this->ContextCleanupFuncs).ArrayNum);
    pFVar11 = (pTVar6->AllocatorInstance).Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ContextCleanupFuncs).ArrayNum = (param_1->ContextCleanupFuncs).ArrayNum;
    (this->ContextCleanupFuncs).ArrayMax = (param_1->ContextCleanupFuncs).ArrayMax;
    (param_1->ContextCleanupFuncs).ArrayNum = 0;
    (param_1->ContextCleanupFuncs).ArrayMax = 0;
  }
  pTVar7 = &param_1->CommandLists;
  pTVar8 = &this->CommandLists;
  if (pTVar8 != pTVar7) {
    DestructItems<TSharedPtr<FUICommandList,1>,int>
              ((TSharedPtr<FUICommandList,1> *)(pTVar8->AllocatorInstance).Data,
               (this->CommandLists).ArrayNum);
    pFVar11 = (pTVar8->AllocatorInstance).Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CommandLists).ArrayNum = (param_1->CommandLists).ArrayNum;
    (this->CommandLists).ArrayMax = (param_1->CommandLists).ArrayMax;
    (param_1->CommandLists).ArrayNum = 0;
    (param_1->CommandLists).ArrayMax = 0;
  }
  pTVar9 = &param_1->CommandList;
  if (&this->CommandList != pTVar9) {
    (this->CommandList).Object = pTVar9->Object;
    pTVar9->Object = (FUICommandList *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CommandList).SharedReferenceCount,
               &(param_1->CommandList).SharedReferenceCount);
  }
  pTVar12 = &param_1->Extenders;
  pTVar10 = &this->Extenders;
  if (pTVar10 != pTVar12) {
    DestructItems<TSharedPtr<FExtender,1>,int>
              ((TSharedPtr<FExtender,1> *)(pTVar10->AllocatorInstance).Data,
               (this->Extenders).ArrayNum);
    pFVar11 = (pTVar10->AllocatorInstance).Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pTVar10->AllocatorInstance).Data = (pTVar12->AllocatorInstance).Data;
    (pTVar12->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Extenders).ArrayNum = (param_1->Extenders).ArrayNum;
    (this->Extenders).ArrayMax = (param_1->Extenders).ArrayMax;
    (param_1->Extenders).ArrayNum = 0;
    (param_1->Extenders).ArrayMax = 0;
  }
  return this;
}

// operator= @ 142c3dc10

FToolMenuContext * __thiscall
FToolMenuContext::operator=(FToolMenuContext *this,FToolMenuContext *param_1)

{
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TSortedMap<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>,TSizedDefaultAllocator<32>,TLess<TObjectPtr<UObject_const_>_const_>_>
  *pTVar3;
  TArray<TFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<TSharedPtr<FUICommandList,1>,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<TSharedPtr<FExtender,1>,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *pTVar10;
  TFunction<void___cdecl(void)> *pTVar11;
  TSharedPtr<FUICommandList,1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  FUICommandList *pFVar14;
  TSharedPtr<FExtender,1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  
  pTVar1 = &this->ContextObjects;
  this->bIsEditing = param_1->bIsEditing;
  if (pTVar1 != &param_1->ContextObjects) {
    iVar7 = (param_1->ContextObjects).ArrayNum;
    piVar2 = &(this->ContextObjects).ArrayMax;
    pFVar9 = (param_1->ContextObjects).AllocatorInstance.Data;
    (this->ContextObjects).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar7,*piVar2,&pTVar1->AllocatorInstance,iVar7,piVar2);
      ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
                ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UObject> *)pFVar9,iVar7);
    }
  }
  pTVar3 = &this->ContextObjectCleanupFuncs;
  if (pTVar3 != &param_1->ContextObjectCleanupFuncs) {
    DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
              ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
               (pTVar3->Pairs).AllocatorInstance.Data,
               (this->ContextObjectCleanupFuncs).Pairs.ArrayNum);
    iVar7 = (param_1->ContextObjectCleanupFuncs).Pairs.ArrayNum;
    piVar2 = &(this->ContextObjectCleanupFuncs).Pairs.ArrayMax;
    pTVar10 = (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
              (param_1->ContextObjectCleanupFuncs).Pairs.AllocatorInstance.Data;
    iVar8 = *piVar2;
    (this->ContextObjectCleanupFuncs).Pairs.ArrayNum = iVar7;
    if ((iVar7 == 0) && (iVar8 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,iVar7,iVar8,(ForAnyElementType *)pTVar3,iVar7,piVar2);
      ConstructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
                ((pTVar3->Pairs).AllocatorInstance.Data,pTVar10,iVar7);
    }
  }
  pTVar4 = &this->ContextCleanupFuncs;
  if (pTVar4 != &param_1->ContextCleanupFuncs) {
    DestructItems<TFunction<void___cdecl(void)>,int>
              ((TFunction<void___cdecl(void)> *)(pTVar4->AllocatorInstance).Data,
               (this->ContextCleanupFuncs).ArrayNum);
    iVar7 = (param_1->ContextCleanupFuncs).ArrayNum;
    piVar2 = &(this->ContextCleanupFuncs).ArrayMax;
    pTVar11 = (TFunction<void___cdecl(void)> *)(param_1->ContextCleanupFuncs).AllocatorInstance.Data
    ;
    (this->ContextCleanupFuncs).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,iVar7,*piVar2,&pTVar4->AllocatorInstance,iVar7,piVar2);
      ConstructItems<TFunction<void___cdecl(void)>,TFunction<void___cdecl(void)>,int>
                ((pTVar4->AllocatorInstance).Data,pTVar11,iVar7);
    }
  }
  pTVar5 = &this->CommandLists;
  if (pTVar5 != &param_1->CommandLists) {
    DestructItems<TSharedPtr<FUICommandList,1>,int>
              ((TSharedPtr<FUICommandList,1> *)(pTVar5->AllocatorInstance).Data,
               (this->CommandLists).ArrayNum);
    iVar7 = (param_1->CommandLists).ArrayNum;
    piVar2 = &(this->CommandLists).ArrayMax;
    pTVar12 = (TSharedPtr<FUICommandList,1> *)(param_1->CommandLists).AllocatorInstance.Data;
    (this->CommandLists).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar7,*piVar2,&pTVar5->AllocatorInstance,iVar7,piVar2);
      ConstructItems<TSharedPtr<FUICommandList,1>,TSharedPtr<FUICommandList,1>,int>
                ((pTVar5->AllocatorInstance).Data,pTVar12,iVar7);
    }
  }
  pTVar13 = (param_1->CommandList).SharedReferenceCount.ReferenceController;
  pFVar14 = (param_1->CommandList).Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar16 = (this->CommandList).SharedReferenceCount.ReferenceController;
  (this->CommandList).Object = pFVar14;
  (this->CommandList).SharedReferenceCount.ReferenceController = pTVar13;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  pTVar6 = &this->Extenders;
  if (pTVar6 != &param_1->Extenders) {
    DestructItems<TSharedPtr<FExtender,1>,int>
              ((TSharedPtr<FExtender,1> *)(pTVar6->AllocatorInstance).Data,
               (this->Extenders).ArrayNum);
    iVar7 = (param_1->Extenders).ArrayNum;
    piVar2 = &(this->Extenders).ArrayMax;
    pTVar15 = (TSharedPtr<FExtender,1> *)(param_1->Extenders).AllocatorInstance.Data;
    (this->Extenders).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar7,*piVar2,&pTVar6->AllocatorInstance,iVar7,piVar2);
      ConstructItems<TSharedPtr<FExtender,1>,TSharedPtr<FExtender,1>,int>
                ((pTVar6->AllocatorInstance).Data,pTVar15,iVar7);
    }
  }
  return this;
}

// AddCleanup @ 142c44d30

void __thiscall
FToolMenuContext::AddCleanup(FToolMenuContext *this,TFunction<void___cdecl(void)> *param_1)

{
  int *piVar1;
  TFunction<void___cdecl(void)> *pTVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  if (*(longlong *)param_1 != 0) {
    pTVar2 = (TFunction<void___cdecl(void)> *)(this->ContextCleanupFuncs).AllocatorInstance.Data;
    if ((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->ContextCleanupFuncs).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = (this->ContextCleanupFuncs).ArrayNum;
    piVar1 = &(this->ContextCleanupFuncs).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,&(this->ContextCleanupFuncs).AllocatorInstance,piVar1);
    }
    (this->ContextCleanupFuncs).ArrayNum = iVar6 + 1;
    pFVar7 = (this->ContextCleanupFuncs).AllocatorInstance.Data + (longlong)iVar6 * 0x30;
    *(longlong *)pFVar7 = *(longlong *)param_1;
    *(longlong *)(pFVar7 + 0x28) = *(longlong *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    lVar4 = *(longlong *)&param_1->field_0x18;
    *(longlong *)(pFVar7 + 0x10) = *(longlong *)&param_1->field_0x10;
    *(longlong *)(pFVar7 + 0x18) = lVar4;
    *(longlong *)(pFVar7 + 0x20) = *(longlong *)&param_1->field_0x20;
    if (*(longlong *)pFVar7 != 0) {
      *(undefined8 *)param_1 = 0;
    }
  }
  return;
}

// AddExtender @ 142c456e0

void __thiscall
FToolMenuContext::AddExtender(FToolMenuContext *this,TSharedPtr<FExtender,1> *param_1)

{
  TArray<TSharedPtr<FExtender,1>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TSharedPtr<FExtender,1>_const_&>(&this->Extenders,param_1);
  return;
}

// AddObject @ 142c46340

void __thiscall
FToolMenuContext::AddObject
          (FToolMenuContext *this,UObject *param_1,TFunction<void___cdecl(UObject_*)> *param_2)

{
  TObjectPtr<UObject>_u_0 local_res8;
  
  local_res8.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TObjectPtr<UObject>_>
            (&this->ContextObjects,(TObjectPtr<UObject> *)&local_res8.ObjectPtr);
  if (*(longlong *)param_2 != 0) {
    local_res8.DebugPtr = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    TSortedMap<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>,TSizedDefaultAllocator<32>,TLess<TObjectPtr<UObject_const_>_const_>_>
    ::Emplace<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>
              (&this->ContextObjectCleanupFuncs,(TObjectPtr<UObject> *)&local_res8.ObjectPtr,param_2
              );
  }
  return;
}

// AddObject @ 142c463d0

void __thiscall FToolMenuContext::AddObject(FToolMenuContext *this,UObject *param_1)

{
  TObjectPtr<UObject>_u_0 local_res8 [4];
  
  local_res8[0].DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TObjectPtr<UObject>_>
            (&this->ContextObjects,(TObjectPtr<UObject> *)&local_res8[0].ObjectPtr);
  return;
}

// AppendCommandList @ 142c49c70

void __thiscall
FToolMenuContext::AppendCommandList(FToolMenuContext *this,TSharedPtr<FUICommandList,1> *param_1)

{
  int *piVar1;
  TSharedPtr<FUICommandList,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TIntrusiveReferenceController<FUICommandList,1> *pTVar8;
  TSharedRef<FUICommandList,1> *pTVar9;
  FScriptContainerElement *pFVar10;
  FUICommandList *pFVar11;
  TSharedPtr<FUICommandList,1> local_58;
  FUICommandList *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  TSharedRef<FUICommandList,1> local_38;
  TSharedRef<FUICommandList,1> local_28;
  TSharedRef<FUICommandList,1> local_18;
  
  if (param_1->Object == (FUICommandList *)0x0) {
    return;
  }
  pTVar2 = (TSharedPtr<FUICommandList,1> *)(this->CommandLists).AllocatorInstance.Data;
  pFVar11 = (FUICommandList *)&DAT_00000010;
  if (((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->CommandLists).ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (this->CommandLists).ArrayNum;
  piVar1 = &(this->CommandLists).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->CommandLists).AllocatorInstance,piVar1);
  }
  (this->CommandLists).ArrayNum = iVar7 + 1;
  pFVar10 = (this->CommandLists).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
  *(FUICommandList **)pFVar10 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar10 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar7 = (this->CommandLists).ArrayNum;
  if (iVar7 == 1) {
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar11 = param_1->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48 = (this->CommandList).Object;
    local_18.SharedReferenceCount.ReferenceController =
         (this->CommandList).SharedReferenceCount.ReferenceController;
    (this->CommandList).Object = pFVar11;
    (this->CommandList).SharedReferenceCount.ReferenceController = pTVar3;
    pTStack_40 = local_18.SharedReferenceCount.ReferenceController;
LAB_142c49f55:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return;
  }
  if (iVar7 != 2) {
    pFVar11 = TSharedPtr<FUICommandList,1>::operator->(&this->CommandList);
    pTVar9 = TSharedPtr<FUICommandList,1>::ToSharedRef(param_1,&local_18);
    FUICommandList::Append(pFVar11,pTVar9);
    goto LAB_142c49f55;
  }
  pTVar8 = ::operator_new(0x150);
  if (pTVar8 == (TIntrusiveReferenceController<FUICommandList,1> *)0x0) {
    pTVar8 = (TIntrusiveReferenceController<FUICommandList,1> *)0x0;
  }
  else {
    pTVar8 = SharedPointerInternals::TIntrusiveReferenceController<FUICommandList,1>::
             TIntrusiveReferenceController<FUICommandList,1><>(pTVar8);
    pFVar11 = (FUICommandList *)&pTVar8->ObjectStorage;
    if (pFVar11 == (FUICommandList *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_142c49e2f;
    }
  }
  if (((pFVar11->_padding_ == 0) || (pFVar11->_padding_ == 0)) ||
     (*(int *)(pFVar11->_padding_ + 8) < 1)) {
    if (pTVar8 != (TIntrusiveReferenceController<FUICommandList,1> *)0x0) {
      LOCK();
      *(int *)&pTVar8->_padding_ = (int)pTVar8->_padding_ + 1;
      UNLOCK();
    }
    pFVar11->_padding_ = (longlong)pFVar11;
    if (pTVar8 != (TIntrusiveReferenceController<FUICommandList,1> *)pFVar11->_padding_) {
      if (pTVar8 != (TIntrusiveReferenceController<FUICommandList,1> *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)&pTVar8->_padding_ + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      plVar4 = (longlong *)pFVar11->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      pFVar11->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar8);
  }
LAB_142c49e2f:
  if (pTVar8 != (TIntrusiveReferenceController<FUICommandList,1> *)0x0) {
    LOCK();
    *(int *)&pTVar8->_padding_ = (int)pTVar8->_padding_ + 1;
    UNLOCK();
  }
  pTVar2 = &this->CommandList;
  local_58.Object = pFVar11;
  local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pTVar8;
  if (pTVar2 != &local_58) {
    pTVar2->Object = pFVar11;
    local_58.Object = (FUICommandList *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CommandList).SharedReferenceCount,&local_58.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar8);
  pFVar11 = TSharedPtr<FUICommandList,1>::operator->(pTVar2);
  if (((this->CommandLists).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar9 = TSharedPtr<FUICommandList,1>::ToSharedRef
                     ((TSharedPtr<FUICommandList,1> *)(this->CommandLists).AllocatorInstance.Data,
                      &local_38);
  FUICommandList::Append(pFVar11,pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  pFVar11 = TSharedPtr<FUICommandList,1>::operator->(pTVar2);
  pTVar9 = TSharedPtr<FUICommandList,1>::ToSharedRef(param_1,&local_28);
  FUICommandList::Append(pFVar11,pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// AppendCommandList @ 142c49f90

void __thiscall
FToolMenuContext::AppendCommandList(FToolMenuContext *this,TSharedRef<FUICommandList,1> *param_1)

{
  TSharedPtr<FUICommandList,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AppendCommandList(this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// AppendObjects @ 142c49fd0

void __thiscall
FToolMenuContext::AppendObjects
          (FToolMenuContext *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TObjectPtr<UObject>_u_0 *pTVar1;
  int iVar2;
  TObjectPtr<UObject>_u_0 *pTVar3;
  TObjectPtr<UObject>_u_0 local_res10;
  
  pTVar3 = (TObjectPtr<UObject>_u_0 *)(param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pTVar1 = pTVar3 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UObject_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    if (pTVar3 == pTVar1) break;
    local_res10 = (TObjectPtr<UObject>_u_0)pTVar3->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res10.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res10.DebugPtr);
    }
    TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TObjectPtr<UObject>_>
              (&this->ContextObjects,(TObjectPtr<UObject> *)&local_res10.ObjectPtr);
    pTVar3 = pTVar3 + 1;
  }
  return;
}

// CleanupObjects @ 142c4f340

void __thiscall FToolMenuContext::CleanupObjects(FToolMenuContext *this)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined8 local_res8;
  
  iVar1 = (this->ContextObjectCleanupFuncs).Pairs.ArrayNum;
  pFVar5 = (this->ContextObjectCleanupFuncs).Pairs.AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->ContextObjectCleanupFuncs).Pairs.ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar5 == pFVar6) break;
    local_res8 = *(undefined8 *)pFVar5;
    UE::Core::Private::Function::CheckCallable(*(void **)(pFVar5 + 0x10));
    pcVar2 = *(code **)(pFVar5 + 0x10);
    pFVar4 = pFVar5 + 0x20;
    if (*(FScriptContainerElement **)(pFVar5 + 0x38) != (FScriptContainerElement *)0x0) {
      pFVar4 = *(FScriptContainerElement **)(pFVar5 + 0x38);
    }
    uVar3 = (**(code **)(*(longlong *)pFVar4 + 8))();
    (*pcVar2)(uVar3,&local_res8);
    pFVar5 = pFVar5 + 0x40;
  }
  iVar1 = (this->ContextCleanupFuncs).ArrayNum;
  pFVar5 = (this->ContextCleanupFuncs).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->ContextCleanupFuncs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TFunction<void___cdecl(void)>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar5 == pFVar6) break;
    UE::Core::Private::Function::CheckCallable(*(void **)pFVar5);
    pcVar2 = *(code **)pFVar5;
    pFVar4 = pFVar5 + 0x10;
    if (*(FScriptContainerElement **)(pFVar5 + 0x28) != (FScriptContainerElement *)0x0) {
      pFVar4 = *(FScriptContainerElement **)(pFVar5 + 0x28);
    }
    uVar3 = (**(code **)(*(longlong *)pFVar4 + 8))();
    (*pcVar2)(uVar3);
    pFVar5 = pFVar5 + 0x30;
  }
  return;
}

// Empty @ 142c56e00

void __thiscall FToolMenuContext::Empty(FToolMenuContext *this)

{
  int *piVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  piVar1 = &(this->ContextObjects).ArrayMax;
  (this->ContextObjects).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ContextObjects).AllocatorInstance,0,piVar1);
  }
  DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
            ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
             (this->ContextObjectCleanupFuncs).Pairs.AllocatorInstance.Data,
             (this->ContextObjectCleanupFuncs).Pairs.ArrayNum);
  piVar1 = &(this->ContextObjectCleanupFuncs).Pairs.ArrayMax;
  (this->ContextObjectCleanupFuncs).Pairs.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,(ForAnyElementType *)&this->ContextObjectCleanupFuncs,0,piVar1);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)(this->ContextCleanupFuncs).AllocatorInstance.Data,
             (this->ContextCleanupFuncs).ArrayNum);
  piVar1 = &(this->ContextCleanupFuncs).ArrayMax;
  (this->ContextCleanupFuncs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,0,&(this->ContextCleanupFuncs).AllocatorInstance,0,piVar1);
  }
  DestructItems<TSharedPtr<FUICommandList,1>,int>
            ((TSharedPtr<FUICommandList,1> *)(this->CommandLists).AllocatorInstance.Data,
             (this->CommandLists).ArrayNum);
  piVar1 = &(this->CommandLists).ArrayMax;
  (this->CommandLists).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->CommandLists).AllocatorInstance,0,piVar1);
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CommandList != (TSharedPtr<FUICommandList,1> *)&local_18) {
    (this->CommandList).Object = (FUICommandList *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CommandList).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)(this->Extenders).AllocatorInstance.Data,
             (this->Extenders).ArrayNum);
  piVar1 = &(this->Extenders).ArrayMax;
  (this->Extenders).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Extenders).AllocatorInstance,0,piVar1);
  }
  return;
}

// FindByClass @ 142c59e40

UObject * __thiscall FToolMenuContext::FindByClass(FToolMenuContext *this,UClass *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UObject *pUVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->ContextObjects).AllocatorInstance.Data;
  iVar2 = (this->ContextObjects).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ContextObjects).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    pUVar4 = *(UObject **)pFVar5;
    if (pUVar4 != (UObject *)0x0) {
      iVar3 = (int)param_1->_padding_;
      if ((iVar3 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
          &param_1->_padding_)) {
        return pUVar4;
      }
    }
    pFVar5 = pFVar5 + 8;
  }
  return (UObject *)0x0;
}

// GetActionForCommand @ 142c5d5c0

FUIAction * __thiscall
FToolMenuContext::GetActionForCommand
          (FToolMenuContext *this,TSharedPtr<FUICommandInfo_const_,1> *param_1)

{
  int iVar1;
  FUICommandList *this_00;
  FUIAction *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  TSharedPtr<FUICommandInfo_const_,1> local_28;
  
  iVar1 = (this->CommandLists).ArrayNum;
  pFVar3 = (this->CommandLists).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  do {
    if ((this->CommandLists).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FUICommandList,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return (FUIAction *)0x0;
    }
    this_00 = *(FUICommandList **)pFVar3;
    if (this_00 != (FUICommandList *)0x0) {
      local_28.Object = param_1->Object;
      local_28.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar2 = FUICommandList::GetActionForCommand(this_00,&local_28);
      if (pFVar2 != (FUIAction *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_1->SharedReferenceCount).ReferenceController);
        return pFVar2;
      }
    }
    pFVar3 = pFVar3 + 0x10;
  } while( true );
}

// GetActionForCommand @ 142c5d680

FUIAction * __thiscall
FToolMenuContext::GetActionForCommand
          (FToolMenuContext *this,TSharedPtr<FUICommandInfo_const_,1> *param_1,
          TSharedPtr<FUICommandList_const_,1> *param_2)

{
  int iVar1;
  FUICommandList *this_00;
  FUIAction *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  TSharedPtr<FUICommandList_const_,1> local_48;
  TSharedPtr<FUICommandInfo_const_,1> local_38;
  
  iVar1 = (this->CommandLists).ArrayNum;
  pFVar3 = (this->CommandLists).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  do {
    if ((this->CommandLists).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FUICommandList,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return (FUIAction *)0x0;
    }
    this_00 = *(FUICommandList **)pFVar3;
    if (this_00 != (FUICommandList *)0x0) {
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
      pFVar2 = FUICommandList::GetActionForCommand(this_00,&local_38);
      if (pFVar2 != (FUIAction *)0x0) {
        local_48.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar3 + 8);
        local_48.Object = *(FUICommandList **)pFVar3;
        if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (param_2 != &local_48) {
          param_2->Object = local_48.Object;
          local_48.Object = (FUICommandList *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&param_2->SharedReferenceCount,&local_48.SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_1->SharedReferenceCount).ReferenceController);
        return pFVar2;
      }
    }
    pFVar3 = pFVar3 + 0x10;
  } while( true );
}

// GetAllExtenders @ 142c5da00

TSharedPtr<FExtender,1> * __thiscall
FToolMenuContext::GetAllExtenders
          (FToolMenuContext *this,TSharedPtr<FExtender,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FExtender,1> *pTVar2;
  TSharedRef<FExtender,1> local_18;
  
  pTVar2 = FExtender::Combine(&local_18,&this->Extenders);
  __return_storage_ptr__->Object = pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ResetExtenders @ 142c6f8e0

void __thiscall FToolMenuContext::ResetExtenders(FToolMenuContext *this)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<FExtender,1> *pTVar3;
  
  iVar2 = (this->Extenders).ArrayNum;
  piVar1 = &(this->Extenders).ArrayMax;
  pTVar3 = (TSharedPtr<FExtender,1> *)(this->Extenders).AllocatorInstance.Data;
  if (-1 < (this->Extenders).ArrayMax) {
    DestructItems<TSharedPtr<FExtender,1>,int>(pTVar3,iVar2);
    (this->Extenders).ArrayNum = 0;
    return;
  }
  DestructItems<TSharedPtr<FExtender,1>,int>(pTVar3,iVar2);
  (this->Extenders).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Extenders).AllocatorInstance,0,piVar1);
  }
  return;
}

