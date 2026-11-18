// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 16

// StaticClass @ 149856e90

UClass * __cdecl UPCGPolygon2DInteriorSurfaceData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPolygon2DInteriorSurfaceData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPolygon2DInteriorSurfaceData",
               &Z_Registration_Info_UClass_UPCGPolygon2DInteriorSurfaceData.InnerSingleton,
               StaticRegisterNativesUPCGPolygon2DInteriorSurfaceData,0x1b0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGPolygon2DInteriorSurfaceData>,
               InternalVTableHelperCtorCaller<UPCGPolygon2DInteriorSurfaceData>,local_res8,
               UPCGSurfaceData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPolygon2DInteriorSurfaceData.InnerSingleton;
}

// UPCGPolygon2DInteriorSurfaceData @ 14988e820

UPCGPolygon2DInteriorSurfaceData * __thiscall
UPCGPolygon2DInteriorSurfaceData::UPCGPolygon2DInteriorSurfaceData
          (UPCGPolygon2DInteriorSurfaceData *this,FVTableHelper *param_1)

{
  UPCGSurfaceData::UPCGSurfaceData((UPCGSurfaceData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGPolygon2DInteriorSurfaceData__6B_;
  (this->Polygon).field0_0x0.DebugPtr = (UPCGPolygon2DData *)0x0;
  return this;
}

// UPCGPolygon2DInteriorSurfaceData @ 14988e860

UPCGPolygon2DInteriorSurfaceData * __thiscall
UPCGPolygon2DInteriorSurfaceData::UPCGPolygon2DInteriorSurfaceData
          (UPCGPolygon2DInteriorSurfaceData *this,FObjectInitializer *param_1)

{
  UPCGSurfaceData::UPCGSurfaceData((UPCGSurfaceData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGPolygon2DInteriorSurfaceData__6B_;
  (this->Polygon).field0_0x0.DebugPtr = (UPCGPolygon2DData *)0x0;
  return this;
}

// ~UPCGPolygon2DInteriorSurfaceData @ 149891870

void __thiscall
UPCGPolygon2DInteriorSurfaceData::~UPCGPolygon2DInteriorSurfaceData
          (UPCGPolygon2DInteriorSurfaceData *this)

{
  this->_padding_ = (longlong)&___7UPCGSurfaceData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  return;
}

// AddToCrc @ 14989dfb0

void __thiscall
UPCGPolygon2DInteriorSurfaceData::AddToCrc
          (UPCGPolygon2DInteriorSurfaceData *this,FArchiveCrc32 *param_1,bool param_2)

{
  UPCGPolygon2DData *pUVar1;
  UClass *this_00;
  undefined1 local_res8 [8];
  FString local_18;
  
  UPCGData::AddToCrc((UPCGData *)this,param_1,param_2);
  if ((UPCGMetadata *)this->_padding_ != (UPCGMetadata *)0x0) {
    UPCGMetadata::GetLatestAttributeNameOrNone((UPCGMetadata *)this->_padding_);
    (**(code **)(param_1->_padding_ + 0x178))(param_1,local_res8);
  }
  if ((UPCGMetadata *)this->_padding_ != (UPCGMetadata *)0x0) {
    UPCGMetadata::AddToCrc((UPCGMetadata *)this->_padding_,param_1,param_2);
  }
  this_00 = StaticClass();
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
  ::operator<<((FArchive *)param_1,&local_18);
  pUVar1 = (this->Polygon).field0_0x0.DebugPtr;
  if (pUVar1 != (UPCGPolygon2DData *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x370))(pUVar1,param_1,param_2);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// CopyInternal @ 1498a4b90

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
UPCGPolygon2DInteriorSurfaceData::CopyInternal
          (UPCGPolygon2DInteriorSurfaceData *this,FPCGContext *param_1)

{
  UPCGPolygon2DData *pUVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  UPCGSpatialData *pUVar5;
  UObject *pUVar6;
  UPCGPolygon2DInteriorSurfaceData *pUVar7;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPCGPolygon2DInteriorSurfaceData *local_res18 [2];
  
  if (param_1 == (FPCGContext *)0x0) {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749225>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0xa9,"Context != nullptr || IsInGameThread()");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UPCGSpatialData *)(*pcVar2)();
        return pUVar5;
      }
    }
  }
  else {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4331830188552749348>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x124,"!AsyncState.bIsRunningOnMainThread");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pUVar5 = (UPCGSpatialData *)(*pcVar2)();
          return pUVar5;
        }
      }
      FGCScopeGuard::FGCScopeGuard(local_res8);
      pUVar6 = GetTransientPackageAsObject();
      pUVar7 = NewObject<UPCGPolygon2DInteriorSurfaceData>(pUVar6);
      FGCScopeGuard::~FGCScopeGuard(local_res8);
      if (pUVar7 == (UPCGPolygon2DInteriorSurfaceData *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x12a,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pUVar5 = (UPCGSpatialData *)(*pcVar2)();
          return pUVar5;
        }
      }
      local_res18[0] = pUVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar7 != (UPCGPolygon2DInteriorSurfaceData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)local_res18);
      goto LAB_1498a4bed;
    }
  }
  pUVar6 = GetTransientPackageAsObject();
  pUVar7 = NewObject<UPCGPolygon2DInteriorSurfaceData>(pUVar6);
LAB_1498a4bed:
  lVar3 = this->_padding_;
  pUVar7->_padding_ = this->_padding_;
  pUVar7->_padding_ = lVar3;
  lVar3 = this->_padding_;
  pUVar7->_padding_ = this->_padding_;
  pUVar7->_padding_ = lVar3;
  lVar3 = this->_padding_;
  pUVar7->_padding_ = this->_padding_;
  pUVar7->_padding_ = lVar3;
  lVar3 = this->_padding_;
  pUVar7->_padding_ = this->_padding_;
  pUVar7->_padding_ = lVar3;
  lVar3 = this->_padding_;
  pUVar7->_padding_ = this->_padding_;
  pUVar7->_padding_ = lVar3;
  lVar3 = this->_padding_;
  pUVar7->_padding_ = this->_padding_;
  pUVar7->_padding_ = lVar3;
  *(char *)&pUVar7->_padding_ = (char)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (this->Polygon).field0_0x0.DebugPtr, pUVar1 != (UPCGPolygon2DData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (pUVar7->Polygon).field0_0x0 = (this->Polygon).field0_0x0;
  return (UPCGSpatialData *)pUVar7;
}

// CreateBasePointData @ 1498aa9b0

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

UPCGBasePointData * __thiscall
UPCGPolygon2DInteriorSurfaceData::CreateBasePointData
          (UPCGPolygon2DInteriorSurfaceData *this,FPCGContext *param_1,
          TSubclassOf<UPCGBasePointData> param_2)

{
  TBox<double> *pTVar1;
  UPCGBasePointData *pUVar2;
  bool bVar3;
  undefined1 auStackY_c8 [32];
  UObject *local_98;
  FSurfaceSamplerParams local_90;
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId79,"UPCGPolygon2DInteriorSurfaceData::CreatePointData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPolygon2DInteriorData.cpp"
               ,0x4f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId79);
  }
  local_98 = *(UObject **)param_2.Class.field0_0x0;
  local_90.bUseLegacyGridCreationMethod = false;
  local_90.PointsPerSquaredMeter = 1.0;
  local_90.Looseness = 0.0;
  local_90.bApplyDensityToPoints = false;
  local_90.PointSteepness = 0.0;
  local_90.PointExtents.field0_0x0._8_4_ =
       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * _UNK_150689678,0);
  local_90.PointExtents.field0_0x0._0_8_ =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X *
       ___xmm_3fe00000000000003fe0000000000000;
  local_90.PointExtents.field0_0x0._12_4_ =
       (int)((ulonglong)(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * _UNK_150689678) >>
            0x20);
  local_90.PointExtents.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z *
       ___xmm_3fe00000000000003fe0000000000000;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_98);
  }
  pTVar1 = (TBox<double> *)(**(code **)(this->_padding_ + 0x388))(this,local_60);
  pUVar2 = PCGSurfaceSampler::SampleSurface
                     (param_1,&local_90,(UPCGSurfaceData *)this,(UPCGSpatialData *)0x0,pTVar1,
                      (TSubclassOf<UPCGBasePointData>)&local_98);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar2;
}

// CreatePointArrayData @ 1498add90

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
UPCGPolygon2DInteriorSurfaceData::CreatePointArrayData
          (UPCGPolygon2DInteriorSurfaceData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  UPCGBasePointData *pUVar1;
  UPCGPointArrayData *pUVar2;
  UClass *local_res20;
  
  local_res20 = UPCGPointArrayData::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  pUVar1 = CreateBasePointData(this,param_1,(TSubclassOf<UPCGBasePointData>)&local_res20);
  pUVar2 = CastChecked<UPCGPointArrayData,UPCGBasePointData_const_>(pUVar1);
  return pUVar2;
}

// CreatePointData @ 1498aef90

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
UPCGPolygon2DInteriorSurfaceData::CreatePointData
          (UPCGPolygon2DInteriorSurfaceData *this,FPCGContext *param_1)

{
  UPCGBasePointData *pUVar1;
  UPCGPointData *pUVar2;
  UClass *local_res18 [2];
  
  local_res18[0] = UPCGPointData::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  pUVar1 = CreateBasePointData(this,param_1,(TSubclassOf<UPCGBasePointData>)local_res18);
  pUVar2 = CastChecked<UPCGPointData,UPCGBasePointData_const_>(pUVar1);
  return pUVar2;
}

// GetBounds @ 1498b5c70

TBox<double> * __thiscall
UPCGPolygon2DInteriorSurfaceData::GetBounds
          (UPCGPolygon2DInteriorSurfaceData *this,TBox<double> *__return_storage_ptr__)

{
  UPCGPolygon2DData *pUVar1;
  code *pcVar2;
  bool bVar3;
  TBox<double> *pTVar4;
  
  if ((this->Polygon).field0_0x0.DebugPtr == (UPCGPolygon2DData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Polygon",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPolygon2DInteriorData.cpp"
                       ,0x29,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TBox<double> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pUVar1 = (this->Polygon).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar1 + 0x388))(pUVar1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1498bc950

UClass * __cdecl UPCGPolygon2DInteriorSurfaceData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPolygon2DInteriorSurfaceData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPolygon2DInteriorSurfaceData",
               &Z_Registration_Info_UClass_UPCGPolygon2DInteriorSurfaceData.InnerSingleton,
               StaticRegisterNativesUPCGPolygon2DInteriorSurfaceData,0x1b0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGPolygon2DInteriorSurfaceData>,
               InternalVTableHelperCtorCaller<UPCGPolygon2DInteriorSurfaceData>,local_res8,
               UPCGSurfaceData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPolygon2DInteriorSurfaceData.InnerSingleton;
}

// HasNonTrivialTransform @ 1498ca680

bool __thiscall
UPCGPolygon2DInteriorSurfaceData::HasNonTrivialTransform(UPCGPolygon2DInteriorSurfaceData *this)

{
  return true;
}

// Initialize @ 1498cc1d0

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
UPCGPolygon2DInteriorSurfaceData::Initialize
          (UPCGPolygon2DInteriorSurfaceData *this,FPCGContext *param_1,UPCGPolygon2DData *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2 == (UPCGPolygon2DData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPolygonData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPolygon2DInteriorData.cpp"
                       ,0x10,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UPCGPolygon2DData *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->Polygon).field0_0x0.DebugPtr = param_2;
  return;
}

// ProjectPoint @ 1498d4f60

bool __thiscall
UPCGPolygon2DInteriorSurfaceData::ProjectPoint
          (UPCGPolygon2DInteriorSurfaceData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGProjectionParams *param_3,FPCGPoint *param_4,UPCGMetadata *param_5)

{
  UPCGPolygon2DData *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((this->Polygon).field0_0x0.DebugPtr == (UPCGPolygon2DData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Polygon",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPolygon2DInteriorData.cpp"
                       ,0x35,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pUVar1 = (this->Polygon).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x0001498d4fde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*(longlong *)pUVar1 + 0x3d0))(pUVar1,param_1,param_2,param_3);
  return (bool)uVar4;
}

// SamplePoint @ 1498da6e0

bool __thiscall
UPCGPolygon2DInteriorSurfaceData::SamplePoint
          (UPCGPolygon2DInteriorSurfaceData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGPoint *param_3,UPCGMetadata *param_4)

{
  UPCGPolygon2DData *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((this->Polygon).field0_0x0.DebugPtr == (UPCGPolygon2DData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Polygon",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPolygon2DInteriorData.cpp"
                       ,0x2f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pUVar1 = (this->Polygon).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x0001498da75e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*(longlong *)pUVar1 + 0x3c0))(pUVar1,param_1,param_2,param_3);
  return (bool)uVar4;
}

// StaticRegisterNativesUPCGPolygon2DInteriorSurfaceData @ 1498f69d0

void __cdecl
UPCGPolygon2DInteriorSurfaceData::StaticRegisterNativesUPCGPolygon2DInteriorSurfaceData(void)

{
  return;
}

