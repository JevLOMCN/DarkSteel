// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 8

// StaticClass @ 14cfaea40

UClass * __cdecl ULiveLinkFrameInterpolationProcessor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkFrameInterpolationProcessor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkFrameInterpolationProcessor",
               &Z_Registration_Info_UClass_ULiveLinkFrameInterpolationProcessor.InnerSingleton,
               StaticRegisterNativesULiveLinkFrameInterpolationProcessor,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkFrameInterpolationProcessor>,
               InternalVTableHelperCtorCaller<ULiveLinkFrameInterpolationProcessor>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkFrameInterpolationProcessor.InnerSingleton;
}

// ULiveLinkFrameInterpolationProcessor @ 14cfb5a10

ULiveLinkFrameInterpolationProcessor * __thiscall
ULiveLinkFrameInterpolationProcessor::ULiveLinkFrameInterpolationProcessor
          (ULiveLinkFrameInterpolationProcessor *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkFrameInterpolationProcessor__6B_;
  return this;
}

// ULiveLinkFrameInterpolationProcessor @ 14cfb5a40

ULiveLinkFrameInterpolationProcessor * __thiscall
ULiveLinkFrameInterpolationProcessor::ULiveLinkFrameInterpolationProcessor
          (ULiveLinkFrameInterpolationProcessor *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkFrameInterpolationProcessor__6B_;
  return this;
}

// ~ULiveLinkFrameInterpolationProcessor @ 14cfb65f0

void __thiscall
ULiveLinkFrameInterpolationProcessor::~ULiveLinkFrameInterpolationProcessor
          (ULiveLinkFrameInterpolationProcessor *this)

{
  *(undefined ***)this = &___7ULiveLinkFrameInterpolationProcessor__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// FetchWorker @ 14cfb8ca0

TSharedPtr<ILiveLinkFrameInterpolationProcessorWorker,1> * __thiscall
ULiveLinkFrameInterpolationProcessor::FetchWorker
          (ULiveLinkFrameInterpolationProcessor *this,
          TSharedPtr<ILiveLinkFrameInterpolationProcessorWorker,1> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkFrameInterpolationProcessor.h"
             ,0x45,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->Object = (ILiveLinkFrameInterpolationProcessorWorker *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cfbadd0

UClass * __cdecl ULiveLinkFrameInterpolationProcessor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkFrameInterpolationProcessor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkFrameInterpolationProcessor",
               &Z_Registration_Info_UClass_ULiveLinkFrameInterpolationProcessor.InnerSingleton,
               StaticRegisterNativesULiveLinkFrameInterpolationProcessor,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkFrameInterpolationProcessor>,
               InternalVTableHelperCtorCaller<ULiveLinkFrameInterpolationProcessor>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkFrameInterpolationProcessor.InnerSingleton;
}

// GetRole @ 14cfbb780

TSubclassOf<ULiveLinkRole> __thiscall
ULiveLinkFrameInterpolationProcessor::GetRole(ULiveLinkFrameInterpolationProcessor *this)

{
  TObjectPtr<UClass> in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkFrameInterpolationProcessor.h"
             ,0x44,L"Pure virtual not implemented (%s)");
  *(undefined8 *)in_RDX.field0_0x0 = 0;
  return (TSubclassOf<ULiveLinkRole>)in_RDX.field0_0x0;
}

// StaticRegisterNativesULiveLinkFrameInterpolationProcessor @ 14cfbe2c0

void __cdecl
ULiveLinkFrameInterpolationProcessor::StaticRegisterNativesULiveLinkFrameInterpolationProcessor
          (void)

{
  return;
}

