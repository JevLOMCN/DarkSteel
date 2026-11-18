// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 7

// StaticClass @ 14695aee0

UClass * __cdecl USlatePostBufferProcessorUpdater::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlatePostBufferProcessorUpdater.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"SlatePostBufferProcessorUpdater",
               &Z_Registration_Info_UClass_USlatePostBufferProcessorUpdater.InnerSingleton,
               StaticRegisterNativesUSlatePostBufferProcessorUpdater,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USlatePostBufferProcessorUpdater>,
               InternalVTableHelperCtorCaller<USlatePostBufferProcessorUpdater>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlatePostBufferProcessorUpdater.InnerSingleton;
}

// USlatePostBufferProcessorUpdater @ 14698d780

USlatePostBufferProcessorUpdater * __thiscall
USlatePostBufferProcessorUpdater::USlatePostBufferProcessorUpdater
          (USlatePostBufferProcessorUpdater *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bSkipBufferUpdate = false;
  this->_padding_ = (longlong)&___7USlatePostBufferProcessorUpdater__6B_;
  return this;
}

// USlatePostBufferProcessorUpdater @ 14698d7b0

USlatePostBufferProcessorUpdater * __thiscall
USlatePostBufferProcessorUpdater::USlatePostBufferProcessorUpdater
          (USlatePostBufferProcessorUpdater *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bSkipBufferUpdate = false;
  this->_padding_ = (longlong)&___7USlatePostBufferProcessorUpdater__6B_;
  return this;
}

// ~USlatePostBufferProcessorUpdater @ 146994300

void __thiscall
USlatePostBufferProcessorUpdater::~USlatePostBufferProcessorUpdater
          (USlatePostBufferProcessorUpdater *this)

{
  this->_padding_ = (longlong)&___7USlatePostBufferProcessorUpdater__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1469d5d60

UClass * __cdecl USlatePostBufferProcessorUpdater::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlatePostBufferProcessorUpdater.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"SlatePostBufferProcessorUpdater",
               &Z_Registration_Info_UClass_USlatePostBufferProcessorUpdater.InnerSingleton,
               StaticRegisterNativesUSlatePostBufferProcessorUpdater,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USlatePostBufferProcessorUpdater>,
               InternalVTableHelperCtorCaller<USlatePostBufferProcessorUpdater>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlatePostBufferProcessorUpdater.InnerSingleton;
}

// GetRenderThreadProxy @ 1469d6f00

TSharedPtr<FSlatePostProcessorUpdaterProxy,1> * __thiscall
USlatePostBufferProcessorUpdater::GetRenderThreadProxy
          (USlatePostBufferProcessorUpdater *this,
          TSharedPtr<FSlatePostProcessorUpdaterProxy,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FSlatePostProcessorUpdaterProxy *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUSlatePostBufferProcessorUpdater @ 146a1f000

void __cdecl
USlatePostBufferProcessorUpdater::StaticRegisterNativesUSlatePostBufferProcessorUpdater(void)

{
  return;
}

