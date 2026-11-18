// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149b9b510

UClass * __cdecl UPCGPathfindingSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPathfindingSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPathfindingSettings",
               &Z_Registration_Info_UClass_UPCGPathfindingSettings.InnerSingleton,
               StaticRegisterNativesUPCGPathfindingSettings,0x2d8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGPathfindingSettings>,
               InternalVTableHelperCtorCaller<UPCGPathfindingSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPathfindingSettings.InnerSingleton;
}

// UPCGPathfindingSettings @ 149be76c0

UPCGPathfindingSettings * __thiscall
UPCGPathfindingSettings::UPCGPathfindingSettings
          (UPCGPathfindingSettings *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bStartLocationsAsInput = false;
  this->_padding_ = (longlong)&___7UPCGPathfindingSettings__6B_;
  this->SearchDistance = 1000.0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->StartLocationAttribute);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Start).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Start).field0_0x0._s_0.Y = (double)uVar1;
  (this->Start).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bGoalLocationsAsInput = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->GoalLocationAttribute);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Goal).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Goal).field0_0x0._s_0.Y = (double)uVar1;
  (this->Goal).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->GoalMappingMode = EachStartToNearestGoal;
  this->HeuristicWeight = 1.0;
  this->CostFunctionMode = Distance;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->CostAttribute);
  this->bUsePathTraces = false;
  this->MaximumFitnessPenaltyFactor = 10.0;
  FPCGWorldRaycastQueryParams::FPCGWorldRaycastQueryParams(&this->PathTraceParams);
  this->bAcceptPartialPath = true;
  this->bOutputAsSpline = true;
  this->SplineMode = Curve;
  this->bCopyOriginatingPoints = false;
  return this;
}

// UPCGPathfindingSettings @ 149be77c0

UPCGPathfindingSettings * __thiscall
UPCGPathfindingSettings::UPCGPathfindingSettings(UPCGPathfindingSettings *this)

{
  undefined8 uVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar2);
  this->bStartLocationsAsInput = false;
  this->_padding_ = (longlong)&___7UPCGPathfindingSettings__6B_;
  this->SearchDistance = 1000.0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->StartLocationAttribute);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Start).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Start).field0_0x0._s_0.Y = (double)uVar1;
  (this->Start).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bGoalLocationsAsInput = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->GoalLocationAttribute);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Goal).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Goal).field0_0x0._s_0.Y = (double)uVar1;
  (this->Goal).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->GoalMappingMode = EachStartToNearestGoal;
  this->HeuristicWeight = 1.0;
  this->CostFunctionMode = Distance;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->CostAttribute);
  this->bUsePathTraces = false;
  this->MaximumFitnessPenaltyFactor = 10.0;
  FPCGWorldRaycastQueryParams::FPCGWorldRaycastQueryParams(&this->PathTraceParams);
  this->bAcceptPartialPath = true;
  this->bOutputAsSpline = true;
  this->SplineMode = Curve;
  this->bCopyOriginatingPoints = false;
  FPCGAttributePropertySelector::SetPointProperty
            ((FPCGAttributePropertySelector *)&this->StartLocationAttribute,Position,true);
  FPCGAttributePropertySelector::SetPointProperty
            ((FPCGAttributePropertySelector *)&this->GoalLocationAttribute,Position,true);
  *(undefined1 *)&(this->PathTraceParams)._padding_ = 0;
  return this;
}

// ~UPCGPathfindingSettings @ 149be9ec0

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

void __thiscall UPCGPathfindingSettings::~UPCGPathfindingSettings(UPCGPathfindingSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGPathfindingSettings__6B_;
  FPCGWorldCommonQueryParams::~FPCGWorldCommonQueryParams
            ((FPCGWorldCommonQueryParams *)&this->PathTraceParams);
  DestructItems<FString,int>
            (*(FString **)&(this->CostAttribute).field_0x28,
             *(int *)&(this->CostAttribute).field_0x30);
  pvVar1 = *(void **)&(this->CostAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->GoalLocationAttribute).field_0x28,
             *(int *)&(this->GoalLocationAttribute).field_0x30);
  pvVar1 = *(void **)&(this->GoalLocationAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->StartLocationAttribute).field_0x28,
             *(int *)&(this->StartLocationAttribute).field_0x30);
  pvVar1 = *(void **)&(this->StartLocationAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c05920

TSharedPtr<IPCGElement,1> * __thiscall
UPCGPathfindingSettings::CreateElement
          (UPCGPathfindingSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IPCGElement,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IPCGElement *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPCGPathfindingElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGPathfindingElement__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<IPCGElement,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IPCGElement *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149c26210

UClass * __cdecl UPCGPathfindingSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPathfindingSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPathfindingSettings",
               &Z_Registration_Info_UClass_UPCGPathfindingSettings.InnerSingleton,
               StaticRegisterNativesUPCGPathfindingSettings,0x2d8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGPathfindingSettings>,
               InternalVTableHelperCtorCaller<UPCGPathfindingSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPathfindingSettings.InnerSingleton;
}

// InputPinProperties @ 149c2c8b0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */
/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGPathfindingSettings::InputPinProperties
          (UPCGPathfindingSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGPinProperties *pFVar5;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  if (this->bStartLocationsAsInput != false) {
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == __return_storage_ptr__->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar3 = FText::GetEmpty();
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,PointOrParam);
    pFVar5 = FPCGPinProperties::FPCGPinProperties
                       ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                        &PCGPathfindingElement::Constants::StartLocationsInputPinLabel,pFVar4,false,
                        false,pFVar3);
    pFVar5->PinStatus = Required;
  }
  if (this->bGoalLocationsAsInput != false) {
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == __return_storage_ptr__->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar3 = FText::GetEmpty();
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,PointOrParam);
    pFVar5 = FPCGPinProperties::FPCGPinProperties
                       ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                        &PCGPathfindingElement::Constants::GoalLocationsInputPinLabel,pFVar4,false,
                        false,pFVar3);
    pFVar5->PinStatus = Required;
  }
  if (this->bUsePathTraces != false) {
    FPCGWorldCommonQueryParams::AddFilterPinIfNeeded
              ((FPCGWorldCommonQueryParams *)&this->PathTraceParams,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c2e9e0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGPathfindingSettings::OutputPinProperties
          (UPCGPathfindingSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  EPCGDataType EVar5;
  FPCGPinProperties *this_00;
  FPCGDataTypeIdentifier local_28;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if (this->bOutputAsSpline == false) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,piVar1);
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    this_00 = (FPCGPinProperties *)
              ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 0x30);
    pFVar3 = FText::GetEmpty();
    EVar5 = Point;
  }
  else {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,piVar1);
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    this_00 = (FPCGPinProperties *)
              ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 0x30);
    pFVar3 = FText::GetEmpty();
    EVar5 = Spline;
  }
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,EVar5);
  FPCGPinProperties::FPCGPinProperties
            (this_00,&PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGPathfindingSettings @ 149c35530

void __cdecl UPCGPathfindingSettings::StaticRegisterNativesUPCGPathfindingSettings(void)

{
  return;
}

