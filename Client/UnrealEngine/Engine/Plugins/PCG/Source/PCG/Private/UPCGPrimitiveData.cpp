// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 18

// StaticClass @ 149855e70

UClass * __cdecl UPCGPrimitiveData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPrimitiveData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPrimitiveData",
               &Z_Registration_Info_UClass_UPCGPrimitiveData.InnerSingleton,
               StaticRegisterNativesUPCGPrimitiveData,0x1a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGPrimitiveData>,
               InternalVTableHelperCtorCaller<UPCGPrimitiveData>,local_res8,
               UPCGSpatialDataWithPointCache::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPrimitiveData.InnerSingleton;
}

// UPCGPrimitiveData @ 14988e8a0

UPCGPrimitiveData * __thiscall
UPCGPrimitiveData::UPCGPrimitiveData(UPCGPrimitiveData *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGPrimitiveData__6B_;
  local_res8 = 0;
  (this->VoxelSize).field0_0x0._s_0.X = 100.0;
  (this->VoxelSize).field0_0x0._s_0.Y = 100.0;
  (this->VoxelSize).field0_0x0._s_0.Z = 100.0;
  (this->Primitive).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->Primitive).WeakPtr,(FObjectPtr)&local_res8);
  (this->CachedBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->CachedBounds).IsValid = '\0';
  (this->CachedBounds).Pad[0] = '\0';
  (this->CachedBounds).Pad[1] = '\0';
  (this->CachedBounds).Pad[2] = '\0';
  (this->CachedBounds).Pad[3] = '\0';
  (this->CachedBounds).Pad[4] = '\0';
  (this->CachedBounds).Pad[5] = '\0';
  (this->CachedBounds).Pad[6] = '\0';
  (this->CachedStrictBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->CachedStrictBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->CachedStrictBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->CachedStrictBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->CachedStrictBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->CachedStrictBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->CachedStrictBounds).IsValid = '\0';
  (this->CachedStrictBounds).Pad[0] = '\0';
  (this->CachedStrictBounds).Pad[1] = '\0';
  (this->CachedStrictBounds).Pad[2] = '\0';
  (this->CachedStrictBounds).Pad[3] = '\0';
  (this->CachedStrictBounds).Pad[4] = '\0';
  (this->CachedStrictBounds).Pad[5] = '\0';
  (this->CachedStrictBounds).Pad[6] = '\0';
  return this;
}

// UPCGPrimitiveData @ 14988e9a0

UPCGPrimitiveData * __thiscall
UPCGPrimitiveData::UPCGPrimitiveData(UPCGPrimitiveData *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGPrimitiveData__6B_;
  local_res8 = 0;
  (this->VoxelSize).field0_0x0._s_0.X = 100.0;
  (this->VoxelSize).field0_0x0._s_0.Y = 100.0;
  (this->VoxelSize).field0_0x0._s_0.Z = 100.0;
  (this->Primitive).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->Primitive).WeakPtr,(FObjectPtr)&local_res8);
  (this->CachedBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->CachedBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->CachedBounds).IsValid = '\0';
  (this->CachedBounds).Pad[0] = '\0';
  (this->CachedBounds).Pad[1] = '\0';
  (this->CachedBounds).Pad[2] = '\0';
  (this->CachedBounds).Pad[3] = '\0';
  (this->CachedBounds).Pad[4] = '\0';
  (this->CachedBounds).Pad[5] = '\0';
  (this->CachedBounds).Pad[6] = '\0';
  (this->CachedStrictBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->CachedStrictBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->CachedStrictBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->CachedStrictBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->CachedStrictBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->CachedStrictBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->CachedStrictBounds).IsValid = '\0';
  (this->CachedStrictBounds).Pad[0] = '\0';
  (this->CachedStrictBounds).Pad[1] = '\0';
  (this->CachedStrictBounds).Pad[2] = '\0';
  (this->CachedStrictBounds).Pad[3] = '\0';
  (this->CachedStrictBounds).Pad[4] = '\0';
  (this->CachedStrictBounds).Pad[5] = '\0';
  (this->CachedStrictBounds).Pad[6] = '\0';
  return this;
}

// ~UPCGPrimitiveData @ 149891890

void __thiscall UPCGPrimitiveData::~UPCGPrimitiveData(UPCGPrimitiveData *this)

{
  this->_padding_ = (longlong)&___7UPCGPrimitiveData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  return;
}

// AddToCrc @ 14989e070

void __thiscall
UPCGPrimitiveData::AddToCrc(UPCGPrimitiveData *this,FArchiveCrc32 *param_1,bool param_2)

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

// CopyInternal @ 1498a4d50

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
UPCGPrimitiveData::CopyInternal(UPCGPrimitiveData *this,FPCGContext *param_1)

{
  code *pcVar1;
  double dVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  bool bVar10;
  UPCGSpatialData *pUVar11;
  UObject *pUVar12;
  UPCGPrimitiveData *pUVar13;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPCGPrimitiveData *local_res18 [2];
  
  if (param_1 == (FPCGContext *)0x0) {
    bVar10 = IsInGameThread();
    if (!bVar10) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4331830188552749225>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                          ,0xa9,"Context != nullptr || IsInGameThread()");
      if (bVar10) {
        pcVar1 = (code *)swi(3);
        pUVar11 = (UPCGSpatialData *)(*pcVar1)();
        return pUVar11;
      }
    }
  }
  else {
    bVar10 = IsInGameThread();
    if (!bVar10) {
      if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4331830188552749348>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                            ,0x124,"!AsyncState.bIsRunningOnMainThread");
        if (bVar10) {
          pcVar1 = (code *)swi(3);
          pUVar11 = (UPCGSpatialData *)(*pcVar1)();
          return pUVar11;
        }
      }
      FGCScopeGuard::FGCScopeGuard(local_res8);
      pUVar12 = GetTransientPackageAsObject();
      pUVar13 = NewObject<UPCGPrimitiveData>(pUVar12);
      FGCScopeGuard::~FGCScopeGuard(local_res8);
      if (pUVar13 == (UPCGPrimitiveData *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                            ,0x12a,L"");
        if (bVar10) {
          pcVar1 = (code *)swi(3);
          pUVar11 = (UPCGSpatialData *)(*pcVar1)();
          return pUVar11;
        }
      }
      local_res18[0] = pUVar13;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar13 != (UPCGPrimitiveData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar13);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)local_res18);
      goto LAB_1498a4dad;
    }
  }
  pUVar12 = GetTransientPackageAsObject();
  pUVar13 = NewObject<UPCGPrimitiveData>(pUVar12);
LAB_1498a4dad:
  dVar2 = (this->VoxelSize).field0_0x0._s_0.Y;
  (pUVar13->VoxelSize).field0_0x0._s_0.X = (this->VoxelSize).field0_0x0._s_0.X;
  (pUVar13->VoxelSize).field0_0x0._s_0.Y = dVar2;
  (pUVar13->VoxelSize).field0_0x0._s_0.Z = (this->VoxelSize).field0_0x0._s_0.Z;
  (pUVar13->Primitive).WeakPtr = (this->Primitive).WeakPtr;
  dVar2 = (this->CachedBounds).Min.field0_0x0._s_0.Y;
  (pUVar13->CachedBounds).Min.field0_0x0._s_0.X = (this->CachedBounds).Min.field0_0x0._s_0.X;
  (pUVar13->CachedBounds).Min.field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->CachedBounds).Max.field0_0x0._s_0.X;
  (pUVar13->CachedBounds).Min.field0_0x0._s_0.Z = (this->CachedBounds).Min.field0_0x0._s_0.Z;
  (pUVar13->CachedBounds).Max.field0_0x0._s_0.X = dVar2;
  dVar2 = (this->CachedBounds).Max.field0_0x0._s_0.Z;
  (pUVar13->CachedBounds).Max.field0_0x0._s_0.Y = (this->CachedBounds).Max.field0_0x0._s_0.Y;
  (pUVar13->CachedBounds).Max.field0_0x0._s_0.Z = dVar2;
  uVar3 = (this->CachedBounds).Pad[0];
  uVar4 = (this->CachedBounds).Pad[1];
  uVar5 = (this->CachedBounds).Pad[2];
  uVar6 = (this->CachedBounds).Pad[3];
  uVar7 = (this->CachedBounds).Pad[4];
  uVar8 = (this->CachedBounds).Pad[5];
  uVar9 = (this->CachedBounds).Pad[6];
  (pUVar13->CachedBounds).IsValid = (this->CachedBounds).IsValid;
  (pUVar13->CachedBounds).Pad[0] = uVar3;
  (pUVar13->CachedBounds).Pad[1] = uVar4;
  (pUVar13->CachedBounds).Pad[2] = uVar5;
  (pUVar13->CachedBounds).Pad[3] = uVar6;
  (pUVar13->CachedBounds).Pad[4] = uVar7;
  (pUVar13->CachedBounds).Pad[5] = uVar8;
  (pUVar13->CachedBounds).Pad[6] = uVar9;
  dVar2 = (this->CachedStrictBounds).Min.field0_0x0._s_0.Y;
  (pUVar13->CachedStrictBounds).Min.field0_0x0._s_0.X =
       (this->CachedStrictBounds).Min.field0_0x0._s_0.X;
  (pUVar13->CachedStrictBounds).Min.field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->CachedStrictBounds).Max.field0_0x0._s_0.X;
  (pUVar13->CachedStrictBounds).Min.field0_0x0._s_0.Z =
       (this->CachedStrictBounds).Min.field0_0x0._s_0.Z;
  (pUVar13->CachedStrictBounds).Max.field0_0x0._s_0.X = dVar2;
  dVar2 = (this->CachedStrictBounds).Max.field0_0x0._s_0.Z;
  (pUVar13->CachedStrictBounds).Max.field0_0x0._s_0.Y =
       (this->CachedStrictBounds).Max.field0_0x0._s_0.Y;
  (pUVar13->CachedStrictBounds).Max.field0_0x0._s_0.Z = dVar2;
  uVar3 = (this->CachedStrictBounds).Pad[0];
  uVar4 = (this->CachedStrictBounds).Pad[1];
  uVar5 = (this->CachedStrictBounds).Pad[2];
  uVar6 = (this->CachedStrictBounds).Pad[3];
  uVar7 = (this->CachedStrictBounds).Pad[4];
  uVar8 = (this->CachedStrictBounds).Pad[5];
  uVar9 = (this->CachedStrictBounds).Pad[6];
  (pUVar13->CachedStrictBounds).IsValid = (this->CachedStrictBounds).IsValid;
  (pUVar13->CachedStrictBounds).Pad[0] = uVar3;
  (pUVar13->CachedStrictBounds).Pad[1] = uVar4;
  (pUVar13->CachedStrictBounds).Pad[2] = uVar5;
  (pUVar13->CachedStrictBounds).Pad[3] = uVar6;
  (pUVar13->CachedStrictBounds).Pad[4] = uVar7;
  (pUVar13->CachedStrictBounds).Pad[5] = uVar8;
  (pUVar13->CachedStrictBounds).Pad[6] = uVar9;
  return (UPCGSpatialData *)pUVar13;
}

// CreateBasePointData @ 1498aaaf0

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
UPCGPrimitiveData::CreateBasePointData
          (UPCGPrimitiveData *this,FPCGContext *param_1,TSubclassOf<UPCGBasePointData> param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  UPCGBasePointData *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_f8 [32];
  UObject *local_c8;
  FName local_c0;
  FString local_b8;
  TVector<double>_u_0 local_a8;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_a8._0_4_ = *(undefined4 *)&(this->VoxelSize).field0_0x0;
  local_a8._4_4_ = *(undefined4 *)((longlong)&(this->VoxelSize).field0_0x0 + 4);
  local_a8._8_4_ = *(undefined4 *)((longlong)&(this->VoxelSize).field0_0x0 + 8);
  local_a8._12_4_ = *(undefined4 *)((longlong)&(this->VoxelSize).field0_0x0 + 0xc);
  local_68 = 0;
  uStack_60 = 0;
  local_a8._s_0.Z = (this->VoxelSize).field0_0x0._s_0.Z;
  local_58 = 0;
  puVar3 = (undefined8 *)(**(code **)(this->_padding_ + 0x388))(local_a8._0_4_,local_48);
  local_c8 = *(UObject **)param_2.Class.field0_0x0;
  local_88 = *puVar3;
  uStack_80 = puVar3[1];
  local_78 = puVar3[2];
  uStack_70 = puVar3[3];
  local_68 = puVar3[4];
  uStack_60 = puVar3[5];
  local_58 = puVar3[6];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_c8);
  }
  pUVar4 = PCGVolumeSampler::SampleVolume
                     (param_1,(TSubclassOf<UPCGBasePointData>)&local_c8,
                      (FVolumeSamplerParams *)&local_a8._s_0,(UPCGSpatialData *)this,
                      (UPCGSpatialData *)0x0);
  if (pUVar4 != (UPCGBasePointData *)0x0) {
    pUVar5 = FWeakObjectPtr::Get(&(this->Primitive).WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6934939339000381516>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPrimitiveData.cpp"
                         ,0x4c,"Primitive.Get()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UPCGBasePointData *)(*pcVar1)();
        return pUVar4;
      }
    }
    else if (5 < (byte)LogPCG._0_1_) {
      (**(code **)(pUVar4->_padding_ + 0x488))(pUVar4);
      pUVar5 = FWeakObjectPtr::Get(&(this->Primitive).WeakPtr);
      local_c0.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
      local_c0.Number = *(uint *)&pUVar5->field_0x1c;
      ::FName::ToString(&local_c0,&local_b8);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
  }
  return pUVar4;
}

// CreatePointArrayData @ 1498addf0

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
UPCGPrimitiveData::CreatePointArrayData
          (UPCGPrimitiveData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  int iVar1;
  code *pcVar2;
  UPCGPointArrayData *pUVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  bool bVar8;
  UClass *local_res8;
  FString local_28;
  FString local_18;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId63,"UPCGPrimitiveData::CreatePointArrayData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPrimitiveData.cpp"
               ,0x3f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId63);
  }
  pcVar2 = *(code **)(this->_padding_ + 0x498);
  local_res8 = UPCGPointArrayData::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar3 = (UPCGPointArrayData *)(*pcVar2)(this,param_1,&local_res8);
  if (pUVar3 == (UPCGPointArrayData *)0x0) {
    pUVar3 = (UPCGPointArrayData *)0x0;
  }
  else {
    pUVar4 = UPCGPointArrayData::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) {
      pFVar5 = GetTypeName<UPCGPointArrayData>(&local_28);
      pwVar6 = L"";
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar5 = GetFullNameForCastLogError<UPCGBasePointData_const_>
                         (&local_18,(UPCGBasePointData *)pUVar3);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar7);
    }
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar3;
}

// CreatePointData @ 1498aeff0

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
UPCGPrimitiveData::CreatePointData(UPCGPrimitiveData *this,FPCGContext *param_1)

{
  int iVar1;
  code *pcVar2;
  UPCGPointData *pUVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  bool bVar8;
  UClass *local_res8;
  FString local_28;
  FString local_18;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId56,"UPCGPrimitiveData::CreatePointData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPrimitiveData.cpp"
               ,0x38);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId56);
  }
  pcVar2 = *(code **)(this->_padding_ + 0x498);
  local_res8 = UPCGPointData::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar3 = (UPCGPointData *)(*pcVar2)(this,param_1,&local_res8);
  if (pUVar3 == (UPCGPointData *)0x0) {
    pUVar3 = (UPCGPointData *)0x0;
  }
  else {
    pUVar4 = UPCGPointData::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) {
      pFVar5 = GetTypeName<UPCGPointData>(&local_28);
      pwVar6 = L"";
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar5 = GetFullNameForCastLogError<UPCGBasePointData_const_>
                         (&local_18,(UPCGBasePointData *)pUVar3);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar7);
    }
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar3;
}

// GetBounds @ 1498b5ce0

TBox<double> * __thiscall
UPCGPrimitiveData::GetBounds(UPCGPrimitiveData *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  
  dVar1 = (this->CachedBounds).Min.field0_0x0._s_0.Y;
  dVar2 = (this->CachedBounds).Min.field0_0x0._s_0.Z;
  dVar3 = (this->CachedBounds).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (this->CachedBounds).Min.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->CachedBounds).Max.field0_0x0._s_0.Y;
  dVar4 = (this->CachedBounds).Max.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  uVar5 = (this->CachedBounds).IsValid;
  uVar6 = (this->CachedBounds).Pad[0];
  uVar7 = (this->CachedBounds).Pad[1];
  uVar8 = (this->CachedBounds).Pad[2];
  uVar9 = (this->CachedBounds).Pad[3];
  uVar10 = (this->CachedBounds).Pad[4];
  uVar11 = (this->CachedBounds).Pad[5];
  uVar12 = (this->CachedBounds).Pad[6];
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar4;
  __return_storage_ptr__->IsValid = uVar5;
  __return_storage_ptr__->Pad[0] = uVar6;
  __return_storage_ptr__->Pad[1] = uVar7;
  __return_storage_ptr__->Pad[2] = uVar8;
  __return_storage_ptr__->Pad[3] = uVar9;
  __return_storage_ptr__->Pad[4] = uVar10;
  __return_storage_ptr__->Pad[5] = uVar11;
  __return_storage_ptr__->Pad[6] = uVar12;
  return __return_storage_ptr__;
}

// GetDataType @ 1498b8420

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGPrimitiveData::GetDataType(UPCGPrimitiveData *this)

{
  return Primitive;
}

// GetDataTypeId @ 1498b8be0

FPCGDataTypeBaseId * __thiscall UPCGPrimitiveData::GetDataTypeId(UPCGPrimitiveData *this)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar4;
  
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPrimitive::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPrimitive::AsId(void)'
            ::__l2::Id;
  }
  _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPrimitive::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPrimitive::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPrimitive::AsId(void)'
            ::__l2::Id;
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPrimitive.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPrimitive.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoPrimitive,(UObject *)pUVar3,
                         L"PCGDataTypeInfoPrimitive");
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPrimitive.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14989f4f3;
  }
  else {
LAB_14989f4f3:
    TVar4.DebugPtr = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPrimitive.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfo,(UObject *)pUVar3,
                           L"PCGDataTypeInfo");
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_14989f54a;
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
    if (bVar2) goto LAB_14989f54c;
  }
LAB_14989f54a:
  TVar4.DebugPtr = (UScriptStruct *)0x0;
LAB_14989f54c:
  `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPrimitive::AsId(void)'
  ::__l2::Id.Struct.field0_0x0 =
       (TObjectPtr<UScriptStruct_const_>)(TObjectPtr<UScriptStruct_const_>)TVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar4.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPrimitive::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPrimitive::AsId(void)'
          ::__l2::Id;
}

// GetDimension @ 1498b9a60

int __thiscall UPCGPrimitiveData::GetDimension(UPCGPrimitiveData *this)

{
  return 3;
}

// GetPrivateStaticClass @ 1498bca10

UClass * __cdecl UPCGPrimitiveData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPrimitiveData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPrimitiveData",
               &Z_Registration_Info_UClass_UPCGPrimitiveData.InnerSingleton,
               StaticRegisterNativesUPCGPrimitiveData,0x1a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGPrimitiveData>,
               InternalVTableHelperCtorCaller<UPCGPrimitiveData>,local_res8,
               UPCGSpatialDataWithPointCache::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPrimitiveData.InnerSingleton;
}

// GetStrictBounds @ 1498c7700

TBox<double> * __thiscall
UPCGPrimitiveData::GetStrictBounds(UPCGPrimitiveData *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  
  dVar1 = (this->CachedStrictBounds).Min.field0_0x0._s_0.Y;
  dVar2 = (this->CachedStrictBounds).Min.field0_0x0._s_0.Z;
  dVar3 = (this->CachedStrictBounds).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (this->CachedStrictBounds).Min.field0_0x0._s_0.X
  ;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->CachedStrictBounds).Max.field0_0x0._s_0.Y;
  dVar4 = (this->CachedStrictBounds).Max.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  uVar5 = (this->CachedStrictBounds).IsValid;
  uVar6 = (this->CachedStrictBounds).Pad[0];
  uVar7 = (this->CachedStrictBounds).Pad[1];
  uVar8 = (this->CachedStrictBounds).Pad[2];
  uVar9 = (this->CachedStrictBounds).Pad[3];
  uVar10 = (this->CachedStrictBounds).Pad[4];
  uVar11 = (this->CachedStrictBounds).Pad[5];
  uVar12 = (this->CachedStrictBounds).Pad[6];
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar4;
  __return_storage_ptr__->IsValid = uVar5;
  __return_storage_ptr__->Pad[0] = uVar6;
  __return_storage_ptr__->Pad[1] = uVar7;
  __return_storage_ptr__->Pad[2] = uVar8;
  __return_storage_ptr__->Pad[3] = uVar9;
  __return_storage_ptr__->Pad[4] = uVar10;
  __return_storage_ptr__->Pad[5] = uVar11;
  __return_storage_ptr__->Pad[6] = uVar12;
  return __return_storage_ptr__;
}

// Initialize @ 1498cc240

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UPCGPrimitiveData::Initialize(UPCGPrimitiveData *this,UPrimitiveComponent *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  bool bVar11;
  UObject *pUVar12;
  double dVar13;
  UPrimitiveComponent *local_res8;
  undefined7 uStack_47;
  
  if (param_1 == (UPrimitiveComponent *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InPrimitive",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPrimitiveData.cpp"
                        ,0x12,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->Primitive).WeakPtr,(FObjectPtr)&local_res8);
  pUVar12 = FWeakObjectPtr::Get(&(this->Primitive).WeakPtr);
  dVar1 = *(double *)(pUVar12 + 7);
  dVar2 = *(double *)&pUVar12[7].field_0x8;
  dVar3 = *(double *)&pUVar12[7].field_0x18;
  dVar8 = *(double *)&pUVar12[6].field_0x20 + *(double *)&pUVar12[7].field_0x10;
  dVar4 = *(double *)&pUVar12[7].field_0x20;
  dVar9 = dVar2 + dVar4;
  dVar13 = dVar1 - dVar3;
  auVar7._8_4_ = SUB84(dVar13,0);
  auVar7._0_8_ = *(double *)&pUVar12[6].field_0x20 - *(double *)&pUVar12[7].field_0x10;
  auVar7._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])&(this->CachedBounds).Min.field0_0x0 = auVar7;
  auVar6._8_4_ = SUB84(dVar8,0);
  auVar6._0_8_ = dVar2 - dVar4;
  auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->CachedBounds).Min.field0_0x0 + 0x10) = auVar6;
  auVar10._8_4_ = SUB84(dVar9,0);
  auVar10._0_8_ = dVar1 + dVar3;
  auVar10._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->CachedBounds).Max.field0_0x0 + 8) = auVar10;
  (this->CachedBounds).IsValid = 1;
  (this->CachedBounds).Pad[0] = (char)uStack_47;
  (this->CachedBounds).Pad[1] = (char)((uint7)uStack_47 >> 8);
  (this->CachedBounds).Pad[2] = (char)((uint7)uStack_47 >> 0x10);
  (this->CachedBounds).Pad[3] = (char)((uint7)uStack_47 >> 0x18);
  (this->CachedBounds).Pad[4] = (char)((uint7)uStack_47 >> 0x20);
  (this->CachedBounds).Pad[5] = (char)((uint7)uStack_47 >> 0x28);
  (this->CachedBounds).Pad[6] = (char)((uint7)uStack_47 >> 0x30);
  return;
}

// SamplePoint @ 1498da770

bool __thiscall
UPCGPrimitiveData::SamplePoint
          (UPCGPrimitiveData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGPoint *param_3,UPCGMetadata *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  bool bVar10;
  undefined1 uVar11;
  UObject *pUVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined1 local_d8 [16];
  double local_c8;
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  
  local_98 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_90 = (param_1->Scale3D).XY.m128d_f64[1];
  local_88 = (param_1->Scale3D).ZW.m128d_f64[0];
  dVar8 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar1 = (param_2->Max).field0_0x0._s_0.Y;
  dVar2 = (param_2->Max).field0_0x0._s_0.X;
  local_e8 = 1;
  dVar3 = (param_2->Max).field0_0x0._s_0.Z;
  dStack_78 = (dVar1 + (param_2->Min).field0_0x0._s_0.Y) * __real_3fe0000000000000;
  local_e4 = (float)((dVar2 - (param_2->Min).field0_0x0._s_0.X) * __real_3fe0000000000000 * local_98
                    );
  local_80 = (dVar2 + (param_2->Min).field0_0x0._s_0.X) * __real_3fe0000000000000;
  local_e0 = (float)((dVar1 - (param_2->Min).field0_0x0._s_0.Y) * __real_3fe0000000000000 *
                    dStack_90);
  local_70 = (dVar3 + (param_2->Min).field0_0x0._s_0.Z) * __real_3fe0000000000000;
  local_dc = (float)((dVar3 - (param_2->Min).field0_0x0._s_0.Z) * __real_3fe0000000000000 * local_88
                    );
  auVar20 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  dVar6 = (param_1->Scale3D).XY.m128d_f64[0] * local_80;
  dVar7 = (param_1->Scale3D).XY.m128d_f64[1] * dStack_78;
  uVar21 = (undefined4)((ulonglong)dVar7 >> 0x20);
  local_b8 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar22._8_4_ = SUB84(dVar7,0);
  auVar22._0_8_ = dVar6;
  auVar22._12_4_ = uVar21;
  dVar5 = local_70 * local_88;
  dVar2 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar15 = blendpd(local_b8,auVar20,2);
  dVar1 = auVar20._0_8_;
  auVar23._0_8_ = auVar22._8_8_ * local_b8._0_8_ - local_b8._8_8_ * dVar6;
  auVar23._8_8_ = dVar5 * local_b8._8_8_ - dVar1 * dVar7;
  auVar24._8_4_ = SUB84(dVar7,0);
  auVar24._0_8_ = dVar6;
  auVar24._12_4_ = uVar21;
  auVar13._8_4_ = SUB84(dVar2,0);
  auVar13._0_8_ = dVar5;
  auVar13._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar13 = blendpd(auVar24,auVar13,2);
  auVar14._0_8_ = auVar13._0_8_ * dVar1 - auVar15._0_8_ * dVar5;
  auVar14._8_8_ = auVar13._8_8_ * auVar20._8_8_ - auVar15._8_8_ * dVar2;
  auVar13 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar24 = blendpd(auVar23,auVar14,2);
  dVar2 = auVar23._8_8_ + auVar23._8_8_;
  dVar3 = auVar14._0_8_ + auVar14._0_8_;
  uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar25._0_8_ = auVar24._0_8_ + auVar24._0_8_;
  auVar25._8_8_ = auVar24._8_8_ + auVar24._8_8_;
  auVar18._8_4_ = SUB84(dVar3,0);
  auVar18._0_8_ = dVar2;
  auVar18._12_4_ = uVar21;
  auVar16._8_4_ = SUB84(dVar3,0);
  auVar16._0_8_ = dVar2;
  auVar16._12_4_ = uVar21;
  auVar24 = blendpd(auVar16,auVar25,2);
  auVar19._0_8_ = auVar18._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar2;
  auVar19._8_8_ = auVar25._0_8_ * auVar13._8_8_ - dVar1 * dVar3;
  auVar15._8_4_ = SUB84(auVar19._8_8_,0);
  auVar15._0_8_ = auVar19._0_8_;
  auVar15._12_4_ = (int)((ulonglong)auVar19._8_8_ >> 0x20);
  auVar13 = blendpd(auVar13,auVar20,2);
  auVar17._0_8_ = auVar24._0_8_ * dVar1 - auVar13._0_8_ * auVar25._0_8_;
  auVar17._8_8_ = auVar24._8_8_ * auVar20._8_8_ - auVar13._8_8_ * auVar25._8_8_;
  auVar20 = blendpd(auVar19,auVar17,2);
  dVar1 = dVar3 * dVar8 + dVar7 + auVar17._0_8_ + (param_1->Translation).XY.m128d_f64[1];
  local_c8 = auVar25._0_8_ * dVar8 + dVar5 + auVar20._0_8_ + (param_1->Translation).ZW.m128d_f64[0];
  local_d8._8_4_ = SUB84(dVar1,0);
  local_d8._0_8_ = dVar2 * dVar8 + dVar6 + auVar15._8_8_ + (param_1->Translation).XY.m128d_f64[0];
  local_d8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  pUVar12 = FWeakObjectPtr::Get(&(this->Primitive).WeakPtr);
  if ((pUVar12 == (UObject *)0x0) || ((*(uint *)&pUVar12->field_0x8 >> 0x1e & 1) != 0)) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6934939339000381481>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPrimitiveData.cpp"
                        ,0x29,"IsValid(Primitive.Get())");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      uVar11 = (*pcVar4)();
      return (bool)uVar11;
    }
  }
  else {
    pUVar12 = FWeakObjectPtr::Get(&(this->Primitive).WeakPtr);
    local_b8 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
    local_a8 = (param_1->Rotation).ZW.m128d_f64[0];
    dStack_a0 = (param_1->Rotation).ZW.m128d_f64[1];
    cVar9 = (**(code **)(*(longlong *)pUVar12 + 0xa58))(pUVar12,local_d8,local_b8,&local_e8);
    if (cVar9 != '\0') {
      dVar1 = (param_1->Rotation).XY.m128d_f64[1];
      (param_3->Transform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
      (param_3->Transform).Rotation.XY.m128d_f64[1] = dVar1;
      dVar1 = (param_1->Rotation).ZW.m128d_f64[1];
      (param_3->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
      (param_3->Transform).Rotation.ZW.m128d_f64[1] = dVar1;
      dVar1 = (param_1->Translation).XY.m128d_f64[1];
      (param_3->Transform).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
      (param_3->Transform).Translation.XY.m128d_f64[1] = dVar1;
      dVar1 = (param_1->Translation).ZW.m128d_f64[1];
      (param_3->Transform).Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
      (param_3->Transform).Translation.ZW.m128d_f64[1] = dVar1;
      dVar1 = (param_1->Scale3D).XY.m128d_f64[1];
      (param_3->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
      (param_3->Transform).Scale3D.XY.m128d_f64[1] = dVar1;
      dVar1 = (param_1->Scale3D).ZW.m128d_f64[1];
      (param_3->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
      (param_3->Transform).Scale3D.ZW.m128d_f64[1] = dVar1;
      dVar1 = (param_2->Min).field0_0x0._s_0.Y;
      (param_3->BoundsMin).field0_0x0._s_0.X = (param_2->Min).field0_0x0._s_0.X;
      (param_3->BoundsMin).field0_0x0._s_0.Y = dVar1;
      (param_3->BoundsMin).field0_0x0._s_0.Z = (param_2->Min).field0_0x0._s_0.Z;
      dVar1 = (param_2->Max).field0_0x0._s_0.Y;
      (param_3->BoundsMax).field0_0x0._s_0.X = (param_2->Max).field0_0x0._s_0.X;
      (param_3->BoundsMax).field0_0x0._s_0.Y = dVar1;
      (param_3->BoundsMax).field0_0x0._s_0.Z = (param_2->Max).field0_0x0._s_0.Z;
      param_3->Density = 1.0;
      return true;
    }
  }
  return false;
}

// StaticRegisterNativesUPCGPrimitiveData @ 1498f69e0

void __cdecl UPCGPrimitiveData::StaticRegisterNativesUPCGPrimitiveData(void)

{
  return;
}

