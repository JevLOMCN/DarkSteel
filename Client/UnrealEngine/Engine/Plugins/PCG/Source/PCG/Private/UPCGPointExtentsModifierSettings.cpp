// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149b9cee0

UClass * __cdecl UPCGPointExtentsModifierSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPointExtentsModifierSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPointExtentsModifierSettings",
               &Z_Registration_Info_UClass_UPCGPointExtentsModifierSettings.InnerSingleton,
               StaticRegisterNativesUPCGPointExtentsModifierSettings,0xe8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGPointExtentsModifierSettings>,
               InternalVTableHelperCtorCaller<UPCGPointExtentsModifierSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPointExtentsModifierSettings.InnerSingleton;
}

// UPCGPointExtentsModifierSettings @ 149be7900

UPCGPointExtentsModifierSettings * __thiscall
UPCGPointExtentsModifierSettings::UPCGPointExtentsModifierSettings
          (UPCGPointExtentsModifierSettings *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGPointExtentsModifierSettings__6B_;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->Extents).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->Extents).field0_0x0._s_0.Y = (double)uVar1;
  (this->Extents).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  this->Mode = Set;
  return this;
}

// UPCGPointExtentsModifierSettings @ 149be7950

UPCGPointExtentsModifierSettings * __thiscall
UPCGPointExtentsModifierSettings::UPCGPointExtentsModifierSettings
          (UPCGPointExtentsModifierSettings *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGPointExtentsModifierSettings__6B_;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->Extents).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->Extents).field0_0x0._s_0.Y = (double)uVar1;
  (this->Extents).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  this->Mode = Set;
  return this;
}

// ~UPCGPointExtentsModifierSettings @ 149be9f60

void __thiscall
UPCGPointExtentsModifierSettings::~UPCGPointExtentsModifierSettings
          (UPCGPointExtentsModifierSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGPointExtentsModifierSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c059e0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGPointExtentsModifierSettings::CreateElement
          (UPCGPointExtentsModifierSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGPointExtentsModifier___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGPointExtentsModifier__6B_;
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

// GetPrivateStaticClass @ 149c262d0

UClass * __cdecl UPCGPointExtentsModifierSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPointExtentsModifierSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPointExtentsModifierSettings",
               &Z_Registration_Info_UClass_UPCGPointExtentsModifierSettings.InnerSingleton,
               StaticRegisterNativesUPCGPointExtentsModifierSettings,0xe8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGPointExtentsModifierSettings>,
               InternalVTableHelperCtorCaller<UPCGPointExtentsModifierSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPointExtentsModifierSettings.InnerSingleton;
}

// InputPinProperties @ 149c2ca50

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGPointExtentsModifierSettings::InputPinProperties
          (UPCGPointExtentsModifierSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointInputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c2eaa0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGPointExtentsModifierSettings::OutputPinProperties
          (UPCGPointExtentsModifierSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGPointExtentsModifierSettings @ 149c35540

void __cdecl
UPCGPointExtentsModifierSettings::StaticRegisterNativesUPCGPointExtentsModifierSettings(void)

{
  return;
}

