// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149b30580

UClass * __cdecl UPCGCullPointsOutsideActorBoundsSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCullPointsOutsideActorBoundsSettings",
               &Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsSettings.InnerSingleton,
               StaticRegisterNativesUPCGCullPointsOutsideActorBoundsSettings,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGCullPointsOutsideActorBoundsSettings>,
               InternalVTableHelperCtorCaller<UPCGCullPointsOutsideActorBoundsSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsSettings.InnerSingleton;
}

// UPCGCullPointsOutsideActorBoundsSettings @ 149b56750

UPCGCullPointsOutsideActorBoundsSettings * __thiscall
UPCGCullPointsOutsideActorBoundsSettings::UPCGCullPointsOutsideActorBoundsSettings
          (UPCGCullPointsOutsideActorBoundsSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->BoundsExpansion = 0.0;
  this->_padding_ = (longlong)&___7UPCGCullPointsOutsideActorBoundsSettings__6B_;
  this->Mode = Ordered;
  return this;
}

// UPCGCullPointsOutsideActorBoundsSettings @ 149b56790

UPCGCullPointsOutsideActorBoundsSettings * __thiscall
UPCGCullPointsOutsideActorBoundsSettings::UPCGCullPointsOutsideActorBoundsSettings
          (UPCGCullPointsOutsideActorBoundsSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->BoundsExpansion = 0.0;
  this->_padding_ = (longlong)&___7UPCGCullPointsOutsideActorBoundsSettings__6B_;
  this->Mode = Ordered;
  return this;
}

// ~UPCGCullPointsOutsideActorBoundsSettings @ 149b58e90

void __thiscall
UPCGCullPointsOutsideActorBoundsSettings::~UPCGCullPointsOutsideActorBoundsSettings
          (UPCGCullPointsOutsideActorBoundsSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGCullPointsOutsideActorBoundsSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149b6a8d0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGCullPointsOutsideActorBoundsSettings::CreateElement
          (UPCGCullPointsOutsideActorBoundsSettings *this,
          TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IPCGElement,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IPCGElement *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPCGCullPointsOutsideActorBoundsElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGCullPointsOutsideActorBoundsElement__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<IPCGElement,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IPCGElement *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149b905c0

UClass * __cdecl UPCGCullPointsOutsideActorBoundsSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCullPointsOutsideActorBoundsSettings",
               &Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsSettings.InnerSingleton,
               StaticRegisterNativesUPCGCullPointsOutsideActorBoundsSettings,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGCullPointsOutsideActorBoundsSettings>,
               InternalVTableHelperCtorCaller<UPCGCullPointsOutsideActorBoundsSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsSettings.InnerSingleton;
}

// InputPinProperties @ 149b92570

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCullPointsOutsideActorBoundsSettings::InputPinProperties
          (UPCGCullPointsOutsideActorBoundsSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointInputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b94100

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCullPointsOutsideActorBoundsSettings::OutputPinProperties
          (UPCGCullPointsOutsideActorBoundsSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGCullPointsOutsideActorBoundsSettings @ 149b98430

void __cdecl
UPCGCullPointsOutsideActorBoundsSettings::
StaticRegisterNativesUPCGCullPointsOutsideActorBoundsSettings(void)

{
  return;
}

