// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 8

// StaticClass @ 14cfaf310

UClass * __cdecl ULiveLinkFramePreProcessor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkFramePreProcessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkFramePreProcessor",
               &Z_Registration_Info_UClass_ULiveLinkFramePreProcessor.InnerSingleton,
               StaticRegisterNativesULiveLinkFramePreProcessor,0x28,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkFramePreProcessor>,
               InternalVTableHelperCtorCaller<ULiveLinkFramePreProcessor>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkFramePreProcessor.InnerSingleton;
}

// ULiveLinkFramePreProcessor @ 14cfb5a70

ULiveLinkFramePreProcessor * __thiscall
ULiveLinkFramePreProcessor::ULiveLinkFramePreProcessor
          (ULiveLinkFramePreProcessor *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkFramePreProcessor__6B_;
  return this;
}

// ULiveLinkFramePreProcessor @ 14cfb5aa0

ULiveLinkFramePreProcessor * __thiscall
ULiveLinkFramePreProcessor::ULiveLinkFramePreProcessor
          (ULiveLinkFramePreProcessor *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkFramePreProcessor__6B_;
  return this;
}

// ~ULiveLinkFramePreProcessor @ 14cfb6610

void __thiscall
ULiveLinkFramePreProcessor::~ULiveLinkFramePreProcessor(ULiveLinkFramePreProcessor *this)

{
  *(undefined ***)this = &___7ULiveLinkFramePreProcessor__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// FetchWorker @ 14cfb8ce0

TSharedPtr<ILiveLinkFramePreProcessorWorker,1> * __thiscall
ULiveLinkFramePreProcessor::FetchWorker
          (ULiveLinkFramePreProcessor *this,
          TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkFramePreProcessor.h"
             ,0x31,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->Object = (ILiveLinkFramePreProcessorWorker *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cfbae80

UClass * __cdecl ULiveLinkFramePreProcessor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkFramePreProcessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkFramePreProcessor",
               &Z_Registration_Info_UClass_ULiveLinkFramePreProcessor.InnerSingleton,
               StaticRegisterNativesULiveLinkFramePreProcessor,0x28,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkFramePreProcessor>,
               InternalVTableHelperCtorCaller<ULiveLinkFramePreProcessor>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkFramePreProcessor.InnerSingleton;
}

// GetRole @ 14cfbb7c0

TSubclassOf<ULiveLinkRole> __thiscall
ULiveLinkFramePreProcessor::GetRole(ULiveLinkFramePreProcessor *this)

{
  TObjectPtr<UClass> in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkFramePreProcessor.h"
             ,0x30,L"Pure virtual not implemented (%s)");
  *(undefined8 *)in_RDX.field0_0x0 = 0;
  return (TSubclassOf<ULiveLinkRole>)in_RDX.field0_0x0;
}

// StaticRegisterNativesULiveLinkFramePreProcessor @ 14cfbe2d0

void __cdecl ULiveLinkFramePreProcessor::StaticRegisterNativesULiveLinkFramePreProcessor(void)

{
  return;
}

