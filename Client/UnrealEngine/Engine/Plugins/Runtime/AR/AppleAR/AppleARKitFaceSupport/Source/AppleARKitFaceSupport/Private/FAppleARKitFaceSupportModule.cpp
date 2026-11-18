// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitFaceSupport
// Functions: 4

// StartupModule @ 14d280b50

void __thiscall FAppleARKitFaceSupportModule::StartupModule(FAppleARKitFaceSupportModule *this)

{
  int *piVar1;
  TSharedPtr<FAppleARKitFaceSupport,1> *pTVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  FModuleManager *this_00;
  FName *pFVar7;
  IModuleInterface *pIVar8;
  TReferenceControllerBase<1> *pTVar9;
  FString *pFVar10;
  IModularFeatures *pIVar11;
  TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
  *this_01;
  wchar_t *pwVar12;
  FAppleARKitFaceSupport *pFVar13;
  longlong *plVar14;
  undefined1 local_res8 [8];
  FName local_res10;
  FName local_res18 [2];
  FAppleARKitFaceSupport *local_58;
  FSharedReferencer<1> local_50;
  FString local_48;
  
  this_00 = FModuleManager::Get();
  pFVar7 = ::FName::FName(&local_res10,"AppleARKit");
  pIVar8 = FModuleManager::LoadModule(this_00,*pFVar7,None);
  if (pIVar8 == (IModuleInterface *)0x0) {
    local_res8[0] = 0;
    `FAppleARKitFaceSupportModule::StartupModule'::__l2::<lambda_1>::operator()(local_res8);
  }
  pTVar9 = ::operator_new(0x100);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    pFVar13 = (FAppleARKitFaceSupport *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAppleARKitFaceSupport___00_SharedPointerInternals__6B_
    ;
    pTVar9[1]._padding_ = (longlong)&___7IAppleARKitFaceSupport__6B_;
    FSelfRegisteringExec::FSelfRegisteringExec
              ((FSelfRegisteringExec *)&pTVar9[1].SharedReferenceCount);
    pTVar9[1]._padding_ = (longlong)&FAppleARKitFaceSupport::_vftable__for__IAppleARKitFaceSupport__
    ;
    pTVar9[2]._padding_ = 0;
    *(undefined ***)&pTVar9[1].SharedReferenceCount =
         &FAppleARKitFaceSupport::_vftable__for__FSelfRegisteringExec__;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[4]._padding_ = 0;
    pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[5]._padding_ = 0;
    pTVar9[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[6]._padding_ = 0;
    pTVar9[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[7]._padding_ = 0;
    pTVar9[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[8]._padding_ = 0;
    pTVar9[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[9]._padding_ = 0;
    pTVar9[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[10].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar9[0xb]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar9[0xb]._padding_ + 4) = 0x80;
    pTVar9[0xb].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar9[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[0xc].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar9[0xd]._padding_ = 0;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)&pTVar9[0xd].SharedReferenceCount,4000);
    *(undefined1 *)&pTVar9[3]._padding_ = 0;
    pFVar10 = FGenericPlatformMisc::GetDeviceId(&local_48);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    pFVar7 = ::FName::FName(local_res18,pwVar12);
    uVar5 = pFVar7->Number;
    pTVar9[4].SharedReferenceCount = (atomic<int>)(pFVar7->ComparisonIndex).Value;
    pTVar9[4].WeakReferenceCount = (atomic<int>)uVar5;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pFVar13 = (FAppleARKitFaceSupport *)(pTVar9 + 1);
    if (pFVar13 == (FAppleARKitFaceSupport *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_14d280d6d;
    }
  }
  if (((pFVar13->_padding_ == 0) || (pFVar13->_padding_ == 0)) ||
     (*(int *)(pFVar13->_padding_ + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar13->_padding_ = (longlong)pFVar13;
    if (pTVar9 != (TReferenceControllerBase<1> *)pFVar13->_padding_) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar14 = (longlong *)pFVar13->_padding_;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
      pFVar13->_padding_ = (longlong)pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_14d280d6d:
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->FaceSupportInstance;
  local_58 = pFVar13;
  local_50.ReferenceController = pTVar9;
  if (pTVar2 != (TSharedPtr<FAppleARKitFaceSupport,1> *)&local_58) {
    pTVar2->Object = pFVar13;
    local_58 = (FAppleARKitFaceSupport *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->FaceSupportInstance).SharedReferenceCount,&local_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (pTVar2->Object == (FAppleARKitFaceSupport *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar13 = pTVar2->Object;
  pIVar11 = IModularFeatures::Get();
  plVar14 = &pFVar13->_padding_;
  if (pFVar13 == (FAppleARKitFaceSupport *)0x0) {
    plVar14 = (longlong *)0x0;
  }
  pcVar4 = *(code **)((longlong)*pIVar11 + 0x28);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"AppleARKitFaceSupport");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar4)(pIVar11,`public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'
                    ::__l2::FeatureName,plVar14);
  pIVar11 = IModularFeatures::Get();
  this_01 = (TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
             *)(**(code **)((longlong)*pIVar11 + 0x38))(pIVar11);
  TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
  ::AddRaw<FAppleARKitFaceSupportModule>
            (this_01,(FAppleARKitFaceSupportModule *)(local_res18 + 1),(pmf_e6cbe6a2)this);
  return;
}

// ShutdownModule @ 14d280eb0

void __thiscall FAppleARKitFaceSupportModule::ShutdownModule(FAppleARKitFaceSupportModule *this)

{
  FAppleARKitFaceSupport *pFVar1;
  IARKitBlendShapePublisher *pIVar2;
  code *pcVar3;
  bool bVar4;
  IModularFeatures *pIVar5;
  TSharedPtr<FAppleARKitFaceSupport,1> *pTVar6;
  longlong *plVar7;
  undefined8 local_58;
  FSharedReferencer<1> FStack_50;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  
  local_58 = 0;
  FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->LiveLinkSource != (TSharedPtr<ILiveLinkSourceARKit,1> *)&local_58) {
    (this->LiveLinkSource).Object = (ILiveLinkSourceARKit *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LiveLinkSource).SharedReferenceCount,&FStack_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_50.ReferenceController);
  pTVar6 = &this->FaceSupportInstance;
  if (pTVar6->Object == (FAppleARKitFaceSupport *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = pTVar6->Object;
  pIVar2 = (pFVar1->RemoteLiveLinkPublisher).Object;
  if (pIVar2 != (IARKitBlendShapePublisher *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  local_48 = 0;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&pFVar1->RemoteLiveLinkPublisher != (TSharedPtr<IARKitBlendShapePublisher,1> *)&local_48) {
    (pFVar1->RemoteLiveLinkPublisher).Object = (IARKitBlendShapePublisher *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar1->RemoteLiveLinkPublisher).SharedReferenceCount,&FStack_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  pIVar2 = (pFVar1->LiveLinkFileWriter).Object;
  if (pIVar2 != (IARKitBlendShapePublisher *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&pFVar1->LiveLinkFileWriter != (TSharedPtr<IARKitBlendShapePublisher,1> *)&local_38) {
    (pFVar1->LiveLinkFileWriter).Object = (IARKitBlendShapePublisher *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar1->LiveLinkFileWriter).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  pIVar5 = IModularFeatures::Get();
  plVar7 = &pFVar1->_padding_;
  if (pFVar1 == (FAppleARKitFaceSupport *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  pcVar3 = *(code **)((longlong)*pIVar5 + 0x30);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"AppleARKitFaceSupport");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar3)(pIVar5,`public:_static_class_FName___cdecl_IAppleARKitFaceSupport::GetModularFeatureName(void)'
                   ::__l2::FeatureName,plVar7);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 != (TSharedPtr<FAppleARKitFaceSupport,1> *)&local_28) {
    pTVar6->Object = (FAppleARKitFaceSupport *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->FaceSupportInstance).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  return;
}

// OnModularFeatureAvailable @ 14d2889d0

void __thiscall
FAppleARKitFaceSupportModule::OnModularFeatureAvailable
          (FAppleARKitFaceSupportModule *this,FName *param_1,IModularFeature *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  wchar_t *pwVar6;
  IModularFeatures *pIVar7;
  longlong lVar8;
  FSharedReferencer<1> FVar9;
  FAppleARKitLiveLinkSource *this_00;
  FAppleARKitLiveLinkSource *pFVar10;
  FAppleARKitLiveLinkSource *pFVar11;
  bool local_res10 [8];
  atomic<int> local_res20 [2];
  FAppleARKitLiveLinkSource *local_78;
  FSharedReferencer<1> FStack_70;
  undefined8 local_68;
  FSharedReferencer<1> FStack_60;
  longlong *local_58;
  FAppleARKitLiveLinkSource *local_50;
  undefined1 local_48 [16];
  
  if (*param_1 != ILiveLinkClient::ModularFeatureName) {
    return;
  }
  this_00 = (FAppleARKitLiveLinkSource *)0x0;
  local_68 = 0;
  FStack_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->LiveLinkSource != (TSharedPtr<ILiveLinkSourceARKit,1> *)&local_68) {
    (this->LiveLinkSource).Object = (ILiveLinkSourceARKit *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LiveLinkSource).SharedReferenceCount,&FStack_60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_60.ReferenceController);
  local_res10[0] = false;
  local_res20[0] = (atomic<int>)0x2b67;
  FConfigCacheIni::GetBool
            (GConfig,L"/Script/AppleARKit.AppleARKitSettings",L"bEnableLiveLinkForFaceTracking",
             local_res10,&GEngineIni);
  FConfigCacheIni::GetInt
            (GConfig,L"/Script/AppleARKit.AppleARKitSettings",L"LiveLinkPublishingPort",
             (int *)local_res20,&GEngineIni);
  if (local_res10[0] == false) {
    pwVar6 = FCommandLine::Get();
    bVar4 = FParse::Param(pwVar6,L"EnableLiveLinkFaceTracking");
    if (!bVar4) {
      return;
    }
  }
  pIVar7 = IModularFeatures::Get();
  iVar5 = (**(code **)((longlong)*pIVar7 + 0x18))(pIVar7,ILiveLinkClient::ModularFeatureName);
  if (iVar5 < 1) {
    local_78 = (FAppleARKitLiveLinkSource *)0x0;
    FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FVar9.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    goto LAB_14d288d2b;
  }
  pIVar7 = IModularFeatures::Get();
  lVar8 = (**(code **)((longlong)*pIVar7 + 0x20))(pIVar7,ILiveLinkClient::ModularFeatureName,0);
  pFVar10 = (FAppleARKitLiveLinkSource *)(lVar8 + -8);
  if (lVar8 == 0) {
    pFVar10 = this_00;
  }
  FVar9.ReferenceController = ::operator_new(0xb0);
  if ((FAppleARKitLiveLinkSource *)FVar9.ReferenceController == (FAppleARKitLiveLinkSource *)0x0) {
    pFVar11 = (FAppleARKitLiveLinkSource *)&DAT_00000010;
LAB_14d288bfd:
    FVar9.ReferenceController = (TReferenceControllerBase<1> *)this_00;
    if ((((ILiveLinkClient *)pFVar11->_padding_ == (ILiveLinkClient *)0x0) ||
        (*(longlong *)&pFVar11->_padding_ == 0)) ||
       (*(int *)(*(longlong *)&pFVar11->_padding_ + 8) < 1)) {
      if (this_00 != (FAppleARKitLiveLinkSource *)0x0) {
        LOCK();
        *(atomic<int> *)&this_00->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&this_00->_padding_ + 1);
        UNLOCK();
      }
      pFVar11->_padding_ = (longlong)pFVar11;
      if (this_00 != (FAppleARKitLiveLinkSource *)pFVar11->_padding_) {
        if (this_00 != (FAppleARKitLiveLinkSource *)0x0) {
          LOCK();
          ((atomic<int> *)&this_00->_padding_)[1] =
               (atomic<int>)((int)((atomic<int> *)&this_00->_padding_)[1] + 1);
          UNLOCK();
        }
        plVar2 = (longlong *)pFVar11->_padding_;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar2 + 8))();
          }
        }
        pFVar11->_padding_ = (longlong)this_00;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)this_00);
    }
  }
  else {
    *(atomic<int> *)&((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->_padding_ =
         (atomic<int>)0x1;
    ((atomic<int> *)&((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->_padding_)[1] =
         (atomic<int>)0x1;
    pFVar11 = (FAppleARKitLiveLinkSource *)
              &((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->_padding_;
    ((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAppleARKitLiveLinkSource___00_SharedPointerInternals__6B_
    ;
    ((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->_padding_ =
         (longlong)&FAppleARKitLiveLinkSource::_vftable__for__IARKitBlendShapePublisher__;
    ((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->_padding_ =
         (longlong)&FAppleARKitLiveLinkSource::_vftable__for__ILiveLinkSource__;
    ((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->Client = (ILiveLinkClient *)0x0;
    (((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->SourceGuid).A = 0;
    (((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->SourceGuid).B = 0;
    ((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->LastFramePublished = 0;
    ((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->_padding_ = 0;
    *(undefined8 *)
     &(((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->BlendShapePerDeviceMap).field_0x0 =
         0;
    *(undefined8 *)
     &(((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->BlendShapePerDeviceMap).field_0x10
         = 0;
    *(undefined8 *)
     &(((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->BlendShapePerDeviceMap).field_0x18
         = 0;
    *(undefined8 *)
     &(((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->BlendShapePerDeviceMap).field_0x30
         = 0;
    (((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->SourceGuid).C = 0;
    (((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->SourceGuid).D = 0;
    *(undefined4 *)
     &(((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->BlendShapePerDeviceMap).field_0x8 =
         0;
    *(undefined4 *)
     &(((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->BlendShapePerDeviceMap).field_0x38
         = 0;
    *(undefined4 *)
     &(((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->BlendShapePerDeviceMap).field_0x3c
         = 0x80;
    *(undefined4 *)
     &(((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->BlendShapePerDeviceMap).field_0x40
         = 0xffffffff;
    *(undefined4 *)
     &(((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->BlendShapePerDeviceMap).field_0x44
         = 0;
    (((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->RemoteListener).Ptr =
         (FAppleARKitLiveLinkRemoteListener *)0x0;
    (((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->ConnectionSettings).Port = 0;
    ((FAppleARKitLiveLinkSource *)((longlong)FVar9.ReferenceController + 0xa0))->_padding_ = 0;
    *(atomic<int> *)
     &((FAppleARKitLiveLinkSource *)((longlong)FVar9.ReferenceController + 0xa0))->_padding_ =
         local_res20[0];
    this_00 = (FAppleARKitLiveLinkSource *)FVar9.ReferenceController;
    if (pFVar11 != (FAppleARKitLiveLinkSource *)0x0) goto LAB_14d288bfd;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = pFVar11;
  if ((FAppleARKitLiveLinkSource *)FVar9.ReferenceController != (FAppleARKitLiveLinkSource *)0x0) {
    LOCK();
    *(atomic<int> *)&((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->_padding_ =
         (atomic<int>)
         ((int)*(atomic<int> *)&((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->_padding_
         + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  if ((this_00 == (FAppleARKitLiveLinkSource *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FAppleARKitLiveLinkSource::InitializeRemoteListener(this_00);
  pcVar3 = *(code **)(pFVar10->_padding_ + 8);
  local_58 = &this_00->_padding_;
  if (this_00 == (FAppleARKitLiveLinkSource *)0x0) {
    local_58 = (longlong *)0x0;
  }
  local_50 = (FAppleARKitLiveLinkSource *)FVar9.ReferenceController;
  if ((FAppleARKitLiveLinkSource *)FVar9.ReferenceController == (FAppleARKitLiveLinkSource *)0x0) {
    (*pcVar3)(pFVar10,local_48,&local_58);
  }
  else {
    LOCK();
    *(atomic<int> *)&((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->_padding_ =
         (atomic<int>)
         ((int)*(atomic<int> *)&((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->_padding_
         + 1);
    UNLOCK();
    (*pcVar3)();
    LOCK();
    *(atomic<int> *)&((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->_padding_ =
         (atomic<int>)
         ((int)*(atomic<int> *)&((FAppleARKitLiveLinkSource *)FVar9.ReferenceController)->_padding_
         + 1);
    UNLOCK();
  }
  local_78 = this_00;
  FStack_70.ReferenceController = FVar9.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
LAB_14d288d2b:
  if (&this->LiveLinkSource != (TSharedPtr<ILiveLinkSourceARKit,1> *)&local_78) {
    (this->LiveLinkSource).Object = (ILiveLinkSourceARKit *)this_00;
    local_78 = (FAppleARKitLiveLinkSource *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LiveLinkSource).SharedReferenceCount,&FStack_70);
    FVar9.ReferenceController = FStack_70.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  return;
}

// operator() @ 15057a4a0

bool __thiscall
`FAppleARKitFaceSupportModule::StartupModule'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<668232177510514707>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<668232177510514707>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

