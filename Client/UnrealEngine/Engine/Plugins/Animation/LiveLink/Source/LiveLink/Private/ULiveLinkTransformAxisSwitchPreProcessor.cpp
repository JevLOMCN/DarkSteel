// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 10

// StaticClass @ 14cff2b60

UClass * __cdecl ULiveLinkTransformAxisSwitchPreProcessor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkTransformAxisSwitchPreProcessor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkTransformAxisSwitchPreProcessor",
               &Z_Registration_Info_UClass_ULiveLinkTransformAxisSwitchPreProcessor.InnerSingleton,
               StaticRegisterNativesULiveLinkTransformAxisSwitchPreProcessor,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkTransformAxisSwitchPreProcessor>,
               InternalVTableHelperCtorCaller<ULiveLinkTransformAxisSwitchPreProcessor>,local_res8,
               ULiveLinkFramePreProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkTransformAxisSwitchPreProcessor.InnerSingleton;
}

// ULiveLinkTransformAxisSwitchPreProcessor @ 14d014690

ULiveLinkTransformAxisSwitchPreProcessor * __thiscall
ULiveLinkTransformAxisSwitchPreProcessor::ULiveLinkTransformAxisSwitchPreProcessor
          (ULiveLinkTransformAxisSwitchPreProcessor *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  ULiveLinkFramePreProcessor::ULiveLinkFramePreProcessor((ULiveLinkFramePreProcessor *)this,param_1)
  ;
  this->FrontAxis = X;
  this->RightAxis = Y;
  this->UpAxis = Z;
  this->bUseOffsetPosition = false;
  this->_padding_ = (longlong)&___7ULiveLinkTransformAxisSwitchPreProcessor__6B_;
  this->bUseOffsetOrientation = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->OffsetPosition).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->OffsetPosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->OffsetPosition).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->OffsetOrientation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->OffsetOrientation).Yaw = dVar2;
  (this->OffsetOrientation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  (this->Instance).Object = (FLiveLinkTransformAxisSwitchPreProcessorWorker *)0x0;
  (this->Instance).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ULiveLinkTransformAxisSwitchPreProcessor @ 14d014700

ULiveLinkTransformAxisSwitchPreProcessor * __thiscall
ULiveLinkTransformAxisSwitchPreProcessor::ULiveLinkTransformAxisSwitchPreProcessor
          (ULiveLinkTransformAxisSwitchPreProcessor *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  ULiveLinkFramePreProcessor::ULiveLinkFramePreProcessor((ULiveLinkFramePreProcessor *)this,param_1)
  ;
  this->FrontAxis = X;
  this->RightAxis = Y;
  this->UpAxis = Z;
  this->bUseOffsetPosition = false;
  this->_padding_ = (longlong)&___7ULiveLinkTransformAxisSwitchPreProcessor__6B_;
  this->bUseOffsetOrientation = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->OffsetPosition).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->OffsetPosition).field0_0x0._s_0.Y = (double)uVar1;
  (this->OffsetPosition).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->OffsetOrientation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->OffsetOrientation).Yaw = dVar2;
  (this->OffsetOrientation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  (this->Instance).Object = (FLiveLinkTransformAxisSwitchPreProcessorWorker *)0x0;
  (this->Instance).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~ULiveLinkTransformAxisSwitchPreProcessor @ 14d0174f0

void __thiscall
ULiveLinkTransformAxisSwitchPreProcessor::~ULiveLinkTransformAxisSwitchPreProcessor
          (ULiveLinkTransformAxisSwitchPreProcessor *this)

{
  this->_padding_ = (longlong)&___7ULiveLinkTransformAxisSwitchPreProcessor__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Instance).SharedReferenceCount.ReferenceController);
  ULiveLinkFramePreProcessor::~ULiveLinkFramePreProcessor((ULiveLinkFramePreProcessor *)this);
  return;
}

// FetchWorker @ 14d0403e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<ILiveLinkFramePreProcessorWorker,1> * __thiscall
ULiveLinkTransformAxisSwitchPreProcessor::FetchWorker
          (ULiveLinkTransformAxisSwitchPreProcessor *this,
          TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *__return_storage_ptr__)

{
  TSharedPtr<ULiveLinkTransformAxisSwitchPreProcessor::FLiveLinkTransformAxisSwitchPreProcessorWorker,1>
  *pTVar1;
  double dVar2;
  ELiveLinkAxis EVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  FLiveLinkTransformAxisSwitchPreProcessorWorker *pFVar12;
  FLiveLinkTransformAxisSwitchPreProcessorWorker *local_48;
  FSharedReferencer<1> aFStack_40 [5];
  
  pTVar1 = &this->Instance;
  if ((this->Instance).Object == (FLiveLinkTransformAxisSwitchPreProcessorWorker *)0x0) {
    aFStack_40[0].ReferenceController = ::operator_new(0x50);
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
    if (aFStack_40[0].ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_48 = ___xmm_00000000000000000000000000000010;
      pFVar12 = (FLiveLinkTransformAxisSwitchPreProcessorWorker *)&DAT_00000010;
      aFStack_40[0].ReferenceController = _UNK_150651568;
    }
    else {
      (aFStack_40[0].ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pFVar12 = (FLiveLinkTransformAxisSwitchPreProcessorWorker *)
                (aFStack_40[0].ReferenceController + 1);
      (aFStack_40[0].ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (aFStack_40[0].ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFLiveLinkTransformAxisSwitchPreProcessorWorker_ULiveLinkTransformAxisSwitchPreProcessor___00_SharedPointerInternals__6B_
      ;
      *(undefined2 *)&aFStack_40[0].ReferenceController[1].WeakReferenceCount.field_0x1 = 0;
      aFStack_40[0].ReferenceController[1].WeakReferenceCount.field_0x3 = 0;
      aFStack_40[0].ReferenceController[1]._padding_ =
           (longlong)
           &
           ___7FLiveLinkTransformAxisSwitchPreProcessorWorker_ULiveLinkTransformAxisSwitchPreProcessor__6B_
      ;
      aFStack_40[0].ReferenceController[1].SharedReferenceCount = (atomic<int>)0x20100;
      *(undefined1 *)&aFStack_40[0].ReferenceController[1].WeakReferenceCount = 0;
      uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      aFStack_40[0].ReferenceController[2]._padding_ =
           (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      *(undefined8 *)&aFStack_40[0].ReferenceController[2].SharedReferenceCount = uVar7;
      aFStack_40[0].ReferenceController[3]._padding_ =
           (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      *(double *)&aFStack_40[0].ReferenceController[3].SharedReferenceCount =
           UE::Math::TRotator<double>::ZeroRotator.Pitch;
      aFStack_40[0].ReferenceController[4]._padding_ = (longlong)dVar2;
      *(double *)&aFStack_40[0].ReferenceController[4].SharedReferenceCount =
           UE::Math::TRotator<double>::ZeroRotator.Roll;
      if (pFVar12 == (FLiveLinkTransformAxisSwitchPreProcessorWorker *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *)(*pcVar4)();
          return pTVar10;
        }
      }
      LOCK();
      (aFStack_40[0].ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(aFStack_40[0].ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar11 = aFStack_40[0].ReferenceController;
      local_48 = pFVar12;
    }
    if (pTVar1 != (TSharedPtr<ULiveLinkTransformAxisSwitchPreProcessor::FLiveLinkTransformAxisSwitchPreProcessorWorker,1>
                   *)&local_48) {
      pTVar1->Object = pFVar12;
      local_48 = (FLiveLinkTransformAxisSwitchPreProcessorWorker *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Instance).SharedReferenceCount,aFStack_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (aFStack_40[0].ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    EVar3 = this->FrontAxis;
    if (pTVar1->Object == (FLiveLinkTransformAxisSwitchPreProcessorWorker *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *)(*pcVar4)();
        return pTVar10;
      }
    }
    pTVar1->Object->FrontAxis = EVar3;
    EVar3 = this->RightAxis;
    if (pTVar1->Object == (FLiveLinkTransformAxisSwitchPreProcessorWorker *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *)(*pcVar4)();
        return pTVar10;
      }
    }
    pTVar1->Object->RightAxis = EVar3;
    EVar3 = this->UpAxis;
    if (pTVar1->Object == (FLiveLinkTransformAxisSwitchPreProcessorWorker *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *)(*pcVar4)();
        return pTVar10;
      }
    }
    pTVar1->Object->UpAxis = EVar3;
    bVar8 = this->bUseOffsetPosition;
    if (pTVar1->Object == (FLiveLinkTransformAxisSwitchPreProcessorWorker *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *)(*pcVar4)();
        return pTVar10;
      }
    }
    pTVar1->Object->bUseOffsetPosition = bVar8;
    bVar8 = this->bUseOffsetOrientation;
    if (pTVar1->Object == (FLiveLinkTransformAxisSwitchPreProcessorWorker *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *)(*pcVar4)();
        return pTVar10;
      }
    }
    pTVar1->Object->bUseOffsetOrientation = bVar8;
    dVar5 = (this->OffsetPosition).field0_0x0._s_0.X;
    dVar6 = (this->OffsetPosition).field0_0x0._s_0.Y;
    dVar2 = (this->OffsetPosition).field0_0x0._s_0.Z;
    if (pTVar1->Object == (FLiveLinkTransformAxisSwitchPreProcessorWorker *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *)(*pcVar4)();
        return pTVar10;
      }
    }
    pFVar12 = pTVar1->Object;
    (pFVar12->OffsetPosition).field0_0x0._s_0.X = dVar5;
    (pFVar12->OffsetPosition).field0_0x0._s_0.Y = dVar6;
    (pFVar12->OffsetPosition).field0_0x0._s_0.Z = dVar2;
    dVar5 = (this->OffsetOrientation).Pitch;
    dVar6 = (this->OffsetOrientation).Yaw;
    dVar2 = (this->OffsetOrientation).Roll;
    if (pTVar1->Object == (FLiveLinkTransformAxisSwitchPreProcessorWorker *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *)(*pcVar4)();
        return pTVar10;
      }
    }
    pFVar12 = pTVar1->Object;
    (pFVar12->OffsetOrientation).Pitch = dVar5;
    (pFVar12->OffsetOrientation).Yaw = dVar6;
    (pFVar12->OffsetOrientation).Roll = dVar2;
  }
  __return_storage_ptr__->Object = (ILiveLinkFramePreProcessorWorker *)pTVar1->Object;
  pTVar11 = (this->Instance).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar11;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d052d00

UClass * __cdecl ULiveLinkTransformAxisSwitchPreProcessor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkTransformAxisSwitchPreProcessor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkTransformAxisSwitchPreProcessor",
               &Z_Registration_Info_UClass_ULiveLinkTransformAxisSwitchPreProcessor.InnerSingleton,
               StaticRegisterNativesULiveLinkTransformAxisSwitchPreProcessor,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkTransformAxisSwitchPreProcessor>,
               InternalVTableHelperCtorCaller<ULiveLinkTransformAxisSwitchPreProcessor>,local_res8,
               ULiveLinkFramePreProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkTransformAxisSwitchPreProcessor.InnerSingleton;
}

// GetRole @ 14d0537c0

TSubclassOf<ULiveLinkRole> __thiscall
ULiveLinkTransformAxisSwitchPreProcessor::GetRole(ULiveLinkTransformAxisSwitchPreProcessor *this)

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

// Serialize @ 14d07dfe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ULiveLinkTransformAxisSwitchPreProcessor::Serialize
          (ULiveLinkTransformAxisSwitchPreProcessor *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive FStack_1a0;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&FStack_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  UObject::Serialize((UObject *)this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&FStack_1a0);
  return;
}

// Serialize @ 14d07dff0

void __thiscall
ULiveLinkTransformAxisSwitchPreProcessor::Serialize
          (ULiveLinkTransformAxisSwitchPreProcessor *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// StaticRegisterNativesULiveLinkTransformAxisSwitchPreProcessor @ 14d080890

void __cdecl
ULiveLinkTransformAxisSwitchPreProcessor::
StaticRegisterNativesULiveLinkTransformAxisSwitchPreProcessor(void)

{
  return;
}

