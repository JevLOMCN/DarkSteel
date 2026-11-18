// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// StaticClass @ 14978acd0

UClass * __cdecl UPCGComputeGraphSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGComputeGraphSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGComputeGraphSettings",
               &Z_Registration_Info_UClass_UPCGComputeGraphSettings.InnerSingleton,
               StaticRegisterNativesUPCGComputeGraphSettings,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGComputeGraphSettings>,
               InternalVTableHelperCtorCaller<UPCGComputeGraphSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGComputeGraphSettings.InnerSingleton;
}

// UPCGComputeGraphSettings @ 1497e0870

UPCGComputeGraphSettings * __thiscall
UPCGComputeGraphSettings::UPCGComputeGraphSettings
          (UPCGComputeGraphSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->ComputeGraphIndex = -1;
  this->_padding_ = (longlong)&___7UPCGComputeGraphSettings__6B_;
  return this;
}

// UPCGComputeGraphSettings @ 1497e08b0

UPCGComputeGraphSettings * __thiscall
UPCGComputeGraphSettings::UPCGComputeGraphSettings(UPCGComputeGraphSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar1);
  this->ComputeGraphIndex = -1;
  this->_padding_ = (longlong)&___7UPCGComputeGraphSettings__6B_;
  return this;
}

// ~UPCGComputeGraphSettings @ 1497e2da0

void __thiscall UPCGComputeGraphSettings::~UPCGComputeGraphSettings(UPCGComputeGraphSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGComputeGraphSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 1497fde00

TSharedPtr<IPCGElement,1> * __thiscall
UPCGComputeGraphSettings::CreateElement
          (UPCGComputeGraphSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  atomic<int> aVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<IPCGElement,1> *pTVar5;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IPCGElement *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPCGComputeGraphElement___00_SharedPointerInternals__6B_
    ;
    aVar1 = (atomic<int>)this->ComputeGraphIndex;
    pTVar4[1]._padding_ = (longlong)&___7FPCGComputeGraphElement__6B_;
    pTVar4[1].SharedReferenceCount = aVar1;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<IPCGElement,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    __return_storage_ptr__->Object = (IPCGElement *)(pTVar4 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149817390

UClass * __cdecl UPCGComputeGraphSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGComputeGraphSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGComputeGraphSettings",
               &Z_Registration_Info_UClass_UPCGComputeGraphSettings.InnerSingleton,
               StaticRegisterNativesUPCGComputeGraphSettings,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGComputeGraphSettings>,
               InternalVTableHelperCtorCaller<UPCGComputeGraphSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGComputeGraphSettings.InnerSingleton;
}

// StaticRegisterNativesUPCGComputeGraphSettings @ 149847180

void __cdecl UPCGComputeGraphSettings::StaticRegisterNativesUPCGComputeGraphSettings(void)

{
  return;
}

