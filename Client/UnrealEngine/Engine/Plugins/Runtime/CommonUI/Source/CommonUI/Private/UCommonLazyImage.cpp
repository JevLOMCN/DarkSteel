// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 35

// StaticClass @ 14a787520

UClass * __cdecl UCommonLazyImage::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonLazyImage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonLazyImage",
               &Z_Registration_Info_UClass_UCommonLazyImage.InnerSingleton,
               StaticRegisterNativesUCommonLazyImage,0x4b0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonLazyImage>,
               InternalVTableHelperCtorCaller<UCommonLazyImage>,local_res8,UImage::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonLazyImage.InnerSingleton;
}

// UCommonLazyImage @ 14a7adc00

UCommonLazyImage * __thiscall
UCommonLazyImage::UCommonLazyImage(UCommonLazyImage *this,FVTableHelper *param_1)

{
  UImage::UImage((UImage *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FSlateBrush::FSlateBrush(&this->LoadingBackgroundBrush);
  FSlateBrush::FSlateBrush(&this->LoadingThrobberBrush);
  *(undefined8 *)&(this->OnLoadingStateChangedEvent).field_0x18 = 2;
  (this->MaterialTextureParamName).ComparisonIndex = 0;
  (this->MaterialTextureParamName).Number = 0;
  *(undefined8 *)&this->BP_OnLoadingStateChanged = 0;
  *(undefined8 *)&(this->BP_OnLoadingStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnLoadingStateChanged).field_0x10 = 0;
  (this->MyLoadGuard).Object = (SLoadGuard *)0x0;
  (this->MyLoadGuard).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnLoadingStateChangedEvent = 0;
  *(undefined8 *)&(this->OnLoadingStateChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnLoadingStateChangedEvent).field_0x10 = 0;
  return this;
}

// UCommonLazyImage @ 14a7adca0

UCommonLazyImage * __thiscall
UCommonLazyImage::UCommonLazyImage(UCommonLazyImage *this,FObjectInitializer *param_1)

{
  UImage::UImage((UImage *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FSlateBrush::FSlateBrush(&this->LoadingBackgroundBrush);
  FSlateBrush::FSlateBrush(&this->LoadingThrobberBrush);
  *(undefined8 *)&(this->OnLoadingStateChangedEvent).field_0x18 = 2;
  (this->MaterialTextureParamName).ComparisonIndex = 0;
  (this->MaterialTextureParamName).Number = 0;
  *(undefined8 *)&this->BP_OnLoadingStateChanged = 0;
  *(undefined8 *)&(this->BP_OnLoadingStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnLoadingStateChanged).field_0x10 = 0;
  (this->MyLoadGuard).Object = (SLoadGuard *)0x0;
  (this->MyLoadGuard).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnLoadingStateChangedEvent = 0;
  *(undefined8 *)&(this->OnLoadingStateChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnLoadingStateChangedEvent).field_0x10 = 0;
  (this->LoadingBackgroundBrush).DrawAs.Value = '\0';
  (this->LoadingThrobberBrush).DrawAs.Value = '\0';
  return this;
}

// ~UCommonLazyImage @ 14a7b2dd0

void __thiscall UCommonLazyImage::~UCommonLazyImage(UCommonLazyImage *this)

{
  void *pvVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLoadingStateChangedEvent).field_0x8,
             *(int *)&(this->OnLoadingStateChangedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnLoadingStateChangedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLoadingStateChangedEvent);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyLoadGuard).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->BP_OnLoadingStateChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BP_OnLoadingStateChanged);
  pTVar2 = (this->LoadingThrobberBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController
  ;
  (this->LoadingThrobberBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar2 = (this->LoadingBackgroundBrush).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->LoadingBackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  UImage::~UImage((UImage *)this);
  return;
}

// operator() @ 14a7b6340

void __thiscall
`UCommonLazyImage::SetBrushFromLazyDisplayAsset'::__l5::<lambda_1>::operator()(void *this)

{
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  int iVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  TPersistentObjectPtr<FSoftObjectPath> *local_res8;
  
  pUVar2 = FWeakObjectPtr::Get(this);
  if (pUVar2 != (UObject *)0x0) {
    this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)this + 8);
    pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    if (pUVar3 == (UObject *)0x0) {
      local_res8 = this_00;
      ``UCommonLazyImage::SetBrushFromLazyDisplayAsset'::__l5::<lambda_1>::operator()'::__l5::
      <lambda_1>::operator()(&local_res8);
    }
    pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    if (pUVar3 != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_UTexture2D_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        (**(code **)(*(longlong *)pUVar2 + 800))
                  (pUVar2,pUVar3,*(undefined1 *)((longlong)this + 0x30));
        return;
      }
    }
    pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    if (pUVar3 != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_UMaterialInterface_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        (**(code **)(*(longlong *)pUVar2 + 0x338))(pUVar2,pUVar3);
      }
    }
  }
  return;
}

// CancelImageStreaming @ 14a7c3df0

void __thiscall UCommonLazyImage::CancelImageStreaming(UCommonLazyImage *this)

{
  SLoadGuard *this_00;
  
  UImage::CancelImageStreaming((UImage *)this);
  this_00 = (this->MyLoadGuard).Object;
  if (this_00 != (SLoadGuard *)0x0) {
    this_00->bForceShowSpinner = false;
    SLoadGuard::UpdateLoadingAppearance(this_00);
    return;
  }
  return;
}

// GetPrivateStaticClass @ 14a7e5980

UClass * __cdecl UCommonLazyImage::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonLazyImage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonLazyImage",
               &Z_Registration_Info_UClass_UCommonLazyImage.InnerSingleton,
               StaticRegisterNativesUCommonLazyImage,0x4b0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonLazyImage>,
               InternalVTableHelperCtorCaller<UCommonLazyImage>,local_res8,UImage::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonLazyImage.InnerSingleton;
}

// HandleLoadGuardStateChanged @ 14a7ed930

void __thiscall UCommonLazyImage::HandleLoadGuardStateChanged(UCommonLazyImage *this,bool param_1)

{
  undefined1 local_res10 [24];
  
  TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnLoadingStateChangedEvent,param_1);
  local_res10[0] = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->BP_OnLoadingStateChanged
             ,local_res10);
  return;
}

// IsLoading @ 14a7f6260

bool __thiscall UCommonLazyImage::IsLoading(UCommonLazyImage *this)

{
  SLoadGuard *pSVar1;
  
  pSVar1 = (this->MyLoadGuard).Object;
  if ((pSVar1 != (SLoadGuard *)0x0) && (pSVar1->bIsShowingSpinner != false)) {
    return true;
  }
  return false;
}

// OnImageStreamingComplete @ 14a7fcee0

void __thiscall
UCommonLazyImage::OnImageStreamingComplete(UCommonLazyImage *this,TSoftObjectPtr<UObject> *param_1)

{
  SLoadGuard *this_00;
  void *pvVar1;
  undefined1 local_38 [48];
  
  local_38._0_8_ = *(undefined8 *)&param_1->SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_38 + 8),
             (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
  UImage::OnImageStreamingComplete((UImage *)this,(TSoftObjectPtr<UObject> *)local_38);
  this_00 = (this->MyLoadGuard).Object;
  if (this_00 != (SLoadGuard *)0x0) {
    this_00->bForceShowSpinner = false;
    SLoadGuard::UpdateLoadingAppearance(this_00);
  }
  pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

// OnImageStreamingStarted @ 14a7fcf50

void __thiscall
UCommonLazyImage::OnImageStreamingStarted(UCommonLazyImage *this,TSoftObjectPtr<UObject> *param_1)

{
  SLoadGuard *this_00;
  void *pvVar1;
  undefined1 local_38 [48];
  
  local_38._0_8_ = *(undefined8 *)&param_1->SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_38 + 8),
             (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
  UImage::OnImageStreamingStarted((UImage *)this,(TSoftObjectPtr<UObject> *)local_38);
  this_00 = (this->MyLoadGuard).Object;
  if (this_00 != (SLoadGuard *)0x0) {
    this_00->bForceShowSpinner = true;
    SLoadGuard::UpdateLoadingAppearance(this_00);
  }
  pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

// OnWidgetRebuilt @ 14a800ee0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonLazyImage::OnWidgetRebuilt(UCommonLazyImage *this)

{
  longlong lVar1;
  SLoadGuard *this_00;
  bool bVar2;
  
  UWidget::OnWidgetRebuilt((UWidget *)this);
  lVar1 = this->_padding_;
  if (((lVar1 == 0) || (*(char *)(lVar1 + 0x109) != '\0')) || (*(char *)(lVar1 + 0x10b) != '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  this_00 = (this->MyLoadGuard).Object;
  if (this_00 != (SLoadGuard *)0x0) {
    this_00->bForceShowSpinner = bVar2;
    SLoadGuard::UpdateLoadingAppearance(this_00);
    return;
  }
  return;
}

// RebuildImageWidget @ 14a804c60

TSharedRef<SWidget,1> * __thiscall
UCommonLazyImage::RebuildImageWidget
          (UCommonLazyImage *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  UImage::RebuildWidget((UImage *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// RebuildWidget @ 14a809f30

TSharedRef<SWidget,1> * __thiscall
UCommonLazyImage::RebuildWidget
          (UCommonLazyImage *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedPtr<SLoadGuard,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  SLoadGuard *pSVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FArguments *pFVar11;
  FArguments *pFVar12;
  TSharedRef<SImage,1> *pTVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  TSharedRef<SLoadGuard,1> *pTVar16;
  TSharedRef<SWidget,1> *pTVar17;
  SImage *pSVar18;
  undefined4 local_res8 [2];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  FName local_698;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  SLoadGuard *local_688;
  FSharedReferencer<1> local_680;
  FName local_678;
  FMemScope local_670;
  UCommonLazyImage *local_668;
  FMemScope local_660;
  TAttribute<EVisibility> local_658;
  undefined8 local_638;
  TReferenceControllerBase<1> *local_630;
  undefined8 local_628;
  TReferenceControllerBase<1> *local_620;
  TSharedRef<SImage,1> local_618;
  TAttribute<FSlateBrush_const_*> local_608;
  FDestructionSentinel local_5e0;
  undefined1 *local_5c8;
  SWidget *local_5c0;
  TReferenceControllerBase<1> *pTStack_5b8;
  SWidget *local_5b0;
  TReferenceControllerBase<1> *pTStack_5a8;
  TSharedRef<SLoadGuard,1> local_5a0;
  undefined1 local_590 [8];
  TReferenceControllerBase<1> *local_588;
  TSlateDecl<SLoadGuard,RequiredArgs::T0RequiredArgs> local_580;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_568;
  undefined1 local_550 [576];
  undefined1 local_310 [24];
  FArguments local_2f8;
  
  pSVar18 = (SImage *)0x0;
  local_res8[0] = 0;
  pFVar11 = SLoadGuard::FArguments::FArguments((FArguments *)local_550);
  if ((this->LoadingThrobberBrush).DrawAs.Value == '\0') {
    local_630 = (TReferenceControllerBase<1> *)0x0;
    puVar14 = &local_638;
    bVar9 = false;
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar10 = true;
  }
  else {
    pFVar12 = SImage::FArguments::FArguments(&local_2f8);
    local_608.bIsSet = true;
    local_608.Getter._16_8_ = 0;
    local_608.Getter._0_8_ = 0;
    local_608.Getter._8_8_ = 0;
    local_608.Value = &this->LoadingThrobberBrush;
    pFVar12 = SImage::FArguments::Image(pFVar12,&local_608);
    FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_678 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_670,&local_678,true);
    TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
              (&local_568,"SImage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonLazyImage.cpp"
               ,0x1d,(T0RequiredArgs *)local_res8);
    FMemScope::~FMemScope(&local_670);
    FLLMScope::~FLLMScope(local_res18);
    pTVar13 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_568,&local_618,pFVar12);
    local_620 = (pTVar13->SharedReferenceCount).ReferenceController;
    pSVar18 = pTVar13->Object;
    if (local_620 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_620->SharedReferenceCount = (atomic<int>)((int)local_620->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar14 = &local_628;
    bVar9 = true;
    bVar8 = true;
    bVar7 = true;
    bVar6 = true;
    bVar10 = false;
  }
  pTVar2 = (TReferenceControllerBase<1> *)puVar14[1];
  puVar14[1] = 0;
  *puVar14 = 0;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_5c0 = (pFVar11->_Throbber).Object;
  pTStack_5b8 = (pFVar11->_Throbber).SharedReferenceCount.ReferenceController;
  (pFVar11->_Throbber).Object = (SWidget *)pSVar18;
  (pFVar11->_Throbber).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_5b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  uStack_690 = 0;
  pFVar11->_GuardBackgroundBrush = &this->LoadingBackgroundBrush;
  local_698 = (FName)HandleLoadGuardStateChanged;
  uStack_68c = local_618.SharedReferenceCount.ReferenceController._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar11->_OnLoadingStateChanged,(FWriteAccessScope *)&local_5e0);
  local_5c8 = &(pFVar11->_OnLoadingStateChanged).field_0x8;
  puVar14 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_5c8);
  if (puVar14 != (undefined8 *)0x0) {
    *puVar14 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar15 = FDelegateHandle::GenerateNewID();
    puVar14[2] = uVar15;
    *puVar14 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonLazyImage____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UCommonLazyImage *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar14[3] = 0;
    local_668 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UCommonLazyImage *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 3),(FObjectPtr)&local_668);
    *(FName *)(puVar14 + 4) = local_698;
    puVar14[5] = CONCAT44(uStack_68c,uStack_690);
  }
  if (local_5e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5e0.Accessor,&local_5e0);
  }
  puVar14 = (undefined8 *)(**(code **)(this->_padding_ + 0x370))(this,local_590);
  pTVar2 = (TReferenceControllerBase<1> *)puVar14[1];
  pSVar3 = (SWidget *)*puVar14;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_5b0 = (pFVar11->_Content).Widget.Object;
  pTStack_5a8 = (pFVar11->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar11->_Content).Widget.Object = pSVar3;
  (pFVar11->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_5a8);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_698 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_660,&local_698,true);
  TSlateDecl<SLoadGuard,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SLoadGuard,RequiredArgs::T0RequiredArgs>
            (&local_580,"SLoadGuard",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonLazyImage.cpp"
             ,0x1c,local_res10);
  FMemScope::~FMemScope(&local_660);
  FLLMScope::~FLLMScope(local_res20);
  pTVar16 = TSlateDecl<SLoadGuard,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_580,&local_5a0,pFVar11);
  local_680.ReferenceController = (pTVar16->SharedReferenceCount).ReferenceController;
  local_688 = pTVar16->Object;
  if (local_680.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_680.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_680.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->MyLoadGuard;
  if (pTVar1 != (TSharedPtr<SLoadGuard,1> *)&local_688) {
    pTVar1->Object = local_688;
    local_688 = (SLoadGuard *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyLoadGuard).SharedReferenceCount,&local_680);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_680.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_580._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_588);
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_630);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_620);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_618.SharedReferenceCount.ReferenceController._4_4_,
                        local_618.SharedReferenceCount.ReferenceController._0_4_));
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_568._Widget.SharedReferenceCount.ReferenceController);
  }
  if (bVar9) {
    SImage::FArguments::~FArguments(&local_2f8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_310);
  if ((void *)local_310._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_310._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_310);
  if ((ITextData *)local_550._544_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_550._544_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_550._536_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_550._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_550);
  if ((SLeafWidget *)this->_padding_ == (SLeafWidget *)0x0) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1114338924328648740>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonLazyImage.cpp"
                        ,0x24,"MyImage");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pTVar17 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar17;
    }
  }
  else {
    local_658.Value = (EVisibility)EVisibility::SelfHitTestInvisible.Value.Value;
    local_658.bIsSet = true;
    local_658.Getter._16_8_ = 0;
    local_658.Getter._0_8_ = 0;
    local_658.Getter._8_8_ = 0;
    SLeafWidget::SetVisibility((SLeafWidget *)this->_padding_,&local_658);
  }
  if (pTVar1->Object == (SLoadGuard *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x408,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pTVar17 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar17;
    }
  }
  pSVar4 = pTVar1->Object;
  pTVar2 = (this->MyLoadGuard).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar4 == (SLoadGuard *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x25d,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pTVar17 = (TSharedRef<SWidget,1> *)(*pcVar5)();
      return pTVar17;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar4;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 14a811e40

void __thiscall UCommonLazyImage::ReleaseSlateResources(UCommonLazyImage *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UImage::ReleaseSlateResources((UImage *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyLoadGuard != (TSharedPtr<SLoadGuard,1> *)&local_18) {
    (this->MyLoadGuard).Object = (SLoadGuard *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyLoadGuard).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetBrush @ 14a817000

void __thiscall UCommonLazyImage::SetBrush(UCommonLazyImage *this,FSlateBrush *param_1)

{
  UImage::SetBrush((UImage *)this,param_1);
  (this->MaterialTextureParamName).ComparisonIndex = 0;
  (this->MaterialTextureParamName).Number = 0;
  return;
}

// SetBrushFromAsset @ 14a817030

void __thiscall
UCommonLazyImage::SetBrushFromAsset(UCommonLazyImage *this,USlateBrushAsset *param_1)

{
  UImage::SetBrushFromAsset((UImage *)this,param_1);
  (this->MaterialTextureParamName).ComparisonIndex = 0;
  (this->MaterialTextureParamName).Number = 0;
  return;
}

// SetBrushFromLazyDisplayAsset @ 14a817060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UCommonLazyImage::SetBrushFromLazyDisplayAsset
          (UCommonLazyImage *this,TSoftObjectPtr<UObject> *param_1,bool param_2)

{
  code **ppcVar1;
  undefined1 auStack_e8 [32];
  FWeakObjectPtr local_c8;
  UCommonLazyImage *local_c0;
  FWeakObjectPtr local_b8;
  code *local_b0;
  FSoftObjectPath local_a8;
  undefined1 local_88;
  undefined1 local_80 [40];
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (*(longlong *)&(param_1->SoftObjectPtr).field_0x8 == 0) {
    ShowDefaultImage(this);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (this != (UCommonLazyImage *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_c8.ObjectIndex = 0;
    local_c8.ObjectSerialNumber = 0;
    local_c0 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UCommonLazyImage *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_c8,(FObjectPtr)&local_c0);
    local_b8 = local_c8;
    local_b0 = *(code **)&param_1->SoftObjectPtr;
    FSoftObjectPath::FSoftObjectPath
              (&local_a8,(FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
    local_58[0] = (code *)0x0;
    local_88 = param_2;
    ppcVar1 = FMemory::Malloc(0x40,8);
    *ppcVar1 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`UCommonLazyImage::SetBrushFromLazyDisplayAsset'::`5'::<lambda_1>,0,1>
                        ::_vftable_;
    *(FWeakObjectPtr *)(ppcVar1 + 1) = local_b8;
    ppcVar1[2] = local_b0;
    local_30 = ppcVar1;
    FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(ppcVar1 + 3),&local_a8);
    *(undefined1 *)(ppcVar1 + 7) = local_88;
    if ((FWeakObjectPtr *)(ppcVar1 + 1) != (FWeakObjectPtr *)0x0) {
      local_58[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UCommonLazyImage::SetBrushFromLazyDisplayAsset'::__l5::<lambda_1>,void>
                    ::Call;
    }
    local_80._0_8_ = *(undefined8 *)&param_1->SoftObjectPtr;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_80 + 8),
               (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
    UImage::RequestAsyncLoad
              ((UImage *)this,(TSoftObjectPtr<UObject> *)local_80,
               (TFunction<void___cdecl(void)> *)local_58);
    if (local_58[0] != (code *)0x0) {
      ppcVar1 = local_58 + 2;
      if (local_30 != (code **)0x0) {
        ppcVar1 = local_30;
      }
      (**(code **)(*ppcVar1 + 0x10))();
    }
    if (local_a8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetBrushFromLazyMaterial @ 14a8171f0

void __thiscall
UCommonLazyImage::SetBrushFromLazyMaterial
          (UCommonLazyImage *this,TSoftObjectPtr<UMaterialInterface> *param_1)

{
  code *pcVar1;
  undefined8 local_38;
  FSoftObjectPath local_30;
  
  if (*(longlong *)&(param_1->SoftObjectPtr).field_0x8 != 0) {
    pcVar1 = *(code **)(this->_padding_ + 0x348);
    local_38 = *(undefined8 *)&param_1->SoftObjectPtr;
    FSoftObjectPath::FSoftObjectPath
              (&local_30,(FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
    (*pcVar1)(this,&local_38);
    return;
  }
  ShowDefaultImage(this);
  return;
}

// SetBrushFromLazyTexture @ 14a817250

void __thiscall
UCommonLazyImage::SetBrushFromLazyTexture
          (UCommonLazyImage *this,TSoftObjectPtr<UTexture2D> *param_1,bool param_2)

{
  code *pcVar1;
  undefined8 local_38;
  FSoftObjectPath local_30;
  
  if (*(longlong *)&(param_1->SoftObjectPtr).field_0x8 != 0) {
    pcVar1 = *(code **)(this->_padding_ + 0x340);
    local_38 = *(undefined8 *)&param_1->SoftObjectPtr;
    FSoftObjectPath::FSoftObjectPath
              (&local_30,(FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
    (*pcVar1)(this,&local_38,param_2);
    return;
  }
  ShowDefaultImage(this);
  return;
}

// SetBrushFromMaterial @ 14a8172c0

void __thiscall
UCommonLazyImage::SetBrushFromMaterial(UCommonLazyImage *this,UMaterialInterface *param_1)

{
  (this->MaterialTextureParamName).ComparisonIndex = 0;
  (this->MaterialTextureParamName).Number = 0;
  UImage::SetBrushFromMaterial((UImage *)this,param_1);
  return;
}

// SetBrushFromTexture @ 14a8172e0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __thiscall
UCommonLazyImage::SetBrushFromTexture(UCommonLazyImage *this,UTexture2D *param_1,bool param_2)

{
  int iVar1;
  UMaterialInstanceDynamic *this_00;
  FSlateBrush *pFVar2;
  UClass *pUVar3;
  undefined1 auStack_b8 [36];
  float fStack_94;
  FSharedReferencer<1> FStack_18;
  
  if ((this->MaterialTextureParamName != (FName)0x0) &&
     (this_00 = UImage::GetDynamicMaterial((UImage *)this),
     this_00 != (UMaterialInstanceDynamic *)0x0)) {
    UMaterialInstanceDynamic::SetTextureParameterValue
              (this_00,this->MaterialTextureParamName,(UTexture *)param_1);
    if (!param_2) {
      return;
    }
    pFVar2 = UImage::GetBrush((UImage *)this);
    FSlateBrush::FSlateBrush((FSlateBrush *)auStack_b8,pFVar2);
    if (param_1 != (UTexture2D *)0x0) {
      pUVar3 = Z_Construct_UClass_UTexture2DDynamic_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        if (param_1 != (UTexture2D *)0x0) {
          pUVar3 = Z_Construct_UClass_UTexture2D_NoRegister();
          iVar1 = (int)pUVar3->_padding_;
          if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar3->_padding_)) {
            iVar1 = UTexture2D::GetSizeX(param_1);
            auStack_b8._32_4_ = (undefined4)iVar1;
            iVar1 = UTexture2D::GetSizeY(param_1);
            fStack_94 = (float)iVar1;
          }
        }
      }
      else {
        auStack_b8._32_4_ = (undefined4)param_1->FirstResourceMemMip;
        fStack_94 = (float)*(int *)&param_1->field_0x154;
      }
    }
    UImage::SetBrush((UImage *)this,(FSlateBrush *)auStack_b8);
    auStack_b8._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_18.ReferenceController);
    return;
  }
  if (param_1 != (UTexture2D *)0x0) {
    pUVar3 = Z_Construct_UClass_UTexture2DDynamic_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      UImage::SetBrushFromTextureDynamic((UImage *)this,(UTexture2DDynamic *)param_1,false);
      return;
    }
    pUVar3 = Z_Construct_UClass_UTexture2D_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14a8174af;
  }
  param_1 = (UTexture2D *)0x0;
LAB_14a8174af:
  UImage::SetBrushFromTexture((UImage *)this,param_1,param_2);
  return;
}

// SetBrushFromTextureDynamic @ 14a8172f0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __thiscall
UCommonLazyImage::SetBrushFromTextureDynamic
          (UCommonLazyImage *this,UTexture2DDynamic *param_1,bool param_2)

{
  int iVar1;
  UMaterialInstanceDynamic *this_00;
  FSlateBrush *pFVar2;
  UClass *pUVar3;
  undefined1 auStack_b8 [36];
  float fStack_94;
  FSharedReferencer<1> FStack_18;
  
  if ((this->MaterialTextureParamName != (FName)0x0) &&
     (this_00 = UImage::GetDynamicMaterial((UImage *)this),
     this_00 != (UMaterialInstanceDynamic *)0x0)) {
    UMaterialInstanceDynamic::SetTextureParameterValue
              (this_00,this->MaterialTextureParamName,(UTexture *)param_1);
    if (!param_2) {
      return;
    }
    pFVar2 = UImage::GetBrush((UImage *)this);
    FSlateBrush::FSlateBrush((FSlateBrush *)auStack_b8,pFVar2);
    if (param_1 != (UTexture2DDynamic *)0x0) {
      pUVar3 = Z_Construct_UClass_UTexture2DDynamic_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        if (param_1 != (UTexture2DDynamic *)0x0) {
          pUVar3 = Z_Construct_UClass_UTexture2D_NoRegister();
          iVar1 = (int)pUVar3->_padding_;
          if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar3->_padding_)) {
            iVar1 = UTexture2D::GetSizeX((UTexture2D *)param_1);
            auStack_b8._32_4_ = (undefined4)iVar1;
            iVar1 = UTexture2D::GetSizeY((UTexture2D *)param_1);
            fStack_94 = (float)iVar1;
          }
        }
      }
      else {
        auStack_b8._32_4_ = (undefined4)param_1->SizeX;
        fStack_94 = (float)param_1->SizeY;
      }
    }
    UImage::SetBrush((UImage *)this,(FSlateBrush *)auStack_b8);
    auStack_b8._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_18.ReferenceController);
    return;
  }
  if (param_1 != (UTexture2DDynamic *)0x0) {
    pUVar3 = Z_Construct_UClass_UTexture2DDynamic_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      UImage::SetBrushFromTextureDynamic((UImage *)this,param_1,false);
      return;
    }
    pUVar3 = Z_Construct_UClass_UTexture2D_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14a8174af;
  }
  param_1 = (UTexture2DDynamic *)0x0;
LAB_14a8174af:
  UImage::SetBrushFromTexture((UImage *)this,(UTexture2D *)param_1,param_2);
  return;
}

// SetBrushObjectInternal @ 14a817300

void __thiscall
UCommonLazyImage::SetBrushObjectInternal(UCommonLazyImage *this,UMaterialInterface *param_1)

{
  (this->MaterialTextureParamName).ComparisonIndex = 0;
  (this->MaterialTextureParamName).Number = 0;
  UImage::SetBrushFromMaterial((UImage *)this,param_1);
  return;
}

// SetBrushObjectInternal @ 14a817320

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __thiscall
UCommonLazyImage::SetBrushObjectInternal(UCommonLazyImage *this,UTexture *param_1,bool param_2)

{
  int iVar1;
  UMaterialInstanceDynamic *this_00;
  FSlateBrush *pFVar2;
  UClass *pUVar3;
  undefined1 local_b8 [36];
  float local_94;
  FSharedReferencer<1> local_18;
  
  if ((this->MaterialTextureParamName != (FName)0x0) &&
     (this_00 = UImage::GetDynamicMaterial((UImage *)this),
     this_00 != (UMaterialInstanceDynamic *)0x0)) {
    UMaterialInstanceDynamic::SetTextureParameterValue
              (this_00,this->MaterialTextureParamName,param_1);
    if (!param_2) {
      return;
    }
    pFVar2 = UImage::GetBrush((UImage *)this);
    FSlateBrush::FSlateBrush((FSlateBrush *)local_b8,pFVar2);
    if (param_1 != (UTexture *)0x0) {
      pUVar3 = Z_Construct_UClass_UTexture2DDynamic_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        if (param_1 != (UTexture *)0x0) {
          pUVar3 = Z_Construct_UClass_UTexture2D_NoRegister();
          iVar1 = (int)pUVar3->_padding_;
          if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar3->_padding_)) {
            iVar1 = UTexture2D::GetSizeX((UTexture2D *)param_1);
            local_b8._32_4_ = (undefined4)iVar1;
            iVar1 = UTexture2D::GetSizeY((UTexture2D *)param_1);
            local_94 = (float)iVar1;
          }
        }
      }
      else {
        local_b8._32_4_ = (undefined4)(int)param_1[1]._padding_;
        local_94 = (float)*(int *)((longlong)&param_1[1]._padding_ + 4);
      }
    }
    UImage::SetBrush((UImage *)this,(FSlateBrush *)local_b8);
    local_b8._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.ReferenceController);
    return;
  }
  if (param_1 != (UTexture *)0x0) {
    pUVar3 = Z_Construct_UClass_UTexture2DDynamic_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      UImage::SetBrushFromTextureDynamic((UImage *)this,(UTexture2DDynamic *)param_1,false);
      return;
    }
    pUVar3 = Z_Construct_UClass_UTexture2D_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14a8174af;
  }
  param_1 = (UTexture *)0x0;
LAB_14a8174af:
  UImage::SetBrushFromTexture((UImage *)this,(UTexture2D *)param_1,param_2);
  return;
}

// SetIsLoading @ 14a819490

void __thiscall UCommonLazyImage::SetIsLoading(UCommonLazyImage *this,bool param_1)

{
  SLoadGuard *this_00;
  
  this_00 = (this->MyLoadGuard).Object;
  if (this_00 != (SLoadGuard *)0x0) {
    this_00->bForceShowSpinner = param_1;
    SLoadGuard::UpdateLoadingAppearance(this_00);
    return;
  }
  return;
}

// SetMaterialTextureParamName @ 14a81a290

void __thiscall UCommonLazyImage::SetMaterialTextureParamName(UCommonLazyImage *this,FName param_1)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  FSlateBrush *pFVar4;
  UClass *pUVar5;
  
  pFVar4 = UImage::GetBrush((UImage *)this);
  pUVar2 = (pFVar4->ResourceObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    lVar3 = *(longlong *)&pUVar2->field_0x10;
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      this->MaterialTextureParamName = param_1;
    }
  }
  return;
}

// ShowDefaultImage @ 14a81db00

void __thiscall UCommonLazyImage::ShowDefaultImage(UCommonLazyImage *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UCommonUISettings *pUVar4;
  UClass *pUVar5;
  UTexture *pUVar6;
  
  pUVar4 = ICommonUIModule::GetSettings();
  if (pUVar4->bDefaultDataLoaded == false) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2728553711960850570>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonUISettings.cpp"
                       ,0x8a,"bDefaultDataLoaded");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar6 = (UTexture *)(pUVar4->DefaultImageResourceObjectInstance).field0_0x0.DebugPtr;
  if (pUVar6 != (UTexture *)0x0) {
    pUVar5 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      (this->MaterialTextureParamName).ComparisonIndex = 0;
      (this->MaterialTextureParamName).Number = 0;
      UImage::SetBrushFromMaterial((UImage *)this,(UMaterialInterface *)pUVar6);
      return;
    }
    if (pUVar6 != (UTexture *)0x0) {
      pUVar5 = Z_Construct_UClass_UTexture2D_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) goto LAB_14a81dbd8;
    }
  }
  pUVar6 = (UTexture *)0x0;
LAB_14a81dbd8:
  SetBrushObjectInternal(this,pUVar6,false);
  return;
}

// StaticRegisterNativesUCommonLazyImage @ 14a81e5e0

void __cdecl UCommonLazyImage::StaticRegisterNativesUCommonLazyImage(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UCommonLazyImage_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 14a81ffa0

void __thiscall UCommonLazyImage::SynchronizeProperties(UCommonLazyImage *this)

{
  SLoadGuard *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FArguments *pFVar2;
  TSharedRef<SImage,1> *pTVar3;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_338;
  TSharedPtr<SWidget,1> local_320;
  TAttribute<FSlateBrush_const_*> local_310;
  TSharedRef<SImage,1> local_2e8;
  FArguments local_2d8;
  
  UImage::SynchronizeProperties((UImage *)this);
  this_00 = (this->MyLoadGuard).Object;
  if (this_00 != (SLoadGuard *)0x0) {
    if ((this->LoadingThrobberBrush).DrawAs.Value != '\0') {
      pFVar2 = SImage::FArguments::FArguments(&local_2d8);
      local_310.Getter._16_8_ = 0;
      local_310.bIsSet = true;
      local_310.Getter._0_8_ = 0;
      local_310.Getter._8_8_ = 0;
      local_310.Value = &this->LoadingThrobberBrush;
      pFVar2 = SImage::FArguments::Image(pFVar2,&local_310);
      FLLMScope::FLLMScope
                (local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_res20,&local_res18,true);
      TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
                (&local_338,"SImage",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonLazyImage.cpp"
                 ,0x3a,local_res8);
      FMemScope::~FMemScope(&local_res20);
      FLLMScope::~FLLMScope(local_res10);
      pTVar3 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                         (&local_338,&local_2e8,pFVar2);
      pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
      local_320.Object = (SWidget *)pTVar3->Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_320.SharedReferenceCount.ReferenceController = pTVar1;
      SLoadGuard::SetThrobber(this_00,&local_320);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2e8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_338._Widget.SharedReferenceCount.ReferenceController);
      SImage::FArguments::~FArguments(&local_2d8);
      return;
    }
    local_338._Widget.Object = (SImage *)0x0;
    local_338._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    SLoadGuard::SetThrobber(this_00,(TSharedPtr<SWidget,1> *)&local_338);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  return;
}

// execIsLoading @ 14a830510

void __cdecl UCommonLazyImage::execIsLoading(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)&param_1[0x1c].field_0x20 != 0) &&
     (*(char *)(*(longlong *)&param_1[0x1c].field_0x20 + 0x331) != '\0')) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execSetBrushFromLazyDisplayAsset @ 14a832370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UCommonLazyImage::execSetBrushFromLazyDisplayAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code **ppcVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 auStack_128 [32];
  int local_108 [2];
  FWeakObjectPtr local_100;
  longlong local_f8 [3];
  FUtf8String local_e0;
  UObject *local_d0;
  FWeakObjectPtr local_c8;
  code *local_c0;
  FSoftObjectPath local_b8;
  undefined1 local_98;
  undefined1 local_90 [40];
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.Data.ArrayNum = 0;
  local_e0.Data.ArrayMax = 0;
  local_f8[0] = 0;
  local_f8[2] = 0;
  local_f8[1] = 0;
  FUtf8String::Reset(&local_e0,0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  local_108[0] = 0;
  plVar3 = local_f8;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar3 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  bVar4 = local_108[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (plVar3[1] == 0) {
    ShowDefaultImage((UCommonLazyImage *)param_1);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_100.ObjectIndex = 0;
    local_100.ObjectSerialNumber = 0;
    local_d0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_100,(FObjectPtr)&local_d0);
    local_c8 = local_100;
    local_c0 = (code *)*plVar3;
    FSoftObjectPath::FSoftObjectPath(&local_b8,(FSoftObjectPath *)(plVar3 + 1));
    local_68[0] = (code *)0x0;
    local_98 = bVar4;
    ppcVar2 = FMemory::Malloc(0x40,8);
    *ppcVar2 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`UCommonLazyImage::SetBrushFromLazyDisplayAsset'::`5'::<lambda_1>,0,1>
                        ::_vftable_;
    *(FWeakObjectPtr *)(ppcVar2 + 1) = local_c8;
    ppcVar2[2] = local_c0;
    local_40 = ppcVar2;
    FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(ppcVar2 + 3),&local_b8);
    *(undefined1 *)(ppcVar2 + 7) = local_98;
    if ((FWeakObjectPtr *)(ppcVar2 + 1) != (FWeakObjectPtr *)0x0) {
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UCommonLazyImage::SetBrushFromLazyDisplayAsset'::__l5::<lambda_1>,void>
                    ::Call;
    }
    local_90._0_8_ = *plVar3;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_90 + 8),(FSoftObjectPath *)(plVar3 + 1));
    UImage::RequestAsyncLoad
              ((UImage *)param_1,(TSoftObjectPtr<UObject> *)local_90,
               (TFunction<void___cdecl(void)> *)local_68);
    if (local_68[0] != (code *)0x0) {
      ppcVar2 = local_68 + 2;
      if (local_40 != (code **)0x0) {
        ppcVar2 = local_40;
      }
      (**(code **)(*ppcVar2 + 0x10))();
    }
    if (local_b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetBrushFromLazyMaterial @ 14a8325e0

void __cdecl
UCommonLazyImage::execSetBrushFromLazyMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  uchar *puVar3;
  uchar local_58 [24];
  FUtf8String local_40;
  undefined8 local_30;
  FSoftObjectPath local_28;
  
  local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Data.ArrayNum = 0;
  local_40.Data.ArrayMax = 0;
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\0';
  local_58[3] = '\0';
  local_58[4] = '\0';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  local_58[0x10] = '\0';
  local_58[0x11] = '\0';
  local_58[0x12] = '\0';
  local_58[0x13] = '\0';
  local_58[0x14] = '\0';
  local_58[0x15] = '\0';
  local_58[0x16] = '\0';
  local_58[0x17] = '\0';
  local_58[8] = '\0';
  local_58[9] = '\0';
  local_58[10] = '\0';
  local_58[0xb] = '\0';
  local_58[0xc] = '\0';
  local_58[0xd] = '\0';
  local_58[0xe] = '\0';
  local_58[0xf] = '\0';
  FUtf8String::Reset(&local_40,0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  puVar3 = local_58;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((((FSoftObjectPath *)(puVar3 + 8))->AssetPath).PackageName == (FName)0x0) {
    ShowDefaultImage((UCommonLazyImage *)param_1);
  }
  else {
    pcVar2 = *(code **)(*(longlong *)param_1 + 0x348);
    local_30 = *(undefined8 *)puVar3;
    FSoftObjectPath::FSoftObjectPath(&local_28,(FSoftObjectPath *)(puVar3 + 8));
    (*pcVar2)(param_1,&local_30);
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetBrushFromLazyTexture @ 14a8326e0

void __cdecl
UCommonLazyImage::execSetBrushFromLazyTexture(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  uchar *puVar3;
  bool bVar4;
  int local_res10 [2];
  uchar local_68 [24];
  FUtf8String local_50;
  undefined8 local_40;
  FSoftObjectPath local_38;
  
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Data.ArrayNum = 0;
  local_50.Data.ArrayMax = 0;
  local_68[0] = '\0';
  local_68[1] = '\0';
  local_68[2] = '\0';
  local_68[3] = '\0';
  local_68[4] = '\0';
  local_68[5] = '\0';
  local_68[6] = '\0';
  local_68[7] = '\0';
  local_68[0x10] = '\0';
  local_68[0x11] = '\0';
  local_68[0x12] = '\0';
  local_68[0x13] = '\0';
  local_68[0x14] = '\0';
  local_68[0x15] = '\0';
  local_68[0x16] = '\0';
  local_68[0x17] = '\0';
  local_68[8] = '\0';
  local_68[9] = '\0';
  local_68[10] = '\0';
  local_68[0xb] = '\0';
  local_68[0xc] = '\0';
  local_68[0xd] = '\0';
  local_68[0xe] = '\0';
  local_68[0xf] = '\0';
  FUtf8String::Reset(&local_50,0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  local_res10[0] = 0;
  puVar3 = local_68;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((((FSoftObjectPath *)(puVar3 + 8))->AssetPath).PackageName == (FName)0x0) {
    ShowDefaultImage((UCommonLazyImage *)param_1);
  }
  else {
    pcVar2 = *(code **)(*(longlong *)param_1 + 0x340);
    local_40 = *(undefined8 *)puVar3;
    FSoftObjectPath::FSoftObjectPath(&local_38,(FSoftObjectPath *)(puVar3 + 8));
    (*pcVar2)(param_1,&local_40,bVar4);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetMaterialTextureParamName @ 14a834a90

void __cdecl
UCommonLazyImage::execSetMaterialTextureParamName(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  longlong lVar4;
  undefined8 uVar5;
  FSlateBrush *pFVar6;
  UClass *pUVar7;
  undefined8 local_res10;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  uVar5 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar6 = UImage::GetBrush((UImage *)param_1);
  pUVar3 = (pFVar6->ResourceObject).field0_0x0.DebugPtr;
  if (pUVar3 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    lVar4 = *(longlong *)&pUVar3->field_0x10;
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(lVar4 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) {
      *(undefined8 *)(param_1 + 0x1c) = uVar5;
    }
  }
  return;
}

