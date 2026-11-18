// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 69

// StaticClass @ 149ce6240

UClass * __cdecl UPCGBlueprintHelpers::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBlueprintHelpers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBlueprintHelpers",
               &Z_Registration_Info_UClass_UPCGBlueprintHelpers.InnerSingleton,
               StaticRegisterNativesUPCGBlueprintHelpers,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGBlueprintHelpers>,
               InternalVTableHelperCtorCaller<UPCGBlueprintHelpers>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBlueprintHelpers.InnerSingleton;
}

// UPCGBlueprintHelpers @ 149d34180

UPCGBlueprintHelpers * __thiscall
UPCGBlueprintHelpers::UPCGBlueprintHelpers(UPCGBlueprintHelpers *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPCGBlueprintHelpers__6B_;
  return this;
}

// UPCGBlueprintHelpers @ 149d341b0

UPCGBlueprintHelpers * __thiscall
UPCGBlueprintHelpers::UPCGBlueprintHelpers(UPCGBlueprintHelpers *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPCGBlueprintHelpers__6B_;
  return this;
}

// ~UPCGBlueprintHelpers @ 149d34f00

void __thiscall UPCGBlueprintHelpers::~UPCGBlueprintHelpers(UPCGBlueprintHelpers *this)

{
  *(undefined ***)this = &___7UPCGBlueprintHelpers__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// ComputeSeedFromPosition @ 149d41ad0

int __cdecl UPCGBlueprintHelpers::ComputeSeedFromPosition(TVector<double> *param_1)

{
  return (int)(param_1->field0_0x0)._s_0.Y * 0x45c282b + 0x1b0cb1bbU ^
         (int)(param_1->field0_0x0)._s_0.Z * 0x211f54f + 0x1b0cb1a7U ^
         (int)(param_1->field0_0x0)._s_0.X * 0xbb38435 + 0x3619636bU;
}

// CreatePCGDataFromActor @ 149d46400

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGData * __cdecl UPCGBlueprintHelpers::CreatePCGDataFromActor(AActor *param_1,bool param_2)

{
  UPCGData *pUVar1;
  
  pUVar1 = UPCGComponent::CreateActorPCGData(param_1,(UPCGComponent *)0x0,param_2);
  return pUVar1;
}

// DuplicateData @ 149d48390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGData * __cdecl
UPCGBlueprintHelpers::DuplicateData(UPCGData *param_1,FPCGContext *param_2,bool param_3)

{
  UPCGData *pUVar1;
  
  if (param_1 != (UPCGData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149d48398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar1 = (UPCGData *)(**(code **)(param_1->_padding_ + 0x310))();
    return pUVar1;
  }
  return (UPCGData *)0x0;
}

// DuplicateDataWithContext @ 149d483b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGData * __cdecl
UPCGBlueprintHelpers::DuplicateDataWithContext
          (UPCGData *param_1,FPCGBlueprintContextHandle *param_2,bool param_3)

{
  FPCGContextHandle *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  UPCGData *pUVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = (param_2->Handle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_149d483e2;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pFVar1 = (param_2->Handle).Object;
    if ((pFVar1 != (FPCGContextHandle *)0x0) && (pFVar1->Context != (FPCGContext *)0x0)) {
      if (param_1 != (UPCGData *)0x0) {
        pUVar4 = (UPCGData *)(**(code **)(param_1->_padding_ + 0x310))(param_1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
        return pUVar4;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      return (UPCGData *)0x0;
    }
  }
LAB_149d483e2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  return (UPCGData *)0x0;
}

// FlushPCGCache @ 149d4d1a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl UPCGBlueprintHelpers::FlushPCGCache(void)

{
  UPCGSubsystem *pUVar1;
  
  pUVar1 = UPCGSubsystem::GetSubsystemForCurrentWorld();
  if (pUVar1 != (UPCGSubsystem *)0x0) {
    IPCGBaseSubsystem::FlushCache((IPCGBaseSubsystem *)&pUVar1->_padding_);
    return true;
  }
  return false;
}

// GetActorBoundsPCG @ 149d4d9f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TBox<double> * __cdecl
UPCGBlueprintHelpers::GetActorBoundsPCG
          (TBox<double> *__return_storage_ptr__,AActor *param_1,bool param_2)

{
  PCGHelpers::GetActorBounds(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetActorData @ 149d4da10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGData * __cdecl UPCGBlueprintHelpers::GetActorData(FPCGContext *param_1)

{
  UPCGComponent *this;
  UPCGData *pUVar1;
  
  this = GetComponent(param_1);
  if (this != (UPCGComponent *)0x0) {
    pUVar1 = UPCGComponent::GetActorPCGData(this);
    return pUVar1;
  }
  return (UPCGData *)0x0;
}

// GetActorDataWithContext @ 149d4da40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGData * __cdecl
UPCGBlueprintHelpers::GetActorDataWithContext(FPCGBlueprintContextHandle *param_1)

{
  FPCGContextHandle *pFVar1;
  FPCGContext *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  UPCGComponent *this;
  UPCGData *pUVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  pTVar6 = (param_1->Handle).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_149d4da72;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    pFVar1 = (param_1->Handle).Object;
    if ((pFVar1 != (FPCGContextHandle *)0x0) &&
       (pFVar2 = pFVar1->Context, pFVar2 != (FPCGContext *)0x0)) {
      this = GetComponent(pFVar2);
      if (this != (UPCGComponent *)0x0) {
        pUVar5 = UPCGComponent::GetActorPCGData(this);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        return pUVar5;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return (UPCGData *)0x0;
    }
  }
LAB_149d4da72:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  return (UPCGData *)0x0;
}

// GetActorLocalBoundsPCG @ 149d4e240

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TBox<double> * __cdecl
UPCGBlueprintHelpers::GetActorLocalBoundsPCG
          (TBox<double> *__return_storage_ptr__,AActor *param_1,bool param_2)

{
  PCGHelpers::GetActorLocalBounds(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetComponent @ 149d4ee80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGComponent * __cdecl UPCGBlueprintHelpers::GetComponent(FPCGContext *param_1)

{
  int iVar1;
  IPCGGraphExecutionSource *pIVar2;
  bool bVar3;
  UPCGComponent *pUVar4;
  UClass *pUVar5;
  
  if ((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource);
    if ((bVar3) &&
       (pIVar2 = (param_1->ExecutionSource).InterfaceInstance,
       pIVar2 != (IPCGGraphExecutionSource *)0x0)) {
      pUVar4 = (UPCGComponent *)(**(code **)((longlong)*pIVar2 + 8))();
      if (pUVar4 != (UPCGComponent *)0x0) {
        pUVar5 = Z_Construct_UClass_UPCGComponent_NoRegister();
        iVar1 = (int)pUVar5->_padding_;
        if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar5->_padding_)) {
          return pUVar4;
        }
      }
    }
  }
  return (UPCGComponent *)0x0;
}

// GetComponentWithContext @ 149d4eef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGComponent * __cdecl
UPCGBlueprintHelpers::GetComponentWithContext(FPCGBlueprintContextHandle *param_1)

{
  FPCGContextHandle *pFVar1;
  FPCGContext *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  UPCGComponent *pUVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  pTVar6 = (param_1->Handle).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_149d4ef20;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    pFVar1 = (param_1->Handle).Object;
    if ((pFVar1 != (FPCGContextHandle *)0x0) &&
       (pFVar2 = pFVar1->Context, pFVar2 != (FPCGContext *)0x0)) {
      pUVar5 = GetComponent(pFVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return pUVar5;
    }
  }
LAB_149d4ef20:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  return (UPCGComponent *)0x0;
}

// GetExtents @ 149d4fdc0

TVector<double> * __cdecl
UPCGBlueprintHelpers::GetExtents(TVector<double> *__return_storage_ptr__,FPCGPoint *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = __real_3fe0000000000000;
  dVar4 = ((param_1->BoundsMax).field0_0x0._s_0.Z - (param_1->BoundsMin).field0_0x0._s_0.Z) *
          __real_3fe0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       ((param_1->BoundsMax).field0_0x0._s_0.X - (param_1->BoundsMin).field0_0x0._s_0.X) *
       __real_3fe0000000000000;
  dVar1 = (param_1->BoundsMax).field0_0x0._s_0.Y;
  dVar2 = (param_1->BoundsMin).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar1 - dVar2) * dVar3;
  return __return_storage_ptr__;
}

// GetInputData @ 149d50560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGData * __cdecl UPCGBlueprintHelpers::GetInputData(FPCGContext *param_1)

{
  UPCGComponent *this;
  UPCGData *pUVar1;
  
  this = GetComponent(param_1);
  if (this != (UPCGComponent *)0x0) {
    pUVar1 = UPCGComponent::GetInputPCGData(this);
    return pUVar1;
  }
  return (UPCGData *)0x0;
}

// GetInputDataWithContext @ 149d50590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGData * __cdecl
UPCGBlueprintHelpers::GetInputDataWithContext(FPCGBlueprintContextHandle *param_1)

{
  FPCGContextHandle *pFVar1;
  FPCGContext *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  UPCGComponent *this;
  UPCGData *pUVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  pTVar6 = (param_1->Handle).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_149d505c2;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    pFVar1 = (param_1->Handle).Object;
    if ((pFVar1 != (FPCGContextHandle *)0x0) &&
       (pFVar2 = pFVar1->Context, pFVar2 != (FPCGContext *)0x0)) {
      this = GetComponent(pFVar2);
      if (this != (UPCGComponent *)0x0) {
        pUVar5 = UPCGComponent::GetInputPCGData(this);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        return pUVar5;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return (UPCGData *)0x0;
    }
  }
LAB_149d505c2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  return (UPCGData *)0x0;
}

// GetInterpolatedPCGLandscapeLayerWeights @ 149d508f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FPCGLandscapeLayerWeight,TSizedDefaultAllocator<32>_> * __cdecl
UPCGBlueprintHelpers::GetInterpolatedPCGLandscapeLayerWeights
          (TArray<FPCGLandscapeLayerWeight,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UObject *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FWeakObjectPtr *pFVar8;
  UWorld *pUVar9;
  UPCGSubsystem *this;
  ALandscapeProxy *pAVar10;
  ULandscapeInfo *pUVar11;
  double *pdVar12;
  int iVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined4 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 uVar34;
  undefined1 auStackY_218 [32];
  FIdentityFunctor local_1e8 [8];
  TArray<FPCGLandscapeLayerWeight,TSizedDefaultAllocator<32>_> local_1e0;
  TIntPoint<int>_u_0 local_1d0;
  FString local_1c8;
  TArray<TWeakObjectPtr<ALandscapeProxy,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_1b8;
  FWeakObjectPtr *local_1a8;
  FSharedReferencer<1> local_1a0;
  TSharedPtr<FPCGLandscapeCacheEntry_const_,1> local_198;
  FWeakObjectPtr local_188;
  TVector<double> *local_180;
  UPCGLandscapeCache *local_178;
  TVector2<double>_u_0 local_170 [2];
  TBox<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if ((((param_1 == (UObject *)0x0) ||
       (local_180 = param_2, pUVar9 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1)
       , pUVar9 == (UWorld *)0x0)) ||
      (this = UPCGSubsystem::GetInstance(pUVar9), this == (UPCGSubsystem *)0x0)) ||
     (local_178 = UPCGSubsystem::GetLandscapeCache(this), local_178 == (UPCGLandscapeCache *)0x0)) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Math::TBox<double>::TBox<double>(&local_148,param_2,1);
    PCGHelpers::GetLandscapeProxies(&local_1b8,pUVar9,&local_148);
    uVar7 = _UNK_15061cc8c;
    uVar6 = _UNK_15061cc88;
    uVar5 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar4 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    iVar13 = local_1b8.ArrayNum;
    if (iVar13 == 0) {
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
      if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.AllocatorInstance.Data);
      }
    }
    else {
      local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8 = (FWeakObjectPtr *)(local_1b8.AllocatorInstance.Data + (longlong)iVar13 * 8);
      local_1c8.Data.ArrayNum = 0;
      local_1c8.Data.ArrayMax = 0;
      FVar14.Data = local_1b8.AllocatorInstance.Data;
      while( true ) {
        pFVar8 = local_1a8;
        if (local_1b8.ArrayNum != iVar13) {
          `TCheckedPointerIterator<TWeakObjectPtr<ALandscapeProxy,FWeakObjectPtr>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_1e8);
        }
        if ((FWeakObjectPtr *)FVar14.Data == pFVar8) break;
        local_188 = *(FWeakObjectPtr *)FVar14.Data;
        pAVar10 = (ALandscapeProxy *)FWeakObjectPtr::Get(&local_188);
        if (pAVar10 == (ALandscapeProxy *)0x0) {
LAB_149d50c90:
          FVar14.Data = FVar14.Data + 8;
        }
        else {
          pUVar11 = (ULandscapeInfo *)(**(code **)(pAVar10->_padding_ + 0x18))(&pAVar10->_padding_);
          if (pUVar11 != (ULandscapeInfo *)0x0) {
            pdVar12 = (double *)
                      (**(code **)(pAVar10->_padding_ + 0x20))(&pAVar10->_padding_,&local_148);
            dVar1 = pdVar12[2] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
            dVar20 = pdVar12[3] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
            dVar27 = *pdVar12 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
            dVar28 = pdVar12[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
            dVar17 = (local_180->field0_0x0)._s_0.Z - pdVar12[6];
            dVar2 = (local_180->field0_0x0)._s_0.X - pdVar12[4];
            dVar3 = (local_180->field0_0x0)._s_0.Y - pdVar12[5];
            uVar30 = SUB84(dVar3,0);
            uVar34 = (undefined4)((ulonglong)dVar3 >> 0x20);
            auVar31._8_4_ = uVar30;
            auVar31._0_8_ = dVar2;
            auVar31._12_4_ = uVar34;
            auVar26._8_4_ = uVar30;
            auVar26._0_8_ = dVar2;
            auVar26._12_4_ = uVar34;
            auVar25._8_4_ = SUB84(dVar28,0);
            auVar25._0_8_ = dVar27;
            auVar25._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
            auVar21._8_4_ = uVar30;
            auVar21._0_8_ = dVar2;
            auVar21._12_4_ = uVar34;
            auVar32._0_8_ = auVar31._8_8_ * dVar27 - dVar2 * dVar28;
            auVar32._8_8_ = dVar17 * dVar28 - auVar26._8_8_ * dVar1;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = dVar17;
            auVar22 = blendpd(auVar21,auVar22,2);
            auVar24._8_4_ = SUB84(dVar20,0);
            auVar24._0_8_ = dVar1;
            auVar24._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
            auVar26 = blendpd(auVar25,auVar24,2);
            auVar23._0_8_ = auVar22._0_8_ * dVar1 - dVar17 * auVar26._0_8_;
            auVar23._8_8_ = auVar22._8_8_ * dVar20 - auVar26._8_8_ * 0.0;
            auVar22 = blendpd(auVar32,auVar23,2);
            auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                            *(undefined1 (*) [16])(pdVar12 + 8));
            dVar17 = auVar32._8_8_ + auVar32._8_8_;
            dVar27 = auVar23._0_8_ + auVar23._0_8_;
            uVar30 = (undefined4)((ulonglong)dVar27 >> 0x20);
            auVar33._0_8_ = auVar22._0_8_ + auVar22._0_8_;
            auVar33._8_8_ = auVar22._8_8_ + auVar22._8_8_;
            auVar18._8_4_ = SUB84(dVar27,0);
            auVar18._0_8_ = dVar17;
            auVar18._12_4_ = uVar30;
            auVar29._8_4_ = SUB84(dVar27,0);
            auVar29._0_8_ = dVar17;
            auVar29._12_4_ = uVar30;
            auVar22 = blendpd(auVar29,auVar33,2);
            lVar15 = -(ulonglong)
                      ((double)CONCAT44(uVar5 & *(uint *)((longlong)pdVar12 + 0x44),
                                        uVar4 & *(uint *)(pdVar12 + 8)) <=
                      (double)(float)GlobalVectorConstants::SmallNumber.m128_u64[0]);
            lVar16 = -(ulonglong)
                      ((double)CONCAT44(uVar7 & *(uint *)((longlong)pdVar12 + 0x4c),
                                        uVar6 & *(uint *)(pdVar12 + 9)) <=
                      (double)(float)((ulonglong)GlobalVectorConstants::SmallNumber._0_8_ >> 0x20));
            dVar19 = __real_3ff0000000000000 / (double)pUVar11->ComponentSizeQuads;
            dVar17 = (double)CONCAT44(~(uint)((ulonglong)lVar15 >> 0x20) & auVar24._4_4_,
                                      ~(uint)lVar15 & auVar24._0_4_) *
                     (dVar17 * dVar20 + dVar2 + (auVar33._0_8_ * dVar28 - auVar18._8_8_ * dVar1));
            dVar1 = (double)CONCAT44(~(uint)((ulonglong)lVar16 >> 0x20) & auVar24._12_4_,
                                     ~(uint)lVar16 & auVar24._8_4_) *
                    (dVar27 * dVar20 + dVar3 +
                    (auVar22._0_8_ * dVar1 - auVar33._0_8_ * auVar26._0_8_));
            dVar20 = dVar19 * dVar17;
            dVar19 = dVar19 * dVar1;
            local_1d0._s_0.X =
                 (int)((longlong)ROUND((dVar20 + dVar20) - __real_3fe0000000000000) >> 1);
            local_1d0._s_0.Y =
                 (int)((longlong)ROUND((dVar19 + dVar19) - __real_3fe0000000000000) >> 1);
            UPCGLandscapeCache::GetCacheEntry
                      (local_178,&local_198,pUVar11,(TIntPoint<int> *)&local_1d0._s_0,pAVar10,true);
            if (local_198.Object == (FPCGLandscapeCacheEntry *)0x0) {
              ::FString::operator=
                        (&local_1c8,
                         L"Unable to get landscape layer weights because the cache entry is not available."
                        );
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_198.SharedReferenceCount.ReferenceController);
              goto LAB_149d50c90;
            }
            local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1e0.ArrayNum = 0;
            local_1e0.ArrayMax = 0;
            local_170[0]._0_8_ = dVar17 - (double)(pUVar11->ComponentSizeQuads * local_1d0._s_0.X);
            local_170[0]._8_8_ = dVar1 - (double)(pUVar11->ComponentSizeQuads * local_1d0._s_0.Y);
            FPCGLandscapeCacheEntry::GetInterpolatedLayerWeights
                      (local_198.Object,(TVector2<double> *)&local_170[0]._s_0,&local_1e0);
            local_1a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            local_198.Object = (FPCGLandscapeCacheEntry *)0x0;
            local_1a8 = (FWeakObjectPtr *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&local_198.SharedReferenceCount,&local_1a0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1a0.ReferenceController);
            AlgoImpl::
            IntroSortInternal<FPCGLandscapeLayerWeight,int,FIdentityFunctor,TDereferenceWrapper<FPCGLandscapeLayerWeight,_UPCGBlueprintHelpers::GetInterpolatedPCGLandscapeLayerWeights_::__l18::<lambda_1>_>_>
                      ((FPCGLandscapeLayerWeight *)local_1e0.AllocatorInstance.Data,
                       local_1e0.ArrayNum,local_1e8[0],(<lambda_1> *)local_1e8);
            (__return_storage_ptr__->AllocatorInstance).Data = local_1e0.AllocatorInstance.Data;
            __return_storage_ptr__->ArrayNum = local_1e0.ArrayNum;
            __return_storage_ptr__->ArrayMax = local_1e0.ArrayMax;
            local_1e0.ArrayNum = 0;
            local_1e0.ArrayMax = 0;
            local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_198.SharedReferenceCount.ReferenceController);
            goto LAB_149d50d9b;
          }
          ::FString::operator=
                    (&local_1c8,
                     L"Unable to get landscape layer weights because the landscape info is not available (landscape not registered yet?"
                    );
          FVar14.Data = FVar14.Data + 8;
        }
      }
      iVar13 = local_1c8.Data.ArrayNum + -1;
      if (local_1c8.Data.ArrayNum == 0) {
        iVar13 = 0;
      }
      if ((iVar13 != 0) && (2 < (byte)LogPCG._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
LAB_149d50d9b:
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetLocalCenter @ 149d516f0

TVector<double> * __cdecl
UPCGBlueprintHelpers::GetLocalCenter(TVector<double> *__return_storage_ptr__,FPCGPoint *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = __real_3fe0000000000000;
  dVar4 = ((param_1->BoundsMin).field0_0x0._s_0.Z + (param_1->BoundsMax).field0_0x0._s_0.Z) *
          __real_3fe0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       ((param_1->BoundsMin).field0_0x0._s_0.X + (param_1->BoundsMax).field0_0x0._s_0.X) *
       __real_3fe0000000000000;
  dVar1 = (param_1->BoundsMin).field0_0x0._s_0.Y;
  dVar2 = (param_1->BoundsMax).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar1 + dVar2) * dVar3;
  return __return_storage_ptr__;
}

// GetOriginalComponent @ 149d53680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGComponent * __cdecl UPCGBlueprintHelpers::GetOriginalComponent(FPCGContext *param_1)

{
  int iVar1;
  IPCGGraphExecutionSource *pIVar2;
  bool bVar3;
  UPCGComponent *pUVar4;
  UClass *pUVar5;
  UPCGComponent *pUVar6;
  APCGPartitionActor *this;
  
  if (((((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
       (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar3)) ||
      (pIVar2 = (param_1->ExecutionSource).InterfaceInstance,
      pIVar2 == (IPCGGraphExecutionSource *)0x0)) ||
     (pUVar4 = (UPCGComponent *)(**(code **)((longlong)*pIVar2 + 8))(),
     pUVar4 == (UPCGComponent *)0x0)) {
    return (UPCGComponent *)0x0;
  }
  pUVar5 = Z_Construct_UClass_UPCGComponent_NoRegister();
  iVar1 = (int)pUVar5->_padding_;
  if (*(int *)(pUVar4->_padding_ + 0x38) < iVar1) {
    return (UPCGComponent *)0x0;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_) {
    return (UPCGComponent *)0x0;
  }
  this = (APCGPartitionActor *)pUVar4->_padding_;
  if (this != (APCGPartitionActor *)0x0) {
    pUVar5 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_149d53718;
  }
  this = (APCGPartitionActor *)0x0;
LAB_149d53718:
  if (this == (APCGPartitionActor *)0x0) {
    return pUVar4;
  }
  pUVar6 = APCGPartitionActor::GetOriginalComponent(this,pUVar4);
  if (pUVar6 != (UPCGComponent *)0x0) {
    return pUVar6;
  }
  return pUVar4;
}

// GetOriginalComponentWithContext @ 149d53750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGComponent * __cdecl
UPCGBlueprintHelpers::GetOriginalComponentWithContext(FPCGBlueprintContextHandle *param_1)

{
  FPCGContextHandle *pFVar1;
  FPCGContext *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  UPCGComponent *pUVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  pTVar6 = (param_1->Handle).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_149d53780;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    pFVar1 = (param_1->Handle).Object;
    if ((pFVar1 != (FPCGContextHandle *)0x0) &&
       (pFVar2 = pFVar1->Context, pFVar2 != (FPCGContext *)0x0)) {
      pUVar5 = GetOriginalComponent(pFVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return pUVar5;
    }
  }
LAB_149d53780:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  return (UPCGComponent *)0x0;
}

// GetPrivateStaticClass @ 149d541e0

UClass * __cdecl UPCGBlueprintHelpers::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBlueprintHelpers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBlueprintHelpers",
               &Z_Registration_Info_UClass_UPCGBlueprintHelpers.InnerSingleton,
               StaticRegisterNativesUPCGBlueprintHelpers,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGBlueprintHelpers>,
               InternalVTableHelperCtorCaller<UPCGBlueprintHelpers>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBlueprintHelpers.InnerSingleton;
}

// GetRandomStreamFromPoint @ 149d55110

FRandomStream __cdecl
UPCGBlueprintHelpers::GetRandomStreamFromPoint
          (FPCGPoint *param_1,UPCGSettings *param_2,UPCGComponent *param_3)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  longlong in_R9;
  
  uVar3 = *(uint *)&param_2->field_0xc4;
  plVar2 = (longlong *)(in_R9 + 0xc0);
  if (in_R9 == 0) {
    plVar2 = (longlong *)0x0;
  }
  if (param_3 == (UPCGComponent *)0x0) {
    if (plVar2 != (longlong *)0x0) {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))();
      iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
      uVar3 = iVar1 * 0x45c282b + 0x1b0cb1bbU ^ uVar3 * 0xbb38435 + 0x3619636b;
    }
  }
  else {
    uVar3 = uVar3 * 0xbb38435 + 0x3619636b;
    if (plVar2 == (longlong *)0x0) {
      uVar3 = (int)param_3->_padding_ * 0x45c282b + 0x1b0cb1bbU ^ uVar3;
    }
    else {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))();
      iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
      uVar3 = (int)param_3->_padding_ * 0x45c282b + 0x1b0cb1bbU ^ iVar1 * 0x211f54f + 0x1b0cb1a7U ^
              uVar3;
    }
  }
  *(uint *)(param_1->Transform).Rotation.XY.m128d_f64 = uVar3;
  *(uint *)((longlong)(param_1->Transform).Rotation.XY.m128d_f64 + 4) = uVar3;
  return (FRandomStream)param_1;
}

// GetRandomStreamFromTwoPoints @ 149d552c0

FRandomStream __cdecl
UPCGBlueprintHelpers::GetRandomStreamFromTwoPoints
          (FPCGPoint *param_1,FPCGPoint *param_2,UPCGSettings *param_3,UPCGComponent *param_4)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  longlong in_stack_00000028;
  
  plVar2 = (longlong *)(in_stack_00000028 + 0xc0);
  if (in_stack_00000028 == 0) {
    plVar2 = (longlong *)0x0;
  }
  uVar3 = param_2->Seed * 0xbb38435 + 0x3619636bU ^
          *(int *)&param_3->field_0xc4 * 0x45c282b + 0x1b0cb1bbU;
  if (param_4 == (UPCGComponent *)0x0) {
    if (plVar2 != (longlong *)0x0) {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))();
      iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
      uVar3 = iVar1 * 0x45c282b + 0x1b0cb1bbU ^ uVar3 * 0xbb38435 + 0x3619636b;
    }
  }
  else {
    uVar3 = uVar3 * 0xbb38435 + 0x3619636b;
    if (plVar2 == (longlong *)0x0) {
      uVar3 = (int)param_4->_padding_ * 0x45c282b + 0x1b0cb1bbU ^ uVar3;
    }
    else {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))();
      iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
      uVar3 = (int)param_4->_padding_ * 0x45c282b + 0x1b0cb1bbU ^ iVar1 * 0x211f54f + 0x1b0cb1a7U ^
              uVar3;
    }
  }
  *(uint *)(param_1->Transform).Rotation.XY.m128d_f64 = uVar3;
  *(uint *)((longlong)(param_1->Transform).Rotation.XY.m128d_f64 + 4) = uVar3;
  return (FRandomStream)param_1;
}

// GetSettings @ 149d55660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSettings * __cdecl UPCGBlueprintHelpers::GetSettings(FPCGContext *param_1)

{
  UPCGNode *this;
  bool bVar1;
  UPCGSettings *pUVar2;
  FObjectPtr_u_0 *pFVar3;
  UClass *pUVar4;
  FObjectPtr_u_0 local_res8;
  
  pUVar2 = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
  if (pUVar2 != (UPCGSettings *)0x0) {
    return pUVar2;
  }
  this = param_1->Node;
  if ((this != (UPCGNode *)0x0) &&
     (pUVar2 = UPCGNode::GetSettings(this), pUVar2 != (UPCGSettings *)0x0)) {
    pUVar2 = UPCGNode::GetSettings(this);
    pUVar2 = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar2);
    return pUVar2;
  }
  pFVar3 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSettings>_::__l2::<lambda_1>_>
                     (&(param_1->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
  if (pFVar3 != (FObjectPtr_u_0 *)0x0) {
    local_res8 = (FObjectPtr_u_0)pFVar3->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSettings *)local_res8.Handle == (UPCGSettings *)0x0) {
        return (UPCGSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8.Handle);
    }
    if ((UPCGSettings *)local_res8.Handle != (UPCGSettings *)0x0) {
      pUVar4 = Z_Construct_UClass_UPCGSettings_NoRegister();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar4);
      if (bVar1) {
        return (UPCGSettings *)local_res8.Handle;
      }
    }
  }
  return (UPCGSettings *)0x0;
}

// GetSettingsWithContext @ 149d55740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSettings * __cdecl
UPCGBlueprintHelpers::GetSettingsWithContext(FPCGBlueprintContextHandle *param_1)

{
  FPCGContextHandle *pFVar1;
  FPCGContext *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  UPCGSettings *pUVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  pTVar6 = (param_1->Handle).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_149d55770;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    pFVar1 = (param_1->Handle).Object;
    if ((pFVar1 != (FPCGContextHandle *)0x0) &&
       (pFVar2 = pFVar1->Context, pFVar2 != (FPCGContext *)0x0)) {
      pUVar5 = GetSettings(pFVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return pUVar5;
    }
  }
LAB_149d55770:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  return (UPCGSettings *)0x0;
}

// GetTargetActor @ 149d55930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AActor * __cdecl UPCGBlueprintHelpers::GetTargetActor(FPCGContext *param_1,UPCGSpatialData *param_2)

{
  int iVar1;
  IPCGGraphExecutionSource *pIVar2;
  bool bVar3;
  UObject *pUVar4;
  AActor *pAVar5;
  longlong lVar6;
  UClass *pUVar7;
  
  if (param_2 != (UPCGSpatialData *)0x0) {
    pUVar4 = FWeakObjectPtr::Get(&(param_2->TargetActor).WeakPtr);
    if (pUVar4 != (UObject *)0x0) {
      pAVar5 = (AActor *)FWeakObjectPtr::Get(&(param_2->TargetActor).WeakPtr);
      return pAVar5;
    }
  }
  if ((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource);
    if ((bVar3) &&
       (pIVar2 = (param_1->ExecutionSource).InterfaceInstance,
       pIVar2 != (IPCGGraphExecutionSource *)0x0)) {
      lVar6 = (**(code **)((longlong)*pIVar2 + 8))();
      if (lVar6 != 0) {
        pUVar7 = UPCGComponent::StaticClass();
        iVar1 = (int)pUVar7->_padding_;
        if ((iVar1 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar7->_padding_)) {
          return *(AActor **)(lVar6 + 0xa8);
        }
      }
    }
  }
  return (AActor *)0x0;
}

// GetTargetActorWithContext @ 149d55940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AActor * __cdecl
UPCGBlueprintHelpers::GetTargetActorWithContext
          (FPCGBlueprintContextHandle *param_1,UPCGSpatialData *param_2)

{
  FPCGContextHandle *pFVar1;
  FPCGContext *this;
  atomic<int> aVar2;
  atomic<int> aVar3;
  AActor *pAVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = (param_1->Handle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_149d55970;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pFVar1 = (param_1->Handle).Object;
    if ((pFVar1 != (FPCGContextHandle *)0x0) && (this = pFVar1->Context, this != (FPCGContext *)0x0)
       ) {
      pAVar4 = FPCGContext::GetTargetActor(this,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      return pAVar4;
    }
  }
LAB_149d55970:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  return (AActor *)0x0;
}

// GetTaskId @ 149d559e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

long64 __cdecl UPCGBlueprintHelpers::GetTaskId(FPCGContext *param_1)

{
  return param_1->TaskId;
}

// GetTaskIdWithContext @ 149d559f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

long64 __cdecl UPCGBlueprintHelpers::GetTaskIdWithContext(FPCGBlueprintContextHandle *param_1)

{
  FPCGContextHandle *pFVar1;
  FPCGContext *pFVar2;
  ulong64 uVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  pTVar6 = (param_1->Handle).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar6->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_149d55a20;
      }
      LOCK();
      aVar5 = pTVar6->SharedReferenceCount;
      bVar7 = aVar4 == aVar5;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar7);
    pFVar1 = (param_1->Handle).Object;
    if ((pFVar1 != (FPCGContextHandle *)0x0) &&
       (pFVar2 = pFVar1->Context, pFVar2 != (FPCGContext *)0x0)) {
      uVar3 = pFVar2->TaskId;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return uVar3;
    }
  }
LAB_149d55a20:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  return -1;
}

// GetTransformedBounds @ 149d55b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBox<double> * __cdecl
UPCGBlueprintHelpers::GetTransformedBounds(TBox<double> *__return_storage_ptr__,FPCGPoint *param_1)

{
  TMatrix<double> *pTVar1;
  undefined1 auStack_f8 [32];
  TVector<double>_u_0 local_d8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  undefined1 local_a8;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_d8._s_0.X = (param_1->BoundsMin).field0_0x0._s_0.X;
  local_d8._s_0.Y = (param_1->BoundsMin).field0_0x0._s_0.Y;
  local_d8._s_0.Z = (param_1->BoundsMin).field0_0x0._s_0.Z;
  local_a8 = 1;
  local_c0 = (param_1->BoundsMax).field0_0x0._s_0.X;
  dStack_b8 = (param_1->BoundsMax).field0_0x0._s_0.Y;
  local_b0 = (param_1->BoundsMax).field0_0x0._s_0.Z;
  pTVar1 = UE::Math::TTransform<double>::ToMatrixWithScale(&param_1->Transform,&local_98);
  UE::Math::TBox<double>::TransformBy((TBox<double> *)&local_d8._s_0,__return_storage_ptr__,pTVar1);
  return __return_storage_ptr__;
}

// RefreshPCGRuntimeComponent @ 149d60df0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UPCGBlueprintHelpers::RefreshPCGRuntimeComponent(UPCGComponent *param_1,bool param_2)

{
  UPCGSubsystem *this;
  
  this = UPCGSubsystem::GetSubsystemForCurrentWorld();
  if (this != (UPCGSubsystem *)0x0) {
    if (param_2) {
      IPCGBaseSubsystem::FlushCache((IPCGBaseSubsystem *)&this->_padding_);
    }
    UPCGSubsystem::RefreshRuntimeGenComponent(this,param_1,GenerationGrid);
  }
  return;
}

// SetExtents @ 149d633f0

void __cdecl UPCGBlueprintHelpers::SetExtents(FPCGPoint *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = ((param_1->BoundsMin).field0_0x0._s_0.X + (param_1->BoundsMax).field0_0x0._s_0.X) *
          __real_3fe0000000000000;
  dVar4 = ((param_1->BoundsMin).field0_0x0._s_0.Y + (param_1->BoundsMax).field0_0x0._s_0.Y) *
          __real_3fe0000000000000;
  dVar3 = ((param_1->BoundsMin).field0_0x0._s_0.Z + (param_1->BoundsMax).field0_0x0._s_0.Z) *
          __real_3fe0000000000000;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  (param_1->BoundsMin).field0_0x0._s_0.X = dVar5 - (param_2->field0_0x0)._s_0.X;
  (param_1->BoundsMin).field0_0x0._s_0.Y = dVar4 - dVar1;
  (param_1->BoundsMin).field0_0x0._s_0.Z = dVar3 - dVar2;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  (param_1->BoundsMax).field0_0x0._s_0.Y = dVar4 + (param_2->field0_0x0)._s_0.Y;
  (param_1->BoundsMax).field0_0x0._s_0.Z = dVar3 + dVar1;
  (param_1->BoundsMax).field0_0x0._s_0.X = dVar5 + dVar2;
  return;
}

// SetLocalCenter @ 149d63710

void __cdecl UPCGBlueprintHelpers::SetLocalCenter(FPCGPoint *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = (param_2->field0_0x0)._s_0.X -
          ((param_1->BoundsMin).field0_0x0._s_0.X + (param_1->BoundsMax).field0_0x0._s_0.X) *
          __real_3fe0000000000000;
  dVar3 = (param_2->field0_0x0)._s_0.Z -
          ((param_1->BoundsMin).field0_0x0._s_0.Z + (param_1->BoundsMax).field0_0x0._s_0.Z) *
          __real_3fe0000000000000;
  dVar4 = (param_2->field0_0x0)._s_0.Y -
          ((param_1->BoundsMin).field0_0x0._s_0.Y + (param_1->BoundsMax).field0_0x0._s_0.Y) *
          __real_3fe0000000000000;
  dVar1 = (param_1->BoundsMin).field0_0x0._s_0.Y;
  (param_1->BoundsMin).field0_0x0._s_0.X = dVar5 + (param_1->BoundsMin).field0_0x0._s_0.X;
  dVar2 = (param_1->BoundsMin).field0_0x0._s_0.Z;
  (param_1->BoundsMin).field0_0x0._s_0.Y = dVar4 + dVar1;
  (param_1->BoundsMin).field0_0x0._s_0.Z = dVar3 + dVar2;
  dVar1 = (param_1->BoundsMax).field0_0x0._s_0.Y;
  dVar2 = (param_1->BoundsMax).field0_0x0._s_0.Z;
  (param_1->BoundsMax).field0_0x0._s_0.X = dVar5 + (param_1->BoundsMax).field0_0x0._s_0.X;
  (param_1->BoundsMax).field0_0x0._s_0.Y = dVar4 + dVar1;
  (param_1->BoundsMax).field0_0x0._s_0.Z = dVar3 + dVar2;
  return;
}

// SetSeedFromPosition @ 149d64410

void __cdecl UPCGBlueprintHelpers::SetSeedFromPosition(FPCGPoint *param_1)

{
  param_1->Seed =
       (int)(param_1->Transform).Translation.XY.m128d_f64[0] * 0xbb38435 + 0x3619636bU ^
       (int)(param_1->Transform).Translation.XY.m128d_f64[1] * 0x45c282b + 0x1b0cb1bbU ^
       (int)(param_1->Transform).Translation.ZW.m128d_f64[0] * 0x211f54f + 0x1b0cb1a7U;
  return;
}

// StaticRegisterNativesUPCGBlueprintHelpers @ 149d66190

void __cdecl UPCGBlueprintHelpers::StaticRegisterNativesUPCGBlueprintHelpers(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x1f;
  local_18.DataPtr = Z_Construct_UClass_UPCGBlueprintHelpers_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ThrowBlueprintException @ 149d664b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UPCGBlueprintHelpers::ThrowBlueprintException(FText *param_1)

{
  code *pcVar1;
  bool bVar2;
  FFrame *pFVar3;
  FFrame *pFVar4;
  undefined1 local_res10 [24];
  FBlueprintExceptionInfo local_28;
  
  pFVar3 = FFrame::GetThreadLocalTopStackFrame();
  if ((pFVar3 == (FFrame *)0x0) ||
     (pFVar3 = FFrame::GetThreadLocalTopStackFrame(), pFVar3->Object == (UObject *)0x0)) {
    if (1 < (byte)LogPCG._0_1_) {
      FText::ToString(param_1);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      return;
    }
  }
  else {
    local_28.Description.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(param_1->TextData).Reference;
    local_28.EventType = FatalError;
    if (local_28.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_28.Description.field0_0x0.TypedValue.TextData.Reference + 8))
                (local_28.Description.field0_0x0.TypedValue.TextData.Reference,local_res10);
    }
    local_28.Description.field0_0x0.TypedValue.Flags = param_1->Flags;
    if ((local_28.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar3 = FFrame::GetThreadLocalTopStackFrame();
    pFVar4 = FFrame::GetThreadLocalTopStackFrame();
    FBlueprintCoreDelegates::ThrowScriptException(pFVar4->Object,pFVar3,&local_28);
    if (local_28.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_28.Description.field0_0x0.TypedValue.TextData.Reference +
                  0x10))();
      return;
    }
  }
  return;
}

// execComputeSeedFromPosition @ 149d698d0

void __cdecl
UPCGBlueprintHelpers::execComputeSeedFromPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double *pdVar2;
  double local_28 [4];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  pdVar2 = local_28;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar2 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(uint *)param_3 =
       (int)pdVar2[1] * 0x45c282b + 0x1b0cb1bbU ^ (int)pdVar2[2] * 0x211f54f + 0x1b0cb1a7U ^
       (int)*pdVar2 * 0xbb38435 + 0x3619636bU;
  return;
}

// execCreatePCGDataFromActor @ 149d699a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UPCGBlueprintHelpers::execCreatePCGDataFromActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPCGData *pUVar2;
  int local_res10 [2];
  AActor *local_res18;
  
  local_res18 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = UPCGComponent::CreateActorPCGData(local_res18,(UPCGComponent *)0x0,local_res10[0] != 0);
  *(UPCGData **)param_3 = pUVar2;
  return;
}

// execDuplicateData @ 149d69a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UPCGBlueprintHelpers::execDuplicateData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  FPCGContext *pFVar3;
  undefined1 auStack_2b8 [32];
  int local_298 [2];
  longlong *local_290;
  FPCGContext local_288;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  uVar2 = 0;
  local_290 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_290,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_290);
  }
  FPCGContext::FPCGContext(&local_288);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_288,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_288);
  }
  local_298[0] = 0;
  pFVar3 = &local_288;
  if ((FPCGContext *)param_2->MostRecentPropertyAddress != (FPCGContext *)0x0) {
    pFVar3 = (FPCGContext *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_298,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_298);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_290 != (longlong *)0x0) {
    uVar2 = (**(code **)(*local_290 + 0x310))(local_290,pFVar3,local_298[0] != 0);
  }
  *(undefined8 *)param_3 = uVar2;
  FPCGContext::~FPCGContext(&local_288);
  return;
}

// execDuplicateDataWithContext @ 149d69bf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGBlueprintHelpers::execDuplicateDataWithContext(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  int iVar3;
  FProperty *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  atomic<int> aVar7;
  atomic<int> aVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  longlong *plVar11;
  bool bVar12;
  int local_res10 [2];
  longlong *local_res18 [2];
  longlong local_38;
  longlong *plStack_30;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_res18[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  plVar11 = &local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar11 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar5 = (TReferenceControllerBase<1> *)plVar11[1];
  pTVar10 = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar7 = pTVar5->SharedReferenceCount;
    do {
      pTVar10 = pTVar9;
      if (aVar7 == (atomic<int>)0x0) goto LAB_149d69d11;
      LOCK();
      aVar8 = pTVar5->SharedReferenceCount;
      bVar12 = aVar7 == aVar8;
      if (bVar12) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
        aVar8 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar8;
    } while (!bVar12);
    pTVar10 = pTVar5;
    if ((*plVar11 != 0) && (lVar6 = *(longlong *)(*plVar11 + 0x10), lVar6 != 0)) {
      if (local_res18[0] != (longlong *)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)
                 (**(code **)(*local_res18[0] + 0x310))(local_res18[0],lVar6,local_res10[0] != 0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      goto LAB_149d69d35;
    }
  }
LAB_149d69d11:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
LAB_149d69d35:
  *(TReferenceControllerBase<1> **)param_3 = pTVar9;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_30 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plStack_30 + 8))(plStack_30,1);
    }
  }
  return;
}

// execFlushPCGCache @ 149d69db0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UPCGBlueprintHelpers::execFlushPCGCache(UObject *param_1,FFrame *param_2,void *param_3)

{
  UPCGSubsystem *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = UPCGSubsystem::GetSubsystemForCurrentWorld();
  if (pUVar1 != (UPCGSubsystem *)0x0) {
    IPCGBaseSubsystem::FlushCache((IPCGBaseSubsystem *)&pUVar1->_padding_);
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetActorBoundsPCG @ 149d69f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UPCGBlueprintHelpers::execGetActorBoundsPCG(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  bool bVar3;
  APCGPartitionActor *this;
  UClass *pUVar4;
  TBox<double> *pTVar5;
  APCGPartitionActor *pAVar6;
  APCGPartitionActor *pAVar7;
  APCGPartitionActor *pAVar8;
  bool bVar9;
  undefined1 auStack_e8 [32];
  <lambda_1> local_c8;
  int local_b8 [2];
  APCGPartitionActor *local_b0;
  APCGPartitionActor *local_a8;
  TVector<double>_u_0 local_a0;
  double dStack_88;
  double local_80;
  double dStack_78;
  undefined8 local_70;
  TBox<double> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pAVar7 = (APCGPartitionActor *)0x0;
  pAVar8 = (APCGPartitionActor *)0x0;
  local_b0 = (APCGPartitionActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_b8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  this = local_b0;
  bVar9 = local_b8[0] != 0;
  local_a0._s_0.X = 0.0;
  local_a0._s_0.Y = 0.0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_70 = 0;
  local_a0._s_0.Z = 0.0;
  dStack_88 = 0.0;
  local_80 = 0.0;
  dStack_78 = 0.0;
  if (local_b0 == (APCGPartitionActor *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    goto LAB_149d6a19a;
  }
  pUVar4 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
     (pAVar6 = this,
     (longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
     &pUVar4->_padding_)) {
    pAVar6 = pAVar7;
  }
  if (pAVar6 != (APCGPartitionActor *)0x0) {
    pTVar5 = APCGPartitionActor::GetFixedBounds(pAVar6,&local_68);
    local_a0._s_0.X = (pTVar5->Min).field0_0x0._s_0.X;
    local_a0._s_0.Y = (pTVar5->Min).field0_0x0._s_0.Y;
    local_a0._s_0.Z = (pTVar5->Min).field0_0x0._s_0.Z;
    dStack_88 = (pTVar5->Max).field0_0x0._s_0.X;
    local_80 = (pTVar5->Max).field0_0x0._s_0.Y;
    dStack_78 = (pTVar5->Max).field0_0x0._s_0.Z;
    local_70._0_1_ = pTVar5->IsValid;
    local_70._1_1_ = pTVar5->Pad[0];
    local_70._2_1_ = pTVar5->Pad[1];
    local_70._3_1_ = pTVar5->Pad[2];
    local_70._4_1_ = pTVar5->Pad[3];
    local_70._5_1_ = pTVar5->Pad[4];
    local_70._6_1_ = pTVar5->Pad[5];
    local_70._7_1_ = pTVar5->Pad[6];
    goto LAB_149d6a19a;
  }
  pAVar6 = (APCGPartitionActor *)Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar6 != (APCGPartitionActor *)0x0) goto LAB_149d6a0c1;
  }
  else {
    pAVar8 = pAVar7;
    if (pAVar6 != (APCGPartitionActor *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pAVar6);
LAB_149d6a0c1:
      pUVar4 = Z_Construct_UClass_UActorComponent_NoRegister();
      pAVar8 = pAVar7;
      if (pUVar4 != (UClass *)0x0) {
        iVar1 = (int)pUVar4->_padding_;
        if (((int)pAVar6->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pAVar6->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pAVar8 = pAVar6;
        }
      }
    }
  }
  pAVar7 = (APCGPartitionActor *)Z_Construct_UClass_UActorComponent_NoRegister();
  local_c8.Box = (TBox<double> *)&local_a0;
  local_c8.bIgnorePCGCreatedComponents = bVar9;
  local_c8.bNonColliding = true;
  local_a8 = pAVar6;
  if (pAVar8 == pAVar7) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar6 != (APCGPartitionActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar6);
    }
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,1,1,_PCGHelpers::GetActorBounds_::__l10::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&local_a8,&local_c8);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar6 != (APCGPartitionActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar6);
    }
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,0,1,_PCGHelpers::GetActorBounds_::__l10::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&local_a8,&local_c8);
  }
LAB_149d6a19a:
  *(double *)param_3 = local_a0._s_0.X;
  *(double *)((longlong)param_3 + 8) = local_a0._s_0.Y;
  *(double *)((longlong)param_3 + 0x10) = local_a0._s_0.Z;
  *(double *)((longlong)param_3 + 0x18) = dStack_88;
  *(double *)((longlong)param_3 + 0x20) = local_80;
  *(double *)((longlong)param_3 + 0x28) = dStack_78;
  *(undefined8 *)((longlong)param_3 + 0x30) = local_70;
  return;
}

// execGetActorData @ 149d6a1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UPCGBlueprintHelpers::execGetActorData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPCGComponent *this;
  UPCGData *pUVar2;
  FPCGContext *pFVar3;
  undefined1 auStack_298 [32];
  FPCGContext local_278;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_298;
  FPCGContext::FPCGContext(&local_278);
  pUVar2 = (UPCGData *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_278,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_278);
  }
  pFVar3 = &local_278;
  if ((FPCGContext *)param_2->MostRecentPropertyAddress != (FPCGContext *)0x0) {
    pFVar3 = (FPCGContext *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetComponent(pFVar3);
  if (this != (UPCGComponent *)0x0) {
    pUVar2 = UPCGComponent::GetActorPCGData(this);
  }
  *(UPCGData **)param_3 = pUVar2;
  FPCGContext::~FPCGContext(&local_278);
  return;
}

// execGetActorDataWithContext @ 149d6a2e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGBlueprintHelpers::execGetActorDataWithContext(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  UPCGData *pUVar4;
  FPCGContext *pFVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  UPCGComponent *this;
  UPCGData *pUVar8;
  longlong *plVar9;
  UPCGData *pUVar10;
  bool bVar11;
  longlong local_18;
  longlong *plStack_10;
  
  pUVar8 = (UPCGData *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  plVar9 = &local_18;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar9 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = (UPCGData *)plVar9[1];
  pUVar10 = pUVar4;
  if (pUVar4 != (UPCGData *)0x0) {
    aVar6 = *(atomic<int> *)&pUVar4->_padding_;
    do {
      pUVar10 = pUVar8;
      if (aVar6 == (atomic<int>)0x0) goto LAB_149d6a382;
      LOCK();
      aVar7 = *(atomic<int> *)&pUVar4->_padding_;
      bVar11 = aVar6 == aVar7;
      if (bVar11) {
        *(atomic<int> *)&pUVar4->_padding_ = (atomic<int>)((int)aVar6 + 1);
        aVar7 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar7;
    } while (!bVar11);
    pUVar10 = pUVar4;
    if ((*plVar9 != 0) && (pFVar5 = *(FPCGContext **)(*plVar9 + 0x10), pFVar5 != (FPCGContext *)0x0)
       ) {
      this = GetComponent(pFVar5);
      if (this != (UPCGComponent *)0x0) {
        pUVar8 = UPCGComponent::GetActorPCGData(this);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pUVar4);
      goto LAB_149d6a3a6;
    }
  }
LAB_149d6a382:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pUVar10);
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
LAB_149d6a3a6:
  *(UPCGData **)param_3 = pUVar8;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_10 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_10 + 8))(plStack_10,1);
    }
  }
  return;
}

// execGetActorLocalBoundsPCG @ 149d6a420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UPCGBlueprintHelpers::execGetActorLocalBoundsPCG(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auStack_78 [32];
  int local_58 [2];
  AActor *local_50;
  TVector<double>_u_0 local_48;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_50 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_58[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PCGHelpers::GetActorLocalBounds((TBox<double> *)&local_48._s_0,local_50,local_58[0] != 0);
  *(double *)param_3 = local_48._s_0.X;
  *(double *)((longlong)param_3 + 8) = local_48._s_0.Y;
  *(double *)((longlong)param_3 + 0x10) = local_48._s_0.Z;
  *(undefined8 *)((longlong)param_3 + 0x18) = uStack_30;
  *(undefined8 *)((longlong)param_3 + 0x20) = local_28;
  *(undefined8 *)((longlong)param_3 + 0x28) = uStack_20;
  *(undefined8 *)((longlong)param_3 + 0x30) = local_18;
  return;
}

// execGetComponent @ 149d6aab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UPCGBlueprintHelpers::execGetComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPCGComponent *pUVar2;
  FPCGContext *pFVar3;
  undefined1 auStack_298 [32];
  FPCGContext local_278;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_298;
  FPCGContext::FPCGContext(&local_278);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_278,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_278);
  }
  pFVar3 = &local_278;
  if ((FPCGContext *)param_2->MostRecentPropertyAddress != (FPCGContext *)0x0) {
    pFVar3 = (FPCGContext *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetComponent(pFVar3);
  *(UPCGComponent **)param_3 = pUVar2;
  FPCGContext::~FPCGContext(&local_278);
  return;
}

// execGetComponentWithContext @ 149d6ab90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGBlueprintHelpers::execGetComponentWithContext(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  UPCGComponent *pUVar4;
  FPCGContext *pFVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  UPCGComponent *pUVar8;
  longlong *plVar9;
  UPCGComponent *pUVar10;
  bool bVar11;
  longlong local_18;
  longlong *plStack_10;
  
  pUVar8 = (UPCGComponent *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  plVar9 = &local_18;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar9 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = (UPCGComponent *)plVar9[1];
  pUVar10 = pUVar4;
  if (pUVar4 != (UPCGComponent *)0x0) {
    aVar6 = *(atomic<int> *)&pUVar4->_padding_;
    do {
      pUVar10 = pUVar8;
      if (aVar6 == (atomic<int>)0x0) goto LAB_149d6ac32;
      LOCK();
      aVar7 = *(atomic<int> *)&pUVar4->_padding_;
      bVar11 = aVar6 == aVar7;
      if (bVar11) {
        *(atomic<int> *)&pUVar4->_padding_ = (atomic<int>)((int)aVar6 + 1);
        aVar7 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar7;
    } while (!bVar11);
    pUVar10 = pUVar4;
    if ((*plVar9 != 0) && (pFVar5 = *(FPCGContext **)(*plVar9 + 0x10), pFVar5 != (FPCGContext *)0x0)
       ) {
      pUVar8 = GetComponent(pFVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pUVar4);
      goto LAB_149d6ac56;
    }
  }
LAB_149d6ac32:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pUVar10);
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
LAB_149d6ac56:
  *(UPCGComponent **)param_3 = pUVar8;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_10 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_10 + 8))(plStack_10,1);
    }
  }
  return;
}

// execGetExtents @ 149d6b070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UPCGBlueprintHelpers::execGetExtents(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_108 [32];
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined1 local_a8 [16];
  double local_98;
  double dStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_88 = 0x3f800000;
  local_d8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_b8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_b0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar8 = (uint)__xmm_80000000000000008000000000000000;
  uVar9 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_98 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_90 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_78 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar9,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar8);
  local_80 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar9,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar8);
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_60 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_38 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_30 = _UNK_150689688;
  uStack_70 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                             0x20) ^ uVar9,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar8);
  local_58 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_28 = 0x3f000000;
  local_20 = 0xffffffffffffffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  pdVar7 = &local_e8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar7 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar4 = pdVar7[0x11];
  dVar3 = pdVar7[0x12];
  dVar5 = pdVar7[0xe];
  dVar6 = pdVar7[0xf];
  *(double *)param_3 = (pdVar7[0x10] - pdVar7[0xd]) * __real_3fe0000000000000;
  dVar3 = (dVar3 - dVar6) * _UNK_150689678;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (dVar4 - dVar5) * ___xmm_3fe00000000000003fe0000000000000;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_3 + 8) = auVar2;
  return;
}

// execGetInputData @ 149d6b420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UPCGBlueprintHelpers::execGetInputData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPCGComponent *this;
  UPCGData *pUVar2;
  FPCGContext *pFVar3;
  undefined1 auStack_298 [32];
  FPCGContext local_278;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_298;
  FPCGContext::FPCGContext(&local_278);
  pUVar2 = (UPCGData *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_278,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_278);
  }
  pFVar3 = &local_278;
  if ((FPCGContext *)param_2->MostRecentPropertyAddress != (FPCGContext *)0x0) {
    pFVar3 = (FPCGContext *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetComponent(pFVar3);
  if (this != (UPCGComponent *)0x0) {
    pUVar2 = UPCGComponent::GetInputPCGData(this);
  }
  *(UPCGData **)param_3 = pUVar2;
  FPCGContext::~FPCGContext(&local_278);
  return;
}

// execGetInputDataWithContext @ 149d6b510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGBlueprintHelpers::execGetInputDataWithContext(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  UPCGData *pUVar4;
  FPCGContext *pFVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  UPCGComponent *this;
  UPCGData *pUVar8;
  longlong *plVar9;
  UPCGData *pUVar10;
  bool bVar11;
  longlong local_18;
  longlong *plStack_10;
  
  pUVar8 = (UPCGData *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  plVar9 = &local_18;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar9 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = (UPCGData *)plVar9[1];
  pUVar10 = pUVar4;
  if (pUVar4 != (UPCGData *)0x0) {
    aVar6 = *(atomic<int> *)&pUVar4->_padding_;
    do {
      pUVar10 = pUVar8;
      if (aVar6 == (atomic<int>)0x0) goto LAB_149d6b5b2;
      LOCK();
      aVar7 = *(atomic<int> *)&pUVar4->_padding_;
      bVar11 = aVar6 == aVar7;
      if (bVar11) {
        *(atomic<int> *)&pUVar4->_padding_ = (atomic<int>)((int)aVar6 + 1);
        aVar7 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar7;
    } while (!bVar11);
    pUVar10 = pUVar4;
    if ((*plVar9 != 0) && (pFVar5 = *(FPCGContext **)(*plVar9 + 0x10), pFVar5 != (FPCGContext *)0x0)
       ) {
      this = GetComponent(pFVar5);
      if (this != (UPCGComponent *)0x0) {
        pUVar8 = UPCGComponent::GetInputPCGData(this);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pUVar4);
      goto LAB_149d6b5d6;
    }
  }
LAB_149d6b5b2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pUVar10);
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
LAB_149d6b5d6:
  *(UPCGData **)param_3 = pUVar8;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_10 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_10 + 8))(plStack_10,1);
    }
  }
  return;
}

// execGetInterpolatedPCGLandscapeLayerWeights @ 149d6ba20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGBlueprintHelpers::execGetInterpolatedPCGLandscapeLayerWeights
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FWeakObjectPtr *pFVar1;
  FProperty *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  UWorld *pUVar10;
  UPCGSubsystem *this;
  ALandscapeProxy *pAVar11;
  ULandscapeInfo *pUVar12;
  double *pdVar13;
  int iVar14;
  ForAnyElementType FVar15;
  TVector<double> *pTVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined4 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auStackY_248 [32];
  FIdentityFunctor local_218 [8];
  TArray<FPCGLandscapeLayerWeight,TSizedDefaultAllocator<32>_> local_210;
  TIntPoint<int>_u_0 local_200;
  FString local_1f8;
  longlong *local_1e8;
  TArray<TWeakObjectPtr<ALandscapeProxy,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_1e0;
  UPCGLandscapeCache *local_1d0;
  FSharedReferencer<1> local_1c8;
  TSharedPtr<FPCGLandscapeCacheEntry_const_,1> local_1c0;
  FWeakObjectPtr local_1b0;
  TVector<double> *local_1a8;
  TVector2<double>_u_0 local_1a0;
  TVector<double> local_190;
  undefined1 local_178 [48];
  TBox<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_1e8 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e8);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_190,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_190);
  }
  pTVar16 = &local_190;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar16 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_1a8 = pTVar16;
  if ((((local_1e8 != (longlong *)0x0) &&
       (pUVar10 = (UWorld *)(**(code **)(*local_1e8 + 0x180))(), pUVar10 != (UWorld *)0x0)) &&
      (this = UPCGSubsystem::GetInstance(pUVar10), this != (UPCGSubsystem *)0x0)) &&
     (local_1d0 = UPCGSubsystem::GetLandscapeCache(this), local_1d0 != (UPCGLandscapeCache *)0x0)) {
    UE::Math::TBox<double>::TBox<double>(&local_148,pTVar16,1);
    PCGHelpers::GetLandscapeProxies(&local_1e0,pUVar10,&local_148);
    uVar9 = _UNK_15061cc8c;
    uVar8 = _UNK_15061cc88;
    uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    iVar14 = local_1e0.ArrayNum;
    if (iVar14 != 0) {
      local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.Data.ArrayNum = 0;
      local_1f8.Data.ArrayMax = 0;
      pFVar1 = (FWeakObjectPtr *)(local_1e0.AllocatorInstance.Data + (longlong)iVar14 * 8);
      FVar15.Data = local_1e0.AllocatorInstance.Data;
      while( true ) {
        if (local_1e0.ArrayNum != iVar14) {
          `TCheckedPointerIterator<TWeakObjectPtr<ALandscapeProxy,FWeakObjectPtr>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_218);
        }
        if ((FWeakObjectPtr *)FVar15.Data == pFVar1) break;
        local_1b0 = *(FWeakObjectPtr *)FVar15.Data;
        pAVar11 = (ALandscapeProxy *)FWeakObjectPtr::Get(&local_1b0);
        if (pAVar11 == (ALandscapeProxy *)0x0) {
LAB_149d6be5b:
          FVar15.Data = FVar15.Data + 8;
        }
        else {
          pUVar12 = (ULandscapeInfo *)(**(code **)(pAVar11->_padding_ + 0x18))(&pAVar11->_padding_);
          if (pUVar12 != (ULandscapeInfo *)0x0) {
            pdVar13 = (double *)
                      (**(code **)(pAVar11->_padding_ + 0x20))(&pAVar11->_padding_,&local_148);
            dVar3 = pdVar13[2] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
            dVar24 = pdVar13[3] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
            dVar30 = *pdVar13 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
            dVar31 = pdVar13[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
            dVar20 = (local_1a8->field0_0x0)._s_0.Z - pdVar13[6];
            dVar4 = (local_1a8->field0_0x0)._s_0.X - pdVar13[4];
            dVar5 = (local_1a8->field0_0x0)._s_0.Y - pdVar13[5];
            uVar33 = (undefined4)((ulonglong)dVar5 >> 0x20);
            auVar21._8_4_ = SUB84(dVar3,0);
            auVar21._0_8_ = dVar31;
            auVar21._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
            auVar34._8_4_ = SUB84(dVar5,0);
            auVar34._0_8_ = dVar4;
            auVar34._12_4_ = uVar33;
            auVar28._8_4_ = SUB84(dVar31,0);
            auVar28._0_8_ = dVar30;
            auVar28._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
            auVar29._8_4_ = SUB84(dVar5,0);
            auVar29._0_8_ = dVar4;
            auVar29._12_4_ = uVar33;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = dVar20;
            auVar25 = blendpd(auVar29,auVar25,2);
            auVar27._8_4_ = SUB84(dVar24,0);
            auVar27._0_8_ = dVar3;
            auVar27._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
            auVar29 = blendpd(auVar28,auVar27,2);
            auVar35._0_8_ = auVar34._8_8_ * dVar30 - dVar31 * dVar4;
            auVar35._8_8_ = dVar20 * dVar31 - auVar21._8_8_ * dVar5;
            auVar26._0_8_ = auVar25._0_8_ * dVar3 - auVar29._0_8_ * dVar20;
            auVar26._8_8_ = auVar25._8_8_ * dVar24 - auVar29._8_8_ * 0.0;
            auVar25 = blendpd(auVar35,auVar26,2);
            auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                            *(undefined1 (*) [16])(pdVar13 + 8));
            dVar20 = auVar35._8_8_ + auVar35._8_8_;
            dVar30 = auVar26._0_8_ + auVar26._0_8_;
            uVar33 = (undefined4)((ulonglong)dVar30 >> 0x20);
            auVar36._0_8_ = auVar25._0_8_ + auVar25._0_8_;
            auVar36._8_8_ = auVar25._8_8_ + auVar25._8_8_;
            auVar22._8_4_ = SUB84(dVar30,0);
            auVar22._0_8_ = dVar20;
            auVar22._12_4_ = uVar33;
            auVar32._8_4_ = SUB84(dVar30,0);
            auVar32._0_8_ = dVar20;
            auVar32._12_4_ = uVar33;
            auVar25 = blendpd(auVar32,auVar36,2);
            lVar18 = -(ulonglong)
                      ((double)CONCAT44(uVar7 & *(uint *)((longlong)pdVar13 + 0x44),
                                        uVar6 & *(uint *)(pdVar13 + 8)) <=
                      (double)(float)GlobalVectorConstants::SmallNumber.m128_u64[0]);
            lVar19 = -(ulonglong)
                      ((double)CONCAT44(uVar9 & *(uint *)((longlong)pdVar13 + 0x4c),
                                        uVar8 & *(uint *)(pdVar13 + 9)) <=
                      (double)(float)((ulonglong)GlobalVectorConstants::SmallNumber._0_8_ >> 0x20));
            dVar23 = __real_3ff0000000000000 / (double)pUVar12->ComponentSizeQuads;
            dVar20 = (double)CONCAT44(~(uint)((ulonglong)lVar18 >> 0x20) & auVar27._4_4_,
                                      ~(uint)lVar18 & auVar27._0_4_) *
                     (dVar20 * dVar24 + dVar4 + (auVar36._0_8_ * dVar31 - auVar22._8_8_ * dVar3));
            dVar3 = (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar27._12_4_,
                                     ~(uint)lVar19 & auVar27._8_4_) *
                    (dVar30 * dVar24 + dVar5 +
                    (auVar25._0_8_ * dVar3 - auVar36._0_8_ * auVar29._0_8_));
            dVar24 = dVar23 * dVar20;
            dVar23 = dVar23 * dVar3;
            local_200._s_0.X =
                 (int)((longlong)ROUND((dVar24 + dVar24) - __real_3fe0000000000000) >> 1);
            local_200._s_0.Y =
                 (int)((longlong)ROUND((dVar23 + dVar23) - __real_3fe0000000000000) >> 1);
            UPCGLandscapeCache::GetCacheEntry
                      (local_1d0,&local_1c0,pUVar12,(TIntPoint<int> *)&local_200._s_0,pAVar11,true);
            if (local_1c0.Object == (FPCGLandscapeCacheEntry *)0x0) {
              ::FString::operator=
                        (&local_1f8,
                         L"Unable to get landscape layer weights because the cache entry is not available."
                        );
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_1c0.SharedReferenceCount.ReferenceController);
              goto LAB_149d6be5b;
            }
            local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_210.ArrayNum = 0;
            local_210.ArrayMax = 0;
            local_1a0._s_0.X = dVar20 - (double)(pUVar12->ComponentSizeQuads * local_200._s_0.X);
            local_1a0._s_0.Y = dVar3 - (double)(pUVar12->ComponentSizeQuads * local_200._s_0.Y);
            FPCGLandscapeCacheEntry::GetInterpolatedLayerWeights
                      (local_1c0.Object,(TVector2<double> *)&local_1a0._s_0,&local_210);
            local_1c8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            local_1c0.Object = (FPCGLandscapeCacheEntry *)0x0;
            local_1d0 = (UPCGLandscapeCache *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&local_1c0.SharedReferenceCount,&local_1c8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1c8.ReferenceController);
            AlgoImpl::
            IntroSortInternal<FPCGLandscapeLayerWeight,int,FIdentityFunctor,TDereferenceWrapper<FPCGLandscapeLayerWeight,_UPCGBlueprintHelpers::GetInterpolatedPCGLandscapeLayerWeights_::__l18::<lambda_1>_>_>
                      ((FPCGLandscapeLayerWeight *)local_210.AllocatorInstance.Data,
                       local_210.ArrayNum,local_218[0],(<lambda_1> *)local_218);
            FVar15.Data = local_210.AllocatorInstance.Data;
            iVar14 = local_210.ArrayNum;
            iVar17 = local_210.ArrayMax;
            local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_210.ArrayNum = 0;
            local_210.ArrayMax = 0;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1c0.SharedReferenceCount.ReferenceController);
            if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
            }
            if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1e0.AllocatorInstance.Data);
            }
            goto LAB_149d6bfa7;
          }
          ::FString::operator=
                    (&local_1f8,
                     L"Unable to get landscape layer weights because the landscape info is not available (landscape not registered yet?"
                    );
          FVar15.Data = FVar15.Data + 8;
        }
      }
      iVar14 = local_1f8.Data.ArrayNum + -1;
      if (local_1f8.Data.ArrayNum == 0) {
        iVar14 = 0;
      }
      if ((iVar14 != 0) && (2 < (byte)LogPCG._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
    }
    if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.AllocatorInstance.Data);
    }
  }
  FVar15.Data = (FScriptContainerElement *)0x0;
  iVar17 = 0;
  iVar14 = 0;
LAB_149d6bfa7:
  if (param_3 != local_178) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = FVar15.Data;
    *(int *)((longlong)param_3 + 8) = iVar14;
    *(int *)((longlong)param_3 + 0xc) = iVar17;
    FVar15.Data = (FScriptContainerElement *)(FPCGLandscapeLayerWeight *)0x0;
  }
  if ((FPCGLandscapeLayerWeight *)FVar15.Data != (FPCGLandscapeLayerWeight *)0x0) {
    FMemory::Free(FVar15.Data);
  }
  return;
}

// execGetLocalCenter @ 149d6c080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UPCGBlueprintHelpers::execGetLocalCenter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_108 [32];
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined1 local_a8 [16];
  double local_98;
  double dStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_88 = 0x3f800000;
  local_d8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_b8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_b0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar8 = (uint)__xmm_80000000000000008000000000000000;
  uVar9 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_98 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_90 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_78 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar9,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar8);
  local_80 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar9,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar8);
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_60 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_38 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_30 = _UNK_150689688;
  uStack_70 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                             0x20) ^ uVar9,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar8);
  local_58 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_28 = 0x3f000000;
  local_20 = 0xffffffffffffffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  pdVar7 = &local_e8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar7 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar4 = pdVar7[0xe];
  dVar3 = pdVar7[0xf];
  dVar5 = pdVar7[0x11];
  dVar6 = pdVar7[0x12];
  *(double *)param_3 = (pdVar7[0xd] + pdVar7[0x10]) * __real_3fe0000000000000;
  dVar3 = (dVar3 + dVar6) * _UNK_150689678;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (dVar4 + dVar5) * ___xmm_3fe00000000000003fe0000000000000;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_3 + 8) = auVar2;
  return;
}

// execGetOriginalComponent @ 149d6c500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGBlueprintHelpers::execGetOriginalComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPCGComponent *pUVar2;
  FPCGContext *pFVar3;
  undefined1 auStack_298 [32];
  FPCGContext local_278;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_298;
  FPCGContext::FPCGContext(&local_278);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_278,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_278);
  }
  pFVar3 = &local_278;
  if ((FPCGContext *)param_2->MostRecentPropertyAddress != (FPCGContext *)0x0) {
    pFVar3 = (FPCGContext *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetOriginalComponent(pFVar3);
  *(UPCGComponent **)param_3 = pUVar2;
  FPCGContext::~FPCGContext(&local_278);
  return;
}

// execGetOriginalComponentWithContext @ 149d6c5e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGBlueprintHelpers::execGetOriginalComponentWithContext
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  UPCGComponent *pUVar4;
  FPCGContext *pFVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  UPCGComponent *pUVar8;
  longlong *plVar9;
  UPCGComponent *pUVar10;
  bool bVar11;
  longlong local_18;
  longlong *plStack_10;
  
  pUVar8 = (UPCGComponent *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  plVar9 = &local_18;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar9 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = (UPCGComponent *)plVar9[1];
  pUVar10 = pUVar4;
  if (pUVar4 != (UPCGComponent *)0x0) {
    aVar6 = *(atomic<int> *)&pUVar4->_padding_;
    do {
      pUVar10 = pUVar8;
      if (aVar6 == (atomic<int>)0x0) goto LAB_149d6c682;
      LOCK();
      aVar7 = *(atomic<int> *)&pUVar4->_padding_;
      bVar11 = aVar6 == aVar7;
      if (bVar11) {
        *(atomic<int> *)&pUVar4->_padding_ = (atomic<int>)((int)aVar6 + 1);
        aVar7 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar7;
    } while (!bVar11);
    pUVar10 = pUVar4;
    if ((*plVar9 != 0) && (pFVar5 = *(FPCGContext **)(*plVar9 + 0x10), pFVar5 != (FPCGContext *)0x0)
       ) {
      pUVar8 = GetOriginalComponent(pFVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pUVar4);
      goto LAB_149d6c6a6;
    }
  }
LAB_149d6c682:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pUVar10);
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
LAB_149d6c6a6:
  *(UPCGComponent **)param_3 = pUVar8;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_10 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_10 + 8))(plStack_10,1);
    }
  }
  return;
}

// execGetRandomStreamFromPoint @ 149d6c900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UPCGBlueprintHelpers::execGetRandomStreamFromPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  double *pdVar6;
  uint uVar7;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_108 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_100 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_a8 = 0x3f800000;
  local_48 = 0x3f000000;
  local_40 = 0xffffffffffffffff;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar5 = (uint)__xmm_80000000000000008000000000000000;
  uVar7 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_98 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar7,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar5);
  local_a0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar7,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar5);
  local_88 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_80 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_68 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_60 = _UNK_150689688;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar7,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar5);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_110 = 0;
  pdVar6 = &local_108;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar6 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  local_118 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  lVar2 = local_110;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar5 = *(uint *)((longlong)pdVar6 + 0xc4);
  plVar4 = (longlong *)(local_118 + 0xc0);
  if (local_118 == 0) {
    plVar4 = (longlong *)0x0;
  }
  if (local_110 == 0) {
    if (plVar4 != (longlong *)0x0) {
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))();
      iVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
      uVar5 = iVar3 * 0x45c282b + 0x1b0cb1bbU ^ uVar5 * 0xbb38435 + 0x3619636b;
    }
  }
  else {
    uVar5 = uVar5 * 0xbb38435 + 0x3619636b;
    if (plVar4 == (longlong *)0x0) {
      uVar5 = *(int *)(local_110 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^ uVar5;
    }
    else {
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))();
      iVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
      uVar5 = *(int *)(lVar2 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^ iVar3 * 0x211f54f + 0x1b0cb1a7U ^
              uVar5;
    }
  }
  local_118 = CONCAT44(uVar5,uVar5);
  *(longlong *)param_3 = local_118;
  return;
}

// execGetRandomStreamFromTwoPoints @ 149d6cbc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UPCGBlueprintHelpers::execGetRandomStreamFromTwoPoints
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  double *pdVar6;
  double *pdVar7;
  uint uVar8;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  longlong local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  double dStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  double dStack_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  double dStack_160;
  double local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  undefined1 local_f8 [16];
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  uint uStack_90;
  uint uStack_8c;
  double local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_218;
  uVar5 = (uint)__xmm_80000000000000008000000000000000;
  uVar8 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_1e8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_1e0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_188 = 0x3f800000;
  local_128 = 0x3f000000;
  local_120 = 0xffffffffffffffff;
  local_1d8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_1d0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_1c8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_1c8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_1a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_1a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_1b8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_1b0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_198 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_190 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_178 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                             0x20) ^ uVar8,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar5);
  local_180 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar8,
                       UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar5);
  local_168 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_,
                       UE::Math::TVector<double>::OneVector.field0_0x0._0_4_);
  dStack_160 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_148 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_140 = _UNK_150689688;
  local_138 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_130 = _UNK_150689688;
  local_170 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                             0x20) ^ uVar8,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar5);
  local_158 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e8);
  }
  local_118 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_110 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_b8 = 0x3f800000;
  local_58 = 0x3f000000;
  pdVar7 = &local_1e8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar7 = (double *)param_2->MostRecentPropertyAddress;
  }
  local_50 = 0xffffffffffffffff;
  local_108 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_100 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_e8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_e0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uStack_90 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
  uStack_8c = (uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20);
  local_c8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_c0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_b0 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar8,
                      UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar5);
  local_a8 = CONCAT44(uStack_8c ^ uVar8,uStack_90 ^ uVar5);
  local_a0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar8,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar5);
  local_78 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_70 = _UNK_150689688;
  local_68 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_60 = _UNK_150689688;
  local_98 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
  uStack_94 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
  local_88 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_1f0 = 0;
  pdVar6 = &local_118;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar6 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f0);
  }
  local_1f8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f8);
  }
  lVar2 = local_1f0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar4 = (longlong *)(local_1f8 + 0xc0);
  if (local_1f8 == 0) {
    plVar4 = (longlong *)0x0;
  }
  uVar5 = *(int *)((longlong)pdVar7 + 0xc4) * 0xbb38435 + 0x3619636bU ^
          *(int *)((longlong)pdVar6 + 0xc4) * 0x45c282b + 0x1b0cb1bbU;
  if (local_1f0 == 0) {
    if (plVar4 != (longlong *)0x0) {
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))();
      iVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
      uVar5 = iVar3 * 0x45c282b + 0x1b0cb1bbU ^ uVar5 * 0xbb38435 + 0x3619636b;
    }
  }
  else {
    uVar5 = uVar5 * 0xbb38435 + 0x3619636b;
    if (plVar4 == (longlong *)0x0) {
      uVar5 = *(int *)(local_1f0 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^ uVar5;
    }
    else {
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))();
      iVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
      uVar5 = *(int *)(lVar2 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^ iVar3 * 0x211f54f + 0x1b0cb1a7U ^
              uVar5;
    }
  }
  local_1f8 = CONCAT44(uVar5,uVar5);
  *(longlong *)param_3 = local_1f8;
  return;
}

// execGetSettings @ 149d6d200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UPCGBlueprintHelpers::execGetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPCGSettings *pUVar2;
  FPCGContext *pFVar3;
  undefined1 auStack_298 [32];
  FPCGContext local_278;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_298;
  FPCGContext::FPCGContext(&local_278);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_278,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_278);
  }
  pFVar3 = &local_278;
  if ((FPCGContext *)param_2->MostRecentPropertyAddress != (FPCGContext *)0x0) {
    pFVar3 = (FPCGContext *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetSettings(pFVar3);
  *(UPCGSettings **)param_3 = pUVar2;
  FPCGContext::~FPCGContext(&local_278);
  return;
}

// execGetSettingsWithContext @ 149d6d2e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGBlueprintHelpers::execGetSettingsWithContext(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  UPCGSettings *pUVar4;
  FPCGContext *pFVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  UPCGSettings *pUVar8;
  longlong *plVar9;
  UPCGSettings *pUVar10;
  bool bVar11;
  longlong local_18;
  longlong *plStack_10;
  
  pUVar8 = (UPCGSettings *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  plVar9 = &local_18;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar9 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = (UPCGSettings *)plVar9[1];
  pUVar10 = pUVar4;
  if (pUVar4 != (UPCGSettings *)0x0) {
    aVar6 = *(atomic<int> *)&pUVar4->_padding_;
    do {
      pUVar10 = pUVar8;
      if (aVar6 == (atomic<int>)0x0) goto LAB_149d6d382;
      LOCK();
      aVar7 = *(atomic<int> *)&pUVar4->_padding_;
      bVar11 = aVar6 == aVar7;
      if (bVar11) {
        *(atomic<int> *)&pUVar4->_padding_ = (atomic<int>)((int)aVar6 + 1);
        aVar7 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar7;
    } while (!bVar11);
    pUVar10 = pUVar4;
    if ((*plVar9 != 0) && (pFVar5 = *(FPCGContext **)(*plVar9 + 0x10), pFVar5 != (FPCGContext *)0x0)
       ) {
      pUVar8 = GetSettings(pFVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pUVar4);
      goto LAB_149d6d3a6;
    }
  }
LAB_149d6d382:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pUVar10);
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
LAB_149d6d3a6:
  *(UPCGSettings **)param_3 = pUVar8;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_10 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_10 + 8))(plStack_10,1);
    }
  }
  return;
}

// execGetTargetActor @ 149d6dfb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGBlueprintHelpers::execGetTargetActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  AActor *pAVar2;
  FPCGContext *this;
  undefined1 auStack_2b8 [32];
  UPCGSpatialData *local_298 [2];
  FPCGContext local_288;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  FPCGContext::FPCGContext(&local_288);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_288,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_288);
  }
  local_298[0] = (UPCGSpatialData *)0x0;
  this = &local_288;
  if ((FPCGContext *)param_2->MostRecentPropertyAddress != (FPCGContext *)0x0) {
    this = (FPCGContext *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_298,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_298);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pAVar2 = FPCGContext::GetTargetActor(this,local_298[0]);
  *(AActor **)param_3 = pAVar2;
  FPCGContext::~FPCGContext(&local_288);
  return;
}

// execGetTargetActorWithContext @ 149d6e0d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGBlueprintHelpers::execGetTargetActorWithContext(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  AActor *pAVar4;
  FPCGContext *this;
  atomic<int> aVar5;
  atomic<int> aVar6;
  AActor *pAVar7;
  AActor *pAVar8;
  longlong *plVar9;
  bool bVar10;
  UPCGSpatialData *local_res10;
  longlong local_28;
  longlong *plStack_20;
  
  pAVar7 = (AActor *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10 = (UPCGSpatialData *)0x0;
  plVar9 = &local_28;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar9 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pAVar4 = (AActor *)plVar9[1];
  pAVar8 = pAVar4;
  if (pAVar4 != (AActor *)0x0) {
    aVar5 = *(atomic<int> *)&pAVar4->_padding_;
    do {
      pAVar8 = pAVar7;
      if (aVar5 == (atomic<int>)0x0) goto LAB_149d6e1c1;
      LOCK();
      aVar6 = *(atomic<int> *)&pAVar4->_padding_;
      bVar10 = aVar5 == aVar6;
      if (bVar10) {
        *(atomic<int> *)&pAVar4->_padding_ = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar10);
    pAVar8 = pAVar4;
    if ((*plVar9 != 0) && (this = *(FPCGContext **)(*plVar9 + 0x10), this != (FPCGContext *)0x0)) {
      pAVar7 = FPCGContext::GetTargetActor(this,local_res10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pAVar4);
      goto LAB_149d6e1e5;
    }
  }
LAB_149d6e1c1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pAVar8);
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
LAB_149d6e1e5:
  *(AActor **)param_3 = pAVar7;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_20 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_20 + 8))(plStack_20,1);
    }
  }
  return;
}

// execGetTaskId @ 149d6e250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UPCGBlueprintHelpers::execGetTaskId(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPCGContext *pFVar2;
  undefined1 auStack_298 [32];
  FPCGContext local_278;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_298;
  FPCGContext::FPCGContext(&local_278);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_278,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_278);
  }
  pFVar2 = &local_278;
  if ((FPCGContext *)param_2->MostRecentPropertyAddress != (FPCGContext *)0x0) {
    pFVar2 = (FPCGContext *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(ulong64 *)param_3 = pFVar2->TaskId;
  FPCGContext::~FPCGContext(&local_278);
  return;
}

// execGetTaskIdWithContext @ 149d6e330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGBlueprintHelpers::execGetTaskIdWithContext(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TReferenceControllerBase<1> *pTVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  longlong local_18;
  longlong *plStack_10;
  
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  plVar9 = &local_18;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar9 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar7 = (TReferenceControllerBase<1> *)plVar9[1];
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar7->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_149d6e3e0;
      }
      LOCK();
      aVar6 = pTVar7->SharedReferenceCount;
      bVar10 = aVar5 == aVar6;
      if (bVar10) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar10);
    if ((*plVar9 != 0) && (lVar4 = *(longlong *)(*plVar9 + 0x10), lVar4 != 0)) {
      uVar8 = *(undefined8 *)(lVar4 + 0x128);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      goto LAB_149d6e407;
    }
  }
LAB_149d6e3e0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  uVar8 = 0xffffffffffffffff;
LAB_149d6e407:
  *(undefined8 *)param_3 = uVar8;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_10 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_10 + 8))(plStack_10,1);
    }
  }
  return;
}

// execGetTransformedBounds @ 149d6e690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UPCGBlueprintHelpers::execGetTransformedBounds(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TMatrix<double> *pTVar2;
  TTransform<double> *this;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_218 [32];
  TVector<double>_u_0 local_1f8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  undefined1 local_1c8;
  TTransform<double> local_1b8;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  TVector<double>_u_0 local_e8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_218;
  local_1b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1b8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_158 = 0x3f800000;
  local_f8 = 0x3f000000;
  local_f0 = 0xffffffffffffffff;
  local_1b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1b8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_1b8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_1b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1b8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_1b8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_1b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1b8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_1b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1b8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar3 = (uint)__xmm_80000000000000008000000000000000;
  uVar4 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_1b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1b8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  uStack_148 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                              0x20) ^ uVar4,
                        SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar3);
  local_150 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                             0x20) ^ uVar4,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar3);
  local_138 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_130 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_118 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_110 = _UNK_150689688;
  local_108 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_100 = _UNK_150689688;
  local_140 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                             0x20) ^ uVar4,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar3);
  local_128 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  local_1c8 = 1;
  this = &local_1b8;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    this = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_1f8._s_0.X = this[1].Rotation.XY.m128d_f64[1];
  local_1f8._s_0.Y = this[1].Rotation.ZW.m128d_f64[0];
  local_1f8._s_0.Z = this[1].Rotation.ZW.m128d_f64[1];
  local_1e0 = this[1].Translation.XY.m128d_f64[0];
  dStack_1d8 = this[1].Translation.XY.m128d_f64[1];
  local_1d0 = this[1].Translation.ZW.m128d_f64[0];
  pTVar2 = UE::Math::TTransform<double>::ToMatrixWithScale(this,&local_a8);
  UE::Math::TBox<double>::TransformBy
            ((TBox<double> *)&local_1f8._s_0,(TBox<double> *)&local_e8._s_0,pTVar2);
  *(double *)param_3 = local_e8._s_0.X;
  *(double *)((longlong)param_3 + 8) = local_e8._s_0.Y;
  *(double *)((longlong)param_3 + 0x10) = local_e8._s_0.Z;
  *(undefined8 *)((longlong)param_3 + 0x18) = uStack_d0;
  *(undefined8 *)((longlong)param_3 + 0x20) = local_c8;
  *(undefined8 *)((longlong)param_3 + 0x28) = uStack_c0;
  *(undefined8 *)((longlong)param_3 + 0x30) = local_b8;
  return;
}

// execRefreshPCGRuntimeComponent @ 149d6fee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGBlueprintHelpers::execRefreshPCGRuntimeComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPCGComponent *pUVar2;
  UPCGSubsystem *this;
  bool bVar3;
  int local_res10 [2];
  UPCGComponent *local_res20;
  
  local_res20 = (UPCGComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  pUVar2 = local_res20;
  bVar3 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = UPCGSubsystem::GetSubsystemForCurrentWorld();
  if (this != (UPCGSubsystem *)0x0) {
    if (bVar3) {
      IPCGBaseSubsystem::FlushCache((IPCGBaseSubsystem *)&this->_padding_);
    }
    UPCGSubsystem::RefreshRuntimeGenComponent(this,pUVar2,GenerationGrid);
  }
  return;
}

// execSetExtents @ 149d707e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UPCGBlueprintHelpers::execSetExtents(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  FProperty *pFVar3;
  double *pdVar4;
  double *pdVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_128 [32];
  double local_108 [4];
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined1 local_a8 [16];
  double local_98;
  double dStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  double local_68;
  double dStack_60;
  double local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_88 = 0x3f800000;
  local_d8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_b8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_b0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar6 = (uint)__xmm_80000000000000008000000000000000;
  uVar7 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_98 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_90 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_78 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar7,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar6);
  local_80 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar7,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar6);
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_60 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_38 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_30 = _UNK_150689688;
  local_70 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar7,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar6);
  local_58 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_28 = 0x3f000000;
  local_20 = 0xffffffffffffffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  pdVar4 = (double *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pdVar5 = &local_e8;
  if (pdVar4 != (double *)0x0) {
    pdVar5 = pdVar4;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  dVar8 = __real_3fe0000000000000;
  pdVar4 = local_108;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar4 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar10 = (pdVar5[0xd] + pdVar5[0x10]) * dVar8;
  dVar9 = (pdVar5[0x11] + pdVar5[0xe]) * dVar8;
  dVar8 = (pdVar5[0x12] + pdVar5[0xf]) * dVar8;
  dVar1 = pdVar4[1];
  dVar2 = pdVar4[2];
  pdVar5[0xd] = dVar10 - *pdVar4;
  pdVar5[0xe] = dVar9 - dVar1;
  pdVar5[0xf] = dVar8 - dVar2;
  dVar1 = pdVar4[2];
  dVar2 = *pdVar4;
  pdVar5[0x11] = dVar9 + pdVar4[1];
  pdVar5[0x12] = dVar8 + dVar1;
  pdVar5[0x10] = dVar10 + dVar2;
  return;
}

// execSetLocalCenter @ 149d70f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UPCGBlueprintHelpers::execSetLocalCenter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double *pdVar2;
  double *pdVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_128 [32];
  double local_108 [4];
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined1 local_a8 [16];
  double local_98;
  double dStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  double local_68;
  double dStack_60;
  double local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_88 = 0x3f800000;
  local_d8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_b8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_b0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar4 = (uint)__xmm_80000000000000008000000000000000;
  uVar5 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_98 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_90 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_78 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar5,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar4);
  local_80 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar5,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar4);
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_60 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_38 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_30 = _UNK_150689688;
  local_70 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar5,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar4);
  local_58 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_28 = 0x3f000000;
  local_20 = 0xffffffffffffffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  pdVar2 = (double *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pdVar3 = &local_e8;
  if (pdVar2 != (double *)0x0) {
    pdVar3 = pdVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  dVar7 = __real_3fe0000000000000;
  pdVar2 = local_108;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar2 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar8 = *pdVar2 - (pdVar3[0xd] + pdVar3[0x10]) * dVar7;
  dVar6 = pdVar2[2] - (pdVar3[0xf] + pdVar3[0x12]) * dVar7;
  dVar7 = pdVar2[1] - (pdVar3[0xe] + pdVar3[0x11]) * dVar7;
  pdVar3[0xd] = dVar8 + pdVar3[0xd];
  pdVar3[0xe] = dVar7 + pdVar3[0xe];
  pdVar3[0xf] = dVar6 + pdVar3[0xf];
  pdVar3[0x10] = dVar8 + pdVar3[0x10];
  pdVar3[0x11] = dVar7 + pdVar3[0x11];
  pdVar3[0x12] = dVar6 + pdVar3[0x12];
  return;
}

// execSetSeedFromPosition @ 149d71850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UPCGBlueprintHelpers::execSetSeedFromPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double *pdVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_128 [64];
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined1 local_a8 [16];
  double local_98;
  double dStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  double local_68;
  double dStack_60;
  double local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_88 = 0x3f800000;
  local_d8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_b8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_b0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar3 = (uint)__xmm_80000000000000008000000000000000;
  uVar4 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_98 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_90 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_78 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar4,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar3);
  local_80 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar4,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar3);
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_60 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_38 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_30 = _UNK_150689688;
  local_70 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar4,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar3);
  local_58 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_28 = 0x3f000000;
  local_20 = 0xffffffffffffffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  pdVar2 = &local_e8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar2 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(uint *)((longlong)pdVar2 + 0xc4) =
       (int)pdVar2[4] * 0xbb38435 + 0x3619636bU ^ (int)pdVar2[5] * 0x45c282b + 0x1b0cb1bbU ^
       (int)pdVar2[6] * 0x211f54f + 0x1b0cb1a7U;
  return;
}

