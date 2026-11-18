// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 7

// StaticClass @ 14d77ebc0

UClass * __cdecl UDiscardDeinterlacer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDiscardDeinterlacer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"DiscardDeinterlacer",
               &Z_Registration_Info_UClass_UDiscardDeinterlacer.InnerSingleton,
               StaticRegisterNativesUDiscardDeinterlacer,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDiscardDeinterlacer>,
               InternalVTableHelperCtorCaller<UDiscardDeinterlacer>,local_res8,
               UVideoDeinterlacer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDiscardDeinterlacer.InnerSingleton;
}

// UDiscardDeinterlacer @ 14d78af70

UDiscardDeinterlacer * __thiscall
UDiscardDeinterlacer::UDiscardDeinterlacer(UDiscardDeinterlacer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDiscardDeinterlacer__6B_;
  return this;
}

// UDiscardDeinterlacer @ 14d78afa0

UDiscardDeinterlacer * __thiscall
UDiscardDeinterlacer::UDiscardDeinterlacer(UDiscardDeinterlacer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDiscardDeinterlacer__6B_;
  return this;
}

// ~UDiscardDeinterlacer @ 14d78d020

void __thiscall UDiscardDeinterlacer::~UDiscardDeinterlacer(UDiscardDeinterlacer *this)

{
  *(undefined ***)this = &___7UVideoDeinterlacer__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14d7ace90

UClass * __cdecl UDiscardDeinterlacer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDiscardDeinterlacer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"DiscardDeinterlacer",
               &Z_Registration_Info_UClass_UDiscardDeinterlacer.InnerSingleton,
               StaticRegisterNativesUDiscardDeinterlacer,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDiscardDeinterlacer>,
               InternalVTableHelperCtorCaller<UDiscardDeinterlacer>,local_res8,
               UVideoDeinterlacer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDiscardDeinterlacer.InnerSingleton;
}

// Instantiate @ 14d7b13d0

TSharedPtr<UE::MediaIOCore::FDeinterlacer,1> * __thiscall
UDiscardDeinterlacer::Instantiate
          (UDiscardDeinterlacer *this,
          TSharedPtr<UE::MediaIOCore::FDeinterlacer,1> *__return_storage_ptr__,
          TDelegate<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy>
          *param_1,EMediaIOInterlaceFieldOrder param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<UE::MediaIOCore::FDeinterlacer,1> *pTVar4;
  TDelegateBase<FNotThreadSafeDelegateMode> local_28;
  
  pTVar3 = ::operator_new(0x38);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FDeinterlacer *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDiscardDeinterlacer_MediaIOCore_UE___00_SharedPointerInternals__6B_
    ;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_28,(TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    UE::MediaIOCore::FDiscardDeinterlacer::FDiscardDeinterlacer
              ((FDiscardDeinterlacer *)(pTVar3 + 1),
               (TDelegate<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy>
                *)&local_28,param_2);
    if ((FDeinterlacer *)(pTVar3 + 1) == (FDeinterlacer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<UE::MediaIOCore::FDeinterlacer,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (FDeinterlacer *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUDiscardDeinterlacer @ 14d7be420

void __cdecl UDiscardDeinterlacer::StaticRegisterNativesUDiscardDeinterlacer(void)

{
  return;
}

