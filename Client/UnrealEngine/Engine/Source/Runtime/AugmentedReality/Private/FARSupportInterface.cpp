// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 63

// FARSupportInterface @ 14cf407e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FARSupportInterface * __thiscall
FARSupportInterface::FARSupportInterface
          (FARSupportInterface *this,IARSystemSupport *param_1,IXRTrackingSystem *param_2)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UARSessionConfig *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined ***)this = &___7FGCObject__6B_;
  *(undefined2 *)&this->field_0x8 = 0;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->ARImplemention = param_1;
  *(undefined ***)this = &___7FARSupportInterface__6B_;
  *(undefined8 *)&this->OnARSessionStarted = 0;
  *(undefined8 *)&(this->OnARSessionStarted).field_0x8 = 0;
  *(undefined8 *)&(this->OnARSessionStarted).field_0x10 = 0;
  *(undefined8 *)&(this->OnARSessionStarted).field_0x18 = 2;
  *(undefined8 *)&this->OnAlignmentTransformUpdated = 0;
  *(undefined8 *)&(this->OnAlignmentTransformUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnAlignmentTransformUpdated).field_0x10 = 0;
  *(undefined8 *)&(this->OnAlignmentTransformUpdated).field_0x18 = 2;
  this->XRTrackingSystem = param_2;
  *&(this->AlignmentTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->AlignmentTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->AlignmentTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->AlignmentTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->AlignmentTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->AlignmentTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UARSessionConfig::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UARSessionConfig *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  (this->ARSettings).field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UARSessionConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  return this;
}

// ~FARSupportInterface @ 14cf43e00

void __thiscall FARSupportInterface::~FARSupportInterface(FARSupportInterface *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  void *pvVar4;
  longlong *plVar5;
  IModularFeatures *pIVar6;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar7;
  
  *(undefined ***)this = &___7FARSupportInterface__6B_;
  pIVar6 = IModularFeatures::Get();
  pTVar7 = &this->OnARSessionStarted;
  if (this == (FARSupportInterface *)0x0) {
    pTVar7 = (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
  }
  pcVar3 = *(code **)((longlong)*pIVar6 + 0x30);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_FARSupportInterface::GetModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_FARSupportInterface::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_FARSupportInterface::GetModularFeatureName(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_FARSupportInterface::GetModularFeatureName(void)'
                      ::__l2::ModularFeatureName,L"ARSystem");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_FARSupportInterface::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar3)(pIVar6,`public:_static_class_FName___cdecl_FARSupportInterface::GetModularFeatureName(void)'
                   ::__l2::ModularFeatureName,pTVar7);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnAlignmentTransformUpdated).field_0x8,
             *(int *)&(this->OnAlignmentTransformUpdated).field_0x10);
  pvVar4 = *(void **)&(this->OnAlignmentTransformUpdated).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAlignmentTransformUpdated);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnARSessionStarted).field_0x8,*(int *)&(this->OnARSessionStarted).field_0x10);
  pvVar4 = *(void **)&(this->OnARSessionStarted).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnARSessionStarted);
  *(undefined ***)this = &___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  plVar5 = *(longlong **)&this->field_0x18;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// AccessSessionConfig @ 14cf48ba0

UARSessionConfig * __thiscall FARSupportInterface::AccessSessionConfig(FARSupportInterface *this)

{
  code *pcVar1;
  bool bVar2;
  UARSessionConfig *pUVar3;
  
  if ((this->ARSettings).field0_0x0.DebugPtr != (UARSessionConfig *)0x0) {
    return (this->ARSettings).field0_0x0.DebugPtr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ARSettings != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Private\\ARSupportInterface.cpp"
                     ,0x38,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UARSessionConfig *)(*pcVar1)();
    return pUVar3;
  }
  return (this->ARSettings).field0_0x0.DebugPtr;
}

// AddManualEnvironmentCaptureProbe @ 14cf49800

bool __thiscall
FARSupportInterface::AddManualEnvironmentCaptureProbe
          (FARSupportInterface *this,TVector<double> *param_1,TVector<double> *param_2)

{
  IARSystemSupport *pIVar1;
  undefined1 uVar2;
  double local_48;
  double dStack_40;
  double local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  pIVar1 = this->ARImplemention;
  if (pIVar1 != (IARSystemSupport *)0x0) {
    local_48 = (param_2->field0_0x0)._s_0.X;
    dStack_40 = (param_2->field0_0x0)._s_0.Y;
    local_38 = (param_2->field0_0x0)._s_0.Z;
    local_28 = *(undefined4 *)&param_1->field0_0x0;
    uStack_24 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
    uStack_20 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
    uStack_1c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
    local_18 = (param_1->field0_0x0)._s_0.Z;
    uVar2 = (**(code **)(pIVar1->_padding_ + 0xc0))(pIVar1,&local_28,&local_48);
    return (bool)uVar2;
  }
  return false;
}

// AddOnTrackableAddedDelegate_Handle @ 14cf499a0

FDelegateHandle __thiscall
FARSupportInterface::AddOnTrackableAddedDelegate_Handle
          (FARSupportInterface *this,
          TDelegate<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
    (**(code **)(this->ARImplemention->_padding_ + 0x140))();
    return (FDelegateHandle)(ulong64)param_1;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnTrackableRemovedDelegate_Handle @ 14cf49bb0

FDelegateHandle __thiscall
FARSupportInterface::AddOnTrackableRemovedDelegate_Handle
          (FARSupportInterface *this,
          TDelegate<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
    (**(code **)(this->ARImplemention->_padding_ + 0x180))();
    return (FDelegateHandle)(ulong64)param_1;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnTrackableUpdatedDelegate_Handle @ 14cf49dc0

FDelegateHandle __thiscall
FARSupportInterface::AddOnTrackableUpdatedDelegate_Handle
          (FARSupportInterface *this,
          TDelegate<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
    (**(code **)(this->ARImplemention->_padding_ + 0x160))();
    return (FDelegateHandle)(ulong64)param_1;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddReferencedObjects @ 14cf49fd0

void __thiscall
FARSupportInterface::AddReferencedObjects(FARSupportInterface *this,FReferenceCollector *param_1)

{
  if ((this->ARSettings).field0_0x0.DebugPtr != (UARSessionConfig *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf49fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->ARSettings,0,0);
    return;
  }
  return;
}

// AddRuntimeCandidateImage @ 14cf4a000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UARCandidateImage * __thiscall
FARSupportInterface::AddRuntimeCandidateImage
          (FARSupportInterface *this,UARSessionConfig *param_1,UTexture2D *param_2,FString *param_3,
          float param_4)

{
  int iVar1;
  IARSystemSupport *pIVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  FString *pFVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  UARCandidateImage *pUVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auStack_118 [32];
  float local_f8;
  FString local_e8;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_118;
  pIVar2 = this->ARImplemention;
  if (pIVar2 != (IARSystemSupport *)0x0) {
    pcVar3 = *(code **)(pIVar2->_padding_ + 0xf0);
    pFVar8 = ::FString::FString(&local_e8,param_3);
    local_f8 = param_4;
    cVar5 = (*pcVar3)(pIVar2,param_1,param_2,pFVar8);
    if (cVar5 != '\0') {
      iVar6 = UTexture2D::GetSizeX(param_2);
      iVar7 = UTexture2D::GetSizeY(param_2);
      if (iVar6 < 1) {
        iVar6 = 1;
      }
      pFVar8 = ::FString::FString(&local_e8,param_3);
      pUVar9 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar9,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar10 = UARCandidateImage::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_d8,pUVar10);
      local_d8._8_8_ = pUVar9;
      pUVar11 = (UARCandidateImage *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
      if (local_d8._64_8_ != 0) {
        plVar12 = (longlong *)(local_d8 + 0x50);
        if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
          plVar12 = (longlong *)local_d8._104_8_;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UTexture2D *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      (pUVar11->CandidateTexture).field0_0x0.DebugPtr = param_2;
      iVar1 = (pFVar8->Data).ArrayNum;
      iVar13 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar13 = 0;
      }
      ::FString::AssignRange
                (&pUVar11->FriendlyName,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,iVar13);
      pUVar11->Height = (float)iVar7 * (param_4 / (float)iVar6);
      pUVar11->Width = param_4;
      pUVar11->Orientation = Landscape;
      pFVar4 = (pFVar8->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      UARSessionConfig::AddCandidateImage(param_1,pUVar11);
      pFVar4 = (param_3->Data).AllocatorInstance.Data;
      if (pFVar4 == (FScriptContainerElement *)0x0) {
        return pUVar11;
      }
      FMemory::Free(pFVar4);
      return pUVar11;
    }
  }
  pFVar4 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return (UARCandidateImage *)0x0;
}

// AddTrackedPointWithName @ 14cf4a380

bool __thiscall
FARSupportInterface::AddTrackedPointWithName
          (FARSupportInterface *this,TTransform<double> *param_1,FString *param_2,bool param_3)

{
  undefined1 uVar1;
  
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf4a38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(this->ARImplemention->_padding_ + 0x120))();
    return (bool)uVar1;
  }
  return false;
}

// ArePinsReadyToLoad @ 14cf4a8f0

bool __thiscall FARSupportInterface::ArePinsReadyToLoad(FARSupportInterface *this)

{
  undefined1 uVar1;
  
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf4a8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(this->ARImplemention->_padding_ + 0x1a8))();
    return (bool)uVar1;
  }
  return false;
}

// ClearOnTrackableAddedDelegate_Handle @ 14cf4bcc0

void __thiscall
FARSupportInterface::ClearOnTrackableAddedDelegate_Handle
          (FARSupportInterface *this,FDelegateHandle *param_1)

{
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf4bccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->ARImplemention->_padding_ + 0x148))();
    return;
  }
  param_1->ID = 0;
  return;
}

// ClearOnTrackableAddedDelegates @ 14cf4bcf0

void __thiscall
FARSupportInterface::ClearOnTrackableAddedDelegates(FARSupportInterface *this,void *param_1)

{
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf4bcfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->ARImplemention->_padding_ + 0x150))();
    return;
  }
  return;
}

// ClearOnTrackableRemovedDelegate_Handle @ 14cf4bd10

void __thiscall
FARSupportInterface::ClearOnTrackableRemovedDelegate_Handle
          (FARSupportInterface *this,FDelegateHandle *param_1)

{
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf4bd1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->ARImplemention->_padding_ + 0x188))();
    return;
  }
  param_1->ID = 0;
  return;
}

// ClearOnTrackableRemovedDelegates @ 14cf4bd40

void __thiscall
FARSupportInterface::ClearOnTrackableRemovedDelegates(FARSupportInterface *this,void *param_1)

{
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf4bd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->ARImplemention->_padding_ + 400))();
    return;
  }
  return;
}

// ClearOnTrackableUpdatedDelegate_Handle @ 14cf4bd60

void __thiscall
FARSupportInterface::ClearOnTrackableUpdatedDelegate_Handle
          (FARSupportInterface *this,FDelegateHandle *param_1)

{
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf4bd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->ARImplemention->_padding_ + 0x168))();
    return;
  }
  param_1->ID = 0;
  return;
}

// ClearOnTrackableUpdatedDelegates @ 14cf4bd90

void __thiscall
FARSupportInterface::ClearOnTrackableUpdatedDelegates(FARSupportInterface *this,void *param_1)

{
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf4bd9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->ARImplemention->_padding_ + 0x170))();
    return;
  }
  return;
}

// GetARSessionRawPointer @ 14cf4f890

void * __thiscall FARSupportInterface::GetARSessionRawPointer(FARSupportInterface *this)

{
  void *pvVar1;
  
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf4f89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(**(code **)(this->ARImplemention->_padding_ + 0xf8))();
    return pvVar1;
  }
  return (void *)0x0;
}

// GetARSessionStatus @ 14cf4f8b0

FARSessionStatus * __thiscall
FARSupportInterface::GetARSessionStatus
          (FARSupportInterface *this,FARSessionStatus *__return_storage_ptr__)

{
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
    (**(code **)(this->ARImplemention->_padding_ + 0x38))();
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AdditionalInfo).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AdditionalInfo).Data.ArrayNum = 0;
  (__return_storage_ptr__->AdditionalInfo).Data.ArrayMax = 0;
  __return_storage_ptr__->Status = NotSupported;
  return __return_storage_ptr__;
}

// GetARTexture @ 14cf4fba0

UARTexture * __thiscall
FARSupportInterface::GetARTexture(FARSupportInterface *this,EARTextureType param_1)

{
  UARTexture *pUVar1;
  
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf4fbac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar1 = (UARTexture *)(**(code **)(this->ARImplemention->_padding_ + 0x130))();
    return pUVar1;
  }
  return (UARTexture *)0x0;
}

// GetAlignmentTransform @ 14cf4fd00

TTransform<double> * __thiscall
FARSupportInterface::GetAlignmentTransform(FARSupportInterface *this)

{
  return &this->AlignmentTransform;
}

// GetAllPins @ 14cf50250

TArray<UARPin_*,TSizedDefaultAllocator<32>_> * __thiscall
FARSupportInterface::GetAllPins
          (FARSupportInterface *this,
          TArray<UARPin_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
    (**(code **)(this->ARImplemention->_padding_ + 0x68))();
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetAllTrackedGeometries @ 14cf50510

TArray<UARTrackedGeometry_*,TSizedDefaultAllocator<32>_> * __thiscall
FARSupportInterface::GetAllTrackedGeometries
          (FARSupportInterface *this,
          TArray<UARTrackedGeometry_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
    (**(code **)(this->ARImplemention->_padding_ + 0x60))();
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetCameraIntrinsics @ 14cf50690

bool __thiscall
FARSupportInterface::GetCameraIntrinsics(FARSupportInterface *this,FARCameraIntrinsics *param_1)

{
  undefined1 uVar1;
  
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf5069c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(this->ARImplemention->_padding_ + 0x1d0))();
    return (bool)uVar1;
  }
  return false;
}

// GetCandidateObject @ 14cf507e0

TSharedPtr<FARGetCandidateObjectAsyncTask,1> * __thiscall
FARSupportInterface::GetCandidateObject
          (FARSupportInterface *this,
          TSharedPtr<FARGetCandidateObjectAsyncTask,1> *__return_storage_ptr__,
          TVector<double> *param_1,TVector<double> *param_2)

{
  IARSystemSupport *pIVar1;
  double local_48;
  double dStack_40;
  double local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  pIVar1 = this->ARImplemention;
  if (pIVar1 != (IARSystemSupport *)0x0) {
    local_48 = (param_2->field0_0x0)._s_0.X;
    dStack_40 = (param_2->field0_0x0)._s_0.Y;
    local_38 = (param_2->field0_0x0)._s_0.Z;
    local_28 = *(undefined4 *)&param_1->field0_0x0;
    uStack_24 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
    uStack_20 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
    uStack_1c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
    local_18 = (param_1->field0_0x0)._s_0.Z;
    (**(code **)(pIVar1->_padding_ + 200))(pIVar1,local_18,&local_28,&local_48);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FARGetCandidateObjectAsyncTask *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetCurrentLightEstimate @ 14cf509c0

UARLightEstimate * __thiscall
FARSupportInterface::GetCurrentLightEstimate(FARSupportInterface *this)

{
  UARLightEstimate *pUVar1;
  
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf509cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar1 = (UARLightEstimate *)(**(code **)(this->ARImplemention->_padding_ + 0x90))();
    return pUVar1;
  }
  return (UARLightEstimate *)0x0;
}

// GetGameThreadARFrameRawPointer @ 14cf50f60

void * __thiscall FARSupportInterface::GetGameThreadARFrameRawPointer(FARSupportInterface *this)

{
  void *pvVar1;
  
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf50f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(**(code **)(this->ARImplemention->_padding_ + 0x100))();
    return pvVar1;
  }
  return (void *)0x0;
}

// GetNumberOfTrackedFacesSupported @ 14cf52e70

int __thiscall FARSupportInterface::GetNumberOfTrackedFacesSupported(FARSupportInterface *this)

{
  int iVar1;
  
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf52e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(this->ARImplemention->_padding_ + 0x128))();
    return iVar1;
  }
  return 0;
}

// GetPointCloud @ 14cf53580

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __thiscall
FARSupportInterface::GetPointCloud
          (FARSupportInterface *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
    (**(code **)(this->ARImplemention->_padding_ + 0xe8))();
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetReferencerName @ 14cf55ef0

FString * __thiscall
FARSupportInterface::GetReferencerName(FARSupportInterface *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FARSupportInterface");
  return __return_storage_ptr__;
}

// GetSessionConfig @ 14cf55f80

UARSessionConfig * __thiscall FARSupportInterface::GetSessionConfig(FARSupportInterface *this)

{
  code *pcVar1;
  bool bVar2;
  UARSessionConfig *pUVar3;
  
  if ((this->ARSettings).field0_0x0.DebugPtr != (UARSessionConfig *)0x0) {
    return (this->ARSettings).field0_0x0.DebugPtr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ARSettings != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Private\\ARSupportInterface.cpp"
                     ,0x32,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UARSessionConfig *)(*pcVar1)();
    return pUVar3;
  }
  return (this->ARSettings).field0_0x0.DebugPtr;
}

// GetSupportedVideoFormats @ 14cf56270

TArray<FARVideoFormat,TSizedDefaultAllocator<32>_> * __thiscall
FARSupportInterface::GetSupportedVideoFormats
          (FARSupportInterface *this,
          TArray<FARVideoFormat,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EARSessionType param_1)

{
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
    (**(code **)(this->ARImplemention->_padding_ + 0xe0))();
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetTracked2DPose @ 14cf56480

TArray<FARPose2D,TSizedDefaultAllocator<32>_> * __thiscall
FARSupportInterface::GetTracked2DPose
          (FARSupportInterface *this,
          TArray<FARPose2D,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
    (**(code **)(this->ARImplemention->_padding_ + 0x110))();
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetTrackingQuality @ 14cf564f0

EARTrackingQuality __thiscall FARSupportInterface::GetTrackingQuality(FARSupportInterface *this)

{
  EARTrackingQuality EVar1;
  
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf564fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar1 = (**(code **)(this->ARImplemention->_padding_ + 0x10))();
    return EVar1;
  }
  return NotTracking;
}

// GetTrackingQualityReason @ 14cf56610

EARTrackingQualityReason __thiscall
FARSupportInterface::GetTrackingQualityReason(FARSupportInterface *this)

{
  EARTrackingQualityReason EVar1;
  
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf5661c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar1 = (**(code **)(this->ARImplemention->_padding_ + 0x18))();
    return EVar1;
  }
  return None;
}

// GetWorldMappingStatus @ 14cf567b0

EARWorldMappingState __thiscall
FARSupportInterface::GetWorldMappingStatus(FARSupportInterface *this)

{
  EARWorldMappingState EVar1;
  
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf567bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar1 = (**(code **)(this->ARImplemention->_padding_ + 0xd8))();
    return EVar1;
  }
  return NotAvailable;
}

// GetXRTrackingSystem @ 14cf569b0

IXRTrackingSystem * __thiscall FARSupportInterface::GetXRTrackingSystem(FARSupportInterface *this)

{
  return this->XRTrackingSystem;
}

// InitializeARSystem @ 14cf56e40

void __thiscall FARSupportInterface::InitializeARSystem(FARSupportInterface *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  FWeakReferencer<1> FVar5;
  FWeakReferencer<1> FVar6;
  IModularFeatures *pIVar7;
  TSharedRef<FARSupportInterface,1> *pTVar8;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar9;
  TSharedRef<FARSupportInterface,1> local_18;
  
  pIVar7 = IModularFeatures::Get();
  pTVar9 = &this->OnARSessionStarted;
  if (this == (FARSupportInterface *)0x0) {
    pTVar9 = (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
  }
  pcVar3 = *(code **)((longlong)*pIVar7 + 0x28);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FName___cdecl_FARSupportInterface::GetModularFeatureName(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_FARSupportInterface::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_FARSupportInterface::GetModularFeatureName(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_FARSupportInterface::GetModularFeatureName(void)'
                    ::__l2::ModularFeatureName,L"ARSystem");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_FARSupportInterface::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  (*pcVar3)(pIVar7,`public:_static_class_FName___cdecl_FARSupportInterface::GetModularFeatureName(void)'
                   ::__l2::ModularFeatureName,pTVar9);
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
    pTVar8 = TSharedFromThis<FARSupportInterface,1>::AsShared
                       ((TSharedFromThis<FARSupportInterface,1> *)&this->field_0x10,&local_18);
    UARBlueprintLibrary::RegisteredARSystem.Object = pTVar8->Object;
    pTVar4 = (pTVar8->SharedReferenceCount).ReferenceController;
    FVar6 = UARBlueprintLibrary::RegisteredARSystem.WeakReferenceCount;
    if (pTVar4 != UARBlueprintLibrary::RegisteredARSystem.WeakReferenceCount.ReferenceController) {
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
      }
      FVar5.ReferenceController =
           UARBlueprintLibrary::RegisteredARSystem.WeakReferenceCount.ReferenceController;
      FVar6.ReferenceController = pTVar4;
      if (UARBlueprintLibrary::RegisteredARSystem.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(UARBlueprintLibrary::RegisteredARSystem.WeakReferenceCount.ReferenceController)->
                  WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
        }
      }
    }
    UARBlueprintLibrary::RegisteredARSystem.WeakReferenceCount.ReferenceController =
         FVar6.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    pTVar8 = TSharedFromThis<FARSupportInterface,1>::AsShared
                       ((TSharedFromThis<FARSupportInterface,1> *)&this->field_0x10,&local_18);
    UARBaseAsyncTaskBlueprintProxy::RegisteredARSystem.Object = pTVar8->Object;
    pTVar4 = (pTVar8->SharedReferenceCount).ReferenceController;
    FVar6 = UARBaseAsyncTaskBlueprintProxy::RegisteredARSystem.WeakReferenceCount;
    if (pTVar4 != UARBaseAsyncTaskBlueprintProxy::RegisteredARSystem.WeakReferenceCount.
                  ReferenceController) {
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
      }
      FVar5.ReferenceController =
           UARBaseAsyncTaskBlueprintProxy::RegisteredARSystem.WeakReferenceCount.ReferenceController
      ;
      FVar6.ReferenceController = pTVar4;
      if (UARBaseAsyncTaskBlueprintProxy::RegisteredARSystem.WeakReferenceCount.ReferenceController
          != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(UARBaseAsyncTaskBlueprintProxy::RegisteredARSystem.WeakReferenceCount.
                  ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
        }
      }
    }
    UARBaseAsyncTaskBlueprintProxy::RegisteredARSystem.WeakReferenceCount.ReferenceController =
         FVar6.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    (**(code **)this->ARImplemention->_padding_)();
  }
  return;
}

// IsARAvailable @ 14cf572a0

bool __thiscall FARSupportInterface::IsARAvailable(FARSupportInterface *this)

{
  undefined1 uVar1;
  
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf572ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(this->ARImplemention->_padding_ + 0x40))();
    return (bool)uVar1;
  }
  return false;
}

// IsLocalPinSaveSupported @ 14cf576b0

bool __thiscall FARSupportInterface::IsLocalPinSaveSupported(FARSupportInterface *this)

{
  undefined1 uVar1;
  
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf576bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(this->ARImplemention->_padding_ + 0x1a0))();
    return (bool)uVar1;
  }
  return false;
}

// IsSceneReconstructionSupported @ 14cf57730

bool __thiscall
FARSupportInterface::IsSceneReconstructionSupported
          (FARSupportInterface *this,EARSessionType param_1,EARSceneReconstruction param_2)

{
  undefined1 uVar1;
  
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf5773c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(this->ARImplemention->_padding_ + 0x118))();
    return (bool)uVar1;
  }
  return false;
}

// IsSessionTrackingFeatureSupported @ 14cf57860

bool __thiscall
FARSupportInterface::IsSessionTrackingFeatureSupported
          (FARSupportInterface *this,EARSessionType param_1,EARSessionTrackingFeature param_2)

{
  undefined1 uVar1;
  
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf5786c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(this->ARImplemention->_padding_ + 0x108))();
    return (bool)uVar1;
  }
  return false;
}

// IsSessionTypeSupported @ 14cf57990

bool __thiscall
FARSupportInterface::IsSessionTypeSupported(FARSupportInterface *this,EARSessionType param_1)

{
  undefined1 uVar1;
  
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf5799c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(this->ARImplemention->_padding_ + 0x70))();
    return (bool)uVar1;
  }
  return false;
}

// LineTraceTrackedObjects @ 14cf57d40

TArray<FARTraceResult,TSizedDefaultAllocator<32>_> * __thiscall
FARSupportInterface::LineTraceTrackedObjects
          (FARSupportInterface *this,
          TArray<FARTraceResult,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TVector2<double> *param_1,EARLineTraceChannels param_2)

{
  IARSystemSupport *pIVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pIVar1 = this->ARImplemention;
  if (pIVar1 != (IARSystemSupport *)0x0) {
    local_18 = *(undefined4 *)&param_1->field0_0x0;
    uStack_14 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
    uStack_10 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
    uStack_c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
    (**(code **)(pIVar1->_padding_ + 0x58))(pIVar1,__return_storage_ptr__,&local_18);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// LineTraceTrackedObjects @ 14cf57d90

TArray<FARTraceResult,TSizedDefaultAllocator<32>_> * __thiscall
FARSupportInterface::LineTraceTrackedObjects
          (FARSupportInterface *this,
          TArray<FARTraceResult,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TVector<double> *param_1,TVector<double> *param_2,EARLineTraceChannels param_3)

{
  IARSystemSupport *pIVar1;
  double local_48;
  double dStack_40;
  double local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  pIVar1 = this->ARImplemention;
  if (pIVar1 != (IARSystemSupport *)0x0) {
    local_48 = (param_2->field0_0x0)._s_0.X;
    dStack_40 = (param_2->field0_0x0)._s_0.Y;
    local_38 = (param_2->field0_0x0)._s_0.Z;
    local_28 = *(undefined4 *)&param_1->field0_0x0;
    uStack_24 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
    uStack_20 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
    uStack_1c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
    local_18 = (param_1->field0_0x0)._s_0.Z;
    (**(code **)(pIVar1->_padding_ + 0x50))(pIVar1,local_18,&local_28,&local_48,param_3);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// LoadARPins @ 14cf57fe0

void __thiscall
FARSupportInterface::LoadARPins
          (FARSupportInterface *this,
          TMap<FName,UARPin_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UARPin_*,0>_>
          *param_1)

{
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf57fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->ARImplemention->_padding_ + 0x1b0))();
    return;
  }
  return;
}

// PauseARSession @ 14cf5a240

void __thiscall FARSupportInterface::PauseARSession(FARSupportInterface *this)

{
  IARSystemSupport *pIVar1;
  void *local_28 [2];
  char local_18;
  
  pIVar1 = this->ARImplemention;
  if (pIVar1 != (IARSystemSupport *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))(pIVar1,local_28);
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
    if (local_18 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00014cf5a28d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->ARImplemention->_padding_ + 0x28))();
      return;
    }
  }
  return;
}

// PinComponent @ 14cf5a3b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UARPin * __thiscall
FARSupportInterface::PinComponent
          (FARSupportInterface *this,USceneComponent *param_1,TTransform<double> *param_2,
          UARTrackedGeometry *param_3,FName param_4)

{
  UARPin *pUVar1;
  
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf5a3c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar1 = (UARPin *)(**(code **)(this->ARImplemention->_padding_ + 0xa0))();
    return pUVar1;
  }
  return (UARPin *)0x0;
}

// PinComponent @ 14cf5a3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UARPin * __thiscall
FARSupportInterface::PinComponent
          (FARSupportInterface *this,USceneComponent *param_1,FARTraceResult *param_2,FName param_3)

{
  IARSystemSupport *pIVar1;
  UARTrackedGeometry *pUVar2;
  code *pcVar3;
  TTransform<double> *pTVar4;
  UARPin *pUVar5;
  undefined1 auStack_c8 [32];
  FName local_a8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pIVar1 = this->ARImplemention;
  if (pIVar1 == (IARSystemSupport *)0x0) {
    pUVar5 = (UARPin *)0x0;
  }
  else {
    pUVar2 = (param_2->TrackedGeometry).field0_0x0.DebugPtr;
    pcVar3 = *(code **)(pIVar1->_padding_ + 0xa0);
    pTVar4 = FARTraceResult::GetLocalToWorldTransform(param_2,&local_98);
    local_a8 = param_3;
    pUVar5 = (UARPin *)(*pcVar3)(pIVar1,param_1,pTVar4,pUVar2);
  }
  return pUVar5;
}

// PinComponent @ 14cf5a470

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FARSupportInterface::PinComponent
          (FARSupportInterface *this,USceneComponent *param_1,UARPin *param_2)

{
  undefined1 uVar1;
  
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf5a47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(this->ARImplemention->_padding_ + 0xa8))();
    return (bool)uVar1;
  }
  return false;
}

// RemoveAllSavedARPins @ 14cf5c280

void __thiscall FARSupportInterface::RemoveAllSavedARPins(FARSupportInterface *this)

{
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf5c28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->ARImplemention->_padding_ + 0x1c8))();
    return;
  }
  return;
}

// RemovePin @ 14cf5c570

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FARSupportInterface::RemovePin(FARSupportInterface *this,UARPin *param_1)

{
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf5c57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->ARImplemention->_padding_ + 0xb0))();
    return;
  }
  return;
}

// RemoveSavedARPin @ 14cf5c670

void __thiscall FARSupportInterface::RemoveSavedARPin(FARSupportInterface *this,FName param_1)

{
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf5c67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->ARImplemention->_padding_ + 0x1c0))();
    return;
  }
  return;
}

// ResizeXRCamera @ 14cf5d170

TIntPoint<int> __thiscall
FARSupportInterface::ResizeXRCamera(FARSupportInterface *this,TIntPoint<int> *param_1)

{
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
    (**(code **)(this->ARImplemention->_padding_ + 0x88))();
    return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
  }
  param_1->field0_0x0 = (TIntPoint<int>_u_0)0x0;
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// SaveARPin @ 14cf5d2d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FARSupportInterface::SaveARPin(FARSupportInterface *this,FName param_1,UARPin *param_2)

{
  undefined1 uVar1;
  
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf5d2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(this->ARImplemention->_padding_ + 0x1b8))();
    return (bool)uVar1;
  }
  return false;
}

// SaveWorld @ 14cf5d400

TSharedPtr<FARSaveWorldAsyncTask,1> * __thiscall
FARSupportInterface::SaveWorld
          (FARSupportInterface *this,TSharedPtr<FARSaveWorldAsyncTask,1> *__return_storage_ptr__)

{
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
    (**(code **)(this->ARImplemention->_padding_ + 0xd0))();
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FARSaveWorldAsyncTask *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// SetAlignmentTransform @ 14cf5f720

void __thiscall
FARSupportInterface::SetAlignmentTransform(FARSupportInterface *this,TTransform<double> *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel local_38;
  
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
    (**(code **)(this->ARImplemention->_padding_ + 0x48))();
  }
  dVar5 = (param_1->Rotation).XY.m128d_f64[1];
  (this->AlignmentTransform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (this->AlignmentTransform).Rotation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Rotation).ZW.m128d_f64[1];
  (this->AlignmentTransform).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (this->AlignmentTransform).Rotation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Translation).XY.m128d_f64[1];
  (this->AlignmentTransform).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  (this->AlignmentTransform).Translation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Translation).ZW.m128d_f64[1];
  (this->AlignmentTransform).Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  (this->AlignmentTransform).Translation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Scale3D).XY.m128d_f64[1];
  (this->AlignmentTransform).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (this->AlignmentTransform).Scale3D.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Scale3D).ZW.m128d_f64[1];
  (this->AlignmentTransform).Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  (this->AlignmentTransform).Scale3D.ZW.m128d_f64[1] = dVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnAlignmentTransformUpdated,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->OnAlignmentTransformUpdated).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar6 = false;
  uVar10 = *(int *)&(this->OnAlignmentTransformUpdated).field_0x10 - 1;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 << 4;
    bVar6 = false;
    do {
      uVar9 = 0;
      if ((int)uVar10 < *(int *)&(this->OnAlignmentTransformUpdated).field_0x10) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnAlignmentTransformUpdated).field_0x8;
      if (((*(int *)(lVar11 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar11 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar8 = (**(code **)(*plVar3 + 0x68))(), cVar8 == '\0')) {
        bVar6 = true;
      }
      lVar11 = lVar11 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  puVar1 = &(this->OnAlignmentTransformUpdated).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar6) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnAlignmentTransformUpdated,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// SetEnabledXRCamera @ 14cf5fb90

void __thiscall FARSupportInterface::SetEnabledXRCamera(FARSupportInterface *this,bool param_1)

{
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf5fb9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->ARImplemention->_padding_ + 0x80))();
    return;
  }
  return;
}

// StartARGameFrame @ 14cf60a20

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
FARSupportInterface::StartARGameFrame(FARSupportInterface *this,FWorldContext *param_1)

{
  undefined1 uVar1;
  
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf60a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(this->ARImplemention->_padding_ + 8))();
    return (bool)uVar1;
  }
  return false;
}

// StartARSession @ 14cf60a40

void __thiscall
FARSupportInterface::StartARSession(FARSupportInterface *this,UARSessionConfig *param_1)

{
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UARSessionConfig *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->ARSettings).field0_0x0.DebugPtr = param_1;
    (**(code **)(this->ARImplemention->_padding_ + 0x20))(this->ARImplemention,param_1);
  }
  return;
}

// StopARSession @ 14cf61700

void __thiscall FARSupportInterface::StopARSession(FARSupportInterface *this)

{
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf6170c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->ARImplemention->_padding_ + 0x30))();
    return;
  }
  return;
}

// ToggleARCapture @ 14cf63800

bool __thiscall
FARSupportInterface::ToggleARCapture(FARSupportInterface *this,bool param_1,EARCaptureType param_2)

{
  undefined1 uVar1;
  
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf6380c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(this->ARImplemention->_padding_ + 0x78))();
    return (bool)uVar1;
  }
  return false;
}

// TryGetOrCreatePinForNativeResource @ 14cf639f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FARSupportInterface::TryGetOrCreatePinForNativeResource
          (FARSupportInterface *this,void *param_1,FString *param_2,UARPin **param_3)

{
  undefined1 uVar1;
  
  *param_3 = (UARPin *)0x0;
  if (this->ARImplemention != (IARSystemSupport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf63a03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(this->ARImplemention->_padding_ + 0xb8))();
    return (bool)uVar1;
  }
  return false;
}

