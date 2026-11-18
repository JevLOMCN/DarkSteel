// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 14

// StaticClass @ 14cf32500

UClass * __cdecl UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy",
               &Z_Registration_Info_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.
                InnerSingleton,
               StaticRegisterNativesUCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy,0xb0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy>,
               InternalVTableHelperCtorCaller<UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy>,
               local_res8,UARBaseAsyncTaskBlueprintProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.
         InnerSingleton;
}

// UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy @ 14cf436d0

UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy * __thiscall
UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::
UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
          (UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy *this,FVTableHelper *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__UBlueprintAsyncActionBase__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  this->_padding_ = 0;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailed = 0;
  *(undefined8 *)&(this->OnFailed).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailed).field_0x10 = 0;
  (this->Longitude).bIsSet = false;
  (this->Latitude).bIsSet = false;
  (this->MyTask).Object = (FCheckGeoTrackingAvailabilityAsyncTask *)0x0;
  (this->MyTask).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Error).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Error).Data.ArrayNum = 0;
  (this->Error).Data.ArrayMax = 0;
  return this;
}

// UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy @ 14cf43760

UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy * __thiscall
UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::
UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
          (UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy *this,FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__UBlueprintAsyncActionBase__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 1;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailed = 0;
  *(undefined8 *)&(this->OnFailed).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailed).field_0x10 = 0;
  (this->Longitude).bIsSet = false;
  (this->Latitude).bIsSet = false;
  (this->MyTask).Object = (FCheckGeoTrackingAvailabilityAsyncTask *)0x0;
  (this->MyTask).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Error).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Error).Data.ArrayNum = 0;
  (this->Error).Data.ArrayMax = 0;
  return this;
}

// ~UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy @ 14cf44de0

void __thiscall
UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::
~UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
          (UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UBlueprintAsyncActionBase__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  pFVar1 = (this->Error).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyTask).SharedReferenceCount.ReferenceController);
  pvVar2 = *(void **)&(this->OnFailed).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailed);
  pvVar2 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  this->_padding_ =
       (longlong)&UARBaseAsyncTaskBlueprintProxy::_vftable__for__UBlueprintAsyncActionBase__;
  this->_padding_ = (longlong)&UARBaseAsyncTaskBlueprintProxy::_vftable__for__FTickableGameObject__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  return;
}

// Activate @ 14cf49200

void __thiscall
UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::Activate
          (UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy *this)

{
  TSharedPtr<FCheckGeoTrackingAvailabilityAsyncTask,1> *pTVar1;
  float fVar2;
  code *pcVar3;
  UARGeoTrackingSupport *pUVar4;
  float *pfVar5;
  undefined8 *puVar6;
  FCheckGeoTrackingAvailabilityAsyncTask *local_38;
  FSharedReferencer<1> local_30;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  pUVar4 = UARGeoTrackingSupport::GetGeoTrackingSupport();
  if (pUVar4 != (UARGeoTrackingSupport *)0x0) {
    if (((this->Longitude).bIsSet == false) || ((this->Latitude).bIsSet == false)) {
      puVar6 = (undefined8 *)
               (**(code **)(*(longlong *)pUVar4 + 0x2b8))(pUVar4,local_28,&this->Error);
    }
    else {
      pcVar3 = *(code **)(*(longlong *)pUVar4 + 0x2b0);
      pfVar5 = TOptional<float>::operator*(&this->Latitude);
      fVar2 = *pfVar5;
      pfVar5 = TOptional<float>::operator*(&this->Longitude);
      puVar6 = (undefined8 *)(*pcVar3)(pUVar4,local_28,*pfVar5,fVar2,&this->Error);
    }
    pTVar1 = &this->MyTask;
    if (pTVar1 != (TSharedPtr<FCheckGeoTrackingAvailabilityAsyncTask,1> *)puVar6) {
      pTVar1->Object = (FCheckGeoTrackingAvailabilityAsyncTask *)*puVar6;
      *puVar6 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MyTask).SharedReferenceCount,(FSharedReferencer<1> *)(puVar6 + 1));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    local_38 = pTVar1->Object;
    if (local_38 != (FCheckGeoTrackingAvailabilityAsyncTask *)0x0) {
      local_30.ReferenceController = (this->MyTask).SharedReferenceCount.ReferenceController;
      if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_30.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((FCheckGeoTrackingAvailabilityAsyncTask **)&this->_padding_ != &local_38) {
        this->_padding_ = (longlong)local_38;
        local_38 = (FCheckGeoTrackingAvailabilityAsyncTask *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&this->_padding_,&local_30);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_30.ReferenceController);
    }
  }
  return;
}

// CheckGeoTrackingAvailability @ 14cf4bba0

UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy * __cdecl
UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::CheckGeoTrackingAvailability(UObject *param_1)

{
  UObject *pUVar1;
  UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = NewObject<UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy>(pUVar1);
  (**(code **)(pUVar2->_padding_ + 0x2c0))(pUVar2,param_1);
  return pUVar2;
}

// CheckGeoTrackingAvailabilityAtLocation @ 14cf4bbf0

UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy * __cdecl
UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::CheckGeoTrackingAvailabilityAtLocation
          (UObject *param_1,float param_2,float param_3)

{
  UObject *pUVar1;
  UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy *pUVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = NewObject<UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy>(pUVar1);
  (**(code **)(pUVar2->_padding_ + 0x2c0))(pUVar2,param_1);
  if ((TOptional<float> *)local_res10 != &pUVar2->Longitude) {
    (pUVar2->Longitude).TypedValue = param_2;
    (pUVar2->Longitude).bIsSet = true;
  }
  if ((TOptional<float> *)local_res18 != &pUVar2->Latitude) {
    (pUVar2->Latitude).TypedValue = param_3;
    (pUVar2->Latitude).bIsSet = true;
  }
  return pUVar2;
}

// FGeoTrackingAvailabilityDelegate_DelegateWrapper @ 14cf4eee0

void __cdecl
UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::
FGeoTrackingAvailabilityDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,bool param_2,
          FString *param_3)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  undefined1 local_28 [8];
  FString local_20;
  
  local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Data.ArrayNum = 0;
  local_20.Data.ArrayMax = 0;
  local_28[0] = param_2;
  if (&local_20 != param_3) {
    uVar1 = (param_3->Data).ArrayNum;
    _Src = (param_3->Data).AllocatorInstance.Data;
    local_20.Data.ArrayMax = 0;
    local_20.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_20,uVar1,&local_20.Data.ArrayMax);
      memcpy(local_20.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_28);
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 14cf55cb0

UClass * __cdecl UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy",
               &Z_Registration_Info_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.
                InnerSingleton,
               StaticRegisterNativesUCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy,0xb0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy>,
               InternalVTableHelperCtorCaller<UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy>,
               local_res8,UARBaseAsyncTaskBlueprintProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.
         InnerSingleton;
}

// ReportFailure @ 14cf5c740

void __thiscall
UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::ReportFailure
          (UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy *this)

{
  FGeoTrackingAvailabilityDelegate *this_00;
  FCheckGeoTrackingAvailabilityAsyncTask *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  pFVar1 = (this->MyTask).Object;
  this_00 = &this->OnFailed;
  if (pFVar1 == (FCheckGeoTrackingAvailabilityAsyncTask *)0x0) {
    pFVar2 = ::FString::FString(&local_18,&this->Error);
    FGeoTrackingAvailabilityDelegate::Broadcast(this_00,false,pFVar2);
    return;
  }
  if ((int)pFVar1->_padding_ != 0) {
    ::FString::FString(&local_18,(FString *)&pFVar1->_padding_);
    FGeoTrackingAvailabilityDelegate::Broadcast(this_00,false,&local_18);
    return;
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FGeoTrackingAvailabilityDelegate::Broadcast(this_00,false,&local_18);
  return;
}

// ReportSuccess @ 14cf5c9b0

/* WARNING: Removing unreachable block (ram,0x00014cf5ca8f) */
/* WARNING: Removing unreachable block (ram,0x00014cf5ca61) */
/* WARNING: Removing unreachable block (ram,0x00014cf5cac4) */

void __thiscall
UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::ReportSuccess
          (UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 local_28 [8];
  void *local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  if (((this->MyTask).Object == (FCheckGeoTrackingAvailabilityAsyncTask *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MyTask",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Private\\ARGeoTrackingSupport.cpp"
                         ,0x5c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((this->MyTask).Object == (FCheckGeoTrackingAvailabilityAsyncTask *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_20 = (void *)0x0;
  local_14 = 0;
  local_18 = 0;
  local_28[0] = ((this->MyTask).Object)->bIsAvailable != false;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSuccess,local_28);
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}

// StaticRegisterNativesUCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy @ 14cf61680

void __cdecl
UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::
StaticRegisterNativesUCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr =
       Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCheckGeoTrackingAvailability @ 14cf6c020

void __cdecl
UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::execCheckGeoTrackingAvailability
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  UObject *pUVar3;
  UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy *pUVar4;
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  uVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy>(pUVar3);
  (**(code **)(pUVar4->_padding_ + 0x2c0))(pUVar4,uVar2);
  *(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy **)param_3 = pUVar4;
  return;
}

// execCheckGeoTrackingAvailabilityAtLocation @ 14cf6c0d0

void __cdecl
UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::execCheckGeoTrackingAvailabilityAtLocation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  UObject *pUVar5;
  UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy *pUVar6;
  float local_res10 [2];
  float local_res18 [2];
  undefined8 local_res20;
  undefined1 local_48 [8];
  undefined1 local_40 [40];
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar4 = local_res20;
  fVar3 = local_res18[0];
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar5 = GetTransientPackageAsObject();
  pUVar6 = NewObject<UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy>(pUVar5);
  (**(code **)(pUVar6->_padding_ + 0x2c0))(pUVar6,uVar4);
  if ((TOptional<float> *)local_48 != &pUVar6->Longitude) {
    (pUVar6->Longitude).TypedValue = fVar3;
    (pUVar6->Longitude).bIsSet = true;
  }
  if ((TOptional<float> *)local_40 != &pUVar6->Latitude) {
    (pUVar6->Latitude).TypedValue = fVar2;
    (pUVar6->Latitude).bIsSet = true;
  }
  *(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy **)param_3 = pUVar6;
  return;
}

