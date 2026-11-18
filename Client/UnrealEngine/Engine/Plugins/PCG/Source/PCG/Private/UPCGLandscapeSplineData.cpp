// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 30

// StaticClass @ 14985a250

UClass * __cdecl UPCGLandscapeSplineData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGLandscapeSplineData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGLandscapeSplineData",
               &Z_Registration_Info_UClass_UPCGLandscapeSplineData.InnerSingleton,
               StaticRegisterNativesUPCGLandscapeSplineData,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGLandscapeSplineData>,
               InternalVTableHelperCtorCaller<UPCGLandscapeSplineData>,local_res8,
               UPCGPolyLineData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGLandscapeSplineData.InnerSingleton;
}

// UPCGLandscapeSplineData @ 14988e320

UPCGLandscapeSplineData * __thiscall
UPCGLandscapeSplineData::UPCGLandscapeSplineData
          (UPCGLandscapeSplineData *this,FVTableHelper *param_1)

{
  UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGLandscapeSplineData__6B_;
  (this->Spline).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->ReparamTable = 0;
  *(undefined8 *)&(this->ReparamTable).field_0x8 = 0;
  (this->ReparamTable).field_0x10 = 0;
  *(undefined4 *)&(this->ReparamTable).field_0x14 = 0;
  this->bLoggedInvalidSpline = false;
  return this;
}

// UPCGLandscapeSplineData @ 14988e370

UPCGLandscapeSplineData * __thiscall
UPCGLandscapeSplineData::UPCGLandscapeSplineData
          (UPCGLandscapeSplineData *this,FObjectInitializer *param_1)

{
  UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGLandscapeSplineData__6B_;
  (this->Spline).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->ReparamTable = 0;
  *(undefined8 *)&(this->ReparamTable).field_0x8 = 0;
  (this->ReparamTable).field_0x10 = 0;
  *(undefined4 *)&(this->ReparamTable).field_0x14 = 0;
  this->bLoggedInvalidSpline = false;
  return this;
}

// ~UPCGLandscapeSplineData @ 1498916a0

void __thiscall UPCGLandscapeSplineData::~UPCGLandscapeSplineData(UPCGLandscapeSplineData *this)

{
  this->_padding_ = (longlong)&___7UPCGLandscapeSplineData__6B_;
  if (*(void **)&this->ReparamTable != (void *)0x0) {
    FMemory::Free(*(void **)&this->ReparamTable);
  }
  this->_padding_ = (longlong)&___7UPCGPolyLineData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  return;
}

// AddToCrc @ 14989de10

void __thiscall
UPCGLandscapeSplineData::AddToCrc(UPCGLandscapeSplineData *this,FArchiveCrc32 *param_1,bool param_2)

{
  undefined1 local_res8 [8];
  
  UPCGData::AddToCrc((UPCGData *)this,param_1,param_2);
  if ((UPCGMetadata *)this->_padding_ != (UPCGMetadata *)0x0) {
    UPCGMetadata::GetLatestAttributeNameOrNone((UPCGMetadata *)this->_padding_);
    (**(code **)(param_1->_padding_ + 0x178))(param_1,local_res8);
  }
  UPCGData::AddUIDToCrc((UPCGData *)this,param_1);
  return;
}

// CheckSpline @ 1498a16f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UPCGLandscapeSplineData::CheckSpline(UPCGLandscapeSplineData *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->Spline).WeakPtr);
  if (!bVar1) {
    if (this->bLoggedInvalidSpline == false) {
      if (2 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      this->bLoggedInvalidSpline = true;
    }
    return false;
  }
  return true;
}

// CopyInternal @ 1498a4680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSpatialData * __thiscall
UPCGLandscapeSplineData::CopyInternal(UPCGLandscapeSplineData *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UPCGSpatialData *pUVar3;
  UObject *pUVar4;
  UPCGLandscapeSplineData *pUVar5;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPCGLandscapeSplineData *local_res18 [2];
  
  if (param_1 == (FPCGContext *)0x0) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749225>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0xa9,"Context != nullptr || IsInGameThread()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGSpatialData *)(*pcVar1)();
        return pUVar3;
      }
    }
  }
  else {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4331830188552749348>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x124,"!AsyncState.bIsRunningOnMainThread");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pUVar3 = (UPCGSpatialData *)(*pcVar1)();
          return pUVar3;
        }
      }
      FGCScopeGuard::FGCScopeGuard(local_res8);
      pUVar4 = GetTransientPackageAsObject();
      pUVar5 = NewObject<UPCGLandscapeSplineData>(pUVar4);
      FGCScopeGuard::~FGCScopeGuard(local_res8);
      if (pUVar5 == (UPCGLandscapeSplineData *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x12a,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pUVar3 = (UPCGSpatialData *)(*pcVar1)();
          return pUVar3;
        }
      }
      local_res18[0] = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UPCGLandscapeSplineData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)local_res18);
      goto LAB_1498a46d9;
    }
  }
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = NewObject<UPCGLandscapeSplineData>(pUVar4);
LAB_1498a46d9:
  (pUVar5->Spline).WeakPtr = (this->Spline).WeakPtr;
  FInterpCurveFloat::operator=(&pUVar5->ReparamTable,&this->ReparamTable);
  return (UPCGSpatialData *)pUVar5;
}

// CreateBasePointData @ 1498a9c10

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

UPCGBasePointData * __thiscall
UPCGLandscapeSplineData::CreateBasePointData
          (UPCGLandscapeSplineData *this,FPCGContext *param_1,TSubclassOf<UPCGBasePointData> param_2
          )

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UPackage *pUVar5;
  UPCGBasePointData *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  undefined1 auStackY_258 [32];
  UPCGLandscapeSplineData *local_218;
  undefined8 local_210;
  undefined2 local_208;
  undefined1 local_206;
  undefined1 local_205;
  UClass *local_200;
  void *local_1f8;
  undefined8 local_1f0;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_1e8;
  undefined8 local_1e0;
  FName local_1d8;
  UPackage *local_1d0;
  FPCGProjectionParams local_1c8;
  FName local_1a8;
  FString local_1a0;
  undefined1 local_188 [128];
  void *local_108;
  undefined4 local_100;
  void *local_f8;
  ForAnyElementType local_e0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  pUVar5 = GetTransientPackage();
  pUVar8 = (UClass *)0x0;
  local_1d0 = pUVar5;
  if (param_1 == (FPCGContext *)0x0) {
    bVar4 = IsInGameThread();
    if ((!bVar4) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4331830188552749225>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0xa9,"Context != nullptr || IsInGameThread()"), bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UPCGBasePointData *)(*pcVar3)();
      return pUVar6;
    }
    lVar2 = *(longlong *)param_2.Class.field0_0x0;
    local_1d8.ComparisonIndex.Value = 0;
    local_1d8.Number = 0;
    pUVar10 = pUVar8;
    if ((lVar2 != 0) &&
       (pUVar7 = Z_Construct_UClass_UPCGBasePointData_NoRegister(), pUVar7 != (UClass *)0x0)) {
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar10 = *(UClass **)param_2.Class.field0_0x0;
      }
    }
    pUVar6 = NewObject<UPCGBasePointData>
                       ((UObject *)pUVar5,pUVar10,local_1d8,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  }
  else {
    pUVar6 = FPCGContext::
             NewObject_AnyThread_Impl<UPCGBasePointData,UPackage_*,TSubclassOf<UPCGBasePointData>_&>
                       (param_1,&local_1d0,
                        (TSubclassOf<UPCGBasePointData> *)param_2.Class.field0_0x0);
  }
  local_218 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (this == (UPCGLandscapeSplineData *)0x0)) {
    local_210 = 0;
    local_208 = 0x101;
    local_205 = 0;
    if (this != (UPCGLandscapeSplineData *)0x0) {
      pUVar8 = (UClass *)(**(code **)(this->_padding_ + 800))(this);
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)this);
    local_210 = 0;
    local_208 = 0x101;
    local_205 = 0;
    pUVar8 = (UClass *)(**(code **)(this->_padding_ + 800))(this);
  }
  local_1f8 = (void *)0x0;
  local_1f0 = 0;
  local_1e8 = (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0;
  local_1e0 = 0;
  local_206 = 0;
  local_200 = pUVar8;
  (**(code **)(pUVar6->_padding_ + 0x468))(pUVar6,&local_218);
  if ((local_218 != (UPCGLandscapeSplineData *)0x0) && ((char)local_208 != '\0')) {
    (**(code **)(pUVar6->_padding_ + 0x470))(pUVar6,&local_218);
  }
  FPCGSplineSamplerParams::FPCGSplineSamplerParams((FPCGSplineSamplerParams *)local_188);
  local_188[0] = OnHorizontal;
  local_188[1] = Distance;
  local_1c8.AttributeList.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.bProjectPositions = true;
  local_1c8.bProjectRotations = true;
  local_1c8.bProjectScales = false;
  local_1c8.ColorBlendMode = SourceValue;
  local_1c8._4_4_ = 0;
  local_1c8.AttributeList.Data.ArrayNum = 0;
  local_1c8.AttributeList.Data.ArrayMax = 0;
  local_1c8.AttributeMode = ExcludeAttributes;
  local_1c8.AttributeMergeOperation = Min;
  local_1c8.TagMergeOperation = Source;
  local_1c8._27_5_ = 0;
  ::FString::FString(&local_1c8.AttributeList,L"");
  local_1c8.AttributeMode = ExcludeAttributes;
  local_1c8.AttributeMergeOperation = TargetValue;
  local_1c8.TagMergeOperation = Source;
  PCGSplineSamplerHelpers::SampleLineData
            (param_1,(UPCGPolyLineData *)this,(UPCGSpatialData *)0x0,(UPCGSpatialData *)0x0,
             &local_1c8,(FPCGSplineSamplerParams *)local_188,pUVar6);
  if (local_1c8.AttributeList.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.AttributeList.Data.AllocatorInstance.Data);
  }
  bVar4 = FWeakObjectPtr::IsValid(&(this->Spline).WeakPtr);
  if (bVar4) {
    if (5 < (byte)LogPCG._0_1_) {
      (**(code **)(pUVar6->_padding_ + 0x488))(pUVar6);
      pUVar9 = FWeakObjectPtr::Get(&(this->Spline).WeakPtr);
      local_1a8.ComparisonIndex.Value = *(uint *)&pUVar9->field_0x18;
      local_1a8.Number = *(uint *)&pUVar9->field_0x1c;
      ::FName::ToString(&local_1a8,&local_1a0);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (this->bLoggedInvalidSpline == false) {
    if (2 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    this->bLoggedInvalidSpline = true;
  }
  if (local_e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data);
  }
  local_188._56_8_ = &___7FIndexedCurve__6B_;
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  local_100 = 0;
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_188 + 0x40));
  DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
            (local_1e8,(int)local_1e0);
  if (local_1e8 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
    FMemory::Free(local_1e8);
  }
  if (local_1f8 != (void *)0x0) {
    FMemory::Free(local_1f8);
  }
  return pUVar6;
}

// CreatePointArrayData @ 1498adba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointArrayData * __thiscall
UPCGLandscapeSplineData::CreatePointArrayData
          (UPCGLandscapeSplineData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  int iVar1;
  UPCGPointArrayData *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  bool bVar7;
  UClass *local_res20;
  FString local_28;
  FString local_18;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId308,"UPCGLandscapeSplineData::CreatePointArrayData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGLandscapeSplineData.cpp"
               ,0x134);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId308);
  }
  local_res20 = UPCGPointArrayData::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  pUVar2 = (UPCGPointArrayData *)
           CreateBasePointData(this,param_1,(TSubclassOf<UPCGBasePointData>)&local_res20);
  if (pUVar2 == (UPCGPointArrayData *)0x0) {
    pUVar2 = (UPCGPointArrayData *)0x0;
  }
  else {
    pUVar3 = UPCGPointArrayData::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UPCGPointArrayData>(&local_28);
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UPCGBasePointData_const_>
                         (&local_18,(UPCGBasePointData *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar2;
}

// CreatePointData @ 1498aeda0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointData * __thiscall
UPCGLandscapeSplineData::CreatePointData(UPCGLandscapeSplineData *this,FPCGContext *param_1)

{
  int iVar1;
  UPCGPointData *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  bool bVar7;
  UClass *local_res18 [2];
  FString local_28;
  FString local_18;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId301,"UPCGLandscapeSplineData::CreatePointData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGLandscapeSplineData.cpp"
               ,0x12d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId301);
  }
  local_res18[0] = UPCGPointData::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  pUVar2 = (UPCGPointData *)
           CreateBasePointData(this,param_1,(TSubclassOf<UPCGBasePointData>)local_res18);
  if (pUVar2 == (UPCGPointData *)0x0) {
    pUVar2 = (UPCGPointData *)0x0;
  }
  else {
    pUVar3 = UPCGPointData::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UPCGPointData>(&local_28);
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UPCGBasePointData_const_>
                         (&local_18,(UPCGBasePointData *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar2;
}

// GetBounds @ 1498b5790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TBox<double> * __thiscall
UPCGLandscapeSplineData::GetBounds
          (UPCGLandscapeSplineData *this,TBox<double> *__return_storage_ptr__)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  UObject *pUVar8;
  TMatrix<double> *pTVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  TVector<double>_u_0 local_f0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  undefined8 local_c0;
  TMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  bVar7 = FWeakObjectPtr::IsValid(&(this->Spline).WeakPtr);
  if (!bVar7) {
    if (this->bLoggedInvalidSpline == false) {
      if (2 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      this->bLoggedInvalidSpline = true;
    }
    return __return_storage_ptr__;
  }
  pUVar8 = FWeakObjectPtr::Get(&(this->Spline).WeakPtr);
  plVar10 = *(longlong **)&pUVar8[0x22].field_0x8;
  iVar5 = *(int *)&pUVar8[0x22].field_0x10;
  plVar1 = plVar10 + iVar5;
  do {
    while( true ) {
      if (*(int *)&pUVar8[0x22].field_0x10 != iVar5) {
        `TCheckedPointerIterator<TObjectPtr<ULandscapeSplineSegment>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_f8);
      }
      if (plVar10 == plVar1) {
        if (__return_storage_ptr__->IsValid == '\0') {
          return __return_storage_ptr__;
        }
        pUVar8 = FWeakObjectPtr::Get(&(this->Spline).WeakPtr);
        pTVar9 = UE::Math::TTransform<double>::ToMatrixWithScale
                           ((TTransform<double> *)&pUVar8[0xc].field_0x10,&local_b8);
        UE::Math::TBox<double>::TransformBy
                  (__return_storage_ptr__,(TBox<double> *)&local_f0._s_0,pTVar9);
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = local_f0._s_0.X;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = local_f0._s_0.Y;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_f0._s_0.Z;
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dStack_d8;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = local_d0;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dStack_c8;
        __return_storage_ptr__->IsValid = (undefined1)local_c0;
        __return_storage_ptr__->Pad[0] = local_c0._1_1_;
        __return_storage_ptr__->Pad[1] = local_c0._2_1_;
        __return_storage_ptr__->Pad[2] = local_c0._3_1_;
        __return_storage_ptr__->Pad[3] = local_c0._4_1_;
        __return_storage_ptr__->Pad[4] = local_c0._5_1_;
        __return_storage_ptr__->Pad[5] = local_c0._6_1_;
        __return_storage_ptr__->Pad[6] = local_c0._7_1_;
        return __return_storage_ptr__;
      }
      lVar6 = *plVar10;
      if (__return_storage_ptr__->IsValid != '\0') break;
      if (*(char *)(lVar6 + 0xb0) != '\0') {
        dVar2 = *(double *)(lVar6 + 0x88);
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = *(double *)(lVar6 + 0x80);
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar2;
        dVar2 = *(double *)(lVar6 + 0x98);
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = *(double *)(lVar6 + 0x90);
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar2;
        dVar2 = *(double *)(lVar6 + 0xa8);
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = *(double *)(lVar6 + 0xa0);
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar2;
        uVar4 = *(undefined8 *)(lVar6 + 0xb0);
        __return_storage_ptr__->IsValid = (char)uVar4;
        __return_storage_ptr__->Pad[0] = (char)((ulonglong)uVar4 >> 8);
        __return_storage_ptr__->Pad[1] = (char)((ulonglong)uVar4 >> 0x10);
        __return_storage_ptr__->Pad[2] = (char)((ulonglong)uVar4 >> 0x18);
        __return_storage_ptr__->Pad[3] = (char)((ulonglong)uVar4 >> 0x20);
        __return_storage_ptr__->Pad[4] = (char)((ulonglong)uVar4 >> 0x28);
        __return_storage_ptr__->Pad[5] = (char)((ulonglong)uVar4 >> 0x30);
        __return_storage_ptr__->Pad[6] = (char)((ulonglong)uVar4 >> 0x38);
      }
LAB_1498b593e:
      plVar10 = plVar10 + 1;
    }
    if (*(char *)(lVar6 + 0xb0) == '\0') goto LAB_1498b593e;
    dVar2 = *(double *)(lVar6 + 0x80);
    uVar11 = SUB84(dVar2,0);
    uVar12 = (undefined4)((ulonglong)dVar2 >> 0x20);
    plVar10 = plVar10 + 1;
    dVar3 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
    if (dVar3 <= dVar2) {
      uVar11 = SUB84(dVar3,0);
      uVar12 = (undefined4)((ulonglong)dVar3 >> 0x20);
    }
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar12,uVar11);
    dVar2 = *(double *)(lVar6 + 0x88);
    uVar11 = SUB84(dVar2,0);
    uVar12 = (undefined4)((ulonglong)dVar2 >> 0x20);
    dVar3 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8);
    if (dVar3 <= dVar2) {
      uVar11 = SUB84(dVar3,0);
      uVar12 = (undefined4)((ulonglong)dVar3 >> 0x20);
    }
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar12,uVar11);
    dVar2 = *(double *)(lVar6 + 0x90);
    uVar11 = SUB84(dVar2,0);
    uVar12 = (undefined4)((ulonglong)dVar2 >> 0x20);
    dVar3 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
    if (dVar3 <= dVar2) {
      uVar11 = SUB84(dVar3,0);
      uVar12 = (undefined4)((ulonglong)dVar3 >> 0x20);
    }
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar12,uVar11);
    dVar2 = *(double *)(lVar6 + 0x98);
    uVar11 = SUB84(dVar2,0);
    uVar12 = (undefined4)((ulonglong)dVar2 >> 0x20);
    dVar3 = *(double *)&(__return_storage_ptr__->Max).field0_0x0;
    if (dVar2 <= dVar3) {
      uVar11 = SUB84(dVar3,0);
      uVar12 = (undefined4)((ulonglong)dVar3 >> 0x20);
    }
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar12,uVar11);
    dVar2 = *(double *)(lVar6 + 0xa0);
    uVar11 = SUB84(dVar2,0);
    uVar12 = (undefined4)((ulonglong)dVar2 >> 0x20);
    dVar3 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8);
    if (dVar2 <= dVar3) {
      uVar11 = SUB84(dVar3,0);
      uVar12 = (undefined4)((ulonglong)dVar3 >> 0x20);
    }
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar12,uVar11);
    dVar2 = *(double *)(lVar6 + 0xa8);
    uVar11 = SUB84(dVar2,0);
    uVar12 = (undefined4)((ulonglong)dVar2 >> 0x20);
    dVar3 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10);
    if (dVar2 <= dVar3) {
      uVar11 = SUB84(dVar3,0);
      uVar12 = (undefined4)((ulonglong)dVar3 >> 0x20);
    }
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar12,uVar11);
  } while( true );
}

// GetCurvatureAtDistance @ 1498b7a50

/* WARNING: Enum "Type": Some values do not have unique names */

double __thiscall
UPCGLandscapeSplineData::GetCurvatureAtDistance
          (UPCGLandscapeSplineData *this,int param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  UObject *pUVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  double *pdVar15;
  uint uVar16;
  double *pdVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  
  bVar8 = FWeakObjectPtr::IsValid(&(this->Spline).WeakPtr);
  if (bVar8) {
    iVar9 = (**(code **)(this->_padding_ + 0x4a0))(this);
    if (iVar9 != 0) {
      iVar10 = (**(code **)(this->_padding_ + 0x4a0))(this);
      iVar9 = iVar10 + -1;
      if (param_1 < iVar10 + -1) {
        iVar9 = param_1;
      }
      iVar10 = 0;
      if (0 < iVar9) {
        iVar10 = iVar9;
      }
      pUVar11 = FWeakObjectPtr::Get(&(this->Spline).WeakPtr);
      uVar13 = 0;
      if (param_1 < *(int *)&pUVar11[0x22].field_0x10) {
        uVar13 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        dVar18 = (double)(*pcVar5)();
        return dVar18;
      }
      lVar4 = *(longlong *)(*(longlong *)&pUVar11[0x22].field_0x8 + (longlong)param_1 * 8);
      if ((lVar4 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Segment",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGLandscapeSplineData.cpp"
                             ,0xa8,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        dVar18 = (double)(*pcVar5)();
        return dVar18;
      }
      if (2 < *(int *)(lVar4 + 0x78)) {
        uVar13 = 0;
        if (iVar10 == param_1) {
          dVar18 = (double)(**(code **)(this->_padding_ + 0x508))(this,iVar10);
          iVar9 = FInterpCurve<float>::GetPointIndexForInputValue
                            ((FInterpCurve<float> *)&this->ReparamTable,(float)(dVar18 + param_2));
          if (((iVar9 < 0) || (*(int *)&(this->ReparamTable).field_0x8 <= iVar9)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ReparamTable.Points.IsValidIndex(ReparamIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGLandscapeSplineData.cpp"
                                 ,0x1e6,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            dVar18 = (double)(*pcVar5)();
            return dVar18;
          }
          iVar10 = FInterpCurve<float>::GetPointIndexForInputValue
                             ((FInterpCurve<float> *)&this->ReparamTable,(float)dVar18);
          uVar13 = iVar9 - iVar10;
        }
        else if ((iVar10 < param_1) && (uVar13 = *(int *)(lVar4 + 0x78) - 2, (int)uVar13 < 0)) {
          uVar13 = 0;
        }
        uVar16 = uVar13 - 1;
        if (uVar13 != *(int *)(lVar4 + 0x78) - 1U) {
          uVar16 = uVar13;
        }
        uVar13 = 0;
        if ((int)uVar16 < *(int *)(lVar4 + 0x78)) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          dVar18 = (double)(*pcVar5)();
          return dVar18;
        }
        uVar14 = uVar16 + 1;
        pdVar17 = (double *)((longlong)(int)uVar16 * 0xe0 + *(longlong *)(lVar4 + 0x70));
        uVar13 = 0;
        if ((int)uVar14 < *(int *)(lVar4 + 0x78)) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          dVar18 = (double)(*pcVar5)();
          return dVar18;
        }
        iVar9 = *(int *)(lVar4 + 0x78);
        pdVar15 = (double *)((longlong)(int)uVar14 * 0xe0 + *(longlong *)(lVar4 + 0x70));
        if ((int)uVar16 < iVar9 + -2) {
          uVar16 = uVar16 + 2;
          uVar13 = 0;
          if ((int)uVar16 < iVar9) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            dVar18 = (double)(*pcVar5)();
            return dVar18;
          }
          dVar18 = *pdVar15;
          uVar26 = SUB84(dVar18,0);
          uVar27 = (undefined4)((ulonglong)dVar18 >> 0x20);
          dVar1 = pdVar15[1];
          uVar28 = SUB84(dVar1,0);
          uVar29 = (undefined4)((ulonglong)dVar1 >> 0x20);
          dVar2 = pdVar15[2];
          uVar30 = SUB84(dVar2,0);
          uVar31 = (undefined4)((ulonglong)dVar2 >> 0x20);
          lVar12 = (longlong)(int)uVar16 * 0xe0;
          lVar4 = *(longlong *)(lVar4 + 0x70);
          dVar21 = *(double *)(lVar12 + 8 + lVar4);
          dVar24 = *(double *)(lVar12 + 0x10 + lVar4);
          dVar23 = (*(double *)(lVar12 + lVar4) - *pdVar17) * __real_3fe0000000000000;
          dVar25 = (dVar21 - pdVar17[1]) * __real_3fe0000000000000;
          dVar7 = (dVar24 - pdVar17[2]) * __real_3fe0000000000000;
          dVar18 = (*(double *)(lVar12 + lVar4) - (dVar18 + dVar18)) + *pdVar17;
          dVar1 = (dVar21 - (dVar1 + dVar1)) + pdVar17[1];
          dVar2 = (dVar24 - (dVar2 + dVar2)) + pdVar17[2];
        }
        else {
          uVar16 = uVar16 - 1;
          uVar13 = 0;
          if ((int)uVar16 < iVar9) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            dVar18 = (double)(*pcVar5)();
            return dVar18;
          }
          dVar18 = *pdVar15;
          uVar26 = SUB84(dVar18,0);
          uVar27 = (undefined4)((ulonglong)dVar18 >> 0x20);
          dVar1 = pdVar15[1];
          uVar28 = SUB84(dVar1,0);
          uVar29 = (undefined4)((ulonglong)dVar1 >> 0x20);
          dVar2 = pdVar15[2];
          uVar30 = SUB84(dVar2,0);
          uVar31 = (undefined4)((ulonglong)dVar2 >> 0x20);
          dVar21 = *pdVar17;
          dVar24 = pdVar17[1];
          dVar23 = dVar18 - dVar21;
          dVar3 = pdVar17[2];
          dVar25 = dVar1 - dVar24;
          dVar7 = dVar2 - dVar3;
          lVar12 = (longlong)(int)uVar16 * 0xe0;
          lVar4 = *(longlong *)(lVar4 + 0x70);
          dVar18 = (dVar18 - (dVar21 + dVar21)) + *(double *)(lVar12 + lVar4);
          dVar1 = (dVar1 - (dVar24 + dVar24)) + *(double *)(lVar12 + 8 + lVar4);
          dVar2 = (dVar2 - (dVar3 + dVar3)) + *(double *)(lVar12 + 0x10 + lVar4);
        }
        auVar19._0_8_ = dVar25 * dVar25;
        auVar19._8_8_ = 0;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = dVar23 * dVar23 + auVar19._0_8_ + dVar7 * dVar7;
        auVar20 = sqrtpd(auVar19,auVar20);
        dVar21 = auVar20._0_8_;
        if (auVar20._0_8_ <= __real_3e45798ee2308c3a) {
          dVar21 = __real_3e45798ee2308c3a;
        }
        dVar21 = __real_3ff0000000000000 / dVar21;
        auVar22._0_8_ = dVar21 * dVar25;
        auVar22._8_8_ = 0;
        dVar24 = dVar21 * dVar23 * dVar18 + auVar22._0_8_ * dVar1 + dVar21 * dVar7 * dVar2;
        dVar18 = dVar18 - dVar24 * dVar21 * dVar23;
        dVar1 = dVar1 - dVar24 * auVar22._0_8_;
        dVar2 = dVar2 - dVar24 * dVar21 * dVar7;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = dVar1 * dVar1 + dVar18 * dVar18 + dVar2 * dVar2;
        auVar20 = sqrtpd(auVar22,auVar6);
        dVar21 = auVar20._0_8_ * dVar21;
        dVar18 = (pdVar15[7] - (double)CONCAT44(uVar29,uVar28)) * dVar1 +
                 (pdVar15[6] - (double)CONCAT44(uVar27,uVar26)) * dVar18 +
                 (pdVar15[8] - (double)CONCAT44(uVar31,uVar30)) * dVar2;
        if (0.0 < dVar18) {
          return dVar21;
        }
        if (0.0 <= dVar18) {
          return 0.0;
        }
        return (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                SUB84(dVar21,0) ^ (uint)__xmm_80000000000000008000000000000000);
      }
    }
  }
  else if (this->bLoggedInvalidSpline == false) {
    if (2 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    this->bLoggedInvalidSpline = true;
  }
  return 0.0;
}

// GetDataType @ 1498b83f0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGLandscapeSplineData::GetDataType(UPCGLandscapeSplineData *this)

{
  return LandscapeSpline;
}

// GetDataTypeId @ 1498b8880

FPCGDataTypeBaseId * __thiscall
UPCGLandscapeSplineData::GetDataTypeId(UPCGLandscapeSplineData *this)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar4;
  
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoLandscapeSpline::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoLandscapeSpline::AsId(void)'
            ::__l2::Id;
  }
  _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoLandscapeSpline::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoLandscapeSpline::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoLandscapeSpline::AsId(void)'
            ::__l2::Id;
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoLandscapeSpline.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoLandscapeSpline.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoLandscapeSpline,(UObject *)pUVar3
                         ,L"PCGDataTypeInfoLandscapeSpline");
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoLandscapeSpline.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_1498b8903;
  }
  else {
LAB_1498b8903:
    TVar4.DebugPtr =
         Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoLandscapeSpline.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfo,(UObject *)pUVar3,
                           L"PCGDataTypeInfo");
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_1498b895a;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_;
    if (((int)(TVar4.DebugPtr)->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)((TVar4.DebugPtr)->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1498b895c;
  }
LAB_1498b895a:
  TVar4.DebugPtr = (UScriptStruct *)0x0;
LAB_1498b895c:
  `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoLandscapeSpline::AsId(void)'
  ::__l2::Id.Struct.field0_0x0 =
       (TObjectPtr<UScriptStruct_const_>)(TObjectPtr<UScriptStruct_const_>)TVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar4.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoLandscapeSpline::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoLandscapeSpline::AsId(void)'
          ::__l2::Id;
}

// GetDistanceAtSegmentStart @ 1498b9ce0

double __thiscall
UPCGLandscapeSplineData::GetDistanceAtSegmentStart(UPCGLandscapeSplineData *this,int param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (*(int *)&(this->ReparamTable).field_0x8 < 1) {
    return 0.0;
  }
  lVar7 = 0;
  dVar2 = 0.0;
  while( true ) {
    uVar5 = 0;
    if ((int)uVar6 < *(int *)&(this->ReparamTable).field_0x8) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      dVar2 = (double)(*pcVar1)();
      return dVar2;
    }
    dVar3 = (double)*(float *)(*(longlong *)&this->ReparamTable + lVar7);
    uVar5 = 0;
    if ((int)uVar6 < *(int *)&(this->ReparamTable).field_0x8) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    if ((float)param_1 < *(float *)(*(longlong *)&this->ReparamTable + 4 + lVar7)) {
      return dVar2;
    }
    uVar6 = uVar6 + 1;
    lVar7 = lVar7 + 0x14;
    dVar2 = dVar3;
    if (*(int *)&(this->ReparamTable).field_0x8 <= (int)uVar6) {
      return dVar3;
    }
  }
  pcVar1 = (code *)swi(3);
  dVar2 = (double)(*pcVar1)();
  return dVar2;
}

// GetInputKeyAtDistance @ 1498ba510

float __thiscall
UPCGLandscapeSplineData::GetInputKeyAtDistance
          (UPCGLandscapeSplineData *this,int param_1,double param_2)

{
  float fVar1;
  double dVar2;
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  dVar2 = (double)(**(code **)(this->_padding_ + 0x508))();
  fVar1 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&this->ReparamTable,(float)(dVar2 + param_2),local_res8)
  ;
  return fVar1;
}

// GetInterpPointAtDistance @ 1498ba900

void __thiscall
UPCGLandscapeSplineData::GetInterpPointAtDistance
          (UPCGLandscapeSplineData *this,int param_1,double param_2,int *param_3,bool param_4,
          double *param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_register_00000014;
  uint uVar7;
  double dVar8;
  
  dVar8 = (double)(**(code **)(this->_padding_ + 0x508))
                            (this,CONCAT44(in_register_00000014,param_1));
  uVar5 = FInterpCurve<float>::GetPointIndexForInputValue
                    ((FInterpCurve<float> *)&this->ReparamTable,(float)(dVar8 + param_2));
  puVar1 = &(this->ReparamTable).field_0x8;
  if (((int)uVar5 < 0) || (*(int *)puVar1 <= (int)uVar5)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReparamTable.Points.IsValidIndex(ReparamIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGLandscapeSplineData.cpp"
                       ,0x1e6,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar6 = FInterpCurve<float>::GetPointIndexForInputValue
                    ((FInterpCurve<float> *)&this->ReparamTable,(float)dVar8);
  *param_3 = uVar5 - iVar6;
  if (param_4) {
    uVar7 = 0;
    if ((int)uVar5 < *(int *)&(this->ReparamTable).field_0x8) {
      uVar7 = ~uVar5 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar6 = *(int *)puVar1;
    uVar7 = iVar6 - 1;
    dVar3 = (double)*(float *)(*(longlong *)&this->ReparamTable + (longlong)(int)uVar5 * 0x14);
    if ((int)(uVar5 + 1) < (int)uVar7) {
      uVar7 = uVar5 + 1;
    }
    uVar5 = 0;
    if ((int)uVar7 < iVar6) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    dVar8 = (dVar8 + param_2) - dVar3;
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      dVar8 = dVar8 / ((double)*(float *)(*(longlong *)&this->ReparamTable +
                                         (longlong)(int)uVar7 * 0x14) - dVar3);
      if (__real_3ff0000000000000 <= dVar8) {
        dVar8 = __real_3ff0000000000000;
      }
      if (dVar8 <= 0.0) {
        dVar8 = 0.0;
      }
    }
    else {
      dVar8 = 0.0;
    }
    *param_5 = dVar8;
  }
  return;
}

// GetLocationAtAlpha @ 1498bae20

TVector<double> * __thiscall
UPCGLandscapeSplineData::GetLocationAtAlpha
          (UPCGLandscapeSplineData *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  double extraout_XMM0_Qa;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar6 = (**(code **)(this->_padding_ + 0x4f8))();
  lVar1 = this->_padding_;
  fVar5 = (float)uVar6;
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar2 = (**(code **)(lVar1 + 0x4b0))(this,(int)fVar5);
  iVar4 = (int)fVar5;
  fVar8 = fVar5;
  if ((iVar4 != -0x80000000) && ((float)iVar4 != fVar5)) {
    auVar10._8_4_ = uVar7;
    auVar10._0_8_ = uVar6;
    auVar10._12_4_ = uVar7;
    auVar9._8_8_ = auVar10._8_8_;
    auVar9._4_4_ = fVar5;
    auVar9._0_4_ = fVar5;
    uVar3 = movmskps(uVar2,auVar9);
    fVar8 = (float)(int)(iVar4 - (uVar3 & 1));
  }
  (**(code **)(lVar1 + 0x4d8))
            (this,__return_storage_ptr__,(int)fVar5,extraout_XMM0_Qa * (double)(fVar5 - fVar8),1);
  return __return_storage_ptr__;
}

// GetNumSegments @ 1498bb930

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UPCGLandscapeSplineData::GetNumSegments(UPCGLandscapeSplineData *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->Spline).WeakPtr);
  if (!bVar1) {
    if (this->bLoggedInvalidSpline == false) {
      if (2 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      this->bLoggedInvalidSpline = true;
    }
    return 0;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Spline).WeakPtr);
  return *(int *)&pUVar2[0x22].field_0x10;
}

// GetPrivateStaticClass @ 1498bc590

UClass * __cdecl UPCGLandscapeSplineData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGLandscapeSplineData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGLandscapeSplineData",
               &Z_Registration_Info_UClass_UPCGLandscapeSplineData.InnerSingleton,
               StaticRegisterNativesUPCGLandscapeSplineData,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGLandscapeSplineData>,
               InternalVTableHelperCtorCaller<UPCGLandscapeSplineData>,local_res8,
               UPCGPolyLineData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGLandscapeSplineData.InnerSingleton;
}

// GetSegmentLength @ 1498c5f30

double __thiscall
UPCGLandscapeSplineData::GetSegmentLength(UPCGLandscapeSplineData *this,int param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  
  pcVar1 = *(code **)(this->_padding_ + 0x508);
  dVar3 = (double)(*pcVar1)(this,param_1 + 1);
  dVar2 = (double)(*pcVar1)(this,param_1);
  return dVar3 - dVar2;
}

// GetTangentsAtSegmentStart @ 1498c7a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPCGLandscapeSplineData::GetTangentsAtSegmentStart
          (UPCGLandscapeSplineData *this,int param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  UObject *pUVar4;
  TVector<double> *pTVar5;
  double *pdVar6;
  int iVar7;
  UObject *pUVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  double dVar11;
  undefined1 local_a8 [16];
  double local_98;
  undefined1 local_90 [16];
  double local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  TVector<double> local_48;
  TVector<double> local_30;
  
  bVar3 = FWeakObjectPtr::IsValid(&(this->Spline).WeakPtr);
  if (!bVar3) {
    if (this->bLoggedInvalidSpline != false) {
      return;
    }
    if (2 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    this->bLoggedInvalidSpline = true;
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&(this->Spline).WeakPtr);
  pUVar10 = (UObject *)0x0;
  if (((param_1 < 1) || (iVar7 = param_1 + -1, iVar7 < 0)) ||
     (*(int *)&pUVar4[0x22].field_0x10 <= iVar7)) {
    pUVar8 = (UObject *)0x0;
LAB_1498c7b86:
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
  }
  else {
    if ((iVar7 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar8 = *(UObject **)(*(longlong *)&pUVar4[0x22].field_0x8 + -8 + (longlong)param_1 * 8);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar8 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      goto LAB_1498c7b86;
    }
  }
  if ((param_1 < 0) || (*(int *)&pUVar4[0x22].field_0x10 <= param_1)) {
    pUVar4 = (UObject *)0x0;
LAB_1498c7c0a:
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
  }
  else {
    if ((param_1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar4 = *(UObject **)(*(longlong *)&pUVar4[0x22].field_0x8 + (longlong)param_1 * 8);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar4 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      goto LAB_1498c7c0a;
    }
  }
  if (pUVar8 == (UObject *)0x0) {
    pUVar9 = (UObject *)0x0;
LAB_1498c7c44:
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
  }
  else {
    pUVar9 = *(UObject **)&pUVar8[1].field_0x18;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar9 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      goto LAB_1498c7c44;
    }
  }
  if (pUVar4 != (UObject *)0x0) {
    pUVar10 = *(UObject **)(pUVar4 + 1);
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1498c7c8f;
    if (pUVar10 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar10);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
LAB_1498c7c8f:
  if (pUVar9 == (UObject *)0x0) {
    pdVar6 = &local_78;
    local_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    pTVar5 = UE::Math::TRotator<double>::Vector((TRotator<double> *)&pUVar9[1].field_0x18,&local_48)
    ;
    dVar11 = (double)(float)(*(uint *)&pUVar8[1].field_0x20 ^ __xmm_80000000800000008000000080000000
                            );
    dVar2 = (pTVar5->field0_0x0)._s_0.Y * dVar11;
    pdVar6 = (double *)local_a8;
    local_a8._8_4_ = SUB84(dVar2,0);
    local_a8._0_8_ = (pTVar5->field0_0x0)._s_0.X * dVar11;
    local_a8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    local_98 = dVar11 * (pTVar5->field0_0x0)._s_0.Z;
  }
  dVar2 = pdVar6[2];
  dVar11 = pdVar6[1];
  (param_2->field0_0x0)._s_0.X = *pdVar6;
  (param_2->field0_0x0)._s_0.Y = dVar11;
  (param_2->field0_0x0)._s_0.Z = dVar2;
  if (pUVar10 == (UObject *)0x0) {
    pdVar6 = &local_60;
    local_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    pTVar5 = UE::Math::TRotator<double>::Vector
                       ((TRotator<double> *)&pUVar10[1].field_0x18,&local_30);
    dVar11 = (double)*(float *)&pUVar4[1].field_0x8;
    dVar2 = (pTVar5->field0_0x0)._s_0.Y * dVar11;
    pdVar6 = (double *)local_90;
    local_90._8_4_ = SUB84(dVar2,0);
    local_90._0_8_ = (pTVar5->field0_0x0)._s_0.X * dVar11;
    local_90._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    local_80 = dVar11 * (pTVar5->field0_0x0)._s_0.Z;
  }
  dVar11 = pdVar6[1];
  dVar2 = pdVar6[2];
  (param_3->field0_0x0)._s_0.X = *pdVar6;
  (param_3->field0_0x0)._s_0.Y = dVar11;
  (param_3->field0_0x0)._s_0.Z = dVar2;
  return;
}

// GetTransform @ 1498c8250

/* WARNING: Enum "Type": Some values do not have unique names */

TTransform<double> * __thiscall
UPCGLandscapeSplineData::GetTransform
          (UPCGLandscapeSplineData *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  TTransform<double> *pTVar6;
  UObject *pUVar7;
  
  bVar5 = FWeakObjectPtr::IsValid(&(this->Spline).WeakPtr);
  if (bVar5) {
    pUVar7 = FWeakObjectPtr::Get(&(this->Spline).WeakPtr);
    pTVar6 = (TTransform<double> *)&pUVar7[0xc].field_0x10;
  }
  else {
    if (this->bLoggedInvalidSpline == false) {
      if (2 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      this->bLoggedInvalidSpline = true;
    }
    pTVar6 = &UE::Math::TTransform<double>::Identity;
  }
  dVar1 = (pTVar6->Rotation).XY.m128d_f64[1];
  dVar2 = (pTVar6->Rotation).ZW.m128d_f64[0];
  dVar3 = (pTVar6->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar6->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar6->Translation).XY.m128d_f64[0];
  dVar4 = (pTVar6->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (pTVar6->Translation).ZW.m128d_f64[0];
  dVar3 = (pTVar6->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
  dVar1 = (pTVar6->Scale3D).XY.m128d_f64[0];
  dVar4 = (pTVar6->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (pTVar6->Scale3D).ZW.m128d_f64[0];
  dVar3 = (pTVar6->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
  return __return_storage_ptr__;
}

// GetTransformAtAlpha @ 1498c8400

TTransform<double> * __thiscall
UPCGLandscapeSplineData::GetTransformAtAlpha
          (UPCGLandscapeSplineData *this,TTransform<double> *__return_storage_ptr__,float param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  double extraout_XMM0_Qa;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar6 = (**(code **)(this->_padding_ + 0x4f8))();
  lVar1 = this->_padding_;
  fVar5 = (float)uVar6;
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar2 = (**(code **)(lVar1 + 0x4b0))(this,(int)fVar5);
  iVar4 = (int)fVar5;
  fVar8 = fVar5;
  if ((iVar4 != -0x80000000) && ((float)iVar4 != fVar5)) {
    auVar10._8_4_ = uVar7;
    auVar10._0_8_ = uVar6;
    auVar10._12_4_ = uVar7;
    auVar9._8_8_ = auVar10._8_8_;
    auVar9._4_4_ = fVar5;
    auVar9._0_4_ = fVar5;
    uVar3 = movmskps(uVar2,auVar9);
    fVar8 = (float)(int)(iVar4 - (uVar3 & 1));
  }
  (**(code **)(lVar1 + 0x4d0))
            (this,__return_storage_ptr__,(int)fVar5,extraout_XMM0_Qa * (double)(fVar5 - fVar8),1,0);
  return __return_storage_ptr__;
}

// GetTransformAtDistance @ 1498c88c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TTransform<double> * __thiscall
UPCGLandscapeSplineData::GetTransformAtDistance
          (UPCGLandscapeSplineData *this,TTransform<double> *__return_storage_ptr__,int param_1,
          double param_2,bool param_3,TBox<double> *param_4)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  int iVar19;
  UObject *pUVar20;
  TTransform<double> *pTVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  double *pdVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  undefined1 auStackY_378 [32];
  undefined8 local_348;
  double local_340;
  double local_338;
  double local_330;
  TBox<double> *local_328;
  TVector<double>_u_0 local_320;
  TVector<double>_u_0 local_308;
  TVector<double>_u_0 local_2f0;
  TVector<double>_u_0 local_2d8;
  TMatrix<double> local_2b8;
  TMatrix<double> local_238;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_378;
  local_328 = param_4;
  bVar18 = FWeakObjectPtr::IsValid(&(this->Spline).WeakPtr);
  if (!bVar18) {
    if (this->bLoggedInvalidSpline == false) {
      if (2 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      this->bLoggedInvalidSpline = true;
    }
LAB_1498c8943:
    (**(code **)(this->_padding_ + 0x498))(this,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  iVar19 = (**(code **)(this->_padding_ + 0x4a0))(this);
  if (iVar19 == 0) goto LAB_1498c8943;
  iVar19 = (**(code **)(this->_padding_ + 0x4a0))(this);
  uVar24 = iVar19 - 1U;
  if (param_1 < (int)(iVar19 - 1U)) {
    uVar24 = param_1;
  }
  uVar26 = 0;
  if (0 < (int)uVar24) {
    uVar26 = uVar24;
  }
  pUVar20 = FWeakObjectPtr::Get(&(this->Spline).WeakPtr);
  uVar24 = 0;
  if ((int)uVar26 < *(int *)&pUVar20[0x22].field_0x10) {
    uVar24 = ~uVar26 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar4 = (code *)swi(3);
    pTVar21 = (TTransform<double> *)(*pcVar4)();
    return pTVar21;
  }
  lVar3 = *(longlong *)(*(longlong *)&pUVar20[0x22].field_0x8 + (longlong)(int)uVar26 * 8);
  if ((lVar3 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Segment",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGLandscapeSplineData.cpp"
                          ,0x6e,L""), bVar18)) {
    pcVar4 = (code *)swi(3);
    pTVar21 = (TTransform<double> *)(*pcVar4)();
    return pTVar21;
  }
  uVar24 = local_348._4_4_;
  uVar22 = 0;
  local_330 = 0.0;
  local_340 = 0.0;
  local_348 = (double)((ulonglong)local_348._4_4_ << 0x20);
  if (uVar26 == param_1) {
    GetInterpPointAtDistance(this,uVar26,param_2,(int *)&local_348,true,&local_340);
    uVar22 = (uint)local_348;
LAB_1498c8b10:
    if (-1 < (int)uVar22) goto LAB_1498c8b17;
  }
  else {
    if ((int)uVar26 < param_1) {
      uVar22 = *(int *)(lVar3 + 0x78) - 2;
      local_340 = __real_3ff0000000000000;
      if ((int)uVar22 < 0) {
        uVar22 = 0;
      }
      local_348 = (double)CONCAT44(uVar24,uVar22);
      goto LAB_1498c8b10;
    }
LAB_1498c8b17:
    if ((int)uVar22 < *(int *)(lVar3 + 0x78)) goto LAB_1498c8b4b;
  }
  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                     ("InterpPoints.IsValidIndex(PointIndex)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGLandscapeSplineData.cpp"
                      ,0x7f,L"");
  if (bVar18) {
    pcVar4 = (code *)swi(3);
    pTVar21 = (TTransform<double> *)(*pcVar4)();
    return pTVar21;
  }
LAB_1498c8b4b:
  uVar24 = 0;
  if ((int)uVar22 < *(int *)(lVar3 + 0x78)) {
    uVar24 = ~uVar22 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar4 = (code *)swi(3);
    pTVar21 = (TTransform<double> *)(*pcVar4)();
    return pTVar21;
  }
  iVar19 = *(int *)(lVar3 + 0x78);
  uVar24 = iVar19 - 1;
  pdVar25 = (double *)((longlong)(int)uVar22 * 0xe0 + *(longlong *)(lVar3 + 0x70));
  if ((int)(uVar22 + 1) < (int)uVar24) {
    uVar24 = uVar22 + 1;
  }
  uVar26 = 0;
  if ((int)uVar24 < iVar19) {
    uVar26 = ~uVar24 >> 0x1f;
  }
  if ((uVar26 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar4 = (code *)swi(3);
    pTVar21 = (TTransform<double> *)(*pcVar4)();
    return pTVar21;
  }
  dVar30 = pdVar25[6] - *pdVar25;
  dVar1 = pdVar25[1];
  dVar2 = pdVar25[2];
  dVar11 = pdVar25[7] - dVar1;
  dVar10 = pdVar25[8] - dVar2;
  lVar3 = *(longlong *)(lVar3 + 0x70);
  lVar23 = (longlong)(int)uVar24 * 0xe0;
  local_338 = *(double *)(lVar23 + 8 + lVar3) - dVar1;
  local_348 = *(double *)(lVar23 + lVar3) - *pdVar25;
  dVar14 = *(double *)(lVar23 + 0x10 + lVar3) - dVar2;
  dVar13 = *(double *)(lVar23 + 0x30 + lVar3) - *(double *)(lVar23 + lVar3);
  dVar12 = *(double *)(lVar23 + 0x38 + lVar3) - *(double *)(lVar23 + 8 + lVar3);
  dVar31 = *(double *)(lVar23 + 0x40 + lVar3) - *(double *)(lVar23 + 0x10 + lVar3);
  local_320._s_0.X = dVar10 * local_338 - dVar11 * dVar14;
  local_320._s_0.Y = dVar30 * dVar14 - dVar10 * local_348;
  local_320._s_0.Z = dVar11 * local_348 - dVar30 * local_338;
  UE::Math::TVector<double>::GetSafeNormal
            ((TVector<double> *)&local_320._s_0,(TVector<double> *)&local_2f0._s_0,
             __real_3e45798ee0000000,&UE::Math::TVector<double>::ZAxisVector);
  local_308._s_0.X = dVar31 * local_338 - dVar12 * dVar14;
  local_308._s_0.Y = dVar13 * dVar14 - dVar31 * local_348;
  local_308._s_0.Z = dVar12 * local_348 - dVar13 * local_338;
  UE::Math::TVector<double>::GetSafeNormal
            ((TVector<double> *)&local_308._s_0,(TVector<double> *)&local_2d8._s_0,
             __real_3e45798ee0000000,&UE::Math::TVector<double>::ZAxisVector);
  dVar17 = local_330;
  dVar16 = local_338;
  dVar15 = __real_3ff0000000000000;
  local_2b8.M[0][0] = local_348;
  local_2b8.M[0][3] = local_330;
  local_2b8.M[0][1] = local_338;
  local_2b8.M[3][0] = *pdVar25;
  local_2b8.M[1][3] = local_330;
  local_2b8.M[2][0] = local_2f0._s_0.X;
  local_2b8.M[2][1] = local_2f0._s_0.Y;
  local_2b8.M[2][2] = local_2f0._s_0.Z;
  local_2b8.M[2][3] = local_330;
  local_2b8.M[3][3] = __real_3ff0000000000000;
  local_2b8.M[0][2] = dVar14;
  local_2b8.M[1][0] = dVar30;
  local_2b8.M[1][1] = dVar11;
  local_2b8.M[1][2] = dVar10;
  local_2b8.M[3][1] = dVar1;
  local_2b8.M[3][2] = dVar2;
  UE::Math::TTransform<double>::SetFromMatrix(&local_158,&local_2b8);
  local_238.M[3][0] = *(double *)(lVar23 + lVar3);
  local_238.M[3][1] = ((double *)(lVar23 + lVar3))[1];
  local_238.M[0][0] = local_348;
  local_238.M[3][2] = *(double *)(lVar23 + 0x10 + lVar3);
  local_238.M[2][0] = local_2d8._s_0.X;
  local_238.M[2][1] = local_2d8._s_0.Y;
  local_238.M[2][2] = local_2d8._s_0.Z;
  local_238.M[0][1] = dVar16;
  local_238.M[0][3] = dVar17;
  local_238.M[1][3] = dVar17;
  local_238.M[2][3] = dVar17;
  local_238.M[3][3] = dVar15;
  local_238.M[0][2] = dVar14;
  local_238.M[1][0] = dVar13;
  local_238.M[1][1] = dVar12;
  local_238.M[1][2] = dVar31;
  UE::Math::TTransform<double>::SetFromMatrix(&local_1b8,&local_238);
  UE::Math::TTransform<double>::BlendWith(&local_158,&local_1b8,(float)local_340);
  if (local_328 != (TBox<double> *)0x0) {
    dVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    dVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z -
            UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    dVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
            UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_1b8.Translation.ZW.m128d_f64[0]._0_1_ = 1;
    dVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
             UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = CONCAT71(local_1b8.Translation.ZW.m128d_f64[0]._1_7_,1);
    auVar29._8_4_ =
         SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y -
               UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
    auVar29._0_8_ =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X -
         UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    auVar29._12_4_ =
         (int)((ulonglong)
               (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y -
               UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y) >> 0x20);
    *(undefined1 (*) [16])&(local_328->Min).field0_0x0 = auVar29;
    auVar28._8_4_ = SUB84(dVar11,0);
    auVar28._0_8_ = dVar1;
    auVar28._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(local_328->Min).field0_0x0 + 0x10) = auVar28;
    auVar7._8_4_ = SUB84(dVar2,0);
    auVar7._0_8_ = dVar10;
    auVar7._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(local_328->Max).field0_0x0 + 8) = auVar7;
    local_328->IsValid = 1;
    local_328->Pad[0] = (char)local_1b8.Translation.ZW.m128d_f64[0]._1_7_;
    local_328->Pad[1] = (char)((uint7)local_1b8.Translation.ZW.m128d_f64[0]._1_7_ >> 8);
    local_328->Pad[2] = (char)((uint7)local_1b8.Translation.ZW.m128d_f64[0]._1_7_ >> 0x10);
    local_328->Pad[3] = (char)((uint7)local_1b8.Translation.ZW.m128d_f64[0]._1_7_ >> 0x18);
    local_328->Pad[4] = (char)((uint7)local_1b8.Translation.ZW.m128d_f64[0]._1_7_ >> 0x20);
    local_328->Pad[5] = (char)((uint7)local_1b8.Translation.ZW.m128d_f64[0]._1_7_ >> 0x28);
    local_328->Pad[6] = (char)((uint7)local_1b8.Translation.ZW.m128d_f64[0]._1_7_ >> 0x30);
    dVar2 = *(double *)(lVar23 + 0x20 + lVar3) - *(double *)(lVar23 + 8 + lVar3);
    dVar31 = *(double *)(lVar23 + 0x18 + lVar3) - *(double *)(lVar23 + lVar3);
    dVar1 = *(double *)(lVar23 + 0x28 + lVar3) - *(double *)(lVar23 + 0x10 + lVar3);
    dVar11 = *(double *)(lVar23 + 0x50 + lVar3) - *(double *)(lVar23 + 8 + lVar3);
    dVar10 = *(double *)(lVar23 + 0x48 + lVar3) - *(double *)(lVar23 + lVar3);
    dVar30 = *(double *)(lVar23 + 0x58 + lVar3) - *(double *)(lVar23 + 0x10 + lVar3);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar2 * dVar2 + dVar31 * dVar31 + dVar1 * dVar1;
    auVar28 = sqrtpd(auVar27,auVar5);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar11 * dVar11 + dVar10 * dVar10 + dVar30 * dVar30;
    auVar29 = sqrtpd(auVar28,auVar8);
    (local_328->Min).field0_0x0._s_0.Y =
         ((local_328->Min).field0_0x0._s_0.Y / auVar28._0_8_) * auVar29._0_8_;
    dVar2 = *(double *)(lVar23 + 0x38 + lVar3) - *(double *)(lVar23 + 8 + lVar3);
    dVar31 = *(double *)(lVar23 + 0x30 + lVar3) - *(double *)(lVar23 + lVar3);
    dVar1 = *(double *)(lVar23 + 0x40 + lVar3) - *(double *)(lVar23 + 0x10 + lVar3);
    dVar11 = *(double *)(lVar23 + 0x68 + lVar3) - *(double *)(lVar23 + 8 + lVar3);
    dVar10 = *(double *)(lVar23 + 0x60 + lVar3) - *(double *)(lVar23 + lVar3);
    dVar30 = *(double *)(lVar23 + 0x70 + lVar3) - *(double *)(lVar23 + 0x10 + lVar3);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar2 * dVar2 + dVar31 * dVar31 + dVar1 * dVar1;
    auVar28 = sqrtpd(auVar29,auVar6);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = dVar11 * dVar11 + dVar10 * dVar10 + dVar30 * dVar30;
    auVar29 = sqrtpd(auVar28,auVar9);
    (local_328->Max).field0_0x0._s_0.Y =
         ((local_328->Max).field0_0x0._s_0.Y / auVar28._0_8_) * auVar29._0_8_;
  }
  if (param_3) {
    pUVar20 = FWeakObjectPtr::Get(&(this->Spline).WeakPtr);
    UE::Math::TTransform<double>::Multiply
              (&local_158,&local_158,(TTransform<double> *)&pUVar20[0xc].field_0x10);
  }
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_158.Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_158.Rotation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_158.Rotation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_158.Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_158.Translation.XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_158.Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_158.Translation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_158.Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_158.Scale3D.XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_158.Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_158.Scale3D.ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_158.Scale3D.ZW.m128d_f64[1];
  return __return_storage_ptr__;
}

// Initialize @ 1498cc150

void __thiscall
UPCGLandscapeSplineData::Initialize
          (UPCGLandscapeSplineData *this,ULandscapeSplinesComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  ULandscapeSplinesComponent *local_res8;
  
  if (param_1 == (ULandscapeSplinesComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSplineComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGLandscapeSplineData.cpp"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (ULandscapeSplinesComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->Spline).WeakPtr,(FObjectPtr)&local_res8);
  UpdateReparamTable(this);
  return;
}

// PostLoad @ 1498d2940

void __thiscall UPCGLandscapeSplineData::PostLoad(UPCGLandscapeSplineData *this)

{
  UObject::PostLoad((UObject *)this);
  UpdateReparamTable(this);
  return;
}

// SamplePoint @ 1498d9b50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UPCGLandscapeSplineData::SamplePoint
          (UPCGLandscapeSplineData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGPoint *param_3,UPCGMetadata *param_4)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  float fVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  UObject *pUVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  longlong *plVar17;
  TVector<double> *pTVar18;
  TVector<double> *pTVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 extraout_XMM0_Qb;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar36;
  float fVar37;
  undefined4 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 local_128 [4];
  uint local_124;
  TVector<double>_u_0 local_120;
  longlong *local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  
  bVar10 = FWeakObjectPtr::IsValid(&(this->Spline).WeakPtr);
  if (!bVar10) {
    if (this->bLoggedInvalidSpline == false) {
      if (2 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      this->bLoggedInvalidSpline = true;
    }
    return false;
  }
  pUVar13 = FWeakObjectPtr::Get(&(this->Spline).WeakPtr);
  dVar24 = (param_1->Rotation).XY.m128d_f64[1];
  (param_3->Transform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (param_3->Transform).Rotation.XY.m128d_f64[1] = dVar24;
  dVar24 = (param_1->Rotation).ZW.m128d_f64[1];
  (param_3->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (param_3->Transform).Rotation.ZW.m128d_f64[1] = dVar24;
  dVar24 = (param_1->Translation).XY.m128d_f64[1];
  (param_3->Transform).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  (param_3->Transform).Translation.XY.m128d_f64[1] = dVar24;
  dVar24 = (param_1->Translation).ZW.m128d_f64[1];
  (param_3->Transform).Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  (param_3->Transform).Translation.ZW.m128d_f64[1] = dVar24;
  dVar24 = (param_1->Scale3D).XY.m128d_f64[1];
  (param_3->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (param_3->Transform).Scale3D.XY.m128d_f64[1] = dVar24;
  dVar24 = (param_1->Scale3D).ZW.m128d_f64[1];
  (param_3->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  (param_3->Transform).Scale3D.ZW.m128d_f64[1] = dVar24;
  dVar24 = (param_2->Min).field0_0x0._s_0.Y;
  (param_3->BoundsMin).field0_0x0._s_0.X = (param_2->Min).field0_0x0._s_0.X;
  (param_3->BoundsMin).field0_0x0._s_0.Y = dVar24;
  (param_3->BoundsMin).field0_0x0._s_0.Z = (param_2->Min).field0_0x0._s_0.Z;
  dVar24 = (param_2->Max).field0_0x0._s_0.Y;
  (param_3->BoundsMax).field0_0x0._s_0.X = (param_2->Max).field0_0x0._s_0.X;
  (param_3->BoundsMax).field0_0x0._s_0.Y = dVar24;
  (param_3->BoundsMax).field0_0x0._s_0.Z = (param_2->Max).field0_0x0._s_0.Z;
  fVar9 = __real_3f800000;
  uVar8 = __real_3ff0000000000000;
  local_e8 = (param_3->Transform).Translation.ZW.m128d_f64[0];
  local_f8 = (param_3->Transform).Translation.XY.m128d_f64[0];
  dStack_f0 = (param_3->Transform).Translation.XY.m128d_f64[1];
  dVar29 = local_e8 - *(double *)&pUVar13[0xd].field_0x18;
  dVar24 = *(double *)&pUVar13[0xc].field_0x10 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar25 = *(double *)&pUVar13[0xc].field_0x18 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar2 = *(double *)&pUVar13[0xc].field_0x20 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar3 = *(double *)(pUVar13 + 0xd) * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar34._8_4_ = SUB84(dVar25,0);
  auVar34._0_8_ = dVar24;
  auVar34._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
  dVar6 = local_f8 - *(double *)&pUVar13[0xd].field_0x8;
  dVar7 = dStack_f0 - *(double *)&pUVar13[0xd].field_0x10;
  uVar36 = (undefined4)((ulonglong)dVar7 >> 0x20);
  auVar33._8_4_ = SUB84(dVar2,0);
  auVar33._0_8_ = dVar25;
  auVar33._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar45._8_4_ = SUB84(dVar7,0);
  auVar45._0_8_ = dVar6;
  auVar45._12_4_ = uVar36;
  auVar30._8_4_ = SUB84(dVar7,0);
  auVar30._0_8_ = dVar6;
  auVar30._12_4_ = uVar36;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = dVar29;
  auVar31 = blendpd(auVar30,auVar31,2);
  auVar46._0_8_ = auVar45._8_8_ * dVar24 - dVar25 * dVar6;
  auVar46._8_8_ = dVar29 * dVar25 - auVar33._8_8_ * dVar7;
  auVar47._8_4_ = SUB84(dVar3,0);
  auVar47._0_8_ = dVar2;
  auVar47._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  auVar35 = blendpd(auVar34,auVar47,2);
  auVar32._0_8_ = auVar31._0_8_ * dVar2 - auVar35._0_8_ * dVar29;
  auVar32._8_8_ = auVar31._8_8_ * dVar3 - auVar35._8_8_ * 0.0;
  dVar4 = auVar46._8_8_ + auVar46._8_8_;
  dVar5 = auVar32._0_8_ + auVar32._0_8_;
  uVar36 = SUB84(dVar5,0);
  uVar38 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar47 = blendpd(auVar46,auVar32,2);
  auVar48._0_8_ = auVar47._0_8_ + auVar47._0_8_;
  auVar48._8_8_ = auVar47._8_8_ + auVar47._8_8_;
  auVar42._8_4_ = uVar36;
  auVar42._0_8_ = dVar4;
  auVar42._12_4_ = uVar38;
  auVar26._8_4_ = uVar36;
  auVar26._0_8_ = dVar4;
  auVar26._12_4_ = uVar38;
  auVar40._8_4_ = uVar36;
  auVar40._0_8_ = dVar4;
  auVar40._12_4_ = uVar38;
  auVar31 = blendpd(auVar40,auVar48,2);
  auVar43._0_8_ = auVar42._8_8_ * dVar24 - dVar4 * dVar25;
  auVar43._8_8_ = auVar48._0_8_ * dVar25 - auVar26._8_8_ * dVar2;
  auVar47 = *(undefined1 (*) [16])(pUVar13 + 0xe);
  auVar27._8_4_ = SUB84(auVar48._8_8_,0);
  auVar27._0_8_ = auVar48._0_8_;
  auVar27._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
  auVar41._0_8_ = auVar31._0_8_ * dVar2 - auVar48._0_8_ * auVar35._0_8_;
  auVar41._8_8_ = auVar31._8_8_ * dVar3 - auVar27._8_8_ * auVar35._8_8_;
  auVar31 = *(undefined1 (*) [16])&pUVar13[0xe].field_0x10;
  lVar21 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar31._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar31._0_4_) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar47);
  lVar22 = -(ulonglong)
            ((double)CONCAT44(auVar47._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              auVar47._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar23 = -(ulonglong)
            ((double)CONCAT44(auVar47._12_4_ & _UNK_15061cc8c,auVar47._8_4_ & _UNK_15061cc88) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar28._8_4_ = SUB84(auVar43._8_8_,0);
  auVar28._0_8_ = auVar43._0_8_;
  auVar28._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
  auVar35._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar35._0_8_ = auVar31._0_8_;
  auVar35._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar47 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar35);
  auVar31 = blendpd(auVar43,auVar41,2);
  dVar24 = (double)CONCAT44(~(uint)((ulonglong)lVar23 >> 0x20) & auVar33._12_4_,
                            ~(uint)lVar23 & auVar33._8_4_) * (dVar5 * dVar3 + dVar7 + auVar41._0_8_)
  ;
  local_120._8_4_ = SUB84(dVar24,0);
  local_120._s_0.X =
       (double)CONCAT44(~(uint)((ulonglong)lVar22 >> 0x20) & auVar33._4_4_,
                        ~(uint)lVar22 & auVar33._0_4_) * (dVar4 * dVar3 + dVar6 + auVar28._8_8_);
  local_120._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  local_120._s_0.Z =
       (double)CONCAT44(~(uint)((ulonglong)lVar21 >> 0x20) & auVar47._4_4_,
                        ~(uint)lVar21 & auVar47._0_4_) *
       (auVar48._0_8_ * dVar3 + dVar29 + auVar31._0_8_);
  auVar39 = ZEXT816(0);
  local_124 = *(uint *)&pUVar13[0x22].field_0x10;
  uVar14 = (ulonglong)(int)local_124;
  plVar20 = *(longlong **)&pUVar13[0x22].field_0x8;
  plVar17 = plVar20 + uVar14;
  local_108 = plVar17;
  do {
    if (*(int *)&pUVar13[0x22].field_0x10 != (int)uVar14) {
      local_128[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<ULandscapeSplineSegment>_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_128);
    }
    fVar44 = auVar39._0_4_;
    if (plVar20 == plVar17) {
      param_3->Density = fVar44;
      return 0.0 < fVar44;
    }
    lVar21 = *plVar20;
    if ((((*(double *)(lVar21 + 0x80) <= local_120._s_0.X) &&
         (local_120._s_0.X < *(double *)(lVar21 + 0x98) ||
          local_120._s_0.X == *(double *)(lVar21 + 0x98))) &&
        (*(double *)(lVar21 + 0x88) <= local_120._s_0.Y)) &&
       (local_120._s_0.Y < *(double *)(lVar21 + 0xa0) ||
        local_120._s_0.Y == *(double *)(lVar21 + 0xa0))) {
      iVar15 = *(int *)(lVar21 + 0x78);
      uVar16 = 1;
      auVar39 = ZEXT816(0);
      if (1 < iVar15) {
        do {
          uVar12 = 0;
          if ((int)(uVar16 - 1) < iVar15) {
            uVar12 = -uVar16 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar1 = (code *)swi(3);
            uVar11 = (*pcVar1)();
            return (bool)uVar11;
          }
          pTVar19 = (TVector<double> *)
                    ((longlong)(int)(uVar16 - 1) * 0xe0 + *(longlong *)(lVar21 + 0x70));
          uVar12 = 0;
          if ((int)uVar16 < *(int *)(lVar21 + 0x78)) {
            uVar12 = ~uVar16 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar1 = (code *)swi(3);
            uVar11 = (*pcVar1)();
            return (bool)uVar11;
          }
          pTVar18 = (TVector<double> *)((longlong)(int)uVar16 * 0xe0 + *(longlong *)(lVar21 + 0x70))
          ;
          dVar24 = PCGLandscapeDataHelpers::GetDensityInQuad
                             (pTVar19,pTVar18,pTVar18 + 1,pTVar19 + 1,
                              (TVector<double> *)&local_120._s_0);
          if (dVar24 < 0.0) {
            uVar36 = 0;
            uVar38 = 0;
          }
          else {
            uVar36 = (undefined4)uVar8;
            uVar38 = (undefined4)((ulonglong)uVar8 >> 0x20);
          }
          dVar24 = PCGLandscapeDataHelpers::GetDensityInQuad
                             (pTVar19 + 1,pTVar18 + 1,pTVar18 + 3,pTVar19 + 3,
                              (TVector<double> *)&local_120._s_0);
          if (dVar24 <= (double)CONCAT44(uVar38,uVar36)) {
            dVar24 = (double)CONCAT44(uVar38,uVar36);
          }
          dVar25 = PCGLandscapeDataHelpers::GetDensityInQuad
                             (pTVar18,pTVar19,pTVar19 + 2,pTVar18 + 2,
                              (TVector<double> *)&local_120._s_0);
          fVar37 = fVar9;
          if (dVar25 < 0.0) {
            fVar37 = 0.0;
          }
          dVar25 = PCGLandscapeDataHelpers::GetDensityInQuad
                             (pTVar18 + 2,pTVar19 + 2,pTVar19 + 4,pTVar18 + 4,
                              (TVector<double> *)&local_120._s_0);
          iVar15 = *(int *)(lVar21 + 0x78);
          if (fVar37 <= (float)dVar24) {
            fVar37 = (float)dVar24;
          }
          uVar16 = uVar16 + 1;
          if (dVar25 <= (double)fVar37) {
            dVar25 = (double)fVar37;
          }
          fVar37 = (float)dVar25;
          if ((float)dVar25 <= auVar39._0_4_) {
            fVar37 = auVar39._0_4_;
          }
          auVar39._4_4_ = (int)((ulonglong)dVar25 >> 0x20);
          auVar39._0_4_ = fVar37;
          auVar39._8_4_ = (int)extraout_XMM0_Qb;
          auVar39._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
        } while ((int)uVar16 < iVar15);
      }
      plVar17 = local_108;
      if (auVar39._0_4_ <= fVar44) {
        auVar39._0_4_ = fVar44;
      }
    }
    uVar14 = (ulonglong)local_124;
    plVar20 = plVar20 + 1;
  } while( true );
}

// StaticRegisterNativesUPCGLandscapeSplineData @ 1498f6920

void __cdecl UPCGLandscapeSplineData::StaticRegisterNativesUPCGLandscapeSplineData(void)

{
  return;
}

// UpdateReparamTable @ 1498f97c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPCGLandscapeSplineData::UpdateReparamTable(UPCGLandscapeSplineData *this)

{
  FInterpCurveFloat *pFVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  UObject *pUVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  longlong local_res8;
  
  bVar9 = FWeakObjectPtr::IsValid(&(this->Spline).WeakPtr);
  if (bVar9) {
    pUVar13 = FWeakObjectPtr::Get(&(this->Spline).WeakPtr);
    pFVar1 = &this->ReparamTable;
    dVar6 = 0.0;
    iVar10 = *(int *)&(this->ReparamTable).field_0x8;
    iVar2 = *(int *)&pUVar13[0x22].field_0x10;
    if (iVar10 == *(int *)&(this->ReparamTable).field_0xc) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x414,(ForAnyElementType *)pFVar1,(int *)&(this->ReparamTable).field_0xc);
    }
    uVar17 = 0;
    lVar14 = (longlong)iVar10;
    *(int *)&(this->ReparamTable).field_0x8 = iVar10 + 1;
    lVar3 = *(longlong *)pFVar1;
    *(undefined8 *)(lVar3 + lVar14 * 0x14) = 0;
    *(undefined8 *)(lVar3 + lVar14 * 0x14 + 8) = 0;
    *(undefined1 *)(lVar3 + lVar14 * 0x14 + 0x10) = 0;
    dVar8 = __real_3f1a36e2e0000000;
    fVar7 = __real_3f800000;
    if (0 < iVar2) {
      local_res8 = 0;
      do {
        uVar16 = 0;
        if ((int)uVar17 < *(int *)&pUVar13[0x22].field_0x10) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar3 = *(longlong *)&pUVar13[0x22].field_0x8;
        if ((*(longlong *)(lVar3 + local_res8 * 8) == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Segment",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGLandscapeSplineData.cpp"
                               ,0x1c5,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar3 = *(longlong *)(lVar3 + local_res8 * 8);
        uVar16 = 1;
        iVar10 = *(int *)(lVar3 + 0x78);
        if (1 < iVar10) {
          lVar14 = 0xe0;
          do {
            uVar11 = 0;
            if ((int)(uVar16 - 1) < *(int *)(lVar3 + 0x78)) {
              uVar11 = -uVar16 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar4 = *(longlong *)(lVar3 + 0x70);
            uVar11 = 0;
            if ((int)uVar16 < *(int *)(lVar3 + 0x78)) {
              uVar11 = ~uVar16 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar15 = *(longlong *)(lVar3 + 0x70);
            dVar22 = *(double *)(lVar14 + 8 + lVar15) - *(double *)(lVar14 + -0xd8 + lVar4);
            dVar19 = *(double *)(lVar14 + lVar15) - *(double *)(lVar14 + -0xe0 + lVar4);
            dVar18 = *(double *)(lVar14 + 0x10 + lVar15) - *(double *)(lVar14 + -0xd0 + lVar4);
            auVar20._0_8_ = dVar19 * dVar19;
            auVar20._8_8_ = 0;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = dVar22 * dVar22 + auVar20._0_8_ + dVar18 * dVar18;
            auVar21 = sqrtpd(auVar20,auVar21);
            if (dVar8 < auVar21._0_8_) {
              iVar12 = *(int *)&(this->ReparamTable).field_0x8;
              dVar6 = dVar6 + auVar21._0_8_;
              if (iVar12 == *(int *)&(this->ReparamTable).field_0xc) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x414,(ForAnyElementType *)pFVar1,
                                    (int *)&(this->ReparamTable).field_0xc);
              }
              *(int *)&(this->ReparamTable).field_0x8 = iVar12 + 1;
              lVar15 = (longlong)iVar12;
              lVar4 = *(longlong *)pFVar1;
              *(float *)(lVar4 + lVar15 * 0x14) = (float)dVar6;
              *(float *)(lVar4 + lVar15 * 0x14 + 4) =
                   (float)(int)uVar16 / ((float)iVar10 - fVar7) + (float)(int)uVar17;
              *(undefined8 *)(lVar4 + lVar15 * 0x14 + 8) = 0;
              *(undefined1 *)(lVar4 + lVar15 * 0x14 + 0x10) = 0;
            }
            uVar16 = uVar16 + 1;
            lVar14 = lVar14 + 0xe0;
          } while ((int)uVar16 < iVar10);
        }
        local_res8 = local_res8 + 1;
        uVar17 = uVar17 + 1;
      } while (local_res8 < iVar2);
    }
  }
  else if (this->bLoggedInvalidSpline == false) {
    if (2 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    this->bLoggedInvalidSpline = true;
    return;
  }
  return;
}

