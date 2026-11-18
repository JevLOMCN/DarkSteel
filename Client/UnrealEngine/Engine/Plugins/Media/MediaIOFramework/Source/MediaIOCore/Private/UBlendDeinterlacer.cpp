// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 7

// StaticClass @ 14d77eac0

UClass * __cdecl UBlendDeinterlacer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendDeinterlacer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"BlendDeinterlacer",
               &Z_Registration_Info_UClass_UBlendDeinterlacer.InnerSingleton,
               StaticRegisterNativesUBlendDeinterlacer,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlendDeinterlacer>,
               InternalVTableHelperCtorCaller<UBlendDeinterlacer>,local_res8,
               UVideoDeinterlacer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendDeinterlacer.InnerSingleton;
}

// UBlendDeinterlacer @ 14d78ad70

UBlendDeinterlacer * __thiscall
UBlendDeinterlacer::UBlendDeinterlacer(UBlendDeinterlacer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UBlendDeinterlacer__6B_;
  return this;
}

// UBlendDeinterlacer @ 14d78ada0

UBlendDeinterlacer * __thiscall
UBlendDeinterlacer::UBlendDeinterlacer(UBlendDeinterlacer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UBlendDeinterlacer__6B_;
  return this;
}

// ~UBlendDeinterlacer @ 14d78cfa0

void __thiscall UBlendDeinterlacer::~UBlendDeinterlacer(UBlendDeinterlacer *this)

{
  *(undefined ***)this = &___7UVideoDeinterlacer__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14d7acc50

UClass * __cdecl UBlendDeinterlacer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendDeinterlacer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"BlendDeinterlacer",
               &Z_Registration_Info_UClass_UBlendDeinterlacer.InnerSingleton,
               StaticRegisterNativesUBlendDeinterlacer,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlendDeinterlacer>,
               InternalVTableHelperCtorCaller<UBlendDeinterlacer>,local_res8,
               UVideoDeinterlacer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendDeinterlacer.InnerSingleton;
}

// Instantiate @ 14d7b11f0

TSharedPtr<UE::MediaIOCore::FDeinterlacer,1> * __thiscall
UBlendDeinterlacer::Instantiate
          (UBlendDeinterlacer *this,
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
         ___7__TIntrusiveReferenceController_VFBlendDeinterlacer_MediaIOCore_UE___00_SharedPointerInternals__6B_
    ;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_28,(TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    UE::MediaIOCore::FBlendDeinterlacer::FBlendDeinterlacer
              ((FBlendDeinterlacer *)(pTVar3 + 1),
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

// StaticRegisterNativesUBlendDeinterlacer @ 14d7be3f0

void __cdecl UBlendDeinterlacer::StaticRegisterNativesUBlendDeinterlacer(void)

{
  return;
}

