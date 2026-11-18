// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 8

// StaticClass @ 14cff4970

UClass * __cdecl ULiveLinkTransformDeadbandPreProcessor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkTransformDeadbandPreProcessor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkTransformDeadbandPreProcessor",
               &Z_Registration_Info_UClass_ULiveLinkTransformDeadbandPreProcessor.InnerSingleton,
               StaticRegisterNativesULiveLinkTransformDeadbandPreProcessor,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkTransformDeadbandPreProcessor>,
               InternalVTableHelperCtorCaller<ULiveLinkTransformDeadbandPreProcessor>,local_res8,
               ULiveLinkFramePreProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkTransformDeadbandPreProcessor.InnerSingleton;
}

// ULiveLinkTransformDeadbandPreProcessor @ 14d014770

ULiveLinkTransformDeadbandPreProcessor * __thiscall
ULiveLinkTransformDeadbandPreProcessor::ULiveLinkTransformDeadbandPreProcessor
          (ULiveLinkTransformDeadbandPreProcessor *this,FVTableHelper *param_1)

{
  ULiveLinkFramePreProcessor::ULiveLinkFramePreProcessor((ULiveLinkFramePreProcessor *)this,param_1)
  ;
  this->bEnableDeadband = true;
  this->_padding_ = (longlong)&___7ULiveLinkTransformDeadbandPreProcessor__6B_;
  this->TranslationDeadband = 0.0;
  this->RotationDeadbandInDegrees = 0.0;
  (this->Instance).Object = (FLiveLinkTransformDeadbandPreProcessorWorker *)0x0;
  (this->Instance).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ULiveLinkTransformDeadbandPreProcessor @ 14d0147b0

ULiveLinkTransformDeadbandPreProcessor * __thiscall
ULiveLinkTransformDeadbandPreProcessor::ULiveLinkTransformDeadbandPreProcessor
          (ULiveLinkTransformDeadbandPreProcessor *this,FObjectInitializer *param_1)

{
  ULiveLinkFramePreProcessor::ULiveLinkFramePreProcessor((ULiveLinkFramePreProcessor *)this,param_1)
  ;
  this->bEnableDeadband = true;
  this->_padding_ = (longlong)&___7ULiveLinkTransformDeadbandPreProcessor__6B_;
  this->TranslationDeadband = 0.0;
  this->RotationDeadbandInDegrees = 0.0;
  (this->Instance).Object = (FLiveLinkTransformDeadbandPreProcessorWorker *)0x0;
  (this->Instance).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~ULiveLinkTransformDeadbandPreProcessor @ 14d017520

void __thiscall
ULiveLinkTransformDeadbandPreProcessor::~ULiveLinkTransformDeadbandPreProcessor
          (ULiveLinkTransformDeadbandPreProcessor *this)

{
  this->_padding_ = (longlong)&___7ULiveLinkTransformDeadbandPreProcessor__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Instance).SharedReferenceCount.ReferenceController);
  ULiveLinkFramePreProcessor::~ULiveLinkFramePreProcessor((ULiveLinkFramePreProcessor *)this);
  return;
}

// FetchWorker @ 14d040720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<ILiveLinkFramePreProcessorWorker,1> * __thiscall
ULiveLinkTransformDeadbandPreProcessor::FetchWorker
          (ULiveLinkTransformDeadbandPreProcessor *this,
          TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *__return_storage_ptr__)

{
  TSharedPtr<ULiveLinkTransformDeadbandPreProcessor::FLiveLinkTransformDeadbandPreProcessorWorker,1>
  *pTVar1;
  float fVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *pTVar9;
  FLiveLinkTransformDeadbandPreProcessorWorker *pFVar10;
  FLiveLinkTransformDeadbandPreProcessorWorker *local_38;
  FSharedReferencer<1> aFStack_30 [3];
  
  pTVar1 = &this->Instance;
  if ((this->Instance).Object == (FLiveLinkTransformDeadbandPreProcessorWorker *)0x0) {
    pTVar8 = ::operator_new(0x90);
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      local_38 = ___xmm_00000000000000000000000000000010;
      pFVar10 = (FLiveLinkTransformDeadbandPreProcessorWorker *)&DAT_00000010;
      aFStack_30[0].ReferenceController = _UNK_150651568;
    }
    else {
      pTVar8->SharedReferenceCount = (atomic<int>)0x1;
      pFVar10 = (FLiveLinkTransformDeadbandPreProcessorWorker *)(pTVar8 + 1);
      pTVar8->WeakReferenceCount = (atomic<int>)0x1;
      pTVar8->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFLiveLinkTransformDeadbandPreProcessorWorker_ULiveLinkTransformDeadbandPreProcessor___00_SharedPointerInternals__6B_
      ;
      *(undefined4 *)&pTVar8[1].SharedReferenceCount.field_0x1 = 0;
      *(undefined2 *)&pTVar8[1].WeakReferenceCount.field_0x1 = 0;
      pTVar8[1].WeakReferenceCount.field_0x3 = 0;
      pTVar8[1]._padding_ =
           (longlong)
           &
           ___7FLiveLinkTransformDeadbandPreProcessorWorker_ULiveLinkTransformDeadbandPreProcessor__6B_
      ;
      *(undefined1 *)&pTVar8[1].SharedReferenceCount = 1;
      pTVar8[2]._padding_ = 0;
      pTVar8[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar8[2].WeakReferenceCount = (atomic<int>)0x0;
      fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
      fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
      pTVar8[3]._padding_ = (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
      *(double *)&pTVar8[3].SharedReferenceCount = (double)fVar2;
      pTVar8[4]._padding_ = (longlong)(double)fVar4;
      *(double *)&pTVar8[4].SharedReferenceCount = (double)fVar5;
      fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
      fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
      pTVar8[5]._padding_ = (longlong)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
      *(double *)&pTVar8[5].SharedReferenceCount = (double)fVar2;
      pTVar8[6]._padding_ = (longlong)(double)fVar4;
      *(double *)&pTVar8[6].SharedReferenceCount = (double)fVar5;
      fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
      fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
      pTVar8[7]._padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
      *(double *)&pTVar8[7].SharedReferenceCount = (double)fVar2;
      pTVar8[8]._padding_ = (longlong)(double)fVar4;
      *(double *)&pTVar8[8].SharedReferenceCount = (double)fVar5;
      if (pFVar10 == (FLiveLinkTransformDeadbandPreProcessorWorker *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *)(*pcVar3)();
          return pTVar9;
        }
      }
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      aFStack_30[0].ReferenceController = pTVar8;
      local_38 = pFVar10;
    }
    if (pTVar1 != (TSharedPtr<ULiveLinkTransformDeadbandPreProcessor::FLiveLinkTransformDeadbandPreProcessorWorker,1>
                   *)&local_38) {
      pTVar1->Object = pFVar10;
      local_38 = (FLiveLinkTransformDeadbandPreProcessorWorker *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Instance).SharedReferenceCount,aFStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (aFStack_30[0].ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    fVar2 = this->TranslationDeadband;
    if (pTVar1->Object == (FLiveLinkTransformDeadbandPreProcessorWorker *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *)(*pcVar3)();
        return pTVar9;
      }
    }
    pTVar1->Object->TranslationDeadband = (double)fVar2;
    fVar2 = this->RotationDeadbandInDegrees;
    if (pTVar1->Object == (FLiveLinkTransformDeadbandPreProcessorWorker *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *)(*pcVar3)();
        return pTVar9;
      }
    }
    pTVar1->Object->RotationDeadbandInDegrees = (double)fVar2;
    bVar6 = this->bEnableDeadband;
    if (pTVar1->Object == (FLiveLinkTransformDeadbandPreProcessorWorker *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *)(*pcVar3)();
        return pTVar9;
      }
    }
    pTVar1->Object->bEnableDeadband = bVar6;
  }
  __return_storage_ptr__->Object = (ILiveLinkFramePreProcessorWorker *)pTVar1->Object;
  pTVar8 = (this->Instance).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d052dc0

UClass * __cdecl ULiveLinkTransformDeadbandPreProcessor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkTransformDeadbandPreProcessor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkTransformDeadbandPreProcessor",
               &Z_Registration_Info_UClass_ULiveLinkTransformDeadbandPreProcessor.InnerSingleton,
               StaticRegisterNativesULiveLinkTransformDeadbandPreProcessor,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkTransformDeadbandPreProcessor>,
               InternalVTableHelperCtorCaller<ULiveLinkTransformDeadbandPreProcessor>,local_res8,
               ULiveLinkFramePreProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkTransformDeadbandPreProcessor.InnerSingleton;
}

// GetRole @ 14d053800

TSubclassOf<ULiveLinkRole> __thiscall
ULiveLinkTransformDeadbandPreProcessor::GetRole(ULiveLinkTransformDeadbandPreProcessor *this)

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

// StaticRegisterNativesULiveLinkTransformDeadbandPreProcessor @ 14d0808a0

void __cdecl
ULiveLinkTransformDeadbandPreProcessor::StaticRegisterNativesULiveLinkTransformDeadbandPreProcessor
          (void)

{
  return;
}

