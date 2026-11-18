// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 14

// StaticClass @ 14cfcbd90

UClass * __cdecl UARKitGeoTrackingSupport::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARKitGeoTrackingSupport.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"ARKitGeoTrackingSupport",
               &Z_Registration_Info_UClass_UARKitGeoTrackingSupport.InnerSingleton,
               StaticRegisterNativesUARKitGeoTrackingSupport,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARKitGeoTrackingSupport>,
               InternalVTableHelperCtorCaller<UARKitGeoTrackingSupport>,local_res8,
               UARGeoTrackingSupport::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARKitGeoTrackingSupport.InnerSingleton;
}

// UARKitGeoTrackingSupport @ 14cfd0320

UARKitGeoTrackingSupport * __thiscall
UARKitGeoTrackingSupport::UARKitGeoTrackingSupport
          (UARKitGeoTrackingSupport *this,FVTableHelper *param_1)

{
  UARGeoTrackingSupport::UARGeoTrackingSupport((UARGeoTrackingSupport *)this,param_1);
  *(undefined ***)this = &___7UARKitGeoTrackingSupport__6B_;
  return this;
}

// UARKitGeoTrackingSupport @ 14cfd0350

UARKitGeoTrackingSupport * __thiscall
UARKitGeoTrackingSupport::UARKitGeoTrackingSupport
          (UARKitGeoTrackingSupport *this,FObjectInitializer *param_1)

{
  UARGeoTrackingSupport::UARGeoTrackingSupport((UARGeoTrackingSupport *)this,param_1);
  *(undefined ***)this = &___7UARKitGeoTrackingSupport__6B_;
  return this;
}

// ~UARKitGeoTrackingSupport @ 14cfd1280

void __thiscall UARKitGeoTrackingSupport::~UARKitGeoTrackingSupport(UARKitGeoTrackingSupport *this)

{
  *(undefined ***)this = &___7UARKitGeoTrackingSupport__6B_;
  UARGeoTrackingSupport::~UARGeoTrackingSupport((UARGeoTrackingSupport *)this);
  return;
}

// AddGeoAnchorAtLocation @ 14cfd2800

bool __thiscall
UARKitGeoTrackingSupport::AddGeoAnchorAtLocation
          (UARKitGeoTrackingSupport *this,float param_1,float param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return false;
}

// AddGeoAnchorAtLocationWithAltitude @ 14cfd2820

bool __thiscall
UARKitGeoTrackingSupport::AddGeoAnchorAtLocationWithAltitude
          (UARKitGeoTrackingSupport *this,float param_1,float param_2,float param_3,FString *param_4
          )

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return false;
}

// CheckGeoTrackingAvailability @ 14cfd31c0

TSharedPtr<FCheckGeoTrackingAvailabilityAsyncTask,1> * __thiscall
UARKitGeoTrackingSupport::CheckGeoTrackingAvailability
          (UARKitGeoTrackingSupport *this,
          TSharedPtr<FCheckGeoTrackingAvailabilityAsyncTask,1> *__return_storage_ptr__,
          FString *param_1)

{
  ::FString::operator=(param_1,L"Geo tracking is not supported");
  __return_storage_ptr__->Object = (FCheckGeoTrackingAvailabilityAsyncTask *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CheckGeoTrackingAvailability @ 14cfd31f0

TSharedPtr<FCheckGeoTrackingAvailabilityAsyncTask,1> * __thiscall
UARKitGeoTrackingSupport::CheckGeoTrackingAvailability
          (UARKitGeoTrackingSupport *this,
          TSharedPtr<FCheckGeoTrackingAvailabilityAsyncTask,1> *__return_storage_ptr__,float param_1
          ,float param_2,FString *param_3)

{
  ::FString::operator=(param_3,L"Geo tracking is not supported");
  __return_storage_ptr__->Object = (FCheckGeoTrackingAvailabilityAsyncTask *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetGeoLocationAtWorldPosition @ 14cfd6800

TSharedPtr<FGetGeoLocationAsyncTask,1> * __thiscall
UARKitGeoTrackingSupport::GetGeoLocationAtWorldPosition
          (UARKitGeoTrackingSupport *this,
          TSharedPtr<FGetGeoLocationAsyncTask,1> *__return_storage_ptr__,TVector<double> *param_1,
          FString *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_2->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if (iVar2 == 0) {
    ::FString::operator=(param_2,L"Geo tracking is not supported");
  }
  __return_storage_ptr__->Object = (FGetGeoLocationAsyncTask *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetGeoTrackingAccuracy @ 14cfd6850

EARGeoTrackingAccuracy __thiscall
UARKitGeoTrackingSupport::GetGeoTrackingAccuracy(UARKitGeoTrackingSupport *this)

{
  return Undetermined;
}

// GetGeoTrackingState @ 14cfd6860

EARGeoTrackingState __thiscall
UARKitGeoTrackingSupport::GetGeoTrackingState(UARKitGeoTrackingSupport *this)

{
  return NotAvailable;
}

// GetGeoTrackingStateReason @ 14cfd6870

EARGeoTrackingStateReason __thiscall
UARKitGeoTrackingSupport::GetGeoTrackingStateReason(UARKitGeoTrackingSupport *this)

{
  return NotAvailableAtLocation;
}

// GetPrivateStaticClass @ 14cfd7150

UClass * __cdecl UARKitGeoTrackingSupport::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARKitGeoTrackingSupport.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"ARKitGeoTrackingSupport",
               &Z_Registration_Info_UClass_UARKitGeoTrackingSupport.InnerSingleton,
               StaticRegisterNativesUARKitGeoTrackingSupport,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARKitGeoTrackingSupport>,
               InternalVTableHelperCtorCaller<UARKitGeoTrackingSupport>,local_res8,
               UARGeoTrackingSupport::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARKitGeoTrackingSupport.InnerSingleton;
}

// StaticRegisterNativesUARKitGeoTrackingSupport @ 14cfdf410

void __cdecl UARKitGeoTrackingSupport::StaticRegisterNativesUARKitGeoTrackingSupport(void)

{
  return;
}

