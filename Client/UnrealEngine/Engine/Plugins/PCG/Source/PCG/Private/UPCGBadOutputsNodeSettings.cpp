// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// StaticClass @ 149fdbf30

UClass * __cdecl UPCGBadOutputsNodeSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBadOutputsNodeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBadOutputsNodeSettings",
               &Z_Registration_Info_UClass_UPCGBadOutputsNodeSettings.InnerSingleton,
               StaticRegisterNativesUPCGBadOutputsNodeSettings,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGBadOutputsNodeSettings>,
               InternalVTableHelperCtorCaller<UPCGBadOutputsNodeSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBadOutputsNodeSettings.InnerSingleton;
}

// UPCGBadOutputsNodeSettings @ 149ff0ed0

UPCGBadOutputsNodeSettings * __thiscall
UPCGBadOutputsNodeSettings::UPCGBadOutputsNodeSettings
          (UPCGBadOutputsNodeSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGBadOutputsNodeSettings__6B_;
  return this;
}

// UPCGBadOutputsNodeSettings @ 149ff0f00

UPCGBadOutputsNodeSettings * __thiscall
UPCGBadOutputsNodeSettings::UPCGBadOutputsNodeSettings(UPCGBadOutputsNodeSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar1);
  *(undefined ***)this = &___7UPCGBadOutputsNodeSettings__6B_;
  return this;
}

// ~UPCGBadOutputsNodeSettings @ 149ff11b0

void __thiscall
UPCGBadOutputsNodeSettings::~UPCGBadOutputsNodeSettings(UPCGBadOutputsNodeSettings *this)

{
  *(undefined ***)this = &___7UPCGBadOutputsNodeSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149ff4ce0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGBadOutputsNodeSettings::CreateElement
          (UPCGBadOutputsNodeSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGBadOutputNodeElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGBadOutputNodeElement__6B_;
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

// GetPrivateStaticClass @ 149ff7240

UClass * __cdecl UPCGBadOutputsNodeSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBadOutputsNodeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBadOutputsNodeSettings",
               &Z_Registration_Info_UClass_UPCGBadOutputsNodeSettings.InnerSingleton,
               StaticRegisterNativesUPCGBadOutputsNodeSettings,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGBadOutputsNodeSettings>,
               InternalVTableHelperCtorCaller<UPCGBadOutputsNodeSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBadOutputsNodeSettings.InnerSingleton;
}

// StaticRegisterNativesUPCGBadOutputsNodeSettings @ 149ffa470

void __cdecl UPCGBadOutputsNodeSettings::StaticRegisterNativesUPCGBadOutputsNodeSettings(void)

{
  return;
}

