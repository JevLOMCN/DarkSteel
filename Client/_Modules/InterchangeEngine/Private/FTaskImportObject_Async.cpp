// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 3

// operator() @ 14e4dbe80

FImportAssetResult * __thiscall
`UE::Interchange::FTaskImportObject_Async::Execute'::__l2::<lambda_1>::operator()
          (void *this,FImportAssetResult *__return_storage_ptr__,FImportAssetObjectParams *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name674,L"Interchange");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name674,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name674,true);
  (**(code **)(*(longlong *)**(undefined8 **)this + 0x2e0))
            ((longlong *)**(undefined8 **)this,__return_storage_ptr__,param_1);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// Execute @ 14e4ecb60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UE::Interchange::FTaskImportObject_Async::Execute(FTaskImportObject_Async *this)

{
  int iVar1;
  UInterchangeFactoryBaseNode *pUVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  char cVar6;
  atomic<int> aVar7;
  longlong lVar8;
  FString *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FImportAsyncHelper *this_00;
  FGCScopeGuard local_res8;
  char local_res9;
  FLLMScope local_res10 [2];
  UInterchangeFactoryBase *local_res18;
  FMemScope local_res20;
  TSharedPtr<UE::Interchange::FImportAsyncHelper,1> local_88;
  FString local_78;
  FImportAssetResult local_68;
  code *local_58 [2];
  undefined **local_48;
  UInterchangeFactoryBase **local_40;
  undefined8 local_30;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name643,L"Interchange");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name643,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name643,true);
  local_res9 = '\0';
  bVar5 = IsInGameThread();
  if (!bVar5) {
    if (local_res9 != '\0') {
      FGCScopeGuard::~FGCScopeGuard(&local_res8);
    }
    FGCScopeGuard::FGCScopeGuard(&local_res8);
    local_res9 = '\x01';
  }
  pTVar10 = (this->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
  this_00 = (FImportAsyncHelper *)0x0;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar10->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e4ecc34;
      }
      LOCK();
      aVar7 = pTVar10->SharedReferenceCount;
      bVar5 = aVar4 == aVar7;
      if (bVar5) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar7 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar7;
    } while (!bVar5);
    this_00 = (this->WeakAsyncHelper).Object;
    if (this_00 != (FImportAsyncHelper *)0x0) goto LAB_14e4ecc80;
  }
LAB_14e4ecc34:
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("AsyncHelper.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskImportObject.cpp"
                     ,0x28e,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14e4ecc80:
  if ((this_00->bCancel == (atomic<bool>)0x0) &&
     (pUVar2 = this->FactoryNode, pUVar2 != (UInterchangeFactoryBaseNode *)0x0)) {
    if ((this_00 == (FImportAsyncHelper *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((this_00->bRuntimeOrPIE == false) ||
        (cVar6 = (**(code **)(pUVar2->_padding_ + 0x308))(pUVar2), cVar6 != '\0')) &&
       (lVar8 = (**(code **)(pUVar2->_padding_ + 0x2f8))(pUVar2), lVar8 != 0)) {
      pFVar9 = UInterchangeBaseNode::GetUniqueID
                         ((UInterchangeBaseNode *)this->FactoryNode,&local_78);
      local_res18 = FImportAsyncHelper::GetCreatedFactory(this_00,pFVar9);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_res18 != (UInterchangeFactoryBase *)0x0) {
        iVar1 = this->SourceIndex;
        pUVar2 = this->FactoryNode;
        local_48 = &Core::Private::Function::
                    TFunction_OwnedObject<`UE::Interchange::FTaskImportObject_Async::Execute'::`2'::<lambda_1>,0,0>
                    ::_vftable_;
        local_40 = &local_res18;
        local_58[0] = Core::Private::Function::
                      TFunctionRefCaller<`UE::Interchange::FTaskImportObject_Async::Execute'::__l2::<lambda_1>,UInterchangeFactoryBase::FImportAssetResult,UInterchangeFactoryBase::FImportAssetObjectParams_&>
                      ::Call;
        local_30 = 0;
        if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_88.Object = this_00;
        local_88.SharedReferenceCount.ReferenceController = pTVar10;
        Interchange::Private::InternalImportObjectStartup
                  (&local_68,&local_88,pUVar2,iVar1,&this->PackageBasePath,
                   (TFunction<UInterchangeFactoryBase::FImportAssetResult___cdecl(UInterchangeFactoryBase::FImportAssetObjectParams_&)>
                    *)local_58);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if (local_res9 != '\0') {
    FGCScopeGuard::~FGCScopeGuard(&local_res8);
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// GetTaskThread @ 14e4f9750

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EInterchangeTaskThread __thiscall
UE::Interchange::FTaskImportObject_Async::GetTaskThread(FTaskImportObject_Async *this)

{
  FImportAsyncHelper *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e4f9780;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pFVar1 = (this->WeakAsyncHelper).Object;
    if ((pFVar1 != (FImportAsyncHelper *)0x0) && (pFVar1->bRunSynchronous != false)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return GameThread;
    }
  }
LAB_14e4f9780:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return AsyncThread;
}

