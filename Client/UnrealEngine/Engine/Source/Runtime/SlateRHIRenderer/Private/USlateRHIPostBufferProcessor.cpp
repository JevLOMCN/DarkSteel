// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 8

// StaticClass @ 145fd5c30

UClass * __cdecl USlateRHIPostBufferProcessor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateRHIPostBufferProcessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SlateRHIRenderer",L"SlateRHIPostBufferProcessor",
               &Z_Registration_Info_UClass_USlateRHIPostBufferProcessor.InnerSingleton,
               StaticRegisterNativesUSlateRHIPostBufferProcessor,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USlateRHIPostBufferProcessor>,
               InternalVTableHelperCtorCaller<USlateRHIPostBufferProcessor>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateRHIPostBufferProcessor.InnerSingleton;
}

// USlateRHIPostBufferProcessor @ 145fe8a10

USlateRHIPostBufferProcessor * __thiscall
USlateRHIPostBufferProcessor::USlateRHIPostBufferProcessor
          (USlateRHIPostBufferProcessor *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USlateRHIPostBufferProcessor__6B_;
  return this;
}

// USlateRHIPostBufferProcessor @ 145fe8a40

USlateRHIPostBufferProcessor * __thiscall
USlateRHIPostBufferProcessor::USlateRHIPostBufferProcessor
          (USlateRHIPostBufferProcessor *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USlateRHIPostBufferProcessor__6B_;
  return this;
}

// ~USlateRHIPostBufferProcessor @ 145feb5d0

void __thiscall
USlateRHIPostBufferProcessor::~USlateRHIPostBufferProcessor(USlateRHIPostBufferProcessor *this)

{
  *(undefined ***)this = &___7USlateRHIPostBufferProcessor__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14600d620

UClass * __cdecl USlateRHIPostBufferProcessor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateRHIPostBufferProcessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SlateRHIRenderer",L"SlateRHIPostBufferProcessor",
               &Z_Registration_Info_UClass_USlateRHIPostBufferProcessor.InnerSingleton,
               StaticRegisterNativesUSlateRHIPostBufferProcessor,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USlateRHIPostBufferProcessor>,
               InternalVTableHelperCtorCaller<USlateRHIPostBufferProcessor>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateRHIPostBufferProcessor.InnerSingleton;
}

// GetRenderThreadProxy @ 14600db70

TSharedPtr<FSlateRHIPostBufferProcessorProxy,1> * __thiscall
USlateRHIPostBufferProcessor::GetRenderThreadProxy
          (USlateRHIPostBufferProcessor *this,
          TSharedPtr<FSlateRHIPostBufferProcessorProxy,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FSlateRHIPostBufferProcessorProxy *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// PostProcess @ 14601d920

void __thiscall
USlateRHIPostBufferProcessor::PostProcess
          (USlateRHIPostBufferProcessor *this,FRenderResource *param_1,FRenderResource *param_2,
          TVector2<double> *param_3,FSlateRHIRenderingPolicyInterface param_4,
          UTextureRenderTarget2D *param_5)

{
  return;
}

// StaticRegisterNativesUSlateRHIPostBufferProcessor @ 14602c260

void __cdecl USlateRHIPostBufferProcessor::StaticRegisterNativesUSlateRHIPostBufferProcessor(void)

{
  return;
}

