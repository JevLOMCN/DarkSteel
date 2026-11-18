// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 12

// StaticClass @ 14cf32d70

UClass * __cdecl UGetGeoLocationAsyncTaskBlueprintProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGetGeoLocationAsyncTaskBlueprintProxy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"GetGeoLocationAsyncTaskBlueprintProxy",
               &Z_Registration_Info_UClass_UGetGeoLocationAsyncTaskBlueprintProxy.InnerSingleton,
               StaticRegisterNativesUGetGeoLocationAsyncTaskBlueprintProxy,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGetGeoLocationAsyncTaskBlueprintProxy>,
               InternalVTableHelperCtorCaller<UGetGeoLocationAsyncTaskBlueprintProxy>,local_res8,
               UARBaseAsyncTaskBlueprintProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGetGeoLocationAsyncTaskBlueprintProxy.InnerSingleton;
}

// UGetGeoLocationAsyncTaskBlueprintProxy @ 14cf43800

UGetGeoLocationAsyncTaskBlueprintProxy * __thiscall
UGetGeoLocationAsyncTaskBlueprintProxy::UGetGeoLocationAsyncTaskBlueprintProxy
          (UGetGeoLocationAsyncTaskBlueprintProxy *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__UBlueprintAsyncActionBase__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailed = 0;
  *(undefined8 *)&(this->OnFailed).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailed).field_0x10 = 0;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WorldPosition).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WorldPosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->WorldPosition).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->MyTask).Object = (FGetGeoLocationAsyncTask *)0x0;
  (this->MyTask).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Error).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Error).Data.ArrayNum = 0;
  (this->Error).Data.ArrayMax = 0;
  return this;
}

// UGetGeoLocationAsyncTaskBlueprintProxy @ 14cf438b0

UGetGeoLocationAsyncTaskBlueprintProxy * __thiscall
UGetGeoLocationAsyncTaskBlueprintProxy::UGetGeoLocationAsyncTaskBlueprintProxy
          (UGetGeoLocationAsyncTaskBlueprintProxy *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__UBlueprintAsyncActionBase__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailed = 0;
  *(undefined8 *)&(this->OnFailed).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailed).field_0x10 = 0;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  *(undefined1 *)&this->_padding_ = 1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WorldPosition).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WorldPosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->WorldPosition).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->MyTask).Object = (FGetGeoLocationAsyncTask *)0x0;
  (this->MyTask).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Error).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Error).Data.ArrayNum = 0;
  (this->Error).Data.ArrayMax = 0;
  return this;
}

// ~UGetGeoLocationAsyncTaskBlueprintProxy @ 14cf44ea0

void __thiscall
UGetGeoLocationAsyncTaskBlueprintProxy::~UGetGeoLocationAsyncTaskBlueprintProxy
          (UGetGeoLocationAsyncTaskBlueprintProxy *this)

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

// Activate @ 14cf49330

void __thiscall
UGetGeoLocationAsyncTaskBlueprintProxy::Activate(UGetGeoLocationAsyncTaskBlueprintProxy *this)

{
  TSharedPtr<FGetGeoLocationAsyncTask,1> *pTVar1;
  UARGeoTrackingSupport *pUVar2;
  undefined8 *puVar3;
  FGetGeoLocationAsyncTask *local_28;
  FSharedReferencer<1> local_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pUVar2 = UARGeoTrackingSupport::GetGeoTrackingSupport();
  if (pUVar2 != (UARGeoTrackingSupport *)0x0) {
    puVar3 = (undefined8 *)
             (**(code **)(*(longlong *)pUVar2 + 0x2c0))
                       (pUVar2,local_18,&this->WorldPosition,&this->Error);
    pTVar1 = &this->MyTask;
    if (pTVar1 != (TSharedPtr<FGetGeoLocationAsyncTask,1> *)puVar3) {
      pTVar1->Object = (FGetGeoLocationAsyncTask *)*puVar3;
      *puVar3 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MyTask).SharedReferenceCount,(FSharedReferencer<1> *)(puVar3 + 1));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    local_28 = pTVar1->Object;
    if (local_28 != (FGetGeoLocationAsyncTask *)0x0) {
      local_20.ReferenceController = (this->MyTask).SharedReferenceCount.ReferenceController;
      if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_20.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((FGetGeoLocationAsyncTask **)&this->_padding_ != &local_28) {
        this->_padding_ = (longlong)local_28;
        local_28 = (FGetGeoLocationAsyncTask *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&this->_padding_,&local_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_20.ReferenceController);
      return;
    }
  }
  return;
}

// FGetGeoLocationDelegate_DelegateWrapper @ 14cf4ef90

void __cdecl
UGetGeoLocationAsyncTaskBlueprintProxy::FGetGeoLocationDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,float param_2,float param_3
          ,float param_4,FString *param_5)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  float local_28;
  float local_24;
  float local_20;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_28 = param_2;
  local_24 = param_3;
  local_20 = param_4;
  if (&local_18 != param_5) {
    uVar1 = (param_5->Data).ArrayNum;
    _Src = (param_5->Data).AllocatorInstance.Data;
    local_18.Data.ArrayMax = 0;
    local_18.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_18,uVar1,&local_18.Data.ArrayMax);
      memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetGeoLocationAtWorldPosition @ 14cf51070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGetGeoLocationAsyncTaskBlueprintProxy * __cdecl
UGetGeoLocationAsyncTaskBlueprintProxy::GetGeoLocationAtWorldPosition
          (UObject *param_1,TVector<double> *param_2)

{
  double dVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UGetGeoLocationAsyncTaskBlueprintProxy *pUVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar2 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  local_98._8_8_ = pUVar2;
  pUVar4 = (UGetGeoLocationAsyncTaskBlueprintProxy *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar5 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  (**(code **)(pUVar4->_padding_ + 0x2c0))(pUVar4,param_1);
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (pUVar4->WorldPosition).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (pUVar4->WorldPosition).field0_0x0._s_0.Y = dVar1;
  (pUVar4->WorldPosition).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  return pUVar4;
}

// GetPrivateStaticClass @ 14cf55d70

UClass * __cdecl UGetGeoLocationAsyncTaskBlueprintProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGetGeoLocationAsyncTaskBlueprintProxy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"GetGeoLocationAsyncTaskBlueprintProxy",
               &Z_Registration_Info_UClass_UGetGeoLocationAsyncTaskBlueprintProxy.InnerSingleton,
               StaticRegisterNativesUGetGeoLocationAsyncTaskBlueprintProxy,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGetGeoLocationAsyncTaskBlueprintProxy>,
               InternalVTableHelperCtorCaller<UGetGeoLocationAsyncTaskBlueprintProxy>,local_res8,
               UARBaseAsyncTaskBlueprintProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGetGeoLocationAsyncTaskBlueprintProxy.InnerSingleton;
}

// ReportFailure @ 14cf5c7d0

void __thiscall
UGetGeoLocationAsyncTaskBlueprintProxy::ReportFailure(UGetGeoLocationAsyncTaskBlueprintProxy *this)

{
  FGetGeoLocationAsyncTask *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  pFVar1 = (this->MyTask).Object;
  if (pFVar1 == (FGetGeoLocationAsyncTask *)0x0) {
    pFVar2 = ::FString::FString(&local_18,&this->Error);
  }
  else if ((int)pFVar1->_padding_ == 0) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    pFVar2 = &local_18;
  }
  else {
    ::FString::FString(&local_18,(FString *)&pFVar1->_padding_);
    pFVar2 = &local_18;
  }
  FGetGeoLocationDelegate::Broadcast(&this->OnFailed,0.0,0.0,0.0,pFVar2);
  return;
}

// ReportSuccess @ 14cf5caf0

/* WARNING: Removing unreachable block (ram,0x00014cf5cc69) */
/* WARNING: Removing unreachable block (ram,0x00014cf5cc3b) */
/* WARNING: Removing unreachable block (ram,0x00014cf5cc9e) */

void __thiscall
UGetGeoLocationAsyncTaskBlueprintProxy::ReportSuccess(UGetGeoLocationAsyncTaskBlueprintProxy *this)

{
  float fVar1;
  float fVar2;
  FGetGeoLocationAsyncTask *pFVar3;
  code *pcVar4;
  bool bVar5;
  float local_48;
  float local_44;
  float local_40;
  void *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (((this->MyTask).Object == (FGetGeoLocationAsyncTask *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MyTask",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Private\\ARGeoTrackingSupport.cpp"
                         ,0x92,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->MyTask).Object == (FGetGeoLocationAsyncTask *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->MyTask).Object;
  fVar1 = pFVar3->Altitude;
  if ((pFVar3 == (FGetGeoLocationAsyncTask *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->MyTask).Object;
  fVar2 = pFVar3->Latitude;
  if ((pFVar3 == (FGetGeoLocationAsyncTask *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_38 = (void *)0x0;
  local_48 = ((this->MyTask).Object)->Longitude;
  local_2c = 0;
  local_30 = 0;
  local_44 = fVar2;
  local_40 = fVar1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSuccess,&local_48);
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// StaticRegisterNativesUGetGeoLocationAsyncTaskBlueprintProxy @ 14cf616c0

void __cdecl
UGetGeoLocationAsyncTaskBlueprintProxy::StaticRegisterNativesUGetGeoLocationAsyncTaskBlueprintProxy
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetGeoLocationAtWorldPosition @ 14cf6e1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UGetGeoLocationAsyncTaskBlueprintProxy::execGetGeoLocationAtWorldPosition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  undefined8 uVar17;
  UObject *pUVar18;
  UClass *pUVar19;
  longlong *plVar20;
  uchar *puVar21;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  uchar local_c0 [24];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c0);
  }
  uVar17 = local_c8;
  puVar21 = local_c0;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar21 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar18 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar18,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar19 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar19);
  local_a8._8_8_ = pUVar18;
  pUVar18 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar20 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  (**(code **)(*(longlong *)pUVar18 + 0x2c0))(pUVar18,uVar17);
  uVar2 = puVar21[1];
  uVar3 = puVar21[2];
  uVar4 = puVar21[3];
  uVar5 = puVar21[4];
  uVar6 = puVar21[5];
  uVar7 = puVar21[6];
  uVar8 = puVar21[7];
  uVar9 = puVar21[8];
  uVar10 = puVar21[9];
  uVar11 = puVar21[10];
  uVar12 = puVar21[0xb];
  uVar13 = puVar21[0xc];
  uVar14 = puVar21[0xd];
  uVar15 = puVar21[0xe];
  uVar16 = puVar21[0xf];
  pUVar18[3].field_0x8 = puVar21[0];
  pUVar18[3].field_0x9 = uVar2;
  pUVar18[3].field_0xa = uVar3;
  pUVar18[3].field_0xb = uVar4;
  pUVar18[3].field_0xc = uVar5;
  pUVar18[3].field_0xd = uVar6;
  pUVar18[3].field_0xe = uVar7;
  pUVar18[3].field_0xf = uVar8;
  pUVar18[3].field_0x10 = uVar9;
  pUVar18[3].field_0x11 = uVar10;
  pUVar18[3].field_0x12 = uVar11;
  pUVar18[3].field_0x13 = uVar12;
  pUVar18[3].field_0x14 = uVar13;
  pUVar18[3].field_0x15 = uVar14;
  pUVar18[3].field_0x16 = uVar15;
  pUVar18[3].field_0x17 = uVar16;
  uVar2 = puVar21[0x11];
  uVar3 = puVar21[0x12];
  uVar4 = puVar21[0x13];
  uVar5 = puVar21[0x14];
  uVar6 = puVar21[0x15];
  uVar7 = puVar21[0x16];
  uVar8 = puVar21[0x17];
  pUVar18[3].field_0x18 = puVar21[0x10];
  pUVar18[3].field_0x19 = uVar2;
  pUVar18[3].field_0x1a = uVar3;
  pUVar18[3].field_0x1b = uVar4;
  pUVar18[3].field_0x1c = uVar5;
  pUVar18[3].field_0x1d = uVar6;
  pUVar18[3].field_0x1e = uVar7;
  pUVar18[3].field_0x1f = uVar8;
  *(UObject **)param_3 = pUVar18;
  return;
}

