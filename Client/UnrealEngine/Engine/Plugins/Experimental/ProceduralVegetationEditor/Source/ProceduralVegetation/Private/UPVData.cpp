// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 17

// StaticClass @ 14da57950

UClass * __cdecl UPVData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVData",
               &Z_Registration_Info_UClass_UPVData.InnerSingleton,StaticRegisterNativesUPVData,0x180
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPVData>,
               InternalVTableHelperCtorCaller<UPVData>,local_res8,UPCGSpatialData::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVData.InnerSingleton;
}

// UPVData @ 14da66150

UPVData * __thiscall UPVData::UPVData(UPVData *this,FVTableHelper *param_1)

{
  UPCGSpatialData::UPCGSpatialData((UPCGSpatialData *)this,param_1);
  this->_padding_ = (longlong)&___7UPVData__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
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
  return this;
}

// UPVData @ 14da661d0

UPVData * __thiscall UPVData::UPVData(UPVData *this,FObjectInitializer *param_1)

{
  UPCGSpatialData::UPCGSpatialData((UPCGSpatialData *)this,param_1);
  this->_padding_ = (longlong)&___7UPVData__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
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
  return this;
}

// ~UPVData @ 14da67a40

void __thiscall UPVData::~UPVData(UPVData *this)

{
  this->_padding_ = (longlong)&___7UPVData__6B_;
  FManagedArrayCollection::~FManagedArrayCollection(&this->Collection);
  UPCGSpatialData::~UPCGSpatialData((UPCGSpatialData *)this);
  return;
}

// AddToCrc @ 14da6bd20

void __thiscall UPVData::AddToCrc(UPVData *this,FArchiveCrc32 *param_1,bool param_2)

{
  UClass *this_00;
  UScriptStruct *this_01;
  FString local_18;
  
  UPCGSpatialData::AddToCrc((UPCGSpatialData *)this,param_1,param_2);
  if (param_2) {
    this_00 = StaticClass();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
    ::operator<<((FArchive *)param_1,&local_18);
    this_01 = FManagedArrayCollection::StaticStruct();
    UScriptStruct::SerializeItem(this_01,(FArchive *)param_1,&this->Collection,(void *)0x0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  else {
    UPCGData::AddUIDToCrc((UPCGData *)this,param_1);
  }
  return;
}

// CopyInternal @ 14da776a0

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

UPCGSpatialData * __thiscall UPVData::CopyInternal(UPVData *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UPCGSpatialData *pUVar3;
  UObject *pUVar4;
  UPVData *pUVar5;
  undefined1 auStackY_128 [32];
  FGCScopeGuard local_f8 [4];
  undefined1 local_f4 [12];
  TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> local_e8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_d8;
  FManagedArrayCollection local_c8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
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
      FGCScopeGuard::FGCScopeGuard(local_f8);
      pUVar4 = GetTransientPackageAsObject();
      pUVar5 = NewObject<UPVData>(pUVar4);
      FGCScopeGuard::~FGCScopeGuard(local_f8);
      if (pUVar5 == (UPVData *)0x0) {
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
      local_f4._4_8_ = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UPVData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>
                (&param_1->AsyncObjects,(TObjectPtr<UObject> *)local_f4,(bool *)(local_f4 + 4));
      goto LAB_14da77719;
    }
  }
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = NewObject<UPVData>(pUVar4);
LAB_14da77719:
  FManagedArrayCollection::FManagedArrayCollection(&local_c8);
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  FManagedArrayCollection::CopyTo(&this->Collection,&local_c8,&local_d8,&local_e8);
  FManagedArrayCollection::operator=(&pUVar5->Collection,&local_c8);
  FManagedArrayCollection::~FManagedArrayCollection(&local_c8);
  return (UPCGSpatialData *)pUVar5;
}

// GetBounds @ 14da93190

TBox<double> * __thiscall UPVData::GetBounds(UPVData *this,TBox<double> *__return_storage_ptr__)

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

// GetDataType @ 14da944a0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPVData::GetDataType(UPVData *this)

{
  return Other;
}

// GetDimension @ 14da94510

int __thiscall UPVData::GetDimension(UPVData *this)

{
  return 3;
}

// GetPrivateStaticClass @ 14da98fc0

UClass * __cdecl UPVData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVData",
               &Z_Registration_Info_UClass_UPVData.InnerSingleton,StaticRegisterNativesUPVData,0x180
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPVData>,
               InternalVTableHelperCtorCaller<UPVData>,local_res8,UPCGSpatialData::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVData.InnerSingleton;
}

// Initialize @ 14da9acc0

void __thiscall UPVData::Initialize(UPVData *this,FManagedArrayCollection *param_1,bool param_2)

{
  FManagedArrayCollection::operator=(&this->Collection,param_1);
  return;
}

// SamplePoint @ 14daa3100

bool __thiscall
UPVData::SamplePoint
          (UPVData *this,TTransform<double> *param_1,TBox<double> *param_2,FPCGPoint *param_3,
          UPCGMetadata *param_4)

{
  return false;
}

// StaticRegisterNativesUPVData @ 14daa9880

void __cdecl UPVData::StaticRegisterNativesUPVData(void)

{
  return;
}

// SupportsFullDataCrc @ 14daa9a20

bool __thiscall UPVData::SupportsFullDataCrc(UPVData *this)

{
  return true;
}

// ToBasePointData @ 14daa9a30

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
UPVData::ToBasePointData
          (UPVData *this,FPCGContext *param_1,TBox<double> *param_2,
          TSubclassOf<UPCGBasePointData> param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UPackage *pUVar5;
  UPCGBasePointData *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  bool bVar9;
  UPackage *local_res20;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId56,"UPCGPrimitiveData::CreatePointData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\DataTypes\\PVData.cpp"
               ,0x38);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId56);
  }
  pUVar5 = GetTransientPackage();
  local_res20 = pUVar5;
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
    lVar2 = *(longlong *)param_3.Class.field0_0x0;
    pUVar8 = (UClass *)0x0;
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
        pUVar8 = *(UClass **)param_3.Class.field0_0x0;
      }
    }
    pUVar6 = NewObject<UPCGBasePointData>
                       ((UObject *)pUVar5,pUVar8,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  }
  else {
    pUVar6 = FPCGContext::
             NewObject_AnyThread_Impl<UPCGBasePointData,UPackage_*,TSubclassOf<UPCGBasePointData>_&>
                       (param_1,&local_res20,
                        (TSubclassOf<UPCGBasePointData> *)param_3.Class.field0_0x0);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar6;
}

// ToPointArrayData @ 14daa9b90

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
UPVData::ToPointArrayData(UPVData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TObjectPtr<UClass>_u_0 TVar4;
  UPackage *pUVar5;
  UPCGPointArrayData *pUVar6;
  UClass *pUVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  bool bVar11;
  TObjectPtr<UClass>_u_0 local_res20;
  UPackage *local_58;
  FString local_50;
  FString local_40;
  FString local_30;
  
  TVar4.DebugPtr = Z_Construct_UClass_UPCGPointArrayData_NoRegister();
  local_res20.DebugPtr = TVar4.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar4.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId56,"UPCGPrimitiveData::CreatePointData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\DataTypes\\PVData.cpp"
               ,0x38);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId56);
  }
  pUVar5 = GetTransientPackage();
  local_58 = pUVar5;
  if (param_1 != (FPCGContext *)0x0) {
    pUVar6 = (UPCGPointArrayData *)
             FPCGContext::
             NewObject_AnyThread_Impl<UPCGBasePointData,UPackage_*,TSubclassOf<UPCGBasePointData>_&>
                       (param_1,&local_58,(TSubclassOf<UPCGBasePointData> *)&local_res20.ObjectPtr);
    goto LAB_14daa9ce1;
  }
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749225>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0xa9,"Context != nullptr || IsInGameThread()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar6 = (UPCGPointArrayData *)(*pcVar2)();
    return pUVar6;
  }
  if ((TVar4.DebugPtr == (UClass *)0x0) ||
     (pUVar7 = Z_Construct_UClass_UPCGBasePointData_NoRegister(), pUVar7 == (UClass *)0x0)) {
LAB_14daa9c9d:
    TVar4.DebugPtr = (UClass *)0x0;
  }
  else {
    iVar1 = (int)pUVar7->_padding_;
    if (((int)(TVar4.DebugPtr)->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)((TVar4.DebugPtr)->_padding_ + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14daa9c9d;
  }
  pUVar6 = (UPCGPointArrayData *)
           NewObject<UPCGBasePointData>
                     ((UObject *)pUVar5,TVar4.DebugPtr,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
LAB_14daa9ce1:
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (pUVar6 == (UPCGPointArrayData *)0x0) {
    pFVar8 = GetTypeName<UPCGPointArrayData>(&local_50);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar9);
  }
  pUVar7 = Z_Construct_UClass_UPCGPointArrayData_NoRegister();
  iVar1 = (int)pUVar7->_padding_;
  if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar7->_padding_)) {
    return pUVar6;
  }
  pFVar8 = GetTypeName<UPCGPointArrayData>(&local_40);
  pwVar9 = L"";
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  pFVar8 = GetFullNameForCastLogError<UPCGBasePointData_const_>
                     (&local_30,(UPCGBasePointData *)pUVar6);
  if ((pFVar8->Data).ArrayNum != 0) {
    pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar9,pwVar10);
}

// ToPointData @ 14daa9da0

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
UPVData::ToPointData(UPVData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TObjectPtr<UClass>_u_0 TVar4;
  UPackage *pUVar5;
  UPCGPointData *pUVar6;
  UClass *pUVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  bool bVar11;
  TObjectPtr<UClass>_u_0 local_res20;
  UPackage *local_58;
  FString local_50;
  FString local_40;
  FString local_30;
  
  TVar4.DebugPtr = Z_Construct_UClass_UPCGPointData_NoRegister();
  local_res20.DebugPtr = TVar4.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar4.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId56,"UPCGPrimitiveData::CreatePointData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\DataTypes\\PVData.cpp"
               ,0x38);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId56);
  }
  pUVar5 = GetTransientPackage();
  local_58 = pUVar5;
  if (param_1 != (FPCGContext *)0x0) {
    pUVar6 = (UPCGPointData *)
             FPCGContext::
             NewObject_AnyThread_Impl<UPCGBasePointData,UPackage_*,TSubclassOf<UPCGBasePointData>_&>
                       (param_1,&local_58,(TSubclassOf<UPCGBasePointData> *)&local_res20.ObjectPtr);
    goto LAB_14daa9ef1;
  }
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749225>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0xa9,"Context != nullptr || IsInGameThread()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar6 = (UPCGPointData *)(*pcVar2)();
    return pUVar6;
  }
  if ((TVar4.DebugPtr == (UClass *)0x0) ||
     (pUVar7 = Z_Construct_UClass_UPCGBasePointData_NoRegister(), pUVar7 == (UClass *)0x0)) {
LAB_14daa9ead:
    TVar4.DebugPtr = (UClass *)0x0;
  }
  else {
    iVar1 = (int)pUVar7->_padding_;
    if (((int)(TVar4.DebugPtr)->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)((TVar4.DebugPtr)->_padding_ + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14daa9ead;
  }
  pUVar6 = (UPCGPointData *)
           NewObject<UPCGBasePointData>
                     ((UObject *)pUVar5,TVar4.DebugPtr,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
LAB_14daa9ef1:
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (pUVar6 == (UPCGPointData *)0x0) {
    pFVar8 = GetTypeName<UPCGPointData>(&local_50);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar9);
  }
  pUVar7 = Z_Construct_UClass_UPCGPointData_NoRegister();
  iVar1 = (int)pUVar7->_padding_;
  if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar7->_padding_)) {
    return pUVar6;
  }
  pFVar8 = GetTypeName<UPCGPointData>(&local_40);
  pwVar9 = L"";
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  pFVar8 = GetFullNameForCastLogError<UPCGBasePointData_const_>
                     (&local_30,(UPCGBasePointData *)pUVar6);
  if ((pFVar8->Data).ArrayNum != 0) {
    pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar9,pwVar10);
}

