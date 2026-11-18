// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PreLoadScreen
// Functions: 14

// FBuildPatchServicesPreLoadManagerBase @ 145abf3c0

FBuildPatchServicesPreLoadManagerBase * __thiscall
FBuildPatchServicesPreLoadManagerBase::FBuildPatchServicesPreLoadManagerBase
          (FBuildPatchServicesPreLoadManagerBase *this)

{
  *(undefined8 *)&(this->OnBuildPatchCompletedDelegate).field_0x18 = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FBuildPatchServicesPreLoadManagerBase__6B_;
  this->_padding_ = 0;
  *(undefined8 *)&this->OnBuildPatchCompletedDelegate = 0;
  *(undefined8 *)&(this->OnBuildPatchCompletedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnBuildPatchCompletedDelegate).field_0x10 = 0;
  this->bPatchingStarted = false;
  this->bPatchingFinished = false;
  (this->ContentBuildInstaller).Object = (IBuildInstaller *)0x0;
  (this->ContentBuildInstaller).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FBuildPatchServicesPreLoadManagerBase @ 145abfaa0

void __thiscall
FBuildPatchServicesPreLoadManagerBase::~FBuildPatchServicesPreLoadManagerBase
          (FBuildPatchServicesPreLoadManagerBase *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FBuildPatchServicesPreLoadManagerBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ContentBuildInstaller).SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBuildPatchCompletedDelegate).field_0x8,
             *(int *)&(this->OnBuildPatchCompletedDelegate).field_0x10);
  pvVar3 = *(void **)&(this->OnBuildPatchCompletedDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBuildPatchCompletedDelegate);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}

// CancelBuildPatchInstall @ 145ac4430

void __thiscall
FBuildPatchServicesPreLoadManagerBase::CancelBuildPatchInstall
          (FBuildPatchServicesPreLoadManagerBase *this)

{
  IBuildInstaller *pIVar1;
  
  pIVar1 = (this->ContentBuildInstaller).Object;
  if (pIVar1 != (IBuildInstaller *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145ac443c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0xb8))();
    return;
  }
  return;
}

// GetDownloadProgress @ 145ac9810

long64 __thiscall
FBuildPatchServicesPreLoadManagerBase::GetDownloadProgress
          (FBuildPatchServicesPreLoadManagerBase *this)

{
  IBuildInstaller *pIVar1;
  long64 lVar2;
  
  pIVar1 = (this->ContentBuildInstaller).Object;
  if (pIVar1 != (IBuildInstaller *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145ac981c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (**(code **)((longlong)*pIVar1 + 0x78))();
    return lVar2;
  }
  return 0;
}

// GetDownloadSize @ 145ac9830

long64 __thiscall
FBuildPatchServicesPreLoadManagerBase::GetDownloadSize(FBuildPatchServicesPreLoadManagerBase *this)

{
  IBuildInstaller *pIVar1;
  long64 lVar2;
  
  pIVar1 = (this->ContentBuildInstaller).Object;
  if (pIVar1 != (IBuildInstaller *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145ac983c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (**(code **)((longlong)*pIVar1 + 0x70))();
    return lVar2;
  }
  return 0;
}

// GetStatusText @ 145ac9eb0

FText * __thiscall
FBuildPatchServicesPreLoadManagerBase::GetStatusText(FBuildPatchServicesPreLoadManagerBase *this)

{
  IBuildInstaller *pIVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&Queued,L"PreLoadManager.BuildPatchServices",L"StatusText.Queued",L"Queued");
    atexit(`FBuildPatchServicesPreLoadManagerBase::GetStatusText'::__l2::
           _dynamic_atexit_destructor_for__Queued__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar3 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&Initializing,L"PreLoadManager.BuildPatchServices",L"StatusText.Initializing",
               L"Initializing");
    atexit(`FBuildPatchServicesPreLoadManagerBase::GetStatusText'::__l2::
           _dynamic_atexit_destructor_for__Initializing__);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar3 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&Resuming,L"PreLoadManager.BuildPatchServices",L"StatusText.Resuming",L"Resuming");
    atexit(`FBuildPatchServicesPreLoadManagerBase::GetStatusText'::__l2::
           _dynamic_atexit_destructor_for__Resuming__);
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar3 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&Downloading,L"PreLoadManager.BuildPatchServices",L"StatusText.Downloading",
               L"Downloading");
    atexit(`FBuildPatchServicesPreLoadManagerBase::GetStatusText'::__l2::
           _dynamic_atexit_destructor_for__Downloading__);
    _Init_thread_footer(&::_TSS3);
  }
  if ((*piVar3 < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&Installing,L"PreLoadManager.BuildPatchServices",L"StatusText.Installing",
               L"Installing");
    atexit(`FBuildPatchServicesPreLoadManagerBase::GetStatusText'::__l2::
           _dynamic_atexit_destructor_for__Installing__);
    _Init_thread_footer(&::_TSS4);
  }
  if ((*piVar3 < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&BuildVerification,L"PreLoadManager.BuildPatchServices",
               L"StatusText.BuildVerification",L"Verifying");
    atexit(`FBuildPatchServicesPreLoadManagerBase::GetStatusText'::__l2::
           _dynamic_atexit_destructor_for__BuildVerification__);
    _Init_thread_footer(&::_TSS5);
  }
  if ((*piVar3 < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&::CleanUp,L"PreLoadManager.BuildPatchServices",L"StatusText.CleanUp",L"Cleaning up")
    ;
    atexit(`FBuildPatchServicesPreLoadManagerBase::GetStatusText'::__l2::
           _dynamic_atexit_destructor_for__CleanUp__);
    _Init_thread_footer(&::_TSS6);
  }
  if ((*piVar3 < ::_TSS7) && (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&PrerequisitesInstall,L"PreLoadManager.BuildPatchServices",
               L"StatusText.PrerequisitesInstall",L"Prerequisites");
    atexit(`FBuildPatchServicesPreLoadManagerBase::GetStatusText'::__l2::
           _dynamic_atexit_destructor_for__PrerequisitesInstall__);
    _Init_thread_footer(&::_TSS7);
  }
  if ((*piVar3 < ::_TSS8) && (_Init_thread_header(&::_TSS8), ::_TSS8 == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&Completed,L"PreLoadManager.BuildPatchServices",L"StatusText.Complete",L"Complete");
    atexit(`FBuildPatchServicesPreLoadManagerBase::GetStatusText'::__l2::
           _dynamic_atexit_destructor_for__Completed__);
    _Init_thread_footer(&::_TSS8);
  }
  if ((*piVar3 < ::_TSS9) && (_Init_thread_header(&::_TSS9), ::_TSS9 == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&Paused,L"PreLoadManager.BuildPatchServices",L"StatusText.Paused",L"Paused");
    atexit(`FBuildPatchServicesPreLoadManagerBase::GetStatusText'::__l2::
           _dynamic_atexit_destructor_for__Paused__);
    _Init_thread_footer(&::_TSS9);
  }
  pIVar1 = (this->ContentBuildInstaller).Object;
  if (pIVar1 != (IBuildInstaller *)0x0) {
    uVar2 = (**(code **)((longlong)*pIVar1 + 0x80))();
    switch(uVar2) {
    case 0:
      return &Queued;
    case 2:
      return &Resuming;
    case 3:
      return &Downloading;
    case 4:
    case 5:
    case 6:
      return &Installing;
    case 7:
      return &BuildVerification;
    case 8:
      return &::CleanUp;
    case 9:
      return &PrerequisitesInstall;
    case 10:
      return &Completed;
    case 0xb:
      return &Paused;
    }
  }
  return &Initializing;
}

// Init @ 145acb520

void __thiscall
FBuildPatchServicesPreLoadManagerBase::Init(FBuildPatchServicesPreLoadManagerBase *this)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this_00;
  IModuleInterface *pIVar3;
  FName local_res8;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->bPatchingStarted = false;
  this->bPatchingFinished = false;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ContentBuildInstaller != (TSharedPtr<IBuildInstaller,1> *)&local_18) {
    (this->ContentBuildInstaller).Object = (IBuildInstaller *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ContentBuildInstaller).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  pFVar2 = ::FName::FName(&local_res8,L"BuildPatchServices");
  FVar1 = *pFVar2;
  this_00 = FModuleManager::Get();
  pIVar3 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  this->BuildPatchServicesModule = (IBuildPatchServicesModule *)pIVar3;
  return;
}

// IsActive @ 145acc7a0

bool __thiscall
FBuildPatchServicesPreLoadManagerBase::IsActive(FBuildPatchServicesPreLoadManagerBase *this)

{
  IBuildInstaller *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  pIVar1 = (this->ContentBuildInstaller).Object;
  if (pIVar1 != (IBuildInstaller *)0x0) {
    cVar3 = (**(code **)((longlong)*pIVar1 + 0x10))();
    if (cVar3 == '\0') {
      if ((this->ContentBuildInstaller).Object == (IBuildInstaller *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      cVar3 = (**(code **)((longlong)*(this->ContentBuildInstaller).Object + 0x40))();
      if (cVar3 == '\0') {
        if ((this->ContentBuildInstaller).Object == (IBuildInstaller *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
        }
        uVar6 = (**(code **)((longlong)*(this->ContentBuildInstaller).Object + 0x80))();
        if (2 < uVar6) {
          return true;
        }
      }
    }
  }
  return false;
}

// IsDone @ 145acc860

bool __thiscall
FBuildPatchServicesPreLoadManagerBase::IsDone(FBuildPatchServicesPreLoadManagerBase *this)

{
  return this->bPatchingFinished;
}

// OnContentBuildInstallerComplete @ 145accbd0

void __thiscall
FBuildPatchServicesPreLoadManagerBase::OnContentBuildInstallerComplete
          (FBuildPatchServicesPreLoadManagerBase *this,TSharedRef<IBuildInstaller,1> *param_1)

{
  bool bVar1;
  
  this->bPatchingFinished = true;
  bVar1 = (bool)(**(code **)((longlong)*param_1->Object + 0x38))();
  TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnBuildPatchCompletedDelegate,bVar1);
  return;
}

// PauseBuildPatchInstall @ 145acedd0

void __thiscall
FBuildPatchServicesPreLoadManagerBase::PauseBuildPatchInstall
          (FBuildPatchServicesPreLoadManagerBase *this)

{
  IBuildInstaller *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  
  pIVar1 = (this->ContentBuildInstaller).Object;
  if (pIVar1 != (IBuildInstaller *)0x0) {
    cVar3 = (**(code **)((longlong)*pIVar1 + 0x20))();
    if (cVar3 == '\0') {
      if ((this->ContentBuildInstaller).Object == (IBuildInstaller *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000145acee25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*(this->ContentBuildInstaller).Object + 0xc0))();
      return;
    }
  }
  return;
}

// ResumeBuildPatchInstall @ 145acff40

void __thiscall
FBuildPatchServicesPreLoadManagerBase::ResumeBuildPatchInstall
          (FBuildPatchServicesPreLoadManagerBase *this)

{
  IBuildInstaller *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  
  pIVar1 = (this->ContentBuildInstaller).Object;
  if (pIVar1 != (IBuildInstaller *)0x0) {
    cVar3 = (**(code **)((longlong)*pIVar1 + 0x20))();
    if (cVar3 != '\0') {
      if ((this->ContentBuildInstaller).Object == (IBuildInstaller *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000145acff95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*(this->ContentBuildInstaller).Object + 0xc0))();
      return;
    }
  }
  return;
}

// StartBuildPatchServices @ 145ad04e0

void __thiscall
FBuildPatchServicesPreLoadManagerBase::StartBuildPatchServices
          (FBuildPatchServicesPreLoadManagerBase *this,FBuildInstallerConfiguration *param_1)

{
  IBuildPatchServicesModule *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FBuildInstallerConfiguration *pFVar6;
  TSharedPtr<IBuildInstaller,1> *pTVar7;
  undefined1 local_res8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_178;
  FDelegateAllocation local_170;
  code *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  IBuildInstaller *local_148;
  FSharedReferencer<1> local_140;
  undefined8 local_138;
  ForElementType<TAlignedBytes<16,16>_> local_130;
  int local_128;
  FDestructionSentinel local_120;
  FDestructionSentinel local_108;
  FDestructionSentinel local_f0;
  FDelegateAllocation *local_d8;
  FBuildInstallerConfiguration local_d0;
  
  this->bPatchingStarted = true;
  if (this->BuildPatchServicesModule == (IBuildPatchServicesModule *)0x0) {
    local_res8[0] = 0;
    bVar3 = `FBuildPatchServicesPreLoadManagerBase::StartBuildPatchServices'::__l3::<lambda_1>::
            operator()(local_res8);
    if (!bVar3) {
      this->bPatchingFinished = true;
      TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnBuildPatchCompletedDelegate,false);
      goto LAB_145ad0797;
    }
  }
  local_158 = _vcall__24__flat______;
  uStack_150 = 0;
  local_178.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_170.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_170.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_178,(FWriteAccessScope *)&local_f0);
  local_d8 = &local_170;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_170);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VIBuildInstaller___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    puVar4[4] = local_158;
    puVar4[5] = CONCAT44(uStack_14c,uStack_150);
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFBuildPatchServicesPreLoadManagerBase____A6AXAEBV__TSharedRef_VIBuildInstaller___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = this;
    if (puVar4[4] == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if (local_f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
  }
  pIVar1 = this->BuildPatchServicesModule;
  local_138 = 0;
  local_130 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_178,(FWriteAccessScope *)&local_120);
  if (local_130 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_130);
  }
  local_130 = local_170.DelegateAllocator;
  local_128 = local_170.DelegateSize;
  local_170.DelegateSize = 0;
  local_170.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  if (local_120.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_120.Accessor,&local_120);
  }
  pFVar6 = BuildPatchServices::FBuildInstallerConfiguration::FBuildInstallerConfiguration
                     (&local_d0,param_1);
  puVar4 = (undefined8 *)(*pcVar2)(pIVar1,&local_158,pFVar6,&local_138);
  local_140.ReferenceController = (TReferenceControllerBase<1> *)puVar4[1];
  local_148 = (IBuildInstaller *)*puVar4;
  if (local_140.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_140.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_140.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = &this->ContentBuildInstaller;
  if (pTVar7 != (TSharedPtr<IBuildInstaller,1> *)&local_148) {
    pTVar7->Object = local_148;
    local_148 = (IBuildInstaller *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ContentBuildInstaller).SharedReferenceCount,&local_140);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_140.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(uStack_14c,uStack_150));
  if (pTVar7->Object == (IBuildInstaller *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)((longlong)*pTVar7->Object + 8))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_178,(FWriteAccessScope *)&local_108);
  if ((local_170.DelegateSize != 0) &&
     (local_170.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_170.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_170,0,0,0x10);
    local_170.DelegateSize = 0;
  }
  if (local_108.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
  }
  if (local_170.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_170.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_178.AccessDetector);
LAB_145ad0797:
  BuildPatchServices::FBuildInstallerConfiguration::~FBuildInstallerConfiguration(param_1);
  return;
}

// operator() @ 1504d7570

bool __thiscall
`FBuildPatchServicesPreLoadManagerBase::StartBuildPatchServices'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<7694494461232939040>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7694494461232939040>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

