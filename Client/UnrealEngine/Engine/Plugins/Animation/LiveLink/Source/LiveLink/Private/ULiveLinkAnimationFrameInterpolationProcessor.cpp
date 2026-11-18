// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 8

// StaticClass @ 14cff46b0

UClass * __cdecl ULiveLinkAnimationFrameInterpolationProcessor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkAnimationFrameInterpolationProcessor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkAnimationFrameInterpolationProcessor",
               &Z_Registration_Info_UClass_ULiveLinkAnimationFrameInterpolationProcessor.
                InnerSingleton,StaticRegisterNativesULiveLinkAnimationFrameInterpolationProcessor,
               0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkAnimationFrameInterpolationProcessor>,
               InternalVTableHelperCtorCaller<ULiveLinkAnimationFrameInterpolationProcessor>,
               local_res8,ULiveLinkBasicFrameInterpolationProcessor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkAnimationFrameInterpolationProcessor.InnerSingleton;
}

// ULiveLinkAnimationFrameInterpolationProcessor @ 14d0130b0

ULiveLinkAnimationFrameInterpolationProcessor * __thiscall
ULiveLinkAnimationFrameInterpolationProcessor::ULiveLinkAnimationFrameInterpolationProcessor
          (ULiveLinkAnimationFrameInterpolationProcessor *this,FVTableHelper *param_1)

{
  ULiveLinkFrameInterpolationProcessor::ULiveLinkFrameInterpolationProcessor
            ((ULiveLinkFrameInterpolationProcessor *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7ULiveLinkAnimationFrameInterpolationProcessor__6B_;
  this->_padding_ = 0;
  (this->Instance).Object = (FLiveLinkAnimationFrameInterpolationProcessorWorker *)0x0;
  (this->Instance).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ULiveLinkAnimationFrameInterpolationProcessor @ 14d0130f0

ULiveLinkAnimationFrameInterpolationProcessor * __thiscall
ULiveLinkAnimationFrameInterpolationProcessor::ULiveLinkAnimationFrameInterpolationProcessor
          (ULiveLinkAnimationFrameInterpolationProcessor *this,FObjectInitializer *param_1)

{
  ULiveLinkFrameInterpolationProcessor::ULiveLinkFrameInterpolationProcessor
            ((ULiveLinkFrameInterpolationProcessor *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7ULiveLinkAnimationFrameInterpolationProcessor__6B_;
  this->_padding_ = 0;
  (this->Instance).Object = (FLiveLinkAnimationFrameInterpolationProcessorWorker *)0x0;
  (this->Instance).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~ULiveLinkAnimationFrameInterpolationProcessor @ 14d016d50

void __thiscall
ULiveLinkAnimationFrameInterpolationProcessor::~ULiveLinkAnimationFrameInterpolationProcessor
          (ULiveLinkAnimationFrameInterpolationProcessor *this)

{
  this->_padding_ = (longlong)&___7ULiveLinkAnimationFrameInterpolationProcessor__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Instance).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7ULiveLinkBasicFrameInterpolationProcessor__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  ULiveLinkFrameInterpolationProcessor::~ULiveLinkFrameInterpolationProcessor
            ((ULiveLinkFrameInterpolationProcessor *)this);
  return;
}

// FetchWorker @ 14d03fc60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<ILiveLinkFrameInterpolationProcessorWorker,1> * __thiscall
ULiveLinkAnimationFrameInterpolationProcessor::FetchWorker
          (ULiveLinkAnimationFrameInterpolationProcessor *this,
          TSharedPtr<ILiveLinkFrameInterpolationProcessorWorker,1> *__return_storage_ptr__)

{
  TSharedPtr<ULiveLinkAnimationFrameInterpolationProcessor::FLiveLinkAnimationFrameInterpolationProcessorWorker,1>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<ILiveLinkFrameInterpolationProcessorWorker,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->Instance;
  if ((this->Instance).Object == (FLiveLinkAnimationFrameInterpolationProcessorWorker *)0x0) {
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
           ___7__TIntrusiveReferenceController_VFLiveLinkAnimationFrameInterpolationProcessorWorker_ULiveLinkAnimationFrameInterpolationProcessor___00_SharedPointerInternals__6B_
      ;
      *(char *)&pTVar4[1].SharedReferenceCount = (char)this->_padding_;
      pTVar4[1]._padding_ =
           (longlong)
           &
           ___7FLiveLinkAnimationFrameInterpolationProcessorWorker_ULiveLinkAnimationFrameInterpolationProcessor__6B_
      ;
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
    if (pTVar1 != (TSharedPtr<ULiveLinkAnimationFrameInterpolationProcessor::FLiveLinkAnimationFrameInterpolationProcessorWorker,1>
                   *)&local_18) {
      pTVar1->Object = (FLiveLinkAnimationFrameInterpolationProcessorWorker *)pTVar6;
      local_18 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Instance).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  __return_storage_ptr__->Object = (ILiveLinkFrameInterpolationProcessorWorker *)pTVar1->Object;
  pTVar4 = (this->Instance).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d051cb0

UClass * __cdecl ULiveLinkAnimationFrameInterpolationProcessor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkAnimationFrameInterpolationProcessor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkAnimationFrameInterpolationProcessor",
               &Z_Registration_Info_UClass_ULiveLinkAnimationFrameInterpolationProcessor.
                InnerSingleton,StaticRegisterNativesULiveLinkAnimationFrameInterpolationProcessor,
               0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkAnimationFrameInterpolationProcessor>,
               InternalVTableHelperCtorCaller<ULiveLinkAnimationFrameInterpolationProcessor>,
               local_res8,ULiveLinkBasicFrameInterpolationProcessor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkAnimationFrameInterpolationProcessor.InnerSingleton;
}

// GetRole @ 14d053700

TSubclassOf<ULiveLinkRole> __thiscall
ULiveLinkAnimationFrameInterpolationProcessor::GetRole
          (ULiveLinkAnimationFrameInterpolationProcessor *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<ULiveLinkRole>)in_RDX.field0_0x0;
}

// StaticRegisterNativesULiveLinkAnimationFrameInterpolationProcessor @ 14d080640

void __cdecl
ULiveLinkAnimationFrameInterpolationProcessor::
StaticRegisterNativesULiveLinkAnimationFrameInterpolationProcessor(void)

{
  return;
}

