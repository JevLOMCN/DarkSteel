// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 9

// StaticClass @ 14cff28a0

UClass * __cdecl ULiveLinkAnimationRoleToTransform::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkAnimationRoleToTransform.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkAnimationRoleToTransform",
               &Z_Registration_Info_UClass_ULiveLinkAnimationRoleToTransform.InnerSingleton,
               StaticRegisterNativesULiveLinkAnimationRoleToTransform,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkAnimationRoleToTransform>,
               InternalVTableHelperCtorCaller<ULiveLinkAnimationRoleToTransform>,local_res8,
               ULiveLinkFrameTranslator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkAnimationRoleToTransform.InnerSingleton;
}

// ULiveLinkAnimationRoleToTransform @ 14d013130

ULiveLinkAnimationRoleToTransform * __thiscall
ULiveLinkAnimationRoleToTransform::ULiveLinkAnimationRoleToTransform
          (ULiveLinkAnimationRoleToTransform *this,FVTableHelper *param_1)

{
  ULiveLinkFrameTranslator::ULiveLinkFrameTranslator((ULiveLinkFrameTranslator *)this,param_1);
  this->_padding_ = (longlong)&___7ULiveLinkAnimationRoleToTransform__6B_;
  (this->BoneName).ComparisonIndex = 0;
  (this->BoneName).Number = 0;
  (this->Instance).Object = (FLiveLinkAnimationRoleToTransformWorker *)0x0;
  (this->Instance).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ULiveLinkAnimationRoleToTransform @ 14d013170

ULiveLinkAnimationRoleToTransform * __thiscall
ULiveLinkAnimationRoleToTransform::ULiveLinkAnimationRoleToTransform
          (ULiveLinkAnimationRoleToTransform *this,FObjectInitializer *param_1)

{
  ULiveLinkFrameTranslator::ULiveLinkFrameTranslator((ULiveLinkFrameTranslator *)this,param_1);
  this->_padding_ = (longlong)&___7ULiveLinkAnimationRoleToTransform__6B_;
  (this->BoneName).ComparisonIndex = 0;
  (this->BoneName).Number = 0;
  (this->Instance).Object = (FLiveLinkAnimationRoleToTransformWorker *)0x0;
  (this->Instance).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~ULiveLinkAnimationRoleToTransform @ 14d016da0

void __thiscall
ULiveLinkAnimationRoleToTransform::~ULiveLinkAnimationRoleToTransform
          (ULiveLinkAnimationRoleToTransform *this)

{
  this->_padding_ = (longlong)&___7ULiveLinkAnimationRoleToTransform__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Instance).SharedReferenceCount.ReferenceController);
  ULiveLinkFrameTranslator::~ULiveLinkFrameTranslator((ULiveLinkFrameTranslator *)this);
  return;
}

// FetchWorker @ 14d03fda0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<ILiveLinkFrameTranslatorWorker,1> * __thiscall
ULiveLinkAnimationRoleToTransform::FetchWorker
          (ULiveLinkAnimationRoleToTransform *this,
          TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *__return_storage_ptr__)

{
  TSharedPtr<ULiveLinkAnimationRoleToTransform::FLiveLinkAnimationRoleToTransformWorker,1> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *local_38;
  FSharedReferencer<1> FStack_30;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  
  pTVar1 = &this->Instance;
  if (this->BoneName == (FName)0x0) {
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<ULiveLinkAnimationRoleToTransform::FLiveLinkAnimationRoleToTransformWorker,1>
                   *)&local_28) {
      pTVar1->Object = (FLiveLinkAnimationRoleToTransformWorker *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Instance).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
  }
  else if (pTVar1->Object == (FLiveLinkAnimationRoleToTransformWorker *)0x0) {
    pTVar5 = ::operator_new(0x20);
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
      local_38 = ___xmm_00000000000000000000000000000010;
      pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FStack_30.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar5->SharedReferenceCount = (atomic<int>)0x1;
      pTVar7 = pTVar5 + 1;
      pTVar5->WeakReferenceCount = (atomic<int>)0x1;
      pTVar5->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFLiveLinkAnimationRoleToTransformWorker_ULiveLinkAnimationRoleToTransform___00_SharedPointerInternals__6B_
      ;
      pTVar5[1]._padding_ =
           (longlong)
           &___7FLiveLinkAnimationRoleToTransformWorker_ULiveLinkAnimationRoleToTransform__6B_;
      pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *)(*pcVar3)();
          return pTVar6;
        }
      }
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      FStack_30.ReferenceController = pTVar5;
      local_38 = pTVar7;
    }
    if (pTVar1 != (TSharedPtr<ULiveLinkAnimationRoleToTransform::FLiveLinkAnimationRoleToTransformWorker,1>
                   *)&local_38) {
      pTVar1->Object = (FLiveLinkAnimationRoleToTransformWorker *)pTVar7;
      local_38 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Instance).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    FVar2 = this->BoneName;
    if (pTVar1->Object == (FLiveLinkAnimationRoleToTransformWorker *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
    pTVar1->Object->BoneName = FVar2;
  }
  __return_storage_ptr__->Object = (ILiveLinkFrameTranslatorWorker *)pTVar1->Object;
  pTVar5 = (this->Instance).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetFromRole @ 14d04d8b0

TSubclassOf<ULiveLinkRole> __thiscall
ULiveLinkAnimationRoleToTransform::GetFromRole(ULiveLinkAnimationRoleToTransform *this)

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

// GetPrivateStaticClass @ 14d051d70

UClass * __cdecl ULiveLinkAnimationRoleToTransform::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkAnimationRoleToTransform.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkAnimationRoleToTransform",
               &Z_Registration_Info_UClass_ULiveLinkAnimationRoleToTransform.InnerSingleton,
               StaticRegisterNativesULiveLinkAnimationRoleToTransform,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkAnimationRoleToTransform>,
               InternalVTableHelperCtorCaller<ULiveLinkAnimationRoleToTransform>,local_res8,
               ULiveLinkFrameTranslator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkAnimationRoleToTransform.InnerSingleton;
}

// GetToRole @ 14d057460

TSubclassOf<ULiveLinkRole> __thiscall
ULiveLinkAnimationRoleToTransform::GetToRole(ULiveLinkAnimationRoleToTransform *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_ULiveLinkTransformRole_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<ULiveLinkRole>)in_RDX.field0_0x0;
}

// StaticRegisterNativesULiveLinkAnimationRoleToTransform @ 14d080650

void __cdecl
ULiveLinkAnimationRoleToTransform::StaticRegisterNativesULiveLinkAnimationRoleToTransform(void)

{
  return;
}

