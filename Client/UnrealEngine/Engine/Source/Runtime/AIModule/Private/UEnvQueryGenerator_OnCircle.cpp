// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 13

// StaticClass @ 146f0d5b0

UClass * __cdecl UEnvQueryGenerator_OnCircle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_OnCircle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_OnCircle",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_OnCircle.InnerSingleton,
               StaticRegisterNativesUEnvQueryGenerator_OnCircle,0x268,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryGenerator_OnCircle>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_OnCircle>,local_res8,
               UEnvQueryGenerator_ProjectedPoints::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_OnCircle.InnerSingleton;
}

// UEnvQueryGenerator_OnCircle @ 146f2b4a0

UEnvQueryGenerator_OnCircle * __thiscall
UEnvQueryGenerator_OnCircle::UEnvQueryGenerator_OnCircle
          (UEnvQueryGenerator_OnCircle *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FFieldClass *pFVar3;
  
  UEnvQueryGenerator_ProjectedPoints::UEnvQueryGenerator_ProjectedPoints
            ((UEnvQueryGenerator_ProjectedPoints *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryGenerator_OnCircle__6B_;
  (this->CircleRadius)._padding_ = 0;
  (this->CircleRadius)._padding_ = 0;
  (this->CircleRadius)._padding_ = 0;
  (this->CircleRadius)._padding_ = 0;
  (this->CircleRadius)._padding_ = 0;
  (this->CircleRadius)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->CircleRadius).DefaultValue = 0.0;
  pFVar3 = FFloatProperty::StaticClass();
  (this->CircleRadius)._padding_ = (longlong)pFVar3;
  (this->SpaceBetween)._padding_ = 0;
  (this->SpaceBetween)._padding_ = 0;
  (this->SpaceBetween)._padding_ = 0;
  (this->SpaceBetween)._padding_ = 0;
  (this->SpaceBetween)._padding_ = 0;
  (this->SpaceBetween)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->SpaceBetween).DefaultValue = 0.0;
  pFVar3 = FFloatProperty::StaticClass();
  (this->SpaceBetween)._padding_ = (longlong)pFVar3;
  (this->NumberOfPoints)._padding_ = 0;
  (this->NumberOfPoints)._padding_ = 0;
  (this->NumberOfPoints)._padding_ = 0;
  (this->NumberOfPoints)._padding_ = (longlong)&___7FAIDataProviderIntValue__6B_;
  (this->NumberOfPoints)._padding_ = 0;
  (this->NumberOfPoints)._padding_ = 0;
  (this->NumberOfPoints).DefaultValue = 0;
  pFVar3 = FIntProperty::StaticClass();
  (this->NumberOfPoints)._padding_ = (longlong)pFVar3;
  (this->ArcDirection).LineFrom.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ArcDirection).LineTo.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ArcDirection).Rotation.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ArcDirection).DirMode.Value = '\0';
  (this->ArcDirectionOffsetDegrees)._padding_ = 0;
  (this->ArcDirectionOffsetDegrees)._padding_ = 0;
  (this->ArcDirectionOffsetDegrees)._padding_ = 0;
  (this->ArcDirectionOffsetDegrees)._padding_ = 0;
  (this->ArcDirectionOffsetDegrees)._padding_ = 0;
  (this->ArcDirectionOffsetDegrees)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->ArcDirectionOffsetDegrees).DefaultValue = 0.0;
  pFVar3 = FFloatProperty::StaticClass();
  (this->ArcDirectionOffsetDegrees)._padding_ = (longlong)pFVar3;
  (this->ArcAngle)._padding_ = 0;
  (this->ArcAngle)._padding_ = 0;
  (this->ArcAngle)._padding_ = 0;
  (this->ArcAngle)._padding_ = 0;
  (this->ArcAngle)._padding_ = 0;
  (this->ArcAngle)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->ArcAngle).DefaultValue = 0.0;
  pFVar3 = FFloatProperty::StaticClass();
  (this->ArcAngle)._padding_ = (longlong)pFVar3;
  (this->CircleCenter).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->CircleCenterZOffset)._padding_ = 0;
  (this->CircleCenterZOffset)._padding_ = 0;
  (this->CircleCenterZOffset)._padding_ = 0;
  (this->CircleCenterZOffset)._padding_ = 0;
  (this->CircleCenterZOffset)._padding_ = 0;
  (this->CircleCenterZOffset)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->CircleCenterZOffset).DefaultValue = 0.0;
  pFVar3 = FFloatProperty::StaticClass();
  (this->CircleCenterZOffset)._padding_ = (longlong)pFVar3;
  (this->TraceData).NavigationFilter.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->TraceData).TraceChannel = '\0';
  (this->TraceData).SerializedChannel = '\0';
  (this->TraceData).VersionNum = 0;
  (this->TraceData).ProjectDown = 1024.0;
  (this->TraceData).ProjectUp = 1024.0;
  (this->TraceData).ExtentX = 10.0;
  (this->TraceData).ExtentY = 10.0;
  (this->TraceData).ExtentZ = 10.0;
  (this->TraceData).PostProjectionVerticalOffset = 0.0;
  (this->TraceData).TraceProfileName.ComparisonIndex = 0;
  (this->TraceData).TraceProfileName.Number = 0;
  (this->TraceData).TraceShape = '\0';
  (this->TraceData).TraceMode = '\0';
  puVar2 = &(this->TraceData).field_0x38;
  (this->TraceData).bTraceComplex = 0;
  (this->TraceData).bCanProjectDown = 0;
  (this->TraceData).bCanDisableTrace = 1;
  (this->TraceData).bCanTraceOnGeometry = 1;
  (this->TraceData).bCanTraceOnNavMesh = 1;
  (this->TraceData).bOnlyBlockingHits = 1;
  return this;
}

// UEnvQueryGenerator_OnCircle @ 146f2b6e0

UEnvQueryGenerator_OnCircle * __thiscall
UEnvQueryGenerator_OnCircle::UEnvQueryGenerator_OnCircle
          (UEnvQueryGenerator_OnCircle *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FFieldClass *pFVar3;
  UClass *pUVar4;
  
  UEnvQueryGenerator_ProjectedPoints::UEnvQueryGenerator_ProjectedPoints
            ((UEnvQueryGenerator_ProjectedPoints *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryGenerator_OnCircle__6B_;
  (this->CircleRadius)._padding_ = 0;
  (this->CircleRadius)._padding_ = 0;
  (this->CircleRadius)._padding_ = 0;
  (this->CircleRadius)._padding_ = 0;
  (this->CircleRadius)._padding_ = 0;
  (this->CircleRadius)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->CircleRadius).DefaultValue = 0.0;
  pFVar3 = FFloatProperty::StaticClass();
  (this->CircleRadius)._padding_ = (longlong)pFVar3;
  (this->SpaceBetween)._padding_ = 0;
  (this->SpaceBetween)._padding_ = 0;
  (this->SpaceBetween)._padding_ = 0;
  (this->SpaceBetween)._padding_ = 0;
  (this->SpaceBetween)._padding_ = 0;
  (this->SpaceBetween)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->SpaceBetween).DefaultValue = 0.0;
  pFVar3 = FFloatProperty::StaticClass();
  (this->SpaceBetween)._padding_ = (longlong)pFVar3;
  (this->NumberOfPoints)._padding_ = 0;
  (this->NumberOfPoints)._padding_ = 0;
  (this->NumberOfPoints)._padding_ = 0;
  (this->NumberOfPoints)._padding_ = (longlong)&___7FAIDataProviderIntValue__6B_;
  (this->NumberOfPoints)._padding_ = 0;
  (this->NumberOfPoints)._padding_ = 0;
  (this->NumberOfPoints).DefaultValue = 0;
  pFVar3 = FIntProperty::StaticClass();
  (this->NumberOfPoints)._padding_ = (longlong)pFVar3;
  (this->ArcDirection).LineFrom.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ArcDirection).LineTo.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ArcDirection).Rotation.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ArcDirection).DirMode.Value = '\0';
  (this->ArcDirectionOffsetDegrees)._padding_ = 0;
  (this->ArcDirectionOffsetDegrees)._padding_ = 0;
  (this->ArcDirectionOffsetDegrees)._padding_ = 0;
  (this->ArcDirectionOffsetDegrees)._padding_ = 0;
  (this->ArcDirectionOffsetDegrees)._padding_ = 0;
  (this->ArcDirectionOffsetDegrees)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->ArcDirectionOffsetDegrees).DefaultValue = 0.0;
  pFVar3 = FFloatProperty::StaticClass();
  (this->ArcDirectionOffsetDegrees)._padding_ = (longlong)pFVar3;
  (this->ArcAngle)._padding_ = 0;
  (this->ArcAngle)._padding_ = 0;
  (this->ArcAngle)._padding_ = 0;
  (this->ArcAngle)._padding_ = 0;
  (this->ArcAngle)._padding_ = 0;
  (this->ArcAngle)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->ArcAngle).DefaultValue = 0.0;
  pFVar3 = FFloatProperty::StaticClass();
  (this->ArcAngle)._padding_ = (longlong)pFVar3;
  (this->CircleCenter).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->CircleCenterZOffset)._padding_ = 0;
  (this->CircleCenterZOffset)._padding_ = 0;
  (this->CircleCenterZOffset)._padding_ = 0;
  (this->CircleCenterZOffset)._padding_ = 0;
  (this->CircleCenterZOffset)._padding_ = 0;
  (this->CircleCenterZOffset)._padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  (this->CircleCenterZOffset).DefaultValue = 0.0;
  pFVar3 = FFloatProperty::StaticClass();
  (this->CircleCenterZOffset)._padding_ = (longlong)pFVar3;
  (this->TraceData).NavigationFilter.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->TraceData).TraceChannel = '\0';
  (this->TraceData).SerializedChannel = '\0';
  (this->TraceData).VersionNum = 0;
  (this->TraceData).ProjectDown = 1024.0;
  (this->TraceData).ProjectUp = 1024.0;
  (this->TraceData).ExtentX = 10.0;
  (this->TraceData).ExtentY = 10.0;
  (this->TraceData).ExtentZ = 10.0;
  (this->TraceData).PostProjectionVerticalOffset = 0.0;
  (this->TraceData).TraceProfileName.ComparisonIndex = 0;
  (this->TraceData).TraceProfileName.Number = 0;
  (this->TraceData).TraceShape = '\0';
  (this->TraceData).TraceMode = '\0';
  puVar2 = &(this->TraceData).field_0x38;
  (this->TraceData).bTraceComplex = 0;
  (this->TraceData).bCanProjectDown = 0;
  (this->TraceData).bCanDisableTrace = 1;
  (this->TraceData).bCanTraceOnGeometry = 1;
  (this->TraceData).bCanTraceOnNavMesh = 1;
  (this->TraceData).bOnlyBlockingHits = 1;
  pUVar4 = UEnvQueryContext_Querier::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->CircleCenter).Class.field0_0x0.DebugPtr = pUVar4;
  pUVar4 = UEnvQueryItemType_Point::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)pUVar4;
  (this->CircleRadius).DefaultValue = 1000.0;
  (this->SpaceBetween).DefaultValue = 50.0;
  (this->NumberOfPoints).DefaultValue = 8;
  this->PointOnCircleSpacingMethod = BySpaceBetween;
  (this->ArcDirection).DirMode.Value = '\0';
  pUVar4 = UEnvQueryContext_Querier::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->ArcDirection).LineFrom.Class.field0_0x0.DebugPtr = pUVar4;
  pUVar4 = UEnvQueryContext_Querier::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->ArcDirection).Rotation.Class.field0_0x0.DebugPtr = pUVar4;
  (this->TraceData).bCanProjectDown = 0;
  (this->TraceData).bCanDisableTrace = 1;
  this->bIgnoreAnyContextActorsWhenGeneratingCircle = false;
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
  (this->ArcAngle).DefaultValue = 360.0;
  (this->TraceData).TraceMode.Value = '\x01';
  return this;
}

// ~UEnvQueryGenerator_OnCircle @ 146f2ebc0

void __thiscall
UEnvQueryGenerator_OnCircle::~UEnvQueryGenerator_OnCircle(UEnvQueryGenerator_OnCircle *this)

{
  (this->CircleCenterZOffset)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->ArcAngle)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->ArcDirectionOffsetDegrees)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->NumberOfPoints)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->SpaceBetween)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  (this->CircleRadius)._padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  this->_padding_ = (longlong)&___7UEnvQueryGenerator__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddItemDataForCircle @ 146f34970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UEnvQueryGenerator_OnCircle::AddItemDataForCircle
          (UEnvQueryGenerator_OnCircle *this,uchar *param_1,UEnvQueryItemType *param_2,
          TArray<FNavLocation,TSizedDefaultAllocator<32>_> *param_3,FEnvQueryInstance *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000146f3497b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e8))(this,param_3,param_4);
  return;
}

// CalcDirection @ 146f35f80

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector<double> * __thiscall
UEnvQueryGenerator_OnCircle::CalcDirection
          (UEnvQueryGenerator_OnCircle *this,TVector<double> *__return_storage_ptr__,
          FEnvQueryInstance *param_1)

{
  double dVar1;
  undefined1 uVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  UObject *pUVar9;
  TVector<double> *pTVar10;
  UClass *pUVar11;
  TVector<double>_u_0 *pTVar12;
  UClass *pUVar13;
  ForAnyElementType FVar14;
  wchar_t *pwVar15;
  UObject *pUVar16;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_d8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_c8;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> local_b8;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  TVector<double> local_78;
  TVector<double> local_60;
  TVector<double> local_48;
  
  pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_1->_padding_ + 4));
  if ((pUVar9 == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Querier != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\Generators\\EnvQueryGenerator_OnCircle.cpp"
                         ,0x38,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TVector<double> *)(*pcVar4)();
    return pTVar10;
  }
  uVar6 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  if (this->bDefineArc == 0) {
    return __return_storage_ptr__;
  }
  pUVar16 = (UObject *)0x0;
  if (pUVar9 != (UObject *)0x0) {
    pUVar11 = Z_Construct_UClass_AActor_NoRegister();
    iVar3 = (int)pUVar11->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar11->_padding_)) {
      if (*(USceneComponent **)(pUVar9 + 0xb) == (USceneComponent *)0x0) {
        pTVar12 = &local_90;
        local_90._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
        local_90._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
        local_90._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
      }
      else {
        pTVar12 = &USceneComponent::GetForwardVector(*(USceneComponent **)(pUVar9 + 0xb),&local_78)
                   ->field0_0x0;
      }
      dVar5 = (pTVar12->_s_0).Y;
      dVar1 = (pTVar12->_s_0).Z;
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           (((TVector<double>_u_0 *)&(pTVar12->_s_0).X)->_s_0).X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
      pUVar16 = pUVar9;
    }
  }
  if ((this->ArcDirection).DirMode.Value != '\0') {
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    pUVar11 = (this->ArcDirection).Rotation.Class.field0_0x0.DebugPtr;
    if ((pUVar11 == (UClass *)0x0) ||
       (pUVar13 = UEnvQueryContext::StaticClass(), pUVar13 == (UClass *)0x0)) {
LAB_146f362c1:
      pUVar11 = (UClass *)0x0;
    }
    else {
      iVar3 = (int)pUVar13->_padding_;
      if (((int)pUVar11->_padding_ < iVar3) ||
         ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar3 * 8) !=
          &pUVar13->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (!bVar8) goto LAB_146f362c1;
      pUVar11 = (this->ArcDirection).Rotation.Class.field0_0x0.DebugPtr;
    }
    FEnvQueryInstance::PrepareContext(param_1,pUVar11,&local_b8);
    if (local_b8.ArrayNum < 1) {
      FVar14.Data = local_b8.AllocatorInstance.Data;
      if (pUVar16 == (UObject *)0x0) {
        if (FVisualLogger::bIsRecording == 0) goto joined_r0x000146f36352;
        pwVar15 = 
        L"UEnvQueryGenerator_OnCircle::CalcDirection failed to calc direction in %s.  Querier is not an actor, so we\'ll just use the world \'forward\' direction."
        ;
      }
      else {
        if (FVisualLogger::bIsRecording == 0) goto joined_r0x000146f36352;
        pwVar15 = 
        L"UEnvQueryGenerator_OnCircle::CalcDirection failed to calc direction in %s. Using querier facing."
        ;
      }
      FVisualLogger::CategorizedLogfImpl(pUVar9,(FName *)&LogEQS.field_0x4,Warning,pwVar15);
      FVar14.Data = local_b8.AllocatorInstance.Data;
    }
    else {
      pTVar10 = UE::Math::TRotator<double>::Vector
                          ((TRotator<double> *)local_b8.AllocatorInstance.Data,&local_48);
      dVar5 = (pTVar10->field0_0x0)._s_0.Y;
      dVar1 = (pTVar10->field0_0x0)._s_0.Z;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar10->field0_0x0)._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
      FVar14.Data = local_b8.AllocatorInstance.Data;
    }
    goto joined_r0x000146f36352;
  }
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  pUVar11 = (this->ArcDirection).LineFrom.Class.field0_0x0.DebugPtr;
  if ((pUVar11 == (UClass *)0x0) ||
     (pUVar13 = UEnvQueryContext::StaticClass(), pUVar13 == (UClass *)0x0)) {
LAB_146f360e7:
    pUVar11 = (UClass *)0x0;
  }
  else {
    iVar3 = (int)pUVar13->_padding_;
    if (((int)pUVar11->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar3 * 8) !=
        &pUVar13->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (!bVar8) goto LAB_146f360e7;
    pUVar11 = (this->ArcDirection).LineFrom.Class.field0_0x0.DebugPtr;
  }
  FEnvQueryInstance::PrepareContext(param_1,pUVar11,&local_d8);
  pUVar11 = (this->ArcDirection).LineTo.Class.field0_0x0.DebugPtr;
  if ((pUVar11 == (UClass *)0x0) ||
     (pUVar13 = UEnvQueryContext::StaticClass(), pUVar13 == (UClass *)0x0)) {
LAB_146f36139:
    pUVar11 = (UClass *)0x0;
  }
  else {
    iVar3 = (int)pUVar13->_padding_;
    if (((int)pUVar11->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar3 * 8) !=
        &pUVar13->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (!bVar8) goto LAB_146f36139;
    pUVar11 = (this->ArcDirection).LineTo.Class.field0_0x0.DebugPtr;
  }
  FEnvQueryInstance::PrepareContext(param_1,pUVar11,&local_c8);
  FVar7.Data = local_c8.AllocatorInstance.Data;
  if ((local_d8.ArrayNum < 1) || (local_c8.ArrayNum < 1)) {
    FVar14.Data = local_d8.AllocatorInstance.Data;
    if (pUVar16 == (UObject *)0x0) {
      if (FVisualLogger::bIsRecording != 0) {
        pwVar15 = 
        L"UEnvQueryGenerator_OnCircle::CalcDirection failed to calc direction in %s.  Querier is not an actor, so we\'ll just use the world \'forward\' direction."
        ;
        goto LAB_146f36234;
      }
    }
    else if (FVisualLogger::bIsRecording != 0) {
      pwVar15 = 
      L"UEnvQueryGenerator_OnCircle::CalcDirection failed to calc direction in %s. Using querier facing."
      ;
LAB_146f36234:
      FVisualLogger::CategorizedLogfImpl(pUVar9,(FName *)&LogEQS.field_0x4,Warning,pwVar15);
      FVar14.Data = local_d8.AllocatorInstance.Data;
    }
  }
  else {
    if ((local_d8.ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TVector<double> *)(*pcVar4)();
      return pTVar10;
    }
    FVar14.Data = local_d8.AllocatorInstance.Data;
    local_a8._s_0.X = *(double *)FVar7.Data - *(double *)local_d8.AllocatorInstance.Data;
    local_a8._s_0.Z =
         *(double *)(FVar7.Data + 0x10) - *(double *)(local_d8.AllocatorInstance.Data + 0x10);
    local_a8._s_0.Y = *(double *)(FVar7.Data + 8) - *(double *)(local_d8.AllocatorInstance.Data + 8)
    ;
    pTVar10 = UE::Math::TVector<double>::GetSafeNormal
                        ((TVector<double> *)&local_a8._s_0,&local_60,__real_3e45798ee0000000,
                         &UE::Math::TVector<double>::ZeroVector);
    dVar5 = (pTVar10->field0_0x0)._s_0.Y;
    dVar1 = (pTVar10->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar10->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  }
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
    FVar14.Data = local_d8.AllocatorInstance.Data;
  }
joined_r0x000146f36352:
  if ((TRotator<double> *)FVar14.Data != (TRotator<double> *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  return __return_storage_ptr__;
}

// GenerateItems @ 146f4dca0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UEnvQueryGenerator_OnCircle::GenerateItems
          (UEnvQueryGenerator_OnCircle *this,FEnvQueryInstance *param_1)

{
  EPointOnCircleSpacingMethod EVar1;
  longlong *plVar2;
  FName FVar3;
  UObject *pUVar4;
  code *pcVar5;
  longlong lVar6;
  TObjectPtr<UClass>_u_0 TVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FProperty *pFVar12;
  FProperty *pFVar13;
  float *pfVar14;
  int *piVar15;
  TVector<double> *pTVar16;
  UClass *pUVar17;
  UClass *pUVar18;
  double *pdVar19;
  TObjectPtr<UClass>_u_0 TVar20;
  TObjectPtr<UClass>_u_0 TVar21;
  ulonglong uVar22;
  TObjectPtr<UObject>_u_0 TVar23;
  int iVar24;
  ushort uVar25;
  uchar *puVar26;
  float fVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_126;
  undefined1 local_125;
  ushort local_124;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_120;
  FProperty *local_110;
  TObjectPtr<UClass>_u_0 local_108;
  int local_100;
  uchar *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  TObjectPtr<UObject>_u_0 local_e0;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double> local_a8;
  undefined1 local_90 [88];
  
  pFVar12 = (FProperty *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_1->_padding_ + 4));
  if (pFVar12 == (FProperty *)0x0) {
    return;
  }
  lVar6 = param_1->_padding_;
  TVar21.DebugPtr = (UClass *)0x0;
  plVar2 = (longlong *)(this->CircleRadius)._padding_;
  local_110 = pFVar12;
  if (plVar2 != (longlong *)0x0) {
    (this->CircleRadius)._padding_ = 0;
    (**(code **)(*plVar2 + 0x2b0))(plVar2,pFVar12,(int)lVar6);
    FVar3 = (FName)(this->CircleRadius)._padding_;
    if (FVar3 != (FName)0x0) {
      pFVar13 = UStruct::FindPropertyByName
                          (*(UStruct **)((this->CircleRadius)._padding_ + 0x10),FVar3);
      if ((pFVar13 == (FProperty *)0x0) ||
         (cVar8 = (**(code **)((this->CircleRadius)._padding_ + 8))(&this->CircleRadius),
         cVar8 == '\0')) {
        local_res18[0] = 0;
        bVar9 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(local_res18);
        if (!bVar9) goto LAB_146f4dd78;
      }
      (this->CircleRadius)._padding_ = (longlong)pFVar13;
    }
  }
LAB_146f4dd78:
  lVar6 = param_1->_padding_;
  plVar2 = (longlong *)(this->SpaceBetween)._padding_;
  if (plVar2 != (longlong *)0x0) {
    (this->SpaceBetween)._padding_ = 0;
    (**(code **)(*plVar2 + 0x2b0))(plVar2,pFVar12,(int)lVar6);
    FVar3 = (FName)(this->SpaceBetween)._padding_;
    if (FVar3 != (FName)0x0) {
      pFVar13 = UStruct::FindPropertyByName
                          (*(UStruct **)((this->SpaceBetween)._padding_ + 0x10),FVar3);
      if ((pFVar13 == (FProperty *)0x0) ||
         (cVar8 = (**(code **)((this->SpaceBetween)._padding_ + 8))(&this->SpaceBetween),
         cVar8 == '\0')) {
        local_res20[0] = 0;
        bVar9 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(local_res20);
        if (!bVar9) goto LAB_146f4ddea;
      }
      (this->SpaceBetween)._padding_ = (longlong)pFVar13;
    }
  }
LAB_146f4ddea:
  lVar6 = param_1->_padding_;
  plVar2 = (longlong *)(this->ArcAngle)._padding_;
  if (plVar2 != (longlong *)0x0) {
    (this->ArcAngle)._padding_ = 0;
    (**(code **)(*plVar2 + 0x2b0))(plVar2,pFVar12,(int)lVar6);
    FVar3 = (FName)(this->ArcAngle)._padding_;
    if (FVar3 != (FName)0x0) {
      pFVar13 = UStruct::FindPropertyByName(*(UStruct **)((this->ArcAngle)._padding_ + 0x10),FVar3);
      if ((pFVar13 == (FProperty *)0x0) ||
         (cVar8 = (**(code **)((this->ArcAngle)._padding_ + 8))(&this->ArcAngle), cVar8 == '\0')) {
        local_128 = 0;
        bVar9 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(&local_128);
        if (!bVar9) goto LAB_146f4de5e;
      }
      (this->ArcAngle)._padding_ = (longlong)pFVar13;
    }
  }
LAB_146f4de5e:
  plVar2 = (longlong *)(this->CircleCenterZOffset)._padding_;
  lVar6 = param_1->_padding_;
  if (plVar2 != (longlong *)0x0) {
    (this->CircleCenterZOffset)._padding_ = 0;
    (**(code **)(*plVar2 + 0x2b0))(plVar2,pFVar12,(int)lVar6);
    FVar3 = (FName)(this->CircleCenterZOffset)._padding_;
    if (FVar3 != (FName)0x0) {
      pFVar13 = UStruct::FindPropertyByName
                          (*(UStruct **)((this->CircleCenterZOffset)._padding_ + 0x10),FVar3);
      if ((pFVar13 == (FProperty *)0x0) ||
         (cVar8 = (**(code **)((this->CircleCenterZOffset)._padding_ + 8))
                            (&this->CircleCenterZOffset), cVar8 == '\0')) {
        local_127 = 0;
        bVar9 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(&local_127);
        if (!bVar9) goto LAB_146f4dedb;
      }
      (this->CircleCenterZOffset)._padding_ = (longlong)pFVar13;
    }
  }
LAB_146f4dedb:
  plVar2 = (longlong *)(this->NumberOfPoints)._padding_;
  lVar6 = param_1->_padding_;
  if (plVar2 != (longlong *)0x0) {
    (this->NumberOfPoints)._padding_ = 0;
    (**(code **)(*plVar2 + 0x2b0))(plVar2,pFVar12,(int)lVar6);
    FVar3 = (FName)(this->NumberOfPoints)._padding_;
    if (FVar3 != (FName)0x0) {
      pFVar12 = UStruct::FindPropertyByName
                          (*(UStruct **)((this->NumberOfPoints)._padding_ + 0x10),FVar3);
      if ((pFVar12 == (FProperty *)0x0) ||
         (cVar8 = (**(code **)((this->NumberOfPoints)._padding_ + 8))(&this->NumberOfPoints),
         cVar8 == '\0')) {
        local_126 = 0;
        bVar9 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(&local_126);
        if (!bVar9) goto LAB_146f4df4f;
      }
      (this->NumberOfPoints)._padding_ = (longlong)pFVar12;
    }
  }
LAB_146f4df4f:
  plVar2 = (longlong *)(this->ArcDirectionOffsetDegrees)._padding_;
  if (plVar2 != (longlong *)0x0) {
    (this->ArcDirectionOffsetDegrees)._padding_ = 0;
    (**(code **)(*plVar2 + 0x2b0))(plVar2,local_110);
    FVar3 = (FName)(this->ArcDirectionOffsetDegrees)._padding_;
    if (FVar3 != (FName)0x0) {
      local_110 = UStruct::FindPropertyByName
                            (*(UStruct **)((this->ArcDirectionOffsetDegrees)._padding_ + 0x10),FVar3
                            );
      if ((local_110 == (FProperty *)0x0) ||
         (cVar8 = (**(code **)((this->ArcDirectionOffsetDegrees)._padding_ + 8))
                            (&this->ArcDirectionOffsetDegrees), cVar8 == '\0')) {
        local_125 = 0;
        bVar9 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(&local_125);
        if (!bVar9) goto LAB_146f4dfcc;
      }
      (this->ArcDirectionOffsetDegrees)._padding_ = (longlong)local_110;
    }
  }
LAB_146f4dfcc:
  pFVar12 = (FProperty *)(this->ArcAngle)._padding_;
  if ((pFVar12 == (FProperty *)0x0) ||
     (pfVar14 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          (pFVar12,(UObject *)(this->ArcAngle)._padding_,0), pfVar14 == (float *)0x0
     )) {
    fVar29 = (this->ArcAngle).DefaultValue;
  }
  else {
    fVar29 = *pfVar14;
  }
  pFVar12 = (FProperty *)(this->CircleRadius)._padding_;
  if ((pFVar12 == (FProperty *)0x0) ||
     (pfVar14 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          (pFVar12,(UObject *)(this->CircleRadius)._padding_,0),
     pfVar14 == (float *)0x0)) {
    fVar30 = (this->CircleRadius).DefaultValue;
  }
  else {
    fVar30 = *pfVar14;
  }
  pFVar12 = (FProperty *)(this->SpaceBetween)._padding_;
  if ((pFVar12 == (FProperty *)0x0) ||
     (pfVar14 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          (pFVar12,(UObject *)(this->SpaceBetween)._padding_,0),
     pfVar14 == (float *)0x0)) {
    fVar27 = (this->SpaceBetween).DefaultValue;
  }
  else {
    fVar27 = *pfVar14;
  }
  pFVar12 = (FProperty *)(this->NumberOfPoints)._padding_;
  if ((pFVar12 == (FProperty *)0x0) ||
     (piVar15 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          (pFVar12,(UObject *)(this->NumberOfPoints)._padding_,0),
     piVar15 == (int *)0x0)) {
    iVar24 = (this->NumberOfPoints).DefaultValue;
  }
  else {
    iVar24 = *piVar15;
  }
  pFVar12 = (FProperty *)(this->ArcDirectionOffsetDegrees)._padding_;
  if ((pFVar12 == (FProperty *)0x0) ||
     (pfVar14 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          (pFVar12,(UObject *)(this->ArcDirectionOffsetDegrees)._padding_,0),
     pfVar14 == (float *)0x0)) {
    fVar31 = (this->ArcDirectionOffsetDegrees).DefaultValue;
  }
  else {
    fVar31 = *pfVar14;
  }
  if (fVar29 <= 0.0) {
    return;
  }
  if (__real_43b40000 < fVar29) {
    return;
  }
  if (fVar30 <= 0.0) {
    return;
  }
  EVar1 = this->PointOnCircleSpacingMethod;
  if ((EVar1 == BySpaceBetween) && (fVar27 <= 0.0)) {
    return;
  }
  if ((EVar1 == ByNumberOfPoints) && (iVar24 < 1)) {
    return;
  }
  if (EVar1 == BySpaceBetween) {
    fVar27 = (fVar29 * fVar30 * __real_3c8efa36) / fVar27;
    iVar10 = -((int)ROUND(__real_bf000000 - (fVar27 + fVar27)) >> 1);
    iVar24 = iVar10 + 1;
  }
  else {
    iVar10 = iVar24;
    if (EVar1 != ByNumberOfPoints) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5598996083771441333>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\Generators\\EnvQueryGenerator_OnCircle.cpp"
                         ,0xb5,"false");
      if (!bVar9) {
        return;
      }
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  CalcDirection(this,(TVector<double> *)&local_d8._s_0,param_1);
  pTVar16 = UE::Math::TVector<double>::RotateAngleAxis
                      ((TVector<double> *)&local_d8._s_0,&local_a8,
                       (double)(fVar31 - fVar29 * __real_3f000000),
                       &UE::Math::TVector<double>::UpVector);
  pUVar18 = (this->CircleCenter).Class.field0_0x0.DebugPtr;
  dVar28 = (double)fVar30;
  local_d8._s_0.Z = dVar28 * (pTVar16->field0_0x0)._s_0.Z;
  local_d8._s_0.X = dVar28 * (pTVar16->field0_0x0)._s_0.X;
  local_d8._s_0.Y = dVar28 * (pTVar16->field0_0x0)._s_0.Y;
  local_108.DebugPtr = (UClass *)0x0;
  local_100 = 0;
  local_f8 = (uchar *)0x0;
  local_f0 = 0;
  TVar20.DebugPtr = TVar21.DebugPtr;
  local_c0._s_0.Z = local_d8._s_0.Z;
  if ((pUVar18 != (UClass *)0x0) &&
     (pUVar17 = UEnvQueryContext::StaticClass(), pUVar17 != (UClass *)0x0)) {
    iVar11 = (int)pUVar17->_padding_;
    if (((int)pUVar18->_padding_ < iVar11) ||
       ((longlong *)*(undefined1 **)(pUVar18->_padding_ + (longlong)iVar11 * 8) !=
        &pUVar17->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) {
      TVar20.DebugPtr = (this->CircleCenter).Class.field0_0x0.DebugPtr;
    }
  }
  bVar9 = FEnvQueryInstance::PrepareContext
                    (param_1,TVar20.DebugPtr,(FEnvQueryContextData *)&local_108.ObjectPtr);
  TVar20 = local_108;
  if (((!bVar9) || (local_108.DebugPtr == (UClass *)0x0)) ||
     (pUVar18 = UEnvQueryItemType::StaticClass(), TVar7 = local_108, pUVar18 == (UClass *)0x0))
  goto LAB_146f4e5e9;
  iVar11 = (int)pUVar18->_padding_;
  if (((int)(TVar20.DebugPtr)->_padding_ < iVar11) ||
     ((longlong *)*(undefined1 **)((TVar20.DebugPtr)->_padding_ + (longlong)iVar11 * 8) !=
      &pUVar18->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if ((!bVar9) || (local_108.DebugPtr == (UClass *)0x0)) goto LAB_146f4e5e9;
  pUVar18 = UEnvQueryItemType::StaticClass();
  if (pUVar18 == (UClass *)0x0) {
LAB_146f4e2e4:
    TVar20.DebugPtr = TVar21.DebugPtr;
  }
  else {
    iVar11 = (int)pUVar18->_padding_;
    if (((int)(TVar7.DebugPtr)->_padding_ < iVar11) ||
       ((longlong *)*(undefined1 **)((TVar7.DebugPtr)->_padding_ + (longlong)iVar11 * 8) !=
        &pUVar18->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    TVar20 = local_108;
    if (!bVar9) goto LAB_146f4e2e4;
  }
  pUVar18 = UEnvQueryItemType_VectorBase::StaticClass();
  TVar7 = local_108;
  if (pUVar18 == (UClass *)0x0) goto LAB_146f4e5e9;
  iVar11 = (int)pUVar18->_padding_;
  if (((int)(TVar20.DebugPtr)->_padding_ < iVar11) ||
     ((longlong *)*(undefined1 **)((TVar20.DebugPtr)->_padding_ + (longlong)iVar11 * 8) !=
      &pUVar18->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) goto LAB_146f4e5e9;
  TVar20.DebugPtr = TVar21.DebugPtr;
  if ((local_108.DebugPtr != (UClass *)0x0) &&
     (pUVar18 = UEnvQueryItemType::StaticClass(), pUVar18 != (UClass *)0x0)) {
    iVar11 = (int)pUVar18->_padding_;
    if (((int)(TVar7.DebugPtr)->_padding_ < iVar11) ||
       ((longlong *)*(undefined1 **)((TVar7.DebugPtr)->_padding_ + (longlong)iVar11 * 8) !=
        &pUVar18->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) {
      TVar20 = local_108;
    }
  }
  if (((TVar20.DebugPtr)->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(TVar20.DebugPtr);
  }
  TVar7 = local_108;
  TVar23 = (TObjectPtr<UObject>_u_0)
           ((TObjectPtr<UObject>_u_0 *)((longlong)TVar20 + 0x110))->DebugPtr;
  uVar25 = *(ushort *)(TVar23.DebugPtr + 1);
  local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.ArrayNum = 0;
  local_120.ArrayMax = 0;
  local_124 = uVar25;
  local_e0 = TVar23;
  if (this->bIgnoreAnyContextActorsWhenGeneratingCircle != false) {
    if ((local_108.DebugPtr == (UClass *)0x0) ||
       (pUVar18 = UEnvQueryItemType::StaticClass(), pUVar18 == (UClass *)0x0)) {
LAB_146f4e3e3:
      TVar20.DebugPtr = TVar21.DebugPtr;
    }
    else {
      iVar11 = (int)pUVar18->_padding_;
      if (((int)(TVar7.DebugPtr)->_padding_ < iVar11) ||
         ((longlong *)*(undefined1 **)((TVar7.DebugPtr)->_padding_ + (longlong)iVar11 * 8) !=
          &pUVar18->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      TVar20 = local_108;
      if (!bVar9) goto LAB_146f4e3e3;
    }
    if (((TVar20.DebugPtr)->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(TVar20.DebugPtr);
    }
    pUVar4 = ((TVar20.DebugPtr)->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar4 != (UObject *)0x0) {
      pUVar18 = UEnvQueryItemType_ActorBase::StaticClass();
      iVar11 = (int)pUVar18->_padding_;
      if (((iVar11 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar11 * 8) ==
           &pUVar18->_padding_)) && (uVar25 = local_124, 0 < local_100)) {
        uVar22 = (ulonglong)local_124;
        TVar20.DebugPtr = TVar21.DebugPtr;
        puVar26 = local_f8;
        do {
          local_e8 = (**(code **)(*(longlong *)pUVar4 + 0x2d8))(pUVar4,puVar26);
          if (local_e8 != 0) {
            if (((local_120.AllocatorInstance.Data <= (FScriptContainerElement *)&local_e8) &&
                ((FScriptContainerElement *)&local_e8 <
                 local_120.AllocatorInstance.Data + (longlong)local_120.ArrayMax * 8)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar11 = local_120.ArrayNum;
            if (local_120.ArrayNum == local_120.ArrayMax) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_120.AllocatorInstance,&local_120.ArrayMax);
            }
            local_120.ArrayNum = iVar11 + 1;
            *(longlong *)(local_120.AllocatorInstance.Data + (longlong)iVar11 * 8) = local_e8;
          }
          puVar26 = puVar26 + uVar22;
          TVar20._0_4_ = TVar20._0_4_ + 1;
          TVar20._4_4_ = 0;
          TVar23 = local_e0;
          uVar25 = local_124;
        } while ((int)TVar20._0_4_ < local_100);
      }
    }
  }
  puVar26 = local_f8;
  pFVar12 = (FProperty *)(this->CircleCenterZOffset)._padding_;
  if ((pFVar12 == (FProperty *)0x0) ||
     (pfVar14 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          (pFVar12,(UObject *)(this->CircleCenterZOffset)._padding_,0),
     pfVar14 == (float *)0x0)) {
    fVar30 = (this->CircleCenterZOffset).DefaultValue;
  }
  else {
    fVar30 = *pfVar14;
  }
  if (0 < local_100) {
    do {
      pdVar19 = (double *)
                (**(code **)(*(longlong *)&(TVar23.DebugPtr)->field_0x0 + 0x2c8))
                          (TVar23.DebugPtr,local_90,puVar26);
      local_c0._s_0.Z = (double)fVar30 + pdVar19[2];
      local_c0._s_0.X = *pdVar19;
      local_c0._s_0.Y = pdVar19[1];
      GenerateItemsForCircle
                (this,puVar26,(UEnvQueryItemType *)TVar23.DebugPtr,(TVector<double> *)&local_c0._s_0
                 ,(TVector<double> *)&local_d8._s_0,&local_120,iVar24,fVar29 / (float)iVar10,param_1
                );
      puVar26 = puVar26 + uVar25;
      TVar21._0_4_ = TVar21._0_4_ + 1;
      TVar21._4_4_ = 0;
    } while ((int)TVar21._0_4_ < local_100);
  }
  if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.AllocatorInstance.Data);
  }
LAB_146f4e5e9:
  if (local_f8 != (uchar *)0x0) {
    FMemory::Free(local_f8);
  }
  return;
}

// GenerateItemsForCircle @ 146f4f210

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UEnvQueryGenerator_OnCircle::GenerateItemsForCircle
          (UEnvQueryGenerator_OnCircle *this,uchar *param_1,UEnvQueryItemType *param_2,
          TVector<double> *param_3,TVector<double> *param_4,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_5,int param_6,float param_7,
          FEnvQueryInstance *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uchar uVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  int iVar13;
  UObject *pUVar14;
  UClass *pUVar15;
  ANavigationData *pAVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  TArray<FNavLocation,TSizedDefaultAllocator<32>_> local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  ulonglong uVar19;
  
  uVar17 = 0;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x20,8,param_6,&local_f8.AllocatorInstance,&local_f8.ArrayNum,
                      &local_f8.ArrayMax);
  memset(local_f8.AllocatorInstance.Data + (longlong)iVar13 * 0x20,0,(longlong)param_6 << 5);
  if (0 < param_6) {
    uVar22 = (undefined4)__real_3ff0000000000000;
    uVar23 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    uVar19 = uVar17;
    do {
      __libm_sse2_sincos_();
      dVar1 = (param_4->field0_0x0)._s_0.Z;
      dVar2 = (param_4->field0_0x0)._s_0.Y;
      dVar3 = (param_4->field0_0x0)._s_0.X;
      dStack_d0 = 0.0;
      dVar10 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
      dVar6 = (double)CONCAT44(uVar23,uVar22) - dVar10;
      dVar11 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) *
               UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
      dVar21 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) *
               UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
      dVar8 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) *
              UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
      dVar20 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y *
               UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * dVar6;
      dVar9 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z *
              UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * dVar6;
      dVar7 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z *
              UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * dVar6;
      local_e8 = (UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X *
                  UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * dVar6 + dVar10) * dVar3 +
                 (dVar7 + dVar8) * dVar1 + (dVar20 - dVar21) * dVar2 + (param_3->field0_0x0)._s_0.X;
      local_d8 = (UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z *
                  UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * dVar6 + dVar10) * dVar1 +
                 (dVar7 - dVar8) * dVar3 + (dVar9 + dVar11) * dVar2 + (param_3->field0_0x0)._s_0.Z;
      dStack_e0 = (dVar20 + dVar21) * dVar3 + (dVar9 - dVar11) * dVar1 +
                  (UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y *
                   UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * dVar6 + dVar10) * dVar2 +
                  (param_3->field0_0x0)._s_0.Y;
      if ((local_f8.ArrayNum <= (int)uVar19) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar18 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar18;
      uVar22 = (undefined4)__real_3ff0000000000000;
      uVar23 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      *(double *)(local_f8.AllocatorInstance.Data + uVar17) = local_e8;
      *(double *)(local_f8.AllocatorInstance.Data + uVar17 + 8) = dStack_e0;
      *(double *)(local_f8.AllocatorInstance.Data + uVar17 + 0x10) = local_d8;
      *(double *)(local_f8.AllocatorInstance.Data + uVar17 + 0x10 + 8) = dStack_d0;
      uVar17 = uVar17 + 0x20;
    } while ((int)uVar18 < param_6);
  }
  uVar4 = (this->TraceData).TraceMode.Value;
  if (uVar4 == '\0') goto LAB_146f4f6d6;
  if (uVar4 == '\x01') {
    pAVar16 = FEQSHelpers::FindNavigationDataForQuery(param_8);
    pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_8->_padding_ + 4));
    if ((pAVar16 != (ANavigationData *)0x0) && (pUVar14 != (UObject *)0x0)) {
      FEQSHelpers::RunNavRaycasts(pAVar16,pUVar14,&this->TraceData,param_3,&local_f8,Keep);
    }
    goto LAB_146f4f6d6;
  }
  if ((uVar4 == '\x02') || (uVar4 == '\x03')) {
    FEQSHelpers::RunPhysRaycasts
              ((param_8->World).field0_0x0.DebugPtr,&this->TraceData,param_3,&local_f8,param_5,Keep)
    ;
    goto LAB_146f4f6d6;
  }
  if (uVar4 == '\x04') {
    pAVar16 = FEQSHelpers::FindNavigationDataForQuery(param_8);
    pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_8->_padding_ + 4));
    if ((pAVar16 != (ANavigationData *)0x0) && (pUVar14 != (UObject *)0x0)) {
      FEQSHelpers::RunRaycastsOnNavHitOnlyWalls
                (pAVar16,pUVar14,&this->TraceData,param_3,&local_f8,param_5,Keep);
    }
    goto LAB_146f4f6d6;
  }
  if (FVisualLogger::bIsRecording == 0) goto LAB_146f4f6d6;
  pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_8->_padding_ + 4));
  if (pUVar14 == (UObject *)0x0) {
LAB_146f4f5e7:
    pUVar14 = (UObject *)0x0;
  }
  else {
    pUVar15 = Z_Construct_UClass_AActor_NoRegister();
    iVar13 = (int)pUVar15->_padding_;
    if ((*(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar15->_padding_)) goto LAB_146f4f5e7;
  }
  FVisualLogger::CategorizedLogfImpl
            (pUVar14,(FName *)&LogEQS.field_0x4,Warning,
             L"UEnvQueryGenerator_OnCircle::CalcDirection has invalid value for TraceData.TraceMode.  Query: %s"
            );
LAB_146f4f6d6:
  (**(code **)(this->_padding_ + 0x2e0))(this,&local_f8,param_8);
  (**(code **)(this->_padding_ + 0x2f0))(this,param_1,param_2,&local_f8,param_8);
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  return;
}

// GetDescriptionDetails @ 146f51af0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UEnvQueryGenerator_OnCircle::GetDescriptionDetails
          (UEnvQueryGenerator_OnCircle *this,FText *__return_storage_ptr__)

{
  EPointOnCircleSpacingMethod EVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_378
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_368
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_358
  ;
  FText local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FFormatArgumentValue local_2a8;
  FFormatArgumentValue local_288;
  FFormatArgumentValue local_268;
  FFormatArgumentValue local_248;
  FFormatArgumentValue local_228;
  FFormatArgumentValue local_208;
  FFormatArgumentValue local_1e8;
  FFormatArgumentValue local_1c8;
  FFormatArgumentValue local_1a8;
  FText local_188;
  FString local_178;
  FText local_168;
  FString local_158;
  FText local_148;
  FString local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FString local_98;
  FText local_88;
  FText local_78;
  FTextFormat local_68;
  FTextFormat local_58;
  FTextFormat local_48;
  FTextFormat local_38;
  
  local_res8[0] = 0;
  local_378.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.Pairs.ArrayNum = 0;
  local_378.Pairs.ArrayMax = 0;
  pFVar4 = FAIDataProviderValue::ToString((FAIDataProviderValue *)&this->CircleRadius,&local_178);
  pFVar5 = FText::FromString(&local_188,pFVar4);
  local_228.Type = Text;
  FText::FText((FText *)&local_228.TextValue,pFVar5);
  if ((local_228.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FText *)(*pcVar2)();
    return pFVar5;
  }
  ::FString::FString(&local_338,L"Radius");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_378,&local_338,&local_228);
  if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Data.AllocatorInstance.Data);
  }
  if (local_228.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_228.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_188.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  pFVar4 = FAIDataProviderValue::ToString((FAIDataProviderValue *)&this->SpaceBetween,&local_158);
  pFVar5 = FText::FromString(&local_168,pFVar4);
  local_208.Type = Text;
  FText::FText((FText *)&local_208.TextValue,pFVar5);
  if ((local_208.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FText *)(*pcVar2)();
    return pFVar5;
  }
  ::FString::FString(&local_328,L"ItemSpacing");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_378,&local_328,&local_208);
  if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Data.AllocatorInstance.Data);
  }
  if (local_208.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_208.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_168.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  pFVar4 = FAIDataProviderValue::ToString((FAIDataProviderValue *)&this->NumberOfPoints,&local_138);
  pFVar5 = FText::FromString(&local_148,pFVar4);
  local_1e8.Type = Text;
  FText::FText((FText *)&local_1e8.TextValue,pFVar5);
  if ((local_1e8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FText *)(*pcVar2)();
    return pFVar5;
  }
  ::FString::FString(&local_318,L"NumberOfPoints");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_378,&local_318,&local_1e8);
  if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.Data.AllocatorInstance.Data);
  }
  if (local_1e8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_1e8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_148.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  pFVar5 = FEnvTraceData::ToText(&this->TraceData,&local_c8,Detailed);
  local_1c8.Type = Text;
  FText::FText((FText *)&local_1c8.TextValue,pFVar5);
  if ((local_1c8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FText *)(*pcVar2)();
    return pFVar5;
  }
  ::FString::FString(&local_308,L"TraceData");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_378,&local_308,&local_1c8);
  if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Data.AllocatorInstance.Data);
  }
  if (local_1c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_1c8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
  }
  EVar1 = this->PointOnCircleSpacingMethod;
  pwVar8 = L"radius: {Radius}, item span: {ItemSpacing}\n{TraceData}";
  bVar3 = EVar1 != BySpaceBetween;
  pwVar7 = L"OnCircleDescriptionSpan";
  pFVar5 = &local_f8;
  if (bVar3) {
    pwVar8 = L"radius: {Radius}, number of items to generate: {NumberOfPoints}\n{TraceData}";
    pwVar7 = L"OnCircleDescriptionNumItems";
    pFVar5 = &local_e8;
  }
  pFVar5 = FText::AsLocalizable_Advanced_LocText(pFVar5,L"EnvQueryGenerator",pwVar7,pwVar8);
  pFVar6 = &local_68;
  if (EVar1 == BySpaceBetween) {
    pFVar6 = &local_58;
  }
  pFVar6 = FTextFormat::FTextFormat(pFVar6,pFVar5,Default);
  pFVar5 = &local_d8;
  if (EVar1 == BySpaceBetween) {
    pFVar5 = &local_b8;
  }
  pFVar5 = FText::Format(pFVar5,pFVar6,&local_378);
  FText::FText(__return_storage_ptr__,pFVar5);
  if ((bVar3) && (local_d8.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
  }
  if ((bVar3) && (local_e8.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  if ((!bVar3) && (local_b8.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
  }
  if ((!bVar3) && (local_f8.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
  }
  if (this->bDefineArc != 0) {
    local_268.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(__return_storage_ptr__->TextData).Reference;
    local_368.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_368.Pairs.ArrayNum = 0;
    local_368.Pairs.ArrayMax = 0;
    local_268.Type = Text;
    if (local_268.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_268.TextValue.field0_0x0.TypedValue.TextData.Reference + 8))
                (local_268.TextValue.field0_0x0.TypedValue.TextData.Reference,local_res8);
    }
    local_268.TextValue.field0_0x0.TypedValue.Flags = __return_storage_ptr__->Flags;
    if ((local_268.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
    ::FString::FString(&local_2f8,L"Description");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_368,&local_2f8,&local_268);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
    if (local_268.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_268.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    pFVar4 = FAIDataProviderValue::ToString((FAIDataProviderValue *)&this->ArcAngle,&local_98);
    pFVar5 = FText::FromString(&local_a8,pFVar4);
    local_1a8.Type = Text;
    FText::FText((FText *)&local_1a8.TextValue,pFVar5);
    if ((local_1a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
    ::FString::FString(&local_2e8,L"AngleValue");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_368,&local_2e8,&local_1a8);
    if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
    }
    if (local_1a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_1a8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    pFVar5 = FEnvDirection::ToText(&this->ArcDirection,&local_88);
    local_248.Type = Text;
    FText::FText((FText *)&local_248.TextValue,pFVar5);
    if ((local_248.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
    ::FString::FString(&local_2d8,L"ArcDirection");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_368,&local_2d8,&local_248);
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
    if (local_248.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_248.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_128,L"EnvQueryGenerator",L"DescriptionWithArc",
                        L"{Description}\nLimit to {AngleValue} angle both sides on {ArcDirection}");
    pFVar6 = FTextFormat::FTextFormat(&local_38,pFVar5,Default);
    pFVar5 = FText::Format(&local_78,pFVar6,&local_368);
    FText::operator=(__return_storage_ptr__,pFVar5);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    if (local_128.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
    }
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_368.Pairs.AllocatorInstance.Data,
               local_368.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_368.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_368.Pairs.AllocatorInstance.Data);
    }
  }
  FEnvTraceData::ToText((FEnvTraceData *)&this->_padding_,&local_348,Brief);
  bVar3 = FText::IsEmpty(&local_348);
  if (!bVar3) {
    local_288.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(__return_storage_ptr__->TextData).Reference;
    local_358.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_358.Pairs.ArrayNum = 0;
    local_358.Pairs.ArrayMax = 0;
    local_288.Type = Text;
    if (local_288.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_288.TextValue.field0_0x0.TypedValue.TextData.Reference + 8))
                (local_288.TextValue.field0_0x0.TypedValue.TextData.Reference,local_res10);
    }
    local_288.TextValue.field0_0x0.TypedValue.Flags = __return_storage_ptr__->Flags;
    if ((local_288.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
    ::FString::FString(&local_2c8,L"Description");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_358,&local_2c8,&local_288);
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
    if (local_288.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_288.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    local_2a8.Type = Text;
    local_2a8.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(TRefCountPtr<ITextData>)local_348.TextData.Reference;
    if (local_348.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_348.TextData.Reference + 8))
                (local_348.TextData.Reference,local_res18);
    }
    local_2a8.TextValue.field0_0x0.TypedValue.Flags = local_348.Flags;
    if ((local_2a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
    ::FString::FString(&local_2b8,L"ProjectionDescription");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_358,&local_2b8,&local_2a8);
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
    if (local_2a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_2a8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_108,L"EnvQueryGenerator",L"OnCircle_DescriptionWithProjection",
                        L"{Description}, {ProjectionDescription}");
    pFVar6 = FTextFormat::FTextFormat(&local_48,pFVar5,Default);
    pFVar5 = FText::Format(&local_118,pFVar6,&local_358);
    FText::operator=(__return_storage_ptr__,pFVar5);
    if (local_118.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
    }
    if (local_108.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
    }
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_358.Pairs.AllocatorInstance.Data,
               local_358.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_358.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_358.Pairs.AllocatorInstance.Data);
    }
  }
  if (local_348.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_348.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_378.Pairs.AllocatorInstance.Data,
             local_378.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_378.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_378.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDescriptionTitle @ 146f54580

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UEnvQueryGenerator_OnCircle::GetDescriptionTitle
          (UEnvQueryGenerator_OnCircle *this,FText *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  UClass *pUVar5;
  FTextFormat *pFVar6;
  UClass *pUVar7;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_b8;
  FString local_a8;
  FText local_98;
  FString local_88;
  FText local_78;
  FFormatArgumentValue local_68;
  FFormatArgumentValue local_48;
  FText local_28;
  FTextFormat local_18;
  
  local_b8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Pairs.ArrayNum = 0;
  local_b8.Pairs.ArrayMax = 0;
  UEnvQueryTypes::GetShortTypeName(&local_98,(UObject *)this);
  local_68.Type = Text;
  FText::FText((FText *)&local_68.TextValue,&local_98);
  if (local_68.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  ::FString::FString(&local_a8,L"DescriptionTitle");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_b8,&local_a8,&local_68);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_68.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_68.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  pUVar7 = (this->CircleCenter).Class.field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar7 != (UClass *)0x0) goto LAB_146f5466b;
  }
  else if (pUVar7 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
LAB_146f5466b:
    pUVar5 = UEnvQueryContext::StaticClass();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar7->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_146f5469b;
    }
  }
  pUVar7 = (UClass *)0x0;
LAB_146f5469b:
  UEnvQueryTypes::GetShortTypeName(&local_78,(UObject *)pUVar7);
  local_48.Type = Text;
  FText::FText((FText *)&local_48.TextValue,&local_78);
  if (local_48.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  ::FString::FString(&local_88,L"DescribeContext");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_b8,&local_88,&local_48);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_48.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_48.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"EnvQueryGenerator",L"DescriptionGenerateCircleAroundContext",
                      L"{DescriptionTitle}: generate items on circle around {DescribeContext}");
  pFVar6 = FTextFormat::FTextFormat(&local_18,pFVar4,Default);
  FText::Format(__return_storage_ptr__,pFVar6,&local_b8);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_b8.Pairs.AllocatorInstance.Data,
             local_b8.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_b8.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_b8.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f58450

UClass * __cdecl UEnvQueryGenerator_OnCircle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator_OnCircle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator_OnCircle",
               &Z_Registration_Info_UClass_UEnvQueryGenerator_OnCircle.InnerSingleton,
               StaticRegisterNativesUEnvQueryGenerator_OnCircle,0x268,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryGenerator_OnCircle>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator_OnCircle>,local_res8,
               UEnvQueryGenerator_ProjectedPoints::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator_OnCircle.InnerSingleton;
}

// PostLoad @ 146f5f950

void __thiscall UEnvQueryGenerator_OnCircle::PostLoad(UEnvQueryGenerator_OnCircle *this)

{
  byte *pbVar1;
  TEnumAsByte<ETraceTypeQuery> *pTVar2;
  TEnumAsByte<ECollisionChannel> *pTVar3;
  ECollisionChannel EVar4;
  ETraceTypeQuery EVar5;
  
  UObject::PostLoad((UObject *)this);
  (**(code **)(this->_padding_ + 0x2b0))(this);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  if ((int)this->_padding_ == 0) {
    EVar4 = UEngineTypes::ConvertToCollisionChannel((uint)(byte)this->_padding_);
    *pbVar1 = (byte)EVar4;
  }
  EVar5 = UEngineTypes::ConvertToTraceType((uint)*pbVar1);
  *(char *)&this->_padding_ = (char)EVar5;
  *(undefined4 *)&this->_padding_ = 1;
  if ((this->ArcAngle).DefaultValue <= 0.0) {
    (this->ArcAngle).DefaultValue = 360.0;
  }
  pTVar2 = &(this->TraceData).TraceChannel;
  pTVar3 = &(this->TraceData).SerializedChannel;
  if ((this->TraceData).VersionNum == 0) {
    EVar4 = UEngineTypes::ConvertToCollisionChannel((uint)pTVar2->Value);
    pTVar3->Value = (uchar)EVar4;
  }
  EVar5 = UEngineTypes::ConvertToTraceType((uint)pTVar3->Value);
  pTVar2->Value = (uchar)EVar5;
  (this->TraceData).VersionNum = 1;
  return;
}

// StaticRegisterNativesUEnvQueryGenerator_OnCircle @ 146f76d40

void __cdecl UEnvQueryGenerator_OnCircle::StaticRegisterNativesUEnvQueryGenerator_OnCircle(void)

{
  return;
}

