// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 8

// StaticClass @ 14cff3940

UClass * __cdecl ULiveLinkLocatorAxisSwitchPreProcessor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkLocatorAxisSwitchPreProcessor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkLocatorAxisSwitchPreProcessor",
               &Z_Registration_Info_UClass_ULiveLinkLocatorAxisSwitchPreProcessor.InnerSingleton,
               StaticRegisterNativesULiveLinkLocatorAxisSwitchPreProcessor,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkLocatorAxisSwitchPreProcessor>,
               InternalVTableHelperCtorCaller<ULiveLinkLocatorAxisSwitchPreProcessor>,local_res8,
               ULiveLinkTransformAxisSwitchPreProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkLocatorAxisSwitchPreProcessor.InnerSingleton;
}

// ULiveLinkLocatorAxisSwitchPreProcessor @ 14d013cb0

ULiveLinkLocatorAxisSwitchPreProcessor * __thiscall
ULiveLinkLocatorAxisSwitchPreProcessor::ULiveLinkLocatorAxisSwitchPreProcessor
          (ULiveLinkLocatorAxisSwitchPreProcessor *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  ULiveLinkFramePreProcessor::ULiveLinkFramePreProcessor((ULiveLinkFramePreProcessor *)this,param_1)
  ;
  *(undefined4 *)&this->field_0x28 = 0x20100;
  *(undefined ***)this = &___7ULiveLinkTransformAxisSwitchPreProcessor__6B_;
  this->field_0x2c = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->field_0x30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0x38 = uVar1;
  *(double *)&this->field_0x40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)&this->field_0x48 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)&this->field_0x50 = dVar2;
  *(double *)&this->field_0x58 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined ***)this = &___7ULiveLinkLocatorAxisSwitchPreProcessor__6B_;
  return this;
}

// ULiveLinkLocatorAxisSwitchPreProcessor @ 14d013d30

ULiveLinkLocatorAxisSwitchPreProcessor * __thiscall
ULiveLinkLocatorAxisSwitchPreProcessor::ULiveLinkLocatorAxisSwitchPreProcessor
          (ULiveLinkLocatorAxisSwitchPreProcessor *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  ULiveLinkFramePreProcessor::ULiveLinkFramePreProcessor((ULiveLinkFramePreProcessor *)this,param_1)
  ;
  *(undefined4 *)&this->field_0x28 = 0x20100;
  *(undefined ***)this = &___7ULiveLinkTransformAxisSwitchPreProcessor__6B_;
  this->field_0x2c = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->field_0x30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0x38 = uVar1;
  *(double *)&this->field_0x40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)&this->field_0x48 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)&this->field_0x50 = dVar2;
  *(double *)&this->field_0x58 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined ***)this = &___7ULiveLinkLocatorAxisSwitchPreProcessor__6B_;
  return this;
}

// ~ULiveLinkLocatorAxisSwitchPreProcessor @ 14d0171f0

void __thiscall
ULiveLinkLocatorAxisSwitchPreProcessor::~ULiveLinkLocatorAxisSwitchPreProcessor
          (ULiveLinkLocatorAxisSwitchPreProcessor *this)

{
  *(undefined ***)this = &___7ULiveLinkTransformAxisSwitchPreProcessor__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x68);
  ULiveLinkFramePreProcessor::~ULiveLinkFramePreProcessor((ULiveLinkFramePreProcessor *)this);
  return;
}

// FetchWorker @ 14d0400a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<ILiveLinkFramePreProcessorWorker,1> * __thiscall
ULiveLinkLocatorAxisSwitchPreProcessor::FetchWorker
          (ULiveLinkLocatorAxisSwitchPreProcessor *this,
          TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  bool bVar9;
  TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *local_48;
  FSharedReferencer<1> aFStack_40 [5];
  
  puVar1 = &this->field_0x60;
  if (*(longlong *)&this->field_0x60 == 0) {
    aFStack_40[0].ReferenceController = ::operator_new(0x50);
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
    if (aFStack_40[0].ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_48 = ___xmm_00000000000000000000000000000010;
      pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000010;
      aFStack_40[0].ReferenceController = _UNK_150651568;
    }
    else {
      (aFStack_40[0].ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pTVar12 = aFStack_40[0].ReferenceController + 1;
      (aFStack_40[0].ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (aFStack_40[0].ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFLiveLinkLocatorAxisSwitchPreProcessorWorker_ULiveLinkLocatorAxisSwitchPreProcessor___00_SharedPointerInternals__6B_
      ;
      *(undefined2 *)&aFStack_40[0].ReferenceController[1].WeakReferenceCount.field_0x1 = 0;
      aFStack_40[0].ReferenceController[1].WeakReferenceCount.field_0x3 = 0;
      aFStack_40[0].ReferenceController[1].SharedReferenceCount = (atomic<int>)0x20100;
      *(undefined1 *)&aFStack_40[0].ReferenceController[1].WeakReferenceCount = 0;
      uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      aFStack_40[0].ReferenceController[2]._padding_ =
           (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      *(undefined8 *)&aFStack_40[0].ReferenceController[2].SharedReferenceCount = uVar2;
      aFStack_40[0].ReferenceController[3]._padding_ =
           (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar8 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      *(double *)&aFStack_40[0].ReferenceController[3].SharedReferenceCount =
           UE::Math::TRotator<double>::ZeroRotator.Pitch;
      aFStack_40[0].ReferenceController[4]._padding_ = (longlong)dVar8;
      *(double *)&aFStack_40[0].ReferenceController[4].SharedReferenceCount =
           UE::Math::TRotator<double>::ZeroRotator.Roll;
      aFStack_40[0].ReferenceController[1]._padding_ =
           (longlong)
           &
           ___7FLiveLinkLocatorAxisSwitchPreProcessorWorker_ULiveLinkLocatorAxisSwitchPreProcessor__6B_
      ;
      if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *)(*pcVar5)();
          return pTVar10;
        }
      }
      LOCK();
      (aFStack_40[0].ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(aFStack_40[0].ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar11 = aFStack_40[0].ReferenceController;
      local_48 = pTVar12;
    }
    if ((TReferenceControllerBase<1> **)puVar1 != &local_48) {
      *(TReferenceControllerBase<1> **)puVar1 = pTVar12;
      local_48 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->field_0x68,aFStack_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (aFStack_40[0].ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    uVar3 = this->field_0x28;
    if (*(longlong *)puVar1 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *)(*pcVar5)();
        return pTVar10;
      }
    }
    *(undefined1 *)(*(longlong *)puVar1 + 8) = uVar3;
    uVar3 = this->field_0x29;
    if (*(longlong *)puVar1 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *)(*pcVar5)();
        return pTVar10;
      }
    }
    *(undefined1 *)(*(longlong *)puVar1 + 9) = uVar3;
    uVar3 = this->field_0x2a;
    if (*(longlong *)puVar1 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *)(*pcVar5)();
        return pTVar10;
      }
    }
    *(undefined1 *)(*(longlong *)puVar1 + 10) = uVar3;
    uVar3 = this->field_0x2b;
    if (*(longlong *)puVar1 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *)(*pcVar5)();
        return pTVar10;
      }
    }
    *(undefined1 *)(*(longlong *)puVar1 + 0xb) = uVar3;
    uVar3 = this->field_0x2c;
    if (*(longlong *)puVar1 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *)(*pcVar5)();
        return pTVar10;
      }
    }
    *(undefined1 *)(*(longlong *)puVar1 + 0xc) = uVar3;
    uVar6 = *(undefined8 *)&this->field_0x30;
    uVar7 = *(undefined8 *)&this->field_0x38;
    uVar2 = *(undefined8 *)&this->field_0x40;
    if (*(longlong *)puVar1 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *)(*pcVar5)();
        return pTVar10;
      }
    }
    lVar4 = *(longlong *)puVar1;
    *(undefined8 *)(lVar4 + 0x10) = uVar6;
    *(undefined8 *)(lVar4 + 0x18) = uVar7;
    *(undefined8 *)(lVar4 + 0x20) = uVar2;
    uVar6 = *(undefined8 *)&this->field_0x48;
    uVar7 = *(undefined8 *)&this->field_0x50;
    uVar2 = *(undefined8 *)&this->field_0x58;
    if (*(longlong *)puVar1 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *)(*pcVar5)();
        return pTVar10;
      }
    }
    lVar4 = *(longlong *)puVar1;
    *(undefined8 *)(lVar4 + 0x28) = uVar6;
    *(undefined8 *)(lVar4 + 0x30) = uVar7;
    *(undefined8 *)(lVar4 + 0x38) = uVar2;
  }
  __return_storage_ptr__->Object = *(ILiveLinkFramePreProcessorWorker **)puVar1;
  pTVar11 = *(TReferenceControllerBase<1> **)&this->field_0x68;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar11;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d0525b0

UClass * __cdecl ULiveLinkLocatorAxisSwitchPreProcessor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkLocatorAxisSwitchPreProcessor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkLocatorAxisSwitchPreProcessor",
               &Z_Registration_Info_UClass_ULiveLinkLocatorAxisSwitchPreProcessor.InnerSingleton,
               StaticRegisterNativesULiveLinkLocatorAxisSwitchPreProcessor,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkLocatorAxisSwitchPreProcessor>,
               InternalVTableHelperCtorCaller<ULiveLinkLocatorAxisSwitchPreProcessor>,local_res8,
               ULiveLinkTransformAxisSwitchPreProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkLocatorAxisSwitchPreProcessor.InnerSingleton;
}

// GetRole @ 14d053780

TSubclassOf<ULiveLinkRole> __thiscall
ULiveLinkLocatorAxisSwitchPreProcessor::GetRole(ULiveLinkLocatorAxisSwitchPreProcessor *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_ULiveLinkLocatorRole_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<ULiveLinkRole>)in_RDX.field0_0x0;
}

// StaticRegisterNativesULiveLinkLocatorAxisSwitchPreProcessor @ 14d080790

void __cdecl
ULiveLinkLocatorAxisSwitchPreProcessor::StaticRegisterNativesULiveLinkLocatorAxisSwitchPreProcessor
          (void)

{
  return;
}

