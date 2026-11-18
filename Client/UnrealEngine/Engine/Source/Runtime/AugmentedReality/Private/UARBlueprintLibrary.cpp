// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 117

// StaticClass @ 14cf2ef90

UClass * __cdecl UARBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARBlueprintLibrary",
               &Z_Registration_Info_UClass_UARBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUARBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UARBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARBlueprintLibrary.InnerSingleton;
}

// UARBlueprintLibrary @ 14cf40c10

UARBlueprintLibrary * __thiscall
UARBlueprintLibrary::UARBlueprintLibrary(UARBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UARBlueprintLibrary__6B_;
  return this;
}

// UARBlueprintLibrary @ 14cf40c40

UARBlueprintLibrary * __thiscall
UARBlueprintLibrary::UARBlueprintLibrary(UARBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UARBlueprintLibrary__6B_;
  return this;
}

// ~UARBlueprintLibrary @ 14cf43fd0

void __thiscall UARBlueprintLibrary::~UARBlueprintLibrary(UARBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UARBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// AddManualEnvironmentCaptureProbe @ 14cf49860

bool __cdecl
UARBlueprintLibrary::AddManualEnvironmentCaptureProbe
          (TVector<double> *param_1,TVector<double> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  undefined1 uVar6;
  atomic<int> aVar7;
  FWeakReferencer<1> FVar8;
  FARSupportInterface *pFVar9;
  bool bVar10;
  double local_58;
  double dStack_50;
  double local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  
  FVar5.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar9 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar9 == (FARSupportInterface *)0x0) ||
      (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar5.ReferenceController)->SharedReferenceCount < 1)) {
    uVar6 = 0;
    if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return false;
    }
  }
  else {
    aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pFVar9 = (FARSupportInterface *)0x0;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        FVar8.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        break;
      }
      LOCK();
      aVar7 = (FVar5.ReferenceController)->SharedReferenceCount;
      bVar10 = aVar2 == aVar7;
      if (bVar10) {
        (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      FVar8.ReferenceController = FVar5.ReferenceController;
      aVar2 = aVar7;
    } while (!bVar10);
    pIVar3 = pFVar9->ARImplemention;
    if (pIVar3 == (IARSystemSupport *)0x0) {
      uVar6 = 0;
    }
    else {
      local_58 = (param_2->field0_0x0)._s_0.X;
      dStack_50 = (param_2->field0_0x0)._s_0.Y;
      local_48 = (param_2->field0_0x0)._s_0.Z;
      local_38 = *(undefined4 *)&param_1->field0_0x0;
      uStack_34 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
      uStack_30 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
      uStack_2c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
      local_28 = (param_1->field0_0x0)._s_0.Z;
      uVar6 = (**(code **)(pIVar3->_padding_ + 0xc0))(pIVar3,&local_38,&local_58);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
  }
  LOCK();
  paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
  }
  return (bool)uVar6;
}

// AddOnTrackableAddedDelegate_Handle @ 14cf49a20

FDelegateHandle __cdecl
UARBlueprintLibrary::AddOnTrackableAddedDelegate_Handle
          (TDelegate<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  atomic<unsigned___int64> aVar4;
  code *pcVar5;
  FWeakReferencer<1> FVar6;
  atomic<int> aVar7;
  FDelegateHandle FVar8;
  undefined8 *puVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_RDX;
  FARSupportInterface *pFVar10;
  undefined8 uVar11;
  FARSupportInterface *pFVar12;
  FWeakReferencer<1> FVar13;
  bool bVar14;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  FVar6.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar12 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar12 == (FARSupportInterface *)0x0) ||
      (FVar6.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar6.ReferenceController)->SharedReferenceCount < 1)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_RDX,&local_40);
    if ((*(int *)&in_RDX[2].AccessDetector.State == 0) ||
       (aVar4 = in_RDX[1].AccessDetector.State, aVar4 == (atomic<unsigned___int64>)0x0)) {
      uVar11 = 0;
    }
    else {
      puVar9 = (undefined8 *)(**(code **)(*(longlong *)aVar4 + 0x40))(aVar4,local_res20);
      uVar11 = *puVar9;
    }
    *(undefined8 *)param_1 = uVar11;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_40);
    if (FVar6.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return (FDelegateHandle)(ulong64)param_1;
    }
  }
  else {
    pFVar10 = (FARSupportInterface *)0x0;
    aVar2 = (FVar6.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        pFVar12 = pFVar10;
        FVar13.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
        if (bVar14) {
          pcVar5 = (code *)swi(3);
          FVar8.ID = (*pcVar5)();
          return (FDelegateHandle)FVar8.ID;
        }
        break;
      }
      LOCK();
      aVar7 = (FVar6.ReferenceController)->SharedReferenceCount;
      bVar14 = aVar2 == aVar7;
      if (bVar14) {
        (FVar6.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      FVar13.ReferenceController = FVar6.ReferenceController;
      aVar2 = aVar7;
    } while (!bVar14);
    pIVar3 = pFVar12->ARImplemention;
    if (pIVar3 == (IARSystemSupport *)0x0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_RDX,&local_58);
      if ((*(int *)&in_RDX[2].AccessDetector.State != 0) &&
         (aVar4 = in_RDX[1].AccessDetector.State, aVar4 != (atomic<unsigned___int64>)0x0)) {
        puVar9 = (undefined8 *)(**(code **)(*(longlong *)aVar4 + 0x40))(aVar4,local_res18);
        pFVar10 = (FARSupportInterface *)*puVar9;
      }
      *(FARSupportInterface **)param_1 = pFVar10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
    }
    else {
      (**(code **)(pIVar3->_padding_ + 0x140))(pIVar3,param_1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar13.ReferenceController);
  }
  LOCK();
  paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnTrackableRemovedDelegate_Handle @ 14cf49c30

FDelegateHandle __cdecl
UARBlueprintLibrary::AddOnTrackableRemovedDelegate_Handle
          (TDelegate<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  atomic<unsigned___int64> aVar4;
  code *pcVar5;
  FWeakReferencer<1> FVar6;
  atomic<int> aVar7;
  FDelegateHandle FVar8;
  undefined8 *puVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_RDX;
  FARSupportInterface *pFVar10;
  undefined8 uVar11;
  FARSupportInterface *pFVar12;
  FWeakReferencer<1> FVar13;
  bool bVar14;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  FVar6.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar12 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar12 == (FARSupportInterface *)0x0) ||
      (FVar6.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar6.ReferenceController)->SharedReferenceCount < 1)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_RDX,&local_40);
    if ((*(int *)&in_RDX[2].AccessDetector.State == 0) ||
       (aVar4 = in_RDX[1].AccessDetector.State, aVar4 == (atomic<unsigned___int64>)0x0)) {
      uVar11 = 0;
    }
    else {
      puVar9 = (undefined8 *)(**(code **)(*(longlong *)aVar4 + 0x40))(aVar4,local_res20);
      uVar11 = *puVar9;
    }
    *(undefined8 *)param_1 = uVar11;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_40);
    if (FVar6.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return (FDelegateHandle)(ulong64)param_1;
    }
  }
  else {
    pFVar10 = (FARSupportInterface *)0x0;
    aVar2 = (FVar6.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        pFVar12 = pFVar10;
        FVar13.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
        if (bVar14) {
          pcVar5 = (code *)swi(3);
          FVar8.ID = (*pcVar5)();
          return (FDelegateHandle)FVar8.ID;
        }
        break;
      }
      LOCK();
      aVar7 = (FVar6.ReferenceController)->SharedReferenceCount;
      bVar14 = aVar2 == aVar7;
      if (bVar14) {
        (FVar6.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      FVar13.ReferenceController = FVar6.ReferenceController;
      aVar2 = aVar7;
    } while (!bVar14);
    pIVar3 = pFVar12->ARImplemention;
    if (pIVar3 == (IARSystemSupport *)0x0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_RDX,&local_58);
      if ((*(int *)&in_RDX[2].AccessDetector.State != 0) &&
         (aVar4 = in_RDX[1].AccessDetector.State, aVar4 != (atomic<unsigned___int64>)0x0)) {
        puVar9 = (undefined8 *)(**(code **)(*(longlong *)aVar4 + 0x40))(aVar4,local_res18);
        pFVar10 = (FARSupportInterface *)*puVar9;
      }
      *(FARSupportInterface **)param_1 = pFVar10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
    }
    else {
      (**(code **)(pIVar3->_padding_ + 0x180))(pIVar3,param_1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar13.ReferenceController);
  }
  LOCK();
  paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnTrackableUpdatedDelegate_Handle @ 14cf49e40

FDelegateHandle __cdecl
UARBlueprintLibrary::AddOnTrackableUpdatedDelegate_Handle
          (TDelegate<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  atomic<unsigned___int64> aVar4;
  code *pcVar5;
  FWeakReferencer<1> FVar6;
  atomic<int> aVar7;
  FDelegateHandle FVar8;
  undefined8 *puVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_RDX;
  FARSupportInterface *pFVar10;
  undefined8 uVar11;
  FARSupportInterface *pFVar12;
  FWeakReferencer<1> FVar13;
  bool bVar14;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  FVar6.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar12 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar12 == (FARSupportInterface *)0x0) ||
      (FVar6.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar6.ReferenceController)->SharedReferenceCount < 1)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_RDX,&local_40);
    if ((*(int *)&in_RDX[2].AccessDetector.State == 0) ||
       (aVar4 = in_RDX[1].AccessDetector.State, aVar4 == (atomic<unsigned___int64>)0x0)) {
      uVar11 = 0;
    }
    else {
      puVar9 = (undefined8 *)(**(code **)(*(longlong *)aVar4 + 0x40))(aVar4,local_res20);
      uVar11 = *puVar9;
    }
    *(undefined8 *)param_1 = uVar11;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_40);
    if (FVar6.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return (FDelegateHandle)(ulong64)param_1;
    }
  }
  else {
    pFVar10 = (FARSupportInterface *)0x0;
    aVar2 = (FVar6.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        pFVar12 = pFVar10;
        FVar13.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
        if (bVar14) {
          pcVar5 = (code *)swi(3);
          FVar8.ID = (*pcVar5)();
          return (FDelegateHandle)FVar8.ID;
        }
        break;
      }
      LOCK();
      aVar7 = (FVar6.ReferenceController)->SharedReferenceCount;
      bVar14 = aVar2 == aVar7;
      if (bVar14) {
        (FVar6.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      FVar13.ReferenceController = FVar6.ReferenceController;
      aVar2 = aVar7;
    } while (!bVar14);
    pIVar3 = pFVar12->ARImplemention;
    if (pIVar3 == (IARSystemSupport *)0x0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_RDX,&local_58);
      if ((*(int *)&in_RDX[2].AccessDetector.State != 0) &&
         (aVar4 = in_RDX[1].AccessDetector.State, aVar4 != (atomic<unsigned___int64>)0x0)) {
        puVar9 = (undefined8 *)(**(code **)(*(longlong *)aVar4 + 0x40))(aVar4,local_res18);
        pFVar10 = (FARSupportInterface *)*puVar9;
      }
      *(FARSupportInterface **)param_1 = pFVar10;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
    }
    else {
      (**(code **)(pIVar3->_padding_ + 0x160))(pIVar3,param_1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar13.ReferenceController);
  }
  LOCK();
  paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// AddRuntimeCandidateImage @ 14cf4a1e0

UARCandidateImage * __cdecl
UARBlueprintLibrary::AddRuntimeCandidateImage
          (UARSessionConfig *param_1,UTexture2D *param_2,FString *param_3,float param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  atomic<int> aVar6;
  UARCandidateImage *pUVar7;
  FString *pFVar8;
  FWeakReferencer<1> FVar9;
  FARSupportInterface *this;
  bool bVar10;
  FString local_38 [2];
  
  FVar5.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  this = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((this == (FARSupportInterface *)0x0) ||
      (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar5.ReferenceController)->SharedReferenceCount < 1)) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4516156917743091193>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Private\\ARBlueprintLibrary.cpp"
                        ,0x207,"ARSystem.IsValid()");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      pUVar7 = (UARCandidateImage *)(*pcVar4)();
      return pUVar7;
    }
    if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
      }
    }
    pFVar3 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pUVar7 = (UARCandidateImage *)0x0;
  }
  else {
    aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        this = (FARSupportInterface *)0x0;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        FVar9.ReferenceController = (TReferenceControllerBase<1> *)this;
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          pUVar7 = (UARCandidateImage *)(*pcVar4)();
          return pUVar7;
        }
        break;
      }
      LOCK();
      aVar6 = (FVar5.ReferenceController)->SharedReferenceCount;
      bVar10 = aVar2 == aVar6;
      if (bVar10) {
        (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      FVar9.ReferenceController = FVar5.ReferenceController;
      aVar2 = aVar6;
    } while (!bVar10);
    pFVar8 = ::FString::FString(local_38,param_3);
    pUVar7 = FARSupportInterface::AddRuntimeCandidateImage(this,param_1,param_2,pFVar8,param_4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar9.ReferenceController);
    LOCK();
    paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
    }
    pFVar3 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  }
  return pUVar7;
}

// AddTrackedPointWithName @ 14cf4a3a0

bool __cdecl
UARBlueprintLibrary::AddTrackedPointWithName
          (TTransform<double> *param_1,FString *param_2,bool param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  IARSystemSupport *pIVar4;
  code *pcVar5;
  FWeakReferencer<1> FVar6;
  undefined1 uVar7;
  atomic<int> aVar8;
  int iVar9;
  FWeakReferencer<1> FVar10;
  FARSupportInterface *pFVar11;
  bool bVar12;
  
  FVar6.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar11 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar11 != (FARSupportInterface *)0x0) &&
      (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0)) &&
     (0 < (int)(FVar6.ReferenceController)->SharedReferenceCount)) {
    iVar3 = (param_2->Data).ArrayNum;
    iVar9 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar9 = 0;
    }
    if (iVar9 != 0) {
      aVar2 = (FVar6.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          FVar10.ReferenceController = (TReferenceControllerBase<1> *)(FARSupportInterface *)0x0;
          pFVar11 = (FARSupportInterface *)0x0;
          if (bVar12) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          break;
        }
        LOCK();
        aVar8 = (FVar6.ReferenceController)->SharedReferenceCount;
        bVar12 = aVar2 == aVar8;
        if (bVar12) {
          (FVar6.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar8 = aVar2;
        }
        UNLOCK();
        FVar10.ReferenceController = FVar6.ReferenceController;
        aVar2 = aVar8;
      } while (!bVar12);
      pIVar4 = pFVar11->ARImplemention;
      if (pIVar4 == (IARSystemSupport *)0x0) {
        uVar7 = 0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar10.ReferenceController);
      }
      else {
        uVar7 = (**(code **)(pIVar4->_padding_ + 0x120))(pIVar4,param_1,param_2,param_3);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar10.ReferenceController);
      }
      goto LAB_14cf4a48a;
    }
  }
  uVar7 = 0;
  if (FVar6.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    return false;
  }
LAB_14cf4a48a:
  LOCK();
  paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
  }
  return (bool)uVar7;
}

// CalculateAlignmentTransform @ 14cf4af40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UARBlueprintLibrary::CalculateAlignmentTransform
          (TTransform<double> *param_1,TTransform<double> *param_2,TTransform<double> *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_f8 [32];
  TTransform<double> local_d8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  auVar6._0_8_ = (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                  *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4),
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                  *(uint *)(param_1->Scale3D).XY.m128d_f64);
  auVar6._8_4_ = _UNK_15061cc88 & *(uint *)((param_1->Scale3D).XY.m128d_f64 + 1);
  auVar6._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc);
  lVar5 = -(ulonglong)
           ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
           (double)CONCAT44(_UNK_15061cc8c &
                            *(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 0xc),
                            _UNK_15061cc88 & *(uint *)((param_1->Scale3D).ZW.m128d_f64 + 1)));
  auVar2._8_4_ = (int)lVar5;
  auVar2._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                  (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                   *(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 4),
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                   *(uint *)(param_1->Scale3D).ZW.m128d_f64));
  auVar2._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  uVar4 = movmskpd((int)param_1,auVar2);
  lVar5 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar6._8_8_);
  auVar1._8_4_ = (int)lVar5;
  auVar1._0_8_ = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar6._0_8_)
  ;
  auVar1._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  iVar3 = movmskpd((int)local_18,auVar1);
  if ((uVar4 & 0x3fffffff) == 0 && iVar3 == 0) {
    local_78.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_78.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_78.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_78.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_78.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_78.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    UE::Math::TTransform<double>::InverseFast(param_1,&local_78);
  }
  local_d8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_d8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_d8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_d8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_d8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_d8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_d8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_d8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_d8,param_2,&local_78);
  (param_3->Rotation).XY.m128d_f64[0] = local_d8.Rotation.XY.m128d_f64[0];
  (param_3->Rotation).XY.m128d_f64[1] = local_d8.Rotation.XY.m128d_f64[1];
  (param_3->Rotation).ZW.m128d_f64[0] = local_d8.Rotation.ZW.m128d_f64[0];
  (param_3->Rotation).ZW.m128d_f64[1] = local_d8.Rotation.ZW.m128d_f64[1];
  (param_3->Translation).XY.m128d_f64[0] = local_d8.Translation.XY.m128d_f64[0];
  (param_3->Translation).XY.m128d_f64[1] = local_d8.Translation.XY.m128d_f64[1];
  (param_3->Translation).ZW.m128d_f64[0] = local_d8.Translation.ZW.m128d_f64[0];
  (param_3->Translation).ZW.m128d_f64[1] = local_d8.Translation.ZW.m128d_f64[1];
  (param_3->Scale3D).XY.m128d_f64[0] = local_d8.Scale3D.XY.m128d_f64[0];
  (param_3->Scale3D).XY.m128d_f64[1] = local_d8.Scale3D.XY.m128d_f64[1];
  (param_3->Scale3D).ZW.m128d_f64[0] = local_d8.Scale3D.ZW.m128d_f64[0];
  (param_3->Scale3D).ZW.m128d_f64[1] = local_d8.Scale3D.ZW.m128d_f64[1];
  return;
}

// CalculateClosestIntersection @ 14cf4b0e0

void __cdecl
UARBlueprintLibrary::CalculateClosestIntersection
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
          TVector<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartPoints.Num() == EndPoints.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Private\\ARBlueprintLibrary.cpp"
                          ,0x297,L"The StartPoints and Endpoints arrays must have the same size."),
     bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  fVar28 = __real_3f800000;
  uVar15 = 0;
  fVar23 = 0.0;
  fVar33 = 0.0;
  fVar36 = 0.0;
  fVar17 = 0.0;
  fVar18 = 0.0;
  fVar26 = 0.0;
  fVar16 = 0.0;
  fVar38 = 0.0;
  local_f4 = 0.0;
  local_100 = 0.0;
  local_fc = 0.0;
  local_108 = 0.0;
  local_f8 = 0.0;
  local_f0 = 0.0;
  local_ec = 0.0;
  if (0 < param_1->ArrayNum) {
    uVar30 = (undefined4)__real_3ff0000000000000;
    uVar32 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    uVar34 = (undefined4)__real_3e45798ee0000000;
    uVar35 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
    uVar24 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
    uVar25 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20)
    ;
    fVar33 = 0.0;
    lVar13 = 0;
    uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    do {
      uVar14 = ~uVar15 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar15 < param_2->ArrayNum) {
        uVar12 = uVar14;
      }
      if (uVar12 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar24 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
        uVar25 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      uVar12 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar12 = uVar14;
      }
      if (uVar12 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar24 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
        uVar25 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      dVar4 = *(double *)(pFVar1 + lVar13) - *(double *)(pFVar2 + lVar13);
      dVar5 = *(double *)(pFVar1 + lVar13 + 8) - *(double *)(pFVar2 + lVar13 + 8);
      dVar6 = *(double *)(pFVar1 + lVar13 + 0x10) - *(double *)(pFVar2 + lVar13 + 0x10);
      dVar19 = dVar5 * dVar5 + dVar4 * dVar4 + dVar6 * dVar6;
      dVar7 = dVar4;
      dVar8 = dVar5;
      dVar20 = dVar6;
      if ((dVar19 != (double)CONCAT44(uVar32,uVar30)) &&
         (dVar7 = (double)CONCAT44(uVar25,uVar24), dVar8 = (double)uVar22, dVar20 = (double)uVar21,
         (double)CONCAT44(uVar35,uVar34) <= dVar19)) {
        dVar20 = (double)CONCAT44(uVar32,uVar30) / SQRT(dVar19);
        dVar7 = dVar4 * dVar20;
        dVar8 = dVar5 * dVar20;
        dVar20 = dVar6 * dVar20;
      }
      fVar16 = (float)dVar8;
      uVar12 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar12 = uVar14;
      }
      fVar18 = (float)dVar7;
      fVar31 = fVar16 * fVar16 - fVar28;
      fVar27 = fVar16 * fVar18;
      fVar33 = fVar33 + fVar31;
      fVar38 = fVar38 + fVar27;
      fVar26 = fVar18 * fVar18 - fVar28;
      fVar29 = (float)dVar20;
      fVar16 = fVar29 * fVar16;
      fVar37 = fVar29 * fVar29 - fVar28;
      fVar29 = fVar29 * fVar18;
      fVar23 = local_f4 + fVar26;
      fVar36 = local_100 + fVar37;
      fVar17 = local_fc + fVar29;
      local_108 = local_108 + fVar16;
      if (uVar12 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar24 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
        uVar25 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      uVar12 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar12 = uVar14;
      }
      if (uVar12 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar24 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
        uVar25 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      uVar12 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar12 = uVar14;
      }
      if (uVar12 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar24 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
        uVar25 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      }
      uVar12 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar12 = uVar14;
      }
      fVar18 = local_f8 +
               (float)*(double *)(pFVar2 + lVar13 + 8) * fVar27 +
               (float)*(double *)(pFVar1 + lVar13) * fVar26 +
               (float)*(double *)((param_1->AllocatorInstance).Data + lVar13 + 0x10) * fVar29;
      if (uVar12 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar24 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
        uVar25 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      uVar12 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar12 = uVar14;
      }
      if (uVar12 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar24 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
        uVar25 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      uVar12 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar12 = uVar14;
      }
      if (uVar12 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar24 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
        uVar25 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      }
      uVar12 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar12 = uVar14;
      }
      fVar26 = local_f0 +
               (float)*(double *)(pFVar2 + lVar13 + 8) * fVar31 +
               (float)*(double *)(pFVar1 + lVar13) * fVar27 +
               (float)*(double *)((param_1->AllocatorInstance).Data + lVar13 + 0x10) * fVar16;
      if (uVar12 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar24 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
        uVar25 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      uVar12 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar12 = uVar14;
      }
      if (uVar12 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar24 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
        uVar25 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      uVar12 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar12 = uVar14;
      }
      if (uVar12 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar24 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
        uVar25 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      }
      lVar9 = lVar13 + 8;
      uVar15 = uVar15 + 1;
      pFVar1 = pFVar1 + lVar13;
      uVar30 = (undefined4)__real_3ff0000000000000;
      uVar32 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      lVar10 = lVar13 + 0x10;
      lVar13 = lVar13 + 0x18;
      uVar34 = (undefined4)__real_3e45798ee0000000;
      uVar35 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
      fVar16 = local_ec +
               (float)*(double *)(pFVar2 + lVar9) * fVar16 + (float)*(double *)pFVar1 * fVar29 +
               (float)*(double *)((param_1->AllocatorInstance).Data + lVar10) * fVar37;
      local_100 = fVar36;
      local_fc = fVar17;
      local_f8 = fVar18;
      local_f4 = fVar23;
      local_f0 = fVar26;
      local_ec = fVar16;
    } while ((int)uVar15 < param_1->ArrayNum);
  }
  dVar6 = (double)fVar16;
  fVar27 = fVar36 * fVar33 - local_108 * local_108;
  dVar5 = (double)fVar18;
  fVar16 = local_108 * fVar17 - fVar36 * fVar38;
  dVar4 = (double)fVar26;
  fVar18 = local_108 * fVar38 - fVar33 * fVar17;
  fVar26 = fVar16 * fVar38 + fVar27 * fVar23 + fVar18 * fVar17;
  if ((float)((uint)fVar26 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_358637bd) {
    fVar29 = 0.0;
    fVar18 = 0.0;
    fVar16 = 0.0;
    fVar33 = fVar28;
    fVar23 = fVar28;
  }
  else {
    fVar26 = fVar28 / fVar26;
    fVar18 = fVar18 * fVar26;
    fVar16 = fVar16 * fVar26;
    fVar29 = (fVar38 * fVar17 - fVar23 * local_108) * fVar26;
    fVar28 = fVar27 * fVar26;
    fVar33 = (fVar33 * fVar23 - fVar38 * fVar38) * fVar26;
    fVar23 = (fVar36 * fVar23 - fVar17 * fVar17) * fVar26;
  }
  (param_3->field0_0x0)._s_0.X =
       (double)fVar28 * dVar5 + dVar4 * (double)fVar16 + dVar6 * (double)fVar18;
  (param_3->field0_0x0)._s_0.Y =
       (double)fVar23 * dVar4 + dVar5 * (double)fVar16 + dVar6 * (double)fVar29;
  (param_3->field0_0x0)._s_0.Z =
       dVar4 * (double)fVar29 + dVar5 * (double)fVar18 + (double)fVar33 * dVar6;
  return;
}

// DebugDrawPin @ 14cf4e1e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UARBlueprintLibrary::DebugDrawPin
          (UARPin *param_1,UObject *param_2,FLinearColor *param_3,float param_4,float param_5)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)param_2 + 0x180))(param_2);
  if ((param_1 != (UARPin *)0x0) && (lVar1 != 0)) {
    (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,lVar1,param_3,param_4,param_5);
  }
  return;
}

// DebugDrawTrackedGeometry @ 14cf4e250

void __cdecl
UARBlueprintLibrary::DebugDrawTrackedGeometry
          (UARTrackedGeometry *param_1,UObject *param_2,FLinearColor *param_3,float param_4,
          float param_5)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)param_2 + 0x180))(param_2);
  if ((param_1 != (UARTrackedGeometry *)0x0) && (lVar1 != 0)) {
    (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,lVar1,param_3,param_4,param_5);
  }
  return;
}

// FindTrackedPointsByName @ 14cf4f3a0

/* WARNING: Removing unreachable block (ram,0x00014cf4f3f9) */

TArray<UARTrackedPoint_*,TSizedDefaultAllocator<32>_> * __cdecl
UARBlueprintLibrary::FindTrackedPointsByName
          (TArray<UARTrackedPoint_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  TArray<UARTrackedPoint_*,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  longlong local_68;
  longlong local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  TArray<UARTrackedGeometry_*,TSizedDefaultAllocator<32>_> local_38;
  
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50._0_4_ = 0;
  local_50._4_4_ = 0;
  GetAllGeometries(&local_38);
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar10.Data = local_38.AllocatorInstance.Data;
  while (FVar10.Data != pFVar1) {
    lVar8 = *(longlong *)FVar10.Data;
    if (lVar8 == 0) {
LAB_14cf4f4f4:
      local_68 = 0;
      FVar10.Data = FVar10.Data + 8;
    }
    else {
      pUVar6 = UARTrackedPoint::StaticClass();
      iVar5 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar5) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar5 * 8)
          != &pUVar6->_padding_)) goto LAB_14cf4f4f4;
      local_68 = lVar8;
      if ((local_58.Data <= (FScriptContainerElement *)&local_68) &&
         (((FScriptContainerElement *)&local_68 < local_58.Data + (longlong)local_50._4_4_ * 8 &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)))) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<UARTrackedPoint_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      if ((int)local_50 == local_50._4_4_) {
        local_50._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_58,(int *)((longlong)&local_50 + 4));
      }
      FVar10.Data = FVar10.Data + 8;
      *(longlong *)(local_58.Data + (longlong)(int)local_50 * 8) = local_68;
      local_50._0_4_ = (int)local_50 + 1;
    }
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  FVar10.Data = local_58.Data;
  lVar8 = (longlong)(int)local_50;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  FVar9.Data = FVar10.Data;
  do {
    if (FVar9.Data == FVar10.Data + lVar8 * 8) {
      if (FVar10.Data == (FScriptContainerElement *)0x0) {
        (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      }
      else {
        FMemory::Free(FVar10.Data);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = local_48.Data;
      __return_storage_ptr__->ArrayNum = (int)local_40;
      __return_storage_ptr__->ArrayMax = local_40._4_4_;
      return __return_storage_ptr__;
    }
    local_60 = *(longlong *)FVar9.Data;
    if (local_60 != 0) {
      iVar5 = *(int *)(local_60 + 0x150);
      iVar2 = (param_1->Data).ArrayNum;
      if (iVar5 == iVar2) {
        if (1 < iVar5) {
          iVar5 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(local_60 + 0x148),
                             (wchar_t *)(param_1->Data).AllocatorInstance.Data);
          bVar4 = iVar5 == 0;
          goto LAB_14cf4f575;
        }
      }
      else {
        bVar4 = iVar5 + iVar2 == 1;
LAB_14cf4f575:
        if (!bVar4) goto LAB_14cf4f61c;
      }
      if (((local_48.Data <= (FScriptContainerElement *)&local_60) &&
          ((FScriptContainerElement *)&local_60 < local_48.Data + (longlong)local_40._4_4_ * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<UARTrackedPoint_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      iVar5 = (int)local_40;
      if ((int)local_40 == local_40._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_48,(int *)((longlong)&local_40 + 4));
      }
      local_40 = CONCAT44(local_40._4_4_,iVar5 + 1);
      *(longlong *)(local_48.Data + (longlong)iVar5 * 8) = local_60;
    }
LAB_14cf4f61c:
    FVar9.Data = FVar9.Data + 8;
  } while( true );
}

// GetARSessionStatus @ 14cf4f8f0

/* WARNING: Type propagation algorithm not settling */

FARSessionStatus * __cdecl
UARBlueprintLibrary::GetARSessionStatus(FARSessionStatus *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  atomic<int> aVar6;
  FARSessionStatus *pFVar7;
  FWeakReferencer<1> FVar8;
  FARSupportInterface *pFVar9;
  bool bVar10;
  
  FVar5.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar9 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar9 == (FARSupportInterface *)0x0) ||
      (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar5.ReferenceController)->SharedReferenceCount < 1)) {
    (__return_storage_ptr__->AdditionalInfo).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->AdditionalInfo).Data.ArrayNum = 0;
    (__return_storage_ptr__->AdditionalInfo).Data.ArrayMax = 0;
    __return_storage_ptr__->Status = NotStarted;
    if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return __return_storage_ptr__;
    }
  }
  else {
    aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        FVar8.ReferenceController = (TReferenceControllerBase<1> *)(FARSupportInterface *)0x0;
        pFVar9 = (FARSupportInterface *)0x0;
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FARSessionStatus *)(*pcVar4)();
          return pFVar7;
        }
        break;
      }
      LOCK();
      aVar6 = (FVar5.ReferenceController)->SharedReferenceCount;
      bVar10 = aVar2 == aVar6;
      if (bVar10) {
        (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      FVar8.ReferenceController = FVar5.ReferenceController;
      aVar2 = aVar6;
    } while (!bVar10);
    pIVar3 = pFVar9->ARImplemention;
    if (pIVar3 == (IARSystemSupport *)0x0) {
      (__return_storage_ptr__->AdditionalInfo).Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->AdditionalInfo).Data.ArrayNum = 0;
      (__return_storage_ptr__->AdditionalInfo).Data.ArrayMax = 0;
      __return_storage_ptr__->Status = NotSupported;
    }
    else {
      (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3,__return_storage_ptr__);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
  }
  LOCK();
  paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
  }
  return __return_storage_ptr__;
}

// GetARSystem @ 14cf4faf0

TWeakPtr<FARSupportInterface,1> * __cdecl UARBlueprintLibrary::GetARSystem(void)

{
  return &RegisteredARSystem;
}

// GetARTexture @ 14cf4fbc0

UARTexture * __cdecl UARBlueprintLibrary::GetARTexture(EARTextureType param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  atomic<int> aVar6;
  UARTexture *pUVar7;
  UARTexture *pUVar8;
  FWeakReferencer<1> FVar9;
  bool bVar10;
  
  FVar5.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pUVar7 = (UARTexture *)RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pUVar7 == (UARTexture *)0x0) ||
      (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar5.ReferenceController)->SharedReferenceCount < 1)) {
    pUVar8 = (UARTexture *)0x0;
    if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return (UARTexture *)0x0;
    }
  }
  else {
    pUVar8 = (UARTexture *)0x0;
    aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        pUVar7 = pUVar8;
        FVar9.ReferenceController = (TReferenceControllerBase<1> *)pUVar8;
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          pUVar7 = (UARTexture *)(*pcVar4)();
          return pUVar7;
        }
        break;
      }
      LOCK();
      aVar6 = (FVar5.ReferenceController)->SharedReferenceCount;
      bVar10 = aVar2 == aVar6;
      if (bVar10) {
        (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      FVar9.ReferenceController = FVar5.ReferenceController;
      aVar2 = aVar6;
    } while (!bVar10);
    pIVar3 = (IARSystemSupport *)pUVar7->_padding_;
    if (pIVar3 != (IARSystemSupport *)0x0) {
      pUVar8 = (UARTexture *)(**(code **)(pIVar3->_padding_ + 0x130))(pIVar3,param_1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar9.ReferenceController);
  }
  LOCK();
  paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
  }
  return pUVar8;
}

// GetARWorldScale @ 14cf4fcc0

float __cdecl UARBlueprintLibrary::GetARWorldScale(void)

{
  TTransform<double> local_68;
  
  GetAlignmentTransform(&local_68);
  return __real_3f800000 / (float)local_68.Scale3D.XY.m128d_f64[0];
}

// GetAlignmentTransform @ 14cf4fd10

/* WARNING: Type propagation algorithm not settling */

TTransform<double> * __cdecl
UARBlueprintLibrary::GetAlignmentTransform(TTransform<double> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  __m128d _Var8;
  __m128d _Var9;
  FWeakReferencer<1> FVar10;
  atomic<int> aVar11;
  TTransform<double> *pTVar12;
  FWeakReferencer<1> FVar13;
  FARSupportInterface *pFVar14;
  bool bVar15;
  
  FVar10.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar14 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  _Var8.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  if (((pFVar14 == (FARSupportInterface *)0x0) ||
      (FVar10.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar10.ReferenceController)->SharedReferenceCount < 1)) {
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    _Var9 = UE::Math::TTransform<double>::Identity.Translation.XY;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var8.m128d_f64;
    _Var8 = UE::Math::TTransform<double>::Identity.Translation.ZW;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var9.m128d_f64;
    _Var9 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var8.m128d_f64;
    _Var8 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = _Var9.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var8.m128d_f64;
    if (FVar10.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return __return_storage_ptr__;
    }
  }
  else {
    aVar2 = (FVar10.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        FVar13.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar14 = (FARSupportInterface *)0x0;
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar15) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TTransform<double> *)(*pcVar3)();
          return pTVar12;
        }
        break;
      }
      LOCK();
      aVar11 = (FVar10.ReferenceController)->SharedReferenceCount;
      bVar15 = aVar2 == aVar11;
      if (bVar15) {
        (FVar10.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar11 = aVar2;
      }
      UNLOCK();
      FVar13.ReferenceController = FVar10.ReferenceController;
      aVar2 = aVar11;
    } while (!bVar15);
    dVar4 = (pFVar14->AlignmentTransform).Rotation.XY.m128d_f64[1];
    dVar5 = (pFVar14->AlignmentTransform).Rotation.ZW.m128d_f64[0];
    dVar6 = (pFVar14->AlignmentTransform).Rotation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
         (pFVar14->AlignmentTransform).Rotation.XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar4;
    dVar4 = (pFVar14->AlignmentTransform).Translation.XY.m128d_f64[0];
    dVar7 = (pFVar14->AlignmentTransform).Translation.XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar5;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar6;
    dVar5 = (pFVar14->AlignmentTransform).Translation.ZW.m128d_f64[0];
    dVar6 = (pFVar14->AlignmentTransform).Translation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar4;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar7;
    dVar4 = (pFVar14->AlignmentTransform).Scale3D.XY.m128d_f64[0];
    dVar7 = (pFVar14->AlignmentTransform).Scale3D.XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar5;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar6;
    dVar5 = (pFVar14->AlignmentTransform).Scale3D.ZW.m128d_f64[0];
    dVar6 = (pFVar14->AlignmentTransform).Scale3D.ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar4;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar7;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar5;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar13.ReferenceController);
  }
  LOCK();
  paVar1 = &(FVar10.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar10.ReferenceController)->_padding_ + 8))(FVar10.ReferenceController,1);
  }
  return __return_storage_ptr__;
}

// GetAllGeometries @ 14cf4fe70

TArray<UARTrackedGeometry_*,TSizedDefaultAllocator<32>_> * __cdecl
UARBlueprintLibrary::GetAllGeometries
          (TArray<UARTrackedGeometry_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FWeakReferencer<1> FVar6;
  atomic<int> aVar7;
  TArray<UARTrackedGeometry_*,TSizedDefaultAllocator<32>_> *pTVar8;
  FARSupportInterface *pFVar9;
  FWeakReferencer<1> FVar10;
  bool bVar11;
  TArray<UARTrackedGeometry_*,TSizedDefaultAllocator<32>_> local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  FVar6 = RegisteredARSystem.WeakReferenceCount;
  pFVar9 = RegisteredARSystem.Object;
  __return_storage_ptr__->ArrayMax = 0;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
    if ((pFVar9 != (FARSupportInterface *)0x0) &&
       (0 < (int)(FVar6.ReferenceController)->SharedReferenceCount)) {
      aVar2 = (FVar6.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          pFVar9 = (FARSupportInterface *)0x0;
          FVar10.ReferenceController = (TReferenceControllerBase<1> *)(FARSupportInterface *)0x0;
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            pTVar8 = (TArray<UARTrackedGeometry_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar8;
          }
          break;
        }
        LOCK();
        aVar7 = (FVar6.ReferenceController)->SharedReferenceCount;
        bVar11 = aVar2 == aVar7;
        if (bVar11) {
          (FVar6.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar7 = aVar2;
        }
        UNLOCK();
        FVar10 = FVar6;
        aVar2 = aVar7;
      } while (!bVar11);
      pIVar3 = pFVar9->ARImplemention;
      if (pIVar3 == (IARSystemSupport *)0x0) {
        local_18.ArrayNum = 0;
        local_18.ArrayMax = 0;
        local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      else {
        (**(code **)(pIVar3->_padding_ + 0x60))(pIVar3,&local_18);
      }
      if (__return_storage_ptr__ != &local_18) {
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (__return_storage_ptr__->AllocatorInstance).Data = local_18.AllocatorInstance.Data;
        __return_storage_ptr__->ArrayNum = local_18.ArrayNum;
        local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        __return_storage_ptr__->ArrayMax = local_18.ArrayMax;
        local_18.ArrayNum = 0;
        local_18.ArrayMax = 0;
      }
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar10.ReferenceController);
    }
    LOCK();
    paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
    }
  }
  return __return_storage_ptr__;
}

// GetAllGeometriesByClass @ 14cf4ffd0

/* WARNING: Removing unreachable block (ram,0x00014cf50085) */

TArray<UARTrackedGeometry_*,TSizedDefaultAllocator<32>_> * __cdecl
UARBlueprintLibrary::GetAllGeometriesByClass
          (TArray<UARTrackedGeometry_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TSubclassOf<UARTrackedGeometry> param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  TArray<UARTrackedGeometry_*,TSizedDefaultAllocator<32>_> *pTVar8;
  ForAnyElementType FVar9;
  longlong local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  TArray<UARTrackedGeometry_*,TSizedDefaultAllocator<32>_> local_50;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar2 != 0) && (pUVar7 = UARTrackedGeometry::StaticClass(), pUVar7 != (UClass *)0x0)) {
    iVar6 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar6 * 8) !=
        &pUVar7->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (*(longlong *)param_1.Class.field0_0x0 != 0)) {
      local_60.Data = (FScriptContainerElement *)0x0;
      local_58 = 0;
      GetAllGeometries(&local_50);
      pFVar1 = local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 8;
      FVar9.Data = local_50.AllocatorInstance.Data;
      do {
        if (FVar9.Data == pFVar1) {
          if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.AllocatorInstance.Data);
          }
          (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
          __return_storage_ptr__->ArrayNum = (int)local_58;
          __return_storage_ptr__->ArrayMax = local_58._4_4_;
          return __return_storage_ptr__;
        }
        local_68 = *(longlong *)FVar9.Data;
        if (local_68 != 0) {
          lVar2 = *(longlong *)param_1.Class.field0_0x0;
          lVar3 = *(longlong *)(local_68 + 0x10);
          if ((lVar2 != 0) && (pUVar7 = UARTrackedGeometry::StaticClass(), pUVar7 != (UClass *)0x0))
          {
            iVar6 = (int)pUVar7->_padding_;
            if ((*(int *)(lVar2 + 0x38) < iVar6) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar6 * 8) !=
                &pUVar7->_padding_)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if ((bVar5) && (lVar2 = *(longlong *)param_1.Class.field0_0x0, lVar2 != 0)) {
              if ((*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38)) ||
                 (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
                  != lVar2 + 0x30)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (bVar5) {
                if (((local_60.Data <= (FScriptContainerElement *)&local_68) &&
                    ((FScriptContainerElement *)&local_68 <
                     local_60.Data + (longlong)local_58._4_4_ * 8)) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  pTVar8 = (TArray<UARTrackedGeometry_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
                  return pTVar8;
                }
                iVar6 = (int)local_58;
                if ((int)local_58 == local_58._4_4_) {
                  iVar6 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&local_60,(int *)((longlong)&local_58 + 4));
                }
                local_58 = CONCAT44(local_58._4_4_,iVar6 + 1);
                *(longlong *)(local_60.Data + (longlong)iVar6 * 8) = local_68;
              }
            }
          }
        }
        FVar9.Data = FVar9.Data + 8;
      } while( true );
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetAllPins @ 14cf50290

TArray<UARPin_*,TSizedDefaultAllocator<32>_> * __cdecl
UARBlueprintLibrary::GetAllPins
          (TArray<UARPin_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FWeakReferencer<1> FVar6;
  atomic<int> aVar7;
  TArray<UARPin_*,TSizedDefaultAllocator<32>_> *pTVar8;
  FARSupportInterface *pFVar9;
  FWeakReferencer<1> FVar10;
  bool bVar11;
  TArray<UARPin_*,TSizedDefaultAllocator<32>_> local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  FVar6 = RegisteredARSystem.WeakReferenceCount;
  pFVar9 = RegisteredARSystem.Object;
  __return_storage_ptr__->ArrayMax = 0;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
    if ((pFVar9 != (FARSupportInterface *)0x0) &&
       (0 < (int)(FVar6.ReferenceController)->SharedReferenceCount)) {
      aVar2 = (FVar6.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          pFVar9 = (FARSupportInterface *)0x0;
          FVar10.ReferenceController = (TReferenceControllerBase<1> *)(FARSupportInterface *)0x0;
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            pTVar8 = (TArray<UARPin_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar8;
          }
          break;
        }
        LOCK();
        aVar7 = (FVar6.ReferenceController)->SharedReferenceCount;
        bVar11 = aVar2 == aVar7;
        if (bVar11) {
          (FVar6.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar7 = aVar2;
        }
        UNLOCK();
        FVar10 = FVar6;
        aVar2 = aVar7;
      } while (!bVar11);
      pIVar3 = pFVar9->ARImplemention;
      if (pIVar3 == (IARSystemSupport *)0x0) {
        local_18.ArrayNum = 0;
        local_18.ArrayMax = 0;
        local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      else {
        (**(code **)(pIVar3->_padding_ + 0x68))(pIVar3,&local_18);
      }
      if (__return_storage_ptr__ != &local_18) {
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (__return_storage_ptr__->AllocatorInstance).Data = local_18.AllocatorInstance.Data;
        __return_storage_ptr__->ArrayNum = local_18.ArrayNum;
        local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        __return_storage_ptr__->ArrayMax = local_18.ArrayMax;
        local_18.ArrayNum = 0;
        local_18.ArrayMax = 0;
      }
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar10.ReferenceController);
    }
    LOCK();
    paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
    }
  }
  return __return_storage_ptr__;
}

// GetAllTracked2DPoses @ 14cf503f0

TArray<FARPose2D,TSizedDefaultAllocator<32>_> * __cdecl
UARBlueprintLibrary::GetAllTracked2DPoses
          (TArray<FARPose2D,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  atomic<int> aVar6;
  TArray<FARPose2D,TSizedDefaultAllocator<32>_> *pTVar7;
  FWeakReferencer<1> FVar8;
  FARSupportInterface *pFVar9;
  bool bVar10;
  
  FVar5.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar9 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar9 == (FARSupportInterface *)0x0) ||
      (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar5.ReferenceController)->SharedReferenceCount < 1)) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return __return_storage_ptr__;
    }
  }
  else {
    aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        FVar8.ReferenceController = (TReferenceControllerBase<1> *)(FARSupportInterface *)0x0;
        pFVar9 = (FARSupportInterface *)0x0;
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TArray<FARPose2D,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar7;
        }
        break;
      }
      LOCK();
      aVar6 = (FVar5.ReferenceController)->SharedReferenceCount;
      bVar10 = aVar2 == aVar6;
      if (bVar10) {
        (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      FVar8.ReferenceController = FVar5.ReferenceController;
      aVar2 = aVar6;
    } while (!bVar10);
    pIVar3 = pFVar9->ARImplemention;
    if (pIVar3 == (IARSystemSupport *)0x0) {
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
    else {
      (**(code **)(pIVar3->_padding_ + 0x110))(pIVar3,__return_storage_ptr__);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
  }
  LOCK();
  paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
  }
  return __return_storage_ptr__;
}

// GetCameraIntrinsics @ 14cf506b0

bool __cdecl UARBlueprintLibrary::GetCameraIntrinsics(FARCameraIntrinsics *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  undefined1 uVar6;
  atomic<int> aVar7;
  FWeakReferencer<1> FVar8;
  FARSupportInterface *pFVar9;
  bool bVar10;
  
  FVar5.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar9 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar9 == (FARSupportInterface *)0x0) ||
      (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar5.ReferenceController)->SharedReferenceCount < 1)) {
    uVar6 = 0;
    if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return false;
    }
  }
  else {
    aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pFVar9 = (FARSupportInterface *)0x0;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        FVar8.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        break;
      }
      LOCK();
      aVar7 = (FVar5.ReferenceController)->SharedReferenceCount;
      bVar10 = aVar2 == aVar7;
      if (bVar10) {
        (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      FVar8.ReferenceController = FVar5.ReferenceController;
      aVar2 = aVar7;
    } while (!bVar10);
    pIVar3 = pFVar9->ARImplemention;
    if (pIVar3 == (IARSystemSupport *)0x0) {
      uVar6 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
    else {
      uVar6 = (**(code **)(pIVar3->_padding_ + 0x1d0))(pIVar3,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
  }
  LOCK();
  paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
  }
  return (bool)uVar6;
}

// GetCandidateObject @ 14cf50850

TSharedPtr<FARGetCandidateObjectAsyncTask,1> * __cdecl
UARBlueprintLibrary::GetCandidateObject
          (TSharedPtr<FARGetCandidateObjectAsyncTask,1> *__return_storage_ptr__,
          TVector<double> *param_1,TVector<double> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  atomic<int> aVar6;
  TSharedPtr<FARGetCandidateObjectAsyncTask,1> *pTVar7;
  FWeakReferencer<1> FVar8;
  FARSupportInterface *pFVar9;
  bool bVar10;
  double local_58;
  double dStack_50;
  double local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  
  FVar5.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar9 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar9 == (FARSupportInterface *)0x0) ||
      (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar5.ReferenceController)->SharedReferenceCount < 1)) {
    __return_storage_ptr__->Object = (FARGetCandidateObjectAsyncTask *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return __return_storage_ptr__;
    }
  }
  else {
    aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        FVar8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar9 = (FARSupportInterface *)0x0;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSharedPtr<FARGetCandidateObjectAsyncTask,1> *)(*pcVar4)();
          return pTVar7;
        }
        break;
      }
      LOCK();
      aVar6 = (FVar5.ReferenceController)->SharedReferenceCount;
      bVar10 = aVar2 == aVar6;
      if (bVar10) {
        (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      FVar8.ReferenceController = FVar5.ReferenceController;
      aVar2 = aVar6;
    } while (!bVar10);
    pIVar3 = pFVar9->ARImplemention;
    if (pIVar3 == (IARSystemSupport *)0x0) {
      __return_storage_ptr__->Object = (FARGetCandidateObjectAsyncTask *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      local_58 = (param_2->field0_0x0)._s_0.X;
      dStack_50 = (param_2->field0_0x0)._s_0.Y;
      local_48 = (param_2->field0_0x0)._s_0.Z;
      local_38 = *(undefined4 *)&param_1->field0_0x0;
      uStack_34 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
      uStack_30 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
      uStack_2c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
      local_28 = (param_1->field0_0x0)._s_0.Z;
      (**(code **)(pIVar3->_padding_ + 200))(pIVar3,__return_storage_ptr__,&local_38,&local_58);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
  }
  LOCK();
  paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
  }
  return __return_storage_ptr__;
}

// GetCurrentLightEstimate @ 14cf509e0

UARLightEstimate * __cdecl UARBlueprintLibrary::GetCurrentLightEstimate(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FWeakReferencer<1> FVar4;
  atomic<int> aVar5;
  UARLightEstimate *pUVar6;
  FARSupportInterface *pFVar7;
  FWeakReferencer<1> FVar8;
  FARSupportInterface *pFVar9;
  bool bVar10;
  
  FVar4.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar9 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar9 == (FARSupportInterface *)0x0) ||
      (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar4.ReferenceController)->SharedReferenceCount < 1)) {
    pFVar7 = (FARSupportInterface *)0x0;
    if (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return (UARLightEstimate *)0x0;
    }
  }
  else {
    pFVar7 = (FARSupportInterface *)0x0;
    aVar2 = (FVar4.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        FVar8.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
        pFVar9 = pFVar7;
        if (bVar10) {
          pcVar3 = (code *)swi(3);
          pUVar6 = (UARLightEstimate *)(*pcVar3)();
          return pUVar6;
        }
        break;
      }
      LOCK();
      aVar5 = (FVar4.ReferenceController)->SharedReferenceCount;
      bVar10 = aVar2 == aVar5;
      if (bVar10) {
        (FVar4.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      FVar8.ReferenceController = FVar4.ReferenceController;
      aVar2 = aVar5;
    } while (!bVar10);
    if (pFVar9->ARImplemention != (IARSystemSupport *)0x0) {
      pFVar7 = (FARSupportInterface *)(**(code **)(pFVar9->ARImplemention->_padding_ + 0x90))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
  }
  LOCK();
  paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
  }
  return (UARLightEstimate *)pFVar7;
}

// GetNumberOfTrackedFacesSupported @ 14cf52e90

int __cdecl UARBlueprintLibrary::GetNumberOfTrackedFacesSupported(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FWeakReferencer<1> FVar4;
  atomic<int> aVar5;
  int iVar6;
  FWeakReferencer<1> FVar7;
  FARSupportInterface *pFVar8;
  bool bVar9;
  
  FVar4.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar8 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar8 == (FARSupportInterface *)0x0) ||
      (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar4.ReferenceController)->SharedReferenceCount < 1)) {
    iVar6 = 0;
    if (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return 0;
    }
  }
  else {
    iVar6 = 0;
    aVar2 = (FVar4.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        FVar7.ReferenceController = (TReferenceControllerBase<1> *)(FARSupportInterface *)0x0;
        pFVar8 = (FARSupportInterface *)0x0;
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        break;
      }
      LOCK();
      aVar5 = (FVar4.ReferenceController)->SharedReferenceCount;
      bVar9 = aVar2 == aVar5;
      if (bVar9) {
        (FVar4.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      FVar7.ReferenceController = FVar4.ReferenceController;
      aVar2 = aVar5;
    } while (!bVar9);
    if (pFVar8->ARImplemention != (IARSystemSupport *)0x0) {
      iVar6 = (**(code **)(pFVar8->ARImplemention->_padding_ + 0x128))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
  }
  LOCK();
  paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
  }
  return iVar6;
}

// GetObjectClassificationAtLocation @ 14cf52f80

bool __cdecl
UARBlueprintLibrary::GetObjectClassificationAtLocation
          (TVector<double> *param_1,EARObjectClassification *param_2,TVector<double> *param_3,
          float param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  UClass *pUVar5;
  bool bVar6;
  ForAnyElementType FVar7;
  TArray<UARTrackedGeometry_*,TSizedDefaultAllocator<32>_> local_38 [2];
  
  GetAllGeometries(local_38);
  pFVar1 = local_38[0].AllocatorInstance.Data + (longlong)local_38[0].ArrayNum * 8;
  FVar7.Data = local_38[0].AllocatorInstance.Data;
  do {
    if (FVar7.Data == pFVar1) {
      bVar6 = false;
LAB_14cf5301f:
      if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].AllocatorInstance.Data);
      }
      return bVar6;
    }
    plVar3 = *(longlong **)FVar7.Data;
    if (plVar3 != (longlong *)0x0) {
      pUVar5 = UARMeshGeometry::StaticClass();
      iVar2 = (int)pUVar5->_padding_;
      if ((iVar2 <= *(int *)(plVar3[2] + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar3[2] + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar5->_padding_)) {
        cVar4 = (**(code **)(*plVar3 + 0x2b8))(plVar3,param_1,param_2,param_3,param_4);
        if (cVar4 != '\0') {
          bVar6 = true;
          goto LAB_14cf5301f;
        }
      }
    }
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// GetPointCloud @ 14cf535c0

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __cdecl
UARBlueprintLibrary::GetPointCloud
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  atomic<int> aVar6;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  FWeakReferencer<1> FVar8;
  FARSupportInterface *pFVar9;
  bool bVar10;
  
  FVar5.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar9 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar9 == (FARSupportInterface *)0x0) ||
      (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar5.ReferenceController)->SharedReferenceCount < 1)) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return __return_storage_ptr__;
    }
  }
  else {
    aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        FVar8.ReferenceController = (TReferenceControllerBase<1> *)(FARSupportInterface *)0x0;
        pFVar9 = (FARSupportInterface *)0x0;
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar7;
        }
        break;
      }
      LOCK();
      aVar6 = (FVar5.ReferenceController)->SharedReferenceCount;
      bVar10 = aVar2 == aVar6;
      if (bVar10) {
        (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      FVar8.ReferenceController = FVar5.ReferenceController;
      aVar2 = aVar6;
    } while (!bVar10);
    pIVar3 = pFVar9->ARImplemention;
    if (pIVar3 == (IARSystemSupport *)0x0) {
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
    else {
      (**(code **)(pIVar3->_padding_ + 0xe8))(pIVar3,__return_storage_ptr__);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
  }
  LOCK();
  paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cf53e60

UClass * __cdecl UARBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARBlueprintLibrary",
               &Z_Registration_Info_UClass_UARBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUARBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UARBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARBlueprintLibrary.InnerSingleton;
}

// GetSessionConfig @ 14cf55fe0

UARSessionConfig * __cdecl UARBlueprintLibrary::GetSessionConfig(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FWeakReferencer<1> FVar4;
  atomic<int> aVar5;
  UARSessionConfig *pUVar6;
  FWeakReferencer<1> FVar7;
  FARSupportInterface *pFVar8;
  bool bVar9;
  
  FVar4.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar8 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar8 == (FARSupportInterface *)0x0) ||
      (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar4.ReferenceController)->SharedReferenceCount < 1)) {
    pUVar6 = (UARSessionConfig *)0x0;
    if (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return (UARSessionConfig *)0x0;
    }
  }
  else {
    aVar2 = (FVar4.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pFVar8 = (FARSupportInterface *)0x0;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        FVar7.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          pUVar6 = (UARSessionConfig *)(*pcVar3)();
          return pUVar6;
        }
        break;
      }
      LOCK();
      aVar5 = (FVar4.ReferenceController)->SharedReferenceCount;
      bVar9 = aVar2 == aVar5;
      if (bVar9) {
        (FVar4.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      FVar7.ReferenceController = FVar4.ReferenceController;
      aVar2 = aVar5;
    } while (!bVar9);
    if (((pFVar8->ARSettings).field0_0x0.DebugPtr == (UARSessionConfig *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ARSettings != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Private\\ARSupportInterface.cpp"
                           ,0x38,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UARSessionConfig *)(*pcVar3)();
      return pUVar6;
    }
    pUVar6 = (pFVar8->ARSettings).field0_0x0.DebugPtr;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
  }
  LOCK();
  paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
  }
  return pUVar6;
}

// GetSupportedVideoFormats @ 14cf562b0

TArray<FARVideoFormat,TSizedDefaultAllocator<32>_> * __cdecl
UARBlueprintLibrary::GetSupportedVideoFormats
          (TArray<FARVideoFormat,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EARSessionType param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  atomic<int> aVar6;
  TArray<FARVideoFormat,TSizedDefaultAllocator<32>_> *pTVar7;
  FWeakReferencer<1> FVar8;
  FARSupportInterface *pFVar9;
  bool bVar10;
  
  FVar5.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar9 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar9 == (FARSupportInterface *)0x0) ||
      (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar5.ReferenceController)->SharedReferenceCount < 1)) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return __return_storage_ptr__;
    }
  }
  else {
    aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        FVar8.ReferenceController = (TReferenceControllerBase<1> *)(FARSupportInterface *)0x0;
        pFVar9 = (FARSupportInterface *)0x0;
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TArray<FARVideoFormat,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar7;
        }
        break;
      }
      LOCK();
      aVar6 = (FVar5.ReferenceController)->SharedReferenceCount;
      bVar10 = aVar2 == aVar6;
      if (bVar10) {
        (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      FVar8.ReferenceController = FVar5.ReferenceController;
      aVar2 = aVar6;
    } while (!bVar10);
    pIVar3 = pFVar9->ARImplemention;
    if (pIVar3 == (IARSystemSupport *)0x0) {
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
    else {
      (**(code **)(pIVar3->_padding_ + 0xe0))(pIVar3,__return_storage_ptr__,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
  }
  LOCK();
  paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
  }
  return __return_storage_ptr__;
}

// GetTrackingQuality @ 14cf56510

EARTrackingQuality __cdecl UARBlueprintLibrary::GetTrackingQuality(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FWeakReferencer<1> FVar4;
  EARTrackingQuality EVar5;
  atomic<int> aVar6;
  FWeakReferencer<1> FVar7;
  FARSupportInterface *pFVar8;
  bool bVar9;
  
  FVar4.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar8 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar8 == (FARSupportInterface *)0x0) ||
      (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar4.ReferenceController)->SharedReferenceCount < 1)) {
    EVar5 = NotTracking;
    if (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return NotTracking;
    }
  }
  else {
    aVar2 = (FVar4.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pFVar8 = (FARSupportInterface *)0x0;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        FVar7.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          EVar5 = (*pcVar3)();
          return EVar5;
        }
        break;
      }
      LOCK();
      aVar6 = (FVar4.ReferenceController)->SharedReferenceCount;
      bVar9 = aVar2 == aVar6;
      if (bVar9) {
        (FVar4.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      FVar7.ReferenceController = FVar4.ReferenceController;
      aVar2 = aVar6;
    } while (!bVar9);
    if (pFVar8->ARImplemention == (IARSystemSupport *)0x0) {
      EVar5 = NotTracking;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
    }
    else {
      EVar5 = (**(code **)(pFVar8->ARImplemention->_padding_ + 0x10))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
    }
  }
  LOCK();
  paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
  }
  return EVar5;
}

// GetTrackingQualityReason @ 14cf56630

EARTrackingQualityReason __cdecl UARBlueprintLibrary::GetTrackingQualityReason(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FWeakReferencer<1> FVar4;
  EARTrackingQualityReason EVar5;
  atomic<int> aVar6;
  FWeakReferencer<1> FVar7;
  FARSupportInterface *pFVar8;
  bool bVar9;
  
  FVar4.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar8 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar8 == (FARSupportInterface *)0x0) ||
      (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar4.ReferenceController)->SharedReferenceCount < 1)) {
    EVar5 = InsufficientFeatures;
    if (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return InsufficientFeatures;
    }
  }
  else {
    aVar2 = (FVar4.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pFVar8 = (FARSupportInterface *)0x0;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        FVar7.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          EVar5 = (*pcVar3)();
          return EVar5;
        }
        break;
      }
      LOCK();
      aVar6 = (FVar4.ReferenceController)->SharedReferenceCount;
      bVar9 = aVar2 == aVar6;
      if (bVar9) {
        (FVar4.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      FVar7.ReferenceController = FVar4.ReferenceController;
      aVar2 = aVar6;
    } while (!bVar9);
    if (pFVar8->ARImplemention == (IARSystemSupport *)0x0) {
      EVar5 = None;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
    }
    else {
      EVar5 = (**(code **)(pFVar8->ARImplemention->_padding_ + 0x18))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
    }
  }
  LOCK();
  paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
  }
  return EVar5;
}

// GetWorldMappingStatus @ 14cf567d0

EARWorldMappingState __cdecl UARBlueprintLibrary::GetWorldMappingStatus(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FWeakReferencer<1> FVar4;
  EARWorldMappingState EVar5;
  atomic<int> aVar6;
  FWeakReferencer<1> FVar7;
  FARSupportInterface *pFVar8;
  bool bVar9;
  
  FVar4.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar8 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar8 == (FARSupportInterface *)0x0) ||
      (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar4.ReferenceController)->SharedReferenceCount < 1)) {
    EVar5 = NotAvailable;
    if (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return NotAvailable;
    }
  }
  else {
    aVar2 = (FVar4.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pFVar8 = (FARSupportInterface *)0x0;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        FVar7.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          EVar5 = (*pcVar3)();
          return EVar5;
        }
        break;
      }
      LOCK();
      aVar6 = (FVar4.ReferenceController)->SharedReferenceCount;
      bVar9 = aVar2 == aVar6;
      if (bVar9) {
        (FVar4.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      FVar7.ReferenceController = FVar4.ReferenceController;
      aVar2 = aVar6;
    } while (!bVar9);
    if (pFVar8->ARImplemention == (IARSystemSupport *)0x0) {
      EVar5 = NotAvailable;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
    }
    else {
      EVar5 = (**(code **)(pFVar8->ARImplemention->_padding_ + 0xd8))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
    }
  }
  LOCK();
  paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
  }
  return EVar5;
}

// IsARPinLocalStoreReady @ 14cf572c0

bool __cdecl UARBlueprintLibrary::IsARPinLocalStoreReady(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FWeakReferencer<1> FVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  FWeakReferencer<1> FVar7;
  FARSupportInterface *pFVar8;
  bool bVar9;
  
  FVar4.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar8 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar8 == (FARSupportInterface *)0x0) ||
      (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar4.ReferenceController)->SharedReferenceCount < 1)) {
    uVar5 = 0;
    if (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return false;
    }
  }
  else {
    aVar2 = (FVar4.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pFVar8 = (FARSupportInterface *)0x0;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        FVar7.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        break;
      }
      LOCK();
      aVar6 = (FVar4.ReferenceController)->SharedReferenceCount;
      bVar9 = aVar2 == aVar6;
      if (bVar9) {
        (FVar4.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      FVar7.ReferenceController = FVar4.ReferenceController;
      aVar2 = aVar6;
    } while (!bVar9);
    if (pFVar8->ARImplemention == (IARSystemSupport *)0x0) {
      uVar5 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
    }
    else {
      uVar5 = (**(code **)(pFVar8->ARImplemention->_padding_ + 0x1a8))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
    }
  }
  LOCK();
  paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
  }
  return (bool)uVar5;
}

// IsARPinLocalStoreSupported @ 14cf573d0

bool __cdecl UARBlueprintLibrary::IsARPinLocalStoreSupported(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FWeakReferencer<1> FVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  FWeakReferencer<1> FVar7;
  FARSupportInterface *pFVar8;
  bool bVar9;
  
  FVar4.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar8 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar8 == (FARSupportInterface *)0x0) ||
      (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar4.ReferenceController)->SharedReferenceCount < 1)) {
    uVar5 = 0;
    if (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return false;
    }
  }
  else {
    aVar2 = (FVar4.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pFVar8 = (FARSupportInterface *)0x0;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        FVar7.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        break;
      }
      LOCK();
      aVar6 = (FVar4.ReferenceController)->SharedReferenceCount;
      bVar9 = aVar2 == aVar6;
      if (bVar9) {
        (FVar4.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      FVar7.ReferenceController = FVar4.ReferenceController;
      aVar2 = aVar6;
    } while (!bVar9);
    if (pFVar8->ARImplemention == (IARSystemSupport *)0x0) {
      uVar5 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
    }
    else {
      uVar5 = (**(code **)(pFVar8->ARImplemention->_padding_ + 0x1a0))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
    }
  }
  LOCK();
  paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
  }
  return (bool)uVar5;
}

// IsARSupported @ 14cf574e0

bool __cdecl UARBlueprintLibrary::IsARSupported(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FWeakReferencer<1> FVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  FWeakReferencer<1> FVar7;
  FARSupportInterface *pFVar8;
  bool bVar9;
  
  FVar4.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar8 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar8 == (FARSupportInterface *)0x0) ||
      (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar4.ReferenceController)->SharedReferenceCount < 1)) {
    uVar5 = 0;
    if (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return false;
    }
  }
  else {
    aVar2 = (FVar4.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pFVar8 = (FARSupportInterface *)0x0;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        FVar7.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        break;
      }
      LOCK();
      aVar6 = (FVar4.ReferenceController)->SharedReferenceCount;
      bVar9 = aVar2 == aVar6;
      if (bVar9) {
        (FVar4.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      FVar7.ReferenceController = FVar4.ReferenceController;
      aVar2 = aVar6;
    } while (!bVar9);
    if (pFVar8->ARImplemention == (IARSystemSupport *)0x0) {
      uVar5 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
    }
    else {
      uVar5 = (**(code **)(pFVar8->ARImplemention->_padding_ + 0x40))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
    }
  }
  LOCK();
  paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
  }
  return (bool)uVar5;
}

// IsSceneReconstructionSupported @ 14cf57750

bool __cdecl
UARBlueprintLibrary::IsSceneReconstructionSupported
          (EARSessionType param_1,EARSceneReconstruction param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  undefined1 uVar6;
  atomic<int> aVar7;
  FWeakReferencer<1> FVar8;
  FARSupportInterface *pFVar9;
  bool bVar10;
  
  FVar5.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar9 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar9 == (FARSupportInterface *)0x0) ||
      (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar5.ReferenceController)->SharedReferenceCount < 1)) {
    uVar6 = 0;
    if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return false;
    }
  }
  else {
    aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pFVar9 = (FARSupportInterface *)0x0;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        FVar8.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        break;
      }
      LOCK();
      aVar7 = (FVar5.ReferenceController)->SharedReferenceCount;
      bVar10 = aVar2 == aVar7;
      if (bVar10) {
        (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      FVar8.ReferenceController = FVar5.ReferenceController;
      aVar2 = aVar7;
    } while (!bVar10);
    pIVar3 = pFVar9->ARImplemention;
    if (pIVar3 == (IARSystemSupport *)0x0) {
      uVar6 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
    else {
      uVar6 = (**(code **)(pIVar3->_padding_ + 0x118))(pIVar3,param_1,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
  }
  LOCK();
  paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
  }
  return (bool)uVar6;
}

// IsSessionTrackingFeatureSupported @ 14cf57880

bool __cdecl
UARBlueprintLibrary::IsSessionTrackingFeatureSupported
          (EARSessionType param_1,EARSessionTrackingFeature param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  undefined1 uVar6;
  atomic<int> aVar7;
  FWeakReferencer<1> FVar8;
  FARSupportInterface *pFVar9;
  bool bVar10;
  
  FVar5.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar9 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar9 == (FARSupportInterface *)0x0) ||
      (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar5.ReferenceController)->SharedReferenceCount < 1)) {
    uVar6 = 0;
    if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return false;
    }
  }
  else {
    aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pFVar9 = (FARSupportInterface *)0x0;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        FVar8.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        break;
      }
      LOCK();
      aVar7 = (FVar5.ReferenceController)->SharedReferenceCount;
      bVar10 = aVar2 == aVar7;
      if (bVar10) {
        (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      FVar8.ReferenceController = FVar5.ReferenceController;
      aVar2 = aVar7;
    } while (!bVar10);
    pIVar3 = pFVar9->ARImplemention;
    if (pIVar3 == (IARSystemSupport *)0x0) {
      uVar6 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
    else {
      uVar6 = (**(code **)(pIVar3->_padding_ + 0x108))(pIVar3,param_1,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
  }
  LOCK();
  paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
  }
  return (bool)uVar6;
}

// IsSessionTypeSupported @ 14cf579b0

bool __cdecl UARBlueprintLibrary::IsSessionTypeSupported(EARSessionType param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  undefined1 uVar6;
  atomic<int> aVar7;
  FWeakReferencer<1> FVar8;
  FARSupportInterface *pFVar9;
  bool bVar10;
  
  FVar5.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar9 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar9 == (FARSupportInterface *)0x0) ||
      (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar5.ReferenceController)->SharedReferenceCount < 1)) {
    uVar6 = 0;
    if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return false;
    }
  }
  else {
    aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pFVar9 = (FARSupportInterface *)0x0;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        FVar8.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        break;
      }
      LOCK();
      aVar7 = (FVar5.ReferenceController)->SharedReferenceCount;
      bVar10 = aVar2 == aVar7;
      if (bVar10) {
        (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      FVar8.ReferenceController = FVar5.ReferenceController;
      aVar2 = aVar7;
    } while (!bVar10);
    pIVar3 = pFVar9->ARImplemention;
    if (pIVar3 == (IARSystemSupport *)0x0) {
      uVar6 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
    else {
      uVar6 = (**(code **)(pIVar3->_padding_ + 0x70))(pIVar3,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
  }
  LOCK();
  paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
  }
  return (bool)uVar6;
}

// LineTraceTrackedObjects3D @ 14cf57b40

TArray<FARTraceResult,TSizedDefaultAllocator<32>_> * __cdecl
UARBlueprintLibrary::LineTraceTrackedObjects3D
          (TArray<FARTraceResult,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TVector<double> *param_1,TVector<double> *param_2,bool param_3,bool param_4,bool param_5,
          bool param_6)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FWeakReferencer<1> FVar6;
  atomic<int> aVar7;
  TArray<FARTraceResult,TSizedDefaultAllocator<32>_> *pTVar8;
  FARSupportInterface *pFVar9;
  FWeakReferencer<1> FVar10;
  bool bVar11;
  TArray<FARTraceResult,TSizedDefaultAllocator<32>_> local_78;
  double local_68;
  double dStack_60;
  double local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  FVar6 = RegisteredARSystem.WeakReferenceCount;
  pFVar9 = RegisteredARSystem.Object;
  __return_storage_ptr__->ArrayMax = 0;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
    if ((pFVar9 != (FARSupportInterface *)0x0) &&
       (0 < (int)(FVar6.ReferenceController)->SharedReferenceCount)) {
      aVar2 = (FVar6.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          pFVar9 = (FARSupportInterface *)0x0;
          FVar10.ReferenceController = (TReferenceControllerBase<1> *)(FARSupportInterface *)0x0;
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            pTVar8 = (TArray<FARTraceResult,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar8;
          }
          break;
        }
        LOCK();
        aVar7 = (FVar6.ReferenceController)->SharedReferenceCount;
        bVar11 = aVar2 == aVar7;
        if (bVar11) {
          (FVar6.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar7 = aVar2;
        }
        UNLOCK();
        FVar10 = FVar6;
        aVar2 = aVar7;
      } while (!bVar11);
      pIVar3 = pFVar9->ARImplemention;
      if (pIVar3 == (IARSystemSupport *)0x0) {
        local_78.ArrayMax = 0;
        local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.ArrayNum = 0;
      }
      else {
        local_68 = (param_2->field0_0x0)._s_0.X;
        dStack_60 = (param_2->field0_0x0)._s_0.Y;
        local_58 = (param_2->field0_0x0)._s_0.Z;
        local_48 = *(undefined4 *)&param_1->field0_0x0;
        uStack_44 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
        uStack_40 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
        uStack_3c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
        local_38 = (param_1->field0_0x0)._s_0.Z;
        (**(code **)(pIVar3->_padding_ + 0x50))
                  (pIVar3,&local_78,&local_48,&local_68,
                   param_4 * '\x02' | param_5 << 2 | param_6 << 3 | param_3);
      }
      if (__return_storage_ptr__ != &local_78) {
        DestructItems<FARTraceResult,int>
                  ((FARTraceResult *)(__return_storage_ptr__->AllocatorInstance).Data,
                   __return_storage_ptr__->ArrayNum);
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (__return_storage_ptr__->AllocatorInstance).Data = local_78.AllocatorInstance.Data;
        __return_storage_ptr__->ArrayNum = local_78.ArrayNum;
        __return_storage_ptr__->ArrayMax = local_78.ArrayMax;
        local_78.ArrayMax = 0;
        local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.ArrayNum = 0;
      }
      DestructItems<FARTraceResult,int>
                ((FARTraceResult *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
      if ((FARTraceResult *)local_78.AllocatorInstance.Data != (FARTraceResult *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar10.ReferenceController);
    }
    LOCK();
    paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
    }
  }
  return __return_storage_ptr__;
}

// LineTraceTrackedObjects @ 14cf57e10

TArray<FARTraceResult,TSizedDefaultAllocator<32>_> * __cdecl
UARBlueprintLibrary::LineTraceTrackedObjects
          (TArray<FARTraceResult,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TVector2<double> *param_1,bool param_2,bool param_3,bool param_4,bool param_5)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FWeakReferencer<1> FVar6;
  atomic<int> aVar7;
  TArray<FARTraceResult,TSizedDefaultAllocator<32>_> *pTVar8;
  FARSupportInterface *pFVar9;
  FWeakReferencer<1> FVar10;
  bool bVar11;
  TArray<FARTraceResult,TSizedDefaultAllocator<32>_> local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  FVar6 = RegisteredARSystem.WeakReferenceCount;
  pFVar9 = RegisteredARSystem.Object;
  __return_storage_ptr__->ArrayMax = 0;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
    if ((pFVar9 != (FARSupportInterface *)0x0) &&
       (0 < (int)(FVar6.ReferenceController)->SharedReferenceCount)) {
      aVar2 = (FVar6.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          pFVar9 = (FARSupportInterface *)0x0;
          FVar10.ReferenceController = (TReferenceControllerBase<1> *)(FARSupportInterface *)0x0;
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            pTVar8 = (TArray<FARTraceResult,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar8;
          }
          break;
        }
        LOCK();
        aVar7 = (FVar6.ReferenceController)->SharedReferenceCount;
        bVar11 = aVar2 == aVar7;
        if (bVar11) {
          (FVar6.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar7 = aVar2;
        }
        UNLOCK();
        FVar10 = FVar6;
        aVar2 = aVar7;
      } while (!bVar11);
      pIVar3 = pFVar9->ARImplemention;
      if (pIVar3 == (IARSystemSupport *)0x0) {
        local_38.ArrayMax = 0;
        local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.ArrayNum = 0;
      }
      else {
        local_28 = *(undefined4 *)&param_1->field0_0x0;
        uStack_24 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
        uStack_20 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
        uStack_1c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
        (**(code **)(pIVar3->_padding_ + 0x58))
                  (pIVar3,&local_38,&local_28,
                   param_3 * '\x02' | param_4 << 2 | param_5 << 3 | param_2);
      }
      if (__return_storage_ptr__ != &local_38) {
        DestructItems<FARTraceResult,int>
                  ((FARTraceResult *)(__return_storage_ptr__->AllocatorInstance).Data,
                   __return_storage_ptr__->ArrayNum);
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (__return_storage_ptr__->AllocatorInstance).Data = local_38.AllocatorInstance.Data;
        __return_storage_ptr__->ArrayNum = local_38.ArrayNum;
        __return_storage_ptr__->ArrayMax = local_38.ArrayMax;
        local_38.ArrayMax = 0;
        local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.ArrayNum = 0;
      }
      DestructItems<FARTraceResult,int>
                ((FARTraceResult *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
      if ((FARTraceResult *)local_38.AllocatorInstance.Data != (FARTraceResult *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar10.ReferenceController);
    }
    LOCK();
    paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
    }
  }
  return __return_storage_ptr__;
}

// LoadARPinsFromLocalStore @ 14cf58000

TMap<FName,UARPin_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UARPin_*,0>_> * __cdecl
UARBlueprintLibrary::LoadARPinsFromLocalStore
          (TMap<FName,UARPin_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UARPin_*,0>_>
           *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  atomic<int> aVar6;
  TMap<FName,UARPin_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UARPin_*,0>_> *pTVar7;
  FARSupportInterface *pFVar8;
  FWeakReferencer<1> FVar9;
  bool bVar10;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  FVar5 = RegisteredARSystem.WeakReferenceCount;
  pFVar8 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
    if ((pFVar8 != (FARSupportInterface *)0x0) &&
       (0 < (int)(FVar5.ReferenceController)->SharedReferenceCount)) {
      aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          pFVar8 = (FARSupportInterface *)0x0;
          FVar9.ReferenceController = (TReferenceControllerBase<1> *)(FARSupportInterface *)0x0;
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TMap<FName,UARPin_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UARPin_*,0>_>
                      *)(*pcVar4)();
            return pTVar7;
          }
          break;
        }
        LOCK();
        aVar6 = (FVar5.ReferenceController)->SharedReferenceCount;
        bVar10 = aVar2 == aVar6;
        if (bVar10) {
          (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar6 = aVar2;
        }
        UNLOCK();
        FVar9 = FVar5;
        aVar2 = aVar6;
      } while (!bVar10);
      pIVar3 = pFVar8->ARImplemention;
      if (pIVar3 != (IARSystemSupport *)0x0) {
        (**(code **)(pIVar3->_padding_ + 0x1b0))(pIVar3,__return_storage_ptr__);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar9.ReferenceController);
    }
    LOCK();
    paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
    }
  }
  return __return_storage_ptr__;
}

// PauseARSession @ 14cf5a2a0

void __cdecl UARBlueprintLibrary::PauseARSession(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  atomic<int> aVar6;
  FWeakReferencer<1> FVar7;
  FARSupportInterface *pFVar8;
  bool bVar9;
  void *local_28 [2];
  char local_18;
  
  FVar5.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar8 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
    if ((pFVar8 != (FARSupportInterface *)0x0) &&
       (0 < (int)(FVar5.ReferenceController)->SharedReferenceCount)) {
      aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pFVar8 = (FARSupportInterface *)0x0;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          FVar7.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          break;
        }
        LOCK();
        aVar6 = (FVar5.ReferenceController)->SharedReferenceCount;
        bVar9 = aVar2 == aVar6;
        if (bVar9) {
          (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar6 = aVar2;
        }
        UNLOCK();
        FVar7.ReferenceController = FVar5.ReferenceController;
        aVar2 = aVar6;
      } while (!bVar9);
      pIVar3 = pFVar8->ARImplemention;
      if (pIVar3 != (IARSystemSupport *)0x0) {
        (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3,local_28);
        if (local_28[0] != (void *)0x0) {
          FMemory::Free(local_28[0]);
        }
        if (local_18 == '\x01') {
          (**(code **)(pFVar8->ARImplemention->_padding_ + 0x28))();
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
    }
    LOCK();
    paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
    }
  }
  return;
}

// PinComponent @ 14cf5a490

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UARPin * __cdecl
UARBlueprintLibrary::PinComponent
          (USceneComponent *param_1,TTransform<double> *param_2,UARTrackedGeometry *param_3,
          FName param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  atomic<int> aVar6;
  UARPin *pUVar7;
  UARPin *pUVar8;
  FWeakReferencer<1> FVar9;
  bool bVar10;
  
  FVar5.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pUVar7 = (UARPin *)RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pUVar7 == (UARPin *)0x0) ||
      (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar5.ReferenceController)->SharedReferenceCount < 1)) {
    pUVar8 = (UARPin *)0x0;
    if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return (UARPin *)0x0;
    }
  }
  else {
    pUVar8 = (UARPin *)0x0;
    aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        FVar9.ReferenceController = (TReferenceControllerBase<1> *)pUVar8;
        pUVar7 = pUVar8;
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          pUVar7 = (UARPin *)(*pcVar4)();
          return pUVar7;
        }
        break;
      }
      LOCK();
      aVar6 = (FVar5.ReferenceController)->SharedReferenceCount;
      bVar10 = aVar2 == aVar6;
      if (bVar10) {
        (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      FVar9.ReferenceController = FVar5.ReferenceController;
      aVar2 = aVar6;
    } while (!bVar10);
    pIVar3 = (IARSystemSupport *)(pUVar7->LocalToTrackingTransform).Translation.XY.m128d_f64[0];
    if (pIVar3 != (IARSystemSupport *)0x0) {
      pUVar8 = (UARPin *)
               (**(code **)(pIVar3->_padding_ + 0xa0))(pIVar3,param_1,param_2,param_3,param_4);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar9.ReferenceController);
  }
  LOCK();
  paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
  }
  return pUVar8;
}

// PinComponentToARPin @ 14cf5a5c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl UARBlueprintLibrary::PinComponentToARPin(USceneComponent *param_1,UARPin *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  undefined1 uVar6;
  atomic<int> aVar7;
  FWeakReferencer<1> FVar8;
  FARSupportInterface *pFVar9;
  bool bVar10;
  
  FVar5.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar9 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar9 == (FARSupportInterface *)0x0) ||
      (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar5.ReferenceController)->SharedReferenceCount < 1)) {
    uVar6 = 0;
    if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return false;
    }
  }
  else {
    aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pFVar9 = (FARSupportInterface *)0x0;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        FVar8.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        break;
      }
      LOCK();
      aVar7 = (FVar5.ReferenceController)->SharedReferenceCount;
      bVar10 = aVar2 == aVar7;
      if (bVar10) {
        (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      FVar8.ReferenceController = FVar5.ReferenceController;
      aVar2 = aVar7;
    } while (!bVar10);
    pIVar3 = pFVar9->ARImplemention;
    if (pIVar3 == (IARSystemSupport *)0x0) {
      uVar6 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
    else {
      uVar6 = (**(code **)(pIVar3->_padding_ + 0xa8))(pIVar3,param_1,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
  }
  LOCK();
  paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
  }
  return (bool)uVar6;
}

// PinComponentToTraceResult @ 14cf5a6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UARPin * __cdecl
UARBlueprintLibrary::PinComponentToTraceResult
          (USceneComponent *param_1,FARTraceResult *param_2,FName param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  UARTrackedGeometry *pUVar4;
  code *pcVar5;
  FWeakReferencer<1> FVar6;
  atomic<int> aVar7;
  UARPin *pUVar8;
  TTransform<double> *pTVar9;
  UARPin *pUVar10;
  FWeakReferencer<1> FVar11;
  bool bVar12;
  undefined1 auStack_e8 [32];
  FName local_c8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  FVar6.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pUVar8 = (UARPin *)RegisteredARSystem.Object;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pUVar8 == (UARPin *)0x0) ||
      (FVar6.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar6.ReferenceController)->SharedReferenceCount < 1)) {
    pUVar10 = (UARPin *)0x0;
    if (FVar6.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return (UARPin *)0x0;
    }
  }
  else {
    pUVar10 = (UARPin *)0x0;
    aVar2 = (FVar6.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        FVar11.ReferenceController = (TReferenceControllerBase<1> *)pUVar10;
        pUVar8 = pUVar10;
        if (bVar12) {
          pcVar5 = (code *)swi(3);
          pUVar8 = (UARPin *)(*pcVar5)();
          return pUVar8;
        }
        break;
      }
      LOCK();
      aVar7 = (FVar6.ReferenceController)->SharedReferenceCount;
      bVar12 = aVar2 == aVar7;
      if (bVar12) {
        (FVar6.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      FVar11.ReferenceController = FVar6.ReferenceController;
      aVar2 = aVar7;
    } while (!bVar12);
    pIVar3 = (IARSystemSupport *)(pUVar8->LocalToTrackingTransform).Translation.XY.m128d_f64[0];
    if (pIVar3 != (IARSystemSupport *)0x0) {
      pUVar4 = (param_2->TrackedGeometry).field0_0x0.DebugPtr;
      pcVar5 = *(code **)(pIVar3->_padding_ + 0xa0);
      pTVar9 = FARTraceResult::GetLocalToWorldTransform(param_2,&local_a8);
      local_c8 = param_3;
      pUVar10 = (UARPin *)(*pcVar5)(pIVar3,param_1,pTVar9,pUVar4);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar11.ReferenceController);
  }
  LOCK();
  paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
  }
  return pUVar10;
}

// RegisterAsARSystem @ 14cf5b950

void __cdecl UARBlueprintLibrary::RegisterAsARSystem(TSharedRef<FARSupportInterface,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> FVar4;
  FWeakReferencer<1> FVar5;
  
  RegisteredARSystem.Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  FVar5.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  if (pTVar3 != RegisteredARSystem.WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    FVar4.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
    FVar5.ReferenceController = pTVar3;
    if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
      }
    }
  }
  RegisteredARSystem.WeakReferenceCount.ReferenceController = FVar5.ReferenceController;
  return;
}

// RemoveARPinFromLocalStore @ 14cf5c0d0

void __cdecl UARBlueprintLibrary::RemoveARPinFromLocalStore(FName param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  atomic<int> aVar6;
  FARSupportInterface *pFVar7;
  FWeakReferencer<1> FVar8;
  bool bVar9;
  
  FVar5.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar7 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
    if ((pFVar7 != (FARSupportInterface *)0x0) &&
       (0 < (int)(FVar5.ReferenceController)->SharedReferenceCount)) {
      aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pFVar7 = (FARSupportInterface *)0x0;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          FVar8.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          break;
        }
        LOCK();
        aVar6 = (FVar5.ReferenceController)->SharedReferenceCount;
        bVar9 = aVar2 == aVar6;
        if (bVar9) {
          (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar6 = aVar2;
        }
        UNLOCK();
        FVar8.ReferenceController = FVar5.ReferenceController;
        aVar2 = aVar6;
      } while (!bVar9);
      pIVar3 = pFVar7->ARImplemention;
      if (pIVar3 != (IARSystemSupport *)0x0) {
        (**(code **)(pIVar3->_padding_ + 0x1c0))(pIVar3,param_1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
    LOCK();
    paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
    }
  }
  return;
}

// RemoveAllARPinsFromLocalStore @ 14cf5c1b0

void __cdecl UARBlueprintLibrary::RemoveAllARPinsFromLocalStore(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FWeakReferencer<1> FVar4;
  atomic<int> aVar5;
  FWeakReferencer<1> FVar6;
  FARSupportInterface *pFVar7;
  bool bVar8;
  
  FVar4.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar7 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
    if ((pFVar7 != (FARSupportInterface *)0x0) &&
       (0 < (int)(FVar4.ReferenceController)->SharedReferenceCount)) {
      aVar2 = (FVar4.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pFVar7 = (FARSupportInterface *)0x0;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          FVar6.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        LOCK();
        aVar5 = (FVar4.ReferenceController)->SharedReferenceCount;
        bVar8 = aVar2 == aVar5;
        if (bVar8) {
          (FVar4.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar5 = aVar2;
        }
        UNLOCK();
        FVar6.ReferenceController = FVar4.ReferenceController;
        aVar2 = aVar5;
      } while (!bVar8);
      if (pFVar7->ARImplemention != (IARSystemSupport *)0x0) {
        (**(code **)(pFVar7->ARImplemention->_padding_ + 0x1c8))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
    }
    LOCK();
    paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
    }
  }
  return;
}

// RemovePin @ 14cf5c590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UARBlueprintLibrary::RemovePin(UARPin *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  atomic<int> aVar6;
  FARSupportInterface *pFVar7;
  FWeakReferencer<1> FVar8;
  bool bVar9;
  
  FVar5.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar7 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
    if ((pFVar7 != (FARSupportInterface *)0x0) &&
       (0 < (int)(FVar5.ReferenceController)->SharedReferenceCount)) {
      aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pFVar7 = (FARSupportInterface *)0x0;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          FVar8.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          break;
        }
        LOCK();
        aVar6 = (FVar5.ReferenceController)->SharedReferenceCount;
        bVar9 = aVar2 == aVar6;
        if (bVar9) {
          (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar6 = aVar2;
        }
        UNLOCK();
        FVar8.ReferenceController = FVar5.ReferenceController;
        aVar2 = aVar6;
      } while (!bVar9);
      pIVar3 = pFVar7->ARImplemention;
      if (pIVar3 != (IARSystemSupport *)0x0) {
        (**(code **)(pIVar3->_padding_ + 0xb0))(pIVar3,param_1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
    LOCK();
    paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
    }
  }
  return;
}

// ResizeXRCamera @ 14cf5d1b0

TIntPoint<int> __cdecl UARBlueprintLibrary::ResizeXRCamera(TIntPoint<int> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  atomic<int> aVar6;
  TIntPoint<int> TVar7;
  FWeakReferencer<1> FVar8;
  FARSupportInterface *pFVar9;
  bool bVar10;
  
  FVar5.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar9 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar9 == (FARSupportInterface *)0x0) ||
      (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar5.ReferenceController)->SharedReferenceCount < 1)) {
    param_1->field0_0x0 = (TIntPoint<int>_u_0)0x0;
    if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
    }
  }
  else {
    aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        FVar8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar9 = (FARSupportInterface *)0x0;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          TVar7.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar4)();
          return (TIntPoint<int>)TVar7.field0_0x0;
        }
        break;
      }
      LOCK();
      aVar6 = (FVar5.ReferenceController)->SharedReferenceCount;
      bVar10 = aVar2 == aVar6;
      if (bVar10) {
        (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      FVar8.ReferenceController = FVar5.ReferenceController;
      aVar2 = aVar6;
    } while (!bVar10);
    pIVar3 = pFVar9->ARImplemention;
    if (pIVar3 == (IARSystemSupport *)0x0) {
      param_1->field0_0x0 = (TIntPoint<int>_u_0)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
    else {
      (**(code **)(pIVar3->_padding_ + 0x88))(pIVar3,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
  }
  LOCK();
  paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
  }
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// SaveARPinToLocalStore @ 14cf5d2f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl UARBlueprintLibrary::SaveARPinToLocalStore(FName param_1,UARPin *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  undefined1 uVar6;
  atomic<int> aVar7;
  FARSupportInterface *pFVar8;
  FWeakReferencer<1> FVar9;
  bool bVar10;
  
  FVar5.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar8 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar8 == (FARSupportInterface *)0x0) ||
      (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar5.ReferenceController)->SharedReferenceCount < 1)) {
    uVar6 = 0;
    if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return false;
    }
  }
  else {
    aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pFVar8 = (FARSupportInterface *)0x0;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        FVar9.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        break;
      }
      LOCK();
      aVar7 = (FVar5.ReferenceController)->SharedReferenceCount;
      bVar10 = aVar2 == aVar7;
      if (bVar10) {
        (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      FVar9.ReferenceController = FVar5.ReferenceController;
      aVar2 = aVar7;
    } while (!bVar10);
    pIVar3 = pFVar8->ARImplemention;
    if (pIVar3 == (IARSystemSupport *)0x0) {
      uVar6 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar9.ReferenceController);
    }
    else {
      uVar6 = (**(code **)(pIVar3->_padding_ + 0x1b8))(pIVar3,param_1,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar9.ReferenceController);
    }
  }
  LOCK();
  paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
  }
  return (bool)uVar6;
}

// SaveWorld @ 14cf5d440

TSharedPtr<FARSaveWorldAsyncTask,1> * __cdecl
UARBlueprintLibrary::SaveWorld(TSharedPtr<FARSaveWorldAsyncTask,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  atomic<int> aVar6;
  TSharedPtr<FARSaveWorldAsyncTask,1> *pTVar7;
  FWeakReferencer<1> FVar8;
  FARSupportInterface *pFVar9;
  bool bVar10;
  
  FVar5.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar9 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar9 == (FARSupportInterface *)0x0) ||
      (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar5.ReferenceController)->SharedReferenceCount < 1)) {
    __return_storage_ptr__->Object = (FARSaveWorldAsyncTask *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return __return_storage_ptr__;
    }
  }
  else {
    aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        FVar8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar9 = (FARSupportInterface *)0x0;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSharedPtr<FARSaveWorldAsyncTask,1> *)(*pcVar4)();
          return pTVar7;
        }
        break;
      }
      LOCK();
      aVar6 = (FVar5.ReferenceController)->SharedReferenceCount;
      bVar10 = aVar2 == aVar6;
      if (bVar10) {
        (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      FVar8.ReferenceController = FVar5.ReferenceController;
      aVar2 = aVar6;
    } while (!bVar10);
    pIVar3 = pFVar9->ARImplemention;
    if (pIVar3 == (IARSystemSupport *)0x0) {
      __return_storage_ptr__->Object = (FARSaveWorldAsyncTask *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
    else {
      (**(code **)(pIVar3->_padding_ + 0xd0))(pIVar3,__return_storage_ptr__);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
  }
  LOCK();
  paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
  }
  return __return_storage_ptr__;
}

// SetARWorldOriginLocationAndRotation @ 14cf5e650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UARBlueprintLibrary::SetARWorldOriginLocationAndRotation
          (TVector<double> *param_1,TRotator<double> *param_2,bool param_3,bool param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [16];
  uint uVar16;
  uint uVar17;
  FWeakReferencer<1> FVar18;
  atomic<int> aVar19;
  undefined4 uVar20;
  int iVar21;
  undefined4 extraout_EAX;
  TQuat<double> *pTVar22;
  TQuat<double> *extraout_RAX;
  uint uVar23;
  undefined4 uVar24;
  IXRTrackingSystem *pIVar25;
  TTransform<double> *pTVar26;
  FARSupportInterface *pFVar27;
  FWeakReferencer<1> FVar28;
  bool bVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar61;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar62;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined4 uVar70;
  double dVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined4 uVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  undefined4 uVar85;
  undefined4 uVar86;
  undefined4 uVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  uint uVar91;
  undefined4 uVar92;
  uint uVar93;
  undefined4 uVar94;
  uint uVar95;
  undefined4 uVar96;
  undefined4 uVar97;
  undefined1 auStack_548 [32];
  undefined1 local_528 [16];
  double local_518;
  TQuat<double> local_508;
  TQuat<double> local_4e8;
  TTransform<double> local_4c8;
  TRotator<double> local_450;
  TQuat<double> local_438;
  TQuat<double> local_418;
  TQuat<double> local_3f8;
  TTransform<double> local_3d8;
  TTransform<double> local_378;
  TTransform<double> local_318;
  TTransform<double> local_2b8;
  TTransform<double> local_258;
  TTransform<double> local_1f8;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_548;
  if (param_4) {
    param_2->Pitch = 0.0;
    param_2->Roll = 0.0;
  }
  FVar18.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar27 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
    if ((pFVar27 != (FARSupportInterface *)0x0) &&
       (0 < (int)(FVar18.ReferenceController)->SharedReferenceCount)) {
      aVar2 = (FVar18.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          pFVar27 = (FARSupportInterface *)0x0;
          FVar28.ReferenceController = (TReferenceControllerBase<1> *)(FARSupportInterface *)0x0;
          if (bVar29) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        LOCK();
        aVar19 = (FVar18.ReferenceController)->SharedReferenceCount;
        bVar29 = aVar2 == aVar19;
        if (bVar29) {
          (FVar18.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar19 = aVar2;
        }
        UNLOCK();
        FVar28.ReferenceController = FVar18.ReferenceController;
        aVar2 = aVar19;
      } while (!bVar29);
      pIVar25 = pFVar27->XRTrackingSystem;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar28.ReferenceController);
      if (pIVar25 != (IXRTrackingSystem *)0x0) {
        uVar20 = (**(code **)((longlong)*pIVar25 + 0x90))(pIVar25,&local_198);
        uVar89 = _UNK_15061cc8c;
        uVar88 = _UNK_15061cc88;
        uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        uVar16 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        auVar51._0_8_ =
             (double)CONCAT44(local_148._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              local_148._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar51._8_4_ = local_148._8_4_ & _UNK_15061cc88;
        auVar51._12_4_ = local_148._12_4_ & _UNK_15061cc8c;
        uVar90 = local_158._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar91 = local_158._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        uVar93 = local_158._8_4_ & _UNK_15061cc88;
        uVar95 = local_158._12_4_ & _UNK_15061cc8c;
        auVar44._8_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar51._8_8_);
        auVar44._0_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar51._0_8_);
        uVar23 = movmskpd((int)pIVar25,auVar44);
        auVar33._8_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
              (double)CONCAT44(uVar95,uVar93));
        auVar33._0_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
              (double)CONCAT44(uVar91,uVar90));
        iVar21 = movmskpd(uVar20,auVar33);
        if ((uVar23 & 0x3fffffff) == 0 && iVar21 == 0) {
          local_3d8.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_3d8.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_3d8.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_3d8.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_3d8.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_3d8.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          auVar65 = local_148;
        }
        else {
          local_198 = local_198 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dStack_190 = dStack_190 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          uVar84 = SUB84(dStack_190,0);
          uVar85 = (undefined4)((ulonglong)dStack_190 >> 0x20);
          local_188 = local_188 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dStack_180 = dStack_180 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          uVar82 = SUB84(dStack_180,0);
          uVar83 = (undefined4)((ulonglong)dStack_180 >> 0x20);
          lVar30 = -(ulonglong)
                    ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & local_148._4_4_
                                      ,(uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                       local_148._0_4_) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
          lVar31 = -(ulonglong)
                    ((double)CONCAT44(uVar91,uVar90) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
          lVar32 = -(ulonglong)
                    ((double)CONCAT44(uVar95,uVar93) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
          auVar72._8_4_ = uVar84;
          auVar72._0_8_ = local_198;
          auVar72._12_4_ = uVar85;
          auVar4._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
          auVar4._0_8_ = local_148._0_8_;
          auVar4._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
          auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar4);
          auVar44 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,local_158)
          ;
          auVar73._8_4_ = uVar82;
          auVar73._0_8_ = local_188;
          auVar73._12_4_ = uVar83;
          local_3d8.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar31 & auVar44._0_4_;
          local_3d8.Scale3D.XY.m128d_f64[0]._4_4_ =
               ~(uint)((ulonglong)lVar31 >> 0x20) & auVar44._4_4_;
          local_3d8.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar32 & auVar44._8_4_;
          local_3d8.Scale3D.XY.m128d_f64[1]._4_4_ =
               ~(uint)((ulonglong)lVar32 >> 0x20) & auVar44._12_4_;
          local_178 = local_178 *
                      (double)CONCAT44(local_3d8.Scale3D.XY.m128d_f64[0]._4_4_,
                                       local_3d8.Scale3D.XY.m128d_f64[0]._0_4_);
          dStack_170 = dStack_170 *
                       (double)CONCAT44(local_3d8.Scale3D.XY.m128d_f64[1]._4_4_,
                                        local_3d8.Scale3D.XY.m128d_f64[1]._0_4_);
          uVar20 = (undefined4)((ulonglong)dStack_170 >> 0x20);
          local_3d8.Scale3D.ZW.m128d_f64[0] =
               (double)CONCAT44(~(uint)((ulonglong)lVar30 >> 0x20) & auVar33._4_4_,
                                ~(uint)lVar30 & auVar33._0_4_);
          auVar52._8_4_ = uVar84;
          auVar52._0_8_ = local_198;
          auVar52._12_4_ = uVar85;
          dVar61 = auVar52._8_8_;
          auVar34._8_4_ = SUB84(local_188,0);
          auVar34._0_8_ = dVar61;
          auVar34._12_4_ = (int)((ulonglong)local_188 >> 0x20);
          local_168 = local_168 * local_3d8.Scale3D.ZW.m128d_f64[0];
          dStack_160 = dStack_160 * 0.0;
          auVar7._8_4_ = uVar82;
          auVar7._0_8_ = local_188;
          auVar7._12_4_ = uVar83;
          auVar44 = blendpd(auVar72,auVar7,2);
          auVar78._8_4_ = SUB84(dStack_170,0);
          auVar78._0_8_ = local_178;
          auVar78._12_4_ = uVar20;
          auVar45._8_4_ = SUB84(dStack_170,0);
          auVar45._0_8_ = local_178;
          auVar45._12_4_ = uVar20;
          auVar6._8_4_ = SUB84(dStack_160,0);
          auVar6._0_8_ = local_168;
          auVar6._12_4_ = (int)((ulonglong)dStack_160 >> 0x20);
          auVar33 = blendpd(auVar45,auVar6,2);
          auVar79._0_8_ = auVar78._8_8_ * local_198 - dVar61 * local_178;
          auVar79._8_8_ = local_168 * dStack_190 - auVar34._8_8_ * dStack_170;
          auVar46._0_8_ = auVar33._0_8_ * local_188 - auVar44._0_8_ * local_168;
          auVar46._8_8_ = auVar33._8_8_ * dStack_180 - auVar44._8_8_ * dStack_160;
          dVar5 = auVar79._8_8_ + auVar79._8_8_;
          dVar71 = auVar46._0_8_ + auVar46._0_8_;
          uVar20 = SUB84(dVar71,0);
          uVar70 = (undefined4)((ulonglong)dVar71 >> 0x20);
          auVar33 = blendpd(auVar79,auVar46,2);
          auVar80._0_8_ = auVar33._0_8_ + auVar33._0_8_;
          auVar80._8_8_ = auVar33._8_8_ + auVar33._8_8_;
          auVar63._8_4_ = uVar20;
          auVar63._0_8_ = dVar5;
          auVar63._12_4_ = uVar70;
          auVar35._8_4_ = uVar20;
          auVar35._0_8_ = dVar5;
          auVar35._12_4_ = uVar70;
          auVar53._8_4_ = uVar20;
          auVar53._0_8_ = dVar5;
          auVar53._12_4_ = uVar70;
          auVar33 = blendpd(auVar53,auVar80,2);
          auVar64._0_8_ = auVar63._8_8_ * local_198 - dVar5 * dVar61;
          auVar64._8_8_ = auVar80._0_8_ * dStack_190 - auVar35._8_8_ * local_188;
          auVar36._8_4_ = SUB84(auVar80._8_8_,0);
          auVar36._0_8_ = auVar80._0_8_;
          auVar36._12_4_ = (int)((ulonglong)auVar80._8_8_ >> 0x20);
          auVar54._0_8_ = auVar33._0_8_ * local_188 - auVar80._0_8_ * auVar44._0_8_;
          auVar54._8_8_ = auVar33._8_8_ * dStack_180 - auVar36._8_8_ * auVar44._8_8_;
          auVar37._8_4_ = SUB84(auVar64._8_8_,0);
          auVar37._0_8_ = auVar64._0_8_;
          auVar37._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
          auVar65 = blendpd(auVar64,auVar54,2);
          local_3d8.Rotation.XY.m128d_f64[1]._0_4_ = uVar84;
          local_3d8.Rotation.XY.m128d_f64[0] = local_198;
          local_3d8.Rotation.XY.m128d_f64[1]._4_4_ = uVar85;
          local_3d8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar82;
          local_3d8.Rotation.ZW.m128d_f64[0] = local_188;
          local_3d8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar83;
          local_3d8.Translation.XY.m128d_f64[1] =
               0.0 - (dVar71 * dStack_180 + dStack_170 + auVar54._0_8_);
          local_3d8.Translation.XY.m128d_f64[0] =
               0.0 - (dVar5 * auVar73._8_8_ + local_178 + auVar37._8_8_);
          local_3d8.Translation.ZW.m128d_f64[1] = 0.0;
          local_3d8.Translation.ZW.m128d_f64[0] =
               0.0 - (auVar80._0_8_ * auVar73._8_8_ + local_168 + auVar65._0_8_);
          local_3d8.Scale3D.ZW.m128d_f64[1] = 0.0;
        }
        GetAlignmentTransform(&local_4c8);
        dVar5 = *(double *)((longlong)&param_1->field0_0x0 + 0x10);
        uVar84 = SUB84(dVar5,0);
        uVar85 = (undefined4)((ulonglong)dVar5 >> 0x20);
        uVar86 = 0;
        uVar87 = 0;
        uVar20 = *(undefined4 *)&param_1->field0_0x0;
        uVar70 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
        uVar82 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
        uVar83 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
        if (param_3) {
          pTVar22 = UE::Math::TRotator<double>::Quaternion(param_2,&local_438);
          pTVar26 = &local_1f8;
          local_138.Rotation.XY.m128d_f64[0] = pTVar22->X;
          local_138.Rotation.XY.m128d_f64[1] = pTVar22->Y;
          local_138.Rotation.ZW.m128d_f64[0] = pTVar22->Z;
          local_138.Rotation.ZW.m128d_f64[1] = pTVar22->W;
          local_138.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
          local_138.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
          local_138.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
          local_138.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
          local_1f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_1f8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_1f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_1f8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_1f8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_1f8.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_1f8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_1f8.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_1f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_1f8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_1f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_1f8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_138.Translation.ZW.m128d_f64[1] = 0.0;
          local_138.Translation.XY.m128d_f64[0]._0_4_ = uVar20;
          local_138.Translation.XY.m128d_f64[0]._4_4_ = uVar70;
          local_138.Translation.XY.m128d_f64[1]._0_4_ = uVar82;
          local_138.Translation.XY.m128d_f64[1]._4_4_ = uVar83;
          local_138.Translation.ZW.m128d_f64[0] = dVar5;
          UE::Math::TTransform<double>::Multiply(pTVar26,&local_138,&local_3d8);
          auVar55._0_8_ =
               (double)CONCAT44(local_4c8.Scale3D.ZW.m128d_f64[0]._4_4_ & uVar17,
                                local_4c8.Scale3D.ZW.m128d_f64[0]._0_4_ & uVar16);
          auVar55._8_4_ = local_4c8.Scale3D.ZW.m128d_f64[1]._0_4_ & uVar88;
          auVar55._12_4_ = local_4c8.Scale3D.ZW.m128d_f64[1]._4_4_ & uVar89;
          auVar47._8_8_ =
               -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar55._8_8_);
          auVar47._0_8_ =
               -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar55._0_8_);
          auVar56._0_8_ =
               (double)CONCAT44(local_4c8.Scale3D.XY.m128d_f64[0]._4_4_ & uVar17,
                                local_4c8.Scale3D.XY.m128d_f64[0]._0_4_ & uVar16);
          auVar56._8_4_ = local_4c8.Scale3D.XY.m128d_f64[1]._0_4_ & uVar88;
          auVar56._12_4_ = local_4c8.Scale3D.XY.m128d_f64[1]._4_4_ & uVar89;
          uVar23 = movmskpd((int)pTVar26,auVar47);
          auVar38._8_8_ =
               -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar56._8_8_);
          auVar38._0_8_ =
               -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar56._0_8_);
          iVar21 = movmskpd(extraout_EAX,auVar38);
          if ((uVar23 & 0x3fffffff) == 0 && iVar21 == 0) {
            local_258.Rotation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
            local_258.Rotation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
            local_258.Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            local_258.Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            local_258.Scale3D.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            local_258.Scale3D.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          }
          else {
            UE::Math::TTransform<double>::InverseFast(&local_4c8,&local_258);
          }
          pTVar26 = &local_318;
          local_318.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_318.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_318.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_318.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_318.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_318.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_318.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_318.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_318.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_318.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          auVar65._8_8_ = GlobalVectorConstants::Float1110.m128_u64[1];
          auVar65._0_8_ = auVar65._8_8_;
          local_318.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_318.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          UE::Math::TTransform<double>::Multiply(pTVar26,&local_1f8,&local_258);
          uVar24 = SUB84(pTVar26,0);
          auVar81._8_8_ = local_318.Scale3D.XY.m128d_f64[1];
          auVar81._0_8_ = local_318.Scale3D.XY.m128d_f64[0];
          auVar74._8_8_ = local_318.Scale3D.ZW.m128d_f64[1];
          auVar74._0_8_ = local_318.Scale3D.ZW.m128d_f64[0];
          pTVar22 = extraout_RAX;
          uVar20 = local_318.Translation.XY.m128d_f64[0]._0_4_;
          uVar70 = local_318.Translation.XY.m128d_f64[0]._4_4_;
          uVar82 = local_318.Translation.XY.m128d_f64[1]._0_4_;
          uVar83 = local_318.Translation.XY.m128d_f64[1]._4_4_;
          uVar84 = local_318.Translation.ZW.m128d_f64[0]._0_4_;
          uVar85 = local_318.Translation.ZW.m128d_f64[0]._4_4_;
          uVar86 = local_318.Translation.ZW.m128d_f64[1]._0_4_;
          uVar87 = local_318.Translation.ZW.m128d_f64[1]._4_4_;
          uVar97 = local_318.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar92 = local_318.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar94 = local_318.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar96 = local_318.Rotation.ZW.m128d_f64[1]._4_4_;
          dVar71 = local_318.Rotation.XY.m128d_f64[0];
          dVar61 = local_318.Rotation.XY.m128d_f64[1];
        }
        else {
          auVar81._0_8_ =
               UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X /
               (double)CONCAT44(local_4c8.Scale3D.XY.m128d_f64[0]._4_4_,
                                local_4c8.Scale3D.XY.m128d_f64[0]._0_4_);
          dVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y /
                  (double)CONCAT44(local_4c8.Scale3D.XY.m128d_f64[1]._4_4_,
                                   local_4c8.Scale3D.XY.m128d_f64[1]._0_4_);
          auVar74._0_8_ =
               UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z /
               (double)CONCAT44(local_4c8.Scale3D.ZW.m128d_f64[0]._4_4_,
                                local_4c8.Scale3D.ZW.m128d_f64[0]._0_4_);
          pTVar22 = UE::Math::TRotator<double>::Quaternion(param_2,&local_418);
          uVar24 = SUB84(param_2,0);
          dVar71 = pTVar22->X;
          dVar61 = pTVar22->Y;
          uVar97 = *(undefined4 *)&pTVar22->Z;
          uVar92 = *(undefined4 *)((longlong)&pTVar22->Z + 4);
          uVar94 = *(undefined4 *)&pTVar22->W;
          uVar96 = *(undefined4 *)((longlong)&pTVar22->W + 4);
          auVar81._8_8_ = dVar5;
          auVar74._8_8_ = 0;
        }
        auVar57._0_8_ = (double)CONCAT44(auVar74._4_4_ & uVar17,auVar74._0_4_ & uVar16);
        auVar57._8_4_ = auVar74._8_4_ & uVar88;
        auVar57._12_4_ = auVar74._12_4_ & uVar89;
        auVar48._8_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar57._8_8_);
        auVar48._0_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar57._0_8_);
        uVar90 = auVar81._0_4_ & uVar16;
        uVar91 = auVar81._4_4_ & uVar17;
        uVar88 = auVar81._8_4_ & uVar88;
        uVar89 = auVar81._12_4_ & uVar89;
        uVar23 = movmskpd(uVar24,auVar48);
        auVar39._8_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
              (double)CONCAT44(uVar89,uVar88));
        auVar39._0_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
              (double)CONCAT44(uVar91,uVar90));
        iVar21 = movmskpd((int)pTVar22,auVar39);
        if ((uVar23 & 0x3fffffff) == 0 && iVar21 == 0) {
          local_2b8.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_2b8.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_2b8.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_2b8.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_2b8.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_2b8.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        }
        else {
          dVar12 = (double)CONCAT44(uVar92,uVar97) *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar13 = (double)CONCAT44(uVar96,uVar94) *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          uVar97 = (undefined4)((ulonglong)dVar13 >> 0x20);
          auVar14._4_8_ = auVar65._8_8_;
          auVar14._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
          auVar66._0_8_ = auVar14._0_8_ << 0x20;
          auVar66._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
          auVar66._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
          local_528._0_8_ = dVar71 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          local_528._8_8_ = dVar61 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          auVar67._8_8_ = auVar66._8_8_;
          auVar67._0_8_ = auVar74._0_8_;
          lVar30 = -(ulonglong)
                    ((double)CONCAT44(uVar17 & auVar74._4_4_,uVar16 & auVar74._0_4_) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
          auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar81);
          lVar31 = -(ulonglong)
                    ((double)CONCAT44(uVar91,uVar90) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
          lVar32 = -(ulonglong)
                    ((double)CONCAT44(uVar89,uVar88) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
          local_2b8.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar31 & auVar33._0_4_;
          local_2b8.Scale3D.XY.m128d_f64[0]._4_4_ =
               ~(uint)((ulonglong)lVar31 >> 0x20) & auVar33._4_4_;
          local_2b8.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar32 & auVar33._8_4_;
          local_2b8.Scale3D.XY.m128d_f64[1]._4_4_ =
               ~(uint)((ulonglong)lVar32 >> 0x20) & auVar33._12_4_;
          auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar67);
          dVar61 = (double)CONCAT44(uVar70,uVar20) *
                   (double)CONCAT44(local_2b8.Scale3D.XY.m128d_f64[0]._4_4_,
                                    local_2b8.Scale3D.XY.m128d_f64[0]._0_4_);
          dVar8 = (double)CONCAT44(uVar83,uVar82) *
                  (double)CONCAT44(local_2b8.Scale3D.XY.m128d_f64[1]._4_4_,
                                   local_2b8.Scale3D.XY.m128d_f64[1]._0_4_);
          uVar20 = (undefined4)((ulonglong)dVar8 >> 0x20);
          local_2b8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar13,0);
          local_2b8.Rotation.ZW.m128d_f64[0] = dVar12;
          local_2b8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar97;
          local_2b8.Scale3D.ZW.m128d_f64[0] =
               (double)CONCAT44(~(uint)((ulonglong)lVar30 >> 0x20) & auVar33._4_4_,
                                ~(uint)lVar30 & auVar33._0_4_);
          auVar58._8_4_ = (int)local_528._8_8_;
          auVar58._0_8_ = local_528._0_8_;
          auVar58._12_4_ = (int)((ulonglong)local_528._8_8_ >> 0x20);
          dVar62 = auVar58._8_8_;
          auVar40._8_4_ = SUB84(dVar12,0);
          auVar40._0_8_ = dVar62;
          auVar40._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
          local_2b8.Rotation.XY.m128d_f64[1] = (double)local_528._8_8_;
          local_2b8.Rotation.XY.m128d_f64[0] = local_528._0_8_;
          dVar10 = (double)CONCAT44(uVar85,uVar84) * local_2b8.Scale3D.ZW.m128d_f64[0];
          dVar5 = (double)CONCAT44(uVar87,uVar86) * 0.0;
          auVar11._8_4_ = SUB84(dVar13,0);
          auVar11._0_8_ = dVar12;
          auVar11._12_4_ = uVar97;
          auVar44 = blendpd(local_528,auVar11,2);
          auVar75._8_4_ = SUB84(dVar8,0);
          auVar75._0_8_ = dVar61;
          auVar75._12_4_ = uVar20;
          auVar49._8_4_ = SUB84(dVar8,0);
          auVar49._0_8_ = dVar61;
          auVar49._12_4_ = uVar20;
          auVar9._8_4_ = SUB84(dVar5,0);
          auVar9._0_8_ = dVar10;
          auVar9._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
          auVar33 = blendpd(auVar49,auVar9,2);
          auVar76._0_8_ = auVar75._8_8_ * local_528._0_8_ - dVar62 * dVar61;
          auVar76._8_8_ = dVar10 * (double)local_528._8_8_ - auVar40._8_8_ * dVar8;
          auVar50._0_8_ = auVar33._0_8_ * dVar12 - auVar44._0_8_ * dVar10;
          auVar50._8_8_ = auVar33._8_8_ * dVar13 - auVar44._8_8_ * dVar5;
          dVar5 = auVar76._8_8_ + auVar76._8_8_;
          dVar71 = auVar50._0_8_ + auVar50._0_8_;
          uVar20 = SUB84(dVar71,0);
          uVar70 = (undefined4)((ulonglong)dVar71 >> 0x20);
          auVar33 = blendpd(auVar76,auVar50,2);
          auVar77._0_8_ = auVar33._0_8_ + auVar33._0_8_;
          auVar77._8_8_ = auVar33._8_8_ + auVar33._8_8_;
          auVar68._8_4_ = uVar20;
          auVar68._0_8_ = dVar5;
          auVar68._12_4_ = uVar70;
          auVar41._8_4_ = uVar20;
          auVar41._0_8_ = dVar5;
          auVar41._12_4_ = uVar70;
          auVar59._8_4_ = uVar20;
          auVar59._0_8_ = dVar5;
          auVar59._12_4_ = uVar70;
          auVar33 = blendpd(auVar59,auVar77,2);
          auVar69._0_8_ = auVar68._8_8_ * local_528._0_8_ - dVar5 * dVar62;
          auVar69._8_8_ = auVar77._0_8_ * (double)local_528._8_8_ - auVar41._8_8_ * dVar12;
          auVar42._8_4_ = SUB84(auVar77._8_8_,0);
          auVar42._0_8_ = auVar77._0_8_;
          auVar42._12_4_ = (int)((ulonglong)auVar77._8_8_ >> 0x20);
          auVar60._0_8_ = auVar33._0_8_ * dVar12 - auVar77._0_8_ * auVar44._0_8_;
          auVar60._8_8_ = auVar33._8_8_ * dVar13 - auVar42._8_8_ * auVar44._8_8_;
          auVar43._8_4_ = SUB84(auVar69._8_8_,0);
          auVar43._0_8_ = auVar69._0_8_;
          auVar43._12_4_ = (int)((ulonglong)auVar69._8_8_ >> 0x20);
          auVar33 = blendpd(auVar69,auVar60,2);
          local_2b8.Translation.ZW.m128d_f64[1] = 0.0;
          local_2b8.Translation.ZW.m128d_f64[0] =
               0.0 - (auVar77._0_8_ * dVar13 + dVar10 + auVar33._0_8_);
          local_2b8.Translation.XY.m128d_f64[1] = 0.0 - (dVar71 * dVar13 + dVar8 + auVar60._0_8_);
          local_2b8.Translation.XY.m128d_f64[0] = 0.0 - (dVar5 * dVar13 + dVar61 + auVar43._8_8_);
          local_2b8.Scale3D.ZW.m128d_f64[1] = 0.0;
        }
        local_378.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_378.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_378.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_378.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_378.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_378.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_378.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_378.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_378.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_378.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_378.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_378.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply(&local_378,&local_2b8,&local_3d8);
        if (param_4) {
          local_508.X = local_378.Rotation.XY.m128d_f64[0];
          local_508.Y = local_378.Rotation.XY.m128d_f64[1];
          local_508.Z = local_378.Rotation.ZW.m128d_f64[0];
          local_508.W = local_378.Rotation.ZW.m128d_f64[1];
          UE::Math::TQuat<double>::Rotator(&local_508,(TRotator<double> *)local_528);
          auVar15._8_8_ = 0;
          auVar15._0_8_ = local_528._8_8_;
          local_528 = auVar15 << 0x40;
          local_518 = 0.0;
          pTVar22 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)local_528,&local_3f8)
          ;
          local_378.Rotation.ZW.m128d_f64[0] = pTVar22->Z;
          local_378.Rotation.ZW.m128d_f64[1] = pTVar22->W;
          local_378.Rotation.XY.m128d_f64[0] = pTVar22->X;
          local_378.Rotation.XY.m128d_f64[1] = pTVar22->Y;
        }
        local_4e8.X = local_378.Rotation.XY.m128d_f64[0];
        local_4e8.Y = local_378.Rotation.XY.m128d_f64[1];
        local_4e8.Z = local_378.Rotation.ZW.m128d_f64[0];
        local_4e8.W = local_378.Rotation.ZW.m128d_f64[1];
        UE::Math::TQuat<double>::Rotator(&local_4e8,&local_450);
        SetAlignmentTransform(&local_378);
      }
    }
    LOCK();
    paVar1 = &(FVar18.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar18.ReferenceController)->_padding_ + 8))(FVar18.ReferenceController,1);
    }
  }
  return;
}

// SetARWorldScale @ 14cf5f030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UARBlueprintLibrary::SetARWorldScale(float param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  FWeakReferencer<1> FVar12;
  bool bVar13;
  atomic<int> aVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  IXRTrackingSystem *pIVar19;
  FWeakReferencer<1> FVar20;
  FARSupportInterface *pFVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar41;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined4 uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined1 auVar53 [16];
  undefined1 auStackY_3e8 [32];
  undefined1 local_3b8 [16];
  double local_3a8;
  TRotator<double> local_398 [2];
  double local_368;
  TVector<double>_u_0 local_358;
  TQuat<double> local_338;
  TTransform<double> local_318;
  TTransform<double> local_298;
  TTransform<double> local_238;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  ulonglong local_b8;
  
  FVar12.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar21 = RegisteredARSystem.Object;
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  if (0.0 < param_1) {
    if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1
           );
      UNLOCK();
      if ((pFVar21 != (FARSupportInterface *)0x0) &&
         (0 < (int)(FVar12.ReferenceController)->SharedReferenceCount)) {
        aVar2 = (FVar12.ReferenceController)->SharedReferenceCount;
        do {
          if (aVar2 == (atomic<int>)0x0) {
            pFVar21 = (FARSupportInterface *)0x0;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L"");
            FVar20.ReferenceController = (TReferenceControllerBase<1> *)pFVar21;
            if (bVar13) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            break;
          }
          LOCK();
          aVar14 = (FVar12.ReferenceController)->SharedReferenceCount;
          bVar13 = aVar2 == aVar14;
          if (bVar13) {
            (FVar12.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar14 = aVar2;
          }
          UNLOCK();
          FVar20.ReferenceController = FVar12.ReferenceController;
          aVar2 = aVar14;
        } while (!bVar13);
        pIVar19 = pFVar21->XRTrackingSystem;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar20.ReferenceController);
        if (pIVar19 != (IXRTrackingSystem *)0x0) {
          GetAlignmentTransform(&local_318);
          local_178.Rotation.ZW.m128d_f64[0] = local_318.Rotation.ZW.m128d_f64[0];
          local_178.Rotation.ZW.m128d_f64[1] = local_318.Rotation.ZW.m128d_f64[1];
          local_178.Scale3D.XY.m128d_f64[0] = (double)(__real_3f800000 / param_1);
          local_178.Rotation.XY.m128d_f64[0] = local_318.Rotation.XY.m128d_f64[0];
          local_178.Rotation.XY.m128d_f64[1]._0_4_ = local_318.Rotation.XY.m128d_f64[1]._0_4_;
          local_178.Rotation.XY.m128d_f64[1]._4_4_ = local_318.Rotation.XY.m128d_f64[1]._4_4_;
          local_178.Translation.XY.m128d_f64[0]._0_4_ = local_318.Translation.XY.m128d_f64[0]._0_4_;
          local_178.Translation.XY.m128d_f64[0]._4_4_ = local_318.Translation.XY.m128d_f64[0]._4_4_;
          local_178.Translation.XY.m128d_f64[1]._0_4_ = local_318.Translation.XY.m128d_f64[1]._0_4_;
          local_178.Translation.XY.m128d_f64[1]._4_4_ = local_318.Translation.XY.m128d_f64[1]._4_4_;
          local_178.Translation.ZW.m128d_f64[0] = local_318.Translation.ZW.m128d_f64[0];
          local_178.Translation.ZW.m128d_f64[1] = 0.0;
          local_178.Scale3D.ZW.m128d_f64[1] = 0.0;
          local_178.Scale3D.XY.m128d_f64[1] = local_178.Scale3D.XY.m128d_f64[0];
          local_178.Scale3D.ZW.m128d_f64[0] = local_178.Scale3D.XY.m128d_f64[0];
          SetAlignmentTransform(&local_178);
          uVar15 = (**(code **)((longlong)*pIVar19 + 0x90))(pIVar19,&local_118);
          auVar31._0_8_ =
               (double)CONCAT44(local_c8._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                local_c8._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          auVar31._8_4_ = local_c8._8_4_ & _UNK_15061cc88;
          auVar31._12_4_ = local_c8._12_4_ & _UNK_15061cc8c;
          dVar10 = (double)GlobalVectorConstants::SmallNumber.m128_f32[2];
          dVar11 = (double)GlobalVectorConstants::SmallNumber.m128_f32[3];
          local_398[0].Pitch = (double)GlobalVectorConstants::SmallNumber.m128_f32[0];
          local_398[0].Yaw = (double)GlobalVectorConstants::SmallNumber.m128_f32[1];
          auVar25._8_4_ = SUB84(dVar11,0);
          auVar25._0_8_ = dVar10;
          auVar25._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
          auVar34._8_8_ = -(ulonglong)(auVar25._8_8_ < auVar31._8_8_);
          auVar34._0_8_ = -(ulonglong)(dVar10 < auVar31._0_8_);
          auVar32._8_4_ = SUB84(local_398[0].Yaw,0);
          auVar32._0_8_ = local_398[0].Pitch;
          auVar32._12_4_ = (int)((ulonglong)local_398[0].Yaw >> 0x20);
          iVar17 = movmskpd((int)pIVar19,auVar34);
          auVar45._0_8_ =
               (double)CONCAT44(local_d8._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                local_d8._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          auVar45._8_4_ = local_d8._8_4_ & _UNK_15061cc88;
          auVar45._12_4_ = local_d8._12_4_ & _UNK_15061cc8c;
          auVar33._8_8_ = -(ulonglong)(auVar32._8_8_ < auVar45._8_8_);
          auVar33._0_8_ = -(ulonglong)(local_398[0].Pitch < auVar45._0_8_);
          uVar16 = movmskpd(uVar15,auVar33);
          uVar18 = iVar17 << 2 | uVar16;
          if (uVar18 == 0) {
            local_298.Rotation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
            local_298.Rotation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
            local_298.Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            local_298.Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            local_298.Scale3D.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            local_298.Scale3D.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          }
          else {
            lVar22 = -(ulonglong)
                      (auVar45._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
            lVar24 = -(ulonglong)
                      (auVar45._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
            auVar4._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
            auVar4._0_8_ = local_c8._0_8_;
            auVar4._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
            auVar25 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar4);
            lVar23 = -(ulonglong)
                      ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                        local_c8._4_4_,
                                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                        local_c8._0_4_) <=
                      (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
            auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,local_d8
                           );
            local_3b8._0_8_ =
                 CONCAT44(~(uint)((ulonglong)lVar22 >> 0x20) & auVar34._4_4_,
                          ~(uint)lVar22 & auVar34._0_4_);
            local_3b8._8_4_ = ~(uint)lVar24 & auVar34._8_4_;
            local_3b8._12_4_ = ~(uint)((ulonglong)lVar24 >> 0x20) & auVar34._12_4_;
            local_f8 = local_f8 * (double)local_3b8._0_8_;
            dStack_f0 = dStack_f0 * local_3b8._8_8_;
            uVar15 = (undefined4)((ulonglong)dStack_f0 >> 0x20);
            local_298.Scale3D.ZW.m128d_f64[0] =
                 (double)CONCAT44(~(uint)((ulonglong)lVar23 >> 0x20) & auVar25._4_4_,
                                  ~(uint)lVar23 & auVar25._0_4_);
            local_108 = local_108 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
            dStack_100 = dStack_100 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
            uVar50 = (undefined4)((ulonglong)dStack_100 >> 0x20);
            auVar47._8_4_ = SUB84(dStack_f0,0);
            auVar47._0_8_ = local_f8;
            auVar47._12_4_ = uVar15;
            local_118 = local_118 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
            dStack_110 = dStack_110 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
            uVar51 = SUB84(dStack_110,0);
            uVar52 = (undefined4)((ulonglong)dStack_110 >> 0x20);
            local_e8 = local_e8 * local_298.Scale3D.ZW.m128d_f64[0];
            dStack_e0 = dStack_e0 * 0.0;
            auVar37._8_4_ = uVar51;
            auVar37._0_8_ = local_118;
            auVar37._12_4_ = uVar52;
            dVar41 = auVar37._8_8_;
            auVar46._8_4_ = uVar51;
            auVar46._0_8_ = local_118;
            auVar46._12_4_ = uVar52;
            auVar26._8_4_ = SUB84(local_108,0);
            auVar26._0_8_ = dVar41;
            auVar26._12_4_ = (int)((ulonglong)local_108 >> 0x20);
            auVar8._8_4_ = SUB84(dStack_100,0);
            auVar8._0_8_ = local_108;
            auVar8._12_4_ = uVar50;
            auVar34 = blendpd(auVar46,auVar8,2);
            auVar48._0_8_ = auVar47._8_8_ * local_118 - dVar41 * local_f8;
            auVar48._8_8_ = local_e8 * dStack_110 - auVar26._8_8_ * dStack_f0;
            auVar35._8_4_ = SUB84(dStack_f0,0);
            auVar35._0_8_ = local_f8;
            auVar35._12_4_ = uVar15;
            auVar7._8_4_ = SUB84(dStack_e0,0);
            auVar7._0_8_ = local_e8;
            auVar7._12_4_ = (int)((ulonglong)dStack_e0 >> 0x20);
            auVar25 = blendpd(auVar35,auVar7,2);
            auVar36._0_8_ = auVar25._0_8_ * local_108 - auVar34._0_8_ * local_e8;
            auVar36._8_8_ = auVar25._8_8_ * dStack_100 - auVar34._8_8_ * dStack_e0;
            dVar5 = auVar48._8_8_ + auVar48._8_8_;
            dVar6 = auVar36._0_8_ + auVar36._0_8_;
            uVar15 = SUB84(dVar6,0);
            uVar44 = (undefined4)((ulonglong)dVar6 >> 0x20);
            auVar25 = blendpd(auVar48,auVar36,2);
            auVar42._8_4_ = uVar15;
            auVar42._0_8_ = dVar5;
            auVar42._12_4_ = uVar44;
            auVar27._8_4_ = uVar15;
            auVar27._0_8_ = dVar5;
            auVar27._12_4_ = uVar44;
            auVar38._8_4_ = uVar15;
            auVar38._0_8_ = dVar5;
            auVar38._12_4_ = uVar44;
            auVar49._0_8_ = auVar25._0_8_ + auVar25._0_8_;
            auVar49._8_8_ = auVar25._8_8_ + auVar25._8_8_;
            auVar25 = blendpd(auVar38,auVar49,2);
            auVar43._0_8_ = auVar42._8_8_ * local_118 - dVar5 * dVar41;
            auVar43._8_8_ = auVar49._0_8_ * dStack_110 - auVar27._8_8_ * local_108;
            auVar28._8_4_ = SUB84(auVar49._8_8_,0);
            auVar28._0_8_ = auVar49._0_8_;
            auVar28._12_4_ = (int)((ulonglong)auVar49._8_8_ >> 0x20);
            auVar39._0_8_ = auVar25._0_8_ * local_108 - auVar49._0_8_ * auVar34._0_8_;
            auVar39._8_8_ = auVar25._8_8_ * dStack_100 - auVar28._8_8_ * auVar34._8_8_;
            auVar29._8_4_ = SUB84(auVar43._8_8_,0);
            auVar29._0_8_ = auVar43._0_8_;
            auVar29._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
            auVar25 = blendpd(auVar43,auVar39,2);
            local_298.Rotation.XY.m128d_f64[1]._0_4_ = uVar51;
            local_298.Rotation.XY.m128d_f64[0] = local_118;
            local_298.Rotation.XY.m128d_f64[1]._4_4_ = uVar52;
            local_298.Translation.ZW.m128d_f64[1] = 0.0;
            local_298.Translation.ZW.m128d_f64[0] =
                 0.0 - (auVar49._0_8_ * dStack_100 + local_e8 + auVar25._0_8_);
            local_298.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dStack_100,0);
            local_298.Rotation.ZW.m128d_f64[0] = local_108;
            local_298.Rotation.ZW.m128d_f64[1]._4_4_ = uVar50;
            local_298.Translation.XY.m128d_f64[1] =
                 0.0 - (dVar6 * dStack_100 + dStack_f0 + auVar39._0_8_);
            local_298.Translation.XY.m128d_f64[0] =
                 0.0 - (dVar5 * dStack_100 + local_f8 + auVar29._8_8_);
            local_298.Scale3D.ZW.m128d_f64[1] = 0.0;
            local_298.Scale3D.XY.m128d_f64[1] = local_3b8._8_8_;
            local_298.Scale3D.XY.m128d_f64[0] = (double)local_3b8._0_8_;
          }
          auVar53._0_8_ =
               (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                local_318.Scale3D.XY.m128d_f64[0]._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                local_318.Scale3D.XY.m128d_f64[0]._0_4_);
          auVar53._8_4_ = _UNK_15061cc88 & local_318.Scale3D.XY.m128d_f64[1]._0_4_;
          auVar53._12_4_ = _UNK_15061cc8c & local_318.Scale3D.XY.m128d_f64[1]._4_4_;
          auVar30._0_8_ =
               (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                local_318.Scale3D.ZW.m128d_f64[0]._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                local_318.Scale3D.ZW.m128d_f64[0]._0_4_);
          auVar30._8_4_ = _UNK_15061cc88 & local_318.Scale3D.ZW.m128d_f64[1]._0_4_;
          auVar30._12_4_ = _UNK_15061cc8c & local_318.Scale3D.ZW.m128d_f64[1]._4_4_;
          lVar22 = -(ulonglong)(dVar11 < auVar30._8_8_);
          auVar9._8_4_ = (int)lVar22;
          auVar9._0_8_ = -(ulonglong)(dVar10 < auVar30._0_8_);
          auVar9._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
          uVar18 = movmskpd(uVar18,auVar9);
          auVar40._8_8_ = -(ulonglong)(local_398[0].Yaw < auVar53._8_8_);
          auVar40._0_8_ = -(ulonglong)(local_398[0].Pitch < auVar53._0_8_);
          iVar17 = movmskpd(uVar16,auVar40);
          if ((uVar18 & 0x3fffffff) == 0 && iVar17 == 0) {
            local_1d8.Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            local_1d8.Scale3D.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            local_1d8.Scale3D.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
            local_1d8.Rotation.XY.m128d_f64[0]._0_4_ =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
            local_1d8.Rotation.XY.m128d_f64[0]._4_4_ =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
            local_1d8.Rotation.XY.m128d_f64[1]._0_4_ =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
            local_1d8.Rotation.XY.m128d_f64[1]._4_4_ =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
            local_1d8.Rotation.ZW.m128d_f64[0]._0_4_ =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
            local_1d8.Rotation.ZW.m128d_f64[0]._4_4_ =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
            local_1d8.Rotation.ZW.m128d_f64[1]._0_4_ =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
            local_1d8.Rotation.ZW.m128d_f64[1]._4_4_ =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
            local_1d8.Translation.ZW.m128d_f64[0]._0_4_ =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
            local_1d8.Translation.ZW.m128d_f64[0]._4_4_ =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
            local_1d8.Translation.ZW.m128d_f64[1]._0_4_ =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
            local_1d8.Translation.ZW.m128d_f64[1]._4_4_ =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
          }
          else {
            UE::Math::TTransform<double>::InverseFast(&local_318,&local_1d8);
          }
          local_238.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_238.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_238.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_238.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_238.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_238.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_238.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_238.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_238.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_238.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_238.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_238.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          UE::Math::TTransform<double>::Multiply(&local_238,&local_298,&local_1d8);
          local_338.X = local_238.Rotation.XY.m128d_f64[0];
          local_338.Y = local_238.Rotation.XY.m128d_f64[1];
          local_338.Z = local_238.Rotation.ZW.m128d_f64[0];
          local_338.W = local_238.Rotation.ZW.m128d_f64[1];
          UE::Math::TQuat<double>::Rotator(&local_338,local_398);
          local_368 = local_238.Translation.ZW.m128d_f64[0];
          local_3b8._8_8_ = local_398[0].Yaw;
          local_3b8._0_8_ = local_398[0].Pitch;
          local_358._s_0.Z = local_238.Translation.ZW.m128d_f64[0];
          local_3a8 = local_398[0].Roll;
          local_358._s_0.X = local_238.Translation.XY.m128d_f64[0];
          local_358._s_0.Y = local_238.Translation.XY.m128d_f64[1];
          SetARWorldOriginLocationAndRotation
                    ((TVector<double> *)&local_358._s_0,(TRotator<double> *)local_3b8,false,false);
        }
      }
      LOCK();
      paVar1 = &(FVar12.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar12.ReferenceController)->_padding_ + 8))(FVar12.ReferenceController,1);
      }
    }
  }
  else {
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4516156917743090942>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Private\\ARBlueprintLibrary.cpp"
                        ,0x302,"InWorldScale > 0.f");
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// SetAlignmentTransform @ 14cf5f8a0

void __cdecl UARBlueprintLibrary::SetAlignmentTransform(TTransform<double> *param_1)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  IARSystemSupport *pIVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  double dVar8;
  FWeakReferencer<1> FVar9;
  bool bVar10;
  char cVar11;
  atomic<int> aVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  FARSupportInterface *pFVar16;
  FWeakReferencer<1> FVar17;
  bool bVar18;
  FDestructionSentinel local_48;
  
  FVar9.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar16 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar16 != (FARSupportInterface *)0x0) {
    if (FVar9.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return;
    }
    if (0 < (int)(FVar9.ReferenceController)->SharedReferenceCount) {
      aVar3 = (FVar9.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          FVar17.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar16 = (FARSupportInterface *)0x0;
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar18) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          break;
        }
        LOCK();
        aVar12 = (FVar9.ReferenceController)->SharedReferenceCount;
        bVar18 = aVar3 == aVar12;
        if (bVar18) {
          (FVar9.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar12 = aVar3;
        }
        UNLOCK();
        FVar17.ReferenceController = FVar9.ReferenceController;
        aVar3 = aVar12;
      } while (!bVar18);
      pIVar4 = pFVar16->ARImplemention;
      if (pIVar4 != (IARSystemSupport *)0x0) {
        (**(code **)(pIVar4->_padding_ + 0x48))(pIVar4,param_1);
      }
      dVar8 = (param_1->Rotation).XY.m128d_f64[1];
      (pFVar16->AlignmentTransform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
      (pFVar16->AlignmentTransform).Rotation.XY.m128d_f64[1] = dVar8;
      dVar8 = (param_1->Rotation).ZW.m128d_f64[1];
      (pFVar16->AlignmentTransform).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
      (pFVar16->AlignmentTransform).Rotation.ZW.m128d_f64[1] = dVar8;
      dVar8 = (param_1->Translation).XY.m128d_f64[1];
      (pFVar16->AlignmentTransform).Translation.XY.m128d_f64[0] =
           (param_1->Translation).XY.m128d_f64[0];
      (pFVar16->AlignmentTransform).Translation.XY.m128d_f64[1] = dVar8;
      dVar8 = (param_1->Translation).ZW.m128d_f64[1];
      (pFVar16->AlignmentTransform).Translation.ZW.m128d_f64[0] =
           (param_1->Translation).ZW.m128d_f64[0];
      (pFVar16->AlignmentTransform).Translation.ZW.m128d_f64[1] = dVar8;
      dVar8 = (param_1->Scale3D).XY.m128d_f64[1];
      (pFVar16->AlignmentTransform).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
      (pFVar16->AlignmentTransform).Scale3D.XY.m128d_f64[1] = dVar8;
      dVar8 = (param_1->Scale3D).ZW.m128d_f64[1];
      (pFVar16->AlignmentTransform).Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
      (pFVar16->AlignmentTransform).Scale3D.ZW.m128d_f64[1] = dVar8;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pFVar16->OnAlignmentTransformUpdated,(FWriteAccessScope *)&local_48);
      puVar1 = &(pFVar16->OnAlignmentTransformUpdated).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar18 = false;
      uVar15 = *(int *)&(pFVar16->OnAlignmentTransformUpdated).field_0x10 - 1;
      if (-1 < (int)uVar15) {
        lVar14 = (longlong)(int)uVar15 << 4;
        bVar18 = false;
        do {
          uVar13 = 0;
          if ((int)uVar15 < *(int *)&(pFVar16->OnAlignmentTransformUpdated).field_0x10) {
            uVar13 = ~uVar15 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar5 = *(longlong *)&(pFVar16->OnAlignmentTransformUpdated).field_0x8;
          if (((*(int *)(lVar14 + 8 + lVar5) == 0) ||
              (plVar6 = *(longlong **)(lVar14 + lVar5), plVar6 == (longlong *)0x0)) ||
             (cVar11 = (**(code **)(*plVar6 + 0x68))(), cVar11 == '\0')) {
            bVar18 = true;
          }
          lVar14 = lVar14 + -0x10;
          uVar15 = uVar15 - 1;
        } while (-1 < (int)uVar15);
      }
      puVar1 = &(pFVar16->OnAlignmentTransformUpdated).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar18) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pFVar16->OnAlignmentTransformUpdated,false);
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar17.ReferenceController);
      goto LAB_14cf5fa9f;
    }
  }
  if (FVar9.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
LAB_14cf5fa9f:
  LOCK();
  paVar2 = &(FVar9.ReferenceController)->WeakReferenceCount;
  aVar3 = *paVar2;
  *paVar2 = (atomic<int>)((int)*paVar2 + -1);
  UNLOCK();
  if (aVar3 == (atomic<int>)0x1) {
    (**(code **)((FVar9.ReferenceController)->_padding_ + 8))(FVar9.ReferenceController,1);
  }
  return;
}

// SetEnabledXRCamera @ 14cf5fbb0

void __cdecl UARBlueprintLibrary::SetEnabledXRCamera(bool param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  atomic<int> aVar6;
  FARSupportInterface *pFVar7;
  FWeakReferencer<1> FVar8;
  bool bVar9;
  
  FVar5.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar7 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar7 != (FARSupportInterface *)0x0) {
    if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return;
    }
    if (0 < (int)(FVar5.ReferenceController)->SharedReferenceCount) {
      aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          FVar8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar7 = (FARSupportInterface *)0x0;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          break;
        }
        LOCK();
        aVar6 = (FVar5.ReferenceController)->SharedReferenceCount;
        bVar9 = aVar2 == aVar6;
        if (bVar9) {
          (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar6 = aVar2;
        }
        UNLOCK();
        FVar8.ReferenceController = FVar5.ReferenceController;
        aVar2 = aVar6;
      } while (!bVar9);
      pIVar3 = pFVar7->ARImplemention;
      if (pIVar3 != (IARSystemSupport *)0x0) {
        (**(code **)(pIVar3->_padding_ + 0x80))(pIVar3,param_1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
      goto LAB_14cf5fc62;
    }
  }
  if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
LAB_14cf5fc62:
  LOCK();
  paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
  }
  return;
}

// StartARSession @ 14cf60aa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UARBlueprintLibrary::StartARSession(UARSessionConfig *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FWeakReferencer<1> FVar4;
  atomic<int> aVar5;
  FWeakReferencer<1> FVar6;
  FARSupportInterface *pFVar7;
  bool bVar8;
  FString local_28;
  FString local_18;
  
  FVar4.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar7 = RegisteredARSystem.Object;
  if (param_1 == (UARSessionConfig *)0x0) {
    ::FString::FString(&local_28,
                       L"Attempting to start an AR session without a session config object");
    UEngine::AddOnScreenDebugMessage
              (GEngine,-1,__real_45610000,(FColor)0xffff3010,&local_28,true,
               &UE::Math::TVector2<double>::UnitVector);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return;
    }
  }
  else {
    if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1
           );
      UNLOCK();
    }
    if (((pFVar7 == (FARSupportInterface *)0x0) ||
        (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
       ((int)(FVar4.ReferenceController)->SharedReferenceCount < 1)) {
      ::FString::FString(&local_18,
                         L"Attempting to start an AR session but there is no AR plugin configured. To use AR, enable the proper AR plugin in the Plugin Settings."
                        );
      UEngine::AddOnScreenDebugMessage
                (GEngine,-1,__real_45610000,(FColor)0xffff3010,&local_18,true,
                 &UE::Math::TVector2<double>::UnitVector);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        return;
      }
    }
    else {
      aVar2 = (FVar4.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pFVar7 = (FARSupportInterface *)0x0;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          FVar6.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        LOCK();
        aVar5 = (FVar4.ReferenceController)->SharedReferenceCount;
        bVar8 = aVar2 == aVar5;
        if (bVar8) {
          (FVar4.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar5 = aVar2;
        }
        UNLOCK();
        FVar6.ReferenceController = FVar4.ReferenceController;
        aVar2 = aVar5;
      } while (!bVar8);
      if (pFVar7->ARImplemention != (IARSystemSupport *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        (pFVar7->ARSettings).field0_0x0.DebugPtr = param_1;
        (**(code **)(pFVar7->ARImplemention->_padding_ + 0x20))(pFVar7->ARImplemention,param_1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
    }
    LOCK();
    paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
    }
  }
  return;
}

// StaticRegisterNativesUARBlueprintLibrary @ 14cf60e20

void __cdecl UARBlueprintLibrary::StaticRegisterNativesUARBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x34;
  local_18.DataPtr = Z_Construct_UClass_UARBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopARSession @ 14cf61720

void __cdecl UARBlueprintLibrary::StopARSession(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FWeakReferencer<1> FVar4;
  atomic<int> aVar5;
  FWeakReferencer<1> FVar6;
  FARSupportInterface *pFVar7;
  bool bVar8;
  
  FVar4.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar7 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
    if ((pFVar7 != (FARSupportInterface *)0x0) &&
       (0 < (int)(FVar4.ReferenceController)->SharedReferenceCount)) {
      aVar2 = (FVar4.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pFVar7 = (FARSupportInterface *)0x0;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          FVar6.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        LOCK();
        aVar5 = (FVar4.ReferenceController)->SharedReferenceCount;
        bVar8 = aVar2 == aVar5;
        if (bVar8) {
          (FVar4.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar5 = aVar2;
        }
        UNLOCK();
        FVar6.ReferenceController = FVar4.ReferenceController;
        aVar2 = aVar5;
      } while (!bVar8);
      if (pFVar7->ARImplemention != (IARSystemSupport *)0x0) {
        (**(code **)(pFVar7->ARImplemention->_padding_ + 0x30))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
    }
    LOCK();
    paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
    }
  }
  return;
}

// ToggleARCapture @ 14cf63820

bool __cdecl UARBlueprintLibrary::ToggleARCapture(bool param_1,EARCaptureType param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  undefined1 uVar6;
  atomic<int> aVar7;
  FWeakReferencer<1> FVar8;
  FARSupportInterface *pFVar9;
  bool bVar10;
  
  FVar5.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar9 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar9 == (FARSupportInterface *)0x0) ||
      (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar5.ReferenceController)->SharedReferenceCount < 1)) {
    uVar6 = 0;
    if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return false;
    }
  }
  else {
    aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pFVar9 = (FARSupportInterface *)0x0;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        FVar8.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        break;
      }
      LOCK();
      aVar7 = (FVar5.ReferenceController)->SharedReferenceCount;
      bVar10 = aVar2 == aVar7;
      if (bVar10) {
        (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      FVar8.ReferenceController = FVar5.ReferenceController;
      aVar2 = aVar7;
    } while (!bVar10);
    pIVar3 = pFVar9->ARImplemention;
    if (pIVar3 == (IARSystemSupport *)0x0) {
      uVar6 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
    else {
      uVar6 = (**(code **)(pIVar3->_padding_ + 0x78))(pIVar3,param_1,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
  }
  LOCK();
  paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
  }
  return (bool)uVar6;
}

// UnpinComponent @ 14cf63c40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UARBlueprintLibrary::UnpinComponent(USceneComponent *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  atomic<int> aVar6;
  uint uVar7;
  int iVar8;
  FARSupportInterface *pFVar9;
  uint uVar10;
  FWeakReferencer<1> FVar12;
  longlong lVar13;
  FARSupportInterface *pFVar14;
  bool bVar15;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  FARSupportInterface *pFVar11;
  
  FVar5.ReferenceController = RegisteredARSystem.WeakReferenceCount.ReferenceController;
  pFVar14 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
    if ((pFVar14 != (FARSupportInterface *)0x0) &&
       (0 < (int)(FVar5.ReferenceController)->SharedReferenceCount)) {
      pFVar9 = (FARSupportInterface *)0x0;
      aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          FVar12.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
          pFVar14 = pFVar9;
          if (bVar15) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          break;
        }
        LOCK();
        aVar6 = (FVar5.ReferenceController)->SharedReferenceCount;
        bVar15 = aVar2 == aVar6;
        if (bVar15) {
          (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar6 = aVar2;
        }
        UNLOCK();
        FVar12.ReferenceController = FVar5.ReferenceController;
        aVar2 = aVar6;
      } while (!bVar15);
      pIVar3 = pFVar14->ARImplemention;
      if (pIVar3 == (IARSystemSupport *)0x0) {
        local_38 = (void *)0x0;
        local_30 = 0;
        local_2c = 0;
      }
      else {
        (**(code **)(pIVar3->_padding_ + 0x68))(pIVar3,&local_38);
      }
      lVar13 = (longlong)local_30;
      pFVar11 = pFVar9;
      iVar8 = local_30;
      if (0 < local_30) {
        do {
          uVar10 = (uint)pFVar11;
          uVar7 = 0;
          if ((int)uVar10 < iVar8) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             iVar8 = local_30, bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(USceneComponent **)(*(longlong *)((longlong)local_38 + (longlong)pFVar9 * 8) + 0x30)
              == param_1) {
            if ((pFVar14 == (FARSupportInterface *)0x0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), iVar8 = local_30, bVar15)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar7 = 0;
            if ((int)uVar10 < iVar8) {
              uVar7 = ~uVar10 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pIVar3 = pFVar14->ARImplemention;
            if (pIVar3 != (IARSystemSupport *)0x0) {
              (**(code **)(pIVar3->_padding_ + 0xb0))
                        (pIVar3,*(undefined8 *)((longlong)local_38 + (longlong)(int)uVar10 * 8));
            }
            break;
          }
          pFVar9 = (FARSupportInterface *)&pFVar9->field_0x1;
          pFVar11 = (FARSupportInterface *)(ulonglong)(uVar10 + 1);
        } while ((longlong)pFVar9 < lVar13);
      }
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar12.ReferenceController);
    }
    LOCK();
    paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
    }
  }
  return;
}

// execAddManualEnvironmentCaptureProbe @ 14cf6b330

void __cdecl
UARBlueprintLibrary::execAddManualEnvironmentCaptureProbe
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  IARSystemSupport *pIVar4;
  code *pcVar5;
  FWeakReferencer<1> FVar6;
  undefined1 uVar7;
  atomic<int> aVar8;
  FARSupportInterface *pFVar9;
  FWeakReferencer<1> FVar10;
  bool bVar11;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar6 = RegisteredARSystem.WeakReferenceCount;
  pFVar9 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar9 != (FARSupportInterface *)0x0) {
    if (FVar6.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14cf6b52d;
    if (0 < (int)(FVar6.ReferenceController)->SharedReferenceCount) {
      aVar2 = (FVar6.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          FVar10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar9 = (FARSupportInterface *)0x0;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          break;
        }
        LOCK();
        aVar8 = (FVar6.ReferenceController)->SharedReferenceCount;
        bVar11 = aVar2 == aVar8;
        if (bVar11) {
          (FVar6.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar8 = aVar2;
        }
        UNLOCK();
        FVar10 = FVar6;
        aVar2 = aVar8;
      } while (!bVar11);
      pIVar4 = pFVar9->ARImplemention;
      if (pIVar4 == (IARSystemSupport *)0x0) {
        uVar7 = 0;
      }
      else {
        local_48 = local_78;
        uStack_44 = uStack_74;
        uStack_40 = uStack_70;
        uStack_3c = uStack_6c;
        local_38 = local_68;
        local_28 = local_60;
        uStack_24 = uStack_5c;
        uStack_20 = uStack_58;
        uStack_1c = uStack_54;
        uVar7 = (**(code **)(pIVar4->_padding_ + 0xc0))(pIVar4,&local_28,&local_48);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar10.ReferenceController);
      LOCK();
      paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
      }
      *(undefined1 *)param_3 = uVar7;
      return;
    }
  }
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar6.ReferenceController)->_padding_ + 8))
                (FVar6.ReferenceController,1,local_60,local_50,local_50);
    }
  }
LAB_14cf6b52d:
  *(undefined1 *)param_3 = 0;
  return;
}

// execAddRuntimeCandidateImage @ 14cf6b560

void __cdecl
UARBlueprintLibrary::execAddRuntimeCandidateImage(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  void *_Src;
  UARCandidateImage *pUVar3;
  longlong lVar4;
  float local_res10 [2];
  UTexture2D *local_res18;
  UARSessionConfig *local_res20;
  void *local_58;
  undefined8 local_50;
  FString local_48 [2];
  
  local_res20 = (UARSessionConfig *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UTexture2D *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  _Src = local_58;
  fVar2 = local_res10[0];
  local_48[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_50;
  local_48[0].Data.ArrayNum = (int)local_50;
  if ((int)local_50 == 0) {
    local_48[0].Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_50,0,(ForAnyElementType *)local_48,(int)local_50,
               &local_48[0].Data.ArrayMax);
    memcpy(local_48[0].Data.AllocatorInstance.Data,_Src,lVar4 * 2);
  }
  pUVar3 = AddRuntimeCandidateImage(local_res20,local_res18,local_48,fVar2);
  *(UARCandidateImage **)param_3 = pUVar3;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execAddTrackedPointWithName @ 14cf6b720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UARBlueprintLibrary::execAddTrackedPointWithName(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  FField **ppFVar2;
  atomic<int> aVar3;
  FProperty *pFVar4;
  IARSystemSupport *pIVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  FWeakReferencer<1> FVar19;
  undefined1 uVar20;
  atomic<int> aVar21;
  int iVar22;
  FARSupportInterface *pFVar23;
  FWeakReferencer<1> FVar24;
  double *pdVar25;
  bool bVar26;
  bool bVar27;
  undefined1 auStack_d8 [32];
  int local_b8 [2];
  void *local_b0;
  undefined8 local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined1 local_78 [16];
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar13 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar16 = GlobalVectorConstants::Float0001.m128_f32[3];
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar14 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar17 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar15 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar18 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_98 = (double)fVar7;
  dStack_90 = (double)fVar10;
  local_88 = (double)fVar13;
  dStack_80 = (double)fVar16;
  local_78._8_4_ = SUB84((double)fVar11,0);
  local_78._0_8_ = (double)fVar8;
  local_78._12_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  local_68 = (double)fVar14;
  dStack_60 = (double)fVar17;
  local_48 = (double)fVar15;
  dStack_40 = (double)fVar18;
  local_58._8_4_ = SUB84((double)fVar12,0);
  local_58._0_8_ = (double)fVar9;
  local_58._12_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_b0 = (void *)0x0;
  local_a8 = 0;
  pdVar25 = &local_98;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar25 = (double *)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_b8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  bVar26 = local_b8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar19 = RegisteredARSystem.WeakReferenceCount;
  pFVar23 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
    if ((pFVar23 != (FARSupportInterface *)0x0) &&
       (0 < (int)(FVar19.ReferenceController)->SharedReferenceCount)) {
      iVar22 = (int)local_a8 + -1;
      if ((int)local_a8 == 0) {
        iVar22 = 0;
      }
      if (iVar22 != 0) {
        aVar3 = (FVar19.ReferenceController)->SharedReferenceCount;
        do {
          if (aVar3 == (atomic<int>)0x0) {
            bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L"");
            pFVar23 = (FARSupportInterface *)0x0;
            FVar24.ReferenceController = (TReferenceControllerBase<1> *)(FARSupportInterface *)0x0;
            if (bVar27) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            break;
          }
          LOCK();
          aVar21 = (FVar19.ReferenceController)->SharedReferenceCount;
          bVar27 = aVar3 == aVar21;
          if (bVar27) {
            (FVar19.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar21 = aVar3;
          }
          UNLOCK();
          FVar24 = FVar19;
          aVar3 = aVar21;
        } while (!bVar27);
        pIVar5 = pFVar23->ARImplemention;
        if (pIVar5 == (IARSystemSupport *)0x0) {
          uVar20 = 0;
        }
        else {
          uVar20 = (**(code **)(pIVar5->_padding_ + 0x120))(pIVar5,pdVar25,&local_b0,bVar26);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar24.ReferenceController);
        LOCK();
        paVar1 = &(FVar19.ReferenceController)->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)((FVar19.ReferenceController)->_padding_ + 8))(FVar19.ReferenceController,1);
        }
        goto LAB_14cf6b978;
      }
    }
    LOCK();
    paVar1 = &(FVar19.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((FVar19.ReferenceController)->_padding_ + 8))(FVar19.ReferenceController,1);
    }
  }
  uVar20 = 0;
LAB_14cf6b978:
  *(undefined1 *)param_3 = uVar20;
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
  return;
}

// execCalculateAlignmentTransform @ 14cf6b9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UARBlueprintLibrary::execCalculateAlignmentTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  TTransform<double> *pTVar1;
  FProperty *pFVar2;
  uchar *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined1 *puVar25;
  double *pdVar26;
  TTransform<double> *this;
  TTransform<double> *pTVar27;
  longlong lVar28;
  undefined1 auVar29 [16];
  undefined1 auStack_228 [32];
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  TTransform<double> local_88;
  ulonglong local_28;
  UObject *pUVar24;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_228;
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar14 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar15 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_1a8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_1a8.Rotation.XY.m128d_f64[0] = (double)fVar4;
  local_1a8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_1a8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar13,0);
  local_1a8.Rotation.ZW.m128d_f64[0] = (double)fVar10;
  local_1a8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  local_1a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar8,0);
  local_1a8.Translation.XY.m128d_f64[0] = (double)fVar5;
  local_1a8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  local_1a8.Translation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar14,0);
  local_1a8.Translation.ZW.m128d_f64[0] = (double)fVar11;
  local_1a8.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
  local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar9,0);
  local_1a8.Scale3D.XY.m128d_f64[0] = (double)fVar6;
  local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
  local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar15,0);
  local_1a8.Scale3D.ZW.m128d_f64[0] = (double)fVar12;
  local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar15 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar14 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar15 = GlobalVectorConstants::Float1110.m128_f32[3];
  pTVar1 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  this = &local_1a8;
  if (pTVar1 != (TTransform<double> *)0x0) {
    this = pTVar1;
  }
  local_148.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_148.Rotation.XY.m128d_f64[0] = (double)fVar4;
  local_148.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_148.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar13,0);
  local_148.Rotation.ZW.m128d_f64[0] = (double)fVar10;
  local_148.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  local_148.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar8,0);
  local_148.Translation.XY.m128d_f64[0] = (double)fVar5;
  local_148.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  local_148.Translation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar14,0);
  local_148.Translation.ZW.m128d_f64[0] = (double)fVar11;
  local_148.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
  local_148.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar9,0);
  local_148.Scale3D.XY.m128d_f64[0] = (double)fVar6;
  local_148.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
  local_148.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar15,0);
  local_148.Scale3D.ZW.m128d_f64[0] = (double)fVar12;
  local_148.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar15 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar14 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar15 = GlobalVectorConstants::Float1110.m128_f32[3];
  pTVar1 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar27 = &local_148;
  if (pTVar1 != (TTransform<double> *)0x0) {
    pTVar27 = pTVar1;
  }
  local_e8._8_4_ = SUB84((double)fVar7,0);
  local_e8._0_8_ = (double)fVar4;
  local_e8._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_d8._8_4_ = SUB84((double)fVar13,0);
  local_d8._0_8_ = (double)fVar10;
  local_d8._12_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  local_c8._8_4_ = SUB84((double)fVar8,0);
  local_c8._0_8_ = (double)fVar5;
  local_c8._12_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  local_b8._8_4_ = SUB84((double)fVar14,0);
  local_b8._0_8_ = (double)fVar11;
  local_b8._12_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
  local_a8._8_4_ = SUB84((double)fVar9,0);
  local_a8._0_8_ = (double)fVar6;
  local_a8._12_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
  local_98._8_4_ = SUB84((double)fVar15,0);
  local_98._0_8_ = (double)fVar12;
  local_98._12_4_ = (int)((ulonglong)(double)fVar15 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    puVar25 = local_e8;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,puVar25,pFVar2);
    uVar22 = SUB84(puVar25,0);
  }
  else {
    pUVar24 = param_2->Object;
    FFrame::Step(param_2,pUVar24,local_e8);
    uVar22 = SUB84(pUVar24,0);
  }
  uVar20 = _UNK_15061cc8c;
  uVar19 = _UNK_15061cc88;
  uVar18 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar23 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  pdVar26 = (double *)local_e8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar26 = (double *)param_2->MostRecentPropertyAddress;
  }
  puVar3 = param_2->Code;
  param_2->Code = puVar3 + (puVar3 != (uchar *)0x0);
  auVar29._0_8_ =
       (double)CONCAT44(uVar18 & *(uint *)((longlong)(this->Scale3D).XY.m128d_f64 + 4),
                        uVar23 & *(uint *)(this->Scale3D).XY.m128d_f64);
  auVar29._8_4_ = uVar19 & *(uint *)((this->Scale3D).XY.m128d_f64 + 1);
  auVar29._12_4_ = uVar20 & *(uint *)((longlong)(this->Scale3D).XY.m128d_f64 + 0xc);
  lVar28 = -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
            (double)CONCAT44(uVar20 & *(uint *)((longlong)(this->Scale3D).ZW.m128d_f64 + 0xc),
                             uVar19 & *(uint *)((this->Scale3D).ZW.m128d_f64 + 1)));
  auVar17._8_4_ = (int)lVar28;
  auVar17._0_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
        (double)CONCAT44(uVar18 & *(uint *)((longlong)(this->Scale3D).ZW.m128d_f64 + 4),
                         uVar23 & *(uint *)(this->Scale3D).ZW.m128d_f64));
  auVar17._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
  uVar23 = movmskpd(uVar22,auVar17);
  lVar28 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar29._8_8_);
  auVar16._8_4_ = (int)lVar28;
  auVar16._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar29._0_8_);
  auVar16._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
  iVar21 = movmskpd((int)puVar3,auVar16);
  if ((uVar23 & 0x3fffffff) == 0 && iVar21 == 0) {
    local_88.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_88.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_88.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_88.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_88.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_88.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    UE::Math::TTransform<double>::InverseFast(this,&local_88);
  }
  local_208.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_208.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_208.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_208.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_208.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_208.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_208.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_208.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_208.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_208.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_208.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_208.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_208.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_208.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_208.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_208.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_208.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_208.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_208,pTVar27,&local_88);
  *pdVar26 = local_208.Rotation.XY.m128d_f64[0];
  pdVar26[1] = local_208.Rotation.XY.m128d_f64[1];
  pdVar26[2] = local_208.Rotation.ZW.m128d_f64[0];
  pdVar26[3] = local_208.Rotation.ZW.m128d_f64[1];
  pdVar26[4] = local_208.Translation.XY.m128d_f64[0];
  pdVar26[5] = local_208.Translation.XY.m128d_f64[1];
  pdVar26[6] = local_208.Translation.ZW.m128d_f64[0];
  pdVar26[7] = local_208.Translation.ZW.m128d_f64[1];
  pdVar26[8] = local_208.Scale3D.XY.m128d_f64[0];
  pdVar26[9] = local_208.Scale3D.XY.m128d_f64[1];
  pdVar26[10] = local_208.Scale3D.ZW.m128d_f64[0];
  pdVar26[0xb] = local_208.Scale3D.ZW.m128d_f64[1];
  return;
}

// execCalculateClosestIntersection @ 14cf6bd40

void __cdecl
UARBlueprintLibrary::execCalculateClosestIntersection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FProperty *pFVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TVector<double> *pTVar5;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_48;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_38;
  TVector<double> local_28;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  pTVar3 = &local_38;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pTVar1 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
           param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar4 = &local_48;
  if (pTVar1 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = pTVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar5 = &local_28;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar5 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  CalculateClosestIntersection(pTVar3,pTVar4,pTVar5);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execDebugDrawPin @ 14cf6c740

void __cdecl UARBlueprintLibrary::execDebugDrawPin(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  longlong *local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_50 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_58 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  plVar4 = local_50;
  uVar3 = local_res20[0];
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = local_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  lVar5 = (**(code **)(*local_58 + 0x180))();
  if ((plVar4 != (longlong *)0x0) && (lVar5 != 0)) {
    (**(code **)(*plVar4 + 0x2b8))(plVar4,lVar5,&local_38,uVar3,uVar2);
  }
  return;
}

// execDebugDrawTrackedGeometry @ 14cf6c930

void __cdecl
UARBlueprintLibrary::execDebugDrawTrackedGeometry(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  longlong *local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_50 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_58 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  plVar4 = local_50;
  uVar3 = local_res20[0];
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = local_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  lVar5 = (**(code **)(*local_58 + 0x180))();
  if ((plVar4 != (longlong *)0x0) && (lVar5 != 0)) {
    (**(code **)(*plVar4 + 0x2b0))(plVar4,lVar5,&local_38,uVar3,uVar2);
  }
  return;
}

// execFindTrackedPointsByName @ 14cf6cb20

void __cdecl
UARBlueprintLibrary::execFindTrackedPointsByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UARTrackedPoint_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FString local_28;
  TArray<UARTrackedPoint_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = FindTrackedPointsByName(&local_18,&local_28);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetARSessionStatus @ 14cf6ccf0

void __cdecl
UARBlueprintLibrary::execGetARSessionStatus(UObject *param_1,FFrame *param_2,void *param_3)

{
  FARSessionStatus *pFVar1;
  FARSessionStatus local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetARSessionStatus(&local_28);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->AdditionalInfo).Data.AllocatorInstance.Data;
    (pFVar1->AdditionalInfo).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->AdditionalInfo).Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->AdditionalInfo).Data.ArrayMax;
    (pFVar1->AdditionalInfo).Data.ArrayNum = 0;
    (pFVar1->AdditionalInfo).Data.ArrayMax = 0;
  }
  *(EARSessionStatus *)((longlong)param_3 + 0x10) = pFVar1->Status;
  if (local_28.AdditionalInfo.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AdditionalInfo.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetARTexture @ 14cf6cdc0

void __cdecl UARBlueprintLibrary::execGetARTexture(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  IARSystemSupport *pIVar4;
  code *pcVar5;
  FWeakReferencer<1> FVar6;
  undefined1 uVar7;
  atomic<int> aVar8;
  FARSupportInterface *pFVar9;
  FARSupportInterface *pFVar10;
  FWeakReferencer<1> FVar11;
  bool bVar12;
  undefined1 local_res10 [8];
  
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar7 = local_res10[0];
  pFVar9 = (FARSupportInterface *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar6 = RegisteredARSystem.WeakReferenceCount;
  pFVar10 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar10 == (FARSupportInterface *)0x0) {
LAB_14cf6ced5:
    if (FVar6.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14cf6cef7;
  }
  else {
    if (FVar6.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14cf6cef7;
    if ((int)(FVar6.ReferenceController)->SharedReferenceCount < 1) goto LAB_14cf6ced5;
    aVar2 = (FVar6.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        pFVar10 = pFVar9;
        FVar11.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
        if (bVar12) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        break;
      }
      LOCK();
      aVar8 = (FVar6.ReferenceController)->SharedReferenceCount;
      bVar12 = aVar2 == aVar8;
      if (bVar12) {
        (FVar6.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar8 = aVar2;
      }
      UNLOCK();
      FVar11 = FVar6;
      aVar2 = aVar8;
    } while (!bVar12);
    pIVar4 = pFVar10->ARImplemention;
    if (pIVar4 != (IARSystemSupport *)0x0) {
      pFVar9 = (FARSupportInterface *)(**(code **)(pIVar4->_padding_ + 0x130))(pIVar4,uVar7);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar11.ReferenceController);
  }
  LOCK();
  paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
  }
LAB_14cf6cef7:
  *(FARSupportInterface **)param_3 = pFVar9;
  return;
}

// execGetARWorldScale @ 14cf6cf20

void __cdecl
UARBlueprintLibrary::execGetARWorldScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  TTransform<double> local_68;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetAlignmentTransform(&local_68);
  *(float *)param_3 = __real_3f800000 / (float)local_68.Scale3D.XY.m128d_f64[0];
  return;
}

// execGetAlignmentTransform @ 14cf6cf80

void __cdecl
UARBlueprintLibrary::execGetAlignmentTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  TTransform<double> *pTVar2;
  TTransform<double> local_68;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetAlignmentTransform(&local_68);
  dVar1 = (pTVar2->Rotation).XY.m128d_f64[1];
  *(double *)param_3 = (pTVar2->Rotation).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 8) = dVar1;
  dVar1 = (pTVar2->Rotation).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x10) = (pTVar2->Rotation).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x18) = dVar1;
  dVar1 = (pTVar2->Translation).XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x20) = (pTVar2->Translation).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x28) = dVar1;
  dVar1 = (pTVar2->Translation).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x30) = (pTVar2->Translation).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x38) = dVar1;
  dVar1 = (pTVar2->Scale3D).XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x40) = (pTVar2->Scale3D).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x48) = dVar1;
  dVar1 = (pTVar2->Scale3D).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x50) = (pTVar2->Scale3D).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x58) = dVar1;
  return;
}

// execGetAllGeometries @ 14cf6cff0

void __cdecl
UARBlueprintLibrary::execGetAllGeometries(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<UARTrackedGeometry_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UARTrackedGeometry_*,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetAllGeometries(&local_18);
  if (param_3 != pTVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetAllGeometriesByClass @ 14cf6d070

/* WARNING: Removing unreachable block (ram,0x00014cf6d18b) */

void __cdecl
UARBlueprintLibrary::execGetAllGeometriesByClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FProperty *pFVar4;
  longlong lVar5;
  code *pcVar6;
  UObject *pUVar7;
  bool bVar8;
  int iVar9;
  UClass *pUVar10;
  undefined4 uVar11;
  ForAnyElementType FVar12;
  undefined4 uVar13;
  UObject *local_res18 [2];
  longlong local_78;
  ForAnyElementType local_70;
  undefined8 local_68;
  TArray<UARTrackedGeometry_*,TSizedDefaultAllocator<32>_> local_60;
  undefined1 local_50 [24];
  
  FVar12.Data = (FScriptContainerElement *)0x0;
  local_res18[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  pUVar7 = local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (local_res18[0] != (UObject *)0x0) goto LAB_14cf6d11d;
  }
  else if (local_res18[0] != (UObject *)0x0) {
    UE::GC::MarkAsReachable(local_res18[0]);
LAB_14cf6d11d:
    pUVar10 = UARTrackedGeometry::StaticClass();
    if (pUVar10 != (UClass *)0x0) {
      iVar9 = (int)pUVar10->_padding_;
      puVar1 = &pUVar7[1].field_0x8;
      if ((*(int *)&pUVar7[1].field_0x10 < iVar9) ||
         ((longlong *)*(undefined1 **)(*(longlong *)puVar1 + (longlong)iVar9 * 8) !=
          &pUVar10->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        local_70.Data = (FScriptContainerElement *)0x0;
        local_68 = 0;
        GetAllGeometries(&local_60);
        pFVar2 = local_60.AllocatorInstance.Data + (longlong)local_60.ArrayNum * 8;
        for (FVar12.Data = local_60.AllocatorInstance.Data; FVar12.Data != pFVar2;
            FVar12.Data = FVar12.Data + 8) {
          local_78 = *(longlong *)FVar12.Data;
          if (local_78 != 0) {
            lVar5 = *(longlong *)(local_78 + 0x10);
            pUVar10 = UARTrackedGeometry::StaticClass();
            if (pUVar10 != (UClass *)0x0) {
              iVar9 = *(int *)&pUVar7[1].field_0x10;
              iVar3 = (int)pUVar10->_padding_;
              if ((iVar9 < iVar3) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)puVar1 + (longlong)iVar3 * 8) !=
                  &pUVar10->_padding_)) {
                bVar8 = false;
              }
              else {
                bVar8 = true;
              }
              if (bVar8) {
                if ((*(int *)(lVar5 + 0x38) < iVar9) ||
                   (*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar9 * 8) != puVar1))
                {
                  bVar8 = false;
                }
                else {
                  bVar8 = true;
                }
                if (bVar8) {
                  if (((local_70.Data <= (FScriptContainerElement *)&local_78) &&
                      ((FScriptContainerElement *)&local_78 <
                       local_70.Data + (longlong)local_68._4_4_ * 8)) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  iVar9 = (int)local_68;
                  if ((int)local_68 == local_68._4_4_) {
                    iVar9 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x808,&local_70,(int *)((longlong)&local_68 + 4));
                  }
                  local_68 = CONCAT44(local_68._4_4_,iVar9 + 1);
                  *(longlong *)(local_70.Data + (longlong)iVar9 * 8) = local_78;
                }
              }
            }
          }
        }
        if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.AllocatorInstance.Data);
        }
        FVar12.Data = local_70.Data;
        uVar13 = (int)local_68;
        uVar11 = local_68._4_4_;
        goto LAB_14cf6d2ef;
      }
    }
  }
  uVar13 = 0;
  uVar11 = uVar13;
LAB_14cf6d2ef:
  if (param_3 != local_50) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = FVar12.Data;
    *(undefined4 *)((longlong)param_3 + 8) = uVar13;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar11;
    FVar12.Data = (FScriptContainerElement *)0x0;
  }
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  return;
}

// execGetAllPins @ 14cf6d360

void __cdecl UARBlueprintLibrary::execGetAllPins(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<UARPin_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UARPin_*,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetAllPins(&local_18);
  if (param_3 != pTVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetAllTracked2DPoses @ 14cf6d3e0

void __cdecl
UARBlueprintLibrary::execGetAllTracked2DPoses(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FARPose2D,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FARPose2D,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetAllTracked2DPoses(&local_18);
  if (param_3 != pTVar1) {
    DestructItems<FARPose2D,int>(*(FARPose2D **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  DestructItems<FARPose2D,int>((FARPose2D *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FARPose2D *)local_18.AllocatorInstance.Data != (FARPose2D *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetCameraIntrinsics @ 14cf6d8c0

void __cdecl
UARBlueprintLibrary::execGetCameraIntrinsics(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  IARSystemSupport *pIVar4;
  code *pcVar5;
  FWeakReferencer<1> FVar6;
  undefined1 uVar7;
  atomic<int> aVar8;
  TIntPoint<int>_u_0 *pTVar9;
  FARSupportInterface *pFVar10;
  FWeakReferencer<1> FVar11;
  bool bVar12;
  TIntPoint<int>_u_0 local_38;
  TVector2<double>_u_0 local_30;
  TVector2<double>_u_0 local_20;
  
  local_20 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_38 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  local_30 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar9 = &local_38;
  if ((TIntPoint<int>_u_0 *)param_2->MostRecentPropertyAddress != (TIntPoint<int>_u_0 *)0x0) {
    pTVar9 = (TIntPoint<int>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar6 = RegisteredARSystem.WeakReferenceCount;
  pFVar10 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar10 != (FARSupportInterface *)0x0) {
    if (FVar6.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14cf6da4a;
    if (0 < (int)(FVar6.ReferenceController)->SharedReferenceCount) {
      aVar2 = (FVar6.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          FVar11.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar10 = (FARSupportInterface *)0x0;
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar12) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          break;
        }
        LOCK();
        aVar8 = (FVar6.ReferenceController)->SharedReferenceCount;
        bVar12 = aVar2 == aVar8;
        if (bVar12) {
          (FVar6.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar8 = aVar2;
        }
        UNLOCK();
        FVar11 = FVar6;
        aVar2 = aVar8;
      } while (!bVar12);
      pIVar4 = pFVar10->ARImplemention;
      if (pIVar4 == (IARSystemSupport *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)(pIVar4->_padding_ + 0x1d0))(pIVar4,pTVar9);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar11.ReferenceController);
      LOCK();
      paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
      }
      *(undefined1 *)param_3 = uVar7;
      return;
    }
  }
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
    }
  }
LAB_14cf6da4a:
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetCurrentLightEstimate @ 14cf6dc70

void __cdecl
UARBlueprintLibrary::execGetCurrentLightEstimate(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FWeakReferencer<1> FVar4;
  atomic<int> aVar5;
  FARSupportInterface *pFVar6;
  FARSupportInterface *pFVar7;
  FWeakReferencer<1> FVar8;
  bool bVar9;
  
  pFVar6 = (FARSupportInterface *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4 = RegisteredARSystem.WeakReferenceCount;
  pFVar7 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar7 == (FARSupportInterface *)0x0) {
LAB_14cf6dd3e:
    if (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14cf6dd60;
  }
  else {
    if (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14cf6dd60;
    if ((int)(FVar4.ReferenceController)->SharedReferenceCount < 1) goto LAB_14cf6dd3e;
    aVar2 = (FVar4.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        pFVar7 = pFVar6;
        FVar8.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        break;
      }
      LOCK();
      aVar5 = (FVar4.ReferenceController)->SharedReferenceCount;
      bVar9 = aVar2 == aVar5;
      if (bVar9) {
        (FVar4.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      FVar8 = FVar4;
      aVar2 = aVar5;
    } while (!bVar9);
    if (pFVar7->ARImplemention != (IARSystemSupport *)0x0) {
      pFVar6 = (FARSupportInterface *)(**(code **)(pFVar7->ARImplemention->_padding_ + 0x90))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
  }
  LOCK();
  paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
  }
LAB_14cf6dd60:
  *(FARSupportInterface **)param_3 = pFVar6;
  return;
}

// execGetNumberOfTrackedFacesSupported @ 14cf6edc0

void __cdecl
UARBlueprintLibrary::execGetNumberOfTrackedFacesSupported
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FWeakReferencer<1> FVar4;
  atomic<int> aVar5;
  undefined4 uVar6;
  FARSupportInterface *pFVar7;
  undefined4 uVar8;
  FWeakReferencer<1> FVar9;
  bool bVar10;
  
  uVar6 = 0;
  uVar8 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4 = RegisteredARSystem.WeakReferenceCount;
  pFVar7 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar7 == (FARSupportInterface *)0x0) {
LAB_14cf6ee8d:
    uVar6 = 0;
    if (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14cf6eeaf;
  }
  else {
    if (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14cf6eeaf;
    if ((int)(FVar4.ReferenceController)->SharedReferenceCount < 1) goto LAB_14cf6ee8d;
    aVar2 = (FVar4.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        pFVar7 = (FARSupportInterface *)0x0;
        FVar9.ReferenceController = (TReferenceControllerBase<1> *)(FARSupportInterface *)0x0;
        if (bVar10) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        break;
      }
      LOCK();
      aVar5 = (FVar4.ReferenceController)->SharedReferenceCount;
      bVar10 = aVar2 == aVar5;
      if (bVar10) {
        (FVar4.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      FVar9 = FVar4;
      aVar2 = aVar5;
    } while (!bVar10);
    if (pFVar7->ARImplemention != (IARSystemSupport *)0x0) {
      uVar6 = (**(code **)(pFVar7->ARImplemention->_padding_ + 0x128))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar9.ReferenceController);
  }
  uVar8 = uVar6;
  LOCK();
  paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
  }
LAB_14cf6eeaf:
  *(undefined4 *)param_3 = uVar8;
  return;
}

// execGetObjectClassificationAtLocation @ 14cf6ef00

void __cdecl
UARBlueprintLibrary::execGetObjectClassificationAtLocation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong *plVar4;
  undefined4 uVar5;
  uchar *puVar6;
  char cVar7;
  UClass *pUVar8;
  ForAnyElementType FVar9;
  uchar *puVar10;
  uchar *puVar11;
  uchar local_res10 [8];
  undefined4 local_res18 [2];
  uchar *local_res20;
  TArray<UARTrackedGeometry_*,TSizedDefaultAllocator<32>_> local_88;
  uchar local_78 [24];
  uchar local_60 [40];
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  puVar11 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_res20 = local_78;
  if (puVar11 != (uchar *)0x0) {
    local_res20 = puVar11;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar11 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar10 = local_res10;
  if (puVar11 != (uchar *)0x0) {
    puVar10 = puVar11;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_60,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_60);
  }
  local_res18[0] = 0;
  puVar11 = local_60;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar11 = param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  uVar5 = local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetAllGeometries(&local_88);
  puVar6 = local_res20;
  FVar9.Data = local_88.AllocatorInstance.Data;
  do {
    if (FVar9.Data == local_88.AllocatorInstance.Data + (longlong)local_88.ArrayNum * 8) {
      if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
      *(undefined1 *)param_3 = 0;
      return;
    }
    plVar4 = *(longlong **)FVar9.Data;
    if (plVar4 != (longlong *)0x0) {
      pUVar8 = UARMeshGeometry::StaticClass();
      iVar2 = (int)pUVar8->_padding_;
      if (((iVar2 <= *(int *)(plVar4[2] + 0x38)) &&
          ((longlong *)*(undefined1 **)(*(longlong *)(plVar4[2] + 0x30) + (longlong)iVar2 * 8) ==
           &pUVar8->_padding_)) &&
         (cVar7 = (**(code **)(*plVar4 + 0x2b8))(plVar4,puVar6,puVar10,puVar11,uVar5), cVar7 != '\0'
         )) {
        if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.AllocatorInstance.Data);
        }
        *(undefined1 *)param_3 = 1;
        return;
      }
    }
    FVar9.Data = FVar9.Data + 8;
  } while( true );
}

// execGetPointCloud @ 14cf6f460

void __cdecl UARBlueprintLibrary::execGetPointCloud(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetPointCloud(&local_18);
  if (param_3 != pTVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetSessionConfig @ 14cf6f510

void __cdecl
UARBlueprintLibrary::execGetSessionConfig(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TObjectPtr<UARSessionConfig>_u_0 TVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  atomic<int> aVar6;
  FARSupportInterface *pFVar7;
  FWeakReferencer<1> FVar8;
  bool bVar9;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar5 = RegisteredARSystem.WeakReferenceCount;
  pFVar7 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar7 != (FARSupportInterface *)0x0) {
    if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14cf6f64f;
    if (0 < (int)(FVar5.ReferenceController)->SharedReferenceCount) {
      aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          FVar8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar7 = (FARSupportInterface *)0x0;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          break;
        }
        LOCK();
        aVar6 = (FVar5.ReferenceController)->SharedReferenceCount;
        bVar9 = aVar2 == aVar6;
        if (bVar9) {
          (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar6 = aVar2;
        }
        UNLOCK();
        FVar8 = FVar5;
        aVar2 = aVar6;
      } while (!bVar9);
      if (((pFVar7->ARSettings).field0_0x0.DebugPtr == (UARSessionConfig *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ARSettings != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Private\\ARSupportInterface.cpp"
                             ,0x38,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TVar3 = (pFVar7->ARSettings).field0_0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
      LOCK();
      paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
      }
      *(TObjectPtr<UARSessionConfig>_u_0 *)param_3 = TVar3;
      return;
    }
  }
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
    }
  }
LAB_14cf6f64f:
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetSupportedVideoFormats @ 14cf6f6d0

void __cdecl
UARBlueprintLibrary::execGetSupportedVideoFormats(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FARVideoFormat,TSizedDefaultAllocator<32>_> *pTVar2;
  EARSessionType local_res10 [24];
  TArray<FARVideoFormat,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10[0] = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetSupportedVideoFormats(&local_18,local_res10[0]);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetTrackingQuality @ 14cf6fac0

void __cdecl
UARBlueprintLibrary::execGetTrackingQuality(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FWeakReferencer<1> FVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  FARSupportInterface *pFVar7;
  FWeakReferencer<1> FVar8;
  bool bVar9;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4 = RegisteredARSystem.WeakReferenceCount;
  pFVar7 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar7 != (FARSupportInterface *)0x0) {
    if (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14cf6fbdf;
    if (0 < (int)(FVar4.ReferenceController)->SharedReferenceCount) {
      aVar2 = (FVar4.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          FVar8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar7 = (FARSupportInterface *)0x0;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        LOCK();
        aVar6 = (FVar4.ReferenceController)->SharedReferenceCount;
        bVar9 = aVar2 == aVar6;
        if (bVar9) {
          (FVar4.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar6 = aVar2;
        }
        UNLOCK();
        FVar8 = FVar4;
        aVar2 = aVar6;
      } while (!bVar9);
      if (pFVar7->ARImplemention == (IARSystemSupport *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(pFVar7->ARImplemention->_padding_ + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
      LOCK();
      paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
      }
      *(undefined1 *)param_3 = uVar5;
      return;
    }
  }
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
    }
  }
LAB_14cf6fbdf:
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetTrackingQualityReason @ 14cf6fc00

void __cdecl
UARBlueprintLibrary::execGetTrackingQualityReason(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FWeakReferencer<1> FVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  FARSupportInterface *pFVar7;
  FWeakReferencer<1> FVar8;
  bool bVar9;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4 = RegisteredARSystem.WeakReferenceCount;
  pFVar7 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar7 != (FARSupportInterface *)0x0) {
    if (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14cf6fd1f;
    if (0 < (int)(FVar4.ReferenceController)->SharedReferenceCount) {
      aVar2 = (FVar4.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          FVar8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar7 = (FARSupportInterface *)0x0;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        LOCK();
        aVar6 = (FVar4.ReferenceController)->SharedReferenceCount;
        bVar9 = aVar2 == aVar6;
        if (bVar9) {
          (FVar4.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar6 = aVar2;
        }
        UNLOCK();
        FVar8 = FVar4;
        aVar2 = aVar6;
      } while (!bVar9);
      if (pFVar7->ARImplemention == (IARSystemSupport *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(pFVar7->ARImplemention->_padding_ + 0x18))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
      LOCK();
      paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
      }
      *(undefined1 *)param_3 = uVar5;
      return;
    }
  }
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
    }
  }
LAB_14cf6fd1f:
  *(undefined1 *)param_3 = 4;
  return;
}

// execGetWorldMappingStatus @ 14cf6fe30

void __cdecl
UARBlueprintLibrary::execGetWorldMappingStatus(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FWeakReferencer<1> FVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  FARSupportInterface *pFVar7;
  FWeakReferencer<1> FVar8;
  bool bVar9;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4 = RegisteredARSystem.WeakReferenceCount;
  pFVar7 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar7 != (FARSupportInterface *)0x0) {
    if (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14cf6ff52;
    if (0 < (int)(FVar4.ReferenceController)->SharedReferenceCount) {
      aVar2 = (FVar4.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          FVar8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar7 = (FARSupportInterface *)0x0;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        LOCK();
        aVar6 = (FVar4.ReferenceController)->SharedReferenceCount;
        bVar9 = aVar2 == aVar6;
        if (bVar9) {
          (FVar4.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar6 = aVar2;
        }
        UNLOCK();
        FVar8 = FVar4;
        aVar2 = aVar6;
      } while (!bVar9);
      if (pFVar7->ARImplemention == (IARSystemSupport *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(pFVar7->ARImplemention->_padding_ + 0xd8))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
      LOCK();
      paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
      }
      *(undefined1 *)param_3 = uVar5;
      return;
    }
  }
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
    }
  }
LAB_14cf6ff52:
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsARPinLocalStoreReady @ 14cf702e0

void __cdecl
UARBlueprintLibrary::execIsARPinLocalStoreReady(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FWeakReferencer<1> FVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  FWeakReferencer<1> FVar7;
  FARSupportInterface *pFVar8;
  bool bVar9;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4 = RegisteredARSystem.WeakReferenceCount;
  pFVar8 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar8 == (FARSupportInterface *)0x0) ||
      (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar4.ReferenceController)->SharedReferenceCount < 1)) {
    uVar5 = 0;
    if (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      *(undefined1 *)param_3 = 0;
      return;
    }
  }
  else {
    aVar2 = (FVar4.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        FVar7.ReferenceController = (TReferenceControllerBase<1> *)(FARSupportInterface *)0x0;
        pFVar8 = (FARSupportInterface *)0x0;
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        break;
      }
      LOCK();
      aVar6 = (FVar4.ReferenceController)->SharedReferenceCount;
      bVar9 = aVar2 == aVar6;
      if (bVar9) {
        (FVar4.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      FVar7 = FVar4;
      aVar2 = aVar6;
    } while (!bVar9);
    if (pFVar8->ARImplemention == (IARSystemSupport *)0x0) {
      uVar5 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
    }
    else {
      uVar5 = (**(code **)(pFVar8->ARImplemention->_padding_ + 0x1a8))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
    }
  }
  LOCK();
  paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
  }
  *(undefined1 *)param_3 = uVar5;
  return;
}

// execIsARPinLocalStoreSupported @ 14cf70400

void __cdecl
UARBlueprintLibrary::execIsARPinLocalStoreSupported(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FWeakReferencer<1> FVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  FWeakReferencer<1> FVar7;
  FARSupportInterface *pFVar8;
  bool bVar9;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4 = RegisteredARSystem.WeakReferenceCount;
  pFVar8 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar8 == (FARSupportInterface *)0x0) ||
      (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar4.ReferenceController)->SharedReferenceCount < 1)) {
    uVar5 = 0;
    if (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      *(undefined1 *)param_3 = 0;
      return;
    }
  }
  else {
    aVar2 = (FVar4.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        FVar7.ReferenceController = (TReferenceControllerBase<1> *)(FARSupportInterface *)0x0;
        pFVar8 = (FARSupportInterface *)0x0;
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        break;
      }
      LOCK();
      aVar6 = (FVar4.ReferenceController)->SharedReferenceCount;
      bVar9 = aVar2 == aVar6;
      if (bVar9) {
        (FVar4.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      FVar7 = FVar4;
      aVar2 = aVar6;
    } while (!bVar9);
    if (pFVar8->ARImplemention == (IARSystemSupport *)0x0) {
      uVar5 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
    }
    else {
      uVar5 = (**(code **)(pFVar8->ARImplemention->_padding_ + 0x1a0))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
    }
  }
  LOCK();
  paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
  }
  *(undefined1 *)param_3 = uVar5;
  return;
}

// execIsARSupported @ 14cf70520

void __cdecl UARBlueprintLibrary::execIsARSupported(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FWeakReferencer<1> FVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  FARSupportInterface *pFVar7;
  FWeakReferencer<1> FVar8;
  bool bVar9;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4 = RegisteredARSystem.WeakReferenceCount;
  pFVar7 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar7 != (FARSupportInterface *)0x0) {
    if (FVar4.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14cf7063f;
    if (0 < (int)(FVar4.ReferenceController)->SharedReferenceCount) {
      aVar2 = (FVar4.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          FVar8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar7 = (FARSupportInterface *)0x0;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        LOCK();
        aVar6 = (FVar4.ReferenceController)->SharedReferenceCount;
        bVar9 = aVar2 == aVar6;
        if (bVar9) {
          (FVar4.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar6 = aVar2;
        }
        UNLOCK();
        FVar8 = FVar4;
        aVar2 = aVar6;
      } while (!bVar9);
      if (pFVar7->ARImplemention == (IARSystemSupport *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(pFVar7->ARImplemention->_padding_ + 0x40))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
      LOCK();
      paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
      }
      *(undefined1 *)param_3 = uVar5;
      return;
    }
  }
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
    }
  }
LAB_14cf7063f:
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsSceneReconstructionSupported @ 14cf70660

void __cdecl
UARBlueprintLibrary::execIsSceneReconstructionSupported
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  IARSystemSupport *pIVar4;
  code *pcVar5;
  FWeakReferencer<1> FVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  atomic<int> aVar9;
  FARSupportInterface *pFVar10;
  FWeakReferencer<1> FVar11;
  bool bVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  local_res18[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar7 = local_res18[0];
  uVar8 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar6 = RegisteredARSystem.WeakReferenceCount;
  pFVar10 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar10 != (FARSupportInterface *)0x0) {
    if (FVar6.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14cf70807;
    if (0 < (int)(FVar6.ReferenceController)->SharedReferenceCount) {
      aVar2 = (FVar6.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          FVar11.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar10 = (FARSupportInterface *)0x0;
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar12) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          break;
        }
        LOCK();
        aVar9 = (FVar6.ReferenceController)->SharedReferenceCount;
        bVar12 = aVar2 == aVar9;
        if (bVar12) {
          (FVar6.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar9 = aVar2;
        }
        UNLOCK();
        FVar11 = FVar6;
        aVar2 = aVar9;
      } while (!bVar12);
      pIVar4 = pFVar10->ARImplemention;
      if (pIVar4 == (IARSystemSupport *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (**(code **)(pIVar4->_padding_ + 0x118))(pIVar4,uVar7,uVar8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar11.ReferenceController);
      LOCK();
      paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
      }
      *(undefined1 *)param_3 = uVar8;
      return;
    }
  }
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
    }
  }
LAB_14cf70807:
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsSessionTrackingFeatureSupported @ 14cf70830

void __cdecl
UARBlueprintLibrary::execIsSessionTrackingFeatureSupported
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  IARSystemSupport *pIVar4;
  code *pcVar5;
  FWeakReferencer<1> FVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  atomic<int> aVar9;
  FARSupportInterface *pFVar10;
  FWeakReferencer<1> FVar11;
  bool bVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  local_res18[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar7 = local_res18[0];
  uVar8 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar6 = RegisteredARSystem.WeakReferenceCount;
  pFVar10 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar10 != (FARSupportInterface *)0x0) {
    if (FVar6.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14cf709d7;
    if (0 < (int)(FVar6.ReferenceController)->SharedReferenceCount) {
      aVar2 = (FVar6.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          FVar11.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar10 = (FARSupportInterface *)0x0;
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar12) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          break;
        }
        LOCK();
        aVar9 = (FVar6.ReferenceController)->SharedReferenceCount;
        bVar12 = aVar2 == aVar9;
        if (bVar12) {
          (FVar6.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar9 = aVar2;
        }
        UNLOCK();
        FVar11 = FVar6;
        aVar2 = aVar9;
      } while (!bVar12);
      pIVar4 = pFVar10->ARImplemention;
      if (pIVar4 == (IARSystemSupport *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (**(code **)(pIVar4->_padding_ + 0x108))(pIVar4,uVar7,uVar8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar11.ReferenceController);
      LOCK();
      paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
      }
      *(undefined1 *)param_3 = uVar8;
      return;
    }
  }
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
    }
  }
LAB_14cf709d7:
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsSessionTypeSupported @ 14cf70a00

void __cdecl
UARBlueprintLibrary::execIsSessionTypeSupported(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  IARSystemSupport *pIVar4;
  code *pcVar5;
  FWeakReferencer<1> FVar6;
  undefined1 uVar7;
  atomic<int> aVar8;
  FARSupportInterface *pFVar9;
  FWeakReferencer<1> FVar10;
  bool bVar11;
  undefined1 local_res10 [8];
  
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar7 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar6 = RegisteredARSystem.WeakReferenceCount;
  pFVar9 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar9 != (FARSupportInterface *)0x0) {
    if (FVar6.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14cf70b60;
    if (0 < (int)(FVar6.ReferenceController)->SharedReferenceCount) {
      aVar2 = (FVar6.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          FVar10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar9 = (FARSupportInterface *)0x0;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          break;
        }
        LOCK();
        aVar8 = (FVar6.ReferenceController)->SharedReferenceCount;
        bVar11 = aVar2 == aVar8;
        if (bVar11) {
          (FVar6.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar8 = aVar2;
        }
        UNLOCK();
        FVar10 = FVar6;
        aVar2 = aVar8;
      } while (!bVar11);
      pIVar4 = pFVar9->ARImplemention;
      if (pIVar4 == (IARSystemSupport *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)(pIVar4->_padding_ + 0x70))(pIVar4,uVar7);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar10.ReferenceController);
      LOCK();
      paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
      }
      *(undefined1 *)param_3 = uVar7;
      return;
    }
  }
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
    }
  }
LAB_14cf70b60:
  *(undefined1 *)param_3 = 0;
  return;
}

// execLineTraceTrackedObjects3D @ 14cf70bb0

void __cdecl
UARBlueprintLibrary::execLineTraceTrackedObjects3D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FARTraceResult,TSizedDefaultAllocator<32>_> *pTVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_c8 [2];
  TArray<FARTraceResult,TSizedDefaultAllocator<32>_> local_c0;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_58;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar4 = local_res18[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar5 = local_res20[0] != 0;
  local_c8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  local_78._s_0.X = local_b0;
  local_78._s_0.Y = dStack_a8;
  local_78._s_0.Z = local_a0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58._s_0.X = local_98;
  local_58._s_0.Y = dStack_90;
  local_58._s_0.Z = local_88;
  pTVar2 = LineTraceTrackedObjects3D
                     (&local_c0,(TVector<double> *)&local_58._s_0,(TVector<double> *)&local_78._s_0,
                      bVar3,bVar4,bVar5,local_c8[0] != 0);
  if (param_3 != pTVar2) {
    DestructItems<FARTraceResult,int>(*(FARTraceResult **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  DestructItems<FARTraceResult,int>
            ((FARTraceResult *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum);
  if ((FARTraceResult *)local_c0.AllocatorInstance.Data != (FARTraceResult *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  return;
}

// execLineTraceTrackedObjects @ 14cf70e20

void __cdecl
UARBlueprintLibrary::execLineTraceTrackedObjects(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FARTraceResult,TSizedDefaultAllocator<32>_> *pTVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_78 [2];
  TArray<FARTraceResult,TSizedDefaultAllocator<32>_> local_70;
  double local_58;
  double dStack_50;
  TVector2<double>_u_0 local_48;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar4 = local_res18[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar5 = local_res20[0] != 0;
  local_78[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_48._s_0.X = local_58;
  local_48._s_0.Y = dStack_50;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = LineTraceTrackedObjects
                     (&local_70,(TVector2<double> *)&local_48._s_0,bVar3,bVar4,bVar5,
                      local_78[0] != 0);
  if (param_3 != pTVar2) {
    DestructItems<FARTraceResult,int>(*(FARTraceResult **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  DestructItems<FARTraceResult,int>
            ((FARTraceResult *)local_70.AllocatorInstance.Data,local_70.ArrayNum);
  if ((FARTraceResult *)local_70.AllocatorInstance.Data != (FARTraceResult *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  return;
}

// execLoadARPinsFromLocalStore @ 14cf71030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UARBlueprintLibrary::execLoadARPinsFromLocalStore(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  int iVar4;
  FWeakReferencer<1> FVar5;
  atomic<int> aVar6;
  FARSupportInterface *pFVar7;
  FWeakReferencer<1> FVar8;
  bool bVar9;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar5 = RegisteredARSystem.WeakReferenceCount;
  pFVar7 = RegisteredARSystem.Object;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
    if ((pFVar7 != (FARSupportInterface *)0x0) &&
       (0 < (int)(FVar5.ReferenceController)->SharedReferenceCount)) {
      aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          pFVar7 = (FARSupportInterface *)0x0;
          FVar8.ReferenceController = (TReferenceControllerBase<1> *)(FARSupportInterface *)0x0;
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        LOCK();
        aVar6 = (FVar5.ReferenceController)->SharedReferenceCount;
        bVar9 = aVar2 == aVar6;
        if (bVar9) {
          (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar6 = aVar2;
        }
        UNLOCK();
        FVar8 = FVar5;
        aVar2 = aVar6;
      } while (!bVar9);
      if (pFVar7->ARImplemention != (IARSystemSupport *)0x0) {
        (**(code **)(pFVar7->ARImplemention->_padding_ + 0x1b0))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
    LOCK();
    paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController);
    }
  }
  if (param_3 != local_88) {
    TSet<TTuple<FName,UARPin_*>,TDefaultMapHashableKeyFuncs<FName,UARPin_*,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FName,UARPin_*>,TDefaultMapHashableKeyFuncs<FName,UARPin_*,0>,FDefaultSetAllocator>_>
              (param_3,(TSet<TTuple<FName,UARPin_*>,TDefaultMapHashableKeyFuncs<FName,UARPin_*,0>,FDefaultSetAllocator>
                        *)local_88);
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  iVar4 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_54 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return;
}

// execPauseARSession @ 14cf71270

void __cdecl UARBlueprintLibrary::execPauseARSession(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  IARSystemSupport *pIVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  atomic<int> aVar6;
  FWeakReferencer<1> FVar7;
  FARSupportInterface *pFVar8;
  bool bVar9;
  void *local_28 [2];
  char local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar5 = RegisteredARSystem.WeakReferenceCount;
  pFVar8 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
    if ((pFVar8 != (FARSupportInterface *)0x0) &&
       (0 < (int)(FVar5.ReferenceController)->SharedReferenceCount)) {
      aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          FVar7.ReferenceController = (TReferenceControllerBase<1> *)(FARSupportInterface *)0x0;
          pFVar8 = (FARSupportInterface *)0x0;
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          break;
        }
        LOCK();
        aVar6 = (FVar5.ReferenceController)->SharedReferenceCount;
        bVar9 = aVar2 == aVar6;
        if (bVar9) {
          (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar6 = aVar2;
        }
        UNLOCK();
        FVar7 = FVar5;
        aVar2 = aVar6;
      } while (!bVar9);
      pIVar3 = pFVar8->ARImplemention;
      if (pIVar3 != (IARSystemSupport *)0x0) {
        (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3,local_28);
        if (local_28[0] != (void *)0x0) {
          FMemory::Free(local_28[0]);
        }
        if (local_18 == '\x01') {
          (**(code **)(pFVar8->ARImplemention->_padding_ + 0x28))();
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
    }
    LOCK();
    paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
    }
  }
  return;
}

// execPinComponent @ 14cf71390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UARBlueprintLibrary::execPinComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  FField **ppFVar2;
  atomic<int> aVar3;
  FProperty *pFVar4;
  IARSystemSupport *pIVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  FWeakReferencer<1> FVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  atomic<int> aVar20;
  FARSupportInterface *pFVar21;
  FWeakReferencer<1> FVar22;
  FARSupportInterface *pFVar23;
  double *pdVar24;
  bool bVar25;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  undefined1 local_88 [16];
  double local_78;
  double dStack_70;
  undefined1 local_68 [16];
  double local_58;
  double dStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar21 = (FARSupportInterface *)0x0;
  local_b8 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar14 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar15 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar16 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_a8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_a0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_98 = (double)fVar11;
  dStack_90 = (double)fVar14;
  local_78 = (double)fVar12;
  dStack_70 = (double)fVar15;
  local_88._8_4_ = SUB84((double)fVar9,0);
  local_88._0_8_ = (double)fVar7;
  local_88._12_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
  local_58 = (double)fVar13;
  dStack_50 = (double)fVar16;
  local_68._8_4_ = SUB84((double)fVar10,0);
  local_68._0_8_ = (double)fVar8;
  local_68._12_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_c0 = 0;
  pdVar24 = &local_a8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar24 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_c8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  uVar19 = local_c0;
  uVar18 = local_c8;
  local_b0 = local_b8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar17 = RegisteredARSystem.WeakReferenceCount;
  pFVar23 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar23 == (FARSupportInterface *)0x0) {
LAB_14cf715e4:
    if (FVar17.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14cf71606;
  }
  else {
    if (FVar17.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14cf71606;
    if ((int)(FVar17.ReferenceController)->SharedReferenceCount < 1) goto LAB_14cf715e4;
    aVar3 = (FVar17.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        FVar22.ReferenceController = (TReferenceControllerBase<1> *)pFVar21;
        pFVar23 = pFVar21;
        if (bVar25) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        break;
      }
      LOCK();
      aVar20 = (FVar17.ReferenceController)->SharedReferenceCount;
      bVar25 = aVar3 == aVar20;
      if (bVar25) {
        (FVar17.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar20 = aVar3;
      }
      UNLOCK();
      FVar22 = FVar17;
      aVar3 = aVar20;
    } while (!bVar25);
    pIVar5 = pFVar23->ARImplemention;
    if (pIVar5 != (IARSystemSupport *)0x0) {
      local_d8 = uVar18;
      pFVar21 = (FARSupportInterface *)
                (**(code **)(pIVar5->_padding_ + 0xa0))(pIVar5,local_b0,pdVar24,uVar19);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar22.ReferenceController);
  }
  LOCK();
  paVar1 = &(FVar17.ReferenceController)->WeakReferenceCount;
  aVar3 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar3 == (atomic<int>)0x1) {
    (**(code **)((FVar17.ReferenceController)->_padding_ + 8))(FVar17.ReferenceController,1);
  }
LAB_14cf71606:
  *(FARSupportInterface **)param_3 = pFVar21;
  return;
}

// execPinComponentToARPin @ 14cf71640

void __cdecl
UARBlueprintLibrary::execPinComponentToARPin(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  IARSystemSupport *pIVar4;
  code *pcVar5;
  FWeakReferencer<1> FVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  atomic<int> aVar10;
  FARSupportInterface *pFVar11;
  FWeakReferencer<1> FVar12;
  bool bVar13;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  uVar8 = local_res18[0];
  uVar7 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar6 = RegisteredARSystem.WeakReferenceCount;
  pFVar11 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
    if ((pFVar11 != (FARSupportInterface *)0x0) &&
       (0 < (int)(FVar6.ReferenceController)->SharedReferenceCount)) {
      aVar2 = (FVar6.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          FVar12.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar11 = (FARSupportInterface *)0x0;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar13) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          break;
        }
        LOCK();
        aVar10 = (FVar6.ReferenceController)->SharedReferenceCount;
        bVar13 = aVar2 == aVar10;
        if (bVar13) {
          (FVar6.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar10 = aVar2;
        }
        UNLOCK();
        FVar12 = FVar6;
        aVar2 = aVar10;
      } while (!bVar13);
      pIVar4 = pFVar11->ARImplemention;
      if (pIVar4 == (IARSystemSupport *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (**(code **)(pIVar4->_padding_ + 0xa8))(pIVar4,uVar8,uVar7);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar12.ReferenceController);
      LOCK();
      paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
      }
      *(undefined1 *)param_3 = uVar9;
      return;
    }
    LOCK();
    paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execPinComponentToTraceResult @ 14cf71800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UARBlueprintLibrary::execPinComponentToTraceResult(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  FField **ppFVar2;
  atomic<int> aVar3;
  FProperty *pFVar4;
  IARSystemSupport *pIVar5;
  UARTrackedGeometry *pUVar6;
  code *pcVar7;
  FWeakReferencer<1> FVar8;
  undefined8 uVar9;
  atomic<int> aVar10;
  TTransform<double> *pTVar11;
  FARSupportInterface *pFVar12;
  FARSupportInterface *pFVar13;
  FARTraceResult *this;
  FWeakReferencer<1> FVar14;
  bool bVar15;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 *local_140;
  FARTraceResult local_138;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  pFVar12 = (FARSupportInterface *)0x0;
  local_150 = 0;
  local_140 = param_3;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_150,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_150);
  }
  local_138.LocalTransform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_138.LocalTransform.Rotation.XY.m128d_f64[1] =
       (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_138.DistanceFromCamera = 0.0;
  local_138.TraceChannel = None;
  local_138.ARSystem.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_138.LocalTransform.Rotation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_138.LocalTransform.Rotation.ZW.m128d_f64[1] =
       (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_138.LocalTransform.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_138.LocalTransform.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_138.LocalTransform.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_138.LocalTransform.Translation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_138.LocalTransform.Translation.ZW.m128d_f64[1] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_138.LocalTransform.Scale3D.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_138.LocalTransform.Scale3D.ZW.m128d_f64[1] =
       (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_138.LocalTransform.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_138.LocalTransform.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_138.LocalTransform.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_138.TrackedGeometry.field0_0x0.DebugPtr = (TObjectPtr<UARTrackedGeometry>_u_0)0x0;
  local_138.ARSystem.Object = (FARSupportInterface *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_158 = 0;
  this = &local_138;
  if ((FARTraceResult *)param_2->MostRecentPropertyAddress != (FARTraceResult *)0x0) {
    this = (FARTraceResult *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  uVar9 = local_158;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar8 = RegisteredARSystem.WeakReferenceCount;
  pFVar13 = RegisteredARSystem.Object;
  local_148 = local_150;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar13 == (FARSupportInterface *)0x0) {
LAB_14cf71a52:
    if (FVar8.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14cf71a75;
  }
  else {
    if (FVar8.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14cf71a75;
    if ((int)(FVar8.ReferenceController)->SharedReferenceCount < 1) goto LAB_14cf71a52;
    aVar3 = (FVar8.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        pFVar13 = pFVar12;
        FVar14.ReferenceController = (TReferenceControllerBase<1> *)pFVar12;
        if (bVar15) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        break;
      }
      LOCK();
      aVar10 = (FVar8.ReferenceController)->SharedReferenceCount;
      bVar15 = aVar3 == aVar10;
      if (bVar15) {
        (FVar8.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar10 = aVar3;
      }
      UNLOCK();
      FVar14 = FVar8;
      aVar3 = aVar10;
    } while (!bVar15);
    pIVar5 = pFVar13->ARImplemention;
    if (pIVar5 != (IARSystemSupport *)0x0) {
      pUVar6 = (this->TrackedGeometry).field0_0x0.DebugPtr;
      pcVar7 = *(code **)(pIVar5->_padding_ + 0xa0);
      pTVar11 = FARTraceResult::GetLocalToWorldTransform(this,&local_a8);
      local_168 = uVar9;
      pFVar12 = (FARSupportInterface *)(*pcVar7)(pIVar5,local_148,pTVar11,pUVar6);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar14.ReferenceController);
  }
  LOCK();
  paVar1 = &(FVar8.ReferenceController)->WeakReferenceCount;
  aVar3 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar3 == (atomic<int>)0x1) {
    (**(code **)((FVar8.ReferenceController)->_padding_ + 8))(FVar8.ReferenceController,1);
  }
LAB_14cf71a75:
  *local_140 = pFVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.ARSystem.SharedReferenceCount.ReferenceController);
  return;
}

// execRemoveARPinFromLocalStore @ 14cf71ab0

void __cdecl
UARBlueprintLibrary::execRemoveARPinFromLocalStore(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  IARSystemSupport *pIVar4;
  code *pcVar5;
  FWeakReferencer<1> FVar6;
  undefined8 uVar7;
  atomic<int> aVar8;
  FARSupportInterface *pFVar9;
  FWeakReferencer<1> FVar10;
  bool bVar11;
  undefined8 local_res10;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  uVar7 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar6 = RegisteredARSystem.WeakReferenceCount;
  pFVar9 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
    if ((pFVar9 != (FARSupportInterface *)0x0) &&
       (0 < (int)(FVar6.ReferenceController)->SharedReferenceCount)) {
      aVar2 = (FVar6.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          pFVar9 = (FARSupportInterface *)0x0;
          FVar10.ReferenceController = (TReferenceControllerBase<1> *)(FARSupportInterface *)0x0;
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          break;
        }
        LOCK();
        aVar8 = (FVar6.ReferenceController)->SharedReferenceCount;
        bVar11 = aVar2 == aVar8;
        if (bVar11) {
          (FVar6.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar8 = aVar2;
        }
        UNLOCK();
        FVar10 = FVar6;
        aVar2 = aVar8;
      } while (!bVar11);
      pIVar4 = pFVar9->ARImplemention;
      if (pIVar4 != (IARSystemSupport *)0x0) {
        (**(code **)(pIVar4->_padding_ + 0x1c0))(pIVar4,uVar7);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar10.ReferenceController);
    }
    LOCK();
    paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
    }
  }
  return;
}

// execRemoveAllARPinsFromLocalStore @ 14cf71bf0

void __cdecl
UARBlueprintLibrary::execRemoveAllARPinsFromLocalStore
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FWeakReferencer<1> FVar4;
  atomic<int> aVar5;
  FARSupportInterface *pFVar6;
  FWeakReferencer<1> FVar7;
  bool bVar8;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4 = RegisteredARSystem.WeakReferenceCount;
  pFVar6 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
    if ((pFVar6 != (FARSupportInterface *)0x0) &&
       (0 < (int)(FVar4.ReferenceController)->SharedReferenceCount)) {
      aVar2 = (FVar4.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          pFVar6 = (FARSupportInterface *)0x0;
          FVar7.ReferenceController = (TReferenceControllerBase<1> *)(FARSupportInterface *)0x0;
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        LOCK();
        aVar5 = (FVar4.ReferenceController)->SharedReferenceCount;
        bVar8 = aVar2 == aVar5;
        if (bVar8) {
          (FVar4.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar5 = aVar2;
        }
        UNLOCK();
        FVar7 = FVar4;
        aVar2 = aVar5;
      } while (!bVar8);
      if (pFVar6->ARImplemention != (IARSystemSupport *)0x0) {
        (**(code **)(pFVar6->ARImplemention->_padding_ + 0x1c8))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
    }
    LOCK();
    paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
    }
  }
  return;
}

// execRemovePin @ 14cf72010

void __cdecl UARBlueprintLibrary::execRemovePin(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  IARSystemSupport *pIVar4;
  code *pcVar5;
  FWeakReferencer<1> FVar6;
  undefined8 uVar7;
  atomic<int> aVar8;
  FARSupportInterface *pFVar9;
  FWeakReferencer<1> FVar10;
  bool bVar11;
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  uVar7 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar6 = RegisteredARSystem.WeakReferenceCount;
  pFVar9 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
    if ((pFVar9 != (FARSupportInterface *)0x0) &&
       (0 < (int)(FVar6.ReferenceController)->SharedReferenceCount)) {
      aVar2 = (FVar6.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          pFVar9 = (FARSupportInterface *)0x0;
          FVar10.ReferenceController = (TReferenceControllerBase<1> *)(FARSupportInterface *)0x0;
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          break;
        }
        LOCK();
        aVar8 = (FVar6.ReferenceController)->SharedReferenceCount;
        bVar11 = aVar2 == aVar8;
        if (bVar11) {
          (FVar6.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar8 = aVar2;
        }
        UNLOCK();
        FVar10 = FVar6;
        aVar2 = aVar8;
      } while (!bVar11);
      pIVar4 = pFVar9->ARImplemention;
      if (pIVar4 != (IARSystemSupport *)0x0) {
        (**(code **)(pIVar4->_padding_ + 0xb0))(pIVar4,uVar7);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar10.ReferenceController);
    }
    LOCK();
    paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
    }
  }
  return;
}

// execResizeXRCamera @ 14cf722f0

void __cdecl UARBlueprintLibrary::execResizeXRCamera(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TIntPoint<int> TVar2;
  undefined1 local_res10 [8];
  TIntPoint<int> local_res18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TVar2 = ResizeXRCamera(&local_res18);
  *(undefined8 *)param_3 = *(undefined8 *)TVar2.field0_0x0;
  return;
}

// execSaveARPinToLocalStore @ 14cf72390

void __cdecl
UARBlueprintLibrary::execSaveARPinToLocalStore(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  IARSystemSupport *pIVar4;
  code *pcVar5;
  FWeakReferencer<1> FVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  atomic<int> aVar10;
  FARSupportInterface *pFVar11;
  FWeakReferencer<1> FVar12;
  bool bVar13;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  uVar8 = local_res20;
  uVar7 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar6 = RegisteredARSystem.WeakReferenceCount;
  pFVar11 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar11 == (FARSupportInterface *)0x0) ||
      (FVar6.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(FVar6.ReferenceController)->SharedReferenceCount < 1)) {
    uVar9 = 0;
    if (FVar6.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14cf72511;
  }
  else {
    aVar2 = (FVar6.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        pFVar11 = (FARSupportInterface *)0x0;
        FVar12.ReferenceController = (TReferenceControllerBase<1> *)(FARSupportInterface *)0x0;
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        break;
      }
      LOCK();
      aVar10 = (FVar6.ReferenceController)->SharedReferenceCount;
      bVar13 = aVar2 == aVar10;
      if (bVar13) {
        (FVar6.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar10 = aVar2;
      }
      UNLOCK();
      FVar12 = FVar6;
      aVar2 = aVar10;
    } while (!bVar13);
    pIVar4 = pFVar11->ARImplemention;
    if (pIVar4 == (IARSystemSupport *)0x0) {
      uVar9 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar12.ReferenceController);
    }
    else {
      uVar9 = (**(code **)(pIVar4->_padding_ + 0x1b8))(pIVar4,uVar7,uVar8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar12.ReferenceController);
    }
  }
  LOCK();
  paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
  }
LAB_14cf72511:
  *(undefined1 *)param_3 = uVar9;
  return;
}

// execSetARWorldOriginLocationAndRotation @ 14cf734a0

void __cdecl
UARBlueprintLibrary::execSetARWorldOriginLocationAndRotation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res20 [2];
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  TRotator<double> local_48;
  TVector<double>_u_0 local_28;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_48.Pitch = local_78;
  local_48.Yaw = dStack_70;
  local_48.Roll = local_68;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28._s_0.X = local_60;
  local_28._s_0.Y = dStack_58;
  local_28._s_0.Z = local_50;
  SetARWorldOriginLocationAndRotation
            ((TVector<double> *)&local_28._s_0,&local_48,bVar2,local_res20[0] != 0);
  return;
}

// execSetARWorldScale @ 14cf73650

void __cdecl
UARBlueprintLibrary::execSetARWorldScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetARWorldScale(local_res10[0]);
  return;
}

// execSetAlignmentTransform @ 14cf73740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UARBlueprintLibrary::execSetAlignmentTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  TTransform<double> *pTVar12;
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_78.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_78.Rotation.ZW.m128d_f64[0] = (double)fVar6;
  local_78.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  local_78.Translation.ZW.m128d_f64[0] = (double)fVar7;
  local_78.Translation.ZW.m128d_f64[1] = (double)fVar10;
  local_78.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar4,0);
  local_78.Translation.XY.m128d_f64[0] = (double)fVar2;
  local_78.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  local_78.Scale3D.ZW.m128d_f64[0] = (double)fVar8;
  local_78.Scale3D.ZW.m128d_f64[1] = (double)fVar11;
  local_78.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_78.Scale3D.XY.m128d_f64[0] = (double)fVar3;
  local_78.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pTVar12 = &local_78;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar12 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetAlignmentTransform(pTVar12);
  return;
}

// execSetEnabledXRCamera @ 14cf73c00

void __cdecl
UARBlueprintLibrary::execSetEnabledXRCamera(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  IARSystemSupport *pIVar4;
  code *pcVar5;
  FWeakReferencer<1> FVar6;
  atomic<int> aVar7;
  FARSupportInterface *pFVar8;
  FWeakReferencer<1> FVar9;
  bool bVar10;
  bool bVar11;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar10 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar6 = RegisteredARSystem.WeakReferenceCount;
  pFVar8 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar8 != (FARSupportInterface *)0x0) {
    if (FVar6.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      return;
    }
    if (0 < (int)(FVar6.ReferenceController)->SharedReferenceCount) {
      aVar2 = (FVar6.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          FVar9.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar8 = (FARSupportInterface *)0x0;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          break;
        }
        LOCK();
        aVar7 = (FVar6.ReferenceController)->SharedReferenceCount;
        bVar11 = aVar2 == aVar7;
        if (bVar11) {
          (FVar6.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar7 = aVar2;
        }
        UNLOCK();
        FVar9 = FVar6;
        aVar2 = aVar7;
      } while (!bVar11);
      pIVar4 = pFVar8->ARImplemention;
      if (pIVar4 != (IARSystemSupport *)0x0) {
        (**(code **)(pIVar4->_padding_ + 0x80))(pIVar4,bVar10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar9.ReferenceController);
      goto LAB_14cf73d12;
    }
  }
  if (FVar6.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
LAB_14cf73d12:
  LOCK();
  paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
  }
  return;
}

// execStartARSession @ 14cf74b70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UARBlueprintLibrary::execStartARSession(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  TObjectPtr<UARSessionConfig>_u_0 TVar6;
  atomic<int> aVar7;
  FARSupportInterface *pFVar8;
  FWeakReferencer<1> FVar9;
  bool bVar10;
  TObjectPtr<UARSessionConfig>_u_0 local_res10;
  FString local_38;
  FString local_28;
  
  local_res10.DebugPtr = (UARSessionConfig *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  TVar6 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar5 = RegisteredARSystem.WeakReferenceCount;
  pFVar8 = RegisteredARSystem.Object;
  if (local_res10.DebugPtr == (UARSessionConfig *)0x0) {
    ::FString::FString(&local_38,
                       L"Attempting to start an AR session without a session config object");
    UEngine::AddOnScreenDebugMessage
              (GEngine,-1,__real_45610000,(FColor)0xffff3010,&local_38,true,
               &UE::Math::TVector2<double>::UnitVector);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      return;
    }
  }
  else {
    if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1
           );
      UNLOCK();
    }
    if (((pFVar8 == (FARSupportInterface *)0x0) ||
        (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
       ((int)(FVar5.ReferenceController)->SharedReferenceCount < 1)) {
      ::FString::FString(&local_28,
                         L"Attempting to start an AR session but there is no AR plugin configured. To use AR, enable the proper AR plugin in the Plugin Settings."
                        );
      UEngine::AddOnScreenDebugMessage
                (GEngine,-1,__real_45610000,(FColor)0xffff3010,&local_28,true,
                 &UE::Math::TVector2<double>::UnitVector);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        return;
      }
    }
    else {
      aVar2 = (FVar5.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          pFVar8 = (FARSupportInterface *)0x0;
          FVar9.ReferenceController = (TReferenceControllerBase<1> *)(FARSupportInterface *)0x0;
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          break;
        }
        LOCK();
        aVar7 = (FVar5.ReferenceController)->SharedReferenceCount;
        bVar10 = aVar2 == aVar7;
        if (bVar10) {
          (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar7 = aVar2;
        }
        UNLOCK();
        FVar9 = FVar5;
        aVar2 = aVar7;
      } while (!bVar10);
      if (pFVar8->ARImplemention != (IARSystemSupport *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
        }
        (pFVar8->ARSettings).field0_0x0.DebugPtr = (UARSessionConfig *)TVar6;
        (**(code **)(pFVar8->ARImplemention->_padding_ + 0x20))
                  (pFVar8->ARImplemention,TVar6.DebugPtr);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar9.ReferenceController);
    }
    LOCK();
    paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
    }
  }
  return;
}

// execStopARSession @ 14cf74f00

void __cdecl UARBlueprintLibrary::execStopARSession(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FWeakReferencer<1> FVar4;
  atomic<int> aVar5;
  FARSupportInterface *pFVar6;
  FWeakReferencer<1> FVar7;
  bool bVar8;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4 = RegisteredARSystem.WeakReferenceCount;
  pFVar6 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
    if ((pFVar6 != (FARSupportInterface *)0x0) &&
       (0 < (int)(FVar4.ReferenceController)->SharedReferenceCount)) {
      aVar2 = (FVar4.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          pFVar6 = (FARSupportInterface *)0x0;
          FVar7.ReferenceController = (TReferenceControllerBase<1> *)(FARSupportInterface *)0x0;
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        LOCK();
        aVar5 = (FVar4.ReferenceController)->SharedReferenceCount;
        bVar8 = aVar2 == aVar5;
        if (bVar8) {
          (FVar4.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar5 = aVar2;
        }
        UNLOCK();
        FVar7 = FVar4;
        aVar2 = aVar5;
      } while (!bVar8);
      if (pFVar6->ARImplemention != (IARSystemSupport *)0x0) {
        (**(code **)(pFVar6->ARImplemention->_padding_ + 0x30))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
    }
    LOCK();
    paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
    }
  }
  return;
}

// execToggleARCapture @ 14cf74fe0

void __cdecl
UARBlueprintLibrary::execToggleARCapture(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  IARSystemSupport *pIVar4;
  code *pcVar5;
  FWeakReferencer<1> FVar6;
  undefined1 uVar7;
  atomic<int> aVar8;
  FARSupportInterface *pFVar9;
  FWeakReferencer<1> FVar10;
  bool bVar11;
  bool bVar12;
  undefined1 local_res10 [8];
  int local_res18 [4];
  
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar11 = local_res18[0] != 0;
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar7 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar6 = RegisteredARSystem.WeakReferenceCount;
  pFVar9 = RegisteredARSystem.Object;
  if (RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(RegisteredARSystem.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar9 != (FARSupportInterface *)0x0) {
    if (FVar6.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14cf75192;
    if (0 < (int)(FVar6.ReferenceController)->SharedReferenceCount) {
      aVar2 = (FVar6.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          FVar10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar9 = (FARSupportInterface *)0x0;
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar12) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          break;
        }
        LOCK();
        aVar8 = (FVar6.ReferenceController)->SharedReferenceCount;
        bVar12 = aVar2 == aVar8;
        if (bVar12) {
          (FVar6.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar8 = aVar2;
        }
        UNLOCK();
        FVar10 = FVar6;
        aVar2 = aVar8;
      } while (!bVar12);
      pIVar4 = pFVar9->ARImplemention;
      if (pIVar4 == (IARSystemSupport *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)(pIVar4->_padding_ + 0x78))(pIVar4,bVar11,uVar7);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar10.ReferenceController);
      LOCK();
      paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
      }
      *(undefined1 *)param_3 = uVar7;
      return;
    }
  }
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
    }
  }
LAB_14cf75192:
  *(undefined1 *)param_3 = 0;
  return;
}

// execUnpinComponent @ 14cf751b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UARBlueprintLibrary::execUnpinComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  USceneComponent *local_res10 [3];
  
  local_res10[0] = (USceneComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UnpinComponent(local_res10[0]);
  return;
}

