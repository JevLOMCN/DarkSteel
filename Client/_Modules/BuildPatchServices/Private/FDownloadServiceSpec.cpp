// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 14

// GetTestFlags @ 1432f7b90

EAutomationTestFlags __thiscall FDownloadServiceSpec::GetTestFlags(FDownloadServiceSpec *this)

{
  return ProductFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// GetTestSourceFileName @ 1432f7ba0

FString * __thiscall
FDownloadServiceSpec::GetTestSourceFileName
          (FDownloadServiceSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Tests\\Unit\\DownloadService.spec.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1432f7bd0

int __thiscall FDownloadServiceSpec::GetTestSourceFileLine(FDownloadServiceSpec *this)

{
  return 0xf;
}

// GetBeautifiedTestName @ 1432f7be0

FString * __thiscall
FDownloadServiceSpec::GetBeautifiedTestName
          (FDownloadServiceSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"BuildPatchServices.Unit");
  return __return_storage_ptr__;
}

// Define @ 1432f7c10

void __thiscall FDownloadServiceSpec::Define(FDownloadServiceSpec *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined ***pppuVar3;
  FDestructionSentinel local_58;
  undefined1 *local_40;
  code *local_38 [2];
  undefined **local_28;
  FDownloadServiceSpec *local_20;
  undefined ***local_10;
  
  FRollingHashConst::Init();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->DownloadProgress,
             (FWriteAccessScope *)&local_58);
  local_40 = &(this->DownloadProgress).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXH_K_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = this;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->DownloadComplete,
             (FWriteAccessScope *)&local_58);
  local_40 = &(this->DownloadComplete).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXHAEBV__TSharedRef_VIDownload_BuildPatchServices___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy,`FDownloadServiceSpec::Define'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = this;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  ::FString::operator=(&this->HttpFileUrl,L"http://download.tests.com/file.dat");
  ::FString::operator=(&this->HttpsFileUrl,L"https://download.tests.com/file.dat");
  ::FString::operator=(&this->NetworkFileUrl,L"\\\\somenetwork\\somefolder\\file.dat");
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FDownloadServiceSpec::Define'::`2'::<lambda_3>,0,0>::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FDownloadServiceSpec::Define'::__l2::<lambda_3>,void>::Call;
  local_10 = (undefined ***)0x0;
  local_20 = this;
  FAutomationSpecBase::BeforeEach
            ((FAutomationSpecBase *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = (undefined ***)0x0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FDownloadServiceSpec::Define'::`2'::<lambda_4>,0,0>::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FDownloadServiceSpec::Define'::__l2::<lambda_4>,void>::Call;
  local_20 = this;
  ::FString::FString((FString *)&local_58,"DownloadService");
  if (local_38[0] != (code *)0x0) {
    pppuVar3 = &local_28;
    if (local_10 != (undefined ***)0x0) {
      pppuVar3 = local_10;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  if ((void *)local_58._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  local_10 = (undefined ***)0x0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FDownloadServiceSpec::Define'::`2'::<lambda_5>,0,0>::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FDownloadServiceSpec::Define'::__l2::<lambda_5>,void>::Call;
  local_20 = this;
  FAutomationSpecBase::AfterEach
            ((FAutomationSpecBase *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// ~FDownloadServiceSpec @ 1432fd2b0

void __thiscall FDownloadServiceSpec::~FDownloadServiceSpec(FDownloadServiceSpec *this)

{
  FScriptContainerElement *pFVar1;
  FMockInstallerAnalytics *pFVar2;
  FMockDownloadServiceStat *pFVar3;
  FMockFileSystem *pFVar4;
  FFakeHttpManager *pFVar5;
  IDownloadService *pIVar6;
  
  pFVar1 = (this->NetworkFileUrl).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HttpsFileUrl).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HttpFileUrl).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TTuple<double,int,TSharedRef<BuildPatchServices::IDownload,1>_>,int>
            ((TTuple<double,int,TSharedRef<BuildPatchServices::IDownload,1>_> *)
             (this->RxDownloadComplete).AllocatorInstance.Data,(this->RxDownloadComplete).ArrayNum);
  pFVar1 = (this->RxDownloadComplete).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RxDownloadProgress).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->DownloadComplete);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->DownloadProgress);
  pFVar2 = (this->MockInstallerAnalytics).Ptr;
  if (pFVar2 != (FMockInstallerAnalytics *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  pFVar3 = (this->MockDownloadServiceStat).Ptr;
  if (pFVar3 != (FMockDownloadServiceStat *)0x0) {
    (**(code **)pFVar3->_padding_)(pFVar3,1);
  }
  pFVar4 = (this->MockFileSystem).Ptr;
  if (pFVar4 != (FMockFileSystem *)0x0) {
    (**(code **)pFVar4->_padding_)(pFVar4,1);
  }
  pFVar5 = (this->FakeHttpModule).Ptr;
  if (pFVar5 != (FFakeHttpManager *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  FTSTicker::~FTSTicker(&this->Ticker);
  pIVar6 = (this->DownloadService).Ptr;
  if (pIVar6 != (IDownloadService *)0x0) {
    (**(code **)*pIVar6)(pIVar6,1);
  }
  FAutomationSpecBase::~FAutomationSpecBase((FAutomationSpecBase *)this);
  return;
}

// operator() @ 143303720

void __thiscall
`FDownloadServiceSpec::Define'::__l2::<lambda_1>::operator()(void *this,int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  
  lVar1 = *(longlong *)this;
  dVar4 = BuildPatchServices::FStatsCollector::GetSeconds();
  iVar2 = *(int *)(lVar1 + 0x220);
  if (iVar2 == *(int *)(lVar1 + 0x224)) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(lVar1 + 0x218),(int *)(lVar1 + 0x224));
  }
  *(int *)(lVar1 + 0x220) = iVar2 + 1;
  lVar3 = (longlong)iVar2;
  lVar1 = *(longlong *)(lVar1 + 0x218);
  *(double *)(lVar1 + lVar3 * 0x10) = dVar4;
  *(int *)(lVar1 + 8 + lVar3 * 0x10) = param_1;
  *(int *)(lVar1 + 0xc + lVar3 * 0x10) = param_2;
  return;
}

// operator() @ 14330ded0

void __thiscall
`FDownloadServiceSpec::Define'::__l2::<lambda_2>::operator()
          (void *this,int param_1,TSharedRef<BuildPatchServices::IDownload,1> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  
  lVar1 = *(longlong *)this;
  dVar5 = BuildPatchServices::FStatsCollector::GetSeconds();
  iVar3 = *(int *)(lVar1 + 0x230);
  if (iVar3 == *(int *)(lVar1 + 0x234)) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)(lVar1 + 0x228),(int *)(lVar1 + 0x234));
  }
  *(int *)(lVar1 + 0x230) = iVar3 + 1;
  lVar1 = *(longlong *)(lVar1 + 0x228);
  lVar4 = (longlong)iVar3 * 0x20;
  *(double *)(lVar4 + lVar1) = dVar5;
  *(int *)(lVar4 + 8 + lVar1) = param_1;
  *(IDownload **)(lVar4 + 0x10 + lVar1) = param_2->Object;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(lVar4 + 0x18 + lVar1) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return;
}

// operator() @ 143310e60

void __thiscall `FDownloadServiceSpec::Define'::__l2::<lambda_3>::operator()(void *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong lVar3;
  longlong lVar4;
  IDownloadService *pIVar5;
  FMockFileSystem *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FMockFileSystem *pFVar9;
  FMockFileSystem *pFVar10;
  IDownloadService *pIVar11;
  TWeakPtr<FTSTicker::FElement,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  FTSTicker::Reset((FTSTicker *)(*(longlong *)this + 0x1a0));
  lVar3 = *(longlong *)this;
  pFVar6 = ::operator_new(0x90);
  pFVar10 = (FMockFileSystem *)0x0;
  pFVar9 = pFVar10;
  if (pFVar6 != (FMockFileSystem *)0x0) {
    lVar4 = *(longlong *)this;
    *(undefined4 *)(pFVar6->ThreadLock).CriticalSection.Opaque1 = 0;
    pFVar6->_padding_ = (longlong)&___7FFakeHttpManager_BuildPatchServices__6B_;
    (pFVar6->ThreadLock).CriticalSection.Opaque2[0] = 0;
    (pFVar6->ThreadLock).CriticalSection.Opaque2[1] = 0;
    (pFVar6->ThreadLock).CriticalSection.Opaque3[0] = (void *)0x0;
    (pFVar6->ThreadLock).CriticalSection.Opaque3[1] = (void *)0x0;
    (pFVar6->ThreadLock).CriticalSection.Opaque3[2] = (void *)0x0;
    (pFVar6->RxCreateFileReader).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->RxCreateFileReader).ArrayNum = 0;
    (pFVar6->RxCreateFileReader).ArrayMax = 0;
    (pFVar6->RxCreateFileWriter).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->RxCreateFileWriter).ArrayNum = 0;
    (pFVar6->RxCreateFileWriter).ArrayMax = 0;
    (pFVar6->RxGetFileSize).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->RxGetFileSize).ArrayNum = 0;
    (pFVar6->RxGetFileSize).ArrayMax = 0x80;
    *(undefined4 *)&(pFVar6->RxSetReadOnly).AllocatorInstance.Data = 0xffffffff;
    *(undefined4 *)((longlong)&(pFVar6->RxSetReadOnly).AllocatorInstance.Data + 4) = 0;
    (pFVar6->RxSetCompressed).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->RxSetCompressed).ArrayNum = 0;
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFFakeHttpManager_BuildPatchServices____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar7[4] = BuildPatchServices::FFakeHttpManager::_vcall__16__flat______;
      puVar7[3] = pFVar6;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    FTSTicker::AddTicker
              ((FTSTicker *)(lVar4 + 0x1a0),&local_78,
               (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_68,0.0);
    if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_78.WeakReferenceCount.ReferenceController,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
    pFVar9 = pFVar6;
  }
  pFVar6 = *(FMockFileSystem **)(lVar3 + 0x1c8);
  if ((pFVar6 != pFVar9) &&
     (*(FMockFileSystem **)(lVar3 + 0x1c8) = pFVar9, pFVar6 != (FMockFileSystem *)0x0)) {
    (**(code **)pFVar6->_padding_)();
  }
  lVar3 = *(longlong *)this;
  pFVar6 = ::operator_new(0x160);
  pFVar9 = pFVar10;
  if (pFVar6 != (FMockFileSystem *)0x0) {
    memset(pFVar6,0,0x160);
    pFVar9 = BuildPatchServices::FMockFileSystem::FMockFileSystem(pFVar6);
  }
  pFVar6 = *(FMockFileSystem **)(lVar3 + 0x1d0);
  if ((pFVar6 != pFVar9) &&
     (*(FMockFileSystem **)(lVar3 + 0x1d0) = pFVar9, pFVar6 != (FMockFileSystem *)0x0)) {
    (**(code **)pFVar6->_padding_)(pFVar6,1);
  }
  lVar3 = *(longlong *)this;
  pFVar6 = ::operator_new(0x38);
  pFVar9 = pFVar10;
  if (pFVar6 != (FMockFileSystem *)0x0) {
    (pFVar6->ThreadLock).CriticalSection.Opaque1[0] = (void *)0x0;
    pFVar6->_padding_ = (longlong)&___7FMockDownloadServiceStat_BuildPatchServices__6B_;
    (pFVar6->ThreadLock).CriticalSection.Opaque2[0] = 0;
    (pFVar6->ThreadLock).CriticalSection.Opaque2[1] = 0;
    (pFVar6->ThreadLock).CriticalSection.Opaque3[0] = (void *)0x0;
    (pFVar6->ThreadLock).CriticalSection.Opaque3[1] = (void *)0x0;
    (pFVar6->ThreadLock).CriticalSection.Opaque3[2] = (void *)0x0;
    (pFVar6->RxCreateFileReader).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar9 = pFVar6;
  }
  pFVar6 = *(FMockFileSystem **)(lVar3 + 0x1d8);
  if ((pFVar6 != pFVar9) &&
     (*(FMockFileSystem **)(lVar3 + 0x1d8) = pFVar9, pFVar6 != (FMockFileSystem *)0x0)) {
    (**(code **)pFVar6->_padding_)(pFVar6,1);
  }
  lVar3 = *(longlong *)this;
  pFVar9 = ::operator_new(0x70);
  if (pFVar9 != (FMockFileSystem *)0x0) {
    (pFVar9->RxGetFileSize).ArrayNum = 0;
    (pFVar9->RxGetFileSize).ArrayMax = 0;
    pFVar9->_padding_ = (longlong)&___7FMockInstallerAnalytics_BuildPatchServices__6B_;
    (pFVar9->ThreadLock).CriticalSection.Opaque1[0] = (void *)0x0;
    (pFVar9->ThreadLock).CriticalSection.Opaque2[0] = 0;
    (pFVar9->ThreadLock).CriticalSection.Opaque2[1] = 0;
    (pFVar9->ThreadLock).CriticalSection.Opaque3[0] = (void *)0x0;
    (pFVar9->ThreadLock).CriticalSection.Opaque3[1] = (void *)0x0;
    (pFVar9->ThreadLock).CriticalSection.Opaque3[2] = (void *)0x0;
    (pFVar9->RxCreateFileReader).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar9->RxCreateFileReader).ArrayNum = 0;
    (pFVar9->RxCreateFileReader).ArrayMax = 0;
    (pFVar9->RxCreateFileWriter).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar9->RxCreateFileWriter).ArrayNum = 0;
    (pFVar9->RxCreateFileWriter).ArrayMax = 0;
    (pFVar9->RxGetAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar9->RxGetAttributes).ArrayNum = 0;
    (pFVar9->RxGetAttributes).ArrayMax = 0;
    (pFVar9->RxGetFileSize).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar10 = pFVar9;
  }
  pFVar9 = *(FMockFileSystem **)(lVar3 + 0x1e0);
  if ((pFVar9 != pFVar10) &&
     (*(FMockFileSystem **)(lVar3 + 0x1e0) = pFVar10, pFVar9 != (FMockFileSystem *)0x0)) {
    (**(code **)pFVar9->_padding_)(pFVar9,1);
  }
  lVar3 = *(longlong *)this;
  pIVar11 = BuildPatchServices::FDownloadServiceFactory::Create
                      (*(IHttpManager **)(lVar3 + 0x1c8),*(IFileSystem **)(lVar3 + 0x1d0),
                       *(IDownloadServiceStat **)(lVar3 + 0x1d8),
                       *(IInstallerAnalytics **)(lVar3 + 0x1e0));
  pIVar5 = *(IDownloadService **)(lVar3 + 0x198);
  if ((pIVar5 != pIVar11) &&
     (*(IDownloadService **)(lVar3 + 0x198) = pIVar11, pIVar5 != (IDownloadService *)0x0)) {
    (**(code **)*pIVar5)(pIVar5,1);
  }
  return;
}

// operator() @ 143312080

void __thiscall `FDownloadServiceSpec::Define'::__l2::<lambda_4>::operator()(void *this)

{
  FAutomationSpecBase *pFVar1;
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  FAutomationSpecBase *local_20;
  undefined8 local_10;
  
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FDownloadServiceSpec::Define'::`2'::<lambda_4>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FDownloadServiceSpec::Define'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"RequestFile");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FDownloadServiceSpec::Define'::`2'::<lambda_4>::operator()'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FDownloadServiceSpec::Define'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"RequestCancel");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``FDownloadServiceSpec::Define'::`2'::<lambda_4>::operator()'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``FDownloadServiceSpec::Define'::__l2::<lambda_4>::operator()'::__l2::<lambda_3>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"Destructor");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 143312420

void __thiscall `FDownloadServiceSpec::Define'::__l2::<lambda_5>::operator()(void *this)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  TTuple<double,int,TSharedRef<BuildPatchServices::IDownload,1>_> *pTVar4;
  
  puVar2 = *(undefined8 **)(*(longlong *)this + 0x198);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x198) = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  lVar3 = *(longlong *)this;
  *(undefined4 *)(lVar3 + 0x220) = 0;
  if (*(int *)(lVar3 + 0x224) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)(lVar3 + 0x218),0,(int *)(lVar3 + 0x224));
  }
  lVar3 = *(longlong *)this;
  piVar1 = (int *)(lVar3 + 0x234);
  pTVar4 = (TTuple<double,int,TSharedRef<BuildPatchServices::IDownload,1>_> *)
           ((ForAnyElementType *)(lVar3 + 0x228))->Data;
  if (*piVar1 < 0) {
    DestructItems<TTuple<double,int,TSharedRef<BuildPatchServices::IDownload,1>_>,int>
              (pTVar4,*(int *)(lVar3 + 0x230));
    *(undefined4 *)(lVar3 + 0x230) = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)(lVar3 + 0x228),0,piVar1);
    }
  }
  else {
    DestructItems<TTuple<double,int,TSharedRef<BuildPatchServices::IDownload,1>_>,int>
              (pTVar4,*(int *)(lVar3 + 0x230));
    *(undefined4 *)(lVar3 + 0x230) = 0;
  }
  puVar2 = *(undefined8 **)(*(longlong *)this + 0x1c8);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x1c8) = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(*(longlong *)this + 0x1d0);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x1d0) = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(*(longlong *)this + 0x1d8);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x1d8) = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(*(longlong *)this + 0x1e0);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(*(longlong *)this + 0x1e0) = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  return;
}

// DoTick @ 14331e860

void __thiscall FDownloadServiceSpec::DoTick(FDownloadServiceSpec *this)

{
  FTSTicker::Tick(&this->Ticker,__real_3dcccccd);
  return;
}

// DoTicksUntilComplete @ 14331e880

void __thiscall
FDownloadServiceSpec::DoTicksUntilComplete
          (FDownloadServiceSpec *this,int param_1,int param_2,float param_3)

{
  float fVar1;
  
  fVar1 = __real_3dcccccd;
  while ((0 < param_1 && ((this->RxDownloadComplete).ArrayNum < param_2))) {
    FTSTicker::Tick(&this->Ticker,fVar1);
    param_1 = param_1 + -1;
    FWindowsPlatformProcess::Sleep(param_3);
  }
  return;
}

// DoTicksUntilCreated @ 14331e900

void __thiscall
FDownloadServiceSpec::DoTicksUntilCreated
          (FDownloadServiceSpec *this,int param_1,int param_2,float param_3)

{
  FMockFileSystem *pFVar1;
  float fVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&((this->MockFileSystem).Ptr)->ThreadLock);
  fVar2 = __real_3dcccccd;
  while ((0 < param_1 &&
         (pFVar1 = (this->MockFileSystem).Ptr,
         (int)((this->FakeHttpModule).Ptr)->_padding_ + (pFVar1->RxCreateFileReader).ArrayNum <
         param_2))) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&pFVar1->ThreadLock);
    FTSTicker::Tick(&this->Ticker,fVar2);
    param_1 = param_1 + -1;
    FWindowsPlatformProcess::Sleep(param_3);
    EnterCriticalSection((LPCRITICAL_SECTION)&((this->MockFileSystem).Ptr)->ThreadLock);
  }
                    /* WARNING: Could not recover jumptable at 0x00014331e9b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&((this->MockFileSystem).Ptr)->ThreadLock);
  return;
}

