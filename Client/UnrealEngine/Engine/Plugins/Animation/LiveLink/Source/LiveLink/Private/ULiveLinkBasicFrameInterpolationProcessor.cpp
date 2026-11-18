// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 8

// StaticClass @ 14cff44b0

UClass * __cdecl ULiveLinkBasicFrameInterpolationProcessor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkBasicFrameInterpolationProcessor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkBasicFrameInterpolationProcessor",
               &Z_Registration_Info_UClass_ULiveLinkBasicFrameInterpolationProcessor.InnerSingleton,
               StaticRegisterNativesULiveLinkBasicFrameInterpolationProcessor,0x40,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkBasicFrameInterpolationProcessor>,
               InternalVTableHelperCtorCaller<ULiveLinkBasicFrameInterpolationProcessor>,local_res8,
               ULiveLinkFrameInterpolationProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkBasicFrameInterpolationProcessor.InnerSingleton;
}

// ULiveLinkBasicFrameInterpolationProcessor @ 14d0133b0

ULiveLinkBasicFrameInterpolationProcessor * __thiscall
ULiveLinkBasicFrameInterpolationProcessor::ULiveLinkBasicFrameInterpolationProcessor
          (ULiveLinkBasicFrameInterpolationProcessor *this,FVTableHelper *param_1)

{
  ULiveLinkFrameInterpolationProcessor::ULiveLinkFrameInterpolationProcessor
            ((ULiveLinkFrameInterpolationProcessor *)this,param_1);
  this->bInterpolatePropertyValues = true;
  this->_padding_ = (longlong)&___7ULiveLinkBasicFrameInterpolationProcessor__6B_;
  (this->BaseInstance).Object = (FLiveLinkBasicFrameInterpolationProcessorWorker *)0x0;
  (this->BaseInstance).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  return this;
}

// ULiveLinkBasicFrameInterpolationProcessor @ 14d0133f0

ULiveLinkBasicFrameInterpolationProcessor * __thiscall
ULiveLinkBasicFrameInterpolationProcessor::ULiveLinkBasicFrameInterpolationProcessor
          (ULiveLinkBasicFrameInterpolationProcessor *this,FObjectInitializer *param_1)

{
  ULiveLinkFrameInterpolationProcessor::ULiveLinkFrameInterpolationProcessor
            ((ULiveLinkFrameInterpolationProcessor *)this,param_1);
  this->bInterpolatePropertyValues = true;
  this->_padding_ = (longlong)&___7ULiveLinkBasicFrameInterpolationProcessor__6B_;
  (this->BaseInstance).Object = (FLiveLinkBasicFrameInterpolationProcessorWorker *)0x0;
  (this->BaseInstance).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  return this;
}

// ~ULiveLinkBasicFrameInterpolationProcessor @ 14d016e80

void __thiscall
ULiveLinkBasicFrameInterpolationProcessor::~ULiveLinkBasicFrameInterpolationProcessor
          (ULiveLinkBasicFrameInterpolationProcessor *this)

{
  this->_padding_ = (longlong)&___7ULiveLinkBasicFrameInterpolationProcessor__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BaseInstance).SharedReferenceCount.ReferenceController);
  ULiveLinkFrameInterpolationProcessor::~ULiveLinkFrameInterpolationProcessor
            ((ULiveLinkFrameInterpolationProcessor *)this);
  return;
}

// FetchWorker @ 14d03ff60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<ILiveLinkFrameInterpolationProcessorWorker,1> * __thiscall
ULiveLinkBasicFrameInterpolationProcessor::FetchWorker
          (ULiveLinkBasicFrameInterpolationProcessor *this,
          TSharedPtr<ILiveLinkFrameInterpolationProcessorWorker,1> *__return_storage_ptr__)

{
  TSharedPtr<ULiveLinkBasicFrameInterpolationProcessor::FLiveLinkBasicFrameInterpolationProcessorWorker,1>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<ILiveLinkFrameInterpolationProcessorWorker,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->BaseInstance;
  if ((this->BaseInstance).Object == (FLiveLinkBasicFrameInterpolationProcessorWorker *)0x0) {
    pTVar4 = ::operator_new(0x20);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
      local_18 = ___xmm_00000000000000000000000000000010;
      pTVar6 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FStack_10.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6 = pTVar4 + 1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFLiveLinkBasicFrameInterpolationProcessorWorker_ULiveLinkBasicFrameInterpolationProcessor___00_SharedPointerInternals__6B_
      ;
      bVar3 = this->bInterpolatePropertyValues;
      pTVar4[1]._padding_ =
           (longlong)
           &
           ___7FLiveLinkBasicFrameInterpolationProcessorWorker_ULiveLinkBasicFrameInterpolationProcessor__6B_
      ;
      *(bool *)&pTVar4[1].SharedReferenceCount = bVar3;
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TSharedPtr<ILiveLinkFrameInterpolationProcessorWorker,1> *)(*pcVar2)();
          return pTVar5;
        }
      }
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      FStack_10.ReferenceController = pTVar4;
      local_18 = pTVar6;
    }
    if (pTVar1 != (TSharedPtr<ULiveLinkBasicFrameInterpolationProcessor::FLiveLinkBasicFrameInterpolationProcessorWorker,1>
                   *)&local_18) {
      pTVar1->Object = (FLiveLinkBasicFrameInterpolationProcessorWorker *)pTVar6;
      local_18 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->BaseInstance).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  __return_storage_ptr__->Object = (ILiveLinkFrameInterpolationProcessorWorker *)pTVar1->Object;
  pTVar4 = (this->BaseInstance).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d051ef0

UClass * __cdecl ULiveLinkBasicFrameInterpolationProcessor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkBasicFrameInterpolationProcessor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkBasicFrameInterpolationProcessor",
               &Z_Registration_Info_UClass_ULiveLinkBasicFrameInterpolationProcessor.InnerSingleton,
               StaticRegisterNativesULiveLinkBasicFrameInterpolationProcessor,0x40,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkBasicFrameInterpolationProcessor>,
               InternalVTableHelperCtorCaller<ULiveLinkBasicFrameInterpolationProcessor>,local_res8,
               ULiveLinkFrameInterpolationProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkBasicFrameInterpolationProcessor.InnerSingleton;
}

// GetRole @ 14d053740

TSubclassOf<ULiveLinkRole> __thiscall
ULiveLinkBasicFrameInterpolationProcessor::GetRole(ULiveLinkBasicFrameInterpolationProcessor *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_ULiveLinkBasicRole_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<ULiveLinkRole>)in_RDX.field0_0x0;
}

// StaticRegisterNativesULiveLinkBasicFrameInterpolationProcessor @ 14d080670

void __cdecl
ULiveLinkBasicFrameInterpolationProcessor::
StaticRegisterNativesULiveLinkBasicFrameInterpolationProcessor(void)

{
  return;
}

