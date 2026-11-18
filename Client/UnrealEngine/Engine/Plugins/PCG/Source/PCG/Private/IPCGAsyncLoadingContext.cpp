// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// ~IPCGAsyncLoadingContext @ 14973d8c0

void __thiscall IPCGAsyncLoadingContext::~IPCGAsyncLoadingContext(IPCGAsyncLoadingContext *this)

{
  TSharedPtr<FStreamableHandle,1> *pTVar1;
  FStreamableHandle *this_00;
  FScriptContainerElement *pFVar2;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->LoadHandle;
  this->_padding_ = (longlong)&___7IPCGAsyncLoadingContext__6B_;
  this_00 = pTVar1->Object;
  if (((this_00 != (FStreamableHandle *)0x0) && (this_00->bCanceled == false)) &&
     (this_00->bReleased == false)) {
    FStreamableHandle::CancelHandle(this_00);
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<FStreamableHandle,1> *)&local_18) {
    pTVar1->Object = (FStreamableHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LoadHandle).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  DestructItems<TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
            ((TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
              *)(this->AlreadyLoadedObjects).AllocatorInstance.Data,
             (this->AlreadyLoadedObjects).ArrayNum);
  pFVar2 = (this->AlreadyLoadedObjects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LoadHandle).SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 149742b90

void __thiscall
`IPCGAsyncLoadingContext::RequestResourceLoad'::__l13::<lambda_1>::operator()(void *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  
  pTVar3 = *(TReferenceControllerBase<1> **)this;
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar8 = pTVar7;
  }
  else {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      pTVar6 = pTVar7;
      pTVar8 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) break;
      LOCK();
      aVar5 = pTVar4->SharedReferenceCount;
      bVar9 = aVar2 == aVar5;
      if (bVar9) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      pTVar6 = pTVar4;
      pTVar8 = pTVar3;
      aVar2 = aVar5;
    } while (!bVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    pTVar7 = pTVar6;
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  if ((pTVar8 != (TReferenceControllerBase<1> *)0x0) && (pTVar8[1]._padding_ != 0)) {
    *(undefined1 *)(pTVar8[1]._padding_ + 0x138) = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// CancelLoading @ 149749650

void __thiscall IPCGAsyncLoadingContext::CancelLoading(IPCGAsyncLoadingContext *this)

{
  FStreamableHandle *this_00;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this_00 = (this->LoadHandle).Object;
  if (((this_00 != (FStreamableHandle *)0x0) && (this_00->bCanceled == false)) &&
     (this_00->bReleased == false)) {
    FStreamableHandle::CancelHandle(this_00);
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->LoadHandle != (TSharedPtr<FStreamableHandle,1> *)&local_18) {
    (this->LoadHandle).Object = (FStreamableHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LoadHandle).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// RequestResourceLoad @ 149774400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
IPCGAsyncLoadingContext::RequestResourceLoad
          (IPCGAsyncLoadingContext *this,FPCGContext *param_1,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  UAssetManager *pUVar3;
  TWeakPtr<FPCGContextHandle,1> *pTVar4;
  TSharedPtr<FStreamableHandle,1> *pTVar5;
  FStreamableHandle *pFVar6;
  undefined1 local_98 [16];
  TSharedPtr<FStreamableHandle,1> local_88;
  FString local_78;
  TSharedPtr<FStreamableHandle,1> local_68;
  FSourceLocation local_58;
  FSourceLocation local_38;
  
  if ((param_2->ArrayNum != 0) && (this->bLoadRequested == false)) {
    ResolveAlreadyLoadedObjects(this,param_2);
    if (param_2->ArrayNum != 0) {
      if (param_3) {
        param_1->bIsPaused = true;
        pUVar3 = UAssetManager::Get();
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
        pTVar4 = FPCGContext::GetOrCreateHandle(param_1,(TWeakPtr<FPCGContextHandle,1> *)&local_58);
        local_38.Impl._Line = 0x4f;
        local_38.Impl._Column = 0x37;
        local_98._0_8_ = pTVar4->Object;
        pTVar4->Object = (FPCGContextHandle *)0x0;
        local_98._8_8_ = (pTVar4->WeakReferenceCount).ReferenceController;
        (pTVar4->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_38.Impl._File =
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Async\\PCGAsyncLoadingContext.cpp"
        ;
        local_38.Impl._Function =
             "bool __cdecl IPCGAsyncLoadingContext::RequestResourceLoad(struct FPCGContext *,class TArray<struct FSoftObjectPath,class TSizedDefaultAllocator<32> > &&,bool)"
        ;
        pTVar5 = FStreamableManager::
                 RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>,_IPCGAsyncLoadingContext::RequestResourceLoad_::__l13::<lambda_1>,void>
                           (&pUVar3->StreamableManager,&local_68,param_2,(<lambda_1> *)local_98,0,
                            false,false,&local_78,&local_38);
        TSharedPtr<FStreamableHandle,1>::operator=(&this->LoadHandle,pTVar5);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
        if ((TReferenceControllerBase<1> *)local_98._8_8_ != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = (atomic<int> *)(local_98._8_8_ + 0xc);
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(*(longlong *)local_98._8_8_ + 8))(local_98._8_8_,1);
          }
        }
        if ((TReferenceControllerBase<1> *)local_58.Impl._File != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          paVar1 = (atomic<int> *)((longlong)local_58.Impl._File + 0xc);
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(*(longlong *)local_58.Impl._File + 8))(local_58.Impl._File,1);
          }
        }
        this->bLoadRequested = true;
        pFVar6 = TSharedPtr<FStreamableHandle,1>::operator->(&this->LoadHandle);
        if ((pFVar6->bCanceled == false) && (pFVar6->bReleased == false)) {
          return false;
        }
        param_1->bIsPaused = false;
      }
      else {
        pUVar3 = UAssetManager::Get();
        local_58.Impl._Line = 0x46;
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
        local_58.Impl._Column = 0x37;
        local_58.Impl._File =
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Async\\PCGAsyncLoadingContext.cpp"
        ;
        local_58.Impl._Function =
             "bool __cdecl IPCGAsyncLoadingContext::RequestResourceLoad(struct FPCGContext *,class TArray<struct FSoftObjectPath,class TSizedDefaultAllocator<32> > &&,bool)"
        ;
        local_98._0_8_ = (param_2->AllocatorInstance).Data;
        (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        local_98._8_8_ = *(undefined8 *)&param_2->ArrayNum;
        param_2->ArrayNum = 0;
        param_2->ArrayMax = 0;
        FStreamableManager::RequestSyncLoadInternal
                  (&pUVar3->StreamableManager,&local_88,
                   (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)local_98,false,&local_78,
                   &local_58);
        DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_98._0_8_,local_98._8_4_);
        if ((FSoftObjectPath *)local_98._0_8_ != (FSoftObjectPath *)0x0) {
          FMemory::Free((void *)local_98._0_8_);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (&this->LoadHandle != &local_88) {
          (this->LoadHandle).Object = local_88.Object;
          local_88.Object = (FStreamableHandle *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->LoadHandle).SharedReferenceCount,&local_88.SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
        this->bLoadRequested = true;
      }
      return true;
    }
    this->bLoadRequested = true;
  }
  return true;
}

// ResetLoadRequestIfDone @ 149775590

bool __thiscall IPCGAsyncLoadingContext::ResetLoadRequestIfDone(IPCGAsyncLoadingContext *this)

{
  FStreamableHandle *pFVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if (this->bLoadRequested != false) {
    pFVar1 = (this->LoadHandle).Object;
    if ((pFVar1 != (FStreamableHandle *)0x0) && (pFVar1->bLoadCompleted != false)) {
      local_18 = 0;
      FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->LoadHandle != (TSharedPtr<FStreamableHandle,1> *)&local_18) {
        (this->LoadHandle).Object = (FStreamableHandle *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->LoadHandle).SharedReferenceCount,&FStack_10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_10.ReferenceController);
      this->bLoadRequested = false;
      return true;
    }
  }
  return false;
}

// ResolveAlreadyLoadedObjects @ 149775610

void __thiscall
IPCGAsyncLoadingContext::ResolveAlreadyLoadedObjects
          (IPCGAsyncLoadingContext *this,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UObjectBase *this_00;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = param_1->ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 5;
    do {
      uVar7 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar5 = uVar7;
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
      this_00 = (UObjectBase *)
                FSoftObjectPath::ResolveObject
                          ((FSoftObjectPath *)((param_1->AllocatorInstance).Data + lVar9));
      if (this_00 == (UObjectBase *)0x0) {
        uVar5 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar5 = uVar7;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(longlong *)((param_1->AllocatorInstance).Data + lVar9) == 0) goto LAB_1497756f8;
      }
      else {
LAB_1497756f8:
        uVar5 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar5 = uVar7;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(param_1,uVar8);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
        if (this_00 != (UObjectBase *)0x0) {
          iVar6 = (this->AlreadyLoadedObjects).ArrayNum;
          piVar1 = &(this->AlreadyLoadedObjects).ArrayMax;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&(this->AlreadyLoadedObjects).AllocatorInstance,piVar1);
          }
          (this->AlreadyLoadedObjects).ArrayNum = iVar6 + 1;
          pFVar2 = (this->AlreadyLoadedObjects).AllocatorInstance.Data;
          *(undefined8 *)(pFVar2 + (longlong)iVar6 * 8) = 0;
          UObjectBase::AddRef(this_00);
          *(UObjectBase **)(pFVar2 + (longlong)iVar6 * 8) = this_00;
        }
      }
      lVar9 = lVar9 + -0x20;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  return;
}

