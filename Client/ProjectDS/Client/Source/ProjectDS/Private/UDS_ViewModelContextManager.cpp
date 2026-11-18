// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b5d3c80

UClass * __cdecl UDS_ViewModelContextManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ViewModelContextManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ViewModelContextManager",
               &Z_Registration_Info_UClass_UDS_ViewModelContextManager.InnerSingleton,
               StaticRegisterNativesUDS_ViewModelContextManager,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ViewModelContextManager>,
               InternalVTableHelperCtorCaller<UDS_ViewModelContextManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ViewModelContextManager.InnerSingleton;
}

// UDS_ViewModelContextManager @ 14b5d95f0

UDS_ViewModelContextManager * __thiscall
UDS_ViewModelContextManager::UDS_ViewModelContextManager
          (UDS_ViewModelContextManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ViewModelContextManager__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ContextsLock,4000);
  (this->ActiveContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveContexts).ArrayNum = 0;
  (this->ActiveContexts).ArrayMax = 0;
  return this;
}

// ~UDS_ViewModelContextManager @ 14b5da500

void __thiscall
UDS_ViewModelContextManager::~UDS_ViewModelContextManager(UDS_ViewModelContextManager *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_ViewModelContextManager__6B_;
  DestructItems<FDS_ViewModelContextEntry,int>
            ((FDS_ViewModelContextEntry *)(this->ActiveContexts).AllocatorInstance.Data,
             (this->ActiveContexts).ArrayNum);
  pFVar1 = (this->ActiveContexts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ContextsLock);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5db8b0

UClass * __cdecl UDS_ViewModelContextManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ViewModelContextManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ViewModelContextManager",
               &Z_Registration_Info_UClass_UDS_ViewModelContextManager.InnerSingleton,
               StaticRegisterNativesUDS_ViewModelContextManager,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ViewModelContextManager>,
               InternalVTableHelperCtorCaller<UDS_ViewModelContextManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ViewModelContextManager.InnerSingleton;
}

// StaticRegisterNativesUDS_ViewModelContextManager @ 14b5dbdc0

void __cdecl UDS_ViewModelContextManager::StaticRegisterNativesUDS_ViewModelContextManager(void)

{
  return;
}

// AddReferencedObjects @ 14bb4f770

void __thiscall
UDS_ViewModelContextManager::AddReferencedObjects
          (UDS_ViewModelContextManager *this,FReferenceCollector *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  FDS_ViewModelContext *this_00;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->ContextsLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((char)this->_padding_ != '\x01') {
    pFVar5 = (this->ActiveContexts).AllocatorInstance.Data;
    iVar2 = (this->ActiveContexts).ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar2 * 0x18;
    while( true ) {
      if ((this->ActiveContexts).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FDS_ViewModelContextEntry,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar5 == pFVar1) break;
      if (((*(longlong *)pFVar5 == 0) || (*(longlong *)(pFVar5 + 8) == 0)) ||
         (*(int *)(*(longlong *)(pFVar5 + 8) + 8) < 1)) {
LAB_14bb4f818:
        pFVar5 = pFVar5 + 0x18;
      }
      else {
        pTVar6 = *(TReferenceControllerBase<1> **)(pFVar5 + 8);
        if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
LAB_14bb4f810:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar6);
          goto LAB_14bb4f818;
        }
        aVar3 = pTVar6->SharedReferenceCount;
        do {
          if (aVar3 == (atomic<int>)0x0) {
            pTVar6 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14bb4f810;
          }
          LOCK();
          aVar4 = pTVar6->SharedReferenceCount;
          bVar7 = aVar3 == aVar4;
          if (bVar7) {
            pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar4 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar4;
        } while (!bVar7);
        this_00 = *(FDS_ViewModelContext **)pFVar5;
        if ((this_00 == (FDS_ViewModelContext *)0x0) ||
           (*(FDS_ViewModelContext **)(pFVar5 + 0x10) != this_00)) goto LAB_14bb4f810;
        FDS_ViewModelContext::AddReferencedObjects(this_00,param_1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        pFVar5 = pFVar5 + 0x18;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014bb4f861. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// AddReferencedObjects @ 14bb4f880

void __cdecl
UDS_ViewModelContextManager::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  FDS_ViewModelContext *this;
  atomic<int> aVar3;
  atomic<int> aVar4;
  UDS_ViewModelContextManager *pUVar5;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  undefined1 local_res18 [16];
  
  UObject::AddReferencedObjects(param_1,param_2);
  pUVar5 = GetInst();
  if (((pUVar5 != (UDS_ViewModelContextManager *)0x0) &&
      (pUVar5 == (UDS_ViewModelContextManager *)param_1)) && ((char)pUVar5->_padding_ == '\0')) {
    lpCriticalSection = &pUVar5->ContextsLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((char)pUVar5->_padding_ == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00014bb4f8df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    pFVar6 = (pUVar5->ActiveContexts).AllocatorInstance.Data;
    iVar2 = (pUVar5->ActiveContexts).ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar2 * 0x18;
    while( true ) {
      if ((pUVar5->ActiveContexts).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FDS_ViewModelContextEntry,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar6 == pFVar1) break;
      if (((*(longlong *)pFVar6 == 0) || (*(longlong *)(pFVar6 + 8) == 0)) ||
         (*(int *)(*(longlong *)(pFVar6 + 8) + 8) < 1)) {
LAB_14bb4f968:
        pFVar6 = pFVar6 + 0x18;
      }
      else {
        pTVar7 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
        if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
LAB_14bb4f960:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar7);
          goto LAB_14bb4f968;
        }
        aVar3 = pTVar7->SharedReferenceCount;
        do {
          if (aVar3 == (atomic<int>)0x0) {
            pTVar7 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14bb4f960;
          }
          LOCK();
          aVar4 = pTVar7->SharedReferenceCount;
          bVar8 = aVar3 == aVar4;
          if (bVar8) {
            pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar4 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar4;
        } while (!bVar8);
        this = *(FDS_ViewModelContext **)pFVar6;
        if ((this == (FDS_ViewModelContext *)0x0) ||
           (*(FDS_ViewModelContext **)(pFVar6 + 0x10) != this)) goto LAB_14bb4f960;
        FDS_ViewModelContext::AddReferencedObjects(this,param_2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        pFVar6 = pFVar6 + 0x18;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// Destroyed @ 14bb5d8f0

void __thiscall UDS_ViewModelContextManager::Destroyed(UDS_ViewModelContextManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  
  lpCriticalSection = &this->ContextsLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DestructItems<FDS_ViewModelContextEntry,int>
              ((FDS_ViewModelContextEntry *)(this->ActiveContexts).AllocatorInstance.Data,
               (this->ActiveContexts).ArrayNum);
    piVar1 = &(this->ActiveContexts).ArrayMax;
    (this->ActiveContexts).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->ActiveContexts).AllocatorInstance,0,piVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00014bb5d954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetInst @ 14bb663b0

UDS_ViewModelContextManager * __cdecl UDS_ViewModelContextManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_ViewModelContextManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_ViewModelContextManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_ViewModelContextManager_NoRegister();
  pUVar3 = (UDS_ViewModelContextManager *)
           UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_ViewModelContextManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_ViewModelContextManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_ViewModelContextManager *)0x0;
}

// RegisterContext @ 14bb805a0

/* WARNING: Removing unreachable block (ram,0x00014bb8061c) */
/* WARNING: Removing unreachable block (ram,0x00014bb80629) */
/* WARNING: Removing unreachable block (ram,0x00014bb8071d) */
/* WARNING: Removing unreachable block (ram,0x00014bb80729) */

void __thiscall
UDS_ViewModelContextManager::RegisterContext
          (UDS_ViewModelContextManager *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FDS_ViewModelContext *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDS_ViewModelContext *local_28;
  TReferenceControllerBase<1> *local_20;
  FDS_ViewModelContext *local_18;
  
  lpCriticalSection = &this->ContextsLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((char)this->_padding_ != '\x01') &&
     (pFVar2 = param_1->Object, pFVar2 != (FDS_ViewModelContext *)0x0)) {
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    local_20 = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
      local_20 = pTVar3;
    }
    local_18 = param_1->Object;
    pFVar4 = (this->ActiveContexts).AllocatorInstance.Data;
    local_28 = pFVar2;
    if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 <
         pFVar4 + (longlong)(this->ActiveContexts).ArrayMax * 0x18)) &&
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
    iVar7 = (this->ActiveContexts).ArrayNum;
    piVar1 = &(this->ActiveContexts).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(this->ActiveContexts).AllocatorInstance,piVar1);
    }
    (this->ActiveContexts).ArrayNum = iVar7 + 1;
    pFVar4 = (this->ActiveContexts).AllocatorInstance.Data + (longlong)iVar7 * 0x18;
    *(FDS_ViewModelContext **)pFVar4 = local_28;
    *(TReferenceControllerBase<1> **)(pFVar4 + 8) = local_20;
    *(FDS_ViewModelContext **)(pFVar4 + 0x10) = local_18;
    local_20 = (TReferenceControllerBase<1> *)0x0;
    local_28 = (FDS_ViewModelContext *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014bb8074e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// UnregisterContext @ 14bb95f60

void __thiscall
UDS_ViewModelContextManager::UnregisterContext
          (UDS_ViewModelContextManager *this,FDS_ViewModelContext *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  <lambda_1> local_res8;
  
  lpCriticalSection = &this->ContextsLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((char)this->_padding_ != '\x01') && (param_1 != (FDS_ViewModelContext *)0x0)) {
      local_res8.InRawPtr = param_1;
      TArray<FDS_ViewModelContextEntry,TSizedDefaultAllocator<32>_>::
      RemoveAll<_UDS_ViewModelContextManager::UnregisterContext_::__l2::<lambda_1>_>
                (&this->ActiveContexts,&local_res8);
    }
                    /* WARNING: Could not recover jumptable at 0x00014bb95fb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

