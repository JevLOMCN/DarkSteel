// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 21

// StaticClass @ 14cf32110

UClass * __cdecl UARGeoTrackingSupport::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARGeoTrackingSupport.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARGeoTrackingSupport",
               &Z_Registration_Info_UClass_UARGeoTrackingSupport.InnerSingleton,
               StaticRegisterNativesUARGeoTrackingSupport,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UARGeoTrackingSupport>,
               InternalVTableHelperCtorCaller<UARGeoTrackingSupport>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARGeoTrackingSupport.InnerSingleton;
}

// UARGeoTrackingSupport @ 14cf41830

UARGeoTrackingSupport * __thiscall
UARGeoTrackingSupport::UARGeoTrackingSupport(UARGeoTrackingSupport *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UARGeoTrackingSupport__6B_;
  return this;
}

// UARGeoTrackingSupport @ 14cf41860

UARGeoTrackingSupport * __thiscall
UARGeoTrackingSupport::UARGeoTrackingSupport
          (UARGeoTrackingSupport *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UARGeoTrackingSupport__6B_;
  return this;
}

// ~UARGeoTrackingSupport @ 14cf44340

void __thiscall UARGeoTrackingSupport::~UARGeoTrackingSupport(UARGeoTrackingSupport *this)

{
  *(undefined ***)this = &___7UARGeoTrackingSupport__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddGeoAnchorAtLocation @ 14cf497b0

bool __thiscall
UARGeoTrackingSupport::AddGeoAnchorAtLocation
          (UARGeoTrackingSupport *this,float param_1,float param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return false;
}

// AddGeoAnchorAtLocationWithAltitude @ 14cf497d0

bool __thiscall
UARGeoTrackingSupport::AddGeoAnchorAtLocationWithAltitude
          (UARGeoTrackingSupport *this,float param_1,float param_2,float param_3,FString *param_4)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return false;
}

// CheckGeoTrackingAvailability @ 14cf4bb30

TSharedPtr<FCheckGeoTrackingAvailabilityAsyncTask,1> * __thiscall
UARGeoTrackingSupport::CheckGeoTrackingAvailability
          (UARGeoTrackingSupport *this,
          TSharedPtr<FCheckGeoTrackingAvailabilityAsyncTask,1> *__return_storage_ptr__,
          FString *param_1)

{
  ::FString::operator=(param_1,L"Not implemented");
  __return_storage_ptr__->Object = (FCheckGeoTrackingAvailabilityAsyncTask *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CheckGeoTrackingAvailability @ 14cf4bb60

TSharedPtr<FCheckGeoTrackingAvailabilityAsyncTask,1> * __thiscall
UARGeoTrackingSupport::CheckGeoTrackingAvailability
          (UARGeoTrackingSupport *this,
          TSharedPtr<FCheckGeoTrackingAvailabilityAsyncTask,1> *__return_storage_ptr__,float param_1
          ,float param_2,FString *param_3)

{
  ::FString::operator=(param_3,L"Not implemented");
  __return_storage_ptr__->Object = (FCheckGeoTrackingAvailabilityAsyncTask *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetGeoLocationAtWorldPosition @ 14cf51040

TSharedPtr<FGetGeoLocationAsyncTask,1> * __thiscall
UARGeoTrackingSupport::GetGeoLocationAtWorldPosition
          (UARGeoTrackingSupport *this,
          TSharedPtr<FGetGeoLocationAsyncTask,1> *__return_storage_ptr__,TVector<double> *param_1,
          FString *param_2)

{
  ::FString::operator=(param_2,L"Not implemented");
  __return_storage_ptr__->Object = (FGetGeoLocationAsyncTask *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetGeoTrackingAccuracy @ 14cf51150

EARGeoTrackingAccuracy __thiscall
UARGeoTrackingSupport::GetGeoTrackingAccuracy(UARGeoTrackingSupport *this)

{
  return Undetermined;
}

// GetGeoTrackingState @ 14cf51160

EARGeoTrackingState __thiscall
UARGeoTrackingSupport::GetGeoTrackingState(UARGeoTrackingSupport *this)

{
  return NotAvailable;
}

// GetGeoTrackingStateReason @ 14cf51170

EARGeoTrackingStateReason __thiscall
UARGeoTrackingSupport::GetGeoTrackingStateReason(UARGeoTrackingSupport *this)

{
  return NotAvailableAtLocation;
}

// GetGeoTrackingSupport @ 14cf51180

UARGeoTrackingSupport * __cdecl UARGeoTrackingSupport::GetGeoTrackingSupport(void)

{
  FName FVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  UARGeoTrackingSupport *pUVar5;
  
  pIVar3 = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_UARGeoTrackingSupport::GetModularFeatureName(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_UARGeoTrackingSupport::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_UARGeoTrackingSupport::GetModularFeatureName(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_UARGeoTrackingSupport::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"ARGeoTrackingSupport");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_UARGeoTrackingSupport::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FVar1 = `public:_static_class_FName___cdecl_UARGeoTrackingSupport::GetModularFeatureName(void)'::
          __l2::FeatureName;
  iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))
                    (pIVar3,`public:_static_class_FName___cdecl_UARGeoTrackingSupport::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  if (iVar2 != 0) {
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,FVar1,0);
    pUVar5 = (UARGeoTrackingSupport *)(lVar4 + -0x28);
    if (lVar4 == 0) {
      pUVar5 = (UARGeoTrackingSupport *)0x0;
    }
    return pUVar5;
  }
  return (UARGeoTrackingSupport *)0x0;
}

// GetPrivateStaticClass @ 14cf54750

UClass * __cdecl UARGeoTrackingSupport::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARGeoTrackingSupport.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARGeoTrackingSupport",
               &Z_Registration_Info_UClass_UARGeoTrackingSupport.InnerSingleton,
               StaticRegisterNativesUARGeoTrackingSupport,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UARGeoTrackingSupport>,
               InternalVTableHelperCtorCaller<UARGeoTrackingSupport>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARGeoTrackingSupport.InnerSingleton;
}

// StaticRegisterNativesUARGeoTrackingSupport @ 14cf610f0

void __cdecl UARGeoTrackingSupport::StaticRegisterNativesUARGeoTrackingSupport(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UARGeoTrackingSupport_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddGeoAnchorAtLocation @ 14cf6af90

void __cdecl
UARGeoTrackingSupport::execAddGeoAnchorAtLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  void *_Src;
  undefined1 uVar3;
  longlong lVar4;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  void *local_48;
  undefined8 local_40;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_48 = (void *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  _Src = local_48;
  local_38.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_40;
  local_30 = (int)local_40;
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x2e0);
  if ((int)local_40 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_40,0,&local_38,(int)local_40,&local_2c);
    memcpy(local_38.Data,_Src,lVar4 * 2);
  }
  uVar3 = (*pcVar2)(param_1,local_res10[0],local_res8[0],&local_38);
  *(undefined1 *)param_3 = uVar3;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execAddGeoAnchorAtLocationWithAltitude @ 14cf6b150

void __cdecl
UARGeoTrackingSupport::execAddGeoAnchorAtLocationWithAltitude
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  void *_Src;
  undefined1 uVar3;
  longlong lVar4;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  void *local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  local_res18[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  _Src = local_58;
  local_48.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_50;
  local_40 = (int)local_50;
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x2e8);
  if ((int)local_50 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_50,0,&local_48,(int)local_50,&local_3c);
    memcpy(local_48.Data,_Src,lVar4 * 2);
  }
  uVar3 = (*pcVar2)(param_1,local_res18[0],local_res10[0],local_res8[0],&local_48);
  *(undefined1 *)param_3 = uVar3;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execGetGeoTrackingAccuracy @ 14cf6e380

void __cdecl
UARGeoTrackingSupport::execGetGeoTrackingAccuracy(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2d8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetGeoTrackingState @ 14cf6e3c0

void __cdecl
UARGeoTrackingSupport::execGetGeoTrackingState(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetGeoTrackingStateReason @ 14cf6e400

void __cdecl
UARGeoTrackingSupport::execGetGeoTrackingStateReason(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2d0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetGeoTrackingSupport @ 14cf6e440

void __cdecl
UARGeoTrackingSupport::execGetGeoTrackingSupport(UObject *param_1,FFrame *param_2,void *param_3)

{
  UARGeoTrackingSupport *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetGeoTrackingSupport();
  *(UARGeoTrackingSupport **)param_3 = pUVar1;
  return;
}

